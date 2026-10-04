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

// Function: FUN_0019b5e8
// Address: 0x19b5e8 - 0x29b5f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b5e8_part46(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x1b17f8u: goto label_1b17f8;
        case 0x1b17fcu: goto label_1b17fc;
        case 0x1b1800u: goto label_1b1800;
        case 0x1b1804u: goto label_1b1804;
        case 0x1b1808u: goto label_1b1808;
        case 0x1b180cu: goto label_1b180c;
        case 0x1b1810u: goto label_1b1810;
        case 0x1b1814u: goto label_1b1814;
        case 0x1b1818u: goto label_1b1818;
        case 0x1b181cu: goto label_1b181c;
        case 0x1b1820u: goto label_1b1820;
        case 0x1b1824u: goto label_1b1824;
        case 0x1b1828u: goto label_1b1828;
        case 0x1b182cu: goto label_1b182c;
        case 0x1b1830u: goto label_1b1830;
        case 0x1b1834u: goto label_1b1834;
        case 0x1b1838u: goto label_1b1838;
        case 0x1b183cu: goto label_1b183c;
        case 0x1b1840u: goto label_1b1840;
        case 0x1b1844u: goto label_1b1844;
        case 0x1b1848u: goto label_1b1848;
        case 0x1b184cu: goto label_1b184c;
        case 0x1b1850u: goto label_1b1850;
        case 0x1b1854u: goto label_1b1854;
        case 0x1b1858u: goto label_1b1858;
        case 0x1b185cu: goto label_1b185c;
        case 0x1b1860u: goto label_1b1860;
        case 0x1b1864u: goto label_1b1864;
        case 0x1b1868u: goto label_1b1868;
        case 0x1b186cu: goto label_1b186c;
        case 0x1b1870u: goto label_1b1870;
        case 0x1b1874u: goto label_1b1874;
        case 0x1b1878u: goto label_1b1878;
        case 0x1b187cu: goto label_1b187c;
        case 0x1b1880u: goto label_1b1880;
        case 0x1b1884u: goto label_1b1884;
        case 0x1b1888u: goto label_1b1888;
        case 0x1b188cu: goto label_1b188c;
        case 0x1b1890u: goto label_1b1890;
        case 0x1b1894u: goto label_1b1894;
        case 0x1b1898u: goto label_1b1898;
        case 0x1b189cu: goto label_1b189c;
        case 0x1b18a0u: goto label_1b18a0;
        case 0x1b18a4u: goto label_1b18a4;
        case 0x1b18a8u: goto label_1b18a8;
        case 0x1b18acu: goto label_1b18ac;
        case 0x1b18b0u: goto label_1b18b0;
        case 0x1b18b4u: goto label_1b18b4;
        case 0x1b18b8u: goto label_1b18b8;
        case 0x1b18bcu: goto label_1b18bc;
        case 0x1b18c0u: goto label_1b18c0;
        case 0x1b18c4u: goto label_1b18c4;
        case 0x1b18c8u: goto label_1b18c8;
        case 0x1b18ccu: goto label_1b18cc;
        case 0x1b18d0u: goto label_1b18d0;
        case 0x1b18d4u: goto label_1b18d4;
        case 0x1b18d8u: goto label_1b18d8;
        case 0x1b18dcu: goto label_1b18dc;
        case 0x1b18e0u: goto label_1b18e0;
        case 0x1b18e4u: goto label_1b18e4;
        case 0x1b18e8u: goto label_1b18e8;
        case 0x1b18ecu: goto label_1b18ec;
        case 0x1b18f0u: goto label_1b18f0;
        case 0x1b18f4u: goto label_1b18f4;
        case 0x1b18f8u: goto label_1b18f8;
        case 0x1b18fcu: goto label_1b18fc;
        case 0x1b1900u: goto label_1b1900;
        case 0x1b1904u: goto label_1b1904;
        case 0x1b1908u: goto label_1b1908;
        case 0x1b190cu: goto label_1b190c;
        case 0x1b1910u: goto label_1b1910;
        case 0x1b1914u: goto label_1b1914;
        case 0x1b1918u: goto label_1b1918;
        case 0x1b191cu: goto label_1b191c;
        case 0x1b1920u: goto label_1b1920;
        case 0x1b1924u: goto label_1b1924;
        case 0x1b1928u: goto label_1b1928;
        case 0x1b192cu: goto label_1b192c;
        case 0x1b1930u: goto label_1b1930;
        case 0x1b1934u: goto label_1b1934;
        case 0x1b1938u: goto label_1b1938;
        case 0x1b193cu: goto label_1b193c;
        case 0x1b1940u: goto label_1b1940;
        case 0x1b1944u: goto label_1b1944;
        case 0x1b1948u: goto label_1b1948;
        case 0x1b194cu: goto label_1b194c;
        case 0x1b1950u: goto label_1b1950;
        case 0x1b1954u: goto label_1b1954;
        case 0x1b1958u: goto label_1b1958;
        case 0x1b195cu: goto label_1b195c;
        case 0x1b1960u: goto label_1b1960;
        case 0x1b1964u: goto label_1b1964;
        case 0x1b1968u: goto label_1b1968;
        case 0x1b196cu: goto label_1b196c;
        case 0x1b1970u: goto label_1b1970;
        case 0x1b1974u: goto label_1b1974;
        case 0x1b1978u: goto label_1b1978;
        case 0x1b197cu: goto label_1b197c;
        case 0x1b1980u: goto label_1b1980;
        case 0x1b1984u: goto label_1b1984;
        case 0x1b1988u: goto label_1b1988;
        case 0x1b198cu: goto label_1b198c;
        case 0x1b1990u: goto label_1b1990;
        case 0x1b1994u: goto label_1b1994;
        case 0x1b1998u: goto label_1b1998;
        case 0x1b199cu: goto label_1b199c;
        case 0x1b19a0u: goto label_1b19a0;
        case 0x1b19a4u: goto label_1b19a4;
        case 0x1b19a8u: goto label_1b19a8;
        case 0x1b19acu: goto label_1b19ac;
        case 0x1b19b0u: goto label_1b19b0;
        case 0x1b19b4u: goto label_1b19b4;
        case 0x1b19b8u: goto label_1b19b8;
        case 0x1b19bcu: goto label_1b19bc;
        case 0x1b19c0u: goto label_1b19c0;
        case 0x1b19c4u: goto label_1b19c4;
        case 0x1b19c8u: goto label_1b19c8;
        case 0x1b19ccu: goto label_1b19cc;
        case 0x1b19d0u: goto label_1b19d0;
        case 0x1b19d4u: goto label_1b19d4;
        case 0x1b19d8u: goto label_1b19d8;
        case 0x1b19dcu: goto label_1b19dc;
        case 0x1b19e0u: goto label_1b19e0;
        case 0x1b19e4u: goto label_1b19e4;
        case 0x1b19e8u: goto label_1b19e8;
        case 0x1b19ecu: goto label_1b19ec;
        case 0x1b19f0u: goto label_1b19f0;
        case 0x1b19f4u: goto label_1b19f4;
        case 0x1b19f8u: goto label_1b19f8;
        case 0x1b19fcu: goto label_1b19fc;
        case 0x1b1a00u: goto label_1b1a00;
        case 0x1b1a04u: goto label_1b1a04;
        case 0x1b1a08u: goto label_1b1a08;
        case 0x1b1a0cu: goto label_1b1a0c;
        case 0x1b1a10u: goto label_1b1a10;
        case 0x1b1a14u: goto label_1b1a14;
        case 0x1b1a18u: goto label_1b1a18;
        case 0x1b1a1cu: goto label_1b1a1c;
        case 0x1b1a20u: goto label_1b1a20;
        case 0x1b1a24u: goto label_1b1a24;
        case 0x1b1a28u: goto label_1b1a28;
        case 0x1b1a2cu: goto label_1b1a2c;
        case 0x1b1a30u: goto label_1b1a30;
        case 0x1b1a34u: goto label_1b1a34;
        case 0x1b1a38u: goto label_1b1a38;
        case 0x1b1a3cu: goto label_1b1a3c;
        case 0x1b1a40u: goto label_1b1a40;
        case 0x1b1a44u: goto label_1b1a44;
        case 0x1b1a48u: goto label_1b1a48;
        case 0x1b1a4cu: goto label_1b1a4c;
        case 0x1b1a50u: goto label_1b1a50;
        case 0x1b1a54u: goto label_1b1a54;
        case 0x1b1a58u: goto label_1b1a58;
        case 0x1b1a5cu: goto label_1b1a5c;
        case 0x1b1a60u: goto label_1b1a60;
        case 0x1b1a64u: goto label_1b1a64;
        case 0x1b1a68u: goto label_1b1a68;
        case 0x1b1a6cu: goto label_1b1a6c;
        case 0x1b1a70u: goto label_1b1a70;
        case 0x1b1a74u: goto label_1b1a74;
        case 0x1b1a78u: goto label_1b1a78;
        case 0x1b1a7cu: goto label_1b1a7c;
        case 0x1b1a80u: goto label_1b1a80;
        case 0x1b1a84u: goto label_1b1a84;
        case 0x1b1a88u: goto label_1b1a88;
        case 0x1b1a8cu: goto label_1b1a8c;
        case 0x1b1a90u: goto label_1b1a90;
        case 0x1b1a94u: goto label_1b1a94;
        case 0x1b1a98u: goto label_1b1a98;
        case 0x1b1a9cu: goto label_1b1a9c;
        case 0x1b1aa0u: goto label_1b1aa0;
        case 0x1b1aa4u: goto label_1b1aa4;
        case 0x1b1aa8u: goto label_1b1aa8;
        case 0x1b1aacu: goto label_1b1aac;
        case 0x1b1ab0u: goto label_1b1ab0;
        case 0x1b1ab4u: goto label_1b1ab4;
        case 0x1b1ab8u: goto label_1b1ab8;
        case 0x1b1abcu: goto label_1b1abc;
        case 0x1b1ac0u: goto label_1b1ac0;
        case 0x1b1ac4u: goto label_1b1ac4;
        case 0x1b1ac8u: goto label_1b1ac8;
        case 0x1b1accu: goto label_1b1acc;
        case 0x1b1ad0u: goto label_1b1ad0;
        case 0x1b1ad4u: goto label_1b1ad4;
        case 0x1b1ad8u: goto label_1b1ad8;
        case 0x1b1adcu: goto label_1b1adc;
        case 0x1b1ae0u: goto label_1b1ae0;
        case 0x1b1ae4u: goto label_1b1ae4;
        case 0x1b1ae8u: goto label_1b1ae8;
        case 0x1b1aecu: goto label_1b1aec;
        case 0x1b1af0u: goto label_1b1af0;
        case 0x1b1af4u: goto label_1b1af4;
        case 0x1b1af8u: goto label_1b1af8;
        case 0x1b1afcu: goto label_1b1afc;
        case 0x1b1b00u: goto label_1b1b00;
        case 0x1b1b04u: goto label_1b1b04;
        case 0x1b1b08u: goto label_1b1b08;
        case 0x1b1b0cu: goto label_1b1b0c;
        case 0x1b1b10u: goto label_1b1b10;
        case 0x1b1b14u: goto label_1b1b14;
        case 0x1b1b18u: goto label_1b1b18;
        case 0x1b1b1cu: goto label_1b1b1c;
        case 0x1b1b20u: goto label_1b1b20;
        case 0x1b1b24u: goto label_1b1b24;
        case 0x1b1b28u: goto label_1b1b28;
        case 0x1b1b2cu: goto label_1b1b2c;
        case 0x1b1b30u: goto label_1b1b30;
        case 0x1b1b34u: goto label_1b1b34;
        case 0x1b1b38u: goto label_1b1b38;
        case 0x1b1b3cu: goto label_1b1b3c;
        case 0x1b1b40u: goto label_1b1b40;
        case 0x1b1b44u: goto label_1b1b44;
        case 0x1b1b48u: goto label_1b1b48;
        case 0x1b1b4cu: goto label_1b1b4c;
        case 0x1b1b50u: goto label_1b1b50;
        case 0x1b1b54u: goto label_1b1b54;
        case 0x1b1b58u: goto label_1b1b58;
        case 0x1b1b5cu: goto label_1b1b5c;
        case 0x1b1b60u: goto label_1b1b60;
        case 0x1b1b64u: goto label_1b1b64;
        case 0x1b1b68u: goto label_1b1b68;
        case 0x1b1b6cu: goto label_1b1b6c;
        case 0x1b1b70u: goto label_1b1b70;
        case 0x1b1b74u: goto label_1b1b74;
        case 0x1b1b78u: goto label_1b1b78;
        case 0x1b1b7cu: goto label_1b1b7c;
        case 0x1b1b80u: goto label_1b1b80;
        case 0x1b1b84u: goto label_1b1b84;
        case 0x1b1b88u: goto label_1b1b88;
        case 0x1b1b8cu: goto label_1b1b8c;
        case 0x1b1b90u: goto label_1b1b90;
        case 0x1b1b94u: goto label_1b1b94;
        case 0x1b1b98u: goto label_1b1b98;
        case 0x1b1b9cu: goto label_1b1b9c;
        case 0x1b1ba0u: goto label_1b1ba0;
        case 0x1b1ba4u: goto label_1b1ba4;
        case 0x1b1ba8u: goto label_1b1ba8;
        case 0x1b1bacu: goto label_1b1bac;
        case 0x1b1bb0u: goto label_1b1bb0;
        case 0x1b1bb4u: goto label_1b1bb4;
        case 0x1b1bb8u: goto label_1b1bb8;
        case 0x1b1bbcu: goto label_1b1bbc;
        case 0x1b1bc0u: goto label_1b1bc0;
        case 0x1b1bc4u: goto label_1b1bc4;
        case 0x1b1bc8u: goto label_1b1bc8;
        case 0x1b1bccu: goto label_1b1bcc;
        case 0x1b1bd0u: goto label_1b1bd0;
        case 0x1b1bd4u: goto label_1b1bd4;
        case 0x1b1bd8u: goto label_1b1bd8;
        case 0x1b1bdcu: goto label_1b1bdc;
        case 0x1b1be0u: goto label_1b1be0;
        case 0x1b1be4u: goto label_1b1be4;
        case 0x1b1be8u: goto label_1b1be8;
        case 0x1b1becu: goto label_1b1bec;
        case 0x1b1bf0u: goto label_1b1bf0;
        case 0x1b1bf4u: goto label_1b1bf4;
        case 0x1b1bf8u: goto label_1b1bf8;
        case 0x1b1bfcu: goto label_1b1bfc;
        case 0x1b1c00u: goto label_1b1c00;
        case 0x1b1c04u: goto label_1b1c04;
        case 0x1b1c08u: goto label_1b1c08;
        case 0x1b1c0cu: goto label_1b1c0c;
        case 0x1b1c10u: goto label_1b1c10;
        case 0x1b1c14u: goto label_1b1c14;
        case 0x1b1c18u: goto label_1b1c18;
        case 0x1b1c1cu: goto label_1b1c1c;
        case 0x1b1c20u: goto label_1b1c20;
        case 0x1b1c24u: goto label_1b1c24;
        case 0x1b1c28u: goto label_1b1c28;
        case 0x1b1c2cu: goto label_1b1c2c;
        case 0x1b1c30u: goto label_1b1c30;
        case 0x1b1c34u: goto label_1b1c34;
        case 0x1b1c38u: goto label_1b1c38;
        case 0x1b1c3cu: goto label_1b1c3c;
        case 0x1b1c40u: goto label_1b1c40;
        case 0x1b1c44u: goto label_1b1c44;
        case 0x1b1c48u: goto label_1b1c48;
        case 0x1b1c4cu: goto label_1b1c4c;
        case 0x1b1c50u: goto label_1b1c50;
        case 0x1b1c54u: goto label_1b1c54;
        case 0x1b1c58u: goto label_1b1c58;
        case 0x1b1c5cu: goto label_1b1c5c;
        case 0x1b1c60u: goto label_1b1c60;
        case 0x1b1c64u: goto label_1b1c64;
        case 0x1b1c68u: goto label_1b1c68;
        case 0x1b1c6cu: goto label_1b1c6c;
        case 0x1b1c70u: goto label_1b1c70;
        case 0x1b1c74u: goto label_1b1c74;
        case 0x1b1c78u: goto label_1b1c78;
        case 0x1b1c7cu: goto label_1b1c7c;
        case 0x1b1c80u: goto label_1b1c80;
        case 0x1b1c84u: goto label_1b1c84;
        case 0x1b1c88u: goto label_1b1c88;
        case 0x1b1c8cu: goto label_1b1c8c;
        case 0x1b1c90u: goto label_1b1c90;
        case 0x1b1c94u: goto label_1b1c94;
        case 0x1b1c98u: goto label_1b1c98;
        case 0x1b1c9cu: goto label_1b1c9c;
        case 0x1b1ca0u: goto label_1b1ca0;
        case 0x1b1ca4u: goto label_1b1ca4;
        case 0x1b1ca8u: goto label_1b1ca8;
        case 0x1b1cacu: goto label_1b1cac;
        case 0x1b1cb0u: goto label_1b1cb0;
        case 0x1b1cb4u: goto label_1b1cb4;
        case 0x1b1cb8u: goto label_1b1cb8;
        case 0x1b1cbcu: goto label_1b1cbc;
        case 0x1b1cc0u: goto label_1b1cc0;
        case 0x1b1cc4u: goto label_1b1cc4;
        case 0x1b1cc8u: goto label_1b1cc8;
        case 0x1b1cccu: goto label_1b1ccc;
        case 0x1b1cd0u: goto label_1b1cd0;
        case 0x1b1cd4u: goto label_1b1cd4;
        case 0x1b1cd8u: goto label_1b1cd8;
        case 0x1b1cdcu: goto label_1b1cdc;
        case 0x1b1ce0u: goto label_1b1ce0;
        case 0x1b1ce4u: goto label_1b1ce4;
        case 0x1b1ce8u: goto label_1b1ce8;
        case 0x1b1cecu: goto label_1b1cec;
        case 0x1b1cf0u: goto label_1b1cf0;
        case 0x1b1cf4u: goto label_1b1cf4;
        case 0x1b1cf8u: goto label_1b1cf8;
        case 0x1b1cfcu: goto label_1b1cfc;
        case 0x1b1d00u: goto label_1b1d00;
        case 0x1b1d04u: goto label_1b1d04;
        case 0x1b1d08u: goto label_1b1d08;
        case 0x1b1d0cu: goto label_1b1d0c;
        case 0x1b1d10u: goto label_1b1d10;
        case 0x1b1d14u: goto label_1b1d14;
        case 0x1b1d18u: goto label_1b1d18;
        case 0x1b1d1cu: goto label_1b1d1c;
        case 0x1b1d20u: goto label_1b1d20;
        case 0x1b1d24u: goto label_1b1d24;
        case 0x1b1d28u: goto label_1b1d28;
        case 0x1b1d2cu: goto label_1b1d2c;
        case 0x1b1d30u: goto label_1b1d30;
        case 0x1b1d34u: goto label_1b1d34;
        case 0x1b1d38u: goto label_1b1d38;
        case 0x1b1d3cu: goto label_1b1d3c;
        case 0x1b1d40u: goto label_1b1d40;
        case 0x1b1d44u: goto label_1b1d44;
        default: return;
    }

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
label_1b17f8:
    // 0x1b17f8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b17f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1b17fc:
    // 0x1b17fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b17fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b1800:
    // 0x1b1800: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1b1800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1b1804:
    // 0x1b1804: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b1804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b1808:
    // 0x1b1808: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1b1808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_1b180c:
    // 0x1b180c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b180cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1b1810:
    // 0x1b1810: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1b1810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1b1814:
    // 0x1b1814: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1b1818:
    if (ctx->pc == 0x1B1818u) {
        ctx->pc = 0x1B1818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1814u;
        // 0x1b1818: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B181Cu;
        goto label_1b181c;
    }
    ctx->pc = 0x1B1814u;
    {
        const bool branch_taken_0x1b1814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1814u;
        // 0x1b1818: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1814) {
            ctx->pc = 0x1B1824u;
            goto label_1b1824;
        }
    }
    ctx->pc = 0x1B181Cu;
