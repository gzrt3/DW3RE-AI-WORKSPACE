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


void FUN_0017faa0_part363(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2306c0u: goto label_2306c0;
        case 0x2306c4u: goto label_2306c4;
        case 0x2306c8u: goto label_2306c8;
        case 0x2306ccu: goto label_2306cc;
        case 0x2306d0u: goto label_2306d0;
        case 0x2306d4u: goto label_2306d4;
        case 0x2306d8u: goto label_2306d8;
        case 0x2306dcu: goto label_2306dc;
        case 0x2306e0u: goto label_2306e0;
        case 0x2306e4u: goto label_2306e4;
        case 0x2306e8u: goto label_2306e8;
        case 0x2306ecu: goto label_2306ec;
        case 0x2306f0u: goto label_2306f0;
        case 0x2306f4u: goto label_2306f4;
        case 0x2306f8u: goto label_2306f8;
        case 0x2306fcu: goto label_2306fc;
        case 0x230700u: goto label_230700;
        case 0x230704u: goto label_230704;
        case 0x230708u: goto label_230708;
        case 0x23070cu: goto label_23070c;
        case 0x230710u: goto label_230710;
        case 0x230714u: goto label_230714;
        case 0x230718u: goto label_230718;
        case 0x23071cu: goto label_23071c;
        case 0x230720u: goto label_230720;
        case 0x230724u: goto label_230724;
        case 0x230728u: goto label_230728;
        case 0x23072cu: goto label_23072c;
        case 0x230730u: goto label_230730;
        case 0x230734u: goto label_230734;
        case 0x230738u: goto label_230738;
        case 0x23073cu: goto label_23073c;
        case 0x230740u: goto label_230740;
        case 0x230744u: goto label_230744;
        case 0x230748u: goto label_230748;
        case 0x23074cu: goto label_23074c;
        case 0x230750u: goto label_230750;
        case 0x230754u: goto label_230754;
        case 0x230758u: goto label_230758;
        case 0x23075cu: goto label_23075c;
        case 0x230760u: goto label_230760;
        case 0x230764u: goto label_230764;
        case 0x230768u: goto label_230768;
        case 0x23076cu: goto label_23076c;
        case 0x230770u: goto label_230770;
        case 0x230774u: goto label_230774;
        case 0x230778u: goto label_230778;
        case 0x23077cu: goto label_23077c;
        case 0x230780u: goto label_230780;
        case 0x230784u: goto label_230784;
        case 0x230788u: goto label_230788;
        case 0x23078cu: goto label_23078c;
        case 0x230790u: goto label_230790;
        case 0x230794u: goto label_230794;
        case 0x230798u: goto label_230798;
        case 0x23079cu: goto label_23079c;
        case 0x2307a0u: goto label_2307a0;
        case 0x2307a4u: goto label_2307a4;
        case 0x2307a8u: goto label_2307a8;
        case 0x2307acu: goto label_2307ac;
        case 0x2307b0u: goto label_2307b0;
        case 0x2307b4u: goto label_2307b4;
        case 0x2307b8u: goto label_2307b8;
        case 0x2307bcu: goto label_2307bc;
        case 0x2307c0u: goto label_2307c0;
        case 0x2307c4u: goto label_2307c4;
        case 0x2307c8u: goto label_2307c8;
        case 0x2307ccu: goto label_2307cc;
        case 0x2307d0u: goto label_2307d0;
        case 0x2307d4u: goto label_2307d4;
        case 0x2307d8u: goto label_2307d8;
        case 0x2307dcu: goto label_2307dc;
        case 0x2307e0u: goto label_2307e0;
        case 0x2307e4u: goto label_2307e4;
        case 0x2307e8u: goto label_2307e8;
        case 0x2307ecu: goto label_2307ec;
        case 0x2307f0u: goto label_2307f0;
        case 0x2307f4u: goto label_2307f4;
        case 0x2307f8u: goto label_2307f8;
        case 0x2307fcu: goto label_2307fc;
        case 0x230800u: goto label_230800;
        case 0x230804u: goto label_230804;
        case 0x230808u: goto label_230808;
        case 0x23080cu: goto label_23080c;
        case 0x230810u: goto label_230810;
        case 0x230814u: goto label_230814;
        case 0x230818u: goto label_230818;
        case 0x23081cu: goto label_23081c;
        case 0x230820u: goto label_230820;
        case 0x230824u: goto label_230824;
        case 0x230828u: goto label_230828;
        case 0x23082cu: goto label_23082c;
        case 0x230830u: goto label_230830;
        case 0x230834u: goto label_230834;
        case 0x230838u: goto label_230838;
        case 0x23083cu: goto label_23083c;
        case 0x230840u: goto label_230840;
        case 0x230844u: goto label_230844;
        case 0x230848u: goto label_230848;
        case 0x23084cu: goto label_23084c;
        case 0x230850u: goto label_230850;
        case 0x230854u: goto label_230854;
        case 0x230858u: goto label_230858;
        case 0x23085cu: goto label_23085c;
        case 0x230860u: goto label_230860;
        case 0x230864u: goto label_230864;
        case 0x230868u: goto label_230868;
        case 0x23086cu: goto label_23086c;
        case 0x230870u: goto label_230870;
        case 0x230874u: goto label_230874;
        case 0x230878u: goto label_230878;
        case 0x23087cu: goto label_23087c;
        case 0x230880u: goto label_230880;
        case 0x230884u: goto label_230884;
        case 0x230888u: goto label_230888;
        case 0x23088cu: goto label_23088c;
        case 0x230890u: goto label_230890;
        case 0x230894u: goto label_230894;
        case 0x230898u: goto label_230898;
        case 0x23089cu: goto label_23089c;
        case 0x2308a0u: goto label_2308a0;
        case 0x2308a4u: goto label_2308a4;
        case 0x2308a8u: goto label_2308a8;
        case 0x2308acu: goto label_2308ac;
        case 0x2308b0u: goto label_2308b0;
        case 0x2308b4u: goto label_2308b4;
        case 0x2308b8u: goto label_2308b8;
        case 0x2308bcu: goto label_2308bc;
        case 0x2308c0u: goto label_2308c0;
        case 0x2308c4u: goto label_2308c4;
        case 0x2308c8u: goto label_2308c8;
        case 0x2308ccu: goto label_2308cc;
        case 0x2308d0u: goto label_2308d0;
        case 0x2308d4u: goto label_2308d4;
        case 0x2308d8u: goto label_2308d8;
        case 0x2308dcu: goto label_2308dc;
        case 0x2308e0u: goto label_2308e0;
        case 0x2308e4u: goto label_2308e4;
        case 0x2308e8u: goto label_2308e8;
        case 0x2308ecu: goto label_2308ec;
        case 0x2308f0u: goto label_2308f0;
        case 0x2308f4u: goto label_2308f4;
        case 0x2308f8u: goto label_2308f8;
        case 0x2308fcu: goto label_2308fc;
        case 0x230900u: goto label_230900;
        case 0x230904u: goto label_230904;
        case 0x230908u: goto label_230908;
        case 0x23090cu: goto label_23090c;
        case 0x230910u: goto label_230910;
        case 0x230914u: goto label_230914;
        case 0x230918u: goto label_230918;
        case 0x23091cu: goto label_23091c;
        case 0x230920u: goto label_230920;
        case 0x230924u: goto label_230924;
        case 0x230928u: goto label_230928;
        case 0x23092cu: goto label_23092c;
        case 0x230930u: goto label_230930;
        case 0x230934u: goto label_230934;
        case 0x230938u: goto label_230938;
        case 0x23093cu: goto label_23093c;
        case 0x230940u: goto label_230940;
        case 0x230944u: goto label_230944;
        case 0x230948u: goto label_230948;
        case 0x23094cu: goto label_23094c;
        case 0x230950u: goto label_230950;
        case 0x230954u: goto label_230954;
        case 0x230958u: goto label_230958;
        case 0x23095cu: goto label_23095c;
        case 0x230960u: goto label_230960;
        case 0x230964u: goto label_230964;
        case 0x230968u: goto label_230968;
        case 0x23096cu: goto label_23096c;
        case 0x230970u: goto label_230970;
        case 0x230974u: goto label_230974;
        case 0x230978u: goto label_230978;
        case 0x23097cu: goto label_23097c;
        case 0x230980u: goto label_230980;
        case 0x230984u: goto label_230984;
        case 0x230988u: goto label_230988;
        case 0x23098cu: goto label_23098c;
        case 0x230990u: goto label_230990;
        case 0x230994u: goto label_230994;
        case 0x230998u: goto label_230998;
        case 0x23099cu: goto label_23099c;
        case 0x2309a0u: goto label_2309a0;
        case 0x2309a4u: goto label_2309a4;
        case 0x2309a8u: goto label_2309a8;
        case 0x2309acu: goto label_2309ac;
        case 0x2309b0u: goto label_2309b0;
        case 0x2309b4u: goto label_2309b4;
        case 0x2309b8u: goto label_2309b8;
        case 0x2309bcu: goto label_2309bc;
        case 0x2309c0u: goto label_2309c0;
        case 0x2309c4u: goto label_2309c4;
        case 0x2309c8u: goto label_2309c8;
        case 0x2309ccu: goto label_2309cc;
        case 0x2309d0u: goto label_2309d0;
        case 0x2309d4u: goto label_2309d4;
        case 0x2309d8u: goto label_2309d8;
        case 0x2309dcu: goto label_2309dc;
        case 0x2309e0u: goto label_2309e0;
        case 0x2309e4u: goto label_2309e4;
        case 0x2309e8u: goto label_2309e8;
        case 0x2309ecu: goto label_2309ec;
        case 0x2309f0u: goto label_2309f0;
        case 0x2309f4u: goto label_2309f4;
        case 0x2309f8u: goto label_2309f8;
        case 0x2309fcu: goto label_2309fc;
        case 0x230a00u: goto label_230a00;
        case 0x230a04u: goto label_230a04;
        case 0x230a08u: goto label_230a08;
        case 0x230a0cu: goto label_230a0c;
        case 0x230a10u: goto label_230a10;
        case 0x230a14u: goto label_230a14;
        case 0x230a18u: goto label_230a18;
        case 0x230a1cu: goto label_230a1c;
        case 0x230a20u: goto label_230a20;
        case 0x230a24u: goto label_230a24;
        case 0x230a28u: goto label_230a28;
        case 0x230a2cu: goto label_230a2c;
        case 0x230a30u: goto label_230a30;
        case 0x230a34u: goto label_230a34;
        case 0x230a38u: goto label_230a38;
        case 0x230a3cu: goto label_230a3c;
        case 0x230a40u: goto label_230a40;
        case 0x230a44u: goto label_230a44;
        case 0x230a48u: goto label_230a48;
        case 0x230a4cu: goto label_230a4c;
        case 0x230a50u: goto label_230a50;
        case 0x230a54u: goto label_230a54;
        case 0x230a58u: goto label_230a58;
        case 0x230a5cu: goto label_230a5c;
        case 0x230a60u: goto label_230a60;
        case 0x230a64u: goto label_230a64;
        case 0x230a68u: goto label_230a68;
        case 0x230a6cu: goto label_230a6c;
        case 0x230a70u: goto label_230a70;
        case 0x230a74u: goto label_230a74;
        case 0x230a78u: goto label_230a78;
        case 0x230a7cu: goto label_230a7c;
        case 0x230a80u: goto label_230a80;
        case 0x230a84u: goto label_230a84;
        case 0x230a88u: goto label_230a88;
        case 0x230a8cu: goto label_230a8c;
        case 0x230a90u: goto label_230a90;
        case 0x230a94u: goto label_230a94;
        case 0x230a98u: goto label_230a98;
        case 0x230a9cu: goto label_230a9c;
        case 0x230aa0u: goto label_230aa0;
        case 0x230aa4u: goto label_230aa4;
        case 0x230aa8u: goto label_230aa8;
        case 0x230aacu: goto label_230aac;
        case 0x230ab0u: goto label_230ab0;
        case 0x230ab4u: goto label_230ab4;
        case 0x230ab8u: goto label_230ab8;
        case 0x230abcu: goto label_230abc;
        case 0x230ac0u: goto label_230ac0;
        case 0x230ac4u: goto label_230ac4;
        case 0x230ac8u: goto label_230ac8;
        case 0x230accu: goto label_230acc;
        case 0x230ad0u: goto label_230ad0;
        case 0x230ad4u: goto label_230ad4;
        case 0x230ad8u: goto label_230ad8;
        case 0x230adcu: goto label_230adc;
        case 0x230ae0u: goto label_230ae0;
        case 0x230ae4u: goto label_230ae4;
        case 0x230ae8u: goto label_230ae8;
        case 0x230aecu: goto label_230aec;
        case 0x230af0u: goto label_230af0;
        case 0x230af4u: goto label_230af4;
        case 0x230af8u: goto label_230af8;
        case 0x230afcu: goto label_230afc;
        case 0x230b00u: goto label_230b00;
        case 0x230b04u: goto label_230b04;
        case 0x230b08u: goto label_230b08;
        case 0x230b0cu: goto label_230b0c;
        case 0x230b10u: goto label_230b10;
        case 0x230b14u: goto label_230b14;
        case 0x230b18u: goto label_230b18;
        case 0x230b1cu: goto label_230b1c;
        case 0x230b20u: goto label_230b20;
        case 0x230b24u: goto label_230b24;
        case 0x230b28u: goto label_230b28;
        case 0x230b2cu: goto label_230b2c;
        case 0x230b30u: goto label_230b30;
        case 0x230b34u: goto label_230b34;
        case 0x230b38u: goto label_230b38;
        case 0x230b3cu: goto label_230b3c;
        case 0x230b40u: goto label_230b40;
        case 0x230b44u: goto label_230b44;
        case 0x230b48u: goto label_230b48;
        case 0x230b4cu: goto label_230b4c;
        case 0x230b50u: goto label_230b50;
        case 0x230b54u: goto label_230b54;
        case 0x230b58u: goto label_230b58;
        case 0x230b5cu: goto label_230b5c;
        case 0x230b60u: goto label_230b60;
        case 0x230b64u: goto label_230b64;
        case 0x230b68u: goto label_230b68;
        case 0x230b6cu: goto label_230b6c;
        case 0x230b70u: goto label_230b70;
        case 0x230b74u: goto label_230b74;
        case 0x230b78u: goto label_230b78;
        case 0x230b7cu: goto label_230b7c;
        case 0x230b80u: goto label_230b80;
        case 0x230b84u: goto label_230b84;
        case 0x230b88u: goto label_230b88;
        case 0x230b8cu: goto label_230b8c;
        case 0x230b90u: goto label_230b90;
        case 0x230b94u: goto label_230b94;
        case 0x230b98u: goto label_230b98;
        case 0x230b9cu: goto label_230b9c;
        case 0x230ba0u: goto label_230ba0;
        case 0x230ba4u: goto label_230ba4;
        case 0x230ba8u: goto label_230ba8;
        case 0x230bacu: goto label_230bac;
        case 0x230bb0u: goto label_230bb0;
        case 0x230bb4u: goto label_230bb4;
        case 0x230bb8u: goto label_230bb8;
        case 0x230bbcu: goto label_230bbc;
        case 0x230bc0u: goto label_230bc0;
        case 0x230bc4u: goto label_230bc4;
        case 0x230bc8u: goto label_230bc8;
        case 0x230bccu: goto label_230bcc;
        case 0x230bd0u: goto label_230bd0;
        case 0x230bd4u: goto label_230bd4;
        case 0x230bd8u: goto label_230bd8;
        case 0x230bdcu: goto label_230bdc;
        case 0x230be0u: goto label_230be0;
        case 0x230be4u: goto label_230be4;
        case 0x230be8u: goto label_230be8;
        case 0x230becu: goto label_230bec;
        case 0x230bf0u: goto label_230bf0;
        case 0x230bf4u: goto label_230bf4;
        case 0x230bf8u: goto label_230bf8;
        case 0x230bfcu: goto label_230bfc;
        case 0x230c00u: goto label_230c00;
        case 0x230c04u: goto label_230c04;
        case 0x230c08u: goto label_230c08;
        case 0x230c0cu: goto label_230c0c;
        case 0x230c10u: goto label_230c10;
        case 0x230c14u: goto label_230c14;
        case 0x230c18u: goto label_230c18;
        case 0x230c1cu: goto label_230c1c;
        case 0x230c20u: goto label_230c20;
        case 0x230c24u: goto label_230c24;
        case 0x230c28u: goto label_230c28;
        case 0x230c2cu: goto label_230c2c;
        case 0x230c30u: goto label_230c30;
        case 0x230c34u: goto label_230c34;
        case 0x230c38u: goto label_230c38;
        case 0x230c3cu: goto label_230c3c;
        case 0x230c40u: goto label_230c40;
        case 0x230c44u: goto label_230c44;
        case 0x230c48u: goto label_230c48;
        case 0x230c4cu: goto label_230c4c;
        case 0x230c50u: goto label_230c50;
        case 0x230c54u: goto label_230c54;
        case 0x230c58u: goto label_230c58;
        case 0x230c5cu: goto label_230c5c;
        case 0x230c60u: goto label_230c60;
        case 0x230c64u: goto label_230c64;
        case 0x230c68u: goto label_230c68;
        case 0x230c6cu: goto label_230c6c;
        case 0x230c70u: goto label_230c70;
        case 0x230c74u: goto label_230c74;
        case 0x230c78u: goto label_230c78;
        case 0x230c7cu: goto label_230c7c;
        case 0x230c80u: goto label_230c80;
        case 0x230c84u: goto label_230c84;
        case 0x230c88u: goto label_230c88;
        case 0x230c8cu: goto label_230c8c;
        case 0x230c90u: goto label_230c90;
        case 0x230c94u: goto label_230c94;
        case 0x230c98u: goto label_230c98;
        case 0x230c9cu: goto label_230c9c;
        case 0x230ca0u: goto label_230ca0;
        case 0x230ca4u: goto label_230ca4;
        case 0x230ca8u: goto label_230ca8;
        case 0x230cacu: goto label_230cac;
        case 0x230cb0u: goto label_230cb0;
        case 0x230cb4u: goto label_230cb4;
        case 0x230cb8u: goto label_230cb8;
        case 0x230cbcu: goto label_230cbc;
        case 0x230cc0u: goto label_230cc0;
        case 0x230cc4u: goto label_230cc4;
        case 0x230cc8u: goto label_230cc8;
        case 0x230cccu: goto label_230ccc;
        case 0x230cd0u: goto label_230cd0;
        case 0x230cd4u: goto label_230cd4;
        case 0x230cd8u: goto label_230cd8;
        case 0x230cdcu: goto label_230cdc;
        case 0x230ce0u: goto label_230ce0;
        case 0x230ce4u: goto label_230ce4;
        case 0x230ce8u: goto label_230ce8;
        case 0x230cecu: goto label_230cec;
        case 0x230cf0u: goto label_230cf0;
        case 0x230cf4u: goto label_230cf4;
        case 0x230cf8u: goto label_230cf8;
        case 0x230cfcu: goto label_230cfc;
        case 0x230d00u: goto label_230d00;
        case 0x230d04u: goto label_230d04;
        case 0x230d08u: goto label_230d08;
        case 0x230d0cu: goto label_230d0c;
        case 0x230d10u: goto label_230d10;
        case 0x230d14u: goto label_230d14;
        case 0x230d18u: goto label_230d18;
        case 0x230d1cu: goto label_230d1c;
        case 0x230d20u: goto label_230d20;
        case 0x230d24u: goto label_230d24;
        case 0x230d28u: goto label_230d28;
        case 0x230d2cu: goto label_230d2c;
        case 0x230d30u: goto label_230d30;
        case 0x230d34u: goto label_230d34;
        case 0x230d38u: goto label_230d38;
        case 0x230d3cu: goto label_230d3c;
        case 0x230d40u: goto label_230d40;
        case 0x230d44u: goto label_230d44;
        case 0x230d48u: goto label_230d48;
        case 0x230d4cu: goto label_230d4c;
        case 0x230d50u: goto label_230d50;
        case 0x230d54u: goto label_230d54;
        case 0x230d58u: goto label_230d58;
        case 0x230d5cu: goto label_230d5c;
        case 0x230d60u: goto label_230d60;
        case 0x230d64u: goto label_230d64;
        case 0x230d68u: goto label_230d68;
        case 0x230d6cu: goto label_230d6c;
        case 0x230d70u: goto label_230d70;
        case 0x230d74u: goto label_230d74;
        case 0x230d78u: goto label_230d78;
        case 0x230d7cu: goto label_230d7c;
        case 0x230d80u: goto label_230d80;
        case 0x230d84u: goto label_230d84;
        case 0x230d88u: goto label_230d88;
        case 0x230d8cu: goto label_230d8c;
        case 0x230d90u: goto label_230d90;
        case 0x230d94u: goto label_230d94;
        case 0x230d98u: goto label_230d98;
        case 0x230d9cu: goto label_230d9c;
        case 0x230da0u: goto label_230da0;
        case 0x230da4u: goto label_230da4;
        case 0x230da8u: goto label_230da8;
        case 0x230dacu: goto label_230dac;
        case 0x230db0u: goto label_230db0;
        case 0x230db4u: goto label_230db4;
        case 0x230db8u: goto label_230db8;
        case 0x230dbcu: goto label_230dbc;
        case 0x230dc0u: goto label_230dc0;
        case 0x230dc4u: goto label_230dc4;
        case 0x230dc8u: goto label_230dc8;
        case 0x230dccu: goto label_230dcc;
        case 0x230dd0u: goto label_230dd0;
        case 0x230dd4u: goto label_230dd4;
        case 0x230dd8u: goto label_230dd8;
        case 0x230ddcu: goto label_230ddc;
        case 0x230de0u: goto label_230de0;
        case 0x230de4u: goto label_230de4;
        case 0x230de8u: goto label_230de8;
        case 0x230decu: goto label_230dec;
        case 0x230df0u: goto label_230df0;
        case 0x230df4u: goto label_230df4;
        case 0x230df8u: goto label_230df8;
        case 0x230dfcu: goto label_230dfc;
        case 0x230e00u: goto label_230e00;
        case 0x230e04u: goto label_230e04;
        case 0x230e08u: goto label_230e08;
        case 0x230e0cu: goto label_230e0c;
        case 0x230e10u: goto label_230e10;
        case 0x230e14u: goto label_230e14;
        case 0x230e18u: goto label_230e18;
        case 0x230e1cu: goto label_230e1c;
        case 0x230e20u: goto label_230e20;
        case 0x230e24u: goto label_230e24;
        case 0x230e28u: goto label_230e28;
        case 0x230e2cu: goto label_230e2c;
        case 0x230e30u: goto label_230e30;
        case 0x230e34u: goto label_230e34;
        case 0x230e38u: goto label_230e38;
        case 0x230e3cu: goto label_230e3c;
        case 0x230e40u: goto label_230e40;
        case 0x230e44u: goto label_230e44;
        case 0x230e48u: goto label_230e48;
        case 0x230e4cu: goto label_230e4c;
        case 0x230e50u: goto label_230e50;
        case 0x230e54u: goto label_230e54;
        case 0x230e58u: goto label_230e58;
        case 0x230e5cu: goto label_230e5c;
        case 0x230e60u: goto label_230e60;
        case 0x230e64u: goto label_230e64;
        case 0x230e68u: goto label_230e68;
        case 0x230e6cu: goto label_230e6c;
        case 0x230e70u: goto label_230e70;
        case 0x230e74u: goto label_230e74;
        case 0x230e78u: goto label_230e78;
        case 0x230e7cu: goto label_230e7c;
        case 0x230e80u: goto label_230e80;
        case 0x230e84u: goto label_230e84;
        case 0x230e88u: goto label_230e88;
        case 0x230e8cu: goto label_230e8c;
        default: return;
    }

