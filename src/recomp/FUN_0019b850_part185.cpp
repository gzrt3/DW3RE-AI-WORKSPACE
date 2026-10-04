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


void FUN_0019b850_part185(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1f55d0u: goto label_1f55d0;
        case 0x1f55d4u: goto label_1f55d4;
        case 0x1f55d8u: goto label_1f55d8;
        case 0x1f55dcu: goto label_1f55dc;
        case 0x1f55e0u: goto label_1f55e0;
        case 0x1f55e4u: goto label_1f55e4;
        case 0x1f55e8u: goto label_1f55e8;
        case 0x1f55ecu: goto label_1f55ec;
        case 0x1f55f0u: goto label_1f55f0;
        case 0x1f55f4u: goto label_1f55f4;
        case 0x1f55f8u: goto label_1f55f8;
        case 0x1f55fcu: goto label_1f55fc;
        case 0x1f5600u: goto label_1f5600;
        case 0x1f5604u: goto label_1f5604;
        case 0x1f5608u: goto label_1f5608;
        case 0x1f560cu: goto label_1f560c;
        case 0x1f5610u: goto label_1f5610;
        case 0x1f5614u: goto label_1f5614;
        case 0x1f5618u: goto label_1f5618;
        case 0x1f561cu: goto label_1f561c;
        case 0x1f5620u: goto label_1f5620;
        case 0x1f5624u: goto label_1f5624;
        case 0x1f5628u: goto label_1f5628;
        case 0x1f562cu: goto label_1f562c;
        case 0x1f5630u: goto label_1f5630;
        case 0x1f5634u: goto label_1f5634;
        case 0x1f5638u: goto label_1f5638;
        case 0x1f563cu: goto label_1f563c;
        case 0x1f5640u: goto label_1f5640;
        case 0x1f5644u: goto label_1f5644;
        case 0x1f5648u: goto label_1f5648;
        case 0x1f564cu: goto label_1f564c;
        case 0x1f5650u: goto label_1f5650;
        case 0x1f5654u: goto label_1f5654;
        case 0x1f5658u: goto label_1f5658;
        case 0x1f565cu: goto label_1f565c;
        case 0x1f5660u: goto label_1f5660;
        case 0x1f5664u: goto label_1f5664;
        case 0x1f5668u: goto label_1f5668;
        case 0x1f566cu: goto label_1f566c;
        case 0x1f5670u: goto label_1f5670;
        case 0x1f5674u: goto label_1f5674;
        case 0x1f5678u: goto label_1f5678;
        case 0x1f567cu: goto label_1f567c;
        case 0x1f5680u: goto label_1f5680;
        case 0x1f5684u: goto label_1f5684;
        case 0x1f5688u: goto label_1f5688;
        case 0x1f568cu: goto label_1f568c;
        case 0x1f5690u: goto label_1f5690;
        case 0x1f5694u: goto label_1f5694;
        case 0x1f5698u: goto label_1f5698;
        case 0x1f569cu: goto label_1f569c;
        case 0x1f56a0u: goto label_1f56a0;
        case 0x1f56a4u: goto label_1f56a4;
        case 0x1f56a8u: goto label_1f56a8;
        case 0x1f56acu: goto label_1f56ac;
        case 0x1f56b0u: goto label_1f56b0;
        case 0x1f56b4u: goto label_1f56b4;
        case 0x1f56b8u: goto label_1f56b8;
        case 0x1f56bcu: goto label_1f56bc;
        case 0x1f56c0u: goto label_1f56c0;
        case 0x1f56c4u: goto label_1f56c4;
        case 0x1f56c8u: goto label_1f56c8;
        case 0x1f56ccu: goto label_1f56cc;
        case 0x1f56d0u: goto label_1f56d0;
        case 0x1f56d4u: goto label_1f56d4;
        case 0x1f56d8u: goto label_1f56d8;
        case 0x1f56dcu: goto label_1f56dc;
        case 0x1f56e0u: goto label_1f56e0;
        case 0x1f56e4u: goto label_1f56e4;
        case 0x1f56e8u: goto label_1f56e8;
        case 0x1f56ecu: goto label_1f56ec;
        case 0x1f56f0u: goto label_1f56f0;
        case 0x1f56f4u: goto label_1f56f4;
        case 0x1f56f8u: goto label_1f56f8;
        case 0x1f56fcu: goto label_1f56fc;
        case 0x1f5700u: goto label_1f5700;
        case 0x1f5704u: goto label_1f5704;
        case 0x1f5708u: goto label_1f5708;
        case 0x1f570cu: goto label_1f570c;
        case 0x1f5710u: goto label_1f5710;
        case 0x1f5714u: goto label_1f5714;
        case 0x1f5718u: goto label_1f5718;
        case 0x1f571cu: goto label_1f571c;
        case 0x1f5720u: goto label_1f5720;
        case 0x1f5724u: goto label_1f5724;
        case 0x1f5728u: goto label_1f5728;
        case 0x1f572cu: goto label_1f572c;
        case 0x1f5730u: goto label_1f5730;
        case 0x1f5734u: goto label_1f5734;
        case 0x1f5738u: goto label_1f5738;
        case 0x1f573cu: goto label_1f573c;
        case 0x1f5740u: goto label_1f5740;
        case 0x1f5744u: goto label_1f5744;
        case 0x1f5748u: goto label_1f5748;
        case 0x1f574cu: goto label_1f574c;
        case 0x1f5750u: goto label_1f5750;
        case 0x1f5754u: goto label_1f5754;
        case 0x1f5758u: goto label_1f5758;
        case 0x1f575cu: goto label_1f575c;
        case 0x1f5760u: goto label_1f5760;
        case 0x1f5764u: goto label_1f5764;
        case 0x1f5768u: goto label_1f5768;
        case 0x1f576cu: goto label_1f576c;
        case 0x1f5770u: goto label_1f5770;
        case 0x1f5774u: goto label_1f5774;
        case 0x1f5778u: goto label_1f5778;
        case 0x1f577cu: goto label_1f577c;
        case 0x1f5780u: goto label_1f5780;
        case 0x1f5784u: goto label_1f5784;
        case 0x1f5788u: goto label_1f5788;
        case 0x1f578cu: goto label_1f578c;
        case 0x1f5790u: goto label_1f5790;
        case 0x1f5794u: goto label_1f5794;
        case 0x1f5798u: goto label_1f5798;
        case 0x1f579cu: goto label_1f579c;
        case 0x1f57a0u: goto label_1f57a0;
        case 0x1f57a4u: goto label_1f57a4;
        case 0x1f57a8u: goto label_1f57a8;
        case 0x1f57acu: goto label_1f57ac;
        case 0x1f57b0u: goto label_1f57b0;
        case 0x1f57b4u: goto label_1f57b4;
        case 0x1f57b8u: goto label_1f57b8;
        case 0x1f57bcu: goto label_1f57bc;
        case 0x1f57c0u: goto label_1f57c0;
        case 0x1f57c4u: goto label_1f57c4;
        case 0x1f57c8u: goto label_1f57c8;
        case 0x1f57ccu: goto label_1f57cc;
        case 0x1f57d0u: goto label_1f57d0;
        case 0x1f57d4u: goto label_1f57d4;
        case 0x1f57d8u: goto label_1f57d8;
        case 0x1f57dcu: goto label_1f57dc;
        case 0x1f57e0u: goto label_1f57e0;
        case 0x1f57e4u: goto label_1f57e4;
        case 0x1f57e8u: goto label_1f57e8;
        case 0x1f57ecu: goto label_1f57ec;
        case 0x1f57f0u: goto label_1f57f0;
        case 0x1f57f4u: goto label_1f57f4;
        case 0x1f57f8u: goto label_1f57f8;
        case 0x1f57fcu: goto label_1f57fc;
        case 0x1f5800u: goto label_1f5800;
        case 0x1f5804u: goto label_1f5804;
        case 0x1f5808u: goto label_1f5808;
        case 0x1f580cu: goto label_1f580c;
        case 0x1f5810u: goto label_1f5810;
        case 0x1f5814u: goto label_1f5814;
        case 0x1f5818u: goto label_1f5818;
        case 0x1f581cu: goto label_1f581c;
        case 0x1f5820u: goto label_1f5820;
        case 0x1f5824u: goto label_1f5824;
        case 0x1f5828u: goto label_1f5828;
        case 0x1f582cu: goto label_1f582c;
        case 0x1f5830u: goto label_1f5830;
        case 0x1f5834u: goto label_1f5834;
        case 0x1f5838u: goto label_1f5838;
        case 0x1f583cu: goto label_1f583c;
        case 0x1f5840u: goto label_1f5840;
        case 0x1f5844u: goto label_1f5844;
        case 0x1f5848u: goto label_1f5848;
        case 0x1f584cu: goto label_1f584c;
        case 0x1f5850u: goto label_1f5850;
        case 0x1f5854u: goto label_1f5854;
        case 0x1f5858u: goto label_1f5858;
        case 0x1f585cu: goto label_1f585c;
        case 0x1f5860u: goto label_1f5860;
        case 0x1f5864u: goto label_1f5864;
        case 0x1f5868u: goto label_1f5868;
        case 0x1f586cu: goto label_1f586c;
        case 0x1f5870u: goto label_1f5870;
        case 0x1f5874u: goto label_1f5874;
        case 0x1f5878u: goto label_1f5878;
        case 0x1f587cu: goto label_1f587c;
        case 0x1f5880u: goto label_1f5880;
        case 0x1f5884u: goto label_1f5884;
        case 0x1f5888u: goto label_1f5888;
        case 0x1f588cu: goto label_1f588c;
        case 0x1f5890u: goto label_1f5890;
        case 0x1f5894u: goto label_1f5894;
        case 0x1f5898u: goto label_1f5898;
        case 0x1f589cu: goto label_1f589c;
        case 0x1f58a0u: goto label_1f58a0;
        case 0x1f58a4u: goto label_1f58a4;
        case 0x1f58a8u: goto label_1f58a8;
        case 0x1f58acu: goto label_1f58ac;
        case 0x1f58b0u: goto label_1f58b0;
        case 0x1f58b4u: goto label_1f58b4;
        case 0x1f58b8u: goto label_1f58b8;
        case 0x1f58bcu: goto label_1f58bc;
        case 0x1f58c0u: goto label_1f58c0;
        case 0x1f58c4u: goto label_1f58c4;
        case 0x1f58c8u: goto label_1f58c8;
        case 0x1f58ccu: goto label_1f58cc;
        case 0x1f58d0u: goto label_1f58d0;
        case 0x1f58d4u: goto label_1f58d4;
        case 0x1f58d8u: goto label_1f58d8;
        case 0x1f58dcu: goto label_1f58dc;
        case 0x1f58e0u: goto label_1f58e0;
        case 0x1f58e4u: goto label_1f58e4;
        case 0x1f58e8u: goto label_1f58e8;
        case 0x1f58ecu: goto label_1f58ec;
        case 0x1f58f0u: goto label_1f58f0;
        case 0x1f58f4u: goto label_1f58f4;
        case 0x1f58f8u: goto label_1f58f8;
        case 0x1f58fcu: goto label_1f58fc;
        case 0x1f5900u: goto label_1f5900;
        case 0x1f5904u: goto label_1f5904;
        case 0x1f5908u: goto label_1f5908;
        case 0x1f590cu: goto label_1f590c;
        case 0x1f5910u: goto label_1f5910;
        case 0x1f5914u: goto label_1f5914;
        case 0x1f5918u: goto label_1f5918;
        case 0x1f591cu: goto label_1f591c;
        case 0x1f5920u: goto label_1f5920;
        case 0x1f5924u: goto label_1f5924;
        case 0x1f5928u: goto label_1f5928;
        case 0x1f592cu: goto label_1f592c;
        case 0x1f5930u: goto label_1f5930;
        case 0x1f5934u: goto label_1f5934;
        case 0x1f5938u: goto label_1f5938;
        case 0x1f593cu: goto label_1f593c;
        case 0x1f5940u: goto label_1f5940;
        case 0x1f5944u: goto label_1f5944;
        case 0x1f5948u: goto label_1f5948;
        case 0x1f594cu: goto label_1f594c;
        case 0x1f5950u: goto label_1f5950;
        case 0x1f5954u: goto label_1f5954;
        case 0x1f5958u: goto label_1f5958;
        case 0x1f595cu: goto label_1f595c;
        case 0x1f5960u: goto label_1f5960;
        case 0x1f5964u: goto label_1f5964;
        case 0x1f5968u: goto label_1f5968;
        case 0x1f596cu: goto label_1f596c;
        case 0x1f5970u: goto label_1f5970;
        case 0x1f5974u: goto label_1f5974;
        case 0x1f5978u: goto label_1f5978;
        case 0x1f597cu: goto label_1f597c;
        case 0x1f5980u: goto label_1f5980;
        case 0x1f5984u: goto label_1f5984;
        case 0x1f5988u: goto label_1f5988;
        case 0x1f598cu: goto label_1f598c;
        case 0x1f5990u: goto label_1f5990;
        case 0x1f5994u: goto label_1f5994;
        case 0x1f5998u: goto label_1f5998;
        case 0x1f599cu: goto label_1f599c;
        case 0x1f59a0u: goto label_1f59a0;
        case 0x1f59a4u: goto label_1f59a4;
        case 0x1f59a8u: goto label_1f59a8;
        case 0x1f59acu: goto label_1f59ac;
        case 0x1f59b0u: goto label_1f59b0;
        case 0x1f59b4u: goto label_1f59b4;
        case 0x1f59b8u: goto label_1f59b8;
        case 0x1f59bcu: goto label_1f59bc;
        case 0x1f59c0u: goto label_1f59c0;
        case 0x1f59c4u: goto label_1f59c4;
        case 0x1f59c8u: goto label_1f59c8;
        case 0x1f59ccu: goto label_1f59cc;
        case 0x1f59d0u: goto label_1f59d0;
        case 0x1f59d4u: goto label_1f59d4;
        case 0x1f59d8u: goto label_1f59d8;
        case 0x1f59dcu: goto label_1f59dc;
        case 0x1f59e0u: goto label_1f59e0;
        case 0x1f59e4u: goto label_1f59e4;
        case 0x1f59e8u: goto label_1f59e8;
        case 0x1f59ecu: goto label_1f59ec;
        case 0x1f59f0u: goto label_1f59f0;
        case 0x1f59f4u: goto label_1f59f4;
        case 0x1f59f8u: goto label_1f59f8;
        case 0x1f59fcu: goto label_1f59fc;
        case 0x1f5a00u: goto label_1f5a00;
        case 0x1f5a04u: goto label_1f5a04;
        case 0x1f5a08u: goto label_1f5a08;
        case 0x1f5a0cu: goto label_1f5a0c;
        case 0x1f5a10u: goto label_1f5a10;
        case 0x1f5a14u: goto label_1f5a14;
        case 0x1f5a18u: goto label_1f5a18;
        case 0x1f5a1cu: goto label_1f5a1c;
        case 0x1f5a20u: goto label_1f5a20;
        case 0x1f5a24u: goto label_1f5a24;
        case 0x1f5a28u: goto label_1f5a28;
        case 0x1f5a2cu: goto label_1f5a2c;
        case 0x1f5a30u: goto label_1f5a30;
        case 0x1f5a34u: goto label_1f5a34;
        case 0x1f5a38u: goto label_1f5a38;
        case 0x1f5a3cu: goto label_1f5a3c;
        case 0x1f5a40u: goto label_1f5a40;
        case 0x1f5a44u: goto label_1f5a44;
        case 0x1f5a48u: goto label_1f5a48;
        case 0x1f5a4cu: goto label_1f5a4c;
        case 0x1f5a50u: goto label_1f5a50;
        case 0x1f5a54u: goto label_1f5a54;
        case 0x1f5a58u: goto label_1f5a58;
        case 0x1f5a5cu: goto label_1f5a5c;
        case 0x1f5a60u: goto label_1f5a60;
        case 0x1f5a64u: goto label_1f5a64;
        case 0x1f5a68u: goto label_1f5a68;
        case 0x1f5a6cu: goto label_1f5a6c;
        case 0x1f5a70u: goto label_1f5a70;
        case 0x1f5a74u: goto label_1f5a74;
        case 0x1f5a78u: goto label_1f5a78;
        case 0x1f5a7cu: goto label_1f5a7c;
        case 0x1f5a80u: goto label_1f5a80;
        case 0x1f5a84u: goto label_1f5a84;
        case 0x1f5a88u: goto label_1f5a88;
        case 0x1f5a8cu: goto label_1f5a8c;
        case 0x1f5a90u: goto label_1f5a90;
        case 0x1f5a94u: goto label_1f5a94;
        case 0x1f5a98u: goto label_1f5a98;
        case 0x1f5a9cu: goto label_1f5a9c;
        case 0x1f5aa0u: goto label_1f5aa0;
        case 0x1f5aa4u: goto label_1f5aa4;
        case 0x1f5aa8u: goto label_1f5aa8;
        case 0x1f5aacu: goto label_1f5aac;
        case 0x1f5ab0u: goto label_1f5ab0;
        case 0x1f5ab4u: goto label_1f5ab4;
        case 0x1f5ab8u: goto label_1f5ab8;
        case 0x1f5abcu: goto label_1f5abc;
        case 0x1f5ac0u: goto label_1f5ac0;
        case 0x1f5ac4u: goto label_1f5ac4;
        case 0x1f5ac8u: goto label_1f5ac8;
        case 0x1f5accu: goto label_1f5acc;
        case 0x1f5ad0u: goto label_1f5ad0;
        case 0x1f5ad4u: goto label_1f5ad4;
        case 0x1f5ad8u: goto label_1f5ad8;
        case 0x1f5adcu: goto label_1f5adc;
        case 0x1f5ae0u: goto label_1f5ae0;
        case 0x1f5ae4u: goto label_1f5ae4;
        case 0x1f5ae8u: goto label_1f5ae8;
        case 0x1f5aecu: goto label_1f5aec;
        case 0x1f5af0u: goto label_1f5af0;
        case 0x1f5af4u: goto label_1f5af4;
        case 0x1f5af8u: goto label_1f5af8;
        case 0x1f5afcu: goto label_1f5afc;
        case 0x1f5b00u: goto label_1f5b00;
        case 0x1f5b04u: goto label_1f5b04;
        case 0x1f5b08u: goto label_1f5b08;
        case 0x1f5b0cu: goto label_1f5b0c;
        case 0x1f5b10u: goto label_1f5b10;
        case 0x1f5b14u: goto label_1f5b14;
        case 0x1f5b18u: goto label_1f5b18;
        case 0x1f5b1cu: goto label_1f5b1c;
        case 0x1f5b20u: goto label_1f5b20;
        case 0x1f5b24u: goto label_1f5b24;
        case 0x1f5b28u: goto label_1f5b28;
        case 0x1f5b2cu: goto label_1f5b2c;
        case 0x1f5b30u: goto label_1f5b30;
        case 0x1f5b34u: goto label_1f5b34;
        case 0x1f5b38u: goto label_1f5b38;
        case 0x1f5b3cu: goto label_1f5b3c;
        case 0x1f5b40u: goto label_1f5b40;
        case 0x1f5b44u: goto label_1f5b44;
        case 0x1f5b48u: goto label_1f5b48;
        case 0x1f5b4cu: goto label_1f5b4c;
        case 0x1f5b50u: goto label_1f5b50;
        case 0x1f5b54u: goto label_1f5b54;
        case 0x1f5b58u: goto label_1f5b58;
        case 0x1f5b5cu: goto label_1f5b5c;
        case 0x1f5b60u: goto label_1f5b60;
        case 0x1f5b64u: goto label_1f5b64;
        case 0x1f5b68u: goto label_1f5b68;
        case 0x1f5b6cu: goto label_1f5b6c;
        case 0x1f5b70u: goto label_1f5b70;
        case 0x1f5b74u: goto label_1f5b74;
        case 0x1f5b78u: goto label_1f5b78;
        case 0x1f5b7cu: goto label_1f5b7c;
        case 0x1f5b80u: goto label_1f5b80;
        case 0x1f5b84u: goto label_1f5b84;
        case 0x1f5b88u: goto label_1f5b88;
        case 0x1f5b8cu: goto label_1f5b8c;
        case 0x1f5b90u: goto label_1f5b90;
        case 0x1f5b94u: goto label_1f5b94;
        case 0x1f5b98u: goto label_1f5b98;
        case 0x1f5b9cu: goto label_1f5b9c;
        case 0x1f5ba0u: goto label_1f5ba0;
        case 0x1f5ba4u: goto label_1f5ba4;
        case 0x1f5ba8u: goto label_1f5ba8;
        case 0x1f5bacu: goto label_1f5bac;
        case 0x1f5bb0u: goto label_1f5bb0;
        case 0x1f5bb4u: goto label_1f5bb4;
        case 0x1f5bb8u: goto label_1f5bb8;
        case 0x1f5bbcu: goto label_1f5bbc;
        case 0x1f5bc0u: goto label_1f5bc0;
        case 0x1f5bc4u: goto label_1f5bc4;
        case 0x1f5bc8u: goto label_1f5bc8;
        case 0x1f5bccu: goto label_1f5bcc;
        case 0x1f5bd0u: goto label_1f5bd0;
        case 0x1f5bd4u: goto label_1f5bd4;
        case 0x1f5bd8u: goto label_1f5bd8;
        case 0x1f5bdcu: goto label_1f5bdc;
        case 0x1f5be0u: goto label_1f5be0;
        case 0x1f5be4u: goto label_1f5be4;
        case 0x1f5be8u: goto label_1f5be8;
        case 0x1f5becu: goto label_1f5bec;
        case 0x1f5bf0u: goto label_1f5bf0;
        case 0x1f5bf4u: goto label_1f5bf4;
        case 0x1f5bf8u: goto label_1f5bf8;
        case 0x1f5bfcu: goto label_1f5bfc;
        case 0x1f5c00u: goto label_1f5c00;
        case 0x1f5c04u: goto label_1f5c04;
        case 0x1f5c08u: goto label_1f5c08;
        case 0x1f5c0cu: goto label_1f5c0c;
        case 0x1f5c10u: goto label_1f5c10;
        case 0x1f5c14u: goto label_1f5c14;
        case 0x1f5c18u: goto label_1f5c18;
        case 0x1f5c1cu: goto label_1f5c1c;
        case 0x1f5c20u: goto label_1f5c20;
        case 0x1f5c24u: goto label_1f5c24;
        case 0x1f5c28u: goto label_1f5c28;
        case 0x1f5c2cu: goto label_1f5c2c;
        case 0x1f5c30u: goto label_1f5c30;
        case 0x1f5c34u: goto label_1f5c34;
        case 0x1f5c38u: goto label_1f5c38;
        case 0x1f5c3cu: goto label_1f5c3c;
        case 0x1f5c40u: goto label_1f5c40;
        case 0x1f5c44u: goto label_1f5c44;
        case 0x1f5c48u: goto label_1f5c48;
        case 0x1f5c4cu: goto label_1f5c4c;
        case 0x1f5c50u: goto label_1f5c50;
        case 0x1f5c54u: goto label_1f5c54;
        case 0x1f5c58u: goto label_1f5c58;
        case 0x1f5c5cu: goto label_1f5c5c;
        case 0x1f5c60u: goto label_1f5c60;
        case 0x1f5c64u: goto label_1f5c64;
        case 0x1f5c68u: goto label_1f5c68;
        case 0x1f5c6cu: goto label_1f5c6c;
        case 0x1f5c70u: goto label_1f5c70;
        case 0x1f5c74u: goto label_1f5c74;
        case 0x1f5c78u: goto label_1f5c78;
        case 0x1f5c7cu: goto label_1f5c7c;
        case 0x1f5c80u: goto label_1f5c80;
        case 0x1f5c84u: goto label_1f5c84;
        case 0x1f5c88u: goto label_1f5c88;
        case 0x1f5c8cu: goto label_1f5c8c;
        case 0x1f5c90u: goto label_1f5c90;
        case 0x1f5c94u: goto label_1f5c94;
        case 0x1f5c98u: goto label_1f5c98;
        case 0x1f5c9cu: goto label_1f5c9c;
        case 0x1f5ca0u: goto label_1f5ca0;
        case 0x1f5ca4u: goto label_1f5ca4;
        case 0x1f5ca8u: goto label_1f5ca8;
        case 0x1f5cacu: goto label_1f5cac;
        case 0x1f5cb0u: goto label_1f5cb0;
        case 0x1f5cb4u: goto label_1f5cb4;
        case 0x1f5cb8u: goto label_1f5cb8;
        case 0x1f5cbcu: goto label_1f5cbc;
        case 0x1f5cc0u: goto label_1f5cc0;
        case 0x1f5cc4u: goto label_1f5cc4;
        case 0x1f5cc8u: goto label_1f5cc8;
        case 0x1f5cccu: goto label_1f5ccc;
        case 0x1f5cd0u: goto label_1f5cd0;
        case 0x1f5cd4u: goto label_1f5cd4;
        case 0x1f5cd8u: goto label_1f5cd8;
        case 0x1f5cdcu: goto label_1f5cdc;
        case 0x1f5ce0u: goto label_1f5ce0;
        case 0x1f5ce4u: goto label_1f5ce4;
        case 0x1f5ce8u: goto label_1f5ce8;
        case 0x1f5cecu: goto label_1f5cec;
        case 0x1f5cf0u: goto label_1f5cf0;
        case 0x1f5cf4u: goto label_1f5cf4;
        case 0x1f5cf8u: goto label_1f5cf8;
        case 0x1f5cfcu: goto label_1f5cfc;
        case 0x1f5d00u: goto label_1f5d00;
        case 0x1f5d04u: goto label_1f5d04;
        case 0x1f5d08u: goto label_1f5d08;
        case 0x1f5d0cu: goto label_1f5d0c;
        case 0x1f5d10u: goto label_1f5d10;
        case 0x1f5d14u: goto label_1f5d14;
        case 0x1f5d18u: goto label_1f5d18;
        case 0x1f5d1cu: goto label_1f5d1c;
        case 0x1f5d20u: goto label_1f5d20;
        case 0x1f5d24u: goto label_1f5d24;
        case 0x1f5d28u: goto label_1f5d28;
        case 0x1f5d2cu: goto label_1f5d2c;
        case 0x1f5d30u: goto label_1f5d30;
        case 0x1f5d34u: goto label_1f5d34;
        case 0x1f5d38u: goto label_1f5d38;
        case 0x1f5d3cu: goto label_1f5d3c;
        case 0x1f5d40u: goto label_1f5d40;
        case 0x1f5d44u: goto label_1f5d44;
        case 0x1f5d48u: goto label_1f5d48;
        case 0x1f5d4cu: goto label_1f5d4c;
        case 0x1f5d50u: goto label_1f5d50;
        case 0x1f5d54u: goto label_1f5d54;
        case 0x1f5d58u: goto label_1f5d58;
        case 0x1f5d5cu: goto label_1f5d5c;
        case 0x1f5d60u: goto label_1f5d60;
        case 0x1f5d64u: goto label_1f5d64;
        case 0x1f5d68u: goto label_1f5d68;
        case 0x1f5d6cu: goto label_1f5d6c;
        case 0x1f5d70u: goto label_1f5d70;
        case 0x1f5d74u: goto label_1f5d74;
        case 0x1f5d78u: goto label_1f5d78;
        case 0x1f5d7cu: goto label_1f5d7c;
        case 0x1f5d80u: goto label_1f5d80;
        case 0x1f5d84u: goto label_1f5d84;
        case 0x1f5d88u: goto label_1f5d88;
        case 0x1f5d8cu: goto label_1f5d8c;
        case 0x1f5d90u: goto label_1f5d90;
        case 0x1f5d94u: goto label_1f5d94;
        case 0x1f5d98u: goto label_1f5d98;
        case 0x1f5d9cu: goto label_1f5d9c;
        default: return;
    }