label_1b181c:
    // 0x1b181c: 0x10000044  b           . + 4 + (0x44 << 2)
label_1b1820:
    if (ctx->pc == 0x1B1820u) {
        ctx->pc = 0x1B1820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B181Cu;
        // 0x1b1820: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1824u;
        goto label_1b1824;
    }
    ctx->pc = 0x1B181Cu;
    {
        const bool branch_taken_0x1b181c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B181Cu;
        // 0x1b1820: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b181c) {
            ctx->pc = 0x1B1930u;
            goto label_1b1930;
        }
    }
    ctx->pc = 0x1B1824u;
label_1b1824:
    // 0x1b1824: 0x3c150029  lui         $s5, 0x29
    ctx->pc = 0x1b1824u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)41 << 16));
label_1b1828:
    // 0x1b1828: 0xc06921c  jal         func_1A4870
label_1b182c:
    if (ctx->pc == 0x1B182Cu) {
        ctx->pc = 0x1B182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1828u;
        // 0x1b182c: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1830u;
        goto label_1b1830;
    }
    ctx->pc = 0x1B1828u;
    SET_GPR_U32(ctx, 31, 0x1B1830u);
    ctx->pc = 0x1B182Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1828u;
    // 0x1b182c: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    { ctx->pc = 0x1a4870; return; }
    ctx->pc = 0x1B1830u;
