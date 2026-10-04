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

// Function: FUN_0019b6a8
// Address: 0x19b6a8 - 0x29b6b0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b6a8_part87(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1c5688u: goto label_1c5688;
        case 0x1c568cu: goto label_1c568c;
        case 0x1c5690u: goto label_1c5690;
        case 0x1c5694u: goto label_1c5694;
        case 0x1c5698u: goto label_1c5698;
        case 0x1c569cu: goto label_1c569c;
        case 0x1c56a0u: goto label_1c56a0;
        case 0x1c56a4u: goto label_1c56a4;
        case 0x1c56a8u: goto label_1c56a8;
        case 0x1c56acu: goto label_1c56ac;
        case 0x1c56b0u: goto label_1c56b0;
        case 0x1c56b4u: goto label_1c56b4;
        case 0x1c56b8u: goto label_1c56b8;
        case 0x1c56bcu: goto label_1c56bc;
        case 0x1c56c0u: goto label_1c56c0;
        case 0x1c56c4u: goto label_1c56c4;
        case 0x1c56c8u: goto label_1c56c8;
        case 0x1c56ccu: goto label_1c56cc;
        case 0x1c56d0u: goto label_1c56d0;
        case 0x1c56d4u: goto label_1c56d4;
        case 0x1c56d8u: goto label_1c56d8;
        case 0x1c56dcu: goto label_1c56dc;
        case 0x1c56e0u: goto label_1c56e0;
        case 0x1c56e4u: goto label_1c56e4;
        case 0x1c56e8u: goto label_1c56e8;
        case 0x1c56ecu: goto label_1c56ec;
        case 0x1c56f0u: goto label_1c56f0;
        case 0x1c56f4u: goto label_1c56f4;
        case 0x1c56f8u: goto label_1c56f8;
        case 0x1c56fcu: goto label_1c56fc;
        case 0x1c5700u: goto label_1c5700;
        case 0x1c5704u: goto label_1c5704;
        case 0x1c5708u: goto label_1c5708;
        case 0x1c570cu: goto label_1c570c;
        case 0x1c5710u: goto label_1c5710;
        case 0x1c5714u: goto label_1c5714;
        case 0x1c5718u: goto label_1c5718;
        case 0x1c571cu: goto label_1c571c;
        case 0x1c5720u: goto label_1c5720;
        case 0x1c5724u: goto label_1c5724;
        case 0x1c5728u: goto label_1c5728;
        case 0x1c572cu: goto label_1c572c;
        case 0x1c5730u: goto label_1c5730;
        case 0x1c5734u: goto label_1c5734;
        case 0x1c5738u: goto label_1c5738;
        case 0x1c573cu: goto label_1c573c;
        case 0x1c5740u: goto label_1c5740;
        case 0x1c5744u: goto label_1c5744;
        case 0x1c5748u: goto label_1c5748;
        case 0x1c574cu: goto label_1c574c;
        case 0x1c5750u: goto label_1c5750;
        case 0x1c5754u: goto label_1c5754;
        case 0x1c5758u: goto label_1c5758;
        case 0x1c575cu: goto label_1c575c;
        case 0x1c5760u: goto label_1c5760;
        case 0x1c5764u: goto label_1c5764;
        case 0x1c5768u: goto label_1c5768;
        case 0x1c576cu: goto label_1c576c;
        case 0x1c5770u: goto label_1c5770;
        case 0x1c5774u: goto label_1c5774;
        case 0x1c5778u: goto label_1c5778;
        case 0x1c577cu: goto label_1c577c;
        case 0x1c5780u: goto label_1c5780;
        case 0x1c5784u: goto label_1c5784;
        case 0x1c5788u: goto label_1c5788;
        case 0x1c578cu: goto label_1c578c;
        case 0x1c5790u: goto label_1c5790;
        case 0x1c5794u: goto label_1c5794;
        case 0x1c5798u: goto label_1c5798;
        case 0x1c579cu: goto label_1c579c;
        case 0x1c57a0u: goto label_1c57a0;
        case 0x1c57a4u: goto label_1c57a4;
        case 0x1c57a8u: goto label_1c57a8;
        case 0x1c57acu: goto label_1c57ac;
        case 0x1c57b0u: goto label_1c57b0;
        case 0x1c57b4u: goto label_1c57b4;
        case 0x1c57b8u: goto label_1c57b8;
        case 0x1c57bcu: goto label_1c57bc;
        case 0x1c57c0u: goto label_1c57c0;
        case 0x1c57c4u: goto label_1c57c4;
        case 0x1c57c8u: goto label_1c57c8;
        case 0x1c57ccu: goto label_1c57cc;
        case 0x1c57d0u: goto label_1c57d0;
        case 0x1c57d4u: goto label_1c57d4;
        case 0x1c57d8u: goto label_1c57d8;
        case 0x1c57dcu: goto label_1c57dc;
        case 0x1c57e0u: goto label_1c57e0;
        case 0x1c57e4u: goto label_1c57e4;
        case 0x1c57e8u: goto label_1c57e8;
        case 0x1c57ecu: goto label_1c57ec;
        case 0x1c57f0u: goto label_1c57f0;
        case 0x1c57f4u: goto label_1c57f4;
        case 0x1c57f8u: goto label_1c57f8;
        case 0x1c57fcu: goto label_1c57fc;
        case 0x1c5800u: goto label_1c5800;
        case 0x1c5804u: goto label_1c5804;
        case 0x1c5808u: goto label_1c5808;
        case 0x1c580cu: goto label_1c580c;
        case 0x1c5810u: goto label_1c5810;
        case 0x1c5814u: goto label_1c5814;
        case 0x1c5818u: goto label_1c5818;
        case 0x1c581cu: goto label_1c581c;
        case 0x1c5820u: goto label_1c5820;
        case 0x1c5824u: goto label_1c5824;
        case 0x1c5828u: goto label_1c5828;
        case 0x1c582cu: goto label_1c582c;
        case 0x1c5830u: goto label_1c5830;
        case 0x1c5834u: goto label_1c5834;
        case 0x1c5838u: goto label_1c5838;
        case 0x1c583cu: goto label_1c583c;
        case 0x1c5840u: goto label_1c5840;
        case 0x1c5844u: goto label_1c5844;
        case 0x1c5848u: goto label_1c5848;
        case 0x1c584cu: goto label_1c584c;
        case 0x1c5850u: goto label_1c5850;
        case 0x1c5854u: goto label_1c5854;
        case 0x1c5858u: goto label_1c5858;
        case 0x1c585cu: goto label_1c585c;
        case 0x1c5860u: goto label_1c5860;
        case 0x1c5864u: goto label_1c5864;
        case 0x1c5868u: goto label_1c5868;
        case 0x1c586cu: goto label_1c586c;
        case 0x1c5870u: goto label_1c5870;
        case 0x1c5874u: goto label_1c5874;
        case 0x1c5878u: goto label_1c5878;
        case 0x1c587cu: goto label_1c587c;
        case 0x1c5880u: goto label_1c5880;
        case 0x1c5884u: goto label_1c5884;
        case 0x1c5888u: goto label_1c5888;
        case 0x1c588cu: goto label_1c588c;
        case 0x1c5890u: goto label_1c5890;
        case 0x1c5894u: goto label_1c5894;
        case 0x1c5898u: goto label_1c5898;
        case 0x1c589cu: goto label_1c589c;
        case 0x1c58a0u: goto label_1c58a0;
        case 0x1c58a4u: goto label_1c58a4;
        case 0x1c58a8u: goto label_1c58a8;
        case 0x1c58acu: goto label_1c58ac;
        case 0x1c58b0u: goto label_1c58b0;
        case 0x1c58b4u: goto label_1c58b4;
        case 0x1c58b8u: goto label_1c58b8;
        case 0x1c58bcu: goto label_1c58bc;
        case 0x1c58c0u: goto label_1c58c0;
        case 0x1c58c4u: goto label_1c58c4;
        case 0x1c58c8u: goto label_1c58c8;
        case 0x1c58ccu: goto label_1c58cc;
        case 0x1c58d0u: goto label_1c58d0;
        case 0x1c58d4u: goto label_1c58d4;
        case 0x1c58d8u: goto label_1c58d8;
        case 0x1c58dcu: goto label_1c58dc;
        case 0x1c58e0u: goto label_1c58e0;
        case 0x1c58e4u: goto label_1c58e4;
        case 0x1c58e8u: goto label_1c58e8;
        case 0x1c58ecu: goto label_1c58ec;
        case 0x1c58f0u: goto label_1c58f0;
        case 0x1c58f4u: goto label_1c58f4;
        case 0x1c58f8u: goto label_1c58f8;
        case 0x1c58fcu: goto label_1c58fc;
        case 0x1c5900u: goto label_1c5900;
        case 0x1c5904u: goto label_1c5904;
        case 0x1c5908u: goto label_1c5908;
        case 0x1c590cu: goto label_1c590c;
        case 0x1c5910u: goto label_1c5910;
        case 0x1c5914u: goto label_1c5914;
        case 0x1c5918u: goto label_1c5918;
        case 0x1c591cu: goto label_1c591c;
        case 0x1c5920u: goto label_1c5920;
        case 0x1c5924u: goto label_1c5924;
        case 0x1c5928u: goto label_1c5928;
        case 0x1c592cu: goto label_1c592c;
        case 0x1c5930u: goto label_1c5930;
        case 0x1c5934u: goto label_1c5934;
        case 0x1c5938u: goto label_1c5938;
        case 0x1c593cu: goto label_1c593c;
        case 0x1c5940u: goto label_1c5940;
        case 0x1c5944u: goto label_1c5944;
        case 0x1c5948u: goto label_1c5948;
        case 0x1c594cu: goto label_1c594c;
        case 0x1c5950u: goto label_1c5950;
        case 0x1c5954u: goto label_1c5954;
        case 0x1c5958u: goto label_1c5958;
        case 0x1c595cu: goto label_1c595c;
        case 0x1c5960u: goto label_1c5960;
        case 0x1c5964u: goto label_1c5964;
        case 0x1c5968u: goto label_1c5968;
        case 0x1c596cu: goto label_1c596c;
        case 0x1c5970u: goto label_1c5970;
        case 0x1c5974u: goto label_1c5974;
        case 0x1c5978u: goto label_1c5978;
        case 0x1c597cu: goto label_1c597c;
        case 0x1c5980u: goto label_1c5980;
        case 0x1c5984u: goto label_1c5984;
        case 0x1c5988u: goto label_1c5988;
        case 0x1c598cu: goto label_1c598c;
        case 0x1c5990u: goto label_1c5990;
        case 0x1c5994u: goto label_1c5994;
        case 0x1c5998u: goto label_1c5998;
        case 0x1c599cu: goto label_1c599c;
        case 0x1c59a0u: goto label_1c59a0;
        case 0x1c59a4u: goto label_1c59a4;
        case 0x1c59a8u: goto label_1c59a8;
        case 0x1c59acu: goto label_1c59ac;
        case 0x1c59b0u: goto label_1c59b0;
        case 0x1c59b4u: goto label_1c59b4;
        case 0x1c59b8u: goto label_1c59b8;
        case 0x1c59bcu: goto label_1c59bc;
        case 0x1c59c0u: goto label_1c59c0;
        case 0x1c59c4u: goto label_1c59c4;
        case 0x1c59c8u: goto label_1c59c8;
        case 0x1c59ccu: goto label_1c59cc;
        case 0x1c59d0u: goto label_1c59d0;
        case 0x1c59d4u: goto label_1c59d4;
        case 0x1c59d8u: goto label_1c59d8;
        case 0x1c59dcu: goto label_1c59dc;
        case 0x1c59e0u: goto label_1c59e0;
        case 0x1c59e4u: goto label_1c59e4;
        case 0x1c59e8u: goto label_1c59e8;
        case 0x1c59ecu: goto label_1c59ec;
        case 0x1c59f0u: goto label_1c59f0;
        case 0x1c59f4u: goto label_1c59f4;
        case 0x1c59f8u: goto label_1c59f8;
        case 0x1c59fcu: goto label_1c59fc;
        case 0x1c5a00u: goto label_1c5a00;
        case 0x1c5a04u: goto label_1c5a04;
        case 0x1c5a08u: goto label_1c5a08;
        case 0x1c5a0cu: goto label_1c5a0c;
        case 0x1c5a10u: goto label_1c5a10;
        case 0x1c5a14u: goto label_1c5a14;
        case 0x1c5a18u: goto label_1c5a18;
        case 0x1c5a1cu: goto label_1c5a1c;
        case 0x1c5a20u: goto label_1c5a20;
        case 0x1c5a24u: goto label_1c5a24;
        case 0x1c5a28u: goto label_1c5a28;
        case 0x1c5a2cu: goto label_1c5a2c;
        case 0x1c5a30u: goto label_1c5a30;
        case 0x1c5a34u: goto label_1c5a34;
        case 0x1c5a38u: goto label_1c5a38;
        case 0x1c5a3cu: goto label_1c5a3c;
        case 0x1c5a40u: goto label_1c5a40;
        case 0x1c5a44u: goto label_1c5a44;
        case 0x1c5a48u: goto label_1c5a48;
        case 0x1c5a4cu: goto label_1c5a4c;
        case 0x1c5a50u: goto label_1c5a50;
        case 0x1c5a54u: goto label_1c5a54;
        case 0x1c5a58u: goto label_1c5a58;
        case 0x1c5a5cu: goto label_1c5a5c;
        case 0x1c5a60u: goto label_1c5a60;
        case 0x1c5a64u: goto label_1c5a64;
        case 0x1c5a68u: goto label_1c5a68;
        case 0x1c5a6cu: goto label_1c5a6c;
        case 0x1c5a70u: goto label_1c5a70;
        case 0x1c5a74u: goto label_1c5a74;
        case 0x1c5a78u: goto label_1c5a78;
        case 0x1c5a7cu: goto label_1c5a7c;
        case 0x1c5a80u: goto label_1c5a80;
        case 0x1c5a84u: goto label_1c5a84;
        case 0x1c5a88u: goto label_1c5a88;
        case 0x1c5a8cu: goto label_1c5a8c;
        case 0x1c5a90u: goto label_1c5a90;
        case 0x1c5a94u: goto label_1c5a94;
        case 0x1c5a98u: goto label_1c5a98;
        case 0x1c5a9cu: goto label_1c5a9c;
        case 0x1c5aa0u: goto label_1c5aa0;
        case 0x1c5aa4u: goto label_1c5aa4;
        case 0x1c5aa8u: goto label_1c5aa8;
        case 0x1c5aacu: goto label_1c5aac;
        case 0x1c5ab0u: goto label_1c5ab0;
        case 0x1c5ab4u: goto label_1c5ab4;
        case 0x1c5ab8u: goto label_1c5ab8;
        case 0x1c5abcu: goto label_1c5abc;
        case 0x1c5ac0u: goto label_1c5ac0;
        case 0x1c5ac4u: goto label_1c5ac4;
        case 0x1c5ac8u: goto label_1c5ac8;
        case 0x1c5accu: goto label_1c5acc;
        case 0x1c5ad0u: goto label_1c5ad0;
        case 0x1c5ad4u: goto label_1c5ad4;
        case 0x1c5ad8u: goto label_1c5ad8;
        case 0x1c5adcu: goto label_1c5adc;
        case 0x1c5ae0u: goto label_1c5ae0;
        case 0x1c5ae4u: goto label_1c5ae4;
        case 0x1c5ae8u: goto label_1c5ae8;
        case 0x1c5aecu: goto label_1c5aec;
        case 0x1c5af0u: goto label_1c5af0;
        case 0x1c5af4u: goto label_1c5af4;
        case 0x1c5af8u: goto label_1c5af8;
        case 0x1c5afcu: goto label_1c5afc;
        case 0x1c5b00u: goto label_1c5b00;
        case 0x1c5b04u: goto label_1c5b04;
        case 0x1c5b08u: goto label_1c5b08;
        case 0x1c5b0cu: goto label_1c5b0c;
        case 0x1c5b10u: goto label_1c5b10;
        case 0x1c5b14u: goto label_1c5b14;
        case 0x1c5b18u: goto label_1c5b18;
        case 0x1c5b1cu: goto label_1c5b1c;
        case 0x1c5b20u: goto label_1c5b20;
        case 0x1c5b24u: goto label_1c5b24;
        case 0x1c5b28u: goto label_1c5b28;
        case 0x1c5b2cu: goto label_1c5b2c;
        case 0x1c5b30u: goto label_1c5b30;
        case 0x1c5b34u: goto label_1c5b34;
        case 0x1c5b38u: goto label_1c5b38;
        case 0x1c5b3cu: goto label_1c5b3c;
        case 0x1c5b40u: goto label_1c5b40;
        case 0x1c5b44u: goto label_1c5b44;
        case 0x1c5b48u: goto label_1c5b48;
        case 0x1c5b4cu: goto label_1c5b4c;
        case 0x1c5b50u: goto label_1c5b50;
        case 0x1c5b54u: goto label_1c5b54;
        case 0x1c5b58u: goto label_1c5b58;
        case 0x1c5b5cu: goto label_1c5b5c;
        case 0x1c5b60u: goto label_1c5b60;
        case 0x1c5b64u: goto label_1c5b64;
        case 0x1c5b68u: goto label_1c5b68;
        case 0x1c5b6cu: goto label_1c5b6c;
        case 0x1c5b70u: goto label_1c5b70;
        case 0x1c5b74u: goto label_1c5b74;
        case 0x1c5b78u: goto label_1c5b78;
        case 0x1c5b7cu: goto label_1c5b7c;
        case 0x1c5b80u: goto label_1c5b80;
        case 0x1c5b84u: goto label_1c5b84;
        case 0x1c5b88u: goto label_1c5b88;
        case 0x1c5b8cu: goto label_1c5b8c;
        case 0x1c5b90u: goto label_1c5b90;
        case 0x1c5b94u: goto label_1c5b94;
        case 0x1c5b98u: goto label_1c5b98;
        case 0x1c5b9cu: goto label_1c5b9c;
        case 0x1c5ba0u: goto label_1c5ba0;
        case 0x1c5ba4u: goto label_1c5ba4;
        case 0x1c5ba8u: goto label_1c5ba8;
        case 0x1c5bacu: goto label_1c5bac;
        case 0x1c5bb0u: goto label_1c5bb0;
        case 0x1c5bb4u: goto label_1c5bb4;
        case 0x1c5bb8u: goto label_1c5bb8;
        case 0x1c5bbcu: goto label_1c5bbc;
        case 0x1c5bc0u: goto label_1c5bc0;
        case 0x1c5bc4u: goto label_1c5bc4;
        case 0x1c5bc8u: goto label_1c5bc8;
        case 0x1c5bccu: goto label_1c5bcc;
        case 0x1c5bd0u: goto label_1c5bd0;
        case 0x1c5bd4u: goto label_1c5bd4;
        case 0x1c5bd8u: goto label_1c5bd8;
        case 0x1c5bdcu: goto label_1c5bdc;
        case 0x1c5be0u: goto label_1c5be0;
        case 0x1c5be4u: goto label_1c5be4;
        case 0x1c5be8u: goto label_1c5be8;
        case 0x1c5becu: goto label_1c5bec;
        case 0x1c5bf0u: goto label_1c5bf0;
        case 0x1c5bf4u: goto label_1c5bf4;
        case 0x1c5bf8u: goto label_1c5bf8;
        case 0x1c5bfcu: goto label_1c5bfc;
        case 0x1c5c00u: goto label_1c5c00;
        case 0x1c5c04u: goto label_1c5c04;
        case 0x1c5c08u: goto label_1c5c08;
        case 0x1c5c0cu: goto label_1c5c0c;
        case 0x1c5c10u: goto label_1c5c10;
        case 0x1c5c14u: goto label_1c5c14;
        case 0x1c5c18u: goto label_1c5c18;
        case 0x1c5c1cu: goto label_1c5c1c;
        case 0x1c5c20u: goto label_1c5c20;
        case 0x1c5c24u: goto label_1c5c24;
        case 0x1c5c28u: goto label_1c5c28;
        case 0x1c5c2cu: goto label_1c5c2c;
        case 0x1c5c30u: goto label_1c5c30;
        case 0x1c5c34u: goto label_1c5c34;
        case 0x1c5c38u: goto label_1c5c38;
        case 0x1c5c3cu: goto label_1c5c3c;
        case 0x1c5c40u: goto label_1c5c40;
        case 0x1c5c44u: goto label_1c5c44;
        case 0x1c5c48u: goto label_1c5c48;
        case 0x1c5c4cu: goto label_1c5c4c;
        case 0x1c5c50u: goto label_1c5c50;
        case 0x1c5c54u: goto label_1c5c54;
        case 0x1c5c58u: goto label_1c5c58;
        case 0x1c5c5cu: goto label_1c5c5c;
        case 0x1c5c60u: goto label_1c5c60;
        case 0x1c5c64u: goto label_1c5c64;
        case 0x1c5c68u: goto label_1c5c68;
        case 0x1c5c6cu: goto label_1c5c6c;
        case 0x1c5c70u: goto label_1c5c70;
        case 0x1c5c74u: goto label_1c5c74;
        case 0x1c5c78u: goto label_1c5c78;
        case 0x1c5c7cu: goto label_1c5c7c;
        case 0x1c5c80u: goto label_1c5c80;
        case 0x1c5c84u: goto label_1c5c84;
        case 0x1c5c88u: goto label_1c5c88;
        case 0x1c5c8cu: goto label_1c5c8c;
        case 0x1c5c90u: goto label_1c5c90;
        case 0x1c5c94u: goto label_1c5c94;
        case 0x1c5c98u: goto label_1c5c98;
        case 0x1c5c9cu: goto label_1c5c9c;
        case 0x1c5ca0u: goto label_1c5ca0;
        case 0x1c5ca4u: goto label_1c5ca4;
        case 0x1c5ca8u: goto label_1c5ca8;
        case 0x1c5cacu: goto label_1c5cac;
        case 0x1c5cb0u: goto label_1c5cb0;
        case 0x1c5cb4u: goto label_1c5cb4;
        case 0x1c5cb8u: goto label_1c5cb8;
        case 0x1c5cbcu: goto label_1c5cbc;
        case 0x1c5cc0u: goto label_1c5cc0;
        case 0x1c5cc4u: goto label_1c5cc4;
        case 0x1c5cc8u: goto label_1c5cc8;
        case 0x1c5cccu: goto label_1c5ccc;
        case 0x1c5cd0u: goto label_1c5cd0;
        case 0x1c5cd4u: goto label_1c5cd4;
        case 0x1c5cd8u: goto label_1c5cd8;
        case 0x1c5cdcu: goto label_1c5cdc;
        case 0x1c5ce0u: goto label_1c5ce0;
        case 0x1c5ce4u: goto label_1c5ce4;
        case 0x1c5ce8u: goto label_1c5ce8;
        case 0x1c5cecu: goto label_1c5cec;
        case 0x1c5cf0u: goto label_1c5cf0;
        case 0x1c5cf4u: goto label_1c5cf4;
        case 0x1c5cf8u: goto label_1c5cf8;
        case 0x1c5cfcu: goto label_1c5cfc;
        case 0x1c5d00u: goto label_1c5d00;
        case 0x1c5d04u: goto label_1c5d04;
        case 0x1c5d08u: goto label_1c5d08;
        case 0x1c5d0cu: goto label_1c5d0c;
        case 0x1c5d10u: goto label_1c5d10;
        case 0x1c5d14u: goto label_1c5d14;
        case 0x1c5d18u: goto label_1c5d18;
        case 0x1c5d1cu: goto label_1c5d1c;
        case 0x1c5d20u: goto label_1c5d20;
        case 0x1c5d24u: goto label_1c5d24;
        case 0x1c5d28u: goto label_1c5d28;
        case 0x1c5d2cu: goto label_1c5d2c;
        case 0x1c5d30u: goto label_1c5d30;
        case 0x1c5d34u: goto label_1c5d34;
        case 0x1c5d38u: goto label_1c5d38;
        case 0x1c5d3cu: goto label_1c5d3c;
        case 0x1c5d40u: goto label_1c5d40;
        case 0x1c5d44u: goto label_1c5d44;
        case 0x1c5d48u: goto label_1c5d48;
        case 0x1c5d4cu: goto label_1c5d4c;
        case 0x1c5d50u: goto label_1c5d50;
        case 0x1c5d54u: goto label_1c5d54;
        case 0x1c5d58u: goto label_1c5d58;
        case 0x1c5d5cu: goto label_1c5d5c;
        case 0x1c5d60u: goto label_1c5d60;
        case 0x1c5d64u: goto label_1c5d64;
        case 0x1c5d68u: goto label_1c5d68;
        case 0x1c5d6cu: goto label_1c5d6c;
        case 0x1c5d70u: goto label_1c5d70;
        case 0x1c5d74u: goto label_1c5d74;
        case 0x1c5d78u: goto label_1c5d78;
        case 0x1c5d7cu: goto label_1c5d7c;
        case 0x1c5d80u: goto label_1c5d80;
        case 0x1c5d84u: goto label_1c5d84;
        case 0x1c5d88u: goto label_1c5d88;
        case 0x1c5d8cu: goto label_1c5d8c;
        case 0x1c5d90u: goto label_1c5d90;
        case 0x1c5d94u: goto label_1c5d94;
        case 0x1c5d98u: goto label_1c5d98;
        case 0x1c5d9cu: goto label_1c5d9c;
        case 0x1c5da0u: goto label_1c5da0;
        case 0x1c5da4u: goto label_1c5da4;
        case 0x1c5da8u: goto label_1c5da8;
        case 0x1c5dacu: goto label_1c5dac;
        case 0x1c5db0u: goto label_1c5db0;
        case 0x1c5db4u: goto label_1c5db4;
        case 0x1c5db8u: goto label_1c5db8;
        case 0x1c5dbcu: goto label_1c5dbc;
        case 0x1c5dc0u: goto label_1c5dc0;
        case 0x1c5dc4u: goto label_1c5dc4;
        case 0x1c5dc8u: goto label_1c5dc8;
        case 0x1c5dccu: goto label_1c5dcc;
        case 0x1c5dd0u: goto label_1c5dd0;
        case 0x1c5dd4u: goto label_1c5dd4;
        case 0x1c5dd8u: goto label_1c5dd8;
        case 0x1c5ddcu: goto label_1c5ddc;
        case 0x1c5de0u: goto label_1c5de0;
        case 0x1c5de4u: goto label_1c5de4;
        case 0x1c5de8u: goto label_1c5de8;
        case 0x1c5decu: goto label_1c5dec;
        case 0x1c5df0u: goto label_1c5df0;
        case 0x1c5df4u: goto label_1c5df4;
        case 0x1c5df8u: goto label_1c5df8;
        case 0x1c5dfcu: goto label_1c5dfc;
        case 0x1c5e00u: goto label_1c5e00;
        case 0x1c5e04u: goto label_1c5e04;
        case 0x1c5e08u: goto label_1c5e08;
        case 0x1c5e0cu: goto label_1c5e0c;
        case 0x1c5e10u: goto label_1c5e10;
        case 0x1c5e14u: goto label_1c5e14;
        case 0x1c5e18u: goto label_1c5e18;
        case 0x1c5e1cu: goto label_1c5e1c;
        case 0x1c5e20u: goto label_1c5e20;
        case 0x1c5e24u: goto label_1c5e24;
        case 0x1c5e28u: goto label_1c5e28;
        case 0x1c5e2cu: goto label_1c5e2c;
        case 0x1c5e30u: goto label_1c5e30;
        case 0x1c5e34u: goto label_1c5e34;
        case 0x1c5e38u: goto label_1c5e38;
        case 0x1c5e3cu: goto label_1c5e3c;
        case 0x1c5e40u: goto label_1c5e40;
        case 0x1c5e44u: goto label_1c5e44;
        case 0x1c5e48u: goto label_1c5e48;
        case 0x1c5e4cu: goto label_1c5e4c;
        case 0x1c5e50u: goto label_1c5e50;
        case 0x1c5e54u: goto label_1c5e54;
        default: return;
    }