label_1f55d0:
    // 0x1f55d0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1f55d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1f55d4:
    // 0x1f55d4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1f55d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f55d8:
    // 0x1f55d8: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1f55d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1f55dc:
    // 0x1f55dc: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1f55dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1f55e0:
    // 0x1f55e0: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x1f55e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1f55e4:
    // 0x1f55e4: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1f55e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1f55e8:
    // 0x1f55e8: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x1f55e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1f55ec:
    // 0x1f55ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f55ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f55f0:
    // 0x1f55f0: 0x24060113  addiu       $a2, $zero, 0x113
    ctx->pc = 0x1f55f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
label_1f55f4:
    // 0x1f55f4: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x1f55f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1f55f8:
    // 0x1f55f8: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x1f55f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1f55fc:
    // 0x1f55fc: 0xc07c110  jal         func_1F0440
label_1f5600:
    if (ctx->pc == 0x1F5600u) {
        ctx->pc = 0x1F5600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F55FCu;
        // 0x1f5600: 0x240b0010  addiu       $t3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5604u;
        goto label_1f5604;
    }
    ctx->pc = 0x1F55FCu;
    SET_GPR_U32(ctx, 31, 0x1F5604u);
    ctx->pc = 0x1F5600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F55FCu;
    // 0x1f5600: 0x240b0010  addiu       $t3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0440u;
    { ctx->pc = 0x1f0440; return; }
    ctx->pc = 0x1F5604u;