label_1b1830:
    // 0x1b1830: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1b1834:
    if (ctx->pc == 0x1B1834u) {
        ctx->pc = 0x1B1834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1830u;
        // 0x1b1834: 0x3c130037  lui         $s3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1838u;
        goto label_1b1838;
    }
    ctx->pc = 0x1B1830u;
    {
        const bool branch_taken_0x1b1830 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B1834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1830u;
        // 0x1b1834: 0x3c130037  lui         $s3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1830) {
            ctx->pc = 0x1B1840u;
            goto label_1b1840;
        }
    }
    ctx->pc = 0x1B1838u;
label_1b1838:
    // 0x1b1838: 0x1000003d  b           . + 4 + (0x3D << 2)
label_1b183c:
    if (ctx->pc == 0x1B183Cu) {
        ctx->pc = 0x1B183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1838u;
        // 0x1b183c: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1840u;
        goto label_1b1840;
    }
    ctx->pc = 0x1B1838u;
    {
        const bool branch_taken_0x1b1838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1838u;
        // 0x1b183c: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1838) {
            ctx->pc = 0x1B1930u;
            goto label_1b1930;
        }
    }
    ctx->pc = 0x1B1840u;
label_1b1840:
    // 0x1b1840: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1b1840u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
label_1b1844:
    // 0x1b1844: 0x26666280  addiu       $a2, $s3, 0x6280
    ctx->pc = 0x1b1844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 25216));
label_1b1848:
    // 0x1b1848: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1b184c:
    if (ctx->pc == 0x1B184Cu) {
        ctx->pc = 0x1B184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1848u;
        // 0x1b184c: 0xae726280  sw          $s2, 0x6280($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 25216), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1850u;
        goto label_1b1850;
    }
    ctx->pc = 0x1B1848u;
    {
        const bool branch_taken_0x1b1848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1848u;
        // 0x1b184c: 0xae726280  sw          $s2, 0x6280($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 25216), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1848) {
            ctx->pc = 0x1B1860u;
            goto label_1b1860;
        }
    }
    ctx->pc = 0x1B1850u;
label_1b1850:
    // 0x1b1850: 0xacd00014  sw          $s0, 0x14($a2)
    ctx->pc = 0x1b1850u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 16));
label_1b1854:
    // 0x1b1854: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x1b1854u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
label_1b1858:
    // 0x1b1858: 0x1000000c  b           . + 4 + (0xC << 2)
label_1b185c:
    if (ctx->pc == 0x1B185Cu) {
        ctx->pc = 0x1B185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1858u;
        // 0x1b185c: 0xacc0000c  sw          $zero, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1860u;
        goto label_1b1860;
    }
    ctx->pc = 0x1B1858u;
    {
        const bool branch_taken_0x1b1858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1858u;
        // 0x1b185c: 0xacc0000c  sw          $zero, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1858) {
            ctx->pc = 0x1B188Cu;
            goto label_1b188c;
        }
    }
    ctx->pc = 0x1B1860u;
label_1b1860:
    // 0x1b1860: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1b1860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_1b1864:
    // 0x1b1864: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x1b1864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1b1868:
    // 0x1b1868: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x1b1868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
label_1b186c:
    // 0x1b186c: 0x2624fff0  addiu       $a0, $s1, -0x10
    ctx->pc = 0x1b186cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
label_1b1870:
    // 0x1b1870: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b1870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1b1874:
    // 0x1b1874: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1b1874u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1b1878:
    // 0x1b1878: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x1b1878u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1b187c:
    // 0x1b187c: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x1b187cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1b1880:
    // 0x1b1880: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x1b1880u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
label_1b1884:
    // 0x1b1884: 0xacc5000c  sw          $a1, 0xC($a2)
    ctx->pc = 0x1b1884u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
label_1b1888:
    // 0x1b1888: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x1b1888u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_1b188c:
    // 0x1b188c: 0x26626280  addiu       $v0, $s3, 0x6280
    ctx->pc = 0x1b188cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 25216));
label_1b1890:
    // 0x1b1890: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1b1890u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b1894:
    // 0x1b1894: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1b1894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1b1898:
    // 0x1b1898: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_1b189c:
    if (ctx->pc == 0x1B189Cu) {
        ctx->pc = 0x1B189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1898u;
        // 0x1b189c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B18A0u;
        goto label_1b18a0;
    }
    ctx->pc = 0x1B1898u;
    {
        const bool branch_taken_0x1b1898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1898u;
        // 0x1b189c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1898) {
            ctx->pc = 0x1B18D8u;
            goto label_1b18d8;
        }
    }
    ctx->pc = 0x1B18A0u;
label_1b18a0:
    // 0x1b18a0: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1b18a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1b18a4:
    // 0x1b18a4: 0x2261021  addu        $v0, $s1, $a2
    ctx->pc = 0x1b18a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_1b18a8:
    // 0x1b18a8: 0x24e46280  addiu       $a0, $a3, 0x6280
    ctx->pc = 0x1b18a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 25216));
label_1b18ac:
    // 0x1b18ac: 0x0  nop
    ctx->pc = 0x1b18acu;
    // NOP
label_1b18b0:
    // 0x1b18b0: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1b18b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1b18b4:
    // 0x1b18b4: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x1b18b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1b18b8:
    // 0x1b18b8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1b18b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1b18bc:
    // 0x1b18bc: 0xa0650020  sb          $a1, 0x20($v1)
    ctx->pc = 0x1b18bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 5));
label_1b18c0:
    // 0x1b18c0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1b18c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1b18c4:
    // 0x1b18c4: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1b18c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1b18c8:
    // 0x1b18c8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1b18cc:
    if (ctx->pc == 0x1B18CCu) {
        ctx->pc = 0x1B18CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B18C8u;
        // 0x1b18cc: 0x2261021  addu        $v0, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B18D0u;
        goto label_1b18d0;
    }
    ctx->pc = 0x1B18C8u;
    {
        const bool branch_taken_0x1b18c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B18CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B18C8u;
        // 0x1b18cc: 0x2261021  addu        $v0, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b18c8) {
            ctx->pc = 0x1B18B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b18b0;
        }
    }
    ctx->pc = 0x1B18D0u;
