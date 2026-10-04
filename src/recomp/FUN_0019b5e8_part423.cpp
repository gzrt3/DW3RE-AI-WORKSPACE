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


void FUN_0019b5e8_part423(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2696c8u: goto label_2696c8;
        case 0x2696ccu: goto label_2696cc;
        case 0x2696d0u: goto label_2696d0;
        case 0x2696d4u: goto label_2696d4;
        case 0x2696d8u: goto label_2696d8;
        case 0x2696dcu: goto label_2696dc;
        case 0x2696e0u: goto label_2696e0;
        case 0x2696e4u: goto label_2696e4;
        case 0x2696e8u: goto label_2696e8;
        case 0x2696ecu: goto label_2696ec;
        case 0x2696f0u: goto label_2696f0;
        case 0x2696f4u: goto label_2696f4;
        case 0x2696f8u: goto label_2696f8;
        case 0x2696fcu: goto label_2696fc;
        case 0x269700u: goto label_269700;
        case 0x269704u: goto label_269704;
        case 0x269708u: goto label_269708;
        case 0x26970cu: goto label_26970c;
        case 0x269710u: goto label_269710;
        case 0x269714u: goto label_269714;
        case 0x269718u: goto label_269718;
        case 0x26971cu: goto label_26971c;
        case 0x269720u: goto label_269720;
        case 0x269724u: goto label_269724;
        case 0x269728u: goto label_269728;
        case 0x26972cu: goto label_26972c;
        case 0x269730u: goto label_269730;
        case 0x269734u: goto label_269734;
        case 0x269738u: goto label_269738;
        case 0x26973cu: goto label_26973c;
        case 0x269740u: goto label_269740;
        case 0x269744u: goto label_269744;
        case 0x269748u: goto label_269748;
        case 0x26974cu: goto label_26974c;
        case 0x269750u: goto label_269750;
        case 0x269754u: goto label_269754;
        case 0x269758u: goto label_269758;
        case 0x26975cu: goto label_26975c;
        case 0x269760u: goto label_269760;
        case 0x269764u: goto label_269764;
        case 0x269768u: goto label_269768;
        case 0x26976cu: goto label_26976c;
        case 0x269770u: goto label_269770;
        case 0x269774u: goto label_269774;
        case 0x269778u: goto label_269778;
        case 0x26977cu: goto label_26977c;
        case 0x269780u: goto label_269780;
        case 0x269784u: goto label_269784;
        case 0x269788u: goto label_269788;
        case 0x26978cu: goto label_26978c;
        case 0x269790u: goto label_269790;
        case 0x269794u: goto label_269794;
        case 0x269798u: goto label_269798;
        case 0x26979cu: goto label_26979c;
        case 0x2697a0u: goto label_2697a0;
        case 0x2697a4u: goto label_2697a4;
        case 0x2697a8u: goto label_2697a8;
        case 0x2697acu: goto label_2697ac;
        case 0x2697b0u: goto label_2697b0;
        case 0x2697b4u: goto label_2697b4;
        case 0x2697b8u: goto label_2697b8;
        case 0x2697bcu: goto label_2697bc;
        case 0x2697c0u: goto label_2697c0;
        case 0x2697c4u: goto label_2697c4;
        case 0x2697c8u: goto label_2697c8;
        case 0x2697ccu: goto label_2697cc;
        case 0x2697d0u: goto label_2697d0;
        case 0x2697d4u: goto label_2697d4;
        case 0x2697d8u: goto label_2697d8;
        case 0x2697dcu: goto label_2697dc;
        case 0x2697e0u: goto label_2697e0;
        case 0x2697e4u: goto label_2697e4;
        case 0x2697e8u: goto label_2697e8;
        case 0x2697ecu: goto label_2697ec;
        case 0x2697f0u: goto label_2697f0;
        case 0x2697f4u: goto label_2697f4;
        case 0x2697f8u: goto label_2697f8;
        case 0x2697fcu: goto label_2697fc;
        case 0x269800u: goto label_269800;
        case 0x269804u: goto label_269804;
        case 0x269808u: goto label_269808;
        case 0x26980cu: goto label_26980c;
        case 0x269810u: goto label_269810;
        case 0x269814u: goto label_269814;
        case 0x269818u: goto label_269818;
        case 0x26981cu: goto label_26981c;
        case 0x269820u: goto label_269820;
        case 0x269824u: goto label_269824;
        case 0x269828u: goto label_269828;
        case 0x26982cu: goto label_26982c;
        case 0x269830u: goto label_269830;
        case 0x269834u: goto label_269834;
        case 0x269838u: goto label_269838;
        case 0x26983cu: goto label_26983c;
        case 0x269840u: goto label_269840;
        case 0x269844u: goto label_269844;
        case 0x269848u: goto label_269848;
        case 0x26984cu: goto label_26984c;
        case 0x269850u: goto label_269850;
        case 0x269854u: goto label_269854;
        case 0x269858u: goto label_269858;
        case 0x26985cu: goto label_26985c;
        case 0x269860u: goto label_269860;
        case 0x269864u: goto label_269864;
        case 0x269868u: goto label_269868;
        case 0x26986cu: goto label_26986c;
        case 0x269870u: goto label_269870;
        case 0x269874u: goto label_269874;
        case 0x269878u: goto label_269878;
        case 0x26987cu: goto label_26987c;
        case 0x269880u: goto label_269880;
        case 0x269884u: goto label_269884;
        case 0x269888u: goto label_269888;
        case 0x26988cu: goto label_26988c;
        case 0x269890u: goto label_269890;
        case 0x269894u: goto label_269894;
        case 0x269898u: goto label_269898;
        case 0x26989cu: goto label_26989c;
        case 0x2698a0u: goto label_2698a0;
        case 0x2698a4u: goto label_2698a4;
        case 0x2698a8u: goto label_2698a8;
        case 0x2698acu: goto label_2698ac;
        case 0x2698b0u: goto label_2698b0;
        case 0x2698b4u: goto label_2698b4;
        case 0x2698b8u: goto label_2698b8;
        case 0x2698bcu: goto label_2698bc;
        case 0x2698c0u: goto label_2698c0;
        case 0x2698c4u: goto label_2698c4;
        case 0x2698c8u: goto label_2698c8;
        case 0x2698ccu: goto label_2698cc;
        case 0x2698d0u: goto label_2698d0;
        case 0x2698d4u: goto label_2698d4;
        case 0x2698d8u: goto label_2698d8;
        case 0x2698dcu: goto label_2698dc;
        case 0x2698e0u: goto label_2698e0;
        case 0x2698e4u: goto label_2698e4;
        case 0x2698e8u: goto label_2698e8;
        case 0x2698ecu: goto label_2698ec;
        case 0x2698f0u: goto label_2698f0;
        case 0x2698f4u: goto label_2698f4;
        case 0x2698f8u: goto label_2698f8;
        case 0x2698fcu: goto label_2698fc;
        case 0x269900u: goto label_269900;
        case 0x269904u: goto label_269904;
        case 0x269908u: goto label_269908;
        case 0x26990cu: goto label_26990c;
        case 0x269910u: goto label_269910;
        case 0x269914u: goto label_269914;
        case 0x269918u: goto label_269918;
        case 0x26991cu: goto label_26991c;
        case 0x269920u: goto label_269920;
        case 0x269924u: goto label_269924;
        case 0x269928u: goto label_269928;
        case 0x26992cu: goto label_26992c;
        case 0x269930u: goto label_269930;
        case 0x269934u: goto label_269934;
        case 0x269938u: goto label_269938;
        case 0x26993cu: goto label_26993c;
        case 0x269940u: goto label_269940;
        case 0x269944u: goto label_269944;
        case 0x269948u: goto label_269948;
        case 0x26994cu: goto label_26994c;
        case 0x269950u: goto label_269950;
        case 0x269954u: goto label_269954;
        case 0x269958u: goto label_269958;
        case 0x26995cu: goto label_26995c;
        case 0x269960u: goto label_269960;
        case 0x269964u: goto label_269964;
        case 0x269968u: goto label_269968;
        case 0x26996cu: goto label_26996c;
        case 0x269970u: goto label_269970;
        case 0x269974u: goto label_269974;
        case 0x269978u: goto label_269978;
        case 0x26997cu: goto label_26997c;
        case 0x269980u: goto label_269980;
        case 0x269984u: goto label_269984;
        case 0x269988u: goto label_269988;
        case 0x26998cu: goto label_26998c;
        case 0x269990u: goto label_269990;
        case 0x269994u: goto label_269994;
        case 0x269998u: goto label_269998;
        case 0x26999cu: goto label_26999c;
        case 0x2699a0u: goto label_2699a0;
        case 0x2699a4u: goto label_2699a4;
        case 0x2699a8u: goto label_2699a8;
        case 0x2699acu: goto label_2699ac;
        case 0x2699b0u: goto label_2699b0;
        case 0x2699b4u: goto label_2699b4;
        case 0x2699b8u: goto label_2699b8;
        case 0x2699bcu: goto label_2699bc;
        case 0x2699c0u: goto label_2699c0;
        case 0x2699c4u: goto label_2699c4;
        case 0x2699c8u: goto label_2699c8;
        case 0x2699ccu: goto label_2699cc;
        case 0x2699d0u: goto label_2699d0;
        case 0x2699d4u: goto label_2699d4;
        case 0x2699d8u: goto label_2699d8;
        case 0x2699dcu: goto label_2699dc;
        case 0x2699e0u: goto label_2699e0;
        case 0x2699e4u: goto label_2699e4;
        case 0x2699e8u: goto label_2699e8;
        case 0x2699ecu: goto label_2699ec;
        case 0x2699f0u: goto label_2699f0;
        case 0x2699f4u: goto label_2699f4;
        case 0x2699f8u: goto label_2699f8;
        case 0x2699fcu: goto label_2699fc;
        case 0x269a00u: goto label_269a00;
        case 0x269a04u: goto label_269a04;
        case 0x269a08u: goto label_269a08;
        case 0x269a0cu: goto label_269a0c;
        case 0x269a10u: goto label_269a10;
        case 0x269a14u: goto label_269a14;
        case 0x269a18u: goto label_269a18;
        case 0x269a1cu: goto label_269a1c;
        case 0x269a20u: goto label_269a20;
        case 0x269a24u: goto label_269a24;
        case 0x269a28u: goto label_269a28;
        case 0x269a2cu: goto label_269a2c;
        case 0x269a30u: goto label_269a30;
        case 0x269a34u: goto label_269a34;
        case 0x269a38u: goto label_269a38;
        case 0x269a3cu: goto label_269a3c;
        case 0x269a40u: goto label_269a40;
        case 0x269a44u: goto label_269a44;
        case 0x269a48u: goto label_269a48;
        case 0x269a4cu: goto label_269a4c;
        case 0x269a50u: goto label_269a50;
        case 0x269a54u: goto label_269a54;
        case 0x269a58u: goto label_269a58;
        case 0x269a5cu: goto label_269a5c;
        case 0x269a60u: goto label_269a60;
        case 0x269a64u: goto label_269a64;
        case 0x269a68u: goto label_269a68;
        case 0x269a6cu: goto label_269a6c;
        case 0x269a70u: goto label_269a70;
        case 0x269a74u: goto label_269a74;
        case 0x269a78u: goto label_269a78;
        case 0x269a7cu: goto label_269a7c;
        case 0x269a80u: goto label_269a80;
        case 0x269a84u: goto label_269a84;
        case 0x269a88u: goto label_269a88;
        case 0x269a8cu: goto label_269a8c;
        case 0x269a90u: goto label_269a90;
        case 0x269a94u: goto label_269a94;
        case 0x269a98u: goto label_269a98;
        case 0x269a9cu: goto label_269a9c;
        case 0x269aa0u: goto label_269aa0;
        case 0x269aa4u: goto label_269aa4;
        case 0x269aa8u: goto label_269aa8;
        case 0x269aacu: goto label_269aac;
        case 0x269ab0u: goto label_269ab0;
        case 0x269ab4u: goto label_269ab4;
        case 0x269ab8u: goto label_269ab8;
        case 0x269abcu: goto label_269abc;
        case 0x269ac0u: goto label_269ac0;
        case 0x269ac4u: goto label_269ac4;
        case 0x269ac8u: goto label_269ac8;
        case 0x269accu: goto label_269acc;
        case 0x269ad0u: goto label_269ad0;
        case 0x269ad4u: goto label_269ad4;
        case 0x269ad8u: goto label_269ad8;
        case 0x269adcu: goto label_269adc;
        case 0x269ae0u: goto label_269ae0;
        case 0x269ae4u: goto label_269ae4;
        case 0x269ae8u: goto label_269ae8;
        case 0x269aecu: goto label_269aec;
        case 0x269af0u: goto label_269af0;
        case 0x269af4u: goto label_269af4;
        case 0x269af8u: goto label_269af8;
        case 0x269afcu: goto label_269afc;
        case 0x269b00u: goto label_269b00;
        case 0x269b04u: goto label_269b04;
        case 0x269b08u: goto label_269b08;
        case 0x269b0cu: goto label_269b0c;
        case 0x269b10u: goto label_269b10;
        case 0x269b14u: goto label_269b14;
        case 0x269b18u: goto label_269b18;
        case 0x269b1cu: goto label_269b1c;
        case 0x269b20u: goto label_269b20;
        case 0x269b24u: goto label_269b24;
        case 0x269b28u: goto label_269b28;
        case 0x269b2cu: goto label_269b2c;
        case 0x269b30u: goto label_269b30;
        case 0x269b34u: goto label_269b34;
        case 0x269b38u: goto label_269b38;
        case 0x269b3cu: goto label_269b3c;
        case 0x269b40u: goto label_269b40;
        case 0x269b44u: goto label_269b44;
        case 0x269b48u: goto label_269b48;
        case 0x269b4cu: goto label_269b4c;
        case 0x269b50u: goto label_269b50;
        case 0x269b54u: goto label_269b54;
        case 0x269b58u: goto label_269b58;
        case 0x269b5cu: goto label_269b5c;
        case 0x269b60u: goto label_269b60;
        case 0x269b64u: goto label_269b64;
        case 0x269b68u: goto label_269b68;
        case 0x269b6cu: goto label_269b6c;
        case 0x269b70u: goto label_269b70;
        case 0x269b74u: goto label_269b74;
        case 0x269b78u: goto label_269b78;
        case 0x269b7cu: goto label_269b7c;
        case 0x269b80u: goto label_269b80;
        case 0x269b84u: goto label_269b84;
        case 0x269b88u: goto label_269b88;
        case 0x269b8cu: goto label_269b8c;
        case 0x269b90u: goto label_269b90;
        case 0x269b94u: goto label_269b94;
        case 0x269b98u: goto label_269b98;
        case 0x269b9cu: goto label_269b9c;
        case 0x269ba0u: goto label_269ba0;
        case 0x269ba4u: goto label_269ba4;
        case 0x269ba8u: goto label_269ba8;
        case 0x269bacu: goto label_269bac;
        case 0x269bb0u: goto label_269bb0;
        case 0x269bb4u: goto label_269bb4;
        case 0x269bb8u: goto label_269bb8;
        case 0x269bbcu: goto label_269bbc;
        case 0x269bc0u: goto label_269bc0;
        case 0x269bc4u: goto label_269bc4;
        case 0x269bc8u: goto label_269bc8;
        case 0x269bccu: goto label_269bcc;
        case 0x269bd0u: goto label_269bd0;
        case 0x269bd4u: goto label_269bd4;
        case 0x269bd8u: goto label_269bd8;
        case 0x269bdcu: goto label_269bdc;
        case 0x269be0u: goto label_269be0;
        case 0x269be4u: goto label_269be4;
        case 0x269be8u: goto label_269be8;
        case 0x269becu: goto label_269bec;
        case 0x269bf0u: goto label_269bf0;
        case 0x269bf4u: goto label_269bf4;
        case 0x269bf8u: goto label_269bf8;
        case 0x269bfcu: goto label_269bfc;
        case 0x269c00u: goto label_269c00;
        case 0x269c04u: goto label_269c04;
        case 0x269c08u: goto label_269c08;
        case 0x269c0cu: goto label_269c0c;
        case 0x269c10u: goto label_269c10;
        case 0x269c14u: goto label_269c14;
        case 0x269c18u: goto label_269c18;
        case 0x269c1cu: goto label_269c1c;
        case 0x269c20u: goto label_269c20;
        case 0x269c24u: goto label_269c24;
        case 0x269c28u: goto label_269c28;
        case 0x269c2cu: goto label_269c2c;
        case 0x269c30u: goto label_269c30;
        case 0x269c34u: goto label_269c34;
        case 0x269c38u: goto label_269c38;
        case 0x269c3cu: goto label_269c3c;
        case 0x269c40u: goto label_269c40;
        case 0x269c44u: goto label_269c44;
        case 0x269c48u: goto label_269c48;
        case 0x269c4cu: goto label_269c4c;
        case 0x269c50u: goto label_269c50;
        case 0x269c54u: goto label_269c54;
        case 0x269c58u: goto label_269c58;
        case 0x269c5cu: goto label_269c5c;
        case 0x269c60u: goto label_269c60;
        case 0x269c64u: goto label_269c64;
        case 0x269c68u: goto label_269c68;
        case 0x269c6cu: goto label_269c6c;
        case 0x269c70u: goto label_269c70;
        case 0x269c74u: goto label_269c74;
        case 0x269c78u: goto label_269c78;
        case 0x269c7cu: goto label_269c7c;
        case 0x269c80u: goto label_269c80;
        case 0x269c84u: goto label_269c84;
        case 0x269c88u: goto label_269c88;
        case 0x269c8cu: goto label_269c8c;
        case 0x269c90u: goto label_269c90;
        case 0x269c94u: goto label_269c94;
        case 0x269c98u: goto label_269c98;
        case 0x269c9cu: goto label_269c9c;
        case 0x269ca0u: goto label_269ca0;
        case 0x269ca4u: goto label_269ca4;
        case 0x269ca8u: goto label_269ca8;
        case 0x269cacu: goto label_269cac;
        case 0x269cb0u: goto label_269cb0;
        case 0x269cb4u: goto label_269cb4;
        case 0x269cb8u: goto label_269cb8;
        case 0x269cbcu: goto label_269cbc;
        case 0x269cc0u: goto label_269cc0;
        case 0x269cc4u: goto label_269cc4;
        case 0x269cc8u: goto label_269cc8;
        case 0x269cccu: goto label_269ccc;
        case 0x269cd0u: goto label_269cd0;
        case 0x269cd4u: goto label_269cd4;
        case 0x269cd8u: goto label_269cd8;
        case 0x269cdcu: goto label_269cdc;
        case 0x269ce0u: goto label_269ce0;
        case 0x269ce4u: goto label_269ce4;
        case 0x269ce8u: goto label_269ce8;
        case 0x269cecu: goto label_269cec;
        case 0x269cf0u: goto label_269cf0;
        case 0x269cf4u: goto label_269cf4;
        case 0x269cf8u: goto label_269cf8;
        case 0x269cfcu: goto label_269cfc;
        case 0x269d00u: goto label_269d00;
        case 0x269d04u: goto label_269d04;
        case 0x269d08u: goto label_269d08;
        case 0x269d0cu: goto label_269d0c;
        case 0x269d10u: goto label_269d10;
        case 0x269d14u: goto label_269d14;
        case 0x269d18u: goto label_269d18;
        case 0x269d1cu: goto label_269d1c;
        case 0x269d20u: goto label_269d20;
        case 0x269d24u: goto label_269d24;
        case 0x269d28u: goto label_269d28;
        case 0x269d2cu: goto label_269d2c;
        case 0x269d30u: goto label_269d30;
        case 0x269d34u: goto label_269d34;
        case 0x269d38u: goto label_269d38;
        case 0x269d3cu: goto label_269d3c;
        case 0x269d40u: goto label_269d40;
        case 0x269d44u: goto label_269d44;
        case 0x269d48u: goto label_269d48;
        case 0x269d4cu: goto label_269d4c;
        case 0x269d50u: goto label_269d50;
        case 0x269d54u: goto label_269d54;
        case 0x269d58u: goto label_269d58;
        case 0x269d5cu: goto label_269d5c;
        case 0x269d60u: goto label_269d60;
        case 0x269d64u: goto label_269d64;
        case 0x269d68u: goto label_269d68;
        case 0x269d6cu: goto label_269d6c;
        case 0x269d70u: goto label_269d70;
        case 0x269d74u: goto label_269d74;
        case 0x269d78u: goto label_269d78;
        case 0x269d7cu: goto label_269d7c;
        case 0x269d80u: goto label_269d80;
        case 0x269d84u: goto label_269d84;
        case 0x269d88u: goto label_269d88;
        case 0x269d8cu: goto label_269d8c;
        case 0x269d90u: goto label_269d90;
        case 0x269d94u: goto label_269d94;
        case 0x269d98u: goto label_269d98;
        case 0x269d9cu: goto label_269d9c;
        case 0x269da0u: goto label_269da0;
        case 0x269da4u: goto label_269da4;
        case 0x269da8u: goto label_269da8;
        case 0x269dacu: goto label_269dac;
        case 0x269db0u: goto label_269db0;
        case 0x269db4u: goto label_269db4;
        case 0x269db8u: goto label_269db8;
        case 0x269dbcu: goto label_269dbc;
        case 0x269dc0u: goto label_269dc0;
        case 0x269dc4u: goto label_269dc4;
        case 0x269dc8u: goto label_269dc8;
        case 0x269dccu: goto label_269dcc;
        case 0x269dd0u: goto label_269dd0;
        case 0x269dd4u: goto label_269dd4;
        case 0x269dd8u: goto label_269dd8;
        case 0x269ddcu: goto label_269ddc;
        case 0x269de0u: goto label_269de0;
        case 0x269de4u: goto label_269de4;
        case 0x269de8u: goto label_269de8;
        case 0x269decu: goto label_269dec;
        case 0x269df0u: goto label_269df0;
        case 0x269df4u: goto label_269df4;
        case 0x269df8u: goto label_269df8;
        case 0x269dfcu: goto label_269dfc;
        case 0x269e00u: goto label_269e00;
        case 0x269e04u: goto label_269e04;
        case 0x269e08u: goto label_269e08;
        case 0x269e0cu: goto label_269e0c;
        case 0x269e10u: goto label_269e10;
        case 0x269e14u: goto label_269e14;
        case 0x269e18u: goto label_269e18;
        case 0x269e1cu: goto label_269e1c;
        case 0x269e20u: goto label_269e20;
        case 0x269e24u: goto label_269e24;
        case 0x269e28u: goto label_269e28;
        case 0x269e2cu: goto label_269e2c;
        case 0x269e30u: goto label_269e30;
        case 0x269e34u: goto label_269e34;
        case 0x269e38u: goto label_269e38;
        case 0x269e3cu: goto label_269e3c;
        case 0x269e40u: goto label_269e40;
        case 0x269e44u: goto label_269e44;
        case 0x269e48u: goto label_269e48;
        case 0x269e4cu: goto label_269e4c;
        case 0x269e50u: goto label_269e50;
        case 0x269e54u: goto label_269e54;
        case 0x269e58u: goto label_269e58;
        case 0x269e5cu: goto label_269e5c;
        case 0x269e60u: goto label_269e60;
        case 0x269e64u: goto label_269e64;
        case 0x269e68u: goto label_269e68;
        case 0x269e6cu: goto label_269e6c;
        case 0x269e70u: goto label_269e70;
        case 0x269e74u: goto label_269e74;
        case 0x269e78u: goto label_269e78;
        case 0x269e7cu: goto label_269e7c;
        case 0x269e80u: goto label_269e80;
        case 0x269e84u: goto label_269e84;
        case 0x269e88u: goto label_269e88;
        case 0x269e8cu: goto label_269e8c;
        case 0x269e90u: goto label_269e90;
        case 0x269e94u: goto label_269e94;
        default: return;
    }