label_1f5604:
    // 0x1f5604: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x1f5604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1f5608:
    // 0x1f5608: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1f5608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f560c:
    // 0x1f560c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1f560cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1f5610:
    // 0x1f5610: 0x26640380  addiu       $a0, $s3, 0x380
    ctx->pc = 0x1f5610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 896));
label_1f5614:
    // 0x1f5614: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1f5614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1f5618:
    // 0x1f5618: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1f5618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1f561c:
    // 0x1f561c: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1f561cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1f5620:
    // 0x1f5620: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f5620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5624:
    // 0x1f5624: 0x2406011f  addiu       $a2, $zero, 0x11F
    ctx->pc = 0x1f5624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
label_1f5628:
    // 0x1f5628: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x1f5628u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1f562c:
    // 0x1f562c: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x1f562cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1f5630:
    // 0x1f5630: 0x24090033  addiu       $t1, $zero, 0x33
    ctx->pc = 0x1f5630u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_1f5634:
    // 0x1f5634: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x1f5634u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1f5638:
    // 0x1f5638: 0xc07c110  jal         func_1F0440
label_1f563c:
    if (ctx->pc == 0x1F563Cu) {
        ctx->pc = 0x1F563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5638u;
        // 0x1f563c: 0x240b0010  addiu       $t3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5640u;
        goto label_1f5640;
    }
    ctx->pc = 0x1F5638u;
    SET_GPR_U32(ctx, 31, 0x1F5640u);
    ctx->pc = 0x1F563Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5638u;
    // 0x1f563c: 0x240b0010  addiu       $t3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0440u;
    { ctx->pc = 0x1f0440; return; }
    ctx->pc = 0x1F5640u;
label_1f5640:
    // 0x1f5640: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f5640u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5644:
    // 0x1f5644: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f5644u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5648:
    // 0x1f5648: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1f5648u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f564c:
    // 0x1f564c: 0x0  nop
    ctx->pc = 0x1f564cu;
    // NOP
label_1f5650:
    // 0x1f5650: 0xc070834  jal         func_1C20D0
label_1f5654:
    if (ctx->pc == 0x1F5654u) {
        ctx->pc = 0x1F5654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5650u;
        // 0x1f5654: 0x2404002f  addiu       $a0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5658u;
        goto label_1f5658;
    }
    ctx->pc = 0x1F5650u;
    SET_GPR_U32(ctx, 31, 0x1F5658u);
    ctx->pc = 0x1F5654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5650u;
    // 0x1f5654: 0x2404002f  addiu       $a0, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1F5658u;
label_1f5658:
    // 0x1f5658: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f5658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f565c:
    // 0x1f565c: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x1f565cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f5660:
    // 0x1f5660: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x1f5660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_1f5664:
    // 0x1f5664: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f5664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f5668:
    // 0x1f5668: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1f5668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1f566c:
    // 0x1f566c: 0x24070116  addiu       $a3, $zero, 0x116
    ctx->pc = 0x1f566cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
label_1f5670:
    // 0x1f5670: 0x2751021  addu        $v0, $s3, $s5
    ctx->pc = 0x1f5670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
label_1f5674:
    // 0x1f5674: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f5674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f5678:
    // 0x1f5678: 0x244406f0  addiu       $a0, $v0, 0x6F0
    ctx->pc = 0x1f5678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1776));
label_1f567c:
    // 0x1f567c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1f567cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1f5680:
    // 0x1f5680: 0x24020152  addiu       $v0, $zero, 0x152
    ctx->pc = 0x1f5680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 338));
label_1f5684:
    // 0x1f5684: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x1f5684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_1f5688:
    // 0x1f5688: 0x52380b  movn        $a3, $v0, $s2
    ctx->pc = 0x1f5688u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_1f568c:
    // 0x1f568c: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x1f568cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1f5690:
    // 0x1f5690: 0x26820178  addiu       $v0, $s4, 0x178
    ctx->pc = 0x1f5690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 376));
label_1f5694:
    // 0x1f5694: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1f5694u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1f5698:
    // 0x1f5698: 0x3049ffff  andi        $t1, $v0, 0xFFFF
    ctx->pc = 0x1f5698u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1f569c:
    // 0x1f569c: 0xc05de30  jal         func_1778C0
label_1f56a0:
    if (ctx->pc == 0x1F56A0u) {
        ctx->pc = 0x1F56A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F569Cu;
        // 0x1f56a0: 0x240a00c0  addiu       $t2, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F56A4u;
        goto label_1f56a4;
    }
    ctx->pc = 0x1F569Cu;
    SET_GPR_U32(ctx, 31, 0x1F56A4u);
    ctx->pc = 0x1F56A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F569Cu;
    // 0x1f56a0: 0x240a00c0  addiu       $t2, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1F569Cu, 0x1F56A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F56A4u;
label_1f56a4:
    // 0x1f56a4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f56a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1f56a8:
    // 0x1f56a8: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x1f56a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1f56ac:
    // 0x1f56ac: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1f56acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f56b0:
    // 0x1f56b0: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_1f56b4:
    if (ctx->pc == 0x1F56B4u) {
        ctx->pc = 0x1F56B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F56B0u;
        // 0x1f56b4: 0x26b500a0  addiu       $s5, $s5, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F56B8u;
        goto label_1f56b8;
    }
    ctx->pc = 0x1F56B0u;
    {
        const bool branch_taken_0x1f56b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F56B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F56B0u;
        // 0x1f56b4: 0x26b500a0  addiu       $s5, $s5, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f56b0) {
            ctx->pc = 0x1F564Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f564c;
        }
    }
    ctx->pc = 0x1F56B8u;
label_1f56b8:
    // 0x1f56b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f56b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f56bc:
    // 0x1f56bc: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1f56bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f56c0:
    // 0x1f56c0: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
label_1f56c4:
    if (ctx->pc == 0x1F56C4u) {
        ctx->pc = 0x1F56C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F56C0u;
        // 0x1f56c4: 0x26100830  addiu       $s0, $s0, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F56C8u;
        goto label_1f56c8;
    }
    ctx->pc = 0x1F56C0u;
    {
        const bool branch_taken_0x1f56c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F56C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F56C0u;
        // 0x1f56c4: 0x26100830  addiu       $s0, $s0, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f56c0) {
            ctx->pc = 0x1F55B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1f55b0; return; }
        }
    }
    ctx->pc = 0x1F56C8u;
label_1f56c8:
    // 0x1f56c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f56c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f56cc:
    // 0x1f56cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f56ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f56d0:
    // 0x1f56d0: 0x3c020050  lui         $v0, 0x50
    ctx->pc = 0x1f56d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)80 << 16));
label_1f56d4:
    // 0x1f56d4: 0x240506db  addiu       $a1, $zero, 0x6DB
    ctx->pc = 0x1f56d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1755));
label_1f56d8:
    // 0x1f56d8: 0x24425070  addiu       $v0, $v0, 0x5070
    ctx->pc = 0x1f56d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20592));
label_1f56dc:
    // 0x1f56dc: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x1f56dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1f56e0:
    // 0x1f56e0: 0xc05e234  jal         func_1788D0
label_1f56e4:
    if (ctx->pc == 0x1F56E4u) {
        ctx->pc = 0x1F56E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F56E0u;
        // 0x1f56e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F56E8u;
        goto label_1f56e8;
    }
    ctx->pc = 0x1F56E0u;
    SET_GPR_U32(ctx, 31, 0x1F56E8u);
    ctx->pc = 0x1F56E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F56E0u;
    // 0x1f56e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1F56E0u, 0x1F56E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F56E8u;
label_1f56e8:
    // 0x1f56e8: 0x24090009  addiu       $t1, $zero, 0x9
    ctx->pc = 0x1f56e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1f56ec:
    // 0x1f56ec: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x1f56ecu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_1f56f0:
    // 0x1f56f0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1f56f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1f56f4:
    // 0x1f56f4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1f56f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f56f8:
    // 0x1f56f8: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1f56f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1f56fc:
    // 0x1f56fc: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1f56fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1f5700:
    // 0x1f5700: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1f5700u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1f5704:
    // 0x1f5704: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x1f5704u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1f5708:
    // 0x1f5708: 0xc07083c  jal         func_1C20F0
label_1f570c:
    if (ctx->pc == 0x1F570Cu) {
        ctx->pc = 0x1F570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5708u;
        // 0x1f570c: 0x256bd528  addiu       $t3, $t3, -0x2AD8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5710u;
        goto label_1f5710;
    }
    ctx->pc = 0x1F5708u;
    SET_GPR_U32(ctx, 31, 0x1F5710u);
    ctx->pc = 0x1F570Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5708u;
    // 0x1f570c: 0x256bd528  addiu       $t3, $t3, -0x2AD8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20F0u;
    { ctx->pc = 0x1c20f0; return; }
    ctx->pc = 0x1F5710u;
label_1f5710:
    // 0x1f5710: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1f5710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1f5714:
    // 0x1f5714: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1f5714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1f5718:
    // 0x1f5718: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x1f5718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1f571c:
    // 0x1f571c: 0x2407002a  addiu       $a3, $zero, 0x2A
    ctx->pc = 0x1f571cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_1f5720:
    // 0x1f5720: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x1f5720u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1f5724:
    // 0x1f5724: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x1f5724u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1f5728:
    // 0x1f5728: 0xc054e5c  jal         func_153970
label_1f572c:
    if (ctx->pc == 0x1F572Cu) {
        ctx->pc = 0x1F572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5728u;
        // 0x1f572c: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5730u;
        goto label_1f5730;
    }
    ctx->pc = 0x1F5728u;
    SET_GPR_U32(ctx, 31, 0x1F5730u);
    ctx->pc = 0x1F572Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5728u;
    // 0x1f572c: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1F5728u, 0x1F5730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5730u;
label_1f5730:
    // 0x1f5730: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f5730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f5734:
    // 0x1f5734: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x1f5734u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_1f5738:
    // 0x1f5738: 0x26040690  addiu       $a0, $s0, 0x690
    ctx->pc = 0x1f5738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1680));
label_1f573c:
    // 0x1f573c: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x1f573cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1f5740:
    // 0x1f5740: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1f5740u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f5744:
    // 0x1f5744: 0xc054e74  jal         func_1539D0
label_1f5748:
    if (ctx->pc == 0x1F5748u) {
        ctx->pc = 0x1F5748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5744u;
        // 0x1f5748: 0x2508d528  addiu       $t0, $t0, -0x2AD8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F574Cu;
        goto label_1f574c;
    }
    ctx->pc = 0x1F5744u;
    SET_GPR_U32(ctx, 31, 0x1F574Cu);
    ctx->pc = 0x1F5748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5744u;
    // 0x1f5748: 0x2508d528  addiu       $t0, $t0, -0x2AD8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1F5744u, 0x1F574Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F574Cu;
label_1f574c:
    // 0x1f574c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f574cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1f5750:
    // 0x1f5750: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x1f5750u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f5754:
    // 0x1f5754: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
label_1f5758:
    if (ctx->pc == 0x1F5758u) {
        ctx->pc = 0x1F5758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5754u;
        // 0x1f5758: 0x26316dc0  addiu       $s1, $s1, 0x6DC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F575Cu;
        goto label_1f575c;
    }
    ctx->pc = 0x1F5754u;
    {
        const bool branch_taken_0x1f5754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5754u;
        // 0x1f5758: 0x26316dc0  addiu       $s1, $s1, 0x6DC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5754) {
            ctx->pc = 0x1F56D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f56d0;
        }
    }
    ctx->pc = 0x1F575Cu;
