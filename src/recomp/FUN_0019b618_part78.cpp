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


void FUN_0019b618_part78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1c0fa8u: goto label_1c0fa8;
        case 0x1c0facu: goto label_1c0fac;
        case 0x1c0fb0u: goto label_1c0fb0;
        case 0x1c0fb4u: goto label_1c0fb4;
        case 0x1c0fb8u: goto label_1c0fb8;
        case 0x1c0fbcu: goto label_1c0fbc;
        case 0x1c0fc0u: goto label_1c0fc0;
        case 0x1c0fc4u: goto label_1c0fc4;
        case 0x1c0fc8u: goto label_1c0fc8;
        case 0x1c0fccu: goto label_1c0fcc;
        case 0x1c0fd0u: goto label_1c0fd0;
        case 0x1c0fd4u: goto label_1c0fd4;
        case 0x1c0fd8u: goto label_1c0fd8;
        case 0x1c0fdcu: goto label_1c0fdc;
        case 0x1c0fe0u: goto label_1c0fe0;
        case 0x1c0fe4u: goto label_1c0fe4;
        case 0x1c0fe8u: goto label_1c0fe8;
        case 0x1c0fecu: goto label_1c0fec;
        case 0x1c0ff0u: goto label_1c0ff0;
        case 0x1c0ff4u: goto label_1c0ff4;
        case 0x1c0ff8u: goto label_1c0ff8;
        case 0x1c0ffcu: goto label_1c0ffc;
        case 0x1c1000u: goto label_1c1000;
        case 0x1c1004u: goto label_1c1004;
        case 0x1c1008u: goto label_1c1008;
        case 0x1c100cu: goto label_1c100c;
        case 0x1c1010u: goto label_1c1010;
        case 0x1c1014u: goto label_1c1014;
        case 0x1c1018u: goto label_1c1018;
        case 0x1c101cu: goto label_1c101c;
        case 0x1c1020u: goto label_1c1020;
        case 0x1c1024u: goto label_1c1024;
        case 0x1c1028u: goto label_1c1028;
        case 0x1c102cu: goto label_1c102c;
        case 0x1c1030u: goto label_1c1030;
        case 0x1c1034u: goto label_1c1034;
        case 0x1c1038u: goto label_1c1038;
        case 0x1c103cu: goto label_1c103c;
        case 0x1c1040u: goto label_1c1040;
        case 0x1c1044u: goto label_1c1044;
        case 0x1c1048u: goto label_1c1048;
        case 0x1c104cu: goto label_1c104c;
        case 0x1c1050u: goto label_1c1050;
        case 0x1c1054u: goto label_1c1054;
        case 0x1c1058u: goto label_1c1058;
        case 0x1c105cu: goto label_1c105c;
        case 0x1c1060u: goto label_1c1060;
        case 0x1c1064u: goto label_1c1064;
        case 0x1c1068u: goto label_1c1068;
        case 0x1c106cu: goto label_1c106c;
        case 0x1c1070u: goto label_1c1070;
        case 0x1c1074u: goto label_1c1074;
        case 0x1c1078u: goto label_1c1078;
        case 0x1c107cu: goto label_1c107c;
        case 0x1c1080u: goto label_1c1080;
        case 0x1c1084u: goto label_1c1084;
        case 0x1c1088u: goto label_1c1088;
        case 0x1c108cu: goto label_1c108c;
        case 0x1c1090u: goto label_1c1090;
        case 0x1c1094u: goto label_1c1094;
        case 0x1c1098u: goto label_1c1098;
        case 0x1c109cu: goto label_1c109c;
        case 0x1c10a0u: goto label_1c10a0;
        case 0x1c10a4u: goto label_1c10a4;
        case 0x1c10a8u: goto label_1c10a8;
        case 0x1c10acu: goto label_1c10ac;
        case 0x1c10b0u: goto label_1c10b0;
        case 0x1c10b4u: goto label_1c10b4;
        case 0x1c10b8u: goto label_1c10b8;
        case 0x1c10bcu: goto label_1c10bc;
        case 0x1c10c0u: goto label_1c10c0;
        case 0x1c10c4u: goto label_1c10c4;
        case 0x1c10c8u: goto label_1c10c8;
        case 0x1c10ccu: goto label_1c10cc;
        case 0x1c10d0u: goto label_1c10d0;
        case 0x1c10d4u: goto label_1c10d4;
        case 0x1c10d8u: goto label_1c10d8;
        case 0x1c10dcu: goto label_1c10dc;
        case 0x1c10e0u: goto label_1c10e0;
        case 0x1c10e4u: goto label_1c10e4;
        case 0x1c10e8u: goto label_1c10e8;
        case 0x1c10ecu: goto label_1c10ec;
        case 0x1c10f0u: goto label_1c10f0;
        case 0x1c10f4u: goto label_1c10f4;
        case 0x1c10f8u: goto label_1c10f8;
        case 0x1c10fcu: goto label_1c10fc;
        case 0x1c1100u: goto label_1c1100;
        case 0x1c1104u: goto label_1c1104;
        case 0x1c1108u: goto label_1c1108;
        case 0x1c110cu: goto label_1c110c;
        case 0x1c1110u: goto label_1c1110;
        case 0x1c1114u: goto label_1c1114;
        case 0x1c1118u: goto label_1c1118;
        case 0x1c111cu: goto label_1c111c;
        case 0x1c1120u: goto label_1c1120;
        case 0x1c1124u: goto label_1c1124;
        case 0x1c1128u: goto label_1c1128;
        case 0x1c112cu: goto label_1c112c;
        case 0x1c1130u: goto label_1c1130;
        case 0x1c1134u: goto label_1c1134;
        case 0x1c1138u: goto label_1c1138;
        case 0x1c113cu: goto label_1c113c;
        case 0x1c1140u: goto label_1c1140;
        case 0x1c1144u: goto label_1c1144;
        case 0x1c1148u: goto label_1c1148;
        case 0x1c114cu: goto label_1c114c;
        case 0x1c1150u: goto label_1c1150;
        case 0x1c1154u: goto label_1c1154;
        case 0x1c1158u: goto label_1c1158;
        case 0x1c115cu: goto label_1c115c;
        case 0x1c1160u: goto label_1c1160;
        case 0x1c1164u: goto label_1c1164;
        case 0x1c1168u: goto label_1c1168;
        case 0x1c116cu: goto label_1c116c;
        case 0x1c1170u: goto label_1c1170;
        case 0x1c1174u: goto label_1c1174;
        case 0x1c1178u: goto label_1c1178;
        case 0x1c117cu: goto label_1c117c;
        case 0x1c1180u: goto label_1c1180;
        case 0x1c1184u: goto label_1c1184;
        case 0x1c1188u: goto label_1c1188;
        case 0x1c118cu: goto label_1c118c;
        case 0x1c1190u: goto label_1c1190;
        case 0x1c1194u: goto label_1c1194;
        case 0x1c1198u: goto label_1c1198;
        case 0x1c119cu: goto label_1c119c;
        case 0x1c11a0u: goto label_1c11a0;
        case 0x1c11a4u: goto label_1c11a4;
        case 0x1c11a8u: goto label_1c11a8;
        case 0x1c11acu: goto label_1c11ac;
        case 0x1c11b0u: goto label_1c11b0;
        case 0x1c11b4u: goto label_1c11b4;
        case 0x1c11b8u: goto label_1c11b8;
        case 0x1c11bcu: goto label_1c11bc;
        case 0x1c11c0u: goto label_1c11c0;
        case 0x1c11c4u: goto label_1c11c4;
        case 0x1c11c8u: goto label_1c11c8;
        case 0x1c11ccu: goto label_1c11cc;
        case 0x1c11d0u: goto label_1c11d0;
        case 0x1c11d4u: goto label_1c11d4;
        case 0x1c11d8u: goto label_1c11d8;
        case 0x1c11dcu: goto label_1c11dc;
        case 0x1c11e0u: goto label_1c11e0;
        case 0x1c11e4u: goto label_1c11e4;
        case 0x1c11e8u: goto label_1c11e8;
        case 0x1c11ecu: goto label_1c11ec;
        case 0x1c11f0u: goto label_1c11f0;
        case 0x1c11f4u: goto label_1c11f4;
        case 0x1c11f8u: goto label_1c11f8;
        case 0x1c11fcu: goto label_1c11fc;
        case 0x1c1200u: goto label_1c1200;
        case 0x1c1204u: goto label_1c1204;
        case 0x1c1208u: goto label_1c1208;
        case 0x1c120cu: goto label_1c120c;
        case 0x1c1210u: goto label_1c1210;
        case 0x1c1214u: goto label_1c1214;
        case 0x1c1218u: goto label_1c1218;
        case 0x1c121cu: goto label_1c121c;
        case 0x1c1220u: goto label_1c1220;
        case 0x1c1224u: goto label_1c1224;
        case 0x1c1228u: goto label_1c1228;
        case 0x1c122cu: goto label_1c122c;
        case 0x1c1230u: goto label_1c1230;
        case 0x1c1234u: goto label_1c1234;
        case 0x1c1238u: goto label_1c1238;
        case 0x1c123cu: goto label_1c123c;
        case 0x1c1240u: goto label_1c1240;
        case 0x1c1244u: goto label_1c1244;
        case 0x1c1248u: goto label_1c1248;
        case 0x1c124cu: goto label_1c124c;
        case 0x1c1250u: goto label_1c1250;
        case 0x1c1254u: goto label_1c1254;
        case 0x1c1258u: goto label_1c1258;
        case 0x1c125cu: goto label_1c125c;
        case 0x1c1260u: goto label_1c1260;
        case 0x1c1264u: goto label_1c1264;
        case 0x1c1268u: goto label_1c1268;
        case 0x1c126cu: goto label_1c126c;
        case 0x1c1270u: goto label_1c1270;
        case 0x1c1274u: goto label_1c1274;
        case 0x1c1278u: goto label_1c1278;
        case 0x1c127cu: goto label_1c127c;
        case 0x1c1280u: goto label_1c1280;
        case 0x1c1284u: goto label_1c1284;
        case 0x1c1288u: goto label_1c1288;
        case 0x1c128cu: goto label_1c128c;
        case 0x1c1290u: goto label_1c1290;
        case 0x1c1294u: goto label_1c1294;
        case 0x1c1298u: goto label_1c1298;
        case 0x1c129cu: goto label_1c129c;
        case 0x1c12a0u: goto label_1c12a0;
        case 0x1c12a4u: goto label_1c12a4;
        case 0x1c12a8u: goto label_1c12a8;
        case 0x1c12acu: goto label_1c12ac;
        case 0x1c12b0u: goto label_1c12b0;
        case 0x1c12b4u: goto label_1c12b4;
        case 0x1c12b8u: goto label_1c12b8;
        case 0x1c12bcu: goto label_1c12bc;
        case 0x1c12c0u: goto label_1c12c0;
        case 0x1c12c4u: goto label_1c12c4;
        case 0x1c12c8u: goto label_1c12c8;
        case 0x1c12ccu: goto label_1c12cc;
        case 0x1c12d0u: goto label_1c12d0;
        case 0x1c12d4u: goto label_1c12d4;
        case 0x1c12d8u: goto label_1c12d8;
        case 0x1c12dcu: goto label_1c12dc;
        case 0x1c12e0u: goto label_1c12e0;
        case 0x1c12e4u: goto label_1c12e4;
        case 0x1c12e8u: goto label_1c12e8;
        case 0x1c12ecu: goto label_1c12ec;
        case 0x1c12f0u: goto label_1c12f0;
        case 0x1c12f4u: goto label_1c12f4;
        case 0x1c12f8u: goto label_1c12f8;
        case 0x1c12fcu: goto label_1c12fc;
        case 0x1c1300u: goto label_1c1300;
        case 0x1c1304u: goto label_1c1304;
        case 0x1c1308u: goto label_1c1308;
        case 0x1c130cu: goto label_1c130c;
        case 0x1c1310u: goto label_1c1310;
        case 0x1c1314u: goto label_1c1314;
        case 0x1c1318u: goto label_1c1318;
        case 0x1c131cu: goto label_1c131c;
        case 0x1c1320u: goto label_1c1320;
        case 0x1c1324u: goto label_1c1324;
        case 0x1c1328u: goto label_1c1328;
        case 0x1c132cu: goto label_1c132c;
        case 0x1c1330u: goto label_1c1330;
        case 0x1c1334u: goto label_1c1334;
        case 0x1c1338u: goto label_1c1338;
        case 0x1c133cu: goto label_1c133c;
        case 0x1c1340u: goto label_1c1340;
        case 0x1c1344u: goto label_1c1344;
        case 0x1c1348u: goto label_1c1348;
        case 0x1c134cu: goto label_1c134c;
        case 0x1c1350u: goto label_1c1350;
        case 0x1c1354u: goto label_1c1354;
        case 0x1c1358u: goto label_1c1358;
        case 0x1c135cu: goto label_1c135c;
        case 0x1c1360u: goto label_1c1360;
        case 0x1c1364u: goto label_1c1364;
        case 0x1c1368u: goto label_1c1368;
        case 0x1c136cu: goto label_1c136c;
        case 0x1c1370u: goto label_1c1370;
        case 0x1c1374u: goto label_1c1374;
        case 0x1c1378u: goto label_1c1378;
        case 0x1c137cu: goto label_1c137c;
        case 0x1c1380u: goto label_1c1380;
        case 0x1c1384u: goto label_1c1384;
        case 0x1c1388u: goto label_1c1388;
        case 0x1c138cu: goto label_1c138c;
        case 0x1c1390u: goto label_1c1390;
        case 0x1c1394u: goto label_1c1394;
        case 0x1c1398u: goto label_1c1398;
        case 0x1c139cu: goto label_1c139c;
        case 0x1c13a0u: goto label_1c13a0;
        case 0x1c13a4u: goto label_1c13a4;
        case 0x1c13a8u: goto label_1c13a8;
        case 0x1c13acu: goto label_1c13ac;
        case 0x1c13b0u: goto label_1c13b0;
        case 0x1c13b4u: goto label_1c13b4;
        case 0x1c13b8u: goto label_1c13b8;
        case 0x1c13bcu: goto label_1c13bc;
        case 0x1c13c0u: goto label_1c13c0;
        case 0x1c13c4u: goto label_1c13c4;
        case 0x1c13c8u: goto label_1c13c8;
        case 0x1c13ccu: goto label_1c13cc;
        case 0x1c13d0u: goto label_1c13d0;
        case 0x1c13d4u: goto label_1c13d4;
        case 0x1c13d8u: goto label_1c13d8;
        case 0x1c13dcu: goto label_1c13dc;
        case 0x1c13e0u: goto label_1c13e0;
        case 0x1c13e4u: goto label_1c13e4;
        case 0x1c13e8u: goto label_1c13e8;
        case 0x1c13ecu: goto label_1c13ec;
        case 0x1c13f0u: goto label_1c13f0;
        case 0x1c13f4u: goto label_1c13f4;
        case 0x1c13f8u: goto label_1c13f8;
        case 0x1c13fcu: goto label_1c13fc;
        case 0x1c1400u: goto label_1c1400;
        case 0x1c1404u: goto label_1c1404;
        case 0x1c1408u: goto label_1c1408;
        case 0x1c140cu: goto label_1c140c;
        case 0x1c1410u: goto label_1c1410;
        case 0x1c1414u: goto label_1c1414;
        case 0x1c1418u: goto label_1c1418;
        case 0x1c141cu: goto label_1c141c;
        case 0x1c1420u: goto label_1c1420;
        case 0x1c1424u: goto label_1c1424;
        case 0x1c1428u: goto label_1c1428;
        case 0x1c142cu: goto label_1c142c;
        case 0x1c1430u: goto label_1c1430;
        case 0x1c1434u: goto label_1c1434;
        case 0x1c1438u: goto label_1c1438;
        case 0x1c143cu: goto label_1c143c;
        case 0x1c1440u: goto label_1c1440;
        case 0x1c1444u: goto label_1c1444;
        case 0x1c1448u: goto label_1c1448;
        case 0x1c144cu: goto label_1c144c;
        case 0x1c1450u: goto label_1c1450;
        case 0x1c1454u: goto label_1c1454;
        case 0x1c1458u: goto label_1c1458;
        case 0x1c145cu: goto label_1c145c;
        case 0x1c1460u: goto label_1c1460;
        case 0x1c1464u: goto label_1c1464;
        case 0x1c1468u: goto label_1c1468;
        case 0x1c146cu: goto label_1c146c;
        case 0x1c1470u: goto label_1c1470;
        case 0x1c1474u: goto label_1c1474;
        case 0x1c1478u: goto label_1c1478;
        case 0x1c147cu: goto label_1c147c;
        case 0x1c1480u: goto label_1c1480;
        case 0x1c1484u: goto label_1c1484;
        case 0x1c1488u: goto label_1c1488;
        case 0x1c148cu: goto label_1c148c;
        case 0x1c1490u: goto label_1c1490;
        case 0x1c1494u: goto label_1c1494;
        case 0x1c1498u: goto label_1c1498;
        case 0x1c149cu: goto label_1c149c;
        case 0x1c14a0u: goto label_1c14a0;
        case 0x1c14a4u: goto label_1c14a4;
        case 0x1c14a8u: goto label_1c14a8;
        case 0x1c14acu: goto label_1c14ac;
        case 0x1c14b0u: goto label_1c14b0;
        case 0x1c14b4u: goto label_1c14b4;
        case 0x1c14b8u: goto label_1c14b8;
        case 0x1c14bcu: goto label_1c14bc;
        case 0x1c14c0u: goto label_1c14c0;
        case 0x1c14c4u: goto label_1c14c4;
        case 0x1c14c8u: goto label_1c14c8;
        case 0x1c14ccu: goto label_1c14cc;
        case 0x1c14d0u: goto label_1c14d0;
        case 0x1c14d4u: goto label_1c14d4;
        case 0x1c14d8u: goto label_1c14d8;
        case 0x1c14dcu: goto label_1c14dc;
        case 0x1c14e0u: goto label_1c14e0;
        case 0x1c14e4u: goto label_1c14e4;
        case 0x1c14e8u: goto label_1c14e8;
        case 0x1c14ecu: goto label_1c14ec;
        case 0x1c14f0u: goto label_1c14f0;
        case 0x1c14f4u: goto label_1c14f4;
        case 0x1c14f8u: goto label_1c14f8;
        case 0x1c14fcu: goto label_1c14fc;
        case 0x1c1500u: goto label_1c1500;
        case 0x1c1504u: goto label_1c1504;
        case 0x1c1508u: goto label_1c1508;
        case 0x1c150cu: goto label_1c150c;
        case 0x1c1510u: goto label_1c1510;
        case 0x1c1514u: goto label_1c1514;
        case 0x1c1518u: goto label_1c1518;
        case 0x1c151cu: goto label_1c151c;
        case 0x1c1520u: goto label_1c1520;
        case 0x1c1524u: goto label_1c1524;
        case 0x1c1528u: goto label_1c1528;
        case 0x1c152cu: goto label_1c152c;
        case 0x1c1530u: goto label_1c1530;
        case 0x1c1534u: goto label_1c1534;
        case 0x1c1538u: goto label_1c1538;
        case 0x1c153cu: goto label_1c153c;
        case 0x1c1540u: goto label_1c1540;
        case 0x1c1544u: goto label_1c1544;
        case 0x1c1548u: goto label_1c1548;
        case 0x1c154cu: goto label_1c154c;
        case 0x1c1550u: goto label_1c1550;
        case 0x1c1554u: goto label_1c1554;
        case 0x1c1558u: goto label_1c1558;
        case 0x1c155cu: goto label_1c155c;
        case 0x1c1560u: goto label_1c1560;
        case 0x1c1564u: goto label_1c1564;
        case 0x1c1568u: goto label_1c1568;
        case 0x1c156cu: goto label_1c156c;
        case 0x1c1570u: goto label_1c1570;
        case 0x1c1574u: goto label_1c1574;
        case 0x1c1578u: goto label_1c1578;
        case 0x1c157cu: goto label_1c157c;
        case 0x1c1580u: goto label_1c1580;
        case 0x1c1584u: goto label_1c1584;
        case 0x1c1588u: goto label_1c1588;
        case 0x1c158cu: goto label_1c158c;
        case 0x1c1590u: goto label_1c1590;
        case 0x1c1594u: goto label_1c1594;
        case 0x1c1598u: goto label_1c1598;
        case 0x1c159cu: goto label_1c159c;
        case 0x1c15a0u: goto label_1c15a0;
        case 0x1c15a4u: goto label_1c15a4;
        case 0x1c15a8u: goto label_1c15a8;
        case 0x1c15acu: goto label_1c15ac;
        case 0x1c15b0u: goto label_1c15b0;
        case 0x1c15b4u: goto label_1c15b4;
        case 0x1c15b8u: goto label_1c15b8;
        case 0x1c15bcu: goto label_1c15bc;
        case 0x1c15c0u: goto label_1c15c0;
        case 0x1c15c4u: goto label_1c15c4;
        case 0x1c15c8u: goto label_1c15c8;
        case 0x1c15ccu: goto label_1c15cc;
        case 0x1c15d0u: goto label_1c15d0;
        case 0x1c15d4u: goto label_1c15d4;
        case 0x1c15d8u: goto label_1c15d8;
        case 0x1c15dcu: goto label_1c15dc;
        case 0x1c15e0u: goto label_1c15e0;
        case 0x1c15e4u: goto label_1c15e4;
        case 0x1c15e8u: goto label_1c15e8;
        case 0x1c15ecu: goto label_1c15ec;
        case 0x1c15f0u: goto label_1c15f0;
        case 0x1c15f4u: goto label_1c15f4;
        case 0x1c15f8u: goto label_1c15f8;
        case 0x1c15fcu: goto label_1c15fc;
        case 0x1c1600u: goto label_1c1600;
        case 0x1c1604u: goto label_1c1604;
        case 0x1c1608u: goto label_1c1608;
        case 0x1c160cu: goto label_1c160c;
        case 0x1c1610u: goto label_1c1610;
        case 0x1c1614u: goto label_1c1614;
        case 0x1c1618u: goto label_1c1618;
        case 0x1c161cu: goto label_1c161c;
        case 0x1c1620u: goto label_1c1620;
        case 0x1c1624u: goto label_1c1624;
        case 0x1c1628u: goto label_1c1628;
        case 0x1c162cu: goto label_1c162c;
        case 0x1c1630u: goto label_1c1630;
        case 0x1c1634u: goto label_1c1634;
        case 0x1c1638u: goto label_1c1638;
        case 0x1c163cu: goto label_1c163c;
        case 0x1c1640u: goto label_1c1640;
        case 0x1c1644u: goto label_1c1644;
        case 0x1c1648u: goto label_1c1648;
        case 0x1c164cu: goto label_1c164c;
        case 0x1c1650u: goto label_1c1650;
        case 0x1c1654u: goto label_1c1654;
        case 0x1c1658u: goto label_1c1658;
        case 0x1c165cu: goto label_1c165c;
        case 0x1c1660u: goto label_1c1660;
        case 0x1c1664u: goto label_1c1664;
        case 0x1c1668u: goto label_1c1668;
        case 0x1c166cu: goto label_1c166c;
        case 0x1c1670u: goto label_1c1670;
        case 0x1c1674u: goto label_1c1674;
        case 0x1c1678u: goto label_1c1678;
        case 0x1c167cu: goto label_1c167c;
        case 0x1c1680u: goto label_1c1680;
        case 0x1c1684u: goto label_1c1684;
        case 0x1c1688u: goto label_1c1688;
        case 0x1c168cu: goto label_1c168c;
        case 0x1c1690u: goto label_1c1690;
        case 0x1c1694u: goto label_1c1694;
        case 0x1c1698u: goto label_1c1698;
        case 0x1c169cu: goto label_1c169c;
        case 0x1c16a0u: goto label_1c16a0;
        case 0x1c16a4u: goto label_1c16a4;
        case 0x1c16a8u: goto label_1c16a8;
        case 0x1c16acu: goto label_1c16ac;
        case 0x1c16b0u: goto label_1c16b0;
        case 0x1c16b4u: goto label_1c16b4;
        case 0x1c16b8u: goto label_1c16b8;
        case 0x1c16bcu: goto label_1c16bc;
        case 0x1c16c0u: goto label_1c16c0;
        case 0x1c16c4u: goto label_1c16c4;
        case 0x1c16c8u: goto label_1c16c8;
        case 0x1c16ccu: goto label_1c16cc;
        case 0x1c16d0u: goto label_1c16d0;
        case 0x1c16d4u: goto label_1c16d4;
        case 0x1c16d8u: goto label_1c16d8;
        case 0x1c16dcu: goto label_1c16dc;
        case 0x1c16e0u: goto label_1c16e0;
        case 0x1c16e4u: goto label_1c16e4;
        case 0x1c16e8u: goto label_1c16e8;
        case 0x1c16ecu: goto label_1c16ec;
        case 0x1c16f0u: goto label_1c16f0;
        case 0x1c16f4u: goto label_1c16f4;
        case 0x1c16f8u: goto label_1c16f8;
        case 0x1c16fcu: goto label_1c16fc;
        case 0x1c1700u: goto label_1c1700;
        case 0x1c1704u: goto label_1c1704;
        case 0x1c1708u: goto label_1c1708;
        case 0x1c170cu: goto label_1c170c;
        case 0x1c1710u: goto label_1c1710;
        case 0x1c1714u: goto label_1c1714;
        case 0x1c1718u: goto label_1c1718;
        case 0x1c171cu: goto label_1c171c;
        case 0x1c1720u: goto label_1c1720;
        case 0x1c1724u: goto label_1c1724;
        case 0x1c1728u: goto label_1c1728;
        case 0x1c172cu: goto label_1c172c;
        case 0x1c1730u: goto label_1c1730;
        case 0x1c1734u: goto label_1c1734;
        case 0x1c1738u: goto label_1c1738;
        case 0x1c173cu: goto label_1c173c;
        case 0x1c1740u: goto label_1c1740;
        case 0x1c1744u: goto label_1c1744;
        case 0x1c1748u: goto label_1c1748;
        case 0x1c174cu: goto label_1c174c;
        case 0x1c1750u: goto label_1c1750;
        case 0x1c1754u: goto label_1c1754;
        case 0x1c1758u: goto label_1c1758;
        case 0x1c175cu: goto label_1c175c;
        case 0x1c1760u: goto label_1c1760;
        case 0x1c1764u: goto label_1c1764;
        case 0x1c1768u: goto label_1c1768;
        case 0x1c176cu: goto label_1c176c;
        case 0x1c1770u: goto label_1c1770;
        case 0x1c1774u: goto label_1c1774;
        default: return;
    }

