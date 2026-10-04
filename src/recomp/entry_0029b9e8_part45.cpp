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


void entry_0029b9e8_part45(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2b11a8u: goto label_2b11a8;
        case 0x2b11acu: goto label_2b11ac;
        case 0x2b11b0u: goto label_2b11b0;
        case 0x2b11b4u: goto label_2b11b4;
        case 0x2b11b8u: goto label_2b11b8;
        case 0x2b11bcu: goto label_2b11bc;
        case 0x2b11c0u: goto label_2b11c0;
        case 0x2b11c4u: goto label_2b11c4;
        case 0x2b11c8u: goto label_2b11c8;
        case 0x2b11ccu: goto label_2b11cc;
        case 0x2b11d0u: goto label_2b11d0;
        case 0x2b11d4u: goto label_2b11d4;
        case 0x2b11d8u: goto label_2b11d8;
        case 0x2b11dcu: goto label_2b11dc;
        case 0x2b11e0u: goto label_2b11e0;
        case 0x2b11e4u: goto label_2b11e4;
        case 0x2b11e8u: goto label_2b11e8;
        case 0x2b11ecu: goto label_2b11ec;
        case 0x2b11f0u: goto label_2b11f0;
        case 0x2b11f4u: goto label_2b11f4;
        case 0x2b11f8u: goto label_2b11f8;
        case 0x2b11fcu: goto label_2b11fc;
        case 0x2b1200u: goto label_2b1200;
        case 0x2b1204u: goto label_2b1204;
        case 0x2b1208u: goto label_2b1208;
        case 0x2b120cu: goto label_2b120c;
        case 0x2b1210u: goto label_2b1210;
        case 0x2b1214u: goto label_2b1214;
        case 0x2b1218u: goto label_2b1218;
        case 0x2b121cu: goto label_2b121c;
        case 0x2b1220u: goto label_2b1220;
        case 0x2b1224u: goto label_2b1224;
        case 0x2b1228u: goto label_2b1228;
        case 0x2b122cu: goto label_2b122c;
        case 0x2b1230u: goto label_2b1230;
        case 0x2b1234u: goto label_2b1234;
        case 0x2b1238u: goto label_2b1238;
        case 0x2b123cu: goto label_2b123c;
        case 0x2b1240u: goto label_2b1240;
        case 0x2b1244u: goto label_2b1244;
        case 0x2b1248u: goto label_2b1248;
        case 0x2b124cu: goto label_2b124c;
        case 0x2b1250u: goto label_2b1250;
        case 0x2b1254u: goto label_2b1254;
        case 0x2b1258u: goto label_2b1258;
        case 0x2b125cu: goto label_2b125c;
        case 0x2b1260u: goto label_2b1260;
        case 0x2b1264u: goto label_2b1264;
        case 0x2b1268u: goto label_2b1268;
        case 0x2b126cu: goto label_2b126c;
        case 0x2b1270u: goto label_2b1270;
        case 0x2b1274u: goto label_2b1274;
        case 0x2b1278u: goto label_2b1278;
        case 0x2b127cu: goto label_2b127c;
        case 0x2b1280u: goto label_2b1280;
        case 0x2b1284u: goto label_2b1284;
        case 0x2b1288u: goto label_2b1288;
        case 0x2b128cu: goto label_2b128c;
        case 0x2b1290u: goto label_2b1290;
        case 0x2b1294u: goto label_2b1294;
        case 0x2b1298u: goto label_2b1298;
        case 0x2b129cu: goto label_2b129c;
        case 0x2b12a0u: goto label_2b12a0;
        case 0x2b12a4u: goto label_2b12a4;
        case 0x2b12a8u: goto label_2b12a8;
        case 0x2b12acu: goto label_2b12ac;
        case 0x2b12b0u: goto label_2b12b0;
        case 0x2b12b4u: goto label_2b12b4;
        case 0x2b12b8u: goto label_2b12b8;
        case 0x2b12bcu: goto label_2b12bc;
        case 0x2b12c0u: goto label_2b12c0;
        case 0x2b12c4u: goto label_2b12c4;
        case 0x2b12c8u: goto label_2b12c8;
        case 0x2b12ccu: goto label_2b12cc;
        case 0x2b12d0u: goto label_2b12d0;
        case 0x2b12d4u: goto label_2b12d4;
        case 0x2b12d8u: goto label_2b12d8;
        case 0x2b12dcu: goto label_2b12dc;
        case 0x2b12e0u: goto label_2b12e0;
        case 0x2b12e4u: goto label_2b12e4;
        case 0x2b12e8u: goto label_2b12e8;
        case 0x2b12ecu: goto label_2b12ec;
        case 0x2b12f0u: goto label_2b12f0;
        case 0x2b12f4u: goto label_2b12f4;
        case 0x2b12f8u: goto label_2b12f8;
        case 0x2b12fcu: goto label_2b12fc;
        case 0x2b1300u: goto label_2b1300;
        case 0x2b1304u: goto label_2b1304;
        case 0x2b1308u: goto label_2b1308;
        case 0x2b130cu: goto label_2b130c;
        case 0x2b1310u: goto label_2b1310;
        case 0x2b1314u: goto label_2b1314;
        case 0x2b1318u: goto label_2b1318;
        case 0x2b131cu: goto label_2b131c;
        case 0x2b1320u: goto label_2b1320;
        case 0x2b1324u: goto label_2b1324;
        case 0x2b1328u: goto label_2b1328;
        case 0x2b132cu: goto label_2b132c;
        case 0x2b1330u: goto label_2b1330;
        case 0x2b1334u: goto label_2b1334;
        case 0x2b1338u: goto label_2b1338;
        case 0x2b133cu: goto label_2b133c;
        case 0x2b1340u: goto label_2b1340;
        case 0x2b1344u: goto label_2b1344;
        case 0x2b1348u: goto label_2b1348;
        case 0x2b134cu: goto label_2b134c;
        case 0x2b1350u: goto label_2b1350;
        case 0x2b1354u: goto label_2b1354;
        case 0x2b1358u: goto label_2b1358;
        case 0x2b135cu: goto label_2b135c;
        case 0x2b1360u: goto label_2b1360;
        case 0x2b1364u: goto label_2b1364;
        case 0x2b1368u: goto label_2b1368;
        case 0x2b136cu: goto label_2b136c;
        case 0x2b1370u: goto label_2b1370;
        case 0x2b1374u: goto label_2b1374;
        case 0x2b1378u: goto label_2b1378;
        case 0x2b137cu: goto label_2b137c;
        case 0x2b1380u: goto label_2b1380;
        case 0x2b1384u: goto label_2b1384;
        case 0x2b1388u: goto label_2b1388;
        case 0x2b138cu: goto label_2b138c;
        case 0x2b1390u: goto label_2b1390;
        case 0x2b1394u: goto label_2b1394;
        case 0x2b1398u: goto label_2b1398;
        case 0x2b139cu: goto label_2b139c;
        case 0x2b13a0u: goto label_2b13a0;
        case 0x2b13a4u: goto label_2b13a4;
        case 0x2b13a8u: goto label_2b13a8;
        case 0x2b13acu: goto label_2b13ac;
        case 0x2b13b0u: goto label_2b13b0;
        case 0x2b13b4u: goto label_2b13b4;
        case 0x2b13b8u: goto label_2b13b8;
        case 0x2b13bcu: goto label_2b13bc;
        case 0x2b13c0u: goto label_2b13c0;
        case 0x2b13c4u: goto label_2b13c4;
        case 0x2b13c8u: goto label_2b13c8;
        case 0x2b13ccu: goto label_2b13cc;
        case 0x2b13d0u: goto label_2b13d0;
        case 0x2b13d4u: goto label_2b13d4;
        case 0x2b13d8u: goto label_2b13d8;
        case 0x2b13dcu: goto label_2b13dc;
        case 0x2b13e0u: goto label_2b13e0;
        case 0x2b13e4u: goto label_2b13e4;
        case 0x2b13e8u: goto label_2b13e8;
        case 0x2b13ecu: goto label_2b13ec;
        case 0x2b13f0u: goto label_2b13f0;
        case 0x2b13f4u: goto label_2b13f4;
        case 0x2b13f8u: goto label_2b13f8;
        case 0x2b13fcu: goto label_2b13fc;
        case 0x2b1400u: goto label_2b1400;
        case 0x2b1404u: goto label_2b1404;
        case 0x2b1408u: goto label_2b1408;
        case 0x2b140cu: goto label_2b140c;
        case 0x2b1410u: goto label_2b1410;
        case 0x2b1414u: goto label_2b1414;
        case 0x2b1418u: goto label_2b1418;
        case 0x2b141cu: goto label_2b141c;
        case 0x2b1420u: goto label_2b1420;
        case 0x2b1424u: goto label_2b1424;
        case 0x2b1428u: goto label_2b1428;
        case 0x2b142cu: goto label_2b142c;
        case 0x2b1430u: goto label_2b1430;
        case 0x2b1434u: goto label_2b1434;
        case 0x2b1438u: goto label_2b1438;
        case 0x2b143cu: goto label_2b143c;
        case 0x2b1440u: goto label_2b1440;
        case 0x2b1444u: goto label_2b1444;
        case 0x2b1448u: goto label_2b1448;
        case 0x2b144cu: goto label_2b144c;
        case 0x2b1450u: goto label_2b1450;
        case 0x2b1454u: goto label_2b1454;
        case 0x2b1458u: goto label_2b1458;
        case 0x2b145cu: goto label_2b145c;
        case 0x2b1460u: goto label_2b1460;
        case 0x2b1464u: goto label_2b1464;
        case 0x2b1468u: goto label_2b1468;
        case 0x2b146cu: goto label_2b146c;
        case 0x2b1470u: goto label_2b1470;
        case 0x2b1474u: goto label_2b1474;
        case 0x2b1478u: goto label_2b1478;
        case 0x2b147cu: goto label_2b147c;
        case 0x2b1480u: goto label_2b1480;
        case 0x2b1484u: goto label_2b1484;
        case 0x2b1488u: goto label_2b1488;
        case 0x2b148cu: goto label_2b148c;
        case 0x2b1490u: goto label_2b1490;
        case 0x2b1494u: goto label_2b1494;
        case 0x2b1498u: goto label_2b1498;
        case 0x2b149cu: goto label_2b149c;
        case 0x2b14a0u: goto label_2b14a0;
        case 0x2b14a4u: goto label_2b14a4;
        case 0x2b14a8u: goto label_2b14a8;
        case 0x2b14acu: goto label_2b14ac;
        case 0x2b14b0u: goto label_2b14b0;
        case 0x2b14b4u: goto label_2b14b4;
        case 0x2b14b8u: goto label_2b14b8;
        case 0x2b14bcu: goto label_2b14bc;
        case 0x2b14c0u: goto label_2b14c0;
        case 0x2b14c4u: goto label_2b14c4;
        case 0x2b14c8u: goto label_2b14c8;
        case 0x2b14ccu: goto label_2b14cc;
        case 0x2b14d0u: goto label_2b14d0;
        case 0x2b14d4u: goto label_2b14d4;
        case 0x2b14d8u: goto label_2b14d8;
        case 0x2b14dcu: goto label_2b14dc;
        case 0x2b14e0u: goto label_2b14e0;
        case 0x2b14e4u: goto label_2b14e4;
        case 0x2b14e8u: goto label_2b14e8;
        case 0x2b14ecu: goto label_2b14ec;
        case 0x2b14f0u: goto label_2b14f0;
        case 0x2b14f4u: goto label_2b14f4;
        case 0x2b14f8u: goto label_2b14f8;
        case 0x2b14fcu: goto label_2b14fc;
        case 0x2b1500u: goto label_2b1500;
        case 0x2b1504u: goto label_2b1504;
        case 0x2b1508u: goto label_2b1508;
        case 0x2b150cu: goto label_2b150c;
        case 0x2b1510u: goto label_2b1510;
        case 0x2b1514u: goto label_2b1514;
        case 0x2b1518u: goto label_2b1518;
        case 0x2b151cu: goto label_2b151c;
        case 0x2b1520u: goto label_2b1520;
        case 0x2b1524u: goto label_2b1524;
        case 0x2b1528u: goto label_2b1528;
        case 0x2b152cu: goto label_2b152c;
        case 0x2b1530u: goto label_2b1530;
        case 0x2b1534u: goto label_2b1534;
        case 0x2b1538u: goto label_2b1538;
        case 0x2b153cu: goto label_2b153c;
        case 0x2b1540u: goto label_2b1540;
        case 0x2b1544u: goto label_2b1544;
        case 0x2b1548u: goto label_2b1548;
        case 0x2b154cu: goto label_2b154c;
        case 0x2b1550u: goto label_2b1550;
        case 0x2b1554u: goto label_2b1554;
        case 0x2b1558u: goto label_2b1558;
        case 0x2b155cu: goto label_2b155c;
        case 0x2b1560u: goto label_2b1560;
        case 0x2b1564u: goto label_2b1564;
        case 0x2b1568u: goto label_2b1568;
        case 0x2b156cu: goto label_2b156c;
        case 0x2b1570u: goto label_2b1570;
        case 0x2b1574u: goto label_2b1574;
        case 0x2b1578u: goto label_2b1578;
        case 0x2b157cu: goto label_2b157c;
        case 0x2b1580u: goto label_2b1580;
        case 0x2b1584u: goto label_2b1584;
        case 0x2b1588u: goto label_2b1588;
        case 0x2b158cu: goto label_2b158c;
        case 0x2b1590u: goto label_2b1590;
        case 0x2b1594u: goto label_2b1594;
        case 0x2b1598u: goto label_2b1598;
        case 0x2b159cu: goto label_2b159c;
        case 0x2b15a0u: goto label_2b15a0;
        case 0x2b15a4u: goto label_2b15a4;
        case 0x2b15a8u: goto label_2b15a8;
        case 0x2b15acu: goto label_2b15ac;
        case 0x2b15b0u: goto label_2b15b0;
        case 0x2b15b4u: goto label_2b15b4;
        case 0x2b15b8u: goto label_2b15b8;
        case 0x2b15bcu: goto label_2b15bc;
        case 0x2b15c0u: goto label_2b15c0;
        case 0x2b15c4u: goto label_2b15c4;
        case 0x2b15c8u: goto label_2b15c8;
        case 0x2b15ccu: goto label_2b15cc;
        case 0x2b15d0u: goto label_2b15d0;
        case 0x2b15d4u: goto label_2b15d4;
        case 0x2b15d8u: goto label_2b15d8;
        case 0x2b15dcu: goto label_2b15dc;
        case 0x2b15e0u: goto label_2b15e0;
        case 0x2b15e4u: goto label_2b15e4;
        case 0x2b15e8u: goto label_2b15e8;
        case 0x2b15ecu: goto label_2b15ec;
        case 0x2b15f0u: goto label_2b15f0;
        case 0x2b15f4u: goto label_2b15f4;
        case 0x2b15f8u: goto label_2b15f8;
        case 0x2b15fcu: goto label_2b15fc;
        case 0x2b1600u: goto label_2b1600;
        case 0x2b1604u: goto label_2b1604;
        case 0x2b1608u: goto label_2b1608;
        case 0x2b160cu: goto label_2b160c;
        case 0x2b1610u: goto label_2b1610;
        case 0x2b1614u: goto label_2b1614;
        case 0x2b1618u: goto label_2b1618;
        case 0x2b161cu: goto label_2b161c;
        case 0x2b1620u: goto label_2b1620;
        case 0x2b1624u: goto label_2b1624;
        case 0x2b1628u: goto label_2b1628;
        case 0x2b162cu: goto label_2b162c;
        case 0x2b1630u: goto label_2b1630;
        case 0x2b1634u: goto label_2b1634;
        case 0x2b1638u: goto label_2b1638;
        case 0x2b163cu: goto label_2b163c;
        case 0x2b1640u: goto label_2b1640;
        case 0x2b1644u: goto label_2b1644;
        case 0x2b1648u: goto label_2b1648;
        case 0x2b164cu: goto label_2b164c;
        case 0x2b1650u: goto label_2b1650;
        case 0x2b1654u: goto label_2b1654;
        case 0x2b1658u: goto label_2b1658;
        case 0x2b165cu: goto label_2b165c;
        case 0x2b1660u: goto label_2b1660;
        case 0x2b1664u: goto label_2b1664;
        case 0x2b1668u: goto label_2b1668;
        case 0x2b166cu: goto label_2b166c;
        case 0x2b1670u: goto label_2b1670;
        case 0x2b1674u: goto label_2b1674;
        case 0x2b1678u: goto label_2b1678;
        case 0x2b167cu: goto label_2b167c;
        case 0x2b1680u: goto label_2b1680;
        case 0x2b1684u: goto label_2b1684;
        case 0x2b1688u: goto label_2b1688;
        case 0x2b168cu: goto label_2b168c;
        case 0x2b1690u: goto label_2b1690;
        case 0x2b1694u: goto label_2b1694;
        case 0x2b1698u: goto label_2b1698;
        case 0x2b169cu: goto label_2b169c;
        case 0x2b16a0u: goto label_2b16a0;
        case 0x2b16a4u: goto label_2b16a4;
        case 0x2b16a8u: goto label_2b16a8;
        case 0x2b16acu: goto label_2b16ac;
        case 0x2b16b0u: goto label_2b16b0;
        case 0x2b16b4u: goto label_2b16b4;
        case 0x2b16b8u: goto label_2b16b8;
        case 0x2b16bcu: goto label_2b16bc;
        case 0x2b16c0u: goto label_2b16c0;
        case 0x2b16c4u: goto label_2b16c4;
        case 0x2b16c8u: goto label_2b16c8;
        case 0x2b16ccu: goto label_2b16cc;
        case 0x2b16d0u: goto label_2b16d0;
        case 0x2b16d4u: goto label_2b16d4;
        case 0x2b16d8u: goto label_2b16d8;
        case 0x2b16dcu: goto label_2b16dc;
        case 0x2b16e0u: goto label_2b16e0;
        case 0x2b16e4u: goto label_2b16e4;
        case 0x2b16e8u: goto label_2b16e8;
        case 0x2b16ecu: goto label_2b16ec;
        case 0x2b16f0u: goto label_2b16f0;
        case 0x2b16f4u: goto label_2b16f4;
        case 0x2b16f8u: goto label_2b16f8;
        case 0x2b16fcu: goto label_2b16fc;
        case 0x2b1700u: goto label_2b1700;
        case 0x2b1704u: goto label_2b1704;
        case 0x2b1708u: goto label_2b1708;
        case 0x2b170cu: goto label_2b170c;
        case 0x2b1710u: goto label_2b1710;
        case 0x2b1714u: goto label_2b1714;
        case 0x2b1718u: goto label_2b1718;
        case 0x2b171cu: goto label_2b171c;
        case 0x2b1720u: goto label_2b1720;
        case 0x2b1724u: goto label_2b1724;
        case 0x2b1728u: goto label_2b1728;
        case 0x2b172cu: goto label_2b172c;
        case 0x2b1730u: goto label_2b1730;
        case 0x2b1734u: goto label_2b1734;
        case 0x2b1738u: goto label_2b1738;
        case 0x2b173cu: goto label_2b173c;
        case 0x2b1740u: goto label_2b1740;
        case 0x2b1744u: goto label_2b1744;
        case 0x2b1748u: goto label_2b1748;
        case 0x2b174cu: goto label_2b174c;
        case 0x2b1750u: goto label_2b1750;
        case 0x2b1754u: goto label_2b1754;
        case 0x2b1758u: goto label_2b1758;
        case 0x2b175cu: goto label_2b175c;
        case 0x2b1760u: goto label_2b1760;
        case 0x2b1764u: goto label_2b1764;
        case 0x2b1768u: goto label_2b1768;
        case 0x2b176cu: goto label_2b176c;
        case 0x2b1770u: goto label_2b1770;
        case 0x2b1774u: goto label_2b1774;
        case 0x2b1778u: goto label_2b1778;
        case 0x2b177cu: goto label_2b177c;
        case 0x2b1780u: goto label_2b1780;
        case 0x2b1784u: goto label_2b1784;
        case 0x2b1788u: goto label_2b1788;
        case 0x2b178cu: goto label_2b178c;
        case 0x2b1790u: goto label_2b1790;
        case 0x2b1794u: goto label_2b1794;
        case 0x2b1798u: goto label_2b1798;
        case 0x2b179cu: goto label_2b179c;
        case 0x2b17a0u: goto label_2b17a0;
        case 0x2b17a4u: goto label_2b17a4;
        case 0x2b17a8u: goto label_2b17a8;
        case 0x2b17acu: goto label_2b17ac;
        case 0x2b17b0u: goto label_2b17b0;
        case 0x2b17b4u: goto label_2b17b4;
        case 0x2b17b8u: goto label_2b17b8;
        case 0x2b17bcu: goto label_2b17bc;
        case 0x2b17c0u: goto label_2b17c0;
        case 0x2b17c4u: goto label_2b17c4;
        case 0x2b17c8u: goto label_2b17c8;
        case 0x2b17ccu: goto label_2b17cc;
        case 0x2b17d0u: goto label_2b17d0;
        case 0x2b17d4u: goto label_2b17d4;
        case 0x2b17d8u: goto label_2b17d8;
        case 0x2b17dcu: goto label_2b17dc;
        case 0x2b17e0u: goto label_2b17e0;
        case 0x2b17e4u: goto label_2b17e4;
        case 0x2b17e8u: goto label_2b17e8;
        case 0x2b17ecu: goto label_2b17ec;
        case 0x2b17f0u: goto label_2b17f0;
        case 0x2b17f4u: goto label_2b17f4;
        case 0x2b17f8u: goto label_2b17f8;
        case 0x2b17fcu: goto label_2b17fc;
        case 0x2b1800u: goto label_2b1800;
        case 0x2b1804u: goto label_2b1804;
        case 0x2b1808u: goto label_2b1808;
        case 0x2b180cu: goto label_2b180c;
        case 0x2b1810u: goto label_2b1810;
        case 0x2b1814u: goto label_2b1814;
        case 0x2b1818u: goto label_2b1818;
        case 0x2b181cu: goto label_2b181c;
        case 0x2b1820u: goto label_2b1820;
        case 0x2b1824u: goto label_2b1824;
        case 0x2b1828u: goto label_2b1828;
        case 0x2b182cu: goto label_2b182c;
        case 0x2b1830u: goto label_2b1830;
        case 0x2b1834u: goto label_2b1834;
        case 0x2b1838u: goto label_2b1838;
        case 0x2b183cu: goto label_2b183c;
        case 0x2b1840u: goto label_2b1840;
        case 0x2b1844u: goto label_2b1844;
        case 0x2b1848u: goto label_2b1848;
        case 0x2b184cu: goto label_2b184c;
        case 0x2b1850u: goto label_2b1850;
        case 0x2b1854u: goto label_2b1854;
        case 0x2b1858u: goto label_2b1858;
        case 0x2b185cu: goto label_2b185c;
        case 0x2b1860u: goto label_2b1860;
        case 0x2b1864u: goto label_2b1864;
        case 0x2b1868u: goto label_2b1868;
        case 0x2b186cu: goto label_2b186c;
        case 0x2b1870u: goto label_2b1870;
        case 0x2b1874u: goto label_2b1874;
        case 0x2b1878u: goto label_2b1878;
        case 0x2b187cu: goto label_2b187c;
        case 0x2b1880u: goto label_2b1880;
        case 0x2b1884u: goto label_2b1884;
        case 0x2b1888u: goto label_2b1888;
        case 0x2b188cu: goto label_2b188c;
        case 0x2b1890u: goto label_2b1890;
        case 0x2b1894u: goto label_2b1894;
        case 0x2b1898u: goto label_2b1898;
        case 0x2b189cu: goto label_2b189c;
        case 0x2b18a0u: goto label_2b18a0;
        case 0x2b18a4u: goto label_2b18a4;
        case 0x2b18a8u: goto label_2b18a8;
        case 0x2b18acu: goto label_2b18ac;
        case 0x2b18b0u: goto label_2b18b0;
        case 0x2b18b4u: goto label_2b18b4;
        case 0x2b18b8u: goto label_2b18b8;
        case 0x2b18bcu: goto label_2b18bc;
        case 0x2b18c0u: goto label_2b18c0;
        case 0x2b18c4u: goto label_2b18c4;
        case 0x2b18c8u: goto label_2b18c8;
        case 0x2b18ccu: goto label_2b18cc;
        case 0x2b18d0u: goto label_2b18d0;
        case 0x2b18d4u: goto label_2b18d4;
        case 0x2b18d8u: goto label_2b18d8;
        case 0x2b18dcu: goto label_2b18dc;
        case 0x2b18e0u: goto label_2b18e0;
        case 0x2b18e4u: goto label_2b18e4;
        case 0x2b18e8u: goto label_2b18e8;
        case 0x2b18ecu: goto label_2b18ec;
        case 0x2b18f0u: goto label_2b18f0;
        case 0x2b18f4u: goto label_2b18f4;
        case 0x2b18f8u: goto label_2b18f8;
        case 0x2b18fcu: goto label_2b18fc;
        case 0x2b1900u: goto label_2b1900;
        case 0x2b1904u: goto label_2b1904;
        case 0x2b1908u: goto label_2b1908;
        case 0x2b190cu: goto label_2b190c;
        case 0x2b1910u: goto label_2b1910;
        case 0x2b1914u: goto label_2b1914;
        case 0x2b1918u: goto label_2b1918;
        case 0x2b191cu: goto label_2b191c;
        case 0x2b1920u: goto label_2b1920;
        case 0x2b1924u: goto label_2b1924;
        case 0x2b1928u: goto label_2b1928;
        case 0x2b192cu: goto label_2b192c;
        case 0x2b1930u: goto label_2b1930;
        case 0x2b1934u: goto label_2b1934;
        case 0x2b1938u: goto label_2b1938;
        case 0x2b193cu: goto label_2b193c;
        case 0x2b1940u: goto label_2b1940;
        case 0x2b1944u: goto label_2b1944;
        case 0x2b1948u: goto label_2b1948;
        case 0x2b194cu: goto label_2b194c;
        case 0x2b1950u: goto label_2b1950;
        case 0x2b1954u: goto label_2b1954;
        case 0x2b1958u: goto label_2b1958;
        case 0x2b195cu: goto label_2b195c;
        case 0x2b1960u: goto label_2b1960;
        case 0x2b1964u: goto label_2b1964;
        case 0x2b1968u: goto label_2b1968;
        case 0x2b196cu: goto label_2b196c;
        case 0x2b1970u: goto label_2b1970;
        case 0x2b1974u: goto label_2b1974;
        default: return;
    }

