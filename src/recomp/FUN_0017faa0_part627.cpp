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

// Function: FUN_0017faa0
// Address: 0x17faa0 - 0x2bfb1c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017faa0_part627(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x2b1978u: goto label_2b1978;
        case 0x2b197cu: goto label_2b197c;
        case 0x2b1980u: goto label_2b1980;
        case 0x2b1984u: goto label_2b1984;
        case 0x2b1988u: goto label_2b1988;
        case 0x2b198cu: goto label_2b198c;
        case 0x2b1990u: goto label_2b1990;
        case 0x2b1994u: goto label_2b1994;
        case 0x2b1998u: goto label_2b1998;
        case 0x2b199cu: goto label_2b199c;
        case 0x2b19a0u: goto label_2b19a0;
        case 0x2b19a4u: goto label_2b19a4;
        case 0x2b19a8u: goto label_2b19a8;
        case 0x2b19acu: goto label_2b19ac;
        case 0x2b19b0u: goto label_2b19b0;
        case 0x2b19b4u: goto label_2b19b4;
        case 0x2b19b8u: goto label_2b19b8;
        case 0x2b19bcu: goto label_2b19bc;
        case 0x2b19c0u: goto label_2b19c0;
        case 0x2b19c4u: goto label_2b19c4;
        case 0x2b19c8u: goto label_2b19c8;
        case 0x2b19ccu: goto label_2b19cc;
        case 0x2b19d0u: goto label_2b19d0;
        case 0x2b19d4u: goto label_2b19d4;
        case 0x2b19d8u: goto label_2b19d8;
        case 0x2b19dcu: goto label_2b19dc;
        case 0x2b19e0u: goto label_2b19e0;
        case 0x2b19e4u: goto label_2b19e4;
        case 0x2b19e8u: goto label_2b19e8;
        case 0x2b19ecu: goto label_2b19ec;
        case 0x2b19f0u: goto label_2b19f0;
        case 0x2b19f4u: goto label_2b19f4;
        case 0x2b19f8u: goto label_2b19f8;
        case 0x2b19fcu: goto label_2b19fc;
        case 0x2b1a00u: goto label_2b1a00;
        case 0x2b1a04u: goto label_2b1a04;
        case 0x2b1a08u: goto label_2b1a08;
        case 0x2b1a0cu: goto label_2b1a0c;
        case 0x2b1a10u: goto label_2b1a10;
        case 0x2b1a14u: goto label_2b1a14;
        case 0x2b1a18u: goto label_2b1a18;
        case 0x2b1a1cu: goto label_2b1a1c;
        case 0x2b1a20u: goto label_2b1a20;
        case 0x2b1a24u: goto label_2b1a24;
        case 0x2b1a28u: goto label_2b1a28;
        case 0x2b1a2cu: goto label_2b1a2c;
        case 0x2b1a30u: goto label_2b1a30;
        case 0x2b1a34u: goto label_2b1a34;
        case 0x2b1a38u: goto label_2b1a38;
        case 0x2b1a3cu: goto label_2b1a3c;
        case 0x2b1a40u: goto label_2b1a40;
        case 0x2b1a44u: goto label_2b1a44;
        case 0x2b1a48u: goto label_2b1a48;
        case 0x2b1a4cu: goto label_2b1a4c;
        case 0x2b1a50u: goto label_2b1a50;
        case 0x2b1a54u: goto label_2b1a54;
        case 0x2b1a58u: goto label_2b1a58;
        case 0x2b1a5cu: goto label_2b1a5c;
        case 0x2b1a60u: goto label_2b1a60;
        case 0x2b1a64u: goto label_2b1a64;
        case 0x2b1a68u: goto label_2b1a68;
        case 0x2b1a6cu: goto label_2b1a6c;
        case 0x2b1a70u: goto label_2b1a70;
        case 0x2b1a74u: goto label_2b1a74;
        case 0x2b1a78u: goto label_2b1a78;
        case 0x2b1a7cu: goto label_2b1a7c;
        case 0x2b1a80u: goto label_2b1a80;
        case 0x2b1a84u: goto label_2b1a84;
        case 0x2b1a88u: goto label_2b1a88;
        case 0x2b1a8cu: goto label_2b1a8c;
        case 0x2b1a90u: goto label_2b1a90;
        case 0x2b1a94u: goto label_2b1a94;
        case 0x2b1a98u: goto label_2b1a98;
        case 0x2b1a9cu: goto label_2b1a9c;
        case 0x2b1aa0u: goto label_2b1aa0;
        case 0x2b1aa4u: goto label_2b1aa4;
        case 0x2b1aa8u: goto label_2b1aa8;
        case 0x2b1aacu: goto label_2b1aac;
        case 0x2b1ab0u: goto label_2b1ab0;
        case 0x2b1ab4u: goto label_2b1ab4;
        case 0x2b1ab8u: goto label_2b1ab8;
        case 0x2b1abcu: goto label_2b1abc;
        case 0x2b1ac0u: goto label_2b1ac0;
        case 0x2b1ac4u: goto label_2b1ac4;
        case 0x2b1ac8u: goto label_2b1ac8;
        case 0x2b1accu: goto label_2b1acc;
        case 0x2b1ad0u: goto label_2b1ad0;
        case 0x2b1ad4u: goto label_2b1ad4;
        case 0x2b1ad8u: goto label_2b1ad8;
        case 0x2b1adcu: goto label_2b1adc;
        case 0x2b1ae0u: goto label_2b1ae0;
        case 0x2b1ae4u: goto label_2b1ae4;
        case 0x2b1ae8u: goto label_2b1ae8;
        case 0x2b1aecu: goto label_2b1aec;
        case 0x2b1af0u: goto label_2b1af0;
        case 0x2b1af4u: goto label_2b1af4;
        case 0x2b1af8u: goto label_2b1af8;
        case 0x2b1afcu: goto label_2b1afc;
        case 0x2b1b00u: goto label_2b1b00;
        case 0x2b1b04u: goto label_2b1b04;
        case 0x2b1b08u: goto label_2b1b08;
        case 0x2b1b0cu: goto label_2b1b0c;
        case 0x2b1b10u: goto label_2b1b10;
        case 0x2b1b14u: goto label_2b1b14;
        case 0x2b1b18u: goto label_2b1b18;
        case 0x2b1b1cu: goto label_2b1b1c;
        case 0x2b1b20u: goto label_2b1b20;
        case 0x2b1b24u: goto label_2b1b24;
        case 0x2b1b28u: goto label_2b1b28;
        case 0x2b1b2cu: goto label_2b1b2c;
        case 0x2b1b30u: goto label_2b1b30;
        case 0x2b1b34u: goto label_2b1b34;
        case 0x2b1b38u: goto label_2b1b38;
        case 0x2b1b3cu: goto label_2b1b3c;
        case 0x2b1b40u: goto label_2b1b40;
        case 0x2b1b44u: goto label_2b1b44;
        case 0x2b1b48u: goto label_2b1b48;
        case 0x2b1b4cu: goto label_2b1b4c;
        case 0x2b1b50u: goto label_2b1b50;
        case 0x2b1b54u: goto label_2b1b54;
        case 0x2b1b58u: goto label_2b1b58;
        case 0x2b1b5cu: goto label_2b1b5c;
        case 0x2b1b60u: goto label_2b1b60;
        case 0x2b1b64u: goto label_2b1b64;
        case 0x2b1b68u: goto label_2b1b68;
        case 0x2b1b6cu: goto label_2b1b6c;
        case 0x2b1b70u: goto label_2b1b70;
        case 0x2b1b74u: goto label_2b1b74;
        case 0x2b1b78u: goto label_2b1b78;
        case 0x2b1b7cu: goto label_2b1b7c;
        case 0x2b1b80u: goto label_2b1b80;
        case 0x2b1b84u: goto label_2b1b84;
        case 0x2b1b88u: goto label_2b1b88;
        case 0x2b1b8cu: goto label_2b1b8c;
        case 0x2b1b90u: goto label_2b1b90;
        case 0x2b1b94u: goto label_2b1b94;
        case 0x2b1b98u: goto label_2b1b98;
        case 0x2b1b9cu: goto label_2b1b9c;
        case 0x2b1ba0u: goto label_2b1ba0;
        case 0x2b1ba4u: goto label_2b1ba4;
        case 0x2b1ba8u: goto label_2b1ba8;
        case 0x2b1bacu: goto label_2b1bac;
        case 0x2b1bb0u: goto label_2b1bb0;
        case 0x2b1bb4u: goto label_2b1bb4;
        case 0x2b1bb8u: goto label_2b1bb8;
        case 0x2b1bbcu: goto label_2b1bbc;
        case 0x2b1bc0u: goto label_2b1bc0;
        case 0x2b1bc4u: goto label_2b1bc4;
        case 0x2b1bc8u: goto label_2b1bc8;
        case 0x2b1bccu: goto label_2b1bcc;
        case 0x2b1bd0u: goto label_2b1bd0;
        case 0x2b1bd4u: goto label_2b1bd4;
        case 0x2b1bd8u: goto label_2b1bd8;
        case 0x2b1bdcu: goto label_2b1bdc;
        case 0x2b1be0u: goto label_2b1be0;
        case 0x2b1be4u: goto label_2b1be4;
        case 0x2b1be8u: goto label_2b1be8;
        case 0x2b1becu: goto label_2b1bec;
        case 0x2b1bf0u: goto label_2b1bf0;
        case 0x2b1bf4u: goto label_2b1bf4;
        case 0x2b1bf8u: goto label_2b1bf8;
        case 0x2b1bfcu: goto label_2b1bfc;
        case 0x2b1c00u: goto label_2b1c00;
        case 0x2b1c04u: goto label_2b1c04;
        case 0x2b1c08u: goto label_2b1c08;
        case 0x2b1c0cu: goto label_2b1c0c;
        case 0x2b1c10u: goto label_2b1c10;
        case 0x2b1c14u: goto label_2b1c14;
        case 0x2b1c18u: goto label_2b1c18;
        case 0x2b1c1cu: goto label_2b1c1c;
        case 0x2b1c20u: goto label_2b1c20;
        case 0x2b1c24u: goto label_2b1c24;
        case 0x2b1c28u: goto label_2b1c28;
        case 0x2b1c2cu: goto label_2b1c2c;
        case 0x2b1c30u: goto label_2b1c30;
        case 0x2b1c34u: goto label_2b1c34;
        case 0x2b1c38u: goto label_2b1c38;
        case 0x2b1c3cu: goto label_2b1c3c;
        case 0x2b1c40u: goto label_2b1c40;
        case 0x2b1c44u: goto label_2b1c44;
        case 0x2b1c48u: goto label_2b1c48;
        case 0x2b1c4cu: goto label_2b1c4c;
        case 0x2b1c50u: goto label_2b1c50;
        case 0x2b1c54u: goto label_2b1c54;
        case 0x2b1c58u: goto label_2b1c58;
        case 0x2b1c5cu: goto label_2b1c5c;
        case 0x2b1c60u: goto label_2b1c60;
        case 0x2b1c64u: goto label_2b1c64;
        case 0x2b1c68u: goto label_2b1c68;
        case 0x2b1c6cu: goto label_2b1c6c;
        case 0x2b1c70u: goto label_2b1c70;
        case 0x2b1c74u: goto label_2b1c74;
        case 0x2b1c78u: goto label_2b1c78;
        case 0x2b1c7cu: goto label_2b1c7c;
        case 0x2b1c80u: goto label_2b1c80;
        case 0x2b1c84u: goto label_2b1c84;
        case 0x2b1c88u: goto label_2b1c88;
        case 0x2b1c8cu: goto label_2b1c8c;
        case 0x2b1c90u: goto label_2b1c90;
        case 0x2b1c94u: goto label_2b1c94;
        case 0x2b1c98u: goto label_2b1c98;
        case 0x2b1c9cu: goto label_2b1c9c;
        case 0x2b1ca0u: goto label_2b1ca0;
        case 0x2b1ca4u: goto label_2b1ca4;
        case 0x2b1ca8u: goto label_2b1ca8;
        case 0x2b1cacu: goto label_2b1cac;
        case 0x2b1cb0u: goto label_2b1cb0;
        case 0x2b1cb4u: goto label_2b1cb4;
        case 0x2b1cb8u: goto label_2b1cb8;
        case 0x2b1cbcu: goto label_2b1cbc;
        case 0x2b1cc0u: goto label_2b1cc0;
        case 0x2b1cc4u: goto label_2b1cc4;
        case 0x2b1cc8u: goto label_2b1cc8;
        case 0x2b1cccu: goto label_2b1ccc;
        case 0x2b1cd0u: goto label_2b1cd0;
        case 0x2b1cd4u: goto label_2b1cd4;
        case 0x2b1cd8u: goto label_2b1cd8;
        case 0x2b1cdcu: goto label_2b1cdc;
        case 0x2b1ce0u: goto label_2b1ce0;
        case 0x2b1ce4u: goto label_2b1ce4;
        case 0x2b1ce8u: goto label_2b1ce8;
        case 0x2b1cecu: goto label_2b1cec;
        case 0x2b1cf0u: goto label_2b1cf0;
        case 0x2b1cf4u: goto label_2b1cf4;
        case 0x2b1cf8u: goto label_2b1cf8;
        case 0x2b1cfcu: goto label_2b1cfc;
        case 0x2b1d00u: goto label_2b1d00;
        case 0x2b1d04u: goto label_2b1d04;
        case 0x2b1d08u: goto label_2b1d08;
        case 0x2b1d0cu: goto label_2b1d0c;
        default: return;
    }

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
    { ctx->pc = 0x24180c; return; }
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
    { ctx->pc = 0x24180c; return; }
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
    { ctx->pc = 0x24180c; return; }
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
    { ctx->pc = 0x24180c; return; }
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
label_2b1978:
    // 0x2b1978: 0xa50087  .word       0x00A50087                   # srav        $zero, $a1, $a1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1978u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 5) & 0x1F));
