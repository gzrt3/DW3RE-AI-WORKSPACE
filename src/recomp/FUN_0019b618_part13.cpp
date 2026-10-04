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


void FUN_0019b618_part13(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1a13d8u: goto label_1a13d8;
        case 0x1a13dcu: goto label_1a13dc;
        case 0x1a13e0u: goto label_1a13e0;
        case 0x1a13e4u: goto label_1a13e4;
        case 0x1a13e8u: goto label_1a13e8;
        case 0x1a13ecu: goto label_1a13ec;
        case 0x1a13f0u: goto label_1a13f0;
        case 0x1a13f4u: goto label_1a13f4;
        case 0x1a13f8u: goto label_1a13f8;
        case 0x1a13fcu: goto label_1a13fc;
        case 0x1a1400u: goto label_1a1400;
        case 0x1a1404u: goto label_1a1404;
        case 0x1a1408u: goto label_1a1408;
        case 0x1a140cu: goto label_1a140c;
        case 0x1a1410u: goto label_1a1410;
        case 0x1a1414u: goto label_1a1414;
        case 0x1a1418u: goto label_1a1418;
        case 0x1a141cu: goto label_1a141c;
        case 0x1a1420u: goto label_1a1420;
        case 0x1a1424u: goto label_1a1424;
        case 0x1a1428u: goto label_1a1428;
        case 0x1a142cu: goto label_1a142c;
        case 0x1a1430u: goto label_1a1430;
        case 0x1a1434u: goto label_1a1434;
        case 0x1a1438u: goto label_1a1438;
        case 0x1a143cu: goto label_1a143c;
        case 0x1a1440u: goto label_1a1440;
        case 0x1a1444u: goto label_1a1444;
        case 0x1a1448u: goto label_1a1448;
        case 0x1a144cu: goto label_1a144c;
        case 0x1a1450u: goto label_1a1450;
        case 0x1a1454u: goto label_1a1454;
        case 0x1a1458u: goto label_1a1458;
        case 0x1a145cu: goto label_1a145c;
        case 0x1a1460u: goto label_1a1460;
        case 0x1a1464u: goto label_1a1464;
        case 0x1a1468u: goto label_1a1468;
        case 0x1a146cu: goto label_1a146c;
        case 0x1a1470u: goto label_1a1470;
        case 0x1a1474u: goto label_1a1474;
        case 0x1a1478u: goto label_1a1478;
        case 0x1a147cu: goto label_1a147c;
        case 0x1a1480u: goto label_1a1480;
        case 0x1a1484u: goto label_1a1484;
        case 0x1a1488u: goto label_1a1488;
        case 0x1a148cu: goto label_1a148c;
        case 0x1a1490u: goto label_1a1490;
        case 0x1a1494u: goto label_1a1494;
        case 0x1a1498u: goto label_1a1498;
        case 0x1a149cu: goto label_1a149c;
        case 0x1a14a0u: goto label_1a14a0;
        case 0x1a14a4u: goto label_1a14a4;
        case 0x1a14a8u: goto label_1a14a8;
        case 0x1a14acu: goto label_1a14ac;
        case 0x1a14b0u: goto label_1a14b0;
        case 0x1a14b4u: goto label_1a14b4;
        case 0x1a14b8u: goto label_1a14b8;
        case 0x1a14bcu: goto label_1a14bc;
        case 0x1a14c0u: goto label_1a14c0;
        case 0x1a14c4u: goto label_1a14c4;
        case 0x1a14c8u: goto label_1a14c8;
        case 0x1a14ccu: goto label_1a14cc;
        case 0x1a14d0u: goto label_1a14d0;
        case 0x1a14d4u: goto label_1a14d4;
        case 0x1a14d8u: goto label_1a14d8;
        case 0x1a14dcu: goto label_1a14dc;
        case 0x1a14e0u: goto label_1a14e0;
        case 0x1a14e4u: goto label_1a14e4;
        case 0x1a14e8u: goto label_1a14e8;
        case 0x1a14ecu: goto label_1a14ec;
        case 0x1a14f0u: goto label_1a14f0;
        case 0x1a14f4u: goto label_1a14f4;
        case 0x1a14f8u: goto label_1a14f8;
        case 0x1a14fcu: goto label_1a14fc;
        case 0x1a1500u: goto label_1a1500;
        case 0x1a1504u: goto label_1a1504;
        case 0x1a1508u: goto label_1a1508;
        case 0x1a150cu: goto label_1a150c;
        case 0x1a1510u: goto label_1a1510;
        case 0x1a1514u: goto label_1a1514;
        case 0x1a1518u: goto label_1a1518;
        case 0x1a151cu: goto label_1a151c;
        case 0x1a1520u: goto label_1a1520;
        case 0x1a1524u: goto label_1a1524;
        case 0x1a1528u: goto label_1a1528;
        case 0x1a152cu: goto label_1a152c;
        case 0x1a1530u: goto label_1a1530;
        case 0x1a1534u: goto label_1a1534;
        case 0x1a1538u: goto label_1a1538;
        case 0x1a153cu: goto label_1a153c;
        case 0x1a1540u: goto label_1a1540;
        case 0x1a1544u: goto label_1a1544;
        case 0x1a1548u: goto label_1a1548;
        case 0x1a154cu: goto label_1a154c;
        case 0x1a1550u: goto label_1a1550;
        case 0x1a1554u: goto label_1a1554;
        case 0x1a1558u: goto label_1a1558;
        case 0x1a155cu: goto label_1a155c;
        case 0x1a1560u: goto label_1a1560;
        case 0x1a1564u: goto label_1a1564;
        case 0x1a1568u: goto label_1a1568;
        case 0x1a156cu: goto label_1a156c;
        case 0x1a1570u: goto label_1a1570;
        case 0x1a1574u: goto label_1a1574;
        case 0x1a1578u: goto label_1a1578;
        case 0x1a157cu: goto label_1a157c;
        case 0x1a1580u: goto label_1a1580;
        case 0x1a1584u: goto label_1a1584;
        case 0x1a1588u: goto label_1a1588;
        case 0x1a158cu: goto label_1a158c;
        case 0x1a1590u: goto label_1a1590;
        case 0x1a1594u: goto label_1a1594;
        case 0x1a1598u: goto label_1a1598;
        case 0x1a159cu: goto label_1a159c;
        case 0x1a15a0u: goto label_1a15a0;
        case 0x1a15a4u: goto label_1a15a4;
        case 0x1a15a8u: goto label_1a15a8;
        case 0x1a15acu: goto label_1a15ac;
        case 0x1a15b0u: goto label_1a15b0;
        case 0x1a15b4u: goto label_1a15b4;
        case 0x1a15b8u: goto label_1a15b8;
        case 0x1a15bcu: goto label_1a15bc;
        case 0x1a15c0u: goto label_1a15c0;
        case 0x1a15c4u: goto label_1a15c4;
        case 0x1a15c8u: goto label_1a15c8;
        case 0x1a15ccu: goto label_1a15cc;
        case 0x1a15d0u: goto label_1a15d0;
        case 0x1a15d4u: goto label_1a15d4;
        case 0x1a15d8u: goto label_1a15d8;
        case 0x1a15dcu: goto label_1a15dc;
        case 0x1a15e0u: goto label_1a15e0;
        case 0x1a15e4u: goto label_1a15e4;
        case 0x1a15e8u: goto label_1a15e8;
        case 0x1a15ecu: goto label_1a15ec;
        case 0x1a15f0u: goto label_1a15f0;
        case 0x1a15f4u: goto label_1a15f4;
        case 0x1a15f8u: goto label_1a15f8;
        case 0x1a15fcu: goto label_1a15fc;
        case 0x1a1600u: goto label_1a1600;
        case 0x1a1604u: goto label_1a1604;
        case 0x1a1608u: goto label_1a1608;
        case 0x1a160cu: goto label_1a160c;
        case 0x1a1610u: goto label_1a1610;
        case 0x1a1614u: goto label_1a1614;
        case 0x1a1618u: goto label_1a1618;
        case 0x1a161cu: goto label_1a161c;
        case 0x1a1620u: goto label_1a1620;
        case 0x1a1624u: goto label_1a1624;
        case 0x1a1628u: goto label_1a1628;
        case 0x1a162cu: goto label_1a162c;
        case 0x1a1630u: goto label_1a1630;
        case 0x1a1634u: goto label_1a1634;
        case 0x1a1638u: goto label_1a1638;
        case 0x1a163cu: goto label_1a163c;
        case 0x1a1640u: goto label_1a1640;
        case 0x1a1644u: goto label_1a1644;
        case 0x1a1648u: goto label_1a1648;
        case 0x1a164cu: goto label_1a164c;
        case 0x1a1650u: goto label_1a1650;
        case 0x1a1654u: goto label_1a1654;
        case 0x1a1658u: goto label_1a1658;
        case 0x1a165cu: goto label_1a165c;
        case 0x1a1660u: goto label_1a1660;
        case 0x1a1664u: goto label_1a1664;
        case 0x1a1668u: goto label_1a1668;
        case 0x1a166cu: goto label_1a166c;
        case 0x1a1670u: goto label_1a1670;
        case 0x1a1674u: goto label_1a1674;
        case 0x1a1678u: goto label_1a1678;
        case 0x1a167cu: goto label_1a167c;
        case 0x1a1680u: goto label_1a1680;
        case 0x1a1684u: goto label_1a1684;
        case 0x1a1688u: goto label_1a1688;
        case 0x1a168cu: goto label_1a168c;
        case 0x1a1690u: goto label_1a1690;
        case 0x1a1694u: goto label_1a1694;
        case 0x1a1698u: goto label_1a1698;
        case 0x1a169cu: goto label_1a169c;
        case 0x1a16a0u: goto label_1a16a0;
        case 0x1a16a4u: goto label_1a16a4;
        case 0x1a16a8u: goto label_1a16a8;
        case 0x1a16acu: goto label_1a16ac;
        case 0x1a16b0u: goto label_1a16b0;
        case 0x1a16b4u: goto label_1a16b4;
        case 0x1a16b8u: goto label_1a16b8;
        case 0x1a16bcu: goto label_1a16bc;
        case 0x1a16c0u: goto label_1a16c0;
        case 0x1a16c4u: goto label_1a16c4;
        case 0x1a16c8u: goto label_1a16c8;
        case 0x1a16ccu: goto label_1a16cc;
        case 0x1a16d0u: goto label_1a16d0;
        case 0x1a16d4u: goto label_1a16d4;
        case 0x1a16d8u: goto label_1a16d8;
        case 0x1a16dcu: goto label_1a16dc;
        case 0x1a16e0u: goto label_1a16e0;
        case 0x1a16e4u: goto label_1a16e4;
        case 0x1a16e8u: goto label_1a16e8;
        case 0x1a16ecu: goto label_1a16ec;
        case 0x1a16f0u: goto label_1a16f0;
        case 0x1a16f4u: goto label_1a16f4;
        case 0x1a16f8u: goto label_1a16f8;
        case 0x1a16fcu: goto label_1a16fc;
        case 0x1a1700u: goto label_1a1700;
        case 0x1a1704u: goto label_1a1704;
        case 0x1a1708u: goto label_1a1708;
        case 0x1a170cu: goto label_1a170c;
        case 0x1a1710u: goto label_1a1710;
        case 0x1a1714u: goto label_1a1714;
        case 0x1a1718u: goto label_1a1718;
        case 0x1a171cu: goto label_1a171c;
        case 0x1a1720u: goto label_1a1720;
        case 0x1a1724u: goto label_1a1724;
        case 0x1a1728u: goto label_1a1728;
        case 0x1a172cu: goto label_1a172c;
        case 0x1a1730u: goto label_1a1730;
        case 0x1a1734u: goto label_1a1734;
        case 0x1a1738u: goto label_1a1738;
        case 0x1a173cu: goto label_1a173c;
        case 0x1a1740u: goto label_1a1740;
        case 0x1a1744u: goto label_1a1744;
        case 0x1a1748u: goto label_1a1748;
        case 0x1a174cu: goto label_1a174c;
        case 0x1a1750u: goto label_1a1750;
        case 0x1a1754u: goto label_1a1754;
        case 0x1a1758u: goto label_1a1758;
        case 0x1a175cu: goto label_1a175c;
        case 0x1a1760u: goto label_1a1760;
        case 0x1a1764u: goto label_1a1764;
        case 0x1a1768u: goto label_1a1768;
        case 0x1a176cu: goto label_1a176c;
        case 0x1a1770u: goto label_1a1770;
        case 0x1a1774u: goto label_1a1774;
        case 0x1a1778u: goto label_1a1778;
        case 0x1a177cu: goto label_1a177c;
        case 0x1a1780u: goto label_1a1780;
        case 0x1a1784u: goto label_1a1784;
        case 0x1a1788u: goto label_1a1788;
        case 0x1a178cu: goto label_1a178c;
        case 0x1a1790u: goto label_1a1790;
        case 0x1a1794u: goto label_1a1794;
        case 0x1a1798u: goto label_1a1798;
        case 0x1a179cu: goto label_1a179c;
        case 0x1a17a0u: goto label_1a17a0;
        case 0x1a17a4u: goto label_1a17a4;
        case 0x1a17a8u: goto label_1a17a8;
        case 0x1a17acu: goto label_1a17ac;
        case 0x1a17b0u: goto label_1a17b0;
        case 0x1a17b4u: goto label_1a17b4;
        case 0x1a17b8u: goto label_1a17b8;
        case 0x1a17bcu: goto label_1a17bc;
        case 0x1a17c0u: goto label_1a17c0;
        case 0x1a17c4u: goto label_1a17c4;
        case 0x1a17c8u: goto label_1a17c8;
        case 0x1a17ccu: goto label_1a17cc;
        case 0x1a17d0u: goto label_1a17d0;
        case 0x1a17d4u: goto label_1a17d4;
        case 0x1a17d8u: goto label_1a17d8;
        case 0x1a17dcu: goto label_1a17dc;
        case 0x1a17e0u: goto label_1a17e0;
        case 0x1a17e4u: goto label_1a17e4;
        case 0x1a17e8u: goto label_1a17e8;
        case 0x1a17ecu: goto label_1a17ec;
        case 0x1a17f0u: goto label_1a17f0;
        case 0x1a17f4u: goto label_1a17f4;
        case 0x1a17f8u: goto label_1a17f8;
        case 0x1a17fcu: goto label_1a17fc;
        case 0x1a1800u: goto label_1a1800;
        case 0x1a1804u: goto label_1a1804;
        case 0x1a1808u: goto label_1a1808;
        case 0x1a180cu: goto label_1a180c;
        case 0x1a1810u: goto label_1a1810;
        case 0x1a1814u: goto label_1a1814;
        case 0x1a1818u: goto label_1a1818;
        case 0x1a181cu: goto label_1a181c;
        case 0x1a1820u: goto label_1a1820;
        case 0x1a1824u: goto label_1a1824;
        case 0x1a1828u: goto label_1a1828;
        case 0x1a182cu: goto label_1a182c;
        case 0x1a1830u: goto label_1a1830;
        case 0x1a1834u: goto label_1a1834;
        case 0x1a1838u: goto label_1a1838;
        case 0x1a183cu: goto label_1a183c;
        case 0x1a1840u: goto label_1a1840;
        case 0x1a1844u: goto label_1a1844;
        case 0x1a1848u: goto label_1a1848;
        case 0x1a184cu: goto label_1a184c;
        case 0x1a1850u: goto label_1a1850;
        case 0x1a1854u: goto label_1a1854;
        case 0x1a1858u: goto label_1a1858;
        case 0x1a185cu: goto label_1a185c;
        case 0x1a1860u: goto label_1a1860;
        case 0x1a1864u: goto label_1a1864;
        case 0x1a1868u: goto label_1a1868;
        case 0x1a186cu: goto label_1a186c;
        case 0x1a1870u: goto label_1a1870;
        case 0x1a1874u: goto label_1a1874;
        case 0x1a1878u: goto label_1a1878;
        case 0x1a187cu: goto label_1a187c;
        case 0x1a1880u: goto label_1a1880;
        case 0x1a1884u: goto label_1a1884;
        case 0x1a1888u: goto label_1a1888;
        case 0x1a188cu: goto label_1a188c;
        case 0x1a1890u: goto label_1a1890;
        case 0x1a1894u: goto label_1a1894;
        case 0x1a1898u: goto label_1a1898;
        case 0x1a189cu: goto label_1a189c;
        case 0x1a18a0u: goto label_1a18a0;
        case 0x1a18a4u: goto label_1a18a4;
        case 0x1a18a8u: goto label_1a18a8;
        case 0x1a18acu: goto label_1a18ac;
        case 0x1a18b0u: goto label_1a18b0;
        case 0x1a18b4u: goto label_1a18b4;
        case 0x1a18b8u: goto label_1a18b8;
        case 0x1a18bcu: goto label_1a18bc;
        case 0x1a18c0u: goto label_1a18c0;
        case 0x1a18c4u: goto label_1a18c4;
        case 0x1a18c8u: goto label_1a18c8;
        case 0x1a18ccu: goto label_1a18cc;
        case 0x1a18d0u: goto label_1a18d0;
        case 0x1a18d4u: goto label_1a18d4;
        case 0x1a18d8u: goto label_1a18d8;
        case 0x1a18dcu: goto label_1a18dc;
        case 0x1a18e0u: goto label_1a18e0;
        case 0x1a18e4u: goto label_1a18e4;
        case 0x1a18e8u: goto label_1a18e8;
        case 0x1a18ecu: goto label_1a18ec;
        case 0x1a18f0u: goto label_1a18f0;
        case 0x1a18f4u: goto label_1a18f4;
        case 0x1a18f8u: goto label_1a18f8;
        case 0x1a18fcu: goto label_1a18fc;
        case 0x1a1900u: goto label_1a1900;
        case 0x1a1904u: goto label_1a1904;
        case 0x1a1908u: goto label_1a1908;
        case 0x1a190cu: goto label_1a190c;
        case 0x1a1910u: goto label_1a1910;
        case 0x1a1914u: goto label_1a1914;
        case 0x1a1918u: goto label_1a1918;
        case 0x1a191cu: goto label_1a191c;
        case 0x1a1920u: goto label_1a1920;
        case 0x1a1924u: goto label_1a1924;
        case 0x1a1928u: goto label_1a1928;
        case 0x1a192cu: goto label_1a192c;
        case 0x1a1930u: goto label_1a1930;
        case 0x1a1934u: goto label_1a1934;
        case 0x1a1938u: goto label_1a1938;
        case 0x1a193cu: goto label_1a193c;
        case 0x1a1940u: goto label_1a1940;
        case 0x1a1944u: goto label_1a1944;
        case 0x1a1948u: goto label_1a1948;
        case 0x1a194cu: goto label_1a194c;
        case 0x1a1950u: goto label_1a1950;
        case 0x1a1954u: goto label_1a1954;
        case 0x1a1958u: goto label_1a1958;
        case 0x1a195cu: goto label_1a195c;
        case 0x1a1960u: goto label_1a1960;
        case 0x1a1964u: goto label_1a1964;
        case 0x1a1968u: goto label_1a1968;
        case 0x1a196cu: goto label_1a196c;
        case 0x1a1970u: goto label_1a1970;
        case 0x1a1974u: goto label_1a1974;
        case 0x1a1978u: goto label_1a1978;
        case 0x1a197cu: goto label_1a197c;
        case 0x1a1980u: goto label_1a1980;
        case 0x1a1984u: goto label_1a1984;
        case 0x1a1988u: goto label_1a1988;
        case 0x1a198cu: goto label_1a198c;
        case 0x1a1990u: goto label_1a1990;
        case 0x1a1994u: goto label_1a1994;
        case 0x1a1998u: goto label_1a1998;
        case 0x1a199cu: goto label_1a199c;
        case 0x1a19a0u: goto label_1a19a0;
        case 0x1a19a4u: goto label_1a19a4;
        case 0x1a19a8u: goto label_1a19a8;
        case 0x1a19acu: goto label_1a19ac;
        case 0x1a19b0u: goto label_1a19b0;
        case 0x1a19b4u: goto label_1a19b4;
        case 0x1a19b8u: goto label_1a19b8;
        case 0x1a19bcu: goto label_1a19bc;
        case 0x1a19c0u: goto label_1a19c0;
        case 0x1a19c4u: goto label_1a19c4;
        case 0x1a19c8u: goto label_1a19c8;
        case 0x1a19ccu: goto label_1a19cc;
        case 0x1a19d0u: goto label_1a19d0;
        case 0x1a19d4u: goto label_1a19d4;
        case 0x1a19d8u: goto label_1a19d8;
        case 0x1a19dcu: goto label_1a19dc;
        case 0x1a19e0u: goto label_1a19e0;
        case 0x1a19e4u: goto label_1a19e4;
        case 0x1a19e8u: goto label_1a19e8;
        case 0x1a19ecu: goto label_1a19ec;
        case 0x1a19f0u: goto label_1a19f0;
        case 0x1a19f4u: goto label_1a19f4;
        case 0x1a19f8u: goto label_1a19f8;
        case 0x1a19fcu: goto label_1a19fc;
        case 0x1a1a00u: goto label_1a1a00;
        case 0x1a1a04u: goto label_1a1a04;
        case 0x1a1a08u: goto label_1a1a08;
        case 0x1a1a0cu: goto label_1a1a0c;
        case 0x1a1a10u: goto label_1a1a10;
        case 0x1a1a14u: goto label_1a1a14;
        case 0x1a1a18u: goto label_1a1a18;
        case 0x1a1a1cu: goto label_1a1a1c;
        case 0x1a1a20u: goto label_1a1a20;
        case 0x1a1a24u: goto label_1a1a24;
        case 0x1a1a28u: goto label_1a1a28;
        case 0x1a1a2cu: goto label_1a1a2c;
        case 0x1a1a30u: goto label_1a1a30;
        case 0x1a1a34u: goto label_1a1a34;
        case 0x1a1a38u: goto label_1a1a38;
        case 0x1a1a3cu: goto label_1a1a3c;
        case 0x1a1a40u: goto label_1a1a40;
        case 0x1a1a44u: goto label_1a1a44;
        case 0x1a1a48u: goto label_1a1a48;
        case 0x1a1a4cu: goto label_1a1a4c;
        case 0x1a1a50u: goto label_1a1a50;
        case 0x1a1a54u: goto label_1a1a54;
        case 0x1a1a58u: goto label_1a1a58;
        case 0x1a1a5cu: goto label_1a1a5c;
        case 0x1a1a60u: goto label_1a1a60;
        case 0x1a1a64u: goto label_1a1a64;
        case 0x1a1a68u: goto label_1a1a68;
        case 0x1a1a6cu: goto label_1a1a6c;
        case 0x1a1a70u: goto label_1a1a70;
        case 0x1a1a74u: goto label_1a1a74;
        case 0x1a1a78u: goto label_1a1a78;
        case 0x1a1a7cu: goto label_1a1a7c;
        case 0x1a1a80u: goto label_1a1a80;
        case 0x1a1a84u: goto label_1a1a84;
        case 0x1a1a88u: goto label_1a1a88;
        case 0x1a1a8cu: goto label_1a1a8c;
        case 0x1a1a90u: goto label_1a1a90;
        case 0x1a1a94u: goto label_1a1a94;
        case 0x1a1a98u: goto label_1a1a98;
        case 0x1a1a9cu: goto label_1a1a9c;
        case 0x1a1aa0u: goto label_1a1aa0;
        case 0x1a1aa4u: goto label_1a1aa4;
        case 0x1a1aa8u: goto label_1a1aa8;
        case 0x1a1aacu: goto label_1a1aac;
        case 0x1a1ab0u: goto label_1a1ab0;
        case 0x1a1ab4u: goto label_1a1ab4;
        case 0x1a1ab8u: goto label_1a1ab8;
        case 0x1a1abcu: goto label_1a1abc;
        case 0x1a1ac0u: goto label_1a1ac0;
        case 0x1a1ac4u: goto label_1a1ac4;
        case 0x1a1ac8u: goto label_1a1ac8;
        case 0x1a1accu: goto label_1a1acc;
        case 0x1a1ad0u: goto label_1a1ad0;
        case 0x1a1ad4u: goto label_1a1ad4;
        case 0x1a1ad8u: goto label_1a1ad8;
        case 0x1a1adcu: goto label_1a1adc;
        case 0x1a1ae0u: goto label_1a1ae0;
        case 0x1a1ae4u: goto label_1a1ae4;
        case 0x1a1ae8u: goto label_1a1ae8;
        case 0x1a1aecu: goto label_1a1aec;
        case 0x1a1af0u: goto label_1a1af0;
        case 0x1a1af4u: goto label_1a1af4;
        case 0x1a1af8u: goto label_1a1af8;
        case 0x1a1afcu: goto label_1a1afc;
        case 0x1a1b00u: goto label_1a1b00;
        case 0x1a1b04u: goto label_1a1b04;
        case 0x1a1b08u: goto label_1a1b08;
        case 0x1a1b0cu: goto label_1a1b0c;
        case 0x1a1b10u: goto label_1a1b10;
        case 0x1a1b14u: goto label_1a1b14;
        case 0x1a1b18u: goto label_1a1b18;
        case 0x1a1b1cu: goto label_1a1b1c;
        case 0x1a1b20u: goto label_1a1b20;
        case 0x1a1b24u: goto label_1a1b24;
        case 0x1a1b28u: goto label_1a1b28;
        case 0x1a1b2cu: goto label_1a1b2c;
        case 0x1a1b30u: goto label_1a1b30;
        case 0x1a1b34u: goto label_1a1b34;
        case 0x1a1b38u: goto label_1a1b38;
        case 0x1a1b3cu: goto label_1a1b3c;
        case 0x1a1b40u: goto label_1a1b40;
        case 0x1a1b44u: goto label_1a1b44;
        case 0x1a1b48u: goto label_1a1b48;
        case 0x1a1b4cu: goto label_1a1b4c;
        case 0x1a1b50u: goto label_1a1b50;
        case 0x1a1b54u: goto label_1a1b54;
        case 0x1a1b58u: goto label_1a1b58;
        case 0x1a1b5cu: goto label_1a1b5c;
        case 0x1a1b60u: goto label_1a1b60;
        case 0x1a1b64u: goto label_1a1b64;
        case 0x1a1b68u: goto label_1a1b68;
        case 0x1a1b6cu: goto label_1a1b6c;
        case 0x1a1b70u: goto label_1a1b70;
        case 0x1a1b74u: goto label_1a1b74;
        case 0x1a1b78u: goto label_1a1b78;
        case 0x1a1b7cu: goto label_1a1b7c;
        case 0x1a1b80u: goto label_1a1b80;
        case 0x1a1b84u: goto label_1a1b84;
        case 0x1a1b88u: goto label_1a1b88;
        case 0x1a1b8cu: goto label_1a1b8c;
        case 0x1a1b90u: goto label_1a1b90;
        case 0x1a1b94u: goto label_1a1b94;
        case 0x1a1b98u: goto label_1a1b98;
        case 0x1a1b9cu: goto label_1a1b9c;
        case 0x1a1ba0u: goto label_1a1ba0;
        case 0x1a1ba4u: goto label_1a1ba4;
        default: return;
    }