label_1c0fa8:
    // 0x1c0fa8: 0xc066c72  jal         func_19B1C8
label_1c0fac:
    if (ctx->pc == 0x1C0FACu) {
        ctx->pc = 0x1C0FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0FA8u;
        // 0x1c0fac: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0FB0u;
        goto label_1c0fb0;
    }
    ctx->pc = 0x1C0FA8u;
    SET_GPR_U32(ctx, 31, 0x1C0FB0u);
    ctx->pc = 0x1C0FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0FA8u;
    // 0x1c0fac: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C0FA8u, 0x1C0FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0FB0u;
label_1c0fb0:
    // 0x1c0fb0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c0fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c0fb4:
    // 0x1c0fb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c0fb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c0fb8:
    // 0x1c0fb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c0fb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c0fbc:
    // 0x1c0fbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c0fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c0fc0:
    // 0x1c0fc0: 0x3e00008  jr          $ra
label_1c0fc4:
    if (ctx->pc == 0x1C0FC4u) {
        ctx->pc = 0x1C0FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0FC0u;
        // 0x1c0fc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0FC8u;
        goto label_1c0fc8;
    }
    ctx->pc = 0x1C0FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0FC0u;
        // 0x1c0fc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0FC8u;
label_1c0fc8:
    // 0x1c0fc8: 0x0  nop
    ctx->pc = 0x1c0fc8u;
    // NOP
