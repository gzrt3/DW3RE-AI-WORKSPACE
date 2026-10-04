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


void FUN_0014eba0_part666(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2936f0u: goto label_2936f0;
        case 0x2936f4u: goto label_2936f4;
        case 0x2936f8u: goto label_2936f8;
        case 0x2936fcu: goto label_2936fc;
        case 0x293700u: goto label_293700;
        case 0x293704u: goto label_293704;
        case 0x293708u: goto label_293708;
        case 0x29370cu: goto label_29370c;
        case 0x293710u: goto label_293710;
        case 0x293714u: goto label_293714;
        case 0x293718u: goto label_293718;
        case 0x29371cu: goto label_29371c;
        case 0x293720u: goto label_293720;
        case 0x293724u: goto label_293724;
        case 0x293728u: goto label_293728;
        case 0x29372cu: goto label_29372c;
        case 0x293730u: goto label_293730;
        case 0x293734u: goto label_293734;
        case 0x293738u: goto label_293738;
        case 0x29373cu: goto label_29373c;
        case 0x293740u: goto label_293740;
        case 0x293744u: goto label_293744;
        case 0x293748u: goto label_293748;
        case 0x29374cu: goto label_29374c;
        case 0x293750u: goto label_293750;
        case 0x293754u: goto label_293754;
        case 0x293758u: goto label_293758;
        case 0x29375cu: goto label_29375c;
        case 0x293760u: goto label_293760;
        case 0x293764u: goto label_293764;
        case 0x293768u: goto label_293768;
        case 0x29376cu: goto label_29376c;
        case 0x293770u: goto label_293770;
        case 0x293774u: goto label_293774;
        case 0x293778u: goto label_293778;
        case 0x29377cu: goto label_29377c;
        case 0x293780u: goto label_293780;
        case 0x293784u: goto label_293784;
        case 0x293788u: goto label_293788;
        case 0x29378cu: goto label_29378c;
        case 0x293790u: goto label_293790;
        case 0x293794u: goto label_293794;
        case 0x293798u: goto label_293798;
        case 0x29379cu: goto label_29379c;
        case 0x2937a0u: goto label_2937a0;
        case 0x2937a4u: goto label_2937a4;
        case 0x2937a8u: goto label_2937a8;
        case 0x2937acu: goto label_2937ac;
        case 0x2937b0u: goto label_2937b0;
        case 0x2937b4u: goto label_2937b4;
        case 0x2937b8u: goto label_2937b8;
        case 0x2937bcu: goto label_2937bc;
        case 0x2937c0u: goto label_2937c0;
        case 0x2937c4u: goto label_2937c4;
        case 0x2937c8u: goto label_2937c8;
        case 0x2937ccu: goto label_2937cc;
        case 0x2937d0u: goto label_2937d0;
        case 0x2937d4u: goto label_2937d4;
        case 0x2937d8u: goto label_2937d8;
        case 0x2937dcu: goto label_2937dc;
        case 0x2937e0u: goto label_2937e0;
        case 0x2937e4u: goto label_2937e4;
        case 0x2937e8u: goto label_2937e8;
        case 0x2937ecu: goto label_2937ec;
        case 0x2937f0u: goto label_2937f0;
        case 0x2937f4u: goto label_2937f4;
        case 0x2937f8u: goto label_2937f8;
        case 0x2937fcu: goto label_2937fc;
        case 0x293800u: goto label_293800;
        case 0x293804u: goto label_293804;
        case 0x293808u: goto label_293808;
        case 0x29380cu: goto label_29380c;
        case 0x293810u: goto label_293810;
        case 0x293814u: goto label_293814;
        case 0x293818u: goto label_293818;
        case 0x29381cu: goto label_29381c;
        case 0x293820u: goto label_293820;
        case 0x293824u: goto label_293824;
        case 0x293828u: goto label_293828;
        case 0x29382cu: goto label_29382c;
        case 0x293830u: goto label_293830;
        case 0x293834u: goto label_293834;
        case 0x293838u: goto label_293838;
        case 0x29383cu: goto label_29383c;
        case 0x293840u: goto label_293840;
        case 0x293844u: goto label_293844;
        case 0x293848u: goto label_293848;
        case 0x29384cu: goto label_29384c;
        case 0x293850u: goto label_293850;
        case 0x293854u: goto label_293854;
        case 0x293858u: goto label_293858;
        case 0x29385cu: goto label_29385c;
        case 0x293860u: goto label_293860;
        case 0x293864u: goto label_293864;
        case 0x293868u: goto label_293868;
        case 0x29386cu: goto label_29386c;
        case 0x293870u: goto label_293870;
        case 0x293874u: goto label_293874;
        case 0x293878u: goto label_293878;
        case 0x29387cu: goto label_29387c;
        case 0x293880u: goto label_293880;
        case 0x293884u: goto label_293884;
        case 0x293888u: goto label_293888;
        case 0x29388cu: goto label_29388c;
        case 0x293890u: goto label_293890;
        case 0x293894u: goto label_293894;
        case 0x293898u: goto label_293898;
        case 0x29389cu: goto label_29389c;
        case 0x2938a0u: goto label_2938a0;
        case 0x2938a4u: goto label_2938a4;
        case 0x2938a8u: goto label_2938a8;
        case 0x2938acu: goto label_2938ac;
        case 0x2938b0u: goto label_2938b0;
        case 0x2938b4u: goto label_2938b4;
        case 0x2938b8u: goto label_2938b8;
        case 0x2938bcu: goto label_2938bc;
        case 0x2938c0u: goto label_2938c0;
        case 0x2938c4u: goto label_2938c4;
        case 0x2938c8u: goto label_2938c8;
        case 0x2938ccu: goto label_2938cc;
        case 0x2938d0u: goto label_2938d0;
        case 0x2938d4u: goto label_2938d4;
        case 0x2938d8u: goto label_2938d8;
        case 0x2938dcu: goto label_2938dc;
        case 0x2938e0u: goto label_2938e0;
        case 0x2938e4u: goto label_2938e4;
        case 0x2938e8u: goto label_2938e8;
        case 0x2938ecu: goto label_2938ec;
        case 0x2938f0u: goto label_2938f0;
        case 0x2938f4u: goto label_2938f4;
        case 0x2938f8u: goto label_2938f8;
        case 0x2938fcu: goto label_2938fc;
        case 0x293900u: goto label_293900;
        case 0x293904u: goto label_293904;
        case 0x293908u: goto label_293908;
        case 0x29390cu: goto label_29390c;
        case 0x293910u: goto label_293910;
        case 0x293914u: goto label_293914;
        case 0x293918u: goto label_293918;
        case 0x29391cu: goto label_29391c;
        case 0x293920u: goto label_293920;
        case 0x293924u: goto label_293924;
        case 0x293928u: goto label_293928;
        case 0x29392cu: goto label_29392c;
        case 0x293930u: goto label_293930;
        case 0x293934u: goto label_293934;
        case 0x293938u: goto label_293938;
        case 0x29393cu: goto label_29393c;
        case 0x293940u: goto label_293940;
        case 0x293944u: goto label_293944;
        case 0x293948u: goto label_293948;
        case 0x29394cu: goto label_29394c;
        case 0x293950u: goto label_293950;
        case 0x293954u: goto label_293954;
        case 0x293958u: goto label_293958;
        case 0x29395cu: goto label_29395c;
        case 0x293960u: goto label_293960;
        case 0x293964u: goto label_293964;
        case 0x293968u: goto label_293968;
        case 0x29396cu: goto label_29396c;
        case 0x293970u: goto label_293970;
        case 0x293974u: goto label_293974;
        case 0x293978u: goto label_293978;
        case 0x29397cu: goto label_29397c;
        case 0x293980u: goto label_293980;
        case 0x293984u: goto label_293984;
        case 0x293988u: goto label_293988;
        case 0x29398cu: goto label_29398c;
        case 0x293990u: goto label_293990;
        case 0x293994u: goto label_293994;
        case 0x293998u: goto label_293998;
        case 0x29399cu: goto label_29399c;
        case 0x2939a0u: goto label_2939a0;
        case 0x2939a4u: goto label_2939a4;
        case 0x2939a8u: goto label_2939a8;
        case 0x2939acu: goto label_2939ac;
        case 0x2939b0u: goto label_2939b0;
        case 0x2939b4u: goto label_2939b4;
        case 0x2939b8u: goto label_2939b8;
        case 0x2939bcu: goto label_2939bc;
        case 0x2939c0u: goto label_2939c0;
        case 0x2939c4u: goto label_2939c4;
        case 0x2939c8u: goto label_2939c8;
        case 0x2939ccu: goto label_2939cc;
        case 0x2939d0u: goto label_2939d0;
        case 0x2939d4u: goto label_2939d4;
        case 0x2939d8u: goto label_2939d8;
        case 0x2939dcu: goto label_2939dc;
        case 0x2939e0u: goto label_2939e0;
        case 0x2939e4u: goto label_2939e4;
        case 0x2939e8u: goto label_2939e8;
        case 0x2939ecu: goto label_2939ec;
        case 0x2939f0u: goto label_2939f0;
        case 0x2939f4u: goto label_2939f4;
        case 0x2939f8u: goto label_2939f8;
        case 0x2939fcu: goto label_2939fc;
        case 0x293a00u: goto label_293a00;
        case 0x293a04u: goto label_293a04;
        case 0x293a08u: goto label_293a08;
        case 0x293a0cu: goto label_293a0c;
        case 0x293a10u: goto label_293a10;
        case 0x293a14u: goto label_293a14;
        case 0x293a18u: goto label_293a18;
        case 0x293a1cu: goto label_293a1c;
        case 0x293a20u: goto label_293a20;
        case 0x293a24u: goto label_293a24;
        case 0x293a28u: goto label_293a28;
        case 0x293a2cu: goto label_293a2c;
        case 0x293a30u: goto label_293a30;
        case 0x293a34u: goto label_293a34;
        case 0x293a38u: goto label_293a38;
        case 0x293a3cu: goto label_293a3c;
        case 0x293a40u: goto label_293a40;
        case 0x293a44u: goto label_293a44;
        case 0x293a48u: goto label_293a48;
        case 0x293a4cu: goto label_293a4c;
        case 0x293a50u: goto label_293a50;
        case 0x293a54u: goto label_293a54;
        case 0x293a58u: goto label_293a58;
        case 0x293a5cu: goto label_293a5c;
        case 0x293a60u: goto label_293a60;
        case 0x293a64u: goto label_293a64;
        case 0x293a68u: goto label_293a68;
        case 0x293a6cu: goto label_293a6c;
        case 0x293a70u: goto label_293a70;
        case 0x293a74u: goto label_293a74;
        case 0x293a78u: goto label_293a78;
        case 0x293a7cu: goto label_293a7c;
        case 0x293a80u: goto label_293a80;
        case 0x293a84u: goto label_293a84;
        case 0x293a88u: goto label_293a88;
        case 0x293a8cu: goto label_293a8c;
        case 0x293a90u: goto label_293a90;
        case 0x293a94u: goto label_293a94;
        case 0x293a98u: goto label_293a98;
        case 0x293a9cu: goto label_293a9c;
        case 0x293aa0u: goto label_293aa0;
        case 0x293aa4u: goto label_293aa4;
        case 0x293aa8u: goto label_293aa8;
        case 0x293aacu: goto label_293aac;
        case 0x293ab0u: goto label_293ab0;
        case 0x293ab4u: goto label_293ab4;
        case 0x293ab8u: goto label_293ab8;
        case 0x293abcu: goto label_293abc;
        case 0x293ac0u: goto label_293ac0;
        case 0x293ac4u: goto label_293ac4;
        case 0x293ac8u: goto label_293ac8;
        case 0x293accu: goto label_293acc;
        case 0x293ad0u: goto label_293ad0;
        case 0x293ad4u: goto label_293ad4;
        case 0x293ad8u: goto label_293ad8;
        case 0x293adcu: goto label_293adc;
        case 0x293ae0u: goto label_293ae0;
        case 0x293ae4u: goto label_293ae4;
        case 0x293ae8u: goto label_293ae8;
        case 0x293aecu: goto label_293aec;
        case 0x293af0u: goto label_293af0;
        case 0x293af4u: goto label_293af4;
        case 0x293af8u: goto label_293af8;
        case 0x293afcu: goto label_293afc;
        case 0x293b00u: goto label_293b00;
        case 0x293b04u: goto label_293b04;
        case 0x293b08u: goto label_293b08;
        case 0x293b0cu: goto label_293b0c;
        case 0x293b10u: goto label_293b10;
        case 0x293b14u: goto label_293b14;
        case 0x293b18u: goto label_293b18;
        case 0x293b1cu: goto label_293b1c;
        case 0x293b20u: goto label_293b20;
        case 0x293b24u: goto label_293b24;
        case 0x293b28u: goto label_293b28;
        case 0x293b2cu: goto label_293b2c;
        case 0x293b30u: goto label_293b30;
        case 0x293b34u: goto label_293b34;
        case 0x293b38u: goto label_293b38;
        case 0x293b3cu: goto label_293b3c;
        case 0x293b40u: goto label_293b40;
        case 0x293b44u: goto label_293b44;
        case 0x293b48u: goto label_293b48;
        case 0x293b4cu: goto label_293b4c;
        case 0x293b50u: goto label_293b50;
        case 0x293b54u: goto label_293b54;
        case 0x293b58u: goto label_293b58;
        case 0x293b5cu: goto label_293b5c;
        case 0x293b60u: goto label_293b60;
        case 0x293b64u: goto label_293b64;
        case 0x293b68u: goto label_293b68;
        case 0x293b6cu: goto label_293b6c;
        case 0x293b70u: goto label_293b70;
        case 0x293b74u: goto label_293b74;
        case 0x293b78u: goto label_293b78;
        case 0x293b7cu: goto label_293b7c;
        case 0x293b80u: goto label_293b80;
        case 0x293b84u: goto label_293b84;
        case 0x293b88u: goto label_293b88;
        case 0x293b8cu: goto label_293b8c;
        case 0x293b90u: goto label_293b90;
        case 0x293b94u: goto label_293b94;
        case 0x293b98u: goto label_293b98;
        case 0x293b9cu: goto label_293b9c;
        case 0x293ba0u: goto label_293ba0;
        case 0x293ba4u: goto label_293ba4;
        case 0x293ba8u: goto label_293ba8;
        case 0x293bacu: goto label_293bac;
        case 0x293bb0u: goto label_293bb0;
        case 0x293bb4u: goto label_293bb4;
        case 0x293bb8u: goto label_293bb8;
        case 0x293bbcu: goto label_293bbc;
        case 0x293bc0u: goto label_293bc0;
        case 0x293bc4u: goto label_293bc4;
        case 0x293bc8u: goto label_293bc8;
        case 0x293bccu: goto label_293bcc;
        case 0x293bd0u: goto label_293bd0;
        case 0x293bd4u: goto label_293bd4;
        case 0x293bd8u: goto label_293bd8;
        case 0x293bdcu: goto label_293bdc;
        case 0x293be0u: goto label_293be0;
        case 0x293be4u: goto label_293be4;
        case 0x293be8u: goto label_293be8;
        case 0x293becu: goto label_293bec;
        case 0x293bf0u: goto label_293bf0;
        case 0x293bf4u: goto label_293bf4;
        case 0x293bf8u: goto label_293bf8;
        case 0x293bfcu: goto label_293bfc;
        case 0x293c00u: goto label_293c00;
        case 0x293c04u: goto label_293c04;
        case 0x293c08u: goto label_293c08;
        case 0x293c0cu: goto label_293c0c;
        case 0x293c10u: goto label_293c10;
        case 0x293c14u: goto label_293c14;
        case 0x293c18u: goto label_293c18;
        case 0x293c1cu: goto label_293c1c;
        case 0x293c20u: goto label_293c20;
        case 0x293c24u: goto label_293c24;
        case 0x293c28u: goto label_293c28;
        case 0x293c2cu: goto label_293c2c;
        case 0x293c30u: goto label_293c30;
        case 0x293c34u: goto label_293c34;
        case 0x293c38u: goto label_293c38;
        case 0x293c3cu: goto label_293c3c;
        case 0x293c40u: goto label_293c40;
        case 0x293c44u: goto label_293c44;
        case 0x293c48u: goto label_293c48;
        case 0x293c4cu: goto label_293c4c;
        case 0x293c50u: goto label_293c50;
        case 0x293c54u: goto label_293c54;
        case 0x293c58u: goto label_293c58;
        case 0x293c5cu: goto label_293c5c;
        case 0x293c60u: goto label_293c60;
        case 0x293c64u: goto label_293c64;
        case 0x293c68u: goto label_293c68;
        case 0x293c6cu: goto label_293c6c;
        case 0x293c70u: goto label_293c70;
        case 0x293c74u: goto label_293c74;
        case 0x293c78u: goto label_293c78;
        case 0x293c7cu: goto label_293c7c;
        case 0x293c80u: goto label_293c80;
        case 0x293c84u: goto label_293c84;
        case 0x293c88u: goto label_293c88;
        case 0x293c8cu: goto label_293c8c;
        case 0x293c90u: goto label_293c90;
        case 0x293c94u: goto label_293c94;
        case 0x293c98u: goto label_293c98;
        case 0x293c9cu: goto label_293c9c;
        case 0x293ca0u: goto label_293ca0;
        case 0x293ca4u: goto label_293ca4;
        case 0x293ca8u: goto label_293ca8;
        case 0x293cacu: goto label_293cac;
        case 0x293cb0u: goto label_293cb0;
        case 0x293cb4u: goto label_293cb4;
        case 0x293cb8u: goto label_293cb8;
        case 0x293cbcu: goto label_293cbc;
        case 0x293cc0u: goto label_293cc0;
        case 0x293cc4u: goto label_293cc4;
        case 0x293cc8u: goto label_293cc8;
        case 0x293cccu: goto label_293ccc;
        case 0x293cd0u: goto label_293cd0;
        case 0x293cd4u: goto label_293cd4;
        case 0x293cd8u: goto label_293cd8;
        case 0x293cdcu: goto label_293cdc;
        case 0x293ce0u: goto label_293ce0;
        case 0x293ce4u: goto label_293ce4;
        case 0x293ce8u: goto label_293ce8;
        case 0x293cecu: goto label_293cec;
        case 0x293cf0u: goto label_293cf0;
        case 0x293cf4u: goto label_293cf4;
        case 0x293cf8u: goto label_293cf8;
        case 0x293cfcu: goto label_293cfc;
        case 0x293d00u: goto label_293d00;
        case 0x293d04u: goto label_293d04;
        case 0x293d08u: goto label_293d08;
        case 0x293d0cu: goto label_293d0c;
        case 0x293d10u: goto label_293d10;
        case 0x293d14u: goto label_293d14;
        case 0x293d18u: goto label_293d18;
        case 0x293d1cu: goto label_293d1c;
        case 0x293d20u: goto label_293d20;
        case 0x293d24u: goto label_293d24;
        case 0x293d28u: goto label_293d28;
        case 0x293d2cu: goto label_293d2c;
        case 0x293d30u: goto label_293d30;
        case 0x293d34u: goto label_293d34;
        case 0x293d38u: goto label_293d38;
        case 0x293d3cu: goto label_293d3c;
        case 0x293d40u: goto label_293d40;
        case 0x293d44u: goto label_293d44;
        case 0x293d48u: goto label_293d48;
        case 0x293d4cu: goto label_293d4c;
        case 0x293d50u: goto label_293d50;
        case 0x293d54u: goto label_293d54;
        case 0x293d58u: goto label_293d58;
        case 0x293d5cu: goto label_293d5c;
        case 0x293d60u: goto label_293d60;
        case 0x293d64u: goto label_293d64;
        case 0x293d68u: goto label_293d68;
        case 0x293d6cu: goto label_293d6c;
        case 0x293d70u: goto label_293d70;
        case 0x293d74u: goto label_293d74;
        case 0x293d78u: goto label_293d78;
        case 0x293d7cu: goto label_293d7c;
        case 0x293d80u: goto label_293d80;
        case 0x293d84u: goto label_293d84;
        case 0x293d88u: goto label_293d88;
        case 0x293d8cu: goto label_293d8c;
        case 0x293d90u: goto label_293d90;
        case 0x293d94u: goto label_293d94;
        case 0x293d98u: goto label_293d98;
        case 0x293d9cu: goto label_293d9c;
        case 0x293da0u: goto label_293da0;
        case 0x293da4u: goto label_293da4;
        case 0x293da8u: goto label_293da8;
        case 0x293dacu: goto label_293dac;
        case 0x293db0u: goto label_293db0;
        case 0x293db4u: goto label_293db4;
        case 0x293db8u: goto label_293db8;
        case 0x293dbcu: goto label_293dbc;
        case 0x293dc0u: goto label_293dc0;
        case 0x293dc4u: goto label_293dc4;
        case 0x293dc8u: goto label_293dc8;
        case 0x293dccu: goto label_293dcc;
        case 0x293dd0u: goto label_293dd0;
        case 0x293dd4u: goto label_293dd4;
        case 0x293dd8u: goto label_293dd8;
        case 0x293ddcu: goto label_293ddc;
        case 0x293de0u: goto label_293de0;
        case 0x293de4u: goto label_293de4;
        case 0x293de8u: goto label_293de8;
        case 0x293decu: goto label_293dec;
        case 0x293df0u: goto label_293df0;
        case 0x293df4u: goto label_293df4;
        case 0x293df8u: goto label_293df8;
        case 0x293dfcu: goto label_293dfc;
        case 0x293e00u: goto label_293e00;
        case 0x293e04u: goto label_293e04;
        case 0x293e08u: goto label_293e08;
        case 0x293e0cu: goto label_293e0c;
        case 0x293e10u: goto label_293e10;
        case 0x293e14u: goto label_293e14;
        case 0x293e18u: goto label_293e18;
        case 0x293e1cu: goto label_293e1c;
        case 0x293e20u: goto label_293e20;
        case 0x293e24u: goto label_293e24;
        case 0x293e28u: goto label_293e28;
        case 0x293e2cu: goto label_293e2c;
        case 0x293e30u: goto label_293e30;
        case 0x293e34u: goto label_293e34;
        case 0x293e38u: goto label_293e38;
        case 0x293e3cu: goto label_293e3c;
        case 0x293e40u: goto label_293e40;
        case 0x293e44u: goto label_293e44;
        case 0x293e48u: goto label_293e48;
        case 0x293e4cu: goto label_293e4c;
        case 0x293e50u: goto label_293e50;
        case 0x293e54u: goto label_293e54;
        case 0x293e58u: goto label_293e58;
        case 0x293e5cu: goto label_293e5c;
        case 0x293e60u: goto label_293e60;
        case 0x293e64u: goto label_293e64;
        case 0x293e68u: goto label_293e68;
        case 0x293e6cu: goto label_293e6c;
        case 0x293e70u: goto label_293e70;
        case 0x293e74u: goto label_293e74;
        case 0x293e78u: goto label_293e78;
        case 0x293e7cu: goto label_293e7c;
        case 0x293e80u: goto label_293e80;
        case 0x293e84u: goto label_293e84;
        case 0x293e88u: goto label_293e88;
        case 0x293e8cu: goto label_293e8c;
        case 0x293e90u: goto label_293e90;
        case 0x293e94u: goto label_293e94;
        case 0x293e98u: goto label_293e98;
        case 0x293e9cu: goto label_293e9c;
        case 0x293ea0u: goto label_293ea0;
        case 0x293ea4u: goto label_293ea4;
        case 0x293ea8u: goto label_293ea8;
        case 0x293eacu: goto label_293eac;
        case 0x293eb0u: goto label_293eb0;
        case 0x293eb4u: goto label_293eb4;
        case 0x293eb8u: goto label_293eb8;
        case 0x293ebcu: goto label_293ebc;
        default: return;
    }