label_1a13d8:
    // 0x1a13d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a13d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a13dc:
    // 0x1a13dc: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x1a13dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
label_1a13e0:
    // 0x1a13e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a13e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a13e4:
    // 0x1a13e4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1a13e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a13e8:
    // 0x1a13e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a13e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a13ec:
    // 0x1a13ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a13ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a13f0:
    // 0x1a13f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a13f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1a13f4:
    // 0x1a13f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a13f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a13f8:
    // 0x1a13f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a13fc:
    if (ctx->pc == 0x1A13FCu) {
        ctx->pc = 0x1A13FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A13F8u;
        // 0x1a13fc: 0x3411ffff  ori         $s1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1400u;
        goto label_1a1400;
    }
    ctx->pc = 0x1A13F8u;
    {
        const bool branch_taken_0x1a13f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A13FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A13F8u;
        // 0x1a13fc: 0x3411ffff  ori         $s1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a13f8) {
            ctx->pc = 0x1A1408u;
            goto label_1a1408;
        }
    }
    ctx->pc = 0x1A1400u;
label_1a1400:
    // 0x1a1400: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1a1404:
    if (ctx->pc == 0x1A1404u) {
        ctx->pc = 0x1A1404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1400u;
        // 0x1a1404: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1408u;
        goto label_1a1408;
    }
    ctx->pc = 0x1A1400u;
    {
        const bool branch_taken_0x1a1400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1400u;
        // 0x1a1404: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1400) {
            ctx->pc = 0x1A14C0u;
            goto label_1a14c0;
        }
    }
    ctx->pc = 0x1A1408u;
