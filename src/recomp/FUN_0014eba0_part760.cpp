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

// Function: FUN_0014eba0
// Address: 0x14eba0 - 0x2ced24
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0014eba0_part760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2c1550u: goto label_2c1550;
        case 0x2c1554u: goto label_2c1554;
        case 0x2c1558u: goto label_2c1558;
        case 0x2c155cu: goto label_2c155c;
        case 0x2c1560u: goto label_2c1560;
        case 0x2c1564u: goto label_2c1564;
        case 0x2c1568u: goto label_2c1568;
        case 0x2c156cu: goto label_2c156c;
        case 0x2c1570u: goto label_2c1570;
        case 0x2c1574u: goto label_2c1574;
        case 0x2c1578u: goto label_2c1578;
        case 0x2c157cu: goto label_2c157c;
        case 0x2c1580u: goto label_2c1580;
        case 0x2c1584u: goto label_2c1584;
        case 0x2c1588u: goto label_2c1588;
        case 0x2c158cu: goto label_2c158c;
        case 0x2c1590u: goto label_2c1590;
        case 0x2c1594u: goto label_2c1594;
        case 0x2c1598u: goto label_2c1598;
        case 0x2c159cu: goto label_2c159c;
        case 0x2c15a0u: goto label_2c15a0;
        case 0x2c15a4u: goto label_2c15a4;
        case 0x2c15a8u: goto label_2c15a8;
        case 0x2c15acu: goto label_2c15ac;
        case 0x2c15b0u: goto label_2c15b0;
        case 0x2c15b4u: goto label_2c15b4;
        case 0x2c15b8u: goto label_2c15b8;
        case 0x2c15bcu: goto label_2c15bc;
        case 0x2c15c0u: goto label_2c15c0;
        case 0x2c15c4u: goto label_2c15c4;
        case 0x2c15c8u: goto label_2c15c8;
        case 0x2c15ccu: goto label_2c15cc;
        case 0x2c15d0u: goto label_2c15d0;
        case 0x2c15d4u: goto label_2c15d4;
        case 0x2c15d8u: goto label_2c15d8;
        case 0x2c15dcu: goto label_2c15dc;
        case 0x2c15e0u: goto label_2c15e0;
        case 0x2c15e4u: goto label_2c15e4;
        case 0x2c15e8u: goto label_2c15e8;
        case 0x2c15ecu: goto label_2c15ec;
        case 0x2c15f0u: goto label_2c15f0;
        case 0x2c15f4u: goto label_2c15f4;
        case 0x2c15f8u: goto label_2c15f8;
        case 0x2c15fcu: goto label_2c15fc;
        case 0x2c1600u: goto label_2c1600;
        case 0x2c1604u: goto label_2c1604;
        case 0x2c1608u: goto label_2c1608;
        case 0x2c160cu: goto label_2c160c;
        case 0x2c1610u: goto label_2c1610;
        case 0x2c1614u: goto label_2c1614;
        case 0x2c1618u: goto label_2c1618;
        case 0x2c161cu: goto label_2c161c;
        case 0x2c1620u: goto label_2c1620;
        case 0x2c1624u: goto label_2c1624;
        case 0x2c1628u: goto label_2c1628;
        case 0x2c162cu: goto label_2c162c;
        case 0x2c1630u: goto label_2c1630;
        case 0x2c1634u: goto label_2c1634;
        case 0x2c1638u: goto label_2c1638;
        case 0x2c163cu: goto label_2c163c;
        case 0x2c1640u: goto label_2c1640;
        case 0x2c1644u: goto label_2c1644;
        case 0x2c1648u: goto label_2c1648;
        case 0x2c164cu: goto label_2c164c;
        case 0x2c1650u: goto label_2c1650;
        case 0x2c1654u: goto label_2c1654;
        case 0x2c1658u: goto label_2c1658;
        case 0x2c165cu: goto label_2c165c;
        case 0x2c1660u: goto label_2c1660;
        case 0x2c1664u: goto label_2c1664;
        case 0x2c1668u: goto label_2c1668;
        case 0x2c166cu: goto label_2c166c;
        case 0x2c1670u: goto label_2c1670;
        case 0x2c1674u: goto label_2c1674;
        case 0x2c1678u: goto label_2c1678;
        case 0x2c167cu: goto label_2c167c;
        case 0x2c1680u: goto label_2c1680;
        case 0x2c1684u: goto label_2c1684;
        case 0x2c1688u: goto label_2c1688;
        case 0x2c168cu: goto label_2c168c;
        case 0x2c1690u: goto label_2c1690;
        case 0x2c1694u: goto label_2c1694;
        case 0x2c1698u: goto label_2c1698;
        case 0x2c169cu: goto label_2c169c;
        case 0x2c16a0u: goto label_2c16a0;
        case 0x2c16a4u: goto label_2c16a4;
        case 0x2c16a8u: goto label_2c16a8;
        case 0x2c16acu: goto label_2c16ac;
        case 0x2c16b0u: goto label_2c16b0;
        case 0x2c16b4u: goto label_2c16b4;
        case 0x2c16b8u: goto label_2c16b8;
        case 0x2c16bcu: goto label_2c16bc;
        case 0x2c16c0u: goto label_2c16c0;
        case 0x2c16c4u: goto label_2c16c4;
        case 0x2c16c8u: goto label_2c16c8;
        case 0x2c16ccu: goto label_2c16cc;
        case 0x2c16d0u: goto label_2c16d0;
        case 0x2c16d4u: goto label_2c16d4;
        case 0x2c16d8u: goto label_2c16d8;
        case 0x2c16dcu: goto label_2c16dc;
        case 0x2c16e0u: goto label_2c16e0;
        case 0x2c16e4u: goto label_2c16e4;
        case 0x2c16e8u: goto label_2c16e8;
        case 0x2c16ecu: goto label_2c16ec;
        case 0x2c16f0u: goto label_2c16f0;
        case 0x2c16f4u: goto label_2c16f4;
        case 0x2c16f8u: goto label_2c16f8;
        case 0x2c16fcu: goto label_2c16fc;
        case 0x2c1700u: goto label_2c1700;
        case 0x2c1704u: goto label_2c1704;
        case 0x2c1708u: goto label_2c1708;
        case 0x2c170cu: goto label_2c170c;
        case 0x2c1710u: goto label_2c1710;
        case 0x2c1714u: goto label_2c1714;
        case 0x2c1718u: goto label_2c1718;
        case 0x2c171cu: goto label_2c171c;
        case 0x2c1720u: goto label_2c1720;
        case 0x2c1724u: goto label_2c1724;
        case 0x2c1728u: goto label_2c1728;
        case 0x2c172cu: goto label_2c172c;
        case 0x2c1730u: goto label_2c1730;
        case 0x2c1734u: goto label_2c1734;
        case 0x2c1738u: goto label_2c1738;
        case 0x2c173cu: goto label_2c173c;
        case 0x2c1740u: goto label_2c1740;
        case 0x2c1744u: goto label_2c1744;
        case 0x2c1748u: goto label_2c1748;
        case 0x2c174cu: goto label_2c174c;
        case 0x2c1750u: goto label_2c1750;
        case 0x2c1754u: goto label_2c1754;
        case 0x2c1758u: goto label_2c1758;
        case 0x2c175cu: goto label_2c175c;
        case 0x2c1760u: goto label_2c1760;
        case 0x2c1764u: goto label_2c1764;
        case 0x2c1768u: goto label_2c1768;
        case 0x2c176cu: goto label_2c176c;
        case 0x2c1770u: goto label_2c1770;
        case 0x2c1774u: goto label_2c1774;
        case 0x2c1778u: goto label_2c1778;
        case 0x2c177cu: goto label_2c177c;
        case 0x2c1780u: goto label_2c1780;
        case 0x2c1784u: goto label_2c1784;
        case 0x2c1788u: goto label_2c1788;
        case 0x2c178cu: goto label_2c178c;
        case 0x2c1790u: goto label_2c1790;
        case 0x2c1794u: goto label_2c1794;
        case 0x2c1798u: goto label_2c1798;
        case 0x2c179cu: goto label_2c179c;
        case 0x2c17a0u: goto label_2c17a0;
        case 0x2c17a4u: goto label_2c17a4;
        case 0x2c17a8u: goto label_2c17a8;
        case 0x2c17acu: goto label_2c17ac;
        case 0x2c17b0u: goto label_2c17b0;
        case 0x2c17b4u: goto label_2c17b4;
        case 0x2c17b8u: goto label_2c17b8;
        case 0x2c17bcu: goto label_2c17bc;
        case 0x2c17c0u: goto label_2c17c0;
        case 0x2c17c4u: goto label_2c17c4;
        case 0x2c17c8u: goto label_2c17c8;
        case 0x2c17ccu: goto label_2c17cc;
        case 0x2c17d0u: goto label_2c17d0;
        case 0x2c17d4u: goto label_2c17d4;
        case 0x2c17d8u: goto label_2c17d8;
        case 0x2c17dcu: goto label_2c17dc;
        case 0x2c17e0u: goto label_2c17e0;
        case 0x2c17e4u: goto label_2c17e4;
        case 0x2c17e8u: goto label_2c17e8;
        case 0x2c17ecu: goto label_2c17ec;
        case 0x2c17f0u: goto label_2c17f0;
        case 0x2c17f4u: goto label_2c17f4;
        case 0x2c17f8u: goto label_2c17f8;
        case 0x2c17fcu: goto label_2c17fc;
        case 0x2c1800u: goto label_2c1800;
        case 0x2c1804u: goto label_2c1804;
        case 0x2c1808u: goto label_2c1808;
        case 0x2c180cu: goto label_2c180c;
        case 0x2c1810u: goto label_2c1810;
        case 0x2c1814u: goto label_2c1814;
        case 0x2c1818u: goto label_2c1818;
        case 0x2c181cu: goto label_2c181c;
        case 0x2c1820u: goto label_2c1820;
        case 0x2c1824u: goto label_2c1824;
        case 0x2c1828u: goto label_2c1828;
        case 0x2c182cu: goto label_2c182c;
        case 0x2c1830u: goto label_2c1830;
        case 0x2c1834u: goto label_2c1834;
        case 0x2c1838u: goto label_2c1838;
        case 0x2c183cu: goto label_2c183c;
        case 0x2c1840u: goto label_2c1840;
        case 0x2c1844u: goto label_2c1844;
        case 0x2c1848u: goto label_2c1848;
        case 0x2c184cu: goto label_2c184c;
        case 0x2c1850u: goto label_2c1850;
        case 0x2c1854u: goto label_2c1854;
        case 0x2c1858u: goto label_2c1858;
        case 0x2c185cu: goto label_2c185c;
        case 0x2c1860u: goto label_2c1860;
        case 0x2c1864u: goto label_2c1864;
        case 0x2c1868u: goto label_2c1868;
        case 0x2c186cu: goto label_2c186c;
        case 0x2c1870u: goto label_2c1870;
        case 0x2c1874u: goto label_2c1874;
        case 0x2c1878u: goto label_2c1878;
        case 0x2c187cu: goto label_2c187c;
        case 0x2c1880u: goto label_2c1880;
        case 0x2c1884u: goto label_2c1884;
        case 0x2c1888u: goto label_2c1888;
        case 0x2c188cu: goto label_2c188c;
        case 0x2c1890u: goto label_2c1890;
        case 0x2c1894u: goto label_2c1894;
        case 0x2c1898u: goto label_2c1898;
        case 0x2c189cu: goto label_2c189c;
        case 0x2c18a0u: goto label_2c18a0;
        case 0x2c18a4u: goto label_2c18a4;
        case 0x2c18a8u: goto label_2c18a8;
        case 0x2c18acu: goto label_2c18ac;
        case 0x2c18b0u: goto label_2c18b0;
        case 0x2c18b4u: goto label_2c18b4;
        case 0x2c18b8u: goto label_2c18b8;
        case 0x2c18bcu: goto label_2c18bc;
        case 0x2c18c0u: goto label_2c18c0;
        case 0x2c18c4u: goto label_2c18c4;
        case 0x2c18c8u: goto label_2c18c8;
        case 0x2c18ccu: goto label_2c18cc;
        case 0x2c18d0u: goto label_2c18d0;
        case 0x2c18d4u: goto label_2c18d4;
        case 0x2c18d8u: goto label_2c18d8;
        case 0x2c18dcu: goto label_2c18dc;
        case 0x2c18e0u: goto label_2c18e0;
        case 0x2c18e4u: goto label_2c18e4;
        case 0x2c18e8u: goto label_2c18e8;
        case 0x2c18ecu: goto label_2c18ec;
        case 0x2c18f0u: goto label_2c18f0;
        case 0x2c18f4u: goto label_2c18f4;
        case 0x2c18f8u: goto label_2c18f8;
        case 0x2c18fcu: goto label_2c18fc;
        case 0x2c1900u: goto label_2c1900;
        case 0x2c1904u: goto label_2c1904;
        case 0x2c1908u: goto label_2c1908;
        case 0x2c190cu: goto label_2c190c;
        case 0x2c1910u: goto label_2c1910;
        case 0x2c1914u: goto label_2c1914;
        case 0x2c1918u: goto label_2c1918;
        case 0x2c191cu: goto label_2c191c;
        case 0x2c1920u: goto label_2c1920;
        case 0x2c1924u: goto label_2c1924;
        case 0x2c1928u: goto label_2c1928;
        case 0x2c192cu: goto label_2c192c;
        case 0x2c1930u: goto label_2c1930;
        case 0x2c1934u: goto label_2c1934;
        case 0x2c1938u: goto label_2c1938;
        case 0x2c193cu: goto label_2c193c;
        case 0x2c1940u: goto label_2c1940;
        case 0x2c1944u: goto label_2c1944;
        case 0x2c1948u: goto label_2c1948;
        case 0x2c194cu: goto label_2c194c;
        case 0x2c1950u: goto label_2c1950;
        case 0x2c1954u: goto label_2c1954;
        case 0x2c1958u: goto label_2c1958;
        case 0x2c195cu: goto label_2c195c;
        case 0x2c1960u: goto label_2c1960;
        case 0x2c1964u: goto label_2c1964;
        case 0x2c1968u: goto label_2c1968;
        case 0x2c196cu: goto label_2c196c;
        case 0x2c1970u: goto label_2c1970;
        case 0x2c1974u: goto label_2c1974;
        case 0x2c1978u: goto label_2c1978;
        case 0x2c197cu: goto label_2c197c;
        case 0x2c1980u: goto label_2c1980;
        case 0x2c1984u: goto label_2c1984;
        case 0x2c1988u: goto label_2c1988;
        case 0x2c198cu: goto label_2c198c;
        case 0x2c1990u: goto label_2c1990;
        case 0x2c1994u: goto label_2c1994;
        case 0x2c1998u: goto label_2c1998;
        case 0x2c199cu: goto label_2c199c;
        case 0x2c19a0u: goto label_2c19a0;
        case 0x2c19a4u: goto label_2c19a4;
        case 0x2c19a8u: goto label_2c19a8;
        case 0x2c19acu: goto label_2c19ac;
        case 0x2c19b0u: goto label_2c19b0;
        case 0x2c19b4u: goto label_2c19b4;
        case 0x2c19b8u: goto label_2c19b8;
        case 0x2c19bcu: goto label_2c19bc;
        case 0x2c19c0u: goto label_2c19c0;
        case 0x2c19c4u: goto label_2c19c4;
        case 0x2c19c8u: goto label_2c19c8;
        case 0x2c19ccu: goto label_2c19cc;
        case 0x2c19d0u: goto label_2c19d0;
        case 0x2c19d4u: goto label_2c19d4;
        case 0x2c19d8u: goto label_2c19d8;
        case 0x2c19dcu: goto label_2c19dc;
        case 0x2c19e0u: goto label_2c19e0;
        case 0x2c19e4u: goto label_2c19e4;
        case 0x2c19e8u: goto label_2c19e8;
        case 0x2c19ecu: goto label_2c19ec;
        case 0x2c19f0u: goto label_2c19f0;
        case 0x2c19f4u: goto label_2c19f4;
        case 0x2c19f8u: goto label_2c19f8;
        case 0x2c19fcu: goto label_2c19fc;
        case 0x2c1a00u: goto label_2c1a00;
        case 0x2c1a04u: goto label_2c1a04;
        case 0x2c1a08u: goto label_2c1a08;
        case 0x2c1a0cu: goto label_2c1a0c;
        case 0x2c1a10u: goto label_2c1a10;
        case 0x2c1a14u: goto label_2c1a14;
        case 0x2c1a18u: goto label_2c1a18;
        case 0x2c1a1cu: goto label_2c1a1c;
        case 0x2c1a20u: goto label_2c1a20;
        case 0x2c1a24u: goto label_2c1a24;
        case 0x2c1a28u: goto label_2c1a28;
        case 0x2c1a2cu: goto label_2c1a2c;
        case 0x2c1a30u: goto label_2c1a30;
        case 0x2c1a34u: goto label_2c1a34;
        case 0x2c1a38u: goto label_2c1a38;
        case 0x2c1a3cu: goto label_2c1a3c;
        case 0x2c1a40u: goto label_2c1a40;
        case 0x2c1a44u: goto label_2c1a44;
        case 0x2c1a48u: goto label_2c1a48;
        case 0x2c1a4cu: goto label_2c1a4c;
        case 0x2c1a50u: goto label_2c1a50;
        case 0x2c1a54u: goto label_2c1a54;
        case 0x2c1a58u: goto label_2c1a58;
        case 0x2c1a5cu: goto label_2c1a5c;
        case 0x2c1a60u: goto label_2c1a60;
        case 0x2c1a64u: goto label_2c1a64;
        case 0x2c1a68u: goto label_2c1a68;
        case 0x2c1a6cu: goto label_2c1a6c;
        case 0x2c1a70u: goto label_2c1a70;
        case 0x2c1a74u: goto label_2c1a74;
        case 0x2c1a78u: goto label_2c1a78;
        case 0x2c1a7cu: goto label_2c1a7c;
        case 0x2c1a80u: goto label_2c1a80;
        case 0x2c1a84u: goto label_2c1a84;
        case 0x2c1a88u: goto label_2c1a88;
        case 0x2c1a8cu: goto label_2c1a8c;
        case 0x2c1a90u: goto label_2c1a90;
        case 0x2c1a94u: goto label_2c1a94;
        case 0x2c1a98u: goto label_2c1a98;
        case 0x2c1a9cu: goto label_2c1a9c;
        case 0x2c1aa0u: goto label_2c1aa0;
        case 0x2c1aa4u: goto label_2c1aa4;
        case 0x2c1aa8u: goto label_2c1aa8;
        case 0x2c1aacu: goto label_2c1aac;
        case 0x2c1ab0u: goto label_2c1ab0;
        case 0x2c1ab4u: goto label_2c1ab4;
        case 0x2c1ab8u: goto label_2c1ab8;
        case 0x2c1abcu: goto label_2c1abc;
        case 0x2c1ac0u: goto label_2c1ac0;
        case 0x2c1ac4u: goto label_2c1ac4;
        case 0x2c1ac8u: goto label_2c1ac8;
        case 0x2c1accu: goto label_2c1acc;
        case 0x2c1ad0u: goto label_2c1ad0;
        case 0x2c1ad4u: goto label_2c1ad4;
        case 0x2c1ad8u: goto label_2c1ad8;
        case 0x2c1adcu: goto label_2c1adc;
        case 0x2c1ae0u: goto label_2c1ae0;
        case 0x2c1ae4u: goto label_2c1ae4;
        case 0x2c1ae8u: goto label_2c1ae8;
        case 0x2c1aecu: goto label_2c1aec;
        case 0x2c1af0u: goto label_2c1af0;
        case 0x2c1af4u: goto label_2c1af4;
        case 0x2c1af8u: goto label_2c1af8;
        case 0x2c1afcu: goto label_2c1afc;
        case 0x2c1b00u: goto label_2c1b00;
        case 0x2c1b04u: goto label_2c1b04;
        case 0x2c1b08u: goto label_2c1b08;
        case 0x2c1b0cu: goto label_2c1b0c;
        case 0x2c1b10u: goto label_2c1b10;
        case 0x2c1b14u: goto label_2c1b14;
        case 0x2c1b18u: goto label_2c1b18;
        case 0x2c1b1cu: goto label_2c1b1c;
        case 0x2c1b20u: goto label_2c1b20;
        case 0x2c1b24u: goto label_2c1b24;
        case 0x2c1b28u: goto label_2c1b28;
        case 0x2c1b2cu: goto label_2c1b2c;
        case 0x2c1b30u: goto label_2c1b30;
        case 0x2c1b34u: goto label_2c1b34;
        case 0x2c1b38u: goto label_2c1b38;
        case 0x2c1b3cu: goto label_2c1b3c;
        case 0x2c1b40u: goto label_2c1b40;
        case 0x2c1b44u: goto label_2c1b44;
        case 0x2c1b48u: goto label_2c1b48;
        case 0x2c1b4cu: goto label_2c1b4c;
        case 0x2c1b50u: goto label_2c1b50;
        case 0x2c1b54u: goto label_2c1b54;
        case 0x2c1b58u: goto label_2c1b58;
        case 0x2c1b5cu: goto label_2c1b5c;
        case 0x2c1b60u: goto label_2c1b60;
        case 0x2c1b64u: goto label_2c1b64;
        case 0x2c1b68u: goto label_2c1b68;
        case 0x2c1b6cu: goto label_2c1b6c;
        case 0x2c1b70u: goto label_2c1b70;
        case 0x2c1b74u: goto label_2c1b74;
        case 0x2c1b78u: goto label_2c1b78;
        case 0x2c1b7cu: goto label_2c1b7c;
        case 0x2c1b80u: goto label_2c1b80;
        case 0x2c1b84u: goto label_2c1b84;
        case 0x2c1b88u: goto label_2c1b88;
        case 0x2c1b8cu: goto label_2c1b8c;
        case 0x2c1b90u: goto label_2c1b90;
        case 0x2c1b94u: goto label_2c1b94;
        case 0x2c1b98u: goto label_2c1b98;
        case 0x2c1b9cu: goto label_2c1b9c;
        case 0x2c1ba0u: goto label_2c1ba0;
        case 0x2c1ba4u: goto label_2c1ba4;
        case 0x2c1ba8u: goto label_2c1ba8;
        case 0x2c1bacu: goto label_2c1bac;
        case 0x2c1bb0u: goto label_2c1bb0;
        case 0x2c1bb4u: goto label_2c1bb4;
        case 0x2c1bb8u: goto label_2c1bb8;
        case 0x2c1bbcu: goto label_2c1bbc;
        case 0x2c1bc0u: goto label_2c1bc0;
        case 0x2c1bc4u: goto label_2c1bc4;
        case 0x2c1bc8u: goto label_2c1bc8;
        case 0x2c1bccu: goto label_2c1bcc;
        case 0x2c1bd0u: goto label_2c1bd0;
        case 0x2c1bd4u: goto label_2c1bd4;
        case 0x2c1bd8u: goto label_2c1bd8;
        case 0x2c1bdcu: goto label_2c1bdc;
        case 0x2c1be0u: goto label_2c1be0;
        case 0x2c1be4u: goto label_2c1be4;
        case 0x2c1be8u: goto label_2c1be8;
        case 0x2c1becu: goto label_2c1bec;
        case 0x2c1bf0u: goto label_2c1bf0;
        case 0x2c1bf4u: goto label_2c1bf4;
        case 0x2c1bf8u: goto label_2c1bf8;
        case 0x2c1bfcu: goto label_2c1bfc;
        case 0x2c1c00u: goto label_2c1c00;
        case 0x2c1c04u: goto label_2c1c04;
        case 0x2c1c08u: goto label_2c1c08;
        case 0x2c1c0cu: goto label_2c1c0c;
        case 0x2c1c10u: goto label_2c1c10;
        case 0x2c1c14u: goto label_2c1c14;
        case 0x2c1c18u: goto label_2c1c18;
        case 0x2c1c1cu: goto label_2c1c1c;
        case 0x2c1c20u: goto label_2c1c20;
        case 0x2c1c24u: goto label_2c1c24;
        case 0x2c1c28u: goto label_2c1c28;
        case 0x2c1c2cu: goto label_2c1c2c;
        case 0x2c1c30u: goto label_2c1c30;
        case 0x2c1c34u: goto label_2c1c34;
        case 0x2c1c38u: goto label_2c1c38;
        case 0x2c1c3cu: goto label_2c1c3c;
        case 0x2c1c40u: goto label_2c1c40;
        case 0x2c1c44u: goto label_2c1c44;
        case 0x2c1c48u: goto label_2c1c48;
        case 0x2c1c4cu: goto label_2c1c4c;
        case 0x2c1c50u: goto label_2c1c50;
        case 0x2c1c54u: goto label_2c1c54;
        case 0x2c1c58u: goto label_2c1c58;
        case 0x2c1c5cu: goto label_2c1c5c;
        case 0x2c1c60u: goto label_2c1c60;
        case 0x2c1c64u: goto label_2c1c64;
        case 0x2c1c68u: goto label_2c1c68;
        case 0x2c1c6cu: goto label_2c1c6c;
        case 0x2c1c70u: goto label_2c1c70;
        case 0x2c1c74u: goto label_2c1c74;
        case 0x2c1c78u: goto label_2c1c78;
        case 0x2c1c7cu: goto label_2c1c7c;
        case 0x2c1c80u: goto label_2c1c80;
        case 0x2c1c84u: goto label_2c1c84;
        case 0x2c1c88u: goto label_2c1c88;
        case 0x2c1c8cu: goto label_2c1c8c;
        case 0x2c1c90u: goto label_2c1c90;
        case 0x2c1c94u: goto label_2c1c94;
        case 0x2c1c98u: goto label_2c1c98;
        case 0x2c1c9cu: goto label_2c1c9c;
        case 0x2c1ca0u: goto label_2c1ca0;
        case 0x2c1ca4u: goto label_2c1ca4;
        case 0x2c1ca8u: goto label_2c1ca8;
        case 0x2c1cacu: goto label_2c1cac;
        case 0x2c1cb0u: goto label_2c1cb0;
        case 0x2c1cb4u: goto label_2c1cb4;
        case 0x2c1cb8u: goto label_2c1cb8;
        case 0x2c1cbcu: goto label_2c1cbc;
        case 0x2c1cc0u: goto label_2c1cc0;
        case 0x2c1cc4u: goto label_2c1cc4;
        case 0x2c1cc8u: goto label_2c1cc8;
        case 0x2c1cccu: goto label_2c1ccc;
        case 0x2c1cd0u: goto label_2c1cd0;
        case 0x2c1cd4u: goto label_2c1cd4;
        case 0x2c1cd8u: goto label_2c1cd8;
        case 0x2c1cdcu: goto label_2c1cdc;
        case 0x2c1ce0u: goto label_2c1ce0;
        case 0x2c1ce4u: goto label_2c1ce4;
        case 0x2c1ce8u: goto label_2c1ce8;
        case 0x2c1cecu: goto label_2c1cec;
        case 0x2c1cf0u: goto label_2c1cf0;
        case 0x2c1cf4u: goto label_2c1cf4;
        case 0x2c1cf8u: goto label_2c1cf8;
        case 0x2c1cfcu: goto label_2c1cfc;
        case 0x2c1d00u: goto label_2c1d00;
        case 0x2c1d04u: goto label_2c1d04;
        case 0x2c1d08u: goto label_2c1d08;
        case 0x2c1d0cu: goto label_2c1d0c;
        case 0x2c1d10u: goto label_2c1d10;
        case 0x2c1d14u: goto label_2c1d14;
        case 0x2c1d18u: goto label_2c1d18;
        case 0x2c1d1cu: goto label_2c1d1c;
        default: return;
    }

