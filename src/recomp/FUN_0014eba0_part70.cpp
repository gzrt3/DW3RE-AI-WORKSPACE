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


void FUN_0014eba0_part70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1706b0u: goto label_1706b0;
        case 0x1706b4u: goto label_1706b4;
        case 0x1706b8u: goto label_1706b8;
        case 0x1706bcu: goto label_1706bc;
        case 0x1706c0u: goto label_1706c0;
        case 0x1706c4u: goto label_1706c4;
        case 0x1706c8u: goto label_1706c8;
        case 0x1706ccu: goto label_1706cc;
        case 0x1706d0u: goto label_1706d0;
        case 0x1706d4u: goto label_1706d4;
        case 0x1706d8u: goto label_1706d8;
        case 0x1706dcu: goto label_1706dc;
        case 0x1706e0u: goto label_1706e0;
        case 0x1706e4u: goto label_1706e4;
        case 0x1706e8u: goto label_1706e8;
        case 0x1706ecu: goto label_1706ec;
        case 0x1706f0u: goto label_1706f0;
        case 0x1706f4u: goto label_1706f4;
        case 0x1706f8u: goto label_1706f8;
        case 0x1706fcu: goto label_1706fc;
        case 0x170700u: goto label_170700;
        case 0x170704u: goto label_170704;
        case 0x170708u: goto label_170708;
        case 0x17070cu: goto label_17070c;
        case 0x170710u: goto label_170710;
        case 0x170714u: goto label_170714;
        case 0x170718u: goto label_170718;
        case 0x17071cu: goto label_17071c;
        case 0x170720u: goto label_170720;
        case 0x170724u: goto label_170724;
        case 0x170728u: goto label_170728;
        case 0x17072cu: goto label_17072c;
        case 0x170730u: goto label_170730;
        case 0x170734u: goto label_170734;
        case 0x170738u: goto label_170738;
        case 0x17073cu: goto label_17073c;
        case 0x170740u: goto label_170740;
        case 0x170744u: goto label_170744;
        case 0x170748u: goto label_170748;
        case 0x17074cu: goto label_17074c;
        case 0x170750u: goto label_170750;
        case 0x170754u: goto label_170754;
        case 0x170758u: goto label_170758;
        case 0x17075cu: goto label_17075c;
        case 0x170760u: goto label_170760;
        case 0x170764u: goto label_170764;
        case 0x170768u: goto label_170768;
        case 0x17076cu: goto label_17076c;
        case 0x170770u: goto label_170770;
        case 0x170774u: goto label_170774;
        case 0x170778u: goto label_170778;
        case 0x17077cu: goto label_17077c;
        case 0x170780u: goto label_170780;
        case 0x170784u: goto label_170784;
        case 0x170788u: goto label_170788;
        case 0x17078cu: goto label_17078c;
        case 0x170790u: goto label_170790;
        case 0x170794u: goto label_170794;
        case 0x170798u: goto label_170798;
        case 0x17079cu: goto label_17079c;
        case 0x1707a0u: goto label_1707a0;
        case 0x1707a4u: goto label_1707a4;
        case 0x1707a8u: goto label_1707a8;
        case 0x1707acu: goto label_1707ac;
        case 0x1707b0u: goto label_1707b0;
        case 0x1707b4u: goto label_1707b4;
        case 0x1707b8u: goto label_1707b8;
        case 0x1707bcu: goto label_1707bc;
        case 0x1707c0u: goto label_1707c0;
        case 0x1707c4u: goto label_1707c4;
        case 0x1707c8u: goto label_1707c8;
        case 0x1707ccu: goto label_1707cc;
        case 0x1707d0u: goto label_1707d0;
        case 0x1707d4u: goto label_1707d4;
        case 0x1707d8u: goto label_1707d8;
        case 0x1707dcu: goto label_1707dc;
        case 0x1707e0u: goto label_1707e0;
        case 0x1707e4u: goto label_1707e4;
        case 0x1707e8u: goto label_1707e8;
        case 0x1707ecu: goto label_1707ec;
        case 0x1707f0u: goto label_1707f0;
        case 0x1707f4u: goto label_1707f4;
        case 0x1707f8u: goto label_1707f8;
        case 0x1707fcu: goto label_1707fc;
        case 0x170800u: goto label_170800;
        case 0x170804u: goto label_170804;
        case 0x170808u: goto label_170808;
        case 0x17080cu: goto label_17080c;
        case 0x170810u: goto label_170810;
        case 0x170814u: goto label_170814;
        case 0x170818u: goto label_170818;
        case 0x17081cu: goto label_17081c;
        case 0x170820u: goto label_170820;
        case 0x170824u: goto label_170824;
        case 0x170828u: goto label_170828;
        case 0x17082cu: goto label_17082c;
        case 0x170830u: goto label_170830;
        case 0x170834u: goto label_170834;
        case 0x170838u: goto label_170838;
        case 0x17083cu: goto label_17083c;
        case 0x170840u: goto label_170840;
        case 0x170844u: goto label_170844;
        case 0x170848u: goto label_170848;
        case 0x17084cu: goto label_17084c;
        case 0x170850u: goto label_170850;
        case 0x170854u: goto label_170854;
        case 0x170858u: goto label_170858;
        case 0x17085cu: goto label_17085c;
        case 0x170860u: goto label_170860;
        case 0x170864u: goto label_170864;
        case 0x170868u: goto label_170868;
        case 0x17086cu: goto label_17086c;
        case 0x170870u: goto label_170870;
        case 0x170874u: goto label_170874;
        case 0x170878u: goto label_170878;
        case 0x17087cu: goto label_17087c;
        case 0x170880u: goto label_170880;
        case 0x170884u: goto label_170884;
        case 0x170888u: goto label_170888;
        case 0x17088cu: goto label_17088c;
        case 0x170890u: goto label_170890;
        case 0x170894u: goto label_170894;
        case 0x170898u: goto label_170898;
        case 0x17089cu: goto label_17089c;
        case 0x1708a0u: goto label_1708a0;
        case 0x1708a4u: goto label_1708a4;
        case 0x1708a8u: goto label_1708a8;
        case 0x1708acu: goto label_1708ac;
        case 0x1708b0u: goto label_1708b0;
        case 0x1708b4u: goto label_1708b4;
        case 0x1708b8u: goto label_1708b8;
        case 0x1708bcu: goto label_1708bc;
        case 0x1708c0u: goto label_1708c0;
        case 0x1708c4u: goto label_1708c4;
        case 0x1708c8u: goto label_1708c8;
        case 0x1708ccu: goto label_1708cc;
        case 0x1708d0u: goto label_1708d0;
        case 0x1708d4u: goto label_1708d4;
        case 0x1708d8u: goto label_1708d8;
        case 0x1708dcu: goto label_1708dc;
        case 0x1708e0u: goto label_1708e0;
        case 0x1708e4u: goto label_1708e4;
        case 0x1708e8u: goto label_1708e8;
        case 0x1708ecu: goto label_1708ec;
        case 0x1708f0u: goto label_1708f0;
        case 0x1708f4u: goto label_1708f4;
        case 0x1708f8u: goto label_1708f8;
        case 0x1708fcu: goto label_1708fc;
        case 0x170900u: goto label_170900;
        case 0x170904u: goto label_170904;
        case 0x170908u: goto label_170908;
        case 0x17090cu: goto label_17090c;
        case 0x170910u: goto label_170910;
        case 0x170914u: goto label_170914;
        case 0x170918u: goto label_170918;
        case 0x17091cu: goto label_17091c;
        case 0x170920u: goto label_170920;
        case 0x170924u: goto label_170924;
        case 0x170928u: goto label_170928;
        case 0x17092cu: goto label_17092c;
        case 0x170930u: goto label_170930;
        case 0x170934u: goto label_170934;
        case 0x170938u: goto label_170938;
        case 0x17093cu: goto label_17093c;
        case 0x170940u: goto label_170940;
        case 0x170944u: goto label_170944;
        case 0x170948u: goto label_170948;
        case 0x17094cu: goto label_17094c;
        case 0x170950u: goto label_170950;
        case 0x170954u: goto label_170954;
        case 0x170958u: goto label_170958;
        case 0x17095cu: goto label_17095c;
        case 0x170960u: goto label_170960;
        case 0x170964u: goto label_170964;
        case 0x170968u: goto label_170968;
        case 0x17096cu: goto label_17096c;
        case 0x170970u: goto label_170970;
        case 0x170974u: goto label_170974;
        case 0x170978u: goto label_170978;
        case 0x17097cu: goto label_17097c;
        case 0x170980u: goto label_170980;
        case 0x170984u: goto label_170984;
        case 0x170988u: goto label_170988;
        case 0x17098cu: goto label_17098c;
        case 0x170990u: goto label_170990;
        case 0x170994u: goto label_170994;
        case 0x170998u: goto label_170998;
        case 0x17099cu: goto label_17099c;
        case 0x1709a0u: goto label_1709a0;
        case 0x1709a4u: goto label_1709a4;
        case 0x1709a8u: goto label_1709a8;
        case 0x1709acu: goto label_1709ac;
        case 0x1709b0u: goto label_1709b0;
        case 0x1709b4u: goto label_1709b4;
        case 0x1709b8u: goto label_1709b8;
        case 0x1709bcu: goto label_1709bc;
        case 0x1709c0u: goto label_1709c0;
        case 0x1709c4u: goto label_1709c4;
        case 0x1709c8u: goto label_1709c8;
        case 0x1709ccu: goto label_1709cc;
        case 0x1709d0u: goto label_1709d0;
        case 0x1709d4u: goto label_1709d4;
        case 0x1709d8u: goto label_1709d8;
        case 0x1709dcu: goto label_1709dc;
        case 0x1709e0u: goto label_1709e0;
        case 0x1709e4u: goto label_1709e4;
        case 0x1709e8u: goto label_1709e8;
        case 0x1709ecu: goto label_1709ec;
        case 0x1709f0u: goto label_1709f0;
        case 0x1709f4u: goto label_1709f4;
        case 0x1709f8u: goto label_1709f8;
        case 0x1709fcu: goto label_1709fc;
        case 0x170a00u: goto label_170a00;
        case 0x170a04u: goto label_170a04;
        case 0x170a08u: goto label_170a08;
        case 0x170a0cu: goto label_170a0c;
        case 0x170a10u: goto label_170a10;
        case 0x170a14u: goto label_170a14;
        case 0x170a18u: goto label_170a18;
        case 0x170a1cu: goto label_170a1c;
        case 0x170a20u: goto label_170a20;
        case 0x170a24u: goto label_170a24;
        case 0x170a28u: goto label_170a28;
        case 0x170a2cu: goto label_170a2c;
        case 0x170a30u: goto label_170a30;
        case 0x170a34u: goto label_170a34;
        case 0x170a38u: goto label_170a38;
        case 0x170a3cu: goto label_170a3c;
        case 0x170a40u: goto label_170a40;
        case 0x170a44u: goto label_170a44;
        case 0x170a48u: goto label_170a48;
        case 0x170a4cu: goto label_170a4c;
        case 0x170a50u: goto label_170a50;
        case 0x170a54u: goto label_170a54;
        case 0x170a58u: goto label_170a58;
        case 0x170a5cu: goto label_170a5c;
        case 0x170a60u: goto label_170a60;
        case 0x170a64u: goto label_170a64;
        case 0x170a68u: goto label_170a68;
        case 0x170a6cu: goto label_170a6c;
        case 0x170a70u: goto label_170a70;
        case 0x170a74u: goto label_170a74;
        case 0x170a78u: goto label_170a78;
        case 0x170a7cu: goto label_170a7c;
        case 0x170a80u: goto label_170a80;
        case 0x170a84u: goto label_170a84;
        case 0x170a88u: goto label_170a88;
        case 0x170a8cu: goto label_170a8c;
        case 0x170a90u: goto label_170a90;
        case 0x170a94u: goto label_170a94;
        case 0x170a98u: goto label_170a98;
        case 0x170a9cu: goto label_170a9c;
        case 0x170aa0u: goto label_170aa0;
        case 0x170aa4u: goto label_170aa4;
        case 0x170aa8u: goto label_170aa8;
        case 0x170aacu: goto label_170aac;
        case 0x170ab0u: goto label_170ab0;
        case 0x170ab4u: goto label_170ab4;
        case 0x170ab8u: goto label_170ab8;
        case 0x170abcu: goto label_170abc;
        case 0x170ac0u: goto label_170ac0;
        case 0x170ac4u: goto label_170ac4;
        case 0x170ac8u: goto label_170ac8;
        case 0x170accu: goto label_170acc;
        case 0x170ad0u: goto label_170ad0;
        case 0x170ad4u: goto label_170ad4;
        case 0x170ad8u: goto label_170ad8;
        case 0x170adcu: goto label_170adc;
        case 0x170ae0u: goto label_170ae0;
        case 0x170ae4u: goto label_170ae4;
        case 0x170ae8u: goto label_170ae8;
        case 0x170aecu: goto label_170aec;
        case 0x170af0u: goto label_170af0;
        case 0x170af4u: goto label_170af4;
        case 0x170af8u: goto label_170af8;
        case 0x170afcu: goto label_170afc;
        case 0x170b00u: goto label_170b00;
        case 0x170b04u: goto label_170b04;
        case 0x170b08u: goto label_170b08;
        case 0x170b0cu: goto label_170b0c;
        case 0x170b10u: goto label_170b10;
        case 0x170b14u: goto label_170b14;
        case 0x170b18u: goto label_170b18;
        case 0x170b1cu: goto label_170b1c;
        case 0x170b20u: goto label_170b20;
        case 0x170b24u: goto label_170b24;
        case 0x170b28u: goto label_170b28;
        case 0x170b2cu: goto label_170b2c;
        case 0x170b30u: goto label_170b30;
        case 0x170b34u: goto label_170b34;
        case 0x170b38u: goto label_170b38;
        case 0x170b3cu: goto label_170b3c;
        case 0x170b40u: goto label_170b40;
        case 0x170b44u: goto label_170b44;
        case 0x170b48u: goto label_170b48;
        case 0x170b4cu: goto label_170b4c;
        case 0x170b50u: goto label_170b50;
        case 0x170b54u: goto label_170b54;
        case 0x170b58u: goto label_170b58;
        case 0x170b5cu: goto label_170b5c;
        case 0x170b60u: goto label_170b60;
        case 0x170b64u: goto label_170b64;
        case 0x170b68u: goto label_170b68;
        case 0x170b6cu: goto label_170b6c;
        case 0x170b70u: goto label_170b70;
        case 0x170b74u: goto label_170b74;
        case 0x170b78u: goto label_170b78;
        case 0x170b7cu: goto label_170b7c;
        case 0x170b80u: goto label_170b80;
        case 0x170b84u: goto label_170b84;
        case 0x170b88u: goto label_170b88;
        case 0x170b8cu: goto label_170b8c;
        case 0x170b90u: goto label_170b90;
        case 0x170b94u: goto label_170b94;
        case 0x170b98u: goto label_170b98;
        case 0x170b9cu: goto label_170b9c;
        case 0x170ba0u: goto label_170ba0;
        case 0x170ba4u: goto label_170ba4;
        case 0x170ba8u: goto label_170ba8;
        case 0x170bacu: goto label_170bac;
        case 0x170bb0u: goto label_170bb0;
        case 0x170bb4u: goto label_170bb4;
        case 0x170bb8u: goto label_170bb8;
        case 0x170bbcu: goto label_170bbc;
        case 0x170bc0u: goto label_170bc0;
        case 0x170bc4u: goto label_170bc4;
        case 0x170bc8u: goto label_170bc8;
        case 0x170bccu: goto label_170bcc;
        case 0x170bd0u: goto label_170bd0;
        case 0x170bd4u: goto label_170bd4;
        case 0x170bd8u: goto label_170bd8;
        case 0x170bdcu: goto label_170bdc;
        case 0x170be0u: goto label_170be0;
        case 0x170be4u: goto label_170be4;
        case 0x170be8u: goto label_170be8;
        case 0x170becu: goto label_170bec;
        case 0x170bf0u: goto label_170bf0;
        case 0x170bf4u: goto label_170bf4;
        case 0x170bf8u: goto label_170bf8;
        case 0x170bfcu: goto label_170bfc;
        case 0x170c00u: goto label_170c00;
        case 0x170c04u: goto label_170c04;
        case 0x170c08u: goto label_170c08;
        case 0x170c0cu: goto label_170c0c;
        case 0x170c10u: goto label_170c10;
        case 0x170c14u: goto label_170c14;
        case 0x170c18u: goto label_170c18;
        case 0x170c1cu: goto label_170c1c;
        case 0x170c20u: goto label_170c20;
        case 0x170c24u: goto label_170c24;
        case 0x170c28u: goto label_170c28;
        case 0x170c2cu: goto label_170c2c;
        case 0x170c30u: goto label_170c30;
        case 0x170c34u: goto label_170c34;
        case 0x170c38u: goto label_170c38;
        case 0x170c3cu: goto label_170c3c;
        case 0x170c40u: goto label_170c40;
        case 0x170c44u: goto label_170c44;
        case 0x170c48u: goto label_170c48;
        case 0x170c4cu: goto label_170c4c;
        case 0x170c50u: goto label_170c50;
        case 0x170c54u: goto label_170c54;
        case 0x170c58u: goto label_170c58;
        case 0x170c5cu: goto label_170c5c;
        case 0x170c60u: goto label_170c60;
        case 0x170c64u: goto label_170c64;
        case 0x170c68u: goto label_170c68;
        case 0x170c6cu: goto label_170c6c;
        case 0x170c70u: goto label_170c70;
        case 0x170c74u: goto label_170c74;
        case 0x170c78u: goto label_170c78;
        case 0x170c7cu: goto label_170c7c;
        case 0x170c80u: goto label_170c80;
        case 0x170c84u: goto label_170c84;
        case 0x170c88u: goto label_170c88;
        case 0x170c8cu: goto label_170c8c;
        case 0x170c90u: goto label_170c90;
        case 0x170c94u: goto label_170c94;
        case 0x170c98u: goto label_170c98;
        case 0x170c9cu: goto label_170c9c;
        case 0x170ca0u: goto label_170ca0;
        case 0x170ca4u: goto label_170ca4;
        case 0x170ca8u: goto label_170ca8;
        case 0x170cacu: goto label_170cac;
        case 0x170cb0u: goto label_170cb0;
        case 0x170cb4u: goto label_170cb4;
        case 0x170cb8u: goto label_170cb8;
        case 0x170cbcu: goto label_170cbc;
        case 0x170cc0u: goto label_170cc0;
        case 0x170cc4u: goto label_170cc4;
        case 0x170cc8u: goto label_170cc8;
        case 0x170cccu: goto label_170ccc;
        case 0x170cd0u: goto label_170cd0;
        case 0x170cd4u: goto label_170cd4;
        case 0x170cd8u: goto label_170cd8;
        case 0x170cdcu: goto label_170cdc;
        case 0x170ce0u: goto label_170ce0;
        case 0x170ce4u: goto label_170ce4;
        case 0x170ce8u: goto label_170ce8;
        case 0x170cecu: goto label_170cec;
        case 0x170cf0u: goto label_170cf0;
        case 0x170cf4u: goto label_170cf4;
        case 0x170cf8u: goto label_170cf8;
        case 0x170cfcu: goto label_170cfc;
        case 0x170d00u: goto label_170d00;
        case 0x170d04u: goto label_170d04;
        case 0x170d08u: goto label_170d08;
        case 0x170d0cu: goto label_170d0c;
        case 0x170d10u: goto label_170d10;
        case 0x170d14u: goto label_170d14;
        case 0x170d18u: goto label_170d18;
        case 0x170d1cu: goto label_170d1c;
        case 0x170d20u: goto label_170d20;
        case 0x170d24u: goto label_170d24;
        case 0x170d28u: goto label_170d28;
        case 0x170d2cu: goto label_170d2c;
        case 0x170d30u: goto label_170d30;
        case 0x170d34u: goto label_170d34;
        case 0x170d38u: goto label_170d38;
        case 0x170d3cu: goto label_170d3c;
        case 0x170d40u: goto label_170d40;
        case 0x170d44u: goto label_170d44;
        case 0x170d48u: goto label_170d48;
        case 0x170d4cu: goto label_170d4c;
        case 0x170d50u: goto label_170d50;
        case 0x170d54u: goto label_170d54;
        case 0x170d58u: goto label_170d58;
        case 0x170d5cu: goto label_170d5c;
        case 0x170d60u: goto label_170d60;
        case 0x170d64u: goto label_170d64;
        case 0x170d68u: goto label_170d68;
        case 0x170d6cu: goto label_170d6c;
        case 0x170d70u: goto label_170d70;
        case 0x170d74u: goto label_170d74;
        case 0x170d78u: goto label_170d78;
        case 0x170d7cu: goto label_170d7c;
        case 0x170d80u: goto label_170d80;
        case 0x170d84u: goto label_170d84;
        case 0x170d88u: goto label_170d88;
        case 0x170d8cu: goto label_170d8c;
        case 0x170d90u: goto label_170d90;
        case 0x170d94u: goto label_170d94;
        case 0x170d98u: goto label_170d98;
        case 0x170d9cu: goto label_170d9c;
        case 0x170da0u: goto label_170da0;
        case 0x170da4u: goto label_170da4;
        case 0x170da8u: goto label_170da8;
        case 0x170dacu: goto label_170dac;
        case 0x170db0u: goto label_170db0;
        case 0x170db4u: goto label_170db4;
        case 0x170db8u: goto label_170db8;
        case 0x170dbcu: goto label_170dbc;
        case 0x170dc0u: goto label_170dc0;
        case 0x170dc4u: goto label_170dc4;
        case 0x170dc8u: goto label_170dc8;
        case 0x170dccu: goto label_170dcc;
        case 0x170dd0u: goto label_170dd0;
        case 0x170dd4u: goto label_170dd4;
        case 0x170dd8u: goto label_170dd8;
        case 0x170ddcu: goto label_170ddc;
        case 0x170de0u: goto label_170de0;
        case 0x170de4u: goto label_170de4;
        case 0x170de8u: goto label_170de8;
        case 0x170decu: goto label_170dec;
        case 0x170df0u: goto label_170df0;
        case 0x170df4u: goto label_170df4;
        case 0x170df8u: goto label_170df8;
        case 0x170dfcu: goto label_170dfc;
        case 0x170e00u: goto label_170e00;
        case 0x170e04u: goto label_170e04;
        case 0x170e08u: goto label_170e08;
        case 0x170e0cu: goto label_170e0c;
        case 0x170e10u: goto label_170e10;
        case 0x170e14u: goto label_170e14;
        case 0x170e18u: goto label_170e18;
        case 0x170e1cu: goto label_170e1c;
        case 0x170e20u: goto label_170e20;
        case 0x170e24u: goto label_170e24;
        case 0x170e28u: goto label_170e28;
        case 0x170e2cu: goto label_170e2c;
        case 0x170e30u: goto label_170e30;
        case 0x170e34u: goto label_170e34;
        case 0x170e38u: goto label_170e38;
        case 0x170e3cu: goto label_170e3c;
        case 0x170e40u: goto label_170e40;
        case 0x170e44u: goto label_170e44;
        case 0x170e48u: goto label_170e48;
        case 0x170e4cu: goto label_170e4c;
        case 0x170e50u: goto label_170e50;
        case 0x170e54u: goto label_170e54;
        case 0x170e58u: goto label_170e58;
        case 0x170e5cu: goto label_170e5c;
        case 0x170e60u: goto label_170e60;
        case 0x170e64u: goto label_170e64;
        case 0x170e68u: goto label_170e68;
        case 0x170e6cu: goto label_170e6c;
        case 0x170e70u: goto label_170e70;
        case 0x170e74u: goto label_170e74;
        case 0x170e78u: goto label_170e78;
        case 0x170e7cu: goto label_170e7c;
        default: return;
    }