label_1c0fcc:
    // 0x1c0fcc: 0x0  nop
    ctx->pc = 0x1c0fccu;
    // NOP
label_1c0fd0:
    // 0x1c0fd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c0fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c0fd4:
    // 0x1c0fd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c0fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c0fd8:
    // 0x1c0fd8: 0x8f8688f0  lw          $a2, -0x7710($gp)
    ctx->pc = 0x1c0fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936816)));
label_1c0fdc:
    // 0x1c0fdc: 0x10c00035  beqz        $a2, . + 4 + (0x35 << 2)
label_1c0fe0:
    if (ctx->pc == 0x1C0FE0u) {
        ctx->pc = 0x1C0FE4u;
        goto label_1c0fe4;
    }
    ctx->pc = 0x1C0FDCu;
    {
        const bool branch_taken_0x1c0fdc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0fdc) {
            ctx->pc = 0x1C10B4u;
            goto label_1c10b4;
        }
    }
    ctx->pc = 0x1C0FE4u;
label_1c0fe4:
    // 0x1c0fe4: 0x8f858904  lw          $a1, -0x76FC($gp)
    ctx->pc = 0x1c0fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936836)));
label_1c0fe8:
    // 0x1c0fe8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c0fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0fec:
    // 0x1c0fec: 0x8f848908  lw          $a0, -0x76F8($gp)
    ctx->pc = 0x1c0fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
label_1c0ff0:
    // 0x1c0ff0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c0ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1c0ff4:
    // 0x1c0ff4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1c0ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1c0ff8:
    // 0x1c0ff8: 0xaf858904  sw          $a1, -0x76FC($gp)
    ctx->pc = 0x1c0ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936836), GPR_U32(ctx, 5));
label_1c0ffc:
    // 0x1c0ffc: 0x14c30008  bne         $a2, $v1, . + 4 + (0x8 << 2)
label_1c1000:
    if (ctx->pc == 0x1C1000u) {
        ctx->pc = 0x1C1000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0FFCu;
        // 0x1c1000: 0xaf848908  sw          $a0, -0x76F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1004u;
        goto label_1c1004;
    }
    ctx->pc = 0x1C0FFCu;
    {
        const bool branch_taken_0x1c0ffc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C1000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0FFCu;
        // 0x1c1000: 0xaf848908  sw          $a0, -0x76F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ffc) {
            ctx->pc = 0x1C1020u;
            goto label_1c1020;
        }
    }
    ctx->pc = 0x1C1004u;
label_1c1004:
    // 0x1c1004: 0x8f838908  lw          $v1, -0x76F8($gp)
    ctx->pc = 0x1c1004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
label_1c1008:
    // 0x1c1008: 0x28630088  slti        $v1, $v1, 0x88
    ctx->pc = 0x1c1008u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)136) ? 1 : 0);
label_1c100c:
    // 0x1c100c: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
label_1c1010:
    if (ctx->pc == 0x1C1010u) {
        ctx->pc = 0x1C1010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C100Cu;
        // 0x1c1010: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1014u;
        goto label_1c1014;
    }
    ctx->pc = 0x1C100Cu;
    {
        const bool branch_taken_0x1c100c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C100Cu;
        // 0x1c1010: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c100c) {
            ctx->pc = 0x1C10B4u;
            goto label_1c10b4;
        }
    }
    ctx->pc = 0x1C1014u;
label_1c1014:
    // 0x1c1014: 0xaf808908  sw          $zero, -0x76F8($gp)
    ctx->pc = 0x1c1014u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 0));
label_1c1018:
    // 0x1c1018: 0x10000026  b           . + 4 + (0x26 << 2)
label_1c101c:
    if (ctx->pc == 0x1C101Cu) {
        ctx->pc = 0x1C101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1018u;
        // 0x1c101c: 0xaf8388f0  sw          $v1, -0x7710($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936816), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1020u;
        goto label_1c1020;
    }
    ctx->pc = 0x1C1018u;
    {
        const bool branch_taken_0x1c1018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1018u;
        // 0x1c101c: 0xaf8388f0  sw          $v1, -0x7710($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936816), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1018) {
            ctx->pc = 0x1C10B4u;
            goto label_1c10b4;
        }
    }
    ctx->pc = 0x1C1020u;
label_1c1020:
    // 0x1c1020: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c1020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c1024:
    // 0x1c1024: 0x14c3001b  bne         $a2, $v1, . + 4 + (0x1B << 2)
label_1c1028:
    if (ctx->pc == 0x1C1028u) {
        ctx->pc = 0x1C1028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1024u;
        // 0x1c1028: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C102Cu;
        goto label_1c102c;
    }
    ctx->pc = 0x1C1024u;
    {
        const bool branch_taken_0x1c1024 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C1028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1024u;
        // 0x1c1028: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1024) {
            ctx->pc = 0x1C1094u;
            goto label_1c1094;
        }
    }
    ctx->pc = 0x1C102Cu;
label_1c102c:
    // 0x1c102c: 0x8f84890c  lw          $a0, -0x76F4($gp)
    ctx->pc = 0x1c102cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936844)));
label_1c1030:
    // 0x1c1030: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x1c1030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_1c1034:
    // 0x1c1034: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
label_1c1038:
    if (ctx->pc == 0x1C1038u) {
        ctx->pc = 0x1C103Cu;
        goto label_1c103c;
    }
    ctx->pc = 0x1C1034u;
    {
        const bool branch_taken_0x1c1034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c1034) {
            ctx->pc = 0x1C1068u;
            goto label_1c1068;
        }
    }
    ctx->pc = 0x1C103Cu;
label_1c103c:
    // 0x1c103c: 0x8f838908  lw          $v1, -0x76F8($gp)
    ctx->pc = 0x1c103cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
label_1c1040:
    // 0x1c1040: 0x286300e4  slti        $v1, $v1, 0xE4
    ctx->pc = 0x1c1040u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)228) ? 1 : 0);
label_1c1044:
    // 0x1c1044: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
label_1c1048:
    if (ctx->pc == 0x1C1048u) {
        ctx->pc = 0x1C1048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1044u;
        // 0x1c1048: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C104Cu;
        goto label_1c104c;
    }
    ctx->pc = 0x1C1044u;
    {
        const bool branch_taken_0x1c1044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1044u;
        // 0x1c1048: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1044) {
            ctx->pc = 0x1C10B4u;
            goto label_1c10b4;
        }
    }
    ctx->pc = 0x1C104Cu;
label_1c104c:
    // 0x1c104c: 0xc05b308  jal         func_16CC20
label_1c1050:
    if (ctx->pc == 0x1C1050u) {
        ctx->pc = 0x1C1054u;
        goto label_1c1054;
    }
    ctx->pc = 0x1C104Cu;
    SET_GPR_U32(ctx, 31, 0x1C1054u);
    ctx->pc = 0x16CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CC20u, 0x1C104Cu, 0x1C1054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1054u;
label_1c1054:
    // 0x1c1054: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_1c1058:
    if (ctx->pc == 0x1C1058u) {
        ctx->pc = 0x1C1058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1054u;
        // 0x1c1058: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C105Cu;
        goto label_1c105c;
    }
    ctx->pc = 0x1C1054u;
    {
        const bool branch_taken_0x1c1054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1054u;
        // 0x1c1058: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1054) {
            ctx->pc = 0x1C10B4u;
            goto label_1c10b4;
        }
    }
    ctx->pc = 0x1C105Cu;
label_1c105c:
    // 0x1c105c: 0xaf808908  sw          $zero, -0x76F8($gp)
    ctx->pc = 0x1c105cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 0));
label_1c1060:
    // 0x1c1060: 0x10000014  b           . + 4 + (0x14 << 2)
label_1c1064:
    if (ctx->pc == 0x1C1064u) {
        ctx->pc = 0x1C1064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1060u;
        // 0x1c1064: 0xaf8388f0  sw          $v1, -0x7710($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936816), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1068u;
        goto label_1c1068;
    }
    ctx->pc = 0x1C1060u;
    {
        const bool branch_taken_0x1c1060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1060u;
        // 0x1c1064: 0xaf8388f0  sw          $v1, -0x7710($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936816), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1060) {
            ctx->pc = 0x1C10B4u;
            goto label_1c10b4;
        }
    }
    ctx->pc = 0x1C1068u;
label_1c1068:
    // 0x1c1068: 0x8f838908  lw          $v1, -0x76F8($gp)
    ctx->pc = 0x1c1068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
label_1c106c:
    // 0x1c106c: 0x28630060  slti        $v1, $v1, 0x60
    ctx->pc = 0x1c106cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)96) ? 1 : 0);
label_1c1070:
    // 0x1c1070: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_1c1074:
    if (ctx->pc == 0x1C1074u) {
        ctx->pc = 0x1C1074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1070u;
        // 0x1c1074: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1078u;
        goto label_1c1078;
    }
    ctx->pc = 0x1C1070u;
    {
        const bool branch_taken_0x1c1070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1070u;
        // 0x1c1074: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1070) {
            ctx->pc = 0x1C10B4u;
            goto label_1c10b4;
        }
    }
    ctx->pc = 0x1C1078u;
label_1c1078:
    // 0x1c1078: 0xc05b308  jal         func_16CC20
label_1c107c:
    if (ctx->pc == 0x1C107Cu) {
        ctx->pc = 0x1C1080u;
        goto label_1c1080;
    }
    ctx->pc = 0x1C1078u;
    SET_GPR_U32(ctx, 31, 0x1C1080u);
    ctx->pc = 0x16CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CC20u, 0x1C1078u, 0x1C1080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1080u;
label_1c1080:
    // 0x1c1080: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1c1084:
    if (ctx->pc == 0x1C1084u) {
        ctx->pc = 0x1C1084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1080u;
        // 0x1c1084: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1088u;
        goto label_1c1088;
    }
    ctx->pc = 0x1C1080u;
    {
        const bool branch_taken_0x1c1080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1080u;
        // 0x1c1084: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1080) {
            ctx->pc = 0x1C10B4u;
            goto label_1c10b4;
        }
    }
    ctx->pc = 0x1C1088u;
label_1c1088:
    // 0x1c1088: 0xaf808908  sw          $zero, -0x76F8($gp)
    ctx->pc = 0x1c1088u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 0));
label_1c108c:
    // 0x1c108c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1c1090:
    if (ctx->pc == 0x1C1090u) {
        ctx->pc = 0x1C1090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C108Cu;
        // 0x1c1090: 0xaf8388f0  sw          $v1, -0x7710($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936816), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1094u;
        goto label_1c1094;
    }
    ctx->pc = 0x1C108Cu;
    {
        const bool branch_taken_0x1c108c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C108Cu;
        // 0x1c1090: 0xaf8388f0  sw          $v1, -0x7710($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936816), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c108c) {
            ctx->pc = 0x1C10B4u;
            goto label_1c10b4;
        }
    }
    ctx->pc = 0x1C1094u;
label_1c1094:
    // 0x1c1094: 0x14c30007  bne         $a2, $v1, . + 4 + (0x7 << 2)
label_1c1098:
    if (ctx->pc == 0x1C1098u) {
        ctx->pc = 0x1C109Cu;
        goto label_1c109c;
    }
    ctx->pc = 0x1C1094u;
    {
        const bool branch_taken_0x1c1094 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c1094) {
            ctx->pc = 0x1C10B4u;
            goto label_1c10b4;
        }
    }
    ctx->pc = 0x1C109Cu;