label_2b197c:
    // 0x2b197c: 0x280e3430  slti        $t6, $zero, 0x3430
    ctx->pc = 0x2b197cu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)13360) ? 1 : 0);
label_2b1980:
    // 0x2b1980: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1980u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1984:
    // 0x2b1984: 0x0  nop
    ctx->pc = 0x2b1984u;
    // NOP
label_2b1988:
    // 0x2b1988: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1988u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b198c:
    // 0x2b198c: 0x0  nop
    ctx->pc = 0x2b198cu;
    // NOP
label_2b1990:
    // 0x2b1990: 0x8700a5  .word       0x008700A5                   # or          $zero, $a0, $a3 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1990u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
label_2b1994:
    // 0x2b1994: 0x28102d37  slti        $s0, $zero, 0x2D37
    ctx->pc = 0x2b1994u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)11575) ? 1 : 0);
label_2b1998:
    // 0x2b1998: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1998u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b199c:
    // 0x2b199c: 0x0  nop
    ctx->pc = 0x2b199cu;
    // NOP
label_2b19a0:
    // 0x2b19a0: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b19a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b19a4:
    // 0x2b19a4: 0x0  nop
    ctx->pc = 0x2b19a4u;
    // NOP
label_2b19a8:
    // 0x2b19a8: 0xaa0082  .word       0x00AA0082                   # srl         $zero, $t2, 2 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b19a8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 10), 2));
