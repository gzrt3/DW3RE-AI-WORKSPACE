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


void FUN_0014eba0_part496(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2406d0u: goto label_2406d0;
        case 0x2406d4u: goto label_2406d4;
        case 0x2406d8u: goto label_2406d8;
        case 0x2406dcu: goto label_2406dc;
        case 0x2406e0u: goto label_2406e0;
        case 0x2406e4u: goto label_2406e4;
        case 0x2406e8u: goto label_2406e8;
        case 0x2406ecu: goto label_2406ec;
        case 0x2406f0u: goto label_2406f0;
        case 0x2406f4u: goto label_2406f4;
        case 0x2406f8u: goto label_2406f8;
        case 0x2406fcu: goto label_2406fc;
        case 0x240700u: goto label_240700;
        case 0x240704u: goto label_240704;
        case 0x240708u: goto label_240708;
        case 0x24070cu: goto label_24070c;
        case 0x240710u: goto label_240710;
        case 0x240714u: goto label_240714;
        case 0x240718u: goto label_240718;
        case 0x24071cu: goto label_24071c;
        case 0x240720u: goto label_240720;
        case 0x240724u: goto label_240724;
        case 0x240728u: goto label_240728;
        case 0x24072cu: goto label_24072c;
        case 0x240730u: goto label_240730;
        case 0x240734u: goto label_240734;
        case 0x240738u: goto label_240738;
        case 0x24073cu: goto label_24073c;
        case 0x240740u: goto label_240740;
        case 0x240744u: goto label_240744;
        case 0x240748u: goto label_240748;
        case 0x24074cu: goto label_24074c;
        case 0x240750u: goto label_240750;
        case 0x240754u: goto label_240754;
        case 0x240758u: goto label_240758;
        case 0x24075cu: goto label_24075c;
        case 0x240760u: goto label_240760;
        case 0x240764u: goto label_240764;
        case 0x240768u: goto label_240768;
        case 0x24076cu: goto label_24076c;
        case 0x240770u: goto label_240770;
        case 0x240774u: goto label_240774;
        case 0x240778u: goto label_240778;
        case 0x24077cu: goto label_24077c;
        case 0x240780u: goto label_240780;
        case 0x240784u: goto label_240784;
        case 0x240788u: goto label_240788;
        case 0x24078cu: goto label_24078c;
        case 0x240790u: goto label_240790;
        case 0x240794u: goto label_240794;
        case 0x240798u: goto label_240798;
        case 0x24079cu: goto label_24079c;
        case 0x2407a0u: goto label_2407a0;
        case 0x2407a4u: goto label_2407a4;
        case 0x2407a8u: goto label_2407a8;
        case 0x2407acu: goto label_2407ac;
        case 0x2407b0u: goto label_2407b0;
        case 0x2407b4u: goto label_2407b4;
        case 0x2407b8u: goto label_2407b8;
        case 0x2407bcu: goto label_2407bc;
        case 0x2407c0u: goto label_2407c0;
        case 0x2407c4u: goto label_2407c4;
        case 0x2407c8u: goto label_2407c8;
        case 0x2407ccu: goto label_2407cc;
        case 0x2407d0u: goto label_2407d0;
        case 0x2407d4u: goto label_2407d4;
        case 0x2407d8u: goto label_2407d8;
        case 0x2407dcu: goto label_2407dc;
        case 0x2407e0u: goto label_2407e0;
        case 0x2407e4u: goto label_2407e4;
        case 0x2407e8u: goto label_2407e8;
        case 0x2407ecu: goto label_2407ec;
        case 0x2407f0u: goto label_2407f0;
        case 0x2407f4u: goto label_2407f4;
        case 0x2407f8u: goto label_2407f8;
        case 0x2407fcu: goto label_2407fc;
        case 0x240800u: goto label_240800;
        case 0x240804u: goto label_240804;
        case 0x240808u: goto label_240808;
        case 0x24080cu: goto label_24080c;
        case 0x240810u: goto label_240810;
        case 0x240814u: goto label_240814;
        case 0x240818u: goto label_240818;
        case 0x24081cu: goto label_24081c;
        case 0x240820u: goto label_240820;
        case 0x240824u: goto label_240824;
        case 0x240828u: goto label_240828;
        case 0x24082cu: goto label_24082c;
        case 0x240830u: goto label_240830;
        case 0x240834u: goto label_240834;
        case 0x240838u: goto label_240838;
        case 0x24083cu: goto label_24083c;
        case 0x240840u: goto label_240840;
        case 0x240844u: goto label_240844;
        case 0x240848u: goto label_240848;
        case 0x24084cu: goto label_24084c;
        case 0x240850u: goto label_240850;
        case 0x240854u: goto label_240854;
        case 0x240858u: goto label_240858;
        case 0x24085cu: goto label_24085c;
        case 0x240860u: goto label_240860;
        case 0x240864u: goto label_240864;
        case 0x240868u: goto label_240868;
        case 0x24086cu: goto label_24086c;
        case 0x240870u: goto label_240870;
        case 0x240874u: goto label_240874;
        case 0x240878u: goto label_240878;
        case 0x24087cu: goto label_24087c;
        case 0x240880u: goto label_240880;
        case 0x240884u: goto label_240884;
        case 0x240888u: goto label_240888;
        case 0x24088cu: goto label_24088c;
        case 0x240890u: goto label_240890;
        case 0x240894u: goto label_240894;
        case 0x240898u: goto label_240898;
        case 0x24089cu: goto label_24089c;
        case 0x2408a0u: goto label_2408a0;
        case 0x2408a4u: goto label_2408a4;
        case 0x2408a8u: goto label_2408a8;
        case 0x2408acu: goto label_2408ac;
        case 0x2408b0u: goto label_2408b0;
        case 0x2408b4u: goto label_2408b4;
        case 0x2408b8u: goto label_2408b8;
        case 0x2408bcu: goto label_2408bc;
        case 0x2408c0u: goto label_2408c0;
        case 0x2408c4u: goto label_2408c4;
        case 0x2408c8u: goto label_2408c8;
        case 0x2408ccu: goto label_2408cc;
        case 0x2408d0u: goto label_2408d0;
        case 0x2408d4u: goto label_2408d4;
        case 0x2408d8u: goto label_2408d8;
        case 0x2408dcu: goto label_2408dc;
        case 0x2408e0u: goto label_2408e0;
        case 0x2408e4u: goto label_2408e4;
        case 0x2408e8u: goto label_2408e8;
        case 0x2408ecu: goto label_2408ec;
        case 0x2408f0u: goto label_2408f0;
        case 0x2408f4u: goto label_2408f4;
        case 0x2408f8u: goto label_2408f8;
        case 0x2408fcu: goto label_2408fc;
        case 0x240900u: goto label_240900;
        case 0x240904u: goto label_240904;
        case 0x240908u: goto label_240908;
        case 0x24090cu: goto label_24090c;
        case 0x240910u: goto label_240910;
        case 0x240914u: goto label_240914;
        case 0x240918u: goto label_240918;
        case 0x24091cu: goto label_24091c;
        case 0x240920u: goto label_240920;
        case 0x240924u: goto label_240924;
        case 0x240928u: goto label_240928;
        case 0x24092cu: goto label_24092c;
        case 0x240930u: goto label_240930;
        case 0x240934u: goto label_240934;
        case 0x240938u: goto label_240938;
        case 0x24093cu: goto label_24093c;
        case 0x240940u: goto label_240940;
        case 0x240944u: goto label_240944;
        case 0x240948u: goto label_240948;
        case 0x24094cu: goto label_24094c;
        case 0x240950u: goto label_240950;
        case 0x240954u: goto label_240954;
        case 0x240958u: goto label_240958;
        case 0x24095cu: goto label_24095c;
        case 0x240960u: goto label_240960;
        case 0x240964u: goto label_240964;
        case 0x240968u: goto label_240968;
        case 0x24096cu: goto label_24096c;
        case 0x240970u: goto label_240970;
        case 0x240974u: goto label_240974;
        case 0x240978u: goto label_240978;
        case 0x24097cu: goto label_24097c;
        case 0x240980u: goto label_240980;
        case 0x240984u: goto label_240984;
        case 0x240988u: goto label_240988;
        case 0x24098cu: goto label_24098c;
        case 0x240990u: goto label_240990;
        case 0x240994u: goto label_240994;
        case 0x240998u: goto label_240998;
        case 0x24099cu: goto label_24099c;
        case 0x2409a0u: goto label_2409a0;
        case 0x2409a4u: goto label_2409a4;
        case 0x2409a8u: goto label_2409a8;
        case 0x2409acu: goto label_2409ac;
        case 0x2409b0u: goto label_2409b0;
        case 0x2409b4u: goto label_2409b4;
        case 0x2409b8u: goto label_2409b8;
        case 0x2409bcu: goto label_2409bc;
        case 0x2409c0u: goto label_2409c0;
        case 0x2409c4u: goto label_2409c4;
        case 0x2409c8u: goto label_2409c8;
        case 0x2409ccu: goto label_2409cc;
        case 0x2409d0u: goto label_2409d0;
        case 0x2409d4u: goto label_2409d4;
        case 0x2409d8u: goto label_2409d8;
        case 0x2409dcu: goto label_2409dc;
        case 0x2409e0u: goto label_2409e0;
        case 0x2409e4u: goto label_2409e4;
        case 0x2409e8u: goto label_2409e8;
        case 0x2409ecu: goto label_2409ec;
        case 0x2409f0u: goto label_2409f0;
        case 0x2409f4u: goto label_2409f4;
        case 0x2409f8u: goto label_2409f8;
        case 0x2409fcu: goto label_2409fc;
        case 0x240a00u: goto label_240a00;
        case 0x240a04u: goto label_240a04;
        case 0x240a08u: goto label_240a08;
        case 0x240a0cu: goto label_240a0c;
        case 0x240a10u: goto label_240a10;
        case 0x240a14u: goto label_240a14;
        case 0x240a18u: goto label_240a18;
        case 0x240a1cu: goto label_240a1c;
        case 0x240a20u: goto label_240a20;
        case 0x240a24u: goto label_240a24;
        case 0x240a28u: goto label_240a28;
        case 0x240a2cu: goto label_240a2c;
        case 0x240a30u: goto label_240a30;
        case 0x240a34u: goto label_240a34;
        case 0x240a38u: goto label_240a38;
        case 0x240a3cu: goto label_240a3c;
        case 0x240a40u: goto label_240a40;
        case 0x240a44u: goto label_240a44;
        case 0x240a48u: goto label_240a48;
        case 0x240a4cu: goto label_240a4c;
        case 0x240a50u: goto label_240a50;
        case 0x240a54u: goto label_240a54;
        case 0x240a58u: goto label_240a58;
        case 0x240a5cu: goto label_240a5c;
        case 0x240a60u: goto label_240a60;
        case 0x240a64u: goto label_240a64;
        case 0x240a68u: goto label_240a68;
        case 0x240a6cu: goto label_240a6c;
        case 0x240a70u: goto label_240a70;
        case 0x240a74u: goto label_240a74;
        case 0x240a78u: goto label_240a78;
        case 0x240a7cu: goto label_240a7c;
        case 0x240a80u: goto label_240a80;
        case 0x240a84u: goto label_240a84;
        case 0x240a88u: goto label_240a88;
        case 0x240a8cu: goto label_240a8c;
        case 0x240a90u: goto label_240a90;
        case 0x240a94u: goto label_240a94;
        case 0x240a98u: goto label_240a98;
        case 0x240a9cu: goto label_240a9c;
        case 0x240aa0u: goto label_240aa0;
        case 0x240aa4u: goto label_240aa4;
        case 0x240aa8u: goto label_240aa8;
        case 0x240aacu: goto label_240aac;
        case 0x240ab0u: goto label_240ab0;
        case 0x240ab4u: goto label_240ab4;
        case 0x240ab8u: goto label_240ab8;
        case 0x240abcu: goto label_240abc;
        case 0x240ac0u: goto label_240ac0;
        case 0x240ac4u: goto label_240ac4;
        case 0x240ac8u: goto label_240ac8;
        case 0x240accu: goto label_240acc;
        case 0x240ad0u: goto label_240ad0;
        case 0x240ad4u: goto label_240ad4;
        case 0x240ad8u: goto label_240ad8;
        case 0x240adcu: goto label_240adc;
        case 0x240ae0u: goto label_240ae0;
        case 0x240ae4u: goto label_240ae4;
        case 0x240ae8u: goto label_240ae8;
        case 0x240aecu: goto label_240aec;
        case 0x240af0u: goto label_240af0;
        case 0x240af4u: goto label_240af4;
        case 0x240af8u: goto label_240af8;
        case 0x240afcu: goto label_240afc;
        case 0x240b00u: goto label_240b00;
        case 0x240b04u: goto label_240b04;
        case 0x240b08u: goto label_240b08;
        case 0x240b0cu: goto label_240b0c;
        case 0x240b10u: goto label_240b10;
        case 0x240b14u: goto label_240b14;
        case 0x240b18u: goto label_240b18;
        case 0x240b1cu: goto label_240b1c;
        case 0x240b20u: goto label_240b20;
        case 0x240b24u: goto label_240b24;
        case 0x240b28u: goto label_240b28;
        case 0x240b2cu: goto label_240b2c;
        case 0x240b30u: goto label_240b30;
        case 0x240b34u: goto label_240b34;
        case 0x240b38u: goto label_240b38;
        case 0x240b3cu: goto label_240b3c;
        case 0x240b40u: goto label_240b40;
        case 0x240b44u: goto label_240b44;
        case 0x240b48u: goto label_240b48;
        case 0x240b4cu: goto label_240b4c;
        case 0x240b50u: goto label_240b50;
        case 0x240b54u: goto label_240b54;
        case 0x240b58u: goto label_240b58;
        case 0x240b5cu: goto label_240b5c;
        case 0x240b60u: goto label_240b60;
        case 0x240b64u: goto label_240b64;
        case 0x240b68u: goto label_240b68;
        case 0x240b6cu: goto label_240b6c;
        case 0x240b70u: goto label_240b70;
        case 0x240b74u: goto label_240b74;
        case 0x240b78u: goto label_240b78;
        case 0x240b7cu: goto label_240b7c;
        case 0x240b80u: goto label_240b80;
        case 0x240b84u: goto label_240b84;
        case 0x240b88u: goto label_240b88;
        case 0x240b8cu: goto label_240b8c;
        case 0x240b90u: goto label_240b90;
        case 0x240b94u: goto label_240b94;
        case 0x240b98u: goto label_240b98;
        case 0x240b9cu: goto label_240b9c;
        case 0x240ba0u: goto label_240ba0;
        case 0x240ba4u: goto label_240ba4;
        case 0x240ba8u: goto label_240ba8;
        case 0x240bacu: goto label_240bac;
        case 0x240bb0u: goto label_240bb0;
        case 0x240bb4u: goto label_240bb4;
        case 0x240bb8u: goto label_240bb8;
        case 0x240bbcu: goto label_240bbc;
        case 0x240bc0u: goto label_240bc0;
        case 0x240bc4u: goto label_240bc4;
        case 0x240bc8u: goto label_240bc8;
        case 0x240bccu: goto label_240bcc;
        case 0x240bd0u: goto label_240bd0;
        case 0x240bd4u: goto label_240bd4;
        case 0x240bd8u: goto label_240bd8;
        case 0x240bdcu: goto label_240bdc;
        case 0x240be0u: goto label_240be0;
        case 0x240be4u: goto label_240be4;
        case 0x240be8u: goto label_240be8;
        case 0x240becu: goto label_240bec;
        case 0x240bf0u: goto label_240bf0;
        case 0x240bf4u: goto label_240bf4;
        case 0x240bf8u: goto label_240bf8;
        case 0x240bfcu: goto label_240bfc;
        case 0x240c00u: goto label_240c00;
        case 0x240c04u: goto label_240c04;
        case 0x240c08u: goto label_240c08;
        case 0x240c0cu: goto label_240c0c;
        case 0x240c10u: goto label_240c10;
        case 0x240c14u: goto label_240c14;
        case 0x240c18u: goto label_240c18;
        case 0x240c1cu: goto label_240c1c;
        case 0x240c20u: goto label_240c20;
        case 0x240c24u: goto label_240c24;
        case 0x240c28u: goto label_240c28;
        case 0x240c2cu: goto label_240c2c;
        case 0x240c30u: goto label_240c30;
        case 0x240c34u: goto label_240c34;
        case 0x240c38u: goto label_240c38;
        case 0x240c3cu: goto label_240c3c;
        case 0x240c40u: goto label_240c40;
        case 0x240c44u: goto label_240c44;
        case 0x240c48u: goto label_240c48;
        case 0x240c4cu: goto label_240c4c;
        case 0x240c50u: goto label_240c50;
        case 0x240c54u: goto label_240c54;
        case 0x240c58u: goto label_240c58;
        case 0x240c5cu: goto label_240c5c;
        case 0x240c60u: goto label_240c60;
        case 0x240c64u: goto label_240c64;
        case 0x240c68u: goto label_240c68;
        case 0x240c6cu: goto label_240c6c;
        case 0x240c70u: goto label_240c70;
        case 0x240c74u: goto label_240c74;
        case 0x240c78u: goto label_240c78;
        case 0x240c7cu: goto label_240c7c;
        case 0x240c80u: goto label_240c80;
        case 0x240c84u: goto label_240c84;
        case 0x240c88u: goto label_240c88;
        case 0x240c8cu: goto label_240c8c;
        case 0x240c90u: goto label_240c90;
        case 0x240c94u: goto label_240c94;
        case 0x240c98u: goto label_240c98;
        case 0x240c9cu: goto label_240c9c;
        case 0x240ca0u: goto label_240ca0;
        case 0x240ca4u: goto label_240ca4;
        case 0x240ca8u: goto label_240ca8;
        case 0x240cacu: goto label_240cac;
        case 0x240cb0u: goto label_240cb0;
        case 0x240cb4u: goto label_240cb4;
        case 0x240cb8u: goto label_240cb8;
        case 0x240cbcu: goto label_240cbc;
        case 0x240cc0u: goto label_240cc0;
        case 0x240cc4u: goto label_240cc4;
        case 0x240cc8u: goto label_240cc8;
        case 0x240cccu: goto label_240ccc;
        case 0x240cd0u: goto label_240cd0;
        case 0x240cd4u: goto label_240cd4;
        case 0x240cd8u: goto label_240cd8;
        case 0x240cdcu: goto label_240cdc;
        case 0x240ce0u: goto label_240ce0;
        case 0x240ce4u: goto label_240ce4;
        case 0x240ce8u: goto label_240ce8;
        case 0x240cecu: goto label_240cec;
        case 0x240cf0u: goto label_240cf0;
        case 0x240cf4u: goto label_240cf4;
        case 0x240cf8u: goto label_240cf8;
        case 0x240cfcu: goto label_240cfc;
        case 0x240d00u: goto label_240d00;
        case 0x240d04u: goto label_240d04;
        case 0x240d08u: goto label_240d08;
        case 0x240d0cu: goto label_240d0c;
        case 0x240d10u: goto label_240d10;
        case 0x240d14u: goto label_240d14;
        case 0x240d18u: goto label_240d18;
        case 0x240d1cu: goto label_240d1c;
        case 0x240d20u: goto label_240d20;
        case 0x240d24u: goto label_240d24;
        case 0x240d28u: goto label_240d28;
        case 0x240d2cu: goto label_240d2c;
        case 0x240d30u: goto label_240d30;
        case 0x240d34u: goto label_240d34;
        case 0x240d38u: goto label_240d38;
        case 0x240d3cu: goto label_240d3c;
        case 0x240d40u: goto label_240d40;
        case 0x240d44u: goto label_240d44;
        case 0x240d48u: goto label_240d48;
        case 0x240d4cu: goto label_240d4c;
        case 0x240d50u: goto label_240d50;
        case 0x240d54u: goto label_240d54;
        case 0x240d58u: goto label_240d58;
        case 0x240d5cu: goto label_240d5c;
        case 0x240d60u: goto label_240d60;
        case 0x240d64u: goto label_240d64;
        case 0x240d68u: goto label_240d68;
        case 0x240d6cu: goto label_240d6c;
        case 0x240d70u: goto label_240d70;
        case 0x240d74u: goto label_240d74;
        case 0x240d78u: goto label_240d78;
        case 0x240d7cu: goto label_240d7c;
        case 0x240d80u: goto label_240d80;
        case 0x240d84u: goto label_240d84;
        case 0x240d88u: goto label_240d88;
        case 0x240d8cu: goto label_240d8c;
        case 0x240d90u: goto label_240d90;
        case 0x240d94u: goto label_240d94;
        case 0x240d98u: goto label_240d98;
        case 0x240d9cu: goto label_240d9c;
        case 0x240da0u: goto label_240da0;
        case 0x240da4u: goto label_240da4;
        case 0x240da8u: goto label_240da8;
        case 0x240dacu: goto label_240dac;
        case 0x240db0u: goto label_240db0;
        case 0x240db4u: goto label_240db4;
        case 0x240db8u: goto label_240db8;
        case 0x240dbcu: goto label_240dbc;
        case 0x240dc0u: goto label_240dc0;
        case 0x240dc4u: goto label_240dc4;
        case 0x240dc8u: goto label_240dc8;
        case 0x240dccu: goto label_240dcc;
        case 0x240dd0u: goto label_240dd0;
        case 0x240dd4u: goto label_240dd4;
        case 0x240dd8u: goto label_240dd8;
        case 0x240ddcu: goto label_240ddc;
        case 0x240de0u: goto label_240de0;
        case 0x240de4u: goto label_240de4;
        case 0x240de8u: goto label_240de8;
        case 0x240decu: goto label_240dec;
        case 0x240df0u: goto label_240df0;
        case 0x240df4u: goto label_240df4;
        case 0x240df8u: goto label_240df8;
        case 0x240dfcu: goto label_240dfc;
        case 0x240e00u: goto label_240e00;
        case 0x240e04u: goto label_240e04;
        case 0x240e08u: goto label_240e08;
        case 0x240e0cu: goto label_240e0c;
        case 0x240e10u: goto label_240e10;
        case 0x240e14u: goto label_240e14;
        case 0x240e18u: goto label_240e18;
        case 0x240e1cu: goto label_240e1c;
        case 0x240e20u: goto label_240e20;
        case 0x240e24u: goto label_240e24;
        case 0x240e28u: goto label_240e28;
        case 0x240e2cu: goto label_240e2c;
        case 0x240e30u: goto label_240e30;
        case 0x240e34u: goto label_240e34;
        case 0x240e38u: goto label_240e38;
        case 0x240e3cu: goto label_240e3c;
        case 0x240e40u: goto label_240e40;
        case 0x240e44u: goto label_240e44;
        case 0x240e48u: goto label_240e48;
        case 0x240e4cu: goto label_240e4c;
        case 0x240e50u: goto label_240e50;
        case 0x240e54u: goto label_240e54;
        case 0x240e58u: goto label_240e58;
        case 0x240e5cu: goto label_240e5c;
        case 0x240e60u: goto label_240e60;
        case 0x240e64u: goto label_240e64;
        case 0x240e68u: goto label_240e68;
        case 0x240e6cu: goto label_240e6c;
        case 0x240e70u: goto label_240e70;
        case 0x240e74u: goto label_240e74;
        case 0x240e78u: goto label_240e78;
        case 0x240e7cu: goto label_240e7c;
        case 0x240e80u: goto label_240e80;
        case 0x240e84u: goto label_240e84;
        case 0x240e88u: goto label_240e88;
        case 0x240e8cu: goto label_240e8c;
        case 0x240e90u: goto label_240e90;
        case 0x240e94u: goto label_240e94;
        case 0x240e98u: goto label_240e98;
        case 0x240e9cu: goto label_240e9c;
        default: return;
    }

