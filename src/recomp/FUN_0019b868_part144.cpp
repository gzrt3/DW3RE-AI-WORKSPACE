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


void FUN_0019b868_part144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1e1598u: goto label_1e1598;
        case 0x1e159cu: goto label_1e159c;
        case 0x1e15a0u: goto label_1e15a0;
        case 0x1e15a4u: goto label_1e15a4;
        case 0x1e15a8u: goto label_1e15a8;
        case 0x1e15acu: goto label_1e15ac;
        case 0x1e15b0u: goto label_1e15b0;
        case 0x1e15b4u: goto label_1e15b4;
        case 0x1e15b8u: goto label_1e15b8;
        case 0x1e15bcu: goto label_1e15bc;
        case 0x1e15c0u: goto label_1e15c0;
        case 0x1e15c4u: goto label_1e15c4;
        case 0x1e15c8u: goto label_1e15c8;
        case 0x1e15ccu: goto label_1e15cc;
        case 0x1e15d0u: goto label_1e15d0;
        case 0x1e15d4u: goto label_1e15d4;
        case 0x1e15d8u: goto label_1e15d8;
        case 0x1e15dcu: goto label_1e15dc;
        case 0x1e15e0u: goto label_1e15e0;
        case 0x1e15e4u: goto label_1e15e4;
        case 0x1e15e8u: goto label_1e15e8;
        case 0x1e15ecu: goto label_1e15ec;
        case 0x1e15f0u: goto label_1e15f0;
        case 0x1e15f4u: goto label_1e15f4;
        case 0x1e15f8u: goto label_1e15f8;
        case 0x1e15fcu: goto label_1e15fc;
        case 0x1e1600u: goto label_1e1600;
        case 0x1e1604u: goto label_1e1604;
        case 0x1e1608u: goto label_1e1608;
        case 0x1e160cu: goto label_1e160c;
        case 0x1e1610u: goto label_1e1610;
        case 0x1e1614u: goto label_1e1614;
        case 0x1e1618u: goto label_1e1618;
        case 0x1e161cu: goto label_1e161c;
        case 0x1e1620u: goto label_1e1620;
        case 0x1e1624u: goto label_1e1624;
        case 0x1e1628u: goto label_1e1628;
        case 0x1e162cu: goto label_1e162c;
        case 0x1e1630u: goto label_1e1630;
        case 0x1e1634u: goto label_1e1634;
        case 0x1e1638u: goto label_1e1638;
        case 0x1e163cu: goto label_1e163c;
        case 0x1e1640u: goto label_1e1640;
        case 0x1e1644u: goto label_1e1644;
        case 0x1e1648u: goto label_1e1648;
        case 0x1e164cu: goto label_1e164c;
        case 0x1e1650u: goto label_1e1650;
        case 0x1e1654u: goto label_1e1654;
        case 0x1e1658u: goto label_1e1658;
        case 0x1e165cu: goto label_1e165c;
        case 0x1e1660u: goto label_1e1660;
        case 0x1e1664u: goto label_1e1664;
        case 0x1e1668u: goto label_1e1668;
        case 0x1e166cu: goto label_1e166c;
        case 0x1e1670u: goto label_1e1670;
        case 0x1e1674u: goto label_1e1674;
        case 0x1e1678u: goto label_1e1678;
        case 0x1e167cu: goto label_1e167c;
        case 0x1e1680u: goto label_1e1680;
        case 0x1e1684u: goto label_1e1684;
        case 0x1e1688u: goto label_1e1688;
        case 0x1e168cu: goto label_1e168c;
        case 0x1e1690u: goto label_1e1690;
        case 0x1e1694u: goto label_1e1694;
        case 0x1e1698u: goto label_1e1698;
        case 0x1e169cu: goto label_1e169c;
        case 0x1e16a0u: goto label_1e16a0;
        case 0x1e16a4u: goto label_1e16a4;
        case 0x1e16a8u: goto label_1e16a8;
        case 0x1e16acu: goto label_1e16ac;
        case 0x1e16b0u: goto label_1e16b0;
        case 0x1e16b4u: goto label_1e16b4;
        case 0x1e16b8u: goto label_1e16b8;
        case 0x1e16bcu: goto label_1e16bc;
        case 0x1e16c0u: goto label_1e16c0;
        case 0x1e16c4u: goto label_1e16c4;
        case 0x1e16c8u: goto label_1e16c8;
        case 0x1e16ccu: goto label_1e16cc;
        case 0x1e16d0u: goto label_1e16d0;
        case 0x1e16d4u: goto label_1e16d4;
        case 0x1e16d8u: goto label_1e16d8;
        case 0x1e16dcu: goto label_1e16dc;
        case 0x1e16e0u: goto label_1e16e0;
        case 0x1e16e4u: goto label_1e16e4;
        case 0x1e16e8u: goto label_1e16e8;
        case 0x1e16ecu: goto label_1e16ec;
        case 0x1e16f0u: goto label_1e16f0;
        case 0x1e16f4u: goto label_1e16f4;
        case 0x1e16f8u: goto label_1e16f8;
        case 0x1e16fcu: goto label_1e16fc;
        case 0x1e1700u: goto label_1e1700;
        case 0x1e1704u: goto label_1e1704;
        case 0x1e1708u: goto label_1e1708;
        case 0x1e170cu: goto label_1e170c;
        case 0x1e1710u: goto label_1e1710;
        case 0x1e1714u: goto label_1e1714;
        case 0x1e1718u: goto label_1e1718;
        case 0x1e171cu: goto label_1e171c;
        case 0x1e1720u: goto label_1e1720;
        case 0x1e1724u: goto label_1e1724;
        case 0x1e1728u: goto label_1e1728;
        case 0x1e172cu: goto label_1e172c;
        case 0x1e1730u: goto label_1e1730;
        case 0x1e1734u: goto label_1e1734;
        case 0x1e1738u: goto label_1e1738;
        case 0x1e173cu: goto label_1e173c;
        case 0x1e1740u: goto label_1e1740;
        case 0x1e1744u: goto label_1e1744;
        case 0x1e1748u: goto label_1e1748;
        case 0x1e174cu: goto label_1e174c;
        case 0x1e1750u: goto label_1e1750;
        case 0x1e1754u: goto label_1e1754;
        case 0x1e1758u: goto label_1e1758;
        case 0x1e175cu: goto label_1e175c;
        case 0x1e1760u: goto label_1e1760;
        case 0x1e1764u: goto label_1e1764;
        case 0x1e1768u: goto label_1e1768;
        case 0x1e176cu: goto label_1e176c;
        case 0x1e1770u: goto label_1e1770;
        case 0x1e1774u: goto label_1e1774;
        case 0x1e1778u: goto label_1e1778;
        case 0x1e177cu: goto label_1e177c;
        case 0x1e1780u: goto label_1e1780;
        case 0x1e1784u: goto label_1e1784;
        case 0x1e1788u: goto label_1e1788;
        case 0x1e178cu: goto label_1e178c;
        case 0x1e1790u: goto label_1e1790;
        case 0x1e1794u: goto label_1e1794;
        case 0x1e1798u: goto label_1e1798;
        case 0x1e179cu: goto label_1e179c;
        case 0x1e17a0u: goto label_1e17a0;
        case 0x1e17a4u: goto label_1e17a4;
        case 0x1e17a8u: goto label_1e17a8;
        case 0x1e17acu: goto label_1e17ac;
        case 0x1e17b0u: goto label_1e17b0;
        case 0x1e17b4u: goto label_1e17b4;
        case 0x1e17b8u: goto label_1e17b8;
        case 0x1e17bcu: goto label_1e17bc;
        case 0x1e17c0u: goto label_1e17c0;
        case 0x1e17c4u: goto label_1e17c4;
        case 0x1e17c8u: goto label_1e17c8;
        case 0x1e17ccu: goto label_1e17cc;
        case 0x1e17d0u: goto label_1e17d0;
        case 0x1e17d4u: goto label_1e17d4;
        case 0x1e17d8u: goto label_1e17d8;
        case 0x1e17dcu: goto label_1e17dc;
        case 0x1e17e0u: goto label_1e17e0;
        case 0x1e17e4u: goto label_1e17e4;
        case 0x1e17e8u: goto label_1e17e8;
        case 0x1e17ecu: goto label_1e17ec;
        case 0x1e17f0u: goto label_1e17f0;
        case 0x1e17f4u: goto label_1e17f4;
        case 0x1e17f8u: goto label_1e17f8;
        case 0x1e17fcu: goto label_1e17fc;
        case 0x1e1800u: goto label_1e1800;
        case 0x1e1804u: goto label_1e1804;
        case 0x1e1808u: goto label_1e1808;
        case 0x1e180cu: goto label_1e180c;
        case 0x1e1810u: goto label_1e1810;
        case 0x1e1814u: goto label_1e1814;
        case 0x1e1818u: goto label_1e1818;
        case 0x1e181cu: goto label_1e181c;
        case 0x1e1820u: goto label_1e1820;
        case 0x1e1824u: goto label_1e1824;
        case 0x1e1828u: goto label_1e1828;
        case 0x1e182cu: goto label_1e182c;
        case 0x1e1830u: goto label_1e1830;
        case 0x1e1834u: goto label_1e1834;
        case 0x1e1838u: goto label_1e1838;
        case 0x1e183cu: goto label_1e183c;
        case 0x1e1840u: goto label_1e1840;
        case 0x1e1844u: goto label_1e1844;
        case 0x1e1848u: goto label_1e1848;
        case 0x1e184cu: goto label_1e184c;
        case 0x1e1850u: goto label_1e1850;
        case 0x1e1854u: goto label_1e1854;
        case 0x1e1858u: goto label_1e1858;
        case 0x1e185cu: goto label_1e185c;
        case 0x1e1860u: goto label_1e1860;
        case 0x1e1864u: goto label_1e1864;
        case 0x1e1868u: goto label_1e1868;
        case 0x1e186cu: goto label_1e186c;
        case 0x1e1870u: goto label_1e1870;
        case 0x1e1874u: goto label_1e1874;
        case 0x1e1878u: goto label_1e1878;
        case 0x1e187cu: goto label_1e187c;
        case 0x1e1880u: goto label_1e1880;
        case 0x1e1884u: goto label_1e1884;
        case 0x1e1888u: goto label_1e1888;
        case 0x1e188cu: goto label_1e188c;
        case 0x1e1890u: goto label_1e1890;
        case 0x1e1894u: goto label_1e1894;
        case 0x1e1898u: goto label_1e1898;
        case 0x1e189cu: goto label_1e189c;
        case 0x1e18a0u: goto label_1e18a0;
        case 0x1e18a4u: goto label_1e18a4;
        case 0x1e18a8u: goto label_1e18a8;
        case 0x1e18acu: goto label_1e18ac;
        case 0x1e18b0u: goto label_1e18b0;
        case 0x1e18b4u: goto label_1e18b4;
        case 0x1e18b8u: goto label_1e18b8;
        case 0x1e18bcu: goto label_1e18bc;
        case 0x1e18c0u: goto label_1e18c0;
        case 0x1e18c4u: goto label_1e18c4;
        case 0x1e18c8u: goto label_1e18c8;
        case 0x1e18ccu: goto label_1e18cc;
        case 0x1e18d0u: goto label_1e18d0;
        case 0x1e18d4u: goto label_1e18d4;
        case 0x1e18d8u: goto label_1e18d8;
        case 0x1e18dcu: goto label_1e18dc;
        case 0x1e18e0u: goto label_1e18e0;
        case 0x1e18e4u: goto label_1e18e4;
        case 0x1e18e8u: goto label_1e18e8;
        case 0x1e18ecu: goto label_1e18ec;
        case 0x1e18f0u: goto label_1e18f0;
        case 0x1e18f4u: goto label_1e18f4;
        case 0x1e18f8u: goto label_1e18f8;
        case 0x1e18fcu: goto label_1e18fc;
        case 0x1e1900u: goto label_1e1900;
        case 0x1e1904u: goto label_1e1904;
        case 0x1e1908u: goto label_1e1908;
        case 0x1e190cu: goto label_1e190c;
        case 0x1e1910u: goto label_1e1910;
        case 0x1e1914u: goto label_1e1914;
        case 0x1e1918u: goto label_1e1918;
        case 0x1e191cu: goto label_1e191c;
        case 0x1e1920u: goto label_1e1920;
        case 0x1e1924u: goto label_1e1924;
        case 0x1e1928u: goto label_1e1928;
        case 0x1e192cu: goto label_1e192c;
        case 0x1e1930u: goto label_1e1930;
        case 0x1e1934u: goto label_1e1934;
        case 0x1e1938u: goto label_1e1938;
        case 0x1e193cu: goto label_1e193c;
        case 0x1e1940u: goto label_1e1940;
        case 0x1e1944u: goto label_1e1944;
        case 0x1e1948u: goto label_1e1948;
        case 0x1e194cu: goto label_1e194c;
        case 0x1e1950u: goto label_1e1950;
        case 0x1e1954u: goto label_1e1954;
        case 0x1e1958u: goto label_1e1958;
        case 0x1e195cu: goto label_1e195c;
        case 0x1e1960u: goto label_1e1960;
        case 0x1e1964u: goto label_1e1964;
        case 0x1e1968u: goto label_1e1968;
        case 0x1e196cu: goto label_1e196c;
        case 0x1e1970u: goto label_1e1970;
        case 0x1e1974u: goto label_1e1974;
        case 0x1e1978u: goto label_1e1978;
        case 0x1e197cu: goto label_1e197c;
        case 0x1e1980u: goto label_1e1980;
        case 0x1e1984u: goto label_1e1984;
        case 0x1e1988u: goto label_1e1988;
        case 0x1e198cu: goto label_1e198c;
        case 0x1e1990u: goto label_1e1990;
        case 0x1e1994u: goto label_1e1994;
        case 0x1e1998u: goto label_1e1998;
        case 0x1e199cu: goto label_1e199c;
        case 0x1e19a0u: goto label_1e19a0;
        case 0x1e19a4u: goto label_1e19a4;
        case 0x1e19a8u: goto label_1e19a8;
        case 0x1e19acu: goto label_1e19ac;
        case 0x1e19b0u: goto label_1e19b0;
        case 0x1e19b4u: goto label_1e19b4;
        case 0x1e19b8u: goto label_1e19b8;
        case 0x1e19bcu: goto label_1e19bc;
        case 0x1e19c0u: goto label_1e19c0;
        case 0x1e19c4u: goto label_1e19c4;
        case 0x1e19c8u: goto label_1e19c8;
        case 0x1e19ccu: goto label_1e19cc;
        case 0x1e19d0u: goto label_1e19d0;
        case 0x1e19d4u: goto label_1e19d4;
        case 0x1e19d8u: goto label_1e19d8;
        case 0x1e19dcu: goto label_1e19dc;
        case 0x1e19e0u: goto label_1e19e0;
        case 0x1e19e4u: goto label_1e19e4;
        case 0x1e19e8u: goto label_1e19e8;
        case 0x1e19ecu: goto label_1e19ec;
        case 0x1e19f0u: goto label_1e19f0;
        case 0x1e19f4u: goto label_1e19f4;
        case 0x1e19f8u: goto label_1e19f8;
        case 0x1e19fcu: goto label_1e19fc;
        case 0x1e1a00u: goto label_1e1a00;
        case 0x1e1a04u: goto label_1e1a04;
        case 0x1e1a08u: goto label_1e1a08;
        case 0x1e1a0cu: goto label_1e1a0c;
        case 0x1e1a10u: goto label_1e1a10;
        case 0x1e1a14u: goto label_1e1a14;
        case 0x1e1a18u: goto label_1e1a18;
        case 0x1e1a1cu: goto label_1e1a1c;
        case 0x1e1a20u: goto label_1e1a20;
        case 0x1e1a24u: goto label_1e1a24;
        case 0x1e1a28u: goto label_1e1a28;
        case 0x1e1a2cu: goto label_1e1a2c;
        case 0x1e1a30u: goto label_1e1a30;
        case 0x1e1a34u: goto label_1e1a34;
        case 0x1e1a38u: goto label_1e1a38;
        case 0x1e1a3cu: goto label_1e1a3c;
        case 0x1e1a40u: goto label_1e1a40;
        case 0x1e1a44u: goto label_1e1a44;
        case 0x1e1a48u: goto label_1e1a48;
        case 0x1e1a4cu: goto label_1e1a4c;
        case 0x1e1a50u: goto label_1e1a50;
        case 0x1e1a54u: goto label_1e1a54;
        case 0x1e1a58u: goto label_1e1a58;
        case 0x1e1a5cu: goto label_1e1a5c;
        case 0x1e1a60u: goto label_1e1a60;
        case 0x1e1a64u: goto label_1e1a64;
        case 0x1e1a68u: goto label_1e1a68;
        case 0x1e1a6cu: goto label_1e1a6c;
        case 0x1e1a70u: goto label_1e1a70;
        case 0x1e1a74u: goto label_1e1a74;
        case 0x1e1a78u: goto label_1e1a78;
        case 0x1e1a7cu: goto label_1e1a7c;
        case 0x1e1a80u: goto label_1e1a80;
        case 0x1e1a84u: goto label_1e1a84;
        case 0x1e1a88u: goto label_1e1a88;
        case 0x1e1a8cu: goto label_1e1a8c;
        case 0x1e1a90u: goto label_1e1a90;
        case 0x1e1a94u: goto label_1e1a94;
        case 0x1e1a98u: goto label_1e1a98;
        case 0x1e1a9cu: goto label_1e1a9c;
        case 0x1e1aa0u: goto label_1e1aa0;
        case 0x1e1aa4u: goto label_1e1aa4;
        case 0x1e1aa8u: goto label_1e1aa8;
        case 0x1e1aacu: goto label_1e1aac;
        case 0x1e1ab0u: goto label_1e1ab0;
        case 0x1e1ab4u: goto label_1e1ab4;
        case 0x1e1ab8u: goto label_1e1ab8;
        case 0x1e1abcu: goto label_1e1abc;
        case 0x1e1ac0u: goto label_1e1ac0;
        case 0x1e1ac4u: goto label_1e1ac4;
        case 0x1e1ac8u: goto label_1e1ac8;
        case 0x1e1accu: goto label_1e1acc;
        case 0x1e1ad0u: goto label_1e1ad0;
        case 0x1e1ad4u: goto label_1e1ad4;
        case 0x1e1ad8u: goto label_1e1ad8;
        case 0x1e1adcu: goto label_1e1adc;
        case 0x1e1ae0u: goto label_1e1ae0;
        case 0x1e1ae4u: goto label_1e1ae4;
        case 0x1e1ae8u: goto label_1e1ae8;
        case 0x1e1aecu: goto label_1e1aec;
        case 0x1e1af0u: goto label_1e1af0;
        case 0x1e1af4u: goto label_1e1af4;
        case 0x1e1af8u: goto label_1e1af8;
        case 0x1e1afcu: goto label_1e1afc;
        case 0x1e1b00u: goto label_1e1b00;
        case 0x1e1b04u: goto label_1e1b04;
        case 0x1e1b08u: goto label_1e1b08;
        case 0x1e1b0cu: goto label_1e1b0c;
        case 0x1e1b10u: goto label_1e1b10;
        case 0x1e1b14u: goto label_1e1b14;
        case 0x1e1b18u: goto label_1e1b18;
        case 0x1e1b1cu: goto label_1e1b1c;
        case 0x1e1b20u: goto label_1e1b20;
        case 0x1e1b24u: goto label_1e1b24;
        case 0x1e1b28u: goto label_1e1b28;
        case 0x1e1b2cu: goto label_1e1b2c;
        case 0x1e1b30u: goto label_1e1b30;
        case 0x1e1b34u: goto label_1e1b34;
        case 0x1e1b38u: goto label_1e1b38;
        case 0x1e1b3cu: goto label_1e1b3c;
        case 0x1e1b40u: goto label_1e1b40;
        case 0x1e1b44u: goto label_1e1b44;
        case 0x1e1b48u: goto label_1e1b48;
        case 0x1e1b4cu: goto label_1e1b4c;
        case 0x1e1b50u: goto label_1e1b50;
        case 0x1e1b54u: goto label_1e1b54;
        case 0x1e1b58u: goto label_1e1b58;
        case 0x1e1b5cu: goto label_1e1b5c;
        case 0x1e1b60u: goto label_1e1b60;
        case 0x1e1b64u: goto label_1e1b64;
        case 0x1e1b68u: goto label_1e1b68;
        case 0x1e1b6cu: goto label_1e1b6c;
        case 0x1e1b70u: goto label_1e1b70;
        case 0x1e1b74u: goto label_1e1b74;
        case 0x1e1b78u: goto label_1e1b78;
        case 0x1e1b7cu: goto label_1e1b7c;
        case 0x1e1b80u: goto label_1e1b80;
        case 0x1e1b84u: goto label_1e1b84;
        case 0x1e1b88u: goto label_1e1b88;
        case 0x1e1b8cu: goto label_1e1b8c;
        case 0x1e1b90u: goto label_1e1b90;
        case 0x1e1b94u: goto label_1e1b94;
        case 0x1e1b98u: goto label_1e1b98;
        case 0x1e1b9cu: goto label_1e1b9c;
        case 0x1e1ba0u: goto label_1e1ba0;
        case 0x1e1ba4u: goto label_1e1ba4;
        case 0x1e1ba8u: goto label_1e1ba8;
        case 0x1e1bacu: goto label_1e1bac;
        case 0x1e1bb0u: goto label_1e1bb0;
        case 0x1e1bb4u: goto label_1e1bb4;
        case 0x1e1bb8u: goto label_1e1bb8;
        case 0x1e1bbcu: goto label_1e1bbc;
        case 0x1e1bc0u: goto label_1e1bc0;
        case 0x1e1bc4u: goto label_1e1bc4;
        case 0x1e1bc8u: goto label_1e1bc8;
        case 0x1e1bccu: goto label_1e1bcc;
        case 0x1e1bd0u: goto label_1e1bd0;
        case 0x1e1bd4u: goto label_1e1bd4;
        case 0x1e1bd8u: goto label_1e1bd8;
        case 0x1e1bdcu: goto label_1e1bdc;
        case 0x1e1be0u: goto label_1e1be0;
        case 0x1e1be4u: goto label_1e1be4;
        case 0x1e1be8u: goto label_1e1be8;
        case 0x1e1becu: goto label_1e1bec;
        case 0x1e1bf0u: goto label_1e1bf0;
        case 0x1e1bf4u: goto label_1e1bf4;
        case 0x1e1bf8u: goto label_1e1bf8;
        case 0x1e1bfcu: goto label_1e1bfc;
        case 0x1e1c00u: goto label_1e1c00;
        case 0x1e1c04u: goto label_1e1c04;
        case 0x1e1c08u: goto label_1e1c08;
        case 0x1e1c0cu: goto label_1e1c0c;
        case 0x1e1c10u: goto label_1e1c10;
        case 0x1e1c14u: goto label_1e1c14;
        case 0x1e1c18u: goto label_1e1c18;
        case 0x1e1c1cu: goto label_1e1c1c;
        case 0x1e1c20u: goto label_1e1c20;
        case 0x1e1c24u: goto label_1e1c24;
        case 0x1e1c28u: goto label_1e1c28;
        case 0x1e1c2cu: goto label_1e1c2c;
        case 0x1e1c30u: goto label_1e1c30;
        case 0x1e1c34u: goto label_1e1c34;
        case 0x1e1c38u: goto label_1e1c38;
        case 0x1e1c3cu: goto label_1e1c3c;
        case 0x1e1c40u: goto label_1e1c40;
        case 0x1e1c44u: goto label_1e1c44;
        case 0x1e1c48u: goto label_1e1c48;
        case 0x1e1c4cu: goto label_1e1c4c;
        case 0x1e1c50u: goto label_1e1c50;
        case 0x1e1c54u: goto label_1e1c54;
        case 0x1e1c58u: goto label_1e1c58;
        case 0x1e1c5cu: goto label_1e1c5c;
        case 0x1e1c60u: goto label_1e1c60;
        case 0x1e1c64u: goto label_1e1c64;
        case 0x1e1c68u: goto label_1e1c68;
        case 0x1e1c6cu: goto label_1e1c6c;
        case 0x1e1c70u: goto label_1e1c70;
        case 0x1e1c74u: goto label_1e1c74;
        case 0x1e1c78u: goto label_1e1c78;
        case 0x1e1c7cu: goto label_1e1c7c;
        case 0x1e1c80u: goto label_1e1c80;
        case 0x1e1c84u: goto label_1e1c84;
        case 0x1e1c88u: goto label_1e1c88;
        case 0x1e1c8cu: goto label_1e1c8c;
        case 0x1e1c90u: goto label_1e1c90;
        case 0x1e1c94u: goto label_1e1c94;
        case 0x1e1c98u: goto label_1e1c98;
        case 0x1e1c9cu: goto label_1e1c9c;
        case 0x1e1ca0u: goto label_1e1ca0;
        case 0x1e1ca4u: goto label_1e1ca4;
        case 0x1e1ca8u: goto label_1e1ca8;
        case 0x1e1cacu: goto label_1e1cac;
        case 0x1e1cb0u: goto label_1e1cb0;
        case 0x1e1cb4u: goto label_1e1cb4;
        case 0x1e1cb8u: goto label_1e1cb8;
        case 0x1e1cbcu: goto label_1e1cbc;
        case 0x1e1cc0u: goto label_1e1cc0;
        case 0x1e1cc4u: goto label_1e1cc4;
        case 0x1e1cc8u: goto label_1e1cc8;
        case 0x1e1cccu: goto label_1e1ccc;
        case 0x1e1cd0u: goto label_1e1cd0;
        case 0x1e1cd4u: goto label_1e1cd4;
        case 0x1e1cd8u: goto label_1e1cd8;
        case 0x1e1cdcu: goto label_1e1cdc;
        case 0x1e1ce0u: goto label_1e1ce0;
        case 0x1e1ce4u: goto label_1e1ce4;
        case 0x1e1ce8u: goto label_1e1ce8;
        case 0x1e1cecu: goto label_1e1cec;
        case 0x1e1cf0u: goto label_1e1cf0;
        case 0x1e1cf4u: goto label_1e1cf4;
        case 0x1e1cf8u: goto label_1e1cf8;
        case 0x1e1cfcu: goto label_1e1cfc;
        case 0x1e1d00u: goto label_1e1d00;
        case 0x1e1d04u: goto label_1e1d04;
        case 0x1e1d08u: goto label_1e1d08;
        case 0x1e1d0cu: goto label_1e1d0c;
        case 0x1e1d10u: goto label_1e1d10;
        case 0x1e1d14u: goto label_1e1d14;
        case 0x1e1d18u: goto label_1e1d18;
        case 0x1e1d1cu: goto label_1e1d1c;
        case 0x1e1d20u: goto label_1e1d20;
        case 0x1e1d24u: goto label_1e1d24;
        case 0x1e1d28u: goto label_1e1d28;
        case 0x1e1d2cu: goto label_1e1d2c;
        case 0x1e1d30u: goto label_1e1d30;
        case 0x1e1d34u: goto label_1e1d34;
        case 0x1e1d38u: goto label_1e1d38;
        case 0x1e1d3cu: goto label_1e1d3c;
        case 0x1e1d40u: goto label_1e1d40;
        case 0x1e1d44u: goto label_1e1d44;
        case 0x1e1d48u: goto label_1e1d48;
        case 0x1e1d4cu: goto label_1e1d4c;
        case 0x1e1d50u: goto label_1e1d50;
        case 0x1e1d54u: goto label_1e1d54;
        case 0x1e1d58u: goto label_1e1d58;
        case 0x1e1d5cu: goto label_1e1d5c;
        case 0x1e1d60u: goto label_1e1d60;
        case 0x1e1d64u: goto label_1e1d64;
        default: return;
    }