label_2936f0:
    // 0x2936f0: 0xb113  .word       0x0000B113                   # mtlo        $zero # 0000B100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2936f0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2936f4:
    // 0x2936f4: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2936f4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2936F4 raw=0x00000005");
 /* MITIGATED */
label_2936f8:
    // 0x2936f8: 0x2120  .word       0x00002120                   # add         $a0, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2936f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_2936fc:
    // 0x2936fc: 0x0  nop
    ctx->pc = 0x2936fcu;
    // NOP
label_293700:
    // 0x293700: 0xb118  .word       0x0000B118                   # mult        $s6, $zero, $zero # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x293700u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_293704:
    // 0x293704: 0x172  tlt         $zero, $zero, 5
    ctx->pc = 0x293704u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_293708:
    // 0x293708: 0xb8f90  .word       0x000B8F90                   # mfhi        $s1 # 000B0780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293708u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_29370c:
    // 0x29370c: 0x0  nop
    ctx->pc = 0x29370cu;
    // NOP
label_293710:
    // 0x293710: 0xb28a  .word       0x0000B28A                   # movz        $s6, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293710u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_293714:
    // 0x293714: 0x114  .word       0x00000114                   # dsllv       $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293714u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_293718:
    // 0x293718: 0x89a30  tge         $zero, $t0, 616
    ctx->pc = 0x293718u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_29371c:
    // 0x29371c: 0x0  nop
    ctx->pc = 0x29371cu;
    // NOP