label_1c109c:
    // 0x1c109c: 0x8f838908  lw          $v1, -0x76F8($gp)
    ctx->pc = 0x1c109cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
label_1c10a0:
    // 0x1c10a0: 0x28630088  slti        $v1, $v1, 0x88
    ctx->pc = 0x1c10a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)136) ? 1 : 0);
label_1c10a4:
    // 0x1c10a4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1c10a8:
    if (ctx->pc == 0x1C10A8u) {
        ctx->pc = 0x1C10ACu;
        goto label_1c10ac;
    }
    ctx->pc = 0x1C10A4u;
    {
        const bool branch_taken_0x1c10a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c10a4) {
            ctx->pc = 0x1C10B4u;
            goto label_1c10b4;
        }
    }
    ctx->pc = 0x1C10ACu;
label_1c10ac:
    // 0x1c10ac: 0xaf8088f0  sw          $zero, -0x7710($gp)
    ctx->pc = 0x1c10acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936816), GPR_U32(ctx, 0));
label_1c10b0:
    // 0x1c10b0: 0xaf808908  sw          $zero, -0x76F8($gp)
    ctx->pc = 0x1c10b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 0));
label_1c10b4:
    // 0x1c10b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c10b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c10b8:
    // 0x1c10b8: 0x3e00008  jr          $ra
label_1c10bc:
    if (ctx->pc == 0x1C10BCu) {
        ctx->pc = 0x1C10BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10B8u;
        // 0x1c10bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C10C0u;
        goto label_1c10c0;
    }
    ctx->pc = 0x1C10B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C10BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10B8u;
        // 0x1c10bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C10B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C10C0u;
label_1c10c0:
    // 0x1c10c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c10c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1c10c4:
    // 0x1c10c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c10c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1c10c8:
    // 0x1c10c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c10c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1c10cc:
    // 0x1c10cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c10ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1c10d0:
    // 0x1c10d0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1c10d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c10d4:
    // 0x1c10d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c10d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c10d8:
    // 0x1c10d8: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1c10d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1c10dc:
    // 0x1c10dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c10dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c10e0:
    // 0x1c10e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c10e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c10e4:
    // 0x1c10e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c10e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c10e8:
    // 0x1c10e8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c10e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c10ec:
    // 0x1c10ec: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1c10ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1c10f0:
    // 0x1c10f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c10f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c10f4:
    // 0x1c10f4: 0x24050260  addiu       $a1, $zero, 0x260
    ctx->pc = 0x1c10f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
label_1c10f8:
    // 0x1c10f8: 0xc055148  jal         func_154520
label_1c10fc:
    if (ctx->pc == 0x1C10FCu) {
        ctx->pc = 0x1C10FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10F8u;
        // 0x1c10fc: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1100u;
        goto label_1c1100;
    }
    ctx->pc = 0x1C10F8u;
    SET_GPR_U32(ctx, 31, 0x1C1100u);
    ctx->pc = 0x1C10FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C10F8u;
    // 0x1c10fc: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154520u, 0x1C10F8u, 0x1C1100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1100u;
label_1c1100:
    // 0x1c1100: 0x24090016  addiu       $t1, $zero, 0x16
    ctx->pc = 0x1c1100u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1c1104:
    // 0x1c1104: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1c1104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1c1108:
    // 0x1c1108: 0x62480a  movz        $t1, $v1, $v0
    ctx->pc = 0x1c1108u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_1c110c:
    // 0x1c110c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1c110cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1c1110:
    // 0x1c1110: 0x8f828910  lw          $v0, -0x76F0($gp)
    ctx->pc = 0x1c1110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936848)));
label_1c1114:
    // 0x1c1114: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1c1114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1c1118:
    // 0x1c1118: 0x24060260  addiu       $a2, $zero, 0x260
    ctx->pc = 0x1c1118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
label_1c111c:
    // 0x1c111c: 0x2407002c  addiu       $a3, $zero, 0x2C
    ctx->pc = 0x1c111cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1c1120:
    // 0x1c1120: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c1120u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1124:
    // 0x1c1124: 0x340affe4  ori         $t2, $zero, 0xFFE4
    ctx->pc = 0x1c1124u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65508);
label_1c1128:
    // 0x1c1128: 0xc054e5c  jal         func_153970
label_1c112c:
    if (ctx->pc == 0x1C112Cu) {
        ctx->pc = 0x1C112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1128u;
        // 0x1c112c: 0x494823  subu        $t1, $v0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1130u;
        goto label_1c1130;
    }
    ctx->pc = 0x1C1128u;
    SET_GPR_U32(ctx, 31, 0x1C1130u);
    ctx->pc = 0x1C112Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1128u;
    // 0x1c112c: 0x494823  subu        $t1, $v0, $t1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1C1128u, 0x1C1130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1130u;
label_1c1130:
    // 0x1c1130: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1c1130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1c1134:
    // 0x1c1134: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1c1134u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c1138:
    // 0x1c1138: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x1c1138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
label_1c113c:
    // 0x1c113c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c113cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1140:
    // 0x1c1140: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1c1140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c1144:
    // 0x1c1144: 0xc054e74  jal         func_1539D0
label_1c1148:
    if (ctx->pc == 0x1C1148u) {
        ctx->pc = 0x1C1148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1144u;
        // 0x1c1148: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C114Cu;
        goto label_1c114c;
    }
    ctx->pc = 0x1C1144u;
    SET_GPR_U32(ctx, 31, 0x1C114Cu);
    ctx->pc = 0x1C1148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1144u;
    // 0x1c1148: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1C1144u, 0x1C114Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C114Cu;
label_1c114c:
    // 0x1c114c: 0x12800032  beqz        $s4, . + 4 + (0x32 << 2)
label_1c1150:
    if (ctx->pc == 0x1C1150u) {
        ctx->pc = 0x1C1150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C114Cu;
        // 0x1c1150: 0xaf8288f4  sw          $v0, -0x770C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936820), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1154u;
        goto label_1c1154;
    }
    ctx->pc = 0x1C114Cu;
    {
        const bool branch_taken_0x1c114c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C114Cu;
        // 0x1c1150: 0xaf8288f4  sw          $v0, -0x770C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936820), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c114c) {
            ctx->pc = 0x1C1218u;
            goto label_1c1218;
        }
    }
    ctx->pc = 0x1C1154u;
label_1c1154:
    // 0x1c1154: 0x8f8488f4  lw          $a0, -0x770C($gp)
    ctx->pc = 0x1c1154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936820)));
label_1c1158:
    // 0x1c1158: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1c1158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_1c115c:
    // 0x1c115c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c115cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1160:
    // 0x1c1160: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x1c1160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1c1164:
    // 0x1c1164: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c1164u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1168:
    // 0x1c1168: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c1168u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c116c:
    // 0x1c116c: 0x10000018  b           . + 4 + (0x18 << 2)
label_1c1170:
    if (ctx->pc == 0x1C1170u) {
        ctx->pc = 0x1C1170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C116Cu;
        // 0x1c1170: 0x24a54ec0  addiu       $a1, $a1, 0x4EC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1174u;
        goto label_1c1174;
    }
    ctx->pc = 0x1C116Cu;
    {
        const bool branch_taken_0x1c116c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C116Cu;
        // 0x1c1170: 0x24a54ec0  addiu       $a1, $a1, 0x4EC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c116c) {
            ctx->pc = 0x1C11D0u;
            goto label_1c11d0;
        }
    }
    ctx->pc = 0x1C1174u;
label_1c1174:
    // 0x1c1174: 0x94e30028  lhu         $v1, 0x28($a3)
    ctx->pc = 0x1c1174u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 40)));
label_1c1178:
    // 0x1c1178: 0x24639400  addiu       $v1, $v1, -0x6C00
    ctx->pc = 0x1c1178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939648));
label_1c117c:
    // 0x1c117c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1c1180:
    if (ctx->pc == 0x1C1180u) {
        ctx->pc = 0x1C1180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C117Cu;
        // 0x1c1180: 0x35903  sra         $t3, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1184u;
        goto label_1c1184;
    }
    ctx->pc = 0x1C117Cu;
    {
        const bool branch_taken_0x1c117c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C1180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C117Cu;
        // 0x1c1180: 0x35903  sra         $t3, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c117c) {
            ctx->pc = 0x1C118Cu;
            goto label_1c118c;
        }
    }
    ctx->pc = 0x1C1184u;
label_1c1184:
    // 0x1c1184: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1c1184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1c1188:
    // 0x1c1188: 0x35903  sra         $t3, $v1, 4
    ctx->pc = 0x1c1188u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 3), 4));
label_1c118c:
    // 0x1c118c: 0x168082a  slt         $at, $t3, $t0
    ctx->pc = 0x1c118cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1c1190:
    // 0x1c1190: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1c1194:
    if (ctx->pc == 0x1C1194u) {
        ctx->pc = 0x1C1198u;
        goto label_1c1198;
    }
    ctx->pc = 0x1C1190u;
    {
        const bool branch_taken_0x1c1190 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1190) {
            ctx->pc = 0x1C119Cu;
            goto label_1c119c;
        }
    }
    ctx->pc = 0x1C1198u;
label_1c1198:
    // 0x1c1198: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x1c1198u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1c119c:
    // 0x1c119c: 0x0  nop
    ctx->pc = 0x1c119cu;
    // NOP
label_1c11a0:
    // 0x1c11a0: 0x94e30040  lhu         $v1, 0x40($a3)
    ctx->pc = 0x1c11a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 64)));
label_1c11a4:
    // 0x1c11a4: 0x24639400  addiu       $v1, $v1, -0x6C00
    ctx->pc = 0x1c11a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939648));
label_1c11a8:
    // 0x1c11a8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1c11ac:
    if (ctx->pc == 0x1C11ACu) {
        ctx->pc = 0x1C11ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11A8u;
        // 0x1c11ac: 0x33903  sra         $a3, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C11B0u;
        goto label_1c11b0;
    }
    ctx->pc = 0x1C11A8u;
    {
        const bool branch_taken_0x1c11a8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C11ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11A8u;
        // 0x1c11ac: 0x33903  sra         $a3, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11a8) {
            ctx->pc = 0x1C11B8u;
            goto label_1c11b8;
        }
    }
    ctx->pc = 0x1C11B0u;
label_1c11b0:
    // 0x1c11b0: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1c11b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1c11b4:
    // 0x1c11b4: 0x33903  sra         $a3, $v1, 4
    ctx->pc = 0x1c11b4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 4));
label_1c11b8:
    // 0x1c11b8: 0x127082a  slt         $at, $t1, $a3
    ctx->pc = 0x1c11b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1c11bc:
    // 0x1c11bc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1c11c0:
    if (ctx->pc == 0x1C11C0u) {
        ctx->pc = 0x1C11C4u;
        goto label_1c11c4;
    }
    ctx->pc = 0x1C11BCu;
    {
        const bool branch_taken_0x1c11bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c11bc) {
            ctx->pc = 0x1C11C8u;
            goto label_1c11c8;
        }
    }
    ctx->pc = 0x1C11C4u;
label_1c11c4:
    // 0x1c11c4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1c11c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1c11c8:
    // 0x1c11c8: 0x254a0080  addiu       $t2, $t2, 0x80
    ctx->pc = 0x1c11c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 128));
label_1c11cc:
    // 0x1c11cc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1c11ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1c11d0:
    // 0x1c11d0: 0xc4182a  slt         $v1, $a2, $a0
    ctx->pc = 0x1c11d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1c11d4:
    // 0x1c11d4: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
label_1c11d8:
    if (ctx->pc == 0x1C11D8u) {
        ctx->pc = 0x1C11D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11D4u;
        // 0x1c11d8: 0xaa3821  addu        $a3, $a1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C11DCu;
        goto label_1c11dc;
    }
    ctx->pc = 0x1C11D4u;
    {
        const bool branch_taken_0x1c11d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C11D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11D4u;
        // 0x1c11d8: 0xaa3821  addu        $a3, $a1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11d4) {
            ctx->pc = 0x1C1174u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1174;
        }
    }
    ctx->pc = 0x1C11DCu;
label_1c11dc:
    // 0x1c11dc: 0x1282023  subu        $a0, $t1, $t0
    ctx->pc = 0x1c11dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_1c11e0:
    // 0x1c11e0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1c11e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c11e4:
    // 0x1c11e4: 0x28810260  slti        $at, $a0, 0x260
    ctx->pc = 0x1c11e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)608) ? 1 : 0);
label_1c11e8:
    // 0x1c11e8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_1c11ec:
    if (ctx->pc == 0x1C11ECu) {
        ctx->pc = 0x1C11ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11E8u;
        // 0x1c11ec: 0xaf8388f8  sw          $v1, -0x7708($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936824), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C11F0u;
        goto label_1c11f0;
    }
    ctx->pc = 0x1C11E8u;
    {
        const bool branch_taken_0x1c11e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C11ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11E8u;
        // 0x1c11ec: 0xaf8388f8  sw          $v1, -0x7708($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936824), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11e8) {
            ctx->pc = 0x1C1220u;
            goto label_1c1220;
        }
    }
    ctx->pc = 0x1C11F0u;
