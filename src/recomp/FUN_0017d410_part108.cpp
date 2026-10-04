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


void FUN_0017d410_part108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x1b1d48u: goto label_1b1d48;
        case 0x1b1d4cu: goto label_1b1d4c;
        case 0x1b1d50u: goto label_1b1d50;
        case 0x1b1d54u: goto label_1b1d54;
        case 0x1b1d58u: goto label_1b1d58;
        case 0x1b1d5cu: goto label_1b1d5c;
        case 0x1b1d60u: goto label_1b1d60;
        case 0x1b1d64u: goto label_1b1d64;
        case 0x1b1d68u: goto label_1b1d68;
        case 0x1b1d6cu: goto label_1b1d6c;
        case 0x1b1d70u: goto label_1b1d70;
        case 0x1b1d74u: goto label_1b1d74;
        case 0x1b1d78u: goto label_1b1d78;
        case 0x1b1d7cu: goto label_1b1d7c;
        case 0x1b1d80u: goto label_1b1d80;
        case 0x1b1d84u: goto label_1b1d84;
        case 0x1b1d88u: goto label_1b1d88;
        case 0x1b1d8cu: goto label_1b1d8c;
        case 0x1b1d90u: goto label_1b1d90;
        case 0x1b1d94u: goto label_1b1d94;
        case 0x1b1d98u: goto label_1b1d98;
        case 0x1b1d9cu: goto label_1b1d9c;
        case 0x1b1da0u: goto label_1b1da0;
        case 0x1b1da4u: goto label_1b1da4;
        case 0x1b1da8u: goto label_1b1da8;
        case 0x1b1dacu: goto label_1b1dac;
        case 0x1b1db0u: goto label_1b1db0;
        case 0x1b1db4u: goto label_1b1db4;
        case 0x1b1db8u: goto label_1b1db8;
        case 0x1b1dbcu: goto label_1b1dbc;
        case 0x1b1dc0u: goto label_1b1dc0;
        case 0x1b1dc4u: goto label_1b1dc4;
        case 0x1b1dc8u: goto label_1b1dc8;
        case 0x1b1dccu: goto label_1b1dcc;
        case 0x1b1dd0u: goto label_1b1dd0;
        case 0x1b1dd4u: goto label_1b1dd4;
        case 0x1b1dd8u: goto label_1b1dd8;
        case 0x1b1ddcu: goto label_1b1ddc;
        case 0x1b1de0u: goto label_1b1de0;
        case 0x1b1de4u: goto label_1b1de4;
        case 0x1b1de8u: goto label_1b1de8;
        case 0x1b1decu: goto label_1b1dec;
        case 0x1b1df0u: goto label_1b1df0;
        case 0x1b1df4u: goto label_1b1df4;
        case 0x1b1df8u: goto label_1b1df8;
        case 0x1b1dfcu: goto label_1b1dfc;
        case 0x1b1e00u: goto label_1b1e00;
        case 0x1b1e04u: goto label_1b1e04;
        case 0x1b1e08u: goto label_1b1e08;
        case 0x1b1e0cu: goto label_1b1e0c;
        case 0x1b1e10u: goto label_1b1e10;
        case 0x1b1e14u: goto label_1b1e14;
        case 0x1b1e18u: goto label_1b1e18;
        case 0x1b1e1cu: goto label_1b1e1c;
        case 0x1b1e20u: goto label_1b1e20;
        case 0x1b1e24u: goto label_1b1e24;
        case 0x1b1e28u: goto label_1b1e28;
        case 0x1b1e2cu: goto label_1b1e2c;
        case 0x1b1e30u: goto label_1b1e30;
        case 0x1b1e34u: goto label_1b1e34;
        case 0x1b1e38u: goto label_1b1e38;
        case 0x1b1e3cu: goto label_1b1e3c;
        case 0x1b1e40u: goto label_1b1e40;
        case 0x1b1e44u: goto label_1b1e44;
        case 0x1b1e48u: goto label_1b1e48;
        case 0x1b1e4cu: goto label_1b1e4c;
        case 0x1b1e50u: goto label_1b1e50;
        case 0x1b1e54u: goto label_1b1e54;
        case 0x1b1e58u: goto label_1b1e58;
        case 0x1b1e5cu: goto label_1b1e5c;
        case 0x1b1e60u: goto label_1b1e60;
        case 0x1b1e64u: goto label_1b1e64;
        case 0x1b1e68u: goto label_1b1e68;
        case 0x1b1e6cu: goto label_1b1e6c;
        case 0x1b1e70u: goto label_1b1e70;
        case 0x1b1e74u: goto label_1b1e74;
        case 0x1b1e78u: goto label_1b1e78;
        case 0x1b1e7cu: goto label_1b1e7c;
        case 0x1b1e80u: goto label_1b1e80;
        case 0x1b1e84u: goto label_1b1e84;
        case 0x1b1e88u: goto label_1b1e88;
        case 0x1b1e8cu: goto label_1b1e8c;
        case 0x1b1e90u: goto label_1b1e90;
        case 0x1b1e94u: goto label_1b1e94;
        case 0x1b1e98u: goto label_1b1e98;
        case 0x1b1e9cu: goto label_1b1e9c;
        case 0x1b1ea0u: goto label_1b1ea0;
        case 0x1b1ea4u: goto label_1b1ea4;
        case 0x1b1ea8u: goto label_1b1ea8;
        case 0x1b1eacu: goto label_1b1eac;
        case 0x1b1eb0u: goto label_1b1eb0;
        case 0x1b1eb4u: goto label_1b1eb4;
        case 0x1b1eb8u: goto label_1b1eb8;
        case 0x1b1ebcu: goto label_1b1ebc;
        case 0x1b1ec0u: goto label_1b1ec0;
        case 0x1b1ec4u: goto label_1b1ec4;
        case 0x1b1ec8u: goto label_1b1ec8;
        case 0x1b1eccu: goto label_1b1ecc;
        case 0x1b1ed0u: goto label_1b1ed0;
        case 0x1b1ed4u: goto label_1b1ed4;
        case 0x1b1ed8u: goto label_1b1ed8;
        case 0x1b1edcu: goto label_1b1edc;
        case 0x1b1ee0u: goto label_1b1ee0;
        case 0x1b1ee4u: goto label_1b1ee4;
        case 0x1b1ee8u: goto label_1b1ee8;
        case 0x1b1eecu: goto label_1b1eec;
        case 0x1b1ef0u: goto label_1b1ef0;
        case 0x1b1ef4u: goto label_1b1ef4;
        case 0x1b1ef8u: goto label_1b1ef8;
        case 0x1b1efcu: goto label_1b1efc;
        case 0x1b1f00u: goto label_1b1f00;
        case 0x1b1f04u: goto label_1b1f04;
        case 0x1b1f08u: goto label_1b1f08;
        case 0x1b1f0cu: goto label_1b1f0c;
        case 0x1b1f10u: goto label_1b1f10;
        case 0x1b1f14u: goto label_1b1f14;
        case 0x1b1f18u: goto label_1b1f18;
        case 0x1b1f1cu: goto label_1b1f1c;
        case 0x1b1f20u: goto label_1b1f20;
        case 0x1b1f24u: goto label_1b1f24;
        case 0x1b1f28u: goto label_1b1f28;
        case 0x1b1f2cu: goto label_1b1f2c;
        case 0x1b1f30u: goto label_1b1f30;
        case 0x1b1f34u: goto label_1b1f34;
        case 0x1b1f38u: goto label_1b1f38;
        case 0x1b1f3cu: goto label_1b1f3c;
        case 0x1b1f40u: goto label_1b1f40;
        case 0x1b1f44u: goto label_1b1f44;
        case 0x1b1f48u: goto label_1b1f48;
        case 0x1b1f4cu: goto label_1b1f4c;
        case 0x1b1f50u: goto label_1b1f50;
        case 0x1b1f54u: goto label_1b1f54;
        case 0x1b1f58u: goto label_1b1f58;
        case 0x1b1f5cu: goto label_1b1f5c;
        case 0x1b1f60u: goto label_1b1f60;
        case 0x1b1f64u: goto label_1b1f64;
        case 0x1b1f68u: goto label_1b1f68;
        case 0x1b1f6cu: goto label_1b1f6c;
        case 0x1b1f70u: goto label_1b1f70;
        case 0x1b1f74u: goto label_1b1f74;
        case 0x1b1f78u: goto label_1b1f78;
        case 0x1b1f7cu: goto label_1b1f7c;
        case 0x1b1f80u: goto label_1b1f80;
        case 0x1b1f84u: goto label_1b1f84;
        case 0x1b1f88u: goto label_1b1f88;
        case 0x1b1f8cu: goto label_1b1f8c;
        case 0x1b1f90u: goto label_1b1f90;
        case 0x1b1f94u: goto label_1b1f94;
        case 0x1b1f98u: goto label_1b1f98;
        case 0x1b1f9cu: goto label_1b1f9c;
        case 0x1b1fa0u: goto label_1b1fa0;
        case 0x1b1fa4u: goto label_1b1fa4;
        case 0x1b1fa8u: goto label_1b1fa8;
        case 0x1b1facu: goto label_1b1fac;
        case 0x1b1fb0u: goto label_1b1fb0;
        case 0x1b1fb4u: goto label_1b1fb4;
        case 0x1b1fb8u: goto label_1b1fb8;
        case 0x1b1fbcu: goto label_1b1fbc;
        case 0x1b1fc0u: goto label_1b1fc0;
        case 0x1b1fc4u: goto label_1b1fc4;
        case 0x1b1fc8u: goto label_1b1fc8;
        case 0x1b1fccu: goto label_1b1fcc;
        default: return;
    }

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
            goto label_1b1d48;
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
        goto label_1b1d48;
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
            goto label_1b1e0c;
        }
    }
    ctx->pc = 0x1B1D48u;
