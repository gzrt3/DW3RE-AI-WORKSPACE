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


void FUN_0017d410_part140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x1c1778u: goto label_1c1778;
        case 0x1c177cu: goto label_1c177c;
        case 0x1c1780u: goto label_1c1780;
        case 0x1c1784u: goto label_1c1784;
        case 0x1c1788u: goto label_1c1788;
        case 0x1c178cu: goto label_1c178c;
        case 0x1c1790u: goto label_1c1790;
        case 0x1c1794u: goto label_1c1794;
        case 0x1c1798u: goto label_1c1798;
        case 0x1c179cu: goto label_1c179c;
        case 0x1c17a0u: goto label_1c17a0;
        case 0x1c17a4u: goto label_1c17a4;
        case 0x1c17a8u: goto label_1c17a8;
        case 0x1c17acu: goto label_1c17ac;
        case 0x1c17b0u: goto label_1c17b0;
        case 0x1c17b4u: goto label_1c17b4;
        case 0x1c17b8u: goto label_1c17b8;
        case 0x1c17bcu: goto label_1c17bc;
        case 0x1c17c0u: goto label_1c17c0;
        case 0x1c17c4u: goto label_1c17c4;
        case 0x1c17c8u: goto label_1c17c8;
        case 0x1c17ccu: goto label_1c17cc;
        case 0x1c17d0u: goto label_1c17d0;
        case 0x1c17d4u: goto label_1c17d4;
        case 0x1c17d8u: goto label_1c17d8;
        case 0x1c17dcu: goto label_1c17dc;
        case 0x1c17e0u: goto label_1c17e0;
        case 0x1c17e4u: goto label_1c17e4;
        case 0x1c17e8u: goto label_1c17e8;
        case 0x1c17ecu: goto label_1c17ec;
        case 0x1c17f0u: goto label_1c17f0;
        case 0x1c17f4u: goto label_1c17f4;
        case 0x1c17f8u: goto label_1c17f8;
        case 0x1c17fcu: goto label_1c17fc;
        case 0x1c1800u: goto label_1c1800;
        case 0x1c1804u: goto label_1c1804;
        case 0x1c1808u: goto label_1c1808;
        case 0x1c180cu: goto label_1c180c;
        case 0x1c1810u: goto label_1c1810;
        case 0x1c1814u: goto label_1c1814;
        case 0x1c1818u: goto label_1c1818;
        case 0x1c181cu: goto label_1c181c;
        case 0x1c1820u: goto label_1c1820;
        case 0x1c1824u: goto label_1c1824;
        case 0x1c1828u: goto label_1c1828;
        case 0x1c182cu: goto label_1c182c;
        case 0x1c1830u: goto label_1c1830;
        case 0x1c1834u: goto label_1c1834;
        case 0x1c1838u: goto label_1c1838;
        case 0x1c183cu: goto label_1c183c;
        case 0x1c1840u: goto label_1c1840;
        case 0x1c1844u: goto label_1c1844;
        case 0x1c1848u: goto label_1c1848;
        case 0x1c184cu: goto label_1c184c;
        case 0x1c1850u: goto label_1c1850;
        case 0x1c1854u: goto label_1c1854;
        case 0x1c1858u: goto label_1c1858;
        case 0x1c185cu: goto label_1c185c;
        case 0x1c1860u: goto label_1c1860;
        case 0x1c1864u: goto label_1c1864;
        case 0x1c1868u: goto label_1c1868;
        case 0x1c186cu: goto label_1c186c;
        case 0x1c1870u: goto label_1c1870;
        case 0x1c1874u: goto label_1c1874;
        case 0x1c1878u: goto label_1c1878;
        case 0x1c187cu: goto label_1c187c;
        case 0x1c1880u: goto label_1c1880;
        case 0x1c1884u: goto label_1c1884;
        case 0x1c1888u: goto label_1c1888;
        case 0x1c188cu: goto label_1c188c;
        case 0x1c1890u: goto label_1c1890;
        case 0x1c1894u: goto label_1c1894;
        case 0x1c1898u: goto label_1c1898;
        case 0x1c189cu: goto label_1c189c;
        case 0x1c18a0u: goto label_1c18a0;
        case 0x1c18a4u: goto label_1c18a4;
        case 0x1c18a8u: goto label_1c18a8;
        case 0x1c18acu: goto label_1c18ac;
        case 0x1c18b0u: goto label_1c18b0;
        case 0x1c18b4u: goto label_1c18b4;
        case 0x1c18b8u: goto label_1c18b8;
        case 0x1c18bcu: goto label_1c18bc;
        case 0x1c18c0u: goto label_1c18c0;
        case 0x1c18c4u: goto label_1c18c4;
        case 0x1c18c8u: goto label_1c18c8;
        case 0x1c18ccu: goto label_1c18cc;
        case 0x1c18d0u: goto label_1c18d0;
        case 0x1c18d4u: goto label_1c18d4;
        case 0x1c18d8u: goto label_1c18d8;
        case 0x1c18dcu: goto label_1c18dc;
        case 0x1c18e0u: goto label_1c18e0;
        case 0x1c18e4u: goto label_1c18e4;
        case 0x1c18e8u: goto label_1c18e8;
        case 0x1c18ecu: goto label_1c18ec;
        case 0x1c18f0u: goto label_1c18f0;
        case 0x1c18f4u: goto label_1c18f4;
        case 0x1c18f8u: goto label_1c18f8;
        case 0x1c18fcu: goto label_1c18fc;
        case 0x1c1900u: goto label_1c1900;
        case 0x1c1904u: goto label_1c1904;
        case 0x1c1908u: goto label_1c1908;
        case 0x1c190cu: goto label_1c190c;
        case 0x1c1910u: goto label_1c1910;
        case 0x1c1914u: goto label_1c1914;
        case 0x1c1918u: goto label_1c1918;
        case 0x1c191cu: goto label_1c191c;
        case 0x1c1920u: goto label_1c1920;
        case 0x1c1924u: goto label_1c1924;
        case 0x1c1928u: goto label_1c1928;
        case 0x1c192cu: goto label_1c192c;
        case 0x1c1930u: goto label_1c1930;
        case 0x1c1934u: goto label_1c1934;
        case 0x1c1938u: goto label_1c1938;
        case 0x1c193cu: goto label_1c193c;
        case 0x1c1940u: goto label_1c1940;
        case 0x1c1944u: goto label_1c1944;
        case 0x1c1948u: goto label_1c1948;
        case 0x1c194cu: goto label_1c194c;
        case 0x1c1950u: goto label_1c1950;
        case 0x1c1954u: goto label_1c1954;
        case 0x1c1958u: goto label_1c1958;
        case 0x1c195cu: goto label_1c195c;
        case 0x1c1960u: goto label_1c1960;
        case 0x1c1964u: goto label_1c1964;
        case 0x1c1968u: goto label_1c1968;
        case 0x1c196cu: goto label_1c196c;
        case 0x1c1970u: goto label_1c1970;
        case 0x1c1974u: goto label_1c1974;
        case 0x1c1978u: goto label_1c1978;
        case 0x1c197cu: goto label_1c197c;
        case 0x1c1980u: goto label_1c1980;
        case 0x1c1984u: goto label_1c1984;
        case 0x1c1988u: goto label_1c1988;
        case 0x1c198cu: goto label_1c198c;
        case 0x1c1990u: goto label_1c1990;
        case 0x1c1994u: goto label_1c1994;
        case 0x1c1998u: goto label_1c1998;
        case 0x1c199cu: goto label_1c199c;
        case 0x1c19a0u: goto label_1c19a0;
        case 0x1c19a4u: goto label_1c19a4;
        case 0x1c19a8u: goto label_1c19a8;
        case 0x1c19acu: goto label_1c19ac;
        case 0x1c19b0u: goto label_1c19b0;
        case 0x1c19b4u: goto label_1c19b4;
        case 0x1c19b8u: goto label_1c19b8;
        case 0x1c19bcu: goto label_1c19bc;
        case 0x1c19c0u: goto label_1c19c0;
        case 0x1c19c4u: goto label_1c19c4;
        case 0x1c19c8u: goto label_1c19c8;
        case 0x1c19ccu: goto label_1c19cc;
        default: return;
    }

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
    goto label_1c1920;
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
    goto label_1c1780;
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
        goto label_1c1778;
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
label_1c1778:
    // 0x1c1778: 0x0  nop
    ctx->pc = 0x1c1778u;
    // NOP