label_2696c8:
    // 0x2696c8: 0x0  nop
    ctx->pc = 0x2696c8u;
    // NOP
label_2696cc:
    // 0x2696cc: 0x0  nop
    ctx->pc = 0x2696ccu;
    // NOP
label_2696d0:
    // 0x2696d0: 0x13b8f  .word       0x00013B8F                   # sync # 00013800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2696d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2696d4:
    // 0x2696d4: 0xbff0  tge         $zero, $zero, 767
    ctx->pc = 0x2696d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2696d8:
    // 0x2696d8: 0x0  nop
    ctx->pc = 0x2696d8u;
    // NOP
label_2696dc:
    // 0x2696dc: 0x0  nop
    ctx->pc = 0x2696dcu;
    // NOP
label_2696e0:
    // 0x2696e0: 0x13ba7  .word       0x00013BA7                   # nor         $a3, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2696e0u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_2696e4:
    // 0x2696e4: 0xb970  tge         $zero, $zero, 741
    ctx->pc = 0x2696e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2696e8:
    // 0x2696e8: 0x0  nop
    ctx->pc = 0x2696e8u;
    // NOP
label_2696ec:
    // 0x2696ec: 0x0  nop
    ctx->pc = 0x2696ecu;
    // NOP
label_2696f0:
    // 0x2696f0: 0x13bbf  dsra32      $a3, $at, 14
    ctx->pc = 0x2696f0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 1) >> (32 + 14));