label_1a1408:
    // 0x1a1408: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1a1408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a140c:
    // 0x1a140c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_1a1410:
    if (ctx->pc == 0x1A1410u) {
        ctx->pc = 0x1A1414u;
        goto label_1a1414;
    }
    ctx->pc = 0x1A140Cu;
    {
        const bool branch_taken_0x1a140c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a140c) {
            ctx->pc = 0x1A147Cu;
            goto label_1a147c;
        }
    }
    ctx->pc = 0x1A1414u;
label_1a1414:
    // 0x1a1414: 0xc06b518  jal         func_1AD460
label_1a1418:
    if (ctx->pc == 0x1A1418u) {
        ctx->pc = 0x1A141Cu;
        goto label_1a141c;
    }
    ctx->pc = 0x1A1414u;
    SET_GPR_U32(ctx, 31, 0x1A141Cu);
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A141Cu;
label_1a141c:
    // 0x1a141c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a141cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a1420:
    // 0x1a1420: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a1420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a1424:
    // 0x1a1424: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x1a1424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
label_1a1428:
    // 0x1a1428: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a1428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a142c:
    // 0x1a142c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1a142cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1a1430:
    // 0x1a1430: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x1a1430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
label_1a1434:
    // 0x1a1434: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1a1434u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_1a1438:
    // 0x1a1438: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a1438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a143c:
    // 0x1a143c: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x1a143cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
label_1a1440:
    // 0x1a1440: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x1a1440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_1a1444:
    // 0x1a1444: 0xc06b52a  jal         func_1AD4A8
label_1a1448:
    if (ctx->pc == 0x1A1448u) {
        ctx->pc = 0x1A1448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1444u;
        // 0x1a1448: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A144Cu;
        goto label_1a144c;
    }
    ctx->pc = 0x1A1444u;
    SET_GPR_U32(ctx, 31, 0x1A144Cu);
    ctx->pc = 0x1A1448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1444u;
    // 0x1a1448: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A144Cu;
label_1a144c:
    // 0x1a144c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a144cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a1450:
    // 0x1a1450: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x1a1450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_1a1454:
    // 0x1a1454: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1a1454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a1458:
    // 0x1a1458: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x1a1458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
label_1a145c:
    // 0x1a145c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1a145cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
label_1a1460:
    // 0x1a1460: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1a1460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1a1464:
    // 0x1a1464: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a1464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1a1468:
    // 0x1a1468: 0xb12823  subu        $a1, $a1, $s1
    ctx->pc = 0x1a1468u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_1a146c:
    // 0x1a146c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1a146cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1a1470:
    // 0x1a1470: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x1a1470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_1a1474:
    // 0x1a1474: 0x10000011  b           . + 4 + (0x11 << 2)
label_1a1478:
    if (ctx->pc == 0x1A1478u) {
        ctx->pc = 0x1A1478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1474u;
        // 0x1a1478: 0xae040004  sw          $a0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A147Cu;
        goto label_1a147c;
    }
    ctx->pc = 0x1A1474u;
    {
        const bool branch_taken_0x1a1474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1474u;
        // 0x1a1478: 0xae040004  sw          $a0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1474) {
            ctx->pc = 0x1A14BCu;
            goto label_1a14bc;
        }
    }
    ctx->pc = 0x1A147Cu;
label_1a147c:
    // 0x1a147c: 0xc06b518  jal         func_1AD460
label_1a1480:
    if (ctx->pc == 0x1A1480u) {
        ctx->pc = 0x1A1484u;
        goto label_1a1484;
    }
    ctx->pc = 0x1A147Cu;
    SET_GPR_U32(ctx, 31, 0x1A1484u);
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A1484u;
label_1a1484:
    // 0x1a1484: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a1484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a1488:
    // 0x1a1488: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a1488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a148c:
    // 0x1a148c: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x1a148cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
label_1a1490:
    // 0x1a1490: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a1490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a1494:
    // 0x1a1494: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1a1494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1a1498:
    // 0x1a1498: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x1a1498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
label_1a149c:
    // 0x1a149c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a149cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a14a0:
    // 0x1a14a0: 0x24050101  addiu       $a1, $zero, 0x101
    ctx->pc = 0x1a14a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_1a14a4:
    // 0x1a14a4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a14a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a14a8:
    // 0x1a14a8: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x1a14a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
label_1a14ac:
    // 0x1a14ac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a14acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1a14b0:
    // 0x1a14b0: 0xc06b52a  jal         func_1AD4A8
label_1a14b4:
    if (ctx->pc == 0x1A14B4u) {
        ctx->pc = 0x1A14B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A14B0u;
        // 0x1a14b4: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A14B8u;
        goto label_1a14b8;
    }
    ctx->pc = 0x1A14B0u;
    SET_GPR_U32(ctx, 31, 0x1A14B8u);
    ctx->pc = 0x1A14B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A14B0u;
    // 0x1a14b4: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A14B8u;
label_1a14b8:
    // 0x1a14b8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1a14b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1a14bc:
    // 0x1a14bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a14bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a14c0:
    // 0x1a14c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a14c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a14c4:
    // 0x1a14c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a14c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a14c8:
    // 0x1a14c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a14c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a14cc:
    // 0x1a14cc: 0x3e00008  jr          $ra
label_1a14d0:
    if (ctx->pc == 0x1A14D0u) {
        ctx->pc = 0x1A14D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A14CCu;
        // 0x1a14d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A14D4u;
        goto label_1a14d4;
    }
    ctx->pc = 0x1A14CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A14D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A14CCu;
        // 0x1a14d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A14CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A14D4u;
label_1a14d4:
    // 0x1a14d4: 0x0  nop
    ctx->pc = 0x1a14d4u;
    // NOP
label_1a14d8:
    // 0x1a14d8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1a14d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1a14dc:
    // 0x1a14dc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a14dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a14e0:
    // 0x1a14e0: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x1a14e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_1a14e4:
    // 0x1a14e4: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1a14e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_1a14e8:
    // 0x1a14e8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1a14e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_1a14ec:
    // 0x1a14ec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a14ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a14f0:
    // 0x1a14f0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1a14f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1a14f4:
    // 0x1a14f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a14f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a14f8:
    // 0x1a14f8: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x1a14f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
label_1a14fc:
    // 0x1a14fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a14fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a1500:
    // 0x1a1500: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x1a1500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_1a1504:
    // 0x1a1504: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x1a1504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_1a1508:
    // 0x1a1508: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1a1508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1a150c:
    // 0x1a150c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1a150cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1a1510:
    // 0x1a1510: 0x8e040858  lw          $a0, 0x858($s0)
    ctx->pc = 0x1a1510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
label_1a1514:
    // 0x1a1514: 0x629818  mult        $s3, $v1, $v0
    ctx->pc = 0x1a1514u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_1a1518:
    // 0x1a1518: 0xc068b12  jal         func_1A2C48
label_1a151c:
    if (ctx->pc == 0x1A151Cu) {
        ctx->pc = 0x1A151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1518u;
        // 0x1a151c: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1520u;
        goto label_1a1520;
    }
    ctx->pc = 0x1A1518u;
    SET_GPR_U32(ctx, 31, 0x1A1520u);
    ctx->pc = 0x1A151Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1518u;
    // 0x1a151c: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C48u;
    { ctx->pc = 0x1a2c48; return; }
    ctx->pc = 0x1A1520u;
label_1a1520:
    // 0x1a1520: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a1520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a1524:
    // 0x1a1524: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1a1524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_1a1528:
    // 0x1a1528: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a1528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a152c:
    // 0x1a152c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1a152cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_1a1530:
    // 0x1a1530: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a1534:
    if (ctx->pc == 0x1A1534u) {
        ctx->pc = 0x1A1534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1530u;
        // 0x1a1534: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1538u;
        goto label_1a1538;
    }
    ctx->pc = 0x1A1530u;
    {
        const bool branch_taken_0x1a1530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1530u;
        // 0x1a1534: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1530) {
            ctx->pc = 0x1A1540u;
            goto label_1a1540;
        }
    }
    ctx->pc = 0x1A1538u;
label_1a1538:
    // 0x1a1538: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x1a1538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
label_1a153c:
    // 0x1a153c: 0xac222010  sw          $v0, 0x2010($at)
    ctx->pc = 0x1a153cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 2));
label_1a1540:
    // 0x1a1540: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a1540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a1544:
    // 0x1a1544: 0x2a750400  slti        $s5, $s3, 0x400
    ctx->pc = 0x1a1544u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)1024) ? 1 : 0);
label_1a1548:
    // 0x1a1548: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1a1548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_1a154c:
    // 0x1a154c: 0x0  nop
    ctx->pc = 0x1a154cu;
    // NOP
label_1a1550:
    // 0x1a1550: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a1550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a1554:
    // 0x1a1554: 0x0  nop
    ctx->pc = 0x1a1554u;
    // NOP
label_1a1558:
    // 0x1a1558: 0x0  nop
    ctx->pc = 0x1a1558u;
    // NOP
label_1a155c:
    // 0x1a155c: 0x0  nop
    ctx->pc = 0x1a155cu;
    // NOP
label_1a1560:
    // 0x1a1560: 0x0  nop
    ctx->pc = 0x1a1560u;
    // NOP
