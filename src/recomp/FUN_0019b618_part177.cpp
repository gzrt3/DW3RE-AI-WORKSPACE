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


void FUN_0019b618_part177(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x1f1770u: goto label_1f1770;
        case 0x1f1774u: goto label_1f1774;
        case 0x1f1778u: goto label_1f1778;
        case 0x1f177cu: goto label_1f177c;
        case 0x1f1780u: goto label_1f1780;
        case 0x1f1784u: goto label_1f1784;
        case 0x1f1788u: goto label_1f1788;
        case 0x1f178cu: goto label_1f178c;
        case 0x1f1790u: goto label_1f1790;
        case 0x1f1794u: goto label_1f1794;
        case 0x1f1798u: goto label_1f1798;
        case 0x1f179cu: goto label_1f179c;
        case 0x1f17a0u: goto label_1f17a0;
        case 0x1f17a4u: goto label_1f17a4;
        case 0x1f17a8u: goto label_1f17a8;
        case 0x1f17acu: goto label_1f17ac;
        case 0x1f17b0u: goto label_1f17b0;
        case 0x1f17b4u: goto label_1f17b4;
        case 0x1f17b8u: goto label_1f17b8;
        case 0x1f17bcu: goto label_1f17bc;
        case 0x1f17c0u: goto label_1f17c0;
        case 0x1f17c4u: goto label_1f17c4;
        case 0x1f17c8u: goto label_1f17c8;
        case 0x1f17ccu: goto label_1f17cc;
        case 0x1f17d0u: goto label_1f17d0;
        case 0x1f17d4u: goto label_1f17d4;
        case 0x1f17d8u: goto label_1f17d8;
        case 0x1f17dcu: goto label_1f17dc;
        case 0x1f17e0u: goto label_1f17e0;
        case 0x1f17e4u: goto label_1f17e4;
        case 0x1f17e8u: goto label_1f17e8;
        case 0x1f17ecu: goto label_1f17ec;
        case 0x1f17f0u: goto label_1f17f0;
        case 0x1f17f4u: goto label_1f17f4;
        case 0x1f17f8u: goto label_1f17f8;
        case 0x1f17fcu: goto label_1f17fc;
        case 0x1f1800u: goto label_1f1800;
        case 0x1f1804u: goto label_1f1804;
        case 0x1f1808u: goto label_1f1808;
        case 0x1f180cu: goto label_1f180c;
        case 0x1f1810u: goto label_1f1810;
        case 0x1f1814u: goto label_1f1814;
        case 0x1f1818u: goto label_1f1818;
        case 0x1f181cu: goto label_1f181c;
        case 0x1f1820u: goto label_1f1820;
        case 0x1f1824u: goto label_1f1824;
        case 0x1f1828u: goto label_1f1828;
        case 0x1f182cu: goto label_1f182c;
        case 0x1f1830u: goto label_1f1830;
        case 0x1f1834u: goto label_1f1834;
        case 0x1f1838u: goto label_1f1838;
        case 0x1f183cu: goto label_1f183c;
        case 0x1f1840u: goto label_1f1840;
        case 0x1f1844u: goto label_1f1844;
        case 0x1f1848u: goto label_1f1848;
        case 0x1f184cu: goto label_1f184c;
        case 0x1f1850u: goto label_1f1850;
        case 0x1f1854u: goto label_1f1854;
        case 0x1f1858u: goto label_1f1858;
        case 0x1f185cu: goto label_1f185c;
        case 0x1f1860u: goto label_1f1860;
        case 0x1f1864u: goto label_1f1864;
        case 0x1f1868u: goto label_1f1868;
        case 0x1f186cu: goto label_1f186c;
        case 0x1f1870u: goto label_1f1870;
        case 0x1f1874u: goto label_1f1874;
        case 0x1f1878u: goto label_1f1878;
        case 0x1f187cu: goto label_1f187c;
        case 0x1f1880u: goto label_1f1880;
        case 0x1f1884u: goto label_1f1884;
        case 0x1f1888u: goto label_1f1888;
        case 0x1f188cu: goto label_1f188c;
        case 0x1f1890u: goto label_1f1890;
        case 0x1f1894u: goto label_1f1894;
        case 0x1f1898u: goto label_1f1898;
        case 0x1f189cu: goto label_1f189c;
        case 0x1f18a0u: goto label_1f18a0;
        case 0x1f18a4u: goto label_1f18a4;
        case 0x1f18a8u: goto label_1f18a8;
        case 0x1f18acu: goto label_1f18ac;
        case 0x1f18b0u: goto label_1f18b0;
        case 0x1f18b4u: goto label_1f18b4;
        case 0x1f18b8u: goto label_1f18b8;
        case 0x1f18bcu: goto label_1f18bc;
        case 0x1f18c0u: goto label_1f18c0;
        case 0x1f18c4u: goto label_1f18c4;
        case 0x1f18c8u: goto label_1f18c8;
        case 0x1f18ccu: goto label_1f18cc;
        case 0x1f18d0u: goto label_1f18d0;
        case 0x1f18d4u: goto label_1f18d4;
        case 0x1f18d8u: goto label_1f18d8;
        case 0x1f18dcu: goto label_1f18dc;
        case 0x1f18e0u: goto label_1f18e0;
        case 0x1f18e4u: goto label_1f18e4;
        case 0x1f18e8u: goto label_1f18e8;
        case 0x1f18ecu: goto label_1f18ec;
        case 0x1f18f0u: goto label_1f18f0;
        case 0x1f18f4u: goto label_1f18f4;
        case 0x1f18f8u: goto label_1f18f8;
        case 0x1f18fcu: goto label_1f18fc;
        case 0x1f1900u: goto label_1f1900;
        case 0x1f1904u: goto label_1f1904;
        case 0x1f1908u: goto label_1f1908;
        case 0x1f190cu: goto label_1f190c;
        case 0x1f1910u: goto label_1f1910;
        case 0x1f1914u: goto label_1f1914;
        case 0x1f1918u: goto label_1f1918;
        case 0x1f191cu: goto label_1f191c;
        case 0x1f1920u: goto label_1f1920;
        case 0x1f1924u: goto label_1f1924;
        case 0x1f1928u: goto label_1f1928;
        case 0x1f192cu: goto label_1f192c;
        case 0x1f1930u: goto label_1f1930;
        case 0x1f1934u: goto label_1f1934;
        case 0x1f1938u: goto label_1f1938;
        case 0x1f193cu: goto label_1f193c;
        case 0x1f1940u: goto label_1f1940;
        case 0x1f1944u: goto label_1f1944;
        case 0x1f1948u: goto label_1f1948;
        case 0x1f194cu: goto label_1f194c;
        case 0x1f1950u: goto label_1f1950;
        case 0x1f1954u: goto label_1f1954;
        case 0x1f1958u: goto label_1f1958;
        case 0x1f195cu: goto label_1f195c;
        case 0x1f1960u: goto label_1f1960;
        case 0x1f1964u: goto label_1f1964;
        case 0x1f1968u: goto label_1f1968;
        case 0x1f196cu: goto label_1f196c;
        case 0x1f1970u: goto label_1f1970;
        case 0x1f1974u: goto label_1f1974;
        case 0x1f1978u: goto label_1f1978;
        case 0x1f197cu: goto label_1f197c;
        case 0x1f1980u: goto label_1f1980;
        case 0x1f1984u: goto label_1f1984;
        case 0x1f1988u: goto label_1f1988;
        case 0x1f198cu: goto label_1f198c;
        case 0x1f1990u: goto label_1f1990;
        case 0x1f1994u: goto label_1f1994;
        case 0x1f1998u: goto label_1f1998;
        case 0x1f199cu: goto label_1f199c;
        case 0x1f19a0u: goto label_1f19a0;
        case 0x1f19a4u: goto label_1f19a4;
        case 0x1f19a8u: goto label_1f19a8;
        case 0x1f19acu: goto label_1f19ac;
        case 0x1f19b0u: goto label_1f19b0;
        case 0x1f19b4u: goto label_1f19b4;
        case 0x1f19b8u: goto label_1f19b8;
        case 0x1f19bcu: goto label_1f19bc;
        case 0x1f19c0u: goto label_1f19c0;
        case 0x1f19c4u: goto label_1f19c4;
        case 0x1f19c8u: goto label_1f19c8;
        case 0x1f19ccu: goto label_1f19cc;
        case 0x1f19d0u: goto label_1f19d0;
        case 0x1f19d4u: goto label_1f19d4;
        case 0x1f19d8u: goto label_1f19d8;
        case 0x1f19dcu: goto label_1f19dc;
        case 0x1f19e0u: goto label_1f19e0;
        case 0x1f19e4u: goto label_1f19e4;
        case 0x1f19e8u: goto label_1f19e8;
        case 0x1f19ecu: goto label_1f19ec;
        case 0x1f19f0u: goto label_1f19f0;
        case 0x1f19f4u: goto label_1f19f4;
        case 0x1f19f8u: goto label_1f19f8;
        case 0x1f19fcu: goto label_1f19fc;
        case 0x1f1a00u: goto label_1f1a00;
        case 0x1f1a04u: goto label_1f1a04;
        case 0x1f1a08u: goto label_1f1a08;
        case 0x1f1a0cu: goto label_1f1a0c;
        case 0x1f1a10u: goto label_1f1a10;
        case 0x1f1a14u: goto label_1f1a14;
        case 0x1f1a18u: goto label_1f1a18;
        case 0x1f1a1cu: goto label_1f1a1c;
        case 0x1f1a20u: goto label_1f1a20;
        case 0x1f1a24u: goto label_1f1a24;
        case 0x1f1a28u: goto label_1f1a28;
        case 0x1f1a2cu: goto label_1f1a2c;
        case 0x1f1a30u: goto label_1f1a30;
        case 0x1f1a34u: goto label_1f1a34;
        case 0x1f1a38u: goto label_1f1a38;
        case 0x1f1a3cu: goto label_1f1a3c;
        case 0x1f1a40u: goto label_1f1a40;
        case 0x1f1a44u: goto label_1f1a44;
        case 0x1f1a48u: goto label_1f1a48;
        case 0x1f1a4cu: goto label_1f1a4c;
        case 0x1f1a50u: goto label_1f1a50;
        case 0x1f1a54u: goto label_1f1a54;
        case 0x1f1a58u: goto label_1f1a58;
        case 0x1f1a5cu: goto label_1f1a5c;
        case 0x1f1a60u: goto label_1f1a60;
        case 0x1f1a64u: goto label_1f1a64;
        case 0x1f1a68u: goto label_1f1a68;
        case 0x1f1a6cu: goto label_1f1a6c;
        case 0x1f1a70u: goto label_1f1a70;
        case 0x1f1a74u: goto label_1f1a74;
        case 0x1f1a78u: goto label_1f1a78;
        case 0x1f1a7cu: goto label_1f1a7c;
        case 0x1f1a80u: goto label_1f1a80;
        case 0x1f1a84u: goto label_1f1a84;
        case 0x1f1a88u: goto label_1f1a88;
        case 0x1f1a8cu: goto label_1f1a8c;
        case 0x1f1a90u: goto label_1f1a90;
        case 0x1f1a94u: goto label_1f1a94;
        case 0x1f1a98u: goto label_1f1a98;
        case 0x1f1a9cu: goto label_1f1a9c;
        case 0x1f1aa0u: goto label_1f1aa0;
        case 0x1f1aa4u: goto label_1f1aa4;
        case 0x1f1aa8u: goto label_1f1aa8;
        case 0x1f1aacu: goto label_1f1aac;
        case 0x1f1ab0u: goto label_1f1ab0;
        case 0x1f1ab4u: goto label_1f1ab4;
        case 0x1f1ab8u: goto label_1f1ab8;
        case 0x1f1abcu: goto label_1f1abc;
        case 0x1f1ac0u: goto label_1f1ac0;
        case 0x1f1ac4u: goto label_1f1ac4;
        case 0x1f1ac8u: goto label_1f1ac8;
        case 0x1f1accu: goto label_1f1acc;
        case 0x1f1ad0u: goto label_1f1ad0;
        case 0x1f1ad4u: goto label_1f1ad4;
        case 0x1f1ad8u: goto label_1f1ad8;
        case 0x1f1adcu: goto label_1f1adc;
        case 0x1f1ae0u: goto label_1f1ae0;
        case 0x1f1ae4u: goto label_1f1ae4;
        case 0x1f1ae8u: goto label_1f1ae8;
        case 0x1f1aecu: goto label_1f1aec;
        case 0x1f1af0u: goto label_1f1af0;
        case 0x1f1af4u: goto label_1f1af4;
        case 0x1f1af8u: goto label_1f1af8;
        case 0x1f1afcu: goto label_1f1afc;
        case 0x1f1b00u: goto label_1f1b00;
        case 0x1f1b04u: goto label_1f1b04;
        case 0x1f1b08u: goto label_1f1b08;
        case 0x1f1b0cu: goto label_1f1b0c;
        case 0x1f1b10u: goto label_1f1b10;
        case 0x1f1b14u: goto label_1f1b14;
        case 0x1f1b18u: goto label_1f1b18;
        case 0x1f1b1cu: goto label_1f1b1c;
        case 0x1f1b20u: goto label_1f1b20;
        case 0x1f1b24u: goto label_1f1b24;
        case 0x1f1b28u: goto label_1f1b28;
        case 0x1f1b2cu: goto label_1f1b2c;
        case 0x1f1b30u: goto label_1f1b30;
        case 0x1f1b34u: goto label_1f1b34;
        case 0x1f1b38u: goto label_1f1b38;
        case 0x1f1b3cu: goto label_1f1b3c;
        case 0x1f1b40u: goto label_1f1b40;
        case 0x1f1b44u: goto label_1f1b44;
        case 0x1f1b48u: goto label_1f1b48;
        case 0x1f1b4cu: goto label_1f1b4c;
        case 0x1f1b50u: goto label_1f1b50;
        case 0x1f1b54u: goto label_1f1b54;
        case 0x1f1b58u: goto label_1f1b58;
        case 0x1f1b5cu: goto label_1f1b5c;
        case 0x1f1b60u: goto label_1f1b60;
        case 0x1f1b64u: goto label_1f1b64;
        case 0x1f1b68u: goto label_1f1b68;
        case 0x1f1b6cu: goto label_1f1b6c;
        case 0x1f1b70u: goto label_1f1b70;
        case 0x1f1b74u: goto label_1f1b74;
        case 0x1f1b78u: goto label_1f1b78;
        case 0x1f1b7cu: goto label_1f1b7c;
        case 0x1f1b80u: goto label_1f1b80;
        case 0x1f1b84u: goto label_1f1b84;
        case 0x1f1b88u: goto label_1f1b88;
        case 0x1f1b8cu: goto label_1f1b8c;
        case 0x1f1b90u: goto label_1f1b90;
        case 0x1f1b94u: goto label_1f1b94;
        case 0x1f1b98u: goto label_1f1b98;
        case 0x1f1b9cu: goto label_1f1b9c;
        case 0x1f1ba0u: goto label_1f1ba0;
        case 0x1f1ba4u: goto label_1f1ba4;
        case 0x1f1ba8u: goto label_1f1ba8;
        case 0x1f1bacu: goto label_1f1bac;
        case 0x1f1bb0u: goto label_1f1bb0;
        case 0x1f1bb4u: goto label_1f1bb4;
        case 0x1f1bb8u: goto label_1f1bb8;
        case 0x1f1bbcu: goto label_1f1bbc;
        case 0x1f1bc0u: goto label_1f1bc0;
        case 0x1f1bc4u: goto label_1f1bc4;
        case 0x1f1bc8u: goto label_1f1bc8;
        case 0x1f1bccu: goto label_1f1bcc;
        case 0x1f1bd0u: goto label_1f1bd0;
        case 0x1f1bd4u: goto label_1f1bd4;
        case 0x1f1bd8u: goto label_1f1bd8;
        case 0x1f1bdcu: goto label_1f1bdc;
        case 0x1f1be0u: goto label_1f1be0;
        case 0x1f1be4u: goto label_1f1be4;
        case 0x1f1be8u: goto label_1f1be8;
        case 0x1f1becu: goto label_1f1bec;
        case 0x1f1bf0u: goto label_1f1bf0;
        case 0x1f1bf4u: goto label_1f1bf4;
        case 0x1f1bf8u: goto label_1f1bf8;
        case 0x1f1bfcu: goto label_1f1bfc;
        case 0x1f1c00u: goto label_1f1c00;
        case 0x1f1c04u: goto label_1f1c04;
        case 0x1f1c08u: goto label_1f1c08;
        case 0x1f1c0cu: goto label_1f1c0c;
        case 0x1f1c10u: goto label_1f1c10;
        case 0x1f1c14u: goto label_1f1c14;
        case 0x1f1c18u: goto label_1f1c18;
        case 0x1f1c1cu: goto label_1f1c1c;
        case 0x1f1c20u: goto label_1f1c20;
        case 0x1f1c24u: goto label_1f1c24;
        case 0x1f1c28u: goto label_1f1c28;
        case 0x1f1c2cu: goto label_1f1c2c;
        case 0x1f1c30u: goto label_1f1c30;
        case 0x1f1c34u: goto label_1f1c34;
        case 0x1f1c38u: goto label_1f1c38;
        case 0x1f1c3cu: goto label_1f1c3c;
        case 0x1f1c40u: goto label_1f1c40;
        case 0x1f1c44u: goto label_1f1c44;
        case 0x1f1c48u: goto label_1f1c48;
        case 0x1f1c4cu: goto label_1f1c4c;
        case 0x1f1c50u: goto label_1f1c50;
        case 0x1f1c54u: goto label_1f1c54;
        case 0x1f1c58u: goto label_1f1c58;
        case 0x1f1c5cu: goto label_1f1c5c;
        case 0x1f1c60u: goto label_1f1c60;
        case 0x1f1c64u: goto label_1f1c64;
        case 0x1f1c68u: goto label_1f1c68;
        case 0x1f1c6cu: goto label_1f1c6c;
        case 0x1f1c70u: goto label_1f1c70;
        case 0x1f1c74u: goto label_1f1c74;
        case 0x1f1c78u: goto label_1f1c78;
        case 0x1f1c7cu: goto label_1f1c7c;
        case 0x1f1c80u: goto label_1f1c80;
        case 0x1f1c84u: goto label_1f1c84;
        case 0x1f1c88u: goto label_1f1c88;
        case 0x1f1c8cu: goto label_1f1c8c;
        case 0x1f1c90u: goto label_1f1c90;
        case 0x1f1c94u: goto label_1f1c94;
        case 0x1f1c98u: goto label_1f1c98;
        case 0x1f1c9cu: goto label_1f1c9c;
        case 0x1f1ca0u: goto label_1f1ca0;
        case 0x1f1ca4u: goto label_1f1ca4;
        case 0x1f1ca8u: goto label_1f1ca8;
        case 0x1f1cacu: goto label_1f1cac;
        case 0x1f1cb0u: goto label_1f1cb0;
        case 0x1f1cb4u: goto label_1f1cb4;
        case 0x1f1cb8u: goto label_1f1cb8;
        case 0x1f1cbcu: goto label_1f1cbc;
        case 0x1f1cc0u: goto label_1f1cc0;
        case 0x1f1cc4u: goto label_1f1cc4;
        case 0x1f1cc8u: goto label_1f1cc8;
        case 0x1f1cccu: goto label_1f1ccc;
        case 0x1f1cd0u: goto label_1f1cd0;
        case 0x1f1cd4u: goto label_1f1cd4;
        case 0x1f1cd8u: goto label_1f1cd8;
        case 0x1f1cdcu: goto label_1f1cdc;
        case 0x1f1ce0u: goto label_1f1ce0;
        case 0x1f1ce4u: goto label_1f1ce4;
        default: return;
    }

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
            { ctx->pc = 0x1f1504; return; }
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
            goto label_1f18fc;
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
            goto label_1f17dc;
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
            goto label_1f177c;
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
            goto label_1f177c;
        }
    }
    ctx->pc = 0x1F1768u;