label_2406d0:
    // 0x2406d0: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x2406d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
label_2406d4:
    // 0x2406d4: 0x246317f0  addiu       $v1, $v1, 0x17F0
    ctx->pc = 0x2406d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6128));
label_2406d8:
    // 0x2406d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2406d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2406dc:
    // 0x2406dc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2406dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2406e0:
    // 0x2406e0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_2406e4:
    if (ctx->pc == 0x2406E4u) {
        ctx->pc = 0x2406E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2406E0u;
        // 0x2406e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2406E8u;
        goto label_2406e8;
    }
    ctx->pc = 0x2406E0u;
    {
        const bool branch_taken_0x2406e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2406E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2406E0u;
        // 0x2406e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2406e0) {
            ctx->pc = 0x2406ECu;
            goto label_2406ec;
        }
    }
    ctx->pc = 0x2406E8u;
label_2406e8:
    // 0x2406e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2406e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2406ec:
    // 0x2406ec: 0x3e00008  jr          $ra
label_2406f0:
    if (ctx->pc == 0x2406F0u) {
        ctx->pc = 0x2406F4u;
        goto label_2406f4;
    }
    ctx->pc = 0x2406ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2406ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2406F4u;
label_2406f4:
    // 0x2406f4: 0x0  nop
    ctx->pc = 0x2406f4u;
    // NOP