label_2c1550:
    // 0x2c1550: 0x81f52b7c  lb          $s5, 0x2B7C($t7)
    ctx->pc = 0x2c1550u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 11132)));
label_2c1554:
    // 0x2c1554: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1554u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1558:
    // 0x2c1558: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1558u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c155c:
    // 0x2c155c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c155cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1560:
    // 0x2c1560: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1560u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1564:
    // 0x2c1564: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1564u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1568:
    // 0x2c1568: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1568u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c156c:
    // 0x2c156c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c156cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1570:
    // 0x2c1570: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1570u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1574:
    // 0x2c1574: 0x1e7adaa  .word       0x01E7ADAA                   # slt         $s5, $t7, $a3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1574u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_2c1578:
    // 0x2c1578: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1578u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c157c:
    // 0x2c157c: 0x1e8ad6a  .word       0x01E8AD6A                   # slt         $s5, $t7, $t0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c157cu;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_2c1580:
    // 0x2c1580: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1580u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1584:
    // 0x2c1584: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1584u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1588:
    // 0x2c1588: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1588u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c158c:
    // 0x2c158c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c158cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1590:
    // 0x2c1590: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1590u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1594:
    // 0x2c1594: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1594u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1598:
    // 0x2c1598: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1598u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c159c:
    // 0x2c159c: 0x1e0b59f  .word       0x01E0B59F                   # ddivu       $s6, $t7, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c159cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2C159C raw=0x01E0B59F");
 /* MITIGATED */