label_2b19ac:
    // 0x2b19ac: 0x2812362e  slti        $s2, $zero, 0x362E
    ctx->pc = 0x2b19acu;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)13870) ? 1 : 0);
label_2b19b0:
    // 0x2b19b0: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b19b0u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b19b4:
    // 0x2b19b4: 0x0  nop
    ctx->pc = 0x2b19b4u;
    // NOP
label_2b19b8:
    // 0x2b19b8: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b19b8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b19bc:
    // 0x2b19bc: 0x0  nop
    ctx->pc = 0x2b19bcu;
    // NOP
label_2b19c0:
    // 0x2b19c0: 0xa50087  .word       0x00A50087                   # srav        $zero, $a1, $a1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b19c0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 5) & 0x1F));
label_2b19c4:
    // 0x2b19c4: 0x2814372d  slti        $s4, $zero, 0x372D
    ctx->pc = 0x2b19c4u;
    SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)14125) ? 1 : 0);
label_2b19c8:
    // 0x2b19c8: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b19c8u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b19cc:
    // 0x2b19cc: 0x0  nop
    ctx->pc = 0x2b19ccu;
    // NOP
label_2b19d0:
    // 0x2b19d0: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b19d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b19d4:
    // 0x2b19d4: 0x0  nop
    ctx->pc = 0x2b19d4u;
    // NOP