label_1b1d48:
    // 0x1b1d48: 0x3c150029  lui         $s5, 0x29
    ctx->pc = 0x1b1d48u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)41 << 16));
label_1b1d4c:
    // 0x1b1d4c: 0xc06921c  jal         func_1A4870
label_1b1d50:
    if (ctx->pc == 0x1B1D50u) {
        ctx->pc = 0x1B1D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D4Cu;
        // 0x1b1d50: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1D54u;
        goto label_1b1d54;
    }
    ctx->pc = 0x1B1D4Cu;
    SET_GPR_U32(ctx, 31, 0x1B1D54u);
    ctx->pc = 0x1B1D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1D4Cu;
    // 0x1b1d50: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    { ctx->pc = 0x1a4870; return; }
    ctx->pc = 0x1B1D54u;
label_1b1d54:
    // 0x1b1d54: 0x440002d  bltz        $v0, . + 4 + (0x2D << 2)
label_1b1d58:
    if (ctx->pc == 0x1B1D58u) {
        ctx->pc = 0x1B1D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D54u;
        // 0x1b1d58: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1D5Cu;
        goto label_1b1d5c;
    }
    ctx->pc = 0x1B1D54u;
    {
        const bool branch_taken_0x1b1d54 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B1D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D54u;
        // 0x1b1d58: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1d54) {
            ctx->pc = 0x1B1E0Cu;
            goto label_1b1e0c;
        }
    }
    ctx->pc = 0x1B1D5Cu;