label_2306c0:
    // 0x2306c0: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x2306c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2306c4:
    // 0x2306c4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2306c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_2306c8:
    // 0x2306c8: 0xc06d51e  jal         func_1B5478
label_2306cc:
    if (ctx->pc == 0x2306CCu) {
        ctx->pc = 0x2306CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2306C8u;
        // 0x2306cc: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2306D0u;
        goto label_2306d0;
    }
    ctx->pc = 0x2306C8u;
    SET_GPR_U32(ctx, 31, 0x2306D0u);
    ctx->pc = 0x2306CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2306C8u;
    // 0x2306cc: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x2306D0u;
label_2306d0:
    // 0x2306d0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2306d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_2306d4:
    // 0x2306d4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2306d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2306d8:
    // 0x2306d8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2306d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2306dc:
    // 0x2306dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2306dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2306e0:
    // 0x2306e0: 0xc421a6d0  lwc1        $f1, -0x5930($at)
    ctx->pc = 0x2306e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2306e4:
    // 0x2306e4: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x2306e4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[0] = ctx->f[21] / ctx->f[0];
label_2306e8:
    // 0x2306e8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2306e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_2306ec:
    // 0x2306ec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2306ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2306f0:
    // 0x2306f0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2306f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2306f4:
    // 0x2306f4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2306f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2306f8:
    // 0x2306f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2306f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2306fc:
    // 0x2306fc: 0x0  nop
    ctx->pc = 0x2306fcu;
    // NOP
