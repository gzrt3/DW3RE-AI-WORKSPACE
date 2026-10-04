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

// Function: FUN_0019b850
// Address: 0x19b850 - 0x29b858
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b850_part478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2846e0u: goto label_2846e0;
        case 0x2846e4u: goto label_2846e4;
        case 0x2846e8u: goto label_2846e8;
        case 0x2846ecu: goto label_2846ec;
        case 0x2846f0u: goto label_2846f0;
        case 0x2846f4u: goto label_2846f4;
        case 0x2846f8u: goto label_2846f8;
        case 0x2846fcu: goto label_2846fc;
        case 0x284700u: goto label_284700;
        case 0x284704u: goto label_284704;
        case 0x284708u: goto label_284708;
        case 0x28470cu: goto label_28470c;
        case 0x284710u: goto label_284710;
        case 0x284714u: goto label_284714;
        case 0x284718u: goto label_284718;
        case 0x28471cu: goto label_28471c;
        case 0x284720u: goto label_284720;
        case 0x284724u: goto label_284724;
        case 0x284728u: goto label_284728;
        case 0x28472cu: goto label_28472c;
        case 0x284730u: goto label_284730;
        case 0x284734u: goto label_284734;
        case 0x284738u: goto label_284738;
        case 0x28473cu: goto label_28473c;
        case 0x284740u: goto label_284740;
        case 0x284744u: goto label_284744;
        case 0x284748u: goto label_284748;
        case 0x28474cu: goto label_28474c;
        case 0x284750u: goto label_284750;
        case 0x284754u: goto label_284754;
        case 0x284758u: goto label_284758;
        case 0x28475cu: goto label_28475c;
        case 0x284760u: goto label_284760;
        case 0x284764u: goto label_284764;
        case 0x284768u: goto label_284768;
        case 0x28476cu: goto label_28476c;
        case 0x284770u: goto label_284770;
        case 0x284774u: goto label_284774;
        case 0x284778u: goto label_284778;
        case 0x28477cu: goto label_28477c;
        case 0x284780u: goto label_284780;
        case 0x284784u: goto label_284784;
        case 0x284788u: goto label_284788;
        case 0x28478cu: goto label_28478c;
        case 0x284790u: goto label_284790;
        case 0x284794u: goto label_284794;
        case 0x284798u: goto label_284798;
        case 0x28479cu: goto label_28479c;
        case 0x2847a0u: goto label_2847a0;
        case 0x2847a4u: goto label_2847a4;
        case 0x2847a8u: goto label_2847a8;
        case 0x2847acu: goto label_2847ac;
        case 0x2847b0u: goto label_2847b0;
        case 0x2847b4u: goto label_2847b4;
        case 0x2847b8u: goto label_2847b8;
        case 0x2847bcu: goto label_2847bc;
        case 0x2847c0u: goto label_2847c0;
        case 0x2847c4u: goto label_2847c4;
        case 0x2847c8u: goto label_2847c8;
        case 0x2847ccu: goto label_2847cc;
        case 0x2847d0u: goto label_2847d0;
        case 0x2847d4u: goto label_2847d4;
        case 0x2847d8u: goto label_2847d8;
        case 0x2847dcu: goto label_2847dc;
        case 0x2847e0u: goto label_2847e0;
        case 0x2847e4u: goto label_2847e4;
        case 0x2847e8u: goto label_2847e8;
        case 0x2847ecu: goto label_2847ec;
        case 0x2847f0u: goto label_2847f0;
        case 0x2847f4u: goto label_2847f4;
        case 0x2847f8u: goto label_2847f8;
        case 0x2847fcu: goto label_2847fc;
        case 0x284800u: goto label_284800;
        case 0x284804u: goto label_284804;
        case 0x284808u: goto label_284808;
        case 0x28480cu: goto label_28480c;
        case 0x284810u: goto label_284810;
        case 0x284814u: goto label_284814;
        case 0x284818u: goto label_284818;
        case 0x28481cu: goto label_28481c;
        case 0x284820u: goto label_284820;
        case 0x284824u: goto label_284824;
        case 0x284828u: goto label_284828;
        case 0x28482cu: goto label_28482c;
        case 0x284830u: goto label_284830;
        case 0x284834u: goto label_284834;
        case 0x284838u: goto label_284838;
        case 0x28483cu: goto label_28483c;
        case 0x284840u: goto label_284840;
        case 0x284844u: goto label_284844;
        case 0x284848u: goto label_284848;
        case 0x28484cu: goto label_28484c;
        case 0x284850u: goto label_284850;
        case 0x284854u: goto label_284854;
        case 0x284858u: goto label_284858;
        case 0x28485cu: goto label_28485c;
        case 0x284860u: goto label_284860;
        case 0x284864u: goto label_284864;
        case 0x284868u: goto label_284868;
        case 0x28486cu: goto label_28486c;
        case 0x284870u: goto label_284870;
        case 0x284874u: goto label_284874;
        case 0x284878u: goto label_284878;
        case 0x28487cu: goto label_28487c;
        case 0x284880u: goto label_284880;
        case 0x284884u: goto label_284884;
        case 0x284888u: goto label_284888;
        case 0x28488cu: goto label_28488c;
        case 0x284890u: goto label_284890;
        case 0x284894u: goto label_284894;
        case 0x284898u: goto label_284898;
        case 0x28489cu: goto label_28489c;
        case 0x2848a0u: goto label_2848a0;
        case 0x2848a4u: goto label_2848a4;
        case 0x2848a8u: goto label_2848a8;
        case 0x2848acu: goto label_2848ac;
        case 0x2848b0u: goto label_2848b0;
        case 0x2848b4u: goto label_2848b4;
        case 0x2848b8u: goto label_2848b8;
        case 0x2848bcu: goto label_2848bc;
        case 0x2848c0u: goto label_2848c0;
        case 0x2848c4u: goto label_2848c4;
        case 0x2848c8u: goto label_2848c8;
        case 0x2848ccu: goto label_2848cc;
        case 0x2848d0u: goto label_2848d0;
        case 0x2848d4u: goto label_2848d4;
        case 0x2848d8u: goto label_2848d8;
        case 0x2848dcu: goto label_2848dc;
        case 0x2848e0u: goto label_2848e0;
        case 0x2848e4u: goto label_2848e4;
        case 0x2848e8u: goto label_2848e8;
        case 0x2848ecu: goto label_2848ec;
        case 0x2848f0u: goto label_2848f0;
        case 0x2848f4u: goto label_2848f4;
        case 0x2848f8u: goto label_2848f8;
        case 0x2848fcu: goto label_2848fc;
        case 0x284900u: goto label_284900;
        case 0x284904u: goto label_284904;
        case 0x284908u: goto label_284908;
        case 0x28490cu: goto label_28490c;
        case 0x284910u: goto label_284910;
        case 0x284914u: goto label_284914;
        case 0x284918u: goto label_284918;
        case 0x28491cu: goto label_28491c;
        case 0x284920u: goto label_284920;
        case 0x284924u: goto label_284924;
        case 0x284928u: goto label_284928;
        case 0x28492cu: goto label_28492c;
        case 0x284930u: goto label_284930;
        case 0x284934u: goto label_284934;
        case 0x284938u: goto label_284938;
        case 0x28493cu: goto label_28493c;
        case 0x284940u: goto label_284940;
        case 0x284944u: goto label_284944;
        case 0x284948u: goto label_284948;
        case 0x28494cu: goto label_28494c;
        case 0x284950u: goto label_284950;
        case 0x284954u: goto label_284954;
        case 0x284958u: goto label_284958;
        case 0x28495cu: goto label_28495c;
        case 0x284960u: goto label_284960;
        case 0x284964u: goto label_284964;
        case 0x284968u: goto label_284968;
        case 0x28496cu: goto label_28496c;
        case 0x284970u: goto label_284970;
        case 0x284974u: goto label_284974;
        case 0x284978u: goto label_284978;
        case 0x28497cu: goto label_28497c;
        case 0x284980u: goto label_284980;
        case 0x284984u: goto label_284984;
        case 0x284988u: goto label_284988;
        case 0x28498cu: goto label_28498c;
        case 0x284990u: goto label_284990;
        case 0x284994u: goto label_284994;
        case 0x284998u: goto label_284998;
        case 0x28499cu: goto label_28499c;
        case 0x2849a0u: goto label_2849a0;
        case 0x2849a4u: goto label_2849a4;
        case 0x2849a8u: goto label_2849a8;
        case 0x2849acu: goto label_2849ac;
        case 0x2849b0u: goto label_2849b0;
        case 0x2849b4u: goto label_2849b4;
        case 0x2849b8u: goto label_2849b8;
        case 0x2849bcu: goto label_2849bc;
        case 0x2849c0u: goto label_2849c0;
        case 0x2849c4u: goto label_2849c4;
        case 0x2849c8u: goto label_2849c8;
        case 0x2849ccu: goto label_2849cc;
        case 0x2849d0u: goto label_2849d0;
        case 0x2849d4u: goto label_2849d4;
        case 0x2849d8u: goto label_2849d8;
        case 0x2849dcu: goto label_2849dc;
        case 0x2849e0u: goto label_2849e0;
        case 0x2849e4u: goto label_2849e4;
        case 0x2849e8u: goto label_2849e8;
        case 0x2849ecu: goto label_2849ec;
        case 0x2849f0u: goto label_2849f0;
        case 0x2849f4u: goto label_2849f4;
        case 0x2849f8u: goto label_2849f8;
        case 0x2849fcu: goto label_2849fc;
        case 0x284a00u: goto label_284a00;
        case 0x284a04u: goto label_284a04;
        case 0x284a08u: goto label_284a08;
        case 0x284a0cu: goto label_284a0c;
        case 0x284a10u: goto label_284a10;
        case 0x284a14u: goto label_284a14;
        case 0x284a18u: goto label_284a18;
        case 0x284a1cu: goto label_284a1c;
        case 0x284a20u: goto label_284a20;
        case 0x284a24u: goto label_284a24;
        case 0x284a28u: goto label_284a28;
        case 0x284a2cu: goto label_284a2c;
        case 0x284a30u: goto label_284a30;
        case 0x284a34u: goto label_284a34;
        case 0x284a38u: goto label_284a38;
        case 0x284a3cu: goto label_284a3c;
        case 0x284a40u: goto label_284a40;
        case 0x284a44u: goto label_284a44;
        case 0x284a48u: goto label_284a48;
        case 0x284a4cu: goto label_284a4c;
        case 0x284a50u: goto label_284a50;
        case 0x284a54u: goto label_284a54;
        case 0x284a58u: goto label_284a58;
        case 0x284a5cu: goto label_284a5c;
        case 0x284a60u: goto label_284a60;
        case 0x284a64u: goto label_284a64;
        case 0x284a68u: goto label_284a68;
        case 0x284a6cu: goto label_284a6c;
        case 0x284a70u: goto label_284a70;
        case 0x284a74u: goto label_284a74;
        case 0x284a78u: goto label_284a78;
        case 0x284a7cu: goto label_284a7c;
        case 0x284a80u: goto label_284a80;
        case 0x284a84u: goto label_284a84;
        case 0x284a88u: goto label_284a88;
        case 0x284a8cu: goto label_284a8c;
        case 0x284a90u: goto label_284a90;
        case 0x284a94u: goto label_284a94;
        case 0x284a98u: goto label_284a98;
        case 0x284a9cu: goto label_284a9c;
        case 0x284aa0u: goto label_284aa0;
        case 0x284aa4u: goto label_284aa4;
        case 0x284aa8u: goto label_284aa8;
        case 0x284aacu: goto label_284aac;
        case 0x284ab0u: goto label_284ab0;
        case 0x284ab4u: goto label_284ab4;
        case 0x284ab8u: goto label_284ab8;
        case 0x284abcu: goto label_284abc;
        case 0x284ac0u: goto label_284ac0;
        case 0x284ac4u: goto label_284ac4;
        case 0x284ac8u: goto label_284ac8;
        case 0x284accu: goto label_284acc;
        case 0x284ad0u: goto label_284ad0;
        case 0x284ad4u: goto label_284ad4;
        case 0x284ad8u: goto label_284ad8;
        case 0x284adcu: goto label_284adc;
        case 0x284ae0u: goto label_284ae0;
        case 0x284ae4u: goto label_284ae4;
        case 0x284ae8u: goto label_284ae8;
        case 0x284aecu: goto label_284aec;
        case 0x284af0u: goto label_284af0;
        case 0x284af4u: goto label_284af4;
        case 0x284af8u: goto label_284af8;
        case 0x284afcu: goto label_284afc;
        case 0x284b00u: goto label_284b00;
        case 0x284b04u: goto label_284b04;
        case 0x284b08u: goto label_284b08;
        case 0x284b0cu: goto label_284b0c;
        case 0x284b10u: goto label_284b10;
        case 0x284b14u: goto label_284b14;
        case 0x284b18u: goto label_284b18;
        case 0x284b1cu: goto label_284b1c;
        case 0x284b20u: goto label_284b20;
        case 0x284b24u: goto label_284b24;
        case 0x284b28u: goto label_284b28;
        case 0x284b2cu: goto label_284b2c;
        case 0x284b30u: goto label_284b30;
        case 0x284b34u: goto label_284b34;
        case 0x284b38u: goto label_284b38;
        case 0x284b3cu: goto label_284b3c;
        case 0x284b40u: goto label_284b40;
        case 0x284b44u: goto label_284b44;
        case 0x284b48u: goto label_284b48;
        case 0x284b4cu: goto label_284b4c;
        case 0x284b50u: goto label_284b50;
        case 0x284b54u: goto label_284b54;
        case 0x284b58u: goto label_284b58;
        case 0x284b5cu: goto label_284b5c;
        case 0x284b60u: goto label_284b60;
        case 0x284b64u: goto label_284b64;
        case 0x284b68u: goto label_284b68;
        case 0x284b6cu: goto label_284b6c;
        case 0x284b70u: goto label_284b70;
        case 0x284b74u: goto label_284b74;
        case 0x284b78u: goto label_284b78;
        case 0x284b7cu: goto label_284b7c;
        case 0x284b80u: goto label_284b80;
        case 0x284b84u: goto label_284b84;
        case 0x284b88u: goto label_284b88;
        case 0x284b8cu: goto label_284b8c;
        case 0x284b90u: goto label_284b90;
        case 0x284b94u: goto label_284b94;
        case 0x284b98u: goto label_284b98;
        case 0x284b9cu: goto label_284b9c;
        case 0x284ba0u: goto label_284ba0;
        case 0x284ba4u: goto label_284ba4;
        case 0x284ba8u: goto label_284ba8;
        case 0x284bacu: goto label_284bac;
        case 0x284bb0u: goto label_284bb0;
        case 0x284bb4u: goto label_284bb4;
        case 0x284bb8u: goto label_284bb8;
        case 0x284bbcu: goto label_284bbc;
        case 0x284bc0u: goto label_284bc0;
        case 0x284bc4u: goto label_284bc4;
        case 0x284bc8u: goto label_284bc8;
        case 0x284bccu: goto label_284bcc;
        case 0x284bd0u: goto label_284bd0;
        case 0x284bd4u: goto label_284bd4;
        case 0x284bd8u: goto label_284bd8;
        case 0x284bdcu: goto label_284bdc;
        case 0x284be0u: goto label_284be0;
        case 0x284be4u: goto label_284be4;
        case 0x284be8u: goto label_284be8;
        case 0x284becu: goto label_284bec;
        case 0x284bf0u: goto label_284bf0;
        case 0x284bf4u: goto label_284bf4;
        case 0x284bf8u: goto label_284bf8;
        case 0x284bfcu: goto label_284bfc;
        case 0x284c00u: goto label_284c00;
        case 0x284c04u: goto label_284c04;
        case 0x284c08u: goto label_284c08;
        case 0x284c0cu: goto label_284c0c;
        case 0x284c10u: goto label_284c10;
        case 0x284c14u: goto label_284c14;
        case 0x284c18u: goto label_284c18;
        case 0x284c1cu: goto label_284c1c;
        case 0x284c20u: goto label_284c20;
        case 0x284c24u: goto label_284c24;
        case 0x284c28u: goto label_284c28;
        case 0x284c2cu: goto label_284c2c;
        case 0x284c30u: goto label_284c30;
        case 0x284c34u: goto label_284c34;
        case 0x284c38u: goto label_284c38;
        case 0x284c3cu: goto label_284c3c;
        case 0x284c40u: goto label_284c40;
        case 0x284c44u: goto label_284c44;
        case 0x284c48u: goto label_284c48;
        case 0x284c4cu: goto label_284c4c;
        case 0x284c50u: goto label_284c50;
        case 0x284c54u: goto label_284c54;
        case 0x284c58u: goto label_284c58;
        case 0x284c5cu: goto label_284c5c;
        case 0x284c60u: goto label_284c60;
        case 0x284c64u: goto label_284c64;
        case 0x284c68u: goto label_284c68;
        case 0x284c6cu: goto label_284c6c;
        case 0x284c70u: goto label_284c70;
        case 0x284c74u: goto label_284c74;
        case 0x284c78u: goto label_284c78;
        case 0x284c7cu: goto label_284c7c;
        case 0x284c80u: goto label_284c80;
        case 0x284c84u: goto label_284c84;
        case 0x284c88u: goto label_284c88;
        case 0x284c8cu: goto label_284c8c;
        case 0x284c90u: goto label_284c90;
        case 0x284c94u: goto label_284c94;
        case 0x284c98u: goto label_284c98;
        case 0x284c9cu: goto label_284c9c;
        case 0x284ca0u: goto label_284ca0;
        case 0x284ca4u: goto label_284ca4;
        case 0x284ca8u: goto label_284ca8;
        case 0x284cacu: goto label_284cac;
        case 0x284cb0u: goto label_284cb0;
        case 0x284cb4u: goto label_284cb4;
        case 0x284cb8u: goto label_284cb8;
        case 0x284cbcu: goto label_284cbc;
        case 0x284cc0u: goto label_284cc0;
        case 0x284cc4u: goto label_284cc4;
        case 0x284cc8u: goto label_284cc8;
        case 0x284cccu: goto label_284ccc;
        case 0x284cd0u: goto label_284cd0;
        case 0x284cd4u: goto label_284cd4;
        case 0x284cd8u: goto label_284cd8;
        case 0x284cdcu: goto label_284cdc;
        case 0x284ce0u: goto label_284ce0;
        case 0x284ce4u: goto label_284ce4;
        case 0x284ce8u: goto label_284ce8;
        case 0x284cecu: goto label_284cec;
        case 0x284cf0u: goto label_284cf0;
        case 0x284cf4u: goto label_284cf4;
        case 0x284cf8u: goto label_284cf8;
        case 0x284cfcu: goto label_284cfc;
        case 0x284d00u: goto label_284d00;
        case 0x284d04u: goto label_284d04;
        case 0x284d08u: goto label_284d08;
        case 0x284d0cu: goto label_284d0c;
        case 0x284d10u: goto label_284d10;
        case 0x284d14u: goto label_284d14;
        case 0x284d18u: goto label_284d18;
        case 0x284d1cu: goto label_284d1c;
        case 0x284d20u: goto label_284d20;
        case 0x284d24u: goto label_284d24;
        case 0x284d28u: goto label_284d28;
        case 0x284d2cu: goto label_284d2c;
        case 0x284d30u: goto label_284d30;
        case 0x284d34u: goto label_284d34;
        case 0x284d38u: goto label_284d38;
        case 0x284d3cu: goto label_284d3c;
        case 0x284d40u: goto label_284d40;
        case 0x284d44u: goto label_284d44;
        case 0x284d48u: goto label_284d48;
        case 0x284d4cu: goto label_284d4c;
        case 0x284d50u: goto label_284d50;
        case 0x284d54u: goto label_284d54;
        case 0x284d58u: goto label_284d58;
        case 0x284d5cu: goto label_284d5c;
        case 0x284d60u: goto label_284d60;
        case 0x284d64u: goto label_284d64;
        case 0x284d68u: goto label_284d68;
        case 0x284d6cu: goto label_284d6c;
        case 0x284d70u: goto label_284d70;
        case 0x284d74u: goto label_284d74;
        case 0x284d78u: goto label_284d78;
        case 0x284d7cu: goto label_284d7c;
        case 0x284d80u: goto label_284d80;
        case 0x284d84u: goto label_284d84;
        case 0x284d88u: goto label_284d88;
        case 0x284d8cu: goto label_284d8c;
        case 0x284d90u: goto label_284d90;
        case 0x284d94u: goto label_284d94;
        case 0x284d98u: goto label_284d98;
        case 0x284d9cu: goto label_284d9c;
        case 0x284da0u: goto label_284da0;
        case 0x284da4u: goto label_284da4;
        case 0x284da8u: goto label_284da8;
        case 0x284dacu: goto label_284dac;
        case 0x284db0u: goto label_284db0;
        case 0x284db4u: goto label_284db4;
        case 0x284db8u: goto label_284db8;
        case 0x284dbcu: goto label_284dbc;
        case 0x284dc0u: goto label_284dc0;
        case 0x284dc4u: goto label_284dc4;
        case 0x284dc8u: goto label_284dc8;
        case 0x284dccu: goto label_284dcc;
        case 0x284dd0u: goto label_284dd0;
        case 0x284dd4u: goto label_284dd4;
        case 0x284dd8u: goto label_284dd8;
        case 0x284ddcu: goto label_284ddc;
        case 0x284de0u: goto label_284de0;
        case 0x284de4u: goto label_284de4;
        case 0x284de8u: goto label_284de8;
        case 0x284decu: goto label_284dec;
        case 0x284df0u: goto label_284df0;
        case 0x284df4u: goto label_284df4;
        case 0x284df8u: goto label_284df8;
        case 0x284dfcu: goto label_284dfc;
        case 0x284e00u: goto label_284e00;
        case 0x284e04u: goto label_284e04;
        case 0x284e08u: goto label_284e08;
        case 0x284e0cu: goto label_284e0c;
        case 0x284e10u: goto label_284e10;
        case 0x284e14u: goto label_284e14;
        case 0x284e18u: goto label_284e18;
        case 0x284e1cu: goto label_284e1c;
        case 0x284e20u: goto label_284e20;
        case 0x284e24u: goto label_284e24;
        case 0x284e28u: goto label_284e28;
        case 0x284e2cu: goto label_284e2c;
        case 0x284e30u: goto label_284e30;
        case 0x284e34u: goto label_284e34;
        case 0x284e38u: goto label_284e38;
        case 0x284e3cu: goto label_284e3c;
        case 0x284e40u: goto label_284e40;
        case 0x284e44u: goto label_284e44;
        case 0x284e48u: goto label_284e48;
        case 0x284e4cu: goto label_284e4c;
        case 0x284e50u: goto label_284e50;
        case 0x284e54u: goto label_284e54;
        case 0x284e58u: goto label_284e58;
        case 0x284e5cu: goto label_284e5c;
        case 0x284e60u: goto label_284e60;
        case 0x284e64u: goto label_284e64;
        case 0x284e68u: goto label_284e68;
        case 0x284e6cu: goto label_284e6c;
        case 0x284e70u: goto label_284e70;
        case 0x284e74u: goto label_284e74;
        case 0x284e78u: goto label_284e78;
        case 0x284e7cu: goto label_284e7c;
        case 0x284e80u: goto label_284e80;
        case 0x284e84u: goto label_284e84;
        case 0x284e88u: goto label_284e88;
        case 0x284e8cu: goto label_284e8c;
        case 0x284e90u: goto label_284e90;
        case 0x284e94u: goto label_284e94;
        case 0x284e98u: goto label_284e98;
        case 0x284e9cu: goto label_284e9c;
        case 0x284ea0u: goto label_284ea0;
        case 0x284ea4u: goto label_284ea4;
        case 0x284ea8u: goto label_284ea8;
        case 0x284eacu: goto label_284eac;
        default: return;
    }

