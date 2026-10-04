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


void FUN_0014eba0_part236(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x1c19d0u: goto label_1c19d0;
        case 0x1c19d4u: goto label_1c19d4;
        case 0x1c19d8u: goto label_1c19d8;
        case 0x1c19dcu: goto label_1c19dc;
        case 0x1c19e0u: goto label_1c19e0;
        case 0x1c19e4u: goto label_1c19e4;
        case 0x1c19e8u: goto label_1c19e8;
        case 0x1c19ecu: goto label_1c19ec;
        case 0x1c19f0u: goto label_1c19f0;
        case 0x1c19f4u: goto label_1c19f4;
        case 0x1c19f8u: goto label_1c19f8;
        case 0x1c19fcu: goto label_1c19fc;
        case 0x1c1a00u: goto label_1c1a00;
        case 0x1c1a04u: goto label_1c1a04;
        case 0x1c1a08u: goto label_1c1a08;
        case 0x1c1a0cu: goto label_1c1a0c;
        case 0x1c1a10u: goto label_1c1a10;
        case 0x1c1a14u: goto label_1c1a14;
        case 0x1c1a18u: goto label_1c1a18;
        case 0x1c1a1cu: goto label_1c1a1c;
        case 0x1c1a20u: goto label_1c1a20;
        case 0x1c1a24u: goto label_1c1a24;
        case 0x1c1a28u: goto label_1c1a28;
        case 0x1c1a2cu: goto label_1c1a2c;
        case 0x1c1a30u: goto label_1c1a30;
        case 0x1c1a34u: goto label_1c1a34;
        case 0x1c1a38u: goto label_1c1a38;
        case 0x1c1a3cu: goto label_1c1a3c;
        case 0x1c1a40u: goto label_1c1a40;
        case 0x1c1a44u: goto label_1c1a44;
        case 0x1c1a48u: goto label_1c1a48;
        case 0x1c1a4cu: goto label_1c1a4c;
        case 0x1c1a50u: goto label_1c1a50;
        case 0x1c1a54u: goto label_1c1a54;
        case 0x1c1a58u: goto label_1c1a58;
        case 0x1c1a5cu: goto label_1c1a5c;
        case 0x1c1a60u: goto label_1c1a60;
        case 0x1c1a64u: goto label_1c1a64;
        case 0x1c1a68u: goto label_1c1a68;
        case 0x1c1a6cu: goto label_1c1a6c;
        case 0x1c1a70u: goto label_1c1a70;
        case 0x1c1a74u: goto label_1c1a74;
        case 0x1c1a78u: goto label_1c1a78;
        case 0x1c1a7cu: goto label_1c1a7c;
        case 0x1c1a80u: goto label_1c1a80;
        case 0x1c1a84u: goto label_1c1a84;
        case 0x1c1a88u: goto label_1c1a88;
        case 0x1c1a8cu: goto label_1c1a8c;
        case 0x1c1a90u: goto label_1c1a90;
        case 0x1c1a94u: goto label_1c1a94;
        case 0x1c1a98u: goto label_1c1a98;
        case 0x1c1a9cu: goto label_1c1a9c;
        case 0x1c1aa0u: goto label_1c1aa0;
        case 0x1c1aa4u: goto label_1c1aa4;
        case 0x1c1aa8u: goto label_1c1aa8;
        case 0x1c1aacu: goto label_1c1aac;
        case 0x1c1ab0u: goto label_1c1ab0;
        case 0x1c1ab4u: goto label_1c1ab4;
        case 0x1c1ab8u: goto label_1c1ab8;
        case 0x1c1abcu: goto label_1c1abc;
        case 0x1c1ac0u: goto label_1c1ac0;
        case 0x1c1ac4u: goto label_1c1ac4;
        case 0x1c1ac8u: goto label_1c1ac8;
        case 0x1c1accu: goto label_1c1acc;
        case 0x1c1ad0u: goto label_1c1ad0;
        case 0x1c1ad4u: goto label_1c1ad4;
        case 0x1c1ad8u: goto label_1c1ad8;
        case 0x1c1adcu: goto label_1c1adc;
        case 0x1c1ae0u: goto label_1c1ae0;
        case 0x1c1ae4u: goto label_1c1ae4;
        case 0x1c1ae8u: goto label_1c1ae8;
        case 0x1c1aecu: goto label_1c1aec;
        case 0x1c1af0u: goto label_1c1af0;
        case 0x1c1af4u: goto label_1c1af4;
        case 0x1c1af8u: goto label_1c1af8;
        case 0x1c1afcu: goto label_1c1afc;
        case 0x1c1b00u: goto label_1c1b00;
        case 0x1c1b04u: goto label_1c1b04;
        case 0x1c1b08u: goto label_1c1b08;
        case 0x1c1b0cu: goto label_1c1b0c;
        case 0x1c1b10u: goto label_1c1b10;
        case 0x1c1b14u: goto label_1c1b14;
        case 0x1c1b18u: goto label_1c1b18;
        case 0x1c1b1cu: goto label_1c1b1c;
        case 0x1c1b20u: goto label_1c1b20;
        case 0x1c1b24u: goto label_1c1b24;
        case 0x1c1b28u: goto label_1c1b28;
        case 0x1c1b2cu: goto label_1c1b2c;
        case 0x1c1b30u: goto label_1c1b30;
        case 0x1c1b34u: goto label_1c1b34;
        case 0x1c1b38u: goto label_1c1b38;
        case 0x1c1b3cu: goto label_1c1b3c;
        case 0x1c1b40u: goto label_1c1b40;
        case 0x1c1b44u: goto label_1c1b44;
        case 0x1c1b48u: goto label_1c1b48;
        case 0x1c1b4cu: goto label_1c1b4c;
        case 0x1c1b50u: goto label_1c1b50;
        case 0x1c1b54u: goto label_1c1b54;
        case 0x1c1b58u: goto label_1c1b58;
        case 0x1c1b5cu: goto label_1c1b5c;
        case 0x1c1b60u: goto label_1c1b60;
        case 0x1c1b64u: goto label_1c1b64;
        case 0x1c1b68u: goto label_1c1b68;
        case 0x1c1b6cu: goto label_1c1b6c;
        case 0x1c1b70u: goto label_1c1b70;
        case 0x1c1b74u: goto label_1c1b74;
        case 0x1c1b78u: goto label_1c1b78;
        case 0x1c1b7cu: goto label_1c1b7c;
        case 0x1c1b80u: goto label_1c1b80;
        case 0x1c1b84u: goto label_1c1b84;
        case 0x1c1b88u: goto label_1c1b88;
        case 0x1c1b8cu: goto label_1c1b8c;
        case 0x1c1b90u: goto label_1c1b90;
        case 0x1c1b94u: goto label_1c1b94;
        case 0x1c1b98u: goto label_1c1b98;
        case 0x1c1b9cu: goto label_1c1b9c;
        case 0x1c1ba0u: goto label_1c1ba0;
        case 0x1c1ba4u: goto label_1c1ba4;
        case 0x1c1ba8u: goto label_1c1ba8;
        case 0x1c1bacu: goto label_1c1bac;
        case 0x1c1bb0u: goto label_1c1bb0;
        case 0x1c1bb4u: goto label_1c1bb4;
        case 0x1c1bb8u: goto label_1c1bb8;
        case 0x1c1bbcu: goto label_1c1bbc;
        case 0x1c1bc0u: goto label_1c1bc0;
        case 0x1c1bc4u: goto label_1c1bc4;
        case 0x1c1bc8u: goto label_1c1bc8;
        case 0x1c1bccu: goto label_1c1bcc;
        case 0x1c1bd0u: goto label_1c1bd0;
        case 0x1c1bd4u: goto label_1c1bd4;
        case 0x1c1bd8u: goto label_1c1bd8;
        case 0x1c1bdcu: goto label_1c1bdc;
        case 0x1c1be0u: goto label_1c1be0;
        case 0x1c1be4u: goto label_1c1be4;
        case 0x1c1be8u: goto label_1c1be8;
        case 0x1c1becu: goto label_1c1bec;
        case 0x1c1bf0u: goto label_1c1bf0;
        case 0x1c1bf4u: goto label_1c1bf4;
        case 0x1c1bf8u: goto label_1c1bf8;
        case 0x1c1bfcu: goto label_1c1bfc;
        case 0x1c1c00u: goto label_1c1c00;
        case 0x1c1c04u: goto label_1c1c04;
        case 0x1c1c08u: goto label_1c1c08;
        case 0x1c1c0cu: goto label_1c1c0c;
        case 0x1c1c10u: goto label_1c1c10;
        case 0x1c1c14u: goto label_1c1c14;
        case 0x1c1c18u: goto label_1c1c18;
        case 0x1c1c1cu: goto label_1c1c1c;
        case 0x1c1c20u: goto label_1c1c20;
        case 0x1c1c24u: goto label_1c1c24;
        case 0x1c1c28u: goto label_1c1c28;
        case 0x1c1c2cu: goto label_1c1c2c;
        case 0x1c1c30u: goto label_1c1c30;
        case 0x1c1c34u: goto label_1c1c34;
        case 0x1c1c38u: goto label_1c1c38;
        case 0x1c1c3cu: goto label_1c1c3c;
        case 0x1c1c40u: goto label_1c1c40;
        case 0x1c1c44u: goto label_1c1c44;
        case 0x1c1c48u: goto label_1c1c48;
        case 0x1c1c4cu: goto label_1c1c4c;
        case 0x1c1c50u: goto label_1c1c50;
        case 0x1c1c54u: goto label_1c1c54;
        case 0x1c1c58u: goto label_1c1c58;
        case 0x1c1c5cu: goto label_1c1c5c;
        case 0x1c1c60u: goto label_1c1c60;
        case 0x1c1c64u: goto label_1c1c64;
        case 0x1c1c68u: goto label_1c1c68;
        case 0x1c1c6cu: goto label_1c1c6c;
        case 0x1c1c70u: goto label_1c1c70;
        case 0x1c1c74u: goto label_1c1c74;
        case 0x1c1c78u: goto label_1c1c78;
        case 0x1c1c7cu: goto label_1c1c7c;
        case 0x1c1c80u: goto label_1c1c80;
        case 0x1c1c84u: goto label_1c1c84;
        case 0x1c1c88u: goto label_1c1c88;
        case 0x1c1c8cu: goto label_1c1c8c;
        case 0x1c1c90u: goto label_1c1c90;
        case 0x1c1c94u: goto label_1c1c94;
        case 0x1c1c98u: goto label_1c1c98;
        case 0x1c1c9cu: goto label_1c1c9c;
        case 0x1c1ca0u: goto label_1c1ca0;
        case 0x1c1ca4u: goto label_1c1ca4;
        case 0x1c1ca8u: goto label_1c1ca8;
        case 0x1c1cacu: goto label_1c1cac;
        case 0x1c1cb0u: goto label_1c1cb0;
        case 0x1c1cb4u: goto label_1c1cb4;
        case 0x1c1cb8u: goto label_1c1cb8;
        case 0x1c1cbcu: goto label_1c1cbc;
        case 0x1c1cc0u: goto label_1c1cc0;
        case 0x1c1cc4u: goto label_1c1cc4;
        case 0x1c1cc8u: goto label_1c1cc8;
        case 0x1c1cccu: goto label_1c1ccc;
        case 0x1c1cd0u: goto label_1c1cd0;
        case 0x1c1cd4u: goto label_1c1cd4;
        case 0x1c1cd8u: goto label_1c1cd8;
        case 0x1c1cdcu: goto label_1c1cdc;
        case 0x1c1ce0u: goto label_1c1ce0;
        case 0x1c1ce4u: goto label_1c1ce4;
        case 0x1c1ce8u: goto label_1c1ce8;
        case 0x1c1cecu: goto label_1c1cec;
        case 0x1c1cf0u: goto label_1c1cf0;
        case 0x1c1cf4u: goto label_1c1cf4;
        case 0x1c1cf8u: goto label_1c1cf8;
        case 0x1c1cfcu: goto label_1c1cfc;
        case 0x1c1d00u: goto label_1c1d00;
        case 0x1c1d04u: goto label_1c1d04;
        case 0x1c1d08u: goto label_1c1d08;
        case 0x1c1d0cu: goto label_1c1d0c;
        case 0x1c1d10u: goto label_1c1d10;
        case 0x1c1d14u: goto label_1c1d14;
        case 0x1c1d18u: goto label_1c1d18;
        case 0x1c1d1cu: goto label_1c1d1c;
        case 0x1c1d20u: goto label_1c1d20;
        case 0x1c1d24u: goto label_1c1d24;
        case 0x1c1d28u: goto label_1c1d28;
        case 0x1c1d2cu: goto label_1c1d2c;
        case 0x1c1d30u: goto label_1c1d30;
        case 0x1c1d34u: goto label_1c1d34;
        case 0x1c1d38u: goto label_1c1d38;
        case 0x1c1d3cu: goto label_1c1d3c;
        case 0x1c1d40u: goto label_1c1d40;
        case 0x1c1d44u: goto label_1c1d44;
        case 0x1c1d48u: goto label_1c1d48;
        case 0x1c1d4cu: goto label_1c1d4c;
        case 0x1c1d50u: goto label_1c1d50;
        case 0x1c1d54u: goto label_1c1d54;
        case 0x1c1d58u: goto label_1c1d58;
        case 0x1c1d5cu: goto label_1c1d5c;
        case 0x1c1d60u: goto label_1c1d60;
        case 0x1c1d64u: goto label_1c1d64;
        case 0x1c1d68u: goto label_1c1d68;
        case 0x1c1d6cu: goto label_1c1d6c;
        case 0x1c1d70u: goto label_1c1d70;
        case 0x1c1d74u: goto label_1c1d74;
        case 0x1c1d78u: goto label_1c1d78;
        case 0x1c1d7cu: goto label_1c1d7c;
        case 0x1c1d80u: goto label_1c1d80;
        case 0x1c1d84u: goto label_1c1d84;
        case 0x1c1d88u: goto label_1c1d88;
        case 0x1c1d8cu: goto label_1c1d8c;
        case 0x1c1d90u: goto label_1c1d90;
        case 0x1c1d94u: goto label_1c1d94;
        case 0x1c1d98u: goto label_1c1d98;
        case 0x1c1d9cu: goto label_1c1d9c;
        case 0x1c1da0u: goto label_1c1da0;
        case 0x1c1da4u: goto label_1c1da4;
        case 0x1c1da8u: goto label_1c1da8;
        case 0x1c1dacu: goto label_1c1dac;
        case 0x1c1db0u: goto label_1c1db0;
        case 0x1c1db4u: goto label_1c1db4;
        case 0x1c1db8u: goto label_1c1db8;
        case 0x1c1dbcu: goto label_1c1dbc;
        case 0x1c1dc0u: goto label_1c1dc0;
        case 0x1c1dc4u: goto label_1c1dc4;
        case 0x1c1dc8u: goto label_1c1dc8;
        case 0x1c1dccu: goto label_1c1dcc;
        case 0x1c1dd0u: goto label_1c1dd0;
        case 0x1c1dd4u: goto label_1c1dd4;
        case 0x1c1dd8u: goto label_1c1dd8;
        case 0x1c1ddcu: goto label_1c1ddc;
        case 0x1c1de0u: goto label_1c1de0;
        case 0x1c1de4u: goto label_1c1de4;
        case 0x1c1de8u: goto label_1c1de8;
        case 0x1c1decu: goto label_1c1dec;
        case 0x1c1df0u: goto label_1c1df0;
        case 0x1c1df4u: goto label_1c1df4;
        case 0x1c1df8u: goto label_1c1df8;
        case 0x1c1dfcu: goto label_1c1dfc;
        case 0x1c1e00u: goto label_1c1e00;
        case 0x1c1e04u: goto label_1c1e04;
        case 0x1c1e08u: goto label_1c1e08;
        case 0x1c1e0cu: goto label_1c1e0c;
        case 0x1c1e10u: goto label_1c1e10;
        case 0x1c1e14u: goto label_1c1e14;
        case 0x1c1e18u: goto label_1c1e18;
        case 0x1c1e1cu: goto label_1c1e1c;
        case 0x1c1e20u: goto label_1c1e20;
        case 0x1c1e24u: goto label_1c1e24;
        case 0x1c1e28u: goto label_1c1e28;
        case 0x1c1e2cu: goto label_1c1e2c;
        case 0x1c1e30u: goto label_1c1e30;
        case 0x1c1e34u: goto label_1c1e34;
        case 0x1c1e38u: goto label_1c1e38;
        case 0x1c1e3cu: goto label_1c1e3c;
        case 0x1c1e40u: goto label_1c1e40;
        case 0x1c1e44u: goto label_1c1e44;
        case 0x1c1e48u: goto label_1c1e48;
        case 0x1c1e4cu: goto label_1c1e4c;
        case 0x1c1e50u: goto label_1c1e50;
        case 0x1c1e54u: goto label_1c1e54;
        case 0x1c1e58u: goto label_1c1e58;
        case 0x1c1e5cu: goto label_1c1e5c;
        case 0x1c1e60u: goto label_1c1e60;
        case 0x1c1e64u: goto label_1c1e64;
        case 0x1c1e68u: goto label_1c1e68;
        case 0x1c1e6cu: goto label_1c1e6c;
        case 0x1c1e70u: goto label_1c1e70;
        case 0x1c1e74u: goto label_1c1e74;
        case 0x1c1e78u: goto label_1c1e78;
        case 0x1c1e7cu: goto label_1c1e7c;
        case 0x1c1e80u: goto label_1c1e80;
        case 0x1c1e84u: goto label_1c1e84;
        case 0x1c1e88u: goto label_1c1e88;
        case 0x1c1e8cu: goto label_1c1e8c;
        case 0x1c1e90u: goto label_1c1e90;
        case 0x1c1e94u: goto label_1c1e94;
        case 0x1c1e98u: goto label_1c1e98;
        case 0x1c1e9cu: goto label_1c1e9c;
        case 0x1c1ea0u: goto label_1c1ea0;
        case 0x1c1ea4u: goto label_1c1ea4;
        case 0x1c1ea8u: goto label_1c1ea8;
        case 0x1c1eacu: goto label_1c1eac;
        case 0x1c1eb0u: goto label_1c1eb0;
        case 0x1c1eb4u: goto label_1c1eb4;
        case 0x1c1eb8u: goto label_1c1eb8;
        case 0x1c1ebcu: goto label_1c1ebc;
        case 0x1c1ec0u: goto label_1c1ec0;
        case 0x1c1ec4u: goto label_1c1ec4;
        case 0x1c1ec8u: goto label_1c1ec8;
        case 0x1c1eccu: goto label_1c1ecc;
        case 0x1c1ed0u: goto label_1c1ed0;
        case 0x1c1ed4u: goto label_1c1ed4;
        case 0x1c1ed8u: goto label_1c1ed8;
        case 0x1c1edcu: goto label_1c1edc;
        case 0x1c1ee0u: goto label_1c1ee0;
        case 0x1c1ee4u: goto label_1c1ee4;
        case 0x1c1ee8u: goto label_1c1ee8;
        case 0x1c1eecu: goto label_1c1eec;
        case 0x1c1ef0u: goto label_1c1ef0;
        case 0x1c1ef4u: goto label_1c1ef4;
        case 0x1c1ef8u: goto label_1c1ef8;
        case 0x1c1efcu: goto label_1c1efc;
        case 0x1c1f00u: goto label_1c1f00;
        case 0x1c1f04u: goto label_1c1f04;
        case 0x1c1f08u: goto label_1c1f08;
        case 0x1c1f0cu: goto label_1c1f0c;
        case 0x1c1f10u: goto label_1c1f10;
        case 0x1c1f14u: goto label_1c1f14;
        case 0x1c1f18u: goto label_1c1f18;
        case 0x1c1f1cu: goto label_1c1f1c;
        case 0x1c1f20u: goto label_1c1f20;
        case 0x1c1f24u: goto label_1c1f24;
        case 0x1c1f28u: goto label_1c1f28;
        case 0x1c1f2cu: goto label_1c1f2c;
        case 0x1c1f30u: goto label_1c1f30;
        case 0x1c1f34u: goto label_1c1f34;
        case 0x1c1f38u: goto label_1c1f38;
        case 0x1c1f3cu: goto label_1c1f3c;
        case 0x1c1f40u: goto label_1c1f40;
        case 0x1c1f44u: goto label_1c1f44;
        case 0x1c1f48u: goto label_1c1f48;
        case 0x1c1f4cu: goto label_1c1f4c;
        case 0x1c1f50u: goto label_1c1f50;
        case 0x1c1f54u: goto label_1c1f54;
        case 0x1c1f58u: goto label_1c1f58;
        case 0x1c1f5cu: goto label_1c1f5c;
        default: return;
    }

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
    { ctx->pc = 0x1788d0; return; }
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
            goto label_1c1aac;
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
            goto label_1c1a60;
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
            goto label_1c1a00;
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
            goto label_1c19e4;
        }
    }
    ctx->pc = 0x1C19CCu;