label_1c177c:
    // 0x1c177c: 0x0  nop
    ctx->pc = 0x1c177cu;
    // NOP
label_1c1780:
    // 0x1c1780: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c1780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1c1784:
    // 0x1c1784: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c1784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1c1788:
    // 0x1c1788: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c1788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c178c:
    // 0x1c178c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c178cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c1790:
    // 0x1c1790: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c1790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c1794:
    // 0x1c1794: 0x8f838930  lw          $v1, -0x76D0($gp)
    ctx->pc = 0x1c1794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936880)));
label_1c1798:
    // 0x1c1798: 0x10600058  beqz        $v1, . + 4 + (0x58 << 2)
label_1c179c:
    if (ctx->pc == 0x1C179Cu) {
        ctx->pc = 0x1C179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1798u;
        // 0x1c179c: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C17A0u;
        goto label_1c17a0;
    }
    ctx->pc = 0x1C1798u;
    {
        const bool branch_taken_0x1c1798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1798u;
        // 0x1c179c: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1798) {
            ctx->pc = 0x1C18FCu;
            goto label_1c18fc;
        }
    }
    ctx->pc = 0x1C17A0u;
label_1c17a0:
    // 0x1c17a0: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x1c17a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
label_1c17a4:
    // 0x1c17a4: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x1c17a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1c17a8:
    // 0x1c17a8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x1c17a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_1c17ac:
    // 0x1c17ac: 0x27838940  addiu       $v1, $gp, -0x76C0
    ctx->pc = 0x1c17acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936896));
