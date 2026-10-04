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


void FUN_0019b618_part111(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1d1178u: goto label_1d1178;
        case 0x1d117cu: goto label_1d117c;
        case 0x1d1180u: goto label_1d1180;
        case 0x1d1184u: goto label_1d1184;
        case 0x1d1188u: goto label_1d1188;
        case 0x1d118cu: goto label_1d118c;
        case 0x1d1190u: goto label_1d1190;
        case 0x1d1194u: goto label_1d1194;
        case 0x1d1198u: goto label_1d1198;
        case 0x1d119cu: goto label_1d119c;
        case 0x1d11a0u: goto label_1d11a0;
        case 0x1d11a4u: goto label_1d11a4;
        case 0x1d11a8u: goto label_1d11a8;
        case 0x1d11acu: goto label_1d11ac;
        case 0x1d11b0u: goto label_1d11b0;
        case 0x1d11b4u: goto label_1d11b4;
        case 0x1d11b8u: goto label_1d11b8;
        case 0x1d11bcu: goto label_1d11bc;
        case 0x1d11c0u: goto label_1d11c0;
        case 0x1d11c4u: goto label_1d11c4;
        case 0x1d11c8u: goto label_1d11c8;
        case 0x1d11ccu: goto label_1d11cc;
        case 0x1d11d0u: goto label_1d11d0;
        case 0x1d11d4u: goto label_1d11d4;
        case 0x1d11d8u: goto label_1d11d8;
        case 0x1d11dcu: goto label_1d11dc;
        case 0x1d11e0u: goto label_1d11e0;
        case 0x1d11e4u: goto label_1d11e4;
        case 0x1d11e8u: goto label_1d11e8;
        case 0x1d11ecu: goto label_1d11ec;
        case 0x1d11f0u: goto label_1d11f0;
        case 0x1d11f4u: goto label_1d11f4;
        case 0x1d11f8u: goto label_1d11f8;
        case 0x1d11fcu: goto label_1d11fc;
        case 0x1d1200u: goto label_1d1200;
        case 0x1d1204u: goto label_1d1204;
        case 0x1d1208u: goto label_1d1208;
        case 0x1d120cu: goto label_1d120c;
        case 0x1d1210u: goto label_1d1210;
        case 0x1d1214u: goto label_1d1214;
        case 0x1d1218u: goto label_1d1218;
        case 0x1d121cu: goto label_1d121c;
        case 0x1d1220u: goto label_1d1220;
        case 0x1d1224u: goto label_1d1224;
        case 0x1d1228u: goto label_1d1228;
        case 0x1d122cu: goto label_1d122c;
        case 0x1d1230u: goto label_1d1230;
        case 0x1d1234u: goto label_1d1234;
        case 0x1d1238u: goto label_1d1238;
        case 0x1d123cu: goto label_1d123c;
        case 0x1d1240u: goto label_1d1240;
        case 0x1d1244u: goto label_1d1244;
        case 0x1d1248u: goto label_1d1248;
        case 0x1d124cu: goto label_1d124c;
        case 0x1d1250u: goto label_1d1250;
        case 0x1d1254u: goto label_1d1254;
        case 0x1d1258u: goto label_1d1258;
        case 0x1d125cu: goto label_1d125c;
        case 0x1d1260u: goto label_1d1260;
        case 0x1d1264u: goto label_1d1264;
        case 0x1d1268u: goto label_1d1268;
        case 0x1d126cu: goto label_1d126c;
        case 0x1d1270u: goto label_1d1270;
        case 0x1d1274u: goto label_1d1274;
        case 0x1d1278u: goto label_1d1278;
        case 0x1d127cu: goto label_1d127c;
        case 0x1d1280u: goto label_1d1280;
        case 0x1d1284u: goto label_1d1284;
        case 0x1d1288u: goto label_1d1288;
        case 0x1d128cu: goto label_1d128c;
        case 0x1d1290u: goto label_1d1290;
        case 0x1d1294u: goto label_1d1294;
        case 0x1d1298u: goto label_1d1298;
        case 0x1d129cu: goto label_1d129c;
        case 0x1d12a0u: goto label_1d12a0;
        case 0x1d12a4u: goto label_1d12a4;
        case 0x1d12a8u: goto label_1d12a8;
        case 0x1d12acu: goto label_1d12ac;
        case 0x1d12b0u: goto label_1d12b0;
        case 0x1d12b4u: goto label_1d12b4;
        case 0x1d12b8u: goto label_1d12b8;
        case 0x1d12bcu: goto label_1d12bc;
        case 0x1d12c0u: goto label_1d12c0;
        case 0x1d12c4u: goto label_1d12c4;
        case 0x1d12c8u: goto label_1d12c8;
        case 0x1d12ccu: goto label_1d12cc;
        case 0x1d12d0u: goto label_1d12d0;
        case 0x1d12d4u: goto label_1d12d4;
        case 0x1d12d8u: goto label_1d12d8;
        case 0x1d12dcu: goto label_1d12dc;
        case 0x1d12e0u: goto label_1d12e0;
        case 0x1d12e4u: goto label_1d12e4;
        case 0x1d12e8u: goto label_1d12e8;
        case 0x1d12ecu: goto label_1d12ec;
        case 0x1d12f0u: goto label_1d12f0;
        case 0x1d12f4u: goto label_1d12f4;
        case 0x1d12f8u: goto label_1d12f8;
        case 0x1d12fcu: goto label_1d12fc;
        case 0x1d1300u: goto label_1d1300;
        case 0x1d1304u: goto label_1d1304;
        case 0x1d1308u: goto label_1d1308;
        case 0x1d130cu: goto label_1d130c;
        case 0x1d1310u: goto label_1d1310;
        case 0x1d1314u: goto label_1d1314;
        case 0x1d1318u: goto label_1d1318;
        case 0x1d131cu: goto label_1d131c;
        case 0x1d1320u: goto label_1d1320;
        case 0x1d1324u: goto label_1d1324;
        case 0x1d1328u: goto label_1d1328;
        case 0x1d132cu: goto label_1d132c;
        case 0x1d1330u: goto label_1d1330;
        case 0x1d1334u: goto label_1d1334;
        case 0x1d1338u: goto label_1d1338;
        case 0x1d133cu: goto label_1d133c;
        case 0x1d1340u: goto label_1d1340;
        case 0x1d1344u: goto label_1d1344;
        case 0x1d1348u: goto label_1d1348;
        case 0x1d134cu: goto label_1d134c;
        case 0x1d1350u: goto label_1d1350;
        case 0x1d1354u: goto label_1d1354;
        case 0x1d1358u: goto label_1d1358;
        case 0x1d135cu: goto label_1d135c;
        case 0x1d1360u: goto label_1d1360;
        case 0x1d1364u: goto label_1d1364;
        case 0x1d1368u: goto label_1d1368;
        case 0x1d136cu: goto label_1d136c;
        case 0x1d1370u: goto label_1d1370;
        case 0x1d1374u: goto label_1d1374;
        case 0x1d1378u: goto label_1d1378;
        case 0x1d137cu: goto label_1d137c;
        case 0x1d1380u: goto label_1d1380;
        case 0x1d1384u: goto label_1d1384;
        case 0x1d1388u: goto label_1d1388;
        case 0x1d138cu: goto label_1d138c;
        case 0x1d1390u: goto label_1d1390;
        case 0x1d1394u: goto label_1d1394;
        case 0x1d1398u: goto label_1d1398;
        case 0x1d139cu: goto label_1d139c;
        case 0x1d13a0u: goto label_1d13a0;
        case 0x1d13a4u: goto label_1d13a4;
        case 0x1d13a8u: goto label_1d13a8;
        case 0x1d13acu: goto label_1d13ac;
        case 0x1d13b0u: goto label_1d13b0;
        case 0x1d13b4u: goto label_1d13b4;
        case 0x1d13b8u: goto label_1d13b8;
        case 0x1d13bcu: goto label_1d13bc;
        case 0x1d13c0u: goto label_1d13c0;
        case 0x1d13c4u: goto label_1d13c4;
        case 0x1d13c8u: goto label_1d13c8;
        case 0x1d13ccu: goto label_1d13cc;
        case 0x1d13d0u: goto label_1d13d0;
        case 0x1d13d4u: goto label_1d13d4;
        case 0x1d13d8u: goto label_1d13d8;
        case 0x1d13dcu: goto label_1d13dc;
        case 0x1d13e0u: goto label_1d13e0;
        case 0x1d13e4u: goto label_1d13e4;
        case 0x1d13e8u: goto label_1d13e8;
        case 0x1d13ecu: goto label_1d13ec;
        case 0x1d13f0u: goto label_1d13f0;
        case 0x1d13f4u: goto label_1d13f4;
        case 0x1d13f8u: goto label_1d13f8;
        case 0x1d13fcu: goto label_1d13fc;
        case 0x1d1400u: goto label_1d1400;
        case 0x1d1404u: goto label_1d1404;
        case 0x1d1408u: goto label_1d1408;
        case 0x1d140cu: goto label_1d140c;
        case 0x1d1410u: goto label_1d1410;
        case 0x1d1414u: goto label_1d1414;
        case 0x1d1418u: goto label_1d1418;
        case 0x1d141cu: goto label_1d141c;
        case 0x1d1420u: goto label_1d1420;
        case 0x1d1424u: goto label_1d1424;
        case 0x1d1428u: goto label_1d1428;
        case 0x1d142cu: goto label_1d142c;
        case 0x1d1430u: goto label_1d1430;
        case 0x1d1434u: goto label_1d1434;
        case 0x1d1438u: goto label_1d1438;
        case 0x1d143cu: goto label_1d143c;
        case 0x1d1440u: goto label_1d1440;
        case 0x1d1444u: goto label_1d1444;
        case 0x1d1448u: goto label_1d1448;
        case 0x1d144cu: goto label_1d144c;
        case 0x1d1450u: goto label_1d1450;
        case 0x1d1454u: goto label_1d1454;
        case 0x1d1458u: goto label_1d1458;
        case 0x1d145cu: goto label_1d145c;
        case 0x1d1460u: goto label_1d1460;
        case 0x1d1464u: goto label_1d1464;
        case 0x1d1468u: goto label_1d1468;
        case 0x1d146cu: goto label_1d146c;
        case 0x1d1470u: goto label_1d1470;
        case 0x1d1474u: goto label_1d1474;
        case 0x1d1478u: goto label_1d1478;
        case 0x1d147cu: goto label_1d147c;
        case 0x1d1480u: goto label_1d1480;
        case 0x1d1484u: goto label_1d1484;
        case 0x1d1488u: goto label_1d1488;
        case 0x1d148cu: goto label_1d148c;
        case 0x1d1490u: goto label_1d1490;
        case 0x1d1494u: goto label_1d1494;
        case 0x1d1498u: goto label_1d1498;
        case 0x1d149cu: goto label_1d149c;
        case 0x1d14a0u: goto label_1d14a0;
        case 0x1d14a4u: goto label_1d14a4;
        case 0x1d14a8u: goto label_1d14a8;
        case 0x1d14acu: goto label_1d14ac;
        case 0x1d14b0u: goto label_1d14b0;
        case 0x1d14b4u: goto label_1d14b4;
        case 0x1d14b8u: goto label_1d14b8;
        case 0x1d14bcu: goto label_1d14bc;
        case 0x1d14c0u: goto label_1d14c0;
        case 0x1d14c4u: goto label_1d14c4;
        case 0x1d14c8u: goto label_1d14c8;
        case 0x1d14ccu: goto label_1d14cc;
        case 0x1d14d0u: goto label_1d14d0;
        case 0x1d14d4u: goto label_1d14d4;
        case 0x1d14d8u: goto label_1d14d8;
        case 0x1d14dcu: goto label_1d14dc;
        case 0x1d14e0u: goto label_1d14e0;
        case 0x1d14e4u: goto label_1d14e4;
        case 0x1d14e8u: goto label_1d14e8;
        case 0x1d14ecu: goto label_1d14ec;
        case 0x1d14f0u: goto label_1d14f0;
        case 0x1d14f4u: goto label_1d14f4;
        case 0x1d14f8u: goto label_1d14f8;
        case 0x1d14fcu: goto label_1d14fc;
        case 0x1d1500u: goto label_1d1500;
        case 0x1d1504u: goto label_1d1504;
        case 0x1d1508u: goto label_1d1508;
        case 0x1d150cu: goto label_1d150c;
        case 0x1d1510u: goto label_1d1510;
        case 0x1d1514u: goto label_1d1514;
        case 0x1d1518u: goto label_1d1518;
        case 0x1d151cu: goto label_1d151c;
        case 0x1d1520u: goto label_1d1520;
        case 0x1d1524u: goto label_1d1524;
        case 0x1d1528u: goto label_1d1528;
        case 0x1d152cu: goto label_1d152c;
        case 0x1d1530u: goto label_1d1530;
        case 0x1d1534u: goto label_1d1534;
        case 0x1d1538u: goto label_1d1538;
        case 0x1d153cu: goto label_1d153c;
        case 0x1d1540u: goto label_1d1540;
        case 0x1d1544u: goto label_1d1544;
        case 0x1d1548u: goto label_1d1548;
        case 0x1d154cu: goto label_1d154c;
        case 0x1d1550u: goto label_1d1550;
        case 0x1d1554u: goto label_1d1554;
        case 0x1d1558u: goto label_1d1558;
        case 0x1d155cu: goto label_1d155c;
        case 0x1d1560u: goto label_1d1560;
        case 0x1d1564u: goto label_1d1564;
        case 0x1d1568u: goto label_1d1568;
        case 0x1d156cu: goto label_1d156c;
        case 0x1d1570u: goto label_1d1570;
        case 0x1d1574u: goto label_1d1574;
        case 0x1d1578u: goto label_1d1578;
        case 0x1d157cu: goto label_1d157c;
        case 0x1d1580u: goto label_1d1580;
        case 0x1d1584u: goto label_1d1584;
        case 0x1d1588u: goto label_1d1588;
        case 0x1d158cu: goto label_1d158c;
        case 0x1d1590u: goto label_1d1590;
        case 0x1d1594u: goto label_1d1594;
        case 0x1d1598u: goto label_1d1598;
        case 0x1d159cu: goto label_1d159c;
        case 0x1d15a0u: goto label_1d15a0;
        case 0x1d15a4u: goto label_1d15a4;
        case 0x1d15a8u: goto label_1d15a8;
        case 0x1d15acu: goto label_1d15ac;
        case 0x1d15b0u: goto label_1d15b0;
        case 0x1d15b4u: goto label_1d15b4;
        case 0x1d15b8u: goto label_1d15b8;
        case 0x1d15bcu: goto label_1d15bc;
        case 0x1d15c0u: goto label_1d15c0;
        case 0x1d15c4u: goto label_1d15c4;
        case 0x1d15c8u: goto label_1d15c8;
        case 0x1d15ccu: goto label_1d15cc;
        case 0x1d15d0u: goto label_1d15d0;
        case 0x1d15d4u: goto label_1d15d4;
        case 0x1d15d8u: goto label_1d15d8;
        case 0x1d15dcu: goto label_1d15dc;
        case 0x1d15e0u: goto label_1d15e0;
        case 0x1d15e4u: goto label_1d15e4;
        case 0x1d15e8u: goto label_1d15e8;
        case 0x1d15ecu: goto label_1d15ec;
        case 0x1d15f0u: goto label_1d15f0;
        case 0x1d15f4u: goto label_1d15f4;
        case 0x1d15f8u: goto label_1d15f8;
        case 0x1d15fcu: goto label_1d15fc;
        case 0x1d1600u: goto label_1d1600;
        case 0x1d1604u: goto label_1d1604;
        case 0x1d1608u: goto label_1d1608;
        case 0x1d160cu: goto label_1d160c;
        case 0x1d1610u: goto label_1d1610;
        case 0x1d1614u: goto label_1d1614;
        case 0x1d1618u: goto label_1d1618;
        case 0x1d161cu: goto label_1d161c;
        case 0x1d1620u: goto label_1d1620;
        case 0x1d1624u: goto label_1d1624;
        case 0x1d1628u: goto label_1d1628;
        case 0x1d162cu: goto label_1d162c;
        case 0x1d1630u: goto label_1d1630;
        case 0x1d1634u: goto label_1d1634;
        case 0x1d1638u: goto label_1d1638;
        case 0x1d163cu: goto label_1d163c;
        case 0x1d1640u: goto label_1d1640;
        case 0x1d1644u: goto label_1d1644;
        case 0x1d1648u: goto label_1d1648;
        case 0x1d164cu: goto label_1d164c;
        case 0x1d1650u: goto label_1d1650;
        case 0x1d1654u: goto label_1d1654;
        case 0x1d1658u: goto label_1d1658;
        case 0x1d165cu: goto label_1d165c;
        case 0x1d1660u: goto label_1d1660;
        case 0x1d1664u: goto label_1d1664;
        case 0x1d1668u: goto label_1d1668;
        case 0x1d166cu: goto label_1d166c;
        case 0x1d1670u: goto label_1d1670;
        case 0x1d1674u: goto label_1d1674;
        case 0x1d1678u: goto label_1d1678;
        case 0x1d167cu: goto label_1d167c;
        case 0x1d1680u: goto label_1d1680;
        case 0x1d1684u: goto label_1d1684;
        case 0x1d1688u: goto label_1d1688;
        case 0x1d168cu: goto label_1d168c;
        case 0x1d1690u: goto label_1d1690;
        case 0x1d1694u: goto label_1d1694;
        case 0x1d1698u: goto label_1d1698;
        case 0x1d169cu: goto label_1d169c;
        case 0x1d16a0u: goto label_1d16a0;
        case 0x1d16a4u: goto label_1d16a4;
        case 0x1d16a8u: goto label_1d16a8;
        case 0x1d16acu: goto label_1d16ac;
        case 0x1d16b0u: goto label_1d16b0;
        case 0x1d16b4u: goto label_1d16b4;
        case 0x1d16b8u: goto label_1d16b8;
        case 0x1d16bcu: goto label_1d16bc;
        case 0x1d16c0u: goto label_1d16c0;
        case 0x1d16c4u: goto label_1d16c4;
        case 0x1d16c8u: goto label_1d16c8;
        case 0x1d16ccu: goto label_1d16cc;
        case 0x1d16d0u: goto label_1d16d0;
        case 0x1d16d4u: goto label_1d16d4;
        case 0x1d16d8u: goto label_1d16d8;
        case 0x1d16dcu: goto label_1d16dc;
        case 0x1d16e0u: goto label_1d16e0;
        case 0x1d16e4u: goto label_1d16e4;
        case 0x1d16e8u: goto label_1d16e8;
        case 0x1d16ecu: goto label_1d16ec;
        case 0x1d16f0u: goto label_1d16f0;
        case 0x1d16f4u: goto label_1d16f4;
        case 0x1d16f8u: goto label_1d16f8;
        case 0x1d16fcu: goto label_1d16fc;
        case 0x1d1700u: goto label_1d1700;
        case 0x1d1704u: goto label_1d1704;
        case 0x1d1708u: goto label_1d1708;
        case 0x1d170cu: goto label_1d170c;
        case 0x1d1710u: goto label_1d1710;
        case 0x1d1714u: goto label_1d1714;
        case 0x1d1718u: goto label_1d1718;
        case 0x1d171cu: goto label_1d171c;
        case 0x1d1720u: goto label_1d1720;
        case 0x1d1724u: goto label_1d1724;
        case 0x1d1728u: goto label_1d1728;
        case 0x1d172cu: goto label_1d172c;
        case 0x1d1730u: goto label_1d1730;
        case 0x1d1734u: goto label_1d1734;
        case 0x1d1738u: goto label_1d1738;
        case 0x1d173cu: goto label_1d173c;
        case 0x1d1740u: goto label_1d1740;
        case 0x1d1744u: goto label_1d1744;
        case 0x1d1748u: goto label_1d1748;
        case 0x1d174cu: goto label_1d174c;
        case 0x1d1750u: goto label_1d1750;
        case 0x1d1754u: goto label_1d1754;
        case 0x1d1758u: goto label_1d1758;
        case 0x1d175cu: goto label_1d175c;
        case 0x1d1760u: goto label_1d1760;
        case 0x1d1764u: goto label_1d1764;
        case 0x1d1768u: goto label_1d1768;
        case 0x1d176cu: goto label_1d176c;
        case 0x1d1770u: goto label_1d1770;
        case 0x1d1774u: goto label_1d1774;
        case 0x1d1778u: goto label_1d1778;
        case 0x1d177cu: goto label_1d177c;
        case 0x1d1780u: goto label_1d1780;
        case 0x1d1784u: goto label_1d1784;
        case 0x1d1788u: goto label_1d1788;
        case 0x1d178cu: goto label_1d178c;
        case 0x1d1790u: goto label_1d1790;
        case 0x1d1794u: goto label_1d1794;
        case 0x1d1798u: goto label_1d1798;
        case 0x1d179cu: goto label_1d179c;
        case 0x1d17a0u: goto label_1d17a0;
        case 0x1d17a4u: goto label_1d17a4;
        case 0x1d17a8u: goto label_1d17a8;
        case 0x1d17acu: goto label_1d17ac;
        case 0x1d17b0u: goto label_1d17b0;
        case 0x1d17b4u: goto label_1d17b4;
        case 0x1d17b8u: goto label_1d17b8;
        case 0x1d17bcu: goto label_1d17bc;
        case 0x1d17c0u: goto label_1d17c0;
        case 0x1d17c4u: goto label_1d17c4;
        case 0x1d17c8u: goto label_1d17c8;
        case 0x1d17ccu: goto label_1d17cc;
        case 0x1d17d0u: goto label_1d17d0;
        case 0x1d17d4u: goto label_1d17d4;
        case 0x1d17d8u: goto label_1d17d8;
        case 0x1d17dcu: goto label_1d17dc;
        case 0x1d17e0u: goto label_1d17e0;
        case 0x1d17e4u: goto label_1d17e4;
        case 0x1d17e8u: goto label_1d17e8;
        case 0x1d17ecu: goto label_1d17ec;
        case 0x1d17f0u: goto label_1d17f0;
        case 0x1d17f4u: goto label_1d17f4;
        case 0x1d17f8u: goto label_1d17f8;
        case 0x1d17fcu: goto label_1d17fc;
        case 0x1d1800u: goto label_1d1800;
        case 0x1d1804u: goto label_1d1804;
        case 0x1d1808u: goto label_1d1808;
        case 0x1d180cu: goto label_1d180c;
        case 0x1d1810u: goto label_1d1810;
        case 0x1d1814u: goto label_1d1814;
        case 0x1d1818u: goto label_1d1818;
        case 0x1d181cu: goto label_1d181c;
        case 0x1d1820u: goto label_1d1820;
        case 0x1d1824u: goto label_1d1824;
        case 0x1d1828u: goto label_1d1828;
        case 0x1d182cu: goto label_1d182c;
        case 0x1d1830u: goto label_1d1830;
        case 0x1d1834u: goto label_1d1834;
        case 0x1d1838u: goto label_1d1838;
        case 0x1d183cu: goto label_1d183c;
        case 0x1d1840u: goto label_1d1840;
        case 0x1d1844u: goto label_1d1844;
        case 0x1d1848u: goto label_1d1848;
        case 0x1d184cu: goto label_1d184c;
        case 0x1d1850u: goto label_1d1850;
        case 0x1d1854u: goto label_1d1854;
        case 0x1d1858u: goto label_1d1858;
        case 0x1d185cu: goto label_1d185c;
        case 0x1d1860u: goto label_1d1860;
        case 0x1d1864u: goto label_1d1864;
        case 0x1d1868u: goto label_1d1868;
        case 0x1d186cu: goto label_1d186c;
        case 0x1d1870u: goto label_1d1870;
        case 0x1d1874u: goto label_1d1874;
        case 0x1d1878u: goto label_1d1878;
        case 0x1d187cu: goto label_1d187c;
        case 0x1d1880u: goto label_1d1880;
        case 0x1d1884u: goto label_1d1884;
        case 0x1d1888u: goto label_1d1888;
        case 0x1d188cu: goto label_1d188c;
        case 0x1d1890u: goto label_1d1890;
        case 0x1d1894u: goto label_1d1894;
        case 0x1d1898u: goto label_1d1898;
        case 0x1d189cu: goto label_1d189c;
        case 0x1d18a0u: goto label_1d18a0;
        case 0x1d18a4u: goto label_1d18a4;
        case 0x1d18a8u: goto label_1d18a8;
        case 0x1d18acu: goto label_1d18ac;
        case 0x1d18b0u: goto label_1d18b0;
        case 0x1d18b4u: goto label_1d18b4;
        case 0x1d18b8u: goto label_1d18b8;
        case 0x1d18bcu: goto label_1d18bc;
        case 0x1d18c0u: goto label_1d18c0;
        case 0x1d18c4u: goto label_1d18c4;
        case 0x1d18c8u: goto label_1d18c8;
        case 0x1d18ccu: goto label_1d18cc;
        case 0x1d18d0u: goto label_1d18d0;
        case 0x1d18d4u: goto label_1d18d4;
        case 0x1d18d8u: goto label_1d18d8;
        case 0x1d18dcu: goto label_1d18dc;
        case 0x1d18e0u: goto label_1d18e0;
        case 0x1d18e4u: goto label_1d18e4;
        case 0x1d18e8u: goto label_1d18e8;
        case 0x1d18ecu: goto label_1d18ec;
        case 0x1d18f0u: goto label_1d18f0;
        case 0x1d18f4u: goto label_1d18f4;
        case 0x1d18f8u: goto label_1d18f8;
        case 0x1d18fcu: goto label_1d18fc;
        case 0x1d1900u: goto label_1d1900;
        case 0x1d1904u: goto label_1d1904;
        case 0x1d1908u: goto label_1d1908;
        case 0x1d190cu: goto label_1d190c;
        case 0x1d1910u: goto label_1d1910;
        case 0x1d1914u: goto label_1d1914;
        case 0x1d1918u: goto label_1d1918;
        case 0x1d191cu: goto label_1d191c;
        case 0x1d1920u: goto label_1d1920;
        case 0x1d1924u: goto label_1d1924;
        case 0x1d1928u: goto label_1d1928;
        case 0x1d192cu: goto label_1d192c;
        case 0x1d1930u: goto label_1d1930;
        case 0x1d1934u: goto label_1d1934;
        case 0x1d1938u: goto label_1d1938;
        case 0x1d193cu: goto label_1d193c;
        case 0x1d1940u: goto label_1d1940;
        case 0x1d1944u: goto label_1d1944;
        default: return;
    }