label_1b18d0:
    // 0x1b18d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b18d4:
    if (ctx->pc == 0x1B18D4u) {
        ctx->pc = 0x1B18D8u;
        goto label_1b18d8;
    }
    ctx->pc = 0x1B18D0u;
    {
        const bool branch_taken_0x1b18d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b18d0) {
            ctx->pc = 0x1B18DCu;
            goto label_1b18dc;
        }
    }
    ctx->pc = 0x1B18D8u;
label_1b18d8:
    // 0x1b18d8: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1b18d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1b18dc:
    // 0x1b18dc: 0xc0692a8  jal         func_1A4AA0
label_1b18e0:
    if (ctx->pc == 0x1B18E0u) {
        ctx->pc = 0x1B18E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B18DCu;
        // 0x1b18e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B18E4u;
        goto label_1b18e4;
    }
    ctx->pc = 0x1B18DCu;
    SET_GPR_U32(ctx, 31, 0x1B18E4u);
    ctx->pc = 0x1B18E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B18DCu;
    // 0x1b18e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    { ctx->pc = 0x1a4aa0; return; }
    ctx->pc = 0x1B18E4u;
label_1b18e4:
    // 0x1b18e4: 0x260977c0  addiu       $t1, $s0, 0x77C0
    ctx->pc = 0x1b18e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 30656));
label_1b18e8:
    // 0x1b18e8: 0x26846200  addiu       $a0, $s4, 0x6200
    ctx->pc = 0x1b18e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25088));
label_1b18ec:
    // 0x1b18ec: 0x26676280  addiu       $a3, $s3, 0x6280
    ctx->pc = 0x1b18ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 25216));
label_1b18f0:
    // 0x1b18f0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b18f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b18f4:
    // 0x1b18f4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b18f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b18f8:
    // 0x1b18f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b18f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b18fc:
    // 0x1b18fc: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1b18fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1b1900:
    // 0x1b1900: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b1900u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b1904:
    // 0x1b1904: 0xc069e2a  jal         func_1A78A8
label_1b1908:
    if (ctx->pc == 0x1B1908u) {
        ctx->pc = 0x1B1908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1904u;
        // 0x1b1908: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B190Cu;
        goto label_1b190c;
    }
    ctx->pc = 0x1B1904u;
    SET_GPR_U32(ctx, 31, 0x1B190Cu);
    ctx->pc = 0x1B1908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1904u;
    // 0x1b1908: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B190Cu;
label_1b190c:
    // 0x1b190c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b190cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1910:
    // 0x1b1910: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_1b1914:
    if (ctx->pc == 0x1B1914u) {
        ctx->pc = 0x1B1914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1910u;
        // 0x1b1914: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1918u;
        goto label_1b1918;
    }
    ctx->pc = 0x1B1910u;
    {
        const bool branch_taken_0x1b1910 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1910u;
        // 0x1b1914: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1910) {
            ctx->pc = 0x1B1924u;
            goto label_1b1924;
        }
    }
    ctx->pc = 0x1B1918u;
label_1b1918:
    // 0x1b1918: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1b1918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b191c:
    // 0x1b191c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b1920:
    if (ctx->pc == 0x1B1920u) {
        ctx->pc = 0x1B1920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B191Cu;
        // 0x1b1920: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1924u;
        goto label_1b1924;
    }
    ctx->pc = 0x1B191Cu;
    {
        const bool branch_taken_0x1b191c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B191Cu;
        // 0x1b1920: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b191c) {
            ctx->pc = 0x1B192Cu;
            goto label_1b192c;
        }
    }
    ctx->pc = 0x1B1924u;
label_1b1924:
    // 0x1b1924: 0xc069210  jal         func_1A4840
label_1b1928:
    if (ctx->pc == 0x1B1928u) {
        ctx->pc = 0x1B1928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1924u;
        // 0x1b1928: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B192Cu;
        goto label_1b192c;
    }
    ctx->pc = 0x1B1924u;
    SET_GPR_U32(ctx, 31, 0x1B192Cu);
    ctx->pc = 0x1B1928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1924u;
    // 0x1b1928: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B192Cu;
label_1b192c:
    // 0x1b192c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b192cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1930:
    // 0x1b1930: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1b1930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1b1934:
    // 0x1b1934: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1b1934u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1b1938:
    // 0x1b1938: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b1938u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b193c:
    // 0x1b193c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b193cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b1940:
    // 0x1b1940: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b1940u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b1944:
    // 0x1b1944: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b1944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b1948:
    // 0x1b1948: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b1948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b194c:
    // 0x1b194c: 0x3e00008  jr          $ra
label_1b1950:
    if (ctx->pc == 0x1B1950u) {
        ctx->pc = 0x1B1950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B194Cu;
        // 0x1b1950: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1954u;
        goto label_1b1954;
    }
    ctx->pc = 0x1B194Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B194Cu;
        // 0x1b1950: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B194Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1954u;
label_1b1954:
    // 0x1b1954: 0x0  nop
    ctx->pc = 0x1b1954u;
    // NOP
label_1b1958:
    // 0x1b1958: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b195c:
    // 0x1b195c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b195cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b1960:
    // 0x1b1960: 0xc0695b4  jal         func_1A56D0
label_1b1964:
    if (ctx->pc == 0x1B1964u) {
        ctx->pc = 0x1B1964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1960u;
        // 0x1b1964: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1968u;
        goto label_1b1968;
    }
    ctx->pc = 0x1B1960u;
    SET_GPR_U32(ctx, 31, 0x1B1968u);
    ctx->pc = 0x1B1964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1960u;
    // 0x1b1964: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A56D0u;
    { ctx->pc = 0x1a56d0; return; }
    ctx->pc = 0x1B1968u;
label_1b1968:
    // 0x1b1968: 0xf  sync
    ctx->pc = 0x1b1968u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1b196c:
    // 0x1b196c: 0x42000038  ei
    ctx->pc = 0x1b196cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_1b1970:
    // 0x1b1970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b1974:
    // 0x1b1974: 0x3e00008  jr          $ra
label_1b1978:
    if (ctx->pc == 0x1B1978u) {
        ctx->pc = 0x1B1978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1974u;
        // 0x1b1978: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B197Cu;
        goto label_1b197c;
    }
    ctx->pc = 0x1B1974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1974u;
        // 0x1b1978: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B197Cu;
label_1b197c:
    // 0x1b197c: 0x0  nop
    ctx->pc = 0x1b197cu;
    // NOP
label_1b1980:
    // 0x1b1980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b1980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b1984:
    // 0x1b1984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b1984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b1988:
    // 0x1b1988: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1b1988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1b198c:
    // 0x1b198c: 0x3c10001b  lui         $s0, 0x1B
    ctx->pc = 0x1b198cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)27 << 16));
label_1b1990:
    // 0x1b1990: 0x3091ffff  andi        $s1, $a0, 0xFFFF
    ctx->pc = 0x1b1990u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1b1994:
    // 0x1b1994: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b1994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b1998:
    // 0x1b1998: 0xc0691c4  jal         func_1A4710
label_1b199c:
    if (ctx->pc == 0x1B199Cu) {
        ctx->pc = 0x1B199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1998u;
        // 0x1b199c: 0x26101958  addiu       $s0, $s0, 0x1958 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B19A0u;
        goto label_1b19a0;
    }
    ctx->pc = 0x1B1998u;
    SET_GPR_U32(ctx, 31, 0x1B19A0u);
    ctx->pc = 0x1B199Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1998u;
    // 0x1b199c: 0x26101958  addiu       $s0, $s0, 0x1958 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4710u;
    { ctx->pc = 0x1a4710; return; }
    ctx->pc = 0x1B19A0u;
label_1b19a0:
    // 0x1b19a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b19a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b19a4:
    // 0x1b19a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b19a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b19a8:
    // 0x1b19a8: 0xc069168  jal         func_1A45A0
label_1b19ac:
    if (ctx->pc == 0x1B19ACu) {
        ctx->pc = 0x1B19ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B19A8u;
        // 0x1b19ac: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B19B0u;
        goto label_1b19b0;
    }
    ctx->pc = 0x1B19A8u;
    SET_GPR_U32(ctx, 31, 0x1B19B0u);
    ctx->pc = 0x1B19ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B19A8u;
    // 0x1b19ac: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A45A0u;
    { ctx->pc = 0x1a45a0; return; }
    ctx->pc = 0x1B19B0u;
label_1b19b0:
    // 0x1b19b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b19b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b19b4:
    // 0x1b19b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b19b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b19b8:
    // 0x1b19b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b19b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b19bc:
    // 0x1b19bc: 0x80691d0  j           func_1A4740
label_1b19c0:
    if (ctx->pc == 0x1B19C0u) {
        ctx->pc = 0x1B19C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B19BCu;
        // 0x1b19c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B19C4u;
        goto label_1b19c4;
    }
    ctx->pc = 0x1B19BCu;
    ctx->pc = 0x1B19C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B19BCu;
    // 0x1b19c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4740u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x1a4740; return; }
    ctx->pc = 0x1B19C4u;