label_2696f4:
    // 0x2696f4: 0x8800  sll         $s1, $zero, 0
    ctx->pc = 0x2696f4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2696f8:
    // 0x2696f8: 0x0  nop
    ctx->pc = 0x2696f8u;
    // NOP
label_2696fc:
    // 0x2696fc: 0x0  nop
    ctx->pc = 0x2696fcu;
    // NOP
label_269700:
    // 0x269700: 0x13bd0  .word       0x00013BD0                   # mfhi        $a3 # 000103C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269700u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_269704:
    // 0x269704: 0x6300  sll         $t4, $zero, 12
    ctx->pc = 0x269704u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_269708:
    // 0x269708: 0x0  nop
    ctx->pc = 0x269708u;
    // NOP
label_26970c:
    // 0x26970c: 0x0  nop
    ctx->pc = 0x26970cu;
    // NOP
label_269710:
    // 0x269710: 0x13bdd  .word       0x00013BDD                   # dmultu      $zero, $at # 00003BC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269710u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x269710 raw=0x00013BDD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269714:
    // 0x269714: 0xa670  tge         $zero, $zero, 665
    ctx->pc = 0x269714u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269718:
    // 0x269718: 0x0  nop
    ctx->pc = 0x269718u;
    // NOP
label_26971c:
    // 0x26971c: 0x0  nop
    ctx->pc = 0x26971cu;
    // NOP
label_269720:
    // 0x269720: 0x13bf2  tlt         $zero, $at, 239
    ctx->pc = 0x269720u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_269724:
    // 0x269724: 0x8c50  .word       0x00008C50                   # mfhi        $s1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269724u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_269728:
    // 0x269728: 0x0  nop
    ctx->pc = 0x269728u;
    // NOP
label_26972c:
    // 0x26972c: 0x0  nop
    ctx->pc = 0x26972cu;
    // NOP
label_269730:
    // 0x269730: 0x13c04  .word       0x00013C04                   # sllv        $a3, $at, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269730u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_269734:
    // 0x269734: 0xcd70  tge         $zero, $zero, 821
    ctx->pc = 0x269734u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269738:
    // 0x269738: 0x0  nop
    ctx->pc = 0x269738u;
    // NOP
label_26973c:
    // 0x26973c: 0x0  nop
    ctx->pc = 0x26973cu;
    // NOP
label_269740:
    // 0x269740: 0x13c1e  .word       0x00013C1E                   # ddiv        $a3, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269740u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x269740 raw=0x00013C1E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269744:
    // 0x269744: 0xb6b0  tge         $zero, $zero, 730
    ctx->pc = 0x269744u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269748:
    // 0x269748: 0x0  nop
    ctx->pc = 0x269748u;
    // NOP
label_26974c:
    // 0x26974c: 0x0  nop
    ctx->pc = 0x26974cu;
    // NOP
label_269750:
    // 0x269750: 0x13c35  .word       0x00013C35                   # INVALID     $zero, $at, 0x3C35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269750u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x269750 raw=0x00013C35"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269754:
    // 0x269754: 0x8df0  tge         $zero, $zero, 567
    ctx->pc = 0x269754u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269758:
    // 0x269758: 0x0  nop
    ctx->pc = 0x269758u;
    // NOP
label_26975c:
    // 0x26975c: 0x0  nop
    ctx->pc = 0x26975cu;
    // NOP
label_269760:
    // 0x269760: 0x13c47  .word       0x00013C47                   # srav        $a3, $at, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269760u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_269764:
    // 0x269764: 0xb500  sll         $s6, $zero, 20
    ctx->pc = 0x269764u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_269768:
    // 0x269768: 0x0  nop
    ctx->pc = 0x269768u;
    // NOP
label_26976c:
    // 0x26976c: 0x0  nop
    ctx->pc = 0x26976cu;
    // NOP
label_269770:
    // 0x269770: 0x13c5e  .word       0x00013C5E                   # ddiv        $a3, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269770u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x269770 raw=0x00013C5E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269774:
    // 0x269774: 0xd590  .word       0x0000D590                   # mfhi        $k0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269774u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_269778:
    // 0x269778: 0x0  nop
    ctx->pc = 0x269778u;
    // NOP
label_26977c:
    // 0x26977c: 0x0  nop
    ctx->pc = 0x26977cu;
    // NOP
label_269780:
    // 0x269780: 0x13c79  .word       0x00013C79                   # INVALID     $zero, $at, 0x3C79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269780u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x269780 raw=0x00013C79"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269784:
    // 0x269784: 0x7e70  tge         $zero, $zero, 505
    ctx->pc = 0x269784u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269788:
    // 0x269788: 0x0  nop
    ctx->pc = 0x269788u;
    // NOP
label_26978c:
    // 0x26978c: 0x0  nop
    ctx->pc = 0x26978cu;
    // NOP
label_269790:
    // 0x269790: 0x13c89  .word       0x00013C89                   # jalr        $a3, $zero # 00010480 <InstrIdType: CPU_SPECIAL>
label_269794:
    if (ctx->pc == 0x269794u) {
        ctx->pc = 0x269794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269790u;
        // 0x269794: 0x7790  .word       0x00007790                   # mfhi        $t6 # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x269798u;
        goto label_269798;
    }
    ctx->pc = 0x269790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 7, 0x269798u);
        ctx->pc = 0x269794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269790u;
        // 0x269794: 0x7790  .word       0x00007790                   # mfhi        $t6 # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269790u, 0x269798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x269798u;
label_269798:
    // 0x269798: 0x0  nop
    ctx->pc = 0x269798u;
    // NOP
label_26979c:
    // 0x26979c: 0x0  nop
    ctx->pc = 0x26979cu;
    // NOP
label_2697a0:
    // 0x2697a0: 0x13c98  .word       0x00013C98                   # mult        $a3, $zero, $at # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2697a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_2697a4:
    // 0x2697a4: 0x5c50  .word       0x00005C50                   # mfhi        $t3 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2697a4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2697a8:
    // 0x2697a8: 0x0  nop
    ctx->pc = 0x2697a8u;
    // NOP
label_2697ac:
    // 0x2697ac: 0x0  nop
    ctx->pc = 0x2697acu;
    // NOP
label_2697b0:
    // 0x2697b0: 0x13ca4  .word       0x00013CA4                   # and         $a3, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2697b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_2697b4:
    // 0x2697b4: 0x7310  .word       0x00007310                   # mfhi        $t6 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2697b4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2697b8:
    // 0x2697b8: 0x0  nop
    ctx->pc = 0x2697b8u;
    // NOP
label_2697bc:
    // 0x2697bc: 0x0  nop
    ctx->pc = 0x2697bcu;
    // NOP
label_2697c0:
    // 0x2697c0: 0x13cb3  tltu        $zero, $at, 242
    ctx->pc = 0x2697c0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2697c4:
    // 0x2697c4: 0x8e20  .word       0x00008E20                   # add         $s1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2697c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2697c8:
    // 0x2697c8: 0x0  nop
    ctx->pc = 0x2697c8u;
    // NOP
label_2697cc:
    // 0x2697cc: 0x0  nop
    ctx->pc = 0x2697ccu;
    // NOP
label_2697d0:
    // 0x2697d0: 0x13cc5  .word       0x00013CC5                   # INVALID     $zero, $at, 0x3CC5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2697d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2697D0 raw=0x00013CC5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2697d4:
    // 0x2697d4: 0x4f90  .word       0x00004F90                   # mfhi        $t1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2697d4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_2697d8:
    // 0x2697d8: 0x0  nop
    ctx->pc = 0x2697d8u;
    // NOP
label_2697dc:
    // 0x2697dc: 0x0  nop
    ctx->pc = 0x2697dcu;
    // NOP