label_1c11f0:
    // 0x1c11f0: 0x24030260  addiu       $v1, $zero, 0x260
    ctx->pc = 0x1c11f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
label_1c11f4:
    // 0x1c11f4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1c11f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1c11f8:
    // 0x1c11f8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1c11fc:
    if (ctx->pc == 0x1C11FCu) {
        ctx->pc = 0x1C11FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11F8u;
        // 0x1c11fc: 0x32043  sra         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1200u;
        goto label_1c1200;
    }
    ctx->pc = 0x1C11F8u;
    {
        const bool branch_taken_0x1c11f8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C11FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11F8u;
        // 0x1c11fc: 0x32043  sra         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11f8) {
            ctx->pc = 0x1C1208u;
            goto label_1c1208;
        }
    }
    ctx->pc = 0x1C1200u;
label_1c1200:
    // 0x1c1200: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c1200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1c1204:
    // 0x1c1204: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x1c1204u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
label_1c1208:
    // 0x1c1208: 0x8f8388f8  lw          $v1, -0x7708($gp)
    ctx->pc = 0x1c1208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936824)));
label_1c120c:
    // 0x1c120c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c120cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1c1210:
    // 0x1c1210: 0x10000003  b           . + 4 + (0x3 << 2)
label_1c1214:
    if (ctx->pc == 0x1C1214u) {
        ctx->pc = 0x1C1214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1210u;
        // 0x1c1214: 0xaf8388f8  sw          $v1, -0x7708($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936824), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1218u;
        goto label_1c1218;
    }
    ctx->pc = 0x1C1210u;
    {
        const bool branch_taken_0x1c1210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1210u;
        // 0x1c1214: 0xaf8388f8  sw          $v1, -0x7708($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936824), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1210) {
            ctx->pc = 0x1C1220u;
            goto label_1c1220;
        }
    }
    ctx->pc = 0x1C1218u;
label_1c1218:
    // 0x1c1218: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1c1218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c121c:
    // 0x1c121c: 0xaf8388f8  sw          $v1, -0x7708($gp)
    ctx->pc = 0x1c121cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936824), GPR_U32(ctx, 3));
label_1c1220:
    // 0x1c1220: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1c1220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_1c1224:
    // 0x1c1224: 0x3c0a0046  lui         $t2, 0x46
    ctx->pc = 0x1c1224u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)70 << 16));
label_1c1228:
    // 0x1c1228: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c1228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c122c:
    // 0x1c122c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c122cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1230:
    // 0x1c1230: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1234:
    // 0x1c1234: 0x24634ec0  addiu       $v1, $v1, 0x4EC0
    ctx->pc = 0x1c1234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20160));
label_1c1238:
    // 0x1c1238: 0x254a4ac0  addiu       $t2, $t2, 0x4AC0
    ctx->pc = 0x1c1238u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 19136));
label_1c123c:
    // 0x1c123c: 0x10000023  b           . + 4 + (0x23 << 2)
label_1c1240:
    if (ctx->pc == 0x1C1240u) {
        ctx->pc = 0x1C1240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C123Cu;
        // 0x1c1240: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1244u;
        goto label_1c1244;
    }
    ctx->pc = 0x1C123Cu;
    {
        const bool branch_taken_0x1c123c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C123Cu;
        // 0x1c1240: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c123c) {
            ctx->pc = 0x1C12CCu;
            goto label_1c12cc;
        }
    }
    ctx->pc = 0x1C1244u;
label_1c1244:
    // 0x1c1244: 0x94e90028  lhu         $t1, 0x28($a3)
    ctx->pc = 0x1c1244u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 40)));
label_1c1248:
    // 0x1c1248: 0x25299400  addiu       $t1, $t1, -0x6C00
    ctx->pc = 0x1c1248u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294939648));
label_1c124c:
    // 0x1c124c: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
label_1c1250:
    if (ctx->pc == 0x1C1250u) {
        ctx->pc = 0x1C1250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C124Cu;
        // 0x1c1250: 0x96103  sra         $t4, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1254u;
        goto label_1c1254;
    }
    ctx->pc = 0x1C124Cu;
    {
        const bool branch_taken_0x1c124c = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x1C1250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C124Cu;
        // 0x1c1250: 0x96103  sra         $t4, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c124c) {
            ctx->pc = 0x1C125Cu;
            goto label_1c125c;
        }
    }
    ctx->pc = 0x1C1254u;
label_1c1254:
    // 0x1c1254: 0x2529000f  addiu       $t1, $t1, 0xF
    ctx->pc = 0x1c1254u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15));
label_1c1258:
    // 0x1c1258: 0x96103  sra         $t4, $t1, 4
    ctx->pc = 0x1c1258u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 9), 4));
label_1c125c:
    // 0x1c125c: 0x8f8988f8  lw          $t1, -0x7708($gp)
    ctx->pc = 0x1c125cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936824)));
label_1c1260:
    // 0x1c1260: 0x1455821  addu        $t3, $t2, $a1
    ctx->pc = 0x1c1260u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_1c1264:
    // 0x1c1264: 0x1896021  addu        $t4, $t4, $t1
    ctx->pc = 0x1c1264u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
label_1c1268:
    // 0x1c1268: 0xc4900  sll         $t1, $t4, 4
    ctx->pc = 0x1c1268u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_1c126c:
    // 0x1c126c: 0xad6c0000  sw          $t4, 0x0($t3)
    ctx->pc = 0x1c126cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 12));
label_1c1270:
    // 0x1c1270: 0x25296c00  addiu       $t1, $t1, 0x6C00
    ctx->pc = 0x1c1270u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 27648));
label_1c1274:
    // 0x1c1274: 0xa4e90058  sh          $t1, 0x58($a3)
    ctx->pc = 0x1c1274u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 88), (uint16_t)GPR_U32(ctx, 9));
label_1c1278:
    // 0x1c1278: 0xa4e90028  sh          $t1, 0x28($a3)
    ctx->pc = 0x1c1278u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 40), (uint16_t)GPR_U32(ctx, 9));
label_1c127c:
    // 0x1c127c: 0x94e90040  lhu         $t1, 0x40($a3)
    ctx->pc = 0x1c127cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 64)));
label_1c1280:
    // 0x1c1280: 0x25299400  addiu       $t1, $t1, -0x6C00
    ctx->pc = 0x1c1280u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294939648));
label_1c1284:
    // 0x1c1284: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
label_1c1288:
    if (ctx->pc == 0x1C1288u) {
        ctx->pc = 0x1C1288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1284u;
        // 0x1c1288: 0x96103  sra         $t4, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C128Cu;
        goto label_1c128c;
    }
    ctx->pc = 0x1C1284u;
    {
        const bool branch_taken_0x1c1284 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x1C1288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1284u;
        // 0x1c1288: 0x96103  sra         $t4, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1284) {
            ctx->pc = 0x1C1294u;
            goto label_1c1294;
        }
    }
    ctx->pc = 0x1C128Cu;
label_1c128c:
    // 0x1c128c: 0x2529000f  addiu       $t1, $t1, 0xF
    ctx->pc = 0x1c128cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15));
label_1c1290:
    // 0x1c1290: 0x96103  sra         $t4, $t1, 4
    ctx->pc = 0x1c1290u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 9), 4));
label_1c1294:
    // 0x1c1294: 0x8f8988f8  lw          $t1, -0x7708($gp)
    ctx->pc = 0x1c1294u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936824)));
label_1c1298:
    // 0x1c1298: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x1c1298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_1c129c:
    // 0x1c129c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1c129cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_1c12a0:
    // 0x1c12a0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1c12a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1c12a4:
    // 0x1c12a4: 0x1896021  addu        $t4, $t4, $t1
    ctx->pc = 0x1c12a4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
label_1c12a8:
    // 0x1c12a8: 0xc4900  sll         $t1, $t4, 4
    ctx->pc = 0x1c12a8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_1c12ac:
    // 0x1c12ac: 0xad6c0004  sw          $t4, 0x4($t3)
    ctx->pc = 0x1c12acu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 12));
label_1c12b0:
    // 0x1c12b0: 0x25296c00  addiu       $t1, $t1, 0x6C00
    ctx->pc = 0x1c12b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 27648));
label_1c12b4:
    // 0x1c12b4: 0xa4e90070  sh          $t1, 0x70($a3)
    ctx->pc = 0x1c12b4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 112), (uint16_t)GPR_U32(ctx, 9));
label_1c12b8:
    // 0x1c12b8: 0xa4e90040  sh          $t1, 0x40($a3)
    ctx->pc = 0x1c12b8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 64), (uint16_t)GPR_U32(ctx, 9));
label_1c12bc:
    // 0x1c12bc: 0xa0e80063  sb          $t0, 0x63($a3)
    ctx->pc = 0x1c12bcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 99), (uint8_t)GPR_U32(ctx, 8));
label_1c12c0:
    // 0x1c12c0: 0xa0e8004b  sb          $t0, 0x4B($a3)
    ctx->pc = 0x1c12c0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 75), (uint8_t)GPR_U32(ctx, 8));
label_1c12c4:
    // 0x1c12c4: 0xa0e80033  sb          $t0, 0x33($a3)
    ctx->pc = 0x1c12c4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 51), (uint8_t)GPR_U32(ctx, 8));
label_1c12c8:
    // 0x1c12c8: 0xa0e8001b  sb          $t0, 0x1B($a3)
    ctx->pc = 0x1c12c8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 27), (uint8_t)GPR_U32(ctx, 8));
label_1c12cc:
    // 0x1c12cc: 0x0  nop
    ctx->pc = 0x1c12ccu;
    // NOP
label_1c12d0:
    // 0x1c12d0: 0x8f8788f4  lw          $a3, -0x770C($gp)
    ctx->pc = 0x1c12d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936820)));
label_1c12d4:
    // 0x1c12d4: 0xc7382a  slt         $a3, $a2, $a3
    ctx->pc = 0x1c12d4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1c12d8:
    // 0x1c12d8: 0x14e0ffda  bnez        $a3, . + 4 + (-0x26 << 2)
label_1c12dc:
    if (ctx->pc == 0x1C12DCu) {
        ctx->pc = 0x1C12DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C12D8u;
        // 0x1c12dc: 0x643821  addu        $a3, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C12E0u;
        goto label_1c12e0;
    }
    ctx->pc = 0x1C12D8u;
    {
        const bool branch_taken_0x1c12d8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C12DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C12D8u;
        // 0x1c12dc: 0x643821  addu        $a3, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c12d8) {
            ctx->pc = 0x1C1244u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1244;
        }
    }
    ctx->pc = 0x1C12E0u;
label_1c12e0:
    // 0x1c12e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c12e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c12e4:
    // 0x1c12e4: 0xaf9288fc  sw          $s2, -0x7704($gp)
    ctx->pc = 0x1c12e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936828), GPR_U32(ctx, 18));
label_1c12e8:
    // 0x1c12e8: 0xaf918900  sw          $s1, -0x7700($gp)
    ctx->pc = 0x1c12e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936832), GPR_U32(ctx, 17));
label_1c12ec:
    // 0x1c12ec: 0xaf90890c  sw          $s0, -0x76F4($gp)
    ctx->pc = 0x1c12ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936844), GPR_U32(ctx, 16));
label_1c12f0:
    // 0x1c12f0: 0xaf8388f0  sw          $v1, -0x7710($gp)
    ctx->pc = 0x1c12f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936816), GPR_U32(ctx, 3));
label_1c12f4:
    // 0x1c12f4: 0xaf808904  sw          $zero, -0x76FC($gp)
    ctx->pc = 0x1c12f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936836), GPR_U32(ctx, 0));
label_1c12f8:
    // 0x1c12f8: 0xaf808908  sw          $zero, -0x76F8($gp)
    ctx->pc = 0x1c12f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 0));
label_1c12fc:
    // 0x1c12fc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c12fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1c1300:
    // 0x1c1300: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c1300u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c1304:
    // 0x1c1304: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c1304u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c1308:
    // 0x1c1308: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c1308u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c130c:
    // 0x1c130c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c130cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1310:
    // 0x1c1310: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1314:
    // 0x1c1314: 0x3e00008  jr          $ra
label_1c1318:
    if (ctx->pc == 0x1C1318u) {
        ctx->pc = 0x1C1318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1314u;
        // 0x1c1318: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C131Cu;
        goto label_1c131c;
    }
    ctx->pc = 0x1C1314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1314u;
        // 0x1c1318: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C131Cu;
label_1c131c:
    // 0x1c131c: 0x0  nop
    ctx->pc = 0x1c131cu;
    // NOP
label_1c1320:
    // 0x1c1320: 0x3e00008  jr          $ra
label_1c1324:
    if (ctx->pc == 0x1C1324u) {
        ctx->pc = 0x1C1324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1320u;
        // 0x1c1324: 0x8f8288f0  lw          $v0, -0x7710($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936816)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1328u;
        goto label_1c1328;
    }
    ctx->pc = 0x1C1320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1320u;
        // 0x1c1324: 0x8f8288f0  lw          $v0, -0x7710($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936816)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1328u;
label_1c1328:
    // 0x1c1328: 0x0  nop
    ctx->pc = 0x1c1328u;
    // NOP