label_1b19c4:
    // 0x1b19c4: 0x0  nop
    ctx->pc = 0x1b19c4u;
    // NOP
label_1b19c8:
    // 0x1b19c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b19c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1b19cc:
    // 0x1b19cc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1b19ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1b19d0:
    // 0x1b19d0: 0x3c130029  lui         $s3, 0x29
    ctx->pc = 0x1b19d0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)41 << 16));
label_1b19d4:
    // 0x1b19d4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1b19d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_1b19d8:
    // 0x1b19d8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1b19d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1b19dc:
    // 0x1b19dc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1b19dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b19e0:
    // 0x1b19e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1b19e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1b19e4:
    // 0x1b19e4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b19e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b19e8:
    // 0x1b19e8: 0x8e628d08  lw          $v0, -0x72F8($s3)
    ctx->pc = 0x1b19e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937864)));
label_1b19ec:
    // 0x1b19ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b19ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b19f0:
    // 0x1b19f0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1b19f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1b19f4:
    // 0x1b19f4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1b19f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1b19f8:
    // 0x1b19f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b19fc:
    if (ctx->pc == 0x1B19FCu) {
        ctx->pc = 0x1B19FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B19F8u;
        // 0x1b19fc: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1A00u;
        goto label_1b1a00;
    }
    ctx->pc = 0x1B19F8u;
    {
        const bool branch_taken_0x1b19f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B19FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B19F8u;
        // 0x1b19fc: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b19f8) {
            ctx->pc = 0x1B1A08u;
            goto label_1b1a08;
        }
    }
    ctx->pc = 0x1B1A00u;
label_1b1a00:
    // 0x1b1a00: 0x10000020  b           . + 4 + (0x20 << 2)
label_1b1a04:
    if (ctx->pc == 0x1B1A04u) {
        ctx->pc = 0x1B1A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A00u;
        // 0x1b1a04: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1A08u;
        goto label_1b1a08;
    }
    ctx->pc = 0x1B1A00u;
    {
        const bool branch_taken_0x1b1a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A00u;
        // 0x1b1a04: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a00) {
            ctx->pc = 0x1B1A84u;
            goto label_1b1a84;
        }
    }
    ctx->pc = 0x1B1A08u;
label_1b1a08:
    // 0x1b1a08: 0x3c110037  lui         $s1, 0x37
    ctx->pc = 0x1b1a08u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
label_1b1a0c:
    // 0x1b1a0c: 0xc069ea6  jal         func_1A7A98
label_1b1a10:
    if (ctx->pc == 0x1B1A10u) {
        ctx->pc = 0x1B1A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A0Cu;
        // 0x1b1a10: 0x26246200  addiu       $a0, $s1, 0x6200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 25088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1A14u;
        goto label_1b1a14;
    }
    ctx->pc = 0x1B1A0Cu;
    SET_GPR_U32(ctx, 31, 0x1B1A14u);
    ctx->pc = 0x1B1A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1A0Cu;
    // 0x1b1a10: 0x26246200  addiu       $a0, $s1, 0x6200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 25088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7A98u;
    { ctx->pc = 0x1a7a98; return; }
    ctx->pc = 0x1B1A14u;
label_1b1a14:
    // 0x1b1a14: 0x1640000c  bnez        $s2, . + 4 + (0xC << 2)
label_1b1a18:
    if (ctx->pc == 0x1B1A18u) {
        ctx->pc = 0x1B1A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A14u;
        // 0x1b1a18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1A1Cu;
        goto label_1b1a1c;
    }
    ctx->pc = 0x1B1A14u;
    {
        const bool branch_taken_0x1b1a14 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A14u;
        // 0x1b1a18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a14) {
            ctx->pc = 0x1B1A48u;
            goto label_1b1a48;
        }
    }
    ctx->pc = 0x1B1A1Cu;
label_1b1a1c:
    // 0x1b1a1c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_1b1a20:
    if (ctx->pc == 0x1B1A20u) {
        ctx->pc = 0x1B1A24u;
        goto label_1b1a24;
    }
    ctx->pc = 0x1B1A1Cu;
    {
        const bool branch_taken_0x1b1a1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1a1c) {
            ctx->pc = 0x1B1A48u;
            goto label_1b1a48;
        }
    }
    ctx->pc = 0x1B1A24u;
label_1b1a24:
    // 0x1b1a24: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b1a28:
    if (ctx->pc == 0x1B1A28u) {
        ctx->pc = 0x1B1A2Cu;
        goto label_1b1a2c;
    }
    ctx->pc = 0x1B1A24u;
    {
        const bool branch_taken_0x1b1a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1a24) {
            ctx->pc = 0x1B1A38u;
            goto label_1b1a38;
        }
    }
    ctx->pc = 0x1B1A2Cu;
label_1b1a2c:
    // 0x1b1a2c: 0x0  nop
    ctx->pc = 0x1b1a2cu;
    // NOP
label_1b1a30:
    // 0x1b1a30: 0xc06c660  jal         func_1B1980
label_1b1a34:
    if (ctx->pc == 0x1B1A34u) {
        ctx->pc = 0x1B1A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A30u;
        // 0x1b1a34: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1A38u;
        goto label_1b1a38;
    }
    ctx->pc = 0x1B1A30u;
    SET_GPR_U32(ctx, 31, 0x1B1A38u);
    ctx->pc = 0x1B1A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1A30u;
    // 0x1b1a34: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1980u;
    goto label_1b1980;
    ctx->pc = 0x1B1A38u;
label_1b1a38:
    // 0x1b1a38: 0xc069ea6  jal         func_1A7A98
label_1b1a3c:
    if (ctx->pc == 0x1B1A3Cu) {
        ctx->pc = 0x1B1A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A38u;
        // 0x1b1a3c: 0x26246200  addiu       $a0, $s1, 0x6200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 25088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1A40u;
        goto label_1b1a40;
    }
    ctx->pc = 0x1B1A38u;
    SET_GPR_U32(ctx, 31, 0x1B1A40u);
    ctx->pc = 0x1B1A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1A38u;
    // 0x1b1a3c: 0x26246200  addiu       $a0, $s1, 0x6200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 25088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7A98u;
    { ctx->pc = 0x1a7a98; return; }
    ctx->pc = 0x1B1A40u;
label_1b1a40:
    // 0x1b1a40: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_1b1a44:
    if (ctx->pc == 0x1B1A44u) {
        ctx->pc = 0x1B1A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A40u;
        // 0x1b1a44: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1A48u;
        goto label_1b1a48;
    }
    ctx->pc = 0x1B1A40u;
    {
        const bool branch_taken_0x1b1a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A40u;
        // 0x1b1a44: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a40) {
            ctx->pc = 0x1B1A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1a30;
        }
    }
    ctx->pc = 0x1B1A48u;
label_1b1a48:
    // 0x1b1a48: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_1b1a4c:
    if (ctx->pc == 0x1B1A4Cu) {
        ctx->pc = 0x1B1A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A48u;
        // 0x1b1a4c: 0x2e100001  sltiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1A50u;
        goto label_1b1a50;
    }
    ctx->pc = 0x1B1A48u;
    {
        const bool branch_taken_0x1b1a48 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A48u;
        // 0x1b1a4c: 0x2e100001  sltiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a48) {
            ctx->pc = 0x1B1A58u;
            goto label_1b1a58;
        }
    }
    ctx->pc = 0x1B1A50u;
label_1b1a50:
    // 0x1b1a50: 0x8e628d08  lw          $v0, -0x72F8($s3)
    ctx->pc = 0x1b1a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937864)));
label_1b1a54:
    // 0x1b1a54: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1b1a54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1b1a58:
    // 0x1b1a58: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_1b1a5c:
    if (ctx->pc == 0x1B1A5Cu) {
        ctx->pc = 0x1B1A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A58u;
        // 0x1b1a5c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1A60u;
        goto label_1b1a60;
    }
    ctx->pc = 0x1B1A58u;
    {
        const bool branch_taken_0x1b1a58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A58u;
        // 0x1b1a5c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a58) {
            ctx->pc = 0x1B1A84u;
            goto label_1b1a84;
        }
    }
    ctx->pc = 0x1B1A60u;
label_1b1a60:
    // 0x1b1a60: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_1b1a64:
    if (ctx->pc == 0x1B1A64u) {
        ctx->pc = 0x1B1A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A60u;
        // 0x1b1a64: 0xae608d08  sw          $zero, -0x72F8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294937864), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1A68u;
        goto label_1b1a68;
    }
    ctx->pc = 0x1B1A60u;
    {
        const bool branch_taken_0x1b1a60 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A60u;
        // 0x1b1a64: 0xae608d08  sw          $zero, -0x72F8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294937864), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a60) {
            ctx->pc = 0x1B1A74u;
            goto label_1b1a74;
        }
    }
    ctx->pc = 0x1B1A68u;
label_1b1a68:
    // 0x1b1a68: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b1a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b1a6c:
    // 0x1b1a6c: 0x8c4377c0  lw          $v1, 0x77C0($v0)
    ctx->pc = 0x1b1a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30656)));