label_1706b0:
    if (ctx->pc == 0x1706B0u) {
        ctx->pc = 0x1706B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1706ACu;
        // 0x1706b0: 0x24e3ff80  addiu       $v1, $a3, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1706B4u;
        goto label_1706b4;
    }
    ctx->pc = 0x1706ACu;
    {
        const bool branch_taken_0x1706ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1706B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1706ACu;
        // 0x1706b0: 0x24e3ff80  addiu       $v1, $a3, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1706ac) {
            ctx->pc = 0x1706B8u;
            goto label_1706b8;
        }
    }
    ctx->pc = 0x1706B4u;
label_1706b4:
    // 0x1706b4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1706b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1706b8:
    // 0x1706b8: 0x2d01007f  sltiu       $at, $t0, 0x7F
    ctx->pc = 0x1706b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_1706bc:
    // 0x1706bc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1706c0:
    if (ctx->pc == 0x1706C0u) {
        ctx->pc = 0x1706C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1706BCu;
        // 0x1706c0: 0xa0a30005  sb          $v1, 0x5($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1706C4u;
        goto label_1706c4;
    }
    ctx->pc = 0x1706BCu;
    {
        const bool branch_taken_0x1706bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1706C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1706BCu;
        // 0x1706c0: 0xa0a30005  sb          $v1, 0x5($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1706bc) {
            ctx->pc = 0x1706D0u;
            goto label_1706d0;
        }
    }
    ctx->pc = 0x1706C4u;