label_2b19d8:
    // 0x2b19d8: 0xa0008c  .word       0x00A0008C                   # syscall     2 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b19d8u;
    ctx->pc = 0x2B19DCu;
runtime->handleSyscall(rdram, ctx, 0x28002u);
label_2b19dc:
    // 0x2b19dc: 0x28023430  slti        $v0, $zero, 0x3430
    ctx->pc = 0x2b19dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)13360) ? 1 : 0);
label_2b19e0:
    // 0x2b19e0: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b19e0u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b19e4:
    // 0x2b19e4: 0x0  nop
    ctx->pc = 0x2b19e4u;
    // NOP
label_2b19e8:
    // 0x2b19e8: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b19e8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b19ec:
    // 0x2b19ec: 0x0  nop
    ctx->pc = 0x2b19ecu;
    // NOP
label_2b19f0:
    // 0x2b19f0: 0x8700b9  .word       0x008700B9                   # INVALID     $a0, $a3, 0xB9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b19f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2B19F0 raw=0x008700B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b19f4:
    // 0x2b19f4: 0x28082e3c  slti        $t0, $zero, 0x2E3C
    ctx->pc = 0x2b19f4u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)11836) ? 1 : 0);
label_2b19f8:
    // 0x2b19f8: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b19f8u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b19fc:
    // 0x2b19fc: 0x0  nop
    ctx->pc = 0x2b19fcu;
    // NOP
label_2b1a00:
    // 0x2b1a00: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1a00u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1a04:
    // 0x2b1a04: 0x0  nop
    ctx->pc = 0x2b1a04u;
    // NOP
label_2b1a08:
    // 0x2b1a08: 0xa50087  .word       0x00A50087                   # srav        $zero, $a1, $a1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1a08u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 5) & 0x1F));
label_2b1a0c:
    // 0x2b1a0c: 0x2816362e  slti        $s6, $zero, 0x362E
    ctx->pc = 0x2b1a0cu;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)13870) ? 1 : 0);
label_2b1a10:
    // 0x2b1a10: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1a10u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1a14:
    // 0x2b1a14: 0x0  nop
    ctx->pc = 0x2b1a14u;
    // NOP
label_2b1a18:
    // 0x2b1a18: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1a18u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1a1c:
    // 0x2b1a1c: 0x0  nop
    ctx->pc = 0x2b1a1cu;
    // NOP
label_2b1a20:
    // 0x2b1a20: 0x9b0091  .word       0x009B0091                   # mthi        $a0 # 001B0080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1a20u;
    ctx->hi = GPR_U64(ctx, 4);
label_2b1a24:
    // 0x2b1a24: 0x28023232  slti        $v0, $zero, 0x3232
    ctx->pc = 0x2b1a24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)12850) ? 1 : 0);
label_2b1a28:
    // 0x2b1a28: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1a28u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1a2c:
    // 0x2b1a2c: 0x0  nop
    ctx->pc = 0x2b1a2cu;
    // NOP
label_2b1a30:
    // 0x2b1a30: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1a30u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1a34:
    // 0x2b1a34: 0x0  nop
    ctx->pc = 0x2b1a34u;
    // NOP
label_2b1a38:
    // 0x2b1a38: 0x960096  .word       0x00960096                   # dsrlv       $zero, $s6, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1a38u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 22) >> (GPR_U32(ctx, 4) & 0x3F));
label_2b1a3c:
    // 0x2b1a3c: 0x28023034  slti        $v0, $zero, 0x3034
    ctx->pc = 0x2b1a3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)12340) ? 1 : 0);
label_2b1a40:
    // 0x2b1a40: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1a40u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1a44:
    // 0x2b1a44: 0x0  nop
    ctx->pc = 0x2b1a44u;
    // NOP
label_2b1a48:
    // 0x2b1a48: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1a48u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1a4c:
    // 0x2b1a4c: 0x0  nop
    ctx->pc = 0x2b1a4cu;
    // NOP
label_2b1a50:
    // 0x2b1a50: 0x9b0091  .word       0x009B0091                   # mthi        $a0 # 001B0080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1a50u;
    ctx->hi = GPR_U64(ctx, 4);
label_2b1a54:
    // 0x2b1a54: 0x28023232  slti        $v0, $zero, 0x3232
    ctx->pc = 0x2b1a54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)12850) ? 1 : 0);
label_2b1a58:
    // 0x2b1a58: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1a58u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1a5c:
    // 0x2b1a5c: 0x0  nop
    ctx->pc = 0x2b1a5cu;
    // NOP
label_2b1a60:
    // 0x2b1a60: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1a60u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1a64:
    // 0x2b1a64: 0x0  nop
    ctx->pc = 0x2b1a64u;
    // NOP
label_2b1a68:
    // 0x2b1a68: 0x8200aa  .word       0x008200AA                   # slt         $zero, $a0, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1a68u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2b1a6c:
    // 0x2b1a6c: 0x28022c38  slti        $v0, $zero, 0x2C38
    ctx->pc = 0x2b1a6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)11320) ? 1 : 0);