label_2846e0:
    // 0x2846e0: 0x0  nop
    ctx->pc = 0x2846e0u;
    // NOP
label_2846e4:
    // 0x2846e4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x2846e4u;
    
label_2846e8:
    // 0x2846e8: 0x2e020047  sltiu       $v0, $s0, 0x47
    ctx->pc = 0x2846e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)71) ? 1 : 0);
label_2846ec:
    // 0x2846ec: 0x0  nop
    ctx->pc = 0x2846ecu;
    // NOP
label_2846f0:
    // 0x2846f0: 0xc2b80000  ll          $t8, 0x0($s5)
    ctx->pc = 0x2846f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2846f4:
    // 0x2846f4: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x2846f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2846f8:
    // 0x2846f8: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x2846f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2846fc:
    // 0x2846fc: 0x43230000  .word       0x43230000                   # INVALID     $t9, $v1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2846fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2846FC raw=0x43230000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284700:
    // 0x284700: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284700u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x284700 raw=0x41F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284704:
    // 0x284704: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x284704u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x284704 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284708:
    // 0x284708: 0xc1d00000  ll          $s0, 0x0($t6)
    ctx->pc = 0x284708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28470c:
    // 0x28470c: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x28470cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284710:
    // 0x284710: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284714:
    // 0x284714: 0x42880000  .word       0x42880000                   # INVALID     $s4, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284714u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x284714 raw=0x42880000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284718:
    // 0x284718: 0x40a00000  dmtc0       $zero, Index
    ctx->pc = 0x284718u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x284718 raw=0x40A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28471c:
    // 0x28471c: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x28471cu;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284720:
    // 0x284720: 0x0  nop
    ctx->pc = 0x284720u;
    // NOP