label_1f575c:
    // 0x1f575c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1f575cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1f5760:
    // 0x1f5760: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1f5760u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f5764:
    // 0x1f5764: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1f5764u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f5768:
    // 0x1f5768: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1f5768u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f576c:
    // 0x1f576c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1f576cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f5770:
    // 0x1f5770: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1f5770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f5774:
    // 0x1f5774: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f5774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f5778:
    // 0x1f5778: 0x3e00008  jr          $ra
label_1f577c:
    if (ctx->pc == 0x1F577Cu) {
        ctx->pc = 0x1F577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5778u;
        // 0x1f577c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5780u;
        goto label_1f5780;
    }
    ctx->pc = 0x1F5778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5778u;
        // 0x1f577c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5780u;
label_1f5780:
    // 0x1f5780: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f5780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f5784:
    // 0x1f5784: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1f5784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1f5788:
    // 0x1f5788: 0xaf808fe0  sw          $zero, -0x7020($gp)
    ctx->pc = 0x1f5788u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938592), GPR_U32(ctx, 0));
label_1f578c:
    // 0x1f578c: 0x460000b  bltz        $v1, . + 4 + (0xB << 2)
label_1f5790:
    if (ctx->pc == 0x1F5790u) {
        ctx->pc = 0x1F5790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F578Cu;
        // 0x1f5790: 0xaf868fec  sw          $a2, -0x7014($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938604), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5794u;
        goto label_1f5794;
    }
    ctx->pc = 0x1F578Cu;
    {
        const bool branch_taken_0x1f578c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1F5790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F578Cu;
        // 0x1f5790: 0xaf868fec  sw          $a2, -0x7014($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938604), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f578c) {
            ctx->pc = 0x1F57BCu;
            goto label_1f57bc;
        }
    }
    ctx->pc = 0x1F5794u;
label_1f5794:
    // 0x1f5794: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x1f5794u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
label_1f5798:
    // 0x1f5798: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_1f579c:
    if (ctx->pc == 0x1F579Cu) {
        ctx->pc = 0x1F579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5798u;
        // 0x1f579c: 0x32900  sll         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F57A0u;
        goto label_1f57a0;
    }
    ctx->pc = 0x1F5798u;
    {
        const bool branch_taken_0x1f5798 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5798u;
        // 0x1f579c: 0x32900  sll         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5798) {
            ctx->pc = 0x1F57BCu;
            goto label_1f57bc;
        }
    }
    ctx->pc = 0x1F57A0u;
label_1f57a0:
    // 0x1f57a0: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1f57a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_1f57a4:
    // 0x1f57a4: 0x246350f4  addiu       $v1, $v1, 0x50F4
    ctx->pc = 0x1f57a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20724));
label_1f57a8:
    // 0x1f57a8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f57a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f57ac:
    // 0x1f57ac: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1f57acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1f57b0:
    // 0x1f57b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1f57b4:
    if (ctx->pc == 0x1F57B4u) {
        ctx->pc = 0x1F57B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F57B0u;
        // 0x1f57b4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F57B8u;
        goto label_1f57b8;
    }
    ctx->pc = 0x1F57B0u;
    {
        const bool branch_taken_0x1f57b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F57B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F57B0u;
        // 0x1f57b4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f57b0) {
            ctx->pc = 0x1F57C0u;
            goto label_1f57c0;
        }
    }
    ctx->pc = 0x1F57B8u;
label_1f57b8:
    // 0x1f57b8: 0xaf868fe0  sw          $a2, -0x7020($gp)
    ctx->pc = 0x1f57b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938592), GPR_U32(ctx, 6));
label_1f57bc:
    // 0x1f57bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f57bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f57c0:
    // 0x1f57c0: 0x480000c  bltz        $a0, . + 4 + (0xC << 2)
label_1f57c4:
    if (ctx->pc == 0x1F57C4u) {
        ctx->pc = 0x1F57C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F57C0u;
        // 0x1f57c4: 0xaf838fe8  sw          $v1, -0x7018($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F57C8u;
        goto label_1f57c8;
    }
    ctx->pc = 0x1F57C0u;
    {
        const bool branch_taken_0x1f57c0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1F57C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F57C0u;
        // 0x1f57c4: 0xaf838fe8  sw          $v1, -0x7018($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f57c0) {
            ctx->pc = 0x1F57F4u;
            goto label_1f57f4;
        }
    }
    ctx->pc = 0x1F57C8u;
label_1f57c8:
    // 0x1f57c8: 0x28810010  slti        $at, $a0, 0x10
    ctx->pc = 0x1f57c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
label_1f57cc:
    // 0x1f57cc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_1f57d0:
    if (ctx->pc == 0x1F57D0u) {
        ctx->pc = 0x1F57D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F57CCu;
        // 0x1f57d0: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F57D4u;
        goto label_1f57d4;
    }
    ctx->pc = 0x1F57CCu;
    {
        const bool branch_taken_0x1f57cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F57D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F57CCu;
        // 0x1f57d0: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f57cc) {
            ctx->pc = 0x1F57F8u;
            goto label_1f57f8;
        }
    }
    ctx->pc = 0x1F57D4u;
label_1f57d4:
    // 0x1f57d4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1f57d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_1f57d8:
    // 0x1f57d8: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x1f57d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1f57dc:
    // 0x1f57dc: 0x246350f4  addiu       $v1, $v1, 0x50F4
    ctx->pc = 0x1f57dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20724));
label_1f57e0:
    // 0x1f57e0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f57e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f57e4:
    // 0x1f57e4: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1f57e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1f57e8:
    // 0x1f57e8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1f57ec:
    if (ctx->pc == 0x1F57ECu) {
        ctx->pc = 0x1F57F0u;
        goto label_1f57f0;
    }
    ctx->pc = 0x1F57E8u;
    {
        const bool branch_taken_0x1f57e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f57e8) {
            ctx->pc = 0x1F57F4u;
            goto label_1f57f4;
        }
    }
    ctx->pc = 0x1F57F0u;
label_1f57f0:
    // 0x1f57f0: 0xaf848fe8  sw          $a0, -0x7018($gp)
    ctx->pc = 0x1f57f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938600), GPR_U32(ctx, 4));
label_1f57f4:
    // 0x1f57f4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1f57f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1f57f8:
    // 0x1f57f8: 0x460000b  bltz        $v1, . + 4 + (0xB << 2)
label_1f57fc:
    if (ctx->pc == 0x1F57FCu) {
        ctx->pc = 0x1F57FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F57F8u;
        // 0x1f57fc: 0xaf808fe4  sw          $zero, -0x701C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938596), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5800u;
        goto label_1f5800;
    }
    ctx->pc = 0x1F57F8u;
    {
        const bool branch_taken_0x1f57f8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1F57FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F57F8u;
        // 0x1f57fc: 0xaf808fe4  sw          $zero, -0x701C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938596), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f57f8) {
            ctx->pc = 0x1F5828u;
            goto label_1f5828;
        }
    }
    ctx->pc = 0x1F5800u;
label_1f5800:
    // 0x1f5800: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x1f5800u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
label_1f5804:
    // 0x1f5804: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_1f5808:
    if (ctx->pc == 0x1F5808u) {
        ctx->pc = 0x1F5808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5804u;
        // 0x1f5808: 0x32100  sll         $a0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F580Cu;
        goto label_1f580c;
    }
    ctx->pc = 0x1F5804u;
    {
        const bool branch_taken_0x1f5804 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5804u;
        // 0x1f5808: 0x32100  sll         $a0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5804) {
            ctx->pc = 0x1F5828u;
            goto label_1f5828;
        }
    }
    ctx->pc = 0x1F580Cu;
label_1f580c:
    // 0x1f580c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1f580cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_1f5810:
    // 0x1f5810: 0x246350f4  addiu       $v1, $v1, 0x50F4
    ctx->pc = 0x1f5810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20724));
label_1f5814:
    // 0x1f5814: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f5814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f5818:
    // 0x1f5818: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1f5818u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1f581c:
    // 0x1f581c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1f5820:
    if (ctx->pc == 0x1F5820u) {
        ctx->pc = 0x1F5820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F581Cu;
        // 0x1f5820: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5824u;
        goto label_1f5824;
    }
    ctx->pc = 0x1F581Cu;
    {
        const bool branch_taken_0x1f581c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F581Cu;
        // 0x1f5820: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f581c) {
            ctx->pc = 0x1F5828u;
            goto label_1f5828;
        }
    }
    ctx->pc = 0x1F5824u;
label_1f5824:
    // 0x1f5824: 0xaf838fe4  sw          $v1, -0x701C($gp)
    ctx->pc = 0x1f5824u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938596), GPR_U32(ctx, 3));
label_1f5828:
    // 0x1f5828: 0x3e00008  jr          $ra
label_1f582c:
    if (ctx->pc == 0x1F582Cu) {
        ctx->pc = 0x1F582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5828u;
        // 0x1f582c: 0xaf808fd8  sw          $zero, -0x7028($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5830u;
        goto label_1f5830;
    }
    ctx->pc = 0x1F5828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5828u;
        // 0x1f582c: 0xaf808fd8  sw          $zero, -0x7028($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5830u;
label_1f5830:
    // 0x1f5830: 0x3e00008  jr          $ra
label_1f5834:
    if (ctx->pc == 0x1F5834u) {
        ctx->pc = 0x1F5838u;
        goto label_1f5838;
    }
    ctx->pc = 0x1F5830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5838u;
label_1f5838:
    // 0x1f5838: 0x0  nop
    ctx->pc = 0x1f5838u;
    // NOP
label_1f583c:
    // 0x1f583c: 0x0  nop
    ctx->pc = 0x1f583cu;
    // NOP
label_1f5840:
    // 0x1f5840: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1f5840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_1f5844:
    // 0x1f5844: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f5844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1f5848:
    // 0x1f5848: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f5848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f584c:
    // 0x1f584c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f584cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f5850:
    // 0x1f5850: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f5850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f5854:
    // 0x1f5854: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f5854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f5858:
    // 0x1f5858: 0x8f838fec  lw          $v1, -0x7014($gp)
    ctx->pc = 0x1f5858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938604)));
label_1f585c:
    // 0x1f585c: 0x1060019f  beqz        $v1, . + 4 + (0x19F << 2)
label_1f5860:
    if (ctx->pc == 0x1F5860u) {
        ctx->pc = 0x1F5864u;
        goto label_1f5864;
    }
    ctx->pc = 0x1F585Cu;
    {
        const bool branch_taken_0x1f585c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f585c) {
            ctx->pc = 0x1F5EDCu;
            { ctx->pc = 0x1f5edc; return; }
        }
    }
    ctx->pc = 0x1F5864u;
label_1f5864:
    // 0x1f5864: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1f5864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1f5868:
    // 0x1f5868: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1f5868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1f586c:
    // 0x1f586c: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x1f586cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_1f5870:
    // 0x1f5870: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1f5870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1f5874:
    // 0x1f5874: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1f5874u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f5878:
    // 0x1f5878: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f5878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f587c:
    // 0x1f587c: 0x24422bf0  addiu       $v0, $v0, 0x2BF0
    ctx->pc = 0x1f587cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11248));
label_1f5880:
    // 0x1f5880: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f5880u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5884:
    // 0x1f5884: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f5884u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5888:
    // 0x1f5888: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f5888u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f588c:
    // 0x1f588c: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x1f588cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_1f5890:
    // 0x1f5890: 0x62940  sll         $a1, $a2, 5
    ctx->pc = 0x1f5890u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_1f5894:
    // 0x1f5894: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1f5894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f5898:
    // 0x1f5898: 0x859021  addu        $s2, $a0, $a1
    ctx->pc = 0x1f5898u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f589c:
    // 0x1f589c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1f589cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1f58a0:
    // 0x1f58a0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1f58a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f58a4:
    // 0x1f58a4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1f58a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1f58a8:
    // 0x1f58a8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1f58a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f58ac:
    // 0x1f58ac: 0x27878fe0  addiu       $a3, $gp, -0x7020
    ctx->pc = 0x1f58acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938592));
label_1f58b0:
    // 0x1f58b0: 0xe91021  addu        $v0, $a3, $t1
    ctx->pc = 0x1f58b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_1f58b4:
    // 0x1f58b4: 0xaa1821  addu        $v1, $a1, $t2
    ctx->pc = 0x1f58b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_1f58b8:
    // 0x1f58b8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f58b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f58bc:
    // 0x1f58bc: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1f58bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1f58c0:
    // 0x1f58c0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f58c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1f58c4:
    // 0x1f58c4: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1f58c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_1f58c8:
    // 0x1f58c8: 0x254a00a0  addiu       $t2, $t2, 0xA0
    ctx->pc = 0x1f58c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 160));
label_1f58cc:
    // 0x1f58cc: 0x6200a  movz        $a0, $zero, $a2
    ctx->pc = 0x1f58ccu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_1f58d0:
    // 0x1f58d0: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x1f58d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f58d4:
    // 0x1f58d4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1f58d8:
    if (ctx->pc == 0x1F58D8u) {
        ctx->pc = 0x1F58D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F58D4u;
        // 0x1f58d8: 0xa0640763  sb          $a0, 0x763($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1891), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F58DCu;
        goto label_1f58dc;
    }
    ctx->pc = 0x1F58D4u;
    {
        const bool branch_taken_0x1f58d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F58D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F58D4u;
        // 0x1f58d8: 0xa0640763  sb          $a0, 0x763($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1891), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f58d4) {
            ctx->pc = 0x1F58B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f58b0;
        }
    }
    ctx->pc = 0x1F58DCu;