label_2b11a8:
    // 0x2b11a8: 0x0  nop
    ctx->pc = 0x2b11a8u;
    // NOP
label_2b11ac:
    // 0x2b11ac: 0x0  nop
    ctx->pc = 0x2b11acu;
    // NOP
label_2b11b0:
    // 0x2b11b0: 0x0  nop
    ctx->pc = 0x2b11b0u;
    // NOP
label_2b11b4:
    // 0x2b11b4: 0x0  nop
    ctx->pc = 0x2b11b4u;
    // NOP
label_2b11b8:
    // 0x2b11b8: 0x0  nop
    ctx->pc = 0x2b11b8u;
    // NOP
label_2b11bc:
    // 0x2b11bc: 0x0  nop
    ctx->pc = 0x2b11bcu;
    // NOP
label_2b11c0:
    // 0x2b11c0: 0x0  nop
    ctx->pc = 0x2b11c0u;
    // NOP
label_2b11c4:
    // 0x2b11c4: 0x0  nop
    ctx->pc = 0x2b11c4u;
    // NOP
label_2b11c8:
    // 0x2b11c8: 0x0  nop
    ctx->pc = 0x2b11c8u;
    // NOP
label_2b11cc:
    // 0x2b11cc: 0x0  nop
    ctx->pc = 0x2b11ccu;
    // NOP