label_1f1768:
    // 0x1f1768: 0x8d023674  lw          $v0, 0x3674($t0)
    ctx->pc = 0x1f1768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 13940)));
label_1f176c:
    // 0x1f176c: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
label_1f1770:
    if (ctx->pc == 0x1F1770u) {
        ctx->pc = 0x1F1774u;
        goto label_1f1774;
    }
    ctx->pc = 0x1F176Cu;
    {
        const bool branch_taken_0x1f176c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1f176c) {
            ctx->pc = 0x1F177Cu;
            goto label_1f177c;
        }
    }
    ctx->pc = 0x1F1774u;
label_1f1774:
    // 0x1f1774: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f1778:
    if (ctx->pc == 0x1F1778u) {
        ctx->pc = 0x1F1778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1774u;
        // 0x1f1778: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F177Cu;
        goto label_1f177c;
    }
    ctx->pc = 0x1F1774u;
    {
        const bool branch_taken_0x1f1774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1774u;
        // 0x1f1778: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1774) {
            ctx->pc = 0x1F178Cu;
            goto label_1f178c;
        }
    }
    ctx->pc = 0x1F177Cu;
label_1f177c:
    // 0x1f177c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1f177cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1f1780:
    // 0x1f1780: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x1f1780u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f1784:
    // 0x1f1784: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_1f1788:
    if (ctx->pc == 0x1F1788u) {
        ctx->pc = 0x1F1788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1784u;
        // 0x1f1788: 0x24a50090  addiu       $a1, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F178Cu;
        goto label_1f178c;
    }
    ctx->pc = 0x1F1784u;
    {
        const bool branch_taken_0x1f1784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1784u;
        // 0x1f1788: 0x24a50090  addiu       $a1, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1784) {
            ctx->pc = 0x1F1748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1748;
        }
    }
    ctx->pc = 0x1F178Cu;