label_1c132c:
    // 0x1c132c: 0x0  nop
    ctx->pc = 0x1c132cu;
    // NOP
label_1c1330:
    // 0x1c1330: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c1330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1c1334:
    // 0x1c1334: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c1334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1c1338:
    // 0x1c1338: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c1338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c133c:
    // 0x1c133c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c133cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c1340:
    // 0x1c1340: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c1340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c1344:
    // 0x1c1344: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c1344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1348:
    // 0x1c1348: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c1348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c134c:
    // 0x1c134c: 0x27838948  addiu       $v1, $gp, -0x76B8
    ctx->pc = 0x1c134cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936904));
label_1c1350:
    // 0x1c1350: 0x719021  addu        $s2, $v1, $s1
    ctx->pc = 0x1c1350u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1c1354:
    // 0x1c1354: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1c1354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c1358:
    // 0x1c1358: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1c135c:
    if (ctx->pc == 0x1C135Cu) {
        ctx->pc = 0x1C1360u;
        goto label_1c1360;
    }
    ctx->pc = 0x1C1358u;
    {
        const bool branch_taken_0x1c1358 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1358) {
            ctx->pc = 0x1C136Cu;
            goto label_1c136c;
        }
    }
    ctx->pc = 0x1C1360u;
label_1c1360:
    // 0x1c1360: 0xc070038  jal         func_1C00E0
label_1c1364:
    if (ctx->pc == 0x1C1364u) {
        ctx->pc = 0x1C1368u;
        goto label_1c1368;
    }
    ctx->pc = 0x1C1360u;
    SET_GPR_U32(ctx, 31, 0x1C1368u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1C1368u;
label_1c1368:
    // 0x1c1368: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1c1368u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1c136c:
    // 0x1c136c: 0x0  nop
    ctx->pc = 0x1c136cu;
    // NOP
label_1c1370:
    // 0x1c1370: 0x27838940  addiu       $v1, $gp, -0x76C0
    ctx->pc = 0x1c1370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936896));
label_1c1374:
    // 0x1c1374: 0x719021  addu        $s2, $v1, $s1
    ctx->pc = 0x1c1374u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1c1378:
    // 0x1c1378: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1c1378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c137c:
    // 0x1c137c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1c1380:
    if (ctx->pc == 0x1C1380u) {
        ctx->pc = 0x1C1384u;
        goto label_1c1384;
    }
    ctx->pc = 0x1C137Cu;
    {
        const bool branch_taken_0x1c137c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c137c) {
            ctx->pc = 0x1C1390u;
            goto label_1c1390;
        }
    }
    ctx->pc = 0x1C1384u;
label_1c1384:
    // 0x1c1384: 0xc070038  jal         func_1C00E0
label_1c1388:
    if (ctx->pc == 0x1C1388u) {
        ctx->pc = 0x1C138Cu;
        goto label_1c138c;
    }
    ctx->pc = 0x1C1384u;
    SET_GPR_U32(ctx, 31, 0x1C138Cu);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1C138Cu;
label_1c138c:
    // 0x1c138c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1c138cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1c1390:
    // 0x1c1390: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c1390u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c1394:
    // 0x1c1394: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1c1394u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1c1398:
    // 0x1c1398: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_1c139c:
    if (ctx->pc == 0x1C139Cu) {
        ctx->pc = 0x1C139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1398u;
        // 0x1c139c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C13A0u;
        goto label_1c13a0;
    }
    ctx->pc = 0x1C1398u;
    {
        const bool branch_taken_0x1c1398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1398u;
        // 0x1c139c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1398) {
            ctx->pc = 0x1C134Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c134c;
        }
    }
    ctx->pc = 0x1C13A0u;
label_1c13a0:
    // 0x1c13a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c13a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c13a4:
    // 0x1c13a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c13a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c13a8:
    // 0x1c13a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c13a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c13ac:
    // 0x1c13ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c13acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c13b0:
    // 0x1c13b0: 0x3e00008  jr          $ra
label_1c13b4:
    if (ctx->pc == 0x1C13B4u) {
        ctx->pc = 0x1C13B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C13B0u;
        // 0x1c13b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C13B8u;
        goto label_1c13b8;
    }
    ctx->pc = 0x1C13B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C13B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C13B0u;
        // 0x1c13b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C13B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C13B8u;
label_1c13b8:
    // 0x1c13b8: 0x0  nop
    ctx->pc = 0x1c13b8u;
    // NOP
label_1c13bc:
    // 0x1c13bc: 0x0  nop
    ctx->pc = 0x1c13bcu;
    // NOP
label_1c13c0:
    // 0x1c13c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c13c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1c13c4:
    // 0x1c13c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c13c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1c13c8:
    // 0x1c13c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c13c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c13cc:
    // 0x1c13cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c13ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c13d0:
    // 0x1c13d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c13d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c13d4:
    // 0x1c13d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c13d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c13d8:
    // 0x1c13d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c13d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c13dc:
    // 0x1c13dc: 0x27828948  addiu       $v0, $gp, -0x76B8
    ctx->pc = 0x1c13dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936904));
label_1c13e0:
    // 0x1c13e0: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x1c13e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1c13e4:
    // 0x1c13e4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1c13e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c13e8:
    // 0x1c13e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1c13ec:
    if (ctx->pc == 0x1C13ECu) {
        ctx->pc = 0x1C13ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C13E8u;
        // 0x1c13ec: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C13F0u;
        goto label_1c13f0;
    }
    ctx->pc = 0x1C13E8u;
    {
        const bool branch_taken_0x1c13e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C13ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C13E8u;
        // 0x1c13ec: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c13e8) {
            ctx->pc = 0x1C13FCu;
            goto label_1c13fc;
        }
    }
    ctx->pc = 0x1C13F0u;
label_1c13f0:
    // 0x1c13f0: 0xc070080  jal         func_1C0200
label_1c13f4:
    if (ctx->pc == 0x1C13F4u) {
        ctx->pc = 0x1C13F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C13F0u;
        // 0x1c13f4: 0x24051a70  addiu       $a1, $zero, 0x1A70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C13F8u;
        goto label_1c13f8;
    }
    ctx->pc = 0x1C13F0u;
    SET_GPR_U32(ctx, 31, 0x1C13F8u);
    ctx->pc = 0x1C13F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C13F0u;
    // 0x1c13f4: 0x24051a70  addiu       $a1, $zero, 0x1A70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C13F8u;
label_1c13f8:
    // 0x1c13f8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1c13f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1c13fc:
    // 0x1c13fc: 0x0  nop
    ctx->pc = 0x1c13fcu;
    // NOP
label_1c1400:
    // 0x1c1400: 0x27828940  addiu       $v0, $gp, -0x76C0
    ctx->pc = 0x1c1400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936896));
label_1c1404:
    // 0x1c1404: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x1c1404u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1c1408:
    // 0x1c1408: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1c1408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c140c:
    // 0x1c140c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1c1410:
    if (ctx->pc == 0x1C1410u) {
        ctx->pc = 0x1C1410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C140Cu;
        // 0x1c1410: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1414u;
        goto label_1c1414;
    }
    ctx->pc = 0x1C140Cu;
    {
        const bool branch_taken_0x1c140c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C140Cu;
        // 0x1c1410: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c140c) {
            ctx->pc = 0x1C1420u;
            goto label_1c1420;
        }
    }
    ctx->pc = 0x1C1414u;
label_1c1414:
    // 0x1c1414: 0xc070080  jal         func_1C0200
label_1c1418:
    if (ctx->pc == 0x1C1418u) {
        ctx->pc = 0x1C1418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1414u;
        // 0x1c1418: 0x240549f0  addiu       $a1, $zero, 0x49F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C141Cu;
        goto label_1c141c;
    }
    ctx->pc = 0x1C1414u;
    SET_GPR_U32(ctx, 31, 0x1C141Cu);
    ctx->pc = 0x1C1418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1414u;
    // 0x1c1418: 0x240549f0  addiu       $a1, $zero, 0x49F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C141Cu;
label_1c141c:
    // 0x1c141c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1c141cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1c1420:
    // 0x1c1420: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c1420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c1424:
    // 0x1c1424: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1c1424u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1c1428:
    // 0x1c1428: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_1c142c:
    if (ctx->pc == 0x1C142Cu) {
        ctx->pc = 0x1C142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1428u;
        // 0x1c142c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1430u;
        goto label_1c1430;
    }
    ctx->pc = 0x1C1428u;
    {
        const bool branch_taken_0x1c1428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1428u;
        // 0x1c142c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1428) {
            ctx->pc = 0x1C13DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c13dc;
        }
    }
    ctx->pc = 0x1C1430u;
label_1c1430:
    // 0x1c1430: 0xc07055c  jal         func_1C1570
label_1c1434:
    if (ctx->pc == 0x1C1434u) {
        ctx->pc = 0x1C1438u;
        goto label_1c1438;
    }
    ctx->pc = 0x1C1430u;
    SET_GPR_U32(ctx, 31, 0x1C1438u);
    ctx->pc = 0x1C1570u;
    goto label_1c1570;
    ctx->pc = 0x1C1438u;
label_1c1438:
    // 0x1c1438: 0xc070518  jal         func_1C1460
label_1c143c:
    if (ctx->pc == 0x1C143Cu) {
        ctx->pc = 0x1C1440u;
        goto label_1c1440;
    }
    ctx->pc = 0x1C1438u;
    SET_GPR_U32(ctx, 31, 0x1C1440u);
    ctx->pc = 0x1C1460u;
    goto label_1c1460;
    ctx->pc = 0x1C1440u;
label_1c1440:
    // 0x1c1440: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c1440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c1444:
    // 0x1c1444: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c1444u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c1448:
    // 0x1c1448: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c1448u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c144c:
    // 0x1c144c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c144cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1450:
    // 0x1c1450: 0x3e00008  jr          $ra
label_1c1454:
    if (ctx->pc == 0x1C1454u) {
        ctx->pc = 0x1C1454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1450u;
        // 0x1c1454: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1458u;
        goto label_1c1458;
    }
    ctx->pc = 0x1C1450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1450u;
        // 0x1c1454: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1458u;
label_1c1458:
    // 0x1c1458: 0x0  nop
    ctx->pc = 0x1c1458u;
    // NOP
label_1c145c:
    // 0x1c145c: 0x0  nop
    ctx->pc = 0x1c145cu;
    // NOP
label_1c1460:
    // 0x1c1460: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c1460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1c1464:
    // 0x1c1464: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c1464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1c1468:
    // 0x1c1468: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c1468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1c146c:
    // 0x1c146c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c146cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1c1470:
    // 0x1c1470: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c1470u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1474:
    // 0x1c1474: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c1474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c1478:
    // 0x1c1478: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c1478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c147c:
    // 0x1c147c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c147cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c1480:
    // 0x1c1480: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c1480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1484:
    // 0x1c1484: 0x27828940  addiu       $v0, $gp, -0x76C0
    ctx->pc = 0x1c1484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936896));
label_1c1488:
    // 0x1c1488: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c148c:
    // 0x1c148c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1c148cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1c1490:
    // 0x1c1490: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1c1490u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c1494:
    // 0x1c1494: 0xc05e234  jal         func_1788D0
label_1c1498:
    if (ctx->pc == 0x1C1498u) {
        ctx->pc = 0x1C1498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1494u;
        // 0x1c1498: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C149Cu;
        goto label_1c149c;
    }
    ctx->pc = 0x1C1494u;
    SET_GPR_U32(ctx, 31, 0x1C149Cu);
    ctx->pc = 0x1C1498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1494u;
    // 0x1c1498: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1C1494u, 0x1C149Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C149Cu;
label_1c149c:
    // 0x1c149c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c149cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c14a0:
    // 0x1c14a0: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1c14a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1c14a4:
    // 0x1c14a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c14a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c14a8:
    // 0x1c14a8: 0xc05e1d4  jal         func_178750
label_1c14ac:
    if (ctx->pc == 0x1C14ACu) {
        ctx->pc = 0x1C14ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C14A8u;
        // 0x1c14ac: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C14B0u;
        goto label_1c14b0;
    }
    ctx->pc = 0x1C14A8u;
    SET_GPR_U32(ctx, 31, 0x1C14B0u);
    ctx->pc = 0x1C14ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C14A8u;
    // 0x1c14ac: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178750u, 0x1C14A8u, 0x1C14B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C14B0u;
label_1c14b0:
    // 0x1c14b0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1c14b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_1c14b4:
    // 0x1c14b4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1c14b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1c14b8:
    // 0x1c14b8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1c14b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_1c14bc:
    // 0x1c14bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c14bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c14c0:
    // 0x1c14c0: 0x3c02f531  lui         $v0, 0xF531
    ctx->pc = 0x1c14c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62769 << 16));
label_1c14c4:
    // 0x1c14c4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c14c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1c14c8:
    // 0x1c14c8: 0x34425315  ori         $v0, $v0, 0x5315
    ctx->pc = 0x1c14c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21269);
label_1c14cc:
    // 0x1c14cc: 0xfe430060  sd          $v1, 0x60($s2)
    ctx->pc = 0x1c14ccu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 3));