label_2697e0:
    // 0x2697e0: 0x13ccf  .word       0x00013CCF                   # sync.p # 00013800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2697e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2697e4:
    // 0x2697e4: 0x3920  .word       0x00003920                   # add         $a3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2697e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_2697e8:
    // 0x2697e8: 0x0  nop
    ctx->pc = 0x2697e8u;
    // NOP
label_2697ec:
    // 0x2697ec: 0x0  nop
    ctx->pc = 0x2697ecu;
    // NOP
label_2697f0:
    // 0x2697f0: 0x13cd7  .word       0x00013CD7                   # dsrav       $a3, $at, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2697f0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_2697f4:
    // 0x2697f4: 0x4c30  tge         $zero, $zero, 304
    ctx->pc = 0x2697f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2697f8:
    // 0x2697f8: 0x0  nop
    ctx->pc = 0x2697f8u;
    // NOP
label_2697fc:
    // 0x2697fc: 0x0  nop
    ctx->pc = 0x2697fcu;
    // NOP
label_269800:
    // 0x269800: 0x13ce1  .word       0x00013CE1                   # addu        $a3, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_269804:
    // 0x269804: 0x6220  .word       0x00006220                   # add         $t4, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269804u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_269808:
    // 0x269808: 0x0  nop
    ctx->pc = 0x269808u;
    // NOP
label_26980c:
    // 0x26980c: 0x0  nop
    ctx->pc = 0x26980cu;
    // NOP
label_269810:
    // 0x269810: 0x13cee  .word       0x00013CEE                   # dsub        $a3, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269810u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, r); }
label_269814:
    // 0x269814: 0xb990  .word       0x0000B990                   # mfhi        $s7 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269814u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_269818:
    // 0x269818: 0x0  nop
    ctx->pc = 0x269818u;
    // NOP
label_26981c:
    // 0x26981c: 0x0  nop
    ctx->pc = 0x26981cu;
    // NOP
label_269820:
    // 0x269820: 0x13d06  .word       0x00013D06                   # srlv        $a3, $at, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269820u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_269824:
    // 0x269824: 0x5f50  .word       0x00005F50                   # mfhi        $t3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269824u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_269828:
    // 0x269828: 0x0  nop
    ctx->pc = 0x269828u;
    // NOP
label_26982c:
    // 0x26982c: 0x0  nop
    ctx->pc = 0x26982cu;
    // NOP
label_269830:
    // 0x269830: 0x13d12  .word       0x00013D12                   # mflo        $a3 # 00010500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269830u;
    SET_GPR_U64(ctx, 7, ctx->lo);
label_269834:
    // 0x269834: 0xd0d0  .word       0x0000D0D0                   # mfhi        $k0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269834u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_269838:
    // 0x269838: 0x0  nop
    ctx->pc = 0x269838u;
    // NOP
label_26983c:
    // 0x26983c: 0x0  nop
    ctx->pc = 0x26983cu;
    // NOP
label_269840:
    // 0x269840: 0x13d2d  .word       0x00013D2D                   # daddu       $a3, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269840u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_269844:
    // 0x269844: 0x47e0  .word       0x000047E0                   # add         $t0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269844u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_269848:
    // 0x269848: 0x0  nop
    ctx->pc = 0x269848u;
    // NOP
label_26984c:
    // 0x26984c: 0x0  nop
    ctx->pc = 0x26984cu;
    // NOP
label_269850:
    // 0x269850: 0x13d36  tne         $zero, $at, 244
    ctx->pc = 0x269850u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_269854:
    // 0x269854: 0xb0c0  sll         $s6, $zero, 3
    ctx->pc = 0x269854u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_269858:
    // 0x269858: 0x0  nop
    ctx->pc = 0x269858u;
    // NOP
label_26985c:
    // 0x26985c: 0x0  nop
    ctx->pc = 0x26985cu;
    // NOP
label_269860:
    // 0x269860: 0x13d4d  break       1, 245
    ctx->pc = 0x269860u;
    runtime->handleBreak(rdram, ctx);
label_269864:
    // 0x269864: 0x4860  .word       0x00004860                   # add         $t1, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269864u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_269868:
    // 0x269868: 0x0  nop
    ctx->pc = 0x269868u;
    // NOP
label_26986c:
    // 0x26986c: 0x0  nop
    ctx->pc = 0x26986cu;
    // NOP
label_269870:
    // 0x269870: 0x13d57  .word       0x00013D57                   # dsrav       $a3, $at, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269870u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_269874:
    // 0x269874: 0x59e0  .word       0x000059E0                   # add         $t3, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269874u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_269878:
    // 0x269878: 0x0  nop
    ctx->pc = 0x269878u;
    // NOP
label_26987c:
    // 0x26987c: 0x0  nop
    ctx->pc = 0x26987cu;
    // NOP
label_269880:
    // 0x269880: 0x13d63  .word       0x00013D63                   # negu        $a3, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269880u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_269884:
    // 0x269884: 0x7de0  .word       0x00007DE0                   # add         $t7, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269884u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_269888:
    // 0x269888: 0x0  nop
    ctx->pc = 0x269888u;
    // NOP
label_26988c:
    // 0x26988c: 0x0  nop
    ctx->pc = 0x26988cu;
    // NOP
label_269890:
    // 0x269890: 0x13d73  tltu        $zero, $at, 245
    ctx->pc = 0x269890u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_269894:
    // 0x269894: 0x5500  sll         $t2, $zero, 20
    ctx->pc = 0x269894u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_269898:
    // 0x269898: 0x0  nop
    ctx->pc = 0x269898u;
    // NOP
label_26989c:
    // 0x26989c: 0x0  nop
    ctx->pc = 0x26989cu;
    // NOP
label_2698a0:
    // 0x2698a0: 0x13d7e  dsrl32      $a3, $at, 21
    ctx->pc = 0x2698a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 1) >> (32 + 21));
label_2698a4:
    // 0x2698a4: 0x4ec0  sll         $t1, $zero, 27
    ctx->pc = 0x2698a4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_2698a8:
    // 0x2698a8: 0x0  nop
    ctx->pc = 0x2698a8u;
    // NOP
label_2698ac:
    // 0x2698ac: 0x0  nop
    ctx->pc = 0x2698acu;
    // NOP
label_2698b0:
    // 0x2698b0: 0x13d88  .word       0x00013D88                   # jr          $zero # 00013D80 <InstrIdType: CPU_SPECIAL>
label_2698b4:
    if (ctx->pc == 0x2698B4u) {
        ctx->pc = 0x2698B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2698B0u;
        // 0x2698b4: 0x2180  sll         $a0, $zero, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2698B8u;
        goto label_2698b8;
    }
    ctx->pc = 0x2698B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2698B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2698B0u;
        // 0x2698b4: 0x2180  sll         $a0, $zero, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2698B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2698B8u;
label_2698b8:
    // 0x2698b8: 0x0  nop
    ctx->pc = 0x2698b8u;
    // NOP
label_2698bc:
    // 0x2698bc: 0x0  nop
    ctx->pc = 0x2698bcu;
    // NOP
label_2698c0:
    // 0x2698c0: 0x13d8d  break       1, 246
    ctx->pc = 0x2698c0u;
    runtime->handleBreak(rdram, ctx);
label_2698c4:
    // 0x2698c4: 0x7620  .word       0x00007620                   # add         $t6, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2698c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2698c8:
    // 0x2698c8: 0x0  nop
    ctx->pc = 0x2698c8u;
    // NOP
label_2698cc:
    // 0x2698cc: 0x0  nop
    ctx->pc = 0x2698ccu;
    // NOP
label_2698d0:
    // 0x2698d0: 0x13d9c  .word       0x00013D9C                   # dmult       $zero, $at # 00003D80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2698d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2698D0 raw=0x00013D9C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2698d4:
    // 0x2698d4: 0x8e00  sll         $s1, $zero, 24
    ctx->pc = 0x2698d4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_2698d8:
    // 0x2698d8: 0x0  nop
    ctx->pc = 0x2698d8u;
    // NOP
label_2698dc:
    // 0x2698dc: 0x0  nop
    ctx->pc = 0x2698dcu;
    // NOP
label_2698e0:
    // 0x2698e0: 0x13dae  .word       0x00013DAE                   # dsub        $a3, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2698e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, r); }
label_2698e4:
    // 0x2698e4: 0x50f0  tge         $zero, $zero, 323
    ctx->pc = 0x2698e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2698e8:
    // 0x2698e8: 0x0  nop
    ctx->pc = 0x2698e8u;
    // NOP
label_2698ec:
    // 0x2698ec: 0x0  nop
    ctx->pc = 0x2698ecu;
    // NOP
label_2698f0:
    // 0x2698f0: 0x13db9  .word       0x00013DB9                   # INVALID     $zero, $at, 0x3DB9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2698f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2698F0 raw=0x00013DB9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2698f4:
    // 0x2698f4: 0x5b60  .word       0x00005B60                   # add         $t3, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2698f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2698f8:
    // 0x2698f8: 0x0  nop
    ctx->pc = 0x2698f8u;
    // NOP
label_2698fc:
    // 0x2698fc: 0x0  nop
    ctx->pc = 0x2698fcu;
    // NOP
label_269900:
    // 0x269900: 0x13dc5  .word       0x00013DC5                   # INVALID     $zero, $at, 0x3DC5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269900u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x269900 raw=0x00013DC5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269904:
    // 0x269904: 0x7b20  .word       0x00007B20                   # add         $t7, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269904u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_269908:
    // 0x269908: 0x0  nop
    ctx->pc = 0x269908u;
    // NOP
label_26990c:
    // 0x26990c: 0x0  nop
    ctx->pc = 0x26990cu;
    // NOP
label_269910:
    // 0x269910: 0x13dd5  .word       0x00013DD5                   # INVALID     $zero, $at, 0x3DD5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269910u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x269910 raw=0x00013DD5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269914:
    // 0x269914: 0x90d0  .word       0x000090D0                   # mfhi        $s2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269914u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_269918:
    // 0x269918: 0x0  nop
    ctx->pc = 0x269918u;
    // NOP
label_26991c:
    // 0x26991c: 0x0  nop
    ctx->pc = 0x26991cu;
    // NOP
label_269920:
    // 0x269920: 0x13de8  .word       0x00013DE8                   # mfsa        $a3 # 000105C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x269920u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_269924:
    // 0x269924: 0xcb60  .word       0x0000CB60                   # add         $t9, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269924u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_269928:
    // 0x269928: 0x0  nop
    ctx->pc = 0x269928u;
    // NOP
label_26992c:
    // 0x26992c: 0x0  nop
    ctx->pc = 0x26992cu;
    // NOP
label_269930:
    // 0x269930: 0x13e02  srl         $a3, $at, 24
    ctx->pc = 0x269930u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 1), 24));
label_269934:
    // 0x269934: 0x4c40  sll         $t1, $zero, 17
    ctx->pc = 0x269934u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_269938:
    // 0x269938: 0x0  nop
    ctx->pc = 0x269938u;
    // NOP
label_26993c:
    // 0x26993c: 0x0  nop
    ctx->pc = 0x26993cu;
    // NOP