label_1c5688:
    // 0x1c5688: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c5688u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1c568c:
    // 0x1c568c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1c568cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1c5690:
    // 0x1c5690: 0x0  nop
    ctx->pc = 0x1c5690u;
    // NOP
label_1c5694:
    // 0x1c5694: 0x0  nop
    ctx->pc = 0x1c5694u;
    // NOP
label_1c5698:
    // 0x1c5698: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1c5698u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
label_1c569c:
    // 0x1c569c: 0x0  nop
    ctx->pc = 0x1c569cu;
    // NOP
label_1c56a0:
    // 0x1c56a0: 0xe62202bc  swc1        $f2, 0x2BC($s1)
    ctx->pc = 0x1c56a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 700), bits); }
label_1c56a4:
    // 0x1c56a4: 0x962302f2  lhu         $v1, 0x2F2($s1)
    ctx->pc = 0x1c56a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 754)));
label_1c56a8:
    // 0x1c56a8: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1c56ac:
    if (ctx->pc == 0x1C56ACu) {
        ctx->pc = 0x1C56ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C56A8u;
        // 0x1c56ac: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C56B0u;
        goto label_1c56b0;
    }
    ctx->pc = 0x1C56A8u;
    {
        const bool branch_taken_0x1c56a8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C56ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C56A8u;
        // 0x1c56ac: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c56a8) {
            ctx->pc = 0x1C56BCu;
            goto label_1c56bc;
        }
    }
    ctx->pc = 0x1C56B0u;