label_1c19cc:
    // 0x1c19cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1c19ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1c19d0:
    // 0x1c19d0: 0xa04300d3  sb          $v1, 0xD3($v0)
    ctx->pc = 0x1c19d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 211), (uint8_t)GPR_U32(ctx, 3));
label_1c19d4:
    // 0x1c19d4: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1c19d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_1c19d8:
    // 0x1c19d8: 0xa04300bb  sb          $v1, 0xBB($v0)
    ctx->pc = 0x1c19d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 187), (uint8_t)GPR_U32(ctx, 3));
label_1c19dc:
    // 0x1c19dc: 0xa04300a3  sb          $v1, 0xA3($v0)
    ctx->pc = 0x1c19dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 163), (uint8_t)GPR_U32(ctx, 3));
label_1c19e0:
    // 0x1c19e0: 0xa043008b  sb          $v1, 0x8B($v0)
    ctx->pc = 0x1c19e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 139), (uint8_t)GPR_U32(ctx, 3));
label_1c19e4:
    // 0x1c19e4: 0x0  nop
    ctx->pc = 0x1c19e4u;
    // NOP
label_1c19e8:
    // 0x1c19e8: 0x8f828924  lw          $v0, -0x76DC($gp)
    ctx->pc = 0x1c19e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936868)));