label_1b1a70:
    // 0x1b1a70: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x1b1a70u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_1b1a74:
    // 0x1b1a74: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1b1a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1b1a78:
    // 0x1b1a78: 0xc069210  jal         func_1A4840
label_1b1a7c:
    if (ctx->pc == 0x1B1A7Cu) {
        ctx->pc = 0x1B1A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A78u;
        // 0x1b1a7c: 0x8c448d0c  lw          $a0, -0x72F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1A80u;
        goto label_1b1a80;
    }
    ctx->pc = 0x1B1A78u;
    SET_GPR_U32(ctx, 31, 0x1B1A80u);
    ctx->pc = 0x1B1A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1A78u;
    // 0x1b1a7c: 0x8c448d0c  lw          $a0, -0x72F4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B1A80u;
label_1b1a80:
    // 0x1b1a80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1a80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1a84:
    // 0x1b1a84: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1b1a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1b1a88:
    // 0x1b1a88: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1b1a88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b1a8c:
    // 0x1b1a8c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1b1a8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b1a90:
    // 0x1b1a90: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1b1a90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b1a94:
    // 0x1b1a94: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b1a94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b1a98:
    // 0x1b1a98: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b1a98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b1a9c:
    // 0x1b1a9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1a9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b1aa0:
    // 0x1b1aa0: 0x3e00008  jr          $ra
label_1b1aa4:
    if (ctx->pc == 0x1B1AA4u) {
        ctx->pc = 0x1B1AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1AA0u;
        // 0x1b1aa4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1AA8u;
        goto label_1b1aa8;
    }
    ctx->pc = 0x1B1AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1AA0u;
        // 0x1b1aa4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1AA8u;
label_1b1aa8:
    // 0x1b1aa8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b1aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b1aac:
    // 0x1b1aac: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1b1aacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_1b1ab0:
    // 0x1b1ab0: 0x8c456228  lw          $a1, 0x6228($v0)
    ctx->pc = 0x1b1ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25128)));
label_1b1ab4:
    // 0x1b1ab4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_1b1ab8:
    if (ctx->pc == 0x1B1AB8u) {
        ctx->pc = 0x1B1AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1AB4u;
        // 0x1b1ab8: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1ABCu;
        goto label_1b1abc;
    }
    ctx->pc = 0x1B1AB4u;
    {
        const bool branch_taken_0x1b1ab4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1AB4u;
        // 0x1b1ab8: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1ab4) {
            ctx->pc = 0x1B1AC4u;
            goto label_1b1ac4;
        }
    }
    ctx->pc = 0x1B1ABCu;
label_1b1abc:
    // 0x1b1abc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b1abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b1ac0:
    // 0x1b1ac0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1b1ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1b1ac4:
    // 0x1b1ac4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b1ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b1ac8:
    // 0x1b1ac8: 0x8c43622c  lw          $v1, 0x622C($v0)
    ctx->pc = 0x1b1ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25132)));
label_1b1acc:
    // 0x1b1acc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1b1ad0:
    if (ctx->pc == 0x1B1AD0u) {
        ctx->pc = 0x1B1AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1ACCu;
        // 0x1b1ad0: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1AD4u;
        goto label_1b1ad4;
    }
    ctx->pc = 0x1B1ACCu;
    {
        const bool branch_taken_0x1b1acc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1ACCu;
        // 0x1b1ad0: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1acc) {
            ctx->pc = 0x1B1AE0u;
            goto label_1b1ae0;
        }
    }
    ctx->pc = 0x1B1AD4u;
label_1b1ad4:
    // 0x1b1ad4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1b1ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1b1ad8:
    // 0x1b1ad8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1b1ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1b1adc:
    // 0x1b1adc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b1adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b1ae0:
    // 0x1b1ae0: 0x8c436230  lw          $v1, 0x6230($v0)
    ctx->pc = 0x1b1ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25136)));
label_1b1ae4:
    // 0x1b1ae4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1b1ae8:
    if (ctx->pc == 0x1B1AE8u) {
        ctx->pc = 0x1B1AECu;
        goto label_1b1aec;
    }
    ctx->pc = 0x1B1AE4u;
    {
        const bool branch_taken_0x1b1ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1ae4) {
            ctx->pc = 0x1B1AF4u;
            goto label_1b1af4;
        }
    }
    ctx->pc = 0x1B1AECu;
label_1b1aec:
    // 0x1b1aec: 0x8c820090  lw          $v0, 0x90($a0)
    ctx->pc = 0x1b1aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_1b1af0:
    // 0x1b1af0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1b1af0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1b1af4:
    // 0x1b1af4: 0x3e00008  jr          $ra
label_1b1af8:
    if (ctx->pc == 0x1B1AF8u) {
        ctx->pc = 0x1B1AFCu;
        goto label_1b1afc;
    }
    ctx->pc = 0x1B1AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1AFCu;
label_1b1afc:
    // 0x1b1afc: 0x0  nop
    ctx->pc = 0x1b1afcu;
    // NOP
label_1b1b00:
    // 0x1b1b00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b1b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1b1b04:
    // 0x1b1b04: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1b1b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_1b1b08:
    // 0x1b1b08: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1b1b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_1b1b0c:
    // 0x1b1b0c: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1b1b0cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
label_1b1b10:
    // 0x1b1b10: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1b1b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1b1b14:
    // 0x1b1b14: 0x26c26200  addiu       $v0, $s6, 0x6200
    ctx->pc = 0x1b1b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 25088));
label_1b1b18:
    // 0x1b1b18: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b1b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1b1b1c:
    // 0x1b1b1c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1b1b1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b1b20:
    // 0x1b1b20: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b1b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1b1b24:
    // 0x1b1b24: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1b1b24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b1b28:
    // 0x1b1b28: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b1b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1b1b2c:
    // 0x1b1b2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b1b2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b1b30:
    // 0x1b1b30: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1b1b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1b1b34:
    // 0x1b1b34: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b1b34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b1b38:
    // 0x1b1b38: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1b1b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_1b1b3c:
    // 0x1b1b3c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b1b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1b1b40:
    // 0x1b1b40: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1b1b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1b1b44:
    // 0x1b1b44: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1b1b48:
    if (ctx->pc == 0x1B1B48u) {
        ctx->pc = 0x1B1B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B44u;
        // 0x1b1b48: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1B4Cu;
        goto label_1b1b4c;
    }
    ctx->pc = 0x1B1B44u;
    {
        const bool branch_taken_0x1b1b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B44u;
        // 0x1b1b48: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b44) {
            ctx->pc = 0x1B1B54u;
            goto label_1b1b54;
        }
    }
    ctx->pc = 0x1B1B4Cu;
label_1b1b4c:
    // 0x1b1b4c: 0x10000040  b           . + 4 + (0x40 << 2)
label_1b1b50:
    if (ctx->pc == 0x1B1B50u) {
        ctx->pc = 0x1B1B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B4Cu;
        // 0x1b1b50: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1B54u;
        goto label_1b1b54;
    }
    ctx->pc = 0x1B1B4Cu;
    {
        const bool branch_taken_0x1b1b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B4Cu;
        // 0x1b1b50: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b4c) {
            ctx->pc = 0x1B1C50u;
            goto label_1b1c50;
        }
    }
    ctx->pc = 0x1B1B54u;
label_1b1b54:
    // 0x1b1b54: 0x3c170029  lui         $s7, 0x29
    ctx->pc = 0x1b1b54u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)41 << 16));
label_1b1b58:
    // 0x1b1b58: 0xc06921c  jal         func_1A4870
label_1b1b5c:
    if (ctx->pc == 0x1B1B5Cu) {
        ctx->pc = 0x1B1B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B58u;
        // 0x1b1b5c: 0x8ee48d0c  lw          $a0, -0x72F4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1B60u;
        goto label_1b1b60;
    }
    ctx->pc = 0x1B1B58u;
    SET_GPR_U32(ctx, 31, 0x1B1B60u);
    ctx->pc = 0x1B1B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1B58u;
    // 0x1b1b5c: 0x8ee48d0c  lw          $a0, -0x72F4($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    { ctx->pc = 0x1a4870; return; }
    ctx->pc = 0x1B1B60u;
label_1b1b60:
    // 0x1b1b60: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1b1b64:
    if (ctx->pc == 0x1B1B64u) {
        ctx->pc = 0x1B1B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B60u;
        // 0x1b1b64: 0x3c110037  lui         $s1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1B68u;
        goto label_1b1b68;
    }
    ctx->pc = 0x1B1B60u;
    {
        const bool branch_taken_0x1b1b60 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B1B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B60u;
        // 0x1b1b64: 0x3c110037  lui         $s1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b60) {
            ctx->pc = 0x1B1B70u;
            goto label_1b1b70;
        }
    }
    ctx->pc = 0x1B1B68u;
label_1b1b68:
    // 0x1b1b68: 0x10000039  b           . + 4 + (0x39 << 2)
label_1b1b6c:
    if (ctx->pc == 0x1B1B6Cu) {
        ctx->pc = 0x1B1B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B68u;
        // 0x1b1b6c: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1B70u;
        goto label_1b1b70;
    }
    ctx->pc = 0x1B1B68u;
    {
        const bool branch_taken_0x1b1b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B68u;
        // 0x1b1b6c: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b68) {
            ctx->pc = 0x1B1C50u;
            goto label_1b1c50;
        }
    }
    ctx->pc = 0x1B1B70u;