label_1c56b0:
    // 0x1c56b0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c56b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c56b4:
    // 0x1c56b4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c56b8:
    if (ctx->pc == 0x1C56B8u) {
        ctx->pc = 0x1C56B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C56B4u;
        // 0x1c56b8: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C56BCu;
        goto label_1c56bc;
    }
    ctx->pc = 0x1C56B4u;
    {
        const bool branch_taken_0x1c56b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C56B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C56B4u;
        // 0x1c56b8: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c56b4) {
            ctx->pc = 0x1C56D4u;
            goto label_1c56d4;
        }
    }
    ctx->pc = 0x1C56BCu;
label_1c56bc:
    // 0x1c56bc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c56bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c56c0:
    // 0x1c56c0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c56c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c56c4:
    // 0x1c56c4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1c56c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c56c8:
    // 0x1c56c8: 0x0  nop
    ctx->pc = 0x1c56c8u;
    // NOP
label_1c56cc:
    // 0x1c56cc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c56ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1c56d0:
    // 0x1c56d0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1c56d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1c56d4:
    // 0x1c56d4: 0x0  nop
    ctx->pc = 0x1c56d4u;
    // NOP
label_1c56d8:
    // 0x1c56d8: 0x0  nop
    ctx->pc = 0x1c56d8u;
    // NOP
label_1c56dc:
    // 0x1c56dc: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x1c56dcu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[2];
label_1c56e0:
    // 0x1c56e0: 0x0  nop
    ctx->pc = 0x1c56e0u;
    // NOP
label_1c56e4:
    // 0x1c56e4: 0xe62202c0  swc1        $f2, 0x2C0($s1)
    ctx->pc = 0x1c56e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 704), bits); }
label_1c56e8:
    // 0x1c56e8: 0x962302f4  lhu         $v1, 0x2F4($s1)
    ctx->pc = 0x1c56e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 756)));
label_1c56ec:
    // 0x1c56ec: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1c56f0:
    if (ctx->pc == 0x1C56F0u) {
        ctx->pc = 0x1C56F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C56ECu;
        // 0x1c56f0: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C56F4u;
        goto label_1c56f4;
    }
    ctx->pc = 0x1C56ECu;
    {
        const bool branch_taken_0x1c56ec = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C56F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C56ECu;
        // 0x1c56f0: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c56ec) {
            ctx->pc = 0x1C5700u;
            goto label_1c5700;
        }
    }
    ctx->pc = 0x1C56F4u;
label_1c56f4:
    // 0x1c56f4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c56f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c56f8:
    // 0x1c56f8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c56fc:
    if (ctx->pc == 0x1C56FCu) {
        ctx->pc = 0x1C56FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C56F8u;
        // 0x1c56fc: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5700u;
        goto label_1c5700;
    }
    ctx->pc = 0x1C56F8u;
    {
        const bool branch_taken_0x1c56f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C56FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C56F8u;
        // 0x1c56fc: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c56f8) {
            ctx->pc = 0x1C5718u;
            goto label_1c5718;
        }
    }
    ctx->pc = 0x1C5700u;
label_1c5700:
    // 0x1c5700: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c5700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c5704:
    // 0x1c5704: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c5704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c5708:
    // 0x1c5708: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1c5708u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c570c:
    // 0x1c570c: 0x0  nop
    ctx->pc = 0x1c570cu;
    // NOP
label_1c5710:
    // 0x1c5710: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c5710u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1c5714:
    // 0x1c5714: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1c5714u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1c5718:
    // 0x1c5718: 0x0  nop
    ctx->pc = 0x1c5718u;
    // NOP
label_1c571c:
    // 0x1c571c: 0x0  nop
    ctx->pc = 0x1c571cu;
    // NOP
label_1c5720:
    // 0x1c5720: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1c5720u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_1c5724:
    // 0x1c5724: 0x0  nop
    ctx->pc = 0x1c5724u;
    // NOP
label_1c5728:
    // 0x1c5728: 0xe62102c4  swc1        $f1, 0x2C4($s1)
    ctx->pc = 0x1c5728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 708), bits); }
label_1c572c:
    // 0x1c572c: 0x962302f2  lhu         $v1, 0x2F2($s1)
    ctx->pc = 0x1c572cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 754)));
label_1c5730:
    // 0x1c5730: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1c5734:
    if (ctx->pc == 0x1C5734u) {
        ctx->pc = 0x1C5734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5730u;
        // 0x1c5734: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5738u;
        goto label_1c5738;
    }
    ctx->pc = 0x1C5730u;
    {
        const bool branch_taken_0x1c5730 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C5734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5730u;
        // 0x1c5734: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5730) {
            ctx->pc = 0x1C5744u;
            goto label_1c5744;
        }
    }
    ctx->pc = 0x1C5738u;
label_1c5738:
    // 0x1c5738: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c5738u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c573c:
    // 0x1c573c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c5740:
    if (ctx->pc == 0x1C5740u) {
        ctx->pc = 0x1C5740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C573Cu;
        // 0x1c5740: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5744u;
        goto label_1c5744;
    }
    ctx->pc = 0x1C573Cu;
    {
        const bool branch_taken_0x1c573c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C573Cu;
        // 0x1c5740: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c573c) {
            ctx->pc = 0x1C575Cu;
            goto label_1c575c;
        }
    }
    ctx->pc = 0x1C5744u;
label_1c5744:
    // 0x1c5744: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c5744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c5748:
    // 0x1c5748: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c5748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c574c:
    // 0x1c574c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1c574cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c5750:
    // 0x1c5750: 0x0  nop
    ctx->pc = 0x1c5750u;
    // NOP
label_1c5754:
    // 0x1c5754: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c5754u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1c5758:
    // 0x1c5758: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1c5758u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1c575c:
    // 0x1c575c: 0x0  nop
    ctx->pc = 0x1c575cu;
    // NOP
label_1c5760:
    // 0x1c5760: 0x0  nop
    ctx->pc = 0x1c5760u;
    // NOP
label_1c5764:
    // 0x1c5764: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1c5764u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_1c5768:
    // 0x1c5768: 0x0  nop
    ctx->pc = 0x1c5768u;
    // NOP
label_1c576c:
    // 0x1c576c: 0xe62002c8  swc1        $f0, 0x2C8($s1)
    ctx->pc = 0x1c576cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 712), bits); }
label_1c5770:
    // 0x1c5770: 0x962302f4  lhu         $v1, 0x2F4($s1)
    ctx->pc = 0x1c5770u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 756)));
label_1c5774:
    // 0x1c5774: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1c5778:
    if (ctx->pc == 0x1C5778u) {
        ctx->pc = 0x1C5778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5774u;
        // 0x1c5778: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C577Cu;
        goto label_1c577c;
    }
    ctx->pc = 0x1C5774u;
    {
        const bool branch_taken_0x1c5774 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C5778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5774u;
        // 0x1c5778: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5774) {
            ctx->pc = 0x1C5788u;
            goto label_1c5788;
        }
    }
    ctx->pc = 0x1C577Cu;
label_1c577c:
    // 0x1c577c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c577cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c5780:
    // 0x1c5780: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c5784:
    if (ctx->pc == 0x1C5784u) {
        ctx->pc = 0x1C5784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5780u;
        // 0x1c5784: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5788u;
        goto label_1c5788;
    }
    ctx->pc = 0x1C5780u;
    {
        const bool branch_taken_0x1c5780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5780u;
        // 0x1c5784: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5780) {
            ctx->pc = 0x1C57A0u;
            goto label_1c57a0;
        }
    }
    ctx->pc = 0x1C5788u;
label_1c5788:
    // 0x1c5788: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c5788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c578c:
    // 0x1c578c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c578cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c5790:
    // 0x1c5790: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c5790u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c5794:
    // 0x1c5794: 0x0  nop
    ctx->pc = 0x1c5794u;
    // NOP
label_1c5798:
    // 0x1c5798: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c5798u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1c579c:
    // 0x1c579c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1c579cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1c57a0:
    // 0x1c57a0: 0x0  nop
    ctx->pc = 0x1c57a0u;
    // NOP
label_1c57a4:
    // 0x1c57a4: 0x0  nop
    ctx->pc = 0x1c57a4u;
    // NOP
label_1c57a8:
    // 0x1c57a8: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x1c57a8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[0] = ctx->f[3] / ctx->f[0];
label_1c57ac:
    // 0x1c57ac: 0x0  nop
    ctx->pc = 0x1c57acu;
    // NOP
label_1c57b0:
    // 0x1c57b0: 0x0  nop
    ctx->pc = 0x1c57b0u;
    // NOP
label_1c57b4:
    // 0x1c57b4: 0x10000133  b           . + 4 + (0x133 << 2)
label_1c57b8:
    if (ctx->pc == 0x1C57B8u) {
        ctx->pc = 0x1C57B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C57B4u;
        // 0x1c57b8: 0xe62002cc  swc1        $f0, 0x2CC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 716), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C57BCu;
        goto label_1c57bc;
    }
    ctx->pc = 0x1C57B4u;
    {
        const bool branch_taken_0x1c57b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C57B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C57B4u;
        // 0x1c57b8: 0xe62002cc  swc1        $f0, 0x2CC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 716), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c57b4) {
            ctx->pc = 0x1C5C84u;
            goto label_1c5c84;
        }
    }
    ctx->pc = 0x1C57BCu;