label_1e1598:
    // 0x1e1598: 0x15220002  bne         $t1, $v0, . + 4 + (0x2 << 2)
label_1e159c:
    if (ctx->pc == 0x1E159Cu) {
        ctx->pc = 0x1E159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1598u;
        // 0x1e159c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E15A0u;
        goto label_1e15a0;
    }
    ctx->pc = 0x1E1598u;
    {
        const bool branch_taken_0x1e1598 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1598u;
        // 0x1e159c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1598) {
            ctx->pc = 0x1E15A4u;
            goto label_1e15a4;
        }
    }
    ctx->pc = 0x1E15A0u;
label_1e15a0:
    // 0x1e15a0: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x1e15a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1e15a4:
    // 0x1e15a4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1e15a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e15a8:
    // 0x1e15a8: 0x1440ff78  bnez        $v0, . + 4 + (-0x88 << 2)
label_1e15ac:
    if (ctx->pc == 0x1E15ACu) {
        ctx->pc = 0x1E15B0u;
        goto label_1e15b0;
    }
    ctx->pc = 0x1E15A8u;
    {
        const bool branch_taken_0x1e15a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e15a8) {
            ctx->pc = 0x1E138Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1e138c; return; }
        }
    }
    ctx->pc = 0x1E15B0u;
label_1e15b0:
    // 0x1e15b0: 0x8f8a8db8  lw          $t2, -0x7248($gp)
    ctx->pc = 0x1e15b0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1e15b4:
    // 0x1e15b4: 0x29410006  slti        $at, $t2, 0x6
    ctx->pc = 0x1e15b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)6) ? 1 : 0);