label_1b1b70:
    // 0x1b1b70: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b1b70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1b1b74:
    // 0x1b1b74: 0x26236280  addiu       $v1, $s1, 0x6280
    ctx->pc = 0x1b1b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 25216));
label_1b1b78:
    // 0x1b1b78: 0x24826700  addiu       $v0, $a0, 0x6700
    ctx->pc = 0x1b1b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 26368));
label_1b1b7c:
    // 0x1b1b7c: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x1b1b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
label_1b1b80:
    // 0x1b1b80: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x1b1b80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
label_1b1b84:
    // 0x1b1b84: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_1b1b88:
    if (ctx->pc == 0x1B1B88u) {
        ctx->pc = 0x1B1B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B84u;
        // 0x1b1b88: 0xac62001c  sw          $v0, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1B8Cu;
        goto label_1b1b8c;
    }
    ctx->pc = 0x1B1B84u;
    {
        const bool branch_taken_0x1b1b84 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B84u;
        // 0x1b1b88: 0xac62001c  sw          $v0, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b84) {
            ctx->pc = 0x1B1B98u;
            goto label_1b1b98;
        }
    }
    ctx->pc = 0x1B1B8Cu;
label_1b1b8c:
    // 0x1b1b8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b1b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b1b90:
    // 0x1b1b90: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b1b94:
    if (ctx->pc == 0x1B1B94u) {
        ctx->pc = 0x1B1B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B90u;
        // 0x1b1b94: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1B98u;
        goto label_1b1b98;
    }
    ctx->pc = 0x1B1B90u;
    {
        const bool branch_taken_0x1b1b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B90u;
        // 0x1b1b94: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b90) {
            ctx->pc = 0x1B1B9Cu;
            goto label_1b1b9c;
        }
    }
    ctx->pc = 0x1B1B98u;
label_1b1b98:
    // 0x1b1b98: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x1b1b98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_1b1b9c:
    // 0x1b1b9c: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_1b1ba0:
    if (ctx->pc == 0x1B1BA0u) {
        ctx->pc = 0x1B1BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B9Cu;
        // 0x1b1ba0: 0x26236280  addiu       $v1, $s1, 0x6280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 25216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1BA4u;
        goto label_1b1ba4;
    }
    ctx->pc = 0x1B1B9Cu;
    {
        const bool branch_taken_0x1b1b9c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B9Cu;
        // 0x1b1ba0: 0x26236280  addiu       $v1, $s1, 0x6280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 25216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b9c) {
            ctx->pc = 0x1B1BB0u;
            goto label_1b1bb0;
        }
    }
    ctx->pc = 0x1B1BA4u;
label_1b1ba4:
    // 0x1b1ba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b1ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b1ba8:
    // 0x1b1ba8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b1bac:
    if (ctx->pc == 0x1B1BACu) {
        ctx->pc = 0x1B1BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1BA8u;
        // 0x1b1bac: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1BB0u;
        goto label_1b1bb0;
    }
    ctx->pc = 0x1B1BA8u;
    {
        const bool branch_taken_0x1b1ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1BA8u;
        // 0x1b1bac: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1ba8) {
            ctx->pc = 0x1B1BB8u;
            goto label_1b1bb8;
        }
    }
    ctx->pc = 0x1B1BB0u;
label_1b1bb0:
    // 0x1b1bb0: 0x26226280  addiu       $v0, $s1, 0x6280
    ctx->pc = 0x1b1bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 25216));
label_1b1bb4:
    // 0x1b1bb4: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1b1bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_1b1bb8:
    // 0x1b1bb8: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_1b1bbc:
    if (ctx->pc == 0x1B1BBCu) {
        ctx->pc = 0x1B1BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1BB8u;
        // 0x1b1bbc: 0x26236280  addiu       $v1, $s1, 0x6280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 25216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1BC0u;
        goto label_1b1bc0;
    }
    ctx->pc = 0x1B1BB8u;
    {
        const bool branch_taken_0x1b1bb8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1BB8u;
        // 0x1b1bbc: 0x26236280  addiu       $v1, $s1, 0x6280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 25216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1bb8) {
            ctx->pc = 0x1B1BCCu;
            goto label_1b1bcc;
        }
    }
    ctx->pc = 0x1B1BC0u;
label_1b1bc0:
    // 0x1b1bc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b1bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b1bc4:
    // 0x1b1bc4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b1bc8:
    if (ctx->pc == 0x1B1BC8u) {
        ctx->pc = 0x1B1BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1BC4u;
        // 0x1b1bc8: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1BCCu;
        goto label_1b1bcc;
    }
    ctx->pc = 0x1B1BC4u;
    {
        const bool branch_taken_0x1b1bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1BC4u;
        // 0x1b1bc8: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1bc4) {
            ctx->pc = 0x1B1BD4u;
            goto label_1b1bd4;
        }
    }
    ctx->pc = 0x1B1BCCu;
label_1b1bcc:
    // 0x1b1bcc: 0x26226280  addiu       $v0, $s1, 0x6280
    ctx->pc = 0x1b1bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 25216));
label_1b1bd0:
    // 0x1b1bd0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1b1bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_1b1bd4:
    // 0x1b1bd4: 0x24906700  addiu       $s0, $a0, 0x6700
    ctx->pc = 0x1b1bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 26368));
label_1b1bd8:
    // 0x1b1bd8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b1bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b1bdc:
    // 0x1b1bdc: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b1bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1b1be0:
    // 0x1b1be0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1b1be0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1b1be4:
    // 0x1b1be4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1be8:
    // 0x1b1be8: 0xac536228  sw          $s3, 0x6228($v0)
    ctx->pc = 0x1b1be8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25128), GPR_U32(ctx, 19));
label_1b1bec:
    // 0x1b1bec: 0xac74622c  sw          $s4, 0x622C($v1)
    ctx->pc = 0x1b1becu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 25132), GPR_U32(ctx, 20));
label_1b1bf0:
    // 0x1b1bf0: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x1b1bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1b1bf4:
    // 0x1b1bf4: 0xc069bee  jal         func_1A6FB8
label_1b1bf8:
    if (ctx->pc == 0x1B1BF8u) {
        ctx->pc = 0x1B1BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1BF4u;
        // 0x1b1bf8: 0xacd56230  sw          $s5, 0x6230($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 25136), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1BFCu;
        goto label_1b1bfc;
    }
    ctx->pc = 0x1B1BF4u;
    SET_GPR_U32(ctx, 31, 0x1B1BFCu);
    ctx->pc = 0x1B1BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1BF4u;
    // 0x1b1bf8: 0xacd56230  sw          $s5, 0x6230($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 25136), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    { ctx->pc = 0x1a6fb8; return; }
    ctx->pc = 0x1B1BFCu;
label_1b1bfc:
    // 0x1b1bfc: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b1bfcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
label_1b1c00:
    // 0x1b1c00: 0x3c0b001b  lui         $t3, 0x1B
    ctx->pc = 0x1b1c00u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)27 << 16));
label_1b1c04:
    // 0x1b1c04: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x1b1c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
label_1b1c08:
    // 0x1b1c08: 0x26c46200  addiu       $a0, $s6, 0x6200
    ctx->pc = 0x1b1c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 25088));
label_1b1c0c:
    // 0x1b1c0c: 0x26276280  addiu       $a3, $s1, 0x6280
    ctx->pc = 0x1b1c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 25216));
label_1b1c10:
    // 0x1b1c10: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b1c10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
label_1b1c14:
    // 0x1b1c14: 0x256b1aa8  addiu       $t3, $t3, 0x1AA8
    ctx->pc = 0x1b1c14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 6824));
label_1b1c18:
    // 0x1b1c18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b1c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b1c1c:
    // 0x1b1c1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b1c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b1c20:
    // 0x1b1c20: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1b1c20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1b1c24:
    // 0x1b1c24: 0xc069e2a  jal         func_1A78A8
label_1b1c28:
    if (ctx->pc == 0x1B1C28u) {
        ctx->pc = 0x1B1C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C24u;
        // 0x1b1c28: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1C2Cu;
        goto label_1b1c2c;
    }
    ctx->pc = 0x1B1C24u;
    SET_GPR_U32(ctx, 31, 0x1B1C2Cu);
    ctx->pc = 0x1B1C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1C24u;
    // 0x1b1c28: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B1C2Cu;
label_1b1c2c:
    // 0x1b1c2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1c30:
    // 0x1b1c30: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_1b1c34:
    if (ctx->pc == 0x1B1C34u) {
        ctx->pc = 0x1B1C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C30u;
        // 0x1b1c34: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1C38u;
        goto label_1b1c38;
    }
    ctx->pc = 0x1B1C30u;
    {
        const bool branch_taken_0x1b1c30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C30u;
        // 0x1b1c34: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1c30) {
            ctx->pc = 0x1B1C44u;
            goto label_1b1c44;
        }
    }
    ctx->pc = 0x1B1C38u;