label_1706c4:
    // 0x1706c4: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x1706c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1706c8:
    // 0x1706c8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1706cc:
    if (ctx->pc == 0x1706CCu) {
        ctx->pc = 0x1706CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1706C8u;
        // 0x1706cc: 0x681823  subu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1706D0u;
        goto label_1706d0;
    }
    ctx->pc = 0x1706C8u;
    {
        const bool branch_taken_0x1706c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1706CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1706C8u;
        // 0x1706cc: 0x681823  subu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1706c8) {
            ctx->pc = 0x1706D4u;
            goto label_1706d4;
        }
    }
    ctx->pc = 0x1706D0u;
label_1706d0:
    // 0x1706d0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1706d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1706d4:
    // 0x1706d4: 0x2d010081  sltiu       $at, $t0, 0x81
    ctx->pc = 0x1706d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
label_1706d8:
    // 0x1706d8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1706dc:
    if (ctx->pc == 0x1706DCu) {
        ctx->pc = 0x1706DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1706D8u;
        // 0x1706dc: 0xa0a30004  sb          $v1, 0x4($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1706E0u;
        goto label_1706e0;
    }
    ctx->pc = 0x1706D8u;
    {
        const bool branch_taken_0x1706d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1706DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1706D8u;
        // 0x1706dc: 0xa0a30004  sb          $v1, 0x4($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1706d8) {
            ctx->pc = 0x1706E8u;
            goto label_1706e8;
        }
    }
    ctx->pc = 0x1706E0u;
label_1706e0:
    // 0x1706e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1706e4:
    if (ctx->pc == 0x1706E4u) {
        ctx->pc = 0x1706E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1706E0u;
        // 0x1706e4: 0x2503ff80  addiu       $v1, $t0, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1706E8u;
        goto label_1706e8;
    }
    ctx->pc = 0x1706E0u;
    {
        const bool branch_taken_0x1706e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1706E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1706E0u;
        // 0x1706e4: 0x2503ff80  addiu       $v1, $t0, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1706e0) {
            ctx->pc = 0x1706ECu;
            goto label_1706ec;
        }
    }
    ctx->pc = 0x1706E8u;
label_1706e8:
    // 0x1706e8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1706e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1706ec:
    // 0x1706ec: 0x3e00008  jr          $ra
label_1706f0:
    if (ctx->pc == 0x1706F0u) {
        ctx->pc = 0x1706F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1706ECu;
        // 0x1706f0: 0xa0a30006  sb          $v1, 0x6($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1706F4u;
        goto label_1706f4;
    }
    ctx->pc = 0x1706ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1706F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1706ECu;
        // 0x1706f0: 0xa0a30006  sb          $v1, 0x6($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1706ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1706F4u;
label_1706f4:
    // 0x1706f4: 0x0  nop
    ctx->pc = 0x1706f4u;
    // NOP
label_1706f8:
    // 0x1706f8: 0x0  nop
    ctx->pc = 0x1706f8u;
    // NOP
label_1706fc:
    // 0x1706fc: 0x0  nop
    ctx->pc = 0x1706fcu;
    // NOP
label_170700:
    // 0x170700: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x170700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_170704:
    // 0x170704: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x170704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_170708:
    // 0x170708: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x170708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_17070c:
    // 0x17070c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17070cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_170710:
    // 0x170710: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x170710u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170714:
    // 0x170714: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x170714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_170718:
    // 0x170718: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x170718u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17071c:
    // 0x17071c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17071cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_170720:
    // 0x170720: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x170720u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170724:
    // 0x170724: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x170724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_170728:
    // 0x170728: 0x8f828738  lw          $v0, -0x78C8($gp)
    ctx->pc = 0x170728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936376)));
label_17072c:
    // 0x17072c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17072cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_170730:
    // 0x170730: 0xaf828738  sw          $v0, -0x78C8($gp)
    ctx->pc = 0x170730u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936376), GPR_U32(ctx, 2));
label_170734:
    // 0x170734: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x170734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_170738:
    // 0x170738: 0x24424480  addiu       $v0, $v0, 0x4480
    ctx->pc = 0x170738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17536));
label_17073c:
    // 0x17073c: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x17073cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_170740:
    // 0x170740: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x170740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_170744:
    // 0x170744: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_170748:
    if (ctx->pc == 0x170748u) {
        ctx->pc = 0x170748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170744u;
        // 0x170748: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17074Cu;
        goto label_17074c;
    }
    ctx->pc = 0x170744u;
    {
        const bool branch_taken_0x170744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170744u;
        // 0x170748: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170744) {
            ctx->pc = 0x1707A4u;
            goto label_1707a4;
        }
    }
    ctx->pc = 0x17074Cu;
label_17074c:
    // 0x17074c: 0xc06b93a  jal         func_1AE4E8
label_170750:
    if (ctx->pc == 0x170750u) {
        ctx->pc = 0x170750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17074Cu;
        // 0x170750: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170754u;
        goto label_170754;
    }
    ctx->pc = 0x17074Cu;
    SET_GPR_U32(ctx, 31, 0x170754u);
    ctx->pc = 0x170750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17074Cu;
    // 0x170750: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE4E8u;
    { ctx->pc = 0x1ae4e8; return; }
    ctx->pc = 0x170754u;
label_170754:
    // 0x170754: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_170758:
    if (ctx->pc == 0x170758u) {
        ctx->pc = 0x17075Cu;
        goto label_17075c;
    }
    ctx->pc = 0x170754u;
    {
        const bool branch_taken_0x170754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170754) {
            ctx->pc = 0x170764u;
            goto label_170764;
        }
    }
    ctx->pc = 0x17075Cu;
label_17075c:
    // 0x17075c: 0x10000011  b           . + 4 + (0x11 << 2)
label_170760:
    if (ctx->pc == 0x170760u) {
        ctx->pc = 0x170760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17075Cu;
        // 0x170760: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170764u;
        goto label_170764;
    }
    ctx->pc = 0x17075Cu;
    {
        const bool branch_taken_0x17075c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17075Cu;
        // 0x170760: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17075c) {
            ctx->pc = 0x1707A4u;
            goto label_1707a4;
        }
    }
    ctx->pc = 0x170764u;
label_170764:
    // 0x170764: 0x0  nop
    ctx->pc = 0x170764u;
    // NOP
label_170768:
    // 0x170768: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x170768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17076c:
    // 0x17076c: 0x1444000d  bne         $v0, $a0, . + 4 + (0xD << 2)
label_170770:
    if (ctx->pc == 0x170770u) {
        ctx->pc = 0x170774u;
        goto label_170774;
    }
    ctx->pc = 0x17076Cu;
    {
        const bool branch_taken_0x17076c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x17076c) {
            ctx->pc = 0x1707A4u;
            goto label_1707a4;
        }
    }
    ctx->pc = 0x170774u;
label_170774:
    // 0x170774: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x170774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_170778:
    // 0x170778: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x170778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17077c:
    // 0x17077c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_170780:
    if (ctx->pc == 0x170780u) {
        ctx->pc = 0x170784u;
        goto label_170784;
    }
    ctx->pc = 0x17077Cu;
    {
        const bool branch_taken_0x17077c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17077c) {
            ctx->pc = 0x1707A0u;
            goto label_1707a0;
        }
    }
    ctx->pc = 0x170784u;
label_170784:
    // 0x170784: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
label_170788:
    if (ctx->pc == 0x170788u) {
        ctx->pc = 0x17078Cu;
        goto label_17078c;
    }
    ctx->pc = 0x170784u;
    {
        const bool branch_taken_0x170784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x170784) {
            ctx->pc = 0x170794u;
            goto label_170794;
        }
    }
    ctx->pc = 0x17078Cu;
label_17078c:
    // 0x17078c: 0x10000005  b           . + 4 + (0x5 << 2)
label_170790:
    if (ctx->pc == 0x170790u) {
        ctx->pc = 0x170794u;
        goto label_170794;
    }
    ctx->pc = 0x17078Cu;
    {
        const bool branch_taken_0x17078c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17078c) {
            ctx->pc = 0x1707A4u;
            goto label_1707a4;
        }
    }
    ctx->pc = 0x170794u;
label_170794:
    // 0x170794: 0x0  nop
    ctx->pc = 0x170794u;
    // NOP
label_170798:
    // 0x170798: 0x10000002  b           . + 4 + (0x2 << 2)
label_17079c:
    if (ctx->pc == 0x17079Cu) {
        ctx->pc = 0x17079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170798u;
        // 0x17079c: 0xae04001c  sw          $a0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1707A0u;
        goto label_1707a0;
    }
    ctx->pc = 0x170798u;
    {
        const bool branch_taken_0x170798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170798u;
        // 0x17079c: 0xae04001c  sw          $a0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170798) {
            ctx->pc = 0x1707A4u;
            goto label_1707a4;
        }
    }
    ctx->pc = 0x1707A0u;
label_1707a0:
    // 0x1707a0: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x1707a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
label_1707a4:
    // 0x1707a4: 0x0  nop
    ctx->pc = 0x1707a4u;
    // NOP
label_1707a8:
    // 0x1707a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1707a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1707ac:
    // 0x1707ac: 0xc06b8f4  jal         func_1AE3D0
label_1707b0:
    if (ctx->pc == 0x1707B0u) {
        ctx->pc = 0x1707B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1707ACu;
        // 0x1707b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1707B4u;
        goto label_1707b4;
    }
    ctx->pc = 0x1707ACu;
    SET_GPR_U32(ctx, 31, 0x1707B4u);
    ctx->pc = 0x1707B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1707ACu;
    // 0x1707b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE3D0u;
    { ctx->pc = 0x1ae3d0; return; }
    ctx->pc = 0x1707B4u;
label_1707b4:
    // 0x1707b4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1707b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1707b8:
    // 0x1707b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1707b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1707bc:
    // 0x1707bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1707c0:
    if (ctx->pc == 0x1707C0u) {
        ctx->pc = 0x1707C4u;
        goto label_1707c4;
    }
    ctx->pc = 0x1707BCu;
    {
        const bool branch_taken_0x1707bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1707bc) {
            ctx->pc = 0x1707CCu;
            goto label_1707cc;
        }
    }
    ctx->pc = 0x1707C4u;
label_1707c4:
    // 0x1707c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1707c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1707c8:
    // 0x1707c8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1707c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1707cc:
    // 0x1707cc: 0x0  nop
    ctx->pc = 0x1707ccu;
    // NOP
label_1707d0:
    // 0x1707d0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1707d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_1707d4:
    // 0x1707d4: 0x24424100  addiu       $v0, $v0, 0x4100
    ctx->pc = 0x1707d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16640));
label_1707d8:
    // 0x1707d8: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x1707d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1707dc:
    // 0x1707dc: 0x8f828734  lw          $v0, -0x78CC($gp)
    ctx->pc = 0x1707dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936372)));
label_1707e0:
    // 0x1707e0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1707e4:
    if (ctx->pc == 0x1707E4u) {
        ctx->pc = 0x1707E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1707E0u;
        // 0x1707e4: 0x26060190  addiu       $a2, $s0, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1707E8u;
        goto label_1707e8;
    }
    ctx->pc = 0x1707E0u;
    {
        const bool branch_taken_0x1707e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1707E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1707E0u;
        // 0x1707e4: 0x26060190  addiu       $a2, $s0, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1707e0) {
            ctx->pc = 0x170810u;
            goto label_170810;
        }
    }
    ctx->pc = 0x1707E8u;
label_1707e8:
    // 0x1707e8: 0x26050130  addiu       $a1, $s0, 0x130
    ctx->pc = 0x1707e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
label_1707ec:
    // 0x1707ec: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1707ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1707f0:
    // 0x1707f0: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x1707f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_1707f4:
    // 0x1707f4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1707f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1707f8:
    // 0x1707f8: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x1707f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_1707fc:
    // 0x1707fc: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x1707fcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_170800:
    // 0x170800: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x170800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_170804:
    // 0x170804: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x170804u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
label_170808:
    // 0x170808: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_17080c:
    if (ctx->pc == 0x17080Cu) {
        ctx->pc = 0x17080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170808u;
        // 0x17080c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170810u;
        goto label_170810;
    }
    ctx->pc = 0x170808u;
    {
        const bool branch_taken_0x170808 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x17080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170808u;
        // 0x17080c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170808) {
            ctx->pc = 0x1707F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1707f0;
        }
    }
    ctx->pc = 0x170810u;