label_2b1a70:
    // 0x2b1a70: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1a70u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1a74:
    // 0x2b1a74: 0x0  nop
    ctx->pc = 0x2b1a74u;
    // NOP
label_2b1a78:
    // 0x2b1a78: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1a78u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1a7c:
    // 0x2b1a7c: 0x0  nop
    ctx->pc = 0x2b1a7cu;
    // NOP
label_2b1a80:
    // 0x2b1a80: 0x9b0091  .word       0x009B0091                   # mthi        $a0 # 001B0080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1a80u;
    ctx->hi = GPR_U64(ctx, 4);
label_2b1a84:
    // 0x2b1a84: 0x28023331  slti        $v0, $zero, 0x3331
    ctx->pc = 0x2b1a84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)13105) ? 1 : 0);
label_2b1a88:
    // 0x2b1a88: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1a88u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1a8c:
    // 0x2b1a8c: 0x0  nop
    ctx->pc = 0x2b1a8cu;
    // NOP
label_2b1a90:
    // 0x2b1a90: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1a90u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1a94:
    // 0x2b1a94: 0x0  nop
    ctx->pc = 0x2b1a94u;
    // NOP
label_2b1a98:
    // 0x2b1a98: 0x8c00a0  .word       0x008C00A0                   # add         $zero, $a0, $t4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1a98u;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2b1a9c:
    // 0x2b1a9c: 0x28062d37  slti        $a2, $zero, 0x2D37
    ctx->pc = 0x2b1a9cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)11575) ? 1 : 0);
label_2b1aa0:
    // 0x2b1aa0: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1aa0u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1aa4:
    // 0x2b1aa4: 0x0  nop
    ctx->pc = 0x2b1aa4u;
    // NOP
label_2b1aa8:
    // 0x2b1aa8: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1aa8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1aac:
    // 0x2b1aac: 0x0  nop
    ctx->pc = 0x2b1aacu;
    // NOP
label_2b1ab0:
    // 0x2b1ab0: 0x8c00a0  .word       0x008C00A0                   # add         $zero, $a0, $t4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1ab0u;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2b1ab4:
    // 0x2b1ab4: 0x28002c38  slti        $zero, $zero, 0x2C38
    ctx->pc = 0x2b1ab4u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)11320) ? 1 : 0);
label_2b1ab8:
    // 0x2b1ab8: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1ab8u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1abc:
    // 0x2b1abc: 0x0  nop
    ctx->pc = 0x2b1abcu;
    // NOP
label_2b1ac0:
    // 0x2b1ac0: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1ac0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1ac4:
    // 0x2b1ac4: 0x0  nop
    ctx->pc = 0x2b1ac4u;
    // NOP
label_2b1ac8:
    // 0x2b1ac8: 0x91009b  .word       0x0091009B                   # divu        $zero, $a0, $s1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1ac8u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_2b1acc:
    // 0x2b1acc: 0x28002e36  slti        $zero, $zero, 0x2E36
    ctx->pc = 0x2b1accu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)11830) ? 1 : 0);
label_2b1ad0:
    // 0x2b1ad0: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1ad0u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1ad4:
    // 0x2b1ad4: 0x0  nop
    ctx->pc = 0x2b1ad4u;
    // NOP
label_2b1ad8:
    // 0x2b1ad8: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1ad8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1adc:
    // 0x2b1adc: 0x0  nop
    ctx->pc = 0x2b1adcu;
    // NOP
label_2b1ae0:
    // 0x2b1ae0: 0x960096  .word       0x00960096                   # dsrlv       $zero, $s6, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1ae0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 22) >> (GPR_U32(ctx, 4) & 0x3F));
label_2b1ae4:
    // 0x2b1ae4: 0x28082f35  slti        $t0, $zero, 0x2F35
    ctx->pc = 0x2b1ae4u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)12085) ? 1 : 0);
label_2b1ae8:
    // 0x2b1ae8: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1ae8u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1aec:
    // 0x2b1aec: 0x0  nop
    ctx->pc = 0x2b1aecu;
    // NOP
label_2b1af0:
    // 0x2b1af0: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1af0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1af4:
    // 0x2b1af4: 0x0  nop
    ctx->pc = 0x2b1af4u;
    // NOP
label_2b1af8:
    // 0x2b1af8: 0xa50087  .word       0x00A50087                   # srav        $zero, $a1, $a1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1af8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 5) & 0x1F));
label_2b1afc:
    // 0x2b1afc: 0x2814372d  slti        $s4, $zero, 0x372D
    ctx->pc = 0x2b1afcu;
    SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)14125) ? 1 : 0);
label_2b1b00:
    // 0x2b1b00: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1b00u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1b04:
    // 0x2b1b04: 0x0  nop
    ctx->pc = 0x2b1b04u;
    // NOP
label_2b1b08:
    // 0x2b1b08: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1b08u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1b0c:
    // 0x2b1b0c: 0x0  nop
    ctx->pc = 0x2b1b0cu;
    // NOP
label_2b1b10:
    // 0x2b1b10: 0x960096  .word       0x00960096                   # dsrlv       $zero, $s6, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1b10u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 22) >> (GPR_U32(ctx, 4) & 0x3F));
label_2b1b14:
    // 0x2b1b14: 0x28083034  slti        $t0, $zero, 0x3034
    ctx->pc = 0x2b1b14u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)12340) ? 1 : 0);