label_1e15b8:
    // 0x1e15b8: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_1e15bc:
    if (ctx->pc == 0x1E15BCu) {
        ctx->pc = 0x1E15BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15B8u;
        // 0x1e15bc: 0x29410006  slti        $at, $t2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E15C0u;
        goto label_1e15c0;
    }
    ctx->pc = 0x1E15B8u;
    {
        const bool branch_taken_0x1e15b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E15BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15B8u;
        // 0x1e15bc: 0x29410006  slti        $at, $t2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e15b8) {
            ctx->pc = 0x1E1614u;
            goto label_1e1614;
        }
    }
    ctx->pc = 0x1E15C0u;
label_1e15c0:
    // 0x1e15c0: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1e15c4:
    if (ctx->pc == 0x1E15C4u) {
        ctx->pc = 0x1E15C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15C0u;
        // 0x1e15c4: 0xa4080  sll         $t0, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E15C8u;
        goto label_1e15c8;
    }
    ctx->pc = 0x1E15C0u;
    {
        const bool branch_taken_0x1e15c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E15C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15C0u;
        // 0x1e15c4: 0xa4080  sll         $t0, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e15c0) {
            ctx->pc = 0x1E1614u;
            goto label_1e1614;
        }
    }
    ctx->pc = 0x1E15C8u;
label_1e15c8:
    // 0x1e15c8: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x1e15c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
label_1e15cc:
    // 0x1e15cc: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x1e15ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
label_1e15d0:
    // 0x1e15d0: 0x24a528a0  addiu       $a1, $a1, 0x28A0
    ctx->pc = 0x1e15d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10400));
label_1e15d4:
    // 0x1e15d4: 0x24842840  addiu       $a0, $a0, 0x2840
    ctx->pc = 0x1e15d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10304));
label_1e15d8:
    // 0x1e15d8: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x1e15d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e15dc:
    // 0x1e15dc: 0x15270002  bne         $t1, $a3, . + 4 + (0x2 << 2)
label_1e15e0:
    if (ctx->pc == 0x1E15E0u) {
        ctx->pc = 0x1E15E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15DCu;
        // 0x1e15e0: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E15E4u;
        goto label_1e15e4;
    }
    ctx->pc = 0x1E15DCu;
    {
        const bool branch_taken_0x1e15dc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 7));
        ctx->pc = 0x1E15E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15DCu;
        // 0x1e15e0: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e15dc) {
            ctx->pc = 0x1E15E8u;
            goto label_1e15e8;
        }
    }
    ctx->pc = 0x1E15E4u;
label_1e15e4:
    // 0x1e15e4: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x1e15e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1e15e8:
    // 0x1e15e8: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x1e15e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1e15ec:
    // 0x1e15ec: 0x881021  addu        $v0, $a0, $t0
    ctx->pc = 0x1e15ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1e15f0:
    // 0x1e15f0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1e15f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_1e15f4:
    // 0x1e15f4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1e15f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1e15f8:
    // 0x1e15f8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1e15f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1e15fc:
    // 0x1e15fc: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1e15fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_1e1600:
    // 0x1e1600: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x1e1600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1e1604:
    // 0x1e1604: 0x29420006  slti        $v0, $t2, 0x6
    ctx->pc = 0x1e1604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)6) ? 1 : 0);
label_1e1608:
    // 0x1e1608: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e1608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e160c:
    // 0x1e160c: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1e1610:
    if (ctx->pc == 0x1E1610u) {
        ctx->pc = 0x1E1610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E160Cu;
        // 0x1e1610: 0xaf838db8  sw          $v1, -0x7248($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938040), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1614u;
        goto label_1e1614;
    }
    ctx->pc = 0x1E160Cu;
    {
        const bool branch_taken_0x1e160c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E160Cu;
        // 0x1e1610: 0xaf838db8  sw          $v1, -0x7248($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938040), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e160c) {
            ctx->pc = 0x1E15DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e15dc;
        }
    }
    ctx->pc = 0x1E1614u;
label_1e1614:
    // 0x1e1614: 0x0  nop
    ctx->pc = 0x1e1614u;
    // NOP
label_1e1618:
    // 0x1e1618: 0xc078d54  jal         func_1E3550
label_1e161c:
    if (ctx->pc == 0x1E161Cu) {
        ctx->pc = 0x1E161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1618u;
        // 0x1e161c: 0xaf808db0  sw          $zero, -0x7250($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938032), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1620u;
        goto label_1e1620;
    }
    ctx->pc = 0x1E1618u;
    SET_GPR_U32(ctx, 31, 0x1E1620u);
    ctx->pc = 0x1E161Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1618u;
    // 0x1e161c: 0xaf808db0  sw          $zero, -0x7250($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938032), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3550u;
    { ctx->pc = 0x1e3550; return; }
    ctx->pc = 0x1E1620u;
label_1e1620:
    // 0x1e1620: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e1620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1624:
    // 0x1e1624: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e1624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1628:
    // 0x1e1628: 0x27828da8  addiu       $v0, $gp, -0x7258
    ctx->pc = 0x1e1628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938024));
label_1e162c:
    // 0x1e162c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1e162cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e1630:
    // 0x1e1630: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1e1634:
    // 0x1e1634: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1e1634u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e1638:
    // 0x1e1638: 0xc05e234  jal         func_1788D0
label_1e163c:
    if (ctx->pc == 0x1E163Cu) {
        ctx->pc = 0x1E163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1638u;
        // 0x1e163c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1640u;
        goto label_1e1640;
    }
    ctx->pc = 0x1E1638u;
    SET_GPR_U32(ctx, 31, 0x1E1640u);
    ctx->pc = 0x1E163Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1638u;
    // 0x1e163c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1E1638u, 0x1E1640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1640u;
label_1e1640:
    // 0x1e1640: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x1e1640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1e1644:
    // 0x1e1644: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e1644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e1648:
    // 0x1e1648: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e1648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1e164c:
    // 0x1e164c: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1e164cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1e1650:
    // 0x1e1650: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e1650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e1654:
    // 0x1e1654: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x1e1654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1e1658:
    // 0x1e1658: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1e1658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1e165c:
    // 0x1e165c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e165cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1660:
    // 0x1e1660: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1664:
    // 0x1e1664: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e1664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e1668:
    // 0x1e1668: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e1668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e166c:
    // 0x1e166c: 0x24080064  addiu       $t0, $zero, 0x64
    ctx->pc = 0x1e166cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1e1670:
    // 0x1e1670: 0xdc252900  ld          $a1, 0x2900($at)
    ctx->pc = 0x1e1670u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 10496)));
label_1e1674:
    // 0x1e1674: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e1674u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1678:
    // 0x1e1678: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e1678u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e167c:
    // 0x1e167c: 0xc05de30  jal         func_1778C0
label_1e1680:
    if (ctx->pc == 0x1E1680u) {
        ctx->pc = 0x1E1680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E167Cu;
        // 0x1e1680: 0x240b01e0  addiu       $t3, $zero, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1684u;
        goto label_1e1684;
    }
    ctx->pc = 0x1E167Cu;
    SET_GPR_U32(ctx, 31, 0x1E1684u);
    ctx->pc = 0x1E1680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E167Cu;
    // 0x1e1680: 0x240b01e0  addiu       $t3, $zero, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E167Cu, 0x1E1684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1684u;
label_1e1684:
    // 0x1e1684: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e1684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e1688:
    // 0x1e1688: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1e1688u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e168c:
    // 0x1e168c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_1e1690:
    if (ctx->pc == 0x1E1690u) {
        ctx->pc = 0x1E1690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E168Cu;
        // 0x1e1690: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1694u;
        goto label_1e1694;
    }
    ctx->pc = 0x1E168Cu;
    {
        const bool branch_taken_0x1e168c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E168Cu;
        // 0x1e1690: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e168c) {
            ctx->pc = 0x1E1628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1628;
        }
    }
    ctx->pc = 0x1E1694u;
label_1e1694:
    // 0x1e1694: 0xaf808d94  sw          $zero, -0x726C($gp)
    ctx->pc = 0x1e1694u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938004), GPR_U32(ctx, 0));
label_1e1698:
    // 0x1e1698: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e1698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e169c:
    // 0x1e169c: 0xaf808d90  sw          $zero, -0x7270($gp)
    ctx->pc = 0x1e169cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938000), GPR_U32(ctx, 0));
label_1e16a0:
    // 0x1e16a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e16a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e16a4:
    // 0x1e16a4: 0x27828d98  addiu       $v0, $gp, -0x7268
    ctx->pc = 0x1e16a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938008));
label_1e16a8:
    // 0x1e16a8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1e16a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e16ac:
    // 0x1e16ac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e16acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1e16b0:
    // 0x1e16b0: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1e16b0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e16b4:
    // 0x1e16b4: 0xc05e234  jal         func_1788D0
label_1e16b8:
    if (ctx->pc == 0x1E16B8u) {
        ctx->pc = 0x1E16B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E16B4u;
        // 0x1e16b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E16BCu;
        goto label_1e16bc;
    }
    ctx->pc = 0x1E16B4u;
    SET_GPR_U32(ctx, 31, 0x1E16BCu);
    ctx->pc = 0x1E16B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E16B4u;
    // 0x1e16b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1E16B4u, 0x1E16BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E16BCu;
label_1e16bc:
    // 0x1e16bc: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x1e16bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1e16c0:
    // 0x1e16c0: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e16c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e16c4:
    // 0x1e16c4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e16c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1e16c8:
    // 0x1e16c8: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1e16c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1e16cc:
    // 0x1e16cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e16ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e16d0:
    // 0x1e16d0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1e16d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e16d4:
    // 0x1e16d4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1e16d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1e16d8:
    // 0x1e16d8: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1e16d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1e16dc:
    // 0x1e16dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e16dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e16e0:
    // 0x1e16e0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e16e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e16e4:
    // 0x1e16e4: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e16e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e16e8:
    // 0x1e16e8: 0x240803e8  addiu       $t0, $zero, 0x3E8
    ctx->pc = 0x1e16e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_1e16ec:
    // 0x1e16ec: 0xdc252910  ld          $a1, 0x2910($at)
    ctx->pc = 0x1e16ecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 10512)));
label_1e16f0:
    // 0x1e16f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e16f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e16f4:
    // 0x1e16f4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e16f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e16f8:
    // 0x1e16f8: 0xc05de30  jal         func_1778C0
label_1e16fc:
    if (ctx->pc == 0x1E16FCu) {
        ctx->pc = 0x1E16FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E16F8u;
        // 0x1e16fc: 0x240b00f8  addiu       $t3, $zero, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1700u;
        goto label_1e1700;
    }
    ctx->pc = 0x1E16F8u;
    SET_GPR_U32(ctx, 31, 0x1E1700u);
    ctx->pc = 0x1E16FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E16F8u;
    // 0x1e16fc: 0x240b00f8  addiu       $t3, $zero, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E16F8u, 0x1E1700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1700u;
label_1e1700:
    // 0x1e1700: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e1700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e1704:
    // 0x1e1704: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1e1704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e1708:
    // 0x1e1708: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_1e170c:
    if (ctx->pc == 0x1E170Cu) {
        ctx->pc = 0x1E170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1708u;
        // 0x1e170c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1710u;
        goto label_1e1710;
    }
    ctx->pc = 0x1E1708u;
    {
        const bool branch_taken_0x1e1708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1708u;
        // 0x1e170c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1708) {
            ctx->pc = 0x1E16A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e16a4;
        }
    }
    ctx->pc = 0x1E1710u;