label_170810:
    // 0x170810: 0x8f828734  lw          $v0, -0x78CC($gp)
    ctx->pc = 0x170810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936372)));
label_170814:
    // 0x170814: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x170814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_170818:
    // 0x170818: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17081c:
    // 0x17081c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17081cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_170820:
    // 0x170820: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x170820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_170824:
    // 0x170824: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x170824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_170828:
    // 0x170828: 0x24510130  addiu       $s1, $v0, 0x130
    ctx->pc = 0x170828u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
label_17082c:
    // 0x17082c: 0xc06b8d4  jal         func_1AE350
label_170830:
    if (ctx->pc == 0x170830u) {
        ctx->pc = 0x170830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17082Cu;
        // 0x170830: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170834u;
        goto label_170834;
    }
    ctx->pc = 0x17082Cu;
    SET_GPR_U32(ctx, 31, 0x170834u);
    ctx->pc = 0x170830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17082Cu;
    // 0x170830: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE350u;
    { ctx->pc = 0x1ae350; return; }
    ctx->pc = 0x170834u;
label_170834:
    // 0x170834: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_170838:
    if (ctx->pc == 0x170838u) {
        ctx->pc = 0x170838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170834u;
        // 0x170838: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17083Cu;
        goto label_17083c;
    }
    ctx->pc = 0x170834u;
    {
        const bool branch_taken_0x170834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170834u;
        // 0x170838: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170834) {
            ctx->pc = 0x170840u;
            goto label_170840;
        }
    }
    ctx->pc = 0x17083Cu;
label_17083c:
    // 0x17083c: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x17083cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_170840:
    // 0x170840: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x170840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_170844:
    // 0x170844: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x170844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_170848:
    // 0x170848: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x170848u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_17084c:
    // 0x17084c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x17084cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_170850:
    // 0x170850: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x170850u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_170854:
    // 0x170854: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x170854u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
label_170858:
    // 0x170858: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x170858u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_17085c:
    // 0x17085c: 0xa4c30002  sh          $v1, 0x2($a2)
    ctx->pc = 0x17085cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 3));
label_170860:
    // 0x170860: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_170864:
    if (ctx->pc == 0x170864u) {
        ctx->pc = 0x170864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170860u;
        // 0x170864: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170868u;
        goto label_170868;
    }
    ctx->pc = 0x170860u;
    {
        const bool branch_taken_0x170860 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x170864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170860u;
        // 0x170864: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170860) {
            ctx->pc = 0x170848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170848;
        }
    }
    ctx->pc = 0x170868u;
label_170868:
    // 0x170868: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x170868u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_17086c:
    // 0x17086c: 0x26730058  addiu       $s3, $s3, 0x58
    ctx->pc = 0x17086cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
label_170870:
    // 0x170870: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x170870u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_170874:
    // 0x170874: 0x1460ffaf  bnez        $v1, . + 4 + (-0x51 << 2)
label_170878:
    if (ctx->pc == 0x170878u) {
        ctx->pc = 0x170878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170874u;
        // 0x170878: 0x269401c0  addiu       $s4, $s4, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17087Cu;
        goto label_17087c;
    }
    ctx->pc = 0x170874u;
    {
        const bool branch_taken_0x170874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x170878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170874u;
        // 0x170878: 0x269401c0  addiu       $s4, $s4, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170874) {
            ctx->pc = 0x170734u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170734;
        }
    }
    ctx->pc = 0x17087Cu;
label_17087c:
    // 0x17087c: 0x8f838734  lw          $v1, -0x78CC($gp)
    ctx->pc = 0x17087cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936372)));
label_170880:
    // 0x170880: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x170880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_170884:
    // 0x170884: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
label_170888:
    if (ctx->pc == 0x170888u) {
        ctx->pc = 0x170888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170884u;
        // 0x170888: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17088Cu;
        goto label_17088c;
    }
    ctx->pc = 0x170884u;
    {
        const bool branch_taken_0x170884 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x170888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170884u;
        // 0x170888: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170884) {
            ctx->pc = 0x170898u;
            goto label_170898;
        }
    }
    ctx->pc = 0x17088Cu;
label_17088c:
    // 0x17088c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_170890:
    if (ctx->pc == 0x170890u) {
        ctx->pc = 0x170894u;
        goto label_170894;
    }
    ctx->pc = 0x17088Cu;
    {
        const bool branch_taken_0x17088c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17088c) {
            ctx->pc = 0x170898u;
            goto label_170898;
        }
    }
    ctx->pc = 0x170894u;
label_170894:
    // 0x170894: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x170894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_170898:
    // 0x170898: 0xaf838734  sw          $v1, -0x78CC($gp)
    ctx->pc = 0x170898u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936372), GPR_U32(ctx, 3));
label_17089c:
    // 0x17089c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x17089cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1708a0:
    // 0x1708a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1708a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1708a4:
    // 0x1708a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1708a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1708a8:
    // 0x1708a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1708a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1708ac:
    // 0x1708ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1708acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1708b0:
    // 0x1708b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1708b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1708b4:
    // 0x1708b4: 0x3e00008  jr          $ra
label_1708b8:
    if (ctx->pc == 0x1708B8u) {
        ctx->pc = 0x1708B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1708B4u;
        // 0x1708b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1708BCu;
        goto label_1708bc;
    }
    ctx->pc = 0x1708B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1708B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1708B4u;
        // 0x1708b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1708B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1708BCu;
label_1708bc:
    // 0x1708bc: 0x0  nop
    ctx->pc = 0x1708bcu;
    // NOP
label_1708c0:
    // 0x1708c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1708c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1708c4:
    // 0x1708c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1708c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1708c8:
    // 0x1708c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1708c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1708cc:
    // 0x1708cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1708ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1708d0:
    // 0x1708d0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1708d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1708d4:
    // 0x1708d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1708d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1708d8:
    // 0x1708d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1708d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1708dc:
    // 0x1708dc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1708dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_1708e0:
    // 0x1708e0: 0x24634480  addiu       $v1, $v1, 0x4480
    ctx->pc = 0x1708e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17536));
label_1708e4:
    // 0x1708e4: 0x708821  addu        $s1, $v1, $s0
    ctx->pc = 0x1708e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1708e8:
    // 0x1708e8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1708e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1708ec:
    // 0x1708ec: 0x1460007c  bnez        $v1, . + 4 + (0x7C << 2)
label_1708f0:
    if (ctx->pc == 0x1708F0u) {
        ctx->pc = 0x1708F4u;
        goto label_1708f4;
    }
    ctx->pc = 0x1708ECu;
    {
        const bool branch_taken_0x1708ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1708ec) {
            ctx->pc = 0x170AE0u;
            goto label_170ae0;
        }
    }
    ctx->pc = 0x1708F4u;
label_1708f4:
    // 0x1708f4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1708f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1708f8:
    // 0x1708f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1708f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1708fc:
    // 0x1708fc: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_170900:
    if (ctx->pc == 0x170900u) {
        ctx->pc = 0x170900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1708FCu;
        // 0x170900: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170904u;
        goto label_170904;
    }
    ctx->pc = 0x1708FCu;
    {
        const bool branch_taken_0x1708fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x170900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1708FCu;
        // 0x170900: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1708fc) {
            ctx->pc = 0x17090Cu;
            goto label_17090c;
        }
    }
    ctx->pc = 0x170904u;
label_170904:
    // 0x170904: 0x14830076  bne         $a0, $v1, . + 4 + (0x76 << 2)
label_170908:
    if (ctx->pc == 0x170908u) {
        ctx->pc = 0x17090Cu;
        goto label_17090c;
    }
    ctx->pc = 0x170904u;
    {
        const bool branch_taken_0x170904 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x170904) {
            ctx->pc = 0x170AE0u;
            goto label_170ae0;
        }
    }
    ctx->pc = 0x17090Cu;
label_17090c:
    // 0x17090c: 0x0  nop
    ctx->pc = 0x17090cu;
    // NOP
label_170910:
    // 0x170910: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x170910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_170914:
    // 0x170914: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_170918:
    if (ctx->pc == 0x170918u) {
        ctx->pc = 0x170918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170914u;
        // 0x170918: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17091Cu;
        goto label_17091c;
    }
    ctx->pc = 0x170914u;
    {
        const bool branch_taken_0x170914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x170918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170914u;
        // 0x170918: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170914) {
            ctx->pc = 0x170950u;
            goto label_170950;
        }
    }
    ctx->pc = 0x17091Cu;
label_17091c:
    // 0x17091c: 0xc05c3ec  jal         func_170FB0
label_170920:
    if (ctx->pc == 0x170920u) {
        ctx->pc = 0x170924u;
        goto label_170924;
    }
    ctx->pc = 0x17091Cu;
    SET_GPR_U32(ctx, 31, 0x170924u);
    ctx->pc = 0x170FB0u;
    { ctx->pc = 0x170fb0; return; }
    ctx->pc = 0x170924u;
label_170924:
    // 0x170924: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x170924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_170928:
    // 0x170928: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17092c:
    // 0x17092c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17092cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170930:
    // 0x170930: 0xc06ba3a  jal         func_1AE8E8
label_170934:
    if (ctx->pc == 0x170934u) {
        ctx->pc = 0x170934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170930u;
        // 0x170934: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170938u;
        goto label_170938;
    }
    ctx->pc = 0x170930u;
    SET_GPR_U32(ctx, 31, 0x170938u);
    ctx->pc = 0x170934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170930u;
    // 0x170934: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE8E8u;
    { ctx->pc = 0x1ae8e8; return; }
    ctx->pc = 0x170938u;
label_170938:
    // 0x170938: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x170938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17093c:
    // 0x17093c: 0x14430068  bne         $v0, $v1, . + 4 + (0x68 << 2)
label_170940:
    if (ctx->pc == 0x170940u) {
        ctx->pc = 0x170940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17093Cu;
        // 0x170940: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170944u;
        goto label_170944;
    }
    ctx->pc = 0x17093Cu;
    {
        const bool branch_taken_0x17093c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x170940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17093Cu;
        // 0x170940: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17093c) {
            ctx->pc = 0x170AE0u;
            goto label_170ae0;
        }
    }
    ctx->pc = 0x170944u;
label_170944:
    // 0x170944: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x170944u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_170948:
    // 0x170948: 0x10000065  b           . + 4 + (0x65 << 2)
label_17094c:
    if (ctx->pc == 0x17094Cu) {
        ctx->pc = 0x17094Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170948u;
        // 0x17094c: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170950u;
        goto label_170950;
    }
    ctx->pc = 0x170948u;
    {
        const bool branch_taken_0x170948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17094Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170948u;
        // 0x17094c: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170948) {
            ctx->pc = 0x170AE0u;
            goto label_170ae0;
        }
    }
    ctx->pc = 0x170950u;
label_170950:
    // 0x170950: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x170950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_170954:
    // 0x170954: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_170958:
    if (ctx->pc == 0x170958u) {
        ctx->pc = 0x170958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170954u;
        // 0x170958: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17095Cu;
        goto label_17095c;
    }
    ctx->pc = 0x170954u;
    {
        const bool branch_taken_0x170954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x170958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170954u;
        // 0x170958: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170954) {
            ctx->pc = 0x170980u;
            goto label_170980;
        }
    }
    ctx->pc = 0x17095Cu;
label_17095c:
    // 0x17095c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17095cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170960:
    // 0x170960: 0xc06ba98  jal         func_1AEA60
label_170964:
    if (ctx->pc == 0x170964u) {
        ctx->pc = 0x170964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170960u;
        // 0x170964: 0x26260024  addiu       $a2, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170968u;
        goto label_170968;
    }
    ctx->pc = 0x170960u;
    SET_GPR_U32(ctx, 31, 0x170968u);
    ctx->pc = 0x170964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170960u;
    // 0x170964: 0x26260024  addiu       $a2, $s1, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEA60u;
    { ctx->pc = 0x1aea60; return; }
    ctx->pc = 0x170968u;
label_170968:
    // 0x170968: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x170968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17096c:
    // 0x17096c: 0x1443005c  bne         $v0, $v1, . + 4 + (0x5C << 2)
label_170970:
    if (ctx->pc == 0x170970u) {
        ctx->pc = 0x170974u;
        goto label_170974;
    }
    ctx->pc = 0x17096Cu;
    {
        const bool branch_taken_0x17096c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17096c) {
            ctx->pc = 0x170AE0u;
            goto label_170ae0;
        }
    }
    ctx->pc = 0x170974u;
label_170974:
    // 0x170974: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x170974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_170978:
    // 0x170978: 0x10000059  b           . + 4 + (0x59 << 2)