label_2c15a0:
    // 0x2c15a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c15a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c15a4:
    // 0x2c15a4: 0x1e0ad5f  .word       0x01E0AD5F                   # ddivu       $s5, $t7, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c15a4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2C15A4 raw=0x01E0AD5F");
 /* MITIGATED */
label_2c15a8:
    // 0x2c15a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c15a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c15ac:
    // 0x2c15ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c15acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c15b0:
    // 0x2c15b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c15b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c15b4:
    // 0x2c15b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c15b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c15b8:
    // 0x2c15b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c15b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c15bc:
    // 0x2c15bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c15bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c15c0:
    // 0x2c15c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c15c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c15c4:
    // 0x2c15c4: 0x1f6b17c  .word       0x01F6B17C                   # dsll32      $s6, $s6, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c15c4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 5));
label_2c15c8:
    // 0x2c15c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c15c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c15cc:
    // 0x2c15cc: 0x1f5a97c  .word       0x01F5A97C                   # dsll32      $s5, $s5, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c15ccu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 5));
label_2c15d0:
    // 0x2c15d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c15d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c15d4:
    // 0x2c15d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c15d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c15d8:
    // 0x2c15d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c15d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c15dc:
    // 0x2c15dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c15dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c15e0:
    // 0x2c15e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c15e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c15e4:
    // 0x2c15e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c15e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c15e8:
    // 0x2c15e8: 0x3e7b001  .word       0x03E7B001                   # INVALID     $ra, $a3, -0x4FFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c15e8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2C15E8 raw=0x03E7B001");
 /* MITIGATED */
label_2c15ec:
    // 0x2c15ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c15ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c15f0:
    // 0x2c15f0: 0x3e8a801  .word       0x03E8A801                   # INVALID     $ra, $t0, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c15f0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2C15F0 raw=0x03E8A801");
 /* MITIGATED */
label_2c15f4:
    // 0x2c15f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c15f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c15f8:
    // 0x2c15f8: 0x8194337c  lb          $s4, 0x337C($t4)
    ctx->pc = 0x2c15f8u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 13180)));
label_2c15fc:
    // 0x2c15fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c15fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1600:
    // 0x2c1600: 0x8054033d  lb          $s4, 0x33D($v0)
    ctx->pc = 0x2c1600u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2c1604:
    // 0x2c1604: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1604u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1608:
    // 0x2c1608: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1608u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c160c:
    // 0x2c160c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c160cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1610:
    // 0x2c1610: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1610u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1614:
    // 0x2c1614: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1614u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1618:
    // 0x2c1618: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1618u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c161c:
    // 0x2c161c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c161cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1620:
    // 0x2c1620: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1620u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1624:
    // 0x2c1624: 0x1c5a268  .word       0x01C5A268                   # mfsa        $s4 # 01C50240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c1624u;
    SET_GPR_U32(ctx, 20, ctx->sa);
label_2c1628:
    // 0x2c1628: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1628u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c162c:
    // 0x2c162c: 0x1c6a2a8  .word       0x01C6A2A8                   # mfsa        $s4 # 01C60280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c162cu;
    SET_GPR_U32(ctx, 20, ctx->sa);
label_2c1630:
    // 0x2c1630: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1630u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1634:
    // 0x2c1634: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1634u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1638:
    // 0x2c1638: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1638u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c163c:
    // 0x2c163c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c163cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1640:
    // 0x2c1640: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1640u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1644:
    // 0x2c1644: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1644u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1648:
    // 0x2c1648: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1648u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c164c:
    // 0x2c164c: 0x1c04a5c  .word       0x01C04A5C                   # dmult       $t6, $zero # 00004A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c164cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C164C raw=0x01C04A5C");
 /* MITIGATED */
label_2c1650:
    // 0x2c1650: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1650u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1654:
    // 0x2c1654: 0x1c0529c  .word       0x01C0529C                   # dmult       $t6, $zero # 00005280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1654u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C1654 raw=0x01C0529C");
 /* MITIGATED */
label_2c1658:
    // 0x2c1658: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1658u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c165c:
    // 0x2c165c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c165cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1660:
    // 0x2c1660: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1660u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1664:
    // 0x2c1664: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1664u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1668:
    // 0x2c1668: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1668u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c166c:
    // 0x2c166c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c166cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1670:
    // 0x2c1670: 0x3e74800  .word       0x03E74800                   # sll         $t1, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1670u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2c1674:
    // 0x2c1674: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1674u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1678:
    // 0x2c1678: 0x3e85000  .word       0x03E85000                   # sll         $t2, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1678u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
label_2c167c:
    // 0x2c167c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c167cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1680:
    // 0x2c1680: 0x81f08b3c  lb          $s0, -0x74C4($t7)
    ctx->pc = 0x2c1680u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937404)));
label_2c1684:
    // 0x2c1684: 0x1f361bc  .word       0x01F361BC                   # dsll32      $t4, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1684u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 19) << (32 + 6));
label_2c1688:
    // 0x2c1688: 0x81f1933c  lb          $s1, -0x6CC4($t7)
    ctx->pc = 0x2c1688u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939452)));
label_2c168c:
    // 0x2c168c: 0x1f368bd  .word       0x01F368BD                   # INVALID     $t7, $s3, 0x68BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c168cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C168C raw=0x01F368BD");
 /* MITIGATED */
label_2c1690:
    // 0x2c1690: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1690u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1694:
    // 0x2c1694: 0x1f370be  .word       0x01F370BE                   # dsrl32      $t6, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1694u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) >> (32 + 2));
label_2c1698:
    // 0x2c1698: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1698u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c169c:
    // 0x2c169c: 0x1e07c8b  .word       0x01E07C8B                   # movn        $t7, $t7, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c169cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 15));
label_2c16a0:
    // 0x2c16a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c16a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c16a4:
    // 0x2c16a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c16a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c16a8:
    // 0x2c16a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c16a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c16ac:
    // 0x2c16ac: 0x1d081ff  .word       0x01D081FF                   # dsra32      $s0, $s0, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c16acu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 7));
label_2c16b0:
    // 0x2c16b0: 0x800a0270  lb          $t2, 0x270($zero)
    ctx->pc = 0x2c16b0u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x270u));
label_2c16b4:
    // 0x2c16b4: 0x1d189ff  .word       0x01D189FF                   # dsra32      $s1, $s1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c16b4u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 7));
label_2c16b8:
    // 0x2c16b8: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2c16b8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2c16bc:
    // 0x2c16bc: 0x1d291ff  .word       0x01D291FF                   # dsra32      $s2, $s2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c16bcu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 7));
label_2c16c0:
    // 0x2c16c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c16c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c16c4:
    // 0x2c16c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c16c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c16c8:
    // 0x2c16c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c16c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c16cc:
    // 0x2c16cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c16ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c16d0:
    // 0x2c16d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c16d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c16d4:
    // 0x2c16d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c16d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c16d8:
    // 0x2c16d8: 0x2400003f  addiu       $zero, $zero, 0x3F
    ctx->pc = 0x2c16d8u;
    // NOP (addiu $zero, ...)