label_1f178c:
    // 0x1f178c: 0x0  nop
    ctx->pc = 0x1f178cu;
    // NOP
label_1f1790:
    // 0x1f1790: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f1790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f1794:
    // 0x1f1794: 0x10c50005  beq         $a2, $a1, . + 4 + (0x5 << 2)
label_1f1798:
    if (ctx->pc == 0x1F1798u) {
        ctx->pc = 0x1F1798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1794u;
        // 0x1f1798: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F179Cu;
        goto label_1f179c;
    }
    ctx->pc = 0x1F1794u;
    {
        const bool branch_taken_0x1f1794 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F1798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1794u;
        // 0x1f1798: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1794) {
            ctx->pc = 0x1F17ACu;
            goto label_1f17ac;
        }
    }
    ctx->pc = 0x1F179Cu;
label_1f179c:
    // 0x1f179c: 0xc085cc4  jal         func_217310
label_1f17a0:
    if (ctx->pc == 0x1F17A0u) {
        ctx->pc = 0x1F17A4u;
        goto label_1f17a4;
    }
    ctx->pc = 0x1F179Cu;
    SET_GPR_U32(ctx, 31, 0x1F17A4u);
    ctx->pc = 0x217310u;
    { ctx->pc = 0x217310; return; }
    ctx->pc = 0x1F17A4u;
label_1f17a4:
    // 0x1f17a4: 0x1000000c  b           . + 4 + (0xC << 2)
label_1f17a8:
    if (ctx->pc == 0x1F17A8u) {
        ctx->pc = 0x1F17ACu;
        goto label_1f17ac;
    }
    ctx->pc = 0x1F17A4u;
    {
        const bool branch_taken_0x1f17a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f17a4) {
            ctx->pc = 0x1F17D8u;
            goto label_1f17d8;
        }
    }
    ctx->pc = 0x1F17ACu;
label_1f17ac:
    // 0x1f17ac: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
label_1f17b0:
    if (ctx->pc == 0x1F17B0u) {
        ctx->pc = 0x1F17B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F17ACu;
        // 0x1f17b0: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F17B4u;
        goto label_1f17b4;
    }
    ctx->pc = 0x1F17ACu;
    {
        const bool branch_taken_0x1f17ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F17B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F17ACu;
        // 0x1f17b0: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f17ac) {
            ctx->pc = 0x1F17CCu;
            goto label_1f17cc;
        }
    }
    ctx->pc = 0x1F17B4u;
label_1f17b4:
    // 0x1f17b4: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1f17b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1f17b8:
    // 0x1f17b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f17b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f17bc:
    // 0x1f17bc: 0xc085cc4  jal         func_217310
label_1f17c0:
    if (ctx->pc == 0x1F17C0u) {
        ctx->pc = 0x1F17C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F17BCu;
        // 0x1f17c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F17C4u;
        goto label_1f17c4;
    }
    ctx->pc = 0x1F17BCu;
    SET_GPR_U32(ctx, 31, 0x1F17C4u);
    ctx->pc = 0x1F17C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F17BCu;
    // 0x1f17c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217310u;
    { ctx->pc = 0x217310; return; }
    ctx->pc = 0x1F17C4u;
label_1f17c4:
    // 0x1f17c4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1f17c8:
    if (ctx->pc == 0x1F17C8u) {
        ctx->pc = 0x1F17CCu;
        goto label_1f17cc;
    }
    ctx->pc = 0x1F17C4u;
    {
        const bool branch_taken_0x1f17c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f17c4) {
            ctx->pc = 0x1F17D8u;
            goto label_1f17d8;
        }
    }
    ctx->pc = 0x1F17CCu;
label_1f17cc:
    // 0x1f17cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f17ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f17d0:
    // 0x1f17d0: 0xc085cc4  jal         func_217310
label_1f17d4:
    if (ctx->pc == 0x1F17D4u) {
        ctx->pc = 0x1F17D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F17D0u;
        // 0x1f17d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F17D8u;
        goto label_1f17d8;
    }
    ctx->pc = 0x1F17D0u;
    SET_GPR_U32(ctx, 31, 0x1F17D8u);
    ctx->pc = 0x1F17D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F17D0u;
    // 0x1f17d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217310u;
    { ctx->pc = 0x217310; return; }
    ctx->pc = 0x1F17D8u;
label_1f17d8:
    // 0x1f17d8: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1f17d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1f17dc:
    // 0x1f17dc: 0xc085bd0  jal         func_216F40
label_1f17e0:
    if (ctx->pc == 0x1F17E0u) {
        ctx->pc = 0x1F17E4u;
        goto label_1f17e4;
    }
    ctx->pc = 0x1F17DCu;
    SET_GPR_U32(ctx, 31, 0x1F17E4u);
    ctx->pc = 0x216F40u;
    { ctx->pc = 0x216f40; return; }
    ctx->pc = 0x1F17E4u;