label_2b11d0:
    // 0x2b11d0: 0x0  nop
    ctx->pc = 0x2b11d0u;
    // NOP
label_2b11d4:
    // 0x2b11d4: 0x0  nop
    ctx->pc = 0x2b11d4u;
    // NOP
label_2b11d8:
    // 0x2b11d8: 0x0  nop
    ctx->pc = 0x2b11d8u;
    // NOP
label_2b11dc:
    // 0x2b11dc: 0x0  nop
    ctx->pc = 0x2b11dcu;
    // NOP
label_2b11e0:
    // 0x2b11e0: 0x0  nop
    ctx->pc = 0x2b11e0u;
    // NOP
label_2b11e4:
    // 0x2b11e4: 0x0  nop
    ctx->pc = 0x2b11e4u;
    // NOP
label_2b11e8:
    // 0x2b11e8: 0x0  nop
    ctx->pc = 0x2b11e8u;
    // NOP
label_2b11ec:
    // 0x2b11ec: 0x0  nop
    ctx->pc = 0x2b11ecu;
    // NOP
label_2b11f0:
    // 0x2b11f0: 0x0  nop
    ctx->pc = 0x2b11f0u;
    // NOP
label_2b11f4:
    // 0x2b11f4: 0x0  nop
    ctx->pc = 0x2b11f4u;
    // NOP
label_2b11f8:
    // 0x2b11f8: 0x0  nop
    ctx->pc = 0x2b11f8u;
    // NOP
label_2b11fc:
    // 0x2b11fc: 0x0  nop
    ctx->pc = 0x2b11fcu;
    // NOP
label_2b1200:
    // 0x2b1200: 0x0  nop
    ctx->pc = 0x2b1200u;
    // NOP
label_2b1204:
    // 0x2b1204: 0x0  nop
    ctx->pc = 0x2b1204u;
    // NOP
label_2b1208:
    // 0x2b1208: 0x0  nop
    ctx->pc = 0x2b1208u;
    // NOP
label_2b120c:
    // 0x2b120c: 0x0  nop
    ctx->pc = 0x2b120cu;
    // NOP
label_2b1210:
    // 0x2b1210: 0x0  nop
    ctx->pc = 0x2b1210u;
    // NOP
label_2b1214:
    // 0x2b1214: 0x0  nop
    ctx->pc = 0x2b1214u;
    // NOP
label_2b1218:
    // 0x2b1218: 0x0  nop
    ctx->pc = 0x2b1218u;
    // NOP
label_2b121c:
    // 0x2b121c: 0x0  nop
    ctx->pc = 0x2b121cu;
    // NOP
label_2b1220:
    // 0x2b1220: 0x0  nop
    ctx->pc = 0x2b1220u;
    // NOP
label_2b1224:
    // 0x2b1224: 0x0  nop
    ctx->pc = 0x2b1224u;
    // NOP
label_2b1228:
    // 0x2b1228: 0x0  nop
    ctx->pc = 0x2b1228u;
    // NOP
label_2b122c:
    // 0x2b122c: 0x0  nop
    ctx->pc = 0x2b122cu;
    // NOP
label_2b1230:
    // 0x2b1230: 0x0  nop
    ctx->pc = 0x2b1230u;
    // NOP
label_2b1234:
    // 0x2b1234: 0x0  nop
    ctx->pc = 0x2b1234u;
    // NOP
label_2b1238:
    // 0x2b1238: 0x0  nop
    ctx->pc = 0x2b1238u;
    // NOP
label_2b123c:
    // 0x2b123c: 0x0  nop
    ctx->pc = 0x2b123cu;
    // NOP
label_2b1240:
    // 0x2b1240: 0x0  nop
    ctx->pc = 0x2b1240u;
    // NOP
label_2b1244:
    // 0x2b1244: 0x0  nop
    ctx->pc = 0x2b1244u;
    // NOP
label_2b1248:
    // 0x2b1248: 0x0  nop
    ctx->pc = 0x2b1248u;
    // NOP
label_2b124c:
    // 0x2b124c: 0x0  nop
    ctx->pc = 0x2b124cu;
    // NOP
label_2b1250:
    // 0x2b1250: 0x0  nop
    ctx->pc = 0x2b1250u;
    // NOP
label_2b1254:
    // 0x2b1254: 0x0  nop
    ctx->pc = 0x2b1254u;
    // NOP
label_2b1258:
    // 0x2b1258: 0x0  nop
    ctx->pc = 0x2b1258u;
    // NOP
label_2b125c:
    // 0x2b125c: 0x0  nop
    ctx->pc = 0x2b125cu;
    // NOP
label_2b1260:
    // 0x2b1260: 0x0  nop
    ctx->pc = 0x2b1260u;
    // NOP
label_2b1264:
    // 0x2b1264: 0x0  nop
    ctx->pc = 0x2b1264u;
    // NOP
label_2b1268:
    // 0x2b1268: 0x0  nop
    ctx->pc = 0x2b1268u;
    // NOP
label_2b126c:
    // 0x2b126c: 0x0  nop
    ctx->pc = 0x2b126cu;
    // NOP
label_2b1270:
    // 0x2b1270: 0x0  nop
    ctx->pc = 0x2b1270u;
    // NOP
label_2b1274:
    // 0x2b1274: 0x0  nop
    ctx->pc = 0x2b1274u;
    // NOP
label_2b1278:
    // 0x2b1278: 0x0  nop
    ctx->pc = 0x2b1278u;
    // NOP
label_2b127c:
    // 0x2b127c: 0x0  nop
    ctx->pc = 0x2b127cu;
    // NOP
label_2b1280:
    // 0x2b1280: 0x0  nop
    ctx->pc = 0x2b1280u;
    // NOP
label_2b1284:
    // 0x2b1284: 0x0  nop
    ctx->pc = 0x2b1284u;
    // NOP
label_2b1288:
    // 0x2b1288: 0x0  nop
    ctx->pc = 0x2b1288u;
    // NOP
label_2b128c:
    // 0x2b128c: 0x0  nop
    ctx->pc = 0x2b128cu;
    // NOP
label_2b1290:
    // 0x2b1290: 0x0  nop
    ctx->pc = 0x2b1290u;
    // NOP
label_2b1294:
    // 0x2b1294: 0x0  nop
    ctx->pc = 0x2b1294u;
    // NOP
label_2b1298:
    // 0x2b1298: 0x0  nop
    ctx->pc = 0x2b1298u;
    // NOP
label_2b129c:
    // 0x2b129c: 0x0  nop
    ctx->pc = 0x2b129cu;
    // NOP
label_2b12a0:
    // 0x2b12a0: 0x0  nop
    ctx->pc = 0x2b12a0u;
    // NOP
label_2b12a4:
    // 0x2b12a4: 0x0  nop
    ctx->pc = 0x2b12a4u;
    // NOP
label_2b12a8:
    // 0x2b12a8: 0x0  nop
    ctx->pc = 0x2b12a8u;
    // NOP
label_2b12ac:
    // 0x2b12ac: 0x0  nop
    ctx->pc = 0x2b12acu;
    // NOP
label_2b12b0:
    // 0x2b12b0: 0x0  nop
    ctx->pc = 0x2b12b0u;
    // NOP
label_2b12b4:
    // 0x2b12b4: 0x0  nop
    ctx->pc = 0x2b12b4u;
    // NOP
label_2b12b8:
    // 0x2b12b8: 0x0  nop
    ctx->pc = 0x2b12b8u;
    // NOP
label_2b12bc:
    // 0x2b12bc: 0x0  nop
    ctx->pc = 0x2b12bcu;
    // NOP
label_2b12c0:
    // 0x2b12c0: 0x0  nop
    ctx->pc = 0x2b12c0u;
    // NOP
label_2b12c4:
    // 0x2b12c4: 0x0  nop
    ctx->pc = 0x2b12c4u;
    // NOP
label_2b12c8:
    // 0x2b12c8: 0x0  nop
    ctx->pc = 0x2b12c8u;
    // NOP