label_230700:
    // 0x230700: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x230700u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_230704:
    // 0x230704: 0x0  nop
    ctx->pc = 0x230704u;
    // NOP
label_230708:
    // 0x230708: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_23070c:
    if (ctx->pc == 0x23070Cu) {
        ctx->pc = 0x23070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230708u;
        // 0x23070c: 0xe421a6d0  swc1        $f1, -0x5930($at) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294944464), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x230710u;
        goto label_230710;
    }
    ctx->pc = 0x230708u;
    {
        const bool branch_taken_0x230708 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x23070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230708u;
        // 0x23070c: 0xe421a6d0  swc1        $f1, -0x5930($at) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294944464), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x230708) {
            ctx->pc = 0x230724u;
            goto label_230724;
        }
    }
    ctx->pc = 0x230710u;
label_230710:
    // 0x230710: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x230710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_230714:
    // 0x230714: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x230714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_230718:
    // 0x230718: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23071c:
    // 0x23071c: 0x1000000e  b           . + 4 + (0xE << 2)
label_230720:
    if (ctx->pc == 0x230720u) {
        ctx->pc = 0x230720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23071Cu;
        // 0x230720: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x230724u;
        goto label_230724;
    }
    ctx->pc = 0x23071Cu;
    {
        const bool branch_taken_0x23071c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23071Cu;
        // 0x230720: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23071c) {
            ctx->pc = 0x230758u;
            goto label_230758;
        }
    }
    ctx->pc = 0x230724u;
label_230724:
    // 0x230724: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x230724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_230728:
    // 0x230728: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x230728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_23072c:
    // 0x23072c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23072cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_230730:
    // 0x230730: 0x0  nop
    ctx->pc = 0x230730u;
    // NOP
label_230734:
    // 0x230734: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x230734u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_230738:
    // 0x230738: 0x0  nop
    ctx->pc = 0x230738u;
    // NOP
label_23073c:
    // 0x23073c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_230740:
    if (ctx->pc == 0x230740u) {
        ctx->pc = 0x230744u;
        goto label_230744;
    }
    ctx->pc = 0x23073Cu;
    {
        const bool branch_taken_0x23073c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23073c) {
            ctx->pc = 0x230758u;
            goto label_230758;
        }
    }
    ctx->pc = 0x230744u;
label_230744:
    // 0x230744: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x230744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_230748:
    // 0x230748: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x230748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_23074c:
    // 0x23074c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23074cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_230750:
    // 0x230750: 0x10000001  b           . + 4 + (0x1 << 2)
label_230754:
    if (ctx->pc == 0x230754u) {
        ctx->pc = 0x230754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230750u;
        // 0x230754: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x230758u;
        goto label_230758;
    }
    ctx->pc = 0x230750u;
    {
        const bool branch_taken_0x230750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230750u;
        // 0x230754: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230750) {
            ctx->pc = 0x230758u;
            goto label_230758;
        }
    }
    ctx->pc = 0x230758u;
label_230758:
    // 0x230758: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x230758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_23075c:
    // 0x23075c: 0xe421a6d0  swc1        $f1, -0x5930($at)
    ctx->pc = 0x23075cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294944464), bits); }
label_230760:
    // 0x230760: 0x1000001d  b           . + 4 + (0x1D << 2)
label_230764:
    if (ctx->pc == 0x230764u) {
        ctx->pc = 0x230764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230760u;
        // 0x230764: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230768u;
        goto label_230768;
    }
    ctx->pc = 0x230760u;
    {
        const bool branch_taken_0x230760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230760u;
        // 0x230764: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230760) {
            ctx->pc = 0x2307D8u;
            goto label_2307d8;
        }
    }
    ctx->pc = 0x230768u;
label_230768:
    // 0x230768: 0xa200008c  sb          $zero, 0x8C($s0)
    ctx->pc = 0x230768u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 0));
label_23076c:
    // 0x23076c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x23076cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_230770:
    // 0x230770: 0x8c22aad4  lw          $v0, -0x552C($at)
    ctx->pc = 0x230770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294945492)));
label_230774:
    // 0x230774: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_230778:
    if (ctx->pc == 0x230778u) {
        ctx->pc = 0x23077Cu;
        goto label_23077c;
    }
    ctx->pc = 0x230774u;
    {
        const bool branch_taken_0x230774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x230774) {
            ctx->pc = 0x2307ACu;
            goto label_2307ac;
        }
    }
    ctx->pc = 0x23077Cu;
label_23077c:
    // 0x23077c: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x23077cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_230780:
    // 0x230780: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x230780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_230784:
    // 0x230784: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x230784u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_230788:
    // 0x230788: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x230788u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_23078c:
    // 0x23078c: 0x4a0002b8  vcallms     0x50
    ctx->pc = 0x23078cu;
    {     ctx->vu0_tpc = 0x50;     runtime->executeVU0Microprogram(rdram, ctx, 0x50); }
label_230790:
    // 0x230790: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x230790u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_230794:
    // 0x230794: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x230794u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
label_230798:
    // 0x230798: 0xf8710010  sqc2        $vf17, 0x10($v1)
    ctx->pc = 0x230798u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[17]));
label_23079c:
    // 0x23079c: 0xf8720020  sqc2        $vf18, 0x20($v1)
    ctx->pc = 0x23079cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[18]));
label_2307a0:
    // 0x2307a0: 0xf8730030  sqc2        $vf19, 0x30($v1)
    ctx->pc = 0x2307a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[19]));
label_2307a4:
    // 0x2307a4: 0x1000000a  b           . + 4 + (0xA << 2)
label_2307a8:
    if (ctx->pc == 0x2307A8u) {
        ctx->pc = 0x2307ACu;
        goto label_2307ac;
    }
    ctx->pc = 0x2307A4u;
    {
        const bool branch_taken_0x2307a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2307a4) {
            ctx->pc = 0x2307D0u;
            goto label_2307d0;
        }
    }
    ctx->pc = 0x2307ACu;
label_2307ac:
    // 0x2307ac: 0x0  nop
    ctx->pc = 0x2307acu;
    // NOP
label_2307b0:
    // 0x2307b0: 0xc066e44  jal         func_19B910
label_2307b4:
    if (ctx->pc == 0x2307B4u) {
        ctx->pc = 0x2307B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2307B0u;
        // 0x2307b4: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2307B8u;
        goto label_2307b8;
    }
    ctx->pc = 0x2307B0u;
    SET_GPR_U32(ctx, 31, 0x2307B8u);
    ctx->pc = 0x2307B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2307B0u;
    // 0x2307b4: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x2307B8u;
label_2307b8:
    // 0x2307b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2307b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2307bc:
    // 0x2307bc: 0xc064f60  jal         func_193D80
label_2307c0:
    if (ctx->pc == 0x2307C0u) {
        ctx->pc = 0x2307C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2307BCu;
        // 0x2307c0: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2307C4u;
        goto label_2307c4;
    }
    ctx->pc = 0x2307BCu;
    SET_GPR_U32(ctx, 31, 0x2307C4u);
    ctx->pc = 0x2307C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2307BCu;
    // 0x2307c0: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193D80u;
    { ctx->pc = 0x193d80; return; }
    ctx->pc = 0x2307C4u;
label_2307c4:
    // 0x2307c4: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x2307c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_2307c8:
    // 0x2307c8: 0xc064f54  jal         func_193D50
label_2307cc:
    if (ctx->pc == 0x2307CCu) {
        ctx->pc = 0x2307CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2307C8u;
        // 0x2307cc: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2307D0u;
        goto label_2307d0;
    }
    ctx->pc = 0x2307C8u;
    SET_GPR_U32(ctx, 31, 0x2307D0u);
    ctx->pc = 0x2307CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2307C8u;
    // 0x2307cc: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193D50u;
    { ctx->pc = 0x193d50; return; }
    ctx->pc = 0x2307D0u;
label_2307d0:
    // 0x2307d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2307d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2307d4:
    // 0x2307d4: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x2307d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_2307d8:
    // 0x2307d8: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x2307d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_2307dc:
    // 0x2307dc: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_2307e0:
    if (ctx->pc == 0x2307E0u) {
        ctx->pc = 0x2307E4u;
        goto label_2307e4;
    }
    ctx->pc = 0x2307DCu;
    {
        const bool branch_taken_0x2307dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2307dc) {
            ctx->pc = 0x230768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_230768;
        }
    }
    ctx->pc = 0x2307E4u;
label_2307e4:
    // 0x2307e4: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x2307e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_2307e8:
    // 0x2307e8: 0xc053ae8  jal         func_14EBA0
label_2307ec:
    if (ctx->pc == 0x2307ECu) {
        ctx->pc = 0x2307ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2307E8u;
        // 0x2307ec: 0x2484a6d0  addiu       $a0, $a0, -0x5930 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2307F0u;
        goto label_2307f0;
    }
    ctx->pc = 0x2307E8u;
    SET_GPR_U32(ctx, 31, 0x2307F0u);
    ctx->pc = 0x2307ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2307E8u;
    // 0x2307ec: 0x2484a6d0  addiu       $a0, $a0, -0x5930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EBA0u, 0x2307E8u, 0x2307F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2307F0u;
label_2307f0:
    // 0x2307f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2307f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2307f4:
    // 0x2307f4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2307f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2307f8:
    // 0x2307f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2307f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2307fc:
    // 0x2307fc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2307fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_230800:
    // 0x230800: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x230800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_230804:
    // 0x230804: 0x3e00008  jr          $ra
label_230808:
    if (ctx->pc == 0x230808u) {
        ctx->pc = 0x230808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230804u;
        // 0x230808: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23080Cu;
        goto label_23080c;
    }
    ctx->pc = 0x230804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230804u;
        // 0x230808: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23080Cu;