label_284724:
    // 0x284724: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284724u;
    
label_284728:
    // 0x284728: 0x26000048  addiu       $zero, $s0, 0x48
    ctx->pc = 0x284728u;
    // NOP (addiu $zero, ...)
label_28472c:
    // 0x28472c: 0x0  nop
    ctx->pc = 0x28472cu;
    // NOP
label_284730:
    // 0x284730: 0xc21c0000  ll          $gp, 0x0($s0)
    ctx->pc = 0x284730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); SET_GPR_S32(ctx, 28, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284734:
    // 0x284734: 0xc1e00000  ll          $zero, 0x0($t7)
    ctx->pc = 0x284734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284738:
    // 0x284738: 0xc2200000  ll          $zero, 0x0($s1)
    ctx->pc = 0x284738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28473c:
    // 0x28473c: 0x42e80000  .word       0x42E80000                   # INVALID     $s7, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28473cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x28473C raw=0x42E80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284740:
    // 0x284740: 0x42680000  .word       0x42680000                   # INVALID     $s3, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284740u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x284740 raw=0x42680000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284744:
    // 0x284744: 0x429c0000  .word       0x429C0000                   # INVALID     $s4, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284744u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x284744 raw=0x429C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284748:
    // 0x284748: 0xc2200000  ll          $zero, 0x0($s1)
    ctx->pc = 0x284748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28474c:
    // 0x28474c: 0xc2180000  ll          $t8, 0x0($s0)
    ctx->pc = 0x28474cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284750:
    // 0x284750: 0xc1e00000  ll          $zero, 0x0($t7)
    ctx->pc = 0x284750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284754:
    // 0x284754: 0x42b80000  .word       0x42B80000                   # INVALID     $s5, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284754u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x284754 raw=0x42B80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284758:
    // 0x284758: 0x42280000  .word       0x42280000                   # INVALID     $s1, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284758u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x284758 raw=0x42280000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28475c:
    // 0x28475c: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28475cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x28475C raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284760:
    // 0x284760: 0x0  nop
    ctx->pc = 0x284760u;
    // NOP
label_284764:
    // 0x284764: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284764u;
    
label_284768:
    // 0x284768: 0x30030049  andi        $v1, $zero, 0x49
    ctx->pc = 0x284768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)73);
label_28476c:
    // 0x28476c: 0x0  nop
    ctx->pc = 0x28476cu;
    // NOP
label_284770:
    // 0x284770: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x284770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284774:
    // 0x284774: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x284774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284778:
    // 0x284778: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x284778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28477c:
    // 0x28477c: 0x43020000  .word       0x43020000                   # INVALID     $t8, $v0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28477cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x28477C raw=0x43020000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284780:
    // 0x284780: 0x41d00000  .word       0x41D00000                   # INVALID     $t6, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284780u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x284780 raw=0x41D00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284784:
    // 0x284784: 0x42e00000  .word       0x42E00000                   # INVALID     $s7, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284784u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x284784 raw=0x42E00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284788:
    // 0x284788: 0xc1f80000  ll          $t8, 0x0($t7)
    ctx->pc = 0x284788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28478c:
    // 0x28478c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x28478cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284790:
    // 0x284790: 0xc0e00000  ll          $zero, 0x0($a3)
    ctx->pc = 0x284790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284794:
    // 0x284794: 0x430b0000  .word       0x430B0000                   # INVALID     $t8, $t3, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284794u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x284794 raw=0x430B0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284798:
    // 0x284798: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284798u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_28479c:
    // 0x28479c: 0x42040000  .word       0x42040000                   # INVALID     $s0, $a0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x28479cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x28479C raw=0x42040000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2847a0:
    // 0x2847a0: 0x0  nop
    ctx->pc = 0x2847a0u;
    // NOP
label_2847a4:
    // 0x2847a4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x2847a4u;
    