label_2c16dc:
    // 0x2c16dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c16dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c16e0:
    // 0x2c16e0: 0x800102f0  lb          $at, 0x2F0($zero)
    ctx->pc = 0x2c16e0u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2F0u));
label_2c16e4:
    // 0x2c16e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c16e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c16e8:
    // 0x2c16e8: 0x800d6ff2  lb          $t5, 0x6FF2($zero)
    ctx->pc = 0x2c16e8u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x6FF2u));
label_2c16ec:
    // 0x2c16ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c16ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c16f0:
    // 0x2c16f0: 0x10084003  beq         $zero, $t0, . + 4 + (0x4003 << 2)
label_2c16f4:
    if (ctx->pc == 0x2C16F4u) {
        ctx->pc = 0x2C16F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C16F0u;
        // 0x2c16f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C16F8u;
        goto label_2c16f8;
    }
    ctx->pc = 0x2C16F0u;
    {
        const bool branch_taken_0x2c16f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C16F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C16F0u;
        // 0x2c16f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c16f0) {
            ctx->pc = 0x2D1700u;
            return;
        }
    }
    ctx->pc = 0x2C16F8u;
label_2c16f8:
    // 0x2c16f8: 0x5a006806  blezl       $s0, . + 4 + (0x6806 << 2)
label_2c16fc:
    if (ctx->pc == 0x2C16FCu) {
        ctx->pc = 0x2C16FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C16F8u;
        // 0x2c16fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1700u;
        goto label_2c1700;
    }
    ctx->pc = 0x2C16F8u;
    {
        const bool branch_taken_0x2c16f8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2c16f8) {
            ctx->pc = 0x2C16FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C16F8u;
            // 0x2c16fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB714u;
            return;
        }
    }
    ctx->pc = 0x2C1700u;
label_2c1700:
    // 0x2c1700: 0x10073803  beq         $zero, $a3, . + 4 + (0x3803 << 2)
label_2c1704:
    if (ctx->pc == 0x2C1704u) {
        ctx->pc = 0x2C1704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1700u;
        // 0x2c1704: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1708u;
        goto label_2c1708;
    }
    ctx->pc = 0x2C1700u;
    {
        const bool branch_taken_0x2c1700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2C1704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1700u;
        // 0x2c1704: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1700) {
            ctx->pc = 0x2CF710u;
            return;
        }
    }
    ctx->pc = 0x2C1708u;
label_2c1708:
    // 0x2c1708: 0x800a4a70  lb          $t2, 0x4A70($zero)
    ctx->pc = 0x2c1708u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x4A70u));
label_2c170c:
    // 0x2c170c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c170cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1710:
    // 0x2c1710: 0x800b4a70  lb          $t3, 0x4A70($zero)
    ctx->pc = 0x2c1710u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x4A70u));
label_2c1714:
    // 0x2c1714: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1714u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1718:
    // 0x2c1718: 0x802df3fc  lb          $t5, -0xC04($at)
    ctx->pc = 0x2c1718u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964220)));
label_2c171c:
    // 0x2c171c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c171cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1720:
    // 0x2c1720: 0x5a00481d  blezl       $s0, . + 4 + (0x481D << 2)
label_2c1724:
    if (ctx->pc == 0x2C1724u) {
        ctx->pc = 0x2C1724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1720u;
        // 0x2c1724: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1728u;
        goto label_2c1728;
    }
    ctx->pc = 0x2C1720u;
    {
        const bool branch_taken_0x2c1720 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2c1720) {
            ctx->pc = 0x2C1724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1720u;
            // 0x2c1724: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3798u;
            return;
        }
    }
    ctx->pc = 0x2C1728u;
label_2c1728:
    // 0x2c1728: 0x8062d3fc  lb          $v0, -0x2C04($v1)
    ctx->pc = 0x2c1728u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294956028)));
label_2c172c:
    // 0x2c172c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c172cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1730:
    // 0x2c1730: 0x800c67f2  lb          $t4, 0x67F2($zero)
    ctx->pc = 0x2c1730u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x67F2u));
label_2c1734:
    // 0x2c1734: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1734u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1738:
    // 0x2c1738: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1738u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c173c:
    // 0x2c173c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c173cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1740:
    // 0x2c1740: 0x520c079c  beql        $s0, $t4, . + 4 + (0x79C << 2)
label_2c1744:
    if (ctx->pc == 0x2C1744u) {
        ctx->pc = 0x2C1744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1740u;
        // 0x2c1744: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1748u;
        goto label_2c1748;
    }
    ctx->pc = 0x2C1740u;
    {
        const bool branch_taken_0x2c1740 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        if (branch_taken_0x2c1740) {
            ctx->pc = 0x2C1744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1740u;
            // 0x2c1744: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C35B4u;
            { ctx->pc = 0x2c35b4; return; }
        }
    }
    ctx->pc = 0x2C1748u;
label_2c1748:
    // 0x2c1748: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2c1748u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2c174c:
    // 0x2c174c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c174cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1750:
    // 0x2c1750: 0x810413fe  lb          $a0, 0x13FE($t0)
    ctx->pc = 0x2c1750u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 5118)));
label_2c1754:
    // 0x2c1754: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1754u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1758:
    // 0x2c1758: 0x800801f0  lb          $t0, 0x1F0($zero)
    ctx->pc = 0x2c1758u;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x1F0u));
label_2c175c:
    // 0x2c175c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c175cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1760:
    // 0x2c1760: 0x802113fe  lb          $at, 0x13FE($at)
    ctx->pc = 0x2c1760u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 5118)));
label_2c1764:
    // 0x2c1764: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1764u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1768:
    // 0x2c1768: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1768u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c176c:
    // 0x2c176c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c176cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1770:
    // 0x2c1770: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1770u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1774:
    // 0x2c1774: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1774u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1778:
    // 0x2c1778: 0x12042001  beq         $s0, $a0, . + 4 + (0x2001 << 2)
label_2c177c:
    if (ctx->pc == 0x2C177Cu) {
        ctx->pc = 0x2C177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1778u;
        // 0x2c177c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1780u;
        goto label_2c1780;
    }
    ctx->pc = 0x2C1778u;
    {
        const bool branch_taken_0x2c1778 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x2C177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1778u;
        // 0x2c177c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1778) {
            ctx->pc = 0x2C9780u;
            { ctx->pc = 0x2c9780; return; }
        }
    }
    ctx->pc = 0x2C1780u;
label_2c1780:
    // 0x2c1780: 0x810413ff  lb          $a0, 0x13FF($t0)
    ctx->pc = 0x2c1780u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 5119)));
label_2c1784:
    // 0x2c1784: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1784u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1788:
    // 0x2c1788: 0x5a00277a  blezl       $s0, . + 4 + (0x277A << 2)
label_2c178c:
    if (ctx->pc == 0x2C178Cu) {
        ctx->pc = 0x2C178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1788u;
        // 0x2c178c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1790u;
        goto label_2c1790;
    }
    ctx->pc = 0x2C1788u;
    {
        const bool branch_taken_0x2c1788 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2c1788) {
            ctx->pc = 0x2C178Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1788u;
            // 0x2c178c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB574u;
            { ctx->pc = 0x2cb574; return; }
        }
    }
    ctx->pc = 0x2C1790u;
label_2c1790:
    // 0x2c1790: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1790u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1794:
    // 0x2c1794: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1794u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1798:
    // 0x2c1798: 0x81080bfe  lb          $t0, 0xBFE($t0)
    ctx->pc = 0x2c1798u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 3070)));
label_2c179c:
    // 0x2c179c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c179cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c17a0:
    // 0x2c17a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c17a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c17a4:
    // 0x2c17a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c17a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c17a8:
    // 0x2c17a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c17a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c17ac:
    // 0x2c17ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c17acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c17b0:
    // 0x2c17b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c17b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c17b4:
    // 0x2c17b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c17b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c17b8:
    // 0x2c17b8: 0x11eb47ff  beq         $t7, $t3, . + 4 + (0x47FF << 2)
label_2c17bc:
    if (ctx->pc == 0x2C17BCu) {
        ctx->pc = 0x2C17BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C17B8u;
        // 0x2c17bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C17C0u;
        goto label_2c17c0;
    }
    ctx->pc = 0x2C17B8u;
    {
        const bool branch_taken_0x2c17b8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C17BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C17B8u;
        // 0x2c17bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c17b8) {
            ctx->pc = 0x2D37B8u;
            return;
        }
    }
    ctx->pc = 0x2C17C0u;
label_2c17c0:
    // 0x2c17c0: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2c17c4:
    if (ctx->pc == 0x2C17C4u) {
        ctx->pc = 0x2C17C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C17C0u;
        // 0x2c17c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C17C8u;
        goto label_2c17c8;
    }
    ctx->pc = 0x2C17C0u;
    {
        const bool branch_taken_0x2c17c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C17C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C17C0u;
        // 0x2c17c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c17c0) {
            ctx->pc = 0x2D77C8u;
            return;
        }
    }
    ctx->pc = 0x2C17C8u;
label_2c17c8:
    // 0x2c17c8: 0x810b0bff  lb          $t3, 0xBFF($t0)
    ctx->pc = 0x2c17c8u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 3071)));
label_2c17cc:
    // 0x2c17cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c17ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c17d0:
    // 0x2c17d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c17d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c17d4:
    // 0x2c17d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c17d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c17d8:
    // 0x2c17d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c17d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c17dc:
    // 0x2c17dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c17dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c17e0:
    // 0x2c17e0: 0x1002102c  beq         $zero, $v0, . + 4 + (0x102C << 2)
label_2c17e4:
    if (ctx->pc == 0x2C17E4u) {
        ctx->pc = 0x2C17E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C17E0u;
        // 0x2c17e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C17E8u;
        goto label_2c17e8;
    }
    ctx->pc = 0x2C17E0u;
    {
        const bool branch_taken_0x2c17e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C17E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C17E0u;
        // 0x2c17e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c17e0) {
            ctx->pc = 0x2C5894u;
            { ctx->pc = 0x2c5894; return; }
        }
    }
    ctx->pc = 0x2C17E8u;
label_2c17e8:
    // 0x2c17e8: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2c17e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2c17ec:
    // 0x2c17ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c17ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c17f0:
    // 0x2c17f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c17f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c17f4:
    // 0x2c17f4: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c17f4u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c17f8:
    // 0x2c17f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c17f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c17fc:
    // 0x2c17fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c17fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1800:
    // 0x2c1800: 0x40000768  .word       0x40000768                   # mfc0        $zero, Index # 00000768 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c1800u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c1804:
    // 0x2c1804: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1804u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1808:
    // 0x2c1808: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1808u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c180c:
    // 0x2c180c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c180cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1810:
    // 0x2c1810: 0x24010410  addiu       $at, $zero, 0x410
    ctx->pc = 0x2c1810u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
label_2c1814:
    // 0x2c1814: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1814u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1818:
    // 0x2c1818: 0x52010010  beql        $s0, $at, . + 4 + (0x10 << 2)
label_2c181c:
    if (ctx->pc == 0x2C181Cu) {
        ctx->pc = 0x2C181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1818u;
        // 0x2c181c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1820u;
        goto label_2c1820;
    }
    ctx->pc = 0x2C1818u;
    {
        const bool branch_taken_0x2c1818 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c1818) {
            ctx->pc = 0x2C181Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1818u;
            // 0x2c181c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C185Cu;
            goto label_2c185c;
        }
    }
    ctx->pc = 0x2C1820u;
label_2c1820:
    // 0x2c1820: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1820u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1824:
    // 0x2c1824: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1824u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1828:
    // 0x2c1828: 0x26fdf7df  addiu       $sp, $s7, -0x821
    ctx->pc = 0x2c1828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 23), 4294965215));
label_2c182c:
    // 0x2c182c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c182cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1830:
    // 0x2c1830: 0x5201000d  beql        $s0, $at, . + 4 + (0xD << 2)