label_2b12cc:
    // 0x2b12cc: 0x0  nop
    ctx->pc = 0x2b12ccu;
    // NOP
label_2b12d0:
    // 0x2b12d0: 0x0  nop
    ctx->pc = 0x2b12d0u;
    // NOP
label_2b12d4:
    // 0x2b12d4: 0x0  nop
    ctx->pc = 0x2b12d4u;
    // NOP
label_2b12d8:
    // 0x2b12d8: 0x0  nop
    ctx->pc = 0x2b12d8u;
    // NOP
label_2b12dc:
    // 0x2b12dc: 0x0  nop
    ctx->pc = 0x2b12dcu;
    // NOP
label_2b12e0:
    // 0x2b12e0: 0x0  nop
    ctx->pc = 0x2b12e0u;
    // NOP
label_2b12e4:
    // 0x2b12e4: 0x0  nop
    ctx->pc = 0x2b12e4u;
    // NOP
label_2b12e8:
    // 0x2b12e8: 0x0  nop
    ctx->pc = 0x2b12e8u;
    // NOP
label_2b12ec:
    // 0x2b12ec: 0x0  nop
    ctx->pc = 0x2b12ecu;
    // NOP
label_2b12f0:
    // 0x2b12f0: 0x0  nop
    ctx->pc = 0x2b12f0u;
    // NOP
label_2b12f4:
    // 0x2b12f4: 0x0  nop
    ctx->pc = 0x2b12f4u;
    // NOP
label_2b12f8:
    // 0x2b12f8: 0x0  nop
    ctx->pc = 0x2b12f8u;
    // NOP
label_2b12fc:
    // 0x2b12fc: 0x0  nop
    ctx->pc = 0x2b12fcu;
    // NOP
label_2b1300:
    // 0x2b1300: 0x0  nop
    ctx->pc = 0x2b1300u;
    // NOP
label_2b1304:
    // 0x2b1304: 0x0  nop
    ctx->pc = 0x2b1304u;
    // NOP
label_2b1308:
    // 0x2b1308: 0x0  nop
    ctx->pc = 0x2b1308u;
    // NOP
label_2b130c:
    // 0x2b130c: 0x0  nop
    ctx->pc = 0x2b130cu;
    // NOP
label_2b1310:
    // 0x2b1310: 0x0  nop
    ctx->pc = 0x2b1310u;
    // NOP
label_2b1314:
    // 0x2b1314: 0x0  nop
    ctx->pc = 0x2b1314u;
    // NOP
label_2b1318:
    // 0x2b1318: 0x0  nop
    ctx->pc = 0x2b1318u;
    // NOP
label_2b131c:
    // 0x2b131c: 0x0  nop
    ctx->pc = 0x2b131cu;
    // NOP
label_2b1320:
    // 0x2b1320: 0x0  nop
    ctx->pc = 0x2b1320u;
    // NOP
label_2b1324:
    // 0x2b1324: 0x0  nop
    ctx->pc = 0x2b1324u;
    // NOP
label_2b1328:
    // 0x2b1328: 0x0  nop
    ctx->pc = 0x2b1328u;
    // NOP
label_2b132c:
    // 0x2b132c: 0x0  nop
    ctx->pc = 0x2b132cu;
    // NOP
label_2b1330:
    // 0x2b1330: 0x0  nop
    ctx->pc = 0x2b1330u;
    // NOP
label_2b1334:
    // 0x2b1334: 0x0  nop
    ctx->pc = 0x2b1334u;
    // NOP
label_2b1338:
    // 0x2b1338: 0x0  nop
    ctx->pc = 0x2b1338u;
    // NOP
label_2b133c:
    // 0x2b133c: 0x0  nop
    ctx->pc = 0x2b133cu;
    // NOP
label_2b1340:
    // 0x2b1340: 0x0  nop
    ctx->pc = 0x2b1340u;
    // NOP
label_2b1344:
    // 0x2b1344: 0x0  nop
    ctx->pc = 0x2b1344u;
    // NOP
label_2b1348:
    // 0x2b1348: 0x0  nop
    ctx->pc = 0x2b1348u;
    // NOP
label_2b134c:
    // 0x2b134c: 0x0  nop
    ctx->pc = 0x2b134cu;
    // NOP
label_2b1350:
    // 0x2b1350: 0x0  nop
    ctx->pc = 0x2b1350u;
    // NOP
label_2b1354:
    // 0x2b1354: 0x0  nop
    ctx->pc = 0x2b1354u;
    // NOP
label_2b1358:
    // 0x2b1358: 0x0  nop
    ctx->pc = 0x2b1358u;
    // NOP
label_2b135c:
    // 0x2b135c: 0x0  nop
    ctx->pc = 0x2b135cu;
    // NOP
label_2b1360:
    // 0x2b1360: 0x0  nop
    ctx->pc = 0x2b1360u;
    // NOP
label_2b1364:
    // 0x2b1364: 0x0  nop
    ctx->pc = 0x2b1364u;
    // NOP
label_2b1368:
    // 0x2b1368: 0x0  nop
    ctx->pc = 0x2b1368u;
    // NOP
label_2b136c:
    // 0x2b136c: 0x0  nop
    ctx->pc = 0x2b136cu;
    // NOP
label_2b1370:
    // 0x2b1370: 0x0  nop
    ctx->pc = 0x2b1370u;
    // NOP
label_2b1374:
    // 0x2b1374: 0x0  nop
    ctx->pc = 0x2b1374u;
    // NOP
label_2b1378:
    // 0x2b1378: 0x0  nop
    ctx->pc = 0x2b1378u;
    // NOP
label_2b137c:
    // 0x2b137c: 0x0  nop
    ctx->pc = 0x2b137cu;
    // NOP
label_2b1380:
    // 0x2b1380: 0x0  nop
    ctx->pc = 0x2b1380u;
    // NOP
label_2b1384:
    // 0x2b1384: 0x0  nop
    ctx->pc = 0x2b1384u;
    // NOP
label_2b1388:
    // 0x2b1388: 0x0  nop
    ctx->pc = 0x2b1388u;
    // NOP
label_2b138c:
    // 0x2b138c: 0x0  nop
    ctx->pc = 0x2b138cu;
    // NOP
label_2b1390:
    // 0x2b1390: 0x0  nop
    ctx->pc = 0x2b1390u;
    // NOP
label_2b1394:
    // 0x2b1394: 0x0  nop
    ctx->pc = 0x2b1394u;
    // NOP
label_2b1398:
    // 0x2b1398: 0x0  nop
    ctx->pc = 0x2b1398u;
    // NOP
label_2b139c:
    // 0x2b139c: 0x0  nop
    ctx->pc = 0x2b139cu;
    // NOP
label_2b13a0:
    // 0x2b13a0: 0x0  nop
    ctx->pc = 0x2b13a0u;
    // NOP
label_2b13a4:
    // 0x2b13a4: 0x0  nop
    ctx->pc = 0x2b13a4u;
    // NOP
label_2b13a8:
    // 0x2b13a8: 0x280028  .word       0x00280028                   # mfsa        $zero # 00280000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b13a8u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2b13ac:
    // 0x2b13ac: 0x280028  .word       0x00280028                   # mfsa        $zero # 00280000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b13acu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2b13b0:
    // 0x2b13b0: 0x280028  .word       0x00280028                   # mfsa        $zero # 00280000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b13b0u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2b13b4:
    // 0x2b13b4: 0x280028  .word       0x00280028                   # mfsa        $zero # 00280000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b13b4u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2b13b8:
    // 0x2b13b8: 0x280028  .word       0x00280028                   # mfsa        $zero # 00280000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b13b8u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2b13bc:
    // 0x2b13bc: 0x0  nop
    ctx->pc = 0x2b13bcu;
    // NOP
label_2b13c0:
    // 0x2b13c0: 0x0  nop
    ctx->pc = 0x2b13c0u;
    // NOP
label_2b13c4:
    // 0x2b13c4: 0x0  nop
    ctx->pc = 0x2b13c4u;
    // NOP
label_2b13c8:
    // 0x2b13c8: 0x0  nop
    ctx->pc = 0x2b13c8u;
    // NOP
label_2b13cc:
    // 0x2b13cc: 0x0  nop
    ctx->pc = 0x2b13ccu;
    // NOP
label_2b13d0:
    // 0x2b13d0: 0x0  nop
    ctx->pc = 0x2b13d0u;
    // NOP
label_2b13d4:
    // 0x2b13d4: 0x0  nop
    ctx->pc = 0x2b13d4u;
    // NOP
label_2b13d8:
    // 0x2b13d8: 0x0  nop
    ctx->pc = 0x2b13d8u;
    // NOP
label_2b13dc:
    // 0x2b13dc: 0x0  nop
    ctx->pc = 0x2b13dcu;
    // NOP
label_2b13e0:
    // 0x2b13e0: 0x0  nop
    ctx->pc = 0x2b13e0u;
    // NOP
label_2b13e4:
    // 0x2b13e4: 0x0  nop
    ctx->pc = 0x2b13e4u;
    // NOP
label_2b13e8:
    // 0x2b13e8: 0x0  nop
    ctx->pc = 0x2b13e8u;
    // NOP
label_2b13ec:
    // 0x2b13ec: 0x0  nop
    ctx->pc = 0x2b13ecu;
    // NOP
label_2b13f0:
    // 0x2b13f0: 0x0  nop
    ctx->pc = 0x2b13f0u;
    // NOP
label_2b13f4:
    // 0x2b13f4: 0x0  nop
    ctx->pc = 0x2b13f4u;
    // NOP
label_2b13f8:
    // 0x2b13f8: 0x0  nop
    ctx->pc = 0x2b13f8u;
    // NOP
label_2b13fc:
    // 0x2b13fc: 0x0  nop
    ctx->pc = 0x2b13fcu;
    // NOP
label_2b1400:
    // 0x2b1400: 0x0  nop
    ctx->pc = 0x2b1400u;
    // NOP
label_2b1404:
    // 0x2b1404: 0x0  nop
    ctx->pc = 0x2b1404u;
    // NOP
label_2b1408:
    // 0x2b1408: 0x0  nop
    ctx->pc = 0x2b1408u;
    // NOP
label_2b140c:
    // 0x2b140c: 0x0  nop
    ctx->pc = 0x2b140cu;
    // NOP
label_2b1410:
    // 0x2b1410: 0x0  nop
    ctx->pc = 0x2b1410u;
    // NOP
label_2b1414:
    // 0x2b1414: 0x0  nop
    ctx->pc = 0x2b1414u;
    // NOP
label_2b1418:
    // 0x2b1418: 0x0  nop
    ctx->pc = 0x2b1418u;
    // NOP
label_2b141c:
    // 0x2b141c: 0x0  nop
    ctx->pc = 0x2b141cu;
    // NOP
label_2b1420:
    // 0x2b1420: 0x0  nop
    ctx->pc = 0x2b1420u;
    // NOP
label_2b1424:
    // 0x2b1424: 0x0  nop
    ctx->pc = 0x2b1424u;
    // NOP
label_2b1428:
    // 0x2b1428: 0x0  nop
    ctx->pc = 0x2b1428u;
    // NOP
label_2b142c:
    // 0x2b142c: 0x0  nop
    ctx->pc = 0x2b142cu;
    // NOP
label_2b1430:
    // 0x2b1430: 0x0  nop
    ctx->pc = 0x2b1430u;
    // NOP
label_2b1434:
    // 0x2b1434: 0x0  nop
    ctx->pc = 0x2b1434u;
    // NOP
label_2b1438:
    // 0x2b1438: 0x0  nop
    ctx->pc = 0x2b1438u;
    // NOP
label_2b143c:
    // 0x2b143c: 0x0  nop
    ctx->pc = 0x2b143cu;
    // NOP
label_2b1440:
    // 0x2b1440: 0x0  nop
    ctx->pc = 0x2b1440u;
    // NOP
label_2b1444:
    // 0x2b1444: 0x0  nop
    ctx->pc = 0x2b1444u;
    // NOP