label_2847a8:
    // 0x2847a8: 0x2a02004a  slti        $v0, $s0, 0x4A
    ctx->pc = 0x2847a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)74) ? 1 : 0);
label_2847ac:
    // 0x2847ac: 0x0  nop
    ctx->pc = 0x2847acu;
    // NOP
label_2847b0:
    // 0x2847b0: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x2847b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2847b4:
    // 0x2847b4: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x2847b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2847b8:
    // 0x2847b8: 0xc28e0000  ll          $t6, 0x0($s4)
    ctx->pc = 0x2847b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); SET_GPR_S32(ctx, 14, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2847bc:
    // 0x2847bc: 0x42880000  .word       0x42880000                   # INVALID     $s4, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2847bcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x2847BC raw=0x42880000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2847c0:
    // 0x2847c0: 0x40a00000  dmtc0       $zero, Index
    ctx->pc = 0x2847c0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x2847C0 raw=0x40A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2847c4:
    // 0x2847c4: 0x430f0000  .word       0x430F0000                   # INVALID     $t8, $t7, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2847c4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x2847C4 raw=0x430F0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2847c8:
    // 0x2847c8: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x2847c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2847cc:
    // 0x2847cc: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x2847ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2847d0:
    // 0x2847d0: 0xc28e0000  ll          $t6, 0x0($s4)
    ctx->pc = 0x2847d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); SET_GPR_S32(ctx, 14, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2847d4:
    // 0x2847d4: 0x42880000  .word       0x42880000                   # INVALID     $s4, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2847d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x2847D4 raw=0x42880000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2847d8:
    // 0x2847d8: 0x40a00000  dmtc0       $zero, Index
    ctx->pc = 0x2847d8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x2847D8 raw=0x40A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2847dc:
    // 0x2847dc: 0x430f0000  .word       0x430F0000                   # INVALID     $t8, $t7, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2847dcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x2847DC raw=0x430F0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2847e0:
    // 0x2847e0: 0x0  nop
    ctx->pc = 0x2847e0u;
    // NOP
label_2847e4:
    // 0x2847e4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x2847e4u;
    
label_2847e8:
    // 0x2847e8: 0x2503004b  addiu       $v1, $t0, 0x4B
    ctx->pc = 0x2847e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 75));
label_2847ec:
    // 0x2847ec: 0x0  nop
    ctx->pc = 0x2847ecu;
    // NOP
label_2847f0:
    // 0x2847f0: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x2847f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2847f4:
    // 0x2847f4: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x2847f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2847f8:
    // 0x2847f8: 0xc28e0000  ll          $t6, 0x0($s4)
    ctx->pc = 0x2847f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); SET_GPR_S32(ctx, 14, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2847fc:
    // 0x2847fc: 0x42880000  .word       0x42880000                   # INVALID     $s4, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2847fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x2847FC raw=0x42880000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284800:
    // 0x284800: 0x40a00000  dmtc0       $zero, Index
    ctx->pc = 0x284800u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x284800 raw=0x40A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284804:
    // 0x284804: 0x430f0000  .word       0x430F0000                   # INVALID     $t8, $t7, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284804u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x284804 raw=0x430F0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284808:
    // 0x284808: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x284808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28480c:
    // 0x28480c: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x28480cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284810:
    // 0x284810: 0xc28e0000  ll          $t6, 0x0($s4)
    ctx->pc = 0x284810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); SET_GPR_S32(ctx, 14, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284814:
    // 0x284814: 0x42880000  .word       0x42880000                   # INVALID     $s4, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284814u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x284814 raw=0x42880000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284818:
    // 0x284818: 0x40a00000  dmtc0       $zero, Index
    ctx->pc = 0x284818u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x284818 raw=0x40A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28481c:
    // 0x28481c: 0x430f0000  .word       0x430F0000                   # INVALID     $t8, $t7, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28481cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x28481C raw=0x430F0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284820:
    // 0x284820: 0x0  nop
    ctx->pc = 0x284820u;
    // NOP
label_284824:
    // 0x284824: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284824u;
    
label_284828:
    // 0x284828: 0x2603004b  addiu       $v1, $s0, 0x4B
    ctx->pc = 0x284828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 75));
label_28482c:
    // 0x28482c: 0x0  nop
    ctx->pc = 0x28482cu;
    // NOP
label_284830:
    // 0x284830: 0xc1f00000  ll          $s0, 0x0($t7)
    ctx->pc = 0x284830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284834:
    // 0x284834: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x284834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284838:
    // 0x284838: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x284838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28483c:
    // 0x28483c: 0x434b0000  .word       0x434B0000                   # INVALID     $k0, $t3, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28483cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x28483C raw=0x434B0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284840:
    // 0x284840: 0x41800000  .word       0x41800000                   # INVALID     $t4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284840u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x284840 raw=0x41800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284844:
    // 0x284844: 0x42280000  .word       0x42280000                   # INVALID     $s1, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284844u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x284844 raw=0x42280000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284848:
    // 0x284848: 0xc1f00000  ll          $s0, 0x0($t7)
    ctx->pc = 0x284848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28484c:
    // 0x28484c: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x28484cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284850:
    // 0x284850: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x284850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284854:
    // 0x284854: 0x434b0000  .word       0x434B0000                   # INVALID     $k0, $t3, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284854u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x284854 raw=0x434B0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284858:
    // 0x284858: 0x41800000  .word       0x41800000                   # INVALID     $t4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284858u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x284858 raw=0x41800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28485c:
    // 0x28485c: 0x42280000  .word       0x42280000                   # INVALID     $s1, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28485cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x28485C raw=0x42280000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284860:
    // 0x284860: 0x0  nop
    ctx->pc = 0x284860u;
    // NOP
label_284864:
    // 0x284864: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284864u;
    
label_284868:
    // 0x284868: 0x2e02004c  sltiu       $v0, $s0, 0x4C
    ctx->pc = 0x284868u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)76) ? 1 : 0);
label_28486c:
    // 0x28486c: 0x0  nop
    ctx->pc = 0x28486cu;
    // NOP
label_284870:
    // 0x284870: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x284870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284874:
    // 0x284874: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284878:
    // 0x284878: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28487c:
    // 0x28487c: 0x431a0000  .word       0x431A0000                   # INVALID     $t8, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28487cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x28487C raw=0x431A0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284880:
    // 0x284880: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284880u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284884:
    // 0x284884: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284884u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284888:
    // 0x284888: 0xc1980000  ll          $t8, 0x0($t4)
    ctx->pc = 0x284888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28488c:
    // 0x28488c: 0xc1c00000  ll          $zero, 0x0($t6)
    ctx->pc = 0x28488cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284890:
    // 0x284890: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x284890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284894:
    // 0x284894: 0x421c0000  .word       0x421C0000                   # INVALID     $s0, $gp, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x284894u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x284894 raw=0x421C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284898:
    // 0x284898: 0xc1f80000  ll          $t8, 0x0($t7)
    ctx->pc = 0x284898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28489c:
    // 0x28489c: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28489cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x28489C raw=0x41F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2848a0:
    // 0x2848a0: 0x0  nop
    ctx->pc = 0x2848a0u;
    // NOP
label_2848a4:
    // 0x2848a4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x2848a4u;
    
label_2848a8:
    // 0x2848a8: 0x2704004d  addiu       $a0, $t8, 0x4D
    ctx->pc = 0x2848a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), 77));
label_2848ac:
    // 0x2848ac: 0x0  nop
    ctx->pc = 0x2848acu;
    // NOP
label_2848b0:
    // 0x2848b0: 0x42ba0000  .word       0x42BA0000                   # INVALID     $s5, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2848b0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x2848B0 raw=0x42BA0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2848b4:
    // 0x2848b4: 0xc0e00000  ll          $zero, 0x0($a3)
    ctx->pc = 0x2848b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2848b8:
    // 0x2848b8: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x2848b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2848bc:
    // 0x2848bc: 0x432e0000  .word       0x432E0000                   # INVALID     $t9, $t6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2848bcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2848BC raw=0x432E0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2848c0:
    // 0x2848c0: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2848c0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x2848C0 raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2848c4:
    // 0x2848c4: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x2848c4u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_2848c8:
    // 0x2848c8: 0xc22c0000  ll          $t4, 0x0($s1)
    ctx->pc = 0x2848c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2848cc:
    // 0x2848cc: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x2848ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2848d0:
    // 0x2848d0: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x2848d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2848d4:
    // 0x2848d4: 0x43080000  .word       0x43080000                   # INVALID     $t8, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2848d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x2848D4 raw=0x43080000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2848d8:
    // 0x2848d8: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x2848d8u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_2848dc:
    // 0x2848dc: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x2848dcu;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_2848e0:
    // 0x2848e0: 0x0  nop
    ctx->pc = 0x2848e0u;
    // NOP
label_2848e4:
    // 0x2848e4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x2848e4u;
    
label_2848e8:
    // 0x2848e8: 0x2b020060  slti        $v0, $t8, 0x60
    ctx->pc = 0x2848e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)96) ? 1 : 0);
label_2848ec:
    // 0x2848ec: 0x0  nop
    ctx->pc = 0x2848ecu;
    // NOP
label_2848f0:
    // 0x2848f0: 0x428c0000  .word       0x428C0000                   # INVALID     $s4, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2848f0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x2848F0 raw=0x428C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2848f4:
    // 0x2848f4: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x2848f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2848f8:
    // 0x2848f8: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x2848f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2848fc:
    // 0x2848fc: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2848fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x2848FC raw=0x43480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284900:
    // 0x284900: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284900u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284904:
    // 0x284904: 0x41d00000  .word       0x41D00000                   # INVALID     $t6, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284904u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x284904 raw=0x41D00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284908:
    // 0x284908: 0xc2400000  ll          $zero, 0x0($s2)
    ctx->pc = 0x284908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28490c:
    // 0x28490c: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x28490cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284910:
    // 0x284910: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284914:
    // 0x284914: 0x42ec0000  .word       0x42EC0000                   # INVALID     $s7, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284914u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x284914 raw=0x42EC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284918:
    // 0x284918: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x284918u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x284918 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28491c:
    // 0x28491c: 0x40a00000  dmtc0       $zero, Index
    ctx->pc = 0x28491cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x28491C raw=0x40A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284920:
    // 0x284920: 0x0  nop
    ctx->pc = 0x284920u;
    // NOP