label_293720:
    // 0x293720: 0xb39e  .word       0x0000B39E                   # ddiv        $s6, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293720u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x293720 raw=0x0000B39E");
 /* MITIGATED */
label_293724:
    // 0x293724: 0x11f  .word       0x0000011F                   # ddivu       $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293724u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x293724 raw=0x0000011F");
 /* MITIGATED */
label_293728:
    // 0x293728: 0x8f1ac  .word       0x0008F1AC                   # dadd        $fp, $zero, $t0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293728u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 8); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 30, r); }
label_29372c:
    // 0x29372c: 0x0  nop
    ctx->pc = 0x29372cu;
    // NOP
label_293730:
    // 0x293730: 0xb4bd  .word       0x0000B4BD                   # INVALID     $zero, $zero, -0x4B43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293730u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x293730 raw=0x0000B4BD");
 /* MITIGATED */
label_293734:
    // 0x293734: 0x19c  .word       0x0000019C                   # dmult       $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293734u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x293734 raw=0x0000019C");
 /* MITIGATED */
label_293738:
    // 0x293738: 0xcde40  sll         $k1, $t4, 25
    ctx->pc = 0x293738u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 12), 25));
label_29373c:
    // 0x29373c: 0x0  nop
    ctx->pc = 0x29373cu;
    // NOP
label_293740:
    // 0x293740: 0xb659  .word       0x0000B659                   # multu       $zero, $zero # 0000B640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293740u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_293744:
    // 0x293744: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293744u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293744 raw=0x00000001");
 /* MITIGATED */
label_293748:
    // 0x293748: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293748u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29374c:
    // 0x29374c: 0x0  nop
    ctx->pc = 0x29374cu;
    // NOP
label_293750:
    // 0x293750: 0xb65a  .word       0x0000B65A                   # div         $s6, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293750u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_293754:
    // 0x293754: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293754u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293754 raw=0x00000001");
 /* MITIGATED */
label_293758:
    // 0x293758: 0x4c  syscall     1
    ctx->pc = 0x293758u;
    ctx->pc = 0x29375Cu;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_29375c:
    // 0x29375c: 0x0  nop
    ctx->pc = 0x29375cu;
    // NOP
label_293760:
    // 0x293760: 0xb65b  .word       0x0000B65B                   # divu        $s6, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293760u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_293764:
    // 0x293764: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293764u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293764 raw=0x00000001");
 /* MITIGATED */
label_293768:
    // 0x293768: 0x2e0  .word       0x000002E0                   # add         $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293768u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29376c:
    // 0x29376c: 0x0  nop
    ctx->pc = 0x29376cu;
    // NOP
label_293770:
    // 0x293770: 0xb65c  .word       0x0000B65C                   # dmult       $zero, $zero # 0000B640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293770u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x293770 raw=0x0000B65C");
 /* MITIGATED */
label_293774:
    // 0x293774: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293774u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293774 raw=0x00000001");
 /* MITIGATED */
label_293778:
    // 0x293778: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x293778u;
    
label_29377c:
    // 0x29377c: 0x0  nop
    ctx->pc = 0x29377cu;
    // NOP
label_293780:
    // 0x293780: 0xb65d  .word       0x0000B65D                   # dmultu      $zero, $zero # 0000B640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293780u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x293780 raw=0x0000B65D");
 /* MITIGATED */
label_293784:
    // 0x293784: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x293784u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_293788:
    // 0x293788: 0x10460  .word       0x00010460                   # add         $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293788u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29378c:
    // 0x29378c: 0x0  nop
    ctx->pc = 0x29378cu;
    // NOP
label_293790:
    // 0x293790: 0xb67e  dsrl32      $s6, $zero, 25
    ctx->pc = 0x293790u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) >> (32 + 25));
label_293794:
    // 0x293794: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x293794u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_293798:
    // 0x293798: 0xae00  sll         $s5, $zero, 24
    ctx->pc = 0x293798u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_29379c:
    // 0x29379c: 0x0  nop
    ctx->pc = 0x29379cu;
    // NOP
label_2937a0:
    // 0x2937a0: 0xb694  .word       0x0000B694                   # dsllv       $s6, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2937a0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2937a4:
    // 0x2937a4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2937a4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2937a8:
    // 0x2937a8: 0x878  dsll        $at, $zero, 1
    ctx->pc = 0x2937a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 1);
label_2937ac:
    // 0x2937ac: 0x0  nop
    ctx->pc = 0x2937acu;
    // NOP
label_2937b0:
    // 0x2937b0: 0xb696  .word       0x0000B696                   # dsrlv       $s6, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2937b0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2937b4:
    // 0x2937b4: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2937b4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2937b8:
    // 0x2937b8: 0x32320  .word       0x00032320                   # add         $a0, $zero, $v1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2937b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_2937bc:
    // 0x2937bc: 0x0  nop
    ctx->pc = 0x2937bcu;
    // NOP
label_2937c0:
    // 0x2937c0: 0xb6fb  dsra        $s6, $zero, 27
    ctx->pc = 0x2937c0u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 0) >> 27);
label_2937c4:
    // 0x2937c4: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x2937c4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2937C4 raw=0x0000001F");
 /* MITIGATED */
label_2937c8:
    // 0x2937c8: 0xf1b0  tge         $zero, $zero, 966
    ctx->pc = 0x2937c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2937cc:
    // 0x2937cc: 0x0  nop
    ctx->pc = 0x2937ccu;
    // NOP
label_2937d0:
    // 0x2937d0: 0xb71a  .word       0x0000B71A                   # div         $s6, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2937d0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2937d4:
    // 0x2937d4: 0x27  not         $zero, $zero
    ctx->pc = 0x2937d4u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2937d8:
    // 0x2937d8: 0x137c0  sll         $a2, $at, 31
    ctx->pc = 0x2937d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 31));
label_2937dc:
    // 0x2937dc: 0x0  nop
    ctx->pc = 0x2937dcu;
    // NOP
label_2937e0:
    // 0x2937e0: 0xb741  .word       0x0000B741                   # INVALID     $zero, $zero, -0x48BF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2937e0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2937E0 raw=0x0000B741");
 /* MITIGATED */
label_2937e4:
    // 0x2937e4: 0x70  tge         $zero, $zero, 1
    ctx->pc = 0x2937e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2937e8:
    // 0x2937e8: 0x37ae0  .word       0x00037AE0                   # add         $t7, $zero, $v1 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2937e8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2937ec:
    // 0x2937ec: 0x0  nop
    ctx->pc = 0x2937ecu;
    // NOP
label_2937f0:
    // 0x2937f0: 0xb7b1  tgeu        $zero, $zero, 734
    ctx->pc = 0x2937f0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2937f4:
    // 0x2937f4: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x2937f4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_2937f8:
    // 0x2937f8: 0x21030  tge         $zero, $v0, 64
    ctx->pc = 0x2937f8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_2937fc:
    // 0x2937fc: 0x0  nop
    ctx->pc = 0x2937fcu;
    // NOP
label_293800:
    // 0x293800: 0xb7f4  teq         $zero, $zero, 735
    ctx->pc = 0x293800u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_293804:
    // 0x293804: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x293804u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293808:
    // 0x293808: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x293808u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29380c:
    // 0x29380c: 0x0  nop
    ctx->pc = 0x29380cu;
    // NOP
label_293810:
    // 0x293810: 0xb7f8  dsll        $s6, $zero, 31
    ctx->pc = 0x293810u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << 31);
label_293814:
    // 0x293814: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293814u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293814 raw=0x00000001");
 /* MITIGATED */
label_293818:
    // 0x293818: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x293818u;
    
label_29381c:
    // 0x29381c: 0x0  nop
    ctx->pc = 0x29381cu;
    // NOP