label_1d1178:
    // 0x1d1178: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x1d1178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_1d117c:
    // 0x1d117c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d117cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d1180:
    // 0x1d1180: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1d1180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1d1184:
    // 0x1d1184: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d1184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1188:
    // 0x1d1188: 0xffa00020  sd          $zero, 0x20($sp)
    ctx->pc = 0x1d1188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
label_1d118c:
    // 0x1d118c: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x1d118cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_1d1190:
    // 0x1d1190: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x1d1190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
label_1d1194:
    // 0x1d1194: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x1d1194u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d1198:
    // 0x1d1198: 0x8c28ad84  lw          $t0, -0x527C($at)
    ctx->pc = 0x1d1198u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294946180)));
label_1d119c:
    // 0x1d119c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1d119cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1d11a0:
    // 0x1d11a0: 0x24470018  addiu       $a3, $v0, 0x18
    ctx->pc = 0x1d11a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_1d11a4:
    // 0x1d11a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d11a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d11a8:
    // 0x1d11a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d11a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d11ac:
    // 0x1d11ac: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1d11acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1d11b0:
    // 0x1d11b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d11b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d11b4:
    // 0x1d11b4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1d11b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d11b8:
    // 0x1d11b8: 0xc05ded8  jal         func_177B60
label_1d11bc:
    if (ctx->pc == 0x1D11BCu) {
        ctx->pc = 0x1D11BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D11B8u;
        // 0x1d11bc: 0x240b01a8  addiu       $t3, $zero, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D11C0u;
        goto label_1d11c0;
    }
    ctx->pc = 0x1D11B8u;
    SET_GPR_U32(ctx, 31, 0x1D11C0u);
    ctx->pc = 0x1D11BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D11B8u;
    // 0x1d11bc: 0x240b01a8  addiu       $t3, $zero, 0x1A8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B60u, 0x1D11B8u, 0x1D11C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D11C0u;