label_1c57bc:
    // 0x1c57bc: 0xe6240260  swc1        $f4, 0x260($s1)
    ctx->pc = 0x1c57bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 608), bits); }
label_1c57c0:
    // 0x1c57c0: 0xae200264  sw          $zero, 0x264($s1)
    ctx->pc = 0x1c57c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 0));
label_1c57c4:
    // 0x1c57c4: 0xae200268  sw          $zero, 0x268($s1)
    ctx->pc = 0x1c57c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 616), GPR_U32(ctx, 0));
label_1c57c8:
    // 0x1c57c8: 0xe626026c  swc1        $f6, 0x26C($s1)
    ctx->pc = 0x1c57c8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 620), bits); }
label_1c57cc:
    // 0x1c57cc: 0xe6240270  swc1        $f4, 0x270($s1)
    ctx->pc = 0x1c57ccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 624), bits); }
label_1c57d0:
    // 0x1c57d0: 0xe6340274  swc1        $f20, 0x274($s1)
    ctx->pc = 0x1c57d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 628), bits); }
label_1c57d4:
    // 0x1c57d4: 0xae200278  sw          $zero, 0x278($s1)
    ctx->pc = 0x1c57d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 632), GPR_U32(ctx, 0));
label_1c57d8:
    // 0x1c57d8: 0xe626027c  swc1        $f6, 0x27C($s1)
    ctx->pc = 0x1c57d8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 636), bits); }
label_1c57dc:
    // 0x1c57dc: 0xae200280  sw          $zero, 0x280($s1)
    ctx->pc = 0x1c57dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 640), GPR_U32(ctx, 0));
label_1c57e0:
    // 0x1c57e0: 0xae200284  sw          $zero, 0x284($s1)
    ctx->pc = 0x1c57e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 644), GPR_U32(ctx, 0));
label_1c57e4:
    // 0x1c57e4: 0xae200288  sw          $zero, 0x288($s1)
    ctx->pc = 0x1c57e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 648), GPR_U32(ctx, 0));
label_1c57e8:
    // 0x1c57e8: 0xe626028c  swc1        $f6, 0x28C($s1)
    ctx->pc = 0x1c57e8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 652), bits); }
label_1c57ec:
    // 0x1c57ec: 0xae200290  sw          $zero, 0x290($s1)
    ctx->pc = 0x1c57ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 0));
label_1c57f0:
    // 0x1c57f0: 0xe6340294  swc1        $f20, 0x294($s1)
    ctx->pc = 0x1c57f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 660), bits); }
label_1c57f4:
    // 0x1c57f4: 0xae200298  sw          $zero, 0x298($s1)
    ctx->pc = 0x1c57f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 0));
label_1c57f8:
    // 0x1c57f8: 0xe626029c  swc1        $f6, 0x29C($s1)
    ctx->pc = 0x1c57f8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 668), bits); }
label_1c57fc:
    // 0x1c57fc: 0x962302f2  lhu         $v1, 0x2F2($s1)
    ctx->pc = 0x1c57fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 754)));
label_1c5800:
    // 0x1c5800: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1c5804:
    if (ctx->pc == 0x1C5804u) {
        ctx->pc = 0x1C5804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5800u;
        // 0x1c5804: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5808u;
        goto label_1c5808;
    }
    ctx->pc = 0x1C5800u;
    {
        const bool branch_taken_0x1c5800 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C5804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5800u;
        // 0x1c5804: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5800) {
            ctx->pc = 0x1C5814u;
            goto label_1c5814;
        }
    }
    ctx->pc = 0x1C5808u;
label_1c5808:
    // 0x1c5808: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x1c5808u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1c580c:
    // 0x1c580c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c5810:
    if (ctx->pc == 0x1C5810u) {
        ctx->pc = 0x1C5810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C580Cu;
        // 0x1c5810: 0x46802120  cvt.s.w     $f4, $f4 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5814u;
        goto label_1c5814;
    }
    ctx->pc = 0x1C580Cu;
    {
        const bool branch_taken_0x1c580c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C580Cu;
        // 0x1c5810: 0x46802120  cvt.s.w     $f4, $f4 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c580c) {
            ctx->pc = 0x1C582Cu;
            goto label_1c582c;
        }
    }
    ctx->pc = 0x1C5814u;
label_1c5814:
    // 0x1c5814: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c5814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c5818:
    // 0x1c5818: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c5818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c581c:
    // 0x1c581c: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x1c581cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1c5820:
    // 0x1c5820: 0x0  nop
    ctx->pc = 0x1c5820u;
    // NOP
label_1c5824:
    // 0x1c5824: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1c5824u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_1c5828:
    // 0x1c5828: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x1c5828u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_1c582c:
    // 0x1c582c: 0x0  nop
    ctx->pc = 0x1c582cu;
    // NOP
label_1c5830:
    // 0x1c5830: 0x0  nop
    ctx->pc = 0x1c5830u;
    // NOP
label_1c5834:
    // 0x1c5834: 0x46040103  div.s       $f4, $f0, $f4
    ctx->pc = 0x1c5834u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[4] = ctx->f[0] / ctx->f[4];
label_1c5838:
    // 0x1c5838: 0xe62402b0  swc1        $f4, 0x2B0($s1)
    ctx->pc = 0x1c5838u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 688), bits); }
label_1c583c:
    // 0x1c583c: 0x962302f4  lhu         $v1, 0x2F4($s1)
    ctx->pc = 0x1c583cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 756)));
label_1c5840:
    // 0x1c5840: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1c5844:
    if (ctx->pc == 0x1C5844u) {
        ctx->pc = 0x1C5844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5840u;
        // 0x1c5844: 0x46030900  add.s       $f4, $f1, $f3 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5848u;
        goto label_1c5848;
    }
    ctx->pc = 0x1C5840u;
    {
        const bool branch_taken_0x1c5840 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C5844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5840u;
        // 0x1c5844: 0x46030900  add.s       $f4, $f1, $f3 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5840) {
            ctx->pc = 0x1C5854u;
            goto label_1c5854;
        }
    }
    ctx->pc = 0x1C5848u;
label_1c5848:
    // 0x1c5848: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1c5848u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1c584c:
    // 0x1c584c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c5850:
    if (ctx->pc == 0x1C5850u) {
        ctx->pc = 0x1C5850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C584Cu;
        // 0x1c5850: 0x468018e0  cvt.s.w     $f3, $f3 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5854u;
        goto label_1c5854;
    }
    ctx->pc = 0x1C584Cu;
    {
        const bool branch_taken_0x1c584c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C584Cu;
        // 0x1c5850: 0x468018e0  cvt.s.w     $f3, $f3 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c584c) {
            ctx->pc = 0x1C5870u;
            goto label_1c5870;
        }
    }
    ctx->pc = 0x1C5854u;
label_1c5854:
    // 0x1c5854: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1c5854u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_1c5858:
    // 0x1c5858: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c5858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c585c:
    // 0x1c585c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c585cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c5860:
    // 0x1c5860: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x1c5860u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1c5864:
    // 0x1c5864: 0x0  nop
    ctx->pc = 0x1c5864u;
    // NOP
label_1c5868:
    // 0x1c5868: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1c5868u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1c586c:
    // 0x1c586c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1c586cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_1c5870:
    // 0x1c5870: 0x0  nop
    ctx->pc = 0x1c5870u;
    // NOP
label_1c5874:
    // 0x1c5874: 0x0  nop
    ctx->pc = 0x1c5874u;
    // NOP
label_1c5878:
    // 0x1c5878: 0x460320c3  div.s       $f3, $f4, $f3
    ctx->pc = 0x1c5878u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[3] = ctx->f[4] / ctx->f[3];
label_1c587c:
    // 0x1c587c: 0x0  nop
    ctx->pc = 0x1c587cu;
    // NOP
label_1c5880:
    // 0x1c5880: 0xe62302b4  swc1        $f3, 0x2B4($s1)
    ctx->pc = 0x1c5880u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 692), bits); }
label_1c5884:
    // 0x1c5884: 0x962302f2  lhu         $v1, 0x2F2($s1)
    ctx->pc = 0x1c5884u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 754)));
label_1c5888:
    // 0x1c5888: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1c588c:
    if (ctx->pc == 0x1C588Cu) {
        ctx->pc = 0x1C588Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5888u;
        // 0x1c588c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5890u;
        goto label_1c5890;
    }
    ctx->pc = 0x1C5888u;
    {
        const bool branch_taken_0x1c5888 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C588Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5888u;
        // 0x1c588c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5888) {
            ctx->pc = 0x1C589Cu;
            goto label_1c589c;
        }
    }
    ctx->pc = 0x1C5890u;
label_1c5890:
    // 0x1c5890: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1c5890u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1c5894:
    // 0x1c5894: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c5898:
    if (ctx->pc == 0x1C5898u) {
        ctx->pc = 0x1C5898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5894u;
        // 0x1c5898: 0x468018e0  cvt.s.w     $f3, $f3 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C589Cu;
        goto label_1c589c;
    }
    ctx->pc = 0x1C5894u;
    {
        const bool branch_taken_0x1c5894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5894u;
        // 0x1c5898: 0x468018e0  cvt.s.w     $f3, $f3 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5894) {
            ctx->pc = 0x1C58B4u;
            goto label_1c58b4;
        }
    }
    ctx->pc = 0x1C589Cu;
label_1c589c:
    // 0x1c589c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c589cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c58a0:
    // 0x1c58a0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c58a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c58a4:
    // 0x1c58a4: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x1c58a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1c58a8:
    // 0x1c58a8: 0x0  nop
    ctx->pc = 0x1c58a8u;
    // NOP
label_1c58ac:
    // 0x1c58ac: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1c58acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1c58b0:
    // 0x1c58b0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1c58b0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_1c58b4:
    // 0x1c58b4: 0x0  nop
    ctx->pc = 0x1c58b4u;
    // NOP
label_1c58b8:
    // 0x1c58b8: 0x0  nop
    ctx->pc = 0x1c58b8u;
    // NOP
label_1c58bc:
    // 0x1c58bc: 0x460300c3  div.s       $f3, $f0, $f3
    ctx->pc = 0x1c58bcu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[3] = ctx->f[0] / ctx->f[3];
label_1c58c0:
    // 0x1c58c0: 0x0  nop
    ctx->pc = 0x1c58c0u;
    // NOP
label_1c58c4:
    // 0x1c58c4: 0xe62302b8  swc1        $f3, 0x2B8($s1)
    ctx->pc = 0x1c58c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 696), bits); }
label_1c58c8:
    // 0x1c58c8: 0x962302f4  lhu         $v1, 0x2F4($s1)
    ctx->pc = 0x1c58c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 756)));
label_1c58cc:
    // 0x1c58cc: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1c58d0:
    if (ctx->pc == 0x1C58D0u) {
        ctx->pc = 0x1C58D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C58CCu;
        // 0x1c58d0: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C58D4u;
        goto label_1c58d4;
    }
    ctx->pc = 0x1C58CCu;
    {
        const bool branch_taken_0x1c58cc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C58D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C58CCu;
        // 0x1c58d0: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c58cc) {
            ctx->pc = 0x1C58E0u;
            goto label_1c58e0;
        }
    }
    ctx->pc = 0x1C58D4u;
label_1c58d4:
    // 0x1c58d4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1c58d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1c58d8:
    // 0x1c58d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c58dc:
    if (ctx->pc == 0x1C58DCu) {
        ctx->pc = 0x1C58DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C58D8u;
        // 0x1c58dc: 0x468018e0  cvt.s.w     $f3, $f3 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C58E0u;
        goto label_1c58e0;
    }
    ctx->pc = 0x1C58D8u;
    {
        const bool branch_taken_0x1c58d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C58DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C58D8u;
        // 0x1c58dc: 0x468018e0  cvt.s.w     $f3, $f3 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c58d8) {
            ctx->pc = 0x1C58F8u;
            goto label_1c58f8;
        }
    }
    ctx->pc = 0x1C58E0u;
label_1c58e0:
    // 0x1c58e0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c58e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c58e4:
    // 0x1c58e4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c58e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c58e8:
    // 0x1c58e8: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x1c58e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1c58ec:
    // 0x1c58ec: 0x0  nop
    ctx->pc = 0x1c58ecu;
    // NOP
label_1c58f0:
    // 0x1c58f0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1c58f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1c58f4:
    // 0x1c58f4: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1c58f4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_1c58f8:
    // 0x1c58f8: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x1c58f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1c58fc:
    // 0x1c58fc: 0x0  nop
    ctx->pc = 0x1c58fcu;
    // NOP
label_1c5900:
    // 0x1c5900: 0x46030803  div.s       $f0, $f1, $f3
    ctx->pc = 0x1c5900u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[3];