label_17097c:
    if (ctx->pc == 0x17097Cu) {
        ctx->pc = 0x17097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170978u;
        // 0x17097c: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170980u;
        goto label_170980;
    }
    ctx->pc = 0x170978u;
    {
        const bool branch_taken_0x170978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170978u;
        // 0x17097c: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170978) {
            ctx->pc = 0x170AE0u;
            goto label_170ae0;
        }
    }
    ctx->pc = 0x170980u;
label_170980:
    // 0x170980: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x170980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_170984:
    // 0x170984: 0x10600056  beqz        $v1, . + 4 + (0x56 << 2)
label_170988:
    if (ctx->pc == 0x170988u) {
        ctx->pc = 0x170988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170984u;
        // 0x170988: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17098Cu;
        goto label_17098c;
    }
    ctx->pc = 0x170984u;
    {
        const bool branch_taken_0x170984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x170988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170984u;
        // 0x170988: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170984) {
            ctx->pc = 0x170AE0u;
            goto label_170ae0;
        }
    }
    ctx->pc = 0x17098Cu;
label_17098c:
    // 0x17098c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17098cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170990:
    // 0x170990: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x170990u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170994:
    // 0x170994: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x170994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_170998:
    // 0x170998: 0x10000031  b           . + 4 + (0x31 << 2)
label_17099c:
    if (ctx->pc == 0x17099Cu) {
        ctx->pc = 0x17099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170998u;
        // 0x17099c: 0x27a3004c  addiu       $v1, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1709A0u;
        goto label_1709a0;
    }
    ctx->pc = 0x170998u;
    {
        const bool branch_taken_0x170998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170998u;
        // 0x17099c: 0x27a3004c  addiu       $v1, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170998) {
            ctx->pc = 0x170A60u;
            goto label_170a60;
        }
    }
    ctx->pc = 0x1709A0u;
label_1709a0:
    // 0x1709a0: 0x2275021  addu        $t2, $s1, $a3
    ctx->pc = 0x1709a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_1709a4:
    // 0x1709a4: 0x8f8d8738  lw          $t5, -0x78C8($gp)
    ctx->pc = 0x1709a4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936376)));
label_1709a8:
    // 0x1709a8: 0x664021  addu        $t0, $v1, $a2
    ctx->pc = 0x1709a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1709ac:
    // 0x1709ac: 0x8d490038  lw          $t1, 0x38($t2)
    ctx->pc = 0x1709acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 56)));
label_1709b0:
    // 0x1709b0: 0xad4d0038  sw          $t5, 0x38($t2)
    ctx->pc = 0x1709b0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 56), GPR_U32(ctx, 13));
label_1709b4:
    // 0x1709b4: 0x1a95823  subu        $t3, $t5, $t1
    ctx->pc = 0x1709b4u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
label_1709b8:
    // 0x1709b8: 0xa1040000  sb          $a0, 0x0($t0)
    ctx->pc = 0x1709b8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 4));
label_1709bc:
    // 0x1709bc: 0x8d490030  lw          $t1, 0x30($t2)
    ctx->pc = 0x1709bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 48)));
label_1709c0:
    // 0x1709c0: 0x11200025  beqz        $t1, . + 4 + (0x25 << 2)
label_1709c4:
    if (ctx->pc == 0x1709C4u) {
        ctx->pc = 0x1709C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1709C0u;
        // 0x1709c4: 0x25450030  addiu       $a1, $t2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1709C8u;
        goto label_1709c8;
    }
    ctx->pc = 0x1709C0u;
    {
        const bool branch_taken_0x1709c0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1709C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1709C0u;
        // 0x1709c4: 0x25450030  addiu       $a1, $t2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1709c0) {
            ctx->pc = 0x170A58u;
            goto label_170a58;
        }
    }
    ctx->pc = 0x1709C8u;
label_1709c8:
    // 0x1709c8: 0x8ca90004  lw          $t1, 0x4($a1)
    ctx->pc = 0x1709c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1709cc:
    // 0x1709cc: 0x169082a  slt         $at, $t3, $t1
    ctx->pc = 0x1709ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1709d0:
    // 0x1709d0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1709d4:
    if (ctx->pc == 0x1709D4u) {
        ctx->pc = 0x1709D8u;
        goto label_1709d8;
    }
    ctx->pc = 0x1709D0u;
    {
        const bool branch_taken_0x1709d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1709d0) {
            ctx->pc = 0x1709E4u;
            goto label_1709e4;
        }
    }
    ctx->pc = 0x1709D8u;
label_1709d8:
    // 0x1709d8: 0x12b4023  subu        $t0, $t1, $t3
    ctx->pc = 0x1709d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
label_1709dc:
    // 0x1709dc: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1709e0:
    if (ctx->pc == 0x1709E0u) {
        ctx->pc = 0x1709E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1709DCu;
        // 0x1709e0: 0xaca80004  sw          $t0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1709E4u;
        goto label_1709e4;
    }
    ctx->pc = 0x1709DCu;
    {
        const bool branch_taken_0x1709dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1709E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1709DCu;
        // 0x1709e0: 0xaca80004  sw          $t0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1709dc) {
            ctx->pc = 0x170A58u;
            goto label_170a58;
        }
    }
    ctx->pc = 0x1709E4u;
label_1709e4:
    // 0x1709e4: 0x0  nop
    ctx->pc = 0x1709e4u;
    // NOP
label_1709e8:
    // 0x1709e8: 0x8caa0010  lw          $t2, 0x10($a1)
    ctx->pc = 0x1709e8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_1709ec:
    // 0x1709ec: 0x2264821  addu        $t1, $s1, $a2
    ctx->pc = 0x1709ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_1709f0:
    // 0x1709f0: 0x252b002a  addiu       $t3, $t1, 0x2A
    ctx->pc = 0x1709f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 42));
label_1709f4:
    // 0x1709f4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1709f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1709f8:
    // 0x1709f8: 0xacaa0010  sw          $t2, 0x10($a1)
    ctx->pc = 0x1709f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 10));
label_1709fc:
    // 0x1709fc: 0x8caa0010  lw          $t2, 0x10($a1)
    ctx->pc = 0x1709fcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_170a00:
    // 0x170a00: 0x914a0000  lbu         $t2, 0x0($t2)
    ctx->pc = 0x170a00u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_170a04:
    // 0x170a04: 0xa10a0000  sb          $t2, 0x0($t0)
    ctx->pc = 0x170a04u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 10));
label_170a08:
    // 0x170a08: 0x910a0000  lbu         $t2, 0x0($t0)
    ctx->pc = 0x170a08u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_170a0c:
    // 0x170a0c: 0x1140000d  beqz        $t2, . + 4 + (0xD << 2)
label_170a10:
    if (ctx->pc == 0x170A10u) {
        ctx->pc = 0x170A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A0Cu;
        // 0x170a10: 0xa12a002a  sb          $t2, 0x2A($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 42), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170A14u;
        goto label_170a14;
    }
    ctx->pc = 0x170A0Cu;
    {
        const bool branch_taken_0x170a0c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x170A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A0Cu;
        // 0x170a10: 0xa12a002a  sb          $t2, 0x2A($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 42), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170a0c) {
            ctx->pc = 0x170A44u;
            goto label_170a44;
        }
    }
    ctx->pc = 0x170A14u;
label_170a14:
    // 0x170a14: 0x8ca90010  lw          $t1, 0x10($a1)
    ctx->pc = 0x170a14u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_170a18:
    // 0x170a18: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x170a18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_170a1c:
    // 0x170a1c: 0xaca90010  sw          $t1, 0x10($a1)
    ctx->pc = 0x170a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 9));
label_170a20:
    // 0x170a20: 0x8ca90010  lw          $t1, 0x10($a1)
    ctx->pc = 0x170a20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_170a24:
    // 0x170a24: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x170a24u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_170a28:
    // 0x170a28: 0xa1090000  sb          $t1, 0x0($t0)
    ctx->pc = 0x170a28u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 9));
label_170a2c:
    // 0x170a2c: 0x91090000  lbu         $t1, 0x0($t0)
    ctx->pc = 0x170a2cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_170a30:
    // 0x170a30: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
label_170a34:
    if (ctx->pc == 0x170A34u) {
        ctx->pc = 0x170A38u;
        goto label_170a38;
    }
    ctx->pc = 0x170A30u;
    {
        const bool branch_taken_0x170a30 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x170a30) {
            ctx->pc = 0x170A40u;
            goto label_170a40;
        }
    }
    ctx->pc = 0x170A38u;
label_170a38:
    // 0x170a38: 0x10000002  b           . + 4 + (0x2 << 2)
label_170a3c:
    if (ctx->pc == 0x170A3Cu) {
        ctx->pc = 0x170A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A38u;
        // 0x170a3c: 0xa1690000  sb          $t1, 0x0($t3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170A40u;
        goto label_170a40;
    }
    ctx->pc = 0x170A38u;
    {
        const bool branch_taken_0x170a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A38u;
        // 0x170a3c: 0xa1690000  sb          $t1, 0x0($t3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170a38) {
            ctx->pc = 0x170A44u;
            goto label_170a44;
        }
    }
    ctx->pc = 0x170A40u;
label_170a40:
    // 0x170a40: 0xaca90004  sw          $t1, 0x4($a1)
    ctx->pc = 0x170a40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 9));
label_170a44:
    // 0x170a44: 0x0  nop
    ctx->pc = 0x170a44u;
    // NOP
label_170a48:
    // 0x170a48: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x170a48u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_170a4c:
    // 0x170a4c: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x170a4cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170a50:
    // 0x170a50: 0x8402b  sltu        $t0, $zero, $t0
    ctx->pc = 0x170a50u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_170a54:
    // 0x170a54: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x170a54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
label_170a58:
    // 0x170a58: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x170a58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
label_170a5c:
    // 0x170a5c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x170a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_170a60:
    // 0x170a60: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x170a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_170a64:
    // 0x170a64: 0xc5282b  sltu        $a1, $a2, $a1
    ctx->pc = 0x170a64u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_170a68:
    // 0x170a68: 0x14a0ffcd  bnez        $a1, . + 4 + (-0x33 << 2)
label_170a6c:
    if (ctx->pc == 0x170A6Cu) {
        ctx->pc = 0x170A70u;
        goto label_170a70;
    }
    ctx->pc = 0x170A68u;
    {
        const bool branch_taken_0x170a68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x170a68) {
            ctx->pc = 0x1709A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1709a0;
        }
    }
    ctx->pc = 0x170A70u;
label_170a70:
    // 0x170a70: 0x1180001b  beqz        $t4, . + 4 + (0x1B << 2)
label_170a74:
    if (ctx->pc == 0x170A74u) {
        ctx->pc = 0x170A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A70u;
        // 0x170a74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170A78u;
        goto label_170a78;
    }
    ctx->pc = 0x170A70u;
    {
        const bool branch_taken_0x170a70 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x170A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A70u;
        // 0x170a74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170a70) {
            ctx->pc = 0x170AE0u;
            goto label_170ae0;
        }
    }
    ctx->pc = 0x170A78u;
label_170a78:
    // 0x170a78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170a7c:
    // 0x170a7c: 0xc06ba68  jal         func_1AE9A0
label_170a80:
    if (ctx->pc == 0x170A80u) {
        ctx->pc = 0x170A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A7Cu;
        // 0x170a80: 0x2626002a  addiu       $a2, $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 42));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170A84u;
        goto label_170a84;
    }
    ctx->pc = 0x170A7Cu;
    SET_GPR_U32(ctx, 31, 0x170A84u);
    ctx->pc = 0x170A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170A7Cu;
    // 0x170a80: 0x2626002a  addiu       $a2, $s1, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE9A0u;
    { ctx->pc = 0x1ae9a0; return; }
    ctx->pc = 0x170A84u;
label_170a84:
    // 0x170a84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x170a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170a88:
    // 0x170a88: 0x10460015  beq         $v0, $a2, . + 4 + (0x15 << 2)
label_170a8c:
    if (ctx->pc == 0x170A8Cu) {
        ctx->pc = 0x170A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A88u;
        // 0x170a8c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170A90u;
        goto label_170a90;
    }
    ctx->pc = 0x170A88u;
    {
        const bool branch_taken_0x170a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x170A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A88u;
        // 0x170a8c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170a88) {
            ctx->pc = 0x170AE0u;
            goto label_170ae0;
        }
    }
    ctx->pc = 0x170A90u;
label_170a90:
    // 0x170a90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x170a90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170a94:
    // 0x170a94: 0x1000000e  b           . + 4 + (0xE << 2)
label_170a98:
    if (ctx->pc == 0x170A98u) {
        ctx->pc = 0x170A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A94u;
        // 0x170a98: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170A9Cu;
        goto label_170a9c;
    }
    ctx->pc = 0x170A94u;
    {
        const bool branch_taken_0x170a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A94u;
        // 0x170a98: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170a94) {
            ctx->pc = 0x170AD0u;
            goto label_170ad0;
        }
    }
    ctx->pc = 0x170A9Cu;