label_1c19ec:
    // 0x1c19ec: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1c19ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1c19f0:
    // 0x1c19f0: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1c19f4:
    if (ctx->pc == 0x1C19F4u) {
        ctx->pc = 0x1C19F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C19F0u;
        // 0x1c19f4: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C19F8u;
        goto label_1c19f8;
    }
    ctx->pc = 0x1C19F0u;
    {
        const bool branch_taken_0x1c19f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C19F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C19F0u;
        // 0x1c19f4: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c19f0) {
            ctx->pc = 0x1C19CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c19cc;
        }
    }
    ctx->pc = 0x1C19F8u;
label_1c19f8:
    // 0x1c19f8: 0x10000019  b           . + 4 + (0x19 << 2)
label_1c19fc:
    if (ctx->pc == 0x1C19FCu) {
        ctx->pc = 0x1C1A00u;
        goto label_1c1a00;
    }
    ctx->pc = 0x1C19F8u;
    {
        const bool branch_taken_0x1c19f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c19f8) {
            ctx->pc = 0x1C1A60u;
            goto label_1c1a60;
        }
    }
    ctx->pc = 0x1C1A00u;
label_1c1a00:
    // 0x1c1a00: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c1a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c1a04:
    // 0x1c1a04: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_1c1a08:
    if (ctx->pc == 0x1C1A08u) {
        ctx->pc = 0x1C1A0Cu;
        goto label_1c1a0c;
    }
    ctx->pc = 0x1C1A04u;
    {
        const bool branch_taken_0x1c1a04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c1a04) {
            ctx->pc = 0x1C1A60u;
            goto label_1c1a60;
        }
    }
    ctx->pc = 0x1C1A0Cu;
label_1c1a0c:
    // 0x1c1a0c: 0x8f82892c  lw          $v0, -0x76D4($gp)
    ctx->pc = 0x1c1a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936876)));
label_1c1a10:
    // 0x1c1a10: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1c1a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1c1a14:
    // 0x1c1a14: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1c1a18:
    if (ctx->pc == 0x1C1A18u) {
        ctx->pc = 0x1C1A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A14u;
        // 0x1c1a18: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1A1Cu;
        goto label_1c1a1c;
    }
    ctx->pc = 0x1C1A14u;
    {
        const bool branch_taken_0x1c1a14 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1C1A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A14u;
        // 0x1c1a18: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a14) {
            ctx->pc = 0x1C1A24u;
            goto label_1c1a24;
        }
    }
    ctx->pc = 0x1C1A1Cu;
label_1c1a1c:
    // 0x1c1a1c: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x1c1a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_1c1a20:
    // 0x1c1a20: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x1c1a20u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_1c1a24:
    // 0x1c1a24: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1c1a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c1a28:
    // 0x1c1a28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1a2c:
    // 0x1c1a2c: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x1c1a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c1a30:
    // 0x1c1a30: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c1a34:
    if (ctx->pc == 0x1C1A34u) {
        ctx->pc = 0x1C1A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A30u;
        // 0x1c1a34: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1A38u;
        goto label_1c1a38;
    }
    ctx->pc = 0x1C1A30u;
    {
        const bool branch_taken_0x1c1a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A30u;
        // 0x1c1a34: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a30) {
            ctx->pc = 0x1C1A50u;
            goto label_1c1a50;
        }
    }
    ctx->pc = 0x1C1A38u;
label_1c1a38:
    // 0x1c1a38: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c1a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1c1a3c:
    // 0x1c1a3c: 0xa04400d3  sb          $a0, 0xD3($v0)
    ctx->pc = 0x1c1a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 211), (uint8_t)GPR_U32(ctx, 4));
label_1c1a40:
    // 0x1c1a40: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x1c1a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_1c1a44:
    // 0x1c1a44: 0xa04400bb  sb          $a0, 0xBB($v0)
    ctx->pc = 0x1c1a44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 187), (uint8_t)GPR_U32(ctx, 4));
label_1c1a48:
    // 0x1c1a48: 0xa04400a3  sb          $a0, 0xA3($v0)
    ctx->pc = 0x1c1a48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 163), (uint8_t)GPR_U32(ctx, 4));
label_1c1a4c:
    // 0x1c1a4c: 0xa044008b  sb          $a0, 0x8B($v0)
    ctx->pc = 0x1c1a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 139), (uint8_t)GPR_U32(ctx, 4));
label_1c1a50:
    // 0x1c1a50: 0x8f828924  lw          $v0, -0x76DC($gp)
    ctx->pc = 0x1c1a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936868)));
label_1c1a54:
    // 0x1c1a54: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1c1a54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1c1a58:
    // 0x1c1a58: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1c1a5c:
    if (ctx->pc == 0x1C1A5Cu) {
        ctx->pc = 0x1C1A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A58u;
        // 0x1c1a5c: 0x2231021  addu        $v0, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1A60u;
        goto label_1c1a60;
    }
    ctx->pc = 0x1C1A58u;
    {
        const bool branch_taken_0x1c1a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A58u;
        // 0x1c1a5c: 0x2231021  addu        $v0, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a58) {
            ctx->pc = 0x1C1A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1a38;
        }
    }
    ctx->pc = 0x1C1A60u;
label_1c1a60:
    // 0x1c1a60: 0x8f858924  lw          $a1, -0x76DC($gp)
    ctx->pc = 0x1c1a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936868)));
label_1c1a64:
    // 0x1c1a64: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1c1a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_1c1a68:
    // 0x1c1a68: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1c1a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1c1a6c:
    // 0x1c1a6c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c1a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1c1a70:
    // 0x1c1a70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c1a74:
    // 0x1c1a74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c1a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1c1a78:
    // 0x1c1a78: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1c1a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1c1a7c:
    // 0x1c1a7c: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x1c1a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1c1a80:
    // 0x1c1a80: 0x24720006  addiu       $s2, $v1, 0x6
    ctx->pc = 0x1c1a80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
label_1c1a84:
    // 0x1c1a84: 0xfe220060  sd          $v0, 0x60($s1)
    ctx->pc = 0x1c1a84u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 96), GPR_U64(ctx, 2));
label_1c1a88:
    // 0x1c1a88: 0xc05e234  jal         func_1788D0
label_1c1a8c:
    if (ctx->pc == 0x1C1A8Cu) {
        ctx->pc = 0x1C1A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A88u;
        // 0x1c1a8c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1A90u;
        goto label_1c1a90;
    }
    ctx->pc = 0x1C1A88u;
    SET_GPR_U32(ctx, 31, 0x1C1A90u);
    ctx->pc = 0x1C1A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1A88u;
    // 0x1c1a8c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    { ctx->pc = 0x1788d0; return; }
    ctx->pc = 0x1C1A90u;
label_1c1a90:
    // 0x1c1a90: 0x26460001  addiu       $a2, $s2, 0x1
    ctx->pc = 0x1c1a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1c1a94:
    // 0x1c1a94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1a98:
    // 0x1c1a98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c1a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c1a9c:
    // 0x1c1a9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1a9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1aa0:
    // 0x1c1aa0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c1aa0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1aa4:
    // 0x1c1aa4: 0xc066c72  jal         func_19B1C8
label_1c1aa8:
    if (ctx->pc == 0x1C1AA8u) {
        ctx->pc = 0x1C1AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1AA4u;
        // 0x1c1aa8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1AACu;
        goto label_1c1aac;
    }
    ctx->pc = 0x1C1AA4u;
    SET_GPR_U32(ctx, 31, 0x1C1AACu);
    ctx->pc = 0x1C1AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1AA4u;
    // 0x1c1aa8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1C1AACu;
label_1c1aac:
    // 0x1c1aac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c1aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c1ab0:
    // 0x1c1ab0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c1ab0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c1ab4:
    // 0x1c1ab4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c1ab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1ab8:
    // 0x1c1ab8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1ab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1abc:
    // 0x1c1abc: 0x3e00008  jr          $ra
label_1c1ac0:
    if (ctx->pc == 0x1C1AC0u) {
        ctx->pc = 0x1C1AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1ABCu;
        // 0x1c1ac0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1AC4u;
        goto label_1c1ac4;
    }
    ctx->pc = 0x1C1ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1ABCu;
        // 0x1c1ac0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1AC4u;
label_1c1ac4:
    // 0x1c1ac4: 0x0  nop
    ctx->pc = 0x1c1ac4u;
    // NOP
label_1c1ac8:
    // 0x1c1ac8: 0x0  nop
    ctx->pc = 0x1c1ac8u;
    // NOP
label_1c1acc:
    // 0x1c1acc: 0x0  nop
    ctx->pc = 0x1c1accu;
    // NOP