label_1b1d5c:
    // 0x1b1d5c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1b1d60:
    if (ctx->pc == 0x1B1D60u) {
        ctx->pc = 0x1B1D64u;
        goto label_1b1d64;
    }
    ctx->pc = 0x1B1D5Cu;
    {
        const bool branch_taken_0x1b1d5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1d5c) {
            ctx->pc = 0x1B1D70u;
            goto label_1b1d70;
        }
    }
    ctx->pc = 0x1B1D64u;
label_1b1d64:
    // 0x1b1d64: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1b1d64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1b1d68:
    // 0x1b1d68: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1b1d6c:
    if (ctx->pc == 0x1B1D6Cu) {
        ctx->pc = 0x1B1D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D68u;
        // 0x1b1d6c: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1D70u;
        goto label_1b1d70;
    }
    ctx->pc = 0x1B1D68u;
    {
        const bool branch_taken_0x1b1d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D68u;
        // 0x1b1d6c: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1d68) {
            ctx->pc = 0x1B1D80u;
            goto label_1b1d80;
        }
    }
    ctx->pc = 0x1B1D70u;
label_1b1d70:
    // 0x1b1d70: 0xc069210  jal         func_1A4840
label_1b1d74:
    if (ctx->pc == 0x1B1D74u) {
        ctx->pc = 0x1B1D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D70u;
        // 0x1b1d74: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1D78u;
        goto label_1b1d78;
    }
    ctx->pc = 0x1B1D70u;
    SET_GPR_U32(ctx, 31, 0x1B1D78u);
    ctx->pc = 0x1B1D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1D70u;
    // 0x1b1d74: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B1D78u;
label_1b1d78:
    // 0x1b1d78: 0x10000024  b           . + 4 + (0x24 << 2)
label_1b1d7c:
    if (ctx->pc == 0x1B1D7Cu) {
        ctx->pc = 0x1B1D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D78u;
        // 0x1b1d7c: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1D80u;
        goto label_1b1d80;
    }
    ctx->pc = 0x1B1D78u;
    {
        const bool branch_taken_0x1b1d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D78u;
        // 0x1b1d7c: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1d78) {
            ctx->pc = 0x1B1E0Cu;
            goto label_1b1e0c;
        }
    }
    ctx->pc = 0x1B1D80u;
label_1b1d80:
    // 0x1b1d80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b1d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1d84:
    // 0x1b1d84: 0x245062b0  addiu       $s0, $v0, 0x62B0
    ctx->pc = 0x1b1d84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25264));
label_1b1d88:
    // 0x1b1d88: 0xac5662b0  sw          $s6, 0x62B0($v0)
    ctx->pc = 0x1b1d88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25264), GPR_U32(ctx, 22));
label_1b1d8c:
    // 0x1b1d8c: 0xae140004  sw          $s4, 0x4($s0)
    ctx->pc = 0x1b1d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