label_2b1b18:
    // 0x2b1b18: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1b18u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1b1c:
    // 0x2b1b1c: 0x0  nop
    ctx->pc = 0x2b1b1cu;
    // NOP
label_2b1b20:
    // 0x2b1b20: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1b20u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1b24:
    // 0x2b1b24: 0x0  nop
    ctx->pc = 0x2b1b24u;
    // NOP
label_2b1b28:
    // 0x2b1b28: 0x91009b  .word       0x0091009B                   # divu        $zero, $a0, $s1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1b28u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_2b1b2c:
    // 0x2b1b2c: 0x28002e36  slti        $zero, $zero, 0x2E36
    ctx->pc = 0x2b1b2cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)11830) ? 1 : 0);
label_2b1b30:
    // 0x2b1b30: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1b30u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1b34:
    // 0x2b1b34: 0x0  nop
    ctx->pc = 0x2b1b34u;
    // NOP
label_2b1b38:
    // 0x2b1b38: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1b38u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1b3c:
    // 0x2b1b3c: 0x0  nop
    ctx->pc = 0x2b1b3cu;
    // NOP
label_2b1b40:
    // 0x2b1b40: 0xa0008c  .word       0x00A0008C                   # syscall     2 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1b40u;
    ctx->pc = 0x2B1B44u;
runtime->handleSyscall(rdram, ctx, 0x28002u);
label_2b1b44:
    // 0x2b1b44: 0x28063430  slti        $a2, $zero, 0x3430
    ctx->pc = 0x2b1b44u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)13360) ? 1 : 0);
label_2b1b48:
    // 0x2b1b48: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1b48u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1b4c:
    // 0x2b1b4c: 0x0  nop
    ctx->pc = 0x2b1b4cu;
    // NOP
label_2b1b50:
    // 0x2b1b50: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1b50u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1b54:
    // 0x2b1b54: 0x0  nop
    ctx->pc = 0x2b1b54u;
    // NOP
label_2b1b58:
    // 0x2b1b58: 0xa0008c  .word       0x00A0008C                   # syscall     2 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1b58u;
    ctx->pc = 0x2B1B5Cu;
runtime->handleSyscall(rdram, ctx, 0x28002u);
label_2b1b5c:
    // 0x2b1b5c: 0x2824352f  slti        $a0, $at, 0x352F
    ctx->pc = 0x2b1b5cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)13615) ? 1 : 0);
label_2b1b60:
    // 0x2b1b60: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1b60u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1b64:
    // 0x2b1b64: 0x0  nop
    ctx->pc = 0x2b1b64u;
    // NOP
label_2b1b68:
    // 0x2b1b68: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1b68u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1b6c:
    // 0x2b1b6c: 0x0  nop
    ctx->pc = 0x2b1b6cu;
    // NOP
label_2b1b70:
    // 0x2b1b70: 0x91009b  .word       0x0091009B                   # divu        $zero, $a0, $s1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1b70u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_2b1b74:
    // 0x2b1b74: 0x28182f35  slti        $t8, $zero, 0x2F35
    ctx->pc = 0x2b1b74u;
    SET_GPR_U64(ctx, 24, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)12085) ? 1 : 0);
label_2b1b78:
    // 0x2b1b78: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1b78u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1b7c:
    // 0x2b1b7c: 0x0  nop
    ctx->pc = 0x2b1b7cu;
    // NOP
label_2b1b80:
    // 0x2b1b80: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1b80u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1b84:
    // 0x2b1b84: 0x0  nop
    ctx->pc = 0x2b1b84u;
    // NOP
label_2b1b88:
    // 0x2b1b88: 0xa50087  .word       0x00A50087                   # srav        $zero, $a1, $a1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1b88u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 5) & 0x1F));
label_2b1b8c:
    // 0x2b1b8c: 0x281a362e  slti        $k0, $zero, 0x362E
    ctx->pc = 0x2b1b8cu;
    SET_GPR_U64(ctx, 26, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)13870) ? 1 : 0);
label_2b1b90:
    // 0x2b1b90: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1b90u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1b94:
    // 0x2b1b94: 0x0  nop
    ctx->pc = 0x2b1b94u;
    // NOP
label_2b1b98:
    // 0x2b1b98: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1b98u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1b9c:
    // 0x2b1b9c: 0x0  nop
    ctx->pc = 0x2b1b9cu;
    // NOP
label_2b1ba0:
    // 0x2b1ba0: 0xa50087  .word       0x00A50087                   # srav        $zero, $a1, $a1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1ba0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 5) & 0x1F));
label_2b1ba4:
    // 0x2b1ba4: 0x281c362e  slti        $gp, $zero, 0x362E
    ctx->pc = 0x2b1ba4u;
    SET_GPR_U64(ctx, 28, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)13870) ? 1 : 0);
label_2b1ba8:
    // 0x2b1ba8: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1ba8u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1bac:
    // 0x2b1bac: 0x0  nop
    ctx->pc = 0x2b1bacu;
    // NOP
label_2b1bb0:
    // 0x2b1bb0: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1bb0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1bb4:
    // 0x2b1bb4: 0x0  nop
    ctx->pc = 0x2b1bb4u;
    // NOP
label_2b1bb8:
    // 0x2b1bb8: 0x8c00a0  .word       0x008C00A0                   # add         $zero, $a0, $t4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1bb8u;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2b1bbc:
    // 0x2b1bbc: 0x281e2d37  slti        $fp, $zero, 0x2D37
    ctx->pc = 0x2b1bbcu;
    SET_GPR_U64(ctx, 30, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)11575) ? 1 : 0);