label_2406f8:
    // 0x2406f8: 0x0  nop
    ctx->pc = 0x2406f8u;
    // NOP
label_2406fc:
    // 0x2406fc: 0x0  nop
    ctx->pc = 0x2406fcu;
    // NOP
label_240700:
    // 0x240700: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x240700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
label_240704:
    // 0x240704: 0x24631855  addiu       $v1, $v1, 0x1855
    ctx->pc = 0x240704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6229));
label_240708:
    // 0x240708: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x240708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_24070c:
    // 0x24070c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x24070cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_240710:
    // 0x240710: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_240714:
    if (ctx->pc == 0x240714u) {
        ctx->pc = 0x240714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240710u;
        // 0x240714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240718u;
        goto label_240718;
    }
    ctx->pc = 0x240710u;
    {
        const bool branch_taken_0x240710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x240714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240710u;
        // 0x240714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240710) {
            ctx->pc = 0x24071Cu;
            goto label_24071c;
        }
    }
    ctx->pc = 0x240718u;
label_240718:
    // 0x240718: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x240718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24071c:
    // 0x24071c: 0x3e00008  jr          $ra
label_240720:
    if (ctx->pc == 0x240720u) {
        ctx->pc = 0x240724u;
        goto label_240724;
    }
    ctx->pc = 0x24071Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24071Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240724u;
label_240724:
    // 0x240724: 0x0  nop
    ctx->pc = 0x240724u;
    // NOP
label_240728:
    // 0x240728: 0x0  nop
    ctx->pc = 0x240728u;
    // NOP
label_24072c:
    // 0x24072c: 0x0  nop
    ctx->pc = 0x24072cu;
    // NOP
label_240730:
    // 0x240730: 0x938392f4  lbu         $v1, -0x6D0C($gp)
    ctx->pc = 0x240730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939380)));
label_240734:
    // 0x240734: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x240734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240738:
    // 0x240738: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x240738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
label_24073c:
    // 0x24073c: 0xa38392f4  sb          $v1, -0x6D0C($gp)
    ctx->pc = 0x24073cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939380), (uint8_t)GPR_U32(ctx, 3));
label_240740:
    // 0x240740: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x240740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
label_240744:
    // 0x240744: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x240744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_240748:
    // 0x240748: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x240748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24074c:
    // 0x24074c: 0x2484c990  addiu       $a0, $a0, -0x3670
    ctx->pc = 0x24074cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953360));
label_240750:
    // 0x240750: 0x34684e60  ori         $t0, $v1, 0x4E60
    ctx->pc = 0x240750u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20064);
label_240754:
    // 0x240754: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x240754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_240758:
    // 0x240758: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x240758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_24075c:
    // 0x24075c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x24075cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_240760:
    // 0x240760: 0x683821  addu        $a3, $v1, $t0
    ctx->pc = 0x240760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_240764:
    // 0x240764: 0xa0e50000  sb          $a1, 0x0($a3)
    ctx->pc = 0x240764u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
label_240768:
    // 0x240768: 0x28c3005d  slti        $v1, $a2, 0x5D
    ctx->pc = 0x240768u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)93) ? 1 : 0);
label_24076c:
    // 0x24076c: 0xa0e50001  sb          $a1, 0x1($a3)
    ctx->pc = 0x24076cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 5));
label_240770:
    // 0x240770: 0xa0e50002  sb          $a1, 0x2($a3)
    ctx->pc = 0x240770u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 5));
label_240774:
    // 0x240774: 0xa0e50003  sb          $a1, 0x3($a3)
    ctx->pc = 0x240774u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 5));
label_240778:
    // 0x240778: 0xa0e50004  sb          $a1, 0x4($a3)
    ctx->pc = 0x240778u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 5));
label_24077c:
    // 0x24077c: 0xa0e50005  sb          $a1, 0x5($a3)
    ctx->pc = 0x24077cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5), (uint8_t)GPR_U32(ctx, 5));
label_240780:
    // 0x240780: 0xa0e50006  sb          $a1, 0x6($a3)
    ctx->pc = 0x240780u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 5));
label_240784:
    // 0x240784: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_240788:
    if (ctx->pc == 0x240788u) {
        ctx->pc = 0x240788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240784u;
        // 0x240788: 0xa0e50007  sb          $a1, 0x7($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 7), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24078Cu;
        goto label_24078c;
    }
    ctx->pc = 0x240784u;
    {
        const bool branch_taken_0x240784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x240788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240784u;
        // 0x240788: 0xa0e50007  sb          $a1, 0x7($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 7), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240784) {
            ctx->pc = 0x240754u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240754;
        }
    }
    ctx->pc = 0x24078Cu;
label_24078c:
    // 0x24078c: 0x28c10065  slti        $at, $a2, 0x65
    ctx->pc = 0x24078cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)101) ? 1 : 0);
label_240790:
    // 0x240790: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_240794:
    if (ctx->pc == 0x240794u) {
        ctx->pc = 0x240794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240790u;
        // 0x240794: 0x3c04002a  lui         $a0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240798u;
        goto label_240798;
    }
    ctx->pc = 0x240790u;
    {
        const bool branch_taken_0x240790 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x240794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240790u;
        // 0x240794: 0x3c04002a  lui         $a0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240790) {
            ctx->pc = 0x2407C0u;
            goto label_2407c0;
        }
    }
    ctx->pc = 0x240798u;
label_240798:
    // 0x240798: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x240798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24079c:
    // 0x24079c: 0x2484c990  addiu       $a0, $a0, -0x3670
    ctx->pc = 0x24079cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953360));
label_2407a0:
    // 0x2407a0: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x2407a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2407a4:
    // 0x2407a4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2407a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2407a8:
    // 0x2407a8: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2407a8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_2407ac:
    // 0x2407ac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2407acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2407b0:
    // 0x2407b0: 0x28c30065  slti        $v1, $a2, 0x65
    ctx->pc = 0x2407b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)101) ? 1 : 0);
label_2407b4:
    // 0x2407b4: 0xa0254e60  sb          $a1, 0x4E60($at)
    ctx->pc = 0x2407b4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20064), (uint8_t)GPR_U32(ctx, 5));
label_2407b8:
    // 0x2407b8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_2407bc:
    if (ctx->pc == 0x2407BCu) {
        ctx->pc = 0x2407C0u;
        goto label_2407c0;
    }
    ctx->pc = 0x2407B8u;
    {
        const bool branch_taken_0x2407b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2407b8) {
            ctx->pc = 0x2407A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2407a0;
        }
    }
    ctx->pc = 0x2407C0u;
label_2407c0:
    // 0x2407c0: 0x3e00008  jr          $ra
label_2407c4:
    if (ctx->pc == 0x2407C4u) {
        ctx->pc = 0x2407C8u;
        goto label_2407c8;
    }
    ctx->pc = 0x2407C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2407C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2407C8u;
label_2407c8:
    // 0x2407c8: 0x0  nop
    ctx->pc = 0x2407c8u;
    // NOP
label_2407cc:
    // 0x2407cc: 0x0  nop
    ctx->pc = 0x2407ccu;
    // NOP
label_2407d0:
    // 0x2407d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2407d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2407d4:
    // 0x2407d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2407d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2407d8:
    // 0x2407d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2407d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2407dc:
    // 0x2407dc: 0x938292f4  lbu         $v0, -0x6D0C($gp)
    ctx->pc = 0x2407dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939380)));
label_2407e0:
    // 0x2407e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2407e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2407e4:
    // 0x2407e4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2407e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_2407e8:
    // 0x2407e8: 0xa38292f4  sb          $v0, -0x6D0C($gp)
    ctx->pc = 0x2407e8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939380), (uint8_t)GPR_U32(ctx, 2));
label_2407ec:
    // 0x2407ec: 0xc055de8  jal         func_1577A0
label_2407f0:
    if (ctx->pc == 0x2407F0u) {
        ctx->pc = 0x2407F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407ECu;
        // 0x2407f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2407F4u;
        goto label_2407f4;
    }
    ctx->pc = 0x2407ECu;
    SET_GPR_U32(ctx, 31, 0x2407F4u);
    ctx->pc = 0x2407F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2407ECu;
    // 0x2407f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1577A0u;
    { ctx->pc = 0x1577a0; return; }
    ctx->pc = 0x2407F4u;
label_2407f4:
    // 0x2407f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2407f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2407f8:
    // 0x2407f8: 0x2a030018  slti        $v1, $s0, 0x18
    ctx->pc = 0x2407f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
label_2407fc:
    // 0x2407fc: 0x0  nop
    ctx->pc = 0x2407fcu;
    // NOP
label_240800:
    // 0x240800: 0x0  nop
    ctx->pc = 0x240800u;
    // NOP
label_240804:
    // 0x240804: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_240808:
    if (ctx->pc == 0x240808u) {
        ctx->pc = 0x24080Cu;
        goto label_24080c;
    }
    ctx->pc = 0x240804u;
    {
        const bool branch_taken_0x240804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x240804) {
            ctx->pc = 0x2407ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2407ec;
        }
    }
    ctx->pc = 0x24080Cu;
label_24080c:
    // 0x24080c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24080cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_240810:
    // 0x240810: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x240810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_240814:
    // 0x240814: 0x3e00008  jr          $ra
label_240818:
    if (ctx->pc == 0x240818u) {
        ctx->pc = 0x240818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240814u;
        // 0x240818: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24081Cu;
        goto label_24081c;
    }
    ctx->pc = 0x240814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240814u;
        // 0x240818: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24081Cu;