label_1e1710:
    // 0x1e1710: 0xc078e14  jal         func_1E3850
label_1e1714:
    if (ctx->pc == 0x1E1714u) {
        ctx->pc = 0x1E1718u;
        goto label_1e1718;
    }
    ctx->pc = 0x1E1710u;
    SET_GPR_U32(ctx, 31, 0x1E1718u);
    ctx->pc = 0x1E3850u;
    { ctx->pc = 0x1e3850; return; }
    ctx->pc = 0x1E1718u;
label_1e1718:
    // 0x1e1718: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e1718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e171c:
    // 0x1e171c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e171cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1720:
    // 0x1e1720: 0x27828da0  addiu       $v0, $gp, -0x7260
    ctx->pc = 0x1e1720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938016));
label_1e1724:
    // 0x1e1724: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1e1724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e1728:
    // 0x1e1728: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1e172c:
    // 0x1e172c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1e172cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e1730:
    // 0x1e1730: 0xc05e234  jal         func_1788D0
label_1e1734:
    if (ctx->pc == 0x1E1734u) {
        ctx->pc = 0x1E1734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1730u;
        // 0x1e1734: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1738u;
        goto label_1e1738;
    }
    ctx->pc = 0x1E1730u;
    SET_GPR_U32(ctx, 31, 0x1E1738u);
    ctx->pc = 0x1E1734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1730u;
    // 0x1e1734: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1E1730u, 0x1E1738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1738u;
label_1e1738:
    // 0x1e1738: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x1e1738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1e173c:
    // 0x1e173c: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e173cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e1740:
    // 0x1e1740: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e1740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1e1744:
    // 0x1e1744: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1e1744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1e1748:
    // 0x1e1748: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e1748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e174c:
    // 0x1e174c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e174cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1750:
    // 0x1e1750: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1e1750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1e1754:
    // 0x1e1754: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e1754u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1758:
    // 0x1e1758: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e175c:
    // 0x1e175c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e175cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e1760:
    // 0x1e1760: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e1760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e1764:
    // 0x1e1764: 0x240803e8  addiu       $t0, $zero, 0x3E8
    ctx->pc = 0x1e1764u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_1e1768:
    // 0x1e1768: 0xdc252908  ld          $a1, 0x2908($at)
    ctx->pc = 0x1e1768u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 10504)));
label_1e176c:
    // 0x1e176c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e176cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1770:
    // 0x1e1770: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e1770u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1774:
    // 0x1e1774: 0xc05de30  jal         func_1778C0
label_1e1778:
    if (ctx->pc == 0x1E1778u) {
        ctx->pc = 0x1E1778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1774u;
        // 0x1e1778: 0x240b0050  addiu       $t3, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E177Cu;
        goto label_1e177c;
    }
    ctx->pc = 0x1E1774u;
    SET_GPR_U32(ctx, 31, 0x1E177Cu);
    ctx->pc = 0x1E1778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1774u;
    // 0x1e1778: 0x240b0050  addiu       $t3, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E1774u, 0x1E177Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E177Cu;
label_1e177c:
    // 0x1e177c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e177cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e1780:
    // 0x1e1780: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1e1780u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e1784:
    // 0x1e1784: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_1e1788:
    if (ctx->pc == 0x1E1788u) {
        ctx->pc = 0x1E1788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1784u;
        // 0x1e1788: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E178Cu;
        goto label_1e178c;
    }
    ctx->pc = 0x1E1784u;
    {
        const bool branch_taken_0x1e1784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1784u;
        // 0x1e1788: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1784) {
            ctx->pc = 0x1E1720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1720;
        }
    }
    ctx->pc = 0x1E178Cu;
label_1e178c:
    // 0x1e178c: 0xc079088  jal         func_1E4220
label_1e1790:
    if (ctx->pc == 0x1E1790u) {
        ctx->pc = 0x1E1794u;
        goto label_1e1794;
    }
    ctx->pc = 0x1E178Cu;
    SET_GPR_U32(ctx, 31, 0x1E1794u);
    ctx->pc = 0x1E4220u;
    { ctx->pc = 0x1e4220; return; }
    ctx->pc = 0x1E1794u;
label_1e1794:
    // 0x1e1794: 0xc0788dc  jal         func_1E2370
label_1e1798:
    if (ctx->pc == 0x1E1798u) {
        ctx->pc = 0x1E179Cu;
        goto label_1e179c;
    }
    ctx->pc = 0x1E1794u;
    SET_GPR_U32(ctx, 31, 0x1E179Cu);
    ctx->pc = 0x1E2370u;
    { ctx->pc = 0x1e2370; return; }
    ctx->pc = 0x1E179Cu;
label_1e179c:
    // 0x1e179c: 0xc078c40  jal         func_1E3100
label_1e17a0:
    if (ctx->pc == 0x1E17A0u) {
        ctx->pc = 0x1E17A4u;
        goto label_1e17a4;
    }
    ctx->pc = 0x1E179Cu;
    SET_GPR_U32(ctx, 31, 0x1E17A4u);
    ctx->pc = 0x1E3100u;
    { ctx->pc = 0x1e3100; return; }
    ctx->pc = 0x1E17A4u;
label_1e17a4:
    // 0x1e17a4: 0xc07ab5c  jal         func_1EAD70
label_1e17a8:
    if (ctx->pc == 0x1E17A8u) {
        ctx->pc = 0x1E17A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E17A4u;
        // 0x1e17a8: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E17ACu;
        goto label_1e17ac;
    }
    ctx->pc = 0x1E17A4u;
    SET_GPR_U32(ctx, 31, 0x1E17ACu);
    ctx->pc = 0x1E17A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E17A4u;
    // 0x1e17a8: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD70u;
    { ctx->pc = 0x1ead70; return; }
    ctx->pc = 0x1E17ACu;
label_1e17ac:
    // 0x1e17ac: 0xc077fc0  jal         func_1DFF00
label_1e17b0:
    if (ctx->pc == 0x1E17B0u) {
        ctx->pc = 0x1E17B4u;
        goto label_1e17b4;
    }
    ctx->pc = 0x1E17ACu;
    SET_GPR_U32(ctx, 31, 0x1E17B4u);
    ctx->pc = 0x1DFF00u;
    { ctx->pc = 0x1dff00; return; }
    ctx->pc = 0x1E17B4u;
label_1e17b4:
    // 0x1e17b4: 0xc07a0e8  jal         func_1E83A0
label_1e17b8:
    if (ctx->pc == 0x1E17B8u) {
        ctx->pc = 0x1E17BCu;
        goto label_1e17bc;
    }
    ctx->pc = 0x1E17B4u;
    SET_GPR_U32(ctx, 31, 0x1E17BCu);
    ctx->pc = 0x1E83A0u;
    { ctx->pc = 0x1e83a0; return; }
    ctx->pc = 0x1E17BCu;
label_1e17bc:
    // 0x1e17bc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1e17bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1e17c0:
    // 0x1e17c0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1e17c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e17c4:
    // 0x1e17c4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1e17c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e17c8:
    // 0x1e17c8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1e17c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e17cc:
    // 0x1e17cc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e17ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e17d0:
    // 0x1e17d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e17d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e17d4:
    // 0x1e17d4: 0x3e00008  jr          $ra
label_1e17d8:
    if (ctx->pc == 0x1E17D8u) {
        ctx->pc = 0x1E17D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E17D4u;
        // 0x1e17d8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E17DCu;
        goto label_1e17dc;
    }
    ctx->pc = 0x1E17D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E17D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E17D4u;
        // 0x1e17d8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E17D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E17DCu;
label_1e17dc:
    // 0x1e17dc: 0x0  nop
    ctx->pc = 0x1e17dcu;
    // NOP
label_1e17e0:
    // 0x1e17e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e17e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1e17e4:
    // 0x1e17e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e17e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e17e8:
    // 0x1e17e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e17e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e17ec:
    // 0x1e17ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e17ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e17f0:
    // 0x1e17f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e17f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e17f4:
    // 0x1e17f4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e17f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e17f8:
    // 0x1e17f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e17f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e17fc:
    // 0x1e17fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e17fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1800:
    // 0x1e1800: 0xc078744  jal         func_1E1D10
label_1e1804:
    if (ctx->pc == 0x1E1804u) {
        ctx->pc = 0x1E1804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1800u;
        // 0x1e1804: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1808u;
        goto label_1e1808;
    }
    ctx->pc = 0x1E1800u;
    SET_GPR_U32(ctx, 31, 0x1E1808u);
    ctx->pc = 0x1E1804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1800u;
    // 0x1e1804: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1D10u;
    goto label_1e1d10;
    ctx->pc = 0x1E1808u;
label_1e1808:
    // 0x1e1808: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1e1808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1e180c:
    // 0x1e180c: 0x14400113  bnez        $v0, . + 4 + (0x113 << 2)
label_1e1810:
    if (ctx->pc == 0x1E1810u) {
        ctx->pc = 0x1E1814u;
        goto label_1e1814;
    }
    ctx->pc = 0x1E180Cu;
    {
        const bool branch_taken_0x1e180c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e180c) {
            ctx->pc = 0x1E1C5Cu;
            goto label_1e1c5c;
        }
    }
    ctx->pc = 0x1E1814u;
label_1e1814:
    // 0x1e1814: 0x16000094  bnez        $s0, . + 4 + (0x94 << 2)
label_1e1818:
    if (ctx->pc == 0x1E1818u) {
        ctx->pc = 0x1E181Cu;
        goto label_1e181c;
    }
    ctx->pc = 0x1E1814u;
    {
        const bool branch_taken_0x1e1814 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1814) {
            ctx->pc = 0x1E1A68u;
            goto label_1e1a68;
        }
    }
    ctx->pc = 0x1E181Cu;
label_1e181c:
    // 0x1e181c: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1e181cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1e1820:
    // 0x1e1820: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1e1820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_1e1824:
    // 0x1e1824: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
label_1e1828:
    if (ctx->pc == 0x1E1828u) {
        ctx->pc = 0x1E182Cu;
        goto label_1e182c;
    }
    ctx->pc = 0x1E1824u;
    {
        const bool branch_taken_0x1e1824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1824) {
            ctx->pc = 0x1E1A04u;
            goto label_1e1a04;
        }
    }
    ctx->pc = 0x1E182Cu;
label_1e182c:
    // 0x1e182c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e182cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e1830:
    // 0x1e1830: 0xc05b420  jal         func_16D080
label_1e1834:
    if (ctx->pc == 0x1E1834u) {
        ctx->pc = 0x1E1834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1830u;
        // 0x1e1834: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1838u;
        goto label_1e1838;
    }
    ctx->pc = 0x1E1830u;
    SET_GPR_U32(ctx, 31, 0x1E1838u);
    ctx->pc = 0x1E1834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1830u;
    // 0x1e1834: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1E1830u, 0x1E1838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1838u;
label_1e1838:
    // 0x1e1838: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1e1838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e183c:
    // 0x1e183c: 0x0  nop
    ctx->pc = 0x1e183cu;
    // NOP
label_1e1840:
    // 0x1e1840: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
label_1e1844:
    if (ctx->pc == 0x1E1844u) {
        ctx->pc = 0x1E1844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1840u;
        // 0x1e1844: 0x3203000f  andi        $v1, $s0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1848u;
        goto label_1e1848;
    }
    ctx->pc = 0x1E1840u;
    {
        const bool branch_taken_0x1e1840 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1E1844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1840u;
        // 0x1e1844: 0x3203000f  andi        $v1, $s0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1840) {
            ctx->pc = 0x1E1854u;
            goto label_1e1854;
        }
    }
    ctx->pc = 0x1E1848u;
label_1e1848:
    // 0x1e1848: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1e184c:
    if (ctx->pc == 0x1E184Cu) {
        ctx->pc = 0x1E184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1848u;
        // 0x1e184c: 0x28610008  slti        $at, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1850u;
        goto label_1e1850;
    }
    ctx->pc = 0x1E1848u;
    {
        const bool branch_taken_0x1e1848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1848u;
        // 0x1e184c: 0x28610008  slti        $at, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1848) {
            ctx->pc = 0x1E1858u;
            goto label_1e1858;
        }
    }
    ctx->pc = 0x1E1850u;
label_1e1850:
    // 0x1e1850: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1e1850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_1e1854:
    // 0x1e1854: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x1e1854u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_1e1858:
    // 0x1e1858: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_1e185c:
    if (ctx->pc == 0x1E185Cu) {
        ctx->pc = 0x1E185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1858u;
        // 0x1e185c: 0xaf838d60  sw          $v1, -0x72A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937952), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1860u;
        goto label_1e1860;
    }
    ctx->pc = 0x1E1858u;
    {
        const bool branch_taken_0x1e1858 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1858u;
        // 0x1e185c: 0xaf838d60  sw          $v1, -0x72A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937952), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1858) {
            ctx->pc = 0x1E187Cu;
            goto label_1e187c;
        }
    }
    ctx->pc = 0x1E1860u;
label_1e1860:
    // 0x1e1860: 0x311c0  sll         $v0, $v1, 7
    ctx->pc = 0x1e1860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_1e1864:
    // 0x1e1864: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_1e1868:
    if (ctx->pc == 0x1E1868u) {
        ctx->pc = 0x1E1868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1864u;
        // 0x1e1868: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E186Cu;
        goto label_1e186c;
    }
    ctx->pc = 0x1E1864u;
    {
        const bool branch_taken_0x1e1864 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E1868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1864u;
        // 0x1e1868: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1864) {
            ctx->pc = 0x1E1898u;
            goto label_1e1898;
        }
    }
    ctx->pc = 0x1E186Cu;