label_2b1448:
    // 0x2b1448: 0x0  nop
    ctx->pc = 0x2b1448u;
    // NOP
label_2b144c:
    // 0x2b144c: 0x0  nop
    ctx->pc = 0x2b144cu;
    // NOP
label_2b1450:
    // 0x2b1450: 0x0  nop
    ctx->pc = 0x2b1450u;
    // NOP
label_2b1454:
    // 0x2b1454: 0x0  nop
    ctx->pc = 0x2b1454u;
    // NOP
label_2b1458:
    // 0x2b1458: 0x0  nop
    ctx->pc = 0x2b1458u;
    // NOP
label_2b145c:
    // 0x2b145c: 0x0  nop
    ctx->pc = 0x2b145cu;
    // NOP
label_2b1460:
    // 0x2b1460: 0x0  nop
    ctx->pc = 0x2b1460u;
    // NOP
label_2b1464:
    // 0x2b1464: 0x0  nop
    ctx->pc = 0x2b1464u;
    // NOP
label_2b1468:
    // 0x2b1468: 0x0  nop
    ctx->pc = 0x2b1468u;
    // NOP
label_2b146c:
    // 0x2b146c: 0x0  nop
    ctx->pc = 0x2b146cu;
    // NOP
label_2b1470:
    // 0x2b1470: 0x0  nop
    ctx->pc = 0x2b1470u;
    // NOP
label_2b1474:
    // 0x2b1474: 0x0  nop
    ctx->pc = 0x2b1474u;
    // NOP
label_2b1478:
    // 0x2b1478: 0x0  nop
    ctx->pc = 0x2b1478u;
    // NOP
label_2b147c:
    // 0x2b147c: 0x0  nop
    ctx->pc = 0x2b147cu;
    // NOP
label_2b1480:
    // 0x2b1480: 0x0  nop
    ctx->pc = 0x2b1480u;
    // NOP
label_2b1484:
    // 0x2b1484: 0x0  nop
    ctx->pc = 0x2b1484u;
    // NOP
label_2b1488:
    // 0x2b1488: 0x0  nop
    ctx->pc = 0x2b1488u;
    // NOP
label_2b148c:
    // 0x2b148c: 0x0  nop
    ctx->pc = 0x2b148cu;
    // NOP
label_2b1490:
    // 0x2b1490: 0x0  nop
    ctx->pc = 0x2b1490u;
    // NOP
label_2b1494:
    // 0x2b1494: 0x0  nop
    ctx->pc = 0x2b1494u;
    // NOP
label_2b1498:
    // 0x2b1498: 0x0  nop
    ctx->pc = 0x2b1498u;
    // NOP
label_2b149c:
    // 0x2b149c: 0x0  nop
    ctx->pc = 0x2b149cu;
    // NOP
label_2b14a0:
    // 0x2b14a0: 0x0  nop
    ctx->pc = 0x2b14a0u;
    // NOP
label_2b14a4:
    // 0x2b14a4: 0x0  nop
    ctx->pc = 0x2b14a4u;
    // NOP
label_2b14a8:
    // 0x2b14a8: 0x0  nop
    ctx->pc = 0x2b14a8u;
    // NOP
label_2b14ac:
    // 0x2b14ac: 0x0  nop
    ctx->pc = 0x2b14acu;
    // NOP
label_2b14b0:
    // 0x2b14b0: 0x0  nop
    ctx->pc = 0x2b14b0u;
    // NOP
label_2b14b4:
    // 0x2b14b4: 0x0  nop
    ctx->pc = 0x2b14b4u;
    // NOP
label_2b14b8:
    // 0x2b14b8: 0x0  nop
    ctx->pc = 0x2b14b8u;
    // NOP
label_2b14bc:
    // 0x2b14bc: 0x0  nop
    ctx->pc = 0x2b14bcu;
    // NOP
label_2b14c0:
    // 0x2b14c0: 0x0  nop
    ctx->pc = 0x2b14c0u;
    // NOP
label_2b14c4:
    // 0x2b14c4: 0x0  nop
    ctx->pc = 0x2b14c4u;
    // NOP
label_2b14c8:
    // 0x2b14c8: 0x0  nop
    ctx->pc = 0x2b14c8u;
    // NOP
label_2b14cc:
    // 0x2b14cc: 0x0  nop
    ctx->pc = 0x2b14ccu;
    // NOP
label_2b14d0:
    // 0x2b14d0: 0x0  nop
    ctx->pc = 0x2b14d0u;
    // NOP
label_2b14d4:
    // 0x2b14d4: 0x0  nop
    ctx->pc = 0x2b14d4u;
    // NOP
label_2b14d8:
    // 0x2b14d8: 0x0  nop
    ctx->pc = 0x2b14d8u;
    // NOP
label_2b14dc:
    // 0x2b14dc: 0x0  nop
    ctx->pc = 0x2b14dcu;
    // NOP
label_2b14e0:
    // 0x2b14e0: 0x0  nop
    ctx->pc = 0x2b14e0u;
    // NOP
label_2b14e4:
    // 0x2b14e4: 0x0  nop
    ctx->pc = 0x2b14e4u;
    // NOP
label_2b14e8:
    // 0x2b14e8: 0x0  nop
    ctx->pc = 0x2b14e8u;
    // NOP
label_2b14ec:
    // 0x2b14ec: 0x0  nop
    ctx->pc = 0x2b14ecu;
    // NOP
label_2b14f0:
    // 0x2b14f0: 0x0  nop
    ctx->pc = 0x2b14f0u;
    // NOP
label_2b14f4:
    // 0x2b14f4: 0x0  nop
    ctx->pc = 0x2b14f4u;
    // NOP
label_2b14f8:
    // 0x2b14f8: 0x0  nop
    ctx->pc = 0x2b14f8u;
    // NOP
label_2b14fc:
    // 0x2b14fc: 0x0  nop
    ctx->pc = 0x2b14fcu;
    // NOP
label_2b1500:
    // 0x2b1500: 0x0  nop
    ctx->pc = 0x2b1500u;
    // NOP
label_2b1504:
    // 0x2b1504: 0x0  nop
    ctx->pc = 0x2b1504u;
    // NOP
label_2b1508:
    // 0x2b1508: 0x0  nop
    ctx->pc = 0x2b1508u;
    // NOP
label_2b150c:
    // 0x2b150c: 0x0  nop
    ctx->pc = 0x2b150cu;
    // NOP
label_2b1510:
    // 0x2b1510: 0x0  nop
    ctx->pc = 0x2b1510u;
    // NOP
label_2b1514:
    // 0x2b1514: 0x0  nop
    ctx->pc = 0x2b1514u;
    // NOP
label_2b1518:
    // 0x2b1518: 0x0  nop
    ctx->pc = 0x2b1518u;
    // NOP
label_2b151c:
    // 0x2b151c: 0x0  nop
    ctx->pc = 0x2b151cu;
    // NOP
label_2b1520:
    // 0x2b1520: 0x0  nop
    ctx->pc = 0x2b1520u;
    // NOP
label_2b1524:
    // 0x2b1524: 0x0  nop
    ctx->pc = 0x2b1524u;
    // NOP
label_2b1528:
    // 0x2b1528: 0x20756853  addi        $s5, $v1, 0x6853
    ctx->pc = 0x2b1528u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26707, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2b152c:
    // 0x2b152c: 0x72617547  .word       0x72617547                   # INVALID     $s3, $at, 0x7547 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2b152cu;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0x7 at 0x2B152C raw=0x72617547"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b1530:
    // 0x2b1530: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1530u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2b1534:
    // 0x2b1534: 0x0  nop
    ctx->pc = 0x2b1534u;
    // NOP
label_2b1538:
    // 0x2b1538: 0x20755800  addi        $s5, $v1, 0x5800
    ctx->pc = 0x2b1538u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)22528, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2b153c:
    // 0x2b153c: 0x756853  .word       0x00756853                   # mtlo        $v1 # 00156840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b153cu;
    ctx->lo = GPR_U64(ctx, 3);
label_2b1540:
    // 0x2b1540: 0x0  nop
    ctx->pc = 0x2b1540u;
    // NOP
label_2b1544:
    // 0x2b1544: 0x0  nop
    ctx->pc = 0x2b1544u;
    // NOP
label_2b1548:
    // 0x2b1548: 0x75570000  .word       0x75570000                   # INVALID     $t2, $s7, 0x0 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2b1548u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2B1548 raw=0x75570000");
 /* MITIGATED */
label_2b154c:
    // 0x2b154c: 0x695920  .word       0x00695920                   # add         $t3, $v1, $t1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b154cu;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2b1550:
    // 0x2b1550: 0x0  nop
    ctx->pc = 0x2b1550u;
    // NOP
label_2b1554:
    // 0x2b1554: 0x0  nop
    ctx->pc = 0x2b1554u;
    // NOP
label_2b1558:
    // 0x2b1558: 0x5a000000  blezl       $s0, . + 4 + (0x0 << 2)
label_2b155c:
    if (ctx->pc == 0x2B155Cu) {
        ctx->pc = 0x2B155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1558u;
        // 0x2b155c: 0x676e6168  daddiu      $t6, $k1, 0x6168 (Delay Slot)
        SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24936);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1560u;
        goto label_2b1560;
    }
    ctx->pc = 0x2B1558u;
    {
        const bool branch_taken_0x2b1558 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b1558) {
            ctx->pc = 0x2B155Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1558u;
            // 0x2b155c: 0x676e6168  daddiu      $t6, $k1, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B155Cu;
            goto label_2b155c;
        }
    }
    ctx->pc = 0x2B1560u;
label_2b1560:
    // 0x2b1560: 0x695920  .word       0x00695920                   # add         $t3, $v1, $t1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1560u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2b1564:
    // 0x2b1564: 0x0  nop
    ctx->pc = 0x2b1564u;
    // NOP
label_2b1568:
    // 0x2b1568: 0x0  nop
    ctx->pc = 0x2b1568u;
    // NOP
label_2b156c:
    // 0x2b156c: 0x6e656843  ldr         $a1, 0x6843($s3)
    ctx->pc = 0x2b156cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26691); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2b1570:
    // 0x2b1570: 0x6e654420  ldr         $a1, 0x4420($s3)
    ctx->pc = 0x2b1570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 17440); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2b1574:
    // 0x2b1574: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1574u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2b1578:
    // 0x2b1578: 0x0  nop
    ctx->pc = 0x2b1578u;
    // NOP
label_2b157c:
    // 0x2b157c: 0x20695900  addi        $t1, $v1, 0x5900
    ctx->pc = 0x2b157cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)22784, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_2b1580:
    // 0x2b1580: 0x694a  .word       0x0000694A                   # movz        $t5, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1580u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
label_2b1584:
    // 0x2b1584: 0x0  nop
    ctx->pc = 0x2b1584u;
    // NOP
label_2b1588:
    // 0x2b1588: 0x0  nop
    ctx->pc = 0x2b1588u;
    // NOP
label_2b158c:
    // 0x2b158c: 0x694c0000  ldl         $t4, 0x0($t2)
    ctx->pc = 0x2b158cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_2b1590:
    // 0x2b1590: 0x69502075  ldl         $s0, 0x2075($t2)
    ctx->pc = 0x2b1590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8309); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
label_2b1594:
    // 0x2b1594: 0x0  nop
    ctx->pc = 0x2b1594u;
    // NOP
label_2b1598:
    // 0x2b1598: 0x0  nop
    ctx->pc = 0x2b1598u;
    // NOP
label_2b159c:
    // 0x2b159c: 0x57000000  bnel        $t8, $zero, . + 4 + (0x0 << 2)
label_2b15a0:
    if (ctx->pc == 0x2B15A0u) {
        ctx->pc = 0x2B15A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B159Cu;
        // 0x2b15a0: 0x61422075  daddi       $v0, $t2, 0x2075 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8309; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B15A4u;
        goto label_2b15a4;
    }
    ctx->pc = 0x2B159Cu;
    {
        const bool branch_taken_0x2b159c = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b159c) {
            ctx->pc = 0x2B15A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B159Cu;
            // 0x2b15a0: 0x61422075  daddi       $v0, $t2, 0x2075 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8309; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B15A0u;
            goto label_2b15a0;
        }
    }
    ctx->pc = 0x2B15A4u;