label_1d11c0:
    // 0x1d11c0: 0x10000016  b           . + 4 + (0x16 << 2)
label_1d11c4:
    if (ctx->pc == 0x1D11C4u) {
        ctx->pc = 0x1D11C8u;
        goto label_1d11c8;
    }
    ctx->pc = 0x1D11C0u;
    {
        const bool branch_taken_0x1d11c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d11c0) {
            ctx->pc = 0x1D121Cu;
            goto label_1d121c;
        }
    }
    ctx->pc = 0x1D11C8u;
label_1d11c8:
    // 0x1d11c8: 0x240200b0  addiu       $v0, $zero, 0xB0
    ctx->pc = 0x1d11c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_1d11cc:
    // 0x1d11cc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1d11ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1d11d0:
    // 0x1d11d0: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d11d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d11d4:
    // 0x1d11d4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1d11d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1d11d8:
    // 0x1d11d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d11d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d11dc:
    // 0x1d11dc: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1d11dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1d11e0:
    // 0x1d11e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d11e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d11e4:
    // 0x1d11e4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1d11e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d11e8:
    // 0x1d11e8: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x1d11e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1d11ec:
    // 0x1d11ec: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1d11ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1d11f0:
    // 0x1d11f0: 0x24070019  addiu       $a3, $zero, 0x19
    ctx->pc = 0x1d11f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_1d11f4:
    // 0x1d11f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d11f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d11f8:
    // 0x1d11f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d11f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d11fc:
    // 0x1d11fc: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1d11fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1d1200:
    // 0x1d1200: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x1d1200u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d1204:
    // 0x1d1204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1208:
    // 0x1d1208: 0xffa00020  sd          $zero, 0x20($sp)
    ctx->pc = 0x1d1208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
label_1d120c:
    // 0x1d120c: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x1d120cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
label_1d1210:
    // 0x1d1210: 0x8c28ad84  lw          $t0, -0x527C($at)
    ctx->pc = 0x1d1210u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294946180)));
label_1d1214:
    // 0x1d1214: 0xc05ded8  jal         func_177B60
label_1d1218:
    if (ctx->pc == 0x1D1218u) {
        ctx->pc = 0x1D1218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1214u;
        // 0x1d1218: 0x240b01a8  addiu       $t3, $zero, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D121Cu;
        goto label_1d121c;
    }
    ctx->pc = 0x1D1214u;
    SET_GPR_U32(ctx, 31, 0x1D121Cu);
    ctx->pc = 0x1D1218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1214u;
    // 0x1d1218: 0x240b01a8  addiu       $t3, $zero, 0x1A8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B60u, 0x1D1214u, 0x1D121Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D121Cu;
label_1d121c:
    // 0x1d121c: 0x0  nop
    ctx->pc = 0x1d121cu;
    // NOP
label_1d1220:
    // 0x1d1220: 0x16000018  bnez        $s0, . + 4 + (0x18 << 2)
label_1d1224:
    if (ctx->pc == 0x1D1224u) {
        ctx->pc = 0x1D1224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1220u;
        // 0x1d1224: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1228u;
        goto label_1d1228;
    }
    ctx->pc = 0x1D1220u;
    {
        const bool branch_taken_0x1d1220 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1220u;
        // 0x1d1224: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1220) {
            ctx->pc = 0x1D1284u;
            goto label_1d1284;
        }
    }
    ctx->pc = 0x1D1228u;
label_1d1228:
    // 0x1d1228: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1d1228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1d122c:
    // 0x1d122c: 0xa2440070  sb          $a0, 0x70($s2)
    ctx->pc = 0x1d122cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 112), (uint8_t)GPR_U32(ctx, 4));
label_1d1230:
    // 0x1d1230: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d1230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d1234:
    // 0x1d1234: 0xa2440071  sb          $a0, 0x71($s2)
    ctx->pc = 0x1d1234u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 113), (uint8_t)GPR_U32(ctx, 4));
label_1d1238:
    // 0x1d1238: 0xa2440072  sb          $a0, 0x72($s2)
    ctx->pc = 0x1d1238u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 114), (uint8_t)GPR_U32(ctx, 4));
label_1d123c:
    // 0x1d123c: 0xa2430073  sb          $v1, 0x73($s2)
    ctx->pc = 0x1d123cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 115), (uint8_t)GPR_U32(ctx, 3));
label_1d1240:
    // 0x1d1240: 0xae420074  sw          $v0, 0x74($s2)
    ctx->pc = 0x1d1240u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 2));
label_1d1244:
    // 0x1d1244: 0xa2440088  sb          $a0, 0x88($s2)
    ctx->pc = 0x1d1244u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 136), (uint8_t)GPR_U32(ctx, 4));
label_1d1248:
    // 0x1d1248: 0xa2440089  sb          $a0, 0x89($s2)
    ctx->pc = 0x1d1248u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 137), (uint8_t)GPR_U32(ctx, 4));
label_1d124c:
    // 0x1d124c: 0xa244008a  sb          $a0, 0x8A($s2)
    ctx->pc = 0x1d124cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 138), (uint8_t)GPR_U32(ctx, 4));
label_1d1250:
    // 0x1d1250: 0xa243008b  sb          $v1, 0x8B($s2)
    ctx->pc = 0x1d1250u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 139), (uint8_t)GPR_U32(ctx, 3));
label_1d1254:
    // 0x1d1254: 0xae42008c  sw          $v0, 0x8C($s2)
    ctx->pc = 0x1d1254u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
label_1d1258:
    // 0x1d1258: 0xa24400a0  sb          $a0, 0xA0($s2)
    ctx->pc = 0x1d1258u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 160), (uint8_t)GPR_U32(ctx, 4));
label_1d125c:
    // 0x1d125c: 0xa24400a1  sb          $a0, 0xA1($s2)
    ctx->pc = 0x1d125cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 161), (uint8_t)GPR_U32(ctx, 4));
label_1d1260:
    // 0x1d1260: 0xa24400a2  sb          $a0, 0xA2($s2)
    ctx->pc = 0x1d1260u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 162), (uint8_t)GPR_U32(ctx, 4));
label_1d1264:
    // 0x1d1264: 0xa24300a3  sb          $v1, 0xA3($s2)
    ctx->pc = 0x1d1264u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 163), (uint8_t)GPR_U32(ctx, 3));
label_1d1268:
    // 0x1d1268: 0xae4200a4  sw          $v0, 0xA4($s2)
    ctx->pc = 0x1d1268u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 2));
label_1d126c:
    // 0x1d126c: 0xa24400b8  sb          $a0, 0xB8($s2)
    ctx->pc = 0x1d126cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 184), (uint8_t)GPR_U32(ctx, 4));
label_1d1270:
    // 0x1d1270: 0xa24400b9  sb          $a0, 0xB9($s2)
    ctx->pc = 0x1d1270u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 185), (uint8_t)GPR_U32(ctx, 4));
label_1d1274:
    // 0x1d1274: 0xa24400ba  sb          $a0, 0xBA($s2)
    ctx->pc = 0x1d1274u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 186), (uint8_t)GPR_U32(ctx, 4));
label_1d1278:
    // 0x1d1278: 0xa24300bb  sb          $v1, 0xBB($s2)
    ctx->pc = 0x1d1278u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 187), (uint8_t)GPR_U32(ctx, 3));
label_1d127c:
    // 0x1d127c: 0x1000003c  b           . + 4 + (0x3C << 2)
label_1d1280:
    if (ctx->pc == 0x1D1280u) {
        ctx->pc = 0x1D1280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D127Cu;
        // 0x1d1280: 0xae4200bc  sw          $v0, 0xBC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1284u;
        goto label_1d1284;
    }
    ctx->pc = 0x1D127Cu;
    {
        const bool branch_taken_0x1d127c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D127Cu;
        // 0x1d1280: 0xae4200bc  sw          $v0, 0xBC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d127c) {
            ctx->pc = 0x1D1370u;
            goto label_1d1370;
        }
    }
    ctx->pc = 0x1D1284u;
label_1d1284:
    // 0x1d1284: 0x0  nop
    ctx->pc = 0x1d1284u;
    // NOP
label_1d1288:
    // 0x1d1288: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d128c:
    // 0x1d128c: 0x1602001a  bne         $s0, $v0, . + 4 + (0x1A << 2)
label_1d1290:
    if (ctx->pc == 0x1D1290u) {
        ctx->pc = 0x1D1290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D128Cu;
        // 0x1d1290: 0x24060036  addiu       $a2, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1294u;
        goto label_1d1294;
    }
    ctx->pc = 0x1D128Cu;
    {
        const bool branch_taken_0x1d128c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D1290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D128Cu;
        // 0x1d1290: 0x24060036  addiu       $a2, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d128c) {
            ctx->pc = 0x1D12F8u;
            goto label_1d12f8;
        }
    }
    ctx->pc = 0x1D1294u;
label_1d1294:
    // 0x1d1294: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1d1294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d1298:
    // 0x1d1298: 0xa2460070  sb          $a2, 0x70($s2)
    ctx->pc = 0x1d1298u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 112), (uint8_t)GPR_U32(ctx, 6));
label_1d129c:
    // 0x1d129c: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x1d129cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1d12a0:
    // 0x1d12a0: 0xa2450071  sb          $a1, 0x71($s2)
    ctx->pc = 0x1d12a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 113), (uint8_t)GPR_U32(ctx, 5));
label_1d12a4:
    // 0x1d12a4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d12a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d12a8:
    // 0x1d12a8: 0xa2440072  sb          $a0, 0x72($s2)
    ctx->pc = 0x1d12a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 114), (uint8_t)GPR_U32(ctx, 4));
label_1d12ac:
    // 0x1d12ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d12acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d12b0:
    // 0x1d12b0: 0xa2430073  sb          $v1, 0x73($s2)
    ctx->pc = 0x1d12b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 115), (uint8_t)GPR_U32(ctx, 3));
label_1d12b4:
    // 0x1d12b4: 0xae420074  sw          $v0, 0x74($s2)
    ctx->pc = 0x1d12b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 2));
label_1d12b8:
    // 0x1d12b8: 0xa2460088  sb          $a2, 0x88($s2)
    ctx->pc = 0x1d12b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 136), (uint8_t)GPR_U32(ctx, 6));
label_1d12bc:
    // 0x1d12bc: 0xa2450089  sb          $a1, 0x89($s2)
    ctx->pc = 0x1d12bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 137), (uint8_t)GPR_U32(ctx, 5));
label_1d12c0:
    // 0x1d12c0: 0xa244008a  sb          $a0, 0x8A($s2)
    ctx->pc = 0x1d12c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 138), (uint8_t)GPR_U32(ctx, 4));
label_1d12c4:
    // 0x1d12c4: 0xa243008b  sb          $v1, 0x8B($s2)
    ctx->pc = 0x1d12c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 139), (uint8_t)GPR_U32(ctx, 3));
label_1d12c8:
    // 0x1d12c8: 0xae42008c  sw          $v0, 0x8C($s2)
    ctx->pc = 0x1d12c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
label_1d12cc:
    // 0x1d12cc: 0xa24600a0  sb          $a2, 0xA0($s2)
    ctx->pc = 0x1d12ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 160), (uint8_t)GPR_U32(ctx, 6));
label_1d12d0:
    // 0x1d12d0: 0xa24500a1  sb          $a1, 0xA1($s2)
    ctx->pc = 0x1d12d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 161), (uint8_t)GPR_U32(ctx, 5));
label_1d12d4:
    // 0x1d12d4: 0xa24400a2  sb          $a0, 0xA2($s2)
    ctx->pc = 0x1d12d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 162), (uint8_t)GPR_U32(ctx, 4));
label_1d12d8:
    // 0x1d12d8: 0xa24300a3  sb          $v1, 0xA3($s2)
    ctx->pc = 0x1d12d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 163), (uint8_t)GPR_U32(ctx, 3));
label_1d12dc:
    // 0x1d12dc: 0xae4200a4  sw          $v0, 0xA4($s2)
    ctx->pc = 0x1d12dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 2));
label_1d12e0:
    // 0x1d12e0: 0xa24600b8  sb          $a2, 0xB8($s2)
    ctx->pc = 0x1d12e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 184), (uint8_t)GPR_U32(ctx, 6));