label_1e186c:
    // 0x1e186c: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x1e186cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_1e1870:
    // 0x1e1870: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x1e1870u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_1e1874:
    // 0x1e1874: 0x10000009  b           . + 4 + (0x9 << 2)
label_1e1878:
    if (ctx->pc == 0x1E1878u) {
        ctx->pc = 0x1E1878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1874u;
        // 0x1e1878: 0xaf838d64  sw          $v1, -0x729C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937956), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E187Cu;
        goto label_1e187c;
    }
    ctx->pc = 0x1E1874u;
    {
        const bool branch_taken_0x1e1874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1874u;
        // 0x1e1878: 0xaf838d64  sw          $v1, -0x729C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937956), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1874) {
            ctx->pc = 0x1E189Cu;
            goto label_1e189c;
        }
    }
    ctx->pc = 0x1E187Cu;
label_1e187c:
    // 0x1e187c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1e187cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e1880:
    // 0x1e1880: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1e1880u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e1884:
    // 0x1e1884: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1e1884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1e1888:
    // 0x1e1888: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1e188c:
    if (ctx->pc == 0x1E188Cu) {
        ctx->pc = 0x1E188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1888u;
        // 0x1e188c: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1890u;
        goto label_1e1890;
    }
    ctx->pc = 0x1E1888u;
    {
        const bool branch_taken_0x1e1888 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1888u;
        // 0x1e188c: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1888) {
            ctx->pc = 0x1E1898u;
            goto label_1e1898;
        }
    }
    ctx->pc = 0x1E1890u;
label_1e1890:
    // 0x1e1890: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x1e1890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_1e1894:
    // 0x1e1894: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x1e1894u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_1e1898:
    // 0x1e1898: 0xaf838d64  sw          $v1, -0x729C($gp)
    ctx->pc = 0x1e1898u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937956), GPR_U32(ctx, 3));
label_1e189c:
    // 0x1e189c: 0xc078820  jal         func_1E2080
label_1e18a0:
    if (ctx->pc == 0x1E18A0u) {
        ctx->pc = 0x1E18A4u;
        goto label_1e18a4;
    }
    ctx->pc = 0x1E189Cu;
    SET_GPR_U32(ctx, 31, 0x1E18A4u);
    ctx->pc = 0x1E2080u;
    { ctx->pc = 0x1e2080; return; }
    ctx->pc = 0x1E18A4u;
label_1e18a4:
    // 0x1e18a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e18a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e18a8:
    // 0x1e18a8: 0x2a010031  slti        $at, $s0, 0x31
    ctx->pc = 0x1e18a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)49) ? 1 : 0);
label_1e18ac:
    // 0x1e18ac: 0x1420ffe3  bnez        $at, . + 4 + (-0x1D << 2)
label_1e18b0:
    if (ctx->pc == 0x1E18B0u) {
        ctx->pc = 0x1E18B4u;
        goto label_1e18b4;
    }
    ctx->pc = 0x1E18ACu;
    {
        const bool branch_taken_0x1e18ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e18ac) {
            ctx->pc = 0x1E183Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e183c;
        }
    }
    ctx->pc = 0x1E18B4u;
label_1e18b4:
    // 0x1e18b4: 0x8f8a8218  lw          $t2, -0x7DE8($gp)
    ctx->pc = 0x1e18b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1e18b8:
    // 0x1e18b8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1e18b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1e18bc:
    // 0x1e18bc: 0x15420003  bne         $t2, $v0, . + 4 + (0x3 << 2)
label_1e18c0:
    if (ctx->pc == 0x1E18C0u) {
        ctx->pc = 0x1E18C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E18BCu;
        // 0x1e18c0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E18C4u;
        goto label_1e18c4;
    }
    ctx->pc = 0x1E18BCu;
    {
        const bool branch_taken_0x1e18bc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E18C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E18BCu;
        // 0x1e18c0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e18bc) {
            ctx->pc = 0x1E18CCu;
            goto label_1e18cc;
        }
    }
    ctx->pc = 0x1E18C4u;
label_1e18c4:
    // 0x1e18c4: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_1e18c8:
    if (ctx->pc == 0x1E18C8u) {
        ctx->pc = 0x1E18C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E18C4u;
        // 0x1e18c8: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E18CCu;
        goto label_1e18cc;
    }
    ctx->pc = 0x1E18C4u;
    {
        const bool branch_taken_0x1e18c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E18C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E18C4u;
        // 0x1e18c8: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e18c4) {
            ctx->pc = 0x1E1C4Cu;
            goto label_1e1c4c;
        }
    }
    ctx->pc = 0x1E18CCu;
label_1e18cc:
    // 0x1e18cc: 0x0  nop
    ctx->pc = 0x1e18ccu;
    // NOP
label_1e18d0:
    // 0x1e18d0: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e18d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e18d4:
    // 0x1e18d4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1e18d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1e18d8:
    // 0x1e18d8: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x1e18d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_1e18dc:
    // 0x1e18dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e18dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e18e0:
    // 0x1e18e0: 0x3c0b004b  lui         $t3, 0x4B
    ctx->pc = 0x1e18e0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)75 << 16));
label_1e18e4:
    // 0x1e18e4: 0x8c4c0000  lw          $t4, 0x0($v0)
    ctx->pc = 0x1e18e4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e18e8:
    // 0x1e18e8: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x1e18e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
label_1e18ec:
    // 0x1e18ec: 0x256b26d0  addiu       $t3, $t3, 0x26D0
    ctx->pc = 0x1e18ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 9936));
label_1e18f0:
    // 0x1e18f0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1e18f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e18f4:
    // 0x1e18f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e18f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e18f8:
    // 0x1e18f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e18f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e18fc:
    // 0x1e18fc: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x1e18fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e1900:
    // 0x1e1900: 0x24a5b850  addiu       $a1, $a1, -0x47B0
    ctx->pc = 0x1e1900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948944));
label_1e1904:
    // 0x1e1904: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e1904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e1908:
    // 0x1e1908: 0xaf8c8d30  sw          $t4, -0x72D0($gp)
    ctx->pc = 0x1e1908u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937904), GPR_U32(ctx, 12));
label_1e190c:
    // 0x1e190c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x1e190cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_1e1910:
    // 0x1e1910: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1e1910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e1914:
    // 0x1e1914: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1e1914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_1e1918:
    // 0x1e1918: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1e1918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1e191c:
    // 0x1e191c: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x1e191cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1e1920:
    // 0x1e1920: 0x2442b810  addiu       $v0, $v0, -0x47F0
    ctx->pc = 0x1e1920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948880));
label_1e1924:
    // 0x1e1924: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1e1924u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1e1928:
    // 0x1e1928: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1e1928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1e192c:
    // 0x1e192c: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1e192cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_1e1930:
    // 0x1e1930: 0x246326a0  addiu       $v1, $v1, 0x26A0
    ctx->pc = 0x1e1930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9888));
label_1e1934:
    // 0x1e1934: 0x248e0000  addiu       $t6, $a0, 0x0
    ctx->pc = 0x1e1934u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_1e1938:
    // 0x1e1938: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x1e1938u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_1e193c:
    // 0x1e193c: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1e193cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_1e1940:
    // 0x1e1940: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1e1944:
    if (ctx->pc == 0x1E1944u) {
        ctx->pc = 0x1E1944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1940u;
        // 0x1e1944: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1948u;
        goto label_1e1948;
    }
    ctx->pc = 0x1E1940u;
    {
        const bool branch_taken_0x1e1940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1940u;
        // 0x1e1944: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1940) {
            ctx->pc = 0x1E19B8u;
            goto label_1e19b8;
        }
    }
    ctx->pc = 0x1E1948u;
label_1e1948:
    // 0x1e1948: 0x1547000c  bne         $t2, $a3, . + 4 + (0xC << 2)
label_1e194c:
    if (ctx->pc == 0x1E194Cu) {
        ctx->pc = 0x1E1950u;
        goto label_1e1950;
    }
    ctx->pc = 0x1E1948u;
    {
        const bool branch_taken_0x1e1948 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 7));
        if (branch_taken_0x1e1948) {
            ctx->pc = 0x1E197Cu;
            goto label_1e197c;
        }
    }
    ctx->pc = 0x1E1950u;
label_1e1950:
    // 0x1e1950: 0x8ccc0000  lw          $t4, 0x0($a2)
    ctx->pc = 0x1e1950u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1e1954:
    // 0x1e1954: 0x895821  addu        $t3, $a0, $t1
    ctx->pc = 0x1e1954u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_1e1958:
    // 0x1e1958: 0x8d6d0000  lw          $t5, 0x0($t3)
    ctx->pc = 0x1e1958u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1e195c:
    // 0x1e195c: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x1e195cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_1e1960:
    // 0x1e1960: 0xac6021  addu        $t4, $a1, $t4
    ctx->pc = 0x1e1960u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_1e1964:
    // 0x1e1964: 0x695821  addu        $t3, $v1, $t1
    ctx->pc = 0x1e1964u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1e1968:
    // 0x1e1968: 0x258c0000  addiu       $t4, $t4, 0x0
    ctx->pc = 0x1e1968u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 0));
label_1e196c:
    // 0x1e196c: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x1e196cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
label_1e1970:
    // 0x1e1970: 0x918c0000  lbu         $t4, 0x0($t4)
    ctx->pc = 0x1e1970u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_1e1974:
    // 0x1e1974: 0x1000000d  b           . + 4 + (0xD << 2)
label_1e1978:
    if (ctx->pc == 0x1E1978u) {
        ctx->pc = 0x1E1978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1974u;
        // 0x1e1978: 0xad6c0000  sw          $t4, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E197Cu;
        goto label_1e197c;
    }
    ctx->pc = 0x1E1974u;
    {
        const bool branch_taken_0x1e1974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1974u;
        // 0x1e1978: 0xad6c0000  sw          $t4, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1974) {
            ctx->pc = 0x1E19ACu;
            goto label_1e19ac;
        }
    }
    ctx->pc = 0x1E197Cu;
label_1e197c:
    // 0x1e197c: 0x0  nop
    ctx->pc = 0x1e197cu;
    // NOP
label_1e1980:
    // 0x1e1980: 0x1c96021  addu        $t4, $t6, $t1
    ctx->pc = 0x1e1980u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 9)));
label_1e1984:
    // 0x1e1984: 0x8ccf0000  lw          $t7, 0x0($a2)
    ctx->pc = 0x1e1984u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1e1988:
    // 0x1e1988: 0x695821  addu        $t3, $v1, $t1
    ctx->pc = 0x1e1988u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1e198c:
    // 0x1e198c: 0x8d8d0000  lw          $t5, 0x0($t4)
    ctx->pc = 0x1e198cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1e1990:
    // 0x1e1990: 0xf6040  sll         $t4, $t7, 1
    ctx->pc = 0x1e1990u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
label_1e1994:
    // 0x1e1994: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x1e1994u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
label_1e1998:
    // 0x1e1998: 0x4c6021  addu        $t4, $v0, $t4
    ctx->pc = 0x1e1998u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
label_1e199c:
    // 0x1e199c: 0x258c0000  addiu       $t4, $t4, 0x0
    ctx->pc = 0x1e199cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 0));
label_1e19a0:
    // 0x1e19a0: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x1e19a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
label_1e19a4:
    // 0x1e19a4: 0x918c0000  lbu         $t4, 0x0($t4)
    ctx->pc = 0x1e19a4u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_1e19a8:
    // 0x1e19a8: 0xad6c0000  sw          $t4, 0x0($t3)
    ctx->pc = 0x1e19a8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 12));
label_1e19ac:
    // 0x1e19ac: 0x0  nop
    ctx->pc = 0x1e19acu;
    // NOP
label_1e19b0:
    // 0x1e19b0: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1e19b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_1e19b4:
    // 0x1e19b4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1e19b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1e19b8:
    // 0x1e19b8: 0x8f8b8d30  lw          $t3, -0x72D0($gp)
    ctx->pc = 0x1e19b8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
label_1e19bc:
    // 0x1e19bc: 0x10b582a  slt         $t3, $t0, $t3
    ctx->pc = 0x1e19bcu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_1e19c0:
    // 0x1e19c0: 0x1560ffe1  bnez        $t3, . + 4 + (-0x1F << 2)
label_1e19c4:
    if (ctx->pc == 0x1E19C4u) {
        ctx->pc = 0x1E19C8u;
        goto label_1e19c8;
    }
    ctx->pc = 0x1E19C0u;
    {
        const bool branch_taken_0x1e19c0 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e19c0) {
            ctx->pc = 0x1E1948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1948;
        }
    }
    ctx->pc = 0x1E19C8u;
label_1e19c8:
    // 0x1e19c8: 0xaf808d34  sw          $zero, -0x72CC($gp)
    ctx->pc = 0x1e19c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937908), GPR_U32(ctx, 0));
label_1e19cc:
    // 0x1e19cc: 0xaf808d3c  sw          $zero, -0x72C4($gp)
    ctx->pc = 0x1e19ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937916), GPR_U32(ctx, 0));
label_1e19d0:
    // 0x1e19d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e19d4:
    if (ctx->pc == 0x1E19D4u) {
        ctx->pc = 0x1E19D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E19D0u;
        // 0x1e19d4: 0xaf808d38  sw          $zero, -0x72C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937912), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E19D8u;
        goto label_1e19d8;
    }
    ctx->pc = 0x1E19D0u;
    {
        const bool branch_taken_0x1e19d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E19D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E19D0u;
        // 0x1e19d4: 0xaf808d38  sw          $zero, -0x72C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937912), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e19d0) {
            ctx->pc = 0x1E19E0u;
            goto label_1e19e0;
        }
    }
    ctx->pc = 0x1E19D8u;