label_1a1564:
    // 0x1a1564: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
label_1a1568:
    if (ctx->pc == 0x1A1568u) {
        ctx->pc = 0x1A156Cu;
        goto label_1a156c;
    }
    ctx->pc = 0x1A1564u;
    {
        const bool branch_taken_0x1a1564 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a1564) {
            ctx->pc = 0x1A1550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1550;
        }
    }
    ctx->pc = 0x1A156Cu;
label_1a156c:
    // 0x1a156c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a156cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a1570:
    // 0x1a1570: 0xc067c94  jal         func_19F250
label_1a1574:
    if (ctx->pc == 0x1A1574u) {
        ctx->pc = 0x1A1574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1570u;
        // 0x1a1574: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1578u;
        goto label_1a1578;
    }
    ctx->pc = 0x1A1570u;
    SET_GPR_U32(ctx, 31, 0x1A1578u);
    ctx->pc = 0x1A1574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1570u;
    // 0x1a1574: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F250u;
    { ctx->pc = 0x19f250; return; }
    ctx->pc = 0x1A1578u;
label_1a1578:
    // 0x1a1578: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a1578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_1a157c:
    // 0x1a157c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1a157cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a1580:
    // 0x1a1580: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x1a1580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
label_1a1584:
    // 0x1a1584: 0x0  nop
    ctx->pc = 0x1a1584u;
    // NOP
label_1a1588:
    // 0x1a1588: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a1588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a158c:
    // 0x1a158c: 0x0  nop
    ctx->pc = 0x1a158cu;
    // NOP
label_1a1590:
    // 0x1a1590: 0x0  nop
    ctx->pc = 0x1a1590u;
    // NOP
label_1a1594:
    // 0x1a1594: 0x0  nop
    ctx->pc = 0x1a1594u;
    // NOP
label_1a1598:
    // 0x1a1598: 0x0  nop
    ctx->pc = 0x1a1598u;
    // NOP
label_1a159c:
    // 0x1a159c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
label_1a15a0:
    if (ctx->pc == 0x1A15A0u) {
        ctx->pc = 0x1A15A4u;
        goto label_1a15a4;
    }
    ctx->pc = 0x1A159Cu;
    {
        const bool branch_taken_0x1a159c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a159c) {
            ctx->pc = 0x1A1588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1588;
        }
    }
    ctx->pc = 0x1A15A4u;
label_1a15a4:
    // 0x1a15a4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1a15a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1a15a8:
    // 0x1a15a8: 0x3c110fff  lui         $s1, 0xFFF
    ctx->pc = 0x1a15a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4095 << 16));
label_1a15ac:
    // 0x1a15ac: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x1a15acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1a15b0:
    // 0x1a15b0: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x1a15b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
label_1a15b4:
    // 0x1a15b4: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x1a15b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
label_1a15b8:
    // 0x1a15b8: 0x3414ffff  ori         $s4, $zero, 0xFFFF
    ctx->pc = 0x1a15b8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1a15bc:
    // 0x1a15bc: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x1a15bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_1a15c0:
    // 0x1a15c0: 0x282202b  sltu        $a0, $s4, $v0
    ctx->pc = 0x1a15c0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a15c4:
    // 0x1a15c4: 0x10800037  beqz        $a0, . + 4 + (0x37 << 2)
label_1a15c8:
    if (ctx->pc == 0x1A15C8u) {
        ctx->pc = 0x1A15C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15C4u;
        // 0x1a15c8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A15CCu;
        goto label_1a15cc;
    }
    ctx->pc = 0x1A15C4u;
    {
        const bool branch_taken_0x1a15c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A15C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15C4u;
        // 0x1a15c8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a15c4) {
            ctx->pc = 0x1A16A4u;
            goto label_1a16a4;
        }
    }
    ctx->pc = 0x1A15CCu;
label_1a15cc:
    // 0x1a15cc: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x1a15ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
label_1a15d0:
    // 0x1a15d0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1a15d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a15d4:
    // 0x1a15d4: 0x24a513d0  addiu       $a1, $a1, 0x13D0
    ctx->pc = 0x1a15d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5072));
label_1a15d8:
    // 0x1a15d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a15d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a15dc:
    // 0x1a15dc: 0xc069150  jal         func_1A4540
label_1a15e0:
    if (ctx->pc == 0x1A15E0u) {
        ctx->pc = 0x1A15E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15DCu;
        // 0x1a15e0: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A15E4u;
        goto label_1a15e4;
    }
    ctx->pc = 0x1A15DCu;
    SET_GPR_U32(ctx, 31, 0x1A15E4u);
    ctx->pc = 0x1A15E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A15DCu;
    // 0x1a15e0: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4540u;
    { ctx->pc = 0x1a4540; return; }
    ctx->pc = 0x1A15E4u;
label_1a15e4:
    // 0x1a15e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a15e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a15e8:
    // 0x1a15e8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1a15e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a15ec:
    // 0x1a15ec: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a15ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a15f0:
    // 0x1a15f0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1a15f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a15f4:
    // 0x1a15f4: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x1a15f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
label_1a15f8:
    // 0x1a15f8: 0xc06950e  jal         func_1A5438
label_1a15fc:
    if (ctx->pc == 0x1A15FCu) {
        ctx->pc = 0x1A15FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15F8u;
        // 0x1a15fc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1600u;
        goto label_1a1600;
    }
    ctx->pc = 0x1A15F8u;
    SET_GPR_U32(ctx, 31, 0x1A1600u);
    ctx->pc = 0x1A15FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A15F8u;
    // 0x1a15fc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5438u;
    { ctx->pc = 0x1a5438; return; }
    ctx->pc = 0x1A1600u;
label_1a1600:
    // 0x1a1600: 0xc06b518  jal         func_1AD460
label_1a1604:
    if (ctx->pc == 0x1A1604u) {
        ctx->pc = 0x1A1608u;
        goto label_1a1608;
    }
    ctx->pc = 0x1A1600u;
    SET_GPR_U32(ctx, 31, 0x1A1608u);
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A1608u;
label_1a1608:
    // 0x1a1608: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x1a1608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1a160c:
    // 0x1a160c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a160cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a1610:
    // 0x1a1610: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x1a1610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
label_1a1614:
    // 0x1a1614: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a1614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a1618:
    // 0x1a1618: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1a1618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1a161c:
    // 0x1a161c: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x1a161cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
label_1a1620:
    // 0x1a1620: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x1a1620u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
label_1a1624:
    // 0x1a1624: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a1624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a1628:
    // 0x1a1628: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x1a1628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
label_1a162c:
    // 0x1a162c: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x1a162cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_1a1630:
    // 0x1a1630: 0xc06b52a  jal         func_1AD4A8
label_1a1634:
    if (ctx->pc == 0x1A1634u) {
        ctx->pc = 0x1A1634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1630u;
        // 0x1a1634: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1638u;
        goto label_1a1638;
    }
    ctx->pc = 0x1A1630u;
    SET_GPR_U32(ctx, 31, 0x1A1638u);
    ctx->pc = 0x1A1634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1630u;
    // 0x1a1634: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A1638u;
label_1a1638:
    // 0x1a1638: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1a1638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1a163c:
    // 0x1a163c: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x1a163cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_1a1640:
    // 0x1a1640: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a1640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1a1644:
    // 0x1a1644: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x1a1644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
label_1a1648:
    // 0x1a1648: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a1648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a164c:
    // 0x1a164c: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x1a164cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
label_1a1650:
    // 0x1a1650: 0x942023  subu        $a0, $a0, $s4
    ctx->pc = 0x1a1650u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_1a1654:
    // 0x1a1654: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x1a1654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_1a1658:
    // 0x1a1658: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
label_1a165c:
    if (ctx->pc == 0x1A165Cu) {
        ctx->pc = 0x1A165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1658u;
        // 0x1a165c: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1660u;
        goto label_1a1660;
    }
    ctx->pc = 0x1A1658u;
    {
        const bool branch_taken_0x1a1658 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1658u;
        // 0x1a165c: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1658) {
            ctx->pc = 0x1A1678u;
            goto label_1a1678;
        }
    }
    ctx->pc = 0x1A1660u;
label_1a1660:
    // 0x1a1660: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x1a1660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_1a1664:
    // 0x1a1664: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1a1664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a1668:
    // 0x1a1668: 0xc0683e4  jal         func_1A0F90
label_1a166c:
    if (ctx->pc == 0x1A166Cu) {
        ctx->pc = 0x1A166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1668u;
        // 0x1a166c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1670u;
        goto label_1a1670;
    }
    ctx->pc = 0x1A1668u;
    SET_GPR_U32(ctx, 31, 0x1A1670u);
    ctx->pc = 0x1A166Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1668u;
    // 0x1a166c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0F90u;
    { ctx->pc = 0x1a0f90; return; }
    ctx->pc = 0x1A1670u;
label_1a1670:
    // 0x1a1670: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a1674:
    if (ctx->pc == 0x1A1674u) {
        ctx->pc = 0x1A1678u;
        goto label_1a1678;
    }
    ctx->pc = 0x1A1670u;
    {
        const bool branch_taken_0x1a1670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1670) {
            ctx->pc = 0x1A1688u;
            goto label_1a1688;
        }
    }
    ctx->pc = 0x1A1678u;
label_1a1678:
    // 0x1a1678: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x1a1678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_1a167c:
    // 0x1a167c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1a167cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a1680:
    // 0x1a1680: 0xc068488  jal         func_1A1220
label_1a1684:
    if (ctx->pc == 0x1A1684u) {
        ctx->pc = 0x1A1684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1680u;
        // 0x1a1684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1688u;
        goto label_1a1688;
    }
    ctx->pc = 0x1A1680u;
    SET_GPR_U32(ctx, 31, 0x1A1688u);
    ctx->pc = 0x1A1684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1680u;
    // 0x1a1684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1220u;
    { ctx->pc = 0x1a1220; return; }
    ctx->pc = 0x1A1688u;
label_1a1688:
    // 0x1a1688: 0xc0694f4  jal         func_1A53D0
label_1a168c:
    if (ctx->pc == 0x1A168Cu) {
        ctx->pc = 0x1A168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1688u;
        // 0x1a168c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1690u;
        goto label_1a1690;
    }
    ctx->pc = 0x1A1688u;
    SET_GPR_U32(ctx, 31, 0x1A1690u);
    ctx->pc = 0x1A168Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1688u;
    // 0x1a168c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A53D0u;
    { ctx->pc = 0x1a53d0; return; }
    ctx->pc = 0x1A1690u;
label_1a1690:
    // 0x1a1690: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a1690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a1694:
    // 0x1a1694: 0xc069154  jal         func_1A4550
label_1a1698:
    if (ctx->pc == 0x1A1698u) {
        ctx->pc = 0x1A1698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1694u;
        // 0x1a1698: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A169Cu;
        goto label_1a169c;
    }
    ctx->pc = 0x1A1694u;
    SET_GPR_U32(ctx, 31, 0x1A169Cu);
    ctx->pc = 0x1A1698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1694u;
    // 0x1a1698: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4550u;
    { ctx->pc = 0x1a4550; return; }
    ctx->pc = 0x1A169Cu;
label_1a169c:
    // 0x1a169c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1a16a0:
    if (ctx->pc == 0x1A16A0u) {
        ctx->pc = 0x1A16A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A169Cu;
        // 0x1a16a0: 0x8e040858  lw          $a0, 0x858($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A16A4u;
        goto label_1a16a4;
    }
    ctx->pc = 0x1A169Cu;
    {
        const bool branch_taken_0x1a169c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A16A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A169Cu;
        // 0x1a16a0: 0x8e040858  lw          $a0, 0x858($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a169c) {
            ctx->pc = 0x1A1718u;
            goto label_1a1718;
        }
    }
    ctx->pc = 0x1A16A4u;
label_1a16a4:
    // 0x1a16a4: 0xc06b518  jal         func_1AD460
label_1a16a8:
    if (ctx->pc == 0x1A16A8u) {
        ctx->pc = 0x1A16ACu;
        goto label_1a16ac;
    }
    ctx->pc = 0x1A16A4u;
    SET_GPR_U32(ctx, 31, 0x1A16ACu);
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A16ACu;
label_1a16ac:
    // 0x1a16ac: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1a16acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a16b0:
    // 0x1a16b0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a16b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a16b4:
    // 0x1a16b4: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x1a16b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
label_1a16b8:
    // 0x1a16b8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1a16b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_1a16bc:
    // 0x1a16bc: 0x912024  and         $a0, $a0, $s1
    ctx->pc = 0x1a16bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
label_1a16c0:
    // 0x1a16c0: 0x34a5b420  ori         $a1, $a1, 0xB420
    ctx->pc = 0x1a16c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46112);