label_293820:
    // 0x293820: 0xb7f9  .word       0x0000B7F9                   # INVALID     $zero, $zero, -0x4807 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293820u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x293820 raw=0x0000B7F9");
 /* MITIGATED */
label_293824:
    // 0x293824: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293824u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x293824 raw=0x00000005");
 /* MITIGATED */
label_293828:
    // 0x293828: 0x2800  sll         $a1, $zero, 0
    ctx->pc = 0x293828u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29382c:
    // 0x29382c: 0x0  nop
    ctx->pc = 0x29382cu;
    // NOP
label_293830:
    // 0x293830: 0xb7fe  dsrl32      $s6, $zero, 31
    ctx->pc = 0x293830u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) >> (32 + 31));
label_293834:
    // 0x293834: 0x186  .word       0x00000186                   # srlv        $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293834u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293838:
    // 0x293838: 0xc2d00  sll         $a1, $t4, 20
    ctx->pc = 0x293838u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 12), 20));
label_29383c:
    // 0x29383c: 0x0  nop
    ctx->pc = 0x29383cu;
    // NOP
label_293840:
    // 0x293840: 0xb984  .word       0x0000B984                   # sllv        $s7, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293840u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293844:
    // 0x293844: 0x14c  syscall     5
    ctx->pc = 0x293844u;
    ctx->pc = 0x293848u;
runtime->handleSyscall(rdram, ctx, 0x5u);
label_293848:
    // 0x293848: 0xa5850  .word       0x000A5850                   # mfhi        $t3 # 000A0040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293848u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_29384c:
    // 0x29384c: 0x0  nop
    ctx->pc = 0x29384cu;
    // NOP
label_293850:
    // 0x293850: 0xbad0  .word       0x0000BAD0                   # mfhi        $s7 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293850u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_293854:
    // 0x293854: 0xa9  .word       0x000000A9                   # mtsa        $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x293854u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_293858:
    // 0x293858: 0x54374  teq         $zero, $a1, 269
    ctx->pc = 0x293858u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
label_29385c:
    // 0x29385c: 0x0  nop
    ctx->pc = 0x29385cu;
    // NOP
label_293860:
    // 0x293860: 0xbb79  .word       0x0000BB79                   # INVALID     $zero, $zero, -0x4487 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293860u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x293860 raw=0x0000BB79");
 /* MITIGATED */
label_293864:
    // 0x293864: 0xd5  .word       0x000000D5                   # INVALID     $zero, $zero, 0xD5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293864u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x293864 raw=0x000000D5");
 /* MITIGATED */
label_293868:
    // 0x293868: 0x6a538  dsll        $s4, $a2, 20
    ctx->pc = 0x293868u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) << 20);
label_29386c:
    // 0x29386c: 0x0  nop
    ctx->pc = 0x29386cu;
    // NOP
label_293870:
    // 0x293870: 0xbc4e  .word       0x0000BC4E                   # INVALID     $zero, $zero, -0x43B2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293870u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x293870 raw=0x0000BC4E");
 /* MITIGATED */
label_293874:
    // 0x293874: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293874u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293874 raw=0x00000001");
 /* MITIGATED */
label_293878:
    // 0x293878: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x293878u;
    
label_29387c:
    // 0x29387c: 0x0  nop
    ctx->pc = 0x29387cu;
    // NOP
label_293880:
    // 0x293880: 0xbc4f  .word       0x0000BC4F                   # sync.p # 0000B800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293880u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_293884:
    // 0x293884: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293884u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293884 raw=0x00000001");
 /* MITIGATED */
label_293888:
    // 0x293888: 0x4c  syscall     1
    ctx->pc = 0x293888u;
    ctx->pc = 0x29388Cu;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_29388c:
    // 0x29388c: 0x0  nop
    ctx->pc = 0x29388cu;
    // NOP
label_293890:
    // 0x293890: 0xbc50  .word       0x0000BC50                   # mfhi        $s7 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293890u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_293894:
    // 0x293894: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293894u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293894 raw=0x00000001");
 /* MITIGATED */
label_293898:
    // 0x293898: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x293898u;
    
label_29389c:
    // 0x29389c: 0x0  nop
    ctx->pc = 0x29389cu;
    // NOP
label_2938a0:
    // 0x2938a0: 0xbc51  .word       0x0000BC51                   # mthi        $zero # 0000BC40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2938a0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2938a4:
    // 0x2938a4: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x2938a4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2938a8:
    // 0x2938a8: 0x10460  .word       0x00010460                   # add         $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2938a8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2938ac:
    // 0x2938ac: 0x0  nop
    ctx->pc = 0x2938acu;
    // NOP
label_2938b0:
    // 0x2938b0: 0xbc72  tlt         $zero, $zero, 753
    ctx->pc = 0x2938b0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2938b4:
    // 0x2938b4: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x2938b4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2938b8:
    // 0x2938b8: 0x10320  .word       0x00010320                   # add         $zero, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2938b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2938bc:
    // 0x2938bc: 0x0  nop
    ctx->pc = 0x2938bcu;
    // NOP
label_2938c0:
    // 0x2938c0: 0xbc93  .word       0x0000BC93                   # mtlo        $zero # 0000BC80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2938c0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2938c4:
    // 0x2938c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2938c4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2938C4 raw=0x00000001");
 /* MITIGATED */
label_2938c8:
    // 0x2938c8: 0x700  sll         $zero, $zero, 28
    ctx->pc = 0x2938c8u;
    
label_2938cc:
    // 0x2938cc: 0x0  nop
    ctx->pc = 0x2938ccu;
    // NOP
label_2938d0:
    // 0x2938d0: 0xbc94  .word       0x0000BC94                   # dsllv       $s7, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2938d0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2938d4:
    // 0x2938d4: 0x63  .word       0x00000063                   # negu        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2938d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2938d8:
    // 0x2938d8: 0x314d0  .word       0x000314D0                   # mfhi        $v0 # 000304C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2938d8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2938dc:
    // 0x2938dc: 0x0  nop
    ctx->pc = 0x2938dcu;
    // NOP
label_2938e0:
    // 0x2938e0: 0xbcf7  .word       0x0000BCF7                   # INVALID     $zero, $zero, -0x4309 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2938e0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2938E0 raw=0x0000BCF7");
 /* MITIGATED */
label_2938e4:
    // 0x2938e4: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x2938e4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2938e8:
    // 0x2938e8: 0x10120  .word       0x00010120                   # add         $zero, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2938e8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2938ec:
    // 0x2938ec: 0x0  nop
    ctx->pc = 0x2938ecu;
    // NOP
label_2938f0:
    // 0x2938f0: 0xbd18  .word       0x0000BD18                   # mult        $s7, $zero, $zero # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2938f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_2938f4:
    // 0x2938f4: 0x34  teq         $zero, $zero, 0
    ctx->pc = 0x2938f4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2938f8:
    // 0x2938f8: 0x19af0  tge         $zero, $at, 619
    ctx->pc = 0x2938f8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2938fc:
    // 0x2938fc: 0x0  nop
    ctx->pc = 0x2938fcu;
    // NOP
label_293900:
    // 0x293900: 0xbd4c  syscall     757
    ctx->pc = 0x293900u;
    ctx->pc = 0x293904u;
runtime->handleSyscall(rdram, ctx, 0x2F5u);
label_293904:
    // 0x293904: 0x137  .word       0x00000137                   # INVALID     $zero, $zero, 0x137 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293904u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x293904 raw=0x00000137");
 /* MITIGATED */
label_293908:
    // 0x293908: 0x9b580  sll         $s6, $t1, 22
    ctx->pc = 0x293908u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 9), 22));
label_29390c:
    // 0x29390c: 0x0  nop
    ctx->pc = 0x29390cu;
    // NOP
label_293910:
    // 0x293910: 0xbe83  sra         $s7, $zero, 26
    ctx->pc = 0x293910u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 0), 26));
label_293914:
    // 0x293914: 0xd6  .word       0x000000D6                   # dsrlv       $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293914u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_293918:
    // 0x293918: 0x6ae10  .word       0x0006AE10                   # mfhi        $s5 # 00060600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293918u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_29391c:
    // 0x29391c: 0x0  nop
    ctx->pc = 0x29391cu;
    // NOP
label_293920:
    // 0x293920: 0xbf59  .word       0x0000BF59                   # multu       $zero, $zero # 0000BF40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293920u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_293924:
    // 0x293924: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x293924u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293928:
    // 0x293928: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x293928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29392c:
    // 0x29392c: 0x0  nop
    ctx->pc = 0x29392cu;
    // NOP
label_293930:
    // 0x293930: 0xbf5d  .word       0x0000BF5D                   # dmultu      $zero, $zero # 0000BF40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293930u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x293930 raw=0x0000BF5D");
 /* MITIGATED */
label_293934:
    // 0x293934: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293934u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293934 raw=0x00000001");
 /* MITIGATED */
label_293938:
    // 0x293938: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x293938u;
    
label_29393c:
    // 0x29393c: 0x0  nop
    ctx->pc = 0x29393cu;
    // NOP
label_293940:
    // 0x293940: 0xbf5e  .word       0x0000BF5E                   # ddiv        $s7, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293940u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x293940 raw=0x0000BF5E");
 /* MITIGATED */
label_293944:
    // 0x293944: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293944u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293944 raw=0x00000001");
 /* MITIGATED */
label_293948:
    // 0x293948: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x293948u;
    
label_29394c:
    // 0x29394c: 0x0  nop
    ctx->pc = 0x29394cu;
    // NOP
label_293950:
    // 0x293950: 0xbf5f  .word       0x0000BF5F                   # ddivu       $s7, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293950u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x293950 raw=0x0000BF5F");
 /* MITIGATED */
label_293954:
    // 0x293954: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x293954u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_293958:
    // 0x293958: 0xe10  .word       0x00000E10                   # mfhi        $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293958u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_29395c:
    // 0x29395c: 0x0  nop
    ctx->pc = 0x29395cu;
    // NOP
label_293960:
    // 0x293960: 0xbf61  .word       0x0000BF61                   # addu        $s7, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293960u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_293964:
    // 0x293964: 0x169  .word       0x00000169                   # mtsa        $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x293964u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_293968:
    // 0x293968: 0xb44f0  tge         $zero, $t3, 275
    ctx->pc = 0x293968u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_29396c:
    // 0x29396c: 0x0  nop
    ctx->pc = 0x29396cu;
    // NOP
label_293970:
    // 0x293970: 0xc0ca  .word       0x0000C0CA                   # movz        $t8, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293970u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 0));
label_293974:
    // 0x293974: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x293974u;
    
label_293978:
    // 0x293978: 0x3ffb0  tge         $zero, $v1, 1022
    ctx->pc = 0x293978u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29397c:
    // 0x29397c: 0x0  nop
    ctx->pc = 0x29397cu;
    // NOP
label_293980:
    // 0x293980: 0xc14a  .word       0x0000C14A                   # movz        $t8, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293980u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 0));