label_1f58dc:
    // 0x1f58dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f58dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f58e0:
    // 0x1f58e0: 0x24060083  addiu       $a2, $zero, 0x83
    ctx->pc = 0x1f58e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
label_1f58e4:
    // 0x1f58e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f58e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f58e8:
    // 0x1f58e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f58e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f58ec:
    // 0x1f58ec: 0xc066c72  jal         func_19B1C8
label_1f58f0:
    if (ctx->pc == 0x1F58F0u) {
        ctx->pc = 0x1F58F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F58ECu;
        // 0x1f58f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F58F4u;
        goto label_1f58f4;
    }
    ctx->pc = 0x1F58ECu;
    SET_GPR_U32(ctx, 31, 0x1F58F4u);
    ctx->pc = 0x1F58F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F58ECu;
    // 0x1f58f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1F58ECu, 0x1F58F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F58F4u;
label_1f58f4:
    // 0x1f58f4: 0x8f848fe8  lw          $a0, -0x7018($gp)
    ctx->pc = 0x1f58f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938600)));
label_1f58f8:
    // 0x1f58f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f58f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f58fc:
    // 0x1f58fc: 0x10830177  beq         $a0, $v1, . + 4 + (0x177 << 2)
label_1f5900:
    if (ctx->pc == 0x1F5900u) {
        ctx->pc = 0x1F5900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F58FCu;
        // 0x1f5900: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5904u;
        goto label_1f5904;
    }
    ctx->pc = 0x1F58FCu;
    {
        const bool branch_taken_0x1f58fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F5900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F58FCu;
        // 0x1f5900: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f58fc) {
            ctx->pc = 0x1F5EDCu;
            { ctx->pc = 0x1f5edc; return; }
        }
    }
    ctx->pc = 0x1F5904u;
label_1f5904:
    // 0x1f5904: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1f5904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_1f5908:
    // 0x1f5908: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1f5908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1f590c:
    // 0x1f590c: 0x24424a30  addiu       $v0, $v0, 0x4A30
    ctx->pc = 0x1f590cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18992));
label_1f5910:
    // 0x1f5910: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f5910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f5914:
    // 0x1f5914: 0x8c293ffc  lw          $t1, 0x3FFC($at)
    ctx->pc = 0x1f5914u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1f5918:
    // 0x1f5918: 0x8c4306c0  lw          $v1, 0x6C0($v0)
    ctx->pc = 0x1f5918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1728)));
label_1f591c:
    // 0x1f591c: 0x24056dc0  addiu       $a1, $zero, 0x6DC0
    ctx->pc = 0x1f591cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28096));
label_1f5920:
    // 0x1f5920: 0x8f868fd8  lw          $a2, -0x7028($gp)
    ctx->pc = 0x1f5920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938584)));
label_1f5924:
    // 0x1f5924: 0x245306bc  addiu       $s3, $v0, 0x6BC
    ctx->pc = 0x1f5924u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1724));
label_1f5928:
    // 0x1f5928: 0x3c070050  lui         $a3, 0x50
    ctx->pc = 0x1f5928u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)80 << 16));
label_1f592c:
    // 0x1f592c: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x1f592cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1f5930:
    // 0x1f5930: 0x24e75070  addiu       $a3, $a3, 0x5070
    ctx->pc = 0x1f5930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20592));
label_1f5934:
    // 0x1f5934: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1f5934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1f5938:
    // 0x1f5938: 0x1254818  mult        $t1, $t1, $a1
    ctx->pc = 0x1f5938u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_1f593c:
    // 0x1f593c: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x1f593cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_1f5940:
    // 0x1f5940: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x1f5940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_1f5944:
    // 0x1f5944: 0x24d0004b  addiu       $s0, $a2, 0x4B
    ctx->pc = 0x1f5944u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 75));
label_1f5948:
    // 0x1f5948: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1f5948u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f594c:
    // 0x1f594c: 0xe98821  addu        $s1, $a3, $t1
    ctx->pc = 0x1f594cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_1f5950:
    // 0x1f5950: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f5950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f5954:
    // 0x1f5954: 0x33fc2  srl         $a3, $v1, 31
    ctx->pc = 0x1f5954u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1f5958:
    // 0x1f5958: 0x24a5d530  addiu       $a1, $a1, -0x2AD0
    ctx->pc = 0x1f5958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956336));
label_1f595c:
    // 0x1f595c: 0x3010  mfhi        $a2
    ctx->pc = 0x1f595cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1f5960:
    // 0x1f5960: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1f5960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1f5964:
    // 0x1f5964: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x1f5964u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
label_1f5968:
    // 0x1f5968: 0xc74821  addu        $t1, $a2, $a3
    ctx->pc = 0x1f5968u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f596c:
    // 0x1f596c: 0x490018  mult        $zero, $v0, $t1
    ctx->pc = 0x1f596cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f5970:
    // 0x1f5970: 0x93fc2  srl         $a3, $t1, 31
    ctx->pc = 0x1f5970u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_1f5974:
    // 0x1f5974: 0x0  nop
    ctx->pc = 0x1f5974u;
    // NOP
label_1f5978:
    // 0x1f5978: 0x3010  mfhi        $a2
    ctx->pc = 0x1f5978u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1f597c:
    // 0x1f597c: 0x128001a  div         $zero, $t1, $t0
    ctx->pc = 0x1f597cu;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1f5980:
    // 0x1f5980: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x1f5980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_1f5984:
    // 0x1f5984: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x1f5984u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
label_1f5988:
    // 0x1f5988: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1f5988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f598c:
    // 0x1f598c: 0x3810  mfhi        $a3
    ctx->pc = 0x1f598cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_1f5990:
    // 0x1f5990: 0x68001a  div         $zero, $v1, $t0
    ctx->pc = 0x1f5990u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1f5994:
    // 0x1f5994: 0x0  nop
    ctx->pc = 0x1f5994u;
    // NOP
label_1f5998:
    // 0x1f5998: 0x0  nop
    ctx->pc = 0x1f5998u;
    // NOP
label_1f599c:
    // 0x1f599c: 0x4010  mfhi        $t0
    ctx->pc = 0x1f599cu;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_1f59a0:
    // 0x1f59a0: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1f59a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1f59a4:
    // 0x1f59a4: 0x684021  addu        $t0, $v1, $t0
    ctx->pc = 0x1f59a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1f59a8:
    // 0x1f59a8: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1f59a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1f59ac:
    // 0x1f59ac: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1f59acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1f59b0:
    // 0x1f59b0: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x1f59b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f59b4:
    // 0x1f59b4: 0x480018  mult        $zero, $v0, $t0
    ctx->pc = 0x1f59b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f59b8:
    // 0x1f59b8: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x1f59b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_1f59bc:
    // 0x1f59bc: 0x0  nop
    ctx->pc = 0x1f59bcu;
    // NOP
label_1f59c0:
    // 0x1f59c0: 0x1010  mfhi        $v0
    ctx->pc = 0x1f59c0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1f59c4:
    // 0x1f59c4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1f59c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1f59c8:
    // 0x1f59c8: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1f59c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1f59cc:
    // 0x1f59cc: 0xc08f20e  jal         func_23C838
label_1f59d0:
    if (ctx->pc == 0x1F59D0u) {
        ctx->pc = 0x1F59D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F59CCu;
        // 0x1f59d0: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F59D4u;
        goto label_1f59d4;
    }
    ctx->pc = 0x1F59CCu;
    SET_GPR_U32(ctx, 31, 0x1F59D4u);
    ctx->pc = 0x1F59D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F59CCu;
    // 0x1f59d0: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F59D4u;
label_1f59d4:
    // 0x1f59d4: 0x24090009  addiu       $t1, $zero, 0x9
    ctx->pc = 0x1f59d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1f59d8:
    // 0x1f59d8: 0x260700d4  addiu       $a3, $s0, 0xD4
    ctx->pc = 0x1f59d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 212));
label_1f59dc:
    // 0x1f59dc: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1f59dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1f59e0:
    // 0x1f59e0: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1f59e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1f59e4:
    // 0x1f59e4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1f59e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f59e8:
    // 0x1f59e8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1f59e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1f59ec:
    // 0x1f59ec: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x1f59ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1f59f0:
    // 0x1f59f0: 0xc07083c  jal         func_1C20F0
label_1f59f4:
    if (ctx->pc == 0x1F59F4u) {
        ctx->pc = 0x1F59F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F59F0u;
        // 0x1f59f4: 0x27ab0050  addiu       $t3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F59F8u;
        goto label_1f59f8;
    }
    ctx->pc = 0x1F59F0u;
    SET_GPR_U32(ctx, 31, 0x1F59F8u);
    ctx->pc = 0x1F59F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F59F0u;
    // 0x1f59f4: 0x27ab0050  addiu       $t3, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20F0u;
    { ctx->pc = 0x1c20f0; return; }
    ctx->pc = 0x1F59F8u;
label_1f59f8:
    // 0x1f59f8: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x1f59f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1f59fc:
    // 0x1f59fc: 0x28610026  slti        $at, $v1, 0x26
    ctx->pc = 0x1f59fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)38) ? 1 : 0);
label_1f5a00:
    // 0x1f5a00: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_1f5a04:
    if (ctx->pc == 0x1F5A04u) {
        ctx->pc = 0x1F5A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A00u;
        // 0x1f5a04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5A08u;
        goto label_1f5a08;
    }
    ctx->pc = 0x1F5A00u;
    {
        const bool branch_taken_0x1f5a00 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A00u;
        // 0x1f5a04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a00) {
            ctx->pc = 0x1F5A18u;
            goto label_1f5a18;
        }
    }
    ctx->pc = 0x1F5A08u;
label_1f5a08:
    // 0x1f5a08: 0x286200bb  slti        $v0, $v1, 0xBB
    ctx->pc = 0x1f5a08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)187) ? 1 : 0);
label_1f5a0c:
    // 0x1f5a0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1f5a10:
    if (ctx->pc == 0x1F5A10u) {
        ctx->pc = 0x1F5A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A0Cu;
        // 0x1f5a10: 0x2862004b  slti        $v0, $v1, 0x4B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)75) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5A14u;
        goto label_1f5a14;
    }
    ctx->pc = 0x1F5A0Cu;
    {
        const bool branch_taken_0x1f5a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A0Cu;
        // 0x1f5a10: 0x2862004b  slti        $v0, $v1, 0x4B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)75) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a0c) {
            ctx->pc = 0x1F5A20u;
            goto label_1f5a20;
        }
    }
    ctx->pc = 0x1F5A14u;
label_1f5a14:
    // 0x1f5a14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f5a14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5a18:
    // 0x1f5a18: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1f5a1c:
    if (ctx->pc == 0x1F5A1Cu) {
        ctx->pc = 0x1F5A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A18u;
        // 0x1f5a1c: 0x26040015  addiu       $a0, $s0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5A20u;
        goto label_1f5a20;
    }
    ctx->pc = 0x1F5A18u;
    {
        const bool branch_taken_0x1f5a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A18u;
        // 0x1f5a1c: 0x26040015  addiu       $a0, $s0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a18) {
            ctx->pc = 0x1F5AC4u;
            goto label_1f5ac4;
        }
    }
    ctx->pc = 0x1F5A20u;
label_1f5a20:
    // 0x1f5a20: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1f5a24:
    if (ctx->pc == 0x1F5A24u) {
        ctx->pc = 0x1F5A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A20u;
        // 0x1f5a24: 0x28610097  slti        $at, $v1, 0x97 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)151) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5A28u;
        goto label_1f5a28;
    }
    ctx->pc = 0x1F5A20u;
    {
        const bool branch_taken_0x1f5a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A20u;
        // 0x1f5a24: 0x28610097  slti        $at, $v1, 0x97 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)151) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a20) {
            ctx->pc = 0x1F5A38u;
            goto label_1f5a38;
        }
    }
    ctx->pc = 0x1F5A28u;
label_1f5a28:
    // 0x1f5a28: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1f5a2c:
    if (ctx->pc == 0x1F5A2Cu) {
        ctx->pc = 0x1F5A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A28u;
        // 0x1f5a2c: 0x2603000c  addiu       $v1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5A30u;
        goto label_1f5a30;
    }
    ctx->pc = 0x1F5A28u;
    {
        const bool branch_taken_0x1f5a28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A28u;
        // 0x1f5a2c: 0x2603000c  addiu       $v1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a28) {
            ctx->pc = 0x1F5A3Cu;
            goto label_1f5a3c;
        }
    }
    ctx->pc = 0x1F5A30u;
label_1f5a30:
    // 0x1f5a30: 0x10000023  b           . + 4 + (0x23 << 2)
label_1f5a34:
    if (ctx->pc == 0x1F5A34u) {
        ctx->pc = 0x1F5A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A30u;
        // 0x1f5a34: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5A38u;
        goto label_1f5a38;
    }
    ctx->pc = 0x1F5A30u;
    {
        const bool branch_taken_0x1f5a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A30u;
        // 0x1f5a34: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a30) {
            ctx->pc = 0x1F5AC0u;
            goto label_1f5ac0;
        }
    }
    ctx->pc = 0x1F5A38u;
label_1f5a38:
    // 0x1f5a38: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x1f5a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1f5a3c:
    // 0x1f5a3c: 0x2861004b  slti        $at, $v1, 0x4B
    ctx->pc = 0x1f5a3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)75) ? 1 : 0);
label_1f5a40:
    // 0x1f5a40: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_1f5a44:
    if (ctx->pc == 0x1F5A44u) {
        ctx->pc = 0x1F5A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A40u;
        // 0x1f5a44: 0x240200a8  addiu       $v0, $zero, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5A48u;
        goto label_1f5a48;
    }
    ctx->pc = 0x1F5A40u;
    {
        const bool branch_taken_0x1f5a40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A40u;
        // 0x1f5a44: 0x240200a8  addiu       $v0, $zero, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a40) {
            ctx->pc = 0x1F5A88u;
            goto label_1f5a88;
        }
    }
    ctx->pc = 0x1F5A48u;