label_1e19d8:
    // 0x1e19d8: 0xc078820  jal         func_1E2080
label_1e19dc:
    if (ctx->pc == 0x1E19DCu) {
        ctx->pc = 0x1E19E0u;
        goto label_1e19e0;
    }
    ctx->pc = 0x1E19D8u;
    SET_GPR_U32(ctx, 31, 0x1E19E0u);
    ctx->pc = 0x1E2080u;
    { ctx->pc = 0x1e2080; return; }
    ctx->pc = 0x1E19E0u;
label_1e19e0:
    // 0x1e19e0: 0x8f828d3c  lw          $v0, -0x72C4($gp)
    ctx->pc = 0x1e19e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
label_1e19e4:
    // 0x1e19e4: 0x0  nop
    ctx->pc = 0x1e19e4u;
    // NOP
label_1e19e8:
    // 0x1e19e8: 0x0  nop
    ctx->pc = 0x1e19e8u;
    // NOP
label_1e19ec:
    // 0x1e19ec: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_1e19f0:
    if (ctx->pc == 0x1E19F0u) {
        ctx->pc = 0x1E19F4u;
        goto label_1e19f4;
    }
    ctx->pc = 0x1E19ECu;
    {
        const bool branch_taken_0x1e19ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e19ec) {
            ctx->pc = 0x1E19D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e19d8;
        }
    }
    ctx->pc = 0x1E19F4u;
label_1e19f4:
    // 0x1e19f4: 0xc078050  jal         func_1E0140
label_1e19f8:
    if (ctx->pc == 0x1E19F8u) {
        ctx->pc = 0x1E19F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E19F4u;
        // 0x1e19f8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E19FCu;
        goto label_1e19fc;
    }
    ctx->pc = 0x1E19F4u;
    SET_GPR_U32(ctx, 31, 0x1E19FCu);
    ctx->pc = 0x1E19F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E19F4u;
    // 0x1e19f8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x1E19FCu;
label_1e19fc:
    // 0x1e19fc: 0x10000093  b           . + 4 + (0x93 << 2)
label_1e1a00:
    if (ctx->pc == 0x1E1A00u) {
        ctx->pc = 0x1E1A04u;
        goto label_1e1a04;
    }
    ctx->pc = 0x1E19FCu;
    {
        const bool branch_taken_0x1e19fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e19fc) {
            ctx->pc = 0x1E1C4Cu;
            goto label_1e1c4c;
        }
    }
    ctx->pc = 0x1E1A04u;
label_1e1a04:
    // 0x1e1a04: 0x0  nop
    ctx->pc = 0x1e1a04u;
    // NOP
label_1e1a08:
    // 0x1e1a08: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1e1a08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1e1a0c:
    // 0x1e1a0c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1e1a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1e1a10:
    // 0x1e1a10: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1e1a14:
    if (ctx->pc == 0x1E1A14u) {
        ctx->pc = 0x1E1A18u;
        goto label_1e1a18;
    }
    ctx->pc = 0x1E1A10u;
    {
        const bool branch_taken_0x1e1a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1a10) {
            ctx->pc = 0x1E1A38u;
            goto label_1e1a38;
        }
    }
    ctx->pc = 0x1E1A18u;
label_1e1a18:
    // 0x1e1a18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e1a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1a1c:
    // 0x1e1a1c: 0xc05b420  jal         func_16D080
label_1e1a20:
    if (ctx->pc == 0x1E1A20u) {
        ctx->pc = 0x1E1A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A1Cu;
        // 0x1e1a20: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1A24u;
        goto label_1e1a24;
    }
    ctx->pc = 0x1E1A1Cu;
    SET_GPR_U32(ctx, 31, 0x1E1A24u);
    ctx->pc = 0x1E1A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1A1Cu;
    // 0x1e1a20: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1E1A1Cu, 0x1E1A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1A24u;
label_1e1a24:
    // 0x1e1a24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e1a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e1a28:
    // 0x1e1a28: 0xc07879c  jal         func_1E1E70
label_1e1a2c:
    if (ctx->pc == 0x1E1A2Cu) {
        ctx->pc = 0x1E1A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A28u;
        // 0x1e1a2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1A30u;
        goto label_1e1a30;
    }
    ctx->pc = 0x1E1A28u;
    SET_GPR_U32(ctx, 31, 0x1E1A30u);
    ctx->pc = 0x1E1A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1A28u;
    // 0x1e1a2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1E70u;
    { ctx->pc = 0x1e1e70; return; }
    ctx->pc = 0x1E1A30u;
label_1e1a30:
    // 0x1e1a30: 0x10000086  b           . + 4 + (0x86 << 2)
label_1e1a34:
    if (ctx->pc == 0x1E1A34u) {
        ctx->pc = 0x1E1A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A30u;
        // 0x1e1a34: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1A38u;
        goto label_1e1a38;
    }
    ctx->pc = 0x1E1A30u;
    {
        const bool branch_taken_0x1e1a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A30u;
        // 0x1e1a34: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1a30) {
            ctx->pc = 0x1E1C4Cu;
            goto label_1e1c4c;
        }
    }
    ctx->pc = 0x1E1A38u;
label_1e1a38:
    // 0x1e1a38: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1e1a38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1e1a3c:
    // 0x1e1a3c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1e1a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_1e1a40:
    // 0x1e1a40: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
label_1e1a44:
    if (ctx->pc == 0x1E1A44u) {
        ctx->pc = 0x1E1A48u;
        goto label_1e1a48;
    }
    ctx->pc = 0x1E1A40u;
    {
        const bool branch_taken_0x1e1a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1a40) {
            ctx->pc = 0x1E1C4Cu;
            goto label_1e1c4c;
        }
    }
    ctx->pc = 0x1E1A48u;
label_1e1a48:
    // 0x1e1a48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e1a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1a4c:
    // 0x1e1a4c: 0xc05b420  jal         func_16D080
label_1e1a50:
    if (ctx->pc == 0x1E1A50u) {
        ctx->pc = 0x1E1A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A4Cu;
        // 0x1e1a50: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1A54u;
        goto label_1e1a54;
    }
    ctx->pc = 0x1E1A4Cu;
    SET_GPR_U32(ctx, 31, 0x1E1A54u);
    ctx->pc = 0x1E1A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1A4Cu;
    // 0x1e1a50: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1E1A4Cu, 0x1E1A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1A54u;
label_1e1a54:
    // 0x1e1a54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e1a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e1a58:
    // 0x1e1a58: 0xc07879c  jal         func_1E1E70
label_1e1a5c:
    if (ctx->pc == 0x1E1A5Cu) {
        ctx->pc = 0x1E1A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A58u;
        // 0x1e1a5c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1A60u;
        goto label_1e1a60;
    }
    ctx->pc = 0x1E1A58u;
    SET_GPR_U32(ctx, 31, 0x1E1A60u);
    ctx->pc = 0x1E1A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1A58u;
    // 0x1e1a5c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1E70u;
    { ctx->pc = 0x1e1e70; return; }
    ctx->pc = 0x1E1A60u;
label_1e1a60:
    // 0x1e1a60: 0x1000007a  b           . + 4 + (0x7A << 2)
label_1e1a64:
    if (ctx->pc == 0x1E1A64u) {
        ctx->pc = 0x1E1A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A60u;
        // 0x1e1a64: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1A68u;
        goto label_1e1a68;
    }
    ctx->pc = 0x1E1A60u;
    {
        const bool branch_taken_0x1e1a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A60u;
        // 0x1e1a64: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1a60) {
            ctx->pc = 0x1E1C4Cu;
            goto label_1e1c4c;
        }
    }
    ctx->pc = 0x1E1A68u;
label_1e1a68:
    // 0x1e1a68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1a6c:
    // 0x1e1a6c: 0x16020057  bne         $s0, $v0, . + 4 + (0x57 << 2)
label_1e1a70:
    if (ctx->pc == 0x1E1A70u) {
        ctx->pc = 0x1E1A74u;
        goto label_1e1a74;
    }
    ctx->pc = 0x1E1A6Cu;
    {
        const bool branch_taken_0x1e1a6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e1a6c) {
            ctx->pc = 0x1E1BCCu;
            goto label_1e1bcc;
        }
    }
    ctx->pc = 0x1E1A74u;
label_1e1a74:
    // 0x1e1a74: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1e1a74u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1e1a78:
    // 0x1e1a78: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1e1a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_1e1a7c:
    // 0x1e1a7c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1e1a80:
    if (ctx->pc == 0x1E1A80u) {
        ctx->pc = 0x1E1A84u;
        goto label_1e1a84;
    }
    ctx->pc = 0x1E1A7Cu;
    {
        const bool branch_taken_0x1e1a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1a7c) {
            ctx->pc = 0x1E1AF0u;
            goto label_1e1af0;
        }
    }
    ctx->pc = 0x1E1A84u;
label_1e1a84:
    // 0x1e1a84: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e1a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e1a88:
    // 0x1e1a88: 0xc05b420  jal         func_16D080
label_1e1a8c:
    if (ctx->pc == 0x1E1A8Cu) {
        ctx->pc = 0x1E1A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A88u;
        // 0x1e1a8c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1A90u;
        goto label_1e1a90;
    }
    ctx->pc = 0x1E1A88u;
    SET_GPR_U32(ctx, 31, 0x1E1A90u);
    ctx->pc = 0x1E1A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1A88u;
    // 0x1e1a8c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1E1A88u, 0x1E1A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1A90u;
label_1e1a90:
    // 0x1e1a90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e1a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e1a94:
    // 0x1e1a94: 0xaf808d38  sw          $zero, -0x72C8($gp)
    ctx->pc = 0x1e1a94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937912), GPR_U32(ctx, 0));
label_1e1a98:
    // 0x1e1a98: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e1a9c:
    if (ctx->pc == 0x1E1A9Cu) {
        ctx->pc = 0x1E1A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A98u;
        // 0x1e1a9c: 0xaf828d3c  sw          $v0, -0x72C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937916), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1AA0u;
        goto label_1e1aa0;
    }
    ctx->pc = 0x1E1A98u;
    {
        const bool branch_taken_0x1e1a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A98u;
        // 0x1e1a9c: 0xaf828d3c  sw          $v0, -0x72C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937916), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1a98) {
            ctx->pc = 0x1E1AA8u;
            goto label_1e1aa8;
        }
    }
    ctx->pc = 0x1E1AA0u;
label_1e1aa0:
    // 0x1e1aa0: 0xc078820  jal         func_1E2080
label_1e1aa4:
    if (ctx->pc == 0x1E1AA4u) {
        ctx->pc = 0x1E1AA8u;
        goto label_1e1aa8;
    }
    ctx->pc = 0x1E1AA0u;
    SET_GPR_U32(ctx, 31, 0x1E1AA8u);
    ctx->pc = 0x1E2080u;
    { ctx->pc = 0x1e2080; return; }
    ctx->pc = 0x1E1AA8u;
label_1e1aa8:
    // 0x1e1aa8: 0x8f828d3c  lw          $v0, -0x72C4($gp)
    ctx->pc = 0x1e1aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
label_1e1aac:
    // 0x1e1aac: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1e1aacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e1ab0:
    // 0x1e1ab0: 0x0  nop
    ctx->pc = 0x1e1ab0u;
    // NOP
label_1e1ab4:
    // 0x1e1ab4: 0x1050fffa  beq         $v0, $s0, . + 4 + (-0x6 << 2)
label_1e1ab8:
    if (ctx->pc == 0x1E1AB8u) {
        ctx->pc = 0x1E1ABCu;
        goto label_1e1abc;
    }
    ctx->pc = 0x1E1AB4u;
    {
        const bool branch_taken_0x1e1ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1e1ab4) {
            ctx->pc = 0x1E1AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1aa0;
        }
    }
    ctx->pc = 0x1E1ABCu;
label_1e1abc:
    // 0x1e1abc: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1e1abcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1e1ac0:
    // 0x1e1ac0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1e1ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_1e1ac4:
    // 0x1e1ac4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1e1ac8:
    if (ctx->pc == 0x1E1AC8u) {
        ctx->pc = 0x1E1ACCu;
        goto label_1e1acc;
    }
    ctx->pc = 0x1E1AC4u;
    {
        const bool branch_taken_0x1e1ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1ac4) {
            ctx->pc = 0x1E1AE8u;
            goto label_1e1ae8;
        }
    }
    ctx->pc = 0x1E1ACCu;
label_1e1acc:
    // 0x1e1acc: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1e1accu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1e1ad0:
    // 0x1e1ad0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1e1ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_1e1ad4:
    // 0x1e1ad4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1e1ad8:
    if (ctx->pc == 0x1E1AD8u) {
        ctx->pc = 0x1E1ADCu;
        goto label_1e1adc;
    }
    ctx->pc = 0x1E1AD4u;
    {
        const bool branch_taken_0x1e1ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1ad4) {
            ctx->pc = 0x1E1AE8u;
            goto label_1e1ae8;
        }
    }
    ctx->pc = 0x1E1ADCu;
label_1e1adc:
    // 0x1e1adc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1ae0:
    // 0x1e1ae0: 0x1000005a  b           . + 4 + (0x5A << 2)
label_1e1ae4:
    if (ctx->pc == 0x1E1AE4u) {
        ctx->pc = 0x1E1AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1AE0u;
        // 0x1e1ae4: 0xaf828db4  sw          $v0, -0x724C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938036), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1AE8u;
        goto label_1e1ae8;
    }
    ctx->pc = 0x1E1AE0u;
    {
        const bool branch_taken_0x1e1ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1AE0u;
        // 0x1e1ae4: 0xaf828db4  sw          $v0, -0x724C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938036), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ae0) {
            ctx->pc = 0x1E1C4Cu;
            goto label_1e1c4c;
        }
    }
    ctx->pc = 0x1E1AE8u;