label_1d12e4:
    // 0x1d12e4: 0xa24500b9  sb          $a1, 0xB9($s2)
    ctx->pc = 0x1d12e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 185), (uint8_t)GPR_U32(ctx, 5));
label_1d12e8:
    // 0x1d12e8: 0xa24400ba  sb          $a0, 0xBA($s2)
    ctx->pc = 0x1d12e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 186), (uint8_t)GPR_U32(ctx, 4));
label_1d12ec:
    // 0x1d12ec: 0xa24300bb  sb          $v1, 0xBB($s2)
    ctx->pc = 0x1d12ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 187), (uint8_t)GPR_U32(ctx, 3));
label_1d12f0:
    // 0x1d12f0: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1d12f4:
    if (ctx->pc == 0x1D12F4u) {
        ctx->pc = 0x1D12F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D12F0u;
        // 0x1d12f4: 0xae4200bc  sw          $v0, 0xBC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D12F8u;
        goto label_1d12f8;
    }
    ctx->pc = 0x1D12F0u;
    {
        const bool branch_taken_0x1d12f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D12F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D12F0u;
        // 0x1d12f4: 0xae4200bc  sw          $v0, 0xBC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d12f0) {
            ctx->pc = 0x1D1370u;
            goto label_1d1370;
        }
    }
    ctx->pc = 0x1D12F8u;
label_1d12f8:
    // 0x1d12f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d12f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d12fc:
    // 0x1d12fc: 0x1602001c  bne         $s0, $v0, . + 4 + (0x1C << 2)
label_1d1300:
    if (ctx->pc == 0x1D1300u) {
        ctx->pc = 0x1D1300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D12FCu;
        // 0x1d1300: 0x24020056  addiu       $v0, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1304u;
        goto label_1d1304;
    }
    ctx->pc = 0x1D12FCu;
    {
        const bool branch_taken_0x1d12fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D1300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D12FCu;
        // 0x1d1300: 0x24020056  addiu       $v0, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d12fc) {
            ctx->pc = 0x1D1370u;
            goto label_1d1370;
        }
    }
    ctx->pc = 0x1D1304u;
label_1d1304:
    // 0x1d1304: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1d1304u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d1308:
    // 0x1d1308: 0xa2420070  sb          $v0, 0x70($s2)
    ctx->pc = 0x1d1308u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 112), (uint8_t)GPR_U32(ctx, 2));
label_1d130c:
    // 0x1d130c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1d130cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d1310:
    // 0x1d1310: 0xa2480071  sb          $t0, 0x71($s2)
    ctx->pc = 0x1d1310u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 113), (uint8_t)GPR_U32(ctx, 8));
label_1d1314:
    // 0x1d1314: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1d1314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d1318:
    // 0x1d1318: 0xa2470072  sb          $a3, 0x72($s2)
    ctx->pc = 0x1d1318u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 114), (uint8_t)GPR_U32(ctx, 7));
label_1d131c:
    // 0x1d131c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1d131cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1d1320:
    // 0x1d1320: 0xa2460073  sb          $a2, 0x73($s2)
    ctx->pc = 0x1d1320u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 115), (uint8_t)GPR_U32(ctx, 6));
label_1d1324:
    // 0x1d1324: 0x2404007f  addiu       $a0, $zero, 0x7F
    ctx->pc = 0x1d1324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1d1328:
    // 0x1d1328: 0xae450074  sw          $a1, 0x74($s2)
    ctx->pc = 0x1d1328u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 5));
label_1d132c:
    // 0x1d132c: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1d132cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1d1330:
    // 0x1d1330: 0xa24200a0  sb          $v0, 0xA0($s2)
    ctx->pc = 0x1d1330u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 160), (uint8_t)GPR_U32(ctx, 2));
label_1d1334:
    // 0x1d1334: 0xa24800a1  sb          $t0, 0xA1($s2)
    ctx->pc = 0x1d1334u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 161), (uint8_t)GPR_U32(ctx, 8));
label_1d1338:
    // 0x1d1338: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x1d1338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_1d133c:
    // 0x1d133c: 0xa24700a2  sb          $a3, 0xA2($s2)
    ctx->pc = 0x1d133cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 162), (uint8_t)GPR_U32(ctx, 7));
label_1d1340:
    // 0x1d1340: 0xa24600a3  sb          $a2, 0xA3($s2)
    ctx->pc = 0x1d1340u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 163), (uint8_t)GPR_U32(ctx, 6));
label_1d1344:
    // 0x1d1344: 0xae4500a4  sw          $a1, 0xA4($s2)
    ctx->pc = 0x1d1344u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 5));
label_1d1348:
    // 0x1d1348: 0xa2440088  sb          $a0, 0x88($s2)
    ctx->pc = 0x1d1348u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 136), (uint8_t)GPR_U32(ctx, 4));
label_1d134c:
    // 0x1d134c: 0xa2430089  sb          $v1, 0x89($s2)
    ctx->pc = 0x1d134cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 137), (uint8_t)GPR_U32(ctx, 3));
label_1d1350:
    // 0x1d1350: 0xa242008a  sb          $v0, 0x8A($s2)
    ctx->pc = 0x1d1350u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 138), (uint8_t)GPR_U32(ctx, 2));
label_1d1354:
    // 0x1d1354: 0xa246008b  sb          $a2, 0x8B($s2)
    ctx->pc = 0x1d1354u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 139), (uint8_t)GPR_U32(ctx, 6));
label_1d1358:
    // 0x1d1358: 0xae45008c  sw          $a1, 0x8C($s2)
    ctx->pc = 0x1d1358u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 5));
label_1d135c:
    // 0x1d135c: 0xa24400b8  sb          $a0, 0xB8($s2)
    ctx->pc = 0x1d135cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 184), (uint8_t)GPR_U32(ctx, 4));
label_1d1360:
    // 0x1d1360: 0xa24300b9  sb          $v1, 0xB9($s2)
    ctx->pc = 0x1d1360u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 185), (uint8_t)GPR_U32(ctx, 3));
label_1d1364:
    // 0x1d1364: 0xa24200ba  sb          $v0, 0xBA($s2)
    ctx->pc = 0x1d1364u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 186), (uint8_t)GPR_U32(ctx, 2));
label_1d1368:
    // 0x1d1368: 0xa24600bb  sb          $a2, 0xBB($s2)
    ctx->pc = 0x1d1368u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 187), (uint8_t)GPR_U32(ctx, 6));
label_1d136c:
    // 0x1d136c: 0xae4500bc  sw          $a1, 0xBC($s2)
    ctx->pc = 0x1d136cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 5));
label_1d1370:
    // 0x1d1370: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d1374:
    // 0x1d1374: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x1d1374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_1d1378:
    // 0x1d1378: 0x1440ff75  bnez        $v0, . + 4 + (-0x8B << 2)
label_1d137c:
    if (ctx->pc == 0x1D137Cu) {
        ctx->pc = 0x1D137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1378u;
        // 0x1d137c: 0x267300d0  addiu       $s3, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1380u;
        goto label_1d1380;
    }
    ctx->pc = 0x1D1378u;
    {
        const bool branch_taken_0x1d1378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1378u;
        // 0x1d137c: 0x267300d0  addiu       $s3, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1378) {
            ctx->pc = 0x1D1150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d1150; return; }
        }
    }
    ctx->pc = 0x1D1380u;
label_1d1380:
    // 0x1d1380: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d1380u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1384:
    // 0x1d1384: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x1d1384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
label_1d1388:
    // 0x1d1388: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x1d1388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
label_1d138c:
    // 0x1d138c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1d138cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1390:
    // 0x1d1390: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x1d1390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
label_1d1394:
    // 0x1d1394: 0x0  nop
    ctx->pc = 0x1d1394u;
    // NOP
label_1d1398:
    // 0x1d1398: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1d1398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1d139c:
    // 0x1d139c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1d139cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1d13a0:
    // 0x1d13a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d13a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d13a4:
    // 0x1d13a4: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
label_1d13a8:
    if (ctx->pc == 0x1D13A8u) {
        ctx->pc = 0x1D13A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D13A4u;
        // 0x1d13a8: 0x24510280  addiu       $s1, $v0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D13ACu;
        goto label_1d13ac;
    }
    ctx->pc = 0x1D13A4u;
    {
        const bool branch_taken_0x1d13a4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D13A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D13A4u;
        // 0x1d13a8: 0x24510280  addiu       $s1, $v0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d13a4) {
            ctx->pc = 0x1D13E4u;
            goto label_1d13e4;
        }
    }
    ctx->pc = 0x1D13ACu;
label_1d13ac:
    // 0x1d13ac: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1d13acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1d13b0:
    // 0x1d13b0: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1d13b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1d13b4:
    // 0x1d13b4: 0x2484ae30  addiu       $a0, $a0, -0x51D0
    ctx->pc = 0x1d13b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946352));
label_1d13b8:
    // 0x1d13b8: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1d13b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1d13bc:
    // 0x1d13bc: 0x2463ae90  addiu       $v1, $v1, -0x5170
    ctx->pc = 0x1d13bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946448));
label_1d13c0:
    // 0x1d13c0: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x1d13c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d13c4:
    // 0x1d13c4: 0x7e2021  addu        $a0, $v1, $fp
    ctx->pc = 0x1d13c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_1d13c8:
    // 0x1d13c8: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x1d13c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_1d13cc:
    // 0x1d13cc: 0x551823  subu        $v1, $v0, $s5
    ctx->pc = 0x1d13ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d13d0:
    // 0x1d13d0: 0x8c960000  lw          $s6, 0x0($a0)
    ctx->pc = 0x1d13d0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d13d4:
    // 0x1d13d4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1d13d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1d13d8:
    // 0x1d13d8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1d13d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1d13dc:
    // 0x1d13dc: 0x1000000c  b           . + 4 + (0xC << 2)
label_1d13e0:
    if (ctx->pc == 0x1D13E0u) {
        ctx->pc = 0x1D13E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D13DCu;
        // 0x1d13e0: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D13E4u;
        goto label_1d13e4;
    }
    ctx->pc = 0x1D13DCu;
    {
        const bool branch_taken_0x1d13dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D13E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D13DCu;
        // 0x1d13e0: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d13dc) {
            ctx->pc = 0x1D1410u;
            goto label_1d1410;
        }
    }
    ctx->pc = 0x1D13E4u;
label_1d13e4:
    // 0x1d13e4: 0x0  nop
    ctx->pc = 0x1d13e4u;
    // NOP
label_1d13e8:
    // 0x1d13e8: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1d13e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1d13ec:
    // 0x1d13ec: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1d13ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1d13f0:
    // 0x1d13f0: 0x2463ada0  addiu       $v1, $v1, -0x5260
    ctx->pc = 0x1d13f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946208));
label_1d13f4:
    // 0x1d13f4: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1d13f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d13f8:
    // 0x1d13f8: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1d13f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1d13fc:
    // 0x1d13fc: 0x2442ae00  addiu       $v0, $v0, -0x5200
    ctx->pc = 0x1d13fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946304));
label_1d1400:
    // 0x1d1400: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1d1400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_1d1404:
    // 0x1d1404: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x1d1404u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d1408:
    // 0x1d1408: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x1d1408u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d140c:
    // 0x1d140c: 0x0  nop
    ctx->pc = 0x1d140cu;
    // NOP
label_1d1410:
    // 0x1d1410: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x1d1410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_1d1414:
    // 0x1d1414: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1d1414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1d1418:
    // 0x1d1418: 0x2463ad80  addiu       $v1, $v1, -0x5280
    ctx->pc = 0x1d1418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946176));
label_1d141c:
    // 0x1d141c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d141cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d1420:
    // 0x1d1420: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d1420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d1424:
    // 0x1d1424: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d1424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d1428:
    // 0x1d1428: 0x1663001d  bne         $s3, $v1, . + 4 + (0x1D << 2)
label_1d142c:
    if (ctx->pc == 0x1D142Cu) {
        ctx->pc = 0x1D142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1428u;
        // 0x1d142c: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1430u;
        goto label_1d1430;
    }
    ctx->pc = 0x1D1428u;
    {
        const bool branch_taken_0x1d1428 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1428u;
        // 0x1d142c: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1428) {
            ctx->pc = 0x1D14A0u;
            goto label_1d14a0;
        }
    }
    ctx->pc = 0x1D1430u;
label_1d1430:
    // 0x1d1430: 0x1680001b  bnez        $s4, . + 4 + (0x1B << 2)
label_1d1434:
    if (ctx->pc == 0x1D1434u) {
        ctx->pc = 0x1D1434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1430u;
        // 0x1d1434: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1438u;
        goto label_1d1438;
    }
    ctx->pc = 0x1D1430u;
    {
        const bool branch_taken_0x1d1430 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1430u;
        // 0x1d1434: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1430) {
            ctx->pc = 0x1D14A0u;
            goto label_1d14a0;
        }
    }
    ctx->pc = 0x1D1438u;
label_1d1438:
    // 0x1d1438: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1d1438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1d143c:
    // 0x1d143c: 0xc07091c  jal         func_1C2470
label_1d1440:
    if (ctx->pc == 0x1D1440u) {
        ctx->pc = 0x1D1440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D143Cu;
        // 0x1d1440: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1444u;
        goto label_1d1444;
    }
    ctx->pc = 0x1D143Cu;
    SET_GPR_U32(ctx, 31, 0x1D1444u);
    ctx->pc = 0x1D1440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D143Cu;
    // 0x1d1440: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x1D1444u;