label_1c1ad0:
    // 0x1c1ad0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1c1ad4:
    if (ctx->pc == 0x1C1AD4u) {
        ctx->pc = 0x1C1AD8u;
        goto label_1c1ad8;
    }
    ctx->pc = 0x1C1AD0u;
    {
        const bool branch_taken_0x1c1ad0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1ad0) {
            ctx->pc = 0x1C1AE0u;
            goto label_1c1ae0;
        }
    }
    ctx->pc = 0x1C1AD8u;
label_1c1ad8:
    // 0x1c1ad8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c1adc:
    if (ctx->pc == 0x1C1ADCu) {
        ctx->pc = 0x1C1ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1AD8u;
        // 0x1c1adc: 0xaf808930  sw          $zero, -0x76D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936880), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1AE0u;
        goto label_1c1ae0;
    }
    ctx->pc = 0x1C1AD8u;
    {
        const bool branch_taken_0x1c1ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1AD8u;
        // 0x1c1adc: 0xaf808930  sw          $zero, -0x76D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936880), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1ad8) {
            ctx->pc = 0x1C1AF4u;
            goto label_1c1af4;
        }
    }
    ctx->pc = 0x1C1AE0u;
label_1c1ae0:
    // 0x1c1ae0: 0x8f838930  lw          $v1, -0x76D0($gp)
    ctx->pc = 0x1c1ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936880)));
label_1c1ae4:
    // 0x1c1ae4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1c1ae8:
    if (ctx->pc == 0x1C1AE8u) {
        ctx->pc = 0x1C1AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1AE4u;
        // 0x1c1ae8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1AECu;
        goto label_1c1aec;
    }
    ctx->pc = 0x1C1AE4u;
    {
        const bool branch_taken_0x1c1ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1AE4u;
        // 0x1c1ae8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1ae4) {
            ctx->pc = 0x1C1AF4u;
            goto label_1c1af4;
        }
    }
    ctx->pc = 0x1C1AECu;
label_1c1aec:
    // 0x1c1aec: 0xaf80893c  sw          $zero, -0x76C4($gp)
    ctx->pc = 0x1c1aecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936892), GPR_U32(ctx, 0));
label_1c1af0:
    // 0x1c1af0: 0xaf838930  sw          $v1, -0x76D0($gp)
    ctx->pc = 0x1c1af0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936880), GPR_U32(ctx, 3));
label_1c1af4:
    // 0x1c1af4: 0x3e00008  jr          $ra
label_1c1af8:
    if (ctx->pc == 0x1C1AF8u) {
        ctx->pc = 0x1C1AFCu;
        goto label_1c1afc;
    }
    ctx->pc = 0x1C1AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1AFCu;
label_1c1afc:
    // 0x1c1afc: 0x0  nop
    ctx->pc = 0x1c1afcu;
    // NOP
label_1c1b00:
    // 0x1c1b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c1b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c1b04:
    // 0x1c1b04: 0x24050270  addiu       $a1, $zero, 0x270
    ctx->pc = 0x1c1b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
label_1c1b08:
    // 0x1c1b08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c1b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1c1b0c:
    // 0x1c1b0c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1c1b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c1b10:
    // 0x1c1b10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c1b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c1b14:
    // 0x1c1b14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c1b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c1b18:
    // 0x1c1b18: 0xc0550d0  jal         func_154340
label_1c1b1c:
    if (ctx->pc == 0x1C1B1Cu) {
        ctx->pc = 0x1C1B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B18u;
        // 0x1c1b1c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1B20u;
        goto label_1c1b20;
    }
    ctx->pc = 0x1C1B18u;
    SET_GPR_U32(ctx, 31, 0x1C1B20u);
    ctx->pc = 0x1C1B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1B18u;
    // 0x1c1b1c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154340u;
    { ctx->pc = 0x154340; return; }
    ctx->pc = 0x1C1B20u;
label_1c1b20:
    // 0x1c1b20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c1b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c1b24:
    // 0x1c1b24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1b28:
    // 0x1c1b28: 0x24050270  addiu       $a1, $zero, 0x270
    ctx->pc = 0x1c1b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
label_1c1b2c:
    // 0x1c1b2c: 0xc055148  jal         func_154520
label_1c1b30:
    if (ctx->pc == 0x1C1B30u) {
        ctx->pc = 0x1C1B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B2Cu;
        // 0x1c1b30: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1B34u;
        goto label_1c1b34;
    }
    ctx->pc = 0x1C1B2Cu;
    SET_GPR_U32(ctx, 31, 0x1C1B34u);
    ctx->pc = 0x1C1B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1B2Cu;
    // 0x1c1b30: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154520u;
    { ctx->pc = 0x154520; return; }
    ctx->pc = 0x1C1B34u;
label_1c1b34:
    // 0x1c1b34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c1b38:
    if (ctx->pc == 0x1C1B38u) {
        ctx->pc = 0x1C1B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B34u;
        // 0x1c1b38: 0x2409018e  addiu       $t1, $zero, 0x18E (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 398));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1B3Cu;
        goto label_1c1b3c;
    }
    ctx->pc = 0x1C1B34u;
    {
        const bool branch_taken_0x1c1b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B34u;
        // 0x1c1b38: 0x2409018e  addiu       $t1, $zero, 0x18E (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 398));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b34) {
            ctx->pc = 0x1C1B44u;
            goto label_1c1b44;
        }
    }
    ctx->pc = 0x1C1B3Cu;
label_1c1b3c:
    // 0x1c1b3c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c1b40:
    if (ctx->pc == 0x1C1B40u) {
        ctx->pc = 0x1C1B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B3Cu;
        // 0x1c1b40: 0x24020280  addiu       $v0, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1B44u;
        goto label_1c1b44;
    }
    ctx->pc = 0x1C1B3Cu;
    {
        const bool branch_taken_0x1c1b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B3Cu;
        // 0x1c1b40: 0x24020280  addiu       $v0, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b3c) {
            ctx->pc = 0x1C1B58u;
            goto label_1c1b58;
        }
    }
    ctx->pc = 0x1C1B44u;
label_1c1b44:
    // 0x1c1b44: 0x8f828920  lw          $v0, -0x76E0($gp)
    ctx->pc = 0x1c1b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
label_1c1b48:
    // 0x1c1b48: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1c1b4c:
    if (ctx->pc == 0x1C1B4Cu) {
        ctx->pc = 0x1C1B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B48u;
        // 0x1c1b4c: 0x2409018a  addiu       $t1, $zero, 0x18A (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 394));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1B50u;
        goto label_1c1b50;
    }
    ctx->pc = 0x1C1B48u;
    {
        const bool branch_taken_0x1c1b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B48u;
        // 0x1c1b4c: 0x2409018a  addiu       $t1, $zero, 0x18A (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 394));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b48) {
            ctx->pc = 0x1C1B54u;
            goto label_1c1b54;
        }
    }
    ctx->pc = 0x1C1B50u;
label_1c1b50:
    // 0x1c1b50: 0x24090182  addiu       $t1, $zero, 0x182
    ctx->pc = 0x1c1b50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 386));
label_1c1b54:
    // 0x1c1b54: 0x24020280  addiu       $v0, $zero, 0x280
    ctx->pc = 0x1c1b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1c1b58:
    // 0x1c1b58: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x1c1b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1c1b5c:
    // 0x1c1b5c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1c1b60:
    if (ctx->pc == 0x1C1B60u) {
        ctx->pc = 0x1C1B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B5Cu;
        // 0x1c1b60: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1B64u;
        goto label_1c1b64;
    }
    ctx->pc = 0x1C1B5Cu;
    {
        const bool branch_taken_0x1c1b5c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C1B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B5Cu;
        // 0x1c1b60: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b5c) {
            ctx->pc = 0x1C1B6Cu;
            goto label_1c1b6c;
        }
    }
    ctx->pc = 0x1C1B64u;
label_1c1b64:
    // 0x1c1b64: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1c1b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1c1b68:
    // 0x1c1b68: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1c1b68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1c1b6c:
    // 0x1c1b6c: 0xaf828938  sw          $v0, -0x76C8($gp)
    ctx->pc = 0x1c1b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936888), GPR_U32(ctx, 2));
label_1c1b70:
    // 0x1c1b70: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1c1b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c1b74:
    // 0x1c1b74: 0x8f888938  lw          $t0, -0x76C8($gp)
    ctx->pc = 0x1c1b74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936888)));
label_1c1b78:
    // 0x1c1b78: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1c1b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1c1b7c:
    // 0x1c1b7c: 0x24060270  addiu       $a2, $zero, 0x270
    ctx->pc = 0x1c1b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
label_1c1b80:
    // 0x1c1b80: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x1c1b80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1c1b84:
    // 0x1c1b84: 0xc054e5c  jal         func_153970
label_1c1b88:
    if (ctx->pc == 0x1C1B88u) {
        ctx->pc = 0x1C1B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B84u;
        // 0x1c1b88: 0x340affe1  ori         $t2, $zero, 0xFFE1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65505);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1B8Cu;
        goto label_1c1b8c;
    }
    ctx->pc = 0x1C1B84u;
    SET_GPR_U32(ctx, 31, 0x1C1B8Cu);
    ctx->pc = 0x1C1B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1B84u;
    // 0x1c1b88: 0x340affe1  ori         $t2, $zero, 0xFFE1 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65505);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    { ctx->pc = 0x153970; return; }
    ctx->pc = 0x1C1B8Cu;
label_1c1b8c:
    // 0x1c1b8c: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x1c1b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
label_1c1b90:
    // 0x1c1b90: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1c1b90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1b94:
    // 0x1c1b94: 0x24848ec0  addiu       $a0, $a0, -0x7140
    ctx->pc = 0x1c1b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938304));
label_1c1b98:
    // 0x1c1b98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1b9c:
    // 0x1c1b9c: 0x24060093  addiu       $a2, $zero, 0x93
    ctx->pc = 0x1c1b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
label_1c1ba0:
    // 0x1c1ba0: 0xc054e74  jal         func_1539D0
label_1c1ba4:
    if (ctx->pc == 0x1C1BA4u) {
        ctx->pc = 0x1C1BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BA0u;
        // 0x1c1ba4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1BA8u;
        goto label_1c1ba8;
    }
    ctx->pc = 0x1C1BA0u;
    SET_GPR_U32(ctx, 31, 0x1C1BA8u);
    ctx->pc = 0x1C1BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1BA0u;
    // 0x1c1ba4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    { ctx->pc = 0x1539d0; return; }
    ctx->pc = 0x1C1BA8u;