label_1f5a48:
    // 0x1f5a48: 0x2602ffd4  addiu       $v0, $s0, -0x2C
    ctx->pc = 0x1f5a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967252));
label_1f5a4c:
    // 0x1f5a4c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_1f5a50:
    if (ctx->pc == 0x1F5A50u) {
        ctx->pc = 0x1F5A54u;
        goto label_1f5a54;
    }
    ctx->pc = 0x1F5A4Cu;
    {
        const bool branch_taken_0x1f5a4c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f5a4c) {
            ctx->pc = 0x1F5A58u;
            goto label_1f5a58;
        }
    }
    ctx->pc = 0x1F5A54u;
label_1f5a54:
    // 0x1f5a54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f5a54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5a58:
    // 0x1f5a58: 0x221c0  sll         $a0, $v0, 7
    ctx->pc = 0x1f5a58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1f5a5c:
    // 0x1f5a5c: 0x3c029249  lui         $v0, 0x9249
    ctx->pc = 0x1f5a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37449 << 16));
label_1f5a60:
    // 0x1f5a60: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x1f5a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1f5a64:
    // 0x1f5a64: 0x34422493  ori         $v0, $v0, 0x2493
    ctx->pc = 0x1f5a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9363);
label_1f5a68:
    // 0x1f5a68: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x1f5a68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f5a6c:
    // 0x1f5a6c: 0x0  nop
    ctx->pc = 0x1f5a6cu;
    // NOP
label_1f5a70:
    // 0x1f5a70: 0x0  nop
    ctx->pc = 0x1f5a70u;
    // NOP
label_1f5a74:
    // 0x1f5a74: 0x1010  mfhi        $v0
    ctx->pc = 0x1f5a74u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1f5a78:
    // 0x1f5a78: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f5a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f5a7c:
    // 0x1f5a7c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1f5a7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1f5a80:
    // 0x1f5a80: 0x1000000f  b           . + 4 + (0xF << 2)
label_1f5a84:
    if (ctx->pc == 0x1F5A84u) {
        ctx->pc = 0x1F5A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A80u;
        // 0x1f5a84: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5A88u;
        goto label_1f5a88;
    }
    ctx->pc = 0x1F5A80u;
    {
        const bool branch_taken_0x1f5a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A80u;
        // 0x1f5a84: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a80) {
            ctx->pc = 0x1F5AC0u;
            goto label_1f5ac0;
        }
    }
    ctx->pc = 0x1F5A88u;
label_1f5a88:
    // 0x1f5a88: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1f5a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f5a8c:
    // 0x1f5a8c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_1f5a90:
    if (ctx->pc == 0x1F5A90u) {
        ctx->pc = 0x1F5A94u;
        goto label_1f5a94;
    }
    ctx->pc = 0x1F5A8Cu;
    {
        const bool branch_taken_0x1f5a8c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f5a8c) {
            ctx->pc = 0x1F5A98u;
            goto label_1f5a98;
        }
    }
    ctx->pc = 0x1F5A94u;
label_1f5a94:
    // 0x1f5a94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f5a94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5a98:
    // 0x1f5a98: 0x221c0  sll         $a0, $v0, 7
    ctx->pc = 0x1f5a98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1f5a9c:
    // 0x1f5a9c: 0x3c0238e3  lui         $v0, 0x38E3
    ctx->pc = 0x1f5a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14563 << 16));
label_1f5aa0:
    // 0x1f5aa0: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x1f5aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1f5aa4:
    // 0x1f5aa4: 0x34428e39  ori         $v0, $v0, 0x8E39
    ctx->pc = 0x1f5aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
label_1f5aa8:
    // 0x1f5aa8: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x1f5aa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f5aac:
    // 0x1f5aac: 0x0  nop
    ctx->pc = 0x1f5aacu;
    // NOP
label_1f5ab0:
    // 0x1f5ab0: 0x0  nop
    ctx->pc = 0x1f5ab0u;
    // NOP
label_1f5ab4:
    // 0x1f5ab4: 0x1010  mfhi        $v0
    ctx->pc = 0x1f5ab4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1f5ab8:
    // 0x1f5ab8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1f5ab8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1f5abc:
    // 0x1f5abc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f5abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f5ac0:
    // 0x1f5ac0: 0x26040015  addiu       $a0, $s0, 0x15
    ctx->pc = 0x1f5ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 21));
label_1f5ac4:
    // 0x1f5ac4: 0x28810026  slti        $at, $a0, 0x26
    ctx->pc = 0x1f5ac4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)38) ? 1 : 0);
label_1f5ac8:
    // 0x1f5ac8: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_1f5acc:
    if (ctx->pc == 0x1F5ACCu) {
        ctx->pc = 0x1F5ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AC8u;
        // 0x1f5acc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5AD0u;
        goto label_1f5ad0;
    }
    ctx->pc = 0x1F5AC8u;
    {
        const bool branch_taken_0x1f5ac8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AC8u;
        // 0x1f5acc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5ac8) {
            ctx->pc = 0x1F5AE0u;
            goto label_1f5ae0;
        }
    }
    ctx->pc = 0x1F5AD0u;
label_1f5ad0:
    // 0x1f5ad0: 0x288300bb  slti        $v1, $a0, 0xBB
    ctx->pc = 0x1f5ad0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)187) ? 1 : 0);
label_1f5ad4:
    // 0x1f5ad4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1f5ad8:
    if (ctx->pc == 0x1F5AD8u) {
        ctx->pc = 0x1F5AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AD4u;
        // 0x1f5ad8: 0x2883004b  slti        $v1, $a0, 0x4B (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)75) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5ADCu;
        goto label_1f5adc;
    }
    ctx->pc = 0x1F5AD4u;
    {
        const bool branch_taken_0x1f5ad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AD4u;
        // 0x1f5ad8: 0x2883004b  slti        $v1, $a0, 0x4B (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)75) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5ad4) {
            ctx->pc = 0x1F5AE8u;
            goto label_1f5ae8;
        }
    }
    ctx->pc = 0x1F5ADCu;
label_1f5adc:
    // 0x1f5adc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f5adcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5ae0:
    // 0x1f5ae0: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1f5ae4:
    if (ctx->pc == 0x1F5AE4u) {
        ctx->pc = 0x1F5AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AE0u;
        // 0x1f5ae4: 0xa222009b  sb          $v0, 0x9B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 155), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5AE8u;
        goto label_1f5ae8;
    }
    ctx->pc = 0x1F5AE0u;
    {
        const bool branch_taken_0x1f5ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AE0u;
        // 0x1f5ae4: 0xa222009b  sb          $v0, 0x9B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 155), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5ae0) {
            ctx->pc = 0x1F5B8Cu;
            goto label_1f5b8c;
        }
    }
    ctx->pc = 0x1F5AE8u;
label_1f5ae8:
    // 0x1f5ae8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1f5aec:
    if (ctx->pc == 0x1F5AECu) {
        ctx->pc = 0x1F5AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AE8u;
        // 0x1f5aec: 0x28810097  slti        $at, $a0, 0x97 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)151) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5AF0u;
        goto label_1f5af0;
    }
    ctx->pc = 0x1F5AE8u;
    {
        const bool branch_taken_0x1f5ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AE8u;
        // 0x1f5aec: 0x28810097  slti        $at, $a0, 0x97 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)151) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5ae8) {
            ctx->pc = 0x1F5B00u;
            goto label_1f5b00;
        }
    }
    ctx->pc = 0x1F5AF0u;
label_1f5af0:
    // 0x1f5af0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1f5af4:
    if (ctx->pc == 0x1F5AF4u) {
        ctx->pc = 0x1F5AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AF0u;
        // 0x1f5af4: 0x26040015  addiu       $a0, $s0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5AF8u;
        goto label_1f5af8;
    }
    ctx->pc = 0x1F5AF0u;
    {
        const bool branch_taken_0x1f5af0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AF0u;
        // 0x1f5af4: 0x26040015  addiu       $a0, $s0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5af0) {
            ctx->pc = 0x1F5B04u;
            goto label_1f5b04;
        }
    }
    ctx->pc = 0x1F5AF8u;
label_1f5af8:
    // 0x1f5af8: 0x10000023  b           . + 4 + (0x23 << 2)
label_1f5afc:
    if (ctx->pc == 0x1F5AFCu) {
        ctx->pc = 0x1F5AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AF8u;
        // 0x1f5afc: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5B00u;
        goto label_1f5b00;
    }
    ctx->pc = 0x1F5AF8u;
    {
        const bool branch_taken_0x1f5af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AF8u;
        // 0x1f5afc: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5af8) {
            ctx->pc = 0x1F5B88u;
            goto label_1f5b88;
        }
    }
    ctx->pc = 0x1F5B00u;
label_1f5b00:
    // 0x1f5b00: 0x26040015  addiu       $a0, $s0, 0x15
    ctx->pc = 0x1f5b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 21));
label_1f5b04:
    // 0x1f5b04: 0x2881004b  slti        $at, $a0, 0x4B
    ctx->pc = 0x1f5b04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)75) ? 1 : 0);
label_1f5b08:
    // 0x1f5b08: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_1f5b0c:
    if (ctx->pc == 0x1F5B0Cu) {
        ctx->pc = 0x1F5B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B08u;
        // 0x1f5b0c: 0x240300a8  addiu       $v1, $zero, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5B10u;
        goto label_1f5b10;
    }
    ctx->pc = 0x1F5B08u;
    {
        const bool branch_taken_0x1f5b08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B08u;
        // 0x1f5b0c: 0x240300a8  addiu       $v1, $zero, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5b08) {
            ctx->pc = 0x1F5B50u;
            goto label_1f5b50;
        }
    }
    ctx->pc = 0x1F5B10u;
label_1f5b10:
    // 0x1f5b10: 0x2603ffdd  addiu       $v1, $s0, -0x23
    ctx->pc = 0x1f5b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967261));
label_1f5b14:
    // 0x1f5b14: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
label_1f5b18:
    if (ctx->pc == 0x1F5B18u) {
        ctx->pc = 0x1F5B1Cu;
        goto label_1f5b1c;
    }
    ctx->pc = 0x1F5B14u;
    {
        const bool branch_taken_0x1f5b14 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1f5b14) {
            ctx->pc = 0x1F5B20u;
            goto label_1f5b20;
        }
    }
    ctx->pc = 0x1F5B1Cu;
label_1f5b1c:
    // 0x1f5b1c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f5b1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5b20:
    // 0x1f5b20: 0x329c0  sll         $a1, $v1, 7
    ctx->pc = 0x1f5b20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_1f5b24:
    // 0x1f5b24: 0x3c039249  lui         $v1, 0x9249
    ctx->pc = 0x1f5b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37449 << 16));
label_1f5b28:
    // 0x1f5b28: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x1f5b28u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_1f5b2c:
    // 0x1f5b2c: 0x34632493  ori         $v1, $v1, 0x2493
    ctx->pc = 0x1f5b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9363);
label_1f5b30:
    // 0x1f5b30: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x1f5b30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f5b34:
    // 0x1f5b34: 0x0  nop
    ctx->pc = 0x1f5b34u;
    // NOP
label_1f5b38:
    // 0x1f5b38: 0x0  nop
    ctx->pc = 0x1f5b38u;
    // NOP
label_1f5b3c:
    // 0x1f5b3c: 0x1810  mfhi        $v1
    ctx->pc = 0x1f5b3cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1f5b40:
    // 0x1f5b40: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f5b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f5b44:
    // 0x1f5b44: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1f5b44u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1f5b48:
    // 0x1f5b48: 0x1000000f  b           . + 4 + (0xF << 2)
label_1f5b4c:
    if (ctx->pc == 0x1F5B4Cu) {
        ctx->pc = 0x1F5B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B48u;
        // 0x1f5b4c: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5B50u;
        goto label_1f5b50;
    }
    ctx->pc = 0x1F5B48u;
    {
        const bool branch_taken_0x1f5b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B48u;
        // 0x1f5b4c: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5b48) {
            ctx->pc = 0x1F5B88u;
            goto label_1f5b88;
        }
    }
    ctx->pc = 0x1F5B50u;
label_1f5b50:
    // 0x1f5b50: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1f5b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f5b54:
    // 0x1f5b54: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
label_1f5b58:
    if (ctx->pc == 0x1F5B58u) {
        ctx->pc = 0x1F5B5Cu;
        goto label_1f5b5c;
    }
    ctx->pc = 0x1F5B54u;
    {
        const bool branch_taken_0x1f5b54 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1f5b54) {
            ctx->pc = 0x1F5B60u;
            goto label_1f5b60;
        }
    }
    ctx->pc = 0x1F5B5Cu;
label_1f5b5c:
    // 0x1f5b5c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f5b5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5b60:
    // 0x1f5b60: 0x329c0  sll         $a1, $v1, 7
    ctx->pc = 0x1f5b60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_1f5b64:
    // 0x1f5b64: 0x3c0338e3  lui         $v1, 0x38E3
    ctx->pc = 0x1f5b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14563 << 16));
label_1f5b68:
    // 0x1f5b68: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x1f5b68u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_1f5b6c:
    // 0x1f5b6c: 0x34638e39  ori         $v1, $v1, 0x8E39
    ctx->pc = 0x1f5b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36409);
label_1f5b70:
    // 0x1f5b70: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x1f5b70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f5b74:
    // 0x1f5b74: 0x0  nop
    ctx->pc = 0x1f5b74u;
    // NOP