label_1b1d90:
    // 0x1b1d90: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x1b1d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_1b1d94:
    // 0x1b1d94: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x1b1d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
label_1b1d98:
    // 0x1b1d98: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x1b1d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_1b1d9c:
    // 0x1b1d9c: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x1b1d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_1b1da0:
    // 0x1b1da0: 0xc08f4fe  jal         func_23D3F8
label_1b1da4:
    if (ctx->pc == 0x1B1DA4u) {
        ctx->pc = 0x1B1DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DA0u;
        // 0x1b1da4: 0xae120010  sw          $s2, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1DA8u;
        goto label_1b1da8;
    }
    ctx->pc = 0x1B1DA0u;
    SET_GPR_U32(ctx, 31, 0x1B1DA8u);
    ctx->pc = 0x1B1DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1DA0u;
    // 0x1b1da4: 0xae120010  sw          $s2, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D3F8u;
    { ctx->pc = 0x23d3f8; return; }
    ctx->pc = 0x1B1DA8u;
label_1b1da8:
    // 0x1b1da8: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_1b1dac:
    if (ctx->pc == 0x1B1DACu) {
        ctx->pc = 0x1B1DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DA8u;
        // 0x1b1dac: 0xa2000413  sb          $zero, 0x413($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1DB0u;
        goto label_1b1db0;
    }
    ctx->pc = 0x1B1DA8u;
    {
        const bool branch_taken_0x1b1da8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1B1DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DA8u;
        // 0x1b1dac: 0xa2000413  sb          $zero, 0x413($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1da8) {
            ctx->pc = 0x1B1DBCu;
            goto label_1b1dbc;
        }
    }
    ctx->pc = 0x1B1DB0u;
label_1b1db0:
    // 0x1b1db0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b1db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b1db4:
    // 0x1b1db4: 0xc069bee  jal         func_1A6FB8
label_1b1db8:
    if (ctx->pc == 0x1B1DB8u) {
        ctx->pc = 0x1B1DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DB4u;
        // 0x1b1db8: 0x112980  sll         $a1, $s1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1DBCu;
        goto label_1b1dbc;
    }
    ctx->pc = 0x1B1DB4u;
    SET_GPR_U32(ctx, 31, 0x1B1DBCu);
    ctx->pc = 0x1B1DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1DB4u;
    // 0x1b1db8: 0x112980  sll         $a1, $s1, 6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    { ctx->pc = 0x1a6fb8; return; }
    ctx->pc = 0x1B1DBCu;
label_1b1dbc:
    // 0x1b1dbc: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b1dbcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
label_1b1dc0:
    // 0x1b1dc0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b1dc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1dc4:
    // 0x1b1dc4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1b1dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b1dc8:
    // 0x1b1dc8: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b1dc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
label_1b1dcc:
    // 0x1b1dcc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b1dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b1dd0:
    // 0x1b1dd0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b1dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1b1dd4:
    // 0x1b1dd4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b1dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b1dd8:
    // 0x1b1dd8: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1b1dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
label_1b1ddc:
    // 0x1b1ddc: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b1ddcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b1de0:
    // 0x1b1de0: 0xc069e2a  jal         func_1A78A8
label_1b1de4:
    if (ctx->pc == 0x1B1DE4u) {
        ctx->pc = 0x1B1DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DE0u;
        // 0x1b1de4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1DE8u;
        goto label_1b1de8;
    }
    ctx->pc = 0x1B1DE0u;
    SET_GPR_U32(ctx, 31, 0x1B1DE8u);
    ctx->pc = 0x1B1DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1DE0u;
    // 0x1b1de4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B1DE8u;
label_1b1de8:
    // 0x1b1de8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1dec:
    // 0x1b1dec: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_1b1df0:
    if (ctx->pc == 0x1B1DF0u) {
        ctx->pc = 0x1B1DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DECu;
        // 0x1b1df0: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1DF4u;
        goto label_1b1df4;
    }
    ctx->pc = 0x1B1DECu;
    {
        const bool branch_taken_0x1b1dec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DECu;
        // 0x1b1df0: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1dec) {
            ctx->pc = 0x1B1E00u;
            goto label_1b1e00;
        }
    }
    ctx->pc = 0x1B1DF4u;
label_1b1df4:
    // 0x1b1df4: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1b1df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1b1df8:
    // 0x1b1df8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b1dfc:
    if (ctx->pc == 0x1B1DFCu) {
        ctx->pc = 0x1B1DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DF8u;
        // 0x1b1dfc: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1E00u;
        goto label_1b1e00;
    }
    ctx->pc = 0x1B1DF8u;
    {
        const bool branch_taken_0x1b1df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DF8u;
        // 0x1b1dfc: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1df8) {
            ctx->pc = 0x1B1E08u;
            goto label_1b1e08;
        }
    }
    ctx->pc = 0x1B1E00u;