label_1c1ba8:
    // 0x1c1ba8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c1ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1bac:
    // 0x1c1bac: 0xaf828934  sw          $v0, -0x76CC($gp)
    ctx->pc = 0x1c1bacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936884), GPR_U32(ctx, 2));
label_1c1bb0:
    // 0x1c1bb0: 0xaf838930  sw          $v1, -0x76D0($gp)
    ctx->pc = 0x1c1bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936880), GPR_U32(ctx, 3));
label_1c1bb4:
    // 0x1c1bb4: 0xaf80893c  sw          $zero, -0x76C4($gp)
    ctx->pc = 0x1c1bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936892), GPR_U32(ctx, 0));
label_1c1bb8:
    // 0x1c1bb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c1bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c1bbc:
    // 0x1c1bbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c1bbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1bc0:
    // 0x1c1bc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1bc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1bc4:
    // 0x1c1bc4: 0x3e00008  jr          $ra
label_1c1bc8:
    if (ctx->pc == 0x1C1BC8u) {
        ctx->pc = 0x1C1BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BC4u;
        // 0x1c1bc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1BCCu;
        goto label_1c1bcc;
    }
    ctx->pc = 0x1C1BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BC4u;
        // 0x1c1bc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1BCCu;
label_1c1bcc:
    // 0x1c1bcc: 0x0  nop
    ctx->pc = 0x1c1bccu;
    // NOP
label_1c1bd0:
    // 0x1c1bd0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1c1bd4:
    if (ctx->pc == 0x1C1BD4u) {
        ctx->pc = 0x1C1BD8u;
        goto label_1c1bd8;
    }
    ctx->pc = 0x1C1BD0u;
    {
        const bool branch_taken_0x1c1bd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1bd0) {
            ctx->pc = 0x1C1BE0u;
            goto label_1c1be0;
        }
    }
    ctx->pc = 0x1C1BD8u;
label_1c1bd8:
    // 0x1c1bd8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c1bdc:
    if (ctx->pc == 0x1C1BDCu) {
        ctx->pc = 0x1C1BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BD8u;
        // 0x1c1bdc: 0xaf808920  sw          $zero, -0x76E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936864), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1BE0u;
        goto label_1c1be0;
    }
    ctx->pc = 0x1C1BD8u;
    {
        const bool branch_taken_0x1c1bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BD8u;
        // 0x1c1bdc: 0xaf808920  sw          $zero, -0x76E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936864), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1bd8) {
            ctx->pc = 0x1C1BF4u;
            goto label_1c1bf4;
        }
    }
    ctx->pc = 0x1C1BE0u;
label_1c1be0:
    // 0x1c1be0: 0x8f838920  lw          $v1, -0x76E0($gp)
    ctx->pc = 0x1c1be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
label_1c1be4:
    // 0x1c1be4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1c1be8:
    if (ctx->pc == 0x1C1BE8u) {
        ctx->pc = 0x1C1BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BE4u;
        // 0x1c1be8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1BECu;
        goto label_1c1bec;
    }
    ctx->pc = 0x1C1BE4u;
    {
        const bool branch_taken_0x1c1be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BE4u;
        // 0x1c1be8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1be4) {
            ctx->pc = 0x1C1BF4u;
            goto label_1c1bf4;
        }
    }
    ctx->pc = 0x1C1BECu;
label_1c1bec:
    // 0x1c1bec: 0xaf80892c  sw          $zero, -0x76D4($gp)
    ctx->pc = 0x1c1becu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936876), GPR_U32(ctx, 0));
label_1c1bf0:
    // 0x1c1bf0: 0xaf838920  sw          $v1, -0x76E0($gp)
    ctx->pc = 0x1c1bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936864), GPR_U32(ctx, 3));
label_1c1bf4:
    // 0x1c1bf4: 0x3e00008  jr          $ra
label_1c1bf8:
    if (ctx->pc == 0x1C1BF8u) {
        ctx->pc = 0x1C1BFCu;
        goto label_1c1bfc;
    }
    ctx->pc = 0x1C1BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1BFCu;
label_1c1bfc:
    // 0x1c1bfc: 0x0  nop
    ctx->pc = 0x1c1bfcu;
    // NOP
label_1c1c00:
    // 0x1c1c00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c1c04:
    // 0x1c1c04: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x1c1c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1c1c08:
    // 0x1c1c08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c1c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c1c0c:
    // 0x1c1c0c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1c1c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c1c10:
    // 0x1c1c10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c1c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c1c14:
    // 0x1c1c14: 0xc0550d0  jal         func_154340
label_1c1c18:
    if (ctx->pc == 0x1C1C18u) {
        ctx->pc = 0x1C1C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C14u;
        // 0x1c1c18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1C1Cu;
        goto label_1c1c1c;
    }
    ctx->pc = 0x1C1C14u;
    SET_GPR_U32(ctx, 31, 0x1C1C1Cu);
    ctx->pc = 0x1C1C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1C14u;
    // 0x1c1c18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154340u;
    { ctx->pc = 0x154340; return; }
    ctx->pc = 0x1C1C1Cu;
label_1c1c1c:
    // 0x1c1c1c: 0x24030280  addiu       $v1, $zero, 0x280
    ctx->pc = 0x1c1c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1c1c20:
    // 0x1c1c20: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1c1c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1c1c24:
    // 0x1c1c24: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1c1c28:
    if (ctx->pc == 0x1C1C28u) {
        ctx->pc = 0x1C1C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C24u;
        // 0x1c1c28: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1C2Cu;
        goto label_1c1c2c;
    }
    ctx->pc = 0x1C1C24u;
    {
        const bool branch_taken_0x1c1c24 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C1C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C24u;
        // 0x1c1c28: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c24) {
            ctx->pc = 0x1C1C34u;
            goto label_1c1c34;
        }
    }
    ctx->pc = 0x1C1C2Cu;
label_1c1c2c:
    // 0x1c1c2c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1c1c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1c1c30:
    // 0x1c1c30: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1c1c30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1c1c34:
    // 0x1c1c34: 0xaf828928  sw          $v0, -0x76D8($gp)
    ctx->pc = 0x1c1c34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936872), GPR_U32(ctx, 2));
label_1c1c38:
    // 0x1c1c38: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1c1c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1c1c3c:
    // 0x1c1c3c: 0x8f888928  lw          $t0, -0x76D8($gp)
    ctx->pc = 0x1c1c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936872)));
label_1c1c40:
    // 0x1c1c40: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1c1c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c1c44:
    // 0x1c1c44: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1c1c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1c1c48:
    // 0x1c1c48: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1c1c48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c1c4c:
    // 0x1c1c4c: 0x24090172  addiu       $t1, $zero, 0x172
    ctx->pc = 0x1c1c4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
label_1c1c50:
    // 0x1c1c50: 0xc054e5c  jal         func_153970
label_1c1c54:
    if (ctx->pc == 0x1C1C54u) {
        ctx->pc = 0x1C1C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C50u;
        // 0x1c1c54: 0x340affe1  ori         $t2, $zero, 0xFFE1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65505);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1C58u;
        goto label_1c1c58;
    }
    ctx->pc = 0x1C1C50u;
    SET_GPR_U32(ctx, 31, 0x1C1C58u);
    ctx->pc = 0x1C1C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1C50u;
    // 0x1c1c54: 0x340affe1  ori         $t2, $zero, 0xFFE1 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65505);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    { ctx->pc = 0x153970; return; }
    ctx->pc = 0x1C1C58u;
label_1c1c58:
    // 0x1c1c58: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x1c1c58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
label_1c1c5c:
    // 0x1c1c5c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1c1c5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1c60:
    // 0x1c1c60: 0x2484d840  addiu       $a0, $a0, -0x27C0
    ctx->pc = 0x1c1c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957120));
label_1c1c64:
    // 0x1c1c64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1c68:
    // 0x1c1c68: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x1c1c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1c1c6c:
    // 0x1c1c6c: 0xc054e74  jal         func_1539D0
label_1c1c70:
    if (ctx->pc == 0x1C1C70u) {
        ctx->pc = 0x1C1C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C6Cu;
        // 0x1c1c70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1C74u;
        goto label_1c1c74;
    }
    ctx->pc = 0x1C1C6Cu;
    SET_GPR_U32(ctx, 31, 0x1C1C74u);
    ctx->pc = 0x1C1C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1C6Cu;
    // 0x1c1c70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    { ctx->pc = 0x1539d0; return; }
    ctx->pc = 0x1C1C74u;
label_1c1c74:
    // 0x1c1c74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c1c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1c78:
    // 0x1c1c78: 0xaf828924  sw          $v0, -0x76DC($gp)
    ctx->pc = 0x1c1c78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936868), GPR_U32(ctx, 2));
label_1c1c7c:
    // 0x1c1c7c: 0xaf838920  sw          $v1, -0x76E0($gp)
    ctx->pc = 0x1c1c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936864), GPR_U32(ctx, 3));
label_1c1c80:
    // 0x1c1c80: 0xaf80892c  sw          $zero, -0x76D4($gp)
    ctx->pc = 0x1c1c80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936876), GPR_U32(ctx, 0));
label_1c1c84:
    // 0x1c1c84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c1c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1c88:
    // 0x1c1c88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1c8c:
    // 0x1c1c8c: 0x3e00008  jr          $ra
label_1c1c90:
    if (ctx->pc == 0x1C1C90u) {
        ctx->pc = 0x1C1C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C8Cu;
        // 0x1c1c90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1C94u;
        goto label_1c1c94;
    }
    ctx->pc = 0x1C1C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C8Cu;
        // 0x1c1c90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1C94u;
label_1c1c94:
    // 0x1c1c94: 0x0  nop
    ctx->pc = 0x1c1c94u;
    // NOP
label_1c1c98:
    // 0x1c1c98: 0x0  nop
    ctx->pc = 0x1c1c98u;
    // NOP
label_1c1c9c:
    // 0x1c1c9c: 0x0  nop
    ctx->pc = 0x1c1c9cu;
    // NOP