label_269940:
    // 0x269940: 0x13e0c  .word       0x00013E0C                   # syscall     248 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269940u;
    ctx->pc = 0x269944u;
runtime->handleSyscall(rdram, ctx, 0x4F8u);
label_269944:
    // 0x269944: 0x76a0  .word       0x000076A0                   # add         $t6, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269944u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_269948:
    // 0x269948: 0x0  nop
    ctx->pc = 0x269948u;
    // NOP
label_26994c:
    // 0x26994c: 0x0  nop
    ctx->pc = 0x26994cu;
    // NOP
label_269950:
    // 0x269950: 0x13e1b  .word       0x00013E1B                   # divu        $a3, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269950u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_269954:
    // 0x269954: 0x110f0  tge         $zero, $at, 67
    ctx->pc = 0x269954u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_269958:
    // 0x269958: 0x0  nop
    ctx->pc = 0x269958u;
    // NOP
label_26995c:
    // 0x26995c: 0x0  nop
    ctx->pc = 0x26995cu;
    // NOP
label_269960:
    // 0x269960: 0x13e3e  dsrl32      $a3, $at, 24
    ctx->pc = 0x269960u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 1) >> (32 + 24));
label_269964:
    // 0x269964: 0xabe0  .word       0x0000ABE0                   # add         $s5, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269964u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_269968:
    // 0x269968: 0x0  nop
    ctx->pc = 0x269968u;
    // NOP
label_26996c:
    // 0x26996c: 0x0  nop
    ctx->pc = 0x26996cu;
    // NOP
label_269970:
    // 0x269970: 0x13e54  .word       0x00013E54                   # dsllv       $a3, $at, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269970u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_269974:
    // 0x269974: 0x11880  sll         $v1, $at, 2
    ctx->pc = 0x269974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 2));
label_269978:
    // 0x269978: 0x0  nop
    ctx->pc = 0x269978u;
    // NOP
label_26997c:
    // 0x26997c: 0x0  nop
    ctx->pc = 0x26997cu;
    // NOP
label_269980:
    // 0x269980: 0x13e78  dsll        $a3, $at, 25
    ctx->pc = 0x269980u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 1) << 25);
label_269984:
    // 0x269984: 0xae00  sll         $s5, $zero, 24
    ctx->pc = 0x269984u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_269988:
    // 0x269988: 0x0  nop
    ctx->pc = 0x269988u;
    // NOP
label_26998c:
    // 0x26998c: 0x0  nop
    ctx->pc = 0x26998cu;
    // NOP
label_269990:
    // 0x269990: 0x13e8e  .word       0x00013E8E                   # INVALID     $zero, $at, 0x3E8E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269990u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x269990 raw=0x00013E8E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269994:
    // 0x269994: 0xb7d0  .word       0x0000B7D0                   # mfhi        $s6 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269994u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_269998:
    // 0x269998: 0x0  nop
    ctx->pc = 0x269998u;
    // NOP
label_26999c:
    // 0x26999c: 0x0  nop
    ctx->pc = 0x26999cu;
    // NOP
label_2699a0:
    // 0x2699a0: 0x13ea5  .word       0x00013EA5                   # or          $a3, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2699a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_2699a4:
    // 0x2699a4: 0xb0c0  sll         $s6, $zero, 3
    ctx->pc = 0x2699a4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_2699a8:
    // 0x2699a8: 0x0  nop
    ctx->pc = 0x2699a8u;
    // NOP
label_2699ac:
    // 0x2699ac: 0x0  nop
    ctx->pc = 0x2699acu;
    // NOP
label_2699b0:
    // 0x2699b0: 0x13ebc  dsll32      $a3, $at, 26
    ctx->pc = 0x2699b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 1) << (32 + 26));
label_2699b4:
    // 0x2699b4: 0x9360  .word       0x00009360                   # add         $s2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2699b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2699b8:
    // 0x2699b8: 0x0  nop
    ctx->pc = 0x2699b8u;
    // NOP
label_2699bc:
    // 0x2699bc: 0x0  nop
    ctx->pc = 0x2699bcu;
    // NOP
label_2699c0:
    // 0x2699c0: 0x13ecf  .word       0x00013ECF                   # sync.p # 00013800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2699c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2699c4:
    // 0x2699c4: 0x79d0  .word       0x000079D0                   # mfhi        $t7 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2699c4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_2699c8:
    // 0x2699c8: 0x0  nop
    ctx->pc = 0x2699c8u;
    // NOP
label_2699cc:
    // 0x2699cc: 0x0  nop
    ctx->pc = 0x2699ccu;
    // NOP
label_2699d0:
    // 0x2699d0: 0x13edf  .word       0x00013EDF                   # ddivu       $a3, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2699d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2699D0 raw=0x00013EDF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2699d4:
    // 0x2699d4: 0x3d00  sll         $a3, $zero, 20
    ctx->pc = 0x2699d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_2699d8:
    // 0x2699d8: 0x0  nop
    ctx->pc = 0x2699d8u;
    // NOP
label_2699dc:
    // 0x2699dc: 0x0  nop
    ctx->pc = 0x2699dcu;
    // NOP
label_2699e0:
    // 0x2699e0: 0x13ee7  .word       0x00013EE7                   # nor         $a3, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2699e0u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_2699e4:
    // 0x2699e4: 0x6aa0  .word       0x00006AA0                   # add         $t5, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2699e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2699e8:
    // 0x2699e8: 0x0  nop
    ctx->pc = 0x2699e8u;
    // NOP
label_2699ec:
    // 0x2699ec: 0x0  nop
    ctx->pc = 0x2699ecu;
    // NOP
label_2699f0:
    // 0x2699f0: 0x13ef5  .word       0x00013EF5                   # INVALID     $zero, $at, 0x3EF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2699f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2699F0 raw=0x00013EF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2699f4:
    // 0x2699f4: 0x6880  sll         $t5, $zero, 2
    ctx->pc = 0x2699f4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_2699f8:
    // 0x2699f8: 0x0  nop
    ctx->pc = 0x2699f8u;
    // NOP
label_2699fc:
    // 0x2699fc: 0x0  nop
    ctx->pc = 0x2699fcu;
    // NOP
label_269a00:
    // 0x269a00: 0x13f03  sra         $a3, $at, 28
    ctx->pc = 0x269a00u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 1), 28));
label_269a04:
    // 0x269a04: 0x87a0  .word       0x000087A0                   # add         $s0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269a04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_269a08:
    // 0x269a08: 0x0  nop
    ctx->pc = 0x269a08u;
    // NOP
label_269a0c:
    // 0x269a0c: 0x0  nop
    ctx->pc = 0x269a0cu;
    // NOP
label_269a10:
    // 0x269a10: 0x13f14  .word       0x00013F14                   # dsllv       $a3, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269a10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_269a14:
    // 0x269a14: 0xcd00  sll         $t9, $zero, 20
    ctx->pc = 0x269a14u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_269a18:
    // 0x269a18: 0x0  nop
    ctx->pc = 0x269a18u;
    // NOP
label_269a1c:
    // 0x269a1c: 0x0  nop
    ctx->pc = 0x269a1cu;
    // NOP
label_269a20:
    // 0x269a20: 0x13f2e  .word       0x00013F2E                   # dsub        $a3, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269a20u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, r); }
label_269a24:
    // 0x269a24: 0x8df0  tge         $zero, $zero, 567
    ctx->pc = 0x269a24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269a28:
    // 0x269a28: 0x0  nop
    ctx->pc = 0x269a28u;
    // NOP
label_269a2c:
    // 0x269a2c: 0x0  nop
    ctx->pc = 0x269a2cu;
    // NOP
label_269a30:
    // 0x269a30: 0x13f40  sll         $a3, $at, 29
    ctx->pc = 0x269a30u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 29));
label_269a34:
    // 0x269a34: 0xacf0  tge         $zero, $zero, 691
    ctx->pc = 0x269a34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269a38:
    // 0x269a38: 0x0  nop
    ctx->pc = 0x269a38u;
    // NOP
label_269a3c:
    // 0x269a3c: 0x0  nop
    ctx->pc = 0x269a3cu;
    // NOP
label_269a40:
    // 0x269a40: 0x13f56  .word       0x00013F56                   # dsrlv       $a3, $at, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269a40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_269a44:
    // 0x269a44: 0xa180  sll         $s4, $zero, 6
    ctx->pc = 0x269a44u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_269a48:
    // 0x269a48: 0x0  nop
    ctx->pc = 0x269a48u;
    // NOP
label_269a4c:
    // 0x269a4c: 0x0  nop
    ctx->pc = 0x269a4cu;
    // NOP
label_269a50:
    // 0x269a50: 0x13f6b  .word       0x00013F6B                   # sltu        $a3, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269a50u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_269a54:
    // 0x269a54: 0x78c0  sll         $t7, $zero, 3
    ctx->pc = 0x269a54u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_269a58:
    // 0x269a58: 0x0  nop
    ctx->pc = 0x269a58u;
    // NOP
label_269a5c:
    // 0x269a5c: 0x0  nop
    ctx->pc = 0x269a5cu;
    // NOP
label_269a60:
    // 0x269a60: 0x13f7b  dsra        $a3, $at, 29
    ctx->pc = 0x269a60u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 1) >> 29);
label_269a64:
    // 0x269a64: 0xc680  sll         $t8, $zero, 26
    ctx->pc = 0x269a64u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_269a68:
    // 0x269a68: 0x0  nop
    ctx->pc = 0x269a68u;
    // NOP
label_269a6c:
    // 0x269a6c: 0x0  nop
    ctx->pc = 0x269a6cu;
    // NOP
label_269a70:
    // 0x269a70: 0x13f94  .word       0x00013F94                   # dsllv       $a3, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269a70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_269a74:
    // 0x269a74: 0x8540  sll         $s0, $zero, 21
    ctx->pc = 0x269a74u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_269a78:
    // 0x269a78: 0x0  nop
    ctx->pc = 0x269a78u;
    // NOP
label_269a7c:
    // 0x269a7c: 0x0  nop
    ctx->pc = 0x269a7cu;
    // NOP
label_269a80:
    // 0x269a80: 0x13fa5  .word       0x00013FA5                   # or          $a3, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269a80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_269a84:
    // 0x269a84: 0xd410  .word       0x0000D410                   # mfhi        $k0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269a84u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_269a88:
    // 0x269a88: 0x0  nop
    ctx->pc = 0x269a88u;
    // NOP
label_269a8c:
    // 0x269a8c: 0x0  nop
    ctx->pc = 0x269a8cu;
    // NOP
label_269a90:
    // 0x269a90: 0x13fc0  sll         $a3, $at, 31
    ctx->pc = 0x269a90u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 31));
label_269a94:
    // 0x269a94: 0xe400  sll         $gp, $zero, 16
    ctx->pc = 0x269a94u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_269a98:
    // 0x269a98: 0x0  nop
    ctx->pc = 0x269a98u;
    // NOP
label_269a9c:
    // 0x269a9c: 0x0  nop
    ctx->pc = 0x269a9cu;
    // NOP