label_1d1444:
    // 0x1d1444: 0x8fa800e0  lw          $t0, 0xE0($sp)
    ctx->pc = 0x1d1444u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1d1448:
    // 0x1d1448: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d1448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d144c:
    // 0x1d144c: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x1d144cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_1d1450:
    // 0x1d1450: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1454:
    // 0x1d1454: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d1454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d1458:
    // 0x1d1458: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1d1458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1d145c:
    // 0x1d145c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1d145cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d1460:
    // 0x1d1460: 0x24090034  addiu       $t1, $zero, 0x34
    ctx->pc = 0x1d1460u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1d1464:
    // 0x1d1464: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1d1464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_1d1468:
    // 0x1d1468: 0x96430004  lhu         $v1, 0x4($s2)
    ctx->pc = 0x1d1468u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_1d146c:
    // 0x1d146c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1d146cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1d1470:
    // 0x1d1470: 0x96430006  lhu         $v1, 0x6($s2)
    ctx->pc = 0x1d1470u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_1d1474:
    // 0x1d1474: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x1d1474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_1d1478:
    // 0x1d1478: 0x96430008  lhu         $v1, 0x8($s2)
    ctx->pc = 0x1d1478u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
label_1d147c:
    // 0x1d147c: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x1d147cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_1d1480:
    // 0x1d1480: 0x9643000a  lhu         $v1, 0xA($s2)
    ctx->pc = 0x1d1480u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
label_1d1484:
    // 0x1d1484: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x1d1484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
label_1d1488:
    // 0x1d1488: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x1d1488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
label_1d148c:
    // 0x1d148c: 0x964b0000  lhu         $t3, 0x0($s2)
    ctx->pc = 0x1d148cu;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_1d1490:
    // 0x1d1490: 0xc05dd88  jal         func_177620
label_1d1494:
    if (ctx->pc == 0x1D1494u) {
        ctx->pc = 0x1D1494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1490u;
        // 0x1d1494: 0x240a0040  addiu       $t2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1498u;
        goto label_1d1498;
    }
    ctx->pc = 0x1D1490u;
    SET_GPR_U32(ctx, 31, 0x1D1498u);
    ctx->pc = 0x1D1494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1490u;
    // 0x1d1494: 0x240a0040  addiu       $t2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177620u, 0x1D1490u, 0x1D1498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1498u;
label_1d1498:
    // 0x1d1498: 0x10000038  b           . + 4 + (0x38 << 2)
label_1d149c:
    if (ctx->pc == 0x1D149Cu) {
        ctx->pc = 0x1D14A0u;
        goto label_1d14a0;
    }
    ctx->pc = 0x1D1498u;
    {
        const bool branch_taken_0x1d1498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1498) {
            ctx->pc = 0x1D157Cu;
            goto label_1d157c;
        }
    }
    ctx->pc = 0x1D14A0u;
label_1d14a0:
    // 0x1d14a0: 0xc070834  jal         func_1C20D0
label_1d14a4:
    if (ctx->pc == 0x1D14A4u) {
        ctx->pc = 0x1D14A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D14A0u;
        // 0x1d14a4: 0x9644000c  lhu         $a0, 0xC($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D14A8u;
        goto label_1d14a8;
    }
    ctx->pc = 0x1D14A0u;
    SET_GPR_U32(ctx, 31, 0x1D14A8u);
    ctx->pc = 0x1D14A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D14A0u;
    // 0x1d14a4: 0x9644000c  lhu         $a0, 0xC($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1D14A8u;
label_1d14a8:
    // 0x1d14a8: 0x8fa800e0  lw          $t0, 0xE0($sp)
    ctx->pc = 0x1d14a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1d14ac:
    // 0x1d14ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d14acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d14b0:
    // 0x1d14b0: 0x96430006  lhu         $v1, 0x6($s2)
    ctx->pc = 0x1d14b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_1d14b4:
    // 0x1d14b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d14b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d14b8:
    // 0x1d14b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d14b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d14bc:
    // 0x1d14bc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1d14bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1d14c0:
    // 0x1d14c0: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1d14c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_1d14c4:
    // 0x1d14c4: 0x96430008  lhu         $v1, 0x8($s2)
    ctx->pc = 0x1d14c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
label_1d14c8:
    // 0x1d14c8: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1d14c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1d14cc:
    // 0x1d14cc: 0x9643000a  lhu         $v1, 0xA($s2)
    ctx->pc = 0x1d14ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
label_1d14d0:
    // 0x1d14d0: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x1d14d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_1d14d4:
    // 0x1d14d4: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1d14d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1d14d8:
    // 0x1d14d8: 0x96490000  lhu         $t1, 0x0($s2)
    ctx->pc = 0x1d14d8u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_1d14dc:
    // 0x1d14dc: 0x964a0002  lhu         $t2, 0x2($s2)
    ctx->pc = 0x1d14dcu;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_1d14e0:
    // 0x1d14e0: 0x964b0004  lhu         $t3, 0x4($s2)
    ctx->pc = 0x1d14e0u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_1d14e4:
    // 0x1d14e4: 0xc05de30  jal         func_1778C0
label_1d14e8:
    if (ctx->pc == 0x1D14E8u) {
        ctx->pc = 0x1D14E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D14E4u;
        // 0x1d14e8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D14ECu;
        goto label_1d14ec;
    }
    ctx->pc = 0x1D14E4u;
    SET_GPR_U32(ctx, 31, 0x1D14ECu);
    ctx->pc = 0x1D14E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D14E4u;
    // 0x1d14e8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1D14E4u, 0x1D14ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D14ECu;
label_1d14ec:
    // 0x1d14ec: 0x1280000c  beqz        $s4, . + 4 + (0xC << 2)
label_1d14f0:
    if (ctx->pc == 0x1D14F0u) {
        ctx->pc = 0x1D14F4u;
        goto label_1d14f4;
    }
    ctx->pc = 0x1D14ECu;
    {
        const bool branch_taken_0x1d14ec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d14ec) {
            ctx->pc = 0x1D1520u;
            goto label_1d1520;
        }
    }
    ctx->pc = 0x1D14F4u;
label_1d14f4:
    // 0x1d14f4: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_1d14f8:
    if (ctx->pc == 0x1D14F8u) {
        ctx->pc = 0x1D14F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D14F4u;
        // 0x1d14f8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D14FCu;
        goto label_1d14fc;
    }
    ctx->pc = 0x1D14F4u;
    {
        const bool branch_taken_0x1d14f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D14F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D14F4u;
        // 0x1d14f8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d14f4) {
            ctx->pc = 0x1D1510u;
            goto label_1d1510;
        }
    }
    ctx->pc = 0x1D14FCu;
label_1d14fc:
    // 0x1d14fc: 0x12620004  beq         $s3, $v0, . + 4 + (0x4 << 2)
label_1d1500:
    if (ctx->pc == 0x1D1500u) {
        ctx->pc = 0x1D1504u;
        goto label_1d1504;
    }
    ctx->pc = 0x1D14FCu;
    {
        const bool branch_taken_0x1d14fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d14fc) {
            ctx->pc = 0x1D1510u;
            goto label_1d1510;
        }
    }
    ctx->pc = 0x1D1504u;
label_1d1504:
    // 0x1d1504: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d1504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d1508:
    // 0x1d1508: 0x16620005  bne         $s3, $v0, . + 4 + (0x5 << 2)
label_1d150c:
    if (ctx->pc == 0x1D150Cu) {
        ctx->pc = 0x1D1510u;
        goto label_1d1510;
    }
    ctx->pc = 0x1D1508u;
    {
        const bool branch_taken_0x1d1508 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d1508) {
            ctx->pc = 0x1D1520u;
            goto label_1d1520;
        }
    }
    ctx->pc = 0x1D1510u;
label_1d1510:
    // 0x1d1510: 0xa6200082  sh          $zero, 0x82($s1)
    ctx->pc = 0x1d1510u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 130), (uint16_t)GPR_U32(ctx, 0));
label_1d1514:
    // 0x1d1514: 0xa6200080  sh          $zero, 0x80($s1)
    ctx->pc = 0x1d1514u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 128), (uint16_t)GPR_U32(ctx, 0));
label_1d1518:
    // 0x1d1518: 0xa6200092  sh          $zero, 0x92($s1)
    ctx->pc = 0x1d1518u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 146), (uint16_t)GPR_U32(ctx, 0));
label_1d151c:
    // 0x1d151c: 0xa6200090  sh          $zero, 0x90($s1)
    ctx->pc = 0x1d151cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 144), (uint16_t)GPR_U32(ctx, 0));
label_1d1520:
    // 0x1d1520: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d1520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d1524:
    // 0x1d1524: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
label_1d1528:
    if (ctx->pc == 0x1D1528u) {
        ctx->pc = 0x1D1528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1524u;
        // 0x1d1528: 0x3c020005  lui         $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D152Cu;
        goto label_1d152c;
    }
    ctx->pc = 0x1D1524u;
    {
        const bool branch_taken_0x1d1524 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D1528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1524u;
        // 0x1d1528: 0x3c020005  lui         $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1524) {
            ctx->pc = 0x1D1534u;
            goto label_1d1534;
        }
    }
    ctx->pc = 0x1D152Cu;
label_1d152c:
    // 0x1d152c: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x1d152cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
label_1d1530:
    // 0x1d1530: 0xfe220020  sd          $v0, 0x20($s1)
    ctx->pc = 0x1d1530u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 2));
label_1d1534:
    // 0x1d1534: 0x0  nop
    ctx->pc = 0x1d1534u;
    // NOP
label_1d1538:
    // 0x1d1538: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d153c:
    // 0x1d153c: 0x1662000f  bne         $s3, $v0, . + 4 + (0xF << 2)
label_1d1540:
    if (ctx->pc == 0x1D1540u) {
        ctx->pc = 0x1D1544u;
        goto label_1d1544;
    }
    ctx->pc = 0x1D153Cu;
    {
        const bool branch_taken_0x1d153c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d153c) {
            ctx->pc = 0x1D157Cu;
            goto label_1d157c;
        }
    }
    ctx->pc = 0x1D1544u;
label_1d1544:
    // 0x1d1544: 0x96450002  lhu         $a1, 0x2($s2)
    ctx->pc = 0x1d1544u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_1d1548:
    // 0x1d1548: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x1d1548u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_1d154c:
    // 0x1d154c: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x1d154cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_1d1550:
    // 0x1d1550: 0x51e38  dsll        $v1, $a1, 24
    ctx->pc = 0x1d1550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 24);
label_1d1554:
    // 0x1d1554: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1d1554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1d1558:
    // 0x1d1558: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d1558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d155c:
    // 0x1d155c: 0x423b8  dsll        $a0, $a0, 14
    ctx->pc = 0x1d155cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 14);
label_1d1560:
    // 0x1d1560: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d1560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1d1564:
    // 0x1d1564: 0x3484007b  ori         $a0, $a0, 0x7B
    ctx->pc = 0x1d1564u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)123);
label_1d1568:
    // 0x1d1568: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d1568u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1d156c:
    // 0x1d156c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1d156cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1d1570:
    // 0x1d1570: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1d1570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_1d1574:
    // 0x1d1574: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1d1574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1d1578:
    // 0x1d1578: 0xfe220040  sd          $v0, 0x40($s1)
    ctx->pc = 0x1d1578u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
label_1d157c:
    // 0x1d157c: 0x0  nop
    ctx->pc = 0x1d157cu;
    // NOP
label_1d1580:
    // 0x1d1580: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1d1580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1d1584:
    // 0x1d1584: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d1584u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d1588:
    // 0x1d1588: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1d1588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
label_1d158c:
    // 0x1d158c: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x1d158cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_1d1590:
    // 0x1d1590: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1d1590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1d1594:
    // 0x1d1594: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d1594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d1598:
    // 0x1d1598: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x1d1598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_1d159c:
    // 0x1d159c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x1d159cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_1d15a0:
    // 0x1d15a0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1d15a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1d15a4:
    // 0x1d15a4: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x1d15a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_1d15a8:
    // 0x1d15a8: 0x2a620006  slti        $v0, $s3, 0x6
    ctx->pc = 0x1d15a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
label_1d15ac:
    // 0x1d15ac: 0x1440ff79  bnez        $v0, . + 4 + (-0x87 << 2)
label_1d15b0:
    if (ctx->pc == 0x1D15B0u) {
        ctx->pc = 0x1D15B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D15ACu;
        // 0x1d15b0: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D15B4u;
        goto label_1d15b4;
    }
    ctx->pc = 0x1D15ACu;
    {
        const bool branch_taken_0x1d15ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D15B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D15ACu;
        // 0x1d15b0: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d15ac) {
            ctx->pc = 0x1D1394u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1394;
        }
    }
    ctx->pc = 0x1D15B4u;
label_1d15b4:
    // 0x1d15b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d15b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d15b8:
    // 0x1d15b8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d15b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d15bc:
    // 0x1d15bc: 0x0  nop
    ctx->pc = 0x1d15bcu;
    // NOP
label_1d15c0:
    // 0x1d15c0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1d15c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1d15c4:
    // 0x1d15c4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1d15c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1d15c8:
    // 0x1d15c8: 0x6400058  bltz        $s2, . + 4 + (0x58 << 2)
label_1d15cc:
    if (ctx->pc == 0x1D15CCu) {
        ctx->pc = 0x1D15CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D15C8u;
        // 0x1d15cc: 0x24510640  addiu       $s1, $v0, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D15D0u;
        goto label_1d15d0;
    }
    ctx->pc = 0x1D15C8u;
    {
        const bool branch_taken_0x1d15c8 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x1D15CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D15C8u;
        // 0x1d15cc: 0x24510640  addiu       $s1, $v0, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d15c8) {
            ctx->pc = 0x1D172Cu;
            goto label_1d172c;
        }
    }
    ctx->pc = 0x1D15D0u;