label_1c1ca0:
    // 0x1c1ca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c1ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c1ca4:
    // 0x1c1ca4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c1ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1c1ca8:
    // 0x1c1ca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c1ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c1cac:
    // 0x1c1cac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c1cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c1cb0:
    // 0x1c1cb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c1cb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c1cb4:
    // 0x1c1cb4: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1c1cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1c1cb8:
    // 0x1c1cb8: 0x30500400  andi        $s0, $v0, 0x400
    ctx->pc = 0x1c1cb8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_1c1cbc:
    // 0x1c1cbc: 0xc073a04  jal         func_1CE810
label_1c1cc0:
    if (ctx->pc == 0x1C1CC0u) {
        ctx->pc = 0x1C1CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CBCu;
        // 0x1c1cc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1CC4u;
        goto label_1c1cc4;
    }
    ctx->pc = 0x1C1CBCu;
    SET_GPR_U32(ctx, 31, 0x1C1CC4u);
    ctx->pc = 0x1C1CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1CBCu;
    // 0x1c1cc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE810u;
    { ctx->pc = 0x1ce810; return; }
    ctx->pc = 0x1C1CC4u;
label_1c1cc4:
    // 0x1c1cc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c1cc8:
    // 0x1c1cc8: 0xc074264  jal         func_1D0990
label_1c1ccc:
    if (ctx->pc == 0x1C1CCCu) {
        ctx->pc = 0x1C1CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CC8u;
        // 0x1c1ccc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1CD0u;
        goto label_1c1cd0;
    }
    ctx->pc = 0x1C1CC8u;
    SET_GPR_U32(ctx, 31, 0x1C1CD0u);
    ctx->pc = 0x1C1CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1CC8u;
    // 0x1c1ccc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0990u;
    { ctx->pc = 0x1d0990; return; }
    ctx->pc = 0x1C1CD0u;
label_1c1cd0:
    // 0x1c1cd0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1c1cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1c1cd4:
    // 0x1c1cd4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1c1cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1c1cd8:
    // 0x1c1cd8: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x1c1cd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_1c1cdc:
    // 0x1c1cdc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1c1ce0:
    if (ctx->pc == 0x1C1CE0u) {
        ctx->pc = 0x1C1CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CDCu;
        // 0x1c1ce0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1CE4u;
        goto label_1c1ce4;
    }
    ctx->pc = 0x1C1CDCu;
    {
        const bool branch_taken_0x1c1cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C1CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CDCu;
        // 0x1c1ce0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1cdc) {
            ctx->pc = 0x1C1CF4u;
            goto label_1c1cf4;
        }
    }
    ctx->pc = 0x1C1CE4u;
label_1c1ce4:
    // 0x1c1ce4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c1ce8:
    // 0x1c1ce8: 0xc074748  jal         func_1D1D20
label_1c1cec:
    if (ctx->pc == 0x1C1CECu) {
        ctx->pc = 0x1C1CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CE8u;
        // 0x1c1cec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1CF0u;
        goto label_1c1cf0;
    }
    ctx->pc = 0x1C1CE8u;
    SET_GPR_U32(ctx, 31, 0x1C1CF0u);
    ctx->pc = 0x1C1CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1CE8u;
    // 0x1c1cec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D20u;
    { ctx->pc = 0x1d1d20; return; }
    ctx->pc = 0x1C1CF0u;
label_1c1cf0:
    // 0x1c1cf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c1cf4:
    // 0x1c1cf4: 0xc070f9c  jal         func_1C3E70
label_1c1cf8:
    if (ctx->pc == 0x1C1CF8u) {
        ctx->pc = 0x1C1CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CF4u;
        // 0x1c1cf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1CFCu;
        goto label_1c1cfc;
    }
    ctx->pc = 0x1C1CF4u;
    SET_GPR_U32(ctx, 31, 0x1C1CFCu);
    ctx->pc = 0x1C1CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1CF4u;
    // 0x1c1cf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3E70u;
    { ctx->pc = 0x1c3e70; return; }
    ctx->pc = 0x1C1CFCu;
label_1c1cfc:
    // 0x1c1cfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c1d00:
    // 0x1c1d00: 0xc073040  jal         func_1CC100
label_1c1d04:
    if (ctx->pc == 0x1C1D04u) {
        ctx->pc = 0x1C1D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D00u;
        // 0x1c1d04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D08u;
        goto label_1c1d08;
    }
    ctx->pc = 0x1C1D00u;
    SET_GPR_U32(ctx, 31, 0x1C1D08u);
    ctx->pc = 0x1C1D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D00u;
    // 0x1c1d04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC100u;
    { ctx->pc = 0x1cc100; return; }
    ctx->pc = 0x1C1D08u;
label_1c1d08:
    // 0x1c1d08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c1d0c:
    // 0x1c1d0c: 0xc09108c  jal         func_244230
label_1c1d10:
    if (ctx->pc == 0x1C1D10u) {
        ctx->pc = 0x1C1D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D0Cu;
        // 0x1c1d10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D14u;
        goto label_1c1d14;
    }
    ctx->pc = 0x1C1D0Cu;
    SET_GPR_U32(ctx, 31, 0x1C1D14u);
    ctx->pc = 0x1C1D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D0Cu;
    // 0x1c1d10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244230u;
    { ctx->pc = 0x244230; return; }
    ctx->pc = 0x1C1D14u;
label_1c1d14:
    // 0x1c1d14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c1d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c1d18:
    // 0x1c1d18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c1d18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1d1c:
    // 0x1c1d1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1d1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1d20:
    // 0x1c1d20: 0x3e00008  jr          $ra
label_1c1d24:
    if (ctx->pc == 0x1C1D24u) {
        ctx->pc = 0x1C1D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D20u;
        // 0x1c1d24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D28u;
        goto label_1c1d28;
    }
    ctx->pc = 0x1C1D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D20u;
        // 0x1c1d24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1D28u;
label_1c1d28:
    // 0x1c1d28: 0x0  nop
    ctx->pc = 0x1c1d28u;
    // NOP
label_1c1d2c:
    // 0x1c1d2c: 0x0  nop
    ctx->pc = 0x1c1d2cu;
    // NOP
label_1c1d30:
    // 0x1c1d30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c1d34:
    // 0x1c1d34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c1d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c1d38:
    // 0x1c1d38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c1d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c1d3c:
    // 0x1c1d3c: 0xc073d70  jal         func_1CF5C0
label_1c1d40:
    if (ctx->pc == 0x1C1D40u) {
        ctx->pc = 0x1C1D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D3Cu;
        // 0x1c1d40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D44u;
        goto label_1c1d44;
    }
    ctx->pc = 0x1C1D3Cu;
    SET_GPR_U32(ctx, 31, 0x1C1D44u);
    ctx->pc = 0x1C1D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D3Cu;
    // 0x1c1d40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF5C0u;
    { ctx->pc = 0x1cf5c0; return; }
    ctx->pc = 0x1C1D44u;
label_1c1d44:
    // 0x1c1d44: 0xc0743a4  jal         func_1D0E90
label_1c1d48:
    if (ctx->pc == 0x1C1D48u) {
        ctx->pc = 0x1C1D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D44u;
        // 0x1c1d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D4Cu;
        goto label_1c1d4c;
    }
    ctx->pc = 0x1C1D44u;
    SET_GPR_U32(ctx, 31, 0x1C1D4Cu);
    ctx->pc = 0x1C1D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D44u;
    // 0x1c1d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0E90u;
    { ctx->pc = 0x1d0e90; return; }
    ctx->pc = 0x1C1D4Cu;
label_1c1d4c:
    // 0x1c1d4c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1c1d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1c1d50:
    // 0x1c1d50: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1c1d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1c1d54:
    // 0x1c1d54: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x1c1d54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_1c1d58:
    // 0x1c1d58: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1c1d5c:
    if (ctx->pc == 0x1C1D5Cu) {
        ctx->pc = 0x1C1D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D58u;
        // 0x1c1d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D60u;
        goto label_1c1d60;
    }
    ctx->pc = 0x1C1D58u;
    {
        const bool branch_taken_0x1c1d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C1D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D58u;
        // 0x1c1d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d58) {
            ctx->pc = 0x1C1D6Cu;
            goto label_1c1d6c;
        }
    }
    ctx->pc = 0x1C1D60u;
label_1c1d60:
    // 0x1c1d60: 0xc074778  jal         func_1D1DE0
label_1c1d64:
    if (ctx->pc == 0x1C1D64u) {
        ctx->pc = 0x1C1D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D60u;
        // 0x1c1d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D68u;
        goto label_1c1d68;
    }
    ctx->pc = 0x1C1D60u;
    SET_GPR_U32(ctx, 31, 0x1C1D68u);
    ctx->pc = 0x1C1D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D60u;
    // 0x1c1d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1DE0u;
    { ctx->pc = 0x1d1de0; return; }
    ctx->pc = 0x1C1D68u;
label_1c1d68:
    // 0x1c1d68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1d6c:
    // 0x1c1d6c: 0xc071188  jal         func_1C4620
label_1c1d70:
    if (ctx->pc == 0x1C1D70u) {
        ctx->pc = 0x1C1D74u;
        goto label_1c1d74;
    }
    ctx->pc = 0x1C1D6Cu;
    SET_GPR_U32(ctx, 31, 0x1C1D74u);
    ctx->pc = 0x1C4620u;
    { ctx->pc = 0x1c4620; return; }
    ctx->pc = 0x1C1D74u;
label_1c1d74:
    // 0x1c1d74: 0xc073174  jal         func_1CC5D0
label_1c1d78:
    if (ctx->pc == 0x1C1D78u) {
        ctx->pc = 0x1C1D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D74u;
        // 0x1c1d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D7Cu;
        goto label_1c1d7c;
    }
    ctx->pc = 0x1C1D74u;
    SET_GPR_U32(ctx, 31, 0x1C1D7Cu);
    ctx->pc = 0x1C1D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D74u;
    // 0x1c1d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC5D0u;
    { ctx->pc = 0x1cc5d0; return; }
    ctx->pc = 0x1C1D7Cu;
label_1c1d7c:
    // 0x1c1d7c: 0xc091148  jal         func_244520
label_1c1d80:
    if (ctx->pc == 0x1C1D80u) {
        ctx->pc = 0x1C1D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D7Cu;
        // 0x1c1d80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D84u;
        goto label_1c1d84;
    }
    ctx->pc = 0x1C1D7Cu;
    SET_GPR_U32(ctx, 31, 0x1C1D84u);
    ctx->pc = 0x1C1D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D7Cu;
    // 0x1c1d80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244520u;
    { ctx->pc = 0x244520; return; }
    ctx->pc = 0x1C1D84u;