label_1c14d0:
    // 0x1c14d0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1c14d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1c14d4:
    // 0x1c14d4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c14d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c14d8:
    // 0x1c14d8: 0x3c023153  lui         $v0, 0x3153
    ctx->pc = 0x1c14d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12627 << 16));
label_1c14dc:
    // 0x1c14dc: 0x34421097  ori         $v0, $v0, 0x1097
    ctx->pc = 0x1c14dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4247);
label_1c14e0:
    // 0x1c14e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c14e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1c14e4:
    // 0x1c14e4: 0xfe420068  sd          $v0, 0x68($s2)
    ctx->pc = 0x1c14e4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 104), GPR_U64(ctx, 2));
label_1c14e8:
    // 0x1c14e8: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x1c14e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_1c14ec:
    // 0x1c14ec: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x1c14ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_1c14f0:
    // 0x1c14f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c14f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c14f4:
    // 0x1c14f4: 0xc05e158  jal         func_178560
label_1c14f8:
    if (ctx->pc == 0x1C14F8u) {
        ctx->pc = 0x1C14F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C14F4u;
        // 0x1c14f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C14FCu;
        goto label_1c14fc;
    }
    ctx->pc = 0x1C14F4u;
    SET_GPR_U32(ctx, 31, 0x1C14FCu);
    ctx->pc = 0x1C14F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C14F4u;
    // 0x1c14f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178560u, 0x1C14F4u, 0x1C14FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C14FCu;
label_1c14fc:
    // 0x1c14fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c14fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c1500:
    // 0x1c1500: 0x2a220093  slti        $v0, $s1, 0x93
    ctx->pc = 0x1c1500u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)147) ? 1 : 0);
label_1c1504:
    // 0x1c1504: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_1c1508:
    if (ctx->pc == 0x1C1508u) {
        ctx->pc = 0x1C1508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1504u;
        // 0x1c1508: 0x26730080  addiu       $s3, $s3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C150Cu;
        goto label_1c150c;
    }
    ctx->pc = 0x1C1504u;
    {
        const bool branch_taken_0x1c1504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1504u;
        // 0x1c1508: 0x26730080  addiu       $s3, $s3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1504) {
            ctx->pc = 0x1C14E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c14e8;
        }
    }
    ctx->pc = 0x1C150Cu;
label_1c150c:
    // 0x1c150c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c150cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c1510:
    // 0x1c1510: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1c1510u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1c1514:
    // 0x1c1514: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
label_1c1518:
    if (ctx->pc == 0x1C1518u) {
        ctx->pc = 0x1C1518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1514u;
        // 0x1c1518: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C151Cu;
        goto label_1c151c;
    }
    ctx->pc = 0x1C1514u;
    {
        const bool branch_taken_0x1c1514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1514u;
        // 0x1c1518: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1514) {
            ctx->pc = 0x1C1484u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1484;
        }
    }
    ctx->pc = 0x1C151Cu;
label_1c151c:
    // 0x1c151c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c151cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1520:
    // 0x1c1520: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c1520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1524:
    // 0x1c1524: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c1524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c1528:
    // 0x1c1528: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c152c:
    // 0x1c152c: 0x24428ec0  addiu       $v0, $v0, -0x7140
    ctx->pc = 0x1c152cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938304));
label_1c1530:
    // 0x1c1530: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c1530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1534:
    // 0x1c1534: 0xc05e158  jal         func_178560
label_1c1538:
    if (ctx->pc == 0x1C1538u) {
        ctx->pc = 0x1C1538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1534u;
        // 0x1c1538: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C153Cu;
        goto label_1c153c;
    }
    ctx->pc = 0x1C1534u;
    SET_GPR_U32(ctx, 31, 0x1C153Cu);
    ctx->pc = 0x1C1538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1534u;
    // 0x1c1538: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178560u, 0x1C1534u, 0x1C153Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C153Cu;
label_1c153c:
    // 0x1c153c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c153cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c1540:
    // 0x1c1540: 0x2a230093  slti        $v1, $s1, 0x93
    ctx->pc = 0x1c1540u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)147) ? 1 : 0);
label_1c1544:
    // 0x1c1544: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_1c1548:
    if (ctx->pc == 0x1C1548u) {
        ctx->pc = 0x1C1548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1544u;
        // 0x1c1548: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C154Cu;
        goto label_1c154c;
    }
    ctx->pc = 0x1C1544u;
    {
        const bool branch_taken_0x1c1544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1544u;
        // 0x1c1548: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1544) {
            ctx->pc = 0x1C1524u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1524;
        }
    }
    ctx->pc = 0x1C154Cu;
label_1c154c:
    // 0x1c154c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c154cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1c1550:
    // 0x1c1550: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c1550u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c1554:
    // 0x1c1554: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c1554u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c1558:
    // 0x1c1558: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c1558u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c155c:
    // 0x1c155c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c155cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1560:
    // 0x1c1560: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1564:
    // 0x1c1564: 0x3e00008  jr          $ra
label_1c1568:
    if (ctx->pc == 0x1C1568u) {
        ctx->pc = 0x1C1568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1564u;
        // 0x1c1568: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C156Cu;
        goto label_1c156c;
    }
    ctx->pc = 0x1C1564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1564u;
        // 0x1c1568: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C156Cu;
label_1c156c:
    // 0x1c156c: 0x0  nop
    ctx->pc = 0x1c156cu;
    // NOP
label_1c1570:
    // 0x1c1570: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c1570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1c1574:
    // 0x1c1574: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c1574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1c1578:
    // 0x1c1578: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c1578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1c157c:
    // 0x1c157c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c157cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1c1580:
    // 0x1c1580: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c1580u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1584:
    // 0x1c1584: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c1584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c1588:
    // 0x1c1588: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c1588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c158c:
    // 0x1c158c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c158cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c1590:
    // 0x1c1590: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c1590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1594:
    // 0x1c1594: 0x27828948  addiu       $v0, $gp, -0x76B8
    ctx->pc = 0x1c1594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936904));
label_1c1598:
    // 0x1c1598: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c159c:
    // 0x1c159c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1c159cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1c15a0:
    // 0x1c15a0: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1c15a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c15a4:
    // 0x1c15a4: 0xc05e234  jal         func_1788D0
label_1c15a8:
    if (ctx->pc == 0x1C15A8u) {
        ctx->pc = 0x1C15A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C15A4u;
        // 0x1c15a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C15ACu;
        goto label_1c15ac;
    }
    ctx->pc = 0x1C15A4u;
    SET_GPR_U32(ctx, 31, 0x1C15ACu);
    ctx->pc = 0x1C15A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C15A4u;
    // 0x1c15a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1C15A4u, 0x1C15ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C15ACu;
label_1c15ac:
    // 0x1c15ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c15acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c15b0:
    // 0x1c15b0: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1c15b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1c15b4:
    // 0x1c15b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c15b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c15b8:
    // 0x1c15b8: 0xc05e1d4  jal         func_178750
label_1c15bc:
    if (ctx->pc == 0x1C15BCu) {
        ctx->pc = 0x1C15BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C15B8u;
        // 0x1c15bc: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C15C0u;
        goto label_1c15c0;
    }
    ctx->pc = 0x1C15B8u;
    SET_GPR_U32(ctx, 31, 0x1C15C0u);
    ctx->pc = 0x1C15BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C15B8u;
    // 0x1c15bc: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178750u, 0x1C15B8u, 0x1C15C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C15C0u;
label_1c15c0:
    // 0x1c15c0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1c15c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_1c15c4:
    // 0x1c15c4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1c15c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1c15c8:
    // 0x1c15c8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1c15c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_1c15cc:
    // 0x1c15cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c15ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c15d0:
    // 0x1c15d0: 0x3c02f531  lui         $v0, 0xF531
    ctx->pc = 0x1c15d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62769 << 16));
label_1c15d4:
    // 0x1c15d4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c15d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1c15d8:
    // 0x1c15d8: 0x34425315  ori         $v0, $v0, 0x5315
    ctx->pc = 0x1c15d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21269);
label_1c15dc:
    // 0x1c15dc: 0xfe430060  sd          $v1, 0x60($s2)
    ctx->pc = 0x1c15dcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 3));
label_1c15e0:
    // 0x1c15e0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1c15e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1c15e4:
    // 0x1c15e4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c15e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c15e8:
    // 0x1c15e8: 0x3c023153  lui         $v0, 0x3153
    ctx->pc = 0x1c15e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12627 << 16));
label_1c15ec:
    // 0x1c15ec: 0x34421097  ori         $v0, $v0, 0x1097
    ctx->pc = 0x1c15ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4247);
label_1c15f0:
    // 0x1c15f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c15f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1c15f4:
    // 0x1c15f4: 0xfe420068  sd          $v0, 0x68($s2)
    ctx->pc = 0x1c15f4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 104), GPR_U64(ctx, 2));
label_1c15f8:
    // 0x1c15f8: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x1c15f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_1c15fc:
    // 0x1c15fc: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x1c15fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_1c1600:
    // 0x1c1600: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1604:
    // 0x1c1604: 0xc05e158  jal         func_178560
label_1c1608:
    if (ctx->pc == 0x1C1608u) {
        ctx->pc = 0x1C1608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1604u;
        // 0x1c1608: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C160Cu;
        goto label_1c160c;
    }
    ctx->pc = 0x1C1604u;
    SET_GPR_U32(ctx, 31, 0x1C160Cu);
    ctx->pc = 0x1C1608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1604u;
    // 0x1c1608: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178560u, 0x1C1604u, 0x1C160Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C160Cu;
label_1c160c:
    // 0x1c160c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c160cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c1610:
    // 0x1c1610: 0x2a220034  slti        $v0, $s1, 0x34
    ctx->pc = 0x1c1610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)52) ? 1 : 0);
label_1c1614:
    // 0x1c1614: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_1c1618:
    if (ctx->pc == 0x1C1618u) {
        ctx->pc = 0x1C1618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1614u;
        // 0x1c1618: 0x26730080  addiu       $s3, $s3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C161Cu;
        goto label_1c161c;
    }
    ctx->pc = 0x1C1614u;
    {
        const bool branch_taken_0x1c1614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1614u;
        // 0x1c1618: 0x26730080  addiu       $s3, $s3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1614) {
            ctx->pc = 0x1C15F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c15f8;
        }
    }
    ctx->pc = 0x1C161Cu;
label_1c161c:
    // 0x1c161c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c161cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c1620:
    // 0x1c1620: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1c1620u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1c1624:
    // 0x1c1624: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
label_1c1628:
    if (ctx->pc == 0x1C1628u) {
        ctx->pc = 0x1C1628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1624u;
        // 0x1c1628: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C162Cu;
        goto label_1c162c;
    }
    ctx->pc = 0x1C1624u;
    {
        const bool branch_taken_0x1c1624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1624u;
        // 0x1c1628: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1624) {
            ctx->pc = 0x1C1594u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1594;
        }
    }
    ctx->pc = 0x1C162Cu;
label_1c162c:
    // 0x1c162c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c162cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1630:
    // 0x1c1630: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c1630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1634:
    // 0x1c1634: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c1634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c1638:
    // 0x1c1638: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c163c:
    // 0x1c163c: 0x2442d840  addiu       $v0, $v0, -0x27C0
    ctx->pc = 0x1c163cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957120));
label_1c1640:
    // 0x1c1640: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c1640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1644:
    // 0x1c1644: 0xc05e158  jal         func_178560
label_1c1648:
    if (ctx->pc == 0x1C1648u) {
        ctx->pc = 0x1C1648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1644u;
        // 0x1c1648: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C164Cu;
        goto label_1c164c;
    }
    ctx->pc = 0x1C1644u;
    SET_GPR_U32(ctx, 31, 0x1C164Cu);
    ctx->pc = 0x1C1648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1644u;
    // 0x1c1648: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178560u, 0x1C1644u, 0x1C164Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C164Cu;
label_1c164c:
    // 0x1c164c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c164cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c1650:
    // 0x1c1650: 0x2a230034  slti        $v1, $s1, 0x34
    ctx->pc = 0x1c1650u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)52) ? 1 : 0);
label_1c1654:
    // 0x1c1654: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_1c1658:
    if (ctx->pc == 0x1C1658u) {
        ctx->pc = 0x1C1658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1654u;
        // 0x1c1658: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C165Cu;
        goto label_1c165c;
    }
    ctx->pc = 0x1C1654u;
    {
        const bool branch_taken_0x1c1654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1654u;
        // 0x1c1658: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1654) {
            ctx->pc = 0x1C1634u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1634;
        }
    }
    ctx->pc = 0x1C165Cu;
label_1c165c:
    // 0x1c165c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c165cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1c1660:
    // 0x1c1660: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c1660u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c1664:
    // 0x1c1664: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c1664u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c1668:
    // 0x1c1668: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c1668u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c166c:
    // 0x1c166c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c166cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1670:
    // 0x1c1670: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1674:
    // 0x1c1674: 0x3e00008  jr          $ra
label_1c1678:
    if (ctx->pc == 0x1C1678u) {
        ctx->pc = 0x1C1678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1674u;
        // 0x1c1678: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C167Cu;
        goto label_1c167c;
    }
    ctx->pc = 0x1C1674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1674u;
        // 0x1c1678: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C167Cu;