label_1f17e4:
    // 0x1f17e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f17e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f17e8:
    // 0x1f17e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f17e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f17ec:
    // 0x1f17ec: 0xaf828fb0  sw          $v0, -0x7050($gp)
    ctx->pc = 0x1f17ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938544), GPR_U32(ctx, 2));
label_1f17f0:
    // 0x1f17f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f17f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f17f4:
    // 0x1f17f4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f17f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f17f8:
    // 0x1f17f8: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x1f17f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
label_1f17fc:
    // 0x1f17fc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1f17fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1f1800:
    // 0x1f1800: 0x2463bfa0  addiu       $v1, $v1, -0x4060
    ctx->pc = 0x1f1800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950816));
label_1f1804:
    // 0x1f1804: 0x27848fa8  addiu       $a0, $gp, -0x7058
    ctx->pc = 0x1f1804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938536));
label_1f1808:
    // 0x1f1808: 0x891021  addu        $v0, $a0, $t1
    ctx->pc = 0x1f1808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_1f180c:
    // 0x1f180c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f180cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1810:
    // 0x1f1810: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1f1810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_1f1814:
    // 0x1f1814: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f1814u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1818:
    // 0x1f1818: 0x6a6021  addu        $t4, $v1, $t2
    ctx->pc = 0x1f1818u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_1f181c:
    // 0x1f181c: 0x0  nop
    ctx->pc = 0x1f181cu;
    // NOP
label_1f1820:
    // 0x1f1820: 0x1885821  addu        $t3, $t4, $t0
    ctx->pc = 0x1f1820u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
label_1f1824:
    // 0x1f1824: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x1f1824u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
label_1f1828:
    // 0x1f1828: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1f1828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_1f182c:
    // 0x1f182c: 0xad600004  sw          $zero, 0x4($t3)
    ctx->pc = 0x1f182cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 0));
label_1f1830:
    // 0x1f1830: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x1f1830u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f1834:
    // 0x1f1834: 0xad600008  sw          $zero, 0x8($t3)
    ctx->pc = 0x1f1834u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 0));
label_1f1838:
    // 0x1f1838: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x1f1838u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
label_1f183c:
    // 0x1f183c: 0xad60000c  sw          $zero, 0xC($t3)
    ctx->pc = 0x1f183cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 0));
label_1f1840:
    // 0x1f1840: 0xad600010  sw          $zero, 0x10($t3)
    ctx->pc = 0x1f1840u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 0));
label_1f1844:
    // 0x1f1844: 0xad600014  sw          $zero, 0x14($t3)
    ctx->pc = 0x1f1844u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 0));
label_1f1848:
    // 0x1f1848: 0xad600018  sw          $zero, 0x18($t3)
    ctx->pc = 0x1f1848u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 0));
label_1f184c:
    // 0x1f184c: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1f1850:
    if (ctx->pc == 0x1F1850u) {
        ctx->pc = 0x1F1850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F184Cu;
        // 0x1f1850: 0xad60001c  sw          $zero, 0x1C($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1854u;
        goto label_1f1854;
    }
    ctx->pc = 0x1F184Cu;
    {
        const bool branch_taken_0x1f184c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F184Cu;
        // 0x1f1850: 0xad60001c  sw          $zero, 0x1C($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f184c) {
            ctx->pc = 0x1F181Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f181c;
        }
    }
    ctx->pc = 0x1F1854u;
label_1f1854:
    // 0x1f1854: 0x28c1000a  slti        $at, $a2, 0xA
    ctx->pc = 0x1f1854u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
label_1f1858:
    // 0x1f1858: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_1f185c:
    if (ctx->pc == 0x1F185Cu) {
        ctx->pc = 0x1F185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1858u;
        // 0x1f185c: 0x64080  sll         $t0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1860u;
        goto label_1f1860;
    }
    ctx->pc = 0x1F1858u;
    {
        const bool branch_taken_0x1f1858 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1858u;
        // 0x1f185c: 0x64080  sll         $t0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1858) {
            ctx->pc = 0x1F187Cu;
            goto label_1f187c;
        }
    }
    ctx->pc = 0x1F1860u;
label_1f1860:
    // 0x1f1860: 0x1881021  addu        $v0, $t4, $t0
    ctx->pc = 0x1f1860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
label_1f1864:
    // 0x1f1864: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f1864u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1f1868:
    // 0x1f1868: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f1868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1f186c:
    // 0x1f186c: 0x28c2000a  slti        $v0, $a2, 0xA
    ctx->pc = 0x1f186cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
label_1f1870:
    // 0x1f1870: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1f1870u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_1f1874:
    // 0x1f1874: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1f1878:
    if (ctx->pc == 0x1F1878u) {
        ctx->pc = 0x1F187Cu;
        goto label_1f187c;
    }
    ctx->pc = 0x1F1874u;
    {
        const bool branch_taken_0x1f1874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1874) {
            ctx->pc = 0x1F1860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1860;
        }
    }
    ctx->pc = 0x1F187Cu;
label_1f187c:
    // 0x1f187c: 0x0  nop
    ctx->pc = 0x1f187cu;
    // NOP
label_1f1880:
    // 0x1f1880: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1f1880u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1f1884:
    // 0x1f1884: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x1f1884u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f1888:
    // 0x1f1888: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1f1888u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_1f188c:
    // 0x1f188c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
label_1f1890:
    if (ctx->pc == 0x1F1890u) {
        ctx->pc = 0x1F1890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F188Cu;
        // 0x1f1890: 0x254a0028  addiu       $t2, $t2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1894u;
        goto label_1f1894;
    }
    ctx->pc = 0x1F188Cu;
    {
        const bool branch_taken_0x1f188c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F188Cu;
        // 0x1f1890: 0x254a0028  addiu       $t2, $t2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f188c) {
            ctx->pc = 0x1F1808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1808;
        }
    }
    ctx->pc = 0x1F1894u;
label_1f1894:
    // 0x1f1894: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f1894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f1898:
    // 0x1f1898: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f1898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f189c:
    // 0x1f189c: 0xac209ce0  sw          $zero, -0x6320($at)
    ctx->pc = 0x1f189cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941920), GPR_U32(ctx, 0));
label_1f18a0:
    // 0x1f18a0: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f18a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f18a4:
    // 0x1f18a4: 0xaf808fa0  sw          $zero, -0x7060($gp)
    ctx->pc = 0x1f18a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938528), GPR_U32(ctx, 0));
label_1f18a8:
    // 0x1f18a8: 0xac209ce4  sw          $zero, -0x631C($at)
    ctx->pc = 0x1f18a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941924), GPR_U32(ctx, 0));
label_1f18ac:
    // 0x1f18ac: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f18acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f18b0:
    // 0x1f18b0: 0xaf808f9c  sw          $zero, -0x7064($gp)
    ctx->pc = 0x1f18b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938524), GPR_U32(ctx, 0));
label_1f18b4:
    // 0x1f18b4: 0xac209ce8  sw          $zero, -0x6318($at)
    ctx->pc = 0x1f18b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941928), GPR_U32(ctx, 0));
label_1f18b8:
    // 0x1f18b8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f18b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f18bc:
    // 0x1f18bc: 0xaf808f94  sw          $zero, -0x706C($gp)
    ctx->pc = 0x1f18bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938516), GPR_U32(ctx, 0));
label_1f18c0:
    // 0x1f18c0: 0xac209cec  sw          $zero, -0x6314($at)
    ctx->pc = 0x1f18c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941932), GPR_U32(ctx, 0));
label_1f18c4:
    // 0x1f18c4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f18c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f18c8:
    // 0x1f18c8: 0xaf808f98  sw          $zero, -0x7068($gp)
    ctx->pc = 0x1f18c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938520), GPR_U32(ctx, 0));
label_1f18cc:
    // 0x1f18cc: 0xac209cf0  sw          $zero, -0x6310($at)
    ctx->pc = 0x1f18ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941936), GPR_U32(ctx, 0));
label_1f18d0:
    // 0x1f18d0: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f18d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f18d4:
    // 0x1f18d4: 0xaf808f90  sw          $zero, -0x7070($gp)
    ctx->pc = 0x1f18d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938512), GPR_U32(ctx, 0));
label_1f18d8:
    // 0x1f18d8: 0xac209cf4  sw          $zero, -0x630C($at)
    ctx->pc = 0x1f18d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941940), GPR_U32(ctx, 0));
label_1f18dc:
    // 0x1f18dc: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f18dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f18e0:
    // 0x1f18e0: 0xaf808f8c  sw          $zero, -0x7074($gp)
    ctx->pc = 0x1f18e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938508), GPR_U32(ctx, 0));
label_1f18e4:
    // 0x1f18e4: 0xac209cf8  sw          $zero, -0x6308($at)
    ctx->pc = 0x1f18e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941944), GPR_U32(ctx, 0));
label_1f18e8:
    // 0x1f18e8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f18e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f18ec:
    // 0x1f18ec: 0xaf808f88  sw          $zero, -0x7078($gp)
    ctx->pc = 0x1f18ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938504), GPR_U32(ctx, 0));