label_2b1bc0:
    // 0x2b1bc0: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1bc0u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1bc4:
    // 0x2b1bc4: 0x0  nop
    ctx->pc = 0x2b1bc4u;
    // NOP
label_2b1bc8:
    // 0x2b1bc8: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1bc8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1bcc:
    // 0x2b1bcc: 0x0  nop
    ctx->pc = 0x2b1bccu;
    // NOP
label_2b1bd0:
    // 0x2b1bd0: 0x91009b  .word       0x0091009B                   # divu        $zero, $a0, $s1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1bd0u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_2b1bd4:
    // 0x2b1bd4: 0x28202e36  slti        $zero, $at, 0x2E36
    ctx->pc = 0x2b1bd4u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)11830) ? 1 : 0);
label_2b1bd8:
    // 0x2b1bd8: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1bd8u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1bdc:
    // 0x2b1bdc: 0x0  nop
    ctx->pc = 0x2b1bdcu;
    // NOP
label_2b1be0:
    // 0x2b1be0: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1be0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1be4:
    // 0x2b1be4: 0x0  nop
    ctx->pc = 0x2b1be4u;
    // NOP
label_2b1be8:
    // 0x2b1be8: 0x8700a5  .word       0x008700A5                   # or          $zero, $a0, $a3 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1be8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
label_2b1bec:
    // 0x2b1bec: 0x28222d37  slti        $v0, $at, 0x2D37
    ctx->pc = 0x2b1becu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)11575) ? 1 : 0);
label_2b1bf0:
    // 0x2b1bf0: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1bf0u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1bf4:
    // 0x2b1bf4: 0x0  nop
    ctx->pc = 0x2b1bf4u;
    // NOP
label_2b1bf8:
    // 0x2b1bf8: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1bf8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1bfc:
    // 0x2b1bfc: 0x0  nop
    ctx->pc = 0x2b1bfcu;
    // NOP
label_2b1c00:
    // 0x2b1c00: 0xaf007d  .word       0x00AF007D                   # INVALID     $a1, $t7, 0x7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1c00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B1C00 raw=0x00AF007D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b1c04:
    // 0x2b1c04: 0x2824382c  slti        $a0, $at, 0x382C
    ctx->pc = 0x2b1c04u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)14380) ? 1 : 0);
label_2b1c08:
    // 0x2b1c08: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1c08u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1c0c:
    // 0x2b1c0c: 0x0  nop
    ctx->pc = 0x2b1c0cu;
    // NOP
label_2b1c10:
    // 0x2b1c10: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1c10u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1c14:
    // 0x2b1c14: 0x0  nop
    ctx->pc = 0x2b1c14u;
    // NOP
label_2b1c18:
    // 0x2b1c18: 0x7800b4  teq         $v1, $t8, 2
    ctx->pc = 0x2b1c18u;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_2b1c1c:
    // 0x2b1c1c: 0x2826283c  slti        $a2, $at, 0x283C
    ctx->pc = 0x2b1c1cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10300) ? 1 : 0);
label_2b1c20:
    // 0x2b1c20: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1c20u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1c24:
    // 0x2b1c24: 0x0  nop
    ctx->pc = 0x2b1c24u;
    // NOP
label_2b1c28:
    // 0x2b1c28: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1c28u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1c2c:
    // 0x2b1c2c: 0x0  nop
    ctx->pc = 0x2b1c2cu;
    // NOP
label_2b1c30:
    // 0x2b1c30: 0x91009b  .word       0x0091009B                   # divu        $zero, $a0, $s1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1c30u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_2b1c34:
    // 0x2b1c34: 0x28283034  slti        $t0, $at, 0x3034
    ctx->pc = 0x2b1c34u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)12340) ? 1 : 0);
label_2b1c38:
    // 0x2b1c38: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1c38u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1c3c:
    // 0x2b1c3c: 0x0  nop
    ctx->pc = 0x2b1c3cu;
    // NOP
label_2b1c40:
    // 0x2b1c40: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1c40u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1c44:
    // 0x2b1c44: 0x0  nop
    ctx->pc = 0x2b1c44u;
    // NOP
label_2b1c48:
    // 0x2b1c48: 0xa0008c  .word       0x00A0008C                   # syscall     2 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1c48u;
    ctx->pc = 0x2B1C4Cu;
runtime->handleSyscall(rdram, ctx, 0x28002u);
label_2b1c4c:
    // 0x2b1c4c: 0x282a3430  slti        $t2, $at, 0x3430
    ctx->pc = 0x2b1c4cu;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)13360) ? 1 : 0);
label_2b1c50:
    // 0x2b1c50: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1c50u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1c54:
    // 0x2b1c54: 0x0  nop
    ctx->pc = 0x2b1c54u;
    // NOP
label_2b1c58:
    // 0x2b1c58: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1c58u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1c5c:
    // 0x2b1c5c: 0x0  nop
    ctx->pc = 0x2b1c5cu;
    // NOP
label_2b1c60:
    // 0x2b1c60: 0xa50087  .word       0x00A50087                   # srav        $zero, $a1, $a1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1c60u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 5) & 0x1F));
label_2b1c64:
    // 0x2b1c64: 0x282a362e  slti        $t2, $at, 0x362E
    ctx->pc = 0x2b1c64u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)13870) ? 1 : 0);
label_2b1c68:
    // 0x2b1c68: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1c68u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1c6c:
    // 0x2b1c6c: 0x0  nop
    ctx->pc = 0x2b1c6cu;
    // NOP