label_23080c:
    // 0x23080c: 0x0  nop
    ctx->pc = 0x23080cu;
    // NOP
label_230810:
    // 0x230810: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x230810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_230814:
    // 0x230814: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x230814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_230818:
    // 0x230818: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x230818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_23081c:
    // 0x23081c: 0x24420490  addiu       $v0, $v0, 0x490
    ctx->pc = 0x23081cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1168));
label_230820:
    // 0x230820: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x230820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_230824:
    // 0x230824: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x230824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_230828:
    // 0x230828: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x230828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23082c:
    // 0x23082c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23082cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_230830:
    // 0x230830: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x230830u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_230834:
    // 0x230834: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x230834u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
label_230838:
    // 0x230838: 0x2610a640  addiu       $s0, $s0, -0x59C0
    ctx->pc = 0x230838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944320));
label_23083c:
    // 0x23083c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23083cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_230840:
    // 0x230840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_230844:
    // 0x230844: 0xc066e26  jal         func_19B898
label_230848:
    if (ctx->pc == 0x230848u) {
        ctx->pc = 0x230848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230844u;
        // 0x230848: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23084Cu;
        goto label_23084c;
    }
    ctx->pc = 0x230844u;
    SET_GPR_U32(ctx, 31, 0x23084Cu);
    ctx->pc = 0x230848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230844u;
    // 0x230848: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x23084Cu;
label_23084c:
    // 0x23084c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x23084cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_230850:
    // 0x230850: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x230850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_230854:
    // 0x230854: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x230854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_230858:
    // 0x230858: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x230858u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_23085c:
    // 0x23085c: 0x0  nop
    ctx->pc = 0x23085cu;
    // NOP
label_230860:
    // 0x230860: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x230860u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_230864:
    // 0x230864: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x230864u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_230868:
    // 0x230868: 0x0  nop
    ctx->pc = 0x230868u;
    // NOP
label_23086c:
    // 0x23086c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_230870:
    if (ctx->pc == 0x230870u) {
        ctx->pc = 0x230870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23086Cu;
        // 0x230870: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230874u;
        goto label_230874;
    }
    ctx->pc = 0x23086Cu;
    {
        const bool branch_taken_0x23086c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x230870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23086Cu;
        // 0x230870: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23086c) {
            ctx->pc = 0x230878u;
            goto label_230878;
        }
    }
    ctx->pc = 0x230874u;
label_230874:
    // 0x230874: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x230874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230878:
    // 0x230878: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_23087c:
    if (ctx->pc == 0x23087Cu) {
        ctx->pc = 0x230880u;
        goto label_230880;
    }
    ctx->pc = 0x230878u;
    {
        const bool branch_taken_0x230878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x230878) {
            ctx->pc = 0x230894u;
            goto label_230894;
        }
    }
    ctx->pc = 0x230880u;
label_230880:
    // 0x230880: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x230880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_230884:
    // 0x230884: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x230884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_230888:
    // 0x230888: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23088c:
    // 0x23088c: 0x1000000d  b           . + 4 + (0xD << 2)
label_230890:
    if (ctx->pc == 0x230890u) {
        ctx->pc = 0x230890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23088Cu;
        // 0x230890: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x230894u;
        goto label_230894;
    }
    ctx->pc = 0x23088Cu;
    {
        const bool branch_taken_0x23088c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23088Cu;
        // 0x230890: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23088c) {
            ctx->pc = 0x2308C4u;
            goto label_2308c4;
        }
    }
    ctx->pc = 0x230894u;
label_230894:
    // 0x230894: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x230894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_230898:
    // 0x230898: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x230898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_23089c:
    // 0x23089c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23089cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2308a0:
    // 0x2308a0: 0x0  nop
    ctx->pc = 0x2308a0u;
    // NOP
label_2308a4:
    // 0x2308a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2308a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2308a8:
    // 0x2308a8: 0x0  nop
    ctx->pc = 0x2308a8u;
    // NOP
label_2308ac:
    // 0x2308ac: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2308b0:
    if (ctx->pc == 0x2308B0u) {
        ctx->pc = 0x2308B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2308ACu;
        // 0x2308b0: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2308B4u;
        goto label_2308b4;
    }
    ctx->pc = 0x2308ACu;
    {
        const bool branch_taken_0x2308ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2308B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2308ACu;
        // 0x2308b0: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2308ac) {
            ctx->pc = 0x2308C4u;
            goto label_2308c4;
        }
    }
    ctx->pc = 0x2308B4u;
label_2308b4:
    // 0x2308b4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2308b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2308b8:
    // 0x2308b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2308b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2308bc:
    // 0x2308bc: 0x10000001  b           . + 4 + (0x1 << 2)
label_2308c0:
    if (ctx->pc == 0x2308C0u) {
        ctx->pc = 0x2308C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2308BCu;
        // 0x2308c0: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2308C4u;
        goto label_2308c4;
    }
    ctx->pc = 0x2308BCu;
    {
        const bool branch_taken_0x2308bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2308C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2308BCu;
        // 0x2308c0: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2308bc) {
            ctx->pc = 0x2308C4u;
            goto label_2308c4;
        }
    }
    ctx->pc = 0x2308C4u;
label_2308c4:
    // 0x2308c4: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2308c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_2308c8:
    // 0x2308c8: 0xc066e44  jal         func_19B910
label_2308cc:
    if (ctx->pc == 0x2308CCu) {
        ctx->pc = 0x2308CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2308C8u;
        // 0x2308cc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2308D0u;
        goto label_2308d0;
    }
    ctx->pc = 0x2308C8u;
    SET_GPR_U32(ctx, 31, 0x2308D0u);
    ctx->pc = 0x2308CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2308C8u;
    // 0x2308cc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x2308D0u;
label_2308d0:
    // 0x2308d0: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x2308d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2308d4:
    // 0x2308d4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2308d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2308d8:
    // 0x2308d8: 0xc066ec0  jal         func_19BB00
label_2308dc:
    if (ctx->pc == 0x2308DCu) {
        ctx->pc = 0x2308DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2308D8u;
        // 0x2308dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2308E0u;
        goto label_2308e0;
    }
    ctx->pc = 0x2308D8u;
    SET_GPR_U32(ctx, 31, 0x2308E0u);
    ctx->pc = 0x2308DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2308D8u;
    // 0x2308dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x2308E0u;
label_2308e0:
    // 0x2308e0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2308e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2308e4:
    // 0x2308e4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2308e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2308e8:
    // 0x2308e8: 0xc066d7a  jal         func_19B5E8
label_2308ec:
    if (ctx->pc == 0x2308ECu) {
        ctx->pc = 0x2308ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2308E8u;
        // 0x2308ec: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2308F0u;
        goto label_2308f0;
    }
    ctx->pc = 0x2308E8u;
    SET_GPR_U32(ctx, 31, 0x2308F0u);
    ctx->pc = 0x2308ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2308E8u;
    // 0x2308ec: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x2308F0u;
label_2308f0:
    // 0x2308f0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2308f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2308f4:
    // 0x2308f4: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x2308f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2308f8:
    // 0x2308f8: 0xc066e02  jal         func_19B808
label_2308fc:
    if (ctx->pc == 0x2308FCu) {
        ctx->pc = 0x2308FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2308F8u;
        // 0x2308fc: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230900u;
        goto label_230900;
    }
    ctx->pc = 0x2308F8u;
    SET_GPR_U32(ctx, 31, 0x230900u);
    ctx->pc = 0x2308FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2308F8u;
    // 0x2308fc: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x230900u;
label_230900:
    // 0x230900: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x230900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_230904:
    // 0x230904: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x230904u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_230908:
    // 0x230908: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x230908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23090c:
    // 0x23090c: 0x3e00008  jr          $ra
label_230910:
    if (ctx->pc == 0x230910u) {
        ctx->pc = 0x230910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23090Cu;
        // 0x230910: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230914u;
        goto label_230914;
    }
    ctx->pc = 0x23090Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23090Cu;
        // 0x230910: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23090Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230914u;
label_230914:
    // 0x230914: 0x0  nop
    ctx->pc = 0x230914u;
    // NOP
label_230918:
    // 0x230918: 0x0  nop
    ctx->pc = 0x230918u;
    // NOP
label_23091c:
    // 0x23091c: 0x0  nop
    ctx->pc = 0x23091cu;
    // NOP
label_230920:
    // 0x230920: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x230920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_230924:
    // 0x230924: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x230924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_230928:
    // 0x230928: 0xac20a640  sw          $zero, -0x59C0($at)
    ctx->pc = 0x230928u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944320), GPR_U32(ctx, 0));
label_23092c:
    // 0x23092c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23092cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_230930:
    // 0x230930: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x230930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_230934:
    // 0x230934: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x230934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_230938:
    // 0x230938: 0xac24aad4  sw          $a0, -0x552C($at)
    ctx->pc = 0x230938u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945492), GPR_U32(ctx, 4));
label_23093c:
    // 0x23093c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x23093cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_230940:
    // 0x230940: 0x3e00008  jr          $ra
label_230944:
    if (ctx->pc == 0x230944u) {
        ctx->pc = 0x230944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230940u;
        // 0x230944: 0xac23a648  sw          $v1, -0x59B8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294944328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230948u;
        goto label_230948;
    }
    ctx->pc = 0x230940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230940u;
        // 0x230944: 0xac23a648  sw          $v1, -0x59B8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294944328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230948u;
label_230948:
    // 0x230948: 0x0  nop
    ctx->pc = 0x230948u;
    // NOP
label_23094c:
    // 0x23094c: 0x0  nop
    ctx->pc = 0x23094cu;
    // NOP
label_230950:
    // 0x230950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x230950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_230954:
    // 0x230954: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x230954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_230958:
    // 0x230958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x230958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23095c:
    // 0x23095c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23095cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_230960:
    // 0x230960: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x230960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_230964:
    // 0x230964: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x230964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_230968:
    // 0x230968: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_23096c:
    if (ctx->pc == 0x23096Cu) {
        ctx->pc = 0x230970u;
        goto label_230970;
    }
    ctx->pc = 0x230968u;
    {
        const bool branch_taken_0x230968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x230968) {
            ctx->pc = 0x2309B8u;
            goto label_2309b8;
        }
    }
    ctx->pc = 0x230970u;
label_230970:
    // 0x230970: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x230970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_230974:
    // 0x230974: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x230974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_230978:
    // 0x230978: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x230978u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_23097c:
    // 0x23097c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_230980:
    if (ctx->pc == 0x230980u) {
        ctx->pc = 0x230984u;
        goto label_230984;
    }
    ctx->pc = 0x23097Cu;
    {
        const bool branch_taken_0x23097c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x23097c) {
            ctx->pc = 0x23098Cu;
            goto label_23098c;
        }
    }
    ctx->pc = 0x230984u;
label_230984:
    // 0x230984: 0x1000000d  b           . + 4 + (0xD << 2)
label_230988:
    if (ctx->pc == 0x230988u) {
        ctx->pc = 0x230988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230984u;
        // 0x230988: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23098Cu;
        goto label_23098c;
    }
    ctx->pc = 0x230984u;
    {
        const bool branch_taken_0x230984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230984u;
        // 0x230988: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230984) {
            ctx->pc = 0x2309BCu;
            goto label_2309bc;
        }
    }
    ctx->pc = 0x23098Cu;
label_23098c:
    // 0x23098c: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x23098cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
label_230990:
    // 0x230990: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x230990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230994:
    // 0x230994: 0x2610aae0  addiu       $s0, $s0, -0x5520
    ctx->pc = 0x230994u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945504));
label_230998:
    // 0x230998: 0xc044a6c  jal         func_1129B0