label_284924:
    // 0x284924: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284924u;
    
label_284928:
    // 0x284928: 0x31020061  andi        $v0, $t0, 0x61
    ctx->pc = 0x284928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)97);
label_28492c:
    // 0x28492c: 0x0  nop
    ctx->pc = 0x28492cu;
    // NOP
label_284930:
    // 0x284930: 0x427c0000  .word       0x427C0000                   # INVALID     $s3, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284930u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x284930 raw=0x427C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284934:
    // 0x284934: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x284934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284938:
    // 0x284938: 0xc0c00000  ll          $zero, 0x0($a2)
    ctx->pc = 0x284938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28493c:
    // 0x28493c: 0x43350000  .word       0x43350000                   # INVALID     $t9, $s5, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28493cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x28493C raw=0x43350000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284940:
    // 0x284940: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_284944:
    if (ctx->pc == 0x284944u) {
        ctx->pc = 0x284944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284940u;
        // 0x284944: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x284944 raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x284948u;
        goto label_284948;
    }
    ctx->pc = 0x284940u;
    {
        const bool branch_taken_0x284940 = (false);
        ctx->pc = 0x284944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284940u;
        // 0x284944: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x284944 raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x284940) {
            ctx->pc = 0x284944u;
            goto label_284944;
        }
    }
    ctx->pc = 0x284948u;
label_284948:
    // 0x284948: 0xc2600000  ll          $zero, 0x0($s3)
    ctx->pc = 0x284948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28494c:
    // 0x28494c: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x28494cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284950:
    // 0x284950: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x284950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284954:
    // 0x284954: 0x42ee0000  .word       0x42EE0000                   # INVALID     $s7, $t6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284954u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x284954 raw=0x42EE0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284958:
    // 0x284958: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_28495c:
    if (ctx->pc == 0x28495Cu) {
        ctx->pc = 0x28495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284958u;
        // 0x28495c: 0x41000000  bc0f        . + 4 + (0x0 << 2) (Delay Slot)
        // BC0 (Condition: 0x0) - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x284960u;
        goto label_284960;
    }
    ctx->pc = 0x284958u;
    {
        const bool branch_taken_0x284958 = (false);
        ctx->pc = 0x28495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284958u;
        // 0x28495c: 0x41000000  bc0f        . + 4 + (0x0 << 2) (Delay Slot)
        // BC0 (Condition: 0x0) - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x284958) {
            ctx->pc = 0x28495Cu;
            goto label_28495c;
        }
    }
    ctx->pc = 0x284960u;
label_284960:
    // 0x284960: 0x0  nop
    ctx->pc = 0x284960u;
    // NOP
label_284964:
    // 0x284964: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284964u;
    
label_284968:
    // 0x284968: 0x2f020062  sltiu       $v0, $t8, 0x62
    ctx->pc = 0x284968u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)(int64_t)(int32_t)98) ? 1 : 0);
label_28496c:
    // 0x28496c: 0x0  nop
    ctx->pc = 0x28496cu;
    // NOP
label_284970:
    // 0x284970: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x284970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284974:
    // 0x284974: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284978:
    // 0x284978: 0xc1980000  ll          $t8, 0x0($t4)
    ctx->pc = 0x284978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28497c:
    // 0x28497c: 0x43360000  .word       0x43360000                   # INVALID     $t9, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28497cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x28497C raw=0x43360000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284980:
    // 0x284980: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284980u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284984:
    // 0x284984: 0x41d00000  .word       0x41D00000                   # INVALID     $t6, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284984u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x284984 raw=0x41D00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284988:
    // 0x284988: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x284988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28498c:
    // 0x28498c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x28498cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284990:
    // 0x284990: 0xc0e00000  ll          $zero, 0x0($a3)
    ctx->pc = 0x284990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284994:
    // 0x284994: 0x43360000  .word       0x43360000                   # INVALID     $t9, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284994u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x284994 raw=0x43360000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284998:
    // 0x284998: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284998u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_28499c:
    // 0x28499c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28499cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x28499C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2849a0:
    // 0x2849a0: 0x0  nop
    ctx->pc = 0x2849a0u;
    // NOP
label_2849a4:
    // 0x2849a4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x2849a4u;
    
label_2849a8:
    // 0x2849a8: 0x30010063  andi        $at, $zero, 0x63
    ctx->pc = 0x2849a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)99);
label_2849ac:
    // 0x2849ac: 0x0  nop
    ctx->pc = 0x2849acu;
    // NOP
label_2849b0:
    // 0x2849b0: 0xc1c00000  ll          $zero, 0x0($t6)
    ctx->pc = 0x2849b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2849b4:
    // 0x2849b4: 0xc0c00000  ll          $zero, 0x0($a2)
    ctx->pc = 0x2849b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2849b8:
    // 0x2849b8: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x2849b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2849bc:
    // 0x2849bc: 0x43180000  .word       0x43180000                   # INVALID     $t8, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2849bcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x2849BC raw=0x43180000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2849c0:
    // 0x2849c0: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2849c0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x2849C0 raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2849c4:
    // 0x2849c4: 0x425c0000  .word       0x425C0000                   # INVALID     $s2, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2849c4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x2849C4 raw=0x425C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2849c8:
    // 0x2849c8: 0xc1c00000  ll          $zero, 0x0($t6)
    ctx->pc = 0x2849c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2849cc:
    // 0x2849cc: 0xc21c0000  ll          $gp, 0x0($s0)
    ctx->pc = 0x2849ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); SET_GPR_S32(ctx, 28, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2849d0:
    // 0x2849d0: 0xc2780000  ll          $t8, 0x0($s3)
    ctx->pc = 0x2849d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2849d4:
    // 0x2849d4: 0x43200000  .word       0x43200000                   # INVALID     $t9, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2849d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2849D4 raw=0x43200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2849d8:
    // 0x2849d8: 0x42960000  .word       0x42960000                   # INVALID     $s4, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2849d8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x2849D8 raw=0x42960000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2849dc:
    // 0x2849dc: 0x42de0000  .word       0x42DE0000                   # INVALID     $s6, $fp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2849dcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x2849DC raw=0x42DE0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2849e0:
    // 0x2849e0: 0x0  nop
    ctx->pc = 0x2849e0u;
    // NOP
label_2849e4:
    // 0x2849e4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x2849e4u;
    
label_2849e8:
    // 0x2849e8: 0x31000064  andi        $zero, $t0, 0x64
    ctx->pc = 0x2849e8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)100);
label_2849ec:
    // 0x2849ec: 0x0  nop
    ctx->pc = 0x2849ecu;
    // NOP
label_2849f0:
    // 0x2849f0: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x2849f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2849f4:
    // 0x2849f4: 0xc1f00000  ll          $s0, 0x0($t7)
    ctx->pc = 0x2849f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2849f8:
    // 0x2849f8: 0xc1f00000  ll          $s0, 0x0($t7)
    ctx->pc = 0x2849f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2849fc:
    // 0x2849fc: 0x43280000  .word       0x43280000                   # INVALID     $t9, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2849fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2849FC raw=0x43280000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284a00:
    // 0x284a00: 0x42680000  .word       0x42680000                   # INVALID     $s3, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284a00u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x284A00 raw=0x42680000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284a04:
    // 0x284a04: 0x42740000  .word       0x42740000                   # INVALID     $s3, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284a04u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x284A04 raw=0x42740000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284a08:
    // 0x284a08: 0xc1d00000  ll          $s0, 0x0($t6)
    ctx->pc = 0x284a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284a0c:
    // 0x284a0c: 0xc2100000  ll          $s0, 0x0($s0)
    ctx->pc = 0x284a0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284a10:
    // 0x284a10: 0xc2400000  ll          $zero, 0x0($s2)
    ctx->pc = 0x284a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284a14:
    // 0x284a14: 0x434c0000  .word       0x434C0000                   # INVALID     $k0, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284a14u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x284A14 raw=0x434C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284a18:
    // 0x284a18: 0x429c0000  .word       0x429C0000                   # INVALID     $s4, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284a18u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x284A18 raw=0x429C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284a1c:
    // 0x284a1c: 0x42c00000  .word       0x42C00000                   # INVALID     $s6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284a1cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x284A1C raw=0x42C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284a20:
    // 0x284a20: 0x0  nop
    ctx->pc = 0x284a20u;
    // NOP
label_284a24:
    // 0x284a24: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284a24u;
    
label_284a28:
    // 0x284a28: 0x32010065  andi        $at, $s0, 0x65
    ctx->pc = 0x284a28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)101);
label_284a2c:
    // 0x284a2c: 0x0  nop
    ctx->pc = 0x284a2cu;
    // NOP
label_284a30:
    // 0x284a30: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x284a30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284a34:
    // 0x284a34: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284a34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284a38:
    // 0x284a38: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x284a38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284a3c:
    // 0x284a3c: 0x43240000  .word       0x43240000                   # INVALID     $t9, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284a3cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x284A3C raw=0x43240000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284a40:
    // 0x284a40: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284a40u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284a44:
    // 0x284a44: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284a44u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x284A44 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284a48:
    // 0x284a48: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x284a48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284a4c:
    // 0x284a4c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284a4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284a50:
    // 0x284a50: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x284a50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284a54:
    // 0x284a54: 0x43240000  .word       0x43240000                   # INVALID     $t9, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284a54u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x284A54 raw=0x43240000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284a58:
    // 0x284a58: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284a58u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284a5c:
    // 0x284a5c: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284a5cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x284A5C raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284a60:
    // 0x284a60: 0x0  nop
    ctx->pc = 0x284a60u;
    // NOP