label_1b1c38:
    // 0x1b1c38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b1c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b1c3c:
    // 0x1b1c3c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b1c40:
    if (ctx->pc == 0x1B1C40u) {
        ctx->pc = 0x1B1C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C3Cu;
        // 0x1b1c40: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1C44u;
        goto label_1b1c44;
    }
    ctx->pc = 0x1B1C3Cu;
    {
        const bool branch_taken_0x1b1c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C3Cu;
        // 0x1b1c40: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1c3c) {
            ctx->pc = 0x1B1C4Cu;
            goto label_1b1c4c;
        }
    }
    ctx->pc = 0x1B1C44u;
label_1b1c44:
    // 0x1b1c44: 0xc069210  jal         func_1A4840
label_1b1c48:
    if (ctx->pc == 0x1B1C48u) {
        ctx->pc = 0x1B1C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C44u;
        // 0x1b1c48: 0x8ee48d0c  lw          $a0, -0x72F4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1C4Cu;
        goto label_1b1c4c;
    }
    ctx->pc = 0x1B1C44u;
    SET_GPR_U32(ctx, 31, 0x1B1C4Cu);
    ctx->pc = 0x1B1C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1C44u;
    // 0x1b1c48: 0x8ee48d0c  lw          $a0, -0x72F4($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B1C4Cu;
label_1b1c4c:
    // 0x1b1c4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1c4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1c50:
    // 0x1b1c50: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1b1c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1b1c54:
    // 0x1b1c54: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1b1c54u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1b1c58:
    // 0x1b1c58: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1b1c58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1b1c5c:
    // 0x1b1c5c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1b1c5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1b1c60:
    // 0x1b1c60: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b1c60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b1c64:
    // 0x1b1c64: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b1c64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b1c68:
    // 0x1b1c68: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b1c68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b1c6c:
    // 0x1b1c6c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b1c6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b1c70:
    // 0x1b1c70: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b1c70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b1c74:
    // 0x1b1c74: 0x3e00008  jr          $ra
label_1b1c78:
    if (ctx->pc == 0x1B1C78u) {
        ctx->pc = 0x1B1C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C74u;
        // 0x1b1c78: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1C7Cu;
        goto label_1b1c7c;
    }
    ctx->pc = 0x1B1C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C74u;
        // 0x1b1c78: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1C7Cu;
label_1b1c7c:
    // 0x1b1c7c: 0x0  nop
    ctx->pc = 0x1b1c7cu;
    // NOP
label_1b1c80:
    // 0x1b1c80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b1c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b1c84:
    // 0x1b1c84: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b1c84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1b1c88:
    // 0x1b1c88: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b1c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1b1c8c:
    // 0x1b1c8c: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x1b1c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_1b1c90:
    // 0x1b1c90: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1b1c90u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1b1c94:
    // 0x1b1c94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b1c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b1c98:
    // 0x1b1c98: 0x24846200  addiu       $a0, $a0, 0x6200
    ctx->pc = 0x1b1c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25088));
label_1b1c9c:
    // 0x1b1c9c: 0x24e76280  addiu       $a3, $a3, 0x6280
    ctx->pc = 0x1b1c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25216));
label_1b1ca0:
    // 0x1b1ca0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b1ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b1ca4:
    // 0x1b1ca4: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x1b1ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_1b1ca8:
    // 0x1b1ca8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b1ca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1cac:
    // 0x1b1cac: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1b1cacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1b1cb0:
    // 0x1b1cb0: 0x260977c0  addiu       $t1, $s0, 0x77C0
    ctx->pc = 0x1b1cb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 30656));
label_1b1cb4:
    // 0x1b1cb4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b1cb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b1cb8:
    // 0x1b1cb8: 0xc069e2a  jal         func_1A78A8
label_1b1cbc:
    if (ctx->pc == 0x1B1CBCu) {
        ctx->pc = 0x1B1CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1CB8u;
        // 0x1b1cbc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1CC0u;
        goto label_1b1cc0;
    }
    ctx->pc = 0x1B1CB8u;
    SET_GPR_U32(ctx, 31, 0x1B1CC0u);
    ctx->pc = 0x1B1CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1CB8u;
    // 0x1b1cbc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B1CC0u;
label_1b1cc0:
    // 0x1b1cc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1b1cc4:
    if (ctx->pc == 0x1B1CC4u) {
        ctx->pc = 0x1B1CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1CC0u;
        // 0x1b1cc4: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1CC8u;
        goto label_1b1cc8;
    }
    ctx->pc = 0x1B1CC0u;
    {
        const bool branch_taken_0x1b1cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1CC0u;
        // 0x1b1cc4: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1cc0) {
            ctx->pc = 0x1B1CD8u;
            goto label_1b1cd8;
        }
    }
    ctx->pc = 0x1B1CC8u;
label_1b1cc8:
    // 0x1b1cc8: 0xc069a30  jal         func_1A68C0
label_1b1ccc:
    if (ctx->pc == 0x1B1CCCu) {
        ctx->pc = 0x1B1CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1CC8u;
        // 0x1b1ccc: 0x2484ad00  addiu       $a0, $a0, -0x5300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1CD0u;
        goto label_1b1cd0;
    }
    ctx->pc = 0x1B1CC8u;
    SET_GPR_U32(ctx, 31, 0x1B1CD0u);
    ctx->pc = 0x1B1CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1CC8u;
    // 0x1b1ccc: 0x2484ad00  addiu       $a0, $a0, -0x5300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1B1CD0u;
label_1b1cd0:
    // 0x1b1cd0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b1cd4:
    if (ctx->pc == 0x1B1CD4u) {
        ctx->pc = 0x1B1CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1CD0u;
        // 0x1b1cd4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1CD8u;
        goto label_1b1cd8;
    }
    ctx->pc = 0x1B1CD0u;
    {
        const bool branch_taken_0x1b1cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1CD0u;
        // 0x1b1cd4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1cd0) {
            ctx->pc = 0x1B1CDCu;
            goto label_1b1cdc;
        }
    }
    ctx->pc = 0x1B1CD8u;
label_1b1cd8:
    // 0x1b1cd8: 0x8e0277c0  lw          $v0, 0x77C0($s0)
    ctx->pc = 0x1b1cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30656)));
label_1b1cdc:
    // 0x1b1cdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b1cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b1ce0:
    // 0x1b1ce0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b1ce0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b1ce4:
    // 0x1b1ce4: 0x3e00008  jr          $ra
label_1b1ce8:
    if (ctx->pc == 0x1B1CE8u) {
        ctx->pc = 0x1B1CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1CE4u;
        // 0x1b1ce8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1CECu;
        goto label_1b1cec;
    }
    ctx->pc = 0x1B1CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1CE4u;
        // 0x1b1ce8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1CECu;
label_1b1cec:
    // 0x1b1cec: 0x0  nop
    ctx->pc = 0x1b1cecu;
    // NOP
label_1b1cf0:
    // 0x1b1cf0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b1cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1b1cf4:
    // 0x1b1cf4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b1cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b1cf8:
    // 0x1b1cf8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1b1cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_1b1cfc:
    // 0x1b1cfc: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1b1cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_1b1d00:
    // 0x1b1d00: 0x24576200  addiu       $s7, $v0, 0x6200
    ctx->pc = 0x1b1d00u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 25088));
label_1b1d04:
    // 0x1b1d04: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1b1d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1b1d08:
    // 0x1b1d08: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1b1d08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b1d0c:
    // 0x1b1d0c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b1d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1b1d10:
    // 0x1b1d10: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b1d10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b1d14:
    // 0x1b1d14: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b1d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1b1d18:
    // 0x1b1d18: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1b1d18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b1d1c:
    // 0x1b1d1c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b1d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1b1d20:
    // 0x1b1d20: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x1b1d20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1b1d24:
    // 0x1b1d24: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b1d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1b1d28:
    // 0x1b1d28: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1b1d28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1b1d2c:
    // 0x1b1d2c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1b1d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1b1d30:
    // 0x1b1d30: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1b1d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_1b1d34:
    // 0x1b1d34: 0x8ee20024  lw          $v0, 0x24($s7)
    ctx->pc = 0x1b1d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
label_1b1d38:
    // 0x1b1d38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b1d3c:
    if (ctx->pc == 0x1B1D3Cu) {
        ctx->pc = 0x1B1D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D38u;
        // 0x1b1d3c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1D40u;
        goto label_1b1d40;
    }
    ctx->pc = 0x1B1D38u;
    {
        const bool branch_taken_0x1b1d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D38u;
        // 0x1b1d3c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1d38) {
            ctx->pc = 0x1B1D48u;
            { ctx->pc = 0x1b1d48; return; }
        }
    }
    ctx->pc = 0x1B1D40u;
label_1b1d40:
    // 0x1b1d40: 0x10000032  b           . + 4 + (0x32 << 2)
label_1b1d44:
    if (ctx->pc == 0x1B1D44u) {
        ctx->pc = 0x1B1D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D40u;
        // 0x1b1d44: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1D48u;
        { ctx->pc = 0x1b1d48; return; }
    }
    ctx->pc = 0x1B1D40u;
    {
        const bool branch_taken_0x1b1d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D40u;
        // 0x1b1d44: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1d40) {
            ctx->pc = 0x1B1E0Cu;
            { ctx->pc = 0x1b1e0c; return; }
        }
    }
    ctx->pc = 0x1B1D48u;
    ctx->pc = 0x1b1d48u;
    return;
}