label_23099c:
    if (ctx->pc == 0x23099Cu) {
        ctx->pc = 0x23099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230998u;
        // 0x23099c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2309A0u;
        goto label_2309a0;
    }
    ctx->pc = 0x230998u;
    SET_GPR_U32(ctx, 31, 0x2309A0u);
    ctx->pc = 0x23099Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230998u;
    // 0x23099c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1129B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1129B0u, 0x230998u, 0x2309A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2309A0u;
label_2309a0:
    // 0x2309a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2309a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2309a4:
    // 0x2309a4: 0x261000c8  addiu       $s0, $s0, 0xC8
    ctx->pc = 0x2309a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
label_2309a8:
    // 0x2309a8: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x2309a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_2309ac:
    // 0x2309ac: 0x0  nop
    ctx->pc = 0x2309acu;
    // NOP
label_2309b0:
    // 0x2309b0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_2309b4:
    if (ctx->pc == 0x2309B4u) {
        ctx->pc = 0x2309B8u;
        goto label_2309b8;
    }
    ctx->pc = 0x2309B0u;
    {
        const bool branch_taken_0x2309b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2309b0) {
            ctx->pc = 0x230998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_230998;
        }
    }
    ctx->pc = 0x2309B8u;
label_2309b8:
    // 0x2309b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2309b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2309bc:
    // 0x2309bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2309bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2309c0:
    // 0x2309c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2309c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2309c4:
    // 0x2309c4: 0x3e00008  jr          $ra
label_2309c8:
    if (ctx->pc == 0x2309C8u) {
        ctx->pc = 0x2309C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2309C4u;
        // 0x2309c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2309CCu;
        goto label_2309cc;
    }
    ctx->pc = 0x2309C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2309C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2309C4u;
        // 0x2309c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2309C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2309CCu;
label_2309cc:
    // 0x2309cc: 0x0  nop
    ctx->pc = 0x2309ccu;
    // NOP
label_2309d0:
    // 0x2309d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2309d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2309d4:
    // 0x2309d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2309d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2309d8:
    // 0x2309d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2309d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2309dc:
    // 0x2309dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2309dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2309e0:
    // 0x2309e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2309e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2309e4:
    // 0x2309e4: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x2309e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_2309e8:
    // 0x2309e8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x2309e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_2309ec:
    // 0x2309ec: 0x14600069  bnez        $v1, . + 4 + (0x69 << 2)
label_2309f0:
    if (ctx->pc == 0x2309F0u) {
        ctx->pc = 0x2309F4u;
        goto label_2309f4;
    }
    ctx->pc = 0x2309ECu;
    {
        const bool branch_taken_0x2309ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2309ec) {
            ctx->pc = 0x230B94u;
            goto label_230b94;
        }
    }
    ctx->pc = 0x2309F4u;
label_2309f4:
    // 0x2309f4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2309f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_2309f8:
    // 0x2309f8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2309f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2309fc:
    // 0x2309fc: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x2309fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_230a00:
    // 0x230a00: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_230a04:
    if (ctx->pc == 0x230A04u) {
        ctx->pc = 0x230A08u;
        goto label_230a08;
    }
    ctx->pc = 0x230A00u;
    {
        const bool branch_taken_0x230a00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x230a00) {
            ctx->pc = 0x230A10u;
            goto label_230a10;
        }
    }
    ctx->pc = 0x230A08u;
label_230a08:
    // 0x230a08: 0x10000063  b           . + 4 + (0x63 << 2)
label_230a0c:
    if (ctx->pc == 0x230A0Cu) {
        ctx->pc = 0x230A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A08u;
        // 0x230a0c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230A10u;
        goto label_230a10;
    }
    ctx->pc = 0x230A08u;
    {
        const bool branch_taken_0x230a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A08u;
        // 0x230a0c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a08) {
            ctx->pc = 0x230B98u;
            goto label_230b98;
        }
    }
    ctx->pc = 0x230A10u;
label_230a10:
    // 0x230a10: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x230a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_230a14:
    // 0x230a14: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x230a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_230a18:
    // 0x230a18: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x230a18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_230a1c:
    // 0x230a1c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_230a20:
    if (ctx->pc == 0x230A20u) {
        ctx->pc = 0x230A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A1Cu;
        // 0x230a20: 0x3c024100  lui         $v0, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230A24u;
        goto label_230a24;
    }
    ctx->pc = 0x230A1Cu;
    {
        const bool branch_taken_0x230a1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x230A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A1Cu;
        // 0x230a20: 0x3c024100  lui         $v0, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a1c) {
            ctx->pc = 0x230A40u;
            goto label_230a40;
        }
    }
    ctx->pc = 0x230A24u;
label_230a24:
    // 0x230a24: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x230a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_230a28:
    // 0x230a28: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x230a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
label_230a2c:
    // 0x230a2c: 0xac220fe4  sw          $v0, 0xFE4($at)
    ctx->pc = 0x230a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4068), GPR_U32(ctx, 2));
label_230a30:
    // 0x230a30: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x230a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
label_230a34:
    // 0x230a34: 0x10000006  b           . + 4 + (0x6 << 2)
label_230a38:
    if (ctx->pc == 0x230A38u) {
        ctx->pc = 0x230A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A34u;
        // 0x230a38: 0xac220fe8  sw          $v0, 0xFE8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230A3Cu;
        goto label_230a3c;
    }
    ctx->pc = 0x230A34u;
    {
        const bool branch_taken_0x230a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A34u;
        // 0x230a38: 0xac220fe8  sw          $v0, 0xFE8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a34) {
            ctx->pc = 0x230A50u;
            goto label_230a50;
        }
    }
    ctx->pc = 0x230A3Cu;
label_230a3c:
    // 0x230a3c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x230a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_230a40:
    // 0x230a40: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x230a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
label_230a44:
    // 0x230a44: 0xac220fe4  sw          $v0, 0xFE4($at)
    ctx->pc = 0x230a44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4068), GPR_U32(ctx, 2));
label_230a48:
    // 0x230a48: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x230a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
label_230a4c:
    // 0x230a4c: 0xac220fe8  sw          $v0, 0xFE8($at)
    ctx->pc = 0x230a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4072), GPR_U32(ctx, 2));
label_230a50:
    // 0x230a50: 0x3c110059  lui         $s1, 0x59
    ctx->pc = 0x230a50u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
label_230a54:
    // 0x230a54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x230a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230a58:
    // 0x230a58: 0xc060668  jal         func_1819A0
label_230a5c:
    if (ctx->pc == 0x230A5Cu) {
        ctx->pc = 0x230A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A58u;
        // 0x230a5c: 0x2631aae0  addiu       $s1, $s1, -0x5520 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945504));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230A60u;
        goto label_230a60;
    }
    ctx->pc = 0x230A58u;
    SET_GPR_U32(ctx, 31, 0x230A60u);
    ctx->pc = 0x230A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230A58u;
    // 0x230a5c: 0x2631aae0  addiu       $s1, $s1, -0x5520 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819A0u;
    { ctx->pc = 0x1819a0; return; }
    ctx->pc = 0x230A60u;
label_230a60:
    // 0x230a60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x230a60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_230a64:
    // 0x230a64: 0xc060678  jal         func_1819E0
label_230a68:
    if (ctx->pc == 0x230A68u) {
        ctx->pc = 0x230A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A64u;
        // 0x230a68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230A6Cu;
        goto label_230a6c;
    }
    ctx->pc = 0x230A64u;
    SET_GPR_U32(ctx, 31, 0x230A6Cu);
    ctx->pc = 0x230A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230A64u;
    // 0x230a68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819E0u;
    { ctx->pc = 0x1819e0; return; }
    ctx->pc = 0x230A6Cu;
label_230a6c:
    // 0x230a6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x230a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_230a70:
    // 0x230a70: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x230a70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_230a74:
    // 0x230a74: 0xc044c8c  jal         func_113230
label_230a78:
    if (ctx->pc == 0x230A78u) {
        ctx->pc = 0x230A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A74u;
        // 0x230a78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230A7Cu;
        goto label_230a7c;
    }
    ctx->pc = 0x230A74u;
    SET_GPR_U32(ctx, 31, 0x230A7Cu);
    ctx->pc = 0x230A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230A74u;
    // 0x230a78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113230u, 0x230A74u, 0x230A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230A7Cu;
label_230a7c:
    // 0x230a7c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x230a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_230a80:
    // 0x230a80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x230a80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230a84:
    // 0x230a84: 0xdc32aae0  ld          $s2, -0x5520($at)
    ctx->pc = 0x230a84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 1), 4294945504)));
label_230a88:
    // 0x230a88: 0x0  nop
    ctx->pc = 0x230a88u;
    // NOP
label_230a8c:
    // 0x230a8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_230a90:
    // 0x230a90: 0xc044ed8  jal         func_113B60
label_230a94:
    if (ctx->pc == 0x230A94u) {
        ctx->pc = 0x230A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A90u;
        // 0x230a94: 0xfe320000  sd          $s2, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230A98u;
        goto label_230a98;
    }
    ctx->pc = 0x230A90u;
    SET_GPR_U32(ctx, 31, 0x230A98u);
    ctx->pc = 0x230A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230A90u;
    // 0x230a94: 0xfe320000  sd          $s2, 0x0($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B60u, 0x230A90u, 0x230A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230A98u;
label_230a98:
    // 0x230a98: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x230a98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_230a9c:
    // 0x230a9c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x230a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_230aa0:
    // 0x230aa0: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x230aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_230aa4:
    // 0x230aa4: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x230aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_230aa8:
    // 0x230aa8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_230aac:
    if (ctx->pc == 0x230AACu) {
        ctx->pc = 0x230AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230AA8u;
        // 0x230aac: 0xae2000c4  sw          $zero, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230AB0u;
        goto label_230ab0;
    }
    ctx->pc = 0x230AA8u;
    {
        const bool branch_taken_0x230aa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x230AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230AA8u;
        // 0x230aac: 0xae2000c4  sw          $zero, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230aa8) {
            ctx->pc = 0x230ABCu;
            goto label_230abc;
        }
    }
    ctx->pc = 0x230AB0u;
label_230ab0:
    // 0x230ab0: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x230ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_230ab4:
    // 0x230ab4: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x230ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_230ab8:
    // 0x230ab8: 0xa6200026  sh          $zero, 0x26($s1)
    ctx->pc = 0x230ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 0));
label_230abc:
    // 0x230abc: 0x0  nop
    ctx->pc = 0x230abcu;
    // NOP
label_230ac0:
    // 0x230ac0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x230ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_230ac4:
    // 0x230ac4: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x230ac4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_230ac8:
    // 0x230ac8: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_230acc:
    if (ctx->pc == 0x230ACCu) {
        ctx->pc = 0x230ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230AC8u;
        // 0x230acc: 0x263100c8  addiu       $s1, $s1, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230AD0u;
        goto label_230ad0;
    }
    ctx->pc = 0x230AC8u;
    {
        const bool branch_taken_0x230ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230AC8u;
        // 0x230acc: 0x263100c8  addiu       $s1, $s1, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ac8) {
            ctx->pc = 0x230A8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_230a8c;
        }
    }
    ctx->pc = 0x230AD0u;
label_230ad0:
    // 0x230ad0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x230ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_230ad4:
    // 0x230ad4: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x230ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_230ad8:
    // 0x230ad8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x230ad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_230adc:
    // 0x230adc: 0xc05cf6c  jal         func_173DB0