label_1d15d0:
    // 0x1d15d0: 0x2a410003  slti        $at, $s2, 0x3
    ctx->pc = 0x1d15d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
label_1d15d4:
    // 0x1d15d4: 0x10200055  beqz        $at, . + 4 + (0x55 << 2)
label_1d15d8:
    if (ctx->pc == 0x1D15D8u) {
        ctx->pc = 0x1D15DCu;
        goto label_1d15dc;
    }
    ctx->pc = 0x1D15D4u;
    {
        const bool branch_taken_0x1d15d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d15d4) {
            ctx->pc = 0x1D172Cu;
            goto label_1d172c;
        }
    }
    ctx->pc = 0x1D15DCu;
label_1d15dc:
    // 0x1d15dc: 0x16400012  bnez        $s2, . + 4 + (0x12 << 2)
label_1d15e0:
    if (ctx->pc == 0x1D15E0u) {
        ctx->pc = 0x1D15E4u;
        goto label_1d15e4;
    }
    ctx->pc = 0x1D15DCu;
    {
        const bool branch_taken_0x1d15dc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d15dc) {
            ctx->pc = 0x1D1628u;
            goto label_1d1628;
        }
    }
    ctx->pc = 0x1D15E4u;
label_1d15e4:
    // 0x1d15e4: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_1d15e8:
    if (ctx->pc == 0x1D15E8u) {
        ctx->pc = 0x1D15E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D15E4u;
        // 0x1d15e8: 0x1510c0  sll         $v0, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D15ECu;
        goto label_1d15ec;
    }
    ctx->pc = 0x1D15E4u;
    {
        const bool branch_taken_0x1d15e4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D15E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D15E4u;
        // 0x1d15e8: 0x1510c0  sll         $v0, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d15e4) {
            ctx->pc = 0x1D160Cu;
            goto label_1d160c;
        }
    }
    ctx->pc = 0x1D15ECu;
label_1d15ec:
    // 0x1d15ec: 0x24160018  addiu       $s6, $zero, 0x18
    ctx->pc = 0x1d15ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1d15f0:
    // 0x1d15f0: 0x551823  subu        $v1, $v0, $s5
    ctx->pc = 0x1d15f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d15f4:
    // 0x1d15f4: 0x64170012  daddiu      $s7, $zero, 0x12
    ctx->pc = 0x1d15f4u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)18);
label_1d15f8:
    // 0x1d15f8: 0x64020010  daddiu      $v0, $zero, 0x10
    ctx->pc = 0x1d15f8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
label_1d15fc:
    // 0x1d15fc: 0xa7a200f0  sh          $v0, 0xF0($sp)
    ctx->pc = 0x1d15fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 240), (uint16_t)GPR_U32(ctx, 2));
label_1d1600:
    // 0x1d1600: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x1d1600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1d1604:
    // 0x1d1604: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1d1608:
    if (ctx->pc == 0x1D1608u) {
        ctx->pc = 0x1D1608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1604u;
        // 0x1d1608: 0x24500020  addiu       $s0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D160Cu;
        goto label_1d160c;
    }
    ctx->pc = 0x1D1604u;
    {
        const bool branch_taken_0x1d1604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1604u;
        // 0x1d1608: 0x24500020  addiu       $s0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1604) {
            ctx->pc = 0x1D16C4u;
            goto label_1d16c4;
        }
    }
    ctx->pc = 0x1D160Cu;
label_1d160c:
    // 0x1d160c: 0x0  nop
    ctx->pc = 0x1d160cu;
    // NOP
label_1d1610:
    // 0x1d1610: 0x64020010  daddiu      $v0, $zero, 0x10
    ctx->pc = 0x1d1610u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
label_1d1614:
    // 0x1d1614: 0x2416004c  addiu       $s6, $zero, 0x4C
    ctx->pc = 0x1d1614u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_1d1618:
    // 0x1d1618: 0x24100022  addiu       $s0, $zero, 0x22
    ctx->pc = 0x1d1618u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1d161c:
    // 0x1d161c: 0xa7a200f0  sh          $v0, 0xF0($sp)
    ctx->pc = 0x1d161cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 240), (uint16_t)GPR_U32(ctx, 2));
label_1d1620:
    // 0x1d1620: 0x10000028  b           . + 4 + (0x28 << 2)
label_1d1624:
    if (ctx->pc == 0x1D1624u) {
        ctx->pc = 0x1D1624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1620u;
        // 0x1d1624: 0x64170012  daddiu      $s7, $zero, 0x12 (Delay Slot)
        SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)18);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1628u;
        goto label_1d1628;
    }
    ctx->pc = 0x1D1620u;
    {
        const bool branch_taken_0x1d1620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1620u;
        // 0x1d1624: 0x64170012  daddiu      $s7, $zero, 0x12 (Delay Slot)
        SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)18);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1620) {
            ctx->pc = 0x1D16C4u;
            goto label_1d16c4;
        }
    }
    ctx->pc = 0x1D1628u;
label_1d1628:
    // 0x1d1628: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d162c:
    // 0x1d162c: 0x16420012  bne         $s2, $v0, . + 4 + (0x12 << 2)
label_1d1630:
    if (ctx->pc == 0x1D1630u) {
        ctx->pc = 0x1D1634u;
        goto label_1d1634;
    }
    ctx->pc = 0x1D162Cu;
    {
        const bool branch_taken_0x1d162c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d162c) {
            ctx->pc = 0x1D1678u;
            goto label_1d1678;
        }
    }
    ctx->pc = 0x1D1634u;
label_1d1634:
    // 0x1d1634: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_1d1638:
    if (ctx->pc == 0x1D1638u) {
        ctx->pc = 0x1D1638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1634u;
        // 0x1d1638: 0x1510c0  sll         $v0, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D163Cu;
        goto label_1d163c;
    }
    ctx->pc = 0x1D1634u;
    {
        const bool branch_taken_0x1d1634 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1634u;
        // 0x1d1638: 0x1510c0  sll         $v0, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1634) {
            ctx->pc = 0x1D165Cu;
            goto label_1d165c;
        }
    }
    ctx->pc = 0x1D163Cu;
label_1d163c:
    // 0x1d163c: 0x24160028  addiu       $s6, $zero, 0x28
    ctx->pc = 0x1d163cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1d1640:
    // 0x1d1640: 0x551823  subu        $v1, $v0, $s5
    ctx->pc = 0x1d1640u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d1644:
    // 0x1d1644: 0x64170012  daddiu      $s7, $zero, 0x12
    ctx->pc = 0x1d1644u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)18);
label_1d1648:
    // 0x1d1648: 0x640200a0  daddiu      $v0, $zero, 0xA0
    ctx->pc = 0x1d1648u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)160);
label_1d164c:
    // 0x1d164c: 0xa7a200f0  sh          $v0, 0xF0($sp)
    ctx->pc = 0x1d164cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 240), (uint16_t)GPR_U32(ctx, 2));
label_1d1650:
    // 0x1d1650: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x1d1650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1d1654:
    // 0x1d1654: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1d1658:
    if (ctx->pc == 0x1D1658u) {
        ctx->pc = 0x1D1658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1654u;
        // 0x1d1658: 0x24500020  addiu       $s0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D165Cu;
        goto label_1d165c;
    }
    ctx->pc = 0x1D1654u;
    {
        const bool branch_taken_0x1d1654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1654u;
        // 0x1d1658: 0x24500020  addiu       $s0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1654) {
            ctx->pc = 0x1D16C4u;
            goto label_1d16c4;
        }
    }
    ctx->pc = 0x1D165Cu;
label_1d165c:
    // 0x1d165c: 0x0  nop
    ctx->pc = 0x1d165cu;
    // NOP
label_1d1660:
    // 0x1d1660: 0x640200a0  daddiu      $v0, $zero, 0xA0
    ctx->pc = 0x1d1660u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)160);
label_1d1664:
    // 0x1d1664: 0x2416005c  addiu       $s6, $zero, 0x5C
    ctx->pc = 0x1d1664u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_1d1668:
    // 0x1d1668: 0x24100022  addiu       $s0, $zero, 0x22
    ctx->pc = 0x1d1668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1d166c:
    // 0x1d166c: 0xa7a200f0  sh          $v0, 0xF0($sp)
    ctx->pc = 0x1d166cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 240), (uint16_t)GPR_U32(ctx, 2));
label_1d1670:
    // 0x1d1670: 0x10000014  b           . + 4 + (0x14 << 2)
label_1d1674:
    if (ctx->pc == 0x1D1674u) {
        ctx->pc = 0x1D1674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1670u;
        // 0x1d1674: 0x64170012  daddiu      $s7, $zero, 0x12 (Delay Slot)
        SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)18);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1678u;
        goto label_1d1678;
    }
    ctx->pc = 0x1D1670u;
    {
        const bool branch_taken_0x1d1670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1670u;
        // 0x1d1674: 0x64170012  daddiu      $s7, $zero, 0x12 (Delay Slot)
        SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)18);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1670) {
            ctx->pc = 0x1D16C4u;
            goto label_1d16c4;
        }
    }
    ctx->pc = 0x1D1678u;
label_1d1678:
    // 0x1d1678: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d1678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d167c:
    // 0x1d167c: 0x16420011  bne         $s2, $v0, . + 4 + (0x11 << 2)
label_1d1680:
    if (ctx->pc == 0x1D1680u) {
        ctx->pc = 0x1D1684u;
        goto label_1d1684;
    }
    ctx->pc = 0x1D167Cu;
    {
        const bool branch_taken_0x1d167c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d167c) {
            ctx->pc = 0x1D16C4u;
            goto label_1d16c4;
        }
    }
    ctx->pc = 0x1D1684u;
label_1d1684:
    // 0x1d1684: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_1d1688:
    if (ctx->pc == 0x1D1688u) {
        ctx->pc = 0x1D1688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1684u;
        // 0x1d1688: 0x1510c0  sll         $v0, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D168Cu;
        goto label_1d168c;
    }
    ctx->pc = 0x1D1684u;
    {
        const bool branch_taken_0x1d1684 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1684u;
        // 0x1d1688: 0x1510c0  sll         $v0, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1684) {
            ctx->pc = 0x1D16ACu;
            goto label_1d16ac;
        }
    }
    ctx->pc = 0x1D168Cu;
label_1d168c:
    // 0x1d168c: 0x241600c8  addiu       $s6, $zero, 0xC8
    ctx->pc = 0x1d168cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1d1690:
    // 0x1d1690: 0x551823  subu        $v1, $v0, $s5
    ctx->pc = 0x1d1690u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d1694:
    // 0x1d1694: 0x64170012  daddiu      $s7, $zero, 0x12
    ctx->pc = 0x1d1694u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)18);
label_1d1698:
    // 0x1d1698: 0x64020028  daddiu      $v0, $zero, 0x28
    ctx->pc = 0x1d1698u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)40);
label_1d169c:
    // 0x1d169c: 0xa7a200f0  sh          $v0, 0xF0($sp)
    ctx->pc = 0x1d169cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 240), (uint16_t)GPR_U32(ctx, 2));
label_1d16a0:
    // 0x1d16a0: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x1d16a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1d16a4:
    // 0x1d16a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1d16a8:
    if (ctx->pc == 0x1D16A8u) {
        ctx->pc = 0x1D16A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D16A4u;
        // 0x1d16a8: 0x24500020  addiu       $s0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D16ACu;
        goto label_1d16ac;
    }
    ctx->pc = 0x1D16A4u;
    {
        const bool branch_taken_0x1d16a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D16A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D16A4u;
        // 0x1d16a8: 0x24500020  addiu       $s0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d16a4) {
            ctx->pc = 0x1D16C4u;
            goto label_1d16c4;
        }
    }
    ctx->pc = 0x1D16ACu;
label_1d16ac:
    // 0x1d16ac: 0x0  nop
    ctx->pc = 0x1d16acu;
    // NOP
label_1d16b0:
    // 0x1d16b0: 0x64020028  daddiu      $v0, $zero, 0x28
    ctx->pc = 0x1d16b0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)40);
label_1d16b4:
    // 0x1d16b4: 0x241600fc  addiu       $s6, $zero, 0xFC
    ctx->pc = 0x1d16b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
label_1d16b8:
    // 0x1d16b8: 0x24100022  addiu       $s0, $zero, 0x22
    ctx->pc = 0x1d16b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1d16bc:
    // 0x1d16bc: 0xa7a200f0  sh          $v0, 0xF0($sp)
    ctx->pc = 0x1d16bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 240), (uint16_t)GPR_U32(ctx, 2));
label_1d16c0:
    // 0x1d16c0: 0x64170012  daddiu      $s7, $zero, 0x12
    ctx->pc = 0x1d16c0u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)18);
label_1d16c4:
    // 0x1d16c4: 0x0  nop
    ctx->pc = 0x1d16c4u;
    // NOP
label_1d16c8:
    // 0x1d16c8: 0x97a800f0  lhu         $t0, 0xF0($sp)
    ctx->pc = 0x1d16c8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 240)));
label_1d16cc:
    // 0x1d16cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d16ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d16d0:
    // 0x1d16d0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1d16d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1d16d4:
    // 0x1d16d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d16d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d16d8:
    // 0x1d16d8: 0x3407ffe1  ori         $a3, $zero, 0xFFE1
    ctx->pc = 0x1d16d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65505);
label_1d16dc:
    // 0x1d16dc: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x1d16dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d16e0:
    // 0x1d16e0: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1d16e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d16e4:
    // 0x1d16e4: 0xc05e060  jal         func_178180