label_2b15a4:
    // 0x2b15a4: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b15a4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b15a8:
    // 0x2b15a8: 0x0  nop
    ctx->pc = 0x2b15a8u;
    // NOP
label_2b15ac:
    // 0x2b15ac: 0x0  nop
    ctx->pc = 0x2b15acu;
    // NOP
label_2b15b0:
    // 0x2b15b0: 0x206f7548  addi        $t7, $v1, 0x7548
    ctx->pc = 0x2b15b0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30024, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2b15b4:
    // 0x2b15b4: 0x6e754a  .word       0x006E754A                   # movz        $t6, $v1, $t6 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b15b4u;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 3));
label_2b15b8:
    // 0x2b15b8: 0x0  nop
    ctx->pc = 0x2b15b8u;
    // NOP
label_2b15bc:
    // 0x2b15bc: 0x0  nop
    ctx->pc = 0x2b15bcu;
    // NOP
label_2b15c0:
    // 0x2b15c0: 0x0  nop
    ctx->pc = 0x2b15c0u;
    // NOP
label_2b15c4:
    // 0x2b15c4: 0x0  nop
    ctx->pc = 0x2b15c4u;
    // NOP
label_2b15c8:
    // 0x2b15c8: 0x0  nop
    ctx->pc = 0x2b15c8u;
    // NOP
label_2b15cc:
    // 0x2b15cc: 0xc090603  jal         func_24180C
label_2b15d0:
    if (ctx->pc == 0x2B15D0u) {
        ctx->pc = 0x2B15D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B15CCu;
        // 0x2b15d0: 0xa  movz        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B15D4u;
        goto label_2b15d4;
    }
    ctx->pc = 0x2B15CCu;
    SET_GPR_U32(ctx, 31, 0x2B15D4u);
    ctx->pc = 0x2B15D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B15CCu;
    // 0x2b15d0: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24180Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24180Cu, 0x2B15CCu, 0x2B15D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B15D4u;
label_2b15d4:
    // 0x2b15d4: 0x0  nop
    ctx->pc = 0x2b15d4u;
    // NOP
label_2b15d8:
    // 0x2b15d8: 0x20696557  addi        $t1, $v1, 0x6557
    ctx->pc = 0x2b15d8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25943, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_2b15dc:
    // 0x2b15dc: 0x72617547  .word       0x72617547                   # INVALID     $s3, $at, 0x7547 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2b15dcu;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0x7 at 0x2B15DC raw=0x72617547"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b15e0:
    // 0x2b15e0: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b15e0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2b15e4:
    // 0x2b15e4: 0x0  nop
    ctx->pc = 0x2b15e4u;
    // NOP
label_2b15e8:
    // 0x2b15e8: 0x61685a00  daddi       $t0, $t3, 0x5A00
    ctx->pc = 0x2b15e8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)23040; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
label_2b15ec:
    // 0x2b15ec: 0x5920676e  blezl       $t1, . + 4 + (0x676E << 2)
label_2b15f0:
    if (ctx->pc == 0x2B15F0u) {
        ctx->pc = 0x2B15F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B15ECu;
        // 0x2b15f0: 0x6e61  .word       0x00006E61                   # addu        $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B15F4u;
        goto label_2b15f4;
    }
    ctx->pc = 0x2B15ECu;
    {
        const bool branch_taken_0x2b15ec = (GPR_S32(ctx, 9) <= 0);
        if (branch_taken_0x2b15ec) {
            ctx->pc = 0x2B15F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B15ECu;
            // 0x2b15f0: 0x6e61  .word       0x00006E61                   # addu        $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB3A8u;
            return;
        }
    }
    ctx->pc = 0x2B15F4u;
label_2b15f4:
    // 0x2b15f4: 0x0  nop
    ctx->pc = 0x2b15f4u;
    // NOP
label_2b15f8:
    // 0x2b15f8: 0x61430000  daddi       $v1, $t2, 0x0
    ctx->pc = 0x2b15f8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)0; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_2b15fc:
    // 0x2b15fc: 0x6843206f  ldl         $v1, 0x206F($v0)
    ctx->pc = 0x2b15fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2b1600:
    // 0x2b1600: 0x6e75  .word       0x00006E75                   # INVALID     $zero, $zero, 0x6E75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1600u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2B1600 raw=0x00006E75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b1604:
    // 0x2b1604: 0x0  nop
    ctx->pc = 0x2b1604u;
    // NOP
label_2b1608:
    // 0x2b1608: 0x47000000  .word       0x47000000                   # INVALID     $t8, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2b1608u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x0 at 0x2B1608 raw=0x47000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b160c:
    // 0x2b160c: 0x48206f75  .word       0x48206F75                   # qmfc2.i     $zero, $vf13 # 00000774 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2b160cu;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[13]));
label_2b1610:
    // 0x2b1610: 0x696175  .word       0x00696175                   # INVALID     $v1, $t1, 0x6175 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1610u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2B1610 raw=0x00696175"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b1614:
    // 0x2b1614: 0x0  nop
    ctx->pc = 0x2b1614u;
    // NOP
label_2b1618:
    // 0x2b1618: 0x0  nop
    ctx->pc = 0x2b1618u;
    // NOP
label_2b161c:
    // 0x2b161c: 0x68616958  ldl         $at, 0x6958($v1)
    ctx->pc = 0x2b161cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26968); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_2b1620:
    // 0x2b1620: 0x4220756f  .word       0x4220756F                   # INVALID     $s1, $zero, 0x756F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b1620u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x2B1620 raw=0x4220756F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b1624:
    // 0x2b1624: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1624u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2b1628:
    // 0x2b1628: 0x0  nop
    ctx->pc = 0x2b1628u;
    // NOP
label_2b162c:
    // 0x2b162c: 0x6e615700  ldr         $at, 0x5700($s3)
    ctx->pc = 0x2b162cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 22272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2b1630:
    // 0x2b1630: 0x68532067  ldl         $s3, 0x2067($v0)
    ctx->pc = 0x2b1630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_2b1634:
    // 0x2b1634: 0x676e6175  daddiu      $t6, $k1, 0x6175
    ctx->pc = 0x2b1634u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24949);
label_2b1638:
    // 0x2b1638: 0x0  nop
    ctx->pc = 0x2b1638u;
    // NOP
label_2b163c:
    // 0x2b163c: 0x65570000  daddiu      $s7, $t2, 0x0
    ctx->pc = 0x2b163cu;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)0);
label_2b1640:
    // 0x2b1640: 0x6951206e  ldl         $s1, 0x206E($t2)
    ctx->pc = 0x2b1640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8302); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem << shift)); }
label_2b1644:
    // 0x2b1644: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1644u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1648:
    // 0x2b1648: 0x0  nop
    ctx->pc = 0x2b1648u;
    // NOP
label_2b164c:
    // 0x2b164c: 0x5a000000  blezl       $s0, . + 4 + (0x0 << 2)
label_2b1650:
    if (ctx->pc == 0x2B1650u) {
        ctx->pc = 0x2B1650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B164Cu;
        // 0x2b1650: 0x65677568  daddiu      $a3, $t3, 0x7568 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30056);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1654u;
        goto label_2b1654;
    }
    ctx->pc = 0x2B164Cu;
    {
        const bool branch_taken_0x2b164c = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b164c) {
            ctx->pc = 0x2B1650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B164Cu;
            // 0x2b1650: 0x65677568  daddiu      $a3, $t3, 0x7568 (Delay Slot)
            SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30056);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1650u;
            goto label_2b1650;
        }
    }
    ctx->pc = 0x2B1654u;
label_2b1654:
    // 0x2b1654: 0x6e614420  ldr         $at, 0x4420($s3)
    ctx->pc = 0x2b1654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 17440); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2b1658:
    // 0x2b1658: 0x0  nop
    ctx->pc = 0x2b1658u;
    // NOP
label_2b165c:
    // 0x2b165c: 0x0  nop
    ctx->pc = 0x2b165cu;
    // NOP
label_2b1660:
    // 0x2b1660: 0x676e615a  daddiu      $t6, $k1, 0x615A
    ctx->pc = 0x2b1660u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24922);
label_2b1664:
    // 0x2b1664: 0x614220  .word       0x00614220                   # add         $t0, $v1, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1664u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2b1668:
    // 0x2b1668: 0x0  nop
    ctx->pc = 0x2b1668u;
    // NOP
label_2b166c:
    // 0x2b166c: 0x0  nop
    ctx->pc = 0x2b166cu;
    // NOP
label_2b1670:
    // 0x2b1670: 0x0  nop
    ctx->pc = 0x2b1670u;
    // NOP
label_2b1674:
    // 0x2b1674: 0x0  nop
    ctx->pc = 0x2b1674u;
    // NOP
label_2b1678:
    // 0x2b1678: 0x0  nop
    ctx->pc = 0x2b1678u;
    // NOP
label_2b167c:
    // 0x2b167c: 0xc090603  jal         func_24180C
label_2b1680:
    if (ctx->pc == 0x2B1680u) {
        ctx->pc = 0x2B1680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B167Cu;
        // 0x2b1680: 0xa  movz        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1684u;
        goto label_2b1684;
    }
    ctx->pc = 0x2B167Cu;
    SET_GPR_U32(ctx, 31, 0x2B1684u);
    ctx->pc = 0x2B1680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B167Cu;
    // 0x2b1680: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24180Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24180Cu, 0x2B167Cu, 0x2B1684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1684u;
label_2b1684:
    // 0x2b1684: 0x0  nop
    ctx->pc = 0x2b1684u;
    // NOP
label_2b1688:
    // 0x2b1688: 0x47207557  .word       0x47207557                   # INVALID     $t9, $zero, 0x7557 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2b1688u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0x17 at 0x2B1688 raw=0x47207557"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b168c:
    // 0x2b168c: 0x64726175  daddiu      $s2, $v1, 0x6175
    ctx->pc = 0x2b168cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)24949);
label_2b1690:
    // 0x2b1690: 0x0  nop
    ctx->pc = 0x2b1690u;
    // NOP
label_2b1694:
    // 0x2b1694: 0x0  nop
    ctx->pc = 0x2b1694u;
    // NOP
label_2b1698:
    // 0x2b1698: 0x6e755300  ldr         $s5, 0x5300($s3)
    ctx->pc = 0x2b1698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 21248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_2b169c:
    // 0x2b169c: 0x695920  .word       0x00695920                   # add         $t3, $v1, $t1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b169cu;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2b16a0:
    // 0x2b16a0: 0x0  nop
    ctx->pc = 0x2b16a0u;
    // NOP
label_2b16a4:
    // 0x2b16a4: 0x0  nop
    ctx->pc = 0x2b16a4u;
    // NOP
label_2b16a8:
    // 0x2b16a8: 0x755a0000  .word       0x755A0000                   # INVALID     $t2, $k0, 0x0 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2b16a8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2B16A8 raw=0x755A0000");
 /* MITIGATED */
label_2b16ac:
    // 0x2b16ac: 0x6f614d20  ldr         $at, 0x4D20($k1)
    ctx->pc = 0x2b16acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 19744); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2b16b0:
    // 0x2b16b0: 0x0  nop
    ctx->pc = 0x2b16b0u;
    // NOP
label_2b16b4:
    // 0x2b16b4: 0x0  nop
    ctx->pc = 0x2b16b4u;
    // NOP
label_2b16b8:
    // 0x2b16b8: 0x43000000  .word       0x43000000                   # INVALID     $t8, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b16b8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x2B16B8 raw=0x43000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b16bc:
    // 0x2b16bc: 0x206e6568  addi        $t6, $v1, 0x6568
    ctx->pc = 0x2b16bcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25960, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2b16c0:
    // 0x2b16c0: 0x7557  .word       0x00007557                   # dsrav       $t6, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b16c0u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2b16c4:
    // 0x2b16c4: 0x0  nop
    ctx->pc = 0x2b16c4u;
    // NOP