label_230ae0:
    if (ctx->pc == 0x230AE0u) {
        ctx->pc = 0x230AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230ADCu;
        // 0x230ae0: 0x2484a760  addiu       $a0, $a0, -0x58A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230AE4u;
        goto label_230ae4;
    }
    ctx->pc = 0x230ADCu;
    SET_GPR_U32(ctx, 31, 0x230AE4u);
    ctx->pc = 0x230AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230ADCu;
    // 0x230ae0: 0x2484a760  addiu       $a0, $a0, -0x58A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DB0u, 0x230ADCu, 0x230AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230AE4u;
label_230ae4:
    // 0x230ae4: 0x3c110059  lui         $s1, 0x59
    ctx->pc = 0x230ae4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
label_230ae8:
    // 0x230ae8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x230ae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230aec:
    // 0x230aec: 0x2631a640  addiu       $s1, $s1, -0x59C0
    ctx->pc = 0x230aecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944320));
label_230af0:
    // 0x230af0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x230af0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230af4:
    // 0x230af4: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_230af8:
    if (ctx->pc == 0x230AF8u) {
        ctx->pc = 0x230AFCu;
        goto label_230afc;
    }
    ctx->pc = 0x230AF4u;
    {
        const bool branch_taken_0x230af4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x230af4) {
            ctx->pc = 0x230B10u;
            goto label_230b10;
        }
    }
    ctx->pc = 0x230AFCu;
label_230afc:
    // 0x230afc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x230afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230b00:
    // 0x230b00: 0xc053b5c  jal         func_14ED70
label_230b04:
    if (ctx->pc == 0x230B04u) {
        ctx->pc = 0x230B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B00u;
        // 0x230b04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230B08u;
        goto label_230b08;
    }
    ctx->pc = 0x230B00u;
    SET_GPR_U32(ctx, 31, 0x230B08u);
    ctx->pc = 0x230B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230B00u;
    // 0x230b04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ED70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ED70u, 0x230B00u, 0x230B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230B08u;
label_230b08:
    // 0x230b08: 0x10000004  b           . + 4 + (0x4 << 2)
label_230b0c:
    if (ctx->pc == 0x230B0Cu) {
        ctx->pc = 0x230B10u;
        goto label_230b10;
    }
    ctx->pc = 0x230B08u;
    {
        const bool branch_taken_0x230b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230b08) {
            ctx->pc = 0x230B1Cu;
            goto label_230b1c;
        }
    }
    ctx->pc = 0x230B10u;
label_230b10:
    // 0x230b10: 0x2624ff70  addiu       $a0, $s1, -0x90
    ctx->pc = 0x230b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967152));
label_230b14:
    // 0x230b14: 0xc053b5c  jal         func_14ED70
label_230b18:
    if (ctx->pc == 0x230B18u) {
        ctx->pc = 0x230B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B14u;
        // 0x230b18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230B1Cu;
        goto label_230b1c;
    }
    ctx->pc = 0x230B14u;
    SET_GPR_U32(ctx, 31, 0x230B1Cu);
    ctx->pc = 0x230B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230B14u;
    // 0x230b18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ED70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ED70u, 0x230B14u, 0x230B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230B1Cu;
label_230b1c:
    // 0x230b1c: 0x0  nop
    ctx->pc = 0x230b1cu;
    // NOP
label_230b20:
    // 0x230b20: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x230b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_230b24:
    // 0x230b24: 0x2463a540  addiu       $v1, $v1, -0x5AC0
    ctx->pc = 0x230b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944064));
label_230b28:
    // 0x230b28: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x230b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_230b2c:
    // 0x230b2c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x230b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_230b30:
    // 0x230b30: 0xae230080  sw          $v1, 0x80($s1)
    ctx->pc = 0x230b30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
label_230b34:
    // 0x230b34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x230b34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_230b38:
    // 0x230b38: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x230b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_230b3c:
    // 0x230b3c: 0xae230084  sw          $v1, 0x84($s1)
    ctx->pc = 0x230b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 3));
label_230b40:
    // 0x230b40: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x230b40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_230b44:
    // 0x230b44: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x230b44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_230b48:
    // 0x230b48: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x230b48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_230b4c:
    // 0x230b4c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x230b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_230b50:
    // 0x230b50: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x230b50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_230b54:
    // 0x230b54: 0x90234af0  lbu         $v1, 0x4AF0($at)
    ctx->pc = 0x230b54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19184)));
label_230b58:
    // 0x230b58: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_230b5c:
    if (ctx->pc == 0x230B5Cu) {
        ctx->pc = 0x230B60u;
        goto label_230b60;
    }
    ctx->pc = 0x230B58u;
    {
        const bool branch_taken_0x230b58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x230b58) {
            ctx->pc = 0x230B64u;
            goto label_230b64;
        }
    }
    ctx->pc = 0x230B60u;
label_230b60:
    // 0x230b60: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x230b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_230b64:
    // 0x230b64: 0x0  nop
    ctx->pc = 0x230b64u;
    // NOP
label_230b68:
    // 0x230b68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x230b68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_230b6c:
    // 0x230b6c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x230b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_230b70:
    // 0x230b70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x230b70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_230b74:
    // 0x230b74: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x230b74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_230b78:
    // 0x230b78: 0x26520080  addiu       $s2, $s2, 0x80
    ctx->pc = 0x230b78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_230b7c:
    // 0x230b7c: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
label_230b80:
    if (ctx->pc == 0x230B80u) {
        ctx->pc = 0x230B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B7Cu;
        // 0x230b80: 0x26310090  addiu       $s1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230B84u;
        goto label_230b84;
    }
    ctx->pc = 0x230B7Cu;
    {
        const bool branch_taken_0x230b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x230B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B7Cu;
        // 0x230b80: 0x26310090  addiu       $s1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b7c) {
            ctx->pc = 0x230AF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_230af4;
        }
    }
    ctx->pc = 0x230B84u;
label_230b84:
    // 0x230b84: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x230b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_230b88:
    // 0x230b88: 0xe420aad0  swc1        $f0, -0x5530($at)
    ctx->pc = 0x230b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294945488), bits); }
label_230b8c:
    // 0x230b8c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x230b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_230b90:
    // 0x230b90: 0xac20aad4  sw          $zero, -0x552C($at)
    ctx->pc = 0x230b90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945492), GPR_U32(ctx, 0));
label_230b94:
    // 0x230b94: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x230b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_230b98:
    // 0x230b98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x230b98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_230b9c:
    // 0x230b9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x230b9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_230ba0:
    // 0x230ba0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x230ba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_230ba4:
    // 0x230ba4: 0x3e00008  jr          $ra
label_230ba8:
    if (ctx->pc == 0x230BA8u) {
        ctx->pc = 0x230BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230BA4u;
        // 0x230ba8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230BACu;
        goto label_230bac;
    }
    ctx->pc = 0x230BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230BA4u;
        // 0x230ba8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230BACu;
label_230bac:
    // 0x230bac: 0x0  nop
    ctx->pc = 0x230bacu;
    // NOP
label_230bb0:
    // 0x230bb0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x230bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_230bb4:
    // 0x230bb4: 0x3e00008  jr          $ra
label_230bb8:
    if (ctx->pc == 0x230BB8u) {
        ctx->pc = 0x230BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230BB4u;
        // 0x230bb8: 0xe42ca644  swc1        $f12, -0x59BC($at) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294944324), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x230BBCu;
        goto label_230bbc;
    }
    ctx->pc = 0x230BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230BB4u;
        // 0x230bb8: 0xe42ca644  swc1        $f12, -0x59BC($at) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294944324), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230BBCu;
label_230bbc:
    // 0x230bbc: 0x0  nop
    ctx->pc = 0x230bbcu;
    // NOP
label_230bc0:
    // 0x230bc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x230bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_230bc4:
    // 0x230bc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x230bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_230bc8:
    // 0x230bc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x230bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_230bcc:
    // 0x230bcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x230bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_230bd0:
    // 0x230bd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x230bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_230bd4:
    // 0x230bd4: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x230bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_230bd8:
    // 0x230bd8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x230bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_230bdc:
    // 0x230bdc: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
label_230be0:
    if (ctx->pc == 0x230BE0u) {
        ctx->pc = 0x230BE4u;
        goto label_230be4;
    }
    ctx->pc = 0x230BDCu;
    {
        const bool branch_taken_0x230bdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x230bdc) {
            ctx->pc = 0x230C48u;
            goto label_230c48;
        }
    }
    ctx->pc = 0x230BE4u;
label_230be4:
    // 0x230be4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x230be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_230be8:
    // 0x230be8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x230be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_230bec:
    // 0x230bec: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x230becu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_230bf0:
    // 0x230bf0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_230bf4:
    if (ctx->pc == 0x230BF4u) {
        ctx->pc = 0x230BF8u;
        goto label_230bf8;
    }
    ctx->pc = 0x230BF0u;
    {
        const bool branch_taken_0x230bf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x230bf0) {
            ctx->pc = 0x230C00u;
            goto label_230c00;
        }
    }
    ctx->pc = 0x230BF8u;
label_230bf8:
    // 0x230bf8: 0x10000014  b           . + 4 + (0x14 << 2)
label_230bfc:
    if (ctx->pc == 0x230BFCu) {
        ctx->pc = 0x230BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230BF8u;
        // 0x230bfc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230C00u;
        goto label_230c00;
    }
    ctx->pc = 0x230BF8u;
    {
        const bool branch_taken_0x230bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230BF8u;
        // 0x230bfc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230bf8) {
            ctx->pc = 0x230C4Cu;
            goto label_230c4c;
        }
    }
    ctx->pc = 0x230C00u;
label_230c00:
    // 0x230c00: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x230c00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_230c04:
    // 0x230c04: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x230c04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
label_230c08:
    // 0x230c08: 0x240400f4  addiu       $a0, $zero, 0xF4
    ctx->pc = 0x230c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
label_230c0c:
    // 0x230c0c: 0x24a5aafc  addiu       $a1, $a1, -0x5504
    ctx->pc = 0x230c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945532));
label_230c10:
    // 0x230c10: 0xc0415a4  jal         func_105690
label_230c14:
    if (ctx->pc == 0x230C14u) {
        ctx->pc = 0x230C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C10u;
        // 0x230c14: 0x2610aae0  addiu       $s0, $s0, -0x5520 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945504));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230C18u;
        goto label_230c18;
    }
    ctx->pc = 0x230C10u;
    SET_GPR_U32(ctx, 31, 0x230C18u);
    ctx->pc = 0x230C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230C10u;
    // 0x230c14: 0x2610aae0  addiu       $s0, $s0, -0x5520 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105690u, 0x230C10u, 0x230C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230C18u;
label_230c18:
    // 0x230c18: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x230c18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230c1c:
    // 0x230c1c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x230c1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230c20:
    // 0x230c20: 0x278282c8  addiu       $v0, $gp, -0x7D38
    ctx->pc = 0x230c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935240));
label_230c24:
    // 0x230c24: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x230c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_230c28:
    // 0x230c28: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x230c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_230c2c:
    // 0x230c2c: 0xc0415a4  jal         func_105690
label_230c30:
    if (ctx->pc == 0x230C30u) {
        ctx->pc = 0x230C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C2Cu;
        // 0x230c30: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230C34u;
        goto label_230c34;
    }
    ctx->pc = 0x230C2Cu;
    SET_GPR_U32(ctx, 31, 0x230C34u);
    ctx->pc = 0x230C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230C2Cu;
    // 0x230c30: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105690u, 0x230C2Cu, 0x230C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230C34u;
label_230c34:
    // 0x230c34: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x230c34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_230c38:
    // 0x230c38: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x230c38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_230c3c:
    // 0x230c3c: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x230c3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_230c40:
    // 0x230c40: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_230c44:
    if (ctx->pc == 0x230C44u) {
        ctx->pc = 0x230C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C40u;
        // 0x230c44: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230C48u;
        goto label_230c48;
    }
    ctx->pc = 0x230C40u;
    {
        const bool branch_taken_0x230c40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x230C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C40u;
        // 0x230c44: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c40) {
            ctx->pc = 0x230C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_230c20;
        }
    }
    ctx->pc = 0x230C48u;