label_284a64:
    // 0x284a64: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284a64u;
    
label_284a68:
    // 0x284a68: 0x2e000066  sltiu       $zero, $s0, 0x66
    ctx->pc = 0x284a68u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)102) ? 1 : 0);
label_284a6c:
    // 0x284a6c: 0x0  nop
    ctx->pc = 0x284a6cu;
    // NOP
label_284a70:
    // 0x284a70: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x284a70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284a74:
    // 0x284a74: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284a74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284a78:
    // 0x284a78: 0xc0c00000  ll          $zero, 0x0($a2)
    ctx->pc = 0x284a78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284a7c:
    // 0x284a7c: 0x42fa0000  .word       0x42FA0000                   # INVALID     $s7, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284a7cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x284A7C raw=0x42FA0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284a80:
    // 0x284a80: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284a80u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284a84:
    // 0x284a84: 0x41c80000  .word       0x41C80000                   # INVALID     $t6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284a84u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x284A84 raw=0x41C80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284a88:
    // 0x284a88: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x284a88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284a8c:
    // 0x284a8c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284a8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284a90:
    // 0x284a90: 0xc0c00000  ll          $zero, 0x0($a2)
    ctx->pc = 0x284a90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284a94:
    // 0x284a94: 0x42fa0000  .word       0x42FA0000                   # INVALID     $s7, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284a94u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x284A94 raw=0x42FA0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284a98:
    // 0x284a98: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284a98u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284a9c:
    // 0x284a9c: 0x41c80000  .word       0x41C80000                   # INVALID     $t6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284a9cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x284A9C raw=0x41C80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284aa0:
    // 0x284aa0: 0x0  nop
    ctx->pc = 0x284aa0u;
    // NOP
label_284aa4:
    // 0x284aa4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284aa4u;
    
label_284aa8:
    // 0x284aa8: 0x2a030067  slti        $v1, $s0, 0x67
    ctx->pc = 0x284aa8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)103) ? 1 : 0);
label_284aac:
    // 0x284aac: 0x0  nop
    ctx->pc = 0x284aacu;
    // NOP
label_284ab0:
    // 0x284ab0: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x284ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284ab4:
    // 0x284ab4: 0xc0e00000  ll          $zero, 0x0($a3)
    ctx->pc = 0x284ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284ab8:
    // 0x284ab8: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x284ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284abc:
    // 0x284abc: 0x43170000  .word       0x43170000                   # INVALID     $t8, $s7, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284abcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x284ABC raw=0x43170000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284ac0:
    // 0x284ac0: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284ac0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x284AC0 raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284ac4:
    // 0x284ac4: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284ac4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x284AC4 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284ac8:
    // 0x284ac8: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x284ac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284acc:
    // 0x284acc: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x284accu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284ad0:
    // 0x284ad0: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x284ad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284ad4:
    // 0x284ad4: 0x43070000  .word       0x43070000                   # INVALID     $t8, $a3, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284ad4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x284AD4 raw=0x43070000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284ad8:
    // 0x284ad8: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284ad8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x284AD8 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284adc:
    // 0x284adc: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284adcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x284ADC raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284ae0:
    // 0x284ae0: 0x0  nop
    ctx->pc = 0x284ae0u;
    // NOP
label_284ae4:
    // 0x284ae4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284ae4u;
    
label_284ae8:
    // 0x284ae8: 0x2d030068  sltiu       $v1, $t0, 0x68
    ctx->pc = 0x284ae8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)104) ? 1 : 0);
label_284aec:
    // 0x284aec: 0x0  nop
    ctx->pc = 0x284aecu;
    // NOP
label_284af0:
    // 0x284af0: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x284af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284af4:
    // 0x284af4: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x284af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284af8:
    // 0x284af8: 0xc1300000  ll          $s0, 0x0($t1)
    ctx->pc = 0x284af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284afc:
    // 0x284afc: 0x42c20000  .word       0x42C20000                   # INVALID     $s6, $v0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284afcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x284AFC raw=0x42C20000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284b00:
    // 0x284b00: 0x41d00000  .word       0x41D00000                   # INVALID     $t6, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284b00u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x284B00 raw=0x41D00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284b04:
    // 0x284b04: 0x41b00000  .word       0x41B00000                   # INVALID     $t5, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284b04u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x284B04 raw=0x41B00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284b08:
    // 0x284b08: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x284b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284b0c:
    // 0x284b0c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x284b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284b10:
    // 0x284b10: 0xc1300000  ll          $s0, 0x0($t1)
    ctx->pc = 0x284b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284b14:
    // 0x284b14: 0x42c20000  .word       0x42C20000                   # INVALID     $s6, $v0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284b14u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x284B14 raw=0x42C20000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284b18:
    // 0x284b18: 0x41d00000  .word       0x41D00000                   # INVALID     $t6, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284b18u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x284B18 raw=0x41D00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284b1c:
    // 0x284b1c: 0x41b00000  .word       0x41B00000                   # INVALID     $t5, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284b1cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x284B1C raw=0x41B00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284b20:
    // 0x284b20: 0x0  nop
    ctx->pc = 0x284b20u;
    // NOP
label_284b24:
    // 0x284b24: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284b24u;
    
label_284b28:
    // 0x284b28: 0x28030069  slti        $v1, $zero, 0x69
    ctx->pc = 0x284b28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)105) ? 1 : 0);
label_284b2c:
    // 0x284b2c: 0x0  nop
    ctx->pc = 0x284b2cu;
    // NOP
label_284b30:
    // 0x284b30: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x284b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284b34:
    // 0x284b34: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x284b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284b38:
    // 0x284b38: 0xc1c00000  ll          $zero, 0x0($t6)
    ctx->pc = 0x284b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284b3c:
    // 0x284b3c: 0x42a40000  .word       0x42A40000                   # INVALID     $s5, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284b3cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x284B3C raw=0x42A40000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284b40:
    // 0x284b40: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x284b40u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x284B40 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284b44:
    // 0x284b44: 0x42400000  .word       0x42400000                   # INVALID     $s2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284b44u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x284B44 raw=0x42400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284b48:
    // 0x284b48: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x284b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284b4c:
    // 0x284b4c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284b50:
    // 0x284b50: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x284b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284b54:
    // 0x284b54: 0x42ba0000  .word       0x42BA0000                   # INVALID     $s5, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284b54u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x284B54 raw=0x42BA0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284b58:
    // 0x284b58: 0x40400000  cfc0        $zero, Index
    ctx->pc = 0x284b58u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x284B58 raw=0x40400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284b5c:
    // 0x284b5c: 0x421c0000  .word       0x421C0000                   # INVALID     $s0, $gp, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x284b5cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x284B5C raw=0x421C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284b60:
    // 0x284b60: 0x0  nop
    ctx->pc = 0x284b60u;
    // NOP
label_284b64:
    // 0x284b64: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284b64u;
    
label_284b68:
    // 0x284b68: 0x2800006a  slti        $zero, $zero, 0x6A
    ctx->pc = 0x284b68u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)106) ? 1 : 0);
label_284b6c:
    // 0x284b6c: 0x0  nop
    ctx->pc = 0x284b6cu;
    // NOP
label_284b70:
    // 0x284b70: 0xc1700000  ll          $s0, 0x0($t3)
    ctx->pc = 0x284b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284b74:
    // 0x284b74: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284b78:
    // 0x284b78: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x284b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284b7c:
    // 0x284b7c: 0x43270000  .word       0x43270000                   # INVALID     $t9, $a3, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284b7cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x284B7C raw=0x43270000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284b80:
    // 0x284b80: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284b80u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284b84:
    // 0x284b84: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_284b88:
    if (ctx->pc == 0x284B88u) {
        ctx->pc = 0x284B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B84u;
        // 0x284b88: 0xc1880000  ll          $t0, 0x0($t4) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x284B8Cu;
        goto label_284b8c;
    }
    ctx->pc = 0x284B84u;
    {
        const bool branch_taken_0x284b84 = (false);
        ctx->pc = 0x284B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B84u;
        // 0x284b88: 0xc1880000  ll          $t0, 0x0($t4) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x284b84) {
            ctx->pc = 0x284B88u;
            goto label_284b88;
        }
    }
    ctx->pc = 0x284B8Cu;
label_284b8c:
    // 0x284b8c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284b8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284b90:
    // 0x284b90: 0xc1300000  ll          $s0, 0x0($t1)
    ctx->pc = 0x284b90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284b94:
    // 0x284b94: 0x43220000  .word       0x43220000                   # INVALID     $t9, $v0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284b94u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x284B94 raw=0x43220000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284b98:
    // 0x284b98: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284b98u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284b9c:
    // 0x284b9c: 0x41b00000  .word       0x41B00000                   # INVALID     $t5, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284b9cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x284B9C raw=0x41B00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284ba0:
    // 0x284ba0: 0x0  nop
    ctx->pc = 0x284ba0u;
    // NOP
label_284ba4:
    // 0x284ba4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284ba4u;
    
label_284ba8:
    // 0x284ba8: 0x2d00006b  sltiu       $zero, $t0, 0x6B
    ctx->pc = 0x284ba8u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)107) ? 1 : 0);
label_284bac:
    // 0x284bac: 0x0  nop
    ctx->pc = 0x284bacu;
    // NOP