label_1a16c4:
    // 0x1a16c4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1a16c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1a16c8:
    // 0x1a16c8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a16c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a16cc:
    // 0x1a16cc: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x1a16ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
label_1a16d0:
    // 0x1a16d0: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x1a16d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_1a16d4:
    // 0x1a16d4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1a16d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1a16d8:
    // 0x1a16d8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1a16d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1a16dc:
    // 0x1a16dc: 0xc06b52a  jal         func_1AD4A8
label_1a16e0:
    if (ctx->pc == 0x1A16E0u) {
        ctx->pc = 0x1A16E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A16DCu;
        // 0x1a16e0: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A16E4u;
        goto label_1a16e4;
    }
    ctx->pc = 0x1A16DCu;
    SET_GPR_U32(ctx, 31, 0x1A16E4u);
    ctx->pc = 0x1A16E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A16DCu;
    // 0x1a16e0: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A16E4u;
label_1a16e4:
    // 0x1a16e4: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
label_1a16e8:
    if (ctx->pc == 0x1A16E8u) {
        ctx->pc = 0x1A16E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A16E4u;
        // 0x1a16e8: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A16ECu;
        goto label_1a16ec;
    }
    ctx->pc = 0x1A16E4u;
    {
        const bool branch_taken_0x1a16e4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A16E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A16E4u;
        // 0x1a16e8: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a16e4) {
            ctx->pc = 0x1A1704u;
            goto label_1a1704;
        }
    }
    ctx->pc = 0x1A16ECu;
label_1a16ec:
    // 0x1a16ec: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x1a16ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_1a16f0:
    // 0x1a16f0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1a16f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a16f4:
    // 0x1a16f4: 0xc0683e4  jal         func_1A0F90
label_1a16f8:
    if (ctx->pc == 0x1A16F8u) {
        ctx->pc = 0x1A16F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A16F4u;
        // 0x1a16f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A16FCu;
        goto label_1a16fc;
    }
    ctx->pc = 0x1A16F4u;
    SET_GPR_U32(ctx, 31, 0x1A16FCu);
    ctx->pc = 0x1A16F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A16F4u;
    // 0x1a16f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0F90u;
    { ctx->pc = 0x1a0f90; return; }
    ctx->pc = 0x1A16FCu;
label_1a16fc:
    // 0x1a16fc: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a1700:
    if (ctx->pc == 0x1A1700u) {
        ctx->pc = 0x1A1700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A16FCu;
        // 0x1a1700: 0x8e040858  lw          $a0, 0x858($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1704u;
        goto label_1a1704;
    }
    ctx->pc = 0x1A16FCu;
    {
        const bool branch_taken_0x1a16fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A16FCu;
        // 0x1a1700: 0x8e040858  lw          $a0, 0x858($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a16fc) {
            ctx->pc = 0x1A1718u;
            goto label_1a1718;
        }
    }
    ctx->pc = 0x1A1704u;
label_1a1704:
    // 0x1a1704: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x1a1704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_1a1708:
    // 0x1a1708: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1a1708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a170c:
    // 0x1a170c: 0xc068488  jal         func_1A1220
label_1a1710:
    if (ctx->pc == 0x1A1710u) {
        ctx->pc = 0x1A1710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A170Cu;
        // 0x1a1710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1714u;
        goto label_1a1714;
    }
    ctx->pc = 0x1A170Cu;
    SET_GPR_U32(ctx, 31, 0x1A1714u);
    ctx->pc = 0x1A1710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A170Cu;
    // 0x1a1710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1220u;
    { ctx->pc = 0x1a1220; return; }
    ctx->pc = 0x1A1714u;
label_1a1714:
    // 0x1a1714: 0x8e040858  lw          $a0, 0x858($s0)
    ctx->pc = 0x1a1714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
label_1a1718:
    // 0x1a1718: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a1718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a171c:
    // 0x1a171c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1a171cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1a1720:
    // 0x1a1720: 0xc068b12  jal         func_1A2C48
label_1a1724:
    if (ctx->pc == 0x1A1724u) {
        ctx->pc = 0x1A1724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1720u;
        // 0x1a1724: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1728u;
        goto label_1a1728;
    }
    ctx->pc = 0x1A1720u;
    SET_GPR_U32(ctx, 31, 0x1A1728u);
    ctx->pc = 0x1A1724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1720u;
    // 0x1a1724: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C48u;
    { ctx->pc = 0x1a2c48; return; }
    ctx->pc = 0x1A1728u;
label_1a1728:
    // 0x1a1728: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1a1728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1a172c:
    // 0x1a172c: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x1a172cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1a1730:
    // 0x1a1730: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x1a1730u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a1734:
    // 0x1a1734: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x1a1734u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a1738:
    // 0x1a1738: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1a1738u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a173c:
    // 0x1a173c: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x1a173cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a1740:
    // 0x1a1740: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1a1740u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a1744:
    // 0x1a1744: 0x3e00008  jr          $ra
label_1a1748:
    if (ctx->pc == 0x1A1748u) {
        ctx->pc = 0x1A1748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1744u;
        // 0x1a1748: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A174Cu;
        goto label_1a174c;
    }
    ctx->pc = 0x1A1744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1744u;
        // 0x1a1748: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A174Cu;
label_1a174c:
    // 0x1a174c: 0x0  nop
    ctx->pc = 0x1a174cu;
    // NOP
label_1a1750:
    // 0x1a1750: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a1750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a1754:
    // 0x1a1754: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1a1754u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a1758:
    // 0x1a1758: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x1a1758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1a175c:
    // 0x1a175c: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x1a175cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
label_1a1760:
    // 0x1a1760: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x1a1760u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
label_1a1764:
    // 0x1a1764: 0xac470028  sw          $a3, 0x28($v0)
    ctx->pc = 0x1a1764u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 7));
label_1a1768:
    // 0x1a1768: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a176c:
    // 0x1a176c: 0xac480008  sw          $t0, 0x8($v0)
    ctx->pc = 0x1a176cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
label_1a1770:
    // 0x1a1770: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x1a1770u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
label_1a1774:
    // 0x1a1774: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1a1774u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_1a1778:
    // 0x1a1778: 0xfc400018  sd          $zero, 0x18($v0)
    ctx->pc = 0x1a1778u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 0));
label_1a177c:
    // 0x1a177c: 0x80685ea  j           func_1A17A8
label_1a1780:
    if (ctx->pc == 0x1A1780u) {
        ctx->pc = 0x1A1780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A177Cu;
        // 0x1a1780: 0xac460020  sw          $a2, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1784u;
        goto label_1a1784;
    }
    ctx->pc = 0x1A177Cu;
    ctx->pc = 0x1A1780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A177Cu;
    // 0x1a1780: 0xac460020  sw          $a2, 0x20($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A17A8u;
    goto label_1a17a8;
    ctx->pc = 0x1A1784u;
label_1a1784:
    // 0x1a1784: 0x0  nop
    ctx->pc = 0x1a1784u;
    // NOP
label_1a1788:
    // 0x1a1788: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x1a1788u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_1a178c:
    // 0x1a178c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1a178cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1a1790:
    // 0x1a1790: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1a1790u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1a1794:
    // 0x1a1794: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x1a1794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
label_1a1798:
    // 0x1a1798: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a1798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1a179c:
    // 0x1a179c: 0x3e00008  jr          $ra
label_1a17a0:
    if (ctx->pc == 0x1A17A0u) {
        ctx->pc = 0x1A17A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A179Cu;
        // 0x1a17a0: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A17A4u;
        goto label_1a17a4;
    }
    ctx->pc = 0x1A179Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A17A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A179Cu;
        // 0x1a17a0: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A179Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A17A4u;
label_1a17a4:
    // 0x1a17a4: 0x0  nop
    ctx->pc = 0x1a17a4u;
    // NOP
label_1a17a8:
    // 0x1a17a8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1a17a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a17ac:
    // 0x1a17ac: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x1a17acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_1a17b0:
    // 0x1a17b0: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x1a17b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_1a17b4:
    // 0x1a17b4: 0xa21014  dsllv       $v0, $v0, $a1
    ctx->pc = 0x1a17b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 5) & 0x3F));
label_1a17b8:
    // 0x1a17b8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1a17b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1a17bc:
    // 0x1a17bc: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x1a17bcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_1a17c0:
    // 0x1a17c0: 0x2c640039  sltiu       $a0, $v1, 0x39
    ctx->pc = 0x1a17c0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)57) ? 1 : 0);
label_1a17c4:
    // 0x1a17c4: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
label_1a17c8:
    if (ctx->pc == 0x1A17C8u) {
        ctx->pc = 0x1A17C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A17C4u;
        // 0x1a17c8: 0xacc30010  sw          $v1, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A17CCu;
        goto label_1a17cc;
    }
    ctx->pc = 0x1A17C4u;
    {
        const bool branch_taken_0x1a17c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A17C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A17C4u;
        // 0x1a17c8: 0xacc30010  sw          $v1, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a17c4) {
            ctx->pc = 0x1A182Cu;
            goto label_1a182c;
        }
    }
    ctx->pc = 0x1A17CCu;
label_1a17cc:
    // 0x1a17cc: 0x8cc80024  lw          $t0, 0x24($a2)
    ctx->pc = 0x1a17ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_1a17d0:
    // 0x1a17d0: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1a17d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a17d4:
    // 0x1a17d4: 0xdcca0018  ld          $t2, 0x18($a2)
    ctx->pc = 0x1a17d4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 6), 24)));
label_1a17d8:
    // 0x1a17d8: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x1a17d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1a17dc:
    // 0x1a17dc: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x1a17dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1a17e0:
    // 0x1a17e0: 0x8cc70010  lw          $a3, 0x10($a2)
    ctx->pc = 0x1a17e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_1a17e4:
    // 0x1a17e4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1a17e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1a17e8:
    // 0x1a17e8: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1a17e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1a17ec:
    // 0x1a17ec: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x1a17ecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_1a17f0:
    // 0x1a17f0: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x1a17f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
label_1a17f4:
    // 0x1a17f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a17f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1a17f8:
    // 0x1a17f8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1a17f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1a17fc:
    // 0x1a17fc: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x1a17fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_1a1800:
    // 0x1a1800: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x1a1800u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
label_1a1804:
    // 0x1a1804: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a1808:
    if (ctx->pc == 0x1A1808u) {
        ctx->pc = 0x1A1808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1804u;
        // 0x1a1808: 0xacc5000c  sw          $a1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A180Cu;
        goto label_1a180c;
    }
    ctx->pc = 0x1A1804u;
    {
        const bool branch_taken_0x1a1804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1804u;
        // 0x1a1808: 0xacc5000c  sw          $a1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1804) {
            ctx->pc = 0x1A1814u;
            goto label_1a1814;
        }
    }
    ctx->pc = 0x1A180Cu;
label_1a180c:
    // 0x1a180c: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x1a180cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_1a1810:
    // 0x1a1810: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x1a1810u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_1a1814:
    // 0x1a1814: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x1a1814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_1a1818:
    // 0x1a1818: 0x2c430039  sltiu       $v1, $v0, 0x39
    ctx->pc = 0x1a1818u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)57) ? 1 : 0);
label_1a181c:
    // 0x1a181c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
label_1a1820:
    if (ctx->pc == 0x1A1820u) {
        ctx->pc = 0x1A1820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A181Cu;
        // 0x1a1820: 0xacc20010  sw          $v0, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1824u;
        goto label_1a1824;
    }
    ctx->pc = 0x1A181Cu;
    {
        const bool branch_taken_0x1a181c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A181Cu;
        // 0x1a1820: 0xacc20010  sw          $v0, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a181c) {
            ctx->pc = 0x1A17D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a17d8;
        }
    }
    ctx->pc = 0x1A1824u;
label_1a1824:
    // 0x1a1824: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a1828:
    if (ctx->pc == 0x1A1828u) {
        ctx->pc = 0x1A1828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1824u;
        // 0x1a1828: 0x149102d  daddu       $v0, $t2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A182Cu;
        goto label_1a182c;
    }
    ctx->pc = 0x1A1824u;
    {
        const bool branch_taken_0x1a1824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1824u;
        // 0x1a1828: 0x149102d  daddu       $v0, $t2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1824) {
            ctx->pc = 0x1A1838u;
            goto label_1a1838;
        }
    }
    ctx->pc = 0x1A182Cu;
label_1a182c:
    // 0x1a182c: 0xdcca0018  ld          $t2, 0x18($a2)
    ctx->pc = 0x1a182cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 6), 24)));
label_1a1830:
    // 0x1a1830: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1a1830u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a1834:
    // 0x1a1834: 0x149102d  daddu       $v0, $t2, $t1
    ctx->pc = 0x1a1834u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 9));