label_24081c:
    // 0x24081c: 0x0  nop
    ctx->pc = 0x24081cu;
    // NOP
label_240820:
    // 0x240820: 0x938492f4  lbu         $a0, -0x6D0C($gp)
    ctx->pc = 0x240820u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939380)));
label_240824:
    // 0x240824: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x240824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240828:
    // 0x240828: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x240828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_24082c:
    // 0x24082c: 0xa423187e  sh          $v1, 0x187E($at)
    ctx->pc = 0x24082cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 6270), (uint16_t)GPR_U32(ctx, 3));
label_240830:
    // 0x240830: 0x34830020  ori         $v1, $a0, 0x20
    ctx->pc = 0x240830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
label_240834:
    // 0x240834: 0x3e00008  jr          $ra
label_240838:
    if (ctx->pc == 0x240838u) {
        ctx->pc = 0x240838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240834u;
        // 0x240838: 0xa38392f4  sb          $v1, -0x6D0C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939380), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24083Cu;
        goto label_24083c;
    }
    ctx->pc = 0x240834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240834u;
        // 0x240838: 0xa38392f4  sb          $v1, -0x6D0C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939380), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24083Cu;
label_24083c:
    // 0x24083c: 0x0  nop
    ctx->pc = 0x24083cu;
    // NOP
label_240840:
    // 0x240840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x240840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_240844:
    // 0x240844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x240844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_240848:
    // 0x240848: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x240848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_24084c:
    // 0x24084c: 0x938292f4  lbu         $v0, -0x6D0C($gp)
    ctx->pc = 0x24084cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939380)));
label_240850:
    // 0x240850: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x240850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240854:
    // 0x240854: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x240854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_240858:
    // 0x240858: 0xa38292f4  sb          $v0, -0x6D0C($gp)
    ctx->pc = 0x240858u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939380), (uint8_t)GPR_U32(ctx, 2));
label_24085c:
    // 0x24085c: 0xc055e04  jal         func_157810
label_240860:
    if (ctx->pc == 0x240860u) {
        ctx->pc = 0x240860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24085Cu;
        // 0x240860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240864u;
        goto label_240864;
    }
    ctx->pc = 0x24085Cu;
    SET_GPR_U32(ctx, 31, 0x240864u);
    ctx->pc = 0x240860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24085Cu;
    // 0x240860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157810u;
    { ctx->pc = 0x157810; return; }
    ctx->pc = 0x240864u;
label_240864:
    // 0x240864: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x240864u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_240868:
    // 0x240868: 0x2a030026  slti        $v1, $s0, 0x26
    ctx->pc = 0x240868u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)38) ? 1 : 0);
label_24086c:
    // 0x24086c: 0x0  nop
    ctx->pc = 0x24086cu;
    // NOP
label_240870:
    // 0x240870: 0x0  nop
    ctx->pc = 0x240870u;
    // NOP
label_240874:
    // 0x240874: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_240878:
    if (ctx->pc == 0x240878u) {
        ctx->pc = 0x24087Cu;
        goto label_24087c;
    }
    ctx->pc = 0x240874u;
    {
        const bool branch_taken_0x240874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x240874) {
            ctx->pc = 0x24085Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24085c;
        }
    }
    ctx->pc = 0x24087Cu;
label_24087c:
    // 0x24087c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24087cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_240880:
    // 0x240880: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x240880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_240884:
    // 0x240884: 0x3e00008  jr          $ra
label_240888:
    if (ctx->pc == 0x240888u) {
        ctx->pc = 0x240888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240884u;
        // 0x240888: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24088Cu;
        goto label_24088c;
    }
    ctx->pc = 0x240884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240884u;
        // 0x240888: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24088Cu;
label_24088c:
    // 0x24088c: 0x0  nop
    ctx->pc = 0x24088cu;
    // NOP
label_240890:
    // 0x240890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x240890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_240894:
    // 0x240894: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x240894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_240898:
    // 0x240898: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x240898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_24089c:
    // 0x24089c: 0x938392f4  lbu         $v1, -0x6D0C($gp)
    ctx->pc = 0x24089cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939380)));
label_2408a0:
    // 0x2408a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2408a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2408a4:
    // 0x2408a4: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x2408a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_2408a8:
    // 0x2408a8: 0xa38392f4  sb          $v1, -0x6D0C($gp)
    ctx->pc = 0x2408a8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939380), (uint8_t)GPR_U32(ctx, 3));
label_2408ac:
    // 0x2408ac: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x2408acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_2408b0:
    // 0x2408b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2408b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2408b4:
    // 0x2408b4: 0x24843420  addiu       $a0, $a0, 0x3420
    ctx->pc = 0x2408b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13344));
label_2408b8:
    // 0x2408b8: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2408b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2408bc:
    // 0x2408bc: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x2408bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2408c0:
    // 0x2408c0: 0x1483001e  bne         $a0, $v1, . + 4 + (0x1E << 2)
label_2408c4:
    if (ctx->pc == 0x2408C4u) {
        ctx->pc = 0x2408C8u;
        goto label_2408c8;
    }
    ctx->pc = 0x2408C0u;
    {
        const bool branch_taken_0x2408c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2408c0) {
            ctx->pc = 0x24093Cu;
            goto label_24093c;
        }
    }
    ctx->pc = 0x2408C8u;
label_2408c8:
    // 0x2408c8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2408c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_2408cc:
    // 0x2408cc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2408ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2408d0:
    // 0x2408d0: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x2408d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
label_2408d4:
    // 0x2408d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2408d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2408d8:
    // 0x2408d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2408d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2408dc:
    // 0x2408dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2408dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2408e0:
    // 0x2408e0: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2408e0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2408e4:
    // 0x2408e4: 0xc056a20  jal         func_15A880
label_2408e8:
    if (ctx->pc == 0x2408E8u) {
        ctx->pc = 0x2408E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2408E4u;
        // 0x2408e8: 0xa0234ec5  sb          $v1, 0x4EC5($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 20165), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2408ECu;
        goto label_2408ec;
    }
    ctx->pc = 0x2408E4u;
    SET_GPR_U32(ctx, 31, 0x2408ECu);
    ctx->pc = 0x2408E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2408E4u;
    // 0x2408e8: 0xa0234ec5  sb          $v1, 0x4EC5($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 20165), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A880u;
    { ctx->pc = 0x15a880; return; }
    ctx->pc = 0x2408ECu;
label_2408ec:
    // 0x2408ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2408ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2408f0:
    // 0x2408f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2408f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2408f4:
    // 0x2408f4: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x2408f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_2408f8:
    // 0x2408f8: 0xc056a04  jal         func_15A810
label_2408fc:
    if (ctx->pc == 0x2408FCu) {
        ctx->pc = 0x2408FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2408F8u;
        // 0x2408fc: 0x27a70028  addiu       $a3, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240900u;
        goto label_240900;
    }
    ctx->pc = 0x2408F8u;
    SET_GPR_U32(ctx, 31, 0x240900u);
    ctx->pc = 0x2408FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2408F8u;
    // 0x2408fc: 0x27a70028  addiu       $a3, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A810u;
    { ctx->pc = 0x15a810; return; }
    ctx->pc = 0x240900u;
label_240900:
    // 0x240900: 0xc057138  jal         func_15C4E0
label_240904:
    if (ctx->pc == 0x240904u) {
        ctx->pc = 0x240904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240900u;
        // 0x240904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240908u;
        goto label_240908;
    }
    ctx->pc = 0x240900u;
    SET_GPR_U32(ctx, 31, 0x240908u);
    ctx->pc = 0x240904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240900u;
    // 0x240904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C4E0u;
    { ctx->pc = 0x15c4e0; return; }
    ctx->pc = 0x240908u;
label_240908:
    // 0x240908: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x240908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_24090c:
    // 0x24090c: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x24090cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_240910:
    // 0x240910: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x240910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_240914:
    // 0x240914: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x240914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_240918:
    // 0x240918: 0xc056fc8  jal         func_15BF20
label_24091c:
    if (ctx->pc == 0x24091Cu) {
        ctx->pc = 0x24091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240918u;
        // 0x24091c: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240920u;
        goto label_240920;
    }
    ctx->pc = 0x240918u;
    SET_GPR_U32(ctx, 31, 0x240920u);
    ctx->pc = 0x24091Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240918u;
    // 0x24091c: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BF20u;
    { ctx->pc = 0x15bf20; return; }
    ctx->pc = 0x240920u;
label_240920:
    // 0x240920: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x240920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_240924:
    // 0x240924: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240928:
    // 0x240928: 0x2463c990  addiu       $v1, $v1, -0x3670
    ctx->pc = 0x240928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953360));
label_24092c:
    // 0x24092c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24092cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240930:
    // 0x240930: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x240930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_240934:
    // 0x240934: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x240934u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_240938:
    // 0x240938: 0xa0244e60  sb          $a0, 0x4E60($at)
    ctx->pc = 0x240938u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20064), (uint8_t)GPR_U32(ctx, 4));
label_24093c:
    // 0x24093c: 0x0  nop
    ctx->pc = 0x24093cu;
    // NOP
label_240940:
    // 0x240940: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x240940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_240944:
    // 0x240944: 0x2a030029  slti        $v1, $s0, 0x29
    ctx->pc = 0x240944u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)41) ? 1 : 0);
label_240948:
    // 0x240948: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
label_24094c:
    if (ctx->pc == 0x24094Cu) {
        ctx->pc = 0x240950u;
        goto label_240950;
    }
    ctx->pc = 0x240948u;
    {
        const bool branch_taken_0x240948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x240948) {
            ctx->pc = 0x2408ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2408ac;
        }
    }
    ctx->pc = 0x240950u;
label_240950:
    // 0x240950: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x240950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_240954:
    // 0x240954: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x240954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_240958:
    // 0x240958: 0x3e00008  jr          $ra
label_24095c:
    if (ctx->pc == 0x24095Cu) {
        ctx->pc = 0x24095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240958u;
        // 0x24095c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240960u;
        goto label_240960;
    }
    ctx->pc = 0x240958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240958u;
        // 0x24095c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240960u;
label_240960:
    // 0x240960: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x240960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_240964:
    // 0x240964: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x240964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_240968:
    // 0x240968: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x240968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_24096c:
    // 0x24096c: 0x938392f4  lbu         $v1, -0x6D0C($gp)
    ctx->pc = 0x24096cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939380)));
label_240970:
    // 0x240970: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x240970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240974:
    // 0x240974: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x240974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_240978:
    // 0x240978: 0xa38392f4  sb          $v1, -0x6D0C($gp)
    ctx->pc = 0x240978u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939380), (uint8_t)GPR_U32(ctx, 3));
label_24097c:
    // 0x24097c: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x24097cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_240980:
    // 0x240980: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x240980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240984:
    // 0x240984: 0x24843420  addiu       $a0, $a0, 0x3420
    ctx->pc = 0x240984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13344));
label_240988:
    // 0x240988: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x240988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_24098c:
    // 0x24098c: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x24098cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_240990:
    // 0x240990: 0x1483001d  bne         $a0, $v1, . + 4 + (0x1D << 2)
label_240994:
    if (ctx->pc == 0x240994u) {
        ctx->pc = 0x240998u;
        goto label_240998;
    }
    ctx->pc = 0x240990u;
    {
        const bool branch_taken_0x240990 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x240990) {
            ctx->pc = 0x240A08u;
            goto label_240a08;
        }
    }
    ctx->pc = 0x240998u;
label_240998:
    // 0x240998: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x240998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_24099c:
    // 0x24099c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24099cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2409a0:
    // 0x2409a0: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x2409a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