label_284bb0:
    // 0x284bb0: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284bb0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x284BB0 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284bb4:
    // 0x284bb4: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x284bb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284bb8:
    // 0x284bb8: 0xc1e00000  ll          $zero, 0x0($t7)
    ctx->pc = 0x284bb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284bbc:
    // 0x284bbc: 0x43340000  .word       0x43340000                   # INVALID     $t9, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284bbcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x284BBC raw=0x43340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284bc0:
    // 0x284bc0: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284bc0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x284BC0 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284bc4:
    // 0x284bc4: 0x426c0000  .word       0x426C0000                   # INVALID     $s3, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284bc4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x284BC4 raw=0x426C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284bc8:
    // 0x284bc8: 0xc22c0000  ll          $t4, 0x0($s1)
    ctx->pc = 0x284bc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284bcc:
    // 0x284bcc: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x284bccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284bd0:
    // 0x284bd0: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x284bd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284bd4:
    // 0x284bd4: 0x43110000  .word       0x43110000                   # INVALID     $t8, $s1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284bd4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x284BD4 raw=0x43110000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284bd8:
    // 0x284bd8: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_284bdc:
    if (ctx->pc == 0x284BDCu) {
        ctx->pc = 0x284BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284BD8u;
        // 0x284bdc: 0x41000000  bc0f        . + 4 + (0x0 << 2) (Delay Slot)
        // BC0 (Condition: 0x0) - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x284BE0u;
        goto label_284be0;
    }
    ctx->pc = 0x284BD8u;
    {
        const bool branch_taken_0x284bd8 = (false);
        ctx->pc = 0x284BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284BD8u;
        // 0x284bdc: 0x41000000  bc0f        . + 4 + (0x0 << 2) (Delay Slot)
        // BC0 (Condition: 0x0) - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x284bd8) {
            ctx->pc = 0x284BDCu;
            goto label_284bdc;
        }
    }
    ctx->pc = 0x284BE0u;
label_284be0:
    // 0x284be0: 0x0  nop
    ctx->pc = 0x284be0u;
    // NOP
label_284be4:
    // 0x284be4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284be4u;
    
label_284be8:
    // 0x284be8: 0x3202006c  andi        $v0, $s0, 0x6C
    ctx->pc = 0x284be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)108);
label_284bec:
    // 0x284bec: 0x0  nop
    ctx->pc = 0x284becu;
    // NOP
label_284bf0:
    // 0x284bf0: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x284bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284bf4:
    // 0x284bf4: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284bf8:
    // 0x284bf8: 0xc2200000  ll          $zero, 0x0($s1)
    ctx->pc = 0x284bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284bfc:
    // 0x284bfc: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284bfcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x284BFC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284c00:
    // 0x284c00: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284c00u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284c04:
    // 0x284c04: 0x42a00000  .word       0x42A00000                   # INVALID     $s5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284c04u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x284C04 raw=0x42A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284c08:
    // 0x284c08: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x284c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284c0c:
    // 0x284c0c: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x284c0cu;
    // CACHE instruction (ignored)
label_284c10:
    // 0x284c10: 0xc1f80000  ll          $t8, 0x0($t7)
    ctx->pc = 0x284c10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284c14:
    // 0x284c14: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284c14u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x284C14 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284c18:
    // 0x284c18: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x284c18u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_284c1c:
    // 0x284c1c: 0x42780000  .word       0x42780000                   # INVALID     $s3, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284c1cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x284C1C raw=0x42780000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284c20:
    // 0x284c20: 0x0  nop
    ctx->pc = 0x284c20u;
    // NOP
label_284c24:
    // 0x284c24: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284c24u;
    
label_284c28:
    // 0x284c28: 0x2803006d  slti        $v1, $zero, 0x6D
    ctx->pc = 0x284c28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)109) ? 1 : 0);
label_284c2c:
    // 0x284c2c: 0x0  nop
    ctx->pc = 0x284c2cu;
    // NOP
label_284c30:
    // 0x284c30: 0xc1880000  ll          $t0, 0x0($t4)
    ctx->pc = 0x284c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284c34:
    // 0x284c34: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284c38:
    // 0x284c38: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x284c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284c3c:
    // 0x284c3c: 0x43310000  .word       0x43310000                   # INVALID     $t9, $s1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284c3cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x284C3C raw=0x43310000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284c40:
    // 0x284c40: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284c40u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284c44:
    // 0x284c44: 0x41b00000  .word       0x41B00000                   # INVALID     $t5, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284c44u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x284C44 raw=0x41B00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284c48:
    // 0x284c48: 0xc1700000  ll          $s0, 0x0($t3)
    ctx->pc = 0x284c48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284c4c:
    // 0x284c4c: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x284c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284c50:
    // 0x284c50: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284c54:
    // 0x284c54: 0x431d0000  .word       0x431D0000                   # INVALID     $t8, $sp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284c54u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x284C54 raw=0x431D0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284c58:
    // 0x284c58: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x284c58u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x284C58 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284c5c:
    // 0x284c5c: 0x41c00000  .word       0x41C00000                   # INVALID     $t6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284c5cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x284C5C raw=0x41C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284c60:
    // 0x284c60: 0x0  nop
    ctx->pc = 0x284c60u;
    // NOP
label_284c64:
    // 0x284c64: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284c64u;
    
label_284c68:
    // 0x284c68: 0x2800006e  slti        $zero, $zero, 0x6E
    ctx->pc = 0x284c68u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)110) ? 1 : 0);
label_284c6c:
    // 0x284c6c: 0x0  nop
    ctx->pc = 0x284c6cu;
    // NOP
label_284c70:
    // 0x284c70: 0xc1880000  ll          $t0, 0x0($t4)
    ctx->pc = 0x284c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284c74:
    // 0x284c74: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284c78:
    // 0x284c78: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x284c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284c7c:
    // 0x284c7c: 0x43310000  .word       0x43310000                   # INVALID     $t9, $s1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284c7cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x284C7C raw=0x43310000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284c80:
    // 0x284c80: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284c80u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284c84:
    // 0x284c84: 0x41b00000  .word       0x41B00000                   # INVALID     $t5, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284c84u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x284C84 raw=0x41B00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284c88:
    // 0x284c88: 0xc1700000  ll          $s0, 0x0($t3)
    ctx->pc = 0x284c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284c8c:
    // 0x284c8c: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x284c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284c90:
    // 0x284c90: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284c94:
    // 0x284c94: 0x431d0000  .word       0x431D0000                   # INVALID     $t8, $sp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284c94u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x284C94 raw=0x431D0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284c98:
    // 0x284c98: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x284c98u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x284C98 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284c9c:
    // 0x284c9c: 0x41c00000  .word       0x41C00000                   # INVALID     $t6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284c9cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x284C9C raw=0x41C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284ca0:
    // 0x284ca0: 0x0  nop
    ctx->pc = 0x284ca0u;
    // NOP
label_284ca4:
    // 0x284ca4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284ca4u;
    
label_284ca8:
    // 0x284ca8: 0x2b00006f  slti        $zero, $t8, 0x6F
    ctx->pc = 0x284ca8u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)111) ? 1 : 0);
label_284cac:
    // 0x284cac: 0x0  nop
    ctx->pc = 0x284cacu;
    // NOP
label_284cb0:
    // 0x284cb0: 0xc1880000  ll          $t0, 0x0($t4)
    ctx->pc = 0x284cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284cb4:
    // 0x284cb4: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284cb8:
    // 0x284cb8: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x284cb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284cbc:
    // 0x284cbc: 0x43310000  .word       0x43310000                   # INVALID     $t9, $s1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284cbcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x284CBC raw=0x43310000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284cc0:
    // 0x284cc0: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284cc0u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284cc4:
    // 0x284cc4: 0x41b00000  .word       0x41B00000                   # INVALID     $t5, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284cc4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x284CC4 raw=0x41B00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284cc8:
    // 0x284cc8: 0xc1700000  ll          $s0, 0x0($t3)
    ctx->pc = 0x284cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284ccc:
    // 0x284ccc: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x284cccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284cd0:
    // 0x284cd0: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284cd4:
    // 0x284cd4: 0x431d0000  .word       0x431D0000                   # INVALID     $t8, $sp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284cd4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x284CD4 raw=0x431D0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284cd8:
    // 0x284cd8: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x284cd8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x284CD8 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284cdc:
    // 0x284cdc: 0x41c00000  .word       0x41C00000                   # INVALID     $t6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284cdcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x284CDC raw=0x41C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284ce0:
    // 0x284ce0: 0x0  nop
    ctx->pc = 0x284ce0u;
    // NOP
label_284ce4:
    // 0x284ce4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284ce4u;
    
label_284ce8:
    // 0x284ce8: 0x2a000070  slti        $zero, $s0, 0x70
    ctx->pc = 0x284ce8u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)112) ? 1 : 0);
label_284cec:
    // 0x284cec: 0x0  nop
    ctx->pc = 0x284cecu;
    // NOP
label_284cf0:
    // 0x284cf0: 0xc1880000  ll          $t0, 0x0($t4)
    ctx->pc = 0x284cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284cf4:
    // 0x284cf4: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284cf8:
    // 0x284cf8: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x284cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284cfc:
    // 0x284cfc: 0x43310000  .word       0x43310000                   # INVALID     $t9, $s1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284cfcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x284CFC raw=0x43310000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284d00:
    // 0x284d00: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284d00u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284d04:
    // 0x284d04: 0x41b00000  .word       0x41B00000                   # INVALID     $t5, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284d04u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x284D04 raw=0x41B00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284d08:
    // 0x284d08: 0xc1700000  ll          $s0, 0x0($t3)
    ctx->pc = 0x284d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284d0c:
    // 0x284d0c: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x284d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284d10:
    // 0x284d10: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284d14:
    // 0x284d14: 0x431d0000  .word       0x431D0000                   # INVALID     $t8, $sp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284d14u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x284D14 raw=0x431D0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284d18:
    // 0x284d18: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x284d18u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x284D18 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284d1c:
    // 0x284d1c: 0x41c00000  .word       0x41C00000                   # INVALID     $t6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284d1cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x284D1C raw=0x41C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284d20:
    // 0x284d20: 0x0  nop
    ctx->pc = 0x284d20u;
    // NOP
label_284d24:
    // 0x284d24: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284d24u;
    