label_1a1838:
    // 0x1a1838: 0x3e00008  jr          $ra
label_1a183c:
    if (ctx->pc == 0x1A183Cu) {
        ctx->pc = 0x1A183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1838u;
        // 0x1a183c: 0xfcc20018  sd          $v0, 0x18($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1840u;
        goto label_1a1840;
    }
    ctx->pc = 0x1A1838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1838u;
        // 0x1a183c: 0xfcc20018  sd          $v0, 0x18($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1840u;
label_1a1840:
    // 0x1a1840: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a1840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a1844:
    // 0x1a1844: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a1844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a1848:
    // 0x1a1848: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a1848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a184c:
    // 0x1a184c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a184cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a1850:
    // 0x1a1850: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a1850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a1854:
    // 0x1a1854: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a1854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1a1858:
    // 0x1a1858: 0xc0685e2  jal         func_1A1788
label_1a185c:
    if (ctx->pc == 0x1A185Cu) {
        ctx->pc = 0x1A185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1858u;
        // 0x1a185c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1860u;
        goto label_1a1860;
    }
    ctx->pc = 0x1A1858u;
    SET_GPR_U32(ctx, 31, 0x1A1860u);
    ctx->pc = 0x1A185Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1858u;
    // 0x1a185c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1788u;
    goto label_1a1788;
    ctx->pc = 0x1A1860u;
label_1a1860:
    // 0x1a1860: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a1860u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a1864:
    // 0x1a1864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a1868:
    // 0x1a1868: 0xc0685ea  jal         func_1A17A8
label_1a186c:
    if (ctx->pc == 0x1A186Cu) {
        ctx->pc = 0x1A186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1868u;
        // 0x1a186c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1870u;
        goto label_1a1870;
    }
    ctx->pc = 0x1A1868u;
    SET_GPR_U32(ctx, 31, 0x1A1870u);
    ctx->pc = 0x1A186Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1868u;
    // 0x1a186c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A17A8u;
    goto label_1a17a8;
    ctx->pc = 0x1A1870u;
label_1a1870:
    // 0x1a1870: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1a1870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a1874:
    // 0x1a1874: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a1874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a1878:
    // 0x1a1878: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a1878u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a187c:
    // 0x1a187c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a187cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a1880:
    // 0x1a1880: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a1884:
    // 0x1a1884: 0x3e00008  jr          $ra
label_1a1888:
    if (ctx->pc == 0x1A1888u) {
        ctx->pc = 0x1A1888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1884u;
        // 0x1a1888: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A188Cu;
        goto label_1a188c;
    }
    ctx->pc = 0x1A1884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1884u;
        // 0x1a1888: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A188Cu;
label_1a188c:
    // 0x1a188c: 0x0  nop
    ctx->pc = 0x1a188cu;
    // NOP
label_1a1890:
    // 0x1a1890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a1890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a1894:
    // 0x1a1894: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a1894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1898:
    // 0x1a1898: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a1898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a189c:
    // 0x1a189c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a189cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a18a0:
    // 0x1a18a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a18a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a18a4:
    // 0x1a18a4: 0xc0685e2  jal         func_1A1788
label_1a18a8:
    if (ctx->pc == 0x1A18A8u) {
        ctx->pc = 0x1A18A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A18A4u;
        // 0x1a18a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A18ACu;
        goto label_1a18ac;
    }
    ctx->pc = 0x1A18A4u;
    SET_GPR_U32(ctx, 31, 0x1A18ACu);
    ctx->pc = 0x1A18A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A18A4u;
    // 0x1a18a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1788u;
    goto label_1a1788;
    ctx->pc = 0x1A18ACu;
label_1a18ac:
    // 0x1a18ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a18acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a18b0:
    // 0x1a18b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a18b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a18b4:
    // 0x1a18b4: 0xc0685ea  jal         func_1A17A8
label_1a18b8:
    if (ctx->pc == 0x1A18B8u) {
        ctx->pc = 0x1A18B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A18B4u;
        // 0x1a18b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A18BCu;
        goto label_1a18bc;
    }
    ctx->pc = 0x1A18B4u;
    SET_GPR_U32(ctx, 31, 0x1A18BCu);
    ctx->pc = 0x1A18B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A18B4u;
    // 0x1a18b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A17A8u;
    goto label_1a17a8;
    ctx->pc = 0x1A18BCu;
label_1a18bc:
    // 0x1a18bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a18bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a18c0:
    // 0x1a18c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a18c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a18c4:
    // 0x1a18c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a18c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a18c8:
    // 0x1a18c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a18c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a18cc:
    // 0x1a18cc: 0x3e00008  jr          $ra
label_1a18d0:
    if (ctx->pc == 0x1A18D0u) {
        ctx->pc = 0x1A18D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A18CCu;
        // 0x1a18d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A18D4u;
        goto label_1a18d4;
    }
    ctx->pc = 0x1A18CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A18D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A18CCu;
        // 0x1a18d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A18CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A18D4u;
label_1a18d4:
    // 0x1a18d4: 0x0  nop
    ctx->pc = 0x1a18d4u;
    // NOP
label_1a18d8:
    // 0x1a18d8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1a18d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a18dc:
    // 0x1a18dc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1a18dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1a18e0:
    // 0x1a18e0: 0xdce20018  ld          $v0, 0x18($a3)
    ctx->pc = 0x1a18e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 24)));
label_1a18e4:
    // 0x1a18e4: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x1a18e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_1a18e8:
    // 0x1a18e8: 0xa2102d  daddu       $v0, $a1, $v0
    ctx->pc = 0x1a18e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
label_1a18ec:
    // 0x1a18ec: 0x8ce30024  lw          $v1, 0x24($a3)
    ctx->pc = 0x1a18ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
label_1a18f0:
    // 0x1a18f0: 0x22778  dsll        $a0, $v0, 29
    ctx->pc = 0x1a18f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 29);
label_1a18f4:
    // 0x1a18f4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1a18f4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_1a18f8:
    // 0x1a18f8: 0xfce00000  sd          $zero, 0x0($a3)
    ctx->pc = 0x1a18f8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 0));
label_1a18fc:
    // 0x1a18fc: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1a18fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1a1900:
    // 0x1a1900: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x1a1900u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
label_1a1904:
    // 0x1a1904: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x1a1904u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1a1908:
    // 0x1a1908: 0xfce20018  sd          $v0, 0x18($a3)
    ctx->pc = 0x1a1908u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 2));
label_1a190c:
    // 0x1a190c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1a1910:
    if (ctx->pc == 0x1A1910u) {
        ctx->pc = 0x1A1910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A190Cu;
        // 0x1a1910: 0xace6000c  sw          $a2, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1914u;
        goto label_1a1914;
    }
    ctx->pc = 0x1A190Cu;
    {
        const bool branch_taken_0x1a190c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A190Cu;
        // 0x1a1910: 0xace6000c  sw          $a2, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a190c) {
            ctx->pc = 0x1A1920u;
            goto label_1a1920;
        }
    }
    ctx->pc = 0x1A1914u;
label_1a1914:
    // 0x1a1914: 0x8ce20028  lw          $v0, 0x28($a3)
    ctx->pc = 0x1a1914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_1a1918:
    // 0x1a1918: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x1a1918u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1a191c:
    // 0x1a191c: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x1a191cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_1a1920:
    // 0x1a1920: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1a1920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a1924:
    // 0x1a1924: 0x80685ea  j           func_1A17A8
label_1a1928:
    if (ctx->pc == 0x1A1928u) {
        ctx->pc = 0x1A1928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1924u;
        // 0x1a1928: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A192Cu;
        goto label_1a192c;
    }
    ctx->pc = 0x1A1924u;
    ctx->pc = 0x1A1928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1924u;
    // 0x1a1928: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A17A8u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_1a17a8;
    ctx->pc = 0x1A192Cu;
label_1a192c:
    // 0x1a192c: 0x0  nop
    ctx->pc = 0x1a192cu;
    // NOP
label_1a1930:
    // 0x1a1930: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1a1930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a1934:
    // 0x1a1934: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x1a1934u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
label_1a1938:
    // 0x1a1938: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1a1938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1a193c:
    // 0x1a193c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a193cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1a1940:
    // 0x1a1940: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1a1940u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a1944:
    // 0x1a1944: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a1948:
    if (ctx->pc == 0x1A1948u) {
        ctx->pc = 0x1A194Cu;
        goto label_1a194c;
    }
    ctx->pc = 0x1A1944u;
    {
        const bool branch_taken_0x1a1944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1944) {
            ctx->pc = 0x1A1954u;
            goto label_1a1954;
        }
    }
    ctx->pc = 0x1A194Cu;
label_1a194c:
    // 0x1a194c: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x1a194cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_1a1950:
    // 0x1a1950: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1a1950u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a1954:
    // 0x1a1954: 0x3e00008  jr          $ra
label_1a1958:
    if (ctx->pc == 0x1A1958u) {
        ctx->pc = 0x1A1958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1954u;
        // 0x1a1958: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A195Cu;
        goto label_1a195c;
    }
    ctx->pc = 0x1A1954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1954u;
        // 0x1a1958: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A195Cu;
label_1a195c:
    // 0x1a195c: 0x0  nop
    ctx->pc = 0x1a195cu;
    // NOP
label_1a1960:
    // 0x1a1960: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1a1960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a1964:
    // 0x1a1964: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1964u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a1968:
    // 0x1a1968: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a1968u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a196c:
    // 0x1a196c: 0x2c82000a  sltiu       $v0, $a0, 0xA
    ctx->pc = 0x1a196cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1a1970:
    // 0x1a1970: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1a1974:
    if (ctx->pc == 0x1A1974u) {
        ctx->pc = 0x1A1974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1970u;
        // 0x1a1974: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1978u;
        goto label_1a1978;
    }
    ctx->pc = 0x1A1970u;
    {
        const bool branch_taken_0x1a1970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1970u;
        // 0x1a1974: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1970) {
            ctx->pc = 0x1A19DCu;
            goto label_1a19dc;
        }
    }
    ctx->pc = 0x1A1978u;
label_1a1978:
    // 0x1a1978: 0x3c080028  lui         $t0, 0x28
    ctx->pc = 0x1a1978u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
label_1a197c:
    // 0x1a197c: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x1a197cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1a1980:
    // 0x1a1980: 0x25025978  addiu       $v0, $t0, 0x5978
    ctx->pc = 0x1a1980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 22904));
label_1a1984:
    // 0x1a1984: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1a1984u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1a1988:
    // 0x1a1988: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x1a1988u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
label_1a198c:
    // 0x1a198c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1a198cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1a1990:
    // 0x1a1990: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x1a1990u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
label_1a1994:
    // 0x1a1994: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
label_1a1998:
    if (ctx->pc == 0x1A1998u) {
        ctx->pc = 0x1A1998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1994u;
        // 0x1a1998: 0x83102b  sltu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A199Cu;
        goto label_1a199c;
    }
    ctx->pc = 0x1A1994u;
    {
        const bool branch_taken_0x1a1994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1A1998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1994u;
        // 0x1a1998: 0x83102b  sltu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1994) {
            ctx->pc = 0x1A19BCu;
            goto label_1a19bc;
        }
    }
    ctx->pc = 0x1A199Cu;
label_1a199c:
    // 0x1a199c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_1a19a0:
    if (ctx->pc == 0x1A19A0u) {
        ctx->pc = 0x1A19A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A199Cu;
        // 0x1a19a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A19A4u;
        goto label_1a19a4;
    }
    ctx->pc = 0x1A199Cu;
    {
        const bool branch_taken_0x1a199c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a199c) {
            ctx->pc = 0x1A19A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A199Cu;
            // 0x1a19a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A19C8u;
            goto label_1a19c8;
        }
    }
    ctx->pc = 0x1A19A4u;
label_1a19a4:
    // 0x1a19a4: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x1a19a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_1a19a8:
    // 0x1a19a8: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a19a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_1a19ac:
    // 0x1a19ac: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1a19b0:
    if (ctx->pc == 0x1A19B0u) {
        ctx->pc = 0x1A19B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A19ACu;
        // 0x1a19b0: 0x25025978  addiu       $v0, $t0, 0x5978 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 22904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A19B4u;
        goto label_1a19b4;
    }
    ctx->pc = 0x1A19ACu;
    {
        const bool branch_taken_0x1a19ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A19B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A19ACu;
        // 0x1a19b0: 0x25025978  addiu       $v0, $t0, 0x5978 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 22904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a19ac) {
            ctx->pc = 0x1A19C4u;
            goto label_1a19c4;
        }
    }
    ctx->pc = 0x1A19B4u;