label_1f18f0:
    // 0x1f18f0: 0xc07c64c  jal         func_1F1930
label_1f18f4:
    if (ctx->pc == 0x1F18F4u) {
        ctx->pc = 0x1F18F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F18F0u;
        // 0x1f18f4: 0xac209cfc  sw          $zero, -0x6304($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941948), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F18F8u;
        goto label_1f18f8;
    }
    ctx->pc = 0x1F18F0u;
    SET_GPR_U32(ctx, 31, 0x1F18F8u);
    ctx->pc = 0x1F18F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F18F0u;
    // 0x1f18f4: 0xac209cfc  sw          $zero, -0x6304($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941948), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1930u;
    goto label_1f1930;
    ctx->pc = 0x1F18F8u;
label_1f18f8:
    // 0x1f18f8: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x1f18f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1f18fc:
    // 0x1f18fc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1f18fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1f1900:
    // 0x1f1900: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1f1900u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f1904:
    // 0x1f1904: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1f1904u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f1908:
    // 0x1f1908: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f1908u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f190c:
    // 0x1f190c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f190cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f1910:
    // 0x1f1910: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f1910u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f1914:
    // 0x1f1914: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f1914u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f1918:
    // 0x1f1918: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f1918u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f191c:
    // 0x1f191c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f191cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f1920:
    // 0x1f1920: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f1920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f1924:
    // 0x1f1924: 0x3e00008  jr          $ra
label_1f1928:
    if (ctx->pc == 0x1F1928u) {
        ctx->pc = 0x1F1928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1924u;
        // 0x1f1928: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F192Cu;
        goto label_1f192c;
    }
    ctx->pc = 0x1F1924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1924u;
        // 0x1f1928: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F192Cu;
label_1f192c:
    // 0x1f192c: 0x0  nop
    ctx->pc = 0x1f192cu;
    // NOP
label_1f1930:
    // 0x1f1930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f1930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f1934:
    // 0x1f1934: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
label_1f1938:
    if (ctx->pc == 0x1F1938u) {
        ctx->pc = 0x1F1938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1934u;
        // 0x1f1938: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F193Cu;
        goto label_1f193c;
    }
    ctx->pc = 0x1F1934u;
    {
        const bool branch_taken_0x1f1934 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1934u;
        // 0x1f1938: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1934) {
            ctx->pc = 0x1F1988u;
            goto label_1f1988;
        }
    }
    ctx->pc = 0x1F193Cu;
label_1f193c:
    // 0x1f193c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f193cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f1940:
    // 0x1f1940: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x1f1940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1f1944:
    // 0x1f1944: 0xc078050  jal         func_1E0140
label_1f1948:
    if (ctx->pc == 0x1F1948u) {
        ctx->pc = 0x1F1948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1944u;
        // 0x1f1948: 0xaf828fd0  sw          $v0, -0x7030($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938576), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F194Cu;
        goto label_1f194c;
    }
    ctx->pc = 0x1F1944u;
    SET_GPR_U32(ctx, 31, 0x1F194Cu);
    ctx->pc = 0x1F1948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1944u;
    // 0x1f1948: 0xaf828fd0  sw          $v0, -0x7030($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938576), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x1F194Cu;
label_1f194c:
    // 0x1f194c: 0xc078070  jal         func_1E01C0
label_1f1950:
    if (ctx->pc == 0x1F1950u) {
        ctx->pc = 0x1F1954u;
        goto label_1f1954;
    }
    ctx->pc = 0x1F194Cu;
    SET_GPR_U32(ctx, 31, 0x1F1954u);
    ctx->pc = 0x1E01C0u;
    { ctx->pc = 0x1e01c0; return; }
    ctx->pc = 0x1F1954u;
label_1f1954:
    // 0x1f1954: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f1954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f1958:
    // 0x1f1958: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f195c:
    if (ctx->pc == 0x1F195Cu) {
        ctx->pc = 0x1F195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1958u;
        // 0x1f195c: 0xaf838fc4  sw          $v1, -0x703C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938564), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1960u;
        goto label_1f1960;
    }
    ctx->pc = 0x1F1958u;
    {
        const bool branch_taken_0x1f1958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1958u;
        // 0x1f195c: 0xaf838fc4  sw          $v1, -0x703C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938564), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1958) {
            ctx->pc = 0x1F1968u;
            goto label_1f1968;
        }
    }
    ctx->pc = 0x1F1960u;
label_1f1960:
    // 0x1f1960: 0xc07b48c  jal         func_1ED230
label_1f1964:
    if (ctx->pc == 0x1F1964u) {
        ctx->pc = 0x1F1968u;
        goto label_1f1968;
    }
    ctx->pc = 0x1F1960u;
    SET_GPR_U32(ctx, 31, 0x1F1968u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x1F1968u;
label_1f1968:
    // 0x1f1968: 0x8f838fc4  lw          $v1, -0x703C($gp)
    ctx->pc = 0x1f1968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938564)));
label_1f196c:
    // 0x1f196c: 0x0  nop
    ctx->pc = 0x1f196cu;
    // NOP
label_1f1970:
    // 0x1f1970: 0x0  nop
    ctx->pc = 0x1f1970u;
    // NOP
label_1f1974:
    // 0x1f1974: 0x0  nop
    ctx->pc = 0x1f1974u;
    // NOP
label_1f1978:
    // 0x1f1978: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_1f197c:
    if (ctx->pc == 0x1F197Cu) {
        ctx->pc = 0x1F1980u;
        goto label_1f1980;
    }
    ctx->pc = 0x1F1978u;
    {
        const bool branch_taken_0x1f1978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1978) {
            ctx->pc = 0x1F1960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1960;
        }
    }
    ctx->pc = 0x1F1980u;
label_1f1980:
    // 0x1f1980: 0x10000011  b           . + 4 + (0x11 << 2)
label_1f1984:
    if (ctx->pc == 0x1F1984u) {
        ctx->pc = 0x1F1984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1980u;
        // 0x1f1984: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1988u;
        goto label_1f1988;
    }
    ctx->pc = 0x1F1980u;
    {
        const bool branch_taken_0x1f1980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1980u;
        // 0x1f1984: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1980) {
            ctx->pc = 0x1F19C8u;
            goto label_1f19c8;
        }
    }
    ctx->pc = 0x1F1988u;
label_1f1988:
    // 0x1f1988: 0xc078078  jal         func_1E01E0
label_1f198c:
    if (ctx->pc == 0x1F198Cu) {
        ctx->pc = 0x1F1990u;
        goto label_1f1990;
    }
    ctx->pc = 0x1F1988u;
    SET_GPR_U32(ctx, 31, 0x1F1990u);
    ctx->pc = 0x1E01E0u;
    { ctx->pc = 0x1e01e0; return; }
    ctx->pc = 0x1F1990u;
label_1f1990:
    // 0x1f1990: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f1990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f1994:
    // 0x1f1994: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f1998:
    if (ctx->pc == 0x1F1998u) {
        ctx->pc = 0x1F1998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1994u;
        // 0x1f1998: 0xaf838fc4  sw          $v1, -0x703C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938564), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F199Cu;
        goto label_1f199c;
    }
    ctx->pc = 0x1F1994u;
    {
        const bool branch_taken_0x1f1994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1994u;
        // 0x1f1998: 0xaf838fc4  sw          $v1, -0x703C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938564), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1994) {
            ctx->pc = 0x1F19A4u;
            goto label_1f19a4;
        }
    }
    ctx->pc = 0x1F199Cu;
label_1f199c:
    // 0x1f199c: 0xc07b48c  jal         func_1ED230
label_1f19a0:
    if (ctx->pc == 0x1F19A0u) {
        ctx->pc = 0x1F19A4u;
        goto label_1f19a4;
    }
    ctx->pc = 0x1F199Cu;
    SET_GPR_U32(ctx, 31, 0x1F19A4u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x1F19A4u;
label_1f19a4:
    // 0x1f19a4: 0x0  nop
    ctx->pc = 0x1f19a4u;
    // NOP
label_1f19a8:
    // 0x1f19a8: 0x8f838fc4  lw          $v1, -0x703C($gp)
    ctx->pc = 0x1f19a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938564)));
label_1f19ac:
    // 0x1f19ac: 0x0  nop
    ctx->pc = 0x1f19acu;
    // NOP
label_1f19b0:
    // 0x1f19b0: 0x0  nop
    ctx->pc = 0x1f19b0u;
    // NOP
label_1f19b4:
    // 0x1f19b4: 0x0  nop
    ctx->pc = 0x1f19b4u;
    // NOP
label_1f19b8:
    // 0x1f19b8: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_1f19bc:
    if (ctx->pc == 0x1F19BCu) {
        ctx->pc = 0x1F19C0u;
        goto label_1f19c0;
    }
    ctx->pc = 0x1F19B8u;
    {
        const bool branch_taken_0x1f19b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f19b8) {
            ctx->pc = 0x1F199Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f199c;
        }
    }
    ctx->pc = 0x1F19C0u;