label_170a9c:
    // 0x170a9c: 0x0  nop
    ctx->pc = 0x170a9cu;
    // NOP
label_170aa0:
    // 0x170aa0: 0x0  nop
    ctx->pc = 0x170aa0u;
    // NOP
label_170aa4:
    // 0x170aa4: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x170aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_170aa8:
    // 0x170aa8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x170aa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_170aac:
    // 0x170aac: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_170ab0:
    if (ctx->pc == 0x170AB0u) {
        ctx->pc = 0x170AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170AACu;
        // 0x170ab0: 0x2272021  addu        $a0, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170AB4u;
        goto label_170ab4;
    }
    ctx->pc = 0x170AACu;
    {
        const bool branch_taken_0x170aac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x170AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170AACu;
        // 0x170ab0: 0x2272021  addu        $a0, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170aac) {
            ctx->pc = 0x170AC8u;
            goto label_170ac8;
        }
    }
    ctx->pc = 0x170AB4u;
label_170ab4:
    // 0x170ab4: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x170ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_170ab8:
    // 0x170ab8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x170ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_170abc:
    // 0x170abc: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x170abcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
label_170ac0:
    // 0x170ac0: 0xac860030  sw          $a2, 0x30($a0)
    ctx->pc = 0x170ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 6));
label_170ac4:
    // 0x170ac4: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x170ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
label_170ac8:
    // 0x170ac8: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x170ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
label_170acc:
    // 0x170acc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x170accu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_170ad0:
    // 0x170ad0: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x170ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_170ad4:
    // 0x170ad4: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x170ad4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_170ad8:
    // 0x170ad8: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_170adc:
    if (ctx->pc == 0x170ADCu) {
        ctx->pc = 0x170AE0u;
        goto label_170ae0;
    }
    ctx->pc = 0x170AD8u;
    {
        const bool branch_taken_0x170ad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x170ad8) {
            ctx->pc = 0x170A9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170a9c;
        }
    }
    ctx->pc = 0x170AE0u;
label_170ae0:
    // 0x170ae0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x170ae0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_170ae4:
    // 0x170ae4: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x170ae4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_170ae8:
    // 0x170ae8: 0x1460ff7c  bnez        $v1, . + 4 + (-0x84 << 2)
label_170aec:
    if (ctx->pc == 0x170AECu) {
        ctx->pc = 0x170AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170AE8u;
        // 0x170aec: 0x26100058  addiu       $s0, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170AF0u;
        goto label_170af0;
    }
    ctx->pc = 0x170AE8u;
    {
        const bool branch_taken_0x170ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x170AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170AE8u;
        // 0x170aec: 0x26100058  addiu       $s0, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ae8) {
            ctx->pc = 0x1708DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1708dc;
        }
    }
    ctx->pc = 0x170AF0u;
label_170af0:
    // 0x170af0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x170af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_170af4:
    // 0x170af4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x170af4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_170af8:
    // 0x170af8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x170af8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_170afc:
    // 0x170afc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x170afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_170b00:
    // 0x170b00: 0x3e00008  jr          $ra
label_170b04:
    if (ctx->pc == 0x170B04u) {
        ctx->pc = 0x170B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B00u;
        // 0x170b04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170B08u;
        goto label_170b08;
    }
    ctx->pc = 0x170B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B00u;
        // 0x170b04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170B08u;
label_170b08:
    // 0x170b08: 0x0  nop
    ctx->pc = 0x170b08u;
    // NOP
label_170b0c:
    // 0x170b0c: 0x0  nop
    ctx->pc = 0x170b0cu;
    // NOP
label_170b10:
    // 0x170b10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x170b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_170b14:
    // 0x170b14: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x170b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_170b18:
    // 0x170b18: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x170b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_170b1c:
    // 0x170b1c: 0x24424530  addiu       $v0, $v0, 0x4530
    ctx->pc = 0x170b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17712));
label_170b20:
    // 0x170b20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x170b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_170b24:
    // 0x170b24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x170b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_170b28:
    // 0x170b28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x170b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_170b2c:
    // 0x170b2c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x170b2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170b30:
    // 0x170b30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x170b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_170b34:
    // 0x170b34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x170b34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_170b38:
    // 0x170b38: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x170b38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_170b3c:
    // 0x170b3c: 0xaf808738  sw          $zero, -0x78C8($gp)
    ctx->pc = 0x170b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936376), GPR_U32(ctx, 0));
label_170b40:
    // 0x170b40: 0x10000004  b           . + 4 + (0x4 << 2)
label_170b44:
    if (ctx->pc == 0x170B44u) {
        ctx->pc = 0x170B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B40u;
        // 0x170b44: 0xaf828744  sw          $v0, -0x78BC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170B48u;
        goto label_170b48;
    }
    ctx->pc = 0x170B40u;
    {
        const bool branch_taken_0x170b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B40u;
        // 0x170b44: 0xaf828744  sw          $v0, -0x78BC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170b40) {
            ctx->pc = 0x170B54u;
            goto label_170b54;
        }
    }
    ctx->pc = 0x170B48u;
label_170b48:
    // 0x170b48: 0xc06641a  jal         func_199068
label_170b4c:
    if (ctx->pc == 0x170B4Cu) {
        ctx->pc = 0x170B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B48u;
        // 0x170b4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170B50u;
        goto label_170b50;
    }
    ctx->pc = 0x170B48u;
    SET_GPR_U32(ctx, 31, 0x170B50u);
    ctx->pc = 0x170B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170B48u;
    // 0x170b4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199068u;
    { ctx->pc = 0x199068; return; }
    ctx->pc = 0x170B50u;
label_170b50:
    // 0x170b50: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x170b50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_170b54:
    // 0x170b54: 0x0  nop
    ctx->pc = 0x170b54u;
    // NOP
label_170b58:
    // 0x170b58: 0xc06b768  jal         func_1ADDA0
label_170b5c:
    if (ctx->pc == 0x170B5Cu) {
        ctx->pc = 0x170B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B58u;
        // 0x170b5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170B60u;
        goto label_170b60;
    }
    ctx->pc = 0x170B58u;
    SET_GPR_U32(ctx, 31, 0x170B60u);
    ctx->pc = 0x170B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170B58u;
    // 0x170b5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADDA0u;
    { ctx->pc = 0x1adda0; return; }
    ctx->pc = 0x170B60u;
label_170b60:
    // 0x170b60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x170b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170b64:
    // 0x170b64: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_170b68:
    if (ctx->pc == 0x170B68u) {
        ctx->pc = 0x170B6Cu;
        goto label_170b6c;
    }
    ctx->pc = 0x170B64u;
    {
        const bool branch_taken_0x170b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x170b64) {
            ctx->pc = 0x170B78u;
            goto label_170b78;
        }
    }
    ctx->pc = 0x170B6Cu;
label_170b6c:
    // 0x170b6c: 0x2e42003c  sltiu       $v0, $s2, 0x3C
    ctx->pc = 0x170b6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
label_170b70:
    // 0x170b70: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_170b74:
    if (ctx->pc == 0x170B74u) {
        ctx->pc = 0x170B78u;
        goto label_170b78;
    }
    ctx->pc = 0x170B70u;
    {
        const bool branch_taken_0x170b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170b70) {
            ctx->pc = 0x170B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170b48;
        }
    }
    ctx->pc = 0x170B78u;
label_170b78:
    // 0x170b78: 0x2e42003c  sltiu       $v0, $s2, 0x3C
    ctx->pc = 0x170b78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
label_170b7c:
    // 0x170b7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_170b80:
    if (ctx->pc == 0x170B80u) {
        ctx->pc = 0x170B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B7Cu;
        // 0x170b80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170B84u;
        goto label_170b84;
    }
    ctx->pc = 0x170B7Cu;
    {
        const bool branch_taken_0x170b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B7Cu;
        // 0x170b80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170b7c) {
            ctx->pc = 0x170B8Cu;
            goto label_170b8c;
        }
    }
    ctx->pc = 0x170B84u;
label_170b84:
    // 0x170b84: 0x10000055  b           . + 4 + (0x55 << 2)
label_170b88:
    if (ctx->pc == 0x170B88u) {
        ctx->pc = 0x170B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B84u;
        // 0x170b88: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170B8Cu;
        goto label_170b8c;
    }
    ctx->pc = 0x170B84u;
    {
        const bool branch_taken_0x170b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B84u;
        // 0x170b88: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170b84) {
            ctx->pc = 0x170CDCu;
            goto label_170cdc;
        }
    }
    ctx->pc = 0x170B8Cu;
label_170b8c:
    // 0x170b8c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x170b8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170b90:
    // 0x170b90: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x170b90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170b94:
    // 0x170b94: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x170b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_170b98:
    // 0x170b98: 0x24424530  addiu       $v0, $v0, 0x4530
    ctx->pc = 0x170b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17712));
label_170b9c:
    // 0x170b9c: 0xc05c478  jal         func_1711E0
label_170ba0:
    if (ctx->pc == 0x170BA0u) {
        ctx->pc = 0x170BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B9Cu;
        // 0x170ba0: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170BA4u;
        goto label_170ba4;
    }
    ctx->pc = 0x170B9Cu;
    SET_GPR_U32(ctx, 31, 0x170BA4u);
    ctx->pc = 0x170BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170B9Cu;
    // 0x170ba0: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1711E0u;
    { ctx->pc = 0x1711e0; return; }
    ctx->pc = 0x170BA4u;
label_170ba4:
    // 0x170ba4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x170ba4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_170ba8:
    // 0x170ba8: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x170ba8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_170bac:
    // 0x170bac: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_170bb0:
    if (ctx->pc == 0x170BB0u) {
        ctx->pc = 0x170BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170BACu;
        // 0x170bb0: 0x26730022  addiu       $s3, $s3, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170BB4u;
        goto label_170bb4;
    }
    ctx->pc = 0x170BACu;
    {
        const bool branch_taken_0x170bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170BACu;
        // 0x170bb0: 0x26730022  addiu       $s3, $s3, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170bac) {
            ctx->pc = 0x170B94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170b94;
        }
    }
    ctx->pc = 0x170BB4u;
label_170bb4:
    // 0x170bb4: 0xaf808730  sw          $zero, -0x78D0($gp)
    ctx->pc = 0x170bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936368), GPR_U32(ctx, 0));
label_170bb8:
    // 0x170bb8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x170bb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170bbc:
    // 0x170bbc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x170bbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170bc0:
    // 0x170bc0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x170bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_170bc4:
    // 0x170bc4: 0x24424100  addiu       $v0, $v0, 0x4100
    ctx->pc = 0x170bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16640));
label_170bc8:
    // 0x170bc8: 0xc05c44c  jal         func_171130
label_170bcc:
    if (ctx->pc == 0x170BCCu) {
        ctx->pc = 0x170BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170BC8u;
        // 0x170bcc: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170BD0u;
        goto label_170bd0;
    }
    ctx->pc = 0x170BC8u;
    SET_GPR_U32(ctx, 31, 0x170BD0u);
    ctx->pc = 0x170BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170BC8u;
    // 0x170bcc: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171130u;
    { ctx->pc = 0x171130; return; }
    ctx->pc = 0x170BD0u;
label_170bd0:
    // 0x170bd0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x170bd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_170bd4:
    // 0x170bd4: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x170bd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_170bd8:
    // 0x170bd8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_170bdc:
    if (ctx->pc == 0x170BDCu) {
        ctx->pc = 0x170BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170BD8u;
        // 0x170bdc: 0x267301c0  addiu       $s3, $s3, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170BE0u;
        goto label_170be0;
    }
    ctx->pc = 0x170BD8u;
    {
        const bool branch_taken_0x170bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170BD8u;
        // 0x170bdc: 0x267301c0  addiu       $s3, $s3, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170bd8) {
            ctx->pc = 0x170BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170bc0;
        }
    }
    ctx->pc = 0x170BE0u;
label_170be0:
    // 0x170be0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x170be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_170be4:
    // 0x170be4: 0xc05c340  jal         func_170D00
label_170be8:
    if (ctx->pc == 0x170BE8u) {
        ctx->pc = 0x170BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170BE4u;
        // 0x170be8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170BECu;
        goto label_170bec;
    }
    ctx->pc = 0x170BE4u;
    SET_GPR_U32(ctx, 31, 0x170BECu);
    ctx->pc = 0x170BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170BE4u;
    // 0x170be8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170D00u;
    goto label_170d00;
    ctx->pc = 0x170BECu;