label_1c1d84:
    // 0x1c1d84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c1d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1d88:
    // 0x1c1d88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1d8c:
    // 0x1c1d8c: 0x3e00008  jr          $ra
label_1c1d90:
    if (ctx->pc == 0x1C1D90u) {
        ctx->pc = 0x1C1D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D8Cu;
        // 0x1c1d90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D94u;
        goto label_1c1d94;
    }
    ctx->pc = 0x1C1D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D8Cu;
        // 0x1c1d90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1D94u;
label_1c1d94:
    // 0x1c1d94: 0x0  nop
    ctx->pc = 0x1c1d94u;
    // NOP
label_1c1d98:
    // 0x1c1d98: 0x0  nop
    ctx->pc = 0x1c1d98u;
    // NOP
label_1c1d9c:
    // 0x1c1d9c: 0x0  nop
    ctx->pc = 0x1c1d9cu;
    // NOP
label_1c1da0:
    // 0x1c1da0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c1da4:
    // 0x1c1da4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c1da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c1da8:
    // 0x1c1da8: 0xc073e44  jal         func_1CF910
label_1c1dac:
    if (ctx->pc == 0x1C1DACu) {
        ctx->pc = 0x1C1DB0u;
        goto label_1c1db0;
    }
    ctx->pc = 0x1C1DA8u;
    SET_GPR_U32(ctx, 31, 0x1C1DB0u);
    ctx->pc = 0x1CF910u;
    { ctx->pc = 0x1cf910; return; }
    ctx->pc = 0x1C1DB0u;
label_1c1db0:
    // 0x1c1db0: 0xc074408  jal         func_1D1020
label_1c1db4:
    if (ctx->pc == 0x1C1DB4u) {
        ctx->pc = 0x1C1DB8u;
        goto label_1c1db8;
    }
    ctx->pc = 0x1C1DB0u;
    SET_GPR_U32(ctx, 31, 0x1C1DB8u);
    ctx->pc = 0x1D1020u;
    { ctx->pc = 0x1d1020; return; }
    ctx->pc = 0x1C1DB8u;
label_1c1db8:
    // 0x1c1db8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1c1db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1c1dbc:
    // 0x1c1dbc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1c1dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1c1dc0:
    // 0x1c1dc0: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x1c1dc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_1c1dc4:
    // 0x1c1dc4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1c1dc8:
    if (ctx->pc == 0x1C1DC8u) {
        ctx->pc = 0x1C1DCCu;
        goto label_1c1dcc;
    }
    ctx->pc = 0x1C1DC4u;
    {
        const bool branch_taken_0x1c1dc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c1dc4) {
            ctx->pc = 0x1C1DD4u;
            goto label_1c1dd4;
        }
    }
    ctx->pc = 0x1C1DCCu;
label_1c1dcc:
    // 0x1c1dcc: 0xc0747b0  jal         func_1D1EC0
label_1c1dd0:
    if (ctx->pc == 0x1C1DD0u) {
        ctx->pc = 0x1C1DD4u;
        goto label_1c1dd4;
    }
    ctx->pc = 0x1C1DCCu;
    SET_GPR_U32(ctx, 31, 0x1C1DD4u);
    ctx->pc = 0x1D1EC0u;
    { ctx->pc = 0x1d1ec0; return; }
    ctx->pc = 0x1C1DD4u;
label_1c1dd4:
    // 0x1c1dd4: 0xc0711ec  jal         func_1C47B0
label_1c1dd8:
    if (ctx->pc == 0x1C1DD8u) {
        ctx->pc = 0x1C1DDCu;
        goto label_1c1ddc;
    }
    ctx->pc = 0x1C1DD4u;
    SET_GPR_U32(ctx, 31, 0x1C1DDCu);
    ctx->pc = 0x1C47B0u;
    { ctx->pc = 0x1c47b0; return; }
    ctx->pc = 0x1C1DDCu;
label_1c1ddc:
    // 0x1c1ddc: 0xc0731ac  jal         func_1CC6B0
label_1c1de0:
    if (ctx->pc == 0x1C1DE0u) {
        ctx->pc = 0x1C1DE4u;
        goto label_1c1de4;
    }
    ctx->pc = 0x1C1DDCu;
    SET_GPR_U32(ctx, 31, 0x1C1DE4u);
    ctx->pc = 0x1CC6B0u;
    { ctx->pc = 0x1cc6b0; return; }
    ctx->pc = 0x1C1DE4u;
label_1c1de4:
    // 0x1c1de4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1de8:
    // 0x1c1de8: 0x3e00008  jr          $ra
label_1c1dec:
    if (ctx->pc == 0x1C1DECu) {
        ctx->pc = 0x1C1DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1DE8u;
        // 0x1c1dec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1DF0u;
        goto label_1c1df0;
    }
    ctx->pc = 0x1C1DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1DE8u;
        // 0x1c1dec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1DF0u;
label_1c1df0:
    // 0x1c1df0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c1df4:
    // 0x1c1df4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c1df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c1df8:
    // 0x1c1df8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c1df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c1dfc:
    // 0x1c1dfc: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1c1dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1c1e00:
    // 0x1c1e00: 0x30500400  andi        $s0, $v0, 0x400
    ctx->pc = 0x1c1e00u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_1c1e04:
    // 0x1c1e04: 0xc073e48  jal         func_1CF920
label_1c1e08:
    if (ctx->pc == 0x1C1E08u) {
        ctx->pc = 0x1C1E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E04u;
        // 0x1c1e08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1E0Cu;
        goto label_1c1e0c;
    }
    ctx->pc = 0x1C1E04u;
    SET_GPR_U32(ctx, 31, 0x1C1E0Cu);
    ctx->pc = 0x1C1E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E04u;
    // 0x1c1e08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF920u;
    { ctx->pc = 0x1cf920; return; }
    ctx->pc = 0x1C1E0Cu;
label_1c1e0c:
    // 0x1c1e0c: 0xc07440c  jal         func_1D1030
label_1c1e10:
    if (ctx->pc == 0x1C1E10u) {
        ctx->pc = 0x1C1E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E0Cu;
        // 0x1c1e10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1E14u;
        goto label_1c1e14;
    }
    ctx->pc = 0x1C1E0Cu;
    SET_GPR_U32(ctx, 31, 0x1C1E14u);
    ctx->pc = 0x1C1E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E0Cu;
    // 0x1c1e10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1030u;
    { ctx->pc = 0x1d1030; return; }
    ctx->pc = 0x1C1E14u;
label_1c1e14:
    // 0x1c1e14: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1c1e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1c1e18:
    // 0x1c1e18: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1c1e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1c1e1c:
    // 0x1c1e1c: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x1c1e1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_1c1e20:
    // 0x1c1e20: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1c1e24:
    if (ctx->pc == 0x1C1E24u) {
        ctx->pc = 0x1C1E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E20u;
        // 0x1c1e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1E28u;
        goto label_1c1e28;
    }
    ctx->pc = 0x1C1E20u;
    {
        const bool branch_taken_0x1c1e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C1E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E20u;
        // 0x1c1e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1e20) {
            ctx->pc = 0x1C1E34u;
            goto label_1c1e34;
        }
    }
    ctx->pc = 0x1C1E28u;
label_1c1e28:
    // 0x1c1e28: 0xc0747b4  jal         func_1D1ED0
label_1c1e2c:
    if (ctx->pc == 0x1C1E2Cu) {
        ctx->pc = 0x1C1E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E28u;
        // 0x1c1e2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1E30u;
        goto label_1c1e30;
    }
    ctx->pc = 0x1C1E28u;
    SET_GPR_U32(ctx, 31, 0x1C1E30u);
    ctx->pc = 0x1C1E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E28u;
    // 0x1c1e2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1ED0u;
    { ctx->pc = 0x1d1ed0; return; }
    ctx->pc = 0x1C1E30u;
label_1c1e30:
    // 0x1c1e30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1e34:
    // 0x1c1e34: 0xc0711f0  jal         func_1C47C0
label_1c1e38:
    if (ctx->pc == 0x1C1E38u) {
        ctx->pc = 0x1C1E3Cu;
        goto label_1c1e3c;
    }
    ctx->pc = 0x1C1E34u;
    SET_GPR_U32(ctx, 31, 0x1C1E3Cu);
    ctx->pc = 0x1C47C0u;
    { ctx->pc = 0x1c47c0; return; }
    ctx->pc = 0x1C1E3Cu;
label_1c1e3c:
    // 0x1c1e3c: 0xc0731b0  jal         func_1CC6C0
label_1c1e40:
    if (ctx->pc == 0x1C1E40u) {
        ctx->pc = 0x1C1E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E3Cu;
        // 0x1c1e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1E44u;
        goto label_1c1e44;
    }
    ctx->pc = 0x1C1E3Cu;
    SET_GPR_U32(ctx, 31, 0x1C1E44u);
    ctx->pc = 0x1C1E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E3Cu;
    // 0x1c1e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC6C0u;
    { ctx->pc = 0x1cc6c0; return; }
    ctx->pc = 0x1C1E44u;
label_1c1e44:
    // 0x1c1e44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c1e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1e48:
    // 0x1c1e48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1e48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1e4c:
    // 0x1c1e4c: 0x3e00008  jr          $ra
label_1c1e50:
    if (ctx->pc == 0x1C1E50u) {
        ctx->pc = 0x1C1E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E4Cu;
        // 0x1c1e50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1E54u;
        goto label_1c1e54;
    }
    ctx->pc = 0x1C1E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E4Cu;
        // 0x1c1e50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1E54u;
label_1c1e54:
    // 0x1c1e54: 0x0  nop
    ctx->pc = 0x1c1e54u;
    // NOP
label_1c1e58:
    // 0x1c1e58: 0x0  nop
    ctx->pc = 0x1c1e58u;
    // NOP
label_1c1e5c:
    // 0x1c1e5c: 0x0  nop
    ctx->pc = 0x1c1e5cu;
    // NOP
label_1c1e60:
    // 0x1c1e60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c1e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1c1e64:
    // 0x1c1e64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c1e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1c1e68:
    // 0x1c1e68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c1e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1c1e6c:
    // 0x1c1e6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c1e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1c1e70:
    // 0x1c1e70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c1e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c1e74:
    // 0x1c1e74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c1e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c1e78:
    // 0x1c1e78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c1e78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c1e7c:
    // 0x1c1e7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c1e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c1e80:
    // 0x1c1e80: 0xc041738  jal         func_105CE0