label_2c1834:
    if (ctx->pc == 0x2C1834u) {
        ctx->pc = 0x2C1834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1830u;
        // 0x2c1834: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1838u;
        goto label_2c1838;
    }
    ctx->pc = 0x2C1830u;
    {
        const bool branch_taken_0x2c1830 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c1830) {
            ctx->pc = 0x2C1834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1830u;
            // 0x2c1834: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1868u;
            goto label_2c1868;
        }
    }
    ctx->pc = 0x2C1838u;
label_2c1838:
    // 0x2c1838: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1838u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c183c:
    // 0x2c183c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c183cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1840:
    // 0x2c1840: 0x26ff7df7  addiu       $ra, $s7, 0x7DF7
    ctx->pc = 0x2c1840u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 32247));
label_2c1844:
    // 0x2c1844: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1844u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1848:
    // 0x2c1848: 0x5201000a  beql        $s0, $at, . + 4 + (0xA << 2)
label_2c184c:
    if (ctx->pc == 0x2C184Cu) {
        ctx->pc = 0x2C184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1848u;
        // 0x2c184c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1850u;
        goto label_2c1850;
    }
    ctx->pc = 0x2C1848u;
    {
        const bool branch_taken_0x2c1848 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c1848) {
            ctx->pc = 0x2C184Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1848u;
            // 0x2c184c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1874u;
            goto label_2c1874;
        }
    }
    ctx->pc = 0x2C1850u;
label_2c1850:
    // 0x2c1850: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1850u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1854:
    // 0x2c1854: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1854u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1858:
    // 0x2c1858: 0x26ffbefb  addiu       $ra, $s7, -0x4105
    ctx->pc = 0x2c1858u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294950651));
label_2c185c:
    // 0x2c185c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c185cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1860:
    // 0x2c1860: 0x52010007  beql        $s0, $at, . + 4 + (0x7 << 2)
label_2c1864:
    if (ctx->pc == 0x2C1864u) {
        ctx->pc = 0x2C1864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1860u;
        // 0x2c1864: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1868u;
        goto label_2c1868;
    }
    ctx->pc = 0x2C1860u;
    {
        const bool branch_taken_0x2c1860 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c1860) {
            ctx->pc = 0x2C1864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1860u;
            // 0x2c1864: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1880u;
            goto label_2c1880;
        }
    }
    ctx->pc = 0x2C1868u;
label_2c1868:
    // 0x2c1868: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1868u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c186c:
    // 0x2c186c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c186cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1870:
    // 0x2c1870: 0x26ffdf7d  addiu       $ra, $s7, -0x2083
    ctx->pc = 0x2c1870u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294958973));
label_2c1874:
    // 0x2c1874: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1874u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1878:
    // 0x2c1878: 0x52010004  beql        $s0, $at, . + 4 + (0x4 << 2)
label_2c187c:
    if (ctx->pc == 0x2C187Cu) {
        ctx->pc = 0x2C187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1878u;
        // 0x2c187c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1880u;
        goto label_2c1880;
    }
    ctx->pc = 0x2C1878u;
    {
        const bool branch_taken_0x2c1878 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c1878) {
            ctx->pc = 0x2C187Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1878u;
            // 0x2c187c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C188Cu;
            goto label_2c188c;
        }
    }
    ctx->pc = 0x2C1880u;
label_2c1880:
    // 0x2c1880: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1880u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1884:
    // 0x2c1884: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1884u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1888:
    // 0x2c1888: 0x26ffefbe  addiu       $ra, $s7, -0x1042
    ctx->pc = 0x2c1888u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294963134));
label_2c188c:
    // 0x2c188c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c188cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1890:
    // 0x2c1890: 0x52010001  beql        $s0, $at, . + 4 + (0x1 << 2)
label_2c1894:
    if (ctx->pc == 0x2C1894u) {
        ctx->pc = 0x2C1894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1890u;
        // 0x2c1894: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1898u;
        goto label_2c1898;
    }
    ctx->pc = 0x2C1890u;
    {
        const bool branch_taken_0x2c1890 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c1890) {
            ctx->pc = 0x2C1894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1890u;
            // 0x2c1894: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1898u;
            goto label_2c1898;
        }
    }
    ctx->pc = 0x2C1898u;
label_2c1898:
    // 0x2c1898: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1898u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c189c:
    // 0x2c189c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c189cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c18a0:
    // 0x2c18a0: 0x11e117ff  beq         $t7, $at, . + 4 + (0x17FF << 2)
label_2c18a4:
    if (ctx->pc == 0x2C18A4u) {
        ctx->pc = 0x2C18A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18A0u;
        // 0x2c18a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C18A8u;
        goto label_2c18a8;
    }
    ctx->pc = 0x2C18A0u;
    {
        const bool branch_taken_0x2c18a0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 1));
        ctx->pc = 0x2C18A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18A0u;
        // 0x2c18a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c18a0) {
            ctx->pc = 0x2C78A0u;
            { ctx->pc = 0x2c78a0; return; }
        }
    }
    ctx->pc = 0x2C18A8u;
label_2c18a8:
    // 0x2c18a8: 0x80010872  lb          $at, 0x872($zero)
    ctx->pc = 0x2c18a8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x872u));
label_2c18ac:
    // 0x2c18ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c18acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c18b0:
    // 0x2c18b0: 0xa213fff  j           func_884FFFC
label_2c18b4:
    if (ctx->pc == 0x2C18B4u) {
        ctx->pc = 0x2C18B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18B0u;
        // 0x2c18b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C18B8u;
        goto label_2c18b8;
    }
    ctx->pc = 0x2C18B0u;
    ctx->pc = 0x2C18B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C18B0u;
    // 0x2c18b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x884FFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x884FFFCu, 0x2C18B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C18B8u;
label_2c18b8:
    // 0x2c18b8: 0xa2147ff  j           func_8851FFC
label_2c18bc:
    if (ctx->pc == 0x2C18BCu) {
        ctx->pc = 0x2C18BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18B8u;
        // 0x2c18bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C18C0u;
        goto label_2c18c0;
    }
    ctx->pc = 0x2C18B8u;
    ctx->pc = 0x2C18BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C18B8u;
    // 0x2c18bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8851FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8851FFCu, 0x2C18B8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C18C0u;
label_2c18c0:
    // 0x2c18c0: 0x400007cd  .word       0x400007CD                   # mfc0        $zero, Index # 000007CD <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c18c0u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c18c4:
    // 0x2c18c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c18c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c18c8:
    // 0x2c18c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c18c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c18cc:
    // 0x2c18cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c18ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c18d0:
    // 0x2c18d0: 0x0  nop
    ctx->pc = 0x2c18d0u;
    // NOP
label_2c18d4:
    // 0x2c18d4: 0x4a4b0450  vmaxx.z     $vf17, $vf0, $vf11x
    ctx->pc = 0x2c18d4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
label_2c18d8:
    // 0x2c18d8: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2c18d8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2c18dc:
    // 0x2c18dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c18dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c18e0:
    // 0x2c18e0: 0x1007102c  beq         $zero, $a3, . + 4 + (0x102C << 2)
label_2c18e4:
    if (ctx->pc == 0x2C18E4u) {
        ctx->pc = 0x2C18E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18E0u;
        // 0x2c18e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C18E8u;
        goto label_2c18e8;
    }
    ctx->pc = 0x2C18E0u;
    {
        const bool branch_taken_0x2c18e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2C18E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18E0u;
        // 0x2c18e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c18e0) {
            ctx->pc = 0x2C5994u;
            { ctx->pc = 0x2c5994; return; }
        }
    }
    ctx->pc = 0x2C18E8u;
label_2c18e8:
    // 0x2c18e8: 0x10061001  beq         $zero, $a2, . + 4 + (0x1001 << 2)
label_2c18ec:
    if (ctx->pc == 0x2C18ECu) {
        ctx->pc = 0x2C18ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18E8u;
        // 0x2c18ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C18F0u;
        goto label_2c18f0;
    }
    ctx->pc = 0x2C18E8u;
    {
        const bool branch_taken_0x2c18e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2C18ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18E8u;
        // 0x2c18ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c18e8) {
            ctx->pc = 0x2C58F0u;
            { ctx->pc = 0x2c58f0; return; }
        }
    }
    ctx->pc = 0x2C18F0u;
label_2c18f0:
    // 0x2c18f0: 0x90c3000  j           func_430C000
label_2c18f4:
    if (ctx->pc == 0x2C18F4u) {
        ctx->pc = 0x2C18F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18F0u;
        // 0x2c18f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C18F8u;
        goto label_2c18f8;
    }
    ctx->pc = 0x2C18F0u;
    ctx->pc = 0x2C18F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C18F0u;
    // 0x2c18f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C000u, 0x2C18F0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C18F8u;
label_2c18f8:
    // 0x2c18f8: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2c18fc:
    if (ctx->pc == 0x2C18FCu) {
        ctx->pc = 0x2C18FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18F8u;
        // 0x2c18fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1900u;
        goto label_2c1900;
    }
    ctx->pc = 0x2C18F8u;
    {
        const bool branch_taken_0x2c18f8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C18FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18F8u;
        // 0x2c18fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c18f8) {
            ctx->pc = 0x2C38F8u;
            { ctx->pc = 0x2c38f8; return; }
        }
    }
    ctx->pc = 0x2C1900u;
label_2c1900:
    // 0x2c1900: 0x10033001  beq         $zero, $v1, . + 4 + (0x3001 << 2)
label_2c1904:
    if (ctx->pc == 0x2C1904u) {
        ctx->pc = 0x2C1904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1900u;
        // 0x2c1904: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1908u;
        goto label_2c1908;
    }
    ctx->pc = 0x2C1900u;
    {
        const bool branch_taken_0x2c1900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C1904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1900u;
        // 0x2c1904: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1900) {
            ctx->pc = 0x2CD908u;
            { ctx->pc = 0x2cd908; return; }
        }
    }
    ctx->pc = 0x2C1908u;
label_2c1908:
    // 0x2c1908: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1908u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c190c:
    // 0x2c190c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c190cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1910:
    // 0x2c1910: 0x800b6334  lb          $t3, 0x6334($zero)
    ctx->pc = 0x2c1910u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x6334u));
label_2c1914:
    // 0x2c1914: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1914u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1918:
    // 0x2c1918: 0x800c1970  lb          $t4, 0x1970($zero)
    ctx->pc = 0x2c1918u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x1970u));
label_2c191c:
    // 0x2c191c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c191cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1920:
    // 0x2c1920: 0x81f31b7c  lb          $s3, 0x1B7C($t7)
    ctx->pc = 0x2c1920u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2c1924:
    // 0x2c1924: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1924u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1928:
    // 0x2c1928: 0x1f43000  .word       0x01F43000                   # sll         $a2, $s4, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1928u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 0));
label_2c192c:
    // 0x2c192c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c192cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1930:
    // 0x2c1930: 0x800c29b0  lb          $t4, 0x29B0($zero)
    ctx->pc = 0x2c1930u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x29B0u));
label_2c1934:
    // 0x2c1934: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1934u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1938:
    // 0x2c1938: 0x22000000  addi        $zero, $s0, 0x0
    ctx->pc = 0x2c1938u;
    // NOP (addi to $zero)
label_2c193c:
    // 0x2c193c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c193cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1940:
    // 0x2c1940: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1940u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1944:
    // 0x2c1944: 0x1f309bc  .word       0x01F309BC                   # dsll32      $at, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1944u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << (32 + 6));
label_2c1948:
    // 0x2c1948: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2c1948u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2c194c:
    // 0x2c194c: 0x1f310bd  .word       0x01F310BD                   # INVALID     $t7, $s3, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c194cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C194C raw=0x01F310BD");
 /* MITIGATED */
label_2c1950:
    // 0x2c1950: 0x800c3a30  lb          $t4, 0x3A30($zero)
    ctx->pc = 0x2c1950u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x3A30u));
label_2c1954:
    // 0x2c1954: 0x1f318be  .word       0x01F318BE                   # dsrl32      $v1, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (32 + 2));
label_2c1958:
    // 0x2c1958: 0x800c4230  lb          $t4, 0x4230($zero)
    ctx->pc = 0x2c1958u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x4230u));