label_269aa0:
    // 0x269aa0: 0x13fdd  .word       0x00013FDD                   # dmultu      $zero, $at # 00003FC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269aa0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x269AA0 raw=0x00013FDD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269aa4:
    // 0x269aa4: 0x12590  .word       0x00012590                   # mfhi        $a0 # 00010580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269aa4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_269aa8:
    // 0x269aa8: 0x0  nop
    ctx->pc = 0x269aa8u;
    // NOP
label_269aac:
    // 0x269aac: 0x0  nop
    ctx->pc = 0x269aacu;
    // NOP
label_269ab0:
    // 0x269ab0: 0x14002  srl         $t0, $at, 0
    ctx->pc = 0x269ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 1), 0));
label_269ab4:
    // 0x269ab4: 0xc410  .word       0x0000C410                   # mfhi        $t8 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269ab4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_269ab8:
    // 0x269ab8: 0x0  nop
    ctx->pc = 0x269ab8u;
    // NOP
label_269abc:
    // 0x269abc: 0x0  nop
    ctx->pc = 0x269abcu;
    // NOP
label_269ac0:
    // 0x269ac0: 0x1401b  divu        $t0, $zero, $at
    ctx->pc = 0x269ac0u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_269ac4:
    // 0x269ac4: 0xcad0  .word       0x0000CAD0                   # mfhi        $t9 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269ac4u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_269ac8:
    // 0x269ac8: 0x0  nop
    ctx->pc = 0x269ac8u;
    // NOP
label_269acc:
    // 0x269acc: 0x0  nop
    ctx->pc = 0x269accu;
    // NOP
label_269ad0:
    // 0x269ad0: 0x14035  .word       0x00014035                   # INVALID     $zero, $at, 0x4035 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269ad0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x269AD0 raw=0x00014035"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269ad4:
    // 0x269ad4: 0x8890  .word       0x00008890                   # mfhi        $s1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269ad4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_269ad8:
    // 0x269ad8: 0x0  nop
    ctx->pc = 0x269ad8u;
    // NOP
label_269adc:
    // 0x269adc: 0x0  nop
    ctx->pc = 0x269adcu;
    // NOP
label_269ae0:
    // 0x269ae0: 0x14047  .word       0x00014047                   # srav        $t0, $at, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269ae0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_269ae4:
    // 0x269ae4: 0x8590  .word       0x00008590                   # mfhi        $s0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269ae4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_269ae8:
    // 0x269ae8: 0x0  nop
    ctx->pc = 0x269ae8u;
    // NOP
label_269aec:
    // 0x269aec: 0x0  nop
    ctx->pc = 0x269aecu;
    // NOP
label_269af0:
    // 0x269af0: 0x14058  .word       0x00014058                   # mult        $t0, $zero, $at # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x269af0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_269af4:
    // 0x269af4: 0xc7f0  tge         $zero, $zero, 799
    ctx->pc = 0x269af4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269af8:
    // 0x269af8: 0x0  nop
    ctx->pc = 0x269af8u;
    // NOP
label_269afc:
    // 0x269afc: 0x0  nop
    ctx->pc = 0x269afcu;
    // NOP
label_269b00:
    // 0x269b00: 0x14071  tgeu        $zero, $at, 257
    ctx->pc = 0x269b00u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_269b04:
    // 0x269b04: 0xad10  .word       0x0000AD10                   # mfhi        $s5 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269b04u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_269b08:
    // 0x269b08: 0x0  nop
    ctx->pc = 0x269b08u;
    // NOP
label_269b0c:
    // 0x269b0c: 0x0  nop
    ctx->pc = 0x269b0cu;
    // NOP
label_269b10:
    // 0x269b10: 0x14087  .word       0x00014087                   # srav        $t0, $at, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269b10u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_269b14:
    // 0x269b14: 0x7d20  .word       0x00007D20                   # add         $t7, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269b14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_269b18:
    // 0x269b18: 0x0  nop
    ctx->pc = 0x269b18u;
    // NOP
label_269b1c:
    // 0x269b1c: 0x0  nop
    ctx->pc = 0x269b1cu;
    // NOP
label_269b20:
    // 0x269b20: 0x14097  .word       0x00014097                   # dsrav       $t0, $at, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269b20u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_269b24:
    // 0x269b24: 0xeed0  .word       0x0000EED0                   # mfhi        $sp # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269b24u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_269b28:
    // 0x269b28: 0x0  nop
    ctx->pc = 0x269b28u;
    // NOP
label_269b2c:
    // 0x269b2c: 0x0  nop
    ctx->pc = 0x269b2cu;
    // NOP
label_269b30:
    // 0x269b30: 0x140b5  .word       0x000140B5                   # INVALID     $zero, $at, 0x40B5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269b30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x269B30 raw=0x000140B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269b34:
    // 0x269b34: 0xa3e0  .word       0x0000A3E0                   # add         $s4, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269b34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_269b38:
    // 0x269b38: 0x0  nop
    ctx->pc = 0x269b38u;
    // NOP
label_269b3c:
    // 0x269b3c: 0x0  nop
    ctx->pc = 0x269b3cu;
    // NOP
label_269b40:
    // 0x269b40: 0x140ca  .word       0x000140CA                   # movz        $t0, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269b40u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_269b44:
    // 0x269b44: 0xbd40  sll         $s7, $zero, 21
    ctx->pc = 0x269b44u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_269b48:
    // 0x269b48: 0x0  nop
    ctx->pc = 0x269b48u;
    // NOP
label_269b4c:
    // 0x269b4c: 0x0  nop
    ctx->pc = 0x269b4cu;
    // NOP
label_269b50:
    // 0x269b50: 0x140e2  .word       0x000140E2                   # neg         $t0, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269b50u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_269b54:
    // 0x269b54: 0xacf0  tge         $zero, $zero, 691
    ctx->pc = 0x269b54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269b58:
    // 0x269b58: 0x0  nop
    ctx->pc = 0x269b58u;
    // NOP
label_269b5c:
    // 0x269b5c: 0x0  nop
    ctx->pc = 0x269b5cu;
    // NOP
label_269b60:
    // 0x269b60: 0x140f8  dsll        $t0, $at, 3
    ctx->pc = 0x269b60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 1) << 3);
label_269b64:
    // 0x269b64: 0x82d0  .word       0x000082D0                   # mfhi        $s0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269b64u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_269b68:
    // 0x269b68: 0x0  nop
    ctx->pc = 0x269b68u;
    // NOP
label_269b6c:
    // 0x269b6c: 0x0  nop
    ctx->pc = 0x269b6cu;
    // NOP
label_269b70:
    // 0x269b70: 0x14109  .word       0x00014109                   # jalr        $t0, $zero # 00010100 <InstrIdType: CPU_SPECIAL>
label_269b74:
    if (ctx->pc == 0x269B74u) {
        ctx->pc = 0x269B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B70u;
        // 0x269b74: 0x8a00  sll         $s1, $zero, 8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269B78u;
        goto label_269b78;
    }
    ctx->pc = 0x269B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 8, 0x269B78u);
        ctx->pc = 0x269B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B70u;
        // 0x269b74: 0x8a00  sll         $s1, $zero, 8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269B70u, 0x269B78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x269B78u;
label_269b78:
    // 0x269b78: 0x0  nop
    ctx->pc = 0x269b78u;
    // NOP
label_269b7c:
    // 0x269b7c: 0x0  nop
    ctx->pc = 0x269b7cu;
    // NOP
label_269b80:
    // 0x269b80: 0x1411b  .word       0x0001411B                   # divu        $t0, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269b80u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_269b84:
    // 0x269b84: 0x58d0  .word       0x000058D0                   # mfhi        $t3 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269b84u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_269b88:
    // 0x269b88: 0x0  nop
    ctx->pc = 0x269b88u;
    // NOP
label_269b8c:
    // 0x269b8c: 0x0  nop
    ctx->pc = 0x269b8cu;
    // NOP
label_269b90:
    // 0x269b90: 0x14127  .word       0x00014127                   # nor         $t0, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269b90u;
    SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_269b94:
    // 0x269b94: 0x7ec0  sll         $t7, $zero, 27
    ctx->pc = 0x269b94u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_269b98:
    // 0x269b98: 0x0  nop
    ctx->pc = 0x269b98u;
    // NOP
label_269b9c:
    // 0x269b9c: 0x0  nop
    ctx->pc = 0x269b9cu;
    // NOP
label_269ba0:
    // 0x269ba0: 0x14137  .word       0x00014137                   # INVALID     $zero, $at, 0x4137 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269ba0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x269BA0 raw=0x00014137"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269ba4:
    // 0x269ba4: 0x5c80  sll         $t3, $zero, 18
    ctx->pc = 0x269ba4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_269ba8:
    // 0x269ba8: 0x0  nop
    ctx->pc = 0x269ba8u;
    // NOP
label_269bac:
    // 0x269bac: 0x0  nop
    ctx->pc = 0x269bacu;
    // NOP
label_269bb0:
    // 0x269bb0: 0x14143  sra         $t0, $at, 5
    ctx->pc = 0x269bb0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 1), 5));
label_269bb4:
    // 0x269bb4: 0x4a10  .word       0x00004A10                   # mfhi        $t1 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269bb4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_269bb8:
    // 0x269bb8: 0x0  nop
    ctx->pc = 0x269bb8u;
    // NOP
label_269bbc:
    // 0x269bbc: 0x0  nop
    ctx->pc = 0x269bbcu;
    // NOP
label_269bc0:
    // 0x269bc0: 0x1414d  break       1, 261
    ctx->pc = 0x269bc0u;
    runtime->handleBreak(rdram, ctx);
label_269bc4:
    // 0x269bc4: 0x4430  tge         $zero, $zero, 272
    ctx->pc = 0x269bc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269bc8:
    // 0x269bc8: 0x0  nop
    ctx->pc = 0x269bc8u;
    // NOP
label_269bcc:
    // 0x269bcc: 0x0  nop
    ctx->pc = 0x269bccu;
    // NOP
label_269bd0:
    // 0x269bd0: 0x14156  .word       0x00014156                   # dsrlv       $t0, $at, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269bd0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_269bd4:
    // 0x269bd4: 0x78f0  tge         $zero, $zero, 483
    ctx->pc = 0x269bd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269bd8:
    // 0x269bd8: 0x0  nop
    ctx->pc = 0x269bd8u;
    // NOP
label_269bdc:
    // 0x269bdc: 0x0  nop
    ctx->pc = 0x269bdcu;
    // NOP
label_269be0:
    // 0x269be0: 0x14166  .word       0x00014166                   # xor         $t0, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269be0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_269be4:
    // 0x269be4: 0xa5e0  .word       0x0000A5E0                   # add         $s4, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269be4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_269be8:
    // 0x269be8: 0x0  nop
    ctx->pc = 0x269be8u;
    // NOP
label_269bec:
    // 0x269bec: 0x0  nop
    ctx->pc = 0x269becu;
    // NOP
label_269bf0:
    // 0x269bf0: 0x1417b  dsra        $t0, $at, 5
    ctx->pc = 0x269bf0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> 5);