label_293984:
    // 0x293984: 0xee  .word       0x000000EE                   # dsub        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293984u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_293988:
    // 0x293988: 0x76c74  teq         $zero, $a3, 433
    ctx->pc = 0x293988u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_29398c:
    // 0x29398c: 0x0  nop
    ctx->pc = 0x29398cu;
    // NOP
label_293990:
    // 0x293990: 0xc238  dsll        $t8, $zero, 8
    ctx->pc = 0x293990u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) << 8);
label_293994:
    // 0x293994: 0xa2  .word       0x000000A2                   # neg         $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293994u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_293998:
    // 0x293998: 0x508b8  dsll        $at, $a1, 2
    ctx->pc = 0x293998u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 5) << 2);
label_29399c:
    // 0x29399c: 0x0  nop
    ctx->pc = 0x29399cu;
    // NOP
label_2939a0:
    // 0x2939a0: 0xc2da  .word       0x0000C2DA                   # div         $t8, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2939a0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2939a4:
    // 0x2939a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2939a4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2939A4 raw=0x00000001");
 /* MITIGATED */
label_2939a8:
    // 0x2939a8: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2939a8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2939ac:
    // 0x2939ac: 0x0  nop
    ctx->pc = 0x2939acu;
    // NOP
label_2939b0:
    // 0x2939b0: 0xc2db  .word       0x0000C2DB                   # divu        $t8, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2939b0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2939b4:
    // 0x2939b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2939b4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2939B4 raw=0x00000001");
 /* MITIGATED */
label_2939b8:
    // 0x2939b8: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x2939b8u;
    
label_2939bc:
    // 0x2939bc: 0x0  nop
    ctx->pc = 0x2939bcu;
    // NOP
label_2939c0:
    // 0x2939c0: 0xc2dc  .word       0x0000C2DC                   # dmult       $zero, $zero # 0000C2C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2939c0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2939C0 raw=0x0000C2DC");
 /* MITIGATED */
label_2939c4:
    // 0x2939c4: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x2939c4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2939c8:
    // 0x2939c8: 0x10460  .word       0x00010460                   # add         $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2939c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2939cc:
    // 0x2939cc: 0x0  nop
    ctx->pc = 0x2939ccu;
    // NOP
label_2939d0:
    // 0x2939d0: 0xc2fd  .word       0x0000C2FD                   # INVALID     $zero, $zero, -0x3D03 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2939d0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2939D0 raw=0x0000C2FD");
 /* MITIGATED */
label_2939d4:
    // 0x2939d4: 0xf  sync
    ctx->pc = 0x2939d4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2939d8:
    // 0x2939d8: 0x77f0  tge         $zero, $zero, 479
    ctx->pc = 0x2939d8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2939dc:
    // 0x2939dc: 0x0  nop
    ctx->pc = 0x2939dcu;
    // NOP
label_2939e0:
    // 0x2939e0: 0xc30c  syscall     780
    ctx->pc = 0x2939e0u;
    ctx->pc = 0x2939E4u;
runtime->handleSyscall(rdram, ctx, 0x30Cu);
label_2939e4:
    // 0x2939e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2939e4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2939E4 raw=0x00000001");
 /* MITIGATED */
label_2939e8:
    // 0x2939e8: 0x5b0  tge         $zero, $zero, 22
    ctx->pc = 0x2939e8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2939ec:
    // 0x2939ec: 0x0  nop
    ctx->pc = 0x2939ecu;
    // NOP
label_2939f0:
    // 0x2939f0: 0xc30d  break       0, 780
    ctx->pc = 0x2939f0u;
    runtime->handleBreak(rdram, ctx);
label_2939f4:
    // 0x2939f4: 0xa2  .word       0x000000A2                   # neg         $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2939f4u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_2939f8:
    // 0x2939f8: 0x50a30  tge         $zero, $a1, 40
    ctx->pc = 0x2939f8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
label_2939fc:
    // 0x2939fc: 0x0  nop
    ctx->pc = 0x2939fcu;
    // NOP
label_293a00:
    // 0x293a00: 0xc3af  .word       0x0000C3AF                   # dsubu       $t8, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293a00u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_293a04:
    // 0x293a04: 0x48  .word       0x00000048                   # jr          $zero # 00000040 <InstrIdType: CPU_SPECIAL>
label_293a08:
    if (ctx->pc == 0x293A08u) {
        ctx->pc = 0x293A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293A04u;
        // 0x293a08: 0x23e20  .word       0x00023E20                   # add         $a3, $zero, $v0 # 00000600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x293A0Cu;
        goto label_293a0c;
    }
    ctx->pc = 0x293A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x293A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293A04u;
        // 0x293a08: 0x23e20  .word       0x00023E20                   # add         $a3, $zero, $v0 # 00000600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293A04u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x293A0Cu;
label_293a0c:
    // 0x293a0c: 0x0  nop
    ctx->pc = 0x293a0cu;
    // NOP
label_293a10:
    // 0x293a10: 0xc3f7  .word       0x0000C3F7                   # INVALID     $zero, $zero, -0x3C09 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293a10u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x293A10 raw=0x0000C3F7");
 /* MITIGATED */
label_293a14:
    // 0x293a14: 0x19  multu       $zero, $zero
    ctx->pc = 0x293a14u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_293a18:
    // 0x293a18: 0xc2f0  tge         $zero, $zero, 779
    ctx->pc = 0x293a18u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_293a1c:
    // 0x293a1c: 0x0  nop
    ctx->pc = 0x293a1cu;
    // NOP
label_293a20:
    // 0x293a20: 0xc410  .word       0x0000C410                   # mfhi        $t8 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293a20u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_293a24:
    // 0x293a24: 0x36  tne         $zero, $zero, 0
    ctx->pc = 0x293a24u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_293a28:
    // 0x293a28: 0x1ac60  .word       0x0001AC60                   # add         $s5, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293a28u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_293a2c:
    // 0x293a2c: 0x0  nop
    ctx->pc = 0x293a2cu;
    // NOP
label_293a30:
    // 0x293a30: 0xc446  .word       0x0000C446                   # srlv        $t8, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293a30u;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293a34:
    // 0x293a34: 0x7e  dsrl32      $zero, $zero, 1
    ctx->pc = 0x293a34u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 1));
label_293a38:
    // 0x293a38: 0x3ee48  .word       0x0003EE48                   # jr          $zero # 0003EE40 <InstrIdType: CPU_SPECIAL>
label_293a3c:
    if (ctx->pc == 0x293A3Cu) {
        ctx->pc = 0x293A40u;
        goto label_293a40;
    }
    ctx->pc = 0x293A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293A38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x293A40u;
label_293a40:
    // 0x293a40: 0xc4c4  .word       0x0000C4C4                   # sllv        $t8, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293a40u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293a44:
    // 0x293a44: 0x56  .word       0x00000056                   # dsrlv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293a44u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_293a48:
    // 0x293a48: 0x2a950  .word       0x0002A950                   # mfhi        $s5 # 00020140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293a48u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_293a4c:
    // 0x293a4c: 0x0  nop
    ctx->pc = 0x293a4cu;
    // NOP
label_293a50:
    // 0x293a50: 0xc51a  .word       0x0000C51A                   # div         $t8, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293a50u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_293a54:
    // 0x293a54: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x293a54u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293a58:
    // 0x293a58: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x293a58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_293a5c:
    // 0x293a5c: 0x0  nop
    ctx->pc = 0x293a5cu;
    // NOP
label_293a60:
    // 0x293a60: 0xc51e  .word       0x0000C51E                   # ddiv        $t8, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293a60u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x293A60 raw=0x0000C51E");
 /* MITIGATED */
label_293a64:
    // 0x293a64: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293a64u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293A64 raw=0x00000001");
 /* MITIGATED */
label_293a68:
    // 0x293a68: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x293a68u;
    
label_293a6c:
    // 0x293a6c: 0x0  nop
    ctx->pc = 0x293a6cu;
    // NOP
label_293a70:
    // 0x293a70: 0xc51f  .word       0x0000C51F                   # ddivu       $t8, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293a70u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x293A70 raw=0x0000C51F");
 /* MITIGATED */
label_293a74:
    // 0x293a74: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293a74u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x293A74 raw=0x00000005");
 /* MITIGATED */
label_293a78:
    // 0x293a78: 0x24d0  .word       0x000024D0                   # mfhi        $a0 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293a78u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_293a7c:
    // 0x293a7c: 0x0  nop
    ctx->pc = 0x293a7cu;
    // NOP
label_293a80:
    // 0x293a80: 0xc524  .word       0x0000C524                   # and         $t8, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293a80u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_293a84:
    // 0x293a84: 0x36  tne         $zero, $zero, 0
    ctx->pc = 0x293a84u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_293a88:
    // 0x293a88: 0x1ab00  sll         $s5, $at, 12
    ctx->pc = 0x293a88u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 1), 12));
label_293a8c:
    // 0x293a8c: 0x0  nop
    ctx->pc = 0x293a8cu;
    // NOP
label_293a90:
    // 0x293a90: 0xc55a  .word       0x0000C55A                   # div         $t8, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293a90u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_293a94:
    // 0x293a94: 0x8a  .word       0x0000008A                   # movz        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293a94u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_293a98:
    // 0x293a98: 0x44804  sllv        $t1, $a0, $zero
    ctx->pc = 0x293a98u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 0) & 0x1F));
label_293a9c:
    // 0x293a9c: 0x0  nop
    ctx->pc = 0x293a9cu;
    // NOP
label_293aa0:
    // 0x293aa0: 0xc5e4  .word       0x0000C5E4                   # and         $t8, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293aa0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_293aa4:
    // 0x293aa4: 0x5f  .word       0x0000005F                   # ddivu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293aa4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x293AA4 raw=0x0000005F");
 /* MITIGATED */
label_293aa8:
    // 0x293aa8: 0x2f270  tge         $zero, $v0, 969
    ctx->pc = 0x293aa8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_293aac:
    // 0x293aac: 0x0  nop
    ctx->pc = 0x293aacu;
    // NOP
label_293ab0:
    // 0x293ab0: 0xc643  sra         $t8, $zero, 25
    ctx->pc = 0x293ab0u;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 0), 25));
label_293ab4:
    // 0x293ab4: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293ab4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x293AB4 raw=0x00000005");
 /* MITIGATED */
label_293ab8:
    // 0x293ab8: 0x26c0  sll         $a0, $zero, 27
    ctx->pc = 0x293ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_293abc:
    // 0x293abc: 0x0  nop
    ctx->pc = 0x293abcu;
    // NOP
label_293ac0:
    // 0x293ac0: 0xc648  .word       0x0000C648                   # jr          $zero # 0000C640 <InstrIdType: CPU_SPECIAL>
label_293ac4:
    if (ctx->pc == 0x293AC4u) {
        ctx->pc = 0x293AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293AC0u;
        // 0x293ac4: 0x18b  .word       0x0000018B                   # movn        $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293AC8u;
        goto label_293ac8;
    }
    ctx->pc = 0x293AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x293AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293AC0u;
        // 0x293ac4: 0x18b  .word       0x0000018B                   # movn        $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293AC0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x293AC8u;