label_2c195c:
    // 0x2c195c: 0x1e0270b  .word       0x01E0270B                   # movn        $a0, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c195cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
label_2c1960:
    // 0x2c1960: 0x800c4230  lb          $t4, 0x4230($zero)
    ctx->pc = 0x2c1960u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x4230u));
label_2c1964:
    // 0x2c1964: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1964u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1968:
    // 0x2c1968: 0x802813ff  lb          $t0, 0x13FF($at)
    ctx->pc = 0x2c1968u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 5119)));
label_2c196c:
    // 0x2c196c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c196cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1970:
    // 0x2c1970: 0x81e8a37d  lb          $t0, -0x5C83($t7)
    ctx->pc = 0x2c1970u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2c1974:
    // 0x2c1974: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1974u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1978:
    // 0x2c1978: 0x81fc03bc  lb          $gp, 0x3BC($t7)
    ctx->pc = 0x2c1978u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2c197c:
    // 0x2c197c: 0x1f361bc  .word       0x01F361BC                   # dsll32      $t4, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c197cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 19) << (32 + 6));
label_2c1980:
    // 0x2c1980: 0x81f52b7c  lb          $s5, 0x2B7C($t7)
    ctx->pc = 0x2c1980u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 11132)));
label_2c1984:
    // 0x2c1984: 0x1f368bd  .word       0x01F368BD                   # INVALID     $t7, $s3, 0x68BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1984u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C1984 raw=0x01F368BD");
 /* MITIGATED */
label_2c1988:
    // 0x2c1988: 0x8194337c  lb          $s4, 0x337C($t4)
    ctx->pc = 0x2c1988u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 13180)));
label_2c198c:
    // 0x2c198c: 0x1f370be  .word       0x01F370BE                   # dsrl32      $t6, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c198cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) >> (32 + 2));
label_2c1990:
    // 0x2c1990: 0x8054033d  lb          $s4, 0x33D($v0)
    ctx->pc = 0x2c1990u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2c1994:
    // 0x2c1994: 0x1e07c8b  .word       0x01E07C8B                   # movn        $t7, $t7, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1994u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 15));
label_2c1998:
    // 0x2c1998: 0x81f31b7c  lb          $s3, 0x1B7C($t7)
    ctx->pc = 0x2c1998u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2c199c:
    // 0x2c199c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c199cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c19a0:
    // 0x2c19a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c19a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c19a4:
    // 0x2c19a4: 0x1e7adaa  .word       0x01E7ADAA                   # slt         $s5, $t7, $a3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c19a4u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_2c19a8:
    // 0x2c19a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c19a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c19ac:
    // 0x2c19ac: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c19acu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2c19b0:
    // 0x2c19b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c19b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c19b4:
    // 0x2c19b4: 0x20f721  .word       0x0020F721                   # addu        $fp, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c19b4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2c19b8:
    // 0x2c19b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c19b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c19bc:
    // 0x2c19bc: 0x1c0e7dc  .word       0x01C0E7DC                   # dmult       $t6, $zero # 0000E7C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c19bcu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C19BC raw=0x01C0E7DC");
 /* MITIGATED */
label_2c19c0:
    // 0x2c19c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c19c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c19c4:
    // 0x2c19c4: 0x1e8ad6a  .word       0x01E8AD6A                   # slt         $s5, $t7, $t0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c19c4u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_2c19c8:
    // 0x2c19c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c19c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c19cc:
    // 0x2c19cc: 0x1c5a268  .word       0x01C5A268                   # mfsa        $s4 # 01C50240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c19ccu;
    SET_GPR_U32(ctx, 20, ctx->sa);
label_2c19d0:
    // 0x2c19d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c19d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c19d4:
    // 0x2c19d4: 0x1c6a2a8  .word       0x01C6A2A8                   # mfsa        $s4 # 01C60280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c19d4u;
    SET_GPR_U32(ctx, 20, ctx->sa);
label_2c19d8:
    // 0x2c19d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c19d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c19dc:
    // 0x2c19dc: 0x1e0b59f  .word       0x01E0B59F                   # ddivu       $s6, $t7, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c19dcu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2C19DC raw=0x01E0B59F");
 /* MITIGATED */
label_2c19e0:
    // 0x2c19e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c19e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c19e4:
    // 0x2c19e4: 0x20e7df  .word       0x0020E7DF                   # ddivu       $gp, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c19e4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2C19E4 raw=0x0020E7DF");
 /* MITIGATED */
label_2c19e8:
    // 0x2c19e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c19e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c19ec:
    // 0x2c19ec: 0x1e0ad5f  .word       0x01E0AD5F                   # ddivu       $s5, $t7, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c19ecu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2C19EC raw=0x01E0AD5F");
 /* MITIGATED */
label_2c19f0:
    // 0x2c19f0: 0x10084003  beq         $zero, $t0, . + 4 + (0x4003 << 2)
label_2c19f4:
    if (ctx->pc == 0x2C19F4u) {
        ctx->pc = 0x2C19F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C19F0u;
        // 0x2c19f4: 0x1c04a5c  .word       0x01C04A5C                   # dmult       $t6, $zero # 00004A40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C19F4 raw=0x01C04A5C");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C19F8u;
        goto label_2c19f8;
    }
    ctx->pc = 0x2C19F0u;
    {
        const bool branch_taken_0x2c19f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C19F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C19F0u;
        // 0x2c19f4: 0x1c04a5c  .word       0x01C04A5C                   # dmult       $t6, $zero # 00004A40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C19F4 raw=0x01C04A5C");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c19f0) {
            ctx->pc = 0x2D1A00u;
            return;
        }
    }
    ctx->pc = 0x2C19F8u;
label_2c19f8:
    // 0x2c19f8: 0x10073803  beq         $zero, $a3, . + 4 + (0x3803 << 2)
label_2c19fc:
    if (ctx->pc == 0x2C19FCu) {
        ctx->pc = 0x2C19FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C19F8u;
        // 0x2c19fc: 0x1f6b17c  .word       0x01F6B17C                   # dsll32      $s6, $s6, 5 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1A00u;
        goto label_2c1a00;
    }
    ctx->pc = 0x2C19F8u;
    {
        const bool branch_taken_0x2c19f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2C19FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C19F8u;
        // 0x2c19fc: 0x1f6b17c  .word       0x01F6B17C                   # dsll32      $s6, $s6, 5 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c19f8) {
            ctx->pc = 0x2CFA08u;
            return;
        }
    }
    ctx->pc = 0x2C1A00u;
label_2c1a00:
    // 0x2c1a00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1a00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1a04:
    // 0x2c1a04: 0x20ffd0  .word       0x0020FFD0                   # mfhi        $ra # 002007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1a04u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_2c1a08:
    // 0x2c1a08: 0x800c67f2  lb          $t4, 0x67F2($zero)
    ctx->pc = 0x2c1a08u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x67F2u));
label_2c1a0c:
    // 0x2c1a0c: 0x1f5a97c  .word       0x01F5A97C                   # dsll32      $s5, $s5, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1a0cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 5));
label_2c1a10:
    // 0x2c1a10: 0x3e74ffd  .word       0x03E74FFD                   # INVALID     $ra, $a3, 0x4FFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1a10u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C1A10 raw=0x03E74FFD");
 /* MITIGATED */
label_2c1a14:
    // 0x2c1a14: 0x1c0529c  .word       0x01C0529C                   # dmult       $t6, $zero # 00005280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1a14u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C1A14 raw=0x01C0529C");
 /* MITIGATED */
label_2c1a18:
    // 0x2c1a18: 0x3e7b7fe  .word       0x03E7B7FE                   # dsrl32      $s6, $a3, 31 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1a18u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 7) >> (32 + 31));
label_2c1a1c:
    // 0x2c1a1c: 0x1d291ff  .word       0x01D291FF                   # dsra32      $s2, $s2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1a1cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 7));
label_2c1a20:
    // 0x2c1a20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1a20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1a24:
    // 0x2c1a24: 0x1fcf97d  .word       0x01FCF97D                   # INVALID     $t7, $gp, -0x683 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1a24u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C1A24 raw=0x01FCF97D");
 /* MITIGATED */
label_2c1a28:
    // 0x2c1a28: 0x3e8affe  .word       0x03E8AFFE                   # dsrl32      $s5, $t0, 31 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1a28u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 8) >> (32 + 31));
label_2c1a2c:
    // 0x2c1a2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1a2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1a30:
    // 0x2c1a30: 0x3e857fd  .word       0x03E857FD                   # INVALID     $ra, $t0, 0x57FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1a30u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C1A30 raw=0x03E857FD");
 /* MITIGATED */
label_2c1a34:
    // 0x2c1a34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1a34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1a38:
    // 0x2c1a38: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c1a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c1a3c:
    // 0x2c1a3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1a3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1a40:
    // 0x2c1a40: 0x8062e3fc  lb          $v0, -0x1C04($v1)
    ctx->pc = 0x2c1a40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294960124)));
label_2c1a44:
    // 0x2c1a44: 0x1f309bc  .word       0x01F309BC                   # dsll32      $at, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1a44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << (32 + 6));
label_2c1a48:
    // 0x2c1a48: 0x3e7e7ff  .word       0x03E7E7FF                   # dsra32      $gp, $a3, 31 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1a48u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 7) >> (32 + 31));
label_2c1a4c:
    // 0x2c1a4c: 0x1f310bd  .word       0x01F310BD                   # INVALID     $t7, $s3, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1a4cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C1A4C raw=0x01F310BD");
 /* MITIGATED */
label_2c1a50:
    // 0x2c1a50: 0x3e8e7ff  .word       0x03E8E7FF                   # dsra32      $gp, $t0, 31 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1a50u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 8) >> (32 + 31));
label_2c1a54:
    // 0x2c1a54: 0x1f318be  .word       0x01F318BE                   # dsrl32      $v1, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (32 + 2));
label_2c1a58:
    // 0x2c1a58: 0x52010015  beql        $s0, $at, . + 4 + (0x15 << 2)
label_2c1a5c:
    if (ctx->pc == 0x2C1A5Cu) {
        ctx->pc = 0x2C1A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1A58u;
        // 0x2c1a5c: 0x1e0270b  .word       0x01E0270B                   # movn        $a0, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1A60u;
        goto label_2c1a60;
    }
    ctx->pc = 0x2C1A58u;
    {
        const bool branch_taken_0x2c1a58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c1a58) {
            ctx->pc = 0x2C1A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1A58u;
            // 0x2c1a5c: 0x1e0270b  .word       0x01E0270B                   # movn        $a0, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1AB0u;
            goto label_2c1ab0;
        }
    }
    ctx->pc = 0x2C1A60u;
label_2c1a60:
    // 0x2c1a60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1a60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1a64:
    // 0x2c1a64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1a64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1a68:
    // 0x2c1a68: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2c1a68u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2c1a6c:
    // 0x2c1a6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1a6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1a70:
    // 0x2c1a70: 0x520c07e0  beql        $s0, $t4, . + 4 + (0x7E0 << 2)
label_2c1a74:
    if (ctx->pc == 0x2C1A74u) {
        ctx->pc = 0x2C1A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1A70u;
        // 0x2c1a74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1A78u;
        goto label_2c1a78;
    }
    ctx->pc = 0x2C1A70u;
    {
        const bool branch_taken_0x2c1a70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        if (branch_taken_0x2c1a70) {
            ctx->pc = 0x2C1A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1A70u;
            // 0x2c1a74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C39F4u;
            { ctx->pc = 0x2c39f4; return; }
        }
    }
    ctx->pc = 0x2C1A78u;
label_2c1a78:
    // 0x2c1a78: 0x802113fe  lb          $at, 0x13FE($at)
    ctx->pc = 0x2c1a78u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 5118)));
label_2c1a7c:
    // 0x2c1a7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1a7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1a80:
    // 0x2c1a80: 0x810413fe  lb          $a0, 0x13FE($t0)
    ctx->pc = 0x2c1a80u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 5118)));
label_2c1a84:
    // 0x2c1a84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1a84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1a88:
    // 0x2c1a88: 0x800801f0  lb          $t0, 0x1F0($zero)
    ctx->pc = 0x2c1a88u;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x1F0u));