label_269bf4:
    // 0x269bf4: 0xcf60  .word       0x0000CF60                   # add         $t9, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269bf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_269bf8:
    // 0x269bf8: 0x0  nop
    ctx->pc = 0x269bf8u;
    // NOP
label_269bfc:
    // 0x269bfc: 0x0  nop
    ctx->pc = 0x269bfcu;
    // NOP
label_269c00:
    // 0x269c00: 0x14195  .word       0x00014195                   # INVALID     $zero, $at, 0x4195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269c00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x269C00 raw=0x00014195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269c04:
    // 0x269c04: 0xac60  .word       0x0000AC60                   # add         $s5, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269c04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_269c08:
    // 0x269c08: 0x0  nop
    ctx->pc = 0x269c08u;
    // NOP
label_269c0c:
    // 0x269c0c: 0x0  nop
    ctx->pc = 0x269c0cu;
    // NOP
label_269c10:
    // 0x269c10: 0x141ab  .word       0x000141AB                   # sltu        $t0, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269c10u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_269c14:
    // 0x269c14: 0x5690  .word       0x00005690                   # mfhi        $t2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269c14u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_269c18:
    // 0x269c18: 0x0  nop
    ctx->pc = 0x269c18u;
    // NOP
label_269c1c:
    // 0x269c1c: 0x0  nop
    ctx->pc = 0x269c1cu;
    // NOP
label_269c20:
    // 0x269c20: 0x141b6  tne         $zero, $at, 262
    ctx->pc = 0x269c20u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_269c24:
    // 0x269c24: 0x8330  tge         $zero, $zero, 524
    ctx->pc = 0x269c24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269c28:
    // 0x269c28: 0x0  nop
    ctx->pc = 0x269c28u;
    // NOP
label_269c2c:
    // 0x269c2c: 0x0  nop
    ctx->pc = 0x269c2cu;
    // NOP
label_269c30:
    // 0x269c30: 0x141c7  .word       0x000141C7                   # srav        $t0, $at, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269c30u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_269c34:
    // 0x269c34: 0xaf20  .word       0x0000AF20                   # add         $s5, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269c34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_269c38:
    // 0x269c38: 0x0  nop
    ctx->pc = 0x269c38u;
    // NOP
label_269c3c:
    // 0x269c3c: 0x0  nop
    ctx->pc = 0x269c3cu;
    // NOP
label_269c40:
    // 0x269c40: 0x141dd  .word       0x000141DD                   # dmultu      $zero, $at # 000041C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269c40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x269C40 raw=0x000141DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269c44:
    // 0x269c44: 0x9500  sll         $s2, $zero, 20
    ctx->pc = 0x269c44u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_269c48:
    // 0x269c48: 0x0  nop
    ctx->pc = 0x269c48u;
    // NOP
label_269c4c:
    // 0x269c4c: 0x0  nop
    ctx->pc = 0x269c4cu;
    // NOP
label_269c50:
    // 0x269c50: 0x141f0  tge         $zero, $at, 263
    ctx->pc = 0x269c50u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_269c54:
    // 0x269c54: 0x8300  sll         $s0, $zero, 12
    ctx->pc = 0x269c54u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_269c58:
    // 0x269c58: 0x0  nop
    ctx->pc = 0x269c58u;
    // NOP
label_269c5c:
    // 0x269c5c: 0x0  nop
    ctx->pc = 0x269c5cu;
    // NOP
label_269c60:
    // 0x269c60: 0x14201  .word       0x00014201                   # INVALID     $zero, $at, 0x4201 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269c60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x269C60 raw=0x00014201"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269c64:
    // 0x269c64: 0xcbd0  .word       0x0000CBD0                   # mfhi        $t9 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269c64u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_269c68:
    // 0x269c68: 0x0  nop
    ctx->pc = 0x269c68u;
    // NOP
label_269c6c:
    // 0x269c6c: 0x0  nop
    ctx->pc = 0x269c6cu;
    // NOP
label_269c70:
    // 0x269c70: 0x1421b  .word       0x0001421B                   # divu        $t0, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269c70u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_269c74:
    // 0x269c74: 0xedc0  sll         $sp, $zero, 23
    ctx->pc = 0x269c74u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_269c78:
    // 0x269c78: 0x0  nop
    ctx->pc = 0x269c78u;
    // NOP
label_269c7c:
    // 0x269c7c: 0x0  nop
    ctx->pc = 0x269c7cu;
    // NOP
label_269c80:
    // 0x269c80: 0x14239  .word       0x00014239                   # INVALID     $zero, $at, 0x4239 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269c80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x269C80 raw=0x00014239"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269c84:
    // 0x269c84: 0x1730  tge         $zero, $zero, 92
    ctx->pc = 0x269c84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269c88:
    // 0x269c88: 0x0  nop
    ctx->pc = 0x269c88u;
    // NOP
label_269c8c:
    // 0x269c8c: 0x0  nop
    ctx->pc = 0x269c8cu;
    // NOP
label_269c90:
    // 0x269c90: 0x1423c  dsll32      $t0, $at, 8
    ctx->pc = 0x269c90u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 1) << (32 + 8));
label_269c94:
    // 0x269c94: 0x4430  tge         $zero, $zero, 272
    ctx->pc = 0x269c94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269c98:
    // 0x269c98: 0x0  nop
    ctx->pc = 0x269c98u;
    // NOP
label_269c9c:
    // 0x269c9c: 0x0  nop
    ctx->pc = 0x269c9cu;
    // NOP
label_269ca0:
    // 0x269ca0: 0x14245  .word       0x00014245                   # INVALID     $zero, $at, 0x4245 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269ca0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x269CA0 raw=0x00014245"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269ca4:
    // 0x269ca4: 0x79c0  sll         $t7, $zero, 7
    ctx->pc = 0x269ca4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_269ca8:
    // 0x269ca8: 0x0  nop
    ctx->pc = 0x269ca8u;
    // NOP
label_269cac:
    // 0x269cac: 0x0  nop
    ctx->pc = 0x269cacu;
    // NOP
label_269cb0:
    // 0x269cb0: 0x14255  .word       0x00014255                   # INVALID     $zero, $at, 0x4255 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269cb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x269CB0 raw=0x00014255"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269cb4:
    // 0x269cb4: 0x7040  sll         $t6, $zero, 1
    ctx->pc = 0x269cb4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_269cb8:
    // 0x269cb8: 0x0  nop
    ctx->pc = 0x269cb8u;
    // NOP
label_269cbc:
    // 0x269cbc: 0x0  nop
    ctx->pc = 0x269cbcu;
    // NOP
label_269cc0:
    // 0x269cc0: 0x14264  .word       0x00014264                   # and         $t0, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269cc0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_269cc4:
    // 0x269cc4: 0x82f0  tge         $zero, $zero, 523
    ctx->pc = 0x269cc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269cc8:
    // 0x269cc8: 0x0  nop
    ctx->pc = 0x269cc8u;
    // NOP
label_269ccc:
    // 0x269ccc: 0x0  nop
    ctx->pc = 0x269cccu;
    // NOP
label_269cd0:
    // 0x269cd0: 0x14275  .word       0x00014275                   # INVALID     $zero, $at, 0x4275 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269cd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x269CD0 raw=0x00014275"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269cd4:
    // 0x269cd4: 0x9820  add         $s3, $zero, $zero
    ctx->pc = 0x269cd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_269cd8:
    // 0x269cd8: 0x0  nop
    ctx->pc = 0x269cd8u;
    // NOP
label_269cdc:
    // 0x269cdc: 0x0  nop
    ctx->pc = 0x269cdcu;
    // NOP
label_269ce0:
    // 0x269ce0: 0x14289  .word       0x00014289                   # jalr        $t0, $zero # 00010280 <InstrIdType: CPU_SPECIAL>
label_269ce4:
    if (ctx->pc == 0x269CE4u) {
        ctx->pc = 0x269CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269CE0u;
        // 0x269ce4: 0xac40  sll         $s5, $zero, 17 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269CE8u;
        goto label_269ce8;
    }
    ctx->pc = 0x269CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 8, 0x269CE8u);
        ctx->pc = 0x269CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269CE0u;
        // 0x269ce4: 0xac40  sll         $s5, $zero, 17 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269CE0u, 0x269CE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x269CE8u;
label_269ce8:
    // 0x269ce8: 0x0  nop
    ctx->pc = 0x269ce8u;
    // NOP
label_269cec:
    // 0x269cec: 0x0  nop
    ctx->pc = 0x269cecu;
    // NOP
label_269cf0:
    // 0x269cf0: 0x1429f  .word       0x0001429F                   # ddivu       $t0, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269cf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x269CF0 raw=0x0001429F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269cf4:
    // 0x269cf4: 0xb370  tge         $zero, $zero, 717
    ctx->pc = 0x269cf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269cf8:
    // 0x269cf8: 0x0  nop
    ctx->pc = 0x269cf8u;
    // NOP
label_269cfc:
    // 0x269cfc: 0x0  nop
    ctx->pc = 0x269cfcu;
    // NOP
label_269d00:
    // 0x269d00: 0x142b6  tne         $zero, $at, 266
    ctx->pc = 0x269d00u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_269d04:
    // 0x269d04: 0x8f10  .word       0x00008F10                   # mfhi        $s1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269d04u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_269d08:
    // 0x269d08: 0x0  nop
    ctx->pc = 0x269d08u;
    // NOP
label_269d0c:
    // 0x269d0c: 0x0  nop
    ctx->pc = 0x269d0cu;
    // NOP
label_269d10:
    // 0x269d10: 0x142c8  .word       0x000142C8                   # jr          $zero # 000142C0 <InstrIdType: CPU_SPECIAL>
label_269d14:
    if (ctx->pc == 0x269D14u) {
        ctx->pc = 0x269D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D10u;
        // 0x269d14: 0x9500  sll         $s2, $zero, 20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269D18u;
        goto label_269d18;
    }
    ctx->pc = 0x269D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x269D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D10u;
        // 0x269d14: 0x9500  sll         $s2, $zero, 20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269D10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x269D18u;
label_269d18:
    // 0x269d18: 0x0  nop
    ctx->pc = 0x269d18u;
    // NOP
label_269d1c:
    // 0x269d1c: 0x0  nop
    ctx->pc = 0x269d1cu;
    // NOP
label_269d20:
    // 0x269d20: 0x142db  .word       0x000142DB                   # divu        $t0, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269d20u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_269d24:
    // 0x269d24: 0x9190  .word       0x00009190                   # mfhi        $s2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269d24u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_269d28:
    // 0x269d28: 0x0  nop
    ctx->pc = 0x269d28u;
    // NOP
label_269d2c:
    // 0x269d2c: 0x0  nop
    ctx->pc = 0x269d2cu;
    // NOP
label_269d30:
    // 0x269d30: 0x142ee  .word       0x000142EE                   # dsub        $t0, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269d30u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_269d34:
    // 0x269d34: 0xab50  .word       0x0000AB50                   # mfhi        $s5 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269d34u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_269d38:
    // 0x269d38: 0x0  nop
    ctx->pc = 0x269d38u;
    // NOP