label_293ac8:
    // 0x293ac8: 0xc5790  .word       0x000C5790                   # mfhi        $t2 # 000C0780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293ac8u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_293acc:
    // 0x293acc: 0x0  nop
    ctx->pc = 0x293accu;
    // NOP
label_293ad0:
    // 0x293ad0: 0xc7d3  .word       0x0000C7D3                   # mtlo        $zero # 0000C7C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293ad0u;
    ctx->lo = GPR_U64(ctx, 0);
label_293ad4:
    // 0x293ad4: 0x1c0  sll         $zero, $zero, 7
    ctx->pc = 0x293ad4u;
    
label_293ad8:
    // 0x293ad8: 0xdfd10  .word       0x000DFD10                   # mfhi        $ra # 000D0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293ad8u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_293adc:
    // 0x293adc: 0x0  nop
    ctx->pc = 0x293adcu;
    // NOP
label_293ae0:
    // 0x293ae0: 0xc993  .word       0x0000C993                   # mtlo        $zero # 0000C980 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293ae0u;
    ctx->lo = GPR_U64(ctx, 0);
label_293ae4:
    // 0x293ae4: 0x1ac  .word       0x000001AC                   # dadd        $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293ae4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_293ae8:
    // 0x293ae8: 0xd5e24  .word       0x000D5E24                   # and         $t3, $zero, $t5 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293ae8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & GPR_U64(ctx, 13));
label_293aec:
    // 0x293aec: 0x0  nop
    ctx->pc = 0x293aecu;
    // NOP
label_293af0:
    // 0x293af0: 0xcb3f  dsra32      $t9, $zero, 12
    ctx->pc = 0x293af0u;
    SET_GPR_S64(ctx, 25, GPR_S64(ctx, 0) >> (32 + 12));
label_293af4:
    // 0x293af4: 0x305  .word       0x00000305                   # INVALID     $zero, $zero, 0x305 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293af4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x293AF4 raw=0x00000305");
 /* MITIGATED */
label_293af8:
    // 0x293af8: 0x182590  .word       0x00182590                   # mfhi        $a0 # 00180580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293af8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_293afc:
    // 0x293afc: 0x0  nop
    ctx->pc = 0x293afcu;
    // NOP
label_293b00:
    // 0x293b00: 0xce44  .word       0x0000CE44                   # sllv        $t9, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293b00u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293b04:
    // 0x293b04: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293b04u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293B04 raw=0x00000001");
 /* MITIGATED */
label_293b08:
    // 0x293b08: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x293b08u;
    
label_293b0c:
    // 0x293b0c: 0x0  nop
    ctx->pc = 0x293b0cu;
    // NOP
label_293b10:
    // 0x293b10: 0xce45  .word       0x0000CE45                   # INVALID     $zero, $zero, -0x31BB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293b10u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x293B10 raw=0x0000CE45");
 /* MITIGATED */
label_293b14:
    // 0x293b14: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293b14u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293B14 raw=0x00000001");
 /* MITIGATED */
label_293b18:
    // 0x293b18: 0x4c  syscall     1
    ctx->pc = 0x293b18u;
    ctx->pc = 0x293B1Cu;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_293b1c:
    // 0x293b1c: 0x0  nop
    ctx->pc = 0x293b1cu;
    // NOP
label_293b20:
    // 0x293b20: 0xce46  .word       0x0000CE46                   # srlv        $t9, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293b20u;
    SET_GPR_S32(ctx, 25, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293b24:
    // 0x293b24: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293b24u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293B24 raw=0x00000001");
 /* MITIGATED */
label_293b28:
    // 0x293b28: 0x190  .word       0x00000190                   # mfhi        $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293b28u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_293b2c:
    // 0x293b2c: 0x0  nop
    ctx->pc = 0x293b2cu;
    // NOP
label_293b30:
    // 0x293b30: 0xce47  .word       0x0000CE47                   # srav        $t9, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293b30u;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293b34:
    // 0x293b34: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x293b34u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_293b38:
    // 0x293b38: 0x10460  .word       0x00010460                   # add         $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293b38u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_293b3c:
    // 0x293b3c: 0x0  nop
    ctx->pc = 0x293b3cu;
    // NOP
label_293b40:
    // 0x293b40: 0xce68  .word       0x0000CE68                   # mfsa        $t9 # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x293b40u;
    SET_GPR_U32(ctx, 25, ctx->sa);
label_293b44:
    // 0x293b44: 0x39  .word       0x00000039                   # INVALID     $zero, $zero, 0x39 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293b44u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x293B44 raw=0x00000039");
 /* MITIGATED */
label_293b48:
    // 0x293b48: 0x1c300  sll         $t8, $at, 12
    ctx->pc = 0x293b48u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 1), 12));
label_293b4c:
    // 0x293b4c: 0x0  nop
    ctx->pc = 0x293b4cu;
    // NOP
label_293b50:
    // 0x293b50: 0xcea1  .word       0x0000CEA1                   # addu        $t9, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293b50u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_293b54:
    // 0x293b54: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x293b54u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_293b58:
    // 0x293b58: 0x1398  .word       0x00001398                   # mult        $v0, $zero, $zero # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x293b58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_293b5c:
    // 0x293b5c: 0x0  nop
    ctx->pc = 0x293b5cu;
    // NOP
label_293b60:
    // 0x293b60: 0xcea4  .word       0x0000CEA4                   # and         $t9, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293b60u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_293b64:
    // 0x293b64: 0xf9  .word       0x000000F9                   # INVALID     $zero, $zero, 0xF9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293b64u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x293B64 raw=0x000000F9");
 /* MITIGATED */
label_293b68:
    // 0x293b68: 0x7c050  .word       0x0007C050                   # mfhi        $t8 # 00070040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293b68u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_293b6c:
    // 0x293b6c: 0x0  nop
    ctx->pc = 0x293b6cu;
    // NOP
label_293b70:
    // 0x293b70: 0xcf9d  .word       0x0000CF9D                   # dmultu      $zero, $zero # 0000CF80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293b70u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x293B70 raw=0x0000CF9D");
 /* MITIGATED */
label_293b74:
    // 0x293b74: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x293b74u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293b78:
    // 0x293b78: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x293b78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_293b7c:
    // 0x293b7c: 0x0  nop
    ctx->pc = 0x293b7cu;
    // NOP
label_293b80:
    // 0x293b80: 0xcfa1  .word       0x0000CFA1                   # addu        $t9, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293b80u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_293b84:
    // 0x293b84: 0x5c  .word       0x0000005C                   # dmult       $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293b84u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x293B84 raw=0x0000005C");
 /* MITIGATED */
label_293b88:
    // 0x293b88: 0x2dea0  .word       0x0002DEA0                   # add         $k1, $zero, $v0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293b88u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_293b8c:
    // 0x293b8c: 0x0  nop
    ctx->pc = 0x293b8cu;
    // NOP
label_293b90:
    // 0x293b90: 0xcffd  .word       0x0000CFFD                   # INVALID     $zero, $zero, -0x3003 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293b90u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x293B90 raw=0x0000CFFD");
 /* MITIGATED */
label_293b94:
    // 0x293b94: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293b94u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293B94 raw=0x00000001");
 /* MITIGATED */
label_293b98:
    // 0x293b98: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x293b98u;
    
label_293b9c:
    // 0x293b9c: 0x0  nop
    ctx->pc = 0x293b9cu;
    // NOP
label_293ba0:
    // 0x293ba0: 0xcffe  dsrl32      $t9, $zero, 31
    ctx->pc = 0x293ba0u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) >> (32 + 31));
label_293ba4:
    // 0x293ba4: 0x123  .word       0x00000123                   # negu        $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293ba4u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_293ba8:
    // 0x293ba8: 0x91030  tge         $zero, $t1, 64
    ctx->pc = 0x293ba8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_293bac:
    // 0x293bac: 0x0  nop
    ctx->pc = 0x293bacu;
    // NOP
label_293bb0:
    // 0x293bb0: 0xd121  .word       0x0000D121                   # addu        $k0, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293bb0u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_293bb4:
    // 0x293bb4: 0x8f  sync
    ctx->pc = 0x293bb4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_293bb8:
    // 0x293bb8: 0x47370  tge         $zero, $a0, 461
    ctx->pc = 0x293bb8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_293bbc:
    // 0x293bbc: 0x0  nop
    ctx->pc = 0x293bbcu;
    // NOP
label_293bc0:
    // 0x293bc0: 0xd1b0  tge         $zero, $zero, 838
    ctx->pc = 0x293bc0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_293bc4:
    // 0x293bc4: 0x35  .word       0x00000035                   # INVALID     $zero, $zero, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293bc4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x293BC4 raw=0x00000035");
 /* MITIGATED */
label_293bc8:
    // 0x293bc8: 0x1a1f0  tge         $zero, $at, 647
    ctx->pc = 0x293bc8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_293bcc:
    // 0x293bcc: 0x0  nop
    ctx->pc = 0x293bccu;
    // NOP
label_293bd0:
    // 0x293bd0: 0xd1e5  .word       0x0000D1E5                   # move        $k0, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293bd0u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_293bd4:
    // 0x293bd4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293bd4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293BD4 raw=0x00000001");
 /* MITIGATED */
label_293bd8:
    // 0x293bd8: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x293bd8u;
    
label_293bdc:
    // 0x293bdc: 0x0  nop
    ctx->pc = 0x293bdcu;
    // NOP
label_293be0:
    // 0x293be0: 0xd1e6  .word       0x0000D1E6                   # xor         $k0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293be0u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_293be4:
    // 0x293be4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293be4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293BE4 raw=0x00000001");
 /* MITIGATED */
label_293be8:
    // 0x293be8: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x293be8u;
    
label_293bec:
    // 0x293bec: 0x0  nop
    ctx->pc = 0x293becu;
    // NOP
label_293bf0:
    // 0x293bf0: 0xd1e7  .word       0x0000D1E7                   # not         $k0, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293bf0u;
    SET_GPR_U64(ctx, 26, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_293bf4:
    // 0x293bf4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293bf4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293BF4 raw=0x00000001");
 /* MITIGATED */
label_293bf8:
    // 0x293bf8: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x293bf8u;
    
label_293bfc:
    // 0x293bfc: 0x0  nop
    ctx->pc = 0x293bfcu;
    // NOP
label_293c00:
    // 0x293c00: 0xd1e8  .word       0x0000D1E8                   # mfsa        $k0 # 000001C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x293c00u;
    SET_GPR_U32(ctx, 26, ctx->sa);
label_293c04:
    // 0x293c04: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293c04u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293C04 raw=0x00000001");
 /* MITIGATED */
label_293c08:
    // 0x293c08: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x293c08u;
    
label_293c0c:
    // 0x293c0c: 0x0  nop
    ctx->pc = 0x293c0cu;
    // NOP
label_293c10:
    // 0x293c10: 0xd1e9  .word       0x0000D1E9                   # mtsa        $zero # 0000D1C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x293c10u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_293c14:
    // 0x293c14: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x293c14u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293c18:
    // 0x293c18: 0x19f0  tge         $zero, $zero, 103
    ctx->pc = 0x293c18u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_293c1c:
    // 0x293c1c: 0x0  nop
    ctx->pc = 0x293c1cu;
    // NOP
label_293c20:
    // 0x293c20: 0xd1ed  .word       0x0000D1ED                   # daddu       $k0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293c20u;
    SET_GPR_U64(ctx, 26, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_293c24:
    // 0x293c24: 0x187  .word       0x00000187                   # srav        $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293c24u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293c28:
    // 0x293c28: 0xc30f0  tge         $zero, $t4, 195
    ctx->pc = 0x293c28u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_293c2c:
    // 0x293c2c: 0x0  nop
    ctx->pc = 0x293c2cu;
    // NOP
label_293c30:
    // 0x293c30: 0xd374  teq         $zero, $zero, 845
    ctx->pc = 0x293c30u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_293c34:
    // 0x293c34: 0x126  .word       0x00000126                   # xor         $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293c34u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_293c38:
    // 0x293c38: 0x92c80  sll         $a1, $t1, 18
    ctx->pc = 0x293c38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 18));