label_170bec:
    // 0x170bec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x170becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170bf0:
    // 0x170bf0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x170bf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170bf4:
    // 0x170bf4: 0x10000005  b           . + 4 + (0x5 << 2)
label_170bf8:
    if (ctx->pc == 0x170BF8u) {
        ctx->pc = 0x170BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170BF4u;
        // 0x170bf8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170BFCu;
        goto label_170bfc;
    }
    ctx->pc = 0x170BF4u;
    {
        const bool branch_taken_0x170bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170BF4u;
        // 0x170bf8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170bf4) {
            ctx->pc = 0x170C0Cu;
            goto label_170c0c;
        }
    }
    ctx->pc = 0x170BFCu;
label_170bfc:
    // 0x170bfc: 0x0  nop
    ctx->pc = 0x170bfcu;
    // NOP
label_170c00:
    // 0x170c00: 0xc06641a  jal         func_199068
label_170c04:
    if (ctx->pc == 0x170C04u) {
        ctx->pc = 0x170C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C00u;
        // 0x170c04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170C08u;
        goto label_170c08;
    }
    ctx->pc = 0x170C00u;
    SET_GPR_U32(ctx, 31, 0x170C08u);
    ctx->pc = 0x170C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170C00u;
    // 0x170c04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199068u;
    { ctx->pc = 0x199068; return; }
    ctx->pc = 0x170C08u;
label_170c08:
    // 0x170c08: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x170c08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_170c0c:
    // 0x170c0c: 0x0  nop
    ctx->pc = 0x170c0cu;
    // NOP
label_170c10:
    // 0x170c10: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x170c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_170c14:
    // 0x170c14: 0x24424100  addiu       $v0, $v0, 0x4100
    ctx->pc = 0x170c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16640));
label_170c18:
    // 0x170c18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170c1c:
    // 0x170c1c: 0x513021  addu        $a2, $v0, $s1
    ctx->pc = 0x170c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_170c20:
    // 0x170c20: 0xc06b800  jal         func_1AE000
label_170c24:
    if (ctx->pc == 0x170C24u) {
        ctx->pc = 0x170C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C20u;
        // 0x170c24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170C28u;
        goto label_170c28;
    }
    ctx->pc = 0x170C20u;
    SET_GPR_U32(ctx, 31, 0x170C28u);
    ctx->pc = 0x170C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170C20u;
    // 0x170c24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE000u;
    { ctx->pc = 0x1ae000; return; }
    ctx->pc = 0x170C28u;
label_170c28:
    // 0x170c28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x170c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170c2c:
    // 0x170c2c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_170c30:
    if (ctx->pc == 0x170C30u) {
        ctx->pc = 0x170C34u;
        goto label_170c34;
    }
    ctx->pc = 0x170C2Cu;
    {
        const bool branch_taken_0x170c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x170c2c) {
            ctx->pc = 0x170C40u;
            goto label_170c40;
        }
    }
    ctx->pc = 0x170C34u;
label_170c34:
    // 0x170c34: 0x2e42003c  sltiu       $v0, $s2, 0x3C
    ctx->pc = 0x170c34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
label_170c38:
    // 0x170c38: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_170c3c:
    if (ctx->pc == 0x170C3Cu) {
        ctx->pc = 0x170C40u;
        goto label_170c40;
    }
    ctx->pc = 0x170C38u;
    {
        const bool branch_taken_0x170c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170c38) {
            ctx->pc = 0x170BFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170bfc;
        }
    }
    ctx->pc = 0x170C40u;
label_170c40:
    // 0x170c40: 0x2e42003c  sltiu       $v0, $s2, 0x3C
    ctx->pc = 0x170c40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
label_170c44:
    // 0x170c44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_170c48:
    if (ctx->pc == 0x170C48u) {
        ctx->pc = 0x170C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C44u;
        // 0x170c48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170C4Cu;
        goto label_170c4c;
    }
    ctx->pc = 0x170C44u;
    {
        const bool branch_taken_0x170c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C44u;
        // 0x170c48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170c44) {
            ctx->pc = 0x170C54u;
            goto label_170c54;
        }
    }
    ctx->pc = 0x170C4Cu;
label_170c4c:
    // 0x170c4c: 0x10000022  b           . + 4 + (0x22 << 2)
label_170c50:
    if (ctx->pc == 0x170C50u) {
        ctx->pc = 0x170C54u;
        goto label_170c54;
    }
    ctx->pc = 0x170C4Cu;
    {
        const bool branch_taken_0x170c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170c4c) {
            ctx->pc = 0x170CD8u;
            goto label_170cd8;
        }
    }
    ctx->pc = 0x170C54u;
label_170c54:
    // 0x170c54: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x170c54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_170c58:
    // 0x170c58: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x170c58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_170c5c:
    // 0x170c5c: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_170c60:
    if (ctx->pc == 0x170C60u) {
        ctx->pc = 0x170C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C5Cu;
        // 0x170c60: 0x263101c0  addiu       $s1, $s1, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170C64u;
        goto label_170c64;
    }
    ctx->pc = 0x170C5Cu;
    {
        const bool branch_taken_0x170c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C5Cu;
        // 0x170c60: 0x263101c0  addiu       $s1, $s1, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170c5c) {
            ctx->pc = 0x170BF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170bf4;
        }
    }
    ctx->pc = 0x170C64u;
label_170c64:
    // 0x170c64: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x170c64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170c68:
    // 0x170c68: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x170c68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170c6c:
    // 0x170c6c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x170c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_170c70:
    // 0x170c70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170c74:
    // 0x170c74: 0x24424480  addiu       $v0, $v0, 0x4480
    ctx->pc = 0x170c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17536));
label_170c78:
    // 0x170c78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170c7c:
    // 0x170c7c: 0x529821  addu        $s3, $v0, $s2
    ctx->pc = 0x170c7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_170c80:
    // 0x170c80: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x170c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170c84:
    // 0x170c84: 0xc06b9ec  jal         func_1AE7B0
label_170c88:
    if (ctx->pc == 0x170C88u) {
        ctx->pc = 0x170C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C84u;
        // 0x170c88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170C8Cu;
        goto label_170c8c;
    }
    ctx->pc = 0x170C84u;
    SET_GPR_U32(ctx, 31, 0x170C8Cu);
    ctx->pc = 0x170C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170C84u;
    // 0x170c88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE7B0u;
    { ctx->pc = 0x1ae7b0; return; }
    ctx->pc = 0x170C8Cu;
label_170c8c:
    // 0x170c8c: 0x28c00  sll         $s1, $v0, 16
    ctx->pc = 0x170c8cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_170c90:
    // 0x170c90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170c94:
    // 0x170c94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170c98:
    // 0x170c98: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x170c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_170c9c:
    // 0x170c9c: 0xc06b9ec  jal         func_1AE7B0
label_170ca0:
    if (ctx->pc == 0x170CA0u) {
        ctx->pc = 0x170CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C9Cu;
        // 0x170ca0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170CA4u;
        goto label_170ca4;
    }
    ctx->pc = 0x170C9Cu;
    SET_GPR_U32(ctx, 31, 0x170CA4u);
    ctx->pc = 0x170CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170C9Cu;
    // 0x170ca0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE7B0u;
    { ctx->pc = 0x1ae7b0; return; }
    ctx->pc = 0x170CA4u;
label_170ca4:
    // 0x170ca4: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x170ca4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_170ca8:
    // 0x170ca8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x170ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_170cac:
    // 0x170cac: 0xae710008  sw          $s1, 0x8($s3)
    ctx->pc = 0x170cacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
label_170cb0:
    // 0x170cb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170cb4:
    // 0x170cb4: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x170cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_170cb8:
    // 0x170cb8: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x170cb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_170cbc:
    // 0x170cbc: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x170cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_170cc0:
    // 0x170cc0: 0x26520058  addiu       $s2, $s2, 0x58
    ctx->pc = 0x170cc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
label_170cc4:
    // 0x170cc4: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x170cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_170cc8:
    // 0x170cc8: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x170cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_170ccc:
    // 0x170ccc: 0xae620018  sw          $v0, 0x18($s3)
    ctx->pc = 0x170cccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
label_170cd0:
    // 0x170cd0: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
label_170cd4:
    if (ctx->pc == 0x170CD4u) {
        ctx->pc = 0x170CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CD0u;
        // 0x170cd4: 0xae60001c  sw          $zero, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170CD8u;
        goto label_170cd8;
    }
    ctx->pc = 0x170CD0u;
    {
        const bool branch_taken_0x170cd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x170CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CD0u;
        // 0x170cd4: 0xae60001c  sw          $zero, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170cd0) {
            ctx->pc = 0x170C6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170c6c;
        }
    }
    ctx->pc = 0x170CD8u;
label_170cd8:
    // 0x170cd8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x170cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_170cdc:
    // 0x170cdc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x170cdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_170ce0:
    // 0x170ce0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x170ce0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_170ce4:
    // 0x170ce4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x170ce4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_170ce8:
    // 0x170ce8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x170ce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_170cec:
    // 0x170cec: 0x3e00008  jr          $ra
label_170cf0:
    if (ctx->pc == 0x170CF0u) {
        ctx->pc = 0x170CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CECu;
        // 0x170cf0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170CF4u;
        goto label_170cf4;
    }
    ctx->pc = 0x170CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170CECu;
        // 0x170cf0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170CF4u;
label_170cf4:
    // 0x170cf4: 0x0  nop
    ctx->pc = 0x170cf4u;
    // NOP
label_170cf8:
    // 0x170cf8: 0x0  nop
    ctx->pc = 0x170cf8u;
    // NOP
label_170cfc:
    // 0x170cfc: 0x0  nop
    ctx->pc = 0x170cfcu;
    // NOP
label_170d00:
    // 0x170d00: 0xaf848740  sw          $a0, -0x78C0($gp)
    ctx->pc = 0x170d00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936384), GPR_U32(ctx, 4));
label_170d04:
    // 0x170d04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x170d04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170d08:
    // 0x170d08: 0xaf85873c  sw          $a1, -0x78C4($gp)
    ctx->pc = 0x170d08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936380), GPR_U32(ctx, 5));
label_170d0c:
    // 0x170d0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x170d0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170d10:
    // 0x170d10: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x170d10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_170d14:
    // 0x170d14: 0x24844100  addiu       $a0, $a0, 0x4100
    ctx->pc = 0x170d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16640));
label_170d18:
    // 0x170d18: 0x883821  addu        $a3, $a0, $t0
    ctx->pc = 0x170d18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_170d1c:
    // 0x170d1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170d20:
    // 0x170d20: 0xe54821  addu        $t1, $a3, $a1
    ctx->pc = 0x170d20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_170d24:
    // 0x170d24: 0xa1200100  sb          $zero, 0x100($t1)
    ctx->pc = 0x170d24u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 256), (uint8_t)GPR_U32(ctx, 0));
label_170d28:
    // 0x170d28: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x170d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_170d2c:
    // 0x170d2c: 0xa1200110  sb          $zero, 0x110($t1)
    ctx->pc = 0x170d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 272), (uint8_t)GPR_U32(ctx, 0));
label_170d30:
    // 0x170d30: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x170d30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
label_170d34:
    // 0x170d34: 0xa1200101  sb          $zero, 0x101($t1)
    ctx->pc = 0x170d34u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 257), (uint8_t)GPR_U32(ctx, 0));
label_170d38:
    // 0x170d38: 0xa1200111  sb          $zero, 0x111($t1)
    ctx->pc = 0x170d38u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 273), (uint8_t)GPR_U32(ctx, 0));
label_170d3c:
    // 0x170d3c: 0xa1200102  sb          $zero, 0x102($t1)
    ctx->pc = 0x170d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 258), (uint8_t)GPR_U32(ctx, 0));
label_170d40:
    // 0x170d40: 0xa1200112  sb          $zero, 0x112($t1)
    ctx->pc = 0x170d40u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 274), (uint8_t)GPR_U32(ctx, 0));
label_170d44:
    // 0x170d44: 0xa1200103  sb          $zero, 0x103($t1)
    ctx->pc = 0x170d44u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 259), (uint8_t)GPR_U32(ctx, 0));
label_170d48:
    // 0x170d48: 0xa1200113  sb          $zero, 0x113($t1)
    ctx->pc = 0x170d48u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 275), (uint8_t)GPR_U32(ctx, 0));
label_170d4c:
    // 0x170d4c: 0xa1200104  sb          $zero, 0x104($t1)
    ctx->pc = 0x170d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 260), (uint8_t)GPR_U32(ctx, 0));
label_170d50:
    // 0x170d50: 0xa1200114  sb          $zero, 0x114($t1)
    ctx->pc = 0x170d50u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 276), (uint8_t)GPR_U32(ctx, 0));