label_230c48:
    // 0x230c48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x230c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_230c4c:
    // 0x230c4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x230c4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_230c50:
    // 0x230c50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x230c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_230c54:
    // 0x230c54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x230c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_230c58:
    // 0x230c58: 0x3e00008  jr          $ra
label_230c5c:
    if (ctx->pc == 0x230C5Cu) {
        ctx->pc = 0x230C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C58u;
        // 0x230c5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230C60u;
        goto label_230c60;
    }
    ctx->pc = 0x230C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C58u;
        // 0x230c5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230C60u;
label_230c60:
    // 0x230c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x230c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_230c64:
    // 0x230c64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x230c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_230c68:
    // 0x230c68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x230c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_230c6c:
    // 0x230c6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x230c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_230c70:
    // 0x230c70: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x230c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_230c74:
    // 0x230c74: 0xc08c448  jal         func_231120
label_230c78:
    if (ctx->pc == 0x230C78u) {
        ctx->pc = 0x230C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C74u;
        // 0x230c78: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230C7Cu;
        goto label_230c7c;
    }
    ctx->pc = 0x230C74u;
    SET_GPR_U32(ctx, 31, 0x230C7Cu);
    ctx->pc = 0x230C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230C74u;
    // 0x230c78: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231120u;
    { ctx->pc = 0x231120; return; }
    ctx->pc = 0x230C7Cu;
label_230c7c:
    // 0x230c7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x230c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_230c80:
    // 0x230c80: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x230c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_230c84:
    // 0x230c84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_230c88:
    // 0x230c88: 0x16000017  bnez        $s0, . + 4 + (0x17 << 2)
label_230c8c:
    if (ctx->pc == 0x230C8Cu) {
        ctx->pc = 0x230C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C88u;
        // 0x230c8c: 0x245204b0  addiu       $s2, $v0, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230C90u;
        goto label_230c90;
    }
    ctx->pc = 0x230C88u;
    {
        const bool branch_taken_0x230c88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x230C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C88u;
        // 0x230c8c: 0x245204b0  addiu       $s2, $v0, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c88) {
            ctx->pc = 0x230CE8u;
            goto label_230ce8;
        }
    }
    ctx->pc = 0x230C90u;
label_230c90:
    // 0x230c90: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x230c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_230c94:
    // 0x230c94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_230c98:
    if (ctx->pc == 0x230C98u) {
        ctx->pc = 0x230C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C94u;
        // 0x230c98: 0x8f8682d0  lw          $a2, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230C9Cu;
        goto label_230c9c;
    }
    ctx->pc = 0x230C94u;
    {
        const bool branch_taken_0x230c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C94u;
        // 0x230c98: 0x8f8682d0  lw          $a2, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c94) {
            ctx->pc = 0x230CA8u;
            goto label_230ca8;
        }
    }
    ctx->pc = 0x230C9Cu;
label_230c9c:
    // 0x230c9c: 0x40f809  jalr        $v0
label_230ca0:
    if (ctx->pc == 0x230CA0u) {
        ctx->pc = 0x230CA4u;
        goto label_230ca4;
    }
    ctx->pc = 0x230C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230CA4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230C9Cu, 0x230CA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x230CA4u;
label_230ca4:
    // 0x230ca4: 0x8f8682d0  lw          $a2, -0x7D30($gp)
    ctx->pc = 0x230ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_230ca8:
    // 0x230ca8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x230ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230cac:
    // 0x230cac: 0x3c070009  lui         $a3, 0x9
    ctx->pc = 0x230cacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)9 << 16));
label_230cb0:
    // 0x230cb0: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x230cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_230cb4:
    // 0x230cb4: 0x8ce71274  lw          $a3, 0x1274($a3)
    ctx->pc = 0x230cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4724)));
label_230cb8:
    // 0x230cb8: 0x3c050009  lui         $a1, 0x9
    ctx->pc = 0x230cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)9 << 16));
label_230cbc:
    // 0x230cbc: 0x34a51158  ori         $a1, $a1, 0x1158
    ctx->pc = 0x230cbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4440);
label_230cc0:
    // 0x230cc0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x230cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_230cc4:
    // 0x230cc4: 0xc08c358  jal         func_230D60
label_230cc8:
    if (ctx->pc == 0x230CC8u) {
        ctx->pc = 0x230CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230CC4u;
        // 0x230cc8: 0x24c61100  addiu       $a2, $a2, 0x1100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230CCCu;
        goto label_230ccc;
    }
    ctx->pc = 0x230CC4u;
    SET_GPR_U32(ctx, 31, 0x230CCCu);
    ctx->pc = 0x230CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230CC4u;
    // 0x230cc8: 0x24c61100  addiu       $a2, $a2, 0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230D60u;
    goto label_230d60;
    ctx->pc = 0x230CCCu;
label_230ccc:
    // 0x230ccc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x230cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_230cd0:
    // 0x230cd0: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x230cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_230cd4:
    // 0x230cd4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_230cd8:
    if (ctx->pc == 0x230CD8u) {
        ctx->pc = 0x230CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230CD4u;
        // 0x230cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230CDCu;
        goto label_230cdc;
    }
    ctx->pc = 0x230CD4u;
    {
        const bool branch_taken_0x230cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230CD4u;
        // 0x230cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230cd4) {
            ctx->pc = 0x230CE4u;
            goto label_230ce4;
        }
    }
    ctx->pc = 0x230CDCu;
label_230cdc:
    // 0x230cdc: 0x40f809  jalr        $v0
label_230ce0:
    if (ctx->pc == 0x230CE0u) {
        ctx->pc = 0x230CE4u;
        goto label_230ce4;
    }
    ctx->pc = 0x230CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230CE4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230CDCu, 0x230CE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x230CE4u;
label_230ce4:
    // 0x230ce4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_230ce8:
    // 0x230ce8: 0xc08c62e  jal         func_2318B8
label_230cec:
    if (ctx->pc == 0x230CECu) {
        ctx->pc = 0x230CF0u;
        goto label_230cf0;
    }
    ctx->pc = 0x230CE8u;
    SET_GPR_U32(ctx, 31, 0x230CF0u);
    ctx->pc = 0x2318B8u;
    { ctx->pc = 0x2318b8; return; }
    ctx->pc = 0x230CF0u;
label_230cf0:
    // 0x230cf0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x230cf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_230cf4:
    // 0x230cf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230cf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_230cf8:
    // 0x230cf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x230cf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_230cfc:
    // 0x230cfc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x230cfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_230d00:
    // 0x230d00: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x230d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_230d04:
    // 0x230d04: 0x3e00008  jr          $ra
label_230d08:
    if (ctx->pc == 0x230D08u) {
        ctx->pc = 0x230D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D04u;
        // 0x230d08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230D0Cu;
        goto label_230d0c;
    }
    ctx->pc = 0x230D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D04u;
        // 0x230d08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230D0Cu;
label_230d0c:
    // 0x230d0c: 0x0  nop
    ctx->pc = 0x230d0cu;
    // NOP
label_230d10:
    // 0x230d10: 0x3e00008  jr          $ra
label_230d14:
    if (ctx->pc == 0x230D14u) {
        ctx->pc = 0x230D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D10u;
        // 0x230d14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230D18u;
        goto label_230d18;
    }
    ctx->pc = 0x230D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D10u;
        // 0x230d14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230D18u;
label_230d18:
    // 0x230d18: 0x3e00008  jr          $ra
label_230d1c:
    if (ctx->pc == 0x230D1Cu) {
        ctx->pc = 0x230D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D18u;
        // 0x230d1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230D20u;
        goto label_230d20;
    }
    ctx->pc = 0x230D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D18u;
        // 0x230d1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230D20u;
label_230d20:
    // 0x230d20: 0x3e00008  jr          $ra
label_230d24:
    if (ctx->pc == 0x230D24u) {
        ctx->pc = 0x230D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D20u;
        // 0x230d24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230D28u;
        goto label_230d28;
    }
    ctx->pc = 0x230D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D20u;
        // 0x230d24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230D28u;
label_230d28:
    // 0x230d28: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x230d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_230d2c:
    // 0x230d2c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x230d2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_230d30:
    // 0x230d30: 0x8c4204e0  lw          $v0, 0x4E0($v0)
    ctx->pc = 0x230d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1248)));
label_230d34:
    // 0x230d34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_230d38:
    if (ctx->pc == 0x230D38u) {
        ctx->pc = 0x230D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D34u;
        // 0x230d38: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230D3Cu;
        goto label_230d3c;
    }
    ctx->pc = 0x230D34u;
    {
        const bool branch_taken_0x230d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D34u;
        // 0x230d38: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d34) {
            ctx->pc = 0x230D4Cu;
            goto label_230d4c;
        }
    }
    ctx->pc = 0x230D3Cu;
label_230d3c:
    // 0x230d3c: 0x40f809  jalr        $v0
label_230d40:
    if (ctx->pc == 0x230D40u) {
        ctx->pc = 0x230D44u;
        goto label_230d44;
    }
    ctx->pc = 0x230D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230D44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230D3Cu, 0x230D44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x230D44u;
label_230d44:
    // 0x230d44: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
label_230d48:
    if (ctx->pc == 0x230D48u) {
        ctx->pc = 0x230D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D44u;
        // 0x230d48: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230D4Cu;
        goto label_230d4c;
    }
    ctx->pc = 0x230D44u;
    {
        const bool branch_taken_0x230d44 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x230D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D44u;
        // 0x230d48: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d44) {
            ctx->pc = 0x230D54u;
            goto label_230d54;
        }
    }
    ctx->pc = 0x230D4Cu;
label_230d4c:
    // 0x230d4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x230d4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230d50:
    // 0x230d50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x230d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_230d54:
    // 0x230d54: 0x3e00008  jr          $ra
label_230d58:
    if (ctx->pc == 0x230D58u) {
        ctx->pc = 0x230D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D54u;
        // 0x230d58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230D5Cu;
        goto label_230d5c;
    }
    ctx->pc = 0x230D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D54u;
        // 0x230d58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230D5Cu;
label_230d5c:
    // 0x230d5c: 0x0  nop
    ctx->pc = 0x230d5cu;
    // NOP
label_230d60:
    // 0x230d60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x230d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_230d64:
    // 0x230d64: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x230d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_230d68:
    // 0x230d68: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x230d68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_230d6c:
    // 0x230d6c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x230d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_230d70:
    // 0x230d70: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x230d70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_230d74:
    // 0x230d74: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x230d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_230d78:
    // 0x230d78: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x230d78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_230d7c:
    // 0x230d7c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x230d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_230d80:
    // 0x230d80: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x230d80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_230d84:
    // 0x230d84: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x230d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_230d88:
    // 0x230d88: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x230d88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230d8c:
    // 0x230d8c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x230d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_230d90:
    // 0x230d90: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x230d90u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230d94:
    // 0x230d94: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x230d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_230d98:
    // 0x230d98: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x230d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_230d9c:
    // 0x230d9c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x230d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_230da0:
    // 0x230da0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x230da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_230da4:
    // 0x230da4: 0x10000085  b           . + 4 + (0x85 << 2)
label_230da8:
    if (ctx->pc == 0x230DA8u) {
        ctx->pc = 0x230DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DA4u;
        // 0x230da8: 0x2a560005  slti        $s6, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x230DACu;
        goto label_230dac;
    }
    ctx->pc = 0x230DA4u;
    {
        const bool branch_taken_0x230da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DA4u;
        // 0x230da8: 0x2a560005  slti        $s6, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230da4) {
            ctx->pc = 0x230FBCu;
            { ctx->pc = 0x230fbc; return; }
        }
    }
    ctx->pc = 0x230DACu;