label_1e1ae8:
    // 0x1e1ae8: 0x10000058  b           . + 4 + (0x58 << 2)
label_1e1aec:
    if (ctx->pc == 0x1E1AECu) {
        ctx->pc = 0x1E1AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1AE8u;
        // 0x1e1aec: 0xaf808db4  sw          $zero, -0x724C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938036), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1AF0u;
        goto label_1e1af0;
    }
    ctx->pc = 0x1E1AE8u;
    {
        const bool branch_taken_0x1e1ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1AE8u;
        // 0x1e1aec: 0xaf808db4  sw          $zero, -0x724C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938036), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ae8) {
            ctx->pc = 0x1E1C4Cu;
            goto label_1e1c4c;
        }
    }
    ctx->pc = 0x1E1AF0u;
label_1e1af0:
    // 0x1e1af0: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1e1af0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1e1af4:
    // 0x1e1af4: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1e1af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_1e1af8:
    // 0x1e1af8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1e1afc:
    if (ctx->pc == 0x1E1AFCu) {
        ctx->pc = 0x1E1B00u;
        goto label_1e1b00;
    }
    ctx->pc = 0x1E1AF8u;
    {
        const bool branch_taken_0x1e1af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1af8) {
            ctx->pc = 0x1E1B4Cu;
            goto label_1e1b4c;
        }
    }
    ctx->pc = 0x1E1B00u;
label_1e1b00:
    // 0x1e1b00: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1e1b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e1b04:
    // 0x1e1b04: 0xc05b420  jal         func_16D080
label_1e1b08:
    if (ctx->pc == 0x1E1B08u) {
        ctx->pc = 0x1E1B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B04u;
        // 0x1e1b08: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1B0Cu;
        goto label_1e1b0c;
    }
    ctx->pc = 0x1E1B04u;
    SET_GPR_U32(ctx, 31, 0x1E1B0Cu);
    ctx->pc = 0x1E1B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1B04u;
    // 0x1e1b08: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1E1B04u, 0x1E1B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1B0Cu;
label_1e1b0c:
    // 0x1e1b0c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e1b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e1b10:
    // 0x1e1b10: 0xaf808d38  sw          $zero, -0x72C8($gp)
    ctx->pc = 0x1e1b10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937912), GPR_U32(ctx, 0));
label_1e1b14:
    // 0x1e1b14: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e1b18:
    if (ctx->pc == 0x1E1B18u) {
        ctx->pc = 0x1E1B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B14u;
        // 0x1e1b18: 0xaf828d3c  sw          $v0, -0x72C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937916), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1B1Cu;
        goto label_1e1b1c;
    }
    ctx->pc = 0x1E1B14u;
    {
        const bool branch_taken_0x1e1b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B14u;
        // 0x1e1b18: 0xaf828d3c  sw          $v0, -0x72C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937916), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1b14) {
            ctx->pc = 0x1E1B28u;
            goto label_1e1b28;
        }
    }
    ctx->pc = 0x1E1B1Cu;
label_1e1b1c:
    // 0x1e1b1c: 0x0  nop
    ctx->pc = 0x1e1b1cu;
    // NOP
label_1e1b20:
    // 0x1e1b20: 0xc078820  jal         func_1E2080
label_1e1b24:
    if (ctx->pc == 0x1E1B24u) {
        ctx->pc = 0x1E1B28u;
        goto label_1e1b28;
    }
    ctx->pc = 0x1E1B20u;
    SET_GPR_U32(ctx, 31, 0x1E1B28u);
    ctx->pc = 0x1E2080u;
    { ctx->pc = 0x1e2080; return; }
    ctx->pc = 0x1E1B28u;
label_1e1b28:
    // 0x1e1b28: 0x8f838d3c  lw          $v1, -0x72C4($gp)
    ctx->pc = 0x1e1b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
label_1e1b2c:
    // 0x1e1b2c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e1b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e1b30:
    // 0x1e1b30: 0x0  nop
    ctx->pc = 0x1e1b30u;
    // NOP
label_1e1b34:
    // 0x1e1b34: 0x1062fff9  beq         $v1, $v0, . + 4 + (-0x7 << 2)
label_1e1b38:
    if (ctx->pc == 0x1E1B38u) {
        ctx->pc = 0x1E1B3Cu;
        goto label_1e1b3c;
    }
    ctx->pc = 0x1E1B34u;
    {
        const bool branch_taken_0x1e1b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e1b34) {
            ctx->pc = 0x1E1B1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1b1c;
        }
    }
    ctx->pc = 0x1E1B3Cu;
label_1e1b3c:
    // 0x1e1b3c: 0xc078050  jal         func_1E0140
label_1e1b40:
    if (ctx->pc == 0x1E1B40u) {
        ctx->pc = 0x1E1B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B3Cu;
        // 0x1e1b40: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1B44u;
        goto label_1e1b44;
    }
    ctx->pc = 0x1E1B3Cu;
    SET_GPR_U32(ctx, 31, 0x1E1B44u);
    ctx->pc = 0x1E1B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1B3Cu;
    // 0x1e1b40: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x1E1B44u;
label_1e1b44:
    // 0x1e1b44: 0x10000041  b           . + 4 + (0x41 << 2)
label_1e1b48:
    if (ctx->pc == 0x1E1B48u) {
        ctx->pc = 0x1E1B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B44u;
        // 0x1e1b48: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1B4Cu;
        goto label_1e1b4c;
    }
    ctx->pc = 0x1E1B44u;
    {
        const bool branch_taken_0x1e1b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B44u;
        // 0x1e1b48: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1b44) {
            ctx->pc = 0x1E1C4Cu;
            goto label_1e1c4c;
        }
    }
    ctx->pc = 0x1E1B4Cu;
label_1e1b4c:
    // 0x1e1b4c: 0x0  nop
    ctx->pc = 0x1e1b4cu;
    // NOP
label_1e1b50:
    // 0x1e1b50: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1e1b50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1e1b54:
    // 0x1e1b54: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1e1b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1e1b58:
    // 0x1e1b58: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1e1b5c:
    if (ctx->pc == 0x1E1B5Cu) {
        ctx->pc = 0x1E1B60u;
        goto label_1e1b60;
    }
    ctx->pc = 0x1E1B58u;
    {
        const bool branch_taken_0x1e1b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1b58) {
            ctx->pc = 0x1E1B80u;
            goto label_1e1b80;
        }
    }
    ctx->pc = 0x1E1B60u;
label_1e1b60:
    // 0x1e1b60: 0x1a40003a  blez        $s2, . + 4 + (0x3A << 2)
label_1e1b64:
    if (ctx->pc == 0x1E1B64u) {
        ctx->pc = 0x1E1B68u;
        goto label_1e1b68;
    }
    ctx->pc = 0x1E1B60u;
    {
        const bool branch_taken_0x1e1b60 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x1e1b60) {
            ctx->pc = 0x1E1C4Cu;
            goto label_1e1c4c;
        }
    }
    ctx->pc = 0x1E1B68u;
label_1e1b68:
    // 0x1e1b68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e1b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1b6c:
    // 0x1e1b6c: 0xc05b420  jal         func_16D080
label_1e1b70:
    if (ctx->pc == 0x1E1B70u) {
        ctx->pc = 0x1E1B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B6Cu;
        // 0x1e1b70: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1B74u;
        goto label_1e1b74;
    }
    ctx->pc = 0x1E1B6Cu;
    SET_GPR_U32(ctx, 31, 0x1E1B74u);
    ctx->pc = 0x1E1B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1B6Cu;
    // 0x1e1b70: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1E1B6Cu, 0x1E1B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1B74u;
label_1e1b74:
    // 0x1e1b74: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1e1b74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1e1b78:
    // 0x1e1b78: 0x10000034  b           . + 4 + (0x34 << 2)
label_1e1b7c:
    if (ctx->pc == 0x1E1B7Cu) {
        ctx->pc = 0x1E1B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B78u;
        // 0x1e1b7c: 0xaf928d34  sw          $s2, -0x72CC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937908), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1B80u;
        goto label_1e1b80;
    }
    ctx->pc = 0x1E1B78u;
    {
        const bool branch_taken_0x1e1b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B78u;
        // 0x1e1b7c: 0xaf928d34  sw          $s2, -0x72CC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937908), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1b78) {
            ctx->pc = 0x1E1C4Cu;
            goto label_1e1c4c;
        }
    }
    ctx->pc = 0x1E1B80u;
label_1e1b80:
    // 0x1e1b80: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1e1b80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1e1b84:
    // 0x1e1b84: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1e1b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_1e1b88:
    // 0x1e1b88: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_1e1b8c:
    if (ctx->pc == 0x1E1B8Cu) {
        ctx->pc = 0x1E1B90u;
        goto label_1e1b90;
    }
    ctx->pc = 0x1E1B88u;
    {
        const bool branch_taken_0x1e1b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1b88) {
            ctx->pc = 0x1E1C4Cu;
            goto label_1e1c4c;
        }
    }
    ctx->pc = 0x1E1B90u;
label_1e1b90:
    // 0x1e1b90: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e1b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e1b94:
    // 0x1e1b94: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1e1b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1e1b98:
    // 0x1e1b98: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x1e1b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
label_1e1b9c:
    // 0x1e1b9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e1b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e1ba0:
    // 0x1e1ba0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e1ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e1ba4:
    // 0x1e1ba4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e1ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e1ba8:
    // 0x1e1ba8: 0x242082a  slt         $at, $s2, $v0
    ctx->pc = 0x1e1ba8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e1bac:
    // 0x1e1bac: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
label_1e1bb0:
    if (ctx->pc == 0x1E1BB0u) {
        ctx->pc = 0x1E1BB4u;
        goto label_1e1bb4;
    }
    ctx->pc = 0x1E1BACu;
    {
        const bool branch_taken_0x1e1bac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1bac) {
            ctx->pc = 0x1E1C4Cu;
            goto label_1e1c4c;
        }
    }
    ctx->pc = 0x1E1BB4u;
label_1e1bb4:
    // 0x1e1bb4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e1bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1bb8:
    // 0x1e1bb8: 0xc05b420  jal         func_16D080
label_1e1bbc:
    if (ctx->pc == 0x1E1BBCu) {
        ctx->pc = 0x1E1BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1BB8u;
        // 0x1e1bbc: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1BC0u;
        goto label_1e1bc0;
    }
    ctx->pc = 0x1E1BB8u;
    SET_GPR_U32(ctx, 31, 0x1E1BC0u);
    ctx->pc = 0x1E1BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1BB8u;
    // 0x1e1bbc: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1E1BB8u, 0x1E1BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1BC0u;
label_1e1bc0:
    // 0x1e1bc0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e1bc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1e1bc4:
    // 0x1e1bc4: 0x10000021  b           . + 4 + (0x21 << 2)
label_1e1bc8:
    if (ctx->pc == 0x1E1BC8u) {
        ctx->pc = 0x1E1BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1BC4u;
        // 0x1e1bc8: 0xaf928d34  sw          $s2, -0x72CC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937908), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1BCCu;
        goto label_1e1bcc;
    }
    ctx->pc = 0x1E1BC4u;
    {
        const bool branch_taken_0x1e1bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1BC4u;
        // 0x1e1bc8: 0xaf928d34  sw          $s2, -0x72CC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937908), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1bc4) {
            ctx->pc = 0x1E1C4Cu;
            goto label_1e1c4c;
        }
    }
    ctx->pc = 0x1E1BCCu;
label_1e1bcc:
    // 0x1e1bcc: 0x0  nop
    ctx->pc = 0x1e1bccu;
    // NOP
label_1e1bd0:
    // 0x1e1bd0: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e1bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e1bd4:
    // 0x1e1bd4: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x1e1bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1e1bd8:
    // 0x1e1bd8: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x1e1bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_1e1bdc:
    // 0x1e1bdc: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1e1bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1e1be0:
    // 0x1e1be0: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x1e1be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1e1be4:
    // 0x1e1be4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1e1be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e1be8:
    // 0x1e1be8: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e1be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e1bec:
    // 0x1e1bec: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_1e1bf0:
    if (ctx->pc == 0x1E1BF0u) {
        ctx->pc = 0x1E1BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1BECu;
        // 0x1e1bf0: 0xaf848dc0  sw          $a0, -0x7240($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938048), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1BF4u;
        goto label_1e1bf4;
    }
    ctx->pc = 0x1E1BECu;
    {
        const bool branch_taken_0x1e1bec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E1BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1BECu;
        // 0x1e1bf0: 0xaf848dc0  sw          $a0, -0x7240($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938048), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1bec) {
            ctx->pc = 0x1E1C18u;
            goto label_1e1c18;
        }
    }
    ctx->pc = 0x1E1BF4u;
label_1e1bf4:
    // 0x1e1bf4: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e1bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e1bf8:
    // 0x1e1bf8: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x1e1bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_1e1bfc:
    // 0x1e1bfc: 0x244226d0  addiu       $v0, $v0, 0x26D0
    ctx->pc = 0x1e1bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9936));
label_1e1c00:
    // 0x1e1c00: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1e1c00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1e1c04:
    // 0x1e1c04: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e1c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1e1c08:
    // 0x1e1c08: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1e1c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1e1c0c:
    // 0x1e1c0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e1c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e1c10:
    // 0x1e1c10: 0x1000000c  b           . + 4 + (0xC << 2)