label_1b1e00:
    // 0x1b1e00: 0xc069210  jal         func_1A4840
label_1b1e04:
    if (ctx->pc == 0x1B1E04u) {
        ctx->pc = 0x1B1E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E00u;
        // 0x1b1e04: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1E08u;
        goto label_1b1e08;
    }
    ctx->pc = 0x1B1E00u;
    SET_GPR_U32(ctx, 31, 0x1B1E08u);
    ctx->pc = 0x1B1E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E00u;
    // 0x1b1e04: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B1E08u;
label_1b1e08:
    // 0x1b1e08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1e08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1e0c:
    // 0x1b1e0c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1b1e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1b1e10:
    // 0x1b1e10: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1b1e10u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1b1e14:
    // 0x1b1e14: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1b1e14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1b1e18:
    // 0x1b1e18: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1b1e18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1b1e1c:
    // 0x1b1e1c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b1e1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b1e20:
    // 0x1b1e20: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b1e20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b1e24:
    // 0x1b1e24: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b1e24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b1e28:
    // 0x1b1e28: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b1e28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b1e2c:
    // 0x1b1e2c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b1e2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b1e30:
    // 0x1b1e30: 0x3e00008  jr          $ra
label_1b1e34:
    if (ctx->pc == 0x1B1E34u) {
        ctx->pc = 0x1B1E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E30u;
        // 0x1b1e34: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1E38u;
        goto label_1b1e38;
    }
    ctx->pc = 0x1B1E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E30u;
        // 0x1b1e34: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1E38u;
label_1b1e38:
    // 0x1b1e38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b1e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1b1e3c:
    // 0x1b1e3c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1b1e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1b1e40:
    // 0x1b1e40: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b1e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1b1e44:
    // 0x1b1e44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b1e44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b1e48:
    // 0x1b1e48: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1b1e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1b1e4c:
    // 0x1b1e4c: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
label_1b1e50:
    if (ctx->pc == 0x1B1E50u) {
        ctx->pc = 0x1B1E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E4Cu;
        // 0x1b1e50: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1E54u;
        goto label_1b1e54;
    }
    ctx->pc = 0x1B1E4Cu;
    {
        const bool branch_taken_0x1b1e4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E4Cu;
        // 0x1b1e50: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1e4c) {
            ctx->pc = 0x1B1EA4u;
            goto label_1b1ea4;
        }
    }
    ctx->pc = 0x1B1E54u;
label_1b1e54:
    // 0x1b1e54: 0x3c120037  lui         $s2, 0x37
    ctx->pc = 0x1b1e54u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)55 << 16));
label_1b1e58:
    // 0x1b1e58: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b1e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_1b1e5c:
    // 0x1b1e5c: 0x264367c0  addiu       $v1, $s2, 0x67C0
    ctx->pc = 0x1b1e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 26560));
label_1b1e60:
    // 0x1b1e60: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x1b1e60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1b1e64:
    // 0x1b1e64: 0xc08f3d6  jal         func_23CF58
label_1b1e68:
    if (ctx->pc == 0x1B1E68u) {
        ctx->pc = 0x1B1E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E64u;
        // 0x1b1e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1E6Cu;
        goto label_1b1e6c;
    }
    ctx->pc = 0x1B1E64u;
    SET_GPR_U32(ctx, 31, 0x1B1E6Cu);
    ctx->pc = 0x1B1E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E64u;
    // 0x1b1e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF58u;
    { ctx->pc = 0x23cf58; return; }
    ctx->pc = 0x1B1E6Cu;
label_1b1e6c:
    // 0x1b1e6c: 0x2c420400  sltiu       $v0, $v0, 0x400
    ctx->pc = 0x1b1e6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
label_1b1e70:
    // 0x1b1e70: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1b1e74:
    if (ctx->pc == 0x1B1E74u) {
        ctx->pc = 0x1B1E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E70u;
        // 0x1b1e74: 0x241003ff  addiu       $s0, $zero, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1E78u;
        goto label_1b1e78;
    }
    ctx->pc = 0x1B1E70u;
    {
        const bool branch_taken_0x1b1e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1e70) {
            ctx->pc = 0x1B1E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1E70u;
            // 0x1b1e74: 0x241003ff  addiu       $s0, $zero, 0x3FF (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1E84u;
            goto label_1b1e84;
        }
    }
    ctx->pc = 0x1B1E78u;
label_1b1e78:
    // 0x1b1e78: 0xc08f3d6  jal         func_23CF58