label_2409a4:
    // 0x2409a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2409a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2409a8:
    // 0x2409a8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2409a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2409ac:
    // 0x2409ac: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2409acu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2409b0:
    // 0x2409b0: 0xc056a20  jal         func_15A880
label_2409b4:
    if (ctx->pc == 0x2409B4u) {
        ctx->pc = 0x2409B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409B0u;
        // 0x2409b4: 0xa0234ec5  sb          $v1, 0x4EC5($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 20165), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2409B8u;
        goto label_2409b8;
    }
    ctx->pc = 0x2409B0u;
    SET_GPR_U32(ctx, 31, 0x2409B8u);
    ctx->pc = 0x2409B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2409B0u;
    // 0x2409b4: 0xa0234ec5  sb          $v1, 0x4EC5($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 20165), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A880u;
    { ctx->pc = 0x15a880; return; }
    ctx->pc = 0x2409B8u;
label_2409b8:
    // 0x2409b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2409b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2409bc:
    // 0x2409bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2409bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2409c0:
    // 0x2409c0: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x2409c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_2409c4:
    // 0x2409c4: 0xc056a04  jal         func_15A810
label_2409c8:
    if (ctx->pc == 0x2409C8u) {
        ctx->pc = 0x2409C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409C4u;
        // 0x2409c8: 0x27a70028  addiu       $a3, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2409CCu;
        goto label_2409cc;
    }
    ctx->pc = 0x2409C4u;
    SET_GPR_U32(ctx, 31, 0x2409CCu);
    ctx->pc = 0x2409C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2409C4u;
    // 0x2409c8: 0x27a70028  addiu       $a3, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A810u;
    { ctx->pc = 0x15a810; return; }
    ctx->pc = 0x2409CCu;
label_2409cc:
    // 0x2409cc: 0xc057138  jal         func_15C4E0
label_2409d0:
    if (ctx->pc == 0x2409D0u) {
        ctx->pc = 0x2409D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409CCu;
        // 0x2409d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2409D4u;
        goto label_2409d4;
    }
    ctx->pc = 0x2409CCu;
    SET_GPR_U32(ctx, 31, 0x2409D4u);
    ctx->pc = 0x2409D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2409CCu;
    // 0x2409d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C4E0u;
    { ctx->pc = 0x15c4e0; return; }
    ctx->pc = 0x2409D4u;
label_2409d4:
    // 0x2409d4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x2409d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_2409d8:
    // 0x2409d8: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x2409d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2409dc:
    // 0x2409dc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2409dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2409e0:
    // 0x2409e0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2409e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2409e4:
    // 0x2409e4: 0xc056fc8  jal         func_15BF20
label_2409e8:
    if (ctx->pc == 0x2409E8u) {
        ctx->pc = 0x2409E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409E4u;
        // 0x2409e8: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2409ECu;
        goto label_2409ec;
    }
    ctx->pc = 0x2409E4u;
    SET_GPR_U32(ctx, 31, 0x2409ECu);
    ctx->pc = 0x2409E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2409E4u;
    // 0x2409e8: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BF20u;
    { ctx->pc = 0x15bf20; return; }
    ctx->pc = 0x2409ECu;
label_2409ec:
    // 0x2409ec: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2409ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_2409f0:
    // 0x2409f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2409f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2409f4:
    // 0x2409f4: 0x2463c990  addiu       $v1, $v1, -0x3670
    ctx->pc = 0x2409f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953360));
label_2409f8:
    // 0x2409f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2409f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2409fc:
    // 0x2409fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2409fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_240a00:
    // 0x240a00: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x240a00u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_240a04:
    // 0x240a04: 0xa0244e60  sb          $a0, 0x4E60($at)
    ctx->pc = 0x240a04u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20064), (uint8_t)GPR_U32(ctx, 4));
label_240a08:
    // 0x240a08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x240a08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_240a0c:
    // 0x240a0c: 0x2a030029  slti        $v1, $s0, 0x29
    ctx->pc = 0x240a0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)41) ? 1 : 0);
label_240a10:
    // 0x240a10: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
label_240a14:
    if (ctx->pc == 0x240A14u) {
        ctx->pc = 0x240A18u;
        goto label_240a18;
    }
    ctx->pc = 0x240A10u;
    {
        const bool branch_taken_0x240a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x240a10) {
            ctx->pc = 0x24097Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24097c;
        }
    }
    ctx->pc = 0x240A18u;
label_240a18:
    // 0x240a18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x240a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_240a1c:
    // 0x240a1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x240a1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_240a20:
    // 0x240a20: 0x3e00008  jr          $ra
label_240a24:
    if (ctx->pc == 0x240A24u) {
        ctx->pc = 0x240A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A20u;
        // 0x240a24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240A28u;
        goto label_240a28;
    }
    ctx->pc = 0x240A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A20u;
        // 0x240a24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240A28u;
label_240a28:
    // 0x240a28: 0x0  nop
    ctx->pc = 0x240a28u;
    // NOP
label_240a2c:
    // 0x240a2c: 0x0  nop
    ctx->pc = 0x240a2cu;
    // NOP
label_240a30:
    // 0x240a30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x240a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_240a34:
    // 0x240a34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x240a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_240a38:
    // 0x240a38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x240a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_240a3c:
    // 0x240a3c: 0x938392f4  lbu         $v1, -0x6D0C($gp)
    ctx->pc = 0x240a3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939380)));
label_240a40:
    // 0x240a40: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x240a40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240a44:
    // 0x240a44: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x240a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_240a48:
    // 0x240a48: 0xa38392f4  sb          $v1, -0x6D0C($gp)
    ctx->pc = 0x240a48u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939380), (uint8_t)GPR_U32(ctx, 3));
label_240a4c:
    // 0x240a4c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x240a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_240a50:
    // 0x240a50: 0x24633420  addiu       $v1, $v1, 0x3420
    ctx->pc = 0x240a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13344));
label_240a54:
    // 0x240a54: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x240a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_240a58:
    // 0x240a58: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x240a58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_240a5c:
    // 0x240a5c: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
label_240a60:
    if (ctx->pc == 0x240A60u) {
        ctx->pc = 0x240A64u;
        goto label_240a64;
    }
    ctx->pc = 0x240A5Cu;
    {
        const bool branch_taken_0x240a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x240a5c) {
            ctx->pc = 0x240AD8u;
            goto label_240ad8;
        }
    }
    ctx->pc = 0x240A64u;
label_240a64:
    // 0x240a64: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x240a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_240a68:
    // 0x240a68: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240a6c:
    // 0x240a6c: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x240a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
label_240a70:
    // 0x240a70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x240a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240a74:
    // 0x240a74: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x240a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_240a78:
    // 0x240a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_240a7c:
    // 0x240a7c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x240a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_240a80:
    // 0x240a80: 0xc056a20  jal         func_15A880
label_240a84:
    if (ctx->pc == 0x240A84u) {
        ctx->pc = 0x240A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A80u;
        // 0x240a84: 0xa0234ec5  sb          $v1, 0x4EC5($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 20165), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240A88u;
        goto label_240a88;
    }
    ctx->pc = 0x240A80u;
    SET_GPR_U32(ctx, 31, 0x240A88u);
    ctx->pc = 0x240A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240A80u;
    // 0x240a84: 0xa0234ec5  sb          $v1, 0x4EC5($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 20165), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A880u;
    { ctx->pc = 0x15a880; return; }
    ctx->pc = 0x240A88u;
label_240a88:
    // 0x240a88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x240a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240a8c:
    // 0x240a8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x240a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240a90:
    // 0x240a90: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x240a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_240a94:
    // 0x240a94: 0xc056a04  jal         func_15A810
label_240a98:
    if (ctx->pc == 0x240A98u) {
        ctx->pc = 0x240A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A94u;
        // 0x240a98: 0x27a70028  addiu       $a3, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240A9Cu;
        goto label_240a9c;
    }
    ctx->pc = 0x240A94u;
    SET_GPR_U32(ctx, 31, 0x240A9Cu);
    ctx->pc = 0x240A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240A94u;
    // 0x240a98: 0x27a70028  addiu       $a3, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A810u;
    { ctx->pc = 0x15a810; return; }
    ctx->pc = 0x240A9Cu;
label_240a9c:
    // 0x240a9c: 0xc057138  jal         func_15C4E0
label_240aa0:
    if (ctx->pc == 0x240AA0u) {
        ctx->pc = 0x240AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A9Cu;
        // 0x240aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240AA4u;
        goto label_240aa4;
    }
    ctx->pc = 0x240A9Cu;
    SET_GPR_U32(ctx, 31, 0x240AA4u);
    ctx->pc = 0x240AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240A9Cu;
    // 0x240aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C4E0u;
    { ctx->pc = 0x15c4e0; return; }
    ctx->pc = 0x240AA4u;
label_240aa4:
    // 0x240aa4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x240aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_240aa8:
    // 0x240aa8: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x240aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_240aac:
    // 0x240aac: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x240aacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_240ab0:
    // 0x240ab0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x240ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_240ab4:
    // 0x240ab4: 0xc056fc8  jal         func_15BF20
label_240ab8:
    if (ctx->pc == 0x240AB8u) {
        ctx->pc = 0x240AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240AB4u;
        // 0x240ab8: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240ABCu;
        goto label_240abc;
    }
    ctx->pc = 0x240AB4u;
    SET_GPR_U32(ctx, 31, 0x240ABCu);
    ctx->pc = 0x240AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240AB4u;
    // 0x240ab8: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BF20u;
    { ctx->pc = 0x15bf20; return; }
    ctx->pc = 0x240ABCu;
label_240abc:
    // 0x240abc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x240abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_240ac0:
    // 0x240ac0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240ac4:
    // 0x240ac4: 0x2463c990  addiu       $v1, $v1, -0x3670
    ctx->pc = 0x240ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953360));
label_240ac8:
    // 0x240ac8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x240ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240acc:
    // 0x240acc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x240accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_240ad0:
    // 0x240ad0: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x240ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_240ad4:
    // 0x240ad4: 0xa0244e60  sb          $a0, 0x4E60($at)
    ctx->pc = 0x240ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20064), (uint8_t)GPR_U32(ctx, 4));
label_240ad8:
    // 0x240ad8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x240ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_240adc:
    // 0x240adc: 0x2a030029  slti        $v1, $s0, 0x29
    ctx->pc = 0x240adcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)41) ? 1 : 0);
label_240ae0:
    // 0x240ae0: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
label_240ae4:
    if (ctx->pc == 0x240AE4u) {
        ctx->pc = 0x240AE8u;
        goto label_240ae8;
    }
    ctx->pc = 0x240AE0u;
    {
        const bool branch_taken_0x240ae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x240ae0) {
            ctx->pc = 0x240A4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240a4c;
        }
    }
    ctx->pc = 0x240AE8u;
label_240ae8:
    // 0x240ae8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x240ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_240aec:
    // 0x240aec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x240aecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_240af0:
    // 0x240af0: 0x3e00008  jr          $ra
label_240af4:
    if (ctx->pc == 0x240AF4u) {
        ctx->pc = 0x240AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240AF0u;
        // 0x240af4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240AF8u;
        goto label_240af8;
    }
    ctx->pc = 0x240AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240AF0u;
        // 0x240af4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240AF8u;
label_240af8:
    // 0x240af8: 0x0  nop
    ctx->pc = 0x240af8u;
    // NOP
label_240afc:
    // 0x240afc: 0x0  nop
    ctx->pc = 0x240afcu;
    // NOP
label_240b00:
    // 0x240b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x240b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_240b04:
    // 0x240b04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x240b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_240b08:
    // 0x240b08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x240b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_240b0c:
    // 0x240b0c: 0x938292f4  lbu         $v0, -0x6D0C($gp)
    ctx->pc = 0x240b0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939380)));