label_1a19b4:
    // 0x1a19b4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a19b8:
    if (ctx->pc == 0x1A19B8u) {
        ctx->pc = 0x1A19B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A19B4u;
        // 0x1a19b8: 0xa72014  dsllv       $a0, $a3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (GPR_U32(ctx, 5) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A19BCu;
        goto label_1a19bc;
    }
    ctx->pc = 0x1A19B4u;
    {
        const bool branch_taken_0x1a19b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A19B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A19B4u;
        // 0x1a19b8: 0xa72014  dsllv       $a0, $a3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (GPR_U32(ctx, 5) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a19b4) {
            ctx->pc = 0x1A19D0u;
            goto label_1a19d0;
        }
    }
    ctx->pc = 0x1A19BCu;
label_1a19bc:
    // 0x1a19bc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a19c0:
    if (ctx->pc == 0x1A19C0u) {
        ctx->pc = 0x1A19C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A19BCu;
        // 0x1a19c0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A19C4u;
        goto label_1a19c4;
    }
    ctx->pc = 0x1A19BCu;
    {
        const bool branch_taken_0x1a19bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A19C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A19BCu;
        // 0x1a19c0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a19bc) {
            ctx->pc = 0x1A19C8u;
            goto label_1a19c8;
        }
    }
    ctx->pc = 0x1A19C4u;
label_1a19c4:
    // 0x1a19c4: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1a19c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1a19c8:
    // 0x1a19c8: 0x25025978  addiu       $v0, $t0, 0x5978
    ctx->pc = 0x1a19c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 22904));
label_1a19cc:
    // 0x1a19cc: 0xa72014  dsllv       $a0, $a3, $a1
    ctx->pc = 0x1a19ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (GPR_U32(ctx, 5) & 0x3F));
label_1a19d0:
    // 0x1a19d0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1a19d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1a19d4:
    // 0x1a19d4: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1a19d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_1a19d8:
    // 0x1a19d8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1a19d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1a19dc:
    // 0x1a19dc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a19dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a19e0:
    // 0x1a19e0: 0x3e00008  jr          $ra
label_1a19e4:
    if (ctx->pc == 0x1A19E4u) {
        ctx->pc = 0x1A19E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A19E0u;
        // 0x1a19e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A19E8u;
        goto label_1a19e8;
    }
    ctx->pc = 0x1A19E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A19E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A19E0u;
        // 0x1a19e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A19E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A19E8u;
label_1a19e8:
    // 0x1a19e8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a19e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1a19ec:
    // 0x1a19ec: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1a19ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1a19f0:
    // 0x1a19f0: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x1a19f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_1a19f4:
    // 0x1a19f4: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x1a19f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_1a19f8:
    // 0x1a19f8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1a19f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_1a19fc:
    // 0x1a19fc: 0x6763a  dsrl        $t6, $a2, 24
    ctx->pc = 0x1a19fcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 6) >> 24);
label_1a1a00:
    // 0x1a1a00: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1a1a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_1a1a04:
    // 0x1a1a04: 0x6683e  dsrl32      $t5, $a2, 0
    ctx->pc = 0x1a1a04u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 6) >> (32 + 0));
label_1a1a08:
    // 0x1a1a08: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a1a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1a1a0c:
    // 0x1a1a0c: 0x2603c  dsll32      $t4, $v0, 0
    ctx->pc = 0x1a1a0cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (32 + 0));
label_1a1a10:
    // 0x1a1a10: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x1a1a10u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
label_1a1a14:
    // 0x1a1a14: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a1a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1a1a18:
    // 0x1a1a18: 0x24635978  addiu       $v1, $v1, 0x5978
    ctx->pc = 0x1a1a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22904));
label_1a1a1c:
    // 0x1a1a1c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a1a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a1a20:
    // 0x1a1a20: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a1a20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1a24:
    // 0x1a1a24: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a1a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a1a28:
    // 0x1a1a28: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a1a28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1a2c:
    // 0x1a1a2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a1a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a1a30:
    // 0x1a1a30: 0x340bffff  ori         $t3, $zero, 0xFFFF
    ctx->pc = 0x1a1a30u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1a1a34:
    // 0x1a1a34: 0xb5e38  dsll        $t3, $t3, 24
    ctx->pc = 0x1a1a34u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 24);
label_1a1a38:
    // 0x1a1a38: 0x3417ff00  ori         $s7, $zero, 0xFF00
    ctx->pc = 0x1a1a38u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_1a1a3c:
    // 0x1a1a3c: 0x17be38  dsll        $s7, $s7, 24
    ctx->pc = 0x1a1a3cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << 24);
label_1a1a40:
    // 0x1a1a40: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x1a1a40u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a1a44:
    // 0x1a1a44: 0x16b63a  dsrl        $s6, $s6, 24
    ctx->pc = 0x1a1a44u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> 24);
label_1a1a48:
    // 0x1a1a48: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x1a1a48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a1a4c:
    // 0x1a1a4c: 0x15aa3c  dsll32      $s5, $s5, 8
    ctx->pc = 0x1a1a4cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 8));
label_1a1a50:
    // 0x1a1a50: 0x15ae3a  dsrl        $s5, $s5, 24
    ctx->pc = 0x1a1a50u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> 24);
label_1a1a54:
    // 0x1a1a54: 0x3414bd20  ori         $s4, $zero, 0xBD20
    ctx->pc = 0x1a1a54u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48416);
label_1a1a58:
    // 0x1a1a58: 0x14a638  dsll        $s4, $s4, 24
    ctx->pc = 0x1a1a58u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << 24);
label_1a1a5c:
    // 0x1a1a5c: 0x3413bd80  ori         $s3, $zero, 0xBD80
    ctx->pc = 0x1a1a5cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48512);
label_1a1a60:
    // 0x1a1a60: 0x139e38  dsll        $s3, $s3, 24
    ctx->pc = 0x1a1a60u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << 24);
label_1a1a64:
    // 0x1a1a64: 0x3412bd90  ori         $s2, $zero, 0xBD90
    ctx->pc = 0x1a1a64u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48528);
label_1a1a68:
    // 0x1a1a68: 0x129638  dsll        $s2, $s2, 24
    ctx->pc = 0x1a1a68u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 24);
label_1a1a6c:
    // 0x1a1a6c: 0x3411bda0  ori         $s1, $zero, 0xBDA0
    ctx->pc = 0x1a1a6cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48544);
label_1a1a70:
    // 0x1a1a70: 0x118e38  dsll        $s1, $s1, 24
    ctx->pc = 0x1a1a70u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 24);
label_1a1a74:
    // 0x1a1a74: 0x3410ffe0  ori         $s0, $zero, 0xFFE0
    ctx->pc = 0x1a1a74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_1a1a78:
    // 0x1a1a78: 0x108638  dsll        $s0, $s0, 24
    ctx->pc = 0x1a1a78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 24);
label_1a1a7c:
    // 0x1a1a7c: 0x3419fff8  ori         $t9, $zero, 0xFFF8
    ctx->pc = 0x1a1a7cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
label_1a1a80:
    // 0x1a1a80: 0x19ce38  dsll        $t9, $t9, 24
    ctx->pc = 0x1a1a80u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << 24);
label_1a1a84:
    // 0x1a1a84: 0x3418f000  ori         $t8, $zero, 0xF000
    ctx->pc = 0x1a1a84u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
label_1a1a88:
    // 0x1a1a88: 0x18c638  dsll        $t8, $t8, 24
    ctx->pc = 0x1a1a88u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << 24);
label_1a1a8c:
    // 0x1a1a8c: 0x340fc000  ori         $t7, $zero, 0xC000
    ctx->pc = 0x1a1a8cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
label_1a1a90:
    // 0x1a1a90: 0xf7e38  dsll        $t7, $t7, 24
    ctx->pc = 0x1a1a90u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 24);
label_1a1a94:
    // 0x1a1a94: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x1a1a94u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_1a1a98:
    // 0x1a1a98: 0x10eb0011  beq         $a3, $t3, . + 4 + (0x11 << 2)
label_1a1a9c:
    if (ctx->pc == 0x1A1A9Cu) {
        ctx->pc = 0x1A1A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1A98u;
        // 0x1a1a9c: 0x167102b  sltu        $v0, $t3, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1AA0u;
        goto label_1a1aa0;
    }
    ctx->pc = 0x1A1A98u;
    {
        const bool branch_taken_0x1a1a98 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 11));
        ctx->pc = 0x1A1A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1A98u;
        // 0x1a1a9c: 0x167102b  sltu        $v0, $t3, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1a98) {
            ctx->pc = 0x1A1AE0u;
            goto label_1a1ae0;
        }
    }
    ctx->pc = 0x1A1AA0u;
label_1a1aa0:
    // 0x1a1aa0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1a1aa4:
    if (ctx->pc == 0x1A1AA4u) {
        ctx->pc = 0x1A1AA8u;
        goto label_1a1aa8;
    }
    ctx->pc = 0x1A1AA0u;
    {
        const bool branch_taken_0x1a1aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1aa0) {
            ctx->pc = 0x1A1AB8u;
            goto label_1a1ab8;
        }
    }
    ctx->pc = 0x1A1AA8u;
label_1a1aa8:
    // 0x1a1aa8: 0x50f70028  beql        $a3, $s7, . + 4 + (0x28 << 2)
label_1a1aac:
    if (ctx->pc == 0x1A1AACu) {
        ctx->pc = 0x1A1AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AA8u;
        // 0x1a1aac: 0xdc680000  ld          $t0, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1AB0u;
        goto label_1a1ab0;
    }
    ctx->pc = 0x1A1AA8u;
    {
        const bool branch_taken_0x1a1aa8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 23));
        if (branch_taken_0x1a1aa8) {
            ctx->pc = 0x1A1AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1AA8u;
            // 0x1a1aac: 0xdc680000  ld          $t0, 0x0($v1) (Delay Slot)
            SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1B4Cu;
            goto label_1a1b4c;
        }
    }
    ctx->pc = 0x1A1AB0u;
label_1a1ab0:
    // 0x1a1ab0: 0x1000003c  b           . + 4 + (0x3C << 2)
label_1a1ab4:
    if (ctx->pc == 0x1A1AB4u) {
        ctx->pc = 0x1A1AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AB0u;
        // 0x1a1ab4: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1AB8u;
        goto label_1a1ab8;
    }
    ctx->pc = 0x1A1AB0u;
    {
        const bool branch_taken_0x1a1ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AB0u;
        // 0x1a1ab4: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ab0) {
            ctx->pc = 0x1A1BA4u;
            goto label_1a1ba4;
        }
    }
    ctx->pc = 0x1A1AB8u;
label_1a1ab8:
    // 0x1a1ab8: 0x54f6003a  bnel        $a3, $s6, . + 4 + (0x3A << 2)
label_1a1abc:
    if (ctx->pc == 0x1A1ABCu) {
        ctx->pc = 0x1A1ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AB8u;
        // 0x1a1abc: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1AC0u;
        goto label_1a1ac0;
    }
    ctx->pc = 0x1A1AB8u;
    {
        const bool branch_taken_0x1a1ab8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 22));
        if (branch_taken_0x1a1ab8) {
            ctx->pc = 0x1A1ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1AB8u;
            // 0x1a1abc: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1BA4u;
            goto label_1a1ba4;
        }
    }
    ctx->pc = 0x1A1AC0u;
label_1a1ac0:
    // 0x1a1ac0: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1a1ac0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_1a1ac4:
    // 0x1a1ac4: 0xd53824  and         $a3, $a2, $s5
    ctx->pc = 0x1a1ac4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 21));
label_1a1ac8:
    // 0x1a1ac8: 0x54e20036  bnel        $a3, $v0, . + 4 + (0x36 << 2)
label_1a1acc:
    if (ctx->pc == 0x1A1ACCu) {
        ctx->pc = 0x1A1ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AC8u;
        // 0x1a1acc: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1AD0u;
        goto label_1a1ad0;
    }
    ctx->pc = 0x1A1AC8u;
    {
        const bool branch_taken_0x1a1ac8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a1ac8) {
            ctx->pc = 0x1A1ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1AC8u;
            // 0x1a1acc: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1BA4u;
            goto label_1a1ba4;
        }
    }
    ctx->pc = 0x1A1AD0u;
label_1a1ad0:
    // 0x1a1ad0: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x1a1ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_1a1ad4:
    // 0x1a1ad4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1a1ad4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1ad8:
    // 0x1a1ad8: 0x10000031  b           . + 4 + (0x31 << 2)
label_1a1adc:
    if (ctx->pc == 0x1A1ADCu) {
        ctx->pc = 0x1A1ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AD8u;
        // 0x1a1adc: 0xacac0000  sw          $t4, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1AE0u;
        goto label_1a1ae0;
    }
    ctx->pc = 0x1A1AD8u;
    {
        const bool branch_taken_0x1a1ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AD8u;
        // 0x1a1adc: 0xacac0000  sw          $t4, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ad8) {
            ctx->pc = 0x1A1BA0u;
            goto label_1a1ba0;
        }
    }
    ctx->pc = 0x1A1AE0u;