label_2c1a8c:
    // 0x2c1a8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1a8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1a90:
    // 0x2c1a90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1a90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1a94:
    // 0x2c1a94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1a94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1a98:
    // 0x2c1a98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1a98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1a9c:
    // 0x2c1a9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1a9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1aa0:
    // 0x2c1aa0: 0x12042001  beq         $s0, $a0, . + 4 + (0x2001 << 2)
label_2c1aa4:
    if (ctx->pc == 0x2C1AA4u) {
        ctx->pc = 0x2C1AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1AA0u;
        // 0x2c1aa4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1AA8u;
        goto label_2c1aa8;
    }
    ctx->pc = 0x2C1AA0u;
    {
        const bool branch_taken_0x2c1aa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x2C1AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1AA0u;
        // 0x2c1aa4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1aa0) {
            ctx->pc = 0x2C9AA8u;
            { ctx->pc = 0x2c9aa8; return; }
        }
    }
    ctx->pc = 0x2C1AA8u;
label_2c1aa8:
    // 0x2c1aa8: 0x81030bfe  lb          $v1, 0xBFE($t0)
    ctx->pc = 0x2c1aa8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 3070)));
label_2c1aac:
    // 0x2c1aac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1aacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1ab0:
    // 0x2c1ab0: 0x5a0027c7  blezl       $s0, . + 4 + (0x27C7 << 2)
label_2c1ab4:
    if (ctx->pc == 0x2C1AB4u) {
        ctx->pc = 0x2C1AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1AB0u;
        // 0x2c1ab4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1AB8u;
        goto label_2c1ab8;
    }
    ctx->pc = 0x2C1AB0u;
    {
        const bool branch_taken_0x2c1ab0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2c1ab0) {
            ctx->pc = 0x2C1AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1AB0u;
            // 0x2c1ab4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB9D0u;
            { ctx->pc = 0x2cb9d0; return; }
        }
    }
    ctx->pc = 0x2C1AB8u;
label_2c1ab8:
    // 0x2c1ab8: 0x810413ff  lb          $a0, 0x13FF($t0)
    ctx->pc = 0x2c1ab8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 5119)));
label_2c1abc:
    // 0x2c1abc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1abcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1ac0:
    // 0x2c1ac0: 0x11eb1fff  beq         $t7, $t3, . + 4 + (0x1FFF << 2)
label_2c1ac4:
    if (ctx->pc == 0x2C1AC4u) {
        ctx->pc = 0x2C1AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1AC0u;
        // 0x2c1ac4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1AC8u;
        goto label_2c1ac8;
    }
    ctx->pc = 0x2C1AC0u;
    {
        const bool branch_taken_0x2c1ac0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C1AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1AC0u;
        // 0x2c1ac4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1ac0) {
            ctx->pc = 0x2C9AC0u;
            { ctx->pc = 0x2c9ac0; return; }
        }
    }
    ctx->pc = 0x2C1AC8u;
label_2c1ac8:
    // 0x2c1ac8: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2c1acc:
    if (ctx->pc == 0x2C1ACCu) {
        ctx->pc = 0x2C1ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1AC8u;
        // 0x2c1acc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1AD0u;
        goto label_2c1ad0;
    }
    ctx->pc = 0x2C1AC8u;
    {
        const bool branch_taken_0x2c1ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C1ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1AC8u;
        // 0x2c1acc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1ac8) {
            ctx->pc = 0x2D7AD0u;
            return;
        }
    }
    ctx->pc = 0x2C1AD0u;
label_2c1ad0:
    // 0x2c1ad0: 0x810b0bff  lb          $t3, 0xBFF($t0)
    ctx->pc = 0x2c1ad0u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 3071)));
label_2c1ad4:
    // 0x2c1ad4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1ad4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1ad8:
    // 0x2c1ad8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1ad8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1adc:
    // 0x2c1adc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1adcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1ae0:
    // 0x2c1ae0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1ae0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1ae4:
    // 0x2c1ae4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1ae4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1ae8:
    // 0x2c1ae8: 0x1002102c  beq         $zero, $v0, . + 4 + (0x102C << 2)
label_2c1aec:
    if (ctx->pc == 0x2C1AECu) {
        ctx->pc = 0x2C1AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1AE8u;
        // 0x2c1aec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1AF0u;
        goto label_2c1af0;
    }
    ctx->pc = 0x2C1AE8u;
    {
        const bool branch_taken_0x2c1ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C1AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1AE8u;
        // 0x2c1aec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1ae8) {
            ctx->pc = 0x2C5B9Cu;
            { ctx->pc = 0x2c5b9c; return; }
        }
    }
    ctx->pc = 0x2C1AF0u;
label_2c1af0:
    // 0x2c1af0: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2c1af0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2c1af4:
    // 0x2c1af4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1af4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1af8:
    // 0x2c1af8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1af8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1afc:
    // 0x2c1afc: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c1afcu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c1b00:
    // 0x2c1b00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1b00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1b04:
    // 0x2c1b04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1b04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1b08:
    // 0x2c1b08: 0x11e117ff  beq         $t7, $at, . + 4 + (0x17FF << 2)
label_2c1b0c:
    if (ctx->pc == 0x2C1B0Cu) {
        ctx->pc = 0x2C1B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B08u;
        // 0x2c1b0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1B10u;
        goto label_2c1b10;
    }
    ctx->pc = 0x2C1B08u;
    {
        const bool branch_taken_0x2c1b08 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 1));
        ctx->pc = 0x2C1B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B08u;
        // 0x2c1b0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1b08) {
            ctx->pc = 0x2C7B08u;
            { ctx->pc = 0x2c7b08; return; }
        }
    }
    ctx->pc = 0x2C1B10u;
label_2c1b10:
    // 0x2c1b10: 0x80010872  lb          $at, 0x872($zero)
    ctx->pc = 0x2c1b10u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x872u));
label_2c1b14:
    // 0x2c1b14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1b14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1b18:
    // 0x2c1b18: 0xa213fff  j           func_884FFFC
label_2c1b1c:
    if (ctx->pc == 0x2C1B1Cu) {
        ctx->pc = 0x2C1B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B18u;
        // 0x2c1b1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1B20u;
        goto label_2c1b20;
    }
    ctx->pc = 0x2C1B18u;
    ctx->pc = 0x2C1B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1B18u;
    // 0x2c1b1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x884FFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x884FFFCu, 0x2C1B18u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C1B20u;
label_2c1b20:
    // 0x2c1b20: 0x400007e8  .word       0x400007E8                   # mfc0        $zero, Index # 000007E8 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c1b20u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c1b24:
    // 0x2c1b24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1b24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1b28:
    // 0x2c1b28: 0xa2147ff  j           func_8851FFC
label_2c1b2c:
    if (ctx->pc == 0x2C1B2Cu) {
        ctx->pc = 0x2C1B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B28u;
        // 0x2c1b2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1B30u;
        goto label_2c1b30;
    }
    ctx->pc = 0x2C1B28u;
    ctx->pc = 0x2C1B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1B28u;
    // 0x2c1b2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8851FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8851FFCu, 0x2C1B28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C1B30u;
label_2c1b30:
    // 0x2c1b30: 0x0  nop
    ctx->pc = 0x2c1b30u;
    // NOP
label_2c1b34:
    // 0x2c1b34: 0x4a000450  vmaxx       $vf17, $vf0, $vf0x
    ctx->pc = 0x2c1b34u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
label_2c1b38:
    // 0x2c1b38: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2c1b38u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2c1b3c:
    // 0x2c1b3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1b3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1b40:
    // 0x2c1b40: 0x88c1000  j           func_2304000
label_2c1b44:
    if (ctx->pc == 0x2C1B44u) {
        ctx->pc = 0x2C1B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B40u;
        // 0x2c1b44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1B48u;
        goto label_2c1b48;
    }
    ctx->pc = 0x2C1B40u;
    ctx->pc = 0x2C1B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1B40u;
    // 0x2c1b44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2304000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2304000u, 0x2C1B40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C1B48u;
label_2c1b48:
    // 0x2c1b48: 0x1006102c  beq         $zero, $a2, . + 4 + (0x102C << 2)
label_2c1b4c:
    if (ctx->pc == 0x2C1B4Cu) {
        ctx->pc = 0x2C1B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B48u;
        // 0x2c1b4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1B50u;
        goto label_2c1b50;
    }
    ctx->pc = 0x2C1B48u;
    {
        const bool branch_taken_0x2c1b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2C1B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B48u;
        // 0x2c1b4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1b48) {
            ctx->pc = 0x2C5BFCu;
            { ctx->pc = 0x2c5bfc; return; }
        }
    }
    ctx->pc = 0x2C1B50u;
label_2c1b50:
    // 0x2c1b50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1b50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1b54:
    // 0x2c1b54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1b54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1b58:
    // 0x2c1b58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1b58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1b5c:
    // 0x2c1b5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1b5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1b60:
    // 0x2c1b60: 0x800c3330  lb          $t4, 0x3330($zero)
    ctx->pc = 0x2c1b60u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x3330u));
label_2c1b64:
    // 0x2c1b64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1b64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1b68:
    // 0x2c1b68: 0xa8c1000  j           func_A304000
label_2c1b6c:
    if (ctx->pc == 0x2C1B6Cu) {
        ctx->pc = 0x2C1B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B68u;
        // 0x2c1b6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1B70u;
        goto label_2c1b70;
    }
    ctx->pc = 0x2C1B68u;
    ctx->pc = 0x2C1B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1B68u;
    // 0x2c1b6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA304000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA304000u, 0x2C1B68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C1B70u;
label_2c1b70:
    // 0x2c1b70: 0x10051001  beq         $zero, $a1, . + 4 + (0x1001 << 2)
label_2c1b74:
    if (ctx->pc == 0x2C1B74u) {
        ctx->pc = 0x2C1B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B70u;
        // 0x2c1b74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1B78u;
        goto label_2c1b78;
    }
    ctx->pc = 0x2C1B70u;
    {
        const bool branch_taken_0x2c1b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x2C1B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B70u;
        // 0x2c1b74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1b70) {
            ctx->pc = 0x2C5B78u;
            { ctx->pc = 0x2c5b78; return; }
        }
    }
    ctx->pc = 0x2C1B78u;
label_2c1b78:
    // 0x2c1b78: 0x90c2800  j           func_430A000
label_2c1b7c:
    if (ctx->pc == 0x2C1B7Cu) {
        ctx->pc = 0x2C1B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B78u;
        // 0x2c1b7c: 0x1e08418  .word       0x01E08418                   # mult        $s0, $t7, $zero # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1B80u;
        goto label_2c1b80;
    }
    ctx->pc = 0x2C1B78u;
    ctx->pc = 0x2C1B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1B78u;
    // 0x2c1b7c: 0x1e08418  .word       0x01E08418                   # mult        $s0, $t7, $zero # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x430A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430A000u, 0x2C1B78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C1B80u;
label_2c1b80:
    // 0x2c1b80: 0x82e2800  j           func_B8A000
label_2c1b84:
    if (ctx->pc == 0x2C1B84u) {
        ctx->pc = 0x2C1B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B80u;
        // 0x2c1b84: 0x1e08c58  .word       0x01E08C58                   # mult        $s1, $t7, $zero # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1B88u;
        goto label_2c1b88;
    }
    ctx->pc = 0x2C1B80u;
    ctx->pc = 0x2C1B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1B80u;
    // 0x2c1b84: 0x1e08c58  .word       0x01E08C58                   # mult        $s1, $t7, $zero # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0xB8A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB8A000u, 0x2C1B80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C1B88u;
label_2c1b88:
    // 0x2c1b88: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2c1b8c:
    if (ctx->pc == 0x2C1B8Cu) {
        ctx->pc = 0x2C1B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B88u;
        // 0x2c1b8c: 0x1e09498  .word       0x01E09498                   # mult        $s2, $t7, $zero # 00000480 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1B90u;
        goto label_2c1b90;
    }
    ctx->pc = 0x2C1B88u;
    {
        const bool branch_taken_0x2c1b88 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C1B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B88u;
        // 0x2c1b8c: 0x1e09498  .word       0x01E09498                   # mult        $s2, $t7, $zero # 00000480 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1b88) {
            ctx->pc = 0x2C3B88u;
            { ctx->pc = 0x2c3b88; return; }
        }
    }
    ctx->pc = 0x2C1B90u;