label_1f5b78:
    // 0x1f5b78: 0x0  nop
    ctx->pc = 0x1f5b78u;
    // NOP
label_1f5b7c:
    // 0x1f5b7c: 0x1810  mfhi        $v1
    ctx->pc = 0x1f5b7cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1f5b80:
    // 0x1f5b80: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1f5b80u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_1f5b84:
    // 0x1f5b84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f5b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f5b88:
    // 0x1f5b88: 0xa222009b  sb          $v0, 0x9B($s1)
    ctx->pc = 0x1f5b88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 155), (uint8_t)GPR_U32(ctx, 2));
label_1f5b8c:
    // 0x1f5b8c: 0xa2220083  sb          $v0, 0x83($s1)
    ctx->pc = 0x1f5b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 131), (uint8_t)GPR_U32(ctx, 2));
label_1f5b90:
    // 0x1f5b90: 0xa22300cb  sb          $v1, 0xCB($s1)
    ctx->pc = 0x1f5b90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 203), (uint8_t)GPR_U32(ctx, 3));
label_1f5b94:
    // 0x1f5b94: 0xa22300b3  sb          $v1, 0xB3($s1)
    ctx->pc = 0x1f5b94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 179), (uint8_t)GPR_U32(ctx, 3));
label_1f5b98:
    // 0x1f5b98: 0xa222016b  sb          $v0, 0x16B($s1)
    ctx->pc = 0x1f5b98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 363), (uint8_t)GPR_U32(ctx, 2));
label_1f5b9c:
    // 0x1f5b9c: 0xa2220153  sb          $v0, 0x153($s1)
    ctx->pc = 0x1f5b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 339), (uint8_t)GPR_U32(ctx, 2));
label_1f5ba0:
    // 0x1f5ba0: 0xa223019b  sb          $v1, 0x19B($s1)
    ctx->pc = 0x1f5ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 3));
label_1f5ba4:
    // 0x1f5ba4: 0xa2230183  sb          $v1, 0x183($s1)
    ctx->pc = 0x1f5ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 387), (uint8_t)GPR_U32(ctx, 3));
label_1f5ba8:
    // 0x1f5ba8: 0xa222023b  sb          $v0, 0x23B($s1)
    ctx->pc = 0x1f5ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 571), (uint8_t)GPR_U32(ctx, 2));
label_1f5bac:
    // 0x1f5bac: 0xa2220223  sb          $v0, 0x223($s1)
    ctx->pc = 0x1f5bacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 547), (uint8_t)GPR_U32(ctx, 2));
label_1f5bb0:
    // 0x1f5bb0: 0xa223026b  sb          $v1, 0x26B($s1)
    ctx->pc = 0x1f5bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 619), (uint8_t)GPR_U32(ctx, 3));
label_1f5bb4:
    // 0x1f5bb4: 0xa2230253  sb          $v1, 0x253($s1)
    ctx->pc = 0x1f5bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 595), (uint8_t)GPR_U32(ctx, 3));
label_1f5bb8:
    // 0x1f5bb8: 0xa222030b  sb          $v0, 0x30B($s1)
    ctx->pc = 0x1f5bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 779), (uint8_t)GPR_U32(ctx, 2));
label_1f5bbc:
    // 0x1f5bbc: 0xa22202f3  sb          $v0, 0x2F3($s1)
    ctx->pc = 0x1f5bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 755), (uint8_t)GPR_U32(ctx, 2));
label_1f5bc0:
    // 0x1f5bc0: 0xa223033b  sb          $v1, 0x33B($s1)
    ctx->pc = 0x1f5bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 827), (uint8_t)GPR_U32(ctx, 3));
label_1f5bc4:
    // 0x1f5bc4: 0xa2230323  sb          $v1, 0x323($s1)
    ctx->pc = 0x1f5bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 803), (uint8_t)GPR_U32(ctx, 3));
label_1f5bc8:
    // 0x1f5bc8: 0xa22203db  sb          $v0, 0x3DB($s1)
    ctx->pc = 0x1f5bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 987), (uint8_t)GPR_U32(ctx, 2));
label_1f5bcc:
    // 0x1f5bcc: 0xa22203c3  sb          $v0, 0x3C3($s1)
    ctx->pc = 0x1f5bccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 963), (uint8_t)GPR_U32(ctx, 2));
label_1f5bd0:
    // 0x1f5bd0: 0xa223040b  sb          $v1, 0x40B($s1)
    ctx->pc = 0x1f5bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1035), (uint8_t)GPR_U32(ctx, 3));
label_1f5bd4:
    // 0x1f5bd4: 0xa22303f3  sb          $v1, 0x3F3($s1)
    ctx->pc = 0x1f5bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1011), (uint8_t)GPR_U32(ctx, 3));
label_1f5bd8:
    // 0x1f5bd8: 0xa22204ab  sb          $v0, 0x4AB($s1)
    ctx->pc = 0x1f5bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1195), (uint8_t)GPR_U32(ctx, 2));
label_1f5bdc:
    // 0x1f5bdc: 0xa2220493  sb          $v0, 0x493($s1)
    ctx->pc = 0x1f5bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1171), (uint8_t)GPR_U32(ctx, 2));
label_1f5be0:
    // 0x1f5be0: 0xa22304db  sb          $v1, 0x4DB($s1)
    ctx->pc = 0x1f5be0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1243), (uint8_t)GPR_U32(ctx, 3));
label_1f5be4:
    // 0x1f5be4: 0xa22304c3  sb          $v1, 0x4C3($s1)
    ctx->pc = 0x1f5be4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1219), (uint8_t)GPR_U32(ctx, 3));
label_1f5be8:
    // 0x1f5be8: 0xa222057b  sb          $v0, 0x57B($s1)
    ctx->pc = 0x1f5be8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1403), (uint8_t)GPR_U32(ctx, 2));
label_1f5bec:
    // 0x1f5bec: 0xa2220563  sb          $v0, 0x563($s1)
    ctx->pc = 0x1f5becu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1379), (uint8_t)GPR_U32(ctx, 2));
label_1f5bf0:
    // 0x1f5bf0: 0xa22305ab  sb          $v1, 0x5AB($s1)
    ctx->pc = 0x1f5bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1451), (uint8_t)GPR_U32(ctx, 3));
label_1f5bf4:
    // 0x1f5bf4: 0xa2230593  sb          $v1, 0x593($s1)
    ctx->pc = 0x1f5bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1427), (uint8_t)GPR_U32(ctx, 3));
label_1f5bf8:
    // 0x1f5bf8: 0xa222064b  sb          $v0, 0x64B($s1)
    ctx->pc = 0x1f5bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1611), (uint8_t)GPR_U32(ctx, 2));
label_1f5bfc:
    // 0x1f5bfc: 0xa2220633  sb          $v0, 0x633($s1)
    ctx->pc = 0x1f5bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1587), (uint8_t)GPR_U32(ctx, 2));
label_1f5c00:
    // 0x1f5c00: 0xa223067b  sb          $v1, 0x67B($s1)
    ctx->pc = 0x1f5c00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1659), (uint8_t)GPR_U32(ctx, 3));
label_1f5c04:
    // 0x1f5c04: 0xa2230663  sb          $v1, 0x663($s1)
    ctx->pc = 0x1f5c04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1635), (uint8_t)GPR_U32(ctx, 3));
label_1f5c08:
    // 0x1f5c08: 0x9265000a  lbu         $a1, 0xA($s3)
    ctx->pc = 0x1f5c08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10)));
label_1f5c0c:
    // 0x1f5c0c: 0x9266000b  lbu         $a2, 0xB($s3)
    ctx->pc = 0x1f5c0cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 11)));
label_1f5c10:
    // 0x1f5c10: 0x8667000c  lh          $a3, 0xC($s3)
    ctx->pc = 0x1f5c10u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
label_1f5c14:
    // 0x1f5c14: 0x8668000e  lh          $t0, 0xE($s3)
    ctx->pc = 0x1f5c14u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
label_1f5c18:
    // 0x1f5c18: 0xc05d9d8  jal         func_176760
label_1f5c1c:
    if (ctx->pc == 0x1F5C1Cu) {
        ctx->pc = 0x1F5C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C18u;
        // 0x1f5c1c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5C20u;
        goto label_1f5c20;
    }
    ctx->pc = 0x1F5C18u;
    SET_GPR_U32(ctx, 31, 0x1F5C20u);
    ctx->pc = 0x1F5C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5C18u;
    // 0x1f5c1c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176760u, 0x1F5C18u, 0x1F5C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5C20u;
label_1f5c20:
    // 0x1f5c20: 0x260900dd  addiu       $t1, $s0, 0xDD
    ctx->pc = 0x1f5c20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 221));
label_1f5c24:
    // 0x1f5c24: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1f5c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1f5c28:
    // 0x1f5c28: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1f5c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1f5c2c:
    // 0x1f5c2c: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x1f5c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1f5c30:
    // 0x1f5c30: 0x2407002a  addiu       $a3, $zero, 0x2A
    ctx->pc = 0x1f5c30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_1f5c34:
    // 0x1f5c34: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x1f5c34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1f5c38:
    // 0x1f5c38: 0xc054e5c  jal         func_153970
label_1f5c3c:
    if (ctx->pc == 0x1F5C3Cu) {
        ctx->pc = 0x1F5C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C38u;
        // 0x1f5c3c: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5C40u;
        goto label_1f5c40;
    }
    ctx->pc = 0x1F5C38u;
    SET_GPR_U32(ctx, 31, 0x1F5C40u);
    ctx->pc = 0x1F5C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5C38u;
    // 0x1f5c3c: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1F5C38u, 0x1F5C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5C40u;
label_1f5c40:
    // 0x1f5c40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f5c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f5c44:
    // 0x1f5c44: 0x26240690  addiu       $a0, $s1, 0x690
    ctx->pc = 0x1f5c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1680));
label_1f5c48:
    // 0x1f5c48: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x1f5c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1f5c4c:
    // 0x1f5c4c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1f5c4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f5c50:
    // 0x1f5c50: 0xc054e74  jal         func_1539D0
label_1f5c54:
    if (ctx->pc == 0x1F5C54u) {
        ctx->pc = 0x1F5C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C50u;
        // 0x1f5c54: 0x27a80050  addiu       $t0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5C58u;
        goto label_1f5c58;
    }
    ctx->pc = 0x1F5C50u;
    SET_GPR_U32(ctx, 31, 0x1F5C58u);
    ctx->pc = 0x1F5C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5C50u;
    // 0x1f5c54: 0x27a80050  addiu       $t0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1F5C50u, 0x1F5C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5C58u;
label_1f5c58:
    // 0x1f5c58: 0x26030015  addiu       $v1, $s0, 0x15
    ctx->pc = 0x1f5c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 21));
label_1f5c5c:
    // 0x1f5c5c: 0x28610026  slti        $at, $v1, 0x26
    ctx->pc = 0x1f5c5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)38) ? 1 : 0);
label_1f5c60:
    // 0x1f5c60: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_1f5c64:
    if (ctx->pc == 0x1F5C64u) {
        ctx->pc = 0x1F5C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C60u;
        // 0x1f5c64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5C68u;
        goto label_1f5c68;
    }
    ctx->pc = 0x1F5C60u;
    {
        const bool branch_taken_0x1f5c60 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C60u;
        // 0x1f5c64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5c60) {
            ctx->pc = 0x1F5C78u;
            goto label_1f5c78;
        }
    }
    ctx->pc = 0x1F5C68u;
label_1f5c68:
    // 0x1f5c68: 0x286200bb  slti        $v0, $v1, 0xBB
    ctx->pc = 0x1f5c68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)187) ? 1 : 0);
label_1f5c6c:
    // 0x1f5c6c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1f5c70:
    if (ctx->pc == 0x1F5C70u) {
        ctx->pc = 0x1F5C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C6Cu;
        // 0x1f5c70: 0x2862004b  slti        $v0, $v1, 0x4B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)75) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5C74u;
        goto label_1f5c74;
    }
    ctx->pc = 0x1F5C6Cu;
    {
        const bool branch_taken_0x1f5c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C6Cu;
        // 0x1f5c70: 0x2862004b  slti        $v0, $v1, 0x4B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)75) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5c6c) {
            ctx->pc = 0x1F5C80u;
            goto label_1f5c80;
        }
    }
    ctx->pc = 0x1F5C74u;
label_1f5c74:
    // 0x1f5c74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f5c74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5c78:
    // 0x1f5c78: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1f5c7c:
    if (ctx->pc == 0x1F5C7Cu) {
        ctx->pc = 0x1F5C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C78u;
        // 0x1f5c7c: 0x2604002a  addiu       $a0, $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 42));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5C80u;
        goto label_1f5c80;
    }
    ctx->pc = 0x1F5C78u;
    {
        const bool branch_taken_0x1f5c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C78u;
        // 0x1f5c7c: 0x2604002a  addiu       $a0, $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5c78) {
            ctx->pc = 0x1F5D24u;
            goto label_1f5d24;
        }
    }
    ctx->pc = 0x1F5C80u;
label_1f5c80:
    // 0x1f5c80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1f5c84:
    if (ctx->pc == 0x1F5C84u) {
        ctx->pc = 0x1F5C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C80u;
        // 0x1f5c84: 0x28610097  slti        $at, $v1, 0x97 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)151) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5C88u;
        goto label_1f5c88;
    }
    ctx->pc = 0x1F5C80u;
    {
        const bool branch_taken_0x1f5c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C80u;
        // 0x1f5c84: 0x28610097  slti        $at, $v1, 0x97 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)151) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5c80) {
            ctx->pc = 0x1F5C98u;
            goto label_1f5c98;
        }
    }
    ctx->pc = 0x1F5C88u;