label_1b1e7c:
    if (ctx->pc == 0x1B1E7Cu) {
        ctx->pc = 0x1B1E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E78u;
        // 0x1b1e7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1E80u;
        goto label_1b1e80;
    }
    ctx->pc = 0x1B1E78u;
    SET_GPR_U32(ctx, 31, 0x1B1E80u);
    ctx->pc = 0x1B1E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E78u;
    // 0x1b1e7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF58u;
    { ctx->pc = 0x23cf58; return; }
    ctx->pc = 0x1B1E80u;
label_1b1e80:
    // 0x1b1e80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1e80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1e84:
    // 0x1b1e84: 0x264267c0  addiu       $v0, $s2, 0x67C0
    ctx->pc = 0x1b1e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 26560));
label_1b1e88:
    // 0x1b1e88: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x1b1e88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
label_1b1e8c:
    // 0x1b1e8c: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x1b1e8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_1b1e90:
    // 0x1b1e90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b1e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b1e94:
    // 0x1b1e94: 0xc08e93e  jal         func_23A4F8
label_1b1e98:
    if (ctx->pc == 0x1B1E98u) {
        ctx->pc = 0x1B1E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E94u;
        // 0x1b1e98: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1E9Cu;
        goto label_1b1e9c;
    }
    ctx->pc = 0x1B1E94u;
    SET_GPR_U32(ctx, 31, 0x1B1E9Cu);
    ctx->pc = 0x1B1E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E94u;
    // 0x1b1e98: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1B1E9Cu;
label_1b1e9c:
    // 0x1b1e9c: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x1b1e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_1b1ea0:
    // 0x1b1ea0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1b1ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1b1ea4:
    // 0x1b1ea4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b1ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b1ea8:
    // 0x1b1ea8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b1ea8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b1eac:
    // 0x1b1eac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b1eacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b1eb0:
    // 0x1b1eb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1eb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b1eb4:
    // 0x1b1eb4: 0x3e00008  jr          $ra
label_1b1eb8:
    if (ctx->pc == 0x1B1EB8u) {
        ctx->pc = 0x1B1EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1EB4u;
        // 0x1b1eb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1EBCu;
        goto label_1b1ebc;
    }
    ctx->pc = 0x1B1EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1EB4u;
        // 0x1b1eb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1EBCu;
label_1b1ebc:
    // 0x1b1ebc: 0x0  nop
    ctx->pc = 0x1b1ebcu;
    // NOP
label_1b1ec0:
    // 0x1b1ec0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b1ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1b1ec4:
    // 0x1b1ec4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b1ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b1ec8:
    // 0x1b1ec8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1b1ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_1b1ecc:
    // 0x1b1ecc: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1b1eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_1b1ed0:
    // 0x1b1ed0: 0x24576200  addiu       $s7, $v0, 0x6200
    ctx->pc = 0x1b1ed0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 25088));
label_1b1ed4:
    // 0x1b1ed4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1b1ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1b1ed8:
    // 0x1b1ed8: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1b1ed8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b1edc:
    // 0x1b1edc: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b1edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1b1ee0:
    // 0x1b1ee0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b1ee0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b1ee4:
    // 0x1b1ee4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b1ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1b1ee8:
    // 0x1b1ee8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b1ee8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b1eec:
    // 0x1b1eec: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1b1eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1b1ef0:
    // 0x1b1ef0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1b1ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_1b1ef4:
    // 0x1b1ef4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b1ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1b1ef8:
    // 0x1b1ef8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b1ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1b1efc:
    // 0x1b1efc: 0x8ee20024  lw          $v0, 0x24($s7)
    ctx->pc = 0x1b1efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
label_1b1f00:
    // 0x1b1f00: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b1f04:
    if (ctx->pc == 0x1B1F04u) {
        ctx->pc = 0x1B1F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F00u;
        // 0x1b1f04: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1F08u;
        goto label_1b1f08;
    }
    ctx->pc = 0x1B1F00u;
    {
        const bool branch_taken_0x1b1f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F00u;
        // 0x1b1f04: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1f00) {
            ctx->pc = 0x1B1F10u;
            goto label_1b1f10;
        }
    }
    ctx->pc = 0x1B1F08u;
label_1b1f08:
    // 0x1b1f08: 0x10000032  b           . + 4 + (0x32 << 2)
label_1b1f0c:
    if (ctx->pc == 0x1B1F0Cu) {
        ctx->pc = 0x1B1F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F08u;
        // 0x1b1f0c: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1F10u;
        goto label_1b1f10;
    }
    ctx->pc = 0x1B1F08u;
    {
        const bool branch_taken_0x1b1f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F08u;
        // 0x1b1f0c: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1f08) {
            ctx->pc = 0x1B1FD4u;
            { ctx->pc = 0x1b1fd4; return; }
        }
    }
    ctx->pc = 0x1B1F10u;
label_1b1f10:
    // 0x1b1f10: 0x3c150029  lui         $s5, 0x29
    ctx->pc = 0x1b1f10u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)41 << 16));