label_230dac:
    // 0x230dac: 0x0  nop
    ctx->pc = 0x230dacu;
    // NOP
label_230db0:
    // 0x230db0: 0x16a0000f  bnez        $s5, . + 4 + (0xF << 2)
label_230db4:
    if (ctx->pc == 0x230DB4u) {
        ctx->pc = 0x230DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DB0u;
        // 0x230db4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230DB8u;
        goto label_230db8;
    }
    ctx->pc = 0x230DB0u;
    {
        const bool branch_taken_0x230db0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x230DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DB0u;
        // 0x230db4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230db0) {
            ctx->pc = 0x230DF0u;
            goto label_230df0;
        }
    }
    ctx->pc = 0x230DB8u;
label_230db8:
    // 0x230db8: 0x12e0000d  beqz        $s7, . + 4 + (0xD << 2)
label_230dbc:
    if (ctx->pc == 0x230DBCu) {
        ctx->pc = 0x230DC0u;
        goto label_230dc0;
    }
    ctx->pc = 0x230DB8u;
    {
        const bool branch_taken_0x230db8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x230db8) {
            ctx->pc = 0x230DF0u;
            goto label_230df0;
        }
    }
    ctx->pc = 0x230DC0u;
label_230dc0:
    // 0x230dc0: 0xc08c34a  jal         func_230D28
label_230dc4:
    if (ctx->pc == 0x230DC4u) {
        ctx->pc = 0x230DC8u;
        goto label_230dc8;
    }
    ctx->pc = 0x230DC0u;
    SET_GPR_U32(ctx, 31, 0x230DC8u);
    ctx->pc = 0x230D28u;
    goto label_230d28;
    ctx->pc = 0x230DC8u;
label_230dc8:
    // 0x230dc8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x230dc8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_230dcc:
    // 0x230dcc: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
label_230dd0:
    if (ctx->pc == 0x230DD0u) {
        ctx->pc = 0x230DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DCCu;
        // 0x230dd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230DD4u;
        goto label_230dd4;
    }
    ctx->pc = 0x230DCCu;
    {
        const bool branch_taken_0x230dcc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x230DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DCCu;
        // 0x230dd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230dcc) {
            ctx->pc = 0x230DF0u;
            goto label_230df0;
        }
    }
    ctx->pc = 0x230DD4u;
label_230dd4:
    // 0x230dd4: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x230dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_230dd8:
    // 0x230dd8: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x230dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_230ddc:
    // 0x230ddc: 0x34211158  ori         $at, $at, 0x1158
    ctx->pc = 0x230ddcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4440);
label_230de0:
    // 0x230de0: 0xc08cd30  jal         func_2334C0
label_230de4:
    if (ctx->pc == 0x230DE4u) {
        ctx->pc = 0x230DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DE0u;
        // 0x230de4: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230DE8u;
        goto label_230de8;
    }
    ctx->pc = 0x230DE0u;
    SET_GPR_U32(ctx, 31, 0x230DE8u);
    ctx->pc = 0x230DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230DE0u;
    // 0x230de4: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2334C0u;
    { ctx->pc = 0x2334c0; return; }
    ctx->pc = 0x230DE8u;
label_230de8:
    // 0x230de8: 0x1000008f  b           . + 4 + (0x8F << 2)
label_230dec:
    if (ctx->pc == 0x230DECu) {
        ctx->pc = 0x230DF0u;
        goto label_230df0;
    }
    ctx->pc = 0x230DE8u;
    {
        const bool branch_taken_0x230de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230de8) {
            ctx->pc = 0x231028u;
            { ctx->pc = 0x231028; return; }
        }
    }
    ctx->pc = 0x230DF0u;
label_230df0:
    // 0x230df0: 0xc08c768  jal         func_231DA0
label_230df4:
    if (ctx->pc == 0x230DF4u) {
        ctx->pc = 0x230DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DF0u;
        // 0x230df4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230DF8u;
        goto label_230df8;
    }
    ctx->pc = 0x230DF0u;
    SET_GPR_U32(ctx, 31, 0x230DF8u);
    ctx->pc = 0x230DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230DF0u;
    // 0x230df4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231DA0u;
    { ctx->pc = 0x231da0; return; }
    ctx->pc = 0x230DF8u;
label_230df8:
    // 0x230df8: 0x1a600042  blez        $s3, . + 4 + (0x42 << 2)
label_230dfc:
    if (ctx->pc == 0x230DFCu) {
        ctx->pc = 0x230DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DF8u;
        // 0x230dfc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230E00u;
        goto label_230e00;
    }
    ctx->pc = 0x230DF8u;
    {
        const bool branch_taken_0x230df8 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x230DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DF8u;
        // 0x230dfc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230df8) {
            ctx->pc = 0x230F04u;
            { ctx->pc = 0x230f04; return; }
        }
    }
    ctx->pc = 0x230E00u;
label_230e00:
    // 0x230e00: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x230e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
label_230e04:
    // 0x230e04: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x230e04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_230e08:
    // 0x230e08: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_230e0c:
    if (ctx->pc == 0x230E0Cu) {
        ctx->pc = 0x230E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E08u;
        // 0x230e0c: 0x8f8382d8  lw          $v1, -0x7D28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230E10u;
        goto label_230e10;
    }
    ctx->pc = 0x230E08u;
    {
        const bool branch_taken_0x230e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E08u;
        // 0x230e0c: 0x8f8382d8  lw          $v1, -0x7D28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e08) {
            ctx->pc = 0x230F04u;
            { ctx->pc = 0x230f04; return; }
        }
    }
    ctx->pc = 0x230E10u;
label_230e10:
    // 0x230e10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x230e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_230e14:
    // 0x230e14: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_230e18:
    if (ctx->pc == 0x230E18u) {
        ctx->pc = 0x230E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E14u;
        // 0x230e18: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230E1Cu;
        goto label_230e1c;
    }
    ctx->pc = 0x230E14u;
    {
        const bool branch_taken_0x230e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x230E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E14u;
        // 0x230e18: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e14) {
            ctx->pc = 0x230E38u;
            goto label_230e38;
        }
    }
    ctx->pc = 0x230E1Cu;
label_230e1c:
    // 0x230e1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x230e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_230e20:
    // 0x230e20: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x230e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_230e24:
    // 0x230e24: 0xc08dac2  jal         func_236B08
label_230e28:
    if (ctx->pc == 0x230E28u) {
        ctx->pc = 0x230E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E24u;
        // 0x230e28: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230E2Cu;
        goto label_230e2c;
    }
    ctx->pc = 0x230E24u;
    SET_GPR_U32(ctx, 31, 0x230E2Cu);
    ctx->pc = 0x230E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E24u;
    // 0x230e28: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B08u;
    { ctx->pc = 0x236b08; return; }
    ctx->pc = 0x230E2Cu;
label_230e2c:
    // 0x230e2c: 0x10000030  b           . + 4 + (0x30 << 2)
label_230e30:
    if (ctx->pc == 0x230E30u) {
        ctx->pc = 0x230E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E2Cu;
        // 0x230e30: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230E34u;
        goto label_230e34;
    }
    ctx->pc = 0x230E2Cu;
    {
        const bool branch_taken_0x230e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E2Cu;
        // 0x230e30: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e2c) {
            ctx->pc = 0x230EF0u;
            { ctx->pc = 0x230ef0; return; }
        }
    }
    ctx->pc = 0x230E34u;
label_230e34:
    // 0x230e34: 0x0  nop
    ctx->pc = 0x230e34u;
    // NOP
label_230e38:
    // 0x230e38: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x230e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_230e3c:
    // 0x230e3c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x230e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_230e40:
    // 0x230e40: 0xc06c2f0  jal         func_1B0BC0
label_230e44:
    if (ctx->pc == 0x230E44u) {
        ctx->pc = 0x230E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E40u;
        // 0x230e44: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230E48u;
        goto label_230e48;
    }
    ctx->pc = 0x230E40u;
    SET_GPR_U32(ctx, 31, 0x230E48u);
    ctx->pc = 0x230E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E40u;
    // 0x230e44: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0BC0u;
    { ctx->pc = 0x1b0bc0; return; }
    ctx->pc = 0x230E48u;
label_230e48:
    // 0x230e48: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x230e48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_230e4c:
    // 0x230e4c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x230e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_230e50:
    // 0x230e50: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_230e54:
    if (ctx->pc == 0x230E54u) {
        ctx->pc = 0x230E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E50u;
        // 0x230e54: 0x8f8382d0  lw          $v1, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230E58u;
        goto label_230e58;
    }
    ctx->pc = 0x230E50u;
    {
        const bool branch_taken_0x230e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E50u;
        // 0x230e54: 0x8f8382d0  lw          $v1, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e50) {
            ctx->pc = 0x230ED4u;
            { ctx->pc = 0x230ed4; return; }
        }
    }
    ctx->pc = 0x230E58u;
label_230e58:
    // 0x230e58: 0xc06c2e2  jal         func_1B0B88
label_230e5c:
    if (ctx->pc == 0x230E5Cu) {
        ctx->pc = 0x230E60u;
        goto label_230e60;
    }
    ctx->pc = 0x230E58u;
    SET_GPR_U32(ctx, 31, 0x230E60u);
    ctx->pc = 0x1B0B88u;
    { ctx->pc = 0x1b0b88; return; }
    ctx->pc = 0x230E60u;
label_230e60:
    // 0x230e60: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
label_230e64:
    if (ctx->pc == 0x230E64u) {
        ctx->pc = 0x230E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E60u;
        // 0x230e64: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230E68u;
        goto label_230e68;
    }
    ctx->pc = 0x230E60u;
    {
        const bool branch_taken_0x230e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E60u;
        // 0x230e64: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e60) {
            ctx->pc = 0x230E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_230e58;
        }
    }
    ctx->pc = 0x230E68u;
label_230e68:
    // 0x230e68: 0x1000000b  b           . + 4 + (0xB << 2)
label_230e6c:
    if (ctx->pc == 0x230E6Cu) {
        ctx->pc = 0x230E70u;
        goto label_230e70;
    }
    ctx->pc = 0x230E68u;
    {
        const bool branch_taken_0x230e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230e68) {
            ctx->pc = 0x230E98u;
            { ctx->pc = 0x230e98; return; }
        }
    }
    ctx->pc = 0x230E70u;
label_230e70:
    // 0x230e70: 0xc08c34a  jal         func_230D28
label_230e74:
    if (ctx->pc == 0x230E74u) {
        ctx->pc = 0x230E78u;
        goto label_230e78;
    }
    ctx->pc = 0x230E70u;
    SET_GPR_U32(ctx, 31, 0x230E78u);
    ctx->pc = 0x230D28u;
    goto label_230d28;
    ctx->pc = 0x230E78u;
label_230e78:
    // 0x230e78: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x230e78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_230e7c:
    // 0x230e7c: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_230e80:
    if (ctx->pc == 0x230E80u) {
        ctx->pc = 0x230E84u;
        goto label_230e84;
    }
    ctx->pc = 0x230E7Cu;
    {
        const bool branch_taken_0x230e7c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x230e7c) {
            ctx->pc = 0x230E98u;
            { ctx->pc = 0x230e98; return; }
        }
    }
    ctx->pc = 0x230E84u;
label_230e84:
    // 0x230e84: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x230e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_230e88:
    // 0x230e88: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x230e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_230e8c:
    // 0x230e8c: 0x34211158  ori         $at, $at, 0x1158
    ctx->pc = 0x230e8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4440);
    ctx->pc = 0x230e90u;
    return;
}