label_1c5904:
    // 0x1c5904: 0x0  nop
    ctx->pc = 0x1c5904u;
    // NOP
label_1c5908:
    // 0x1c5908: 0xe62002bc  swc1        $f0, 0x2BC($s1)
    ctx->pc = 0x1c5908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 700), bits); }
label_1c590c:
    // 0x1c590c: 0x962302f2  lhu         $v1, 0x2F2($s1)
    ctx->pc = 0x1c590cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 754)));
label_1c5910:
    // 0x1c5910: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1c5914:
    if (ctx->pc == 0x1C5914u) {
        ctx->pc = 0x1C5914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5910u;
        // 0x1c5914: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5918u;
        goto label_1c5918;
    }
    ctx->pc = 0x1C5910u;
    {
        const bool branch_taken_0x1c5910 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C5914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5910u;
        // 0x1c5914: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5910) {
            ctx->pc = 0x1C5924u;
            goto label_1c5924;
        }
    }
    ctx->pc = 0x1C5918u;
label_1c5918:
    // 0x1c5918: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c5918u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c591c:
    // 0x1c591c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c5920:
    if (ctx->pc == 0x1C5920u) {
        ctx->pc = 0x1C5920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C591Cu;
        // 0x1c5920: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5924u;
        goto label_1c5924;
    }
    ctx->pc = 0x1C591Cu;
    {
        const bool branch_taken_0x1c591c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C591Cu;
        // 0x1c5920: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c591c) {
            ctx->pc = 0x1C593Cu;
            goto label_1c593c;
        }
    }
    ctx->pc = 0x1C5924u;
label_1c5924:
    // 0x1c5924: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c5924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c5928:
    // 0x1c5928: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c5928u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c592c:
    // 0x1c592c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c592cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c5930:
    // 0x1c5930: 0x0  nop
    ctx->pc = 0x1c5930u;
    // NOP
label_1c5934:
    // 0x1c5934: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c5934u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1c5938:
    // 0x1c5938: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1c5938u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1c593c:
    // 0x1c593c: 0x0  nop
    ctx->pc = 0x1c593cu;
    // NOP
label_1c5940:
    // 0x1c5940: 0x0  nop
    ctx->pc = 0x1c5940u;
    // NOP
label_1c5944:
    // 0x1c5944: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1c5944u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
label_1c5948:
    // 0x1c5948: 0x0  nop
    ctx->pc = 0x1c5948u;
    // NOP
label_1c594c:
    // 0x1c594c: 0xe62002c0  swc1        $f0, 0x2C0($s1)
    ctx->pc = 0x1c594cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 704), bits); }
label_1c5950:
    // 0x1c5950: 0x962302f4  lhu         $v1, 0x2F4($s1)
    ctx->pc = 0x1c5950u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 756)));
label_1c5954:
    // 0x1c5954: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1c5958:
    if (ctx->pc == 0x1C5958u) {
        ctx->pc = 0x1C5958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5954u;
        // 0x1c5958: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C595Cu;
        goto label_1c595c;
    }
    ctx->pc = 0x1C5954u;
    {
        const bool branch_taken_0x1c5954 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C5958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5954u;
        // 0x1c5958: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5954) {
            ctx->pc = 0x1C5968u;
            goto label_1c5968;
        }
    }
    ctx->pc = 0x1C595Cu;
label_1c595c:
    // 0x1c595c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c595cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c5960:
    // 0x1c5960: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c5964:
    if (ctx->pc == 0x1C5964u) {
        ctx->pc = 0x1C5964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5960u;
        // 0x1c5964: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5968u;
        goto label_1c5968;
    }
    ctx->pc = 0x1C5960u;
    {
        const bool branch_taken_0x1c5960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5960u;
        // 0x1c5964: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5960) {
            ctx->pc = 0x1C5980u;
            goto label_1c5980;
        }
    }
    ctx->pc = 0x1C5968u;
label_1c5968:
    // 0x1c5968: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c5968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c596c:
    // 0x1c596c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c596cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c5970:
    // 0x1c5970: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c5970u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c5974:
    // 0x1c5974: 0x0  nop
    ctx->pc = 0x1c5974u;
    // NOP
label_1c5978:
    // 0x1c5978: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c5978u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1c597c:
    // 0x1c597c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1c597cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1c5980:
    // 0x1c5980: 0x0  nop
    ctx->pc = 0x1c5980u;
    // NOP
label_1c5984:
    // 0x1c5984: 0x0  nop
    ctx->pc = 0x1c5984u;
    // NOP
label_1c5988:
    // 0x1c5988: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x1c5988u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[0] = ctx->f[4] / ctx->f[0];
label_1c598c:
    // 0x1c598c: 0x0  nop
    ctx->pc = 0x1c598cu;
    // NOP
label_1c5990:
    // 0x1c5990: 0xe62002c4  swc1        $f0, 0x2C4($s1)
    ctx->pc = 0x1c5990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 708), bits); }
label_1c5994:
    // 0x1c5994: 0x962302f2  lhu         $v1, 0x2F2($s1)
    ctx->pc = 0x1c5994u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 754)));
label_1c5998:
    // 0x1c5998: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1c599c:
    if (ctx->pc == 0x1C599Cu) {
        ctx->pc = 0x1C599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5998u;
        // 0x1c599c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C59A0u;
        goto label_1c59a0;
    }
    ctx->pc = 0x1C5998u;
    {
        const bool branch_taken_0x1c5998 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5998u;
        // 0x1c599c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5998) {
            ctx->pc = 0x1C59ACu;
            goto label_1c59ac;
        }
    }
    ctx->pc = 0x1C59A0u;
label_1c59a0:
    // 0x1c59a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c59a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c59a4:
    // 0x1c59a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c59a8:
    if (ctx->pc == 0x1C59A8u) {
        ctx->pc = 0x1C59A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59A4u;
        // 0x1c59a8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C59ACu;
        goto label_1c59ac;
    }
    ctx->pc = 0x1C59A4u;
    {
        const bool branch_taken_0x1c59a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C59A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59A4u;
        // 0x1c59a8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c59a4) {
            ctx->pc = 0x1C59C4u;
            goto label_1c59c4;
        }
    }
    ctx->pc = 0x1C59ACu;
label_1c59ac:
    // 0x1c59ac: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c59acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c59b0:
    // 0x1c59b0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c59b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c59b4:
    // 0x1c59b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c59b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c59b8:
    // 0x1c59b8: 0x0  nop
    ctx->pc = 0x1c59b8u;
    // NOP
label_1c59bc:
    // 0x1c59bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c59bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1c59c0:
    // 0x1c59c0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1c59c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1c59c4:
    // 0x1c59c4: 0x0  nop
    ctx->pc = 0x1c59c4u;
    // NOP
label_1c59c8:
    // 0x1c59c8: 0x0  nop
    ctx->pc = 0x1c59c8u;
    // NOP
label_1c59cc:
    // 0x1c59cc: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1c59ccu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
label_1c59d0:
    // 0x1c59d0: 0x0  nop
    ctx->pc = 0x1c59d0u;
    // NOP
label_1c59d4:
    // 0x1c59d4: 0xe62002c8  swc1        $f0, 0x2C8($s1)
    ctx->pc = 0x1c59d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 712), bits); }
label_1c59d8:
    // 0x1c59d8: 0x962302f4  lhu         $v1, 0x2F4($s1)
    ctx->pc = 0x1c59d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 756)));
label_1c59dc:
    // 0x1c59dc: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1c59e0:
    if (ctx->pc == 0x1C59E0u) {
        ctx->pc = 0x1C59E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59DCu;
        // 0x1c59e0: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C59E4u;
        goto label_1c59e4;
    }
    ctx->pc = 0x1C59DCu;
    {
        const bool branch_taken_0x1c59dc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C59E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59DCu;
        // 0x1c59e0: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c59dc) {
            ctx->pc = 0x1C59F0u;
            goto label_1c59f0;
        }
    }
    ctx->pc = 0x1C59E4u;
label_1c59e4:
    // 0x1c59e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c59e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c59e8:
    // 0x1c59e8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c59ec:
    if (ctx->pc == 0x1C59ECu) {
        ctx->pc = 0x1C59ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59E8u;
        // 0x1c59ec: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C59F0u;
        goto label_1c59f0;
    }
    ctx->pc = 0x1C59E8u;
    {
        const bool branch_taken_0x1c59e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C59ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59E8u;
        // 0x1c59ec: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c59e8) {
            ctx->pc = 0x1C5A08u;
            goto label_1c5a08;
        }
    }
    ctx->pc = 0x1C59F0u;
label_1c59f0:
    // 0x1c59f0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c59f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c59f4:
    // 0x1c59f4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c59f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c59f8:
    // 0x1c59f8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c59f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c59fc:
    // 0x1c59fc: 0x0  nop
    ctx->pc = 0x1c59fcu;
    // NOP
label_1c5a00:
    // 0x1c5a00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c5a00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1c5a04:
    // 0x1c5a04: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1c5a04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1c5a08:
    // 0x1c5a08: 0x0  nop
    ctx->pc = 0x1c5a08u;
    // NOP
label_1c5a0c:
    // 0x1c5a0c: 0x0  nop
    ctx->pc = 0x1c5a0cu;
    // NOP
label_1c5a10:
    // 0x1c5a10: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1c5a10u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1c5a14:
    // 0x1c5a14: 0x0  nop
    ctx->pc = 0x1c5a14u;
    // NOP
label_1c5a18:
    // 0x1c5a18: 0x0  nop
    ctx->pc = 0x1c5a18u;
    // NOP
label_1c5a1c:
    // 0x1c5a1c: 0x10000099  b           . + 4 + (0x99 << 2)
label_1c5a20:
    if (ctx->pc == 0x1C5A20u) {
        ctx->pc = 0x1C5A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A1Cu;
        // 0x1c5a20: 0xe62002cc  swc1        $f0, 0x2CC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 716), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5A24u;
        goto label_1c5a24;
    }
    ctx->pc = 0x1C5A1Cu;
    {
        const bool branch_taken_0x1c5a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A1Cu;
        // 0x1c5a20: 0xe62002cc  swc1        $f0, 0x2CC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 716), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a1c) {
            ctx->pc = 0x1C5C84u;
            goto label_1c5c84;
        }
    }
    ctx->pc = 0x1C5A24u;
label_1c5a24:
    // 0x1c5a24: 0xae200260  sw          $zero, 0x260($s1)
    ctx->pc = 0x1c5a24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 0));
label_1c5a28:
    // 0x1c5a28: 0xae200264  sw          $zero, 0x264($s1)
    ctx->pc = 0x1c5a28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 0));
label_1c5a2c:
    // 0x1c5a2c: 0xae200268  sw          $zero, 0x268($s1)
    ctx->pc = 0x1c5a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 616), GPR_U32(ctx, 0));
label_1c5a30:
    // 0x1c5a30: 0xe626026c  swc1        $f6, 0x26C($s1)
    ctx->pc = 0x1c5a30u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 620), bits); }
label_1c5a34:
    // 0x1c5a34: 0xae200270  sw          $zero, 0x270($s1)
    ctx->pc = 0x1c5a34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 624), GPR_U32(ctx, 0));
label_1c5a38:
    // 0x1c5a38: 0xe6340274  swc1        $f20, 0x274($s1)
    ctx->pc = 0x1c5a38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 628), bits); }
label_1c5a3c:
    // 0x1c5a3c: 0xae200278  sw          $zero, 0x278($s1)
    ctx->pc = 0x1c5a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 632), GPR_U32(ctx, 0));
label_1c5a40:
    // 0x1c5a40: 0xe626027c  swc1        $f6, 0x27C($s1)
    ctx->pc = 0x1c5a40u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 636), bits); }
label_1c5a44:
    // 0x1c5a44: 0xe6350280  swc1        $f21, 0x280($s1)
    ctx->pc = 0x1c5a44u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 640), bits); }
label_1c5a48:
    // 0x1c5a48: 0xae200284  sw          $zero, 0x284($s1)
    ctx->pc = 0x1c5a48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 644), GPR_U32(ctx, 0));
label_1c5a4c:
    // 0x1c5a4c: 0xae200288  sw          $zero, 0x288($s1)
    ctx->pc = 0x1c5a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 648), GPR_U32(ctx, 0));
label_1c5a50:
    // 0x1c5a50: 0xe626028c  swc1        $f6, 0x28C($s1)
    ctx->pc = 0x1c5a50u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 652), bits); }
label_1c5a54:
    // 0x1c5a54: 0xe6350290  swc1        $f21, 0x290($s1)
    ctx->pc = 0x1c5a54u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 656), bits); }
label_1c5a58:
    // 0x1c5a58: 0xe6340294  swc1        $f20, 0x294($s1)
    ctx->pc = 0x1c5a58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 660), bits); }
label_1c5a5c:
    // 0x1c5a5c: 0xae200298  sw          $zero, 0x298($s1)
    ctx->pc = 0x1c5a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 0));