label_1f19c0:
    // 0x1f19c0: 0xaf808fd0  sw          $zero, -0x7030($gp)
    ctx->pc = 0x1f19c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938576), GPR_U32(ctx, 0));
label_1f19c4:
    // 0x1f19c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f19c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f19c8:
    // 0x1f19c8: 0x3e00008  jr          $ra
label_1f19cc:
    if (ctx->pc == 0x1F19CCu) {
        ctx->pc = 0x1F19CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F19C8u;
        // 0x1f19cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F19D0u;
        goto label_1f19d0;
    }
    ctx->pc = 0x1F19C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F19CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F19C8u;
        // 0x1f19cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F19C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F19D0u;
label_1f19d0:
    // 0x1f19d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f19d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1f19d4:
    // 0x1f19d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f19d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1f19d8:
    // 0x1f19d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f19d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f19dc:
    // 0x1f19dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f19dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f19e0:
    // 0x1f19e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f19e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f19e4:
    // 0x1f19e4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f19e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f19e8:
    // 0x1f19e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f19e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f19ec:
    // 0x1f19ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f19ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f19f0:
    // 0x1f19f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f19f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f19f4:
    // 0x1f19f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f19f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f19f8:
    // 0x1f19f8: 0xaf808fd0  sw          $zero, -0x7030($gp)
    ctx->pc = 0x1f19f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938576), GPR_U32(ctx, 0));
label_1f19fc:
    // 0x1f19fc: 0x27828fc8  addiu       $v0, $gp, -0x7038
    ctx->pc = 0x1f19fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938568));
label_1f1a00:
    // 0x1f1a00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f1a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1a04:
    // 0x1f1a04: 0x52a021  addu        $s4, $v0, $s2
    ctx->pc = 0x1f1a04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1f1a08:
    // 0x1f1a08: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x1f1a08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_1f1a0c:
    // 0x1f1a0c: 0x0  nop
    ctx->pc = 0x1f1a0cu;
    // NOP
label_1f1a10:
    // 0x1f1a10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f1a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f1a14:
    // 0x1f1a14: 0xc07b95c  jal         func_1EE570
label_1f1a18:
    if (ctx->pc == 0x1F1A18u) {
        ctx->pc = 0x1F1A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A14u;
        // 0x1f1a18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1A1Cu;
        goto label_1f1a1c;
    }
    ctx->pc = 0x1F1A14u;
    SET_GPR_U32(ctx, 31, 0x1F1A1Cu);
    ctx->pc = 0x1F1A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1A14u;
    // 0x1f1a18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE570u;
    { ctx->pc = 0x1ee570; return; }
    ctx->pc = 0x1F1A1Cu;
label_1f1a1c:
    // 0x1f1a1c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1f1a20:
    if (ctx->pc == 0x1F1A20u) {
        ctx->pc = 0x1F1A24u;
        goto label_1f1a24;
    }
    ctx->pc = 0x1F1A1Cu;
    {
        const bool branch_taken_0x1f1a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1a1c) {
            ctx->pc = 0x1F1A50u;
            goto label_1f1a50;
        }
    }
    ctx->pc = 0x1F1A24u;
label_1f1a24:
    // 0x1f1a24: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1f1a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1f1a28:
    // 0x1f1a28: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1f1a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_1f1a2c:
    // 0x1f1a2c: 0x24427f40  addiu       $v0, $v0, 0x7F40
    ctx->pc = 0x1f1a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32576));
label_1f1a30:
    // 0x1f1a30: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1f1a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1f1a34:
    // 0x1f1a34: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1f1a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1f1a38:
    // 0x1f1a38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f1a38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f1a3c:
    // 0x1f1a3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f1a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f1a40:
    // 0x1f1a40: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1f1a40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_1f1a44:
    // 0x1f1a44: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1f1a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1f1a48:
    // 0x1f1a48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f1a4c:
    // 0x1f1a4c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1f1a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1f1a50:
    // 0x1f1a50: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f1a50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f1a54:
    // 0x1f1a54: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x1f1a54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
label_1f1a58:
    // 0x1f1a58: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_1f1a5c:
    if (ctx->pc == 0x1F1A5Cu) {
        ctx->pc = 0x1F1A60u;
        goto label_1f1a60;
    }
    ctx->pc = 0x1F1A58u;
    {
        const bool branch_taken_0x1f1a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1a58) {
            ctx->pc = 0x1F1A0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1a0c;
        }
    }
    ctx->pc = 0x1F1A60u;
label_1f1a60:
    // 0x1f1a60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f1a60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f1a64:
    // 0x1f1a64: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1f1a64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1f1a68:
    // 0x1f1a68: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1f1a68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f1a6c:
    // 0x1f1a6c: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_1f1a70:
    if (ctx->pc == 0x1F1A70u) {
        ctx->pc = 0x1F1A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A6Cu;
        // 0x1f1a70: 0x26730028  addiu       $s3, $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1A74u;
        goto label_1f1a74;
    }
    ctx->pc = 0x1F1A6Cu;
    {
        const bool branch_taken_0x1f1a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A6Cu;
        // 0x1f1a70: 0x26730028  addiu       $s3, $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a6c) {
            ctx->pc = 0x1F19FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f19fc;
        }
    }
    ctx->pc = 0x1F1A74u;
label_1f1a74:
    // 0x1f1a74: 0xc07c6c4  jal         func_1F1B10
label_1f1a78:
    if (ctx->pc == 0x1F1A78u) {
        ctx->pc = 0x1F1A7Cu;
        goto label_1f1a7c;
    }
    ctx->pc = 0x1F1A74u;
    SET_GPR_U32(ctx, 31, 0x1F1A7Cu);
    ctx->pc = 0x1F1B10u;
    goto label_1f1b10;
    ctx->pc = 0x1F1A7Cu;
label_1f1a7c:
    // 0x1f1a7c: 0xc07c8cc  jal         func_1F2330
label_1f1a80:
    if (ctx->pc == 0x1F1A80u) {
        ctx->pc = 0x1F1A84u;
        goto label_1f1a84;
    }
    ctx->pc = 0x1F1A7Cu;
    SET_GPR_U32(ctx, 31, 0x1F1A84u);
    ctx->pc = 0x1F2330u;
    { ctx->pc = 0x1f2330; return; }
    ctx->pc = 0x1F1A84u;
label_1f1a84:
    // 0x1f1a84: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f1a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1f1a88:
    // 0x1f1a88: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f1a88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f1a8c:
    // 0x1f1a8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f1a8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f1a90:
    // 0x1f1a90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f1a90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f1a94:
    // 0x1f1a94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f1a94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f1a98:
    // 0x1f1a98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f1a98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f1a9c:
    // 0x1f1a9c: 0x3e00008  jr          $ra
label_1f1aa0:
    if (ctx->pc == 0x1F1AA0u) {
        ctx->pc = 0x1F1AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A9Cu;
        // 0x1f1aa0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1AA4u;
        goto label_1f1aa4;
    }
    ctx->pc = 0x1F1A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A9Cu;
        // 0x1f1aa0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1AA4u;
label_1f1aa4:
    // 0x1f1aa4: 0x0  nop
    ctx->pc = 0x1f1aa4u;
    // NOP
label_1f1aa8:
    // 0x1f1aa8: 0x0  nop
    ctx->pc = 0x1f1aa8u;
    // NOP
label_1f1aac:
    // 0x1f1aac: 0x0  nop
    ctx->pc = 0x1f1aacu;
    // NOP
label_1f1ab0:
    // 0x1f1ab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f1ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f1ab4:
    // 0x1f1ab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f1ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f1ab8:
    // 0x1f1ab8: 0x8f838fd0  lw          $v1, -0x7030($gp)
    ctx->pc = 0x1f1ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938576)));
label_1f1abc:
    // 0x1f1abc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1f1ac0:
    if (ctx->pc == 0x1F1AC0u) {
        ctx->pc = 0x1F1AC4u;
        goto label_1f1ac4;
    }
    ctx->pc = 0x1F1ABCu;
    {
        const bool branch_taken_0x1f1abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1abc) {
            ctx->pc = 0x1F1ACCu;
            goto label_1f1acc;
        }
    }
    ctx->pc = 0x1F1AC4u;
label_1f1ac4:
    // 0x1f1ac4: 0xc07c7cc  jal         func_1F1F30
label_1f1ac8:
    if (ctx->pc == 0x1F1AC8u) {
        ctx->pc = 0x1F1ACCu;
        goto label_1f1acc;
    }
    ctx->pc = 0x1F1AC4u;
    SET_GPR_U32(ctx, 31, 0x1F1ACCu);
    ctx->pc = 0x1F1F30u;
    { ctx->pc = 0x1f1f30; return; }
    ctx->pc = 0x1F1ACCu;
label_1f1acc:
    // 0x1f1acc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f1accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f1ad0:
    // 0x1f1ad0: 0x3e00008  jr          $ra