label_1c17b0:
    // 0x1c17b0: 0x8f828934  lw          $v0, -0x76CC($gp)
    ctx->pc = 0x1c17b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936884)));
label_1c17b4:
    // 0x1c17b4: 0x24c61e00  addiu       $a2, $a2, 0x1E00
    ctx->pc = 0x1c17b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7680));
label_1c17b8:
    // 0x1c17b8: 0x24a58ec0  addiu       $a1, $a1, -0x7140
    ctx->pc = 0x1c17b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938304));
label_1c17bc:
    // 0x1c17bc: 0x43940  sll         $a3, $a0, 5
    ctx->pc = 0x1c17bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1c17c0:
    // 0x1c17c0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1c17c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1c17c4:
    // 0x1c17c4: 0xc78021  addu        $s0, $a2, $a3
    ctx->pc = 0x1c17c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1c17c8:
    // 0x1c17c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c17c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1c17cc:
    // 0x1c17cc: 0x231c0  sll         $a2, $v0, 7
    ctx->pc = 0x1c17ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1c17d0:
    // 0x1c17d0: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1c17d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c17d4:
    // 0x1c17d4: 0xc08e93e  jal         func_23A4F8
label_1c17d8:
    if (ctx->pc == 0x1C17D8u) {
        ctx->pc = 0x1C17D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C17D4u;
        // 0x1c17d8: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C17DCu;
        goto label_1c17dc;
    }
    ctx->pc = 0x1C17D4u;
    SET_GPR_U32(ctx, 31, 0x1C17DCu);
    ctx->pc = 0x1C17D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C17D4u;
    // 0x1c17d8: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1C17DCu;
label_1c17dc:
    // 0x1c17dc: 0x8f838930  lw          $v1, -0x76D0($gp)
    ctx->pc = 0x1c17dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936880)));
label_1c17e0:
    // 0x1c17e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c17e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c17e4:
    // 0x1c17e4: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
label_1c17e8:
    if (ctx->pc == 0x1C17E8u) {
        ctx->pc = 0x1C17E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C17E4u;
        // 0x1c17e8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C17ECu;
        goto label_1c17ec;
    }
    ctx->pc = 0x1C17E4u;
    {
        const bool branch_taken_0x1c17e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C17E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C17E4u;
        // 0x1c17e8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c17e4) {
            ctx->pc = 0x1C1850u;
            goto label_1c1850;
        }
    }
    ctx->pc = 0x1C17ECu;
label_1c17ec:
    // 0x1c17ec: 0x8f85893c  lw          $a1, -0x76C4($gp)
    ctx->pc = 0x1c17ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936892)));
label_1c17f0:
    // 0x1c17f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c17f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c17f4:
    // 0x1c17f4: 0x10000010  b           . + 4 + (0x10 << 2)