label_1e1c14:
    if (ctx->pc == 0x1E1C14u) {
        ctx->pc = 0x1E1C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C10u;
        // 0x1e1c14: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1C18u;
        goto label_1e1c18;
    }
    ctx->pc = 0x1E1C10u;
    {
        const bool branch_taken_0x1e1c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C10u;
        // 0x1e1c14: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1c10) {
            ctx->pc = 0x1E1C44u;
            goto label_1e1c44;
        }
    }
    ctx->pc = 0x1E1C18u;
label_1e1c18:
    // 0x1e1c18: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_1e1c1c:
    // 0x1e1c1c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1e1c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1e1c20:
    // 0x1e1c20: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1e1c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1e1c24:
    // 0x1e1c24: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e1c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e1c28:
    // 0x1e1c28: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1e1c28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1e1c2c:
    // 0x1e1c2c: 0x244226d0  addiu       $v0, $v0, 0x26D0
    ctx->pc = 0x1e1c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9936));
label_1e1c30:
    // 0x1e1c30: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e1c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1e1c34:
    // 0x1e1c34: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1e1c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1e1c38:
    // 0x1e1c38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e1c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e1c3c:
    // 0x1e1c3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e1c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e1c40:
    // 0x1e1c40: 0x0  nop
    ctx->pc = 0x1e1c40u;
    // NOP
label_1e1c44:
    // 0x1e1c44: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e1c48:
    if (ctx->pc == 0x1E1C48u) {
        ctx->pc = 0x1E1C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C44u;
        // 0x1e1c48: 0xaf828dbc  sw          $v0, -0x7244($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938044), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1C4Cu;
        goto label_1e1c4c;
    }
    ctx->pc = 0x1E1C44u;
    {
        const bool branch_taken_0x1e1c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C44u;
        // 0x1e1c48: 0xaf828dbc  sw          $v0, -0x7244($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938044), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1c44) {
            ctx->pc = 0x1E1C5Cu;
            goto label_1e1c5c;
        }
    }
    ctx->pc = 0x1E1C4Cu;
label_1e1c4c:
    // 0x1e1c4c: 0xc078820  jal         func_1E2080
label_1e1c50:
    if (ctx->pc == 0x1E1C50u) {
        ctx->pc = 0x1E1C54u;
        goto label_1e1c54;
    }
    ctx->pc = 0x1E1C4Cu;
    SET_GPR_U32(ctx, 31, 0x1E1C54u);
    ctx->pc = 0x1E2080u;
    { ctx->pc = 0x1e2080; return; }
    ctx->pc = 0x1E1C54u;
label_1e1c54:
    // 0x1e1c54: 0x1000feed  b           . + 4 + (-0x113 << 2)
label_1e1c58:
    if (ctx->pc == 0x1E1C58u) {
        ctx->pc = 0x1E1C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C54u;
        // 0x1e1c58: 0x8f828db0  lw          $v0, -0x7250($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1C5Cu;
        goto label_1e1c5c;
    }
    ctx->pc = 0x1E1C54u;
    {
        const bool branch_taken_0x1e1c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C54u;
        // 0x1e1c58: 0x8f828db0  lw          $v0, -0x7250($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1c54) {
            ctx->pc = 0x1E180Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e180c;
        }
    }
    ctx->pc = 0x1E1C5Cu;
label_1e1c5c:
    // 0x1e1c5c: 0x0  nop
    ctx->pc = 0x1e1c5cu;
    // NOP
label_1e1c60:
    // 0x1e1c60: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1e1c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e1c64:
    // 0x1e1c64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1c68:
    // 0x1e1c68: 0xc04e188  jal         func_138620
label_1e1c6c:
    if (ctx->pc == 0x1E1C6Cu) {
        ctx->pc = 0x1E1C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C68u;
        // 0x1e1c6c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1C70u;
        goto label_1e1c70;
    }
    ctx->pc = 0x1E1C68u;
    SET_GPR_U32(ctx, 31, 0x1E1C70u);
    ctx->pc = 0x1E1C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1C68u;
    // 0x1e1c6c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x1E1C68u, 0x1E1C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1C70u;
label_1e1c70:
    // 0x1e1c70: 0xc04e198  jal         func_138660
label_1e1c74:
    if (ctx->pc == 0x1E1C74u) {
        ctx->pc = 0x1E1C78u;
        goto label_1e1c78;
    }
    ctx->pc = 0x1E1C70u;
    SET_GPR_U32(ctx, 31, 0x1E1C78u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x1E1C70u, 0x1E1C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1C78u;
label_1e1c78:
    // 0x1e1c78: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1e1c7c:
    if (ctx->pc == 0x1E1C7Cu) {
        ctx->pc = 0x1E1C80u;
        goto label_1e1c80;
    }
    ctx->pc = 0x1E1C78u;
    {
        const bool branch_taken_0x1e1c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1c78) {
            ctx->pc = 0x1E1CA8u;
            goto label_1e1ca8;
        }
    }
    ctx->pc = 0x1E1C80u;
label_1e1c80:
    // 0x1e1c80: 0xc078820  jal         func_1E2080
label_1e1c84:
    if (ctx->pc == 0x1E1C84u) {
        ctx->pc = 0x1E1C88u;
        goto label_1e1c88;
    }
    ctx->pc = 0x1E1C80u;
    SET_GPR_U32(ctx, 31, 0x1E1C88u);
    ctx->pc = 0x1E2080u;
    { ctx->pc = 0x1e2080; return; }
    ctx->pc = 0x1E1C88u;
label_1e1c88:
    // 0x1e1c88: 0xc04e198  jal         func_138660
label_1e1c8c:
    if (ctx->pc == 0x1E1C8Cu) {
        ctx->pc = 0x1E1C90u;
        goto label_1e1c90;
    }
    ctx->pc = 0x1E1C88u;
    SET_GPR_U32(ctx, 31, 0x1E1C90u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x1E1C88u, 0x1E1C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1C90u;
label_1e1c90:
    // 0x1e1c90: 0x0  nop
    ctx->pc = 0x1e1c90u;
    // NOP
label_1e1c94:
    // 0x1e1c94: 0x0  nop
    ctx->pc = 0x1e1c94u;
    // NOP
label_1e1c98:
    // 0x1e1c98: 0x0  nop
    ctx->pc = 0x1e1c98u;
    // NOP
label_1e1c9c:
    // 0x1e1c9c: 0x0  nop
    ctx->pc = 0x1e1c9cu;
    // NOP
label_1e1ca0:
    // 0x1e1ca0: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
label_1e1ca4:
    if (ctx->pc == 0x1E1CA4u) {
        ctx->pc = 0x1E1CA8u;
        goto label_1e1ca8;
    }
    ctx->pc = 0x1E1CA0u;
    {
        const bool branch_taken_0x1e1ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1ca0) {
            ctx->pc = 0x1E1C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1c80;
        }
    }
    ctx->pc = 0x1E1CA8u;
label_1e1ca8:
    // 0x1e1ca8: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x1e1ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_1e1cac:
    // 0x1e1cac: 0x8c23ccf8  lw          $v1, -0x3308($at)
    ctx->pc = 0x1e1cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954232)));
label_1e1cb0:
    // 0x1e1cb0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1e1cb4:
    if (ctx->pc == 0x1E1CB4u) {
        ctx->pc = 0x1E1CB8u;
        goto label_1e1cb8;
    }
    ctx->pc = 0x1E1CB0u;
    {
        const bool branch_taken_0x1e1cb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1cb0) {
            ctx->pc = 0x1E1CE8u;
            goto label_1e1ce8;
        }
    }
    ctx->pc = 0x1E1CB8u;
label_1e1cb8:
    // 0x1e1cb8: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x1e1cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1e1cbc:
    // 0x1e1cbc: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x1e1cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e1cc0:
    // 0x1e1cc0: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
label_1e1cc4:
    if (ctx->pc == 0x1E1CC4u) {
        ctx->pc = 0x1E1CC8u;
        goto label_1e1cc8;
    }
    ctx->pc = 0x1E1CC0u;
    {
        const bool branch_taken_0x1e1cc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e1cc0) {
            ctx->pc = 0x1E1CE8u;
            goto label_1e1ce8;
        }
    }
    ctx->pc = 0x1E1CC8u;
label_1e1cc8:
    // 0x1e1cc8: 0x8f848dc0  lw          $a0, -0x7240($gp)
    ctx->pc = 0x1e1cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938048)));
label_1e1ccc:
    // 0x1e1ccc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1e1cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1e1cd0:
    // 0x1e1cd0: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_1e1cd4:
    if (ctx->pc == 0x1E1CD4u) {
        ctx->pc = 0x1E1CD8u;
        goto label_1e1cd8;
    }
    ctx->pc = 0x1E1CD0u;
    {
        const bool branch_taken_0x1e1cd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e1cd0) {
            ctx->pc = 0x1E1CE8u;
            goto label_1e1ce8;
        }
    }
    ctx->pc = 0x1E1CD8u;
label_1e1cd8:
    // 0x1e1cd8: 0x8f848dbc  lw          $a0, -0x7244($gp)
    ctx->pc = 0x1e1cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938044)));
label_1e1cdc:
    // 0x1e1cdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e1cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1ce0:
    // 0x1e1ce0: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
label_1e1ce4:
    if (ctx->pc == 0x1E1CE4u) {
        ctx->pc = 0x1E1CE8u;
        goto label_1e1ce8;
    }
    ctx->pc = 0x1E1CE0u;
    {
        const bool branch_taken_0x1e1ce0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e1ce0) {
            ctx->pc = 0x1E1CECu;
            goto label_1e1cec;
        }
    }
    ctx->pc = 0x1E1CE8u;
label_1e1ce8:
    // 0x1e1ce8: 0xaf808db4  sw          $zero, -0x724C($gp)
    ctx->pc = 0x1e1ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938036), GPR_U32(ctx, 0));
label_1e1cec:
    // 0x1e1cec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e1cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e1cf0:
    // 0x1e1cf0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e1cf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e1cf4:
    // 0x1e1cf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e1cf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1cf8:
    // 0x1e1cf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1cf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1cfc:
    // 0x1e1cfc: 0x3e00008  jr          $ra
label_1e1d00:
    if (ctx->pc == 0x1E1D00u) {
        ctx->pc = 0x1E1D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1CFCu;
        // 0x1e1d00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1D04u;
        goto label_1e1d04;
    }
    ctx->pc = 0x1E1CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1CFCu;
        // 0x1e1d00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1D04u;
label_1e1d04:
    // 0x1e1d04: 0x0  nop
    ctx->pc = 0x1e1d04u;
    // NOP
label_1e1d08:
    // 0x1e1d08: 0x0  nop
    ctx->pc = 0x1e1d08u;
    // NOP
label_1e1d0c:
    // 0x1e1d0c: 0x0  nop
    ctx->pc = 0x1e1d0cu;
    // NOP
label_1e1d10:
    // 0x1e1d10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e1d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1e1d14:
    // 0x1e1d14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1d18:
    // 0x1e1d18: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e1d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1e1d1c:
    // 0x1e1d1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e1d1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1d20:
    // 0x1e1d20: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e1d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1e1d24:
    // 0x1e1d24: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e1d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e1d28:
    // 0x1e1d28: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1e1d28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e1d2c:
    // 0x1e1d2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e1d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e1d30:
    // 0x1e1d30: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1e1d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e1d34:
    // 0x1e1d34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e1d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e1d38:
    // 0x1e1d38: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e1d38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1d3c:
    // 0x1e1d3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e1d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e1d40:
    // 0x1e1d40: 0xc04e188  jal         func_138620
label_1e1d44:
    if (ctx->pc == 0x1E1D44u) {
        ctx->pc = 0x1E1D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D40u;
        // 0x1e1d44: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1D48u;
        goto label_1e1d48;
    }
    ctx->pc = 0x1E1D40u;
    SET_GPR_U32(ctx, 31, 0x1E1D48u);
    ctx->pc = 0x1E1D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1D40u;
    // 0x1e1d44: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x1E1D40u, 0x1E1D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1D48u;
label_1e1d48:
    // 0x1e1d48: 0x2412000a  addiu       $s2, $zero, 0xA
    ctx->pc = 0x1e1d48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e1d4c:
    // 0x1e1d4c: 0x1660000c  bnez        $s3, . + 4 + (0xC << 2)
label_1e1d50:
    if (ctx->pc == 0x1E1D50u) {
        ctx->pc = 0x1E1D54u;
        goto label_1e1d54;
    }
    ctx->pc = 0x1E1D4Cu;
    {
        const bool branch_taken_0x1e1d4c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1d4c) {
            ctx->pc = 0x1E1D80u;
            { ctx->pc = 0x1e1d80; return; }
        }
    }
    ctx->pc = 0x1E1D54u;
label_1e1d54:
    // 0x1e1d54: 0xc04e198  jal         func_138660
label_1e1d58:
    if (ctx->pc == 0x1E1D58u) {
        ctx->pc = 0x1E1D5Cu;
        goto label_1e1d5c;
    }
    ctx->pc = 0x1E1D54u;
    SET_GPR_U32(ctx, 31, 0x1E1D5Cu);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x1E1D54u, 0x1E1D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1D5Cu;
label_1e1d5c:
    // 0x1e1d5c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1e1d60:
    if (ctx->pc == 0x1E1D60u) {
        ctx->pc = 0x1E1D64u;
        goto label_1e1d64;
    }
    ctx->pc = 0x1E1D5Cu;
    {
        const bool branch_taken_0x1e1d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1d5c) {
            ctx->pc = 0x1E1D80u;
            { ctx->pc = 0x1e1d80; return; }
        }
    }
    ctx->pc = 0x1E1D64u;
label_1e1d64:
    // 0x1e1d64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1e1d68u;
    return;
}