label_1d16e8:
    if (ctx->pc == 0x1D16E8u) {
        ctx->pc = 0x1D16E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D16E4u;
        // 0x1d16e8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D16ECu;
        goto label_1d16ec;
    }
    ctx->pc = 0x1D16E4u;
    SET_GPR_U32(ctx, 31, 0x1D16ECu);
    ctx->pc = 0x1D16E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D16E4u;
    // 0x1d16e8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178180u, 0x1D16E4u, 0x1D16ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D16ECu;
label_1d16ec:
    // 0x1d16ec: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_1d16f0:
    if (ctx->pc == 0x1D16F0u) {
        ctx->pc = 0x1D16F4u;
        goto label_1d16f4;
    }
    ctx->pc = 0x1D16ECu;
    {
        const bool branch_taken_0x1d16ec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d16ec) {
            ctx->pc = 0x1D1710u;
            goto label_1d1710;
        }
    }
    ctx->pc = 0x1D16F4u;
label_1d16f4:
    // 0x1d16f4: 0x96220070  lhu         $v0, 0x70($s1)
    ctx->pc = 0x1d16f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 112)));
label_1d16f8:
    // 0x1d16f8: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1d16f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_1d16fc:
    // 0x1d16fc: 0xa6220070  sh          $v0, 0x70($s1)
    ctx->pc = 0x1d16fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 112), (uint16_t)GPR_U32(ctx, 2));
label_1d1700:
    // 0x1d1700: 0x96220080  lhu         $v0, 0x80($s1)
    ctx->pc = 0x1d1700u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 128)));
label_1d1704:
    // 0x1d1704: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1d1704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_1d1708:
    // 0x1d1708: 0x10000026  b           . + 4 + (0x26 << 2)
label_1d170c:
    if (ctx->pc == 0x1D170Cu) {
        ctx->pc = 0x1D170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1708u;
        // 0x1d170c: 0xa6220080  sh          $v0, 0x80($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 128), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1710u;
        goto label_1d1710;
    }
    ctx->pc = 0x1D1708u;
    {
        const bool branch_taken_0x1d1708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1708u;
        // 0x1d170c: 0xa6220080  sh          $v0, 0x80($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 128), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1708) {
            ctx->pc = 0x1D17A4u;
            goto label_1d17a4;
        }
    }
    ctx->pc = 0x1D1710u;
label_1d1710:
    // 0x1d1710: 0x96220070  lhu         $v0, 0x70($s1)
    ctx->pc = 0x1d1710u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 112)));
label_1d1714:
    // 0x1d1714: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1d1714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_1d1718:
    // 0x1d1718: 0xa6220070  sh          $v0, 0x70($s1)
    ctx->pc = 0x1d1718u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 112), (uint16_t)GPR_U32(ctx, 2));
label_1d171c:
    // 0x1d171c: 0x96220080  lhu         $v0, 0x80($s1)
    ctx->pc = 0x1d171cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 128)));
label_1d1720:
    // 0x1d1720: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1d1720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_1d1724:
    // 0x1d1724: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1d1728:
    if (ctx->pc == 0x1D1728u) {
        ctx->pc = 0x1D1728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1724u;
        // 0x1d1728: 0xa6220080  sh          $v0, 0x80($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 128), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D172Cu;
        goto label_1d172c;
    }
    ctx->pc = 0x1D1724u;
    {
        const bool branch_taken_0x1d1724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1724u;
        // 0x1d1728: 0xa6220080  sh          $v0, 0x80($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 128), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1724) {
            ctx->pc = 0x1D17A4u;
            goto label_1d17a4;
        }
    }
    ctx->pc = 0x1D172Cu;
label_1d172c:
    // 0x1d172c: 0x0  nop
    ctx->pc = 0x1d172cu;
    // NOP
label_1d1730:
    // 0x1d1730: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x1d1730u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
label_1d1734:
    // 0x1d1734: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_1d1738:
    if (ctx->pc == 0x1D1738u) {
        ctx->pc = 0x1D1738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1734u;
        // 0x1d1738: 0x2a410006  slti        $at, $s2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D173Cu;
        goto label_1d173c;
    }
    ctx->pc = 0x1D1734u;
    {
        const bool branch_taken_0x1d1734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1734u;
        // 0x1d1738: 0x2a410006  slti        $at, $s2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1734) {
            ctx->pc = 0x1D17A4u;
            goto label_1d17a4;
        }
    }
    ctx->pc = 0x1D173Cu;
label_1d173c:
    // 0x1d173c: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
label_1d1740:
    if (ctx->pc == 0x1D1740u) {
        ctx->pc = 0x1D1744u;
        goto label_1d1744;
    }
    ctx->pc = 0x1D173Cu;
    {
        const bool branch_taken_0x1d173c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d173c) {
            ctx->pc = 0x1D17A4u;
            goto label_1d17a4;
        }
    }
    ctx->pc = 0x1D1744u;
label_1d1744:
    // 0x1d1744: 0x1280000e  beqz        $s4, . + 4 + (0xE << 2)
label_1d1748:
    if (ctx->pc == 0x1D1748u) {
        ctx->pc = 0x1D1748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1744u;
        // 0x1d1748: 0x1510c0  sll         $v0, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D174Cu;
        goto label_1d174c;
    }
    ctx->pc = 0x1D1744u;
    {
        const bool branch_taken_0x1d1744 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1744u;
        // 0x1d1748: 0x1510c0  sll         $v0, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1744) {
            ctx->pc = 0x1D1780u;
            goto label_1d1780;
        }
    }
    ctx->pc = 0x1D174Cu;
label_1d174c:
    // 0x1d174c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d174cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d1750:
    // 0x1d1750: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x1d1750u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d1754:
    // 0x1d1754: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1d1754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1d1758:
    // 0x1d1758: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1d1758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1d175c:
    // 0x1d175c: 0x3407ffe1  ori         $a3, $zero, 0xFFE1
    ctx->pc = 0x1d175cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65505);
label_1d1760:
    // 0x1d1760: 0x24460032  addiu       $a2, $v0, 0x32
    ctx->pc = 0x1d1760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
label_1d1764:
    // 0x1d1764: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d1764u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1768:
    // 0x1d1768: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x1d1768u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d176c:
    // 0x1d176c: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1d176cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d1770:
    // 0x1d1770: 0xc05e060  jal         func_178180
label_1d1774:
    if (ctx->pc == 0x1D1774u) {
        ctx->pc = 0x1D1774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1770u;
        // 0x1d1774: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1778u;
        goto label_1d1778;
    }
    ctx->pc = 0x1D1770u;
    SET_GPR_U32(ctx, 31, 0x1D1778u);
    ctx->pc = 0x1D1774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1770u;
    // 0x1d1774: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178180u, 0x1D1770u, 0x1D1778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1778u;
label_1d1778:
    // 0x1d1778: 0x1000000a  b           . + 4 + (0xA << 2)
label_1d177c:
    if (ctx->pc == 0x1D177Cu) {
        ctx->pc = 0x1D1780u;
        goto label_1d1780;
    }
    ctx->pc = 0x1D1778u;
    {
        const bool branch_taken_0x1d1778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1778) {
            ctx->pc = 0x1D17A4u;
            goto label_1d17a4;
        }
    }
    ctx->pc = 0x1D1780u;
label_1d1780:
    // 0x1d1780: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d1780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d1784:
    // 0x1d1784: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1d1784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1d1788:
    // 0x1d1788: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x1d1788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1d178c:
    // 0x1d178c: 0x3407ffe1  ori         $a3, $zero, 0xFFE1
    ctx->pc = 0x1d178cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65505);
label_1d1790:
    // 0x1d1790: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d1790u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1794:
    // 0x1d1794: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x1d1794u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1d1798:
    // 0x1d1798: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1d1798u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d179c:
    // 0x1d179c: 0xc05e060  jal         func_178180
label_1d17a0:
    if (ctx->pc == 0x1D17A0u) {
        ctx->pc = 0x1D17A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D179Cu;
        // 0x1d17a0: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D17A4u;
        goto label_1d17a4;
    }
    ctx->pc = 0x1D179Cu;
    SET_GPR_U32(ctx, 31, 0x1D17A4u);
    ctx->pc = 0x1D17A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D179Cu;
    // 0x1d17a0: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178180u, 0x1D179Cu, 0x1D17A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D17A4u;
label_1d17a4:
    // 0x1d17a4: 0x0  nop
    ctx->pc = 0x1d17a4u;
    // NOP
label_1d17a8:
    // 0x1d17a8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_1d17ac:
    if (ctx->pc == 0x1D17ACu) {
        ctx->pc = 0x1D17ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17A8u;
        // 0x1d17ac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D17B0u;
        goto label_1d17b0;
    }
    ctx->pc = 0x1D17A8u;
    {
        const bool branch_taken_0x1d17a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D17ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17A8u;
        // 0x1d17ac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d17a8) {
            ctx->pc = 0x1D17B8u;
            goto label_1d17b8;
        }
    }
    ctx->pc = 0x1D17B0u;
label_1d17b0:
    // 0x1d17b0: 0x1642001b  bne         $s2, $v0, . + 4 + (0x1B << 2)
label_1d17b4:
    if (ctx->pc == 0x1D17B4u) {
        ctx->pc = 0x1D17B8u;
        goto label_1d17b8;
    }
    ctx->pc = 0x1D17B0u;
    {
        const bool branch_taken_0x1d17b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d17b0) {
            ctx->pc = 0x1D1820u;
            goto label_1d1820;
        }
    }
    ctx->pc = 0x1D17B8u;
label_1d17b8:
    // 0x1d17b8: 0x240600f0  addiu       $a2, $zero, 0xF0
    ctx->pc = 0x1d17b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_1d17bc:
    // 0x1d17bc: 0xa2260068  sb          $a2, 0x68($s1)
    ctx->pc = 0x1d17bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 6));
label_1d17c0:
    // 0x1d17c0: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x1d17c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1d17c4:
    // 0x1d17c4: 0xa2250069  sb          $a1, 0x69($s1)
    ctx->pc = 0x1d17c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 5));
label_1d17c8:
    // 0x1d17c8: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x1d17c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1d17cc:
    // 0x1d17cc: 0xa224006a  sb          $a0, 0x6A($s1)
    ctx->pc = 0x1d17ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 106), (uint8_t)GPR_U32(ctx, 4));
label_1d17d0:
    // 0x1d17d0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d17d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1d17d4:
    // 0x1d17d4: 0xa220006b  sb          $zero, 0x6B($s1)
    ctx->pc = 0x1d17d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 107), (uint8_t)GPR_U32(ctx, 0));
label_1d17d8:
    // 0x1d17d8: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1d17d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1d17dc:
    // 0x1d17dc: 0xae23006c  sw          $v1, 0x6C($s1)
    ctx->pc = 0x1d17dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 3));
label_1d17e0:
    // 0x1d17e0: 0xa2260078  sb          $a2, 0x78($s1)
    ctx->pc = 0x1d17e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 120), (uint8_t)GPR_U32(ctx, 6));
label_1d17e4:
    // 0x1d17e4: 0xa2250079  sb          $a1, 0x79($s1)
    ctx->pc = 0x1d17e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 121), (uint8_t)GPR_U32(ctx, 5));
label_1d17e8:
    // 0x1d17e8: 0xa224007a  sb          $a0, 0x7A($s1)
    ctx->pc = 0x1d17e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 122), (uint8_t)GPR_U32(ctx, 4));
label_1d17ec:
    // 0x1d17ec: 0xa222007b  sb          $v0, 0x7B($s1)
    ctx->pc = 0x1d17ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 123), (uint8_t)GPR_U32(ctx, 2));
label_1d17f0:
    // 0x1d17f0: 0xae23007c  sw          $v1, 0x7C($s1)
    ctx->pc = 0x1d17f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 3));
label_1d17f4:
    // 0x1d17f4: 0xa2260088  sb          $a2, 0x88($s1)
    ctx->pc = 0x1d17f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 136), (uint8_t)GPR_U32(ctx, 6));
label_1d17f8:
    // 0x1d17f8: 0xa2260089  sb          $a2, 0x89($s1)
    ctx->pc = 0x1d17f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 137), (uint8_t)GPR_U32(ctx, 6));
label_1d17fc:
    // 0x1d17fc: 0xa226008a  sb          $a2, 0x8A($s1)
    ctx->pc = 0x1d17fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 138), (uint8_t)GPR_U32(ctx, 6));
label_1d1800:
    // 0x1d1800: 0xa220008b  sb          $zero, 0x8B($s1)
    ctx->pc = 0x1d1800u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 139), (uint8_t)GPR_U32(ctx, 0));
label_1d1804:
    // 0x1d1804: 0xae23008c  sw          $v1, 0x8C($s1)
    ctx->pc = 0x1d1804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 3));
label_1d1808:
    // 0x1d1808: 0xa2260098  sb          $a2, 0x98($s1)
    ctx->pc = 0x1d1808u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 152), (uint8_t)GPR_U32(ctx, 6));
label_1d180c:
    // 0x1d180c: 0xa2260099  sb          $a2, 0x99($s1)
    ctx->pc = 0x1d180cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 153), (uint8_t)GPR_U32(ctx, 6));
label_1d1810:
    // 0x1d1810: 0xa226009a  sb          $a2, 0x9A($s1)
    ctx->pc = 0x1d1810u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 154), (uint8_t)GPR_U32(ctx, 6));
label_1d1814:
    // 0x1d1814: 0xa222009b  sb          $v0, 0x9B($s1)
    ctx->pc = 0x1d1814u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 155), (uint8_t)GPR_U32(ctx, 2));
label_1d1818:
    // 0x1d1818: 0x10000040  b           . + 4 + (0x40 << 2)