label_1c17f8:
    if (ctx->pc == 0x1C17F8u) {
        ctx->pc = 0x1C17F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C17F4u;
        // 0x1c17f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C17FCu;
        goto label_1c17fc;
    }
    ctx->pc = 0x1C17F4u;
    {
        const bool branch_taken_0x1c17f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C17F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C17F4u;
        // 0x1c17f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c17f4) {
            ctx->pc = 0x1C1838u;
            goto label_1c1838;
        }
    }
    ctx->pc = 0x1C17FCu;
label_1c17fc:
    // 0x1c17fc: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_1c1800:
    if (ctx->pc == 0x1C1800u) {
        ctx->pc = 0x1C1804u;
        goto label_1c1804;
    }
    ctx->pc = 0x1C17FCu;
    {
        const bool branch_taken_0x1c17fc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1c17fc) {
            ctx->pc = 0x1C1808u;
            goto label_1c1808;
        }
    }
    ctx->pc = 0x1C1804u;
label_1c1804:
    // 0x1c1804: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c1804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1808:
    // 0x1c1808: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x1c1808u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
label_1c180c:
    // 0x1c180c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1c1810:
    if (ctx->pc == 0x1C1810u) {
        ctx->pc = 0x1C1814u;
        goto label_1c1814;
    }
    ctx->pc = 0x1C180Cu;
    {
        const bool branch_taken_0x1c180c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c180c) {
            ctx->pc = 0x1C1818u;
            goto label_1c1818;
        }
    }
    ctx->pc = 0x1C1814u;
label_1c1814:
    // 0x1c1814: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1c1814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1c1818:
    // 0x1c1818: 0x2261821  addu        $v1, $s1, $a2
    ctx->pc = 0x1c1818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_1c181c:
    // 0x1c181c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c181cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1c1820:
    // 0x1c1820: 0xa06200d3  sb          $v0, 0xD3($v1)
    ctx->pc = 0x1c1820u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 211), (uint8_t)GPR_U32(ctx, 2));
label_1c1824:
    // 0x1c1824: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1c1824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
label_1c1828:
    // 0x1c1828: 0xa06200bb  sb          $v0, 0xBB($v1)
    ctx->pc = 0x1c1828u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 187), (uint8_t)GPR_U32(ctx, 2));
label_1c182c:
    // 0x1c182c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1c182cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1c1830:
    // 0x1c1830: 0xa06200a3  sb          $v0, 0xA3($v1)
    ctx->pc = 0x1c1830u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 163), (uint8_t)GPR_U32(ctx, 2));
label_1c1834:
    // 0x1c1834: 0xa062008b  sb          $v0, 0x8B($v1)
    ctx->pc = 0x1c1834u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 139), (uint8_t)GPR_U32(ctx, 2));
label_1c1838:
    // 0x1c1838: 0x8f828934  lw          $v0, -0x76CC($gp)
    ctx->pc = 0x1c1838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936884)));
label_1c183c:
    // 0x1c183c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1c183cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1c1840:
    // 0x1c1840: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_1c1844:
    if (ctx->pc == 0x1C1844u) {
        ctx->pc = 0x1C1844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1840u;
        // 0x1c1844: 0xa41023  subu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1848u;
        goto label_1c1848;
    }
    ctx->pc = 0x1C1840u;
    {
        const bool branch_taken_0x1c1840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1840u;
        // 0x1c1844: 0xa41023  subu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1840) {
            ctx->pc = 0x1C17FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c17fc;
        }
    }
    ctx->pc = 0x1C1848u;
label_1c1848:
    // 0x1c1848: 0x10000019  b           . + 4 + (0x19 << 2)
label_1c184c:
    if (ctx->pc == 0x1C184Cu) {
        ctx->pc = 0x1C1850u;
        goto label_1c1850;
    }
    ctx->pc = 0x1C1848u;
    {
        const bool branch_taken_0x1c1848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1848) {
            ctx->pc = 0x1C18B0u;
            goto label_1c18b0;
        }
    }
    ctx->pc = 0x1C1850u;
label_1c1850:
    // 0x1c1850: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
label_1c1854:
    if (ctx->pc == 0x1C1854u) {
        ctx->pc = 0x1C1858u;
        goto label_1c1858;
    }
    ctx->pc = 0x1C1850u;
    {
        const bool branch_taken_0x1c1850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c1850) {
            ctx->pc = 0x1C18B0u;
            goto label_1c18b0;
        }
    }
    ctx->pc = 0x1C1858u;