label_269d3c:
    // 0x269d3c: 0x0  nop
    ctx->pc = 0x269d3cu;
    // NOP
label_269d40:
    // 0x269d40: 0x14304  .word       0x00014304                   # sllv        $t0, $at, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269d40u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_269d44:
    // 0x269d44: 0xb5a0  .word       0x0000B5A0                   # add         $s6, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269d44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_269d48:
    // 0x269d48: 0x0  nop
    ctx->pc = 0x269d48u;
    // NOP
label_269d4c:
    // 0x269d4c: 0x0  nop
    ctx->pc = 0x269d4cu;
    // NOP
label_269d50:
    // 0x269d50: 0x1431b  .word       0x0001431B                   # divu        $t0, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269d50u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_269d54:
    // 0x269d54: 0x6cd0  .word       0x00006CD0                   # mfhi        $t5 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269d54u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_269d58:
    // 0x269d58: 0x0  nop
    ctx->pc = 0x269d58u;
    // NOP
label_269d5c:
    // 0x269d5c: 0x0  nop
    ctx->pc = 0x269d5cu;
    // NOP
label_269d60:
    // 0x269d60: 0x14329  .word       0x00014329                   # mtsa        $zero # 00014300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x269d60u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_269d64:
    // 0x269d64: 0x9a70  tge         $zero, $zero, 617
    ctx->pc = 0x269d64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269d68:
    // 0x269d68: 0x0  nop
    ctx->pc = 0x269d68u;
    // NOP
label_269d6c:
    // 0x269d6c: 0x0  nop
    ctx->pc = 0x269d6cu;
    // NOP
label_269d70:
    // 0x269d70: 0x1433d  .word       0x0001433D                   # INVALID     $zero, $at, 0x433D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269d70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x269D70 raw=0x0001433D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269d74:
    // 0x269d74: 0x81e0  .word       0x000081E0                   # add         $s0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269d74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_269d78:
    // 0x269d78: 0x0  nop
    ctx->pc = 0x269d78u;
    // NOP
label_269d7c:
    // 0x269d7c: 0x0  nop
    ctx->pc = 0x269d7cu;
    // NOP
label_269d80:
    // 0x269d80: 0x1434e  .word       0x0001434E                   # INVALID     $zero, $at, 0x434E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269d80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x269D80 raw=0x0001434E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269d84:
    // 0x269d84: 0x80c0  sll         $s0, $zero, 3
    ctx->pc = 0x269d84u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_269d88:
    // 0x269d88: 0x0  nop
    ctx->pc = 0x269d88u;
    // NOP
label_269d8c:
    // 0x269d8c: 0x0  nop
    ctx->pc = 0x269d8cu;
    // NOP
label_269d90:
    // 0x269d90: 0x1435f  .word       0x0001435F                   # ddivu       $t0, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269d90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x269D90 raw=0x0001435F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269d94:
    // 0x269d94: 0x8770  tge         $zero, $zero, 541
    ctx->pc = 0x269d94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269d98:
    // 0x269d98: 0x0  nop
    ctx->pc = 0x269d98u;
    // NOP
label_269d9c:
    // 0x269d9c: 0x0  nop
    ctx->pc = 0x269d9cu;
    // NOP
label_269da0:
    // 0x269da0: 0x14370  tge         $zero, $at, 269
    ctx->pc = 0x269da0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_269da4:
    // 0x269da4: 0x6c40  sll         $t5, $zero, 17
    ctx->pc = 0x269da4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_269da8:
    // 0x269da8: 0x0  nop
    ctx->pc = 0x269da8u;
    // NOP
label_269dac:
    // 0x269dac: 0x0  nop
    ctx->pc = 0x269dacu;
    // NOP
label_269db0:
    // 0x269db0: 0x1437e  dsrl32      $t0, $at, 13
    ctx->pc = 0x269db0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 1) >> (32 + 13));
label_269db4:
    // 0x269db4: 0x7f40  sll         $t7, $zero, 29
    ctx->pc = 0x269db4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_269db8:
    // 0x269db8: 0x0  nop
    ctx->pc = 0x269db8u;
    // NOP
label_269dbc:
    // 0x269dbc: 0x0  nop
    ctx->pc = 0x269dbcu;
    // NOP
label_269dc0:
    // 0x269dc0: 0x1438e  .word       0x0001438E                   # INVALID     $zero, $at, 0x438E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269dc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x269DC0 raw=0x0001438E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269dc4:
    // 0x269dc4: 0x5ac0  sll         $t3, $zero, 11
    ctx->pc = 0x269dc4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_269dc8:
    // 0x269dc8: 0x0  nop
    ctx->pc = 0x269dc8u;
    // NOP
label_269dcc:
    // 0x269dcc: 0x0  nop
    ctx->pc = 0x269dccu;
    // NOP
label_269dd0:
    // 0x269dd0: 0x1439a  .word       0x0001439A                   # div         $t0, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269dd0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_269dd4:
    // 0x269dd4: 0xa320  .word       0x0000A320                   # add         $s4, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269dd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_269dd8:
    // 0x269dd8: 0x0  nop
    ctx->pc = 0x269dd8u;
    // NOP
label_269ddc:
    // 0x269ddc: 0x0  nop
    ctx->pc = 0x269ddcu;
    // NOP
label_269de0:
    // 0x269de0: 0x143af  .word       0x000143AF                   # dsubu       $t0, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269de0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_269de4:
    // 0x269de4: 0xb630  tge         $zero, $zero, 728
    ctx->pc = 0x269de4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269de8:
    // 0x269de8: 0x0  nop
    ctx->pc = 0x269de8u;
    // NOP
label_269dec:
    // 0x269dec: 0x0  nop
    ctx->pc = 0x269decu;
    // NOP
label_269df0:
    // 0x269df0: 0x143c6  .word       0x000143C6                   # srlv        $t0, $at, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269df0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_269df4:
    // 0x269df4: 0xb430  tge         $zero, $zero, 720
    ctx->pc = 0x269df4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269df8:
    // 0x269df8: 0x0  nop
    ctx->pc = 0x269df8u;
    // NOP
label_269dfc:
    // 0x269dfc: 0x0  nop
    ctx->pc = 0x269dfcu;
    // NOP
label_269e00:
    // 0x269e00: 0x143dd  .word       0x000143DD                   # dmultu      $zero, $at # 000043C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269e00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x269E00 raw=0x000143DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269e04:
    // 0x269e04: 0x4380  sll         $t0, $zero, 14
    ctx->pc = 0x269e04u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_269e08:
    // 0x269e08: 0x0  nop
    ctx->pc = 0x269e08u;
    // NOP
label_269e0c:
    // 0x269e0c: 0x0  nop
    ctx->pc = 0x269e0cu;
    // NOP
label_269e10:
    // 0x269e10: 0x143e6  .word       0x000143E6                   # xor         $t0, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269e10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_269e14:
    // 0x269e14: 0xc3c0  sll         $t8, $zero, 15
    ctx->pc = 0x269e14u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_269e18:
    // 0x269e18: 0x0  nop
    ctx->pc = 0x269e18u;
    // NOP
label_269e1c:
    // 0x269e1c: 0x0  nop
    ctx->pc = 0x269e1cu;
    // NOP
label_269e20:
    // 0x269e20: 0x143ff  dsra32      $t0, $at, 15
    ctx->pc = 0x269e20u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> (32 + 15));
label_269e24:
    // 0x269e24: 0x75c0  sll         $t6, $zero, 23
    ctx->pc = 0x269e24u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_269e28:
    // 0x269e28: 0x0  nop
    ctx->pc = 0x269e28u;
    // NOP
label_269e2c:
    // 0x269e2c: 0x0  nop
    ctx->pc = 0x269e2cu;
    // NOP
label_269e30:
    // 0x269e30: 0x1440e  .word       0x0001440E                   # INVALID     $zero, $at, 0x440E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269e30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x269E30 raw=0x0001440E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269e34:
    // 0x269e34: 0x8350  .word       0x00008350                   # mfhi        $s0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269e34u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_269e38:
    // 0x269e38: 0x0  nop
    ctx->pc = 0x269e38u;
    // NOP
label_269e3c:
    // 0x269e3c: 0x0  nop
    ctx->pc = 0x269e3cu;
    // NOP
label_269e40:
    // 0x269e40: 0x1441f  .word       0x0001441F                   # ddivu       $t0, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269e40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x269E40 raw=0x0001441F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269e44:
    // 0x269e44: 0x6650  .word       0x00006650                   # mfhi        $t4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269e44u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_269e48:
    // 0x269e48: 0x0  nop
    ctx->pc = 0x269e48u;
    // NOP
label_269e4c:
    // 0x269e4c: 0x0  nop
    ctx->pc = 0x269e4cu;
    // NOP
label_269e50:
    // 0x269e50: 0x1442c  .word       0x0001442C                   # dadd        $t0, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269e50u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_269e54:
    // 0x269e54: 0xb720  .word       0x0000B720                   # add         $s6, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269e54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_269e58:
    // 0x269e58: 0x0  nop
    ctx->pc = 0x269e58u;
    // NOP
label_269e5c:
    // 0x269e5c: 0x0  nop
    ctx->pc = 0x269e5cu;
    // NOP
label_269e60:
    // 0x269e60: 0x14443  sra         $t0, $at, 17
    ctx->pc = 0x269e60u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 1), 17));
label_269e64:
    // 0x269e64: 0x77b0  tge         $zero, $zero, 478
    ctx->pc = 0x269e64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269e68:
    // 0x269e68: 0x0  nop
    ctx->pc = 0x269e68u;
    // NOP
label_269e6c:
    // 0x269e6c: 0x0  nop
    ctx->pc = 0x269e6cu;
    // NOP
label_269e70:
    // 0x269e70: 0x14452  .word       0x00014452                   # mflo        $t0 # 00010440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269e70u;
    SET_GPR_U64(ctx, 8, ctx->lo);
label_269e74:
    // 0x269e74: 0x6280  sll         $t4, $zero, 10
    ctx->pc = 0x269e74u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_269e78:
    // 0x269e78: 0x0  nop
    ctx->pc = 0x269e78u;
    // NOP
label_269e7c:
    // 0x269e7c: 0x0  nop
    ctx->pc = 0x269e7cu;
    // NOP
label_269e80:
    // 0x269e80: 0x1445f  .word       0x0001445F                   # ddivu       $t0, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269e80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x269E80 raw=0x0001445F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269e84:
    // 0x269e84: 0x7130  tge         $zero, $zero, 452
    ctx->pc = 0x269e84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269e88:
    // 0x269e88: 0x0  nop
    ctx->pc = 0x269e88u;
    // NOP
label_269e8c:
    // 0x269e8c: 0x0  nop
    ctx->pc = 0x269e8cu;
    // NOP
label_269e90:
    // 0x269e90: 0x1446e  .word       0x0001446E                   # dsub        $t0, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269e90u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_269e94:
    // 0x269e94: 0x5ac0  sll         $t3, $zero, 11
    ctx->pc = 0x269e94u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
    ctx->pc = 0x269e98u;
    return;
}