label_1c167c:
    // 0x1c167c: 0x0  nop
    ctx->pc = 0x1c167cu;
    // NOP
label_1c1680:
    // 0x1c1680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c1684:
    // 0x1c1684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c1684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c1688:
    // 0x1c1688: 0xc070648  jal         func_1C1920
label_1c168c:
    if (ctx->pc == 0x1C168Cu) {
        ctx->pc = 0x1C1690u;
        goto label_1c1690;
    }
    ctx->pc = 0x1C1688u;
    SET_GPR_U32(ctx, 31, 0x1C1690u);
    ctx->pc = 0x1C1920u;
    { ctx->pc = 0x1c1920; return; }
    ctx->pc = 0x1C1690u;
label_1c1690:
    // 0x1c1690: 0xc0705e0  jal         func_1C1780
label_1c1694:
    if (ctx->pc == 0x1C1694u) {
        ctx->pc = 0x1C1698u;
        goto label_1c1698;
    }
    ctx->pc = 0x1C1690u;
    SET_GPR_U32(ctx, 31, 0x1C1698u);
    ctx->pc = 0x1C1780u;
    { ctx->pc = 0x1c1780; return; }
    ctx->pc = 0x1C1698u;
label_1c1698:
    // 0x1c1698: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c169c:
    // 0x1c169c: 0x3e00008  jr          $ra
label_1c16a0:
    if (ctx->pc == 0x1C16A0u) {
        ctx->pc = 0x1C16A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C169Cu;
        // 0x1c16a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C16A4u;
        goto label_1c16a4;
    }
    ctx->pc = 0x1C169Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C16A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C169Cu;
        // 0x1c16a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C169Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C16A4u;
label_1c16a4:
    // 0x1c16a4: 0x0  nop
    ctx->pc = 0x1c16a4u;
    // NOP
label_1c16a8:
    // 0x1c16a8: 0x0  nop
    ctx->pc = 0x1c16a8u;
    // NOP
label_1c16ac:
    // 0x1c16ac: 0x0  nop
    ctx->pc = 0x1c16acu;
    // NOP
label_1c16b0:
    // 0x1c16b0: 0x8f868920  lw          $a2, -0x76E0($gp)
    ctx->pc = 0x1c16b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
label_1c16b4:
    // 0x1c16b4: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
label_1c16b8:
    if (ctx->pc == 0x1C16B8u) {
        ctx->pc = 0x1C16B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C16B4u;
        // 0x1c16b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C16BCu;
        goto label_1c16bc;
    }
    ctx->pc = 0x1C16B4u;
    {
        const bool branch_taken_0x1c16b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C16B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C16B4u;
        // 0x1c16b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c16b4) {
            ctx->pc = 0x1C170Cu;
            goto label_1c170c;
        }
    }
    ctx->pc = 0x1C16BCu;
label_1c16bc:
    // 0x1c16bc: 0x10c50013  beq         $a2, $a1, . + 4 + (0x13 << 2)
label_1c16c0:
    if (ctx->pc == 0x1C16C0u) {
        ctx->pc = 0x1C16C4u;
        goto label_1c16c4;
    }
    ctx->pc = 0x1C16BCu;
    {
        const bool branch_taken_0x1c16bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x1c16bc) {
            ctx->pc = 0x1C170Cu;
            goto label_1c170c;
        }
    }
    ctx->pc = 0x1C16C4u;
label_1c16c4:
    // 0x1c16c4: 0x8f84892c  lw          $a0, -0x76D4($gp)
    ctx->pc = 0x1c16c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936876)));
label_1c16c8:
    // 0x1c16c8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c16c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c16cc:
    // 0x1c16cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1c16ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1c16d0:
    // 0x1c16d0: 0x14c30007  bne         $a2, $v1, . + 4 + (0x7 << 2)
label_1c16d4:
    if (ctx->pc == 0x1C16D4u) {
        ctx->pc = 0x1C16D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C16D0u;
        // 0x1c16d4: 0xaf84892c  sw          $a0, -0x76D4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936876), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C16D8u;
        goto label_1c16d8;
    }
    ctx->pc = 0x1C16D0u;
    {
        const bool branch_taken_0x1c16d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C16D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C16D0u;
        // 0x1c16d4: 0xaf84892c  sw          $a0, -0x76D4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936876), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c16d0) {
            ctx->pc = 0x1C16F0u;
            goto label_1c16f0;
        }
    }
    ctx->pc = 0x1C16D8u;
label_1c16d8:
    // 0x1c16d8: 0x8f83892c  lw          $v1, -0x76D4($gp)
    ctx->pc = 0x1c16d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936876)));
label_1c16dc:
    // 0x1c16dc: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x1c16dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_1c16e0:
    // 0x1c16e0: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_1c16e4:
    if (ctx->pc == 0x1C16E4u) {
        ctx->pc = 0x1C16E8u;
        goto label_1c16e8;
    }
    ctx->pc = 0x1C16E0u;
    {
        const bool branch_taken_0x1c16e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c16e0) {
            ctx->pc = 0x1C170Cu;
            goto label_1c170c;
        }
    }
    ctx->pc = 0x1C16E8u;
label_1c16e8:
    // 0x1c16e8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c16ec:
    if (ctx->pc == 0x1C16ECu) {
        ctx->pc = 0x1C16ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C16E8u;
        // 0x1c16ec: 0xaf808920  sw          $zero, -0x76E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936864), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C16F0u;
        goto label_1c16f0;
    }
    ctx->pc = 0x1C16E8u;
    {
        const bool branch_taken_0x1c16e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C16ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C16E8u;
        // 0x1c16ec: 0xaf808920  sw          $zero, -0x76E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936864), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c16e8) {
            ctx->pc = 0x1C170Cu;
            goto label_1c170c;
        }
    }
    ctx->pc = 0x1C16F0u;
label_1c16f0:
    // 0x1c16f0: 0x8f83892c  lw          $v1, -0x76D4($gp)
    ctx->pc = 0x1c16f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936876)));
label_1c16f4:
    // 0x1c16f4: 0x2863000c  slti        $v1, $v1, 0xC
    ctx->pc = 0x1c16f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
label_1c16f8:
    // 0x1c16f8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1c16fc:
    if (ctx->pc == 0x1C16FCu) {
        ctx->pc = 0x1C16FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C16F8u;
        // 0x1c16fc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1700u;
        goto label_1c1700;
    }
    ctx->pc = 0x1C16F8u;
    {
        const bool branch_taken_0x1c16f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C16FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C16F8u;
        // 0x1c16fc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c16f8) {
            ctx->pc = 0x1C1708u;
            goto label_1c1708;
        }
    }
    ctx->pc = 0x1C1700u;
label_1c1700:
    // 0x1c1700: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c1704:
    if (ctx->pc == 0x1C1704u) {
        ctx->pc = 0x1C1704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1700u;
        // 0x1c1704: 0xaf858920  sw          $a1, -0x76E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936864), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1708u;
        goto label_1c1708;
    }
    ctx->pc = 0x1C1700u;
    {
        const bool branch_taken_0x1c1700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1700u;
        // 0x1c1704: 0xaf858920  sw          $a1, -0x76E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936864), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1700) {
            ctx->pc = 0x1C170Cu;
            goto label_1c170c;
        }
    }
    ctx->pc = 0x1C1708u;
label_1c1708:
    // 0x1c1708: 0xaf838920  sw          $v1, -0x76E0($gp)
    ctx->pc = 0x1c1708u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936864), GPR_U32(ctx, 3));
label_1c170c:
    // 0x1c170c: 0x8f868930  lw          $a2, -0x76D0($gp)
    ctx->pc = 0x1c170cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936880)));
label_1c1710:
    // 0x1c1710: 0x10c00017  beqz        $a2, . + 4 + (0x17 << 2)
label_1c1714:
    if (ctx->pc == 0x1C1714u) {
        ctx->pc = 0x1C1714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1710u;
        // 0x1c1714: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1718u;
        goto label_1c1718;
    }
    ctx->pc = 0x1C1710u;
    {
        const bool branch_taken_0x1c1710 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1710u;
        // 0x1c1714: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1710) {
            ctx->pc = 0x1C1770u;
            goto label_1c1770;
        }
    }
    ctx->pc = 0x1C1718u;
label_1c1718:
    // 0x1c1718: 0x10c50015  beq         $a2, $a1, . + 4 + (0x15 << 2)
label_1c171c:
    if (ctx->pc == 0x1C171Cu) {
        ctx->pc = 0x1C1720u;
        goto label_1c1720;
    }
    ctx->pc = 0x1C1718u;
    {
        const bool branch_taken_0x1c1718 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x1c1718) {
            ctx->pc = 0x1C1770u;
            goto label_1c1770;
        }
    }
    ctx->pc = 0x1C1720u;
label_1c1720:
    // 0x1c1720: 0x8f84893c  lw          $a0, -0x76C4($gp)
    ctx->pc = 0x1c1720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936892)));
label_1c1724:
    // 0x1c1724: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c1724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c1728:
    // 0x1c1728: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1c1728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1c172c:
    // 0x1c172c: 0x14c30007  bne         $a2, $v1, . + 4 + (0x7 << 2)
label_1c1730:
    if (ctx->pc == 0x1C1730u) {
        ctx->pc = 0x1C1730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C172Cu;
        // 0x1c1730: 0xaf84893c  sw          $a0, -0x76C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936892), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1734u;
        goto label_1c1734;
    }
    ctx->pc = 0x1C172Cu;
    {
        const bool branch_taken_0x1c172c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C1730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C172Cu;
        // 0x1c1730: 0xaf84893c  sw          $a0, -0x76C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936892), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c172c) {
            ctx->pc = 0x1C174Cu;
            goto label_1c174c;
        }
    }
    ctx->pc = 0x1C1734u;
label_1c1734:
    // 0x1c1734: 0x8f83893c  lw          $v1, -0x76C4($gp)
    ctx->pc = 0x1c1734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936892)));
label_1c1738:
    // 0x1c1738: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x1c1738u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_1c173c:
    // 0x1c173c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_1c1740:
    if (ctx->pc == 0x1C1740u) {
        ctx->pc = 0x1C1744u;
        goto label_1c1744;
    }
    ctx->pc = 0x1C173Cu;
    {
        const bool branch_taken_0x1c173c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c173c) {
            ctx->pc = 0x1C1770u;
            goto label_1c1770;
        }
    }
    ctx->pc = 0x1C1744u;
label_1c1744:
    // 0x1c1744: 0x1000000a  b           . + 4 + (0xA << 2)
label_1c1748:
    if (ctx->pc == 0x1C1748u) {
        ctx->pc = 0x1C1748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1744u;
        // 0x1c1748: 0xaf808930  sw          $zero, -0x76D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936880), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C174Cu;
        goto label_1c174c;
    }
    ctx->pc = 0x1C1744u;
    {
        const bool branch_taken_0x1c1744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1744u;
        // 0x1c1748: 0xaf808930  sw          $zero, -0x76D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936880), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1744) {
            ctx->pc = 0x1C1770u;
            goto label_1c1770;
        }
    }
    ctx->pc = 0x1C174Cu;
label_1c174c:
    // 0x1c174c: 0x8f838934  lw          $v1, -0x76CC($gp)
    ctx->pc = 0x1c174cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936884)));
label_1c1750:
    // 0x1c1750: 0x8f84893c  lw          $a0, -0x76C4($gp)
    ctx->pc = 0x1c1750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936892)));
label_1c1754:
    // 0x1c1754: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1c1754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_1c1758:
    // 0x1c1758: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1c1758u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1c175c:
    // 0x1c175c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1c1760:
    if (ctx->pc == 0x1C1760u) {
        ctx->pc = 0x1C1760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C175Cu;
        // 0x1c1760: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1764u;
        goto label_1c1764;
    }
    ctx->pc = 0x1C175Cu;
    {
        const bool branch_taken_0x1c175c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C175Cu;
        // 0x1c1760: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c175c) {
            ctx->pc = 0x1C176Cu;
            goto label_1c176c;
        }
    }
    ctx->pc = 0x1C1764u;
label_1c1764:
    // 0x1c1764: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c1768:
    if (ctx->pc == 0x1C1768u) {
        ctx->pc = 0x1C1768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1764u;
        // 0x1c1768: 0xaf858930  sw          $a1, -0x76D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936880), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C176Cu;
        goto label_1c176c;
    }
    ctx->pc = 0x1C1764u;
    {
        const bool branch_taken_0x1c1764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1764u;
        // 0x1c1768: 0xaf858930  sw          $a1, -0x76D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936880), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1764) {
            ctx->pc = 0x1C1770u;
            goto label_1c1770;
        }
    }
    ctx->pc = 0x1C176Cu;
label_1c176c:
    // 0x1c176c: 0xaf838930  sw          $v1, -0x76D0($gp)
    ctx->pc = 0x1c176cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936880), GPR_U32(ctx, 3));
label_1c1770:
    // 0x1c1770: 0x3e00008  jr          $ra
label_1c1774:
    if (ctx->pc == 0x1C1774u) {
        ctx->pc = 0x1C1778u;
        { ctx->pc = 0x1c1778; return; }
    }
    ctx->pc = 0x1C1770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1778u;
    ctx->pc = 0x1c1778u;
    return;
}