label_1c1858:
    // 0x1c1858: 0x8f82893c  lw          $v0, -0x76C4($gp)
    ctx->pc = 0x1c1858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936892)));
label_1c185c:
    // 0x1c185c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1c185cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1c1860:
    // 0x1c1860: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1c1864:
    if (ctx->pc == 0x1C1864u) {
        ctx->pc = 0x1C1864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1860u;
        // 0x1c1864: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1868u;
        goto label_1c1868;
    }
    ctx->pc = 0x1C1860u;
    {
        const bool branch_taken_0x1c1860 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1C1864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1860u;
        // 0x1c1864: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1860) {
            ctx->pc = 0x1C1870u;
            goto label_1c1870;
        }
    }
    ctx->pc = 0x1C1868u;
label_1c1868:
    // 0x1c1868: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x1c1868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_1c186c:
    // 0x1c186c: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x1c186cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_1c1870:
    // 0x1c1870: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1c1870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c1874:
    // 0x1c1874: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1878:
    // 0x1c1878: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1c1878u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c187c:
    // 0x1c187c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c1880:
    if (ctx->pc == 0x1C1880u) {
        ctx->pc = 0x1C1880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C187Cu;
        // 0x1c1880: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1884u;
        goto label_1c1884;
    }
    ctx->pc = 0x1C187Cu;
    {
        const bool branch_taken_0x1c187c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C187Cu;
        // 0x1c1880: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c187c) {
            ctx->pc = 0x1C189Cu;
            goto label_1c189c;
        }
    }
    ctx->pc = 0x1C1884u;
label_1c1884:
    // 0x1c1884: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c1884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1c1888:
    // 0x1c1888: 0xa04300d3  sb          $v1, 0xD3($v0)
    ctx->pc = 0x1c1888u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 211), (uint8_t)GPR_U32(ctx, 3));
label_1c188c:
    // 0x1c188c: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x1c188cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_1c1890:
    // 0x1c1890: 0xa04300bb  sb          $v1, 0xBB($v0)
    ctx->pc = 0x1c1890u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 187), (uint8_t)GPR_U32(ctx, 3));
label_1c1894:
    // 0x1c1894: 0xa04300a3  sb          $v1, 0xA3($v0)
    ctx->pc = 0x1c1894u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 163), (uint8_t)GPR_U32(ctx, 3));
label_1c1898:
    // 0x1c1898: 0xa043008b  sb          $v1, 0x8B($v0)
    ctx->pc = 0x1c1898u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 139), (uint8_t)GPR_U32(ctx, 3));
label_1c189c:
    // 0x1c189c: 0x0  nop
    ctx->pc = 0x1c189cu;
    // NOP
label_1c18a0:
    // 0x1c18a0: 0x8f828934  lw          $v0, -0x76CC($gp)
    ctx->pc = 0x1c18a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936884)));
label_1c18a4:
    // 0x1c18a4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1c18a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1c18a8:
    // 0x1c18a8: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1c18ac:
    if (ctx->pc == 0x1C18ACu) {
        ctx->pc = 0x1C18ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C18A8u;
        // 0x1c18ac: 0x2241021  addu        $v0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C18B0u;
        goto label_1c18b0;
    }
    ctx->pc = 0x1C18A8u;
    {
        const bool branch_taken_0x1c18a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C18ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C18A8u;
        // 0x1c18ac: 0x2241021  addu        $v0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c18a8) {
            ctx->pc = 0x1C1884u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1884;
        }
    }
    ctx->pc = 0x1C18B0u;
label_1c18b0:
    // 0x1c18b0: 0x8f858934  lw          $a1, -0x76CC($gp)
    ctx->pc = 0x1c18b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936884)));
label_1c18b4:
    // 0x1c18b4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1c18b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_1c18b8:
    // 0x1c18b8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1c18b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1c18bc:
    // 0x1c18bc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c18bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1c18c0:
    // 0x1c18c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c18c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c18c4:
    // 0x1c18c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c18c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1c18c8:
    // 0x1c18c8: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1c18c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1c18cc:
    // 0x1c18cc: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x1c18ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1c18d0:
    // 0x1c18d0: 0x24720006  addiu       $s2, $v1, 0x6
    ctx->pc = 0x1c18d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