label_1c1e84:
    if (ctx->pc == 0x1C1E84u) {
        ctx->pc = 0x1C1E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E80u;
        // 0x1c1e84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1E88u;
        goto label_1c1e88;
    }
    ctx->pc = 0x1C1E80u;
    SET_GPR_U32(ctx, 31, 0x1C1E88u);
    ctx->pc = 0x1C1E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E80u;
    // 0x1c1e84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1C1E80u, 0x1C1E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1E88u;
label_1c1e88:
    // 0x1c1e88: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1c1e88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1c1e8c:
    // 0x1c1e8c: 0xc070080  jal         func_1C0200
label_1c1e90:
    if (ctx->pc == 0x1C1E90u) {
        ctx->pc = 0x1C1E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E8Cu;
        // 0x1c1e90: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1E94u;
        goto label_1c1e94;
    }
    ctx->pc = 0x1C1E8Cu;
    SET_GPR_U32(ctx, 31, 0x1C1E94u);
    ctx->pc = 0x1C1E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E8Cu;
    // 0x1c1e90: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C1E94u;
label_1c1e94:
    // 0x1c1e94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c1e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1e98:
    // 0x1c1e98: 0xc0416e4  jal         func_105B90
label_1c1e9c:
    if (ctx->pc == 0x1C1E9Cu) {
        ctx->pc = 0x1C1E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E98u;
        // 0x1c1e9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1EA0u;
        goto label_1c1ea0;
    }
    ctx->pc = 0x1C1E98u;
    SET_GPR_U32(ctx, 31, 0x1C1EA0u);
    ctx->pc = 0x1C1E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E98u;
    // 0x1c1e9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1C1E98u, 0x1C1EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1EA0u;
label_1c1ea0:
    // 0x1c1ea0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c1ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c1ea4:
    // 0x1c1ea4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1ea8:
    // 0x1c1ea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1eac:
    // 0x1c1eac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c1eacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1eb0:
    // 0x1c1eb0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1c1eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c1eb4:
    // 0x1c1eb4: 0x240800d0  addiu       $t0, $zero, 0xD0
    ctx->pc = 0x1c1eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1c1eb8:
    // 0x1c1eb8: 0xc0603d4  jal         func_180F50
label_1c1ebc:
    if (ctx->pc == 0x1C1EBCu) {
        ctx->pc = 0x1C1EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1EB8u;
        // 0x1c1ebc: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1EC0u;
        goto label_1c1ec0;
    }
    ctx->pc = 0x1C1EB8u;
    SET_GPR_U32(ctx, 31, 0x1C1EC0u);
    ctx->pc = 0x1C1EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1EB8u;
    // 0x1c1ebc: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F50u;
    { ctx->pc = 0x180f50; return; }
    ctx->pc = 0x1C1EC0u;
label_1c1ec0:
    // 0x1c1ec0: 0xff828970  sd          $v0, -0x7690($gp)
    ctx->pc = 0x1c1ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936944), GPR_U64(ctx, 2));
label_1c1ec4:
    // 0x1c1ec4: 0xc070038  jal         func_1C00E0
label_1c1ec8:
    if (ctx->pc == 0x1C1EC8u) {
        ctx->pc = 0x1C1EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1EC4u;
        // 0x1c1ec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1ECCu;
        goto label_1c1ecc;
    }
    ctx->pc = 0x1C1EC4u;
    SET_GPR_U32(ctx, 31, 0x1C1ECCu);
    ctx->pc = 0x1C1EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1EC4u;
    // 0x1c1ec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1C1ECCu;
label_1c1ecc:
    // 0x1c1ecc: 0xc041738  jal         func_105CE0
label_1c1ed0:
    if (ctx->pc == 0x1C1ED0u) {
        ctx->pc = 0x1C1ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1ECCu;
        // 0x1c1ed0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1ED4u;
        goto label_1c1ed4;
    }
    ctx->pc = 0x1C1ECCu;
    SET_GPR_U32(ctx, 31, 0x1C1ED4u);
    ctx->pc = 0x1C1ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1ECCu;
    // 0x1c1ed0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1C1ECCu, 0x1C1ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1ED4u;
label_1c1ed4:
    // 0x1c1ed4: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1c1ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1c1ed8:
    // 0x1c1ed8: 0xc070080  jal         func_1C0200
label_1c1edc:
    if (ctx->pc == 0x1C1EDCu) {
        ctx->pc = 0x1C1EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1ED8u;
        // 0x1c1edc: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1EE0u;
        goto label_1c1ee0;
    }
    ctx->pc = 0x1C1ED8u;
    SET_GPR_U32(ctx, 31, 0x1C1EE0u);
    ctx->pc = 0x1C1EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1ED8u;
    // 0x1c1edc: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C1EE0u;
label_1c1ee0:
    // 0x1c1ee0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c1ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1ee4:
    // 0x1c1ee4: 0xc0416e4  jal         func_105B90
label_1c1ee8:
    if (ctx->pc == 0x1C1EE8u) {
        ctx->pc = 0x1C1EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1EE4u;
        // 0x1c1ee8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1EECu;
        goto label_1c1eec;
    }
    ctx->pc = 0x1C1EE4u;
    SET_GPR_U32(ctx, 31, 0x1C1EECu);
    ctx->pc = 0x1C1EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1EE4u;
    // 0x1c1ee8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1C1EE4u, 0x1C1EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1EECu;
label_1c1eec:
    // 0x1c1eec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c1eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c1ef0:
    // 0x1c1ef0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1ef4:
    // 0x1c1ef4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1ef8:
    // 0x1c1ef8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c1ef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1efc:
    // 0x1c1efc: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1c1efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1c1f00:
    // 0x1c1f00: 0x24080130  addiu       $t0, $zero, 0x130
    ctx->pc = 0x1c1f00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
label_1c1f04:
    // 0x1c1f04: 0xc0603d4  jal         func_180F50
label_1c1f08:
    if (ctx->pc == 0x1C1F08u) {
        ctx->pc = 0x1C1F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F04u;
        // 0x1c1f08: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1F0Cu;
        goto label_1c1f0c;
    }
    ctx->pc = 0x1C1F04u;
    SET_GPR_U32(ctx, 31, 0x1C1F0Cu);
    ctx->pc = 0x1C1F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1F04u;
    // 0x1c1f08: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F50u;
    { ctx->pc = 0x180f50; return; }
    ctx->pc = 0x1C1F0Cu;
label_1c1f0c:
    // 0x1c1f0c: 0xff828960  sd          $v0, -0x76A0($gp)
    ctx->pc = 0x1c1f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936928), GPR_U64(ctx, 2));
label_1c1f10:
    // 0x1c1f10: 0xc070038  jal         func_1C00E0
label_1c1f14:
    if (ctx->pc == 0x1C1F14u) {
        ctx->pc = 0x1C1F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F10u;
        // 0x1c1f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1F18u;
        goto label_1c1f18;
    }
    ctx->pc = 0x1C1F10u;
    SET_GPR_U32(ctx, 31, 0x1C1F18u);
    ctx->pc = 0x1C1F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1F10u;
    // 0x1c1f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1C1F18u;
label_1c1f18:
    // 0x1c1f18: 0xc041738  jal         func_105CE0
label_1c1f1c:
    if (ctx->pc == 0x1C1F1Cu) {
        ctx->pc = 0x1C1F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F18u;
        // 0x1c1f1c: 0x240407f8  addiu       $a0, $zero, 0x7F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1F20u;
        goto label_1c1f20;
    }
    ctx->pc = 0x1C1F18u;
    SET_GPR_U32(ctx, 31, 0x1C1F20u);
    ctx->pc = 0x1C1F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1F18u;
    // 0x1c1f1c: 0x240407f8  addiu       $a0, $zero, 0x7F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1C1F18u, 0x1C1F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1F20u;
label_1c1f20:
    // 0x1c1f20: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1c1f20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1c1f24:
    // 0x1c1f24: 0xc070080  jal         func_1C0200
label_1c1f28:
    if (ctx->pc == 0x1C1F28u) {
        ctx->pc = 0x1C1F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F24u;
        // 0x1c1f28: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1F2Cu;
        goto label_1c1f2c;
    }
    ctx->pc = 0x1C1F24u;
    SET_GPR_U32(ctx, 31, 0x1C1F2Cu);
    ctx->pc = 0x1C1F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1F24u;
    // 0x1c1f28: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C1F2Cu;
label_1c1f2c:
    // 0x1c1f2c: 0x240407f8  addiu       $a0, $zero, 0x7F8
    ctx->pc = 0x1c1f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
label_1c1f30:
    // 0x1c1f30: 0xc0416e4  jal         func_105B90
label_1c1f34:
    if (ctx->pc == 0x1C1F34u) {
        ctx->pc = 0x1C1F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F30u;
        // 0x1c1f34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1F38u;
        goto label_1c1f38;
    }
    ctx->pc = 0x1C1F30u;
    SET_GPR_U32(ctx, 31, 0x1C1F38u);
    ctx->pc = 0x1C1F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1F30u;
    // 0x1c1f34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1C1F30u, 0x1C1F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1F38u;
label_1c1f38:
    // 0x1c1f38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c1f38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c1f3c:
    // 0x1c1f3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1f40:
    // 0x1c1f40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1f44:
    // 0x1c1f44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c1f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1f48:
    // 0x1c1f48: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1c1f48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1c1f4c:
    // 0x1c1f4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c1f4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1f50:
    // 0x1c1f50: 0xc0603d4  jal         func_180F50
label_1c1f54:
    if (ctx->pc == 0x1C1F54u) {
        ctx->pc = 0x1C1F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F50u;
        // 0x1c1f54: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1F58u;
        goto label_1c1f58;
    }
    ctx->pc = 0x1C1F50u;
    SET_GPR_U32(ctx, 31, 0x1C1F58u);
    ctx->pc = 0x1C1F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1F50u;
    // 0x1c1f54: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F50u;
    { ctx->pc = 0x180f50; return; }
    ctx->pc = 0x1C1F58u;
label_1c1f58:
    // 0x1c1f58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1f5c:
    // 0x1c1f5c: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x1c1f60u;
    return;
}