label_1b1f14:
    // 0x1b1f14: 0xc06921c  jal         func_1A4870
label_1b1f18:
    if (ctx->pc == 0x1B1F18u) {
        ctx->pc = 0x1B1F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F14u;
        // 0x1b1f18: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1F1Cu;
        goto label_1b1f1c;
    }
    ctx->pc = 0x1B1F14u;
    SET_GPR_U32(ctx, 31, 0x1B1F1Cu);
    ctx->pc = 0x1B1F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1F14u;
    // 0x1b1f18: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    { ctx->pc = 0x1a4870; return; }
    ctx->pc = 0x1B1F1Cu;
label_1b1f1c:
    // 0x1b1f1c: 0x440002d  bltz        $v0, . + 4 + (0x2D << 2)
label_1b1f20:
    if (ctx->pc == 0x1B1F20u) {
        ctx->pc = 0x1B1F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F1Cu;
        // 0x1b1f20: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1F24u;
        goto label_1b1f24;
    }
    ctx->pc = 0x1B1F1Cu;
    {
        const bool branch_taken_0x1b1f1c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B1F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F1Cu;
        // 0x1b1f20: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1f1c) {
            ctx->pc = 0x1B1FD4u;
            { ctx->pc = 0x1b1fd4; return; }
        }
    }
    ctx->pc = 0x1B1F24u;
label_1b1f24:
    // 0x1b1f24: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_1b1f28:
    if (ctx->pc == 0x1B1F28u) {
        ctx->pc = 0x1B1F2Cu;
        goto label_1b1f2c;
    }
    ctx->pc = 0x1B1F24u;
    {
        const bool branch_taken_0x1b1f24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1f24) {
            ctx->pc = 0x1B1F38u;
            goto label_1b1f38;
        }
    }
    ctx->pc = 0x1B1F2Cu;
label_1b1f2c:
    // 0x1b1f2c: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x1b1f2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_1b1f30:
    // 0x1b1f30: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1b1f34:
    if (ctx->pc == 0x1B1F34u) {
        ctx->pc = 0x1B1F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F30u;
        // 0x1b1f34: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1F38u;
        goto label_1b1f38;
    }
    ctx->pc = 0x1B1F30u;
    {
        const bool branch_taken_0x1b1f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F30u;
        // 0x1b1f34: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1f30) {
            ctx->pc = 0x1B1F48u;
            goto label_1b1f48;
        }
    }
    ctx->pc = 0x1B1F38u;
label_1b1f38:
    // 0x1b1f38: 0xc069210  jal         func_1A4840
label_1b1f3c:
    if (ctx->pc == 0x1B1F3Cu) {
        ctx->pc = 0x1B1F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F38u;
        // 0x1b1f3c: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1F40u;
        goto label_1b1f40;
    }
    ctx->pc = 0x1B1F38u;
    SET_GPR_U32(ctx, 31, 0x1B1F40u);
    ctx->pc = 0x1B1F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1F38u;
    // 0x1b1f3c: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B1F40u;
label_1b1f40:
    // 0x1b1f40: 0x10000024  b           . + 4 + (0x24 << 2)
label_1b1f44:
    if (ctx->pc == 0x1B1F44u) {
        ctx->pc = 0x1B1F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F40u;
        // 0x1b1f44: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1F48u;
        goto label_1b1f48;
    }
    ctx->pc = 0x1B1F40u;
    {
        const bool branch_taken_0x1b1f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F40u;
        // 0x1b1f44: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1f40) {
            ctx->pc = 0x1B1FD4u;
            { ctx->pc = 0x1b1fd4; return; }
        }
    }
    ctx->pc = 0x1B1F48u;
label_1b1f48:
    // 0x1b1f48: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1b1f48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1b1f4c:
    // 0x1b1f4c: 0x245162b0  addiu       $s1, $v0, 0x62B0
    ctx->pc = 0x1b1f4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 25264));
label_1b1f50:
    // 0x1b1f50: 0x261067c0  addiu       $s0, $s0, 0x67C0
    ctx->pc = 0x1b1f50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26560));
label_1b1f54:
    // 0x1b1f54: 0xac5362b0  sw          $s3, 0x62B0($v0)
    ctx->pc = 0x1b1f54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25264), GPR_U32(ctx, 19));
label_1b1f58:
    // 0x1b1f58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b1f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b1f5c:
    // 0x1b1f5c: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x1b1f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
label_1b1f60:
    // 0x1b1f60: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x1b1f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_1b1f64:
    // 0x1b1f64: 0xae340004  sw          $s4, 0x4($s1)
    ctx->pc = 0x1b1f64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 20));
label_1b1f68:
    // 0x1b1f68: 0xc08f4fe  jal         func_23D3F8