label_1c18d4:
    // 0x1c18d4: 0xfe220060  sd          $v0, 0x60($s1)
    ctx->pc = 0x1c18d4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 96), GPR_U64(ctx, 2));
label_1c18d8:
    // 0x1c18d8: 0xc05e234  jal         func_1788D0
label_1c18dc:
    if (ctx->pc == 0x1C18DCu) {
        ctx->pc = 0x1C18DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C18D8u;
        // 0x1c18dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C18E0u;
        goto label_1c18e0;
    }
    ctx->pc = 0x1C18D8u;
    SET_GPR_U32(ctx, 31, 0x1C18E0u);
    ctx->pc = 0x1C18DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C18D8u;
    // 0x1c18dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1C18D8u, 0x1C18E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C18E0u;
label_1c18e0:
    // 0x1c18e0: 0x26460001  addiu       $a2, $s2, 0x1
    ctx->pc = 0x1c18e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1c18e4:
    // 0x1c18e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c18e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c18e8:
    // 0x1c18e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c18e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c18ec:
    // 0x1c18ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c18ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c18f0:
    // 0x1c18f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c18f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c18f4:
    // 0x1c18f4: 0xc066c72  jal         func_19B1C8
label_1c18f8:
    if (ctx->pc == 0x1C18F8u) {
        ctx->pc = 0x1C18F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C18F4u;
        // 0x1c18f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C18FCu;
        goto label_1c18fc;
    }
    ctx->pc = 0x1C18F4u;
    SET_GPR_U32(ctx, 31, 0x1C18FCu);
    ctx->pc = 0x1C18F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C18F4u;
    // 0x1c18f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1C18FCu;
label_1c18fc:
    // 0x1c18fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c18fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c1900:
    // 0x1c1900: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c1900u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c1904:
    // 0x1c1904: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c1904u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1908:
    // 0x1c1908: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c190c:
    // 0x1c190c: 0x3e00008  jr          $ra
label_1c1910:
    if (ctx->pc == 0x1C1910u) {
        ctx->pc = 0x1C1910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C190Cu;
        // 0x1c1910: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1914u;
        goto label_1c1914;
    }
    ctx->pc = 0x1C190Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C190Cu;
        // 0x1c1910: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C190Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1914u;
label_1c1914:
    // 0x1c1914: 0x0  nop
    ctx->pc = 0x1c1914u;
    // NOP
label_1c1918:
    // 0x1c1918: 0x0  nop
    ctx->pc = 0x1c1918u;
    // NOP
label_1c191c:
    // 0x1c191c: 0x0  nop
    ctx->pc = 0x1c191cu;
    // NOP
label_1c1920:
    // 0x1c1920: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c1920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1c1924:
    // 0x1c1924: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c1924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1c1928:
    // 0x1c1928: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c1928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c192c:
    // 0x1c192c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c192cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c1930:
    // 0x1c1930: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c1930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c1934:
    // 0x1c1934: 0x8f838920  lw          $v1, -0x76E0($gp)
    ctx->pc = 0x1c1934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
label_1c1938:
    // 0x1c1938: 0x1060005c  beqz        $v1, . + 4 + (0x5C << 2)
label_1c193c:
    if (ctx->pc == 0x1C193Cu) {
        ctx->pc = 0x1C193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1938u;
        // 0x1c193c: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1940u;
        goto label_1c1940;
    }
    ctx->pc = 0x1C1938u;
    {
        const bool branch_taken_0x1c1938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1938u;
        // 0x1c193c: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1938) {
            ctx->pc = 0x1C1AACu;
            { ctx->pc = 0x1c1aac; return; }
        }
    }
    ctx->pc = 0x1C1940u;
label_1c1940:
    // 0x1c1940: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x1c1940u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
label_1c1944:
    // 0x1c1944: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x1c1944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1c1948:
    // 0x1c1948: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x1c1948u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_1c194c:
    // 0x1c194c: 0x27838948  addiu       $v1, $gp, -0x76B8
    ctx->pc = 0x1c194cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936904));
label_1c1950:
    // 0x1c1950: 0x8f828924  lw          $v0, -0x76DC($gp)
    ctx->pc = 0x1c1950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936868)));
label_1c1954:
    // 0x1c1954: 0x24c61e00  addiu       $a2, $a2, 0x1E00
    ctx->pc = 0x1c1954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7680));