label_1d181c:
    if (ctx->pc == 0x1D181Cu) {
        ctx->pc = 0x1D181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1818u;
        // 0x1d181c: 0xae23009c  sw          $v1, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1820u;
        goto label_1d1820;
    }
    ctx->pc = 0x1D1818u;
    {
        const bool branch_taken_0x1d1818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1818u;
        // 0x1d181c: 0xae23009c  sw          $v1, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1818) {
            ctx->pc = 0x1D191Cu;
            goto label_1d191c;
        }
    }
    ctx->pc = 0x1D1820u;
label_1d1820:
    // 0x1d1820: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1824:
    // 0x1d1824: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
label_1d1828:
    if (ctx->pc == 0x1D1828u) {
        ctx->pc = 0x1D1828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1824u;
        // 0x1d1828: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D182Cu;
        goto label_1d182c;
    }
    ctx->pc = 0x1D1824u;
    {
        const bool branch_taken_0x1d1824 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D1828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1824u;
        // 0x1d1828: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1824) {
            ctx->pc = 0x1D1834u;
            goto label_1d1834;
        }
    }
    ctx->pc = 0x1D182Cu;
label_1d182c:
    // 0x1d182c: 0x1642001c  bne         $s2, $v0, . + 4 + (0x1C << 2)
label_1d1830:
    if (ctx->pc == 0x1D1830u) {
        ctx->pc = 0x1D1834u;
        goto label_1d1834;
    }
    ctx->pc = 0x1D182Cu;
    {
        const bool branch_taken_0x1d182c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d182c) {
            ctx->pc = 0x1D18A0u;
            goto label_1d18a0;
        }
    }
    ctx->pc = 0x1D1834u;
label_1d1834:
    // 0x1d1834: 0x0  nop
    ctx->pc = 0x1d1834u;
    // NOP
label_1d1838:
    // 0x1d1838: 0x240600f0  addiu       $a2, $zero, 0xF0
    ctx->pc = 0x1d1838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_1d183c:
    // 0x1d183c: 0xa2260068  sb          $a2, 0x68($s1)
    ctx->pc = 0x1d183cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 6));
label_1d1840:
    // 0x1d1840: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x1d1840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1d1844:
    // 0x1d1844: 0xa2250069  sb          $a1, 0x69($s1)
    ctx->pc = 0x1d1844u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 5));
label_1d1848:
    // 0x1d1848: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x1d1848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1d184c:
    // 0x1d184c: 0xa224006a  sb          $a0, 0x6A($s1)
    ctx->pc = 0x1d184cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 106), (uint8_t)GPR_U32(ctx, 4));
label_1d1850:
    // 0x1d1850: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1d1850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1d1854:
    // 0x1d1854: 0xa223006b  sb          $v1, 0x6B($s1)
    ctx->pc = 0x1d1854u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 107), (uint8_t)GPR_U32(ctx, 3));
label_1d1858:
    // 0x1d1858: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d1858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d185c:
    // 0x1d185c: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x1d185cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_1d1860:
    // 0x1d1860: 0xa2260078  sb          $a2, 0x78($s1)
    ctx->pc = 0x1d1860u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 120), (uint8_t)GPR_U32(ctx, 6));
label_1d1864:
    // 0x1d1864: 0xa2250079  sb          $a1, 0x79($s1)
    ctx->pc = 0x1d1864u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 121), (uint8_t)GPR_U32(ctx, 5));
label_1d1868:
    // 0x1d1868: 0xa224007a  sb          $a0, 0x7A($s1)
    ctx->pc = 0x1d1868u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 122), (uint8_t)GPR_U32(ctx, 4));
label_1d186c:
    // 0x1d186c: 0xa223007b  sb          $v1, 0x7B($s1)
    ctx->pc = 0x1d186cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 123), (uint8_t)GPR_U32(ctx, 3));
label_1d1870:
    // 0x1d1870: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x1d1870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
label_1d1874:
    // 0x1d1874: 0xa2260088  sb          $a2, 0x88($s1)
    ctx->pc = 0x1d1874u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 136), (uint8_t)GPR_U32(ctx, 6));
label_1d1878:
    // 0x1d1878: 0xa2260089  sb          $a2, 0x89($s1)
    ctx->pc = 0x1d1878u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 137), (uint8_t)GPR_U32(ctx, 6));
label_1d187c:
    // 0x1d187c: 0xa226008a  sb          $a2, 0x8A($s1)
    ctx->pc = 0x1d187cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 138), (uint8_t)GPR_U32(ctx, 6));
label_1d1880:
    // 0x1d1880: 0xa223008b  sb          $v1, 0x8B($s1)
    ctx->pc = 0x1d1880u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 139), (uint8_t)GPR_U32(ctx, 3));
label_1d1884:
    // 0x1d1884: 0xae22008c  sw          $v0, 0x8C($s1)
    ctx->pc = 0x1d1884u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
label_1d1888:
    // 0x1d1888: 0xa2260098  sb          $a2, 0x98($s1)
    ctx->pc = 0x1d1888u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 152), (uint8_t)GPR_U32(ctx, 6));
label_1d188c:
    // 0x1d188c: 0xa2260099  sb          $a2, 0x99($s1)
    ctx->pc = 0x1d188cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 153), (uint8_t)GPR_U32(ctx, 6));
label_1d1890:
    // 0x1d1890: 0xa226009a  sb          $a2, 0x9A($s1)
    ctx->pc = 0x1d1890u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 154), (uint8_t)GPR_U32(ctx, 6));
label_1d1894:
    // 0x1d1894: 0xa223009b  sb          $v1, 0x9B($s1)
    ctx->pc = 0x1d1894u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 155), (uint8_t)GPR_U32(ctx, 3));
label_1d1898:
    // 0x1d1898: 0x10000020  b           . + 4 + (0x20 << 2)
label_1d189c:
    if (ctx->pc == 0x1D189Cu) {
        ctx->pc = 0x1D189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1898u;
        // 0x1d189c: 0xae22009c  sw          $v0, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D18A0u;
        goto label_1d18a0;
    }
    ctx->pc = 0x1D1898u;
    {
        const bool branch_taken_0x1d1898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1898u;
        // 0x1d189c: 0xae22009c  sw          $v0, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1898) {
            ctx->pc = 0x1D191Cu;
            goto label_1d191c;
        }
    }
    ctx->pc = 0x1D18A0u;
label_1d18a0:
    // 0x1d18a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d18a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d18a4:
    // 0x1d18a4: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
label_1d18a8:
    if (ctx->pc == 0x1D18A8u) {
        ctx->pc = 0x1D18A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D18A4u;
        // 0x1d18a8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D18ACu;
        goto label_1d18ac;
    }
    ctx->pc = 0x1D18A4u;
    {
        const bool branch_taken_0x1d18a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D18A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D18A4u;
        // 0x1d18a8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d18a4) {
            ctx->pc = 0x1D18B4u;
            goto label_1d18b4;
        }
    }
    ctx->pc = 0x1D18ACu;
label_1d18ac:
    // 0x1d18ac: 0x1642001b  bne         $s2, $v0, . + 4 + (0x1B << 2)
label_1d18b0:
    if (ctx->pc == 0x1D18B0u) {
        ctx->pc = 0x1D18B4u;
        goto label_1d18b4;
    }
    ctx->pc = 0x1D18ACu;
    {
        const bool branch_taken_0x1d18ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d18ac) {
            ctx->pc = 0x1D191Cu;
            goto label_1d191c;
        }
    }
    ctx->pc = 0x1D18B4u;
label_1d18b4:
    // 0x1d18b4: 0x0  nop
    ctx->pc = 0x1d18b4u;
    // NOP
label_1d18b8:
    // 0x1d18b8: 0x240600f0  addiu       $a2, $zero, 0xF0
    ctx->pc = 0x1d18b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_1d18bc:
    // 0x1d18bc: 0xa2260068  sb          $a2, 0x68($s1)
    ctx->pc = 0x1d18bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 6));
label_1d18c0:
    // 0x1d18c0: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x1d18c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1d18c4:
    // 0x1d18c4: 0xa2250069  sb          $a1, 0x69($s1)
    ctx->pc = 0x1d18c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 5));
label_1d18c8:
    // 0x1d18c8: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x1d18c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1d18cc:
    // 0x1d18cc: 0xa224006a  sb          $a0, 0x6A($s1)
    ctx->pc = 0x1d18ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 106), (uint8_t)GPR_U32(ctx, 4));
label_1d18d0:
    // 0x1d18d0: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1d18d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1d18d4:
    // 0x1d18d4: 0xa223006b  sb          $v1, 0x6B($s1)
    ctx->pc = 0x1d18d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 107), (uint8_t)GPR_U32(ctx, 3));
label_1d18d8:
    // 0x1d18d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d18d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d18dc:
    // 0x1d18dc: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x1d18dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_1d18e0:
    // 0x1d18e0: 0xa2260078  sb          $a2, 0x78($s1)
    ctx->pc = 0x1d18e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 120), (uint8_t)GPR_U32(ctx, 6));
label_1d18e4:
    // 0x1d18e4: 0xa2250079  sb          $a1, 0x79($s1)
    ctx->pc = 0x1d18e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 121), (uint8_t)GPR_U32(ctx, 5));
label_1d18e8:
    // 0x1d18e8: 0xa224007a  sb          $a0, 0x7A($s1)
    ctx->pc = 0x1d18e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 122), (uint8_t)GPR_U32(ctx, 4));
label_1d18ec:
    // 0x1d18ec: 0xa220007b  sb          $zero, 0x7B($s1)
    ctx->pc = 0x1d18ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 123), (uint8_t)GPR_U32(ctx, 0));
label_1d18f0:
    // 0x1d18f0: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x1d18f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
label_1d18f4:
    // 0x1d18f4: 0xa2260088  sb          $a2, 0x88($s1)
    ctx->pc = 0x1d18f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 136), (uint8_t)GPR_U32(ctx, 6));
label_1d18f8:
    // 0x1d18f8: 0xa2260089  sb          $a2, 0x89($s1)
    ctx->pc = 0x1d18f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 137), (uint8_t)GPR_U32(ctx, 6));
label_1d18fc:
    // 0x1d18fc: 0xa226008a  sb          $a2, 0x8A($s1)
    ctx->pc = 0x1d18fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 138), (uint8_t)GPR_U32(ctx, 6));
label_1d1900:
    // 0x1d1900: 0xa223008b  sb          $v1, 0x8B($s1)
    ctx->pc = 0x1d1900u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 139), (uint8_t)GPR_U32(ctx, 3));
label_1d1904:
    // 0x1d1904: 0xae22008c  sw          $v0, 0x8C($s1)
    ctx->pc = 0x1d1904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
label_1d1908:
    // 0x1d1908: 0xa2260098  sb          $a2, 0x98($s1)
    ctx->pc = 0x1d1908u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 152), (uint8_t)GPR_U32(ctx, 6));
label_1d190c:
    // 0x1d190c: 0xa2260099  sb          $a2, 0x99($s1)
    ctx->pc = 0x1d190cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 153), (uint8_t)GPR_U32(ctx, 6));
label_1d1910:
    // 0x1d1910: 0xa226009a  sb          $a2, 0x9A($s1)
    ctx->pc = 0x1d1910u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 154), (uint8_t)GPR_U32(ctx, 6));
label_1d1914:
    // 0x1d1914: 0xa220009b  sb          $zero, 0x9B($s1)
    ctx->pc = 0x1d1914u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 155), (uint8_t)GPR_U32(ctx, 0));
label_1d1918:
    // 0x1d1918: 0xae22009c  sw          $v0, 0x9C($s1)
    ctx->pc = 0x1d1918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
label_1d191c:
    // 0x1d191c: 0x0  nop
    ctx->pc = 0x1d191cu;
    // NOP
label_1d1920:
    // 0x1d1920: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d1920u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1d1924:
    // 0x1d1924: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x1d1924u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
label_1d1928:
    // 0x1d1928: 0x1440ff24  bnez        $v0, . + 4 + (-0xDC << 2)
label_1d192c:
    if (ctx->pc == 0x1D192Cu) {
        ctx->pc = 0x1D192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1928u;
        // 0x1d192c: 0x267300b0  addiu       $s3, $s3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1930u;
        goto label_1d1930;
    }
    ctx->pc = 0x1D1928u;
    {
        const bool branch_taken_0x1d1928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1928u;
        // 0x1d192c: 0x267300b0  addiu       $s3, $s3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1928) {
            ctx->pc = 0x1D15BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d15bc;
        }
    }
    ctx->pc = 0x1D1930u;
label_1d1930:
    // 0x1d1930: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1d1930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1d1934:
    // 0x1d1934: 0x1280001d  beqz        $s4, . + 4 + (0x1D << 2)
label_1d1938:
    if (ctx->pc == 0x1D1938u) {
        ctx->pc = 0x1D1938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1934u;
        // 0x1d1938: 0x24500a60  addiu       $s0, $v0, 0xA60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D193Cu;
        goto label_1d193c;
    }
    ctx->pc = 0x1D1934u;
    {
        const bool branch_taken_0x1d1934 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1934u;
        // 0x1d1938: 0x24500a60  addiu       $s0, $v0, 0xA60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1934) {
            ctx->pc = 0x1D19ACu;
            { ctx->pc = 0x1d19ac; return; }
        }
    }
    ctx->pc = 0x1D193Cu;
label_1d193c:
    // 0x1d193c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1d193cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_1d1940:
    // 0x1d1940: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x1d1940u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d1944:
    // 0x1d1944: 0xffa90008  sd          $t1, 0x8($sp)
    ctx->pc = 0x1d1944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 9));
    ctx->pc = 0x1d1948u;
    return;
}