label_284d28:
    // 0x284d28: 0x29000071  slti        $zero, $t0, 0x71
    ctx->pc = 0x284d28u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)113) ? 1 : 0);
label_284d2c:
    // 0x284d2c: 0x0  nop
    ctx->pc = 0x284d2cu;
    // NOP
label_284d30:
    // 0x284d30: 0xc1880000  ll          $t0, 0x0($t4)
    ctx->pc = 0x284d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284d34:
    // 0x284d34: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284d38:
    // 0x284d38: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x284d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284d3c:
    // 0x284d3c: 0x43310000  .word       0x43310000                   # INVALID     $t9, $s1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284d3cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x284D3C raw=0x43310000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284d40:
    // 0x284d40: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284d40u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284d44:
    // 0x284d44: 0x41b00000  .word       0x41B00000                   # INVALID     $t5, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284d44u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x284D44 raw=0x41B00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284d48:
    // 0x284d48: 0xc1700000  ll          $s0, 0x0($t3)
    ctx->pc = 0x284d48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284d4c:
    // 0x284d4c: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x284d4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284d50:
    // 0x284d50: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284d50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284d54:
    // 0x284d54: 0x431d0000  .word       0x431D0000                   # INVALID     $t8, $sp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284d54u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x284D54 raw=0x431D0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284d58:
    // 0x284d58: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x284d58u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x284D58 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284d5c:
    // 0x284d5c: 0x41c00000  .word       0x41C00000                   # INVALID     $t6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284d5cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x284D5C raw=0x41C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284d60:
    // 0x284d60: 0x0  nop
    ctx->pc = 0x284d60u;
    // NOP
label_284d64:
    // 0x284d64: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284d64u;
    
label_284d68:
    // 0x284d68: 0x2c000072  sltiu       $zero, $zero, 0x72
    ctx->pc = 0x284d68u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)(int64_t)(int32_t)114) ? 1 : 0);
label_284d6c:
    // 0x284d6c: 0x0  nop
    ctx->pc = 0x284d6cu;
    // NOP
label_284d70:
    // 0x284d70: 0x42aa0000  .word       0x42AA0000                   # INVALID     $s5, $t2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284d70u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x284D70 raw=0x42AA0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284d74:
    // 0x284d74: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x284d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284d78:
    // 0x284d78: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284d7c:
    // 0x284d7c: 0x43200000  .word       0x43200000                   # INVALID     $t9, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284d7cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x284D7C raw=0x43200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284d80:
    // 0x284d80: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284d80u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x284D80 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284d84:
    // 0x284d84: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284d84u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284d88:
    // 0x284d88: 0xc20c0000  ll          $t4, 0x0($s0)
    ctx->pc = 0x284d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284d8c:
    // 0x284d8c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284d90:
    // 0x284d90: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284d94:
    // 0x284d94: 0x42f00000  .word       0x42F00000                   # INVALID     $s7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284d94u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x284D94 raw=0x42F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284d98:
    // 0x284d98: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284d98u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284d9c:
    // 0x284d9c: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284d9cu;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284da0:
    // 0x284da0: 0x0  nop
    ctx->pc = 0x284da0u;
    // NOP
label_284da4:
    // 0x284da4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284da4u;
    
label_284da8:
    // 0x284da8: 0x2a020073  slti        $v0, $s0, 0x73
    ctx->pc = 0x284da8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)115) ? 1 : 0);
label_284dac:
    // 0x284dac: 0x0  nop
    ctx->pc = 0x284dacu;
    // NOP
label_284db0:
    // 0x284db0: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284db4:
    // 0x284db4: 0xc0e00000  ll          $zero, 0x0($a3)
    ctx->pc = 0x284db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284db8:
    // 0x284db8: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284dbc:
    // 0x284dbc: 0x43210000  .word       0x43210000                   # INVALID     $t9, $at, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284dbcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x284DBC raw=0x43210000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284dc0:
    // 0x284dc0: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284dc0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x284DC0 raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284dc4:
    // 0x284dc4: 0x42180000  .word       0x42180000                   # INVALID     $s0, $t8, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x284dc4u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x284DC4 raw=0x42180000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284dc8:
    // 0x284dc8: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284dcc:
    // 0x284dcc: 0xc0e00000  ll          $zero, 0x0($a3)
    ctx->pc = 0x284dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284dd0:
    // 0x284dd0: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284dd4:
    // 0x284dd4: 0x43210000  .word       0x43210000                   # INVALID     $t9, $at, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284dd4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x284DD4 raw=0x43210000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284dd8:
    // 0x284dd8: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284dd8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x284DD8 raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284ddc:
    // 0x284ddc: 0x42180000  .word       0x42180000                   # INVALID     $s0, $t8, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x284ddcu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x284DDC raw=0x42180000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284de0:
    // 0x284de0: 0x0  nop
    ctx->pc = 0x284de0u;
    // NOP
label_284de4:
    // 0x284de4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284de4u;
    
label_284de8:
    // 0x284de8: 0x2c000074  sltiu       $zero, $zero, 0x74
    ctx->pc = 0x284de8u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)(int64_t)(int32_t)116) ? 1 : 0);
label_284dec:
    // 0x284dec: 0x0  nop
    ctx->pc = 0x284decu;
    // NOP
label_284df0:
    // 0x284df0: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284df4:
    // 0x284df4: 0xc0e00000  ll          $zero, 0x0($a3)
    ctx->pc = 0x284df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284df8:
    // 0x284df8: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284dfc:
    // 0x284dfc: 0x43210000  .word       0x43210000                   # INVALID     $t9, $at, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284dfcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x284DFC raw=0x43210000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284e00:
    // 0x284e00: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284e00u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x284E00 raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284e04:
    // 0x284e04: 0x42180000  .word       0x42180000                   # INVALID     $s0, $t8, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x284e04u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x284E04 raw=0x42180000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284e08:
    // 0x284e08: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284e0c:
    // 0x284e0c: 0xc0e00000  ll          $zero, 0x0($a3)
    ctx->pc = 0x284e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284e10:
    // 0x284e10: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284e14:
    // 0x284e14: 0x43210000  .word       0x43210000                   # INVALID     $t9, $at, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284e14u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x284E14 raw=0x43210000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284e18:
    // 0x284e18: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284e18u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x284E18 raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284e1c:
    // 0x284e1c: 0x42180000  .word       0x42180000                   # INVALID     $s0, $t8, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x284e1cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x284E1C raw=0x42180000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284e20:
    // 0x284e20: 0x0  nop
    ctx->pc = 0x284e20u;
    // NOP
label_284e24:
    // 0x284e24: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284e24u;
    
label_284e28:
    // 0x284e28: 0x2d000075  sltiu       $zero, $t0, 0x75
    ctx->pc = 0x284e28u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)117) ? 1 : 0);
label_284e2c:
    // 0x284e2c: 0x0  nop
    ctx->pc = 0x284e2cu;
    // NOP
label_284e30:
    // 0x284e30: 0x428c0000  .word       0x428C0000                   # INVALID     $s4, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284e30u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x284E30 raw=0x428C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284e34:
    // 0x284e34: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284e38:
    // 0x284e38: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x284e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284e3c:
    // 0x284e3c: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284e3cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x284E3C raw=0x43480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284e40:
    // 0x284e40: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284e40u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284e44:
    // 0x284e44: 0x41d00000  .word       0x41D00000                   # INVALID     $t6, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284e44u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x284E44 raw=0x41D00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284e48:
    // 0x284e48: 0xc2400000  ll          $zero, 0x0($s2)
    ctx->pc = 0x284e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284e4c:
    // 0x284e4c: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x284e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284e50:
    // 0x284e50: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284e54:
    // 0x284e54: 0x42ec0000  .word       0x42EC0000                   # INVALID     $s7, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284e54u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x284E54 raw=0x42EC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284e58:
    // 0x284e58: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x284e58u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x284E58 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284e5c:
    // 0x284e5c: 0x40a00000  dmtc0       $zero, Index
    ctx->pc = 0x284e5cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x284E5C raw=0x40A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284e60:
    // 0x284e60: 0x0  nop
    ctx->pc = 0x284e60u;
    // NOP
label_284e64:
    // 0x284e64: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284e64u;
    
label_284e68:
    // 0x284e68: 0x30020076  andi        $v0, $zero, 0x76
    ctx->pc = 0x284e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)118);
label_284e6c:
    // 0x284e6c: 0x0  nop
    ctx->pc = 0x284e6cu;
    // NOP
label_284e70:
    // 0x284e70: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x284e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284e74:
    // 0x284e74: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284e78:
    // 0x284e78: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x284e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284e7c:
    // 0x284e7c: 0x42a00000  .word       0x42A00000                   # INVALID     $s5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284e7cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x284E7C raw=0x42A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284e80:
    // 0x284e80: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284e80u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284e84:
    // 0x284e84: 0x42680000  .word       0x42680000                   # INVALID     $s3, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284e84u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x284E84 raw=0x42680000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284e88:
    // 0x284e88: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x284e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284e8c:
    // 0x284e8c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284e90:
    // 0x284e90: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x284e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284e94:
    // 0x284e94: 0x42a00000  .word       0x42A00000                   # INVALID     $s5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284e94u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x284E94 raw=0x42A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284e98:
    // 0x284e98: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284e98u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284e9c:
    // 0x284e9c: 0x42680000  .word       0x42680000                   # INVALID     $s3, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284e9cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x284E9C raw=0x42680000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284ea0:
    // 0x284ea0: 0x0  nop
    ctx->pc = 0x284ea0u;
    // NOP
label_284ea4:
    // 0x284ea4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284ea4u;
    
label_284ea8:
    // 0x284ea8: 0x28000077  slti        $zero, $zero, 0x77
    ctx->pc = 0x284ea8u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)119) ? 1 : 0);
label_284eac:
    // 0x284eac: 0x0  nop
    ctx->pc = 0x284eacu;
    // NOP
    ctx->pc = 0x284eb0u;
    return;
}