label_1b1f6c:
    if (ctx->pc == 0x1B1F6Cu) {
        ctx->pc = 0x1B1F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F68u;
        // 0x1b1f6c: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1F70u;
        goto label_1b1f70;
    }
    ctx->pc = 0x1B1F68u;
    SET_GPR_U32(ctx, 31, 0x1B1F70u);
    ctx->pc = 0x1B1F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1F68u;
    // 0x1b1f6c: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D3F8u;
    { ctx->pc = 0x23d3f8; return; }
    ctx->pc = 0x1B1F70u;
label_1b1f70:
    // 0x1b1f70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1f74:
    // 0x1b1f74: 0xa2200413  sb          $zero, 0x413($s1)
    ctx->pc = 0x1b1f74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1043), (uint8_t)GPR_U32(ctx, 0));
label_1b1f78:
    // 0x1b1f78: 0xc069bee  jal         func_1A6FB8
label_1b1f7c:
    if (ctx->pc == 0x1B1F7Cu) {
        ctx->pc = 0x1B1F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F78u;
        // 0x1b1f7c: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1F80u;
        goto label_1b1f80;
    }
    ctx->pc = 0x1B1F78u;
    SET_GPR_U32(ctx, 31, 0x1B1F80u);
    ctx->pc = 0x1B1F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1F78u;
    // 0x1b1f7c: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    { ctx->pc = 0x1a6fb8; return; }
    ctx->pc = 0x1B1F80u;
label_1b1f80:
    // 0x1b1f80: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b1f80u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
label_1b1f84:
    // 0x1b1f84: 0x3c0b001b  lui         $t3, 0x1B
    ctx->pc = 0x1b1f84u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)27 << 16));
label_1b1f88:
    // 0x1b1f88: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x1b1f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
label_1b1f8c:
    // 0x1b1f8c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1b1f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b1f90:
    // 0x1b1f90: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b1f90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b1f94:
    // 0x1b1f94: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b1f94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
label_1b1f98:
    // 0x1b1f98: 0x256b1e38  addiu       $t3, $t3, 0x1E38
    ctx->pc = 0x1b1f98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 7736));
label_1b1f9c:
    // 0x1b1f9c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1b1f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1b1fa0:
    // 0x1b1fa0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b1fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b1fa4:
    // 0x1b1fa4: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1b1fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
label_1b1fa8:
    // 0x1b1fa8: 0xc069e2a  jal         func_1A78A8
label_1b1fac:
    if (ctx->pc == 0x1B1FACu) {
        ctx->pc = 0x1B1FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1FA8u;
        // 0x1b1fac: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1FB0u;
        goto label_1b1fb0;
    }
    ctx->pc = 0x1B1FA8u;
    SET_GPR_U32(ctx, 31, 0x1B1FB0u);
    ctx->pc = 0x1B1FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1FA8u;
    // 0x1b1fac: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B1FB0u;
label_1b1fb0:
    // 0x1b1fb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1fb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1fb4:
    // 0x1b1fb4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_1b1fb8:
    if (ctx->pc == 0x1B1FB8u) {
        ctx->pc = 0x1B1FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1FB4u;
        // 0x1b1fb8: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1FBCu;
        goto label_1b1fbc;
    }
    ctx->pc = 0x1B1FB4u;
    {
        const bool branch_taken_0x1b1fb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1FB4u;
        // 0x1b1fb8: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1fb4) {
            ctx->pc = 0x1B1FC8u;
            goto label_1b1fc8;
        }
    }
    ctx->pc = 0x1B1FBCu;
label_1b1fbc:
    // 0x1b1fbc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b1fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1b1fc0:
    // 0x1b1fc0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b1fc4:
    if (ctx->pc == 0x1B1FC4u) {
        ctx->pc = 0x1B1FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1FC0u;
        // 0x1b1fc4: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1FC8u;
        goto label_1b1fc8;
    }
    ctx->pc = 0x1B1FC0u;
    {
        const bool branch_taken_0x1b1fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1FC0u;
        // 0x1b1fc4: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1fc0) {
            ctx->pc = 0x1B1FD0u;
            { ctx->pc = 0x1b1fd0; return; }
        }
    }
    ctx->pc = 0x1B1FC8u;
label_1b1fc8:
    // 0x1b1fc8: 0xc069210  jal         func_1A4840
label_1b1fcc:
    if (ctx->pc == 0x1B1FCCu) {
        ctx->pc = 0x1B1FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1FC8u;
        // 0x1b1fcc: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1FD0u;
        { ctx->pc = 0x1b1fd0; return; }
    }
    ctx->pc = 0x1B1FC8u;
    SET_GPR_U32(ctx, 31, 0x1B1FD0u);
    ctx->pc = 0x1B1FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1FC8u;
    // 0x1b1fcc: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B1FD0u;
    ctx->pc = 0x1b1fd0u;
    return;
}