label_170d54:
    // 0x170d54: 0xa1200105  sb          $zero, 0x105($t1)
    ctx->pc = 0x170d54u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 261), (uint8_t)GPR_U32(ctx, 0));
label_170d58:
    // 0x170d58: 0xa1200115  sb          $zero, 0x115($t1)
    ctx->pc = 0x170d58u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 277), (uint8_t)GPR_U32(ctx, 0));
label_170d5c:
    // 0x170d5c: 0xa1200106  sb          $zero, 0x106($t1)
    ctx->pc = 0x170d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 262), (uint8_t)GPR_U32(ctx, 0));
label_170d60:
    // 0x170d60: 0xa1200116  sb          $zero, 0x116($t1)
    ctx->pc = 0x170d60u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 278), (uint8_t)GPR_U32(ctx, 0));
label_170d64:
    // 0x170d64: 0xa1200107  sb          $zero, 0x107($t1)
    ctx->pc = 0x170d64u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 263), (uint8_t)GPR_U32(ctx, 0));
label_170d68:
    // 0x170d68: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_170d6c:
    if (ctx->pc == 0x170D6Cu) {
        ctx->pc = 0x170D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170D68u;
        // 0x170d6c: 0xa1200117  sb          $zero, 0x117($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 279), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170D70u;
        goto label_170d70;
    }
    ctx->pc = 0x170D68u;
    {
        const bool branch_taken_0x170d68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x170D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170D68u;
        // 0x170d6c: 0xa1200117  sb          $zero, 0x117($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 279), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170d68) {
            ctx->pc = 0x170D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170d20;
        }
    }
    ctx->pc = 0x170D70u;
label_170d70:
    // 0x170d70: 0xa0e00120  sb          $zero, 0x120($a3)
    ctx->pc = 0x170d70u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 288), (uint8_t)GPR_U32(ctx, 0));
label_170d74:
    // 0x170d74: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x170d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_170d78:
    // 0x170d78: 0xa0e00128  sb          $zero, 0x128($a3)
    ctx->pc = 0x170d78u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 296), (uint8_t)GPR_U32(ctx, 0));
label_170d7c:
    // 0x170d7c: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x170d7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_170d80:
    // 0x170d80: 0xa0e00121  sb          $zero, 0x121($a3)
    ctx->pc = 0x170d80u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 289), (uint8_t)GPR_U32(ctx, 0));
label_170d84:
    // 0x170d84: 0x250801c0  addiu       $t0, $t0, 0x1C0
    ctx->pc = 0x170d84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 448));
label_170d88:
    // 0x170d88: 0xa0e00129  sb          $zero, 0x129($a3)
    ctx->pc = 0x170d88u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 297), (uint8_t)GPR_U32(ctx, 0));
label_170d8c:
    // 0x170d8c: 0xa0e00122  sb          $zero, 0x122($a3)
    ctx->pc = 0x170d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 290), (uint8_t)GPR_U32(ctx, 0));
label_170d90:
    // 0x170d90: 0xa0e0012a  sb          $zero, 0x12A($a3)
    ctx->pc = 0x170d90u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 298), (uint8_t)GPR_U32(ctx, 0));
label_170d94:
    // 0x170d94: 0xa0e00123  sb          $zero, 0x123($a3)
    ctx->pc = 0x170d94u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 291), (uint8_t)GPR_U32(ctx, 0));
label_170d98:
    // 0x170d98: 0xa0e0012b  sb          $zero, 0x12B($a3)
    ctx->pc = 0x170d98u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 299), (uint8_t)GPR_U32(ctx, 0));
label_170d9c:
    // 0x170d9c: 0xa0e00124  sb          $zero, 0x124($a3)
    ctx->pc = 0x170d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 292), (uint8_t)GPR_U32(ctx, 0));
label_170da0:
    // 0x170da0: 0xa0e0012c  sb          $zero, 0x12C($a3)
    ctx->pc = 0x170da0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 300), (uint8_t)GPR_U32(ctx, 0));
label_170da4:
    // 0x170da4: 0xa0e00125  sb          $zero, 0x125($a3)
    ctx->pc = 0x170da4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 293), (uint8_t)GPR_U32(ctx, 0));
label_170da8:
    // 0x170da8: 0xa0e0012d  sb          $zero, 0x12D($a3)
    ctx->pc = 0x170da8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 301), (uint8_t)GPR_U32(ctx, 0));
label_170dac:
    // 0x170dac: 0xa0e00126  sb          $zero, 0x126($a3)
    ctx->pc = 0x170dacu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 294), (uint8_t)GPR_U32(ctx, 0));
label_170db0:
    // 0x170db0: 0xa0e0012e  sb          $zero, 0x12E($a3)
    ctx->pc = 0x170db0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 302), (uint8_t)GPR_U32(ctx, 0));
label_170db4:
    // 0x170db4: 0xa0e00127  sb          $zero, 0x127($a3)
    ctx->pc = 0x170db4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 295), (uint8_t)GPR_U32(ctx, 0));
label_170db8:
    // 0x170db8: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
label_170dbc:
    if (ctx->pc == 0x170DBCu) {
        ctx->pc = 0x170DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170DB8u;
        // 0x170dbc: 0xa0e0012f  sb          $zero, 0x12F($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 303), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170DC0u;
        goto label_170dc0;
    }
    ctx->pc = 0x170DB8u;
    {
        const bool branch_taken_0x170db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x170DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170DB8u;
        // 0x170dbc: 0xa0e0012f  sb          $zero, 0x12F($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 303), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170db8) {
            ctx->pc = 0x170D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170d18;
        }
    }
    ctx->pc = 0x170DC0u;
label_170dc0:
    // 0x170dc0: 0x3e00008  jr          $ra
label_170dc4:
    if (ctx->pc == 0x170DC4u) {
        ctx->pc = 0x170DC8u;
        goto label_170dc8;
    }
    ctx->pc = 0x170DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170DC8u;
label_170dc8:
    // 0x170dc8: 0x0  nop
    ctx->pc = 0x170dc8u;
    // NOP
label_170dcc:
    // 0x170dcc: 0x0  nop
    ctx->pc = 0x170dccu;
    // NOP
label_170dd0:
    // 0x170dd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_170dd4:
    // 0x170dd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x170dd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170dd8:
    // 0x170dd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_170ddc:
    // 0x170ddc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x170ddcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170de0:
    // 0x170de0: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x170de0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_170de4:
    // 0x170de4: 0x278481cb  addiu       $a0, $gp, -0x7E35
    ctx->pc = 0x170de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934987));
label_170de8:
    // 0x170de8: 0x24c64480  addiu       $a2, $a2, 0x4480
    ctx->pc = 0x170de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17536));
label_170dec:
    // 0x170dec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x170decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170df0:
    // 0x170df0: 0x28e10002  slti        $at, $a3, 0x2
    ctx->pc = 0x170df0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_170df4:
    // 0x170df4: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
label_170df8:
    if (ctx->pc == 0x170DF8u) {
        ctx->pc = 0x170DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170DF4u;
        // 0x170df8: 0xc95021  addu        $t2, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170DFCu;
        goto label_170dfc;
    }
    ctx->pc = 0x170DF4u;
    {
        const bool branch_taken_0x170df4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x170DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170DF4u;
        // 0x170df8: 0xc95021  addu        $t2, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170df4) {
            ctx->pc = 0x170E60u;
            goto label_170e60;
        }
    }
    ctx->pc = 0x170DFCu;
label_170dfc:
    // 0x170dfc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x170dfcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170e00:
    // 0x170e00: 0x10000013  b           . + 4 + (0x13 << 2)
label_170e04:
    if (ctx->pc == 0x170E04u) {
        ctx->pc = 0x170E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E00u;
        // 0x170e04: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170E08u;
        goto label_170e08;
    }
    ctx->pc = 0x170E00u;
    {
        const bool branch_taken_0x170e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E00u;
        // 0x170e04: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e00) {
            ctx->pc = 0x170E50u;
            goto label_170e50;
        }
    }
    ctx->pc = 0x170E08u;
label_170e08:
    // 0x170e08: 0x28e10002  slti        $at, $a3, 0x2
    ctx->pc = 0x170e08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_170e0c:
    // 0x170e0c: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_170e10:
    if (ctx->pc == 0x170E10u) {
        ctx->pc = 0x170E14u;
        goto label_170e14;
    }
    ctx->pc = 0x170E0Cu;
    {
        const bool branch_taken_0x170e0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x170e0c) {
            ctx->pc = 0x170E44u;
            goto label_170e44;
        }
    }
    ctx->pc = 0x170E14u;
label_170e14:
    // 0x170e14: 0x8d420018  lw          $v0, 0x18($t2)
    ctx->pc = 0x170e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
label_170e18:
    // 0x170e18: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_170e1c:
    if (ctx->pc == 0x170E1Cu) {
        ctx->pc = 0x170E20u;
        goto label_170e20;
    }
    ctx->pc = 0x170E18u;
    {
        const bool branch_taken_0x170e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170e18) {
            ctx->pc = 0x170E44u;
            goto label_170e44;
        }
    }
    ctx->pc = 0x170E20u;
label_170e20:
    // 0x170e20: 0x8d420020  lw          $v0, 0x20($t2)
    ctx->pc = 0x170e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 32)));
label_170e24:
    // 0x170e24: 0x162082b  sltu        $at, $t3, $v0
    ctx->pc = 0x170e24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_170e28:
    // 0x170e28: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_170e2c:
    if (ctx->pc == 0x170E2Cu) {
        ctx->pc = 0x170E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E28u;
        // 0x170e2c: 0x1482821  addu        $a1, $t2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170E30u;
        goto label_170e30;
    }
    ctx->pc = 0x170E28u;
    {
        const bool branch_taken_0x170e28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x170E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E28u;
        // 0x170e2c: 0x1482821  addu        $a1, $t2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e28) {
            ctx->pc = 0x170E44u;
            goto label_170e44;
        }
    }
    ctx->pc = 0x170E30u;
label_170e30:
    // 0x170e30: 0xaca40040  sw          $a0, 0x40($a1)
    ctx->pc = 0x170e30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 4));
label_170e34:
    // 0x170e34: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x170e34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
label_170e38:
    // 0x170e38: 0x8f828738  lw          $v0, -0x78C8($gp)
    ctx->pc = 0x170e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936376)));
label_170e3c:
    // 0x170e3c: 0xaca20038  sw          $v0, 0x38($a1)
    ctx->pc = 0x170e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 2));
label_170e40:
    // 0x170e40: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x170e40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
label_170e44:
    // 0x170e44: 0x0  nop
    ctx->pc = 0x170e44u;
    // NOP
label_170e48:
    // 0x170e48: 0x25080014  addiu       $t0, $t0, 0x14
    ctx->pc = 0x170e48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
label_170e4c:
    // 0x170e4c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x170e4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_170e50:
    // 0x170e50: 0x8d420020  lw          $v0, 0x20($t2)
    ctx->pc = 0x170e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 32)));
label_170e54:
    // 0x170e54: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x170e54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_170e58:
    // 0x170e58: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_170e5c:
    if (ctx->pc == 0x170E5Cu) {
        ctx->pc = 0x170E60u;
        goto label_170e60;
    }
    ctx->pc = 0x170E58u;
    {
        const bool branch_taken_0x170e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170e58) {
            ctx->pc = 0x170E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170e08;
        }
    }
    ctx->pc = 0x170E60u;
label_170e60:
    // 0x170e60: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x170e60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_170e64:
    // 0x170e64: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x170e64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_170e68:
    // 0x170e68: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_170e6c:
    if (ctx->pc == 0x170E6Cu) {
        ctx->pc = 0x170E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E68u;
        // 0x170e6c: 0x25290058  addiu       $t1, $t1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170E70u;
        goto label_170e70;
    }
    ctx->pc = 0x170E68u;
    {
        const bool branch_taken_0x170e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E68u;
        // 0x170e6c: 0x25290058  addiu       $t1, $t1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e68) {
            ctx->pc = 0x170DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170df0;
        }
    }
    ctx->pc = 0x170E70u;
label_170e70:
    // 0x170e70: 0xc05c230  jal         func_1708C0
label_170e74:
    if (ctx->pc == 0x170E74u) {
        ctx->pc = 0x170E78u;
        goto label_170e78;
    }
    ctx->pc = 0x170E70u;
    SET_GPR_U32(ctx, 31, 0x170E78u);
    ctx->pc = 0x1708C0u;
    goto label_1708c0;
    ctx->pc = 0x170E78u;
label_170e78:
    // 0x170e78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_170e7c:
    // 0x170e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x170e80u;
    return;
}