label_1c5a60:
    // 0x1c5a60: 0xe626029c  swc1        $f6, 0x29C($s1)
    ctx->pc = 0x1c5a60u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 668), bits); }
label_1c5a64:
    // 0x1c5a64: 0x962302f2  lhu         $v1, 0x2F2($s1)
    ctx->pc = 0x1c5a64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 754)));
label_1c5a68:
    // 0x1c5a68: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1c5a6c:
    if (ctx->pc == 0x1C5A6Cu) {
        ctx->pc = 0x1C5A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A68u;
        // 0x1c5a6c: 0x46020100  add.s       $f4, $f0, $f2 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5A70u;
        goto label_1c5a70;
    }
    ctx->pc = 0x1C5A68u;
    {
        const bool branch_taken_0x1c5a68 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C5A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A68u;
        // 0x1c5a6c: 0x46020100  add.s       $f4, $f0, $f2 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a68) {
            ctx->pc = 0x1C5A7Cu;
            goto label_1c5a7c;
        }
    }
    ctx->pc = 0x1C5A70u;
label_1c5a70:
    // 0x1c5a70: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c5a70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c5a74:
    // 0x1c5a74: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c5a78:
    if (ctx->pc == 0x1C5A78u) {
        ctx->pc = 0x1C5A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A74u;
        // 0x1c5a78: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5A7Cu;
        goto label_1c5a7c;
    }
    ctx->pc = 0x1C5A74u;
    {
        const bool branch_taken_0x1c5a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A74u;
        // 0x1c5a78: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a74) {
            ctx->pc = 0x1C5A98u;
            goto label_1c5a98;
        }
    }
    ctx->pc = 0x1C5A7Cu;
label_1c5a7c:
    // 0x1c5a7c: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1c5a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_1c5a80:
    // 0x1c5a80: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c5a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c5a84:
    // 0x1c5a84: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c5a84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c5a88:
    // 0x1c5a88: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1c5a88u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c5a8c:
    // 0x1c5a8c: 0x0  nop
    ctx->pc = 0x1c5a8cu;
    // NOP
label_1c5a90:
    // 0x1c5a90: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c5a90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1c5a94:
    // 0x1c5a94: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1c5a94u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1c5a98:
    // 0x1c5a98: 0x0  nop
    ctx->pc = 0x1c5a98u;
    // NOP
label_1c5a9c:
    // 0x1c5a9c: 0x0  nop
    ctx->pc = 0x1c5a9cu;
    // NOP
label_1c5aa0:
    // 0x1c5aa0: 0x46022083  div.s       $f2, $f4, $f2
    ctx->pc = 0x1c5aa0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[2] = ctx->f[4] / ctx->f[2];
label_1c5aa4:
    // 0x1c5aa4: 0xe62202b0  swc1        $f2, 0x2B0($s1)
    ctx->pc = 0x1c5aa4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 688), bits); }
label_1c5aa8:
    // 0x1c5aa8: 0x962302f4  lhu         $v1, 0x2F4($s1)
    ctx->pc = 0x1c5aa8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 756)));
label_1c5aac:
    // 0x1c5aac: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1c5ab0:
    if (ctx->pc == 0x1C5AB0u) {
        ctx->pc = 0x1C5AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5AACu;
        // 0x1c5ab0: 0x460308c0  add.s       $f3, $f1, $f3 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5AB4u;
        goto label_1c5ab4;
    }
    ctx->pc = 0x1C5AACu;
    {
        const bool branch_taken_0x1c5aac = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C5AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5AACu;
        // 0x1c5ab0: 0x460308c0  add.s       $f3, $f1, $f3 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5aac) {
            ctx->pc = 0x1C5AC0u;
            goto label_1c5ac0;
        }
    }
    ctx->pc = 0x1C5AB4u;
label_1c5ab4:
    // 0x1c5ab4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c5ab4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c5ab8:
    // 0x1c5ab8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c5abc:
    if (ctx->pc == 0x1C5ABCu) {
        ctx->pc = 0x1C5ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5AB8u;
        // 0x1c5abc: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5AC0u;
        goto label_1c5ac0;
    }
    ctx->pc = 0x1C5AB8u;
    {
        const bool branch_taken_0x1c5ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5AB8u;
        // 0x1c5abc: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ab8) {
            ctx->pc = 0x1C5ADCu;
            goto label_1c5adc;
        }
    }
    ctx->pc = 0x1C5AC0u;
label_1c5ac0:
    // 0x1c5ac0: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1c5ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_1c5ac4:
    // 0x1c5ac4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c5ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c5ac8:
    // 0x1c5ac8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c5ac8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c5acc:
    // 0x1c5acc: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1c5accu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c5ad0:
    // 0x1c5ad0: 0x0  nop
    ctx->pc = 0x1c5ad0u;
    // NOP
label_1c5ad4:
    // 0x1c5ad4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c5ad4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1c5ad8:
    // 0x1c5ad8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1c5ad8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1c5adc:
    // 0x1c5adc: 0x0  nop
    ctx->pc = 0x1c5adcu;
    // NOP
label_1c5ae0:
    // 0x1c5ae0: 0x0  nop
    ctx->pc = 0x1c5ae0u;
    // NOP
label_1c5ae4:
    // 0x1c5ae4: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1c5ae4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
label_1c5ae8:
    // 0x1c5ae8: 0x0  nop
    ctx->pc = 0x1c5ae8u;
    // NOP
label_1c5aec:
    // 0x1c5aec: 0xe62202b4  swc1        $f2, 0x2B4($s1)
    ctx->pc = 0x1c5aecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 692), bits); }
label_1c5af0:
    // 0x1c5af0: 0x962302f2  lhu         $v1, 0x2F2($s1)
    ctx->pc = 0x1c5af0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 754)));
label_1c5af4:
    // 0x1c5af4: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1c5af8:
    if (ctx->pc == 0x1C5AF8u) {
        ctx->pc = 0x1C5AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5AF4u;
        // 0x1c5af8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5AFCu;
        goto label_1c5afc;
    }
    ctx->pc = 0x1C5AF4u;
    {
        const bool branch_taken_0x1c5af4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C5AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5AF4u;
        // 0x1c5af8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5af4) {
            ctx->pc = 0x1C5B08u;
            goto label_1c5b08;
        }
    }
    ctx->pc = 0x1C5AFCu;
label_1c5afc:
    // 0x1c5afc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c5afcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c5b00:
    // 0x1c5b00: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c5b04:
    if (ctx->pc == 0x1C5B04u) {
        ctx->pc = 0x1C5B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B00u;
        // 0x1c5b04: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5B08u;
        goto label_1c5b08;
    }
    ctx->pc = 0x1C5B00u;
    {
        const bool branch_taken_0x1c5b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B00u;
        // 0x1c5b04: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b00) {
            ctx->pc = 0x1C5B20u;
            goto label_1c5b20;
        }
    }
    ctx->pc = 0x1C5B08u;
label_1c5b08:
    // 0x1c5b08: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c5b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c5b0c:
    // 0x1c5b0c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c5b0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c5b10:
    // 0x1c5b10: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1c5b10u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c5b14:
    // 0x1c5b14: 0x0  nop
    ctx->pc = 0x1c5b14u;
    // NOP
label_1c5b18:
    // 0x1c5b18: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c5b18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1c5b1c:
    // 0x1c5b1c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1c5b1cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1c5b20:
    // 0x1c5b20: 0x0  nop
    ctx->pc = 0x1c5b20u;
    // NOP
label_1c5b24:
    // 0x1c5b24: 0x0  nop
    ctx->pc = 0x1c5b24u;
    // NOP
label_1c5b28:
    // 0x1c5b28: 0x46022083  div.s       $f2, $f4, $f2
    ctx->pc = 0x1c5b28u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[2] = ctx->f[4] / ctx->f[2];
label_1c5b2c:
    // 0x1c5b2c: 0x0  nop
    ctx->pc = 0x1c5b2cu;
    // NOP
label_1c5b30:
    // 0x1c5b30: 0xe62202b8  swc1        $f2, 0x2B8($s1)
    ctx->pc = 0x1c5b30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 696), bits); }
label_1c5b34:
    // 0x1c5b34: 0x962302f4  lhu         $v1, 0x2F4($s1)
    ctx->pc = 0x1c5b34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 756)));
label_1c5b38:
    // 0x1c5b38: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1c5b3c:
    if (ctx->pc == 0x1C5B3Cu) {
        ctx->pc = 0x1C5B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B38u;
        // 0x1c5b3c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5B40u;
        goto label_1c5b40;
    }
    ctx->pc = 0x1C5B38u;
    {
        const bool branch_taken_0x1c5b38 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C5B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B38u;
        // 0x1c5b3c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b38) {
            ctx->pc = 0x1C5B4Cu;
            goto label_1c5b4c;
        }
    }
    ctx->pc = 0x1C5B40u;
label_1c5b40:
    // 0x1c5b40: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c5b40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c5b44:
    // 0x1c5b44: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c5b48:
    if (ctx->pc == 0x1C5B48u) {
        ctx->pc = 0x1C5B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B44u;
        // 0x1c5b48: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5B4Cu;
        goto label_1c5b4c;
    }
    ctx->pc = 0x1C5B44u;
    {
        const bool branch_taken_0x1c5b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B44u;
        // 0x1c5b48: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b44) {
            ctx->pc = 0x1C5B64u;
            goto label_1c5b64;
        }
    }
    ctx->pc = 0x1C5B4Cu;
label_1c5b4c:
    // 0x1c5b4c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c5b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c5b50:
    // 0x1c5b50: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c5b50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c5b54:
    // 0x1c5b54: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1c5b54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c5b58:
    // 0x1c5b58: 0x0  nop
    ctx->pc = 0x1c5b58u;
    // NOP
label_1c5b5c:
    // 0x1c5b5c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c5b5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1c5b60:
    // 0x1c5b60: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1c5b60u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1c5b64:
    // 0x1c5b64: 0x0  nop
    ctx->pc = 0x1c5b64u;
    // NOP
label_1c5b68:
    // 0x1c5b68: 0x0  nop
    ctx->pc = 0x1c5b68u;
    // NOP
label_1c5b6c:
    // 0x1c5b6c: 0x46020883  div.s       $f2, $f1, $f2
    ctx->pc = 0x1c5b6cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[2];
label_1c5b70:
    // 0x1c5b70: 0x0  nop
    ctx->pc = 0x1c5b70u;
    // NOP
label_1c5b74:
    // 0x1c5b74: 0xe62202bc  swc1        $f2, 0x2BC($s1)
    ctx->pc = 0x1c5b74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 700), bits); }
label_1c5b78:
    // 0x1c5b78: 0x962302f2  lhu         $v1, 0x2F2($s1)
    ctx->pc = 0x1c5b78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 754)));
label_1c5b7c:
    // 0x1c5b7c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1c5b80:
    if (ctx->pc == 0x1C5B80u) {
        ctx->pc = 0x1C5B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B7Cu;
        // 0x1c5b80: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5B84u;
        goto label_1c5b84;
    }
    ctx->pc = 0x1C5B7Cu;
    {
        const bool branch_taken_0x1c5b7c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C5B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B7Cu;
        // 0x1c5b80: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b7c) {
            ctx->pc = 0x1C5B90u;
            goto label_1c5b90;
        }
    }
    ctx->pc = 0x1C5B84u;
label_1c5b84:
    // 0x1c5b84: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c5b84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c5b88:
    // 0x1c5b88: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c5b8c:
    if (ctx->pc == 0x1C5B8Cu) {
        ctx->pc = 0x1C5B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B88u;
        // 0x1c5b8c: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5B90u;
        goto label_1c5b90;
    }
    ctx->pc = 0x1C5B88u;
    {
        const bool branch_taken_0x1c5b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B88u;
        // 0x1c5b8c: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b88) {
            ctx->pc = 0x1C5BA8u;
            goto label_1c5ba8;
        }
    }
    ctx->pc = 0x1C5B90u;
label_1c5b90:
    // 0x1c5b90: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c5b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c5b94:
    // 0x1c5b94: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c5b94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c5b98:
    // 0x1c5b98: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1c5b98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c5b9c:
    // 0x1c5b9c: 0x0  nop
    ctx->pc = 0x1c5b9cu;
    // NOP
label_1c5ba0:
    // 0x1c5ba0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c5ba0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1c5ba4:
    // 0x1c5ba4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1c5ba4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1c5ba8:
    // 0x1c5ba8: 0x0  nop
    ctx->pc = 0x1c5ba8u;
    // NOP
label_1c5bac:
    // 0x1c5bac: 0x0  nop
    ctx->pc = 0x1c5bacu;
    // NOP
label_1c5bb0:
    // 0x1c5bb0: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x1c5bb0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[2];
label_1c5bb4:
    // 0x1c5bb4: 0x0  nop
    ctx->pc = 0x1c5bb4u;
    // NOP