label_2b16c8:
    // 0x2b16c8: 0x0  nop
    ctx->pc = 0x2b16c8u;
    // NOP
label_2b16cc:
    // 0x2b16cc: 0x676e694c  daddiu      $t6, $k1, 0x694C
    ctx->pc = 0x2b16ccu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26956);
label_2b16d0:
    // 0x2b16d0: 0x6f614320  ldr         $at, 0x4320($k1)
    ctx->pc = 0x2b16d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 17184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2b16d4:
    // 0x2b16d4: 0x0  nop
    ctx->pc = 0x2b16d4u;
    // NOP
label_2b16d8:
    // 0x2b16d8: 0x0  nop
    ctx->pc = 0x2b16d8u;
    // NOP
label_2b16dc:
    // 0x2b16dc: 0x20754c00  addi        $s5, $v1, 0x4C00
    ctx->pc = 0x2b16dcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)19456, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2b16e0:
    // 0x2b16e0: 0x676e614b  daddiu      $t6, $k1, 0x614B
    ctx->pc = 0x2b16e0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24907);
label_2b16e4:
    // 0x2b16e4: 0x0  nop
    ctx->pc = 0x2b16e4u;
    // NOP
label_2b16e8:
    // 0x2b16e8: 0x0  nop
    ctx->pc = 0x2b16e8u;
    // NOP
label_2b16ec:
    // 0x2b16ec: 0x694c0000  ldl         $t4, 0x0($t2)
    ctx->pc = 0x2b16ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_2b16f0:
    // 0x2b16f0: 0x695920  .word       0x00695920                   # add         $t3, $v1, $t1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b16f0u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2b16f4:
    // 0x2b16f4: 0x0  nop
    ctx->pc = 0x2b16f4u;
    // NOP
label_2b16f8:
    // 0x2b16f8: 0x0  nop
    ctx->pc = 0x2b16f8u;
    // NOP
label_2b16fc:
    // 0x2b16fc: 0x53000000  beql        $t8, $zero, . + 4 + (0x0 << 2)
label_2b1700:
    if (ctx->pc == 0x2B1700u) {
        ctx->pc = 0x2B1700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B16FCu;
        // 0x2b1700: 0x48206e75  .word       0x48206E75                   # qmfc2.i     $zero, $vf13 # 00000674 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
        SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[13]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1704u;
        goto label_2b1704;
    }
    ctx->pc = 0x2B16FCu;
    {
        const bool branch_taken_0x2b16fc = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b16fc) {
            ctx->pc = 0x2B1700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B16FCu;
            // 0x2b1700: 0x48206e75  .word       0x48206E75                   # qmfc2.i     $zero, $vf13 # 00000674 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
            SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[13]));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1700u;
            goto label_2b1700;
        }
    }
    ctx->pc = 0x2B1704u;
label_2b1704:
    // 0x2b1704: 0x6e6175  .word       0x006E6175                   # INVALID     $v1, $t6, 0x6175 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1704u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2B1704 raw=0x006E6175"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b1708:
    // 0x2b1708: 0x0  nop
    ctx->pc = 0x2b1708u;
    // NOP
label_2b170c:
    // 0x2b170c: 0x0  nop
    ctx->pc = 0x2b170cu;
    // NOP
label_2b1710:
    // 0x2b1710: 0x5a20614d  blezl       $s1, . + 4 + (0x614D << 2)
label_2b1714:
    if (ctx->pc == 0x2B1714u) {
        ctx->pc = 0x2B1714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1710u;
        // 0x2b1714: 0x676e6f68  daddiu      $t6, $k1, 0x6F68 (Delay Slot)
        SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28520);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1718u;
        goto label_2b1718;
    }
    ctx->pc = 0x2B1710u;
    {
        const bool branch_taken_0x2b1710 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x2b1710) {
            ctx->pc = 0x2B1714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1710u;
            // 0x2b1714: 0x676e6f68  daddiu      $t6, $k1, 0x6F68 (Delay Slot)
            SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28520);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9C48u;
            return;
        }
    }
    ctx->pc = 0x2B1718u;
label_2b1718:
    // 0x2b1718: 0x0  nop
    ctx->pc = 0x2b1718u;
    // NOP
label_2b171c:
    // 0x2b171c: 0x0  nop
    ctx->pc = 0x2b171cu;
    // NOP
label_2b1720:
    // 0x2b1720: 0x0  nop
    ctx->pc = 0x2b1720u;
    // NOP
label_2b1724:
    // 0x2b1724: 0x0  nop
    ctx->pc = 0x2b1724u;
    // NOP
label_2b1728:
    // 0x2b1728: 0x0  nop
    ctx->pc = 0x2b1728u;
    // NOP
label_2b172c:
    // 0x2b172c: 0xc090603  jal         func_24180C
label_2b1730:
    if (ctx->pc == 0x2B1730u) {
        ctx->pc = 0x2B1730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B172Cu;
        // 0x2b1730: 0xa  movz        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1734u;
        goto label_2b1734;
    }
    ctx->pc = 0x2B172Cu;
    SET_GPR_U32(ctx, 31, 0x2B1734u);
    ctx->pc = 0x2B1730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B172Cu;
    // 0x2b1730: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24180Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24180Cu, 0x2B172Cu, 0x2B1734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1734u;
label_2b1734:
    // 0x2b1734: 0x0  nop
    ctx->pc = 0x2b1734u;
    // NOP
label_2b1738:
    // 0x2b1738: 0x61796f52  daddi       $t9, $t3, 0x6F52
    ctx->pc = 0x2b1738u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28498; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 25, res); }
label_2b173c:
    // 0x2b173c: 0x7547206c  .word       0x7547206C                   # INVALID     $t2, $a3, 0x206C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2b173cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2B173C raw=0x7547206C");
 /* MITIGATED */
label_2b1740:
    // 0x2b1740: 0x647261  .word       0x00647261                   # addu        $t6, $v1, $a0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1740u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2b1744:
    // 0x2b1744: 0x0  nop
    ctx->pc = 0x2b1744u;
    // NOP
label_2b1748:
    // 0x2b1748: 0x20614d00  addi        $at, $v1, 0x4D00
    ctx->pc = 0x2b1748u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)19712, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_2b174c:
    // 0x2b174c: 0x206e7559  addi        $t6, $v1, 0x7559
    ctx->pc = 0x2b174cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30041, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2b1750:
    // 0x2b1750: 0x6e617559  ldr         $at, 0x7559($s3)
    ctx->pc = 0x2b1750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30041); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2b1754:
    // 0x2b1754: 0x0  nop
    ctx->pc = 0x2b1754u;
    // NOP
label_2b1758:
    // 0x2b1758: 0x61430000  daddi       $v1, $t2, 0x0
    ctx->pc = 0x2b1758u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)0; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_2b175c:
    // 0x2b175c: 0x65572069  daddiu      $s7, $t2, 0x2069
    ctx->pc = 0x2b175cu;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8297);
label_2b1760:
    // 0x2b1760: 0x69676e  .word       0x0069676E                   # dsub        $t4, $v1, $t1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1760u;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 9); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_2b1764:
    // 0x2b1764: 0x0  nop
    ctx->pc = 0x2b1764u;
    // NOP
label_2b1768:
    // 0x2b1768: 0x57000000  bnel        $t8, $zero, . + 4 + (0x0 << 2)
label_2b176c:
    if (ctx->pc == 0x2B176Cu) {
        ctx->pc = 0x2B176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1768u;
        // 0x2b176c: 0x75472075  .word       0x75472075                   # INVALID     $t2, $a3, 0x2075 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x1D at 0x2B176C raw=0x75472075");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1770u;
        goto label_2b1770;
    }
    ctx->pc = 0x2B1768u;
    {
        const bool branch_taken_0x2b1768 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1768) {
            ctx->pc = 0x2B176Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1768u;
            // 0x2b176c: 0x75472075  .word       0x75472075                   # INVALID     $t2, $a3, 0x2075 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//             throw std::runtime_error("Unhandled opcode: 0x1D at 0x2B176C raw=0x75472075");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B176Cu;
            goto label_2b176c;
        }
    }
    ctx->pc = 0x2B1770u;
label_2b1770:
    // 0x2b1770: 0x6961746f  ldl         $at, 0x746F($t3)
    ctx->pc = 0x2b1770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29807); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_2b1774:
    // 0x2b1774: 0x0  nop
    ctx->pc = 0x2b1774u;
    // NOP
label_2b1778:
    // 0x2b1778: 0x0  nop
    ctx->pc = 0x2b1778u;
    // NOP
label_2b177c:
    // 0x2b177c: 0x20657559  addi        $a1, $v1, 0x7559
    ctx->pc = 0x2b177cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30041, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2b1780:
    // 0x2b1780: 0x676e6959  daddiu      $t6, $k1, 0x6959
    ctx->pc = 0x2b1780u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26969);
label_2b1784:
    // 0x2b1784: 0x0  nop
    ctx->pc = 0x2b1784u;
    // NOP
label_2b1788:
    // 0x2b1788: 0x0  nop
    ctx->pc = 0x2b1788u;
    // NOP
label_2b178c:
    // 0x2b178c: 0x6f614200  ldr         $at, 0x4200($k1)
    ctx->pc = 0x2b178cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 16896); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2b1790:
    // 0x2b1790: 0x6e615320  ldr         $at, 0x5320($s3)
    ctx->pc = 0x2b1790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 21280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2b1794:
    // 0x2b1794: 0x6e61696e  ldr         $at, 0x696E($s3)
    ctx->pc = 0x2b1794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26990); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2b1798:
    // 0x2b1798: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1798u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2b179c:
    // 0x2b179c: 0x69480000  ldl         $t0, 0x0($t2)
    ctx->pc = 0x2b179cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_2b17a0:
    // 0x2b17a0: 0x6f6b696d  ldr         $t3, 0x696D($k1)
    ctx->pc = 0x2b17a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26989); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_2b17a4:
    // 0x2b17a4: 0x0  nop
    ctx->pc = 0x2b17a4u;
    // NOP
label_2b17a8:
    // 0x2b17a8: 0x0  nop
    ctx->pc = 0x2b17a8u;
    // NOP
label_2b17ac:
    // 0x2b17ac: 0x59000000  blezl       $t0, . + 4 + (0x0 << 2)
label_2b17b0:
    if (ctx->pc == 0x2B17B0u) {
        ctx->pc = 0x2B17B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B17ACu;
        // 0x2b17b0: 0x20676e61  addi        $a3, $v1, 0x6E61 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28257, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B17B4u;
        goto label_2b17b4;
    }
    ctx->pc = 0x2B17ACu;
    {
        const bool branch_taken_0x2b17ac = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x2b17ac) {
            ctx->pc = 0x2B17B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B17ACu;
            // 0x2b17b0: 0x20676e61  addi        $a3, $v1, 0x6E61 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28257, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B17B0u;
            goto label_2b17b0;
        }
    }
    ctx->pc = 0x2B17B4u;
label_2b17b4:
    // 0x2b17b4: 0x6e616958  ldr         $at, 0x6958($s3)
    ctx->pc = 0x2b17b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26968); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2b17b8:
    // 0x2b17b8: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b17b8u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2b17bc:
    // 0x2b17bc: 0x0  nop
    ctx->pc = 0x2b17bcu;
    // NOP
label_2b17c0:
    // 0x2b17c0: 0x206e6159  addi        $t6, $v1, 0x6159
    ctx->pc = 0x2b17c0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24921, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2b17c4:
    // 0x2b17c4: 0x694c  syscall     421
    ctx->pc = 0x2b17c4u;
    ctx->pc = 0x2B17C8u;
runtime->handleSyscall(rdram, ctx, 0x1A5u);
label_2b17c8:
    // 0x2b17c8: 0x0  nop
    ctx->pc = 0x2b17c8u;
    // NOP
label_2b17cc:
    // 0x2b17cc: 0x0  nop
    ctx->pc = 0x2b17ccu;
    // NOP
label_2b17d0:
    // 0x2b17d0: 0x1000000  .word       0x01000000                   # sll         $zero, $zero, 0 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b17d0u;
    // NOP