label_293c3c:
    // 0x293c3c: 0x0  nop
    ctx->pc = 0x293c3cu;
    // NOP
label_293c40:
    // 0x293c40: 0xd49a  .word       0x0000D49A                   # div         $k0, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293c40u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_293c44:
    // 0x293c44: 0x137  .word       0x00000137                   # INVALID     $zero, $zero, 0x137 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293c44u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x293C44 raw=0x00000137");
 /* MITIGATED */
label_293c48:
    // 0x293c48: 0x9b744  .word       0x0009B744                   # sllv        $s6, $t1, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293c48u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 0) & 0x1F));
label_293c4c:
    // 0x293c4c: 0x0  nop
    ctx->pc = 0x293c4cu;
    // NOP
label_293c50:
    // 0x293c50: 0xd5d1  .word       0x0000D5D1                   # mthi        $zero # 0000D5C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293c50u;
    ctx->hi = GPR_U64(ctx, 0);
label_293c54:
    // 0x293c54: 0x3db  .word       0x000003DB                   # divu        $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293c54u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_293c58:
    // 0x293c58: 0x1ed640  sll         $k0, $fp, 25
    ctx->pc = 0x293c58u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 30), 25));
label_293c5c:
    // 0x293c5c: 0x0  nop
    ctx->pc = 0x293c5cu;
    // NOP
label_293c60:
    // 0x293c60: 0xd9ac  .word       0x0000D9AC                   # dadd        $k1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293c60u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 27, r); }
label_293c64:
    // 0x293c64: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293c64u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293C64 raw=0x00000001");
 /* MITIGATED */
label_293c68:
    // 0x293c68: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293c68u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_293c6c:
    // 0x293c6c: 0x0  nop
    ctx->pc = 0x293c6cu;
    // NOP
label_293c70:
    // 0x293c70: 0xd9ad  .word       0x0000D9AD                   # daddu       $k1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293c70u;
    SET_GPR_U64(ctx, 27, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_293c74:
    // 0x293c74: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293c74u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293C74 raw=0x00000001");
 /* MITIGATED */
label_293c78:
    // 0x293c78: 0x4c  syscall     1
    ctx->pc = 0x293c78u;
    ctx->pc = 0x293C7Cu;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_293c7c:
    // 0x293c7c: 0x0  nop
    ctx->pc = 0x293c7cu;
    // NOP
label_293c80:
    // 0x293c80: 0xd9ae  .word       0x0000D9AE                   # dsub        $k1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293c80u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 27, r); }
label_293c84:
    // 0x293c84: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293c84u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293C84 raw=0x00000001");
 /* MITIGATED */
label_293c88:
    // 0x293c88: 0x190  .word       0x00000190                   # mfhi        $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293c88u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_293c8c:
    // 0x293c8c: 0x0  nop
    ctx->pc = 0x293c8cu;
    // NOP
label_293c90:
    // 0x293c90: 0xd9af  .word       0x0000D9AF                   # dsubu       $k1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293c90u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_293c94:
    // 0x293c94: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x293c94u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_293c98:
    // 0x293c98: 0x10460  .word       0x00010460                   # add         $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293c98u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_293c9c:
    // 0x293c9c: 0x0  nop
    ctx->pc = 0x293c9cu;
    // NOP
label_293ca0:
    // 0x293ca0: 0xd9d0  .word       0x0000D9D0                   # mfhi        $k1 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293ca0u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_293ca4:
    // 0x293ca4: 0x29  mtsa        $zero
    ctx->pc = 0x293ca4u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_293ca8:
    // 0x293ca8: 0x14240  sll         $t0, $at, 9
    ctx->pc = 0x293ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 1), 9));
label_293cac:
    // 0x293cac: 0x0  nop
    ctx->pc = 0x293cacu;
    // NOP
label_293cb0:
    // 0x293cb0: 0xd9f9  .word       0x0000D9F9                   # INVALID     $zero, $zero, -0x2607 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293cb0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x293CB0 raw=0x0000D9F9");
 /* MITIGATED */
label_293cb4:
    // 0x293cb4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x293cb4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_293cb8:
    // 0x293cb8: 0xdc0  sll         $at, $zero, 23
    ctx->pc = 0x293cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_293cbc:
    // 0x293cbc: 0x0  nop
    ctx->pc = 0x293cbcu;
    // NOP
label_293cc0:
    // 0x293cc0: 0xd9fb  dsra        $k1, $zero, 7
    ctx->pc = 0x293cc0u;
    SET_GPR_S64(ctx, 27, GPR_S64(ctx, 0) >> 7);
label_293cc4:
    // 0x293cc4: 0x141  .word       0x00000141                   # INVALID     $zero, $zero, 0x141 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293cc4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293CC4 raw=0x00000141");
 /* MITIGATED */
label_293cc8:
    // 0x293cc8: 0xa0010  .word       0x000A0010                   # mfhi        $zero # 000A0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293cc8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_293ccc:
    // 0x293ccc: 0x0  nop
    ctx->pc = 0x293cccu;
    // NOP
label_293cd0:
    // 0x293cd0: 0xdb3c  dsll32      $k1, $zero, 12
    ctx->pc = 0x293cd0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) << (32 + 12));
label_293cd4:
    // 0x293cd4: 0x63  .word       0x00000063                   # negu        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293cd4u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_293cd8:
    // 0x293cd8: 0x310d0  .word       0x000310D0                   # mfhi        $v0 # 000300C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293cd8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_293cdc:
    // 0x293cdc: 0x0  nop
    ctx->pc = 0x293cdcu;
    // NOP
label_293ce0:
    // 0x293ce0: 0xdb9f  .word       0x0000DB9F                   # ddivu       $k1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293ce0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x293CE0 raw=0x0000DB9F");
 /* MITIGATED */
label_293ce4:
    // 0x293ce4: 0x4f  sync
    ctx->pc = 0x293ce4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_293ce8:
    // 0x293ce8: 0x27110  .word       0x00027110                   # mfhi        $t6 # 00020100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293ce8u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_293cec:
    // 0x293cec: 0x0  nop
    ctx->pc = 0x293cecu;
    // NOP
label_293cf0:
    // 0x293cf0: 0xdbee  .word       0x0000DBEE                   # dsub        $k1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293cf0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 27, r); }
label_293cf4:
    // 0x293cf4: 0x2c  dadd        $zero, $zero, $zero
    ctx->pc = 0x293cf4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_293cf8:
    // 0x293cf8: 0x15f90  .word       0x00015F90                   # mfhi        $t3 # 00010780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293cf8u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_293cfc:
    // 0x293cfc: 0x0  nop
    ctx->pc = 0x293cfcu;
    // NOP
label_293d00:
    // 0x293d00: 0xdc1a  .word       0x0000DC1A                   # div         $k1, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293d00u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_293d04:
    // 0x293d04: 0x35  .word       0x00000035                   # INVALID     $zero, $zero, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293d04u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x293D04 raw=0x00000035");
 /* MITIGATED */
label_293d08:
    // 0x293d08: 0x1a4e0  .word       0x0001A4E0                   # add         $s4, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293d08u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_293d0c:
    // 0x293d0c: 0x0  nop
    ctx->pc = 0x293d0cu;
    // NOP
label_293d10:
    // 0x293d10: 0xdc4f  .word       0x0000DC4F                   # sync.p # 0000D800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293d10u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_293d14:
    // 0x293d14: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x293d14u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293d18:
    // 0x293d18: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x293d18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_293d1c:
    // 0x293d1c: 0x0  nop
    ctx->pc = 0x293d1cu;
    // NOP
label_293d20:
    // 0x293d20: 0xdc53  .word       0x0000DC53                   # mtlo        $zero # 0000DC40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293d20u;
    ctx->lo = GPR_U64(ctx, 0);
label_293d24:
    // 0x293d24: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293d24u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293D24 raw=0x00000001");
 /* MITIGATED */
label_293d28:
    // 0x293d28: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x293d28u;
    
label_293d2c:
    // 0x293d2c: 0x0  nop
    ctx->pc = 0x293d2cu;
    // NOP
label_293d30:
    // 0x293d30: 0xdc54  .word       0x0000DC54                   # dsllv       $k1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293d30u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_293d34:
    // 0x293d34: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x293d34u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_293d38:
    // 0x293d38: 0x1310  .word       0x00001310                   # mfhi        $v0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293d38u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_293d3c:
    // 0x293d3c: 0x0  nop
    ctx->pc = 0x293d3cu;
    // NOP
label_293d40:
    // 0x293d40: 0xdc57  .word       0x0000DC57                   # dsrav       $k1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293d40u;
    SET_GPR_S64(ctx, 27, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_293d44:
    // 0x293d44: 0x157  .word       0x00000157                   # dsrav       $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293d44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_293d48:
    // 0x293d48: 0xab6d0  .word       0x000AB6D0                   # mfhi        $s6 # 000A06C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293d48u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_293d4c:
    // 0x293d4c: 0x0  nop
    ctx->pc = 0x293d4cu;
    // NOP
label_293d50:
    // 0x293d50: 0xddae  .word       0x0000DDAE                   # dsub        $k1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293d50u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 27, r); }
label_293d54:
    // 0x293d54: 0xd4  .word       0x000000D4                   # dsllv       $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293d54u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_293d58:
    // 0x293d58: 0x69a30  tge         $zero, $a2, 616
    ctx->pc = 0x293d58u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_293d5c:
    // 0x293d5c: 0x0  nop
    ctx->pc = 0x293d5cu;
    // NOP
label_293d60:
    // 0x293d60: 0xde82  srl         $k1, $zero, 26
    ctx->pc = 0x293d60u;
    SET_GPR_S32(ctx, 27, (int32_t)SRL32(GPR_U32(ctx, 0), 26));
label_293d64:
    // 0x293d64: 0x1fb  dsra        $zero, $zero, 7
    ctx->pc = 0x293d64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 7);
label_293d68:
    // 0x293d68: 0xfd1b4  teq         $zero, $t7, 838
    ctx->pc = 0x293d68u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 15)) { runtime->handleTrap(rdram, ctx); }