label_1f5c88:
    // 0x1f5c88: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1f5c8c:
    if (ctx->pc == 0x1F5C8Cu) {
        ctx->pc = 0x1F5C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C88u;
        // 0x1f5c8c: 0x26030015  addiu       $v1, $s0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5C90u;
        goto label_1f5c90;
    }
    ctx->pc = 0x1F5C88u;
    {
        const bool branch_taken_0x1f5c88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C88u;
        // 0x1f5c8c: 0x26030015  addiu       $v1, $s0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5c88) {
            ctx->pc = 0x1F5C9Cu;
            goto label_1f5c9c;
        }
    }
    ctx->pc = 0x1F5C90u;
label_1f5c90:
    // 0x1f5c90: 0x10000023  b           . + 4 + (0x23 << 2)
label_1f5c94:
    if (ctx->pc == 0x1F5C94u) {
        ctx->pc = 0x1F5C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C90u;
        // 0x1f5c94: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5C98u;
        goto label_1f5c98;
    }
    ctx->pc = 0x1F5C90u;
    {
        const bool branch_taken_0x1f5c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C90u;
        // 0x1f5c94: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5c90) {
            ctx->pc = 0x1F5D20u;
            goto label_1f5d20;
        }
    }
    ctx->pc = 0x1F5C98u;
label_1f5c98:
    // 0x1f5c98: 0x26030015  addiu       $v1, $s0, 0x15
    ctx->pc = 0x1f5c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 21));
label_1f5c9c:
    // 0x1f5c9c: 0x2861004b  slti        $at, $v1, 0x4B
    ctx->pc = 0x1f5c9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)75) ? 1 : 0);
label_1f5ca0:
    // 0x1f5ca0: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_1f5ca4:
    if (ctx->pc == 0x1F5CA4u) {
        ctx->pc = 0x1F5CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5CA0u;
        // 0x1f5ca4: 0x240200a8  addiu       $v0, $zero, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5CA8u;
        goto label_1f5ca8;
    }
    ctx->pc = 0x1F5CA0u;
    {
        const bool branch_taken_0x1f5ca0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5CA0u;
        // 0x1f5ca4: 0x240200a8  addiu       $v0, $zero, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5ca0) {
            ctx->pc = 0x1F5CE8u;
            goto label_1f5ce8;
        }
    }
    ctx->pc = 0x1F5CA8u;
label_1f5ca8:
    // 0x1f5ca8: 0x2602ffdd  addiu       $v0, $s0, -0x23
    ctx->pc = 0x1f5ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967261));
label_1f5cac:
    // 0x1f5cac: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_1f5cb0:
    if (ctx->pc == 0x1F5CB0u) {
        ctx->pc = 0x1F5CB4u;
        goto label_1f5cb4;
    }
    ctx->pc = 0x1F5CACu;
    {
        const bool branch_taken_0x1f5cac = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f5cac) {
            ctx->pc = 0x1F5CB8u;
            goto label_1f5cb8;
        }
    }
    ctx->pc = 0x1F5CB4u;
label_1f5cb4:
    // 0x1f5cb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f5cb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5cb8:
    // 0x1f5cb8: 0x221c0  sll         $a0, $v0, 7
    ctx->pc = 0x1f5cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1f5cbc:
    // 0x1f5cbc: 0x3c029249  lui         $v0, 0x9249
    ctx->pc = 0x1f5cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37449 << 16));
label_1f5cc0:
    // 0x1f5cc0: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x1f5cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1f5cc4:
    // 0x1f5cc4: 0x34422493  ori         $v0, $v0, 0x2493
    ctx->pc = 0x1f5cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9363);
label_1f5cc8:
    // 0x1f5cc8: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x1f5cc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f5ccc:
    // 0x1f5ccc: 0x0  nop
    ctx->pc = 0x1f5cccu;
    // NOP
label_1f5cd0:
    // 0x1f5cd0: 0x0  nop
    ctx->pc = 0x1f5cd0u;
    // NOP
label_1f5cd4:
    // 0x1f5cd4: 0x1010  mfhi        $v0
    ctx->pc = 0x1f5cd4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1f5cd8:
    // 0x1f5cd8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f5cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f5cdc:
    // 0x1f5cdc: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1f5cdcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1f5ce0:
    // 0x1f5ce0: 0x1000000f  b           . + 4 + (0xF << 2)
label_1f5ce4:
    if (ctx->pc == 0x1F5CE4u) {
        ctx->pc = 0x1F5CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5CE0u;
        // 0x1f5ce4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5CE8u;
        goto label_1f5ce8;
    }
    ctx->pc = 0x1F5CE0u;
    {
        const bool branch_taken_0x1f5ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5CE0u;
        // 0x1f5ce4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5ce0) {
            ctx->pc = 0x1F5D20u;
            goto label_1f5d20;
        }
    }
    ctx->pc = 0x1F5CE8u;
label_1f5ce8:
    // 0x1f5ce8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1f5ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f5cec:
    // 0x1f5cec: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_1f5cf0:
    if (ctx->pc == 0x1F5CF0u) {
        ctx->pc = 0x1F5CF4u;
        goto label_1f5cf4;
    }
    ctx->pc = 0x1F5CECu;
    {
        const bool branch_taken_0x1f5cec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f5cec) {
            ctx->pc = 0x1F5CF8u;
            goto label_1f5cf8;
        }
    }
    ctx->pc = 0x1F5CF4u;
label_1f5cf4:
    // 0x1f5cf4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f5cf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5cf8:
    // 0x1f5cf8: 0x221c0  sll         $a0, $v0, 7
    ctx->pc = 0x1f5cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1f5cfc:
    // 0x1f5cfc: 0x3c0238e3  lui         $v0, 0x38E3
    ctx->pc = 0x1f5cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14563 << 16));
label_1f5d00:
    // 0x1f5d00: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x1f5d00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1f5d04:
    // 0x1f5d04: 0x34428e39  ori         $v0, $v0, 0x8E39
    ctx->pc = 0x1f5d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
label_1f5d08:
    // 0x1f5d08: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x1f5d08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f5d0c:
    // 0x1f5d0c: 0x0  nop
    ctx->pc = 0x1f5d0cu;
    // NOP
label_1f5d10:
    // 0x1f5d10: 0x0  nop
    ctx->pc = 0x1f5d10u;
    // NOP
label_1f5d14:
    // 0x1f5d14: 0x1010  mfhi        $v0
    ctx->pc = 0x1f5d14u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1f5d18:
    // 0x1f5d18: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1f5d18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1f5d1c:
    // 0x1f5d1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f5d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f5d20:
    // 0x1f5d20: 0x2604002a  addiu       $a0, $s0, 0x2A
    ctx->pc = 0x1f5d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 42));
label_1f5d24:
    // 0x1f5d24: 0x28810026  slti        $at, $a0, 0x26
    ctx->pc = 0x1f5d24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)38) ? 1 : 0);
label_1f5d28:
    // 0x1f5d28: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_1f5d2c:
    if (ctx->pc == 0x1F5D2Cu) {
        ctx->pc = 0x1F5D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D28u;
        // 0x1f5d2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5D30u;
        goto label_1f5d30;
    }
    ctx->pc = 0x1F5D28u;
    {
        const bool branch_taken_0x1f5d28 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D28u;
        // 0x1f5d2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d28) {
            ctx->pc = 0x1F5D3Cu;
            goto label_1f5d3c;
        }
    }
    ctx->pc = 0x1F5D30u;
label_1f5d30:
    // 0x1f5d30: 0x288300bb  slti        $v1, $a0, 0xBB
    ctx->pc = 0x1f5d30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)187) ? 1 : 0);
label_1f5d34:
    // 0x1f5d34: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1f5d38:
    if (ctx->pc == 0x1F5D38u) {
        ctx->pc = 0x1F5D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D34u;
        // 0x1f5d38: 0x2883004b  slti        $v1, $a0, 0x4B (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)75) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5D3Cu;
        goto label_1f5d3c;
    }
    ctx->pc = 0x1F5D34u;
    {
        const bool branch_taken_0x1f5d34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D34u;
        // 0x1f5d38: 0x2883004b  slti        $v1, $a0, 0x4B (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)75) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d34) {
            ctx->pc = 0x1F5D44u;
            goto label_1f5d44;
        }
    }
    ctx->pc = 0x1F5D3Cu;
label_1f5d3c:
    // 0x1f5d3c: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1f5d40:
    if (ctx->pc == 0x1F5D40u) {
        ctx->pc = 0x1F5D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D3Cu;
        // 0x1f5d40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5D44u;
        goto label_1f5d44;
    }
    ctx->pc = 0x1F5D3Cu;
    {
        const bool branch_taken_0x1f5d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D3Cu;
        // 0x1f5d40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d3c) {
            ctx->pc = 0x1F5DE8u;
            { ctx->pc = 0x1f5de8; return; }
        }
    }
    ctx->pc = 0x1F5D44u;
label_1f5d44:
    // 0x1f5d44: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1f5d48:
    if (ctx->pc == 0x1F5D48u) {
        ctx->pc = 0x1F5D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D44u;
        // 0x1f5d48: 0x28810097  slti        $at, $a0, 0x97 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)151) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5D4Cu;
        goto label_1f5d4c;
    }
    ctx->pc = 0x1F5D44u;
    {
        const bool branch_taken_0x1f5d44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D44u;
        // 0x1f5d48: 0x28810097  slti        $at, $a0, 0x97 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)151) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d44) {
            ctx->pc = 0x1F5D5Cu;
            goto label_1f5d5c;
        }
    }
    ctx->pc = 0x1F5D4Cu;
label_1f5d4c:
    // 0x1f5d4c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1f5d50:
    if (ctx->pc == 0x1F5D50u) {
        ctx->pc = 0x1F5D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D4Cu;
        // 0x1f5d50: 0x2604002a  addiu       $a0, $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 42));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5D54u;
        goto label_1f5d54;
    }
    ctx->pc = 0x1F5D4Cu;
    {
        const bool branch_taken_0x1f5d4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D4Cu;
        // 0x1f5d50: 0x2604002a  addiu       $a0, $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d4c) {
            ctx->pc = 0x1F5D60u;
            goto label_1f5d60;
        }
    }
    ctx->pc = 0x1F5D54u;
label_1f5d54:
    // 0x1f5d54: 0x10000023  b           . + 4 + (0x23 << 2)
label_1f5d58:
    if (ctx->pc == 0x1F5D58u) {
        ctx->pc = 0x1F5D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D54u;
        // 0x1f5d58: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5D5Cu;
        goto label_1f5d5c;
    }
    ctx->pc = 0x1F5D54u;
    {
        const bool branch_taken_0x1f5d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D54u;
        // 0x1f5d58: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d54) {
            ctx->pc = 0x1F5DE4u;
            { ctx->pc = 0x1f5de4; return; }
        }
    }
    ctx->pc = 0x1F5D5Cu;
label_1f5d5c:
    // 0x1f5d5c: 0x2604002a  addiu       $a0, $s0, 0x2A
    ctx->pc = 0x1f5d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 42));
label_1f5d60:
    // 0x1f5d60: 0x2881004b  slti        $at, $a0, 0x4B
    ctx->pc = 0x1f5d60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)75) ? 1 : 0);
label_1f5d64:
    // 0x1f5d64: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_1f5d68:
    if (ctx->pc == 0x1F5D68u) {
        ctx->pc = 0x1F5D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D64u;
        // 0x1f5d68: 0x240300a8  addiu       $v1, $zero, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5D6Cu;
        goto label_1f5d6c;
    }
    ctx->pc = 0x1F5D64u;
    {
        const bool branch_taken_0x1f5d64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D64u;
        // 0x1f5d68: 0x240300a8  addiu       $v1, $zero, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d64) {
            ctx->pc = 0x1F5DACu;
            { ctx->pc = 0x1f5dac; return; }
        }
    }
    ctx->pc = 0x1F5D6Cu;
label_1f5d6c:
    // 0x1f5d6c: 0x2603fff2  addiu       $v1, $s0, -0xE
    ctx->pc = 0x1f5d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967282));
label_1f5d70:
    // 0x1f5d70: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
label_1f5d74:
    if (ctx->pc == 0x1F5D74u) {
        ctx->pc = 0x1F5D78u;
        goto label_1f5d78;
    }
    ctx->pc = 0x1F5D70u;
    {
        const bool branch_taken_0x1f5d70 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1f5d70) {
            ctx->pc = 0x1F5D7Cu;
            goto label_1f5d7c;
        }
    }
    ctx->pc = 0x1F5D78u;
label_1f5d78:
    // 0x1f5d78: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f5d78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5d7c:
    // 0x1f5d7c: 0x329c0  sll         $a1, $v1, 7
    ctx->pc = 0x1f5d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_1f5d80:
    // 0x1f5d80: 0x3c039249  lui         $v1, 0x9249
    ctx->pc = 0x1f5d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37449 << 16));
label_1f5d84:
    // 0x1f5d84: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x1f5d84u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_1f5d88:
    // 0x1f5d88: 0x34632493  ori         $v1, $v1, 0x2493
    ctx->pc = 0x1f5d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9363);
label_1f5d8c:
    // 0x1f5d8c: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x1f5d8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f5d90:
    // 0x1f5d90: 0x0  nop
    ctx->pc = 0x1f5d90u;
    // NOP
label_1f5d94:
    // 0x1f5d94: 0x0  nop
    ctx->pc = 0x1f5d94u;
    // NOP
label_1f5d98:
    // 0x1f5d98: 0x1810  mfhi        $v1
    ctx->pc = 0x1f5d98u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1f5d9c:
    // 0x1f5d9c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f5d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->pc = 0x1f5da0u;
    return;
}