label_2c1b90:
    // 0x2c1b90: 0x10032801  beq         $zero, $v1, . + 4 + (0x2801 << 2)
label_2c1b94:
    if (ctx->pc == 0x2C1B94u) {
        ctx->pc = 0x2C1B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B90u;
        // 0x2c1b94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1B98u;
        goto label_2c1b98;
    }
    ctx->pc = 0x2C1B90u;
    {
        const bool branch_taken_0x2c1b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C1B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B90u;
        // 0x2c1b94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1b90) {
            ctx->pc = 0x2CBB98u;
            { ctx->pc = 0x2cbb98; return; }
        }
    }
    ctx->pc = 0x2C1B98u;
label_2c1b98:
    // 0x2c1b98: 0x10010002  beq         $zero, $at, . + 4 + (0x2 << 2)
label_2c1b9c:
    if (ctx->pc == 0x2C1B9Cu) {
        ctx->pc = 0x2C1B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B98u;
        // 0x2c1b9c: 0x208428  .word       0x00208428                   # mfsa        $s0 # 00200400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 16, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1BA0u;
        goto label_2c1ba0;
    }
    ctx->pc = 0x2C1B98u;
    {
        const bool branch_taken_0x2c1b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2C1B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1B98u;
        // 0x2c1b9c: 0x208428  .word       0x00208428                   # mfsa        $s0 # 00200400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 16, ctx->sa);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1b98) {
            ctx->pc = 0x2C1BA4u;
            goto label_2c1ba4;
        }
    }
    ctx->pc = 0x2C1BA0u;
label_2c1ba0:
    // 0x2c1ba0: 0x80017074  lb          $at, 0x7074($zero)
    ctx->pc = 0x2c1ba0u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x7074u));
label_2c1ba4:
    // 0x2c1ba4: 0x208c68  .word       0x00208C68                   # mfsa        $s1 # 00200440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c1ba4u;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_2c1ba8:
    // 0x2c1ba8: 0x800b6334  lb          $t3, 0x6334($zero)
    ctx->pc = 0x2c1ba8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x6334u));
label_2c1bac:
    // 0x2c1bac: 0x2094a8  .word       0x002094A8                   # mfsa        $s2 # 00200480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c1bacu;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_2c1bb0:
    // 0x2c1bb0: 0x50010002  beql        $zero, $at, . + 4 + (0x2 << 2)
label_2c1bb4:
    if (ctx->pc == 0x2C1BB4u) {
        ctx->pc = 0x2C1BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1BB0u;
        // 0x2c1bb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1BB8u;
        goto label_2c1bb8;
    }
    ctx->pc = 0x2C1BB0u;
    {
        const bool branch_taken_0x2c1bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c1bb0) {
            ctx->pc = 0x2C1BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1BB0u;
            // 0x2c1bb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1BBCu;
            goto label_2c1bbc;
        }
    }
    ctx->pc = 0x2C1BB8u;
label_2c1bb8:
    // 0x2c1bb8: 0x800d07f2  lb          $t5, 0x7F2($zero)
    ctx->pc = 0x2c1bb8u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x7F2u));
label_2c1bbc:
    // 0x2c1bbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1bbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1bc0:
    // 0x2c1bc0: 0x100d0003  beq         $zero, $t5, . + 4 + (0x3 << 2)
label_2c1bc4:
    if (ctx->pc == 0x2C1BC4u) {
        ctx->pc = 0x2C1BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1BC0u;
        // 0x2c1bc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1BC8u;
        goto label_2c1bc8;
    }
    ctx->pc = 0x2C1BC0u;
    {
        const bool branch_taken_0x2c1bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2C1BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1BC0u;
        // 0x2c1bc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1bc0) {
            ctx->pc = 0x2C1BD0u;
            goto label_2c1bd0;
        }
    }
    ctx->pc = 0x2C1BC8u;
label_2c1bc8:
    // 0x2c1bc8: 0x802813fe  lb          $t0, 0x13FE($at)
    ctx->pc = 0x2c1bc8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 5118)));
label_2c1bcc:
    // 0x2c1bcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1bccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1bd0:
    // 0x2c1bd0: 0x800c1930  lb          $t4, 0x1930($zero)
    ctx->pc = 0x2c1bd0u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x1930u));
label_2c1bd4:
    // 0x2c1bd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1bd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1bd8:
    // 0x2c1bd8: 0x1f42800  .word       0x01F42800                   # sll         $a1, $s4, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 0));
label_2c1bdc:
    // 0x2c1bdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1bdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1be0:
    // 0x2c1be0: 0x800c2170  lb          $t4, 0x2170($zero)
    ctx->pc = 0x2c1be0u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x2170u));
label_2c1be4:
    // 0x2c1be4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1be4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1be8:
    // 0x2c1be8: 0x22000000  addi        $zero, $s0, 0x0
    ctx->pc = 0x2c1be8u;
    // NOP (addi to $zero)
label_2c1bec:
    // 0x2c1bec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1becu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1bf0:
    // 0x2c1bf0: 0x809e6bfd  lb          $fp, 0x6BFD($a0)
    ctx->pc = 0x2c1bf0u;
    SET_GPR_S32(ctx, 30, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 27645)));
label_2c1bf4:
    // 0x2c1bf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1bf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1bf8:
    // 0x2c1bf8: 0x81e6a37d  lb          $a2, -0x5C83($t7)
    ctx->pc = 0x2c1bf8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2c1bfc:
    // 0x2c1bfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1bfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1c00:
    // 0x2c1c00: 0x800c31f0  lb          $t4, 0x31F0($zero)
    ctx->pc = 0x2c1c00u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x31F0u));
label_2c1c04:
    // 0x2c1c04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1c04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1c08:
    // 0x2c1c08: 0x800c39f0  lb          $t4, 0x39F0($zero)
    ctx->pc = 0x2c1c08u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x39F0u));
label_2c1c0c:
    // 0x2c1c0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1c0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1c10:
    // 0x2c1c10: 0x800c39f0  lb          $t4, 0x39F0($zero)
    ctx->pc = 0x2c1c10u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x39F0u));
label_2c1c14:
    // 0x2c1c14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1c14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1c18:
    // 0x2c1c18: 0x80074231  lb          $a3, 0x4231($zero)
    ctx->pc = 0x2c1c18u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x4231u));
label_2c1c1c:
    // 0x2c1c1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1c1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1c20:
    // 0x2c1c20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1c20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1c24:
    // 0x2c1c24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1c24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1c28:
    // 0x2c1c28: 0x5a004002  blezl       $s0, . + 4 + (0x4002 << 2)
label_2c1c2c:
    if (ctx->pc == 0x2C1C2Cu) {
        ctx->pc = 0x2C1C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1C28u;
        // 0x2c1c2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1C30u;
        goto label_2c1c30;
    }
    ctx->pc = 0x2C1C28u;
    {
        const bool branch_taken_0x2c1c28 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2c1c28) {
            ctx->pc = 0x2C1C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1C28u;
            // 0x2c1c2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1C34u;
            return;
        }
    }
    ctx->pc = 0x2C1C30u;
label_2c1c30:
    // 0x2c1c30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1c30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1c34:
    // 0x2c1c34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1c34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1c38:
    // 0x2c1c38: 0x802713ff  lb          $a3, 0x13FF($at)
    ctx->pc = 0x2c1c38u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 5119)));
label_2c1c3c:
    // 0x2c1c3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1c3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1c40:
    // 0x2c1c40: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2c1c40u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2c1c44:
    // 0x2c1c44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1c44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1c48:
    // 0x2c1c48: 0x800b07b2  lb          $t3, 0x7B2($zero)
    ctx->pc = 0x2c1c48u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x7B2u));
label_2c1c4c:
    // 0x2c1c4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1c4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1c50:
    // 0x2c1c50: 0x800a07b2  lb          $t2, 0x7B2($zero)
    ctx->pc = 0x2c1c50u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x7B2u));
label_2c1c54:
    // 0x2c1c54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1c54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1c58:
    // 0x2c1c58: 0x800907b2  lb          $t1, 0x7B2($zero)
    ctx->pc = 0x2c1c58u;
    SET_GPR_S32(ctx, 9, (int8_t)FAST_READ8(0x7B2u));
label_2c1c5c:
    // 0x2c1c5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1c5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1c60:
    // 0x2c1c60: 0x81f31b7c  lb          $s3, 0x1B7C($t7)
    ctx->pc = 0x2c1c60u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2c1c64:
    // 0x2c1c64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1c64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1c68:
    // 0x2c1c68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1c68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1c6c:
    // 0x2c1c6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1c6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1c70:
    // 0x2c1c70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1c70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1c74:
    // 0x2c1c74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1c74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1c78:
    // 0x2c1c78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1c78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1c7c:
    // 0x2c1c7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1c7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1c80:
    // 0x2c1c80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1c80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1c84:
    // 0x2c1c84: 0x1f309bc  .word       0x01F309BC                   # dsll32      $at, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1c84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << (32 + 6));
label_2c1c88:
    // 0x2c1c88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1c88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1c8c:
    // 0x2c1c8c: 0x1f310bd  .word       0x01F310BD                   # INVALID     $t7, $s3, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1c8cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C1C8C raw=0x01F310BD");
 /* MITIGATED */
label_2c1c90:
    // 0x2c1c90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1c90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1c94:
    // 0x2c1c94: 0x1f318be  .word       0x01F318BE                   # dsrl32      $v1, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (32 + 2));
label_2c1c98:
    // 0x2c1c98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1c98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1c9c:
    // 0x2c1c9c: 0x1e0270b  .word       0x01E0270B                   # movn        $a0, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1c9cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
label_2c1ca0:
    // 0x2c1ca0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1ca0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1ca4:
    // 0x2c1ca4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1ca4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1ca8:
    // 0x2c1ca8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1ca8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1cac:
    // 0x2c1cac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1cacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1cb0:
    // 0x2c1cb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1cb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1cb4:
    // 0x2c1cb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1cb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1cb8:
    // 0x2c1cb8: 0x81fc03bc  lb          $gp, 0x3BC($t7)
    ctx->pc = 0x2c1cb8u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2c1cbc:
    // 0x2c1cbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1cbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1cc0:
    // 0x2c1cc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1cc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1cc4:
    // 0x2c1cc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1cc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1cc8:
    // 0x2c1cc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1cc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1ccc:
    // 0x2c1ccc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1cccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1cd0:
    // 0x2c1cd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1cd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1cd4:
    // 0x2c1cd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1cd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1cd8:
    // 0x2c1cd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1cd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1cdc:
    // 0x2c1cdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1cdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1ce0:
    // 0x2c1ce0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1ce0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1ce4:
    // 0x2c1ce4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1ce4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1ce8:
    // 0x2c1ce8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1ce8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1cec:
    // 0x2c1cec: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1cecu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2c1cf0:
    // 0x2c1cf0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1cf0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1cf4:
    // 0x2c1cf4: 0x20f721  .word       0x0020F721                   # addu        $fp, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1cf4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2c1cf8:
    // 0x2c1cf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1cf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1cfc:
    // 0x2c1cfc: 0x1c0e7dc  .word       0x01C0E7DC                   # dmult       $t6, $zero # 0000E7C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1cfcu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C1CFC raw=0x01C0E7DC");
 /* MITIGATED */
label_2c1d00:
    // 0x2c1d00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1d00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1d04:
    // 0x2c1d04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1d04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1d08:
    // 0x2c1d08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1d08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1d0c:
    // 0x2c1d0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1d0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1d10:
    // 0x2c1d10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1d10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1d14:
    // 0x2c1d14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1d14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1d18:
    // 0x2c1d18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1d18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1d1c:
    // 0x2c1d1c: 0x20e7df  .word       0x0020E7DF                   # ddivu       $gp, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1d1cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2C1D1C raw=0x0020E7DF");
 /* MITIGATED */
    ctx->pc = 0x2c1d20u;
    return;
}