label_1f1ad4:
    if (ctx->pc == 0x1F1AD4u) {
        ctx->pc = 0x1F1AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1AD0u;
        // 0x1f1ad4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1AD8u;
        goto label_1f1ad8;
    }
    ctx->pc = 0x1F1AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1AD0u;
        // 0x1f1ad4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1AD8u;
label_1f1ad8:
    // 0x1f1ad8: 0x0  nop
    ctx->pc = 0x1f1ad8u;
    // NOP
label_1f1adc:
    // 0x1f1adc: 0x0  nop
    ctx->pc = 0x1f1adcu;
    // NOP
label_1f1ae0:
    // 0x1f1ae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f1ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f1ae4:
    // 0x1f1ae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f1ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f1ae8:
    // 0x1f1ae8: 0x8f838fd0  lw          $v1, -0x7030($gp)
    ctx->pc = 0x1f1ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938576)));
label_1f1aec:
    // 0x1f1aec: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1f1af0:
    if (ctx->pc == 0x1F1AF0u) {
        ctx->pc = 0x1F1AF4u;
        goto label_1f1af4;
    }
    ctx->pc = 0x1F1AECu;
    {
        const bool branch_taken_0x1f1aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1aec) {
            ctx->pc = 0x1F1B04u;
            goto label_1f1b04;
        }
    }
    ctx->pc = 0x1F1AF4u;
label_1f1af4:
    // 0x1f1af4: 0xc07c814  jal         func_1F2050
label_1f1af8:
    if (ctx->pc == 0x1F1AF8u) {
        ctx->pc = 0x1F1AFCu;
        goto label_1f1afc;
    }
    ctx->pc = 0x1F1AF4u;
    SET_GPR_U32(ctx, 31, 0x1F1AFCu);
    ctx->pc = 0x1F2050u;
    { ctx->pc = 0x1f2050; return; }
    ctx->pc = 0x1F1AFCu;
label_1f1afc:
    // 0x1f1afc: 0xc07ca60  jal         func_1F2980
label_1f1b00:
    if (ctx->pc == 0x1F1B00u) {
        ctx->pc = 0x1F1B04u;
        goto label_1f1b04;
    }
    ctx->pc = 0x1F1AFCu;
    SET_GPR_U32(ctx, 31, 0x1F1B04u);
    ctx->pc = 0x1F2980u;
    { ctx->pc = 0x1f2980; return; }
    ctx->pc = 0x1F1B04u;
label_1f1b04:
    // 0x1f1b04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f1b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f1b08:
    // 0x1f1b08: 0x3e00008  jr          $ra
label_1f1b0c:
    if (ctx->pc == 0x1F1B0Cu) {
        ctx->pc = 0x1F1B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B08u;
        // 0x1f1b0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1B10u;
        goto label_1f1b10;
    }
    ctx->pc = 0x1F1B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B08u;
        // 0x1f1b0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1B10u;
label_1f1b10:
    // 0x1f1b10: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1f1b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1f1b14:
    // 0x1f1b14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f1b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f1b18:
    // 0x1f1b18: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1f1b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1f1b1c:
    // 0x1f1b1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f1b1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1b20:
    // 0x1f1b20: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1f1b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1f1b24:
    // 0x1f1b24: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f1b24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1b28:
    // 0x1f1b28: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1f1b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1f1b2c:
    // 0x1f1b2c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f1b2cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1b30:
    // 0x1f1b30: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1f1b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1f1b34:
    // 0x1f1b34: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1f1b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1f1b38:
    // 0x1f1b38: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1f1b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1f1b3c:
    // 0x1f1b3c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1f1b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1f1b40:
    // 0x1f1b40: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f1b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1f1b44:
    // 0x1f1b44: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f1b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1f1b48:
    // 0x1f1b48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f1b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1f1b4c:
    // 0x1f1b4c: 0xaf808fc4  sw          $zero, -0x703C($gp)
    ctx->pc = 0x1f1b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938564), GPR_U32(ctx, 0));
label_1f1b50:
    // 0x1f1b50: 0xaf808fc0  sw          $zero, -0x7040($gp)
    ctx->pc = 0x1f1b50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938560), GPR_U32(ctx, 0));
label_1f1b54:
    // 0x1f1b54: 0xaf828fb0  sw          $v0, -0x7050($gp)
    ctx->pc = 0x1f1b54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938544), GPR_U32(ctx, 2));
label_1f1b58:
    // 0x1f1b58: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x1f1b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
label_1f1b5c:
    // 0x1f1b5c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1f1b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1f1b60:
    // 0x1f1b60: 0x2463bfa0  addiu       $v1, $v1, -0x4060
    ctx->pc = 0x1f1b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950816));
label_1f1b64:
    // 0x1f1b64: 0x27848fa8  addiu       $a0, $gp, -0x7058
    ctx->pc = 0x1f1b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938536));
label_1f1b68:
    // 0x1f1b68: 0x891021  addu        $v0, $a0, $t1
    ctx->pc = 0x1f1b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_1f1b6c:
    // 0x1f1b6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f1b6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1b70:
    // 0x1f1b70: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1f1b70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_1f1b74:
    // 0x1f1b74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f1b74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1b78:
    // 0x1f1b78: 0x6a6021  addu        $t4, $v1, $t2
    ctx->pc = 0x1f1b78u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_1f1b7c:
    // 0x1f1b7c: 0x0  nop
    ctx->pc = 0x1f1b7cu;
    // NOP
label_1f1b80:
    // 0x1f1b80: 0x1885821  addu        $t3, $t4, $t0
    ctx->pc = 0x1f1b80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
label_1f1b84:
    // 0x1f1b84: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x1f1b84u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
label_1f1b88:
    // 0x1f1b88: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1f1b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_1f1b8c:
    // 0x1f1b8c: 0xad600004  sw          $zero, 0x4($t3)
    ctx->pc = 0x1f1b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 0));
label_1f1b90:
    // 0x1f1b90: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x1f1b90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f1b94:
    // 0x1f1b94: 0xad600008  sw          $zero, 0x8($t3)
    ctx->pc = 0x1f1b94u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 0));
label_1f1b98:
    // 0x1f1b98: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x1f1b98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
label_1f1b9c:
    // 0x1f1b9c: 0xad60000c  sw          $zero, 0xC($t3)
    ctx->pc = 0x1f1b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 0));
label_1f1ba0:
    // 0x1f1ba0: 0xad600010  sw          $zero, 0x10($t3)
    ctx->pc = 0x1f1ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 0));
label_1f1ba4:
    // 0x1f1ba4: 0xad600014  sw          $zero, 0x14($t3)
    ctx->pc = 0x1f1ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 0));
label_1f1ba8:
    // 0x1f1ba8: 0xad600018  sw          $zero, 0x18($t3)
    ctx->pc = 0x1f1ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 0));
label_1f1bac:
    // 0x1f1bac: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1f1bb0:
    if (ctx->pc == 0x1F1BB0u) {
        ctx->pc = 0x1F1BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1BACu;
        // 0x1f1bb0: 0xad60001c  sw          $zero, 0x1C($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1BB4u;
        goto label_1f1bb4;
    }
    ctx->pc = 0x1F1BACu;
    {
        const bool branch_taken_0x1f1bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1BACu;
        // 0x1f1bb0: 0xad60001c  sw          $zero, 0x1C($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1bac) {
            ctx->pc = 0x1F1B7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1b7c;
        }
    }
    ctx->pc = 0x1F1BB4u;
label_1f1bb4:
    // 0x1f1bb4: 0x28c1000a  slti        $at, $a2, 0xA
    ctx->pc = 0x1f1bb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
label_1f1bb8:
    // 0x1f1bb8: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_1f1bbc:
    if (ctx->pc == 0x1F1BBCu) {
        ctx->pc = 0x1F1BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1BB8u;
        // 0x1f1bbc: 0x64080  sll         $t0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1BC0u;
        goto label_1f1bc0;
    }
    ctx->pc = 0x1F1BB8u;
    {
        const bool branch_taken_0x1f1bb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1BB8u;
        // 0x1f1bbc: 0x64080  sll         $t0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1bb8) {
            ctx->pc = 0x1F1BDCu;
            goto label_1f1bdc;
        }
    }
    ctx->pc = 0x1F1BC0u;
label_1f1bc0:
    // 0x1f1bc0: 0x1881021  addu        $v0, $t4, $t0
    ctx->pc = 0x1f1bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
label_1f1bc4:
    // 0x1f1bc4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f1bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1f1bc8:
    // 0x1f1bc8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f1bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1f1bcc:
    // 0x1f1bcc: 0x28c2000a  slti        $v0, $a2, 0xA
    ctx->pc = 0x1f1bccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
label_1f1bd0:
    // 0x1f1bd0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1f1bd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_1f1bd4:
    // 0x1f1bd4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1f1bd8:
    if (ctx->pc == 0x1F1BD8u) {
        ctx->pc = 0x1F1BDCu;
        goto label_1f1bdc;
    }
    ctx->pc = 0x1F1BD4u;
    {
        const bool branch_taken_0x1f1bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1bd4) {
            ctx->pc = 0x1F1BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1bc0;
        }
    }
    ctx->pc = 0x1F1BDCu;