label_2b1c70:
    // 0x2b1c70: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1c70u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1c74:
    // 0x2b1c74: 0x0  nop
    ctx->pc = 0x2b1c74u;
    // NOP
label_2b1c78:
    // 0x2b1c78: 0x91009b  .word       0x0091009B                   # divu        $zero, $a0, $s1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1c78u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_2b1c7c:
    // 0x2b1c7c: 0x282c2e36  slti        $t4, $at, 0x2E36
    ctx->pc = 0x2b1c7cu;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)11830) ? 1 : 0);
label_2b1c80:
    // 0x2b1c80: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1c80u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1c84:
    // 0x2b1c84: 0x0  nop
    ctx->pc = 0x2b1c84u;
    // NOP
label_2b1c88:
    // 0x2b1c88: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1c88u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1c8c:
    // 0x2b1c8c: 0x0  nop
    ctx->pc = 0x2b1c8cu;
    // NOP
label_2b1c90:
    // 0x2b1c90: 0xa0008c  .word       0x00A0008C                   # syscall     2 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1c90u;
    ctx->pc = 0x2B1C94u;
runtime->handleSyscall(rdram, ctx, 0x28002u);
label_2b1c94:
    // 0x2b1c94: 0x282e352f  slti        $t6, $at, 0x352F
    ctx->pc = 0x2b1c94u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)13615) ? 1 : 0);
label_2b1c98:
    // 0x2b1c98: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1c98u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1c9c:
    // 0x2b1c9c: 0x0  nop
    ctx->pc = 0x2b1c9cu;
    // NOP
label_2b1ca0:
    // 0x2b1ca0: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1ca0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1ca4:
    // 0x2b1ca4: 0x0  nop
    ctx->pc = 0x2b1ca4u;
    // NOP
label_2b1ca8:
    // 0x2b1ca8: 0x0  nop
    ctx->pc = 0x2b1ca8u;
    // NOP
label_2b1cac:
    // 0x2b1cac: 0x0  nop
    ctx->pc = 0x2b1cacu;
    // NOP
label_2b1cb0:
    // 0x2b1cb0: 0xa0  .word       0x000000A0                   # add         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1cb0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2b1cb4:
    // 0x2b1cb4: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x2b1cb4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2b1cb8:
    // 0x2b1cb8: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x2b1cb8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2b1cbc:
    // 0x2b1cbc: 0x46  .word       0x00000046                   # srlv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1cbcu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2b1cc0:
    // 0x2b1cc0: 0x96  .word       0x00000096                   # dsrlv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1cc0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2b1cc4:
    // 0x2b1cc4: 0x0  nop
    ctx->pc = 0x2b1cc4u;
    // NOP
label_2b1cc8:
    // 0x2b1cc8: 0x0  nop
    ctx->pc = 0x2b1cc8u;
    // NOP
label_2b1ccc:
    // 0x2b1ccc: 0x0  nop
    ctx->pc = 0x2b1cccu;
    // NOP
label_2b1cd0:
    // 0x2b1cd0: 0xbc  dsll32      $zero, $zero, 2
    ctx->pc = 0x2b1cd0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 2));
label_2b1cd4:
    // 0x2b1cd4: 0xca  .word       0x000000CA                   # movz        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1cd4u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2b1cd8:
    // 0x2b1cd8: 0xbe  dsrl32      $zero, $zero, 2
    ctx->pc = 0x2b1cd8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 2));
label_2b1cdc:
    // 0x2b1cdc: 0xb4  teq         $zero, $zero, 2
    ctx->pc = 0x2b1cdcu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2b1ce0:
    // 0x2b1ce0: 0xc6  .word       0x000000C6                   # srlv        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1ce0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2b1ce4:
    // 0x2b1ce4: 0x0  nop
    ctx->pc = 0x2b1ce4u;
    // NOP
label_2b1ce8:
    // 0x2b1ce8: 0x0  nop
    ctx->pc = 0x2b1ce8u;
    // NOP
label_2b1cec:
    // 0x2b1cec: 0x0  nop
    ctx->pc = 0x2b1cecu;
    // NOP
label_2b1cf0:
    // 0x2b1cf0: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x2b1cf0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
label_2b1cf4:
    // 0x2b1cf4: 0x2c  dadd        $zero, $zero, $zero
    ctx->pc = 0x2b1cf4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1cf8:
    // 0x2b1cf8: 0x58  .word       0x00000058                   # mult        $zero, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b1cf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2b1cfc:
    // 0x2b1cfc: 0x48  .word       0x00000048                   # jr          $zero # 00000040 <InstrIdType: CPU_SPECIAL>
label_2b1d00:
    if (ctx->pc == 0x2B1D00u) {
        ctx->pc = 0x2B1D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CFCu;
        // 0x2b1d00: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1D04u;
        goto label_2b1d04;
    }
    ctx->pc = 0x2B1CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2B1D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CFCu;
        // 0x2b1d00: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1CFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B1D04u;
label_2b1d04:
    // 0x2b1d04: 0x0  nop
    ctx->pc = 0x2b1d04u;
    // NOP
label_2b1d08:
    // 0x2b1d08: 0x0  nop
    ctx->pc = 0x2b1d08u;
    // NOP
label_2b1d0c:
    // 0x2b1d0c: 0x0  nop
    ctx->pc = 0x2b1d0cu;
    // NOP
    ctx->pc = 0x2b1d10u;
    return;
}