label_2b17d4:
    // 0x2b17d4: 0x0  nop
    ctx->pc = 0x2b17d4u;
    // NOP
label_2b17d8:
    // 0x2b17d8: 0x0  nop
    ctx->pc = 0x2b17d8u;
    // NOP
label_2b17dc:
    // 0x2b17dc: 0xc090603  jal         func_24180C
label_2b17e0:
    if (ctx->pc == 0x2B17E0u) {
        ctx->pc = 0x2B17E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B17DCu;
        // 0x2b17e0: 0xa  movz        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B17E4u;
        goto label_2b17e4;
    }
    ctx->pc = 0x2B17DCu;
    SET_GPR_U32(ctx, 31, 0x2B17E4u);
    ctx->pc = 0x2B17E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B17DCu;
    // 0x2b17e0: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24180Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24180Cu, 0x2B17DCu, 0x2B17E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B17E4u;
label_2b17e4:
    // 0x2b17e4: 0x0  nop
    ctx->pc = 0x2b17e4u;
    // NOP
label_2b17e8:
    // 0x2b17e8: 0x0  nop
    ctx->pc = 0x2b17e8u;
    // NOP
label_2b17ec:
    // 0x2b17ec: 0x0  nop
    ctx->pc = 0x2b17ecu;
    // NOP
label_2b17f0:
    // 0x2b17f0: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b17f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B17F0 raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b17f4:
    // 0x2b17f4: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b17f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B17F4 raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b17f8:
    // 0x2b17f8: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b17f8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B17F8 raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b17fc:
    // 0x2b17fc: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b17fcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B17FC raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b1800:
    // 0x2b1800: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1800u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B1800 raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b1804:
    // 0x2b1804: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1804u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B1804 raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b1808:
    // 0x2b1808: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1808u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B1808 raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b180c:
    // 0x2b180c: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b180cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B180C raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b1810:
    // 0x2b1810: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1810u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B1810 raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b1814:
    // 0x2b1814: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1814u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B1814 raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b1818:
    // 0x2b1818: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1818u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B1818 raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b181c:
    // 0x2b181c: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b181cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B181C raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b1820:
    // 0x2b1820: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1820u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B1820 raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b1824:
    // 0x2b1824: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1824u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B1824 raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b1828:
    // 0x2b1828: 0x1010001  .word       0x01010001                   # INVALID     $t0, $at, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1828u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B1828 raw=0x01010001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b182c:
    // 0x2b182c: 0x0  nop
    ctx->pc = 0x2b182cu;
    // NOP
label_2b1830:
    // 0x2b1830: 0x0  nop
    ctx->pc = 0x2b1830u;
    // NOP
label_2b1834:
    // 0x2b1834: 0x0  nop
    ctx->pc = 0x2b1834u;
    // NOP
label_2b1838:
    // 0x2b1838: 0x0  nop
    ctx->pc = 0x2b1838u;
    // NOP
label_2b183c:
    // 0x2b183c: 0x0  nop
    ctx->pc = 0x2b183cu;
    // NOP
label_2b1840:
    // 0x2b1840: 0x0  nop
    ctx->pc = 0x2b1840u;
    // NOP
label_2b1844:
    // 0x2b1844: 0x1000000  .word       0x01000000                   # sll         $zero, $zero, 0 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1844u;
    // NOP
label_2b1848:
    // 0x2b1848: 0x0  nop
    ctx->pc = 0x2b1848u;
    // NOP
label_2b184c:
    // 0x2b184c: 0x0  nop
    ctx->pc = 0x2b184cu;
    // NOP
label_2b1850:
    // 0x2b1850: 0x1010000  .word       0x01010000                   # sll         $zero, $at, 0 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1850u;
    
label_2b1854:
    // 0x2b1854: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1854u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B1854 raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b1858:
    // 0x2b1858: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1858u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B1858 raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b185c:
    // 0x2b185c: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b185cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B185C raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b1860:
    // 0x2b1860: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1860u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B1860 raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b1864:
    // 0x2b1864: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1864u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B1864 raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b1868:
    // 0x2b1868: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1868u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B1868 raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b186c:
    // 0x2b186c: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b186cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B186C raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b1870:
    // 0x2b1870: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1870u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B1870 raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b1874:
    // 0x2b1874: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1874u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B1874 raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b1878:
    // 0x2b1878: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1878u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B1878 raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b187c:
    // 0x2b187c: 0x10101  .word       0x00010101                   # INVALID     $zero, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b187cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B187C raw=0x00010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b1880:
    // 0x2b1880: 0x0  nop
    ctx->pc = 0x2b1880u;
    // NOP
label_2b1884:
    // 0x2b1884: 0x0  nop
    ctx->pc = 0x2b1884u;
    // NOP
label_2b1888:
    // 0x2b1888: 0x3000803  .word       0x03000803                   # sra         $at, $zero, 0 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1888u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), 0));
label_2b188c:
    // 0x2b188c: 0x0  nop
    ctx->pc = 0x2b188cu;
    // NOP
label_2b1890:
    // 0x2b1890: 0x0  nop
    ctx->pc = 0x2b1890u;
    // NOP
label_2b1894:
    // 0x2b1894: 0x0  nop
    ctx->pc = 0x2b1894u;
    // NOP
label_2b1898:
    // 0x2b1898: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1898u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B1898 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b189c:
    // 0x2b189c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b189cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B189C raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b18a0:
    // 0x2b18a0: 0x0  nop
    ctx->pc = 0x2b18a0u;
    // NOP
label_2b18a4:
    // 0x2b18a4: 0x0  nop
    ctx->pc = 0x2b18a4u;
    // NOP
label_2b18a8:
    // 0x2b18a8: 0x0  nop
    ctx->pc = 0x2b18a8u;
    // NOP
label_2b18ac:
    // 0x2b18ac: 0x0  nop
    ctx->pc = 0x2b18acu;
    // NOP
label_2b18b0:
    // 0x2b18b0: 0x240b00  .word       0x00240B00                   # sll         $at, $a0, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b18b0u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 4), 12));
label_2b18b4:
    // 0x2b18b4: 0x240a30  tge         $at, $a0, 40
    ctx->pc = 0x2b18b4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_2b18b8:
    // 0x2b18b8: 0x240960  .word       0x00240960                   # add         $at, $at, $a0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b18b8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_2b18bc:
    // 0x2b18bc: 0x240890  .word       0x00240890                   # mfhi        $at # 00240080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b18bcu;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_2b18c0:
    // 0x2b18c0: 0x240840  .word       0x00240840                   # sll         $at, $a0, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b18c0u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2b18c4:
    // 0x2b18c4: 0x240820  add         $at, $at, $a0
    ctx->pc = 0x2b18c4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_2b18c8:
    // 0x2b18c8: 0x2407d0  .word       0x002407D0                   # mfhi        $zero # 002407C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b18c8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2b18cc:
    // 0x2b18cc: 0x240730  tge         $at, $a0, 28
    ctx->pc = 0x2b18ccu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_2b18d0:
    // 0x2b18d0: 0xa50091  .word       0x00A50091                   # mthi        $a1 # 00050080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b18d0u;
    ctx->hi = GPR_U64(ctx, 5);
label_2b18d4:
    // 0x2b18d4: 0x28063232  slti        $a2, $zero, 0x3232
    ctx->pc = 0x2b18d4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)12850) ? 1 : 0);
label_2b18d8:
    // 0x2b18d8: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b18d8u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b18dc:
    // 0x2b18dc: 0x0  nop
    ctx->pc = 0x2b18dcu;
    // NOP
label_2b18e0:
    // 0x2b18e0: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b18e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b18e4:
    // 0x2b18e4: 0x0  nop
    ctx->pc = 0x2b18e4u;
    // NOP
label_2b18e8:
    // 0x2b18e8: 0x8c00a0  .word       0x008C00A0                   # add         $zero, $a0, $t4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b18e8u;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2b18ec:
    // 0x2b18ec: 0x28082e36  slti        $t0, $zero, 0x2E36
    ctx->pc = 0x2b18ecu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)11830) ? 1 : 0);
label_2b18f0:
    // 0x2b18f0: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b18f0u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b18f4:
    // 0x2b18f4: 0x0  nop
    ctx->pc = 0x2b18f4u;
    // NOP
label_2b18f8:
    // 0x2b18f8: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b18f8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b18fc:
    // 0x2b18fc: 0x0  nop
    ctx->pc = 0x2b18fcu;
    // NOP
label_2b1900:
    // 0x2b1900: 0x8700a5  .word       0x008700A5                   # or          $zero, $a0, $a3 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1900u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
label_2b1904:
    // 0x2b1904: 0x28062c38  slti        $a2, $zero, 0x2C38
    ctx->pc = 0x2b1904u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)11320) ? 1 : 0);
label_2b1908:
    // 0x2b1908: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1908u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b190c:
    // 0x2b190c: 0x0  nop
    ctx->pc = 0x2b190cu;
    // NOP
label_2b1910:
    // 0x2b1910: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1910u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1914:
    // 0x2b1914: 0x0  nop
    ctx->pc = 0x2b1914u;
    // NOP
label_2b1918:
    // 0x2b1918: 0x9b0091  .word       0x009B0091                   # mthi        $a0 # 001B0080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1918u;
    ctx->hi = GPR_U64(ctx, 4);
label_2b191c:
    // 0x2b191c: 0x28043232  slti        $a0, $zero, 0x3232
    ctx->pc = 0x2b191cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)12850) ? 1 : 0);
label_2b1920:
    // 0x2b1920: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1920u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1924:
    // 0x2b1924: 0x0  nop
    ctx->pc = 0x2b1924u;
    // NOP
label_2b1928:
    // 0x2b1928: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1928u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b192c:
    // 0x2b192c: 0x0  nop
    ctx->pc = 0x2b192cu;
    // NOP
label_2b1930:
    // 0x2b1930: 0x8c00a0  .word       0x008C00A0                   # add         $zero, $a0, $t4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1930u;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2b1934:
    // 0x2b1934: 0x280a2e36  slti        $t2, $zero, 0x2E36
    ctx->pc = 0x2b1934u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)11830) ? 1 : 0);
label_2b1938:
    // 0x2b1938: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1938u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b193c:
    // 0x2b193c: 0x0  nop
    ctx->pc = 0x2b193cu;
    // NOP
label_2b1940:
    // 0x2b1940: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1940u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1944:
    // 0x2b1944: 0x0  nop
    ctx->pc = 0x2b1944u;
    // NOP
label_2b1948:
    // 0x2b1948: 0x7800b4  teq         $v1, $t8, 2
    ctx->pc = 0x2b1948u;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_2b194c:
    // 0x2b194c: 0x280c2a3a  slti        $t4, $zero, 0x2A3A
    ctx->pc = 0x2b194cu;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)10810) ? 1 : 0);
label_2b1950:
    // 0x2b1950: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1950u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1954:
    // 0x2b1954: 0x0  nop
    ctx->pc = 0x2b1954u;
    // NOP
label_2b1958:
    // 0x2b1958: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1958u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b195c:
    // 0x2b195c: 0x0  nop
    ctx->pc = 0x2b195cu;
    // NOP
label_2b1960:
    // 0x2b1960: 0x9b0091  .word       0x009B0091                   # mthi        $a0 # 001B0080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1960u;
    ctx->hi = GPR_U64(ctx, 4);
label_2b1964:
    // 0x2b1964: 0x28003430  slti        $zero, $zero, 0x3430
    ctx->pc = 0x2b1964u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)13360) ? 1 : 0);
label_2b1968:
    // 0x2b1968: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1968u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b196c:
    // 0x2b196c: 0x0  nop
    ctx->pc = 0x2b196cu;
    // NOP
label_2b1970:
    // 0x2b1970: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1970u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1974:
    // 0x2b1974: 0x0  nop
    ctx->pc = 0x2b1974u;
    // NOP
    ctx->pc = 0x2b1978u;
    return;
}