label_1c5bb8:
    // 0x1c5bb8: 0xe62202c0  swc1        $f2, 0x2C0($s1)
    ctx->pc = 0x1c5bb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 704), bits); }
label_1c5bbc:
    // 0x1c5bbc: 0x962302f4  lhu         $v1, 0x2F4($s1)
    ctx->pc = 0x1c5bbcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 756)));
label_1c5bc0:
    // 0x1c5bc0: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1c5bc4:
    if (ctx->pc == 0x1C5BC4u) {
        ctx->pc = 0x1C5BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5BC0u;
        // 0x1c5bc4: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5BC8u;
        goto label_1c5bc8;
    }
    ctx->pc = 0x1C5BC0u;
    {
        const bool branch_taken_0x1c5bc0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C5BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5BC0u;
        // 0x1c5bc4: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5bc0) {
            ctx->pc = 0x1C5BD4u;
            goto label_1c5bd4;
        }
    }
    ctx->pc = 0x1C5BC8u;
label_1c5bc8:
    // 0x1c5bc8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c5bc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c5bcc:
    // 0x1c5bcc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c5bd0:
    if (ctx->pc == 0x1C5BD0u) {
        ctx->pc = 0x1C5BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5BCCu;
        // 0x1c5bd0: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5BD4u;
        goto label_1c5bd4;
    }
    ctx->pc = 0x1C5BCCu;
    {
        const bool branch_taken_0x1c5bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5BCCu;
        // 0x1c5bd0: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5bcc) {
            ctx->pc = 0x1C5BECu;
            goto label_1c5bec;
        }
    }
    ctx->pc = 0x1C5BD4u;
label_1c5bd4:
    // 0x1c5bd4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c5bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c5bd8:
    // 0x1c5bd8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c5bd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c5bdc:
    // 0x1c5bdc: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1c5bdcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c5be0:
    // 0x1c5be0: 0x0  nop
    ctx->pc = 0x1c5be0u;
    // NOP
label_1c5be4:
    // 0x1c5be4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c5be4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1c5be8:
    // 0x1c5be8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1c5be8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1c5bec:
    // 0x1c5bec: 0x0  nop
    ctx->pc = 0x1c5becu;
    // NOP
label_1c5bf0:
    // 0x1c5bf0: 0x0  nop
    ctx->pc = 0x1c5bf0u;
    // NOP
label_1c5bf4:
    // 0x1c5bf4: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1c5bf4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
label_1c5bf8:
    // 0x1c5bf8: 0x0  nop
    ctx->pc = 0x1c5bf8u;
    // NOP
label_1c5bfc:
    // 0x1c5bfc: 0xe62202c4  swc1        $f2, 0x2C4($s1)
    ctx->pc = 0x1c5bfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 708), bits); }
label_1c5c00:
    // 0x1c5c00: 0x962302f2  lhu         $v1, 0x2F2($s1)
    ctx->pc = 0x1c5c00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 754)));
label_1c5c04:
    // 0x1c5c04: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1c5c08:
    if (ctx->pc == 0x1C5C08u) {
        ctx->pc = 0x1C5C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C04u;
        // 0x1c5c08: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5C0Cu;
        goto label_1c5c0c;
    }
    ctx->pc = 0x1C5C04u;
    {
        const bool branch_taken_0x1c5c04 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C5C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C04u;
        // 0x1c5c08: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c04) {
            ctx->pc = 0x1C5C18u;
            goto label_1c5c18;
        }
    }
    ctx->pc = 0x1C5C0Cu;
label_1c5c0c:
    // 0x1c5c0c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c5c0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c5c10:
    // 0x1c5c10: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c5c14:
    if (ctx->pc == 0x1C5C14u) {
        ctx->pc = 0x1C5C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C10u;
        // 0x1c5c14: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5C18u;
        goto label_1c5c18;
    }
    ctx->pc = 0x1C5C10u;
    {
        const bool branch_taken_0x1c5c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C10u;
        // 0x1c5c14: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c10) {
            ctx->pc = 0x1C5C30u;
            goto label_1c5c30;
        }
    }
    ctx->pc = 0x1C5C18u;
label_1c5c18:
    // 0x1c5c18: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c5c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c5c1c:
    // 0x1c5c1c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c5c1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c5c20:
    // 0x1c5c20: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1c5c20u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c5c24:
    // 0x1c5c24: 0x0  nop
    ctx->pc = 0x1c5c24u;
    // NOP
label_1c5c28:
    // 0x1c5c28: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c5c28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1c5c2c:
    // 0x1c5c2c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1c5c2cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1c5c30:
    // 0x1c5c30: 0x0  nop
    ctx->pc = 0x1c5c30u;
    // NOP
label_1c5c34:
    // 0x1c5c34: 0x0  nop
    ctx->pc = 0x1c5c34u;
    // NOP
label_1c5c38:
    // 0x1c5c38: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1c5c38u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
label_1c5c3c:
    // 0x1c5c3c: 0x0  nop
    ctx->pc = 0x1c5c3cu;
    // NOP
label_1c5c40:
    // 0x1c5c40: 0xe62002c8  swc1        $f0, 0x2C8($s1)
    ctx->pc = 0x1c5c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 712), bits); }
label_1c5c44:
    // 0x1c5c44: 0x962302f4  lhu         $v1, 0x2F4($s1)
    ctx->pc = 0x1c5c44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 756)));
label_1c5c48:
    // 0x1c5c48: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1c5c4c:
    if (ctx->pc == 0x1C5C4Cu) {
        ctx->pc = 0x1C5C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C48u;
        // 0x1c5c4c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5C50u;
        goto label_1c5c50;
    }
    ctx->pc = 0x1C5C48u;
    {
        const bool branch_taken_0x1c5c48 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C5C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C48u;
        // 0x1c5c4c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c48) {
            ctx->pc = 0x1C5C5Cu;
            goto label_1c5c5c;
        }
    }
    ctx->pc = 0x1C5C50u;
label_1c5c50:
    // 0x1c5c50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c5c50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c5c54:
    // 0x1c5c54: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c5c58:
    if (ctx->pc == 0x1C5C58u) {
        ctx->pc = 0x1C5C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C54u;
        // 0x1c5c58: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5C5Cu;
        goto label_1c5c5c;
    }
    ctx->pc = 0x1C5C54u;
    {
        const bool branch_taken_0x1c5c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C54u;
        // 0x1c5c58: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c54) {
            ctx->pc = 0x1C5C74u;
            goto label_1c5c74;
        }
    }
    ctx->pc = 0x1C5C5Cu;
label_1c5c5c:
    // 0x1c5c5c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c5c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c5c60:
    // 0x1c5c60: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c5c60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c5c64:
    // 0x1c5c64: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c5c64u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c5c68:
    // 0x1c5c68: 0x0  nop
    ctx->pc = 0x1c5c68u;
    // NOP
label_1c5c6c:
    // 0x1c5c6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c5c6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1c5c70:
    // 0x1c5c70: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1c5c70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1c5c74:
    // 0x1c5c74: 0x0  nop
    ctx->pc = 0x1c5c74u;
    // NOP
label_1c5c78:
    // 0x1c5c78: 0x0  nop
    ctx->pc = 0x1c5c78u;
    // NOP
label_1c5c7c:
    // 0x1c5c7c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1c5c7cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1c5c80:
    // 0x1c5c80: 0xe62002cc  swc1        $f0, 0x2CC($s1)
    ctx->pc = 0x1c5c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 716), bits); }
label_1c5c84:
    // 0x1c5c84: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c5c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c5c88:
    // 0x1c5c88: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1c5c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1c5c8c:
    // 0x1c5c8c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c5c8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c5c90:
    // 0x1c5c90: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c5c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c5c94:
    // 0x1c5c94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c5c94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c5c98:
    // 0x1c5c98: 0x3e00008  jr          $ra
label_1c5c9c:
    if (ctx->pc == 0x1C5C9Cu) {
        ctx->pc = 0x1C5C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C98u;
        // 0x1c5c9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5CA0u;
        goto label_1c5ca0;
    }
    ctx->pc = 0x1C5C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C98u;
        // 0x1c5c9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5CA0u;
label_1c5ca0:
    // 0x1c5ca0: 0x908302ec  lbu         $v1, 0x2EC($a0)
    ctx->pc = 0x1c5ca0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 748)));
label_1c5ca4:
    // 0x1c5ca4: 0x908202eb  lbu         $v0, 0x2EB($a0)
    ctx->pc = 0x1c5ca4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 747)));
label_1c5ca8:
    // 0x1c5ca8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1c5ca8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1c5cac:
    // 0x1c5cac: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1c5cb0:
    if (ctx->pc == 0x1C5CB0u) {
        ctx->pc = 0x1C5CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5CACu;
        // 0x1c5cb0: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5CB4u;
        goto label_1c5cb4;
    }
    ctx->pc = 0x1C5CACu;
    {
        const bool branch_taken_0x1c5cac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5CACu;
        // 0x1c5cb0: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5cac) {
            ctx->pc = 0x1C5CBCu;
            goto label_1c5cbc;
        }
    }
    ctx->pc = 0x1C5CB4u;
label_1c5cb4:
    // 0x1c5cb4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1c5cb8:
    if (ctx->pc == 0x1C5CB8u) {
        ctx->pc = 0x1C5CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5CB4u;
        // 0x1c5cb8: 0xa08202ec  sb          $v0, 0x2EC($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 748), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5CBCu;
        goto label_1c5cbc;
    }
    ctx->pc = 0x1C5CB4u;
    {
        const bool branch_taken_0x1c5cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5CB4u;
        // 0x1c5cb8: 0xa08202ec  sb          $v0, 0x2EC($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 748), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5cb4) {
            ctx->pc = 0x1C5CCCu;
            goto label_1c5ccc;
        }
    }
    ctx->pc = 0x1C5CBCu;
label_1c5cbc:
    // 0x1c5cbc: 0xa08002ec  sb          $zero, 0x2EC($a0)
    ctx->pc = 0x1c5cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 748), (uint8_t)GPR_U32(ctx, 0));
label_1c5cc0:
    // 0x1c5cc0: 0x908202e8  lbu         $v0, 0x2E8($a0)
    ctx->pc = 0x1c5cc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 744)));
label_1c5cc4:
    // 0x1c5cc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c5cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c5cc8:
    // 0x1c5cc8: 0xa08202e8  sb          $v0, 0x2E8($a0)
    ctx->pc = 0x1c5cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 744), (uint8_t)GPR_U32(ctx, 2));
label_1c5ccc:
    // 0x1c5ccc: 0x908302e8  lbu         $v1, 0x2E8($a0)
    ctx->pc = 0x1c5cccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 744)));
label_1c5cd0:
    // 0x1c5cd0: 0x908202ea  lbu         $v0, 0x2EA($a0)
    ctx->pc = 0x1c5cd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 746)));
label_1c5cd4:
    // 0x1c5cd4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1c5cd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1c5cd8:
    // 0x1c5cd8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1c5cdc:
    if (ctx->pc == 0x1C5CDCu) {
        ctx->pc = 0x1C5CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5CD8u;
        // 0x1c5cdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5CE0u;
        goto label_1c5ce0;
    }
    ctx->pc = 0x1C5CD8u;
    {
        const bool branch_taken_0x1c5cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5CD8u;
        // 0x1c5cdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5cd8) {
            ctx->pc = 0x1C5CECu;
            goto label_1c5cec;
        }
    }
    ctx->pc = 0x1C5CE0u;
label_1c5ce0:
    // 0x1c5ce0: 0x908302e9  lbu         $v1, 0x2E9($a0)
    ctx->pc = 0x1c5ce0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 745)));
label_1c5ce4:
    // 0x1c5ce4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c5ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c5ce8:
    // 0x1c5ce8: 0xa08302e8  sb          $v1, 0x2E8($a0)
    ctx->pc = 0x1c5ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 744), (uint8_t)GPR_U32(ctx, 3));
label_1c5cec:
    // 0x1c5cec: 0x3e00008  jr          $ra
label_1c5cf0:
    if (ctx->pc == 0x1C5CF0u) {
        ctx->pc = 0x1C5CF4u;
        goto label_1c5cf4;
    }
    ctx->pc = 0x1C5CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5CF4u;
label_1c5cf4:
    // 0x1c5cf4: 0x0  nop
    ctx->pc = 0x1c5cf4u;
    // NOP
label_1c5cf8:
    // 0x1c5cf8: 0x0  nop
    ctx->pc = 0x1c5cf8u;
    // NOP
label_1c5cfc:
    // 0x1c5cfc: 0x0  nop
    ctx->pc = 0x1c5cfcu;
    // NOP
label_1c5d00:
    // 0x1c5d00: 0x948802f2  lhu         $t0, 0x2F2($a0)
    ctx->pc = 0x1c5d00u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 754)));
label_1c5d04:
    // 0x1c5d04: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x1c5d04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c5d08:
    // 0x1c5d08: 0x948702ee  lhu         $a3, 0x2EE($a0)
    ctx->pc = 0x1c5d08u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 750)));