label_1a1ae0:
    // 0x1a1ae0: 0xdc680000  ld          $t0, 0x0($v1)
    ctx->pc = 0x1a1ae0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_1a1ae4:
    // 0x1a1ae4: 0x3402bd88  ori         $v0, $zero, 0xBD88
    ctx->pc = 0x1a1ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48520);
label_1a1ae8:
    // 0x1a1ae8: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a1ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_1a1aec:
    // 0x1a1aec: 0x11020011  beq         $t0, $v0, . + 4 + (0x11 << 2)
label_1a1af0:
    if (ctx->pc == 0x1A1AF0u) {
        ctx->pc = 0x1A1AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AECu;
        // 0x1a1af0: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1AF4u;
        goto label_1a1af4;
    }
    ctx->pc = 0x1A1AECu;
    {
        const bool branch_taken_0x1a1aec = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A1AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AECu;
        // 0x1a1af0: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1aec) {
            ctx->pc = 0x1A1B34u;
            goto label_1a1b34;
        }
    }
    ctx->pc = 0x1A1AF4u;
label_1a1af4:
    // 0x1a1af4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1a1af8:
    if (ctx->pc == 0x1A1AF8u) {
        ctx->pc = 0x1A1AFCu;
        goto label_1a1afc;
    }
    ctx->pc = 0x1A1AF4u;
    {
        const bool branch_taken_0x1a1af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1af4) {
            ctx->pc = 0x1A1B14u;
            goto label_1a1b14;
        }
    }
    ctx->pc = 0x1A1AFCu;
label_1a1afc:
    // 0x1a1afc: 0x1114000b  beq         $t0, $s4, . + 4 + (0xB << 2)
label_1a1b00:
    if (ctx->pc == 0x1A1B00u) {
        ctx->pc = 0x1A1B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AFCu;
        // 0x1a1b00: 0xd03824  and         $a3, $a2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1B04u;
        goto label_1a1b04;
    }
    ctx->pc = 0x1A1AFCu;
    {
        const bool branch_taken_0x1a1afc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 20));
        ctx->pc = 0x1A1B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AFCu;
        // 0x1a1b00: 0xd03824  and         $a3, $a2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1afc) {
            ctx->pc = 0x1A1B2Cu;
            goto label_1a1b2c;
        }
    }
    ctx->pc = 0x1A1B04u;
label_1a1b04:
    // 0x1a1b04: 0x1113000b  beq         $t0, $s3, . + 4 + (0xB << 2)
label_1a1b08:
    if (ctx->pc == 0x1A1B08u) {
        ctx->pc = 0x1A1B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B04u;
        // 0x1a1b08: 0xcb3824  and         $a3, $a2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1B0Cu;
        goto label_1a1b0c;
    }
    ctx->pc = 0x1A1B04u;
    {
        const bool branch_taken_0x1a1b04 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 19));
        ctx->pc = 0x1A1B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B04u;
        // 0x1a1b08: 0xcb3824  and         $a3, $a2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b04) {
            ctx->pc = 0x1A1B34u;
            goto label_1a1b34;
        }
    }
    ctx->pc = 0x1A1B0Cu;
label_1a1b0c:
    // 0x1a1b0c: 0x1000000b  b           . + 4 + (0xB << 2)
label_1a1b10:
    if (ctx->pc == 0x1A1B10u) {
        ctx->pc = 0x1A1B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B0Cu;
        // 0x1a1b10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1B14u;
        goto label_1a1b14;
    }
    ctx->pc = 0x1A1B0Cu;
    {
        const bool branch_taken_0x1a1b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B0Cu;
        // 0x1a1b10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b0c) {
            ctx->pc = 0x1A1B3Cu;
            goto label_1a1b3c;
        }
    }
    ctx->pc = 0x1A1B14u;
label_1a1b14:
    // 0x1a1b14: 0x11120008  beq         $t0, $s2, . + 4 + (0x8 << 2)
label_1a1b18:
    if (ctx->pc == 0x1A1B18u) {
        ctx->pc = 0x1A1B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B14u;
        // 0x1a1b18: 0xd93824  and         $a3, $a2, $t9 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1B1Cu;
        goto label_1a1b1c;
    }
    ctx->pc = 0x1A1B14u;
    {
        const bool branch_taken_0x1a1b14 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 18));
        ctx->pc = 0x1A1B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B14u;
        // 0x1a1b18: 0xd93824  and         $a3, $a2, $t9 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b14) {
            ctx->pc = 0x1A1B38u;
            goto label_1a1b38;
        }
    }
    ctx->pc = 0x1A1B1Cu;
label_1a1b1c:
    // 0x1a1b1c: 0x11110005  beq         $t0, $s1, . + 4 + (0x5 << 2)
label_1a1b20:
    if (ctx->pc == 0x1A1B20u) {
        ctx->pc = 0x1A1B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B1Cu;
        // 0x1a1b20: 0xcb3824  and         $a3, $a2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1B24u;
        goto label_1a1b24;
    }
    ctx->pc = 0x1A1B1Cu;
    {
        const bool branch_taken_0x1a1b1c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 17));
        ctx->pc = 0x1A1B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B1Cu;
        // 0x1a1b20: 0xcb3824  and         $a3, $a2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b1c) {
            ctx->pc = 0x1A1B34u;
            goto label_1a1b34;
        }
    }
    ctx->pc = 0x1A1B24u;
label_1a1b24:
    // 0x1a1b24: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a1b28:
    if (ctx->pc == 0x1A1B28u) {
        ctx->pc = 0x1A1B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B24u;
        // 0x1a1b28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1B2Cu;
        goto label_1a1b2c;
    }
    ctx->pc = 0x1A1B24u;
    {
        const bool branch_taken_0x1a1b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B24u;
        // 0x1a1b28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b24) {
            ctx->pc = 0x1A1B3Cu;
            goto label_1a1b3c;
        }
    }
    ctx->pc = 0x1A1B2Cu;
label_1a1b2c:
    // 0x1a1b2c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a1b30:
    if (ctx->pc == 0x1A1B30u) {
        ctx->pc = 0x1A1B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B2Cu;
        // 0x1a1b30: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1B34u;
        goto label_1a1b34;
    }
    ctx->pc = 0x1A1B2Cu;
    {
        const bool branch_taken_0x1a1b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B2Cu;
        // 0x1a1b30: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b2c) {
            ctx->pc = 0x1A1B3Cu;
            goto label_1a1b3c;
        }
    }
    ctx->pc = 0x1A1B34u;
label_1a1b34:
    // 0x1a1b34: 0xd93824  and         $a3, $a2, $t9
    ctx->pc = 0x1a1b34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 25));
label_1a1b38:
    // 0x1a1b38: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1a1b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1a1b3c:
    // 0x1a1b3c: 0x54e80019  bnel        $a3, $t0, . + 4 + (0x19 << 2)
label_1a1b40:
    if (ctx->pc == 0x1A1B40u) {
        ctx->pc = 0x1A1B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B3Cu;
        // 0x1a1b40: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1B44u;
        goto label_1a1b44;
    }
    ctx->pc = 0x1A1B3Cu;
    {
        const bool branch_taken_0x1a1b3c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x1a1b3c) {
            ctx->pc = 0x1A1B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1B3Cu;
            // 0x1a1b40: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1BA4u;
            goto label_1a1ba4;
        }
    }
    ctx->pc = 0x1A1B44u;
label_1a1b44:
    // 0x1a1b44: 0x10000011  b           . + 4 + (0x11 << 2)
label_1a1b48:
    if (ctx->pc == 0x1A1B48u) {
        ctx->pc = 0x1A1B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B44u;
        // 0x1a1b48: 0x1c21024  and         $v0, $t6, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1B4Cu;
        goto label_1a1b4c;
    }
    ctx->pc = 0x1A1B44u;
    {
        const bool branch_taken_0x1a1b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B44u;
        // 0x1a1b48: 0x1c21024  and         $v0, $t6, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b44) {
            ctx->pc = 0x1A1B8Cu;
            goto label_1a1b8c;
        }
    }
    ctx->pc = 0x1A1B4Cu;
label_1a1b4c:
    // 0x1a1b4c: 0x3402e000  ori         $v0, $zero, 0xE000
    ctx->pc = 0x1a1b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
label_1a1b50:
    // 0x1a1b50: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a1b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_1a1b54:
    // 0x1a1b54: 0x15020004  bne         $t0, $v0, . + 4 + (0x4 << 2)
label_1a1b58:
    if (ctx->pc == 0x1A1B58u) {
        ctx->pc = 0x1A1B5Cu;
        goto label_1a1b5c;
    }
    ctx->pc = 0x1A1B54u;
    {
        const bool branch_taken_0x1a1b54 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a1b54) {
            ctx->pc = 0x1A1B68u;
            goto label_1a1b68;
        }
    }
    ctx->pc = 0x1A1B5Cu;
label_1a1b5c:
    // 0x1a1b5c: 0xd83824  and         $a3, $a2, $t8
    ctx->pc = 0x1a1b5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 24));
label_1a1b60:
    // 0x1a1b60: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a1b64:
    if (ctx->pc == 0x1A1B64u) {
        ctx->pc = 0x1A1B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B60u;
        // 0x1a1b64: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1B68u;
        goto label_1a1b68;
    }
    ctx->pc = 0x1A1B60u;
    {
        const bool branch_taken_0x1a1b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B60u;
        // 0x1a1b64: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b60) {
            ctx->pc = 0x1A1B80u;
            goto label_1a1b80;
        }
    }
    ctx->pc = 0x1A1B68u;
label_1a1b68:
    // 0x1a1b68: 0x150f0004  bne         $t0, $t7, . + 4 + (0x4 << 2)
label_1a1b6c:
    if (ctx->pc == 0x1A1B6Cu) {
        ctx->pc = 0x1A1B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B68u;
        // 0x1a1b6c: 0xc73824  and         $a3, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1B70u;
        goto label_1a1b70;
    }
    ctx->pc = 0x1A1B68u;
    {
        const bool branch_taken_0x1a1b68 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 15));
        ctx->pc = 0x1A1B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B68u;
        // 0x1a1b6c: 0xc73824  and         $a3, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b68) {
            ctx->pc = 0x1A1B7Cu;
            goto label_1a1b7c;
        }
    }
    ctx->pc = 0x1A1B70u;
label_1a1b70:
    // 0x1a1b70: 0xc23824  and         $a3, $a2, $v0
    ctx->pc = 0x1a1b70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_1a1b74:
    // 0x1a1b74: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a1b78:
    if (ctx->pc == 0x1A1B78u) {
        ctx->pc = 0x1A1B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B74u;
        // 0x1a1b78: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1B7Cu;
        goto label_1a1b7c;
    }
    ctx->pc = 0x1A1B74u;
    {
        const bool branch_taken_0x1a1b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B74u;
        // 0x1a1b78: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b74) {
            ctx->pc = 0x1A1B80u;
            goto label_1a1b80;
        }
    }
    ctx->pc = 0x1A1B7Cu;
label_1a1b7c:
    // 0x1a1b7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a1b7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1b80:
    // 0x1a1b80: 0x54e80008  bnel        $a3, $t0, . + 4 + (0x8 << 2)
label_1a1b84:
    if (ctx->pc == 0x1A1B84u) {
        ctx->pc = 0x1A1B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B80u;
        // 0x1a1b84: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1B88u;
        goto label_1a1b88;
    }
    ctx->pc = 0x1A1B80u;
    {
        const bool branch_taken_0x1a1b80 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x1a1b80) {
            ctx->pc = 0x1A1B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1B80u;
            // 0x1a1b84: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1BA4u;
            goto label_1a1ba4;
        }
    }
    ctx->pc = 0x1A1B88u;
label_1a1b88:
    // 0x1a1b88: 0x1a21024  and         $v0, $t5, $v0
    ctx->pc = 0x1a1b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & GPR_U64(ctx, 2));
label_1a1b8c:
    // 0x1a1b8c: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x1a1b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_1a1b90:
    // 0x1a1b90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a1b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1a1b94:
    // 0x1a1b94: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a1b94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1a1b98:
    // 0x1a1b98: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1a1b98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1b9c:
    // 0x1a1b9c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1a1b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1a1ba0:
    // 0x1a1ba0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1a1ba0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1a1ba4:
    // 0x1a1ba4: 0x2d22000a  sltiu       $v0, $t1, 0xA
    ctx->pc = 0x1a1ba4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    ctx->pc = 0x1a1ba8u;
    return;
}