label_1f1bdc:
    // 0x1f1bdc: 0x0  nop
    ctx->pc = 0x1f1bdcu;
    // NOP
label_1f1be0:
    // 0x1f1be0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1f1be0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1f1be4:
    // 0x1f1be4: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x1f1be4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f1be8:
    // 0x1f1be8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1f1be8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_1f1bec:
    // 0x1f1bec: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
label_1f1bf0:
    if (ctx->pc == 0x1F1BF0u) {
        ctx->pc = 0x1F1BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1BECu;
        // 0x1f1bf0: 0x254a0028  addiu       $t2, $t2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1BF4u;
        goto label_1f1bf4;
    }
    ctx->pc = 0x1F1BECu;
    {
        const bool branch_taken_0x1f1bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1BECu;
        // 0x1f1bf0: 0x254a0028  addiu       $t2, $t2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1bec) {
            ctx->pc = 0x1F1B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1b68;
        }
    }
    ctx->pc = 0x1F1BF4u;
label_1f1bf4:
    // 0x1f1bf4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f1bf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1bf8:
    // 0x1f1bf8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f1bf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1bfc:
    // 0x1f1bfc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f1bfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1c00:
    // 0x1f1c00: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f1c00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1c04:
    // 0x1f1c04: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f1c04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1c08:
    // 0x1f1c08: 0xc056a38  jal         func_15A8E0
label_1f1c0c:
    if (ctx->pc == 0x1F1C0Cu) {
        ctx->pc = 0x1F1C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1C08u;
        // 0x1f1c0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1C10u;
        goto label_1f1c10;
    }
    ctx->pc = 0x1F1C08u;
    SET_GPR_U32(ctx, 31, 0x1F1C10u);
    ctx->pc = 0x1F1C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1C08u;
    // 0x1f1c0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A8E0u, 0x1F1C08u, 0x1F1C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1C10u;
label_1f1c10:
    // 0x1f1c10: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x1f1c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_1f1c14:
    // 0x1f1c14: 0x27838fb8  addiu       $v1, $gp, -0x7048
    ctx->pc = 0x1f1c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938552));
label_1f1c18:
    // 0x1f1c18: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1f1c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1f1c1c:
    // 0x1f1c1c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1f1c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1f1c20:
    // 0x1f1c20: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1f1c20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1f1c24:
    // 0x1f1c24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f1c24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1c28:
    // 0x1f1c28: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f1c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f1c2c:
    // 0x1f1c2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f1c2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1c30:
    // 0x1f1c30: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f1c30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1f1c34:
    // 0x1f1c34: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1f1c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_1f1c38:
    // 0x1f1c38: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x1f1c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
label_1f1c3c:
    // 0x1f1c3c: 0x2442bff0  addiu       $v0, $v0, -0x4010
    ctx->pc = 0x1f1c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950896));
label_1f1c40:
    // 0x1f1c40: 0x3c0c0025  lui         $t4, 0x25
    ctx->pc = 0x1f1c40u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)37 << 16));
label_1f1c44:
    // 0x1f1c44: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1f1c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1f1c48:
    // 0x1f1c48: 0x27858fc8  addiu       $a1, $gp, -0x7038
    ctx->pc = 0x1f1c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938568));
label_1f1c4c:
    // 0x1f1c4c: 0x24637f40  addiu       $v1, $v1, 0x7F40
    ctx->pc = 0x1f1c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32576));
label_1f1c50:
    // 0x1f1c50: 0x244a0000  addiu       $t2, $v0, 0x0
    ctx->pc = 0x1f1c50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1f1c54:
    // 0x1f1c54: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x1f1c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_1f1c58:
    // 0x1f1c58: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x1f1c58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1f1c5c:
    // 0x1f1c5c: 0x24440000  addiu       $a0, $v0, 0x0
    ctx->pc = 0x1f1c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1f1c60:
    // 0x1f1c60: 0x258c3b80  addiu       $t4, $t4, 0x3B80
    ctx->pc = 0x1f1c60u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 15232));
label_1f1c64:
    // 0x1f1c64: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1f1c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1f1c68:
    // 0x1f1c68: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x1f1c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_1f1c6c:
    // 0x1f1c6c: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x1f1c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_1f1c70:
    // 0x1f1c70: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x1f1c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1f1c74:
    // 0x1f1c74: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x1f1c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_1f1c78:
    // 0x1f1c78: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1f1c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1f1c7c:
    // 0x1f1c7c: 0x24422570  addiu       $v0, $v0, 0x2570
    ctx->pc = 0x1f1c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9584));
label_1f1c80:
    // 0x1f1c80: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1f1c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1f1c84:
    // 0x1f1c84: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1f1c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1f1c88:
    // 0x1f1c88: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x1f1c88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f1c8c:
    // 0x1f1c8c: 0xc8082a  slt         $at, $a2, $t0
    ctx->pc = 0x1f1c8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1f1c90:
    // 0x1f1c90: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1f1c94:
    if (ctx->pc == 0x1F1C94u) {
        ctx->pc = 0x1F1C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1C90u;
        // 0x1f1c94: 0x875821  addu        $t3, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1C98u;
        goto label_1f1c98;
    }
    ctx->pc = 0x1F1C90u;
    {
        const bool branch_taken_0x1f1c90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1C90u;
        // 0x1f1c94: 0x875821  addu        $t3, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1c90) {
            ctx->pc = 0x1F1CE4u;
            goto label_1f1ce4;
        }
    }
    ctx->pc = 0x1F1C98u;
label_1f1c98:
    // 0x1f1c98: 0x1474021  addu        $t0, $t2, $a3
    ctx->pc = 0x1f1c98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_1f1c9c:
    // 0x1f1c9c: 0x8d6d0000  lw          $t5, 0x0($t3)
    ctx->pc = 0x1f1c9cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1f1ca0:
    // 0x1f1ca0: 0xd58c0  sll         $t3, $t5, 3
    ctx->pc = 0x1f1ca0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
label_1f1ca4:
    // 0x1f1ca4: 0x16d5821  addu        $t3, $t3, $t5
    ctx->pc = 0x1f1ca4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
label_1f1ca8:
    // 0x1f1ca8: 0xb5980  sll         $t3, $t3, 6
    ctx->pc = 0x1f1ca8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 6));
label_1f1cac:
    // 0x1f1cac: 0x6b5821  addu        $t3, $v1, $t3
    ctx->pc = 0x1f1cacu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_1f1cb0:
    // 0x1f1cb0: 0x916d0221  lbu         $t5, 0x221($t3)
    ctx->pc = 0x1f1cb0u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 545)));
label_1f1cb4:
    // 0x1f1cb4: 0xd58c0  sll         $t3, $t5, 3
    ctx->pc = 0x1f1cb4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
label_1f1cb8:
    // 0x1f1cb8: 0x16d5821  addu        $t3, $t3, $t5
    ctx->pc = 0x1f1cb8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
label_1f1cbc:
    // 0x1f1cbc: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x1f1cbcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
label_1f1cc0:
    // 0x1f1cc0: 0x4b5821  addu        $t3, $v0, $t3
    ctx->pc = 0x1f1cc0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_1f1cc4:
    // 0x1f1cc4: 0x8d6b0000  lw          $t3, 0x0($t3)
    ctx->pc = 0x1f1cc4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1f1cc8:
    // 0x1f1cc8: 0x956d000a  lhu         $t5, 0xA($t3)
    ctx->pc = 0x1f1cc8u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 10)));
label_1f1ccc:
    // 0x1f1ccc: 0xd5900  sll         $t3, $t5, 4
    ctx->pc = 0x1f1cccu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
label_1f1cd0:
    // 0x1f1cd0: 0x16d5823  subu        $t3, $t3, $t5
    ctx->pc = 0x1f1cd0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
label_1f1cd4:
    // 0x1f1cd4: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x1f1cd4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
label_1f1cd8:
    // 0x1f1cd8: 0x916b0000  lbu         $t3, 0x0($t3)
    ctx->pc = 0x1f1cd8u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
label_1f1cdc:
    // 0x1f1cdc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1f1ce0:
    if (ctx->pc == 0x1F1CE0u) {
        ctx->pc = 0x1F1CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1CDCu;
        // 0x1f1ce0: 0xad0b0000  sw          $t3, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1CE4u;
        goto label_1f1ce4;
    }
    ctx->pc = 0x1F1CDCu;
    {
        const bool branch_taken_0x1f1cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1CDCu;
        // 0x1f1ce0: 0xad0b0000  sw          $t3, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1cdc) {
            ctx->pc = 0x1F1CF0u;
            { ctx->pc = 0x1f1cf0; return; }
        }
    }
    ctx->pc = 0x1F1CE4u;
label_1f1ce4:
    // 0x1f1ce4: 0x0  nop
    ctx->pc = 0x1f1ce4u;
    // NOP
    ctx->pc = 0x1f1ce8u;
    return;
}