label_240b10:
    // 0x240b10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x240b10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240b14:
    // 0x240b14: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x240b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_240b18:
    // 0x240b18: 0xa38292f4  sb          $v0, -0x6D0C($gp)
    ctx->pc = 0x240b18u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939380), (uint8_t)GPR_U32(ctx, 2));
label_240b1c:
    // 0x240b1c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x240b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_240b20:
    // 0x240b20: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240b24:
    // 0x240b24: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x240b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
label_240b28:
    // 0x240b28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x240b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240b2c:
    // 0x240b2c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x240b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_240b30:
    // 0x240b30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_240b34:
    // 0x240b34: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x240b34u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_240b38:
    // 0x240b38: 0xc056a20  jal         func_15A880
label_240b3c:
    if (ctx->pc == 0x240B3Cu) {
        ctx->pc = 0x240B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B38u;
        // 0x240b3c: 0xa0234ec5  sb          $v1, 0x4EC5($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 20165), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240B40u;
        goto label_240b40;
    }
    ctx->pc = 0x240B38u;
    SET_GPR_U32(ctx, 31, 0x240B40u);
    ctx->pc = 0x240B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240B38u;
    // 0x240b3c: 0xa0234ec5  sb          $v1, 0x4EC5($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 20165), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A880u;
    { ctx->pc = 0x15a880; return; }
    ctx->pc = 0x240B40u;
label_240b40:
    // 0x240b40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x240b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240b44:
    // 0x240b44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x240b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240b48:
    // 0x240b48: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x240b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_240b4c:
    // 0x240b4c: 0xc056a04  jal         func_15A810
label_240b50:
    if (ctx->pc == 0x240B50u) {
        ctx->pc = 0x240B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B4Cu;
        // 0x240b50: 0x27a70028  addiu       $a3, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240B54u;
        goto label_240b54;
    }
    ctx->pc = 0x240B4Cu;
    SET_GPR_U32(ctx, 31, 0x240B54u);
    ctx->pc = 0x240B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240B4Cu;
    // 0x240b50: 0x27a70028  addiu       $a3, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A810u;
    { ctx->pc = 0x15a810; return; }
    ctx->pc = 0x240B54u;
label_240b54:
    // 0x240b54: 0xc057138  jal         func_15C4E0
label_240b58:
    if (ctx->pc == 0x240B58u) {
        ctx->pc = 0x240B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B54u;
        // 0x240b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240B5Cu;
        goto label_240b5c;
    }
    ctx->pc = 0x240B54u;
    SET_GPR_U32(ctx, 31, 0x240B5Cu);
    ctx->pc = 0x240B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240B54u;
    // 0x240b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C4E0u;
    { ctx->pc = 0x15c4e0; return; }
    ctx->pc = 0x240B5Cu;
label_240b5c:
    // 0x240b5c: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x240b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_240b60:
    // 0x240b60: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x240b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_240b64:
    // 0x240b64: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x240b64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_240b68:
    // 0x240b68: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x240b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_240b6c:
    // 0x240b6c: 0xc056fc8  jal         func_15BF20
label_240b70:
    if (ctx->pc == 0x240B70u) {
        ctx->pc = 0x240B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B6Cu;
        // 0x240b70: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240B74u;
        goto label_240b74;
    }
    ctx->pc = 0x240B6Cu;
    SET_GPR_U32(ctx, 31, 0x240B74u);
    ctx->pc = 0x240B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240B6Cu;
    // 0x240b70: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BF20u;
    { ctx->pc = 0x15bf20; return; }
    ctx->pc = 0x240B74u;
label_240b74:
    // 0x240b74: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x240b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_240b78:
    // 0x240b78: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240b7c:
    // 0x240b7c: 0x2463c990  addiu       $v1, $v1, -0x3670
    ctx->pc = 0x240b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953360));
label_240b80:
    // 0x240b80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x240b80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_240b84:
    // 0x240b84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x240b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_240b88:
    // 0x240b88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x240b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240b8c:
    // 0x240b8c: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x240b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_240b90:
    // 0x240b90: 0x2a030029  slti        $v1, $s0, 0x29
    ctx->pc = 0x240b90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)41) ? 1 : 0);
label_240b94:
    // 0x240b94: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
label_240b98:
    if (ctx->pc == 0x240B98u) {
        ctx->pc = 0x240B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B94u;
        // 0x240b98: 0xa0244e60  sb          $a0, 0x4E60($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 20064), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240B9Cu;
        goto label_240b9c;
    }
    ctx->pc = 0x240B94u;
    {
        const bool branch_taken_0x240b94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x240B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B94u;
        // 0x240b98: 0xa0244e60  sb          $a0, 0x4E60($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 20064), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b94) {
            ctx->pc = 0x240B1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240b1c;
        }
    }
    ctx->pc = 0x240B9Cu;
label_240b9c:
    // 0x240b9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x240b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_240ba0:
    // 0x240ba0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x240ba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_240ba4:
    // 0x240ba4: 0x3e00008  jr          $ra
label_240ba8:
    if (ctx->pc == 0x240BA8u) {
        ctx->pc = 0x240BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240BA4u;
        // 0x240ba8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240BACu;
        goto label_240bac;
    }
    ctx->pc = 0x240BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240BA4u;
        // 0x240ba8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240BACu;
label_240bac:
    // 0x240bac: 0x0  nop
    ctx->pc = 0x240bacu;
    // NOP
label_240bb0:
    // 0x240bb0: 0x3e00008  jr          $ra
label_240bb4:
    if (ctx->pc == 0x240BB4u) {
        ctx->pc = 0x240BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240BB0u;
        // 0x240bb4: 0xa38092f4  sb          $zero, -0x6D0C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939380), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240BB8u;
        goto label_240bb8;
    }
    ctx->pc = 0x240BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240BB0u;
        // 0x240bb4: 0xa38092f4  sb          $zero, -0x6D0C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939380), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240BB8u;
label_240bb8:
    // 0x240bb8: 0x0  nop
    ctx->pc = 0x240bb8u;
    // NOP
label_240bbc:
    // 0x240bbc: 0x0  nop
    ctx->pc = 0x240bbcu;
    // NOP
label_240bc0:
    // 0x240bc0: 0x3c07002b  lui         $a3, 0x2B
    ctx->pc = 0x240bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)43 << 16));
label_240bc4:
    // 0x240bc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x240bc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240bc8:
    // 0x240bc8: 0x24e718d0  addiu       $a3, $a3, 0x18D0
    ctx->pc = 0x240bc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6352));
label_240bcc:
    // 0x240bcc: 0x84e50000  lh          $a1, 0x0($a3)
    ctx->pc = 0x240bccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_240bd0:
    // 0x240bd0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x240bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_240bd4:
    // 0x240bd4: 0x28c30029  slti        $v1, $a2, 0x29
    ctx->pc = 0x240bd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)41) ? 1 : 0);
label_240bd8:
    // 0x240bd8: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x240bd8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
label_240bdc:
    // 0x240bdc: 0x84e50002  lh          $a1, 0x2($a3)
    ctx->pc = 0x240bdcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_240be0:
    // 0x240be0: 0xa4850002  sh          $a1, 0x2($a0)
    ctx->pc = 0x240be0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 5));
label_240be4:
    // 0x240be4: 0x90e50004  lbu         $a1, 0x4($a3)
    ctx->pc = 0x240be4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
label_240be8:
    // 0x240be8: 0xa0850004  sb          $a1, 0x4($a0)
    ctx->pc = 0x240be8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 5));
label_240bec:
    // 0x240bec: 0x90e50005  lbu         $a1, 0x5($a3)
    ctx->pc = 0x240becu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
label_240bf0:
    // 0x240bf0: 0xa0850005  sb          $a1, 0x5($a0)
    ctx->pc = 0x240bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 5));
label_240bf4:
    // 0x240bf4: 0x90e50006  lbu         $a1, 0x6($a3)
    ctx->pc = 0x240bf4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
label_240bf8:
    // 0x240bf8: 0xa0850006  sb          $a1, 0x6($a0)
    ctx->pc = 0x240bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 5));
label_240bfc:
    // 0x240bfc: 0x90e50007  lbu         $a1, 0x7($a3)
    ctx->pc = 0x240bfcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 7)));
label_240c00:
    // 0x240c00: 0xa0850007  sb          $a1, 0x7($a0)
    ctx->pc = 0x240c00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 5));
label_240c04:
    // 0x240c04: 0x90e50008  lbu         $a1, 0x8($a3)
    ctx->pc = 0x240c04u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
label_240c08:
    // 0x240c08: 0xa0850008  sb          $a1, 0x8($a0)
    ctx->pc = 0x240c08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 5));
label_240c0c:
    // 0x240c0c: 0x90e50009  lbu         $a1, 0x9($a3)
    ctx->pc = 0x240c0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 9)));
label_240c10:
    // 0x240c10: 0xa0850009  sb          $a1, 0x9($a0)
    ctx->pc = 0x240c10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 5));
label_240c14:
    // 0x240c14: 0x90e5000a  lbu         $a1, 0xA($a3)
    ctx->pc = 0x240c14u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 10)));
label_240c18:
    // 0x240c18: 0xa085000a  sb          $a1, 0xA($a0)
    ctx->pc = 0x240c18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 5));
label_240c1c:
    // 0x240c1c: 0x90e5000b  lbu         $a1, 0xB($a3)
    ctx->pc = 0x240c1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 11)));
label_240c20:
    // 0x240c20: 0xa085000b  sb          $a1, 0xB($a0)
    ctx->pc = 0x240c20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 5));
label_240c24:
    // 0x240c24: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x240c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_240c28:
    // 0x240c28: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x240c28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_240c2c:
    // 0x240c2c: 0x8ce50010  lw          $a1, 0x10($a3)
    ctx->pc = 0x240c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_240c30:
    // 0x240c30: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x240c30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
label_240c34:
    // 0x240c34: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x240c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_240c38:
    // 0x240c38: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x240c38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
label_240c3c:
    // 0x240c3c: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x240c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
label_240c40:
    // 0x240c40: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
label_240c44:
    if (ctx->pc == 0x240C44u) {
        ctx->pc = 0x240C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C40u;
        // 0x240c44: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240C48u;
        goto label_240c48;
    }
    ctx->pc = 0x240C40u;
    {
        const bool branch_taken_0x240c40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x240C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C40u;
        // 0x240c44: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c40) {
            ctx->pc = 0x240BCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240bcc;
        }
    }
    ctx->pc = 0x240C48u;
label_240c48:
    // 0x240c48: 0x3e00008  jr          $ra
label_240c4c:
    if (ctx->pc == 0x240C4Cu) {
        ctx->pc = 0x240C50u;
        goto label_240c50;
    }
    ctx->pc = 0x240C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240C50u;
label_240c50:
    // 0x240c50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x240c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_240c54:
    // 0x240c54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x240c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_240c58:
    // 0x240c58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x240c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_240c5c:
    // 0x240c5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x240c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_240c60:
    // 0x240c60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x240c60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_240c64:
    // 0x240c64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x240c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_240c68:
    // 0x240c68: 0xc0905a8  jal         func_2416A0
label_240c6c:
    if (ctx->pc == 0x240C6Cu) {
        ctx->pc = 0x240C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C68u;
        // 0x240c6c: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240C70u;
        goto label_240c70;
    }
    ctx->pc = 0x240C68u;
    SET_GPR_U32(ctx, 31, 0x240C70u);
    ctx->pc = 0x240C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240C68u;
    // 0x240c6c: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2416A0u;
    { ctx->pc = 0x2416a0; return; }
    ctx->pc = 0x240C70u;