label_1c1958:
    // 0x1c1958: 0x24a5d840  addiu       $a1, $a1, -0x27C0
    ctx->pc = 0x1c1958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957120));
label_1c195c:
    // 0x1c195c: 0x43940  sll         $a3, $a0, 5
    ctx->pc = 0x1c195cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1c1960:
    // 0x1c1960: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1c1960u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1c1964:
    // 0x1c1964: 0xc78021  addu        $s0, $a2, $a3
    ctx->pc = 0x1c1964u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1c1968:
    // 0x1c1968: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c1968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1c196c:
    // 0x1c196c: 0x231c0  sll         $a2, $v0, 7
    ctx->pc = 0x1c196cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1c1970:
    // 0x1c1970: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1c1970u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c1974:
    // 0x1c1974: 0xc08e93e  jal         func_23A4F8
label_1c1978:
    if (ctx->pc == 0x1C1978u) {
        ctx->pc = 0x1C1978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1974u;
        // 0x1c1978: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C197Cu;
        goto label_1c197c;
    }
    ctx->pc = 0x1C1974u;
    SET_GPR_U32(ctx, 31, 0x1C197Cu);
    ctx->pc = 0x1C1978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1974u;
    // 0x1c1978: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1C197Cu;
label_1c197c:
    // 0x1c197c: 0x8f838920  lw          $v1, -0x76E0($gp)
    ctx->pc = 0x1c197cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
label_1c1980:
    // 0x1c1980: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c1980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c1984:
    // 0x1c1984: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
label_1c1988:
    if (ctx->pc == 0x1C1988u) {
        ctx->pc = 0x1C1988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1984u;
        // 0x1c1988: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C198Cu;
        goto label_1c198c;
    }
    ctx->pc = 0x1C1984u;
    {
        const bool branch_taken_0x1c1984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C1988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1984u;
        // 0x1c1988: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1984) {
            ctx->pc = 0x1C1A60u;
            { ctx->pc = 0x1c1a60; return; }
        }
    }
    ctx->pc = 0x1C198Cu;
label_1c198c:
    // 0x1c198c: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
label_1c1990:
    if (ctx->pc == 0x1C1990u) {
        ctx->pc = 0x1C1994u;
        goto label_1c1994;
    }
    ctx->pc = 0x1C198Cu;
    {
        const bool branch_taken_0x1c198c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c198c) {
            ctx->pc = 0x1C1A00u;
            { ctx->pc = 0x1c1a00; return; }
        }
    }
    ctx->pc = 0x1C1994u;
label_1c1994:
    // 0x1c1994: 0x8f83892c  lw          $v1, -0x76D4($gp)
    ctx->pc = 0x1c1994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936876)));
label_1c1998:
    // 0x1c1998: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1c1998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_1c199c:
    // 0x1c199c: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1c199cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_1c19a0:
    // 0x1c19a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c19a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c19a4:
    // 0x1c19a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c19a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c19a8:
    // 0x1c19a8: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x1c19a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_1c19ac:
    // 0x1c19ac: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1c19acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1c19b0:
    // 0x1c19b0: 0x0  nop
    ctx->pc = 0x1c19b0u;
    // NOP
label_1c19b4:
    // 0x1c19b4: 0x0  nop
    ctx->pc = 0x1c19b4u;
    // NOP
label_1c19b8:
    // 0x1c19b8: 0x1010  mfhi        $v0
    ctx->pc = 0x1c19b8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1c19bc:
    // 0x1c19bc: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1c19bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1c19c0:
    // 0x1c19c0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1c19c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1c19c4:
    // 0x1c19c4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c19c8:
    if (ctx->pc == 0x1C19C8u) {
        ctx->pc = 0x1C19C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C19C4u;
        // 0x1c19c8: 0x431821  addu        $v1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C19CCu;
        goto label_1c19cc;
    }
    ctx->pc = 0x1C19C4u;
    {
        const bool branch_taken_0x1c19c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C19C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C19C4u;
        // 0x1c19c8: 0x431821  addu        $v1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c19c4) {
            ctx->pc = 0x1C19E4u;
            { ctx->pc = 0x1c19e4; return; }
        }
    }
    ctx->pc = 0x1C19CCu;
label_1c19cc:
    // 0x1c19cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1c19ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x1c19d0u;
    return;
}