label_1c5d0c:
    // 0x1c5d0c: 0x948502f4  lhu         $a1, 0x2F4($a0)
    ctx->pc = 0x1c5d0cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 756)));
label_1c5d10:
    // 0x1c5d10: 0x948302f0  lhu         $v1, 0x2F0($a0)
    ctx->pc = 0x1c5d10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 752)));
label_1c5d14:
    // 0x1c5d14: 0x908602e8  lbu         $a2, 0x2E8($a0)
    ctx->pc = 0x1c5d14u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 744)));
label_1c5d18:
    // 0x1c5d18: 0x107001a  div         $zero, $t0, $a3
    ctx->pc = 0x1c5d18u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1c5d1c:
    // 0x1c5d1c: 0x0  nop
    ctx->pc = 0x1c5d1cu;
    // NOP
label_1c5d20:
    // 0x1c5d20: 0x0  nop
    ctx->pc = 0x1c5d20u;
    // NOP
label_1c5d24:
    // 0x1c5d24: 0x4012  mflo        $t0
    ctx->pc = 0x1c5d24u;
    SET_GPR_U64(ctx, 8, ctx->lo);
label_1c5d28:
    // 0x1c5d28: 0x70a3001a  div1        $zero, $a1, $v1
    ctx->pc = 0x1c5d28u;
    { int32_t divisor = GPR_S32(ctx, 3); int32_t dividend = GPR_S32(ctx, 5); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
label_1c5d2c:
    // 0x1c5d2c: 0x0  nop
    ctx->pc = 0x1c5d2cu;
    // NOP
label_1c5d30:
    // 0x1c5d30: 0x0  nop
    ctx->pc = 0x1c5d30u;
    // NOP
label_1c5d34:
    // 0x1c5d34: 0x70004812  mflo1       $t1
    ctx->pc = 0x1c5d34u;
    SET_GPR_U64(ctx, 9, ctx->lo1);
label_1c5d38:
    // 0x1c5d38: 0xc8001b  divu        $zero, $a2, $t0
    ctx->pc = 0x1c5d38u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
label_1c5d3c:
    // 0x1c5d3c: 0x12a1821  addu        $v1, $t1, $t2
    ctx->pc = 0x1c5d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_1c5d40:
    // 0x1c5d40: 0x0  nop
    ctx->pc = 0x1c5d40u;
    // NOP
label_1c5d44:
    // 0x1c5d44: 0x2810  mfhi        $a1
    ctx->pc = 0x1c5d44u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1c5d48:
    // 0x1c5d48: 0xc8001b  divu        $zero, $a2, $t0
    ctx->pc = 0x1c5d48u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
label_1c5d4c:
    // 0x1c5d4c: 0x30a7ffff  andi        $a3, $a1, 0xFFFF
    ctx->pc = 0x1c5d4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_1c5d50:
    // 0x1c5d50: 0x0  nop
    ctx->pc = 0x1c5d50u;
    // NOP
label_1c5d54:
    // 0x1c5d54: 0x2812  mflo        $a1
    ctx->pc = 0x1c5d54u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_1c5d58:
    // 0x1c5d58: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x1c5d58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_1c5d5c:
    // 0x1c5d5c: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x1c5d5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_1c5d60:
    // 0x1c5d60: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1c5d64:
    if (ctx->pc == 0x1C5D64u) {
        ctx->pc = 0x1C5D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D60u;
        // 0x1c5d64: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5D68u;
        goto label_1c5d68;
    }
    ctx->pc = 0x1C5D60u;
    {
        const bool branch_taken_0x1c5d60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D60u;
        // 0x1c5d64: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5d60) {
            ctx->pc = 0x1C5D6Cu;
            goto label_1c5d6c;
        }
    }
    ctx->pc = 0x1C5D68u;
label_1c5d68:
    // 0x1c5d68: 0x2526ffff  addiu       $a2, $t1, -0x1
    ctx->pc = 0x1c5d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_1c5d6c:
    // 0x1c5d6c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c5d6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c5d70:
    // 0x1c5d70: 0x5000004  bltz        $t0, . + 4 + (0x4 << 2)
label_1c5d74:
    if (ctx->pc == 0x1C5D74u) {
        ctx->pc = 0x1C5D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D70u;
        // 0x1c5d74: 0x82842  srl         $a1, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5D78u;
        goto label_1c5d78;
    }
    ctx->pc = 0x1C5D70u;
    {
        const bool branch_taken_0x1c5d70 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x1C5D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D70u;
        // 0x1c5d74: 0x82842  srl         $a1, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5d70) {
            ctx->pc = 0x1C5D84u;
            goto label_1c5d84;
        }
    }
    ctx->pc = 0x1C5D78u;
label_1c5d78:
    // 0x1c5d78: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1c5d78u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c5d7c:
    // 0x1c5d7c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c5d80:
    if (ctx->pc == 0x1C5D80u) {
        ctx->pc = 0x1C5D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D7Cu;
        // 0x1c5d80: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5D84u;
        goto label_1c5d84;
    }
    ctx->pc = 0x1C5D7Cu;
    {
        const bool branch_taken_0x1c5d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D7Cu;
        // 0x1c5d80: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5d7c) {
            ctx->pc = 0x1C5D9Cu;
            goto label_1c5d9c;
        }
    }
    ctx->pc = 0x1C5D84u;
label_1c5d84:
    // 0x1c5d84: 0x31030001  andi        $v1, $t0, 0x1
    ctx->pc = 0x1c5d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
label_1c5d88:
    // 0x1c5d88: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1c5d88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1c5d8c:
    // 0x1c5d8c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1c5d8cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c5d90:
    // 0x1c5d90: 0x0  nop
    ctx->pc = 0x1c5d90u;
    // NOP
label_1c5d94:
    // 0x1c5d94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c5d94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1c5d98:
    // 0x1c5d98: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1c5d98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1c5d9c:
    // 0x1c5d9c: 0x0  nop
    ctx->pc = 0x1c5d9cu;
    // NOP
label_1c5da0:
    // 0x1c5da0: 0x0  nop
    ctx->pc = 0x1c5da0u;
    // NOP
label_1c5da4:
    // 0x1c5da4: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x1c5da4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
label_1c5da8:
    // 0x1c5da8: 0x0  nop
    ctx->pc = 0x1c5da8u;
    // NOP
label_1c5dac:
    // 0x1c5dac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c5dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1c5db0:
    // 0x1c5db0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c5db0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c5db4:
    // 0x1c5db4: 0x5200004  bltz        $t1, . + 4 + (0x4 << 2)
label_1c5db8:
    if (ctx->pc == 0x1C5DB8u) {
        ctx->pc = 0x1C5DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5DB4u;
        // 0x1c5db8: 0x92842  srl         $a1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5DBCu;
        goto label_1c5dbc;
    }
    ctx->pc = 0x1C5DB4u;
    {
        const bool branch_taken_0x1c5db4 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x1C5DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5DB4u;
        // 0x1c5db8: 0x92842  srl         $a1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5db4) {
            ctx->pc = 0x1C5DC8u;
            goto label_1c5dc8;
        }
    }
    ctx->pc = 0x1C5DBCu;
label_1c5dbc:
    // 0x1c5dbc: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x1c5dbcu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c5dc0:
    // 0x1c5dc0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c5dc4:
    if (ctx->pc == 0x1C5DC4u) {
        ctx->pc = 0x1C5DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5DC0u;
        // 0x1c5dc4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5DC8u;
        goto label_1c5dc8;
    }
    ctx->pc = 0x1C5DC0u;
    {
        const bool branch_taken_0x1c5dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5DC0u;
        // 0x1c5dc4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5dc0) {
            ctx->pc = 0x1C5DE0u;
            goto label_1c5de0;
        }
    }
    ctx->pc = 0x1C5DC8u;
label_1c5dc8:
    // 0x1c5dc8: 0x31230001  andi        $v1, $t1, 0x1
    ctx->pc = 0x1c5dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
label_1c5dcc:
    // 0x1c5dcc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1c5dccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1c5dd0:
    // 0x1c5dd0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1c5dd0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c5dd4:
    // 0x1c5dd4: 0x0  nop
    ctx->pc = 0x1c5dd4u;
    // NOP
label_1c5dd8:
    // 0x1c5dd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c5dd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1c5ddc:
    // 0x1c5ddc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1c5ddcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1c5de0:
    // 0x1c5de0: 0x0  nop
    ctx->pc = 0x1c5de0u;
    // NOP
label_1c5de4:
    // 0x1c5de4: 0x0  nop
    ctx->pc = 0x1c5de4u;
    // NOP
label_1c5de8:
    // 0x1c5de8: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x1c5de8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[0];
label_1c5dec:
    // 0x1c5dec: 0x0  nop
    ctx->pc = 0x1c5decu;
    // NOP
label_1c5df0:
    // 0x1c5df0: 0x3c033b00  lui         $v1, 0x3B00
    ctx->pc = 0x1c5df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15104 << 16));
label_1c5df4:
    // 0x1c5df4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c5df4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c5df8:
    // 0x1c5df8: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
label_1c5dfc:
    if (ctx->pc == 0x1C5DFCu) {
        ctx->pc = 0x1C5DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5DF8u;
        // 0x1c5dfc: 0x72842  srl         $a1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5E00u;
        goto label_1c5e00;
    }
    ctx->pc = 0x1C5DF8u;
    {
        const bool branch_taken_0x1c5df8 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x1C5DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5DF8u;
        // 0x1c5dfc: 0x72842  srl         $a1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5df8) {
            ctx->pc = 0x1C5E0Cu;
            goto label_1c5e0c;
        }
    }
    ctx->pc = 0x1C5E00u;
label_1c5e00:
    // 0x1c5e00: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1c5e00u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c5e04:
    // 0x1c5e04: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c5e08:
    if (ctx->pc == 0x1C5E08u) {
        ctx->pc = 0x1C5E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E04u;
        // 0x1c5e08: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5E0Cu;
        goto label_1c5e0c;
    }
    ctx->pc = 0x1C5E04u;
    {
        const bool branch_taken_0x1c5e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E04u;
        // 0x1c5e08: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e04) {
            ctx->pc = 0x1C5E24u;
            goto label_1c5e24;
        }
    }
    ctx->pc = 0x1C5E0Cu;
label_1c5e0c:
    // 0x1c5e0c: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x1c5e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_1c5e10:
    // 0x1c5e10: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1c5e10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1c5e14:
    // 0x1c5e14: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1c5e14u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c5e18:
    // 0x1c5e18: 0x0  nop
    ctx->pc = 0x1c5e18u;
    // NOP
label_1c5e1c:
    // 0x1c5e1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c5e1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1c5e20:
    // 0x1c5e20: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1c5e20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1c5e24:
    // 0x1c5e24: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1c5e24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1c5e28:
    // 0x1c5e28: 0x46000900  add.s       $f4, $f1, $f0
    ctx->pc = 0x1c5e28u;
    ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c5e2c:
    // 0x1c5e2c: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
label_1c5e30:
    if (ctx->pc == 0x1C5E30u) {
        ctx->pc = 0x1C5E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E2Cu;
        // 0x1c5e30: 0xe48402b0  swc1        $f4, 0x2B0($a0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 688), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5E34u;
        goto label_1c5e34;
    }
    ctx->pc = 0x1C5E2Cu;
    {
        const bool branch_taken_0x1c5e2c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1C5E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E2Cu;
        // 0x1c5e30: 0xe48402b0  swc1        $f4, 0x2B0($a0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 688), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e2c) {
            ctx->pc = 0x1C5E40u;
            goto label_1c5e40;
        }
    }
    ctx->pc = 0x1C5E34u;
label_1c5e34:
    // 0x1c5e34: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1c5e34u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c5e38:
    // 0x1c5e38: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c5e3c:
    if (ctx->pc == 0x1C5E3Cu) {
        ctx->pc = 0x1C5E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E38u;
        // 0x1c5e3c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5E40u;
        goto label_1c5e40;
    }
    ctx->pc = 0x1C5E38u;
    {
        const bool branch_taken_0x1c5e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E38u;
        // 0x1c5e3c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e38) {
            ctx->pc = 0x1C5E5Cu;
            { ctx->pc = 0x1c5e5c; return; }
        }
    }
    ctx->pc = 0x1C5E40u;
label_1c5e40:
    // 0x1c5e40: 0x62842  srl         $a1, $a2, 1
    ctx->pc = 0x1c5e40u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_1c5e44:
    // 0x1c5e44: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x1c5e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_1c5e48:
    // 0x1c5e48: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1c5e48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1c5e4c:
    // 0x1c5e4c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1c5e4cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c5e50:
    // 0x1c5e50: 0x0  nop
    ctx->pc = 0x1c5e50u;
    // NOP
label_1c5e54:
    // 0x1c5e54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c5e54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    ctx->pc = 0x1c5e58u;
    return;
}