label_240c70:
    // 0x240c70: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x240c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_240c74:
    // 0x240c74: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x240c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_240c78:
    // 0x240c78: 0x34632394  ori         $v1, $v1, 0x2394
    ctx->pc = 0x240c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9108);
label_240c7c:
    // 0x240c7c: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x240c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_240c80:
    // 0x240c80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x240c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_240c84:
    // 0x240c84: 0xc078050  jal         func_1E0140
label_240c88:
    if (ctx->pc == 0x240C88u) {
        ctx->pc = 0x240C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C84u;
        // 0x240c88: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240C8Cu;
        goto label_240c8c;
    }
    ctx->pc = 0x240C84u;
    SET_GPR_U32(ctx, 31, 0x240C8Cu);
    ctx->pc = 0x240C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240C84u;
    // 0x240c88: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x240C8Cu;
label_240c8c:
    // 0x240c8c: 0xc078070  jal         func_1E01C0
label_240c90:
    if (ctx->pc == 0x240C90u) {
        ctx->pc = 0x240C94u;
        goto label_240c94;
    }
    ctx->pc = 0x240C8Cu;
    SET_GPR_U32(ctx, 31, 0x240C94u);
    ctx->pc = 0x1E01C0u;
    { ctx->pc = 0x1e01c0; return; }
    ctx->pc = 0x240C94u;
label_240c94:
    // 0x240c94: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x240c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_240c98:
    // 0x240c98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x240c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240c9c:
    // 0x240c9c: 0x34442380  ori         $a0, $v0, 0x2380
    ctx->pc = 0x240c9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9088);
label_240ca0:
    // 0x240ca0: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x240ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_240ca4:
    // 0x240ca4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x240ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_240ca8:
    // 0x240ca8: 0x10000003  b           . + 4 + (0x3 << 2)
label_240cac:
    if (ctx->pc == 0x240CACu) {
        ctx->pc = 0x240CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240CA8u;
        // 0x240cac: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240CB0u;
        goto label_240cb0;
    }
    ctx->pc = 0x240CA8u;
    {
        const bool branch_taken_0x240ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240CA8u;
        // 0x240cac: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ca8) {
            ctx->pc = 0x240CB8u;
            goto label_240cb8;
        }
    }
    ctx->pc = 0x240CB0u;
label_240cb0:
    // 0x240cb0: 0xc07b48c  jal         func_1ED230
label_240cb4:
    if (ctx->pc == 0x240CB4u) {
        ctx->pc = 0x240CB8u;
        goto label_240cb8;
    }
    ctx->pc = 0x240CB0u;
    SET_GPR_U32(ctx, 31, 0x240CB8u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x240CB8u;
label_240cb8:
    // 0x240cb8: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x240cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_240cbc:
    // 0x240cbc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240cc0:
    // 0x240cc0: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x240cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_240cc4:
    // 0x240cc4: 0x8c222380  lw          $v0, 0x2380($at)
    ctx->pc = 0x240cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9088)));
label_240cc8:
    // 0x240cc8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_240ccc:
    if (ctx->pc == 0x240CCCu) {
        ctx->pc = 0x240CD0u;
        goto label_240cd0;
    }
    ctx->pc = 0x240CC8u;
    {
        const bool branch_taken_0x240cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240cc8) {
            ctx->pc = 0x240CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240cb0;
        }
    }
    ctx->pc = 0x240CD0u;
label_240cd0:
    // 0x240cd0: 0x8f828f44  lw          $v0, -0x70BC($gp)
    ctx->pc = 0x240cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
label_240cd4:
    // 0x240cd4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_240cd8:
    if (ctx->pc == 0x240CD8u) {
        ctx->pc = 0x240CDCu;
        goto label_240cdc;
    }
    ctx->pc = 0x240CD4u;
    {
        const bool branch_taken_0x240cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240cd4) {
            ctx->pc = 0x240CE4u;
            goto label_240ce4;
        }
    }
    ctx->pc = 0x240CDCu;
label_240cdc:
    // 0x240cdc: 0x1000024e  b           . + 4 + (0x24E << 2)
label_240ce0:
    if (ctx->pc == 0x240CE0u) {
        ctx->pc = 0x240CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240CDCu;
        // 0x240ce0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240CE4u;
        goto label_240ce4;
    }
    ctx->pc = 0x240CDCu;
    {
        const bool branch_taken_0x240cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240CDCu;
        // 0x240ce0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240cdc) {
            ctx->pc = 0x241618u;
            { ctx->pc = 0x241618; return; }
        }
    }
    ctx->pc = 0x240CE4u;
label_240ce4:
    // 0x240ce4: 0x8f828f40  lw          $v0, -0x70C0($gp)
    ctx->pc = 0x240ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938432)));
label_240ce8:
    // 0x240ce8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_240cec:
    if (ctx->pc == 0x240CECu) {
        ctx->pc = 0x240CF0u;
        goto label_240cf0;
    }
    ctx->pc = 0x240CE8u;
    {
        const bool branch_taken_0x240ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240ce8) {
            ctx->pc = 0x240CF8u;
            goto label_240cf8;
        }
    }
    ctx->pc = 0x240CF0u;
label_240cf0:
    // 0x240cf0: 0x10000249  b           . + 4 + (0x249 << 2)
label_240cf4:
    if (ctx->pc == 0x240CF4u) {
        ctx->pc = 0x240CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240CF0u;
        // 0x240cf4: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240CF8u;
        goto label_240cf8;
    }
    ctx->pc = 0x240CF0u;
    {
        const bool branch_taken_0x240cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240CF0u;
        // 0x240cf4: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240cf0) {
            ctx->pc = 0x241618u;
            { ctx->pc = 0x241618; return; }
        }
    }
    ctx->pc = 0x240CF8u;
label_240cf8:
    // 0x240cf8: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x240cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_240cfc:
    // 0x240cfc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x240cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_240d00:
    // 0x240d00: 0x34632398  ori         $v1, $v1, 0x2398
    ctx->pc = 0x240d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9112);
label_240d04:
    // 0x240d04: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x240d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_240d08:
    // 0x240d08: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x240d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_240d0c:
    // 0x240d0c: 0x146000aa  bnez        $v1, . + 4 + (0xAA << 2)
label_240d10:
    if (ctx->pc == 0x240D10u) {
        ctx->pc = 0x240D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D0Cu;
        // 0x240d10: 0x122900  sll         $a1, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240D14u;
        goto label_240d14;
    }
    ctx->pc = 0x240D0Cu;
    {
        const bool branch_taken_0x240d0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x240D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D0Cu;
        // 0x240d10: 0x122900  sll         $a1, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d0c) {
            ctx->pc = 0x240FB8u;
            { ctx->pc = 0x240fb8; return; }
        }
    }
    ctx->pc = 0x240D14u;
label_240d14:
    // 0x240d14: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x240d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_240d18:
    // 0x240d18: 0xa32004  sllv        $a0, $v1, $a1
    ctx->pc = 0x240d18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
label_240d1c:
    // 0x240d1c: 0xdf8387c8  ld          $v1, -0x7838($gp)
    ctx->pc = 0x240d1cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_240d20:
    // 0x240d20: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x240d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_240d24:
    // 0x240d24: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_240d28:
    if (ctx->pc == 0x240D28u) {
        ctx->pc = 0x240D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D24u;
        // 0x240d28: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240D2Cu;
        goto label_240d2c;
    }
    ctx->pc = 0x240D24u;
    {
        const bool branch_taken_0x240d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x240D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D24u;
        // 0x240d28: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d24) {
            ctx->pc = 0x240D3Cu;
            goto label_240d3c;
        }
    }
    ctx->pc = 0x240D2Cu;
label_240d2c:
    // 0x240d2c: 0xc05b420  jal         func_16D080
label_240d30:
    if (ctx->pc == 0x240D30u) {
        ctx->pc = 0x240D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D2Cu;
        // 0x240d30: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240D34u;
        goto label_240d34;
    }
    ctx->pc = 0x240D2Cu;
    SET_GPR_U32(ctx, 31, 0x240D34u);
    ctx->pc = 0x240D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240D2Cu;
    // 0x240d30: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    { ctx->pc = 0x16d080; return; }
    ctx->pc = 0x240D34u;
label_240d34:
    // 0x240d34: 0x10000238  b           . + 4 + (0x238 << 2)
label_240d38:
    if (ctx->pc == 0x240D38u) {
        ctx->pc = 0x240D3Cu;
        goto label_240d3c;
    }
    ctx->pc = 0x240D34u;
    {
        const bool branch_taken_0x240d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240d34) {
            ctx->pc = 0x241618u;
            { ctx->pc = 0x241618; return; }
        }
    }
    ctx->pc = 0x240D3Cu;
label_240d3c:
    // 0x240d3c: 0xdf8387c8  ld          $v1, -0x7838($gp)
    ctx->pc = 0x240d3cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_240d40:
    // 0x240d40: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x240d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_240d44:
    // 0x240d44: 0xa42004  sllv        $a0, $a0, $a1
    ctx->pc = 0x240d44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
label_240d48:
    // 0x240d48: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x240d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_240d4c:
    // 0x240d4c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_240d50:
    if (ctx->pc == 0x240D50u) {
        ctx->pc = 0x240D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D4Cu;
        // 0x240d50: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240D54u;
        goto label_240d54;
    }
    ctx->pc = 0x240D4Cu;
    {
        const bool branch_taken_0x240d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x240D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D4Cu;
        // 0x240d50: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d4c) {
            ctx->pc = 0x240DB8u;
            goto label_240db8;
        }
    }
    ctx->pc = 0x240D54u;
label_240d54:
    // 0x240d54: 0xc05b420  jal         func_16D080
label_240d58:
    if (ctx->pc == 0x240D58u) {
        ctx->pc = 0x240D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D54u;
        // 0x240d58: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240D5Cu;
        goto label_240d5c;
    }
    ctx->pc = 0x240D54u;
    SET_GPR_U32(ctx, 31, 0x240D5Cu);
    ctx->pc = 0x240D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240D54u;
    // 0x240d58: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    { ctx->pc = 0x16d080; return; }
    ctx->pc = 0x240D5Cu;
label_240d5c:
    // 0x240d5c: 0x8f8392f8  lw          $v1, -0x6D08($gp)
    ctx->pc = 0x240d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_240d60:
    // 0x240d60: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240d64:
    // 0x240d64: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x240d64u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_240d68:
    // 0x240d68: 0x8c222394  lw          $v0, 0x2394($at)
    ctx->pc = 0x240d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9108)));
label_240d6c:
    // 0x240d6c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240d70:
    // 0x240d70: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x240d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_240d74:
    // 0x240d74: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x240d74u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_240d78:
    // 0x240d78: 0xac222394  sw          $v0, 0x2394($at)
    ctx->pc = 0x240d78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9108), GPR_U32(ctx, 2));
label_240d7c:
    // 0x240d7c: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x240d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_240d80:
    // 0x240d80: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240d84:
    // 0x240d84: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x240d84u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_240d88:
    // 0x240d88: 0x8c222394  lw          $v0, 0x2394($at)
    ctx->pc = 0x240d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9108)));
label_240d8c:
    // 0x240d8c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_240d90:
    if (ctx->pc == 0x240D90u) {
        ctx->pc = 0x240D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D8Cu;
        // 0x240d90: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240D94u;
        goto label_240d94;
    }
    ctx->pc = 0x240D8Cu;
    {
        const bool branch_taken_0x240d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D8Cu;
        // 0x240d90: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d8c) {
            ctx->pc = 0x240DA4u;
            goto label_240da4;
        }
    }
    ctx->pc = 0x240D94u;