label_293d6c:
    // 0x293d6c: 0x0  nop
    ctx->pc = 0x293d6cu;
    // NOP
label_293d70:
    // 0x293d70: 0xe07d  .word       0x0000E07D                   # INVALID     $zero, $zero, -0x1F83 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293d70u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x293D70 raw=0x0000E07D");
 /* MITIGATED */
label_293d74:
    // 0x293d74: 0x3b3  tltu        $zero, $zero, 14
    ctx->pc = 0x293d74u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_293d78:
    // 0x293d78: 0x1d94ec  .word       0x001D94EC                   # dadd        $s2, $zero, $sp # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293d78u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 29); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_293d7c:
    // 0x293d7c: 0x0  nop
    ctx->pc = 0x293d7cu;
    // NOP
label_293d80:
    // 0x293d80: 0xe430  tge         $zero, $zero, 912
    ctx->pc = 0x293d80u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_293d84:
    // 0x293d84: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293d84u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293D84 raw=0x00000001");
 /* MITIGATED */
label_293d88:
    // 0x293d88: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293d88u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_293d8c:
    // 0x293d8c: 0x0  nop
    ctx->pc = 0x293d8cu;
    // NOP
label_293d90:
    // 0x293d90: 0xe431  tgeu        $zero, $zero, 912
    ctx->pc = 0x293d90u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_293d94:
    // 0x293d94: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293d94u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293D94 raw=0x00000001");
 /* MITIGATED */
label_293d98:
    // 0x293d98: 0x4c  syscall     1
    ctx->pc = 0x293d98u;
    ctx->pc = 0x293D9Cu;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_293d9c:
    // 0x293d9c: 0x0  nop
    ctx->pc = 0x293d9cu;
    // NOP
label_293da0:
    // 0x293da0: 0xe432  tlt         $zero, $zero, 912
    ctx->pc = 0x293da0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_293da4:
    // 0x293da4: 0x3b3  tltu        $zero, $zero, 14
    ctx->pc = 0x293da4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_293da8:
    // 0x293da8: 0x1d94fc  dsll32      $s2, $sp, 19
    ctx->pc = 0x293da8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 29) << (32 + 19));
label_293dac:
    // 0x293dac: 0x0  nop
    ctx->pc = 0x293dacu;
    // NOP
label_293db0:
    // 0x293db0: 0xe7e5  .word       0x0000E7E5                   # move        $gp, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293db0u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_293db4:
    // 0x293db4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293db4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293DB4 raw=0x00000001");
 /* MITIGATED */
label_293db8:
    // 0x293db8: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x293db8u;
    
label_293dbc:
    // 0x293dbc: 0x0  nop
    ctx->pc = 0x293dbcu;
    // NOP
label_293dc0:
    // 0x293dc0: 0xe7e6  .word       0x0000E7E6                   # xor         $gp, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293dc0u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_293dc4:
    // 0x293dc4: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x293dc4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_293dc8:
    // 0x293dc8: 0x10460  .word       0x00010460                   # add         $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293dc8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_293dcc:
    // 0x293dcc: 0x0  nop
    ctx->pc = 0x293dccu;
    // NOP
label_293dd0:
    // 0x293dd0: 0xe807  srav        $sp, $zero, $zero
    ctx->pc = 0x293dd0u;
    SET_GPR_S32(ctx, 29, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293dd4:
    // 0x293dd4: 0x27  not         $zero, $zero
    ctx->pc = 0x293dd4u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_293dd8:
    // 0x293dd8: 0x132b0  tge         $zero, $at, 202
    ctx->pc = 0x293dd8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_293ddc:
    // 0x293ddc: 0x0  nop
    ctx->pc = 0x293ddcu;
    // NOP
label_293de0:
    // 0x293de0: 0xe82e  dsub        $sp, $zero, $zero
    ctx->pc = 0x293de0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 29, r); }
label_293de4:
    // 0x293de4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x293de4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_293de8:
    // 0x293de8: 0x1178  dsll        $v0, $zero, 5
    ctx->pc = 0x293de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << 5);
label_293dec:
    // 0x293dec: 0x0  nop
    ctx->pc = 0x293decu;
    // NOP
label_293df0:
    // 0x293df0: 0xe831  tgeu        $zero, $zero, 928
    ctx->pc = 0x293df0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_293df4:
    // 0x293df4: 0x108  .word       0x00000108                   # jr          $zero # 00000100 <InstrIdType: CPU_SPECIAL>
label_293df8:
    if (ctx->pc == 0x293DF8u) {
        ctx->pc = 0x293DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293DF4u;
        // 0x293df8: 0x83f90  .word       0x00083F90                   # mfhi        $a3 # 00080780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 7, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x293DFCu;
        goto label_293dfc;
    }
    ctx->pc = 0x293DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x293DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293DF4u;
        // 0x293df8: 0x83f90  .word       0x00083F90                   # mfhi        $a3 # 00080780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 7, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293DF4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x293DFCu;
label_293dfc:
    // 0x293dfc: 0x0  nop
    ctx->pc = 0x293dfcu;
    // NOP
label_293e00:
    // 0x293e00: 0xe939  .word       0x0000E939                   # INVALID     $zero, $zero, -0x16C7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293e00u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x293E00 raw=0x0000E939");
 /* MITIGATED */
label_293e04:
    // 0x293e04: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293e04u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_293e08:
    // 0x293e08: 0x33020  add         $a2, $zero, $v1
    ctx->pc = 0x293e08u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_293e0c:
    // 0x293e0c: 0x0  nop
    ctx->pc = 0x293e0cu;
    // NOP
label_293e10:
    // 0x293e10: 0xe9a0  .word       0x0000E9A0                   # add         $sp, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293e10u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_293e14:
    // 0x293e14: 0x15a  .word       0x0000015A                   # div         $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293e14u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_293e18:
    // 0x293e18: 0xac810  .word       0x000AC810                   # mfhi        $t9 # 000A0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293e18u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_293e1c:
    // 0x293e1c: 0x0  nop
    ctx->pc = 0x293e1cu;
    // NOP
label_293e20:
    // 0x293e20: 0xeafa  dsrl        $sp, $zero, 11
    ctx->pc = 0x293e20u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) >> 11);
label_293e24:
    // 0x293e24: 0x34  teq         $zero, $zero, 0
    ctx->pc = 0x293e24u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_293e28:
    // 0x293e28: 0x19e80  sll         $s3, $at, 26
    ctx->pc = 0x293e28u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 1), 26));
label_293e2c:
    // 0x293e2c: 0x0  nop
    ctx->pc = 0x293e2cu;
    // NOP
label_293e30:
    // 0x293e30: 0xeb2e  .word       0x0000EB2E                   # dsub        $sp, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293e30u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 29, r); }
label_293e34:
    // 0x293e34: 0x35  .word       0x00000035                   # INVALID     $zero, $zero, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293e34u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x293E34 raw=0x00000035");
 /* MITIGATED */
label_293e38:
    // 0x293e38: 0x1a4c0  sll         $s4, $at, 19
    ctx->pc = 0x293e38u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 1), 19));
label_293e3c:
    // 0x293e3c: 0x0  nop
    ctx->pc = 0x293e3cu;
    // NOP
label_293e40:
    // 0x293e40: 0xeb63  .word       0x0000EB63                   # negu        $sp, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293e40u;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_293e44:
    // 0x293e44: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x293e44u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293e48:
    // 0x293e48: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x293e48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_293e4c:
    // 0x293e4c: 0x0  nop
    ctx->pc = 0x293e4cu;
    // NOP
label_293e50:
    // 0x293e50: 0xeb67  .word       0x0000EB67                   # not         $sp, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293e50u;
    SET_GPR_U64(ctx, 29, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_293e54:
    // 0x293e54: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293e54u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293E54 raw=0x00000001");
 /* MITIGATED */
label_293e58:
    // 0x293e58: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x293e58u;
    
label_293e5c:
    // 0x293e5c: 0x0  nop
    ctx->pc = 0x293e5cu;
    // NOP
label_293e60:
    // 0x293e60: 0xeb68  .word       0x0000EB68                   # mfsa        $sp # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x293e60u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_293e64:
    // 0x293e64: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x293e64u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_293e68:
    // 0x293e68: 0x18050  .word       0x00018050                   # mfhi        $s0 # 00010040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293e68u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_293e6c:
    // 0x293e6c: 0x0  nop
    ctx->pc = 0x293e6cu;
    // NOP
label_293e70:
    // 0x293e70: 0xeb99  .word       0x0000EB99                   # multu       $zero, $zero # 0000EB80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293e70u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_293e74:
    // 0x293e74: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293e74u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_293e78:
    // 0x293e78: 0x3317c  dsll32      $a2, $v1, 5
    ctx->pc = 0x293e78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 5));
label_293e7c:
    // 0x293e7c: 0x0  nop
    ctx->pc = 0x293e7cu;
    // NOP
label_293e80:
    // 0x293e80: 0xec00  sll         $sp, $zero, 16
    ctx->pc = 0x293e80u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_293e84:
    // 0x293e84: 0x15a  .word       0x0000015A                   # div         $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293e84u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_293e88:
    // 0x293e88: 0xacc70  tge         $zero, $t2, 817
    ctx->pc = 0x293e88u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 10)) { runtime->handleTrap(rdram, ctx); }
label_293e8c:
    // 0x293e8c: 0x0  nop
    ctx->pc = 0x293e8cu;
    // NOP
label_293e90:
    // 0x293e90: 0xed5a  .word       0x0000ED5A                   # div         $sp, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293e90u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_293e94:
    // 0x293e94: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x293e94u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293e98:
    // 0x293e98: 0x1b30  tge         $zero, $zero, 108
    ctx->pc = 0x293e98u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_293e9c:
    // 0x293e9c: 0x0  nop
    ctx->pc = 0x293e9cu;
    // NOP
label_293ea0:
    // 0x293ea0: 0xed5e  .word       0x0000ED5E                   # ddiv        $sp, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293ea0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x293EA0 raw=0x0000ED5E");
 /* MITIGATED */
label_293ea4:
    // 0x293ea4: 0x183  sra         $zero, $zero, 6
    ctx->pc = 0x293ea4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 6));
label_293ea8:
    // 0x293ea8: 0xc17b0  tge         $zero, $t4, 94
    ctx->pc = 0x293ea8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_293eac:
    // 0x293eac: 0x0  nop
    ctx->pc = 0x293eacu;
    // NOP
label_293eb0:
    // 0x293eb0: 0xeee1  .word       0x0000EEE1                   # addu        $sp, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_293eb4:
    // 0x293eb4: 0x1fe  dsrl32      $zero, $zero, 7
    ctx->pc = 0x293eb4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 7));
label_293eb8:
    // 0x293eb8: 0xfe8e0  .word       0x000FE8E0                   # add         $sp, $zero, $t7 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293eb8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 15);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_293ebc:
    // 0x293ebc: 0x0  nop
    ctx->pc = 0x293ebcu;
    // NOP
    ctx->pc = 0x293ec0u;
    return;
}