label_240d94:
    // 0x240d94: 0xc078050  jal         func_1E0140
label_240d98:
    if (ctx->pc == 0x240D98u) {
        ctx->pc = 0x240D9Cu;
        goto label_240d9c;
    }
    ctx->pc = 0x240D94u;
    SET_GPR_U32(ctx, 31, 0x240D9Cu);
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x240D9Cu;
label_240d9c:
    // 0x240d9c: 0x10000060  b           . + 4 + (0x60 << 2)
label_240da0:
    if (ctx->pc == 0x240DA0u) {
        ctx->pc = 0x240DA4u;
        goto label_240da4;
    }
    ctx->pc = 0x240D9Cu;
    {
        const bool branch_taken_0x240d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240d9c) {
            ctx->pc = 0x240F20u;
            { ctx->pc = 0x240f20; return; }
        }
    }
    ctx->pc = 0x240DA4u;
label_240da4:
    // 0x240da4: 0x0  nop
    ctx->pc = 0x240da4u;
    // NOP
label_240da8:
    // 0x240da8: 0xc078050  jal         func_1E0140
label_240dac:
    if (ctx->pc == 0x240DACu) {
        ctx->pc = 0x240DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DA8u;
        // 0x240dac: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240DB0u;
        goto label_240db0;
    }
    ctx->pc = 0x240DA8u;
    SET_GPR_U32(ctx, 31, 0x240DB0u);
    ctx->pc = 0x240DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240DA8u;
    // 0x240dac: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x240DB0u;
label_240db0:
    // 0x240db0: 0x1000005b  b           . + 4 + (0x5B << 2)
label_240db4:
    if (ctx->pc == 0x240DB4u) {
        ctx->pc = 0x240DB8u;
        goto label_240db8;
    }
    ctx->pc = 0x240DB0u;
    {
        const bool branch_taken_0x240db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240db0) {
            ctx->pc = 0x240F20u;
            { ctx->pc = 0x240f20; return; }
        }
    }
    ctx->pc = 0x240DB8u;
label_240db8:
    // 0x240db8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x240db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_240dbc:
    // 0x240dbc: 0xa32004  sllv        $a0, $v1, $a1
    ctx->pc = 0x240dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
label_240dc0:
    // 0x240dc0: 0xdf8387c8  ld          $v1, -0x7838($gp)
    ctx->pc = 0x240dc0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_240dc4:
    // 0x240dc4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x240dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_240dc8:
    // 0x240dc8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_240dcc:
    if (ctx->pc == 0x240DCCu) {
        ctx->pc = 0x240DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DC8u;
        // 0x240dcc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240DD0u;
        goto label_240dd0;
    }
    ctx->pc = 0x240DC8u;
    {
        const bool branch_taken_0x240dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x240DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DC8u;
        // 0x240dcc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240dc8) {
            ctx->pc = 0x240E30u;
            goto label_240e30;
        }
    }
    ctx->pc = 0x240DD0u;
label_240dd0:
    // 0x240dd0: 0xc05b420  jal         func_16D080
label_240dd4:
    if (ctx->pc == 0x240DD4u) {
        ctx->pc = 0x240DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DD0u;
        // 0x240dd4: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240DD8u;
        goto label_240dd8;
    }
    ctx->pc = 0x240DD0u;
    SET_GPR_U32(ctx, 31, 0x240DD8u);
    ctx->pc = 0x240DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240DD0u;
    // 0x240dd4: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    { ctx->pc = 0x16d080; return; }
    ctx->pc = 0x240DD8u;
label_240dd8:
    // 0x240dd8: 0x8f8392f8  lw          $v1, -0x6D08($gp)
    ctx->pc = 0x240dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_240ddc:
    // 0x240ddc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240de0:
    // 0x240de0: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x240de0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_240de4:
    // 0x240de4: 0x8c222394  lw          $v0, 0x2394($at)
    ctx->pc = 0x240de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9108)));
label_240de8:
    // 0x240de8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240dec:
    // 0x240dec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x240decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_240df0:
    // 0x240df0: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x240df0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_240df4:
    // 0x240df4: 0xac222394  sw          $v0, 0x2394($at)
    ctx->pc = 0x240df4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9108), GPR_U32(ctx, 2));
label_240df8:
    // 0x240df8: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x240df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_240dfc:
    // 0x240dfc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240e00:
    // 0x240e00: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x240e00u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_240e04:
    // 0x240e04: 0x8c222394  lw          $v0, 0x2394($at)
    ctx->pc = 0x240e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9108)));
label_240e08:
    // 0x240e08: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_240e0c:
    if (ctx->pc == 0x240E0Cu) {
        ctx->pc = 0x240E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E08u;
        // 0x240e0c: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240E10u;
        goto label_240e10;
    }
    ctx->pc = 0x240E08u;
    {
        const bool branch_taken_0x240e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E08u;
        // 0x240e0c: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240e08) {
            ctx->pc = 0x240E20u;
            goto label_240e20;
        }
    }
    ctx->pc = 0x240E10u;
label_240e10:
    // 0x240e10: 0xc078050  jal         func_1E0140
label_240e14:
    if (ctx->pc == 0x240E14u) {
        ctx->pc = 0x240E18u;
        goto label_240e18;
    }
    ctx->pc = 0x240E10u;
    SET_GPR_U32(ctx, 31, 0x240E18u);
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x240E18u;
label_240e18:
    // 0x240e18: 0x10000041  b           . + 4 + (0x41 << 2)
label_240e1c:
    if (ctx->pc == 0x240E1Cu) {
        ctx->pc = 0x240E20u;
        goto label_240e20;
    }
    ctx->pc = 0x240E18u;
    {
        const bool branch_taken_0x240e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240e18) {
            ctx->pc = 0x240F20u;
            { ctx->pc = 0x240f20; return; }
        }
    }
    ctx->pc = 0x240E20u;
label_240e20:
    // 0x240e20: 0xc078050  jal         func_1E0140
label_240e24:
    if (ctx->pc == 0x240E24u) {
        ctx->pc = 0x240E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E20u;
        // 0x240e24: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240E28u;
        goto label_240e28;
    }
    ctx->pc = 0x240E20u;
    SET_GPR_U32(ctx, 31, 0x240E28u);
    ctx->pc = 0x240E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240E20u;
    // 0x240e24: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x240E28u;
label_240e28:
    // 0x240e28: 0x1000003d  b           . + 4 + (0x3D << 2)
label_240e2c:
    if (ctx->pc == 0x240E2Cu) {
        ctx->pc = 0x240E30u;
        goto label_240e30;
    }
    ctx->pc = 0x240E28u;
    {
        const bool branch_taken_0x240e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240e28) {
            ctx->pc = 0x240F20u;
            { ctx->pc = 0x240f20; return; }
        }
    }
    ctx->pc = 0x240E30u;
label_240e30:
    // 0x240e30: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x240e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_240e34:
    // 0x240e34: 0xa32004  sllv        $a0, $v1, $a1
    ctx->pc = 0x240e34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
label_240e38:
    // 0x240e38: 0xdf8387c8  ld          $v1, -0x7838($gp)
    ctx->pc = 0x240e38u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_240e3c:
    // 0x240e3c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x240e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_240e40:
    // 0x240e40: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_240e44:
    if (ctx->pc == 0x240E44u) {
        ctx->pc = 0x240E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E40u;
        // 0x240e44: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240E48u;
        goto label_240e48;
    }
    ctx->pc = 0x240E40u;
    {
        const bool branch_taken_0x240e40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x240E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E40u;
        // 0x240e44: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240e40) {
            ctx->pc = 0x240EA0u;
            { ctx->pc = 0x240ea0; return; }
        }
    }
    ctx->pc = 0x240E48u;
label_240e48:
    // 0x240e48: 0xc05b420  jal         func_16D080
label_240e4c:
    if (ctx->pc == 0x240E4Cu) {
        ctx->pc = 0x240E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E48u;
        // 0x240e4c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240E50u;
        goto label_240e50;
    }
    ctx->pc = 0x240E48u;
    SET_GPR_U32(ctx, 31, 0x240E50u);
    ctx->pc = 0x240E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240E48u;
    // 0x240e4c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    { ctx->pc = 0x16d080; return; }
    ctx->pc = 0x240E50u;
label_240e50:
    // 0x240e50: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x240e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_240e54:
    // 0x240e54: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240e58:
    // 0x240e58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x240e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240e5c:
    // 0x240e5c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x240e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_240e60:
    // 0x240e60: 0xac232398  sw          $v1, 0x2398($at)
    ctx->pc = 0x240e60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9112), GPR_U32(ctx, 3));
label_240e64:
    // 0x240e64: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x240e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_240e68:
    // 0x240e68: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240e6c:
    // 0x240e6c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x240e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_240e70:
    // 0x240e70: 0x8c222394  lw          $v0, 0x2394($at)
    ctx->pc = 0x240e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9108)));
label_240e74:
    // 0x240e74: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_240e78:
    if (ctx->pc == 0x240E78u) {
        ctx->pc = 0x240E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E74u;
        // 0x240e78: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240E7Cu;
        goto label_240e7c;
    }
    ctx->pc = 0x240E74u;
    {
        const bool branch_taken_0x240e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E74u;
        // 0x240e78: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240e74) {
            ctx->pc = 0x240E8Cu;
            goto label_240e8c;
        }
    }
    ctx->pc = 0x240E7Cu;
label_240e7c:
    // 0x240e7c: 0xc078050  jal         func_1E0140
label_240e80:
    if (ctx->pc == 0x240E80u) {
        ctx->pc = 0x240E84u;
        goto label_240e84;
    }
    ctx->pc = 0x240E7Cu;
    SET_GPR_U32(ctx, 31, 0x240E84u);
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x240E84u;
label_240e84:
    // 0x240e84: 0x10000026  b           . + 4 + (0x26 << 2)
label_240e88:
    if (ctx->pc == 0x240E88u) {
        ctx->pc = 0x240E8Cu;
        goto label_240e8c;
    }
    ctx->pc = 0x240E84u;
    {
        const bool branch_taken_0x240e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240e84) {
            ctx->pc = 0x240F20u;
            { ctx->pc = 0x240f20; return; }
        }
    }
    ctx->pc = 0x240E8Cu;
label_240e8c:
    // 0x240e8c: 0x0  nop
    ctx->pc = 0x240e8cu;
    // NOP
label_240e90:
    // 0x240e90: 0xc078050  jal         func_1E0140
label_240e94:
    if (ctx->pc == 0x240E94u) {
        ctx->pc = 0x240E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E90u;
        // 0x240e94: 0x24040037  addiu       $a0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240E98u;
        goto label_240e98;
    }
    ctx->pc = 0x240E90u;
    SET_GPR_U32(ctx, 31, 0x240E98u);
    ctx->pc = 0x240E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240E90u;
    // 0x240e94: 0x24040037  addiu       $a0, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x240E98u;
label_240e98:
    // 0x240e98: 0x10000021  b           . + 4 + (0x21 << 2)
label_240e9c:
    if (ctx->pc == 0x240E9Cu) {
        ctx->pc = 0x240EA0u;
        { ctx->pc = 0x240ea0; return; }
    }
    ctx->pc = 0x240E98u;
    {
        const bool branch_taken_0x240e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240e98) {
            ctx->pc = 0x240F20u;
            { ctx->pc = 0x240f20; return; }
        }
    }
    ctx->pc = 0x240EA0u;
    ctx->pc = 0x240ea0u;
    return;
}
