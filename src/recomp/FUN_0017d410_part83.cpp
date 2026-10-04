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


void FUN_0017d410_part83(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1a54b0u: goto label_1a54b0;
        case 0x1a54b4u: goto label_1a54b4;
        case 0x1a54b8u: goto label_1a54b8;
        case 0x1a54bcu: goto label_1a54bc;
        case 0x1a54c0u: goto label_1a54c0;
        case 0x1a54c4u: goto label_1a54c4;
        case 0x1a54c8u: goto label_1a54c8;
        case 0x1a54ccu: goto label_1a54cc;
        case 0x1a54d0u: goto label_1a54d0;
        case 0x1a54d4u: goto label_1a54d4;
        case 0x1a54d8u: goto label_1a54d8;
        case 0x1a54dcu: goto label_1a54dc;
        case 0x1a54e0u: goto label_1a54e0;
        case 0x1a54e4u: goto label_1a54e4;
        case 0x1a54e8u: goto label_1a54e8;
        case 0x1a54ecu: goto label_1a54ec;
        case 0x1a54f0u: goto label_1a54f0;
        case 0x1a54f4u: goto label_1a54f4;
        case 0x1a54f8u: goto label_1a54f8;
        case 0x1a54fcu: goto label_1a54fc;
        case 0x1a5500u: goto label_1a5500;
        case 0x1a5504u: goto label_1a5504;
        case 0x1a5508u: goto label_1a5508;
        case 0x1a550cu: goto label_1a550c;
        case 0x1a5510u: goto label_1a5510;
        case 0x1a5514u: goto label_1a5514;
        case 0x1a5518u: goto label_1a5518;
        case 0x1a551cu: goto label_1a551c;
        case 0x1a5520u: goto label_1a5520;
        case 0x1a5524u: goto label_1a5524;
        case 0x1a5528u: goto label_1a5528;
        case 0x1a552cu: goto label_1a552c;
        case 0x1a5530u: goto label_1a5530;
        case 0x1a5534u: goto label_1a5534;
        case 0x1a5538u: goto label_1a5538;
        case 0x1a553cu: goto label_1a553c;
        case 0x1a5540u: goto label_1a5540;
        case 0x1a5544u: goto label_1a5544;
        case 0x1a5548u: goto label_1a5548;
        case 0x1a554cu: goto label_1a554c;
        case 0x1a5550u: goto label_1a5550;
        case 0x1a5554u: goto label_1a5554;
        case 0x1a5558u: goto label_1a5558;
        case 0x1a555cu: goto label_1a555c;
        case 0x1a5560u: goto label_1a5560;
        case 0x1a5564u: goto label_1a5564;
        case 0x1a5568u: goto label_1a5568;
        case 0x1a556cu: goto label_1a556c;
        case 0x1a5570u: goto label_1a5570;
        case 0x1a5574u: goto label_1a5574;
        case 0x1a5578u: goto label_1a5578;
        case 0x1a557cu: goto label_1a557c;
        case 0x1a5580u: goto label_1a5580;
        case 0x1a5584u: goto label_1a5584;
        case 0x1a5588u: goto label_1a5588;
        case 0x1a558cu: goto label_1a558c;
        case 0x1a5590u: goto label_1a5590;
        case 0x1a5594u: goto label_1a5594;
        case 0x1a5598u: goto label_1a5598;
        case 0x1a559cu: goto label_1a559c;
        case 0x1a55a0u: goto label_1a55a0;
        case 0x1a55a4u: goto label_1a55a4;
        case 0x1a55a8u: goto label_1a55a8;
        case 0x1a55acu: goto label_1a55ac;
        case 0x1a55b0u: goto label_1a55b0;
        case 0x1a55b4u: goto label_1a55b4;
        case 0x1a55b8u: goto label_1a55b8;
        case 0x1a55bcu: goto label_1a55bc;
        case 0x1a55c0u: goto label_1a55c0;
        case 0x1a55c4u: goto label_1a55c4;
        case 0x1a55c8u: goto label_1a55c8;
        case 0x1a55ccu: goto label_1a55cc;
        case 0x1a55d0u: goto label_1a55d0;
        case 0x1a55d4u: goto label_1a55d4;
        case 0x1a55d8u: goto label_1a55d8;
        case 0x1a55dcu: goto label_1a55dc;
        case 0x1a55e0u: goto label_1a55e0;
        case 0x1a55e4u: goto label_1a55e4;
        case 0x1a55e8u: goto label_1a55e8;
        case 0x1a55ecu: goto label_1a55ec;
        case 0x1a55f0u: goto label_1a55f0;
        case 0x1a55f4u: goto label_1a55f4;
        case 0x1a55f8u: goto label_1a55f8;
        case 0x1a55fcu: goto label_1a55fc;
        case 0x1a5600u: goto label_1a5600;
        case 0x1a5604u: goto label_1a5604;
        case 0x1a5608u: goto label_1a5608;
        case 0x1a560cu: goto label_1a560c;
        case 0x1a5610u: goto label_1a5610;
        case 0x1a5614u: goto label_1a5614;
        case 0x1a5618u: goto label_1a5618;
        case 0x1a561cu: goto label_1a561c;
        case 0x1a5620u: goto label_1a5620;
        case 0x1a5624u: goto label_1a5624;
        case 0x1a5628u: goto label_1a5628;
        case 0x1a562cu: goto label_1a562c;
        case 0x1a5630u: goto label_1a5630;
        case 0x1a5634u: goto label_1a5634;
        case 0x1a5638u: goto label_1a5638;
        case 0x1a563cu: goto label_1a563c;
        case 0x1a5640u: goto label_1a5640;
        case 0x1a5644u: goto label_1a5644;
        case 0x1a5648u: goto label_1a5648;
        case 0x1a564cu: goto label_1a564c;
        case 0x1a5650u: goto label_1a5650;
        case 0x1a5654u: goto label_1a5654;
        case 0x1a5658u: goto label_1a5658;
        case 0x1a565cu: goto label_1a565c;
        case 0x1a5660u: goto label_1a5660;
        case 0x1a5664u: goto label_1a5664;
        case 0x1a5668u: goto label_1a5668;
        case 0x1a566cu: goto label_1a566c;
        case 0x1a5670u: goto label_1a5670;
        case 0x1a5674u: goto label_1a5674;
        case 0x1a5678u: goto label_1a5678;
        case 0x1a567cu: goto label_1a567c;
        case 0x1a5680u: goto label_1a5680;
        case 0x1a5684u: goto label_1a5684;
        case 0x1a5688u: goto label_1a5688;
        case 0x1a568cu: goto label_1a568c;
        case 0x1a5690u: goto label_1a5690;
        case 0x1a5694u: goto label_1a5694;
        case 0x1a5698u: goto label_1a5698;
        case 0x1a569cu: goto label_1a569c;
        case 0x1a56a0u: goto label_1a56a0;
        case 0x1a56a4u: goto label_1a56a4;
        case 0x1a56a8u: goto label_1a56a8;
        case 0x1a56acu: goto label_1a56ac;
        case 0x1a56b0u: goto label_1a56b0;
        case 0x1a56b4u: goto label_1a56b4;
        case 0x1a56b8u: goto label_1a56b8;
        case 0x1a56bcu: goto label_1a56bc;
        case 0x1a56c0u: goto label_1a56c0;
        case 0x1a56c4u: goto label_1a56c4;
        case 0x1a56c8u: goto label_1a56c8;
        case 0x1a56ccu: goto label_1a56cc;
        case 0x1a56d0u: goto label_1a56d0;
        case 0x1a56d4u: goto label_1a56d4;
        case 0x1a56d8u: goto label_1a56d8;
        case 0x1a56dcu: goto label_1a56dc;
        case 0x1a56e0u: goto label_1a56e0;
        case 0x1a56e4u: goto label_1a56e4;
        case 0x1a56e8u: goto label_1a56e8;
        case 0x1a56ecu: goto label_1a56ec;
        case 0x1a56f0u: goto label_1a56f0;
        case 0x1a56f4u: goto label_1a56f4;
        case 0x1a56f8u: goto label_1a56f8;
        case 0x1a56fcu: goto label_1a56fc;
        case 0x1a5700u: goto label_1a5700;
        case 0x1a5704u: goto label_1a5704;
        case 0x1a5708u: goto label_1a5708;
        case 0x1a570cu: goto label_1a570c;
        case 0x1a5710u: goto label_1a5710;
        case 0x1a5714u: goto label_1a5714;
        case 0x1a5718u: goto label_1a5718;
        case 0x1a571cu: goto label_1a571c;
        case 0x1a5720u: goto label_1a5720;
        case 0x1a5724u: goto label_1a5724;
        case 0x1a5728u: goto label_1a5728;
        case 0x1a572cu: goto label_1a572c;
        case 0x1a5730u: goto label_1a5730;
        case 0x1a5734u: goto label_1a5734;
        case 0x1a5738u: goto label_1a5738;
        case 0x1a573cu: goto label_1a573c;
        case 0x1a5740u: goto label_1a5740;
        case 0x1a5744u: goto label_1a5744;
        case 0x1a5748u: goto label_1a5748;
        case 0x1a574cu: goto label_1a574c;
        case 0x1a5750u: goto label_1a5750;
        case 0x1a5754u: goto label_1a5754;
        case 0x1a5758u: goto label_1a5758;
        case 0x1a575cu: goto label_1a575c;
        case 0x1a5760u: goto label_1a5760;
        case 0x1a5764u: goto label_1a5764;
        case 0x1a5768u: goto label_1a5768;
        case 0x1a576cu: goto label_1a576c;
        case 0x1a5770u: goto label_1a5770;
        case 0x1a5774u: goto label_1a5774;
        case 0x1a5778u: goto label_1a5778;
        case 0x1a577cu: goto label_1a577c;
        case 0x1a5780u: goto label_1a5780;
        case 0x1a5784u: goto label_1a5784;
        case 0x1a5788u: goto label_1a5788;
        case 0x1a578cu: goto label_1a578c;
        case 0x1a5790u: goto label_1a5790;
        case 0x1a5794u: goto label_1a5794;
        case 0x1a5798u: goto label_1a5798;
        case 0x1a579cu: goto label_1a579c;
        case 0x1a57a0u: goto label_1a57a0;
        case 0x1a57a4u: goto label_1a57a4;
        case 0x1a57a8u: goto label_1a57a8;
        case 0x1a57acu: goto label_1a57ac;
        case 0x1a57b0u: goto label_1a57b0;
        case 0x1a57b4u: goto label_1a57b4;
        case 0x1a57b8u: goto label_1a57b8;
        case 0x1a57bcu: goto label_1a57bc;
        case 0x1a57c0u: goto label_1a57c0;
        case 0x1a57c4u: goto label_1a57c4;
        case 0x1a57c8u: goto label_1a57c8;
        case 0x1a57ccu: goto label_1a57cc;
        case 0x1a57d0u: goto label_1a57d0;
        case 0x1a57d4u: goto label_1a57d4;
        case 0x1a57d8u: goto label_1a57d8;
        case 0x1a57dcu: goto label_1a57dc;
        case 0x1a57e0u: goto label_1a57e0;
        case 0x1a57e4u: goto label_1a57e4;
        case 0x1a57e8u: goto label_1a57e8;
        case 0x1a57ecu: goto label_1a57ec;
        case 0x1a57f0u: goto label_1a57f0;
        case 0x1a57f4u: goto label_1a57f4;
        case 0x1a57f8u: goto label_1a57f8;
        case 0x1a57fcu: goto label_1a57fc;
        case 0x1a5800u: goto label_1a5800;
        case 0x1a5804u: goto label_1a5804;
        case 0x1a5808u: goto label_1a5808;
        case 0x1a580cu: goto label_1a580c;
        case 0x1a5810u: goto label_1a5810;
        case 0x1a5814u: goto label_1a5814;
        case 0x1a5818u: goto label_1a5818;
        case 0x1a581cu: goto label_1a581c;
        case 0x1a5820u: goto label_1a5820;
        case 0x1a5824u: goto label_1a5824;
        case 0x1a5828u: goto label_1a5828;
        case 0x1a582cu: goto label_1a582c;
        case 0x1a5830u: goto label_1a5830;
        case 0x1a5834u: goto label_1a5834;
        case 0x1a5838u: goto label_1a5838;
        case 0x1a583cu: goto label_1a583c;
        case 0x1a5840u: goto label_1a5840;
        case 0x1a5844u: goto label_1a5844;
        case 0x1a5848u: goto label_1a5848;
        case 0x1a584cu: goto label_1a584c;
        case 0x1a5850u: goto label_1a5850;
        case 0x1a5854u: goto label_1a5854;
        case 0x1a5858u: goto label_1a5858;
        case 0x1a585cu: goto label_1a585c;
        case 0x1a5860u: goto label_1a5860;
        case 0x1a5864u: goto label_1a5864;
        case 0x1a5868u: goto label_1a5868;
        case 0x1a586cu: goto label_1a586c;
        case 0x1a5870u: goto label_1a5870;
        case 0x1a5874u: goto label_1a5874;
        case 0x1a5878u: goto label_1a5878;
        case 0x1a587cu: goto label_1a587c;
        case 0x1a5880u: goto label_1a5880;
        case 0x1a5884u: goto label_1a5884;
        case 0x1a5888u: goto label_1a5888;
        case 0x1a588cu: goto label_1a588c;
        case 0x1a5890u: goto label_1a5890;
        case 0x1a5894u: goto label_1a5894;
        case 0x1a5898u: goto label_1a5898;
        case 0x1a589cu: goto label_1a589c;
        case 0x1a58a0u: goto label_1a58a0;
        case 0x1a58a4u: goto label_1a58a4;
        case 0x1a58a8u: goto label_1a58a8;
        case 0x1a58acu: goto label_1a58ac;
        case 0x1a58b0u: goto label_1a58b0;
        case 0x1a58b4u: goto label_1a58b4;
        case 0x1a58b8u: goto label_1a58b8;
        case 0x1a58bcu: goto label_1a58bc;
        case 0x1a58c0u: goto label_1a58c0;
        case 0x1a58c4u: goto label_1a58c4;
        case 0x1a58c8u: goto label_1a58c8;
        case 0x1a58ccu: goto label_1a58cc;
        case 0x1a58d0u: goto label_1a58d0;
        case 0x1a58d4u: goto label_1a58d4;
        case 0x1a58d8u: goto label_1a58d8;
        case 0x1a58dcu: goto label_1a58dc;
        case 0x1a58e0u: goto label_1a58e0;
        case 0x1a58e4u: goto label_1a58e4;
        case 0x1a58e8u: goto label_1a58e8;
        case 0x1a58ecu: goto label_1a58ec;
        case 0x1a58f0u: goto label_1a58f0;
        case 0x1a58f4u: goto label_1a58f4;
        case 0x1a58f8u: goto label_1a58f8;
        case 0x1a58fcu: goto label_1a58fc;
        case 0x1a5900u: goto label_1a5900;
        case 0x1a5904u: goto label_1a5904;
        case 0x1a5908u: goto label_1a5908;
        case 0x1a590cu: goto label_1a590c;
        case 0x1a5910u: goto label_1a5910;
        case 0x1a5914u: goto label_1a5914;
        case 0x1a5918u: goto label_1a5918;
        case 0x1a591cu: goto label_1a591c;
        case 0x1a5920u: goto label_1a5920;
        case 0x1a5924u: goto label_1a5924;
        case 0x1a5928u: goto label_1a5928;
        case 0x1a592cu: goto label_1a592c;
        case 0x1a5930u: goto label_1a5930;
        case 0x1a5934u: goto label_1a5934;
        case 0x1a5938u: goto label_1a5938;
        case 0x1a593cu: goto label_1a593c;
        case 0x1a5940u: goto label_1a5940;
        case 0x1a5944u: goto label_1a5944;
        case 0x1a5948u: goto label_1a5948;
        case 0x1a594cu: goto label_1a594c;
        case 0x1a5950u: goto label_1a5950;
        case 0x1a5954u: goto label_1a5954;
        case 0x1a5958u: goto label_1a5958;
        case 0x1a595cu: goto label_1a595c;
        case 0x1a5960u: goto label_1a5960;
        case 0x1a5964u: goto label_1a5964;
        case 0x1a5968u: goto label_1a5968;
        case 0x1a596cu: goto label_1a596c;
        case 0x1a5970u: goto label_1a5970;
        case 0x1a5974u: goto label_1a5974;
        case 0x1a5978u: goto label_1a5978;
        case 0x1a597cu: goto label_1a597c;
        case 0x1a5980u: goto label_1a5980;
        case 0x1a5984u: goto label_1a5984;
        case 0x1a5988u: goto label_1a5988;
        case 0x1a598cu: goto label_1a598c;
        case 0x1a5990u: goto label_1a5990;
        case 0x1a5994u: goto label_1a5994;
        case 0x1a5998u: goto label_1a5998;
        case 0x1a599cu: goto label_1a599c;
        case 0x1a59a0u: goto label_1a59a0;
        case 0x1a59a4u: goto label_1a59a4;
        case 0x1a59a8u: goto label_1a59a8;
        case 0x1a59acu: goto label_1a59ac;
        case 0x1a59b0u: goto label_1a59b0;
        case 0x1a59b4u: goto label_1a59b4;
        case 0x1a59b8u: goto label_1a59b8;
        case 0x1a59bcu: goto label_1a59bc;
        case 0x1a59c0u: goto label_1a59c0;
        case 0x1a59c4u: goto label_1a59c4;
        case 0x1a59c8u: goto label_1a59c8;
        case 0x1a59ccu: goto label_1a59cc;
        case 0x1a59d0u: goto label_1a59d0;
        case 0x1a59d4u: goto label_1a59d4;
        case 0x1a59d8u: goto label_1a59d8;
        case 0x1a59dcu: goto label_1a59dc;
        case 0x1a59e0u: goto label_1a59e0;
        case 0x1a59e4u: goto label_1a59e4;
        case 0x1a59e8u: goto label_1a59e8;
        case 0x1a59ecu: goto label_1a59ec;
        case 0x1a59f0u: goto label_1a59f0;
        case 0x1a59f4u: goto label_1a59f4;
        case 0x1a59f8u: goto label_1a59f8;
        case 0x1a59fcu: goto label_1a59fc;
        case 0x1a5a00u: goto label_1a5a00;
        case 0x1a5a04u: goto label_1a5a04;
        case 0x1a5a08u: goto label_1a5a08;
        case 0x1a5a0cu: goto label_1a5a0c;
        case 0x1a5a10u: goto label_1a5a10;
        case 0x1a5a14u: goto label_1a5a14;
        case 0x1a5a18u: goto label_1a5a18;
        case 0x1a5a1cu: goto label_1a5a1c;
        case 0x1a5a20u: goto label_1a5a20;
        case 0x1a5a24u: goto label_1a5a24;
        case 0x1a5a28u: goto label_1a5a28;
        case 0x1a5a2cu: goto label_1a5a2c;
        case 0x1a5a30u: goto label_1a5a30;
        case 0x1a5a34u: goto label_1a5a34;
        case 0x1a5a38u: goto label_1a5a38;
        case 0x1a5a3cu: goto label_1a5a3c;
        case 0x1a5a40u: goto label_1a5a40;
        case 0x1a5a44u: goto label_1a5a44;
        case 0x1a5a48u: goto label_1a5a48;
        case 0x1a5a4cu: goto label_1a5a4c;
        case 0x1a5a50u: goto label_1a5a50;
        case 0x1a5a54u: goto label_1a5a54;
        case 0x1a5a58u: goto label_1a5a58;
        case 0x1a5a5cu: goto label_1a5a5c;
        case 0x1a5a60u: goto label_1a5a60;
        case 0x1a5a64u: goto label_1a5a64;
        case 0x1a5a68u: goto label_1a5a68;
        case 0x1a5a6cu: goto label_1a5a6c;
        case 0x1a5a70u: goto label_1a5a70;
        case 0x1a5a74u: goto label_1a5a74;
        case 0x1a5a78u: goto label_1a5a78;
        case 0x1a5a7cu: goto label_1a5a7c;
        case 0x1a5a80u: goto label_1a5a80;
        case 0x1a5a84u: goto label_1a5a84;
        case 0x1a5a88u: goto label_1a5a88;
        case 0x1a5a8cu: goto label_1a5a8c;
        case 0x1a5a90u: goto label_1a5a90;
        case 0x1a5a94u: goto label_1a5a94;
        case 0x1a5a98u: goto label_1a5a98;
        case 0x1a5a9cu: goto label_1a5a9c;
        case 0x1a5aa0u: goto label_1a5aa0;
        case 0x1a5aa4u: goto label_1a5aa4;
        case 0x1a5aa8u: goto label_1a5aa8;
        case 0x1a5aacu: goto label_1a5aac;
        case 0x1a5ab0u: goto label_1a5ab0;
        case 0x1a5ab4u: goto label_1a5ab4;
        case 0x1a5ab8u: goto label_1a5ab8;
        case 0x1a5abcu: goto label_1a5abc;
        case 0x1a5ac0u: goto label_1a5ac0;
        case 0x1a5ac4u: goto label_1a5ac4;
        case 0x1a5ac8u: goto label_1a5ac8;
        case 0x1a5accu: goto label_1a5acc;
        case 0x1a5ad0u: goto label_1a5ad0;
        case 0x1a5ad4u: goto label_1a5ad4;
        case 0x1a5ad8u: goto label_1a5ad8;
        case 0x1a5adcu: goto label_1a5adc;
        case 0x1a5ae0u: goto label_1a5ae0;
        case 0x1a5ae4u: goto label_1a5ae4;
        case 0x1a5ae8u: goto label_1a5ae8;
        case 0x1a5aecu: goto label_1a5aec;
        case 0x1a5af0u: goto label_1a5af0;
        case 0x1a5af4u: goto label_1a5af4;
        case 0x1a5af8u: goto label_1a5af8;
        case 0x1a5afcu: goto label_1a5afc;
        case 0x1a5b00u: goto label_1a5b00;
        case 0x1a5b04u: goto label_1a5b04;
        case 0x1a5b08u: goto label_1a5b08;
        case 0x1a5b0cu: goto label_1a5b0c;
        case 0x1a5b10u: goto label_1a5b10;
        case 0x1a5b14u: goto label_1a5b14;
        case 0x1a5b18u: goto label_1a5b18;
        case 0x1a5b1cu: goto label_1a5b1c;
        case 0x1a5b20u: goto label_1a5b20;
        case 0x1a5b24u: goto label_1a5b24;
        case 0x1a5b28u: goto label_1a5b28;
        case 0x1a5b2cu: goto label_1a5b2c;
        case 0x1a5b30u: goto label_1a5b30;
        case 0x1a5b34u: goto label_1a5b34;
        case 0x1a5b38u: goto label_1a5b38;
        case 0x1a5b3cu: goto label_1a5b3c;
        case 0x1a5b40u: goto label_1a5b40;
        case 0x1a5b44u: goto label_1a5b44;
        case 0x1a5b48u: goto label_1a5b48;
        case 0x1a5b4cu: goto label_1a5b4c;
        case 0x1a5b50u: goto label_1a5b50;
        case 0x1a5b54u: goto label_1a5b54;
        case 0x1a5b58u: goto label_1a5b58;
        case 0x1a5b5cu: goto label_1a5b5c;
        case 0x1a5b60u: goto label_1a5b60;
        case 0x1a5b64u: goto label_1a5b64;
        case 0x1a5b68u: goto label_1a5b68;
        case 0x1a5b6cu: goto label_1a5b6c;
        case 0x1a5b70u: goto label_1a5b70;
        case 0x1a5b74u: goto label_1a5b74;
        case 0x1a5b78u: goto label_1a5b78;
        case 0x1a5b7cu: goto label_1a5b7c;
        case 0x1a5b80u: goto label_1a5b80;
        case 0x1a5b84u: goto label_1a5b84;
        case 0x1a5b88u: goto label_1a5b88;
        case 0x1a5b8cu: goto label_1a5b8c;
        case 0x1a5b90u: goto label_1a5b90;
        case 0x1a5b94u: goto label_1a5b94;
        case 0x1a5b98u: goto label_1a5b98;
        case 0x1a5b9cu: goto label_1a5b9c;
        case 0x1a5ba0u: goto label_1a5ba0;
        case 0x1a5ba4u: goto label_1a5ba4;
        case 0x1a5ba8u: goto label_1a5ba8;
        case 0x1a5bacu: goto label_1a5bac;
        case 0x1a5bb0u: goto label_1a5bb0;
        case 0x1a5bb4u: goto label_1a5bb4;
        case 0x1a5bb8u: goto label_1a5bb8;
        case 0x1a5bbcu: goto label_1a5bbc;
        case 0x1a5bc0u: goto label_1a5bc0;
        case 0x1a5bc4u: goto label_1a5bc4;
        case 0x1a5bc8u: goto label_1a5bc8;
        case 0x1a5bccu: goto label_1a5bcc;
        case 0x1a5bd0u: goto label_1a5bd0;
        case 0x1a5bd4u: goto label_1a5bd4;
        case 0x1a5bd8u: goto label_1a5bd8;
        case 0x1a5bdcu: goto label_1a5bdc;
        case 0x1a5be0u: goto label_1a5be0;
        case 0x1a5be4u: goto label_1a5be4;
        case 0x1a5be8u: goto label_1a5be8;
        case 0x1a5becu: goto label_1a5bec;
        case 0x1a5bf0u: goto label_1a5bf0;
        case 0x1a5bf4u: goto label_1a5bf4;
        case 0x1a5bf8u: goto label_1a5bf8;
        case 0x1a5bfcu: goto label_1a5bfc;
        case 0x1a5c00u: goto label_1a5c00;
        case 0x1a5c04u: goto label_1a5c04;
        case 0x1a5c08u: goto label_1a5c08;
        case 0x1a5c0cu: goto label_1a5c0c;
        case 0x1a5c10u: goto label_1a5c10;
        case 0x1a5c14u: goto label_1a5c14;
        case 0x1a5c18u: goto label_1a5c18;
        case 0x1a5c1cu: goto label_1a5c1c;
        case 0x1a5c20u: goto label_1a5c20;
        case 0x1a5c24u: goto label_1a5c24;
        case 0x1a5c28u: goto label_1a5c28;
        case 0x1a5c2cu: goto label_1a5c2c;
        case 0x1a5c30u: goto label_1a5c30;
        case 0x1a5c34u: goto label_1a5c34;
        case 0x1a5c38u: goto label_1a5c38;
        case 0x1a5c3cu: goto label_1a5c3c;
        case 0x1a5c40u: goto label_1a5c40;
        case 0x1a5c44u: goto label_1a5c44;
        case 0x1a5c48u: goto label_1a5c48;
        case 0x1a5c4cu: goto label_1a5c4c;
        case 0x1a5c50u: goto label_1a5c50;
        case 0x1a5c54u: goto label_1a5c54;
        case 0x1a5c58u: goto label_1a5c58;
        case 0x1a5c5cu: goto label_1a5c5c;
        case 0x1a5c60u: goto label_1a5c60;
        case 0x1a5c64u: goto label_1a5c64;
        case 0x1a5c68u: goto label_1a5c68;
        case 0x1a5c6cu: goto label_1a5c6c;
        case 0x1a5c70u: goto label_1a5c70;
        case 0x1a5c74u: goto label_1a5c74;
        case 0x1a5c78u: goto label_1a5c78;
        case 0x1a5c7cu: goto label_1a5c7c;
        default: return;
    }

label_1a54b0:
    // 0x1a54b0: 0xf  sync
    ctx->pc = 0x1a54b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a54b4:
    // 0x1a54b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a54b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a54b8:
    // 0x1a54b8: 0x3e00008  jr          $ra
label_1a54bc:
    if (ctx->pc == 0x1A54BCu) {
        ctx->pc = 0x1A54BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A54B8u;
        // 0x1a54bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A54C0u;
        goto label_1a54c0;
    }
    ctx->pc = 0x1A54B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A54BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A54B8u;
        // 0x1a54bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A54B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A54C0u;
label_1a54c0:
    // 0x1a54c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a54c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a54c4:
    // 0x1a54c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a54c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a54c8:
    // 0x1a54c8: 0xc069174  jal         func_1A45D0
label_1a54cc:
    if (ctx->pc == 0x1A54CCu) {
        ctx->pc = 0x1A54D0u;
        goto label_1a54d0;
    }
    ctx->pc = 0x1A54C8u;
    SET_GPR_U32(ctx, 31, 0x1A54D0u);
    ctx->pc = 0x1A45D0u;
    { ctx->pc = 0x1a45d0; return; }
    ctx->pc = 0x1A54D0u;
label_1a54d0:
    // 0x1a54d0: 0xf  sync
    ctx->pc = 0x1a54d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a54d4:
    // 0x1a54d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a54d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a54d8:
    // 0x1a54d8: 0x3e00008  jr          $ra
label_1a54dc:
    if (ctx->pc == 0x1A54DCu) {
        ctx->pc = 0x1A54DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A54D8u;
        // 0x1a54dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A54E0u;
        goto label_1a54e0;
    }
    ctx->pc = 0x1A54D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A54DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A54D8u;
        // 0x1a54dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A54D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A54E0u;
label_1a54e0:
    // 0x1a54e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a54e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a54e4:
    // 0x1a54e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a54e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a54e8:
    // 0x1a54e8: 0xc069178  jal         func_1A45E0
label_1a54ec:
    if (ctx->pc == 0x1A54ECu) {
        ctx->pc = 0x1A54F0u;
        goto label_1a54f0;
    }
    ctx->pc = 0x1A54E8u;
    SET_GPR_U32(ctx, 31, 0x1A54F0u);
    ctx->pc = 0x1A45E0u;
    { ctx->pc = 0x1a45e0; return; }
    ctx->pc = 0x1A54F0u;
label_1a54f0:
    // 0x1a54f0: 0xf  sync
    ctx->pc = 0x1a54f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a54f4:
    // 0x1a54f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a54f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a54f8:
    // 0x1a54f8: 0x3e00008  jr          $ra
label_1a54fc:
    if (ctx->pc == 0x1A54FCu) {
        ctx->pc = 0x1A54FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A54F8u;
        // 0x1a54fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5500u;
        goto label_1a5500;
    }
    ctx->pc = 0x1A54F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A54FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A54F8u;
        // 0x1a54fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A54F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5500u;
label_1a5500:
    // 0x1a5500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a5500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a5504:
    // 0x1a5504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a5504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a5508:
    // 0x1a5508: 0xc06917c  jal         func_1A45F0
label_1a550c:
    if (ctx->pc == 0x1A550Cu) {
        ctx->pc = 0x1A5510u;
        goto label_1a5510;
    }
    ctx->pc = 0x1A5508u;
    SET_GPR_U32(ctx, 31, 0x1A5510u);
    ctx->pc = 0x1A45F0u;
    { ctx->pc = 0x1a45f0; return; }
    ctx->pc = 0x1A5510u;
label_1a5510:
    // 0x1a5510: 0xf  sync
    ctx->pc = 0x1a5510u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a5514:
    // 0x1a5514: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a5514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5518:
    // 0x1a5518: 0x3e00008  jr          $ra
label_1a551c:
    if (ctx->pc == 0x1A551Cu) {
        ctx->pc = 0x1A551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5518u;
        // 0x1a551c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5520u;
        goto label_1a5520;
    }
    ctx->pc = 0x1A5518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5518u;
        // 0x1a551c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5520u;
label_1a5520:
    // 0x1a5520: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a5520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1a5524:
    // 0x1a5524: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a5524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a5528:
    // 0x1a5528: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a5528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a552c:
    // 0x1a552c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1a552cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_1a5530:
    // 0x1a5530: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1a5530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_1a5534:
    // 0x1a5534: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1a5534u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
label_1a5538:
    // 0x1a5538: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a5538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1a553c:
    // 0x1a553c: 0x3c15002d  lui         $s5, 0x2D
    ctx->pc = 0x1a553cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)45 << 16));
label_1a5540:
    // 0x1a5540: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a5540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1a5544:
    // 0x1a5544: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1a5544u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a5548:
    // 0x1a5548: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a5548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a554c:
    // 0x1a554c: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x1a554cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a5550:
    // 0x1a5550: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a5554:
    // 0x1a5554: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x1a5554u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_1a5558:
    // 0x1a5558: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1a5558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1a555c:
    // 0x1a555c: 0x26300009  addiu       $s0, $s1, 0x9
    ctx->pc = 0x1a555cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 9));
label_1a5560:
    // 0x1a5560: 0xc069218  jal         func_1A4860
label_1a5564:
    if (ctx->pc == 0x1A5564u) {
        ctx->pc = 0x1A5564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5560u;
        // 0x1a5564: 0x8ec40ec0  lw          $a0, 0xEC0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3776)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5568u;
        goto label_1a5568;
    }
    ctx->pc = 0x1A5560u;
    SET_GPR_U32(ctx, 31, 0x1A5568u);
    ctx->pc = 0x1A5564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5560u;
    // 0x1a5564: 0x8ec40ec0  lw          $a0, 0xEC0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1A5568u;
label_1a5568:
    // 0x1a5568: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a5568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a556c:
    // 0x1a556c: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x1a556cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
label_1a5570:
    // 0x1a5570: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1a5570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a5574:
    // 0x1a5574: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1a5574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1a5578:
    // 0x1a5578: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x1a5578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_1a557c:
    // 0x1a557c: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x1a557cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_1a5580:
    // 0x1a5580: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x1a5580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1a5584:
    // 0x1a5584: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1a5584u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1a5588:
    // 0x1a5588: 0x1054000f  beq         $v0, $s4, . + 4 + (0xF << 2)
label_1a558c:
    if (ctx->pc == 0x1A558Cu) {
        ctx->pc = 0x1A558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5588u;
        // 0x1a558c: 0x28450002  slti        $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5590u;
        goto label_1a5590;
    }
    ctx->pc = 0x1A5588u;
    {
        const bool branch_taken_0x1a5588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x1A558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5588u;
        // 0x1a558c: 0x28450002  slti        $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5588) {
            ctx->pc = 0x1A55C8u;
            goto label_1a55c8;
        }
    }
    ctx->pc = 0x1A5590u;
label_1a5590:
    // 0x1a5590: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_1a5594:
    if (ctx->pc == 0x1A5594u) {
        ctx->pc = 0x1A5594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5590u;
        // 0x1a5594: 0x26a4a4c0  addiu       $a0, $s5, -0x5B40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294943936));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5598u;
        goto label_1a5598;
    }
    ctx->pc = 0x1A5590u;
    {
        const bool branch_taken_0x1a5590 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5590u;
        // 0x1a5594: 0x26a4a4c0  addiu       $a0, $s5, -0x5B40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294943936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5590) {
            ctx->pc = 0x1A55A8u;
            goto label_1a55a8;
        }
    }
    ctx->pc = 0x1A5598u;
label_1a5598:
    // 0x1a5598: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a559c:
    if (ctx->pc == 0x1A559Cu) {
        ctx->pc = 0x1A559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5598u;
        // 0x1a559c: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A55A0u;
        goto label_1a55a0;
    }
    ctx->pc = 0x1A5598u;
    {
        const bool branch_taken_0x1a5598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5598u;
        // 0x1a559c: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5598) {
            ctx->pc = 0x1A55B8u;
            goto label_1a55b8;
        }
    }
    ctx->pc = 0x1A55A0u;
label_1a55a0:
    // 0x1a55a0: 0x10000011  b           . + 4 + (0x11 << 2)
label_1a55a4:
    if (ctx->pc == 0x1A55A4u) {
        ctx->pc = 0x1A55A8u;
        goto label_1a55a8;
    }
    ctx->pc = 0x1A55A0u;
    {
        const bool branch_taken_0x1a55a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a55a0) {
            ctx->pc = 0x1A55E8u;
            goto label_1a55e8;
        }
    }
    ctx->pc = 0x1A55A8u;
label_1a55a8:
    // 0x1a55a8: 0x1053000b  beq         $v0, $s3, . + 4 + (0xB << 2)
label_1a55ac:
    if (ctx->pc == 0x1A55ACu) {
        ctx->pc = 0x1A55ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A55A8u;
        // 0x1a55ac: 0x2031821  addu        $v1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A55B0u;
        goto label_1a55b0;
    }
    ctx->pc = 0x1A55A8u;
    {
        const bool branch_taken_0x1a55a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1A55ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A55A8u;
        // 0x1a55ac: 0x2031821  addu        $v1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a55a8) {
            ctx->pc = 0x1A55D8u;
            goto label_1a55d8;
        }
    }
    ctx->pc = 0x1A55B0u;
label_1a55b0:
    // 0x1a55b0: 0x1000000d  b           . + 4 + (0xD << 2)
label_1a55b4:
    if (ctx->pc == 0x1A55B4u) {
        ctx->pc = 0x1A55B8u;
        goto label_1a55b8;
    }
    ctx->pc = 0x1A55B0u;
    {
        const bool branch_taken_0x1a55b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a55b0) {
            ctx->pc = 0x1A55E8u;
            goto label_1a55e8;
        }
    }
    ctx->pc = 0x1A55B8u;
label_1a55b8:
    // 0x1a55b8: 0xc0691d4  jal         func_1A4750
label_1a55bc:
    if (ctx->pc == 0x1A55BCu) {
        ctx->pc = 0x1A55BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A55B8u;
        // 0x1a55bc: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A55C0u;
        goto label_1a55c0;
    }
    ctx->pc = 0x1A55B8u;
    SET_GPR_U32(ctx, 31, 0x1A55C0u);
    ctx->pc = 0x1A55BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A55B8u;
    // 0x1a55bc: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4750u;
    { ctx->pc = 0x1a4750; return; }
    ctx->pc = 0x1A55C0u;
label_1a55c0:
    // 0x1a55c0: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
label_1a55c4:
    if (ctx->pc == 0x1A55C4u) {
        ctx->pc = 0x1A55C8u;
        goto label_1a55c8;
    }
    ctx->pc = 0x1A55C0u;
    {
        const bool branch_taken_0x1a55c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a55c0) {
            ctx->pc = 0x1A5560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5560;
        }
    }
    ctx->pc = 0x1A55C8u;
label_1a55c8:
    // 0x1a55c8: 0xc0691b4  jal         func_1A46D0
label_1a55cc:
    if (ctx->pc == 0x1A55CCu) {
        ctx->pc = 0x1A55CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A55C8u;
        // 0x1a55cc: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A55D0u;
        goto label_1a55d0;
    }
    ctx->pc = 0x1A55C8u;
    SET_GPR_U32(ctx, 31, 0x1A55D0u);
    ctx->pc = 0x1A55CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A55C8u;
    // 0x1a55cc: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A46D0u;
    { ctx->pc = 0x1a46d0; return; }
    ctx->pc = 0x1A55D0u;
label_1a55d0:
    // 0x1a55d0: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
label_1a55d4:
    if (ctx->pc == 0x1A55D4u) {
        ctx->pc = 0x1A55D8u;
        goto label_1a55d8;
    }
    ctx->pc = 0x1A55D0u;
    {
        const bool branch_taken_0x1a55d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a55d0) {
            ctx->pc = 0x1A5560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5560;
        }
    }
    ctx->pc = 0x1A55D8u;
label_1a55d8:
    // 0x1a55d8: 0xc0691e4  jal         func_1A4790
label_1a55dc:
    if (ctx->pc == 0x1A55DCu) {
        ctx->pc = 0x1A55DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A55D8u;
        // 0x1a55dc: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A55E0u;
        goto label_1a55e0;
    }
    ctx->pc = 0x1A55D8u;
    SET_GPR_U32(ctx, 31, 0x1A55E0u);
    ctx->pc = 0x1A55DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A55D8u;
    // 0x1a55dc: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4790u;
    { ctx->pc = 0x1a4790; return; }
    ctx->pc = 0x1A55E0u;
label_1a55e0:
    // 0x1a55e0: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
label_1a55e4:
    if (ctx->pc == 0x1A55E4u) {
        ctx->pc = 0x1A55E8u;
        goto label_1a55e8;
    }
    ctx->pc = 0x1A55E0u;
    {
        const bool branch_taken_0x1a55e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a55e0) {
            ctx->pc = 0x1A5560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5560;
        }
    }
    ctx->pc = 0x1A55E8u;
label_1a55e8:
    // 0x1a55e8: 0xc069a22  jal         func_1A6888
label_1a55ec:
    if (ctx->pc == 0x1A55ECu) {
        ctx->pc = 0x1A55F0u;
        goto label_1a55f0;
    }
    ctx->pc = 0x1A55E8u;
    SET_GPR_U32(ctx, 31, 0x1A55F0u);
    ctx->pc = 0x1A6888u;
    { ctx->pc = 0x1a6888; return; }
    ctx->pc = 0x1A55F0u;
label_1a55f0:
    // 0x1a55f0: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
label_1a55f4:
    if (ctx->pc == 0x1A55F4u) {
        ctx->pc = 0x1A55F8u;
        goto label_1a55f8;
    }
    ctx->pc = 0x1A55F0u;
    {
        const bool branch_taken_0x1a55f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a55f0) {
            ctx->pc = 0x1A5560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5560;
        }
    }
    ctx->pc = 0x1A55F8u;
label_1a55f8:
    // 0x1a55f8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a55f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1a55fc:
    // 0x1a55fc: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1a55fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_1a5600:
    // 0x1a5600: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x1a5600u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
label_1a5604:
    // 0x1a5604: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1a5604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1a5608:
    // 0x1a5608: 0x8e025b58  lw          $v0, 0x5B58($s0)
    ctx->pc = 0x1a5608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23384)));
label_1a560c:
    // 0x1a560c: 0x1c40001c  bgtz        $v0, . + 4 + (0x1C << 2)
label_1a5610:
    if (ctx->pc == 0x1A5610u) {
        ctx->pc = 0x1A5610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A560Cu;
        // 0x1a5610: 0xffb10060  sd          $s1, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5614u;
        goto label_1a5614;
    }
    ctx->pc = 0x1A560Cu;
    {
        const bool branch_taken_0x1a560c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1A5610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A560Cu;
        // 0x1a5610: 0xffb10060  sd          $s1, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a560c) {
            ctx->pc = 0x1A5680u;
            goto label_1a5680;
        }
    }
    ctx->pc = 0x1A5614u;
label_1a5614:
    // 0x1a5614: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1a5614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1a5618:
    // 0x1a5618: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1a5618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1a561c:
    // 0x1a561c: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x1a561cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_1a5620:
    // 0x1a5620: 0xc069208  jal         func_1A4820
label_1a5624:
    if (ctx->pc == 0x1A5624u) {
        ctx->pc = 0x1A5624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5620u;
        // 0x1a5624: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5628u;
        goto label_1a5628;
    }
    ctx->pc = 0x1A5620u;
    SET_GPR_U32(ctx, 31, 0x1A5628u);
    ctx->pc = 0x1A5624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5620u;
    // 0x1a5624: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1A5628u;
label_1a5628:
    // 0x1a5628: 0x3c110037  lui         $s1, 0x37
    ctx->pc = 0x1a5628u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
label_1a562c:
    // 0x1a562c: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
label_1a5630:
    if (ctx->pc == 0x1A5630u) {
        ctx->pc = 0x1A5630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A562Cu;
        // 0x1a5630: 0xae220ec0  sw          $v0, 0xEC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3776), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5634u;
        goto label_1a5634;
    }
    ctx->pc = 0x1A562Cu;
    {
        const bool branch_taken_0x1a562c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A5630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A562Cu;
        // 0x1a5630: 0xae220ec0  sw          $v0, 0xEC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3776), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a562c) {
            ctx->pc = 0x1A5680u;
            goto label_1a5680;
        }
    }
    ctx->pc = 0x1A5634u;
label_1a5634:
    // 0x1a5634: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a5634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
label_1a5638:
    // 0x1a5638: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1a5638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1a563c:
    // 0x1a563c: 0x3c05002e  lui         $a1, 0x2E
    ctx->pc = 0x1a563cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)46 << 16));
label_1a5640:
    // 0x1a5640: 0x24425520  addiu       $v0, $v0, 0x5520
    ctx->pc = 0x1a5640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21792));
label_1a5644:
    // 0x1a5644: 0x24630ac0  addiu       $v1, $v1, 0xAC0
    ctx->pc = 0x1a5644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2752));
label_1a5648:
    // 0x1a5648: 0x24a58170  addiu       $a1, $a1, -0x7E90
    ctx->pc = 0x1a5648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934896));
label_1a564c:
    // 0x1a564c: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x1a564cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1a5650:
    // 0x1a5650: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1a5650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_1a5654:
    // 0x1a5654: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1a5654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_1a5658:
    // 0x1a5658: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a5658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a565c:
    // 0x1a565c: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x1a565cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
label_1a5660:
    // 0x1a5660: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1a5660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_1a5664:
    // 0x1a5664: 0xc069188  jal         func_1A4620
label_1a5668:
    if (ctx->pc == 0x1A5668u) {
        ctx->pc = 0x1A5668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5664u;
        // 0x1a5668: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A566Cu;
        goto label_1a566c;
    }
    ctx->pc = 0x1A5664u;
    SET_GPR_U32(ctx, 31, 0x1A566Cu);
    ctx->pc = 0x1A5668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5664u;
    // 0x1a5668: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4620u;
    { ctx->pc = 0x1a4620; return; }
    ctx->pc = 0x1A566Cu;
label_1a566c:
    // 0x1a566c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a566cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a5670:
    // 0x1a5670: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
label_1a5674:
    if (ctx->pc == 0x1A5674u) {
        ctx->pc = 0x1A5674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5670u;
        // 0x1a5674: 0xae045b58  sw          $a0, 0x5B58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 23384), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5678u;
        goto label_1a5678;
    }
    ctx->pc = 0x1A5670u;
    {
        const bool branch_taken_0x1a5670 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1A5674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5670u;
        // 0x1a5674: 0xae045b58  sw          $a0, 0x5B58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 23384), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5670) {
            ctx->pc = 0x1A5688u;
            goto label_1a5688;
        }
    }
    ctx->pc = 0x1A5678u;
label_1a5678:
    // 0x1a5678: 0xc06920c  jal         func_1A4830
label_1a567c:
    if (ctx->pc == 0x1A567Cu) {
        ctx->pc = 0x1A567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5678u;
        // 0x1a567c: 0x8e240ec0  lw          $a0, 0xEC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3776)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5680u;
        goto label_1a5680;
    }
    ctx->pc = 0x1A5678u;
    SET_GPR_U32(ctx, 31, 0x1A5680u);
    ctx->pc = 0x1A567Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5678u;
    // 0x1a567c: 0x8e240ec0  lw          $a0, 0xEC0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A5680u;
label_1a5680:
    // 0x1a5680: 0x1000000d  b           . + 4 + (0xD << 2)
label_1a5684:
    if (ctx->pc == 0x1A5684u) {
        ctx->pc = 0x1A5684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5680u;
        // 0x1a5684: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5688u;
        goto label_1a5688;
    }
    ctx->pc = 0x1A5680u;
    {
        const bool branch_taken_0x1a5680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5680u;
        // 0x1a5684: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5680) {
            ctx->pc = 0x1A56B8u;
            goto label_1a56b8;
        }
    }
    ctx->pc = 0x1A5688u;
label_1a5688:
    // 0x1a5688: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a5688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a568c:
    // 0x1a568c: 0x24430ec8  addiu       $v1, $v0, 0xEC8
    ctx->pc = 0x1a568cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3784));
label_1a5690:
    // 0x1a5690: 0xac400ec8  sw          $zero, 0xEC8($v0)
    ctx->pc = 0x1a5690u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3784), GPR_U32(ctx, 0));
label_1a5694:
    // 0x1a5694: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1a5694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a5698:
    // 0x1a5698: 0xc069190  jal         func_1A4640
label_1a569c:
    if (ctx->pc == 0x1A569Cu) {
        ctx->pc = 0x1A569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5698u;
        // 0x1a569c: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A56A0u;
        goto label_1a56a0;
    }
    ctx->pc = 0x1A5698u;
    SET_GPR_U32(ctx, 31, 0x1A56A0u);
    ctx->pc = 0x1A569Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5698u;
    // 0x1a569c: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4640u;
    { ctx->pc = 0x1a4640; return; }
    ctx->pc = 0x1A56A0u;
label_1a56a0:
    // 0x1a56a0: 0xc0691c4  jal         func_1A4710
label_1a56a4:
    if (ctx->pc == 0x1A56A4u) {
        ctx->pc = 0x1A56A8u;
        goto label_1a56a8;
    }
    ctx->pc = 0x1A56A0u;
    SET_GPR_U32(ctx, 31, 0x1A56A8u);
    ctx->pc = 0x1A4710u;
    { ctx->pc = 0x1a4710; return; }
    ctx->pc = 0x1A56A8u;
label_1a56a8:
    // 0x1a56a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a56a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a56ac:
    // 0x1a56ac: 0xc0691ac  jal         func_1A46B0
label_1a56b0:
    if (ctx->pc == 0x1A56B0u) {
        ctx->pc = 0x1A56B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A56ACu;
        // 0x1a56b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A56B4u;
        goto label_1a56b4;
    }
    ctx->pc = 0x1A56ACu;
    SET_GPR_U32(ctx, 31, 0x1A56B4u);
    ctx->pc = 0x1A56B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A56ACu;
    // 0x1a56b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A46B0u;
    { ctx->pc = 0x1a46b0; return; }
    ctx->pc = 0x1A56B4u;
label_1a56b4:
    // 0x1a56b4: 0x8e025b58  lw          $v0, 0x5B58($s0)
    ctx->pc = 0x1a56b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23384)));
label_1a56b8:
    // 0x1a56b8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1a56b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a56bc:
    // 0x1a56bc: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x1a56bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a56c0:
    // 0x1a56c0: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1a56c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a56c4:
    // 0x1a56c4: 0x3e00008  jr          $ra
label_1a56c8:
    if (ctx->pc == 0x1A56C8u) {
        ctx->pc = 0x1A56C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A56C4u;
        // 0x1a56c8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A56CCu;
        goto label_1a56cc;
    }
    ctx->pc = 0x1A56C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A56C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A56C4u;
        // 0x1a56c8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A56C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A56CCu;
label_1a56cc:
    // 0x1a56cc: 0x0  nop
    ctx->pc = 0x1a56ccu;
    // NOP
label_1a56d0:
    // 0x1a56d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a56d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a56d4:
    // 0x1a56d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a56d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a56d8:
    // 0x1a56d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a56d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a56dc:
    // 0x1a56dc: 0x2403ffd1  addiu       $v1, $zero, -0x2F
    ctx->pc = 0x1a56dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967249));
label_1a56e0:
    // 0x1a56e0: 0xc  syscall     0
    ctx->pc = 0x1a56e0u;
    ctx->pc = 0x1A56E4u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a56e4:
    // 0x1a56e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a56e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a56e8:
    // 0x1a56e8: 0x12040005  beq         $s0, $a0, . + 4 + (0x5 << 2)
label_1a56ec:
    if (ctx->pc == 0x1A56ECu) {
        ctx->pc = 0x1A56ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A56E8u;
        // 0x1a56ec: 0x2e020100  sltiu       $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A56F0u;
        goto label_1a56f0;
    }
    ctx->pc = 0x1A56E8u;
    {
        const bool branch_taken_0x1a56e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x1A56ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A56E8u;
        // 0x1a56ec: 0x2e020100  sltiu       $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a56e8) {
            ctx->pc = 0x1A5700u;
            goto label_1a5700;
        }
    }
    ctx->pc = 0x1A56F0u;
label_1a56f0:
    // 0x1a56f0: 0xc0691d8  jal         func_1A4760
label_1a56f4:
    if (ctx->pc == 0x1A56F4u) {
        ctx->pc = 0x1A56F8u;
        goto label_1a56f8;
    }
    ctx->pc = 0x1A56F0u;
    SET_GPR_U32(ctx, 31, 0x1A56F8u);
    ctx->pc = 0x1A4760u;
    { ctx->pc = 0x1a4760; return; }
    ctx->pc = 0x1A56F8u;
label_1a56f8:
    // 0x1a56f8: 0x10000017  b           . + 4 + (0x17 << 2)
label_1a56fc:
    if (ctx->pc == 0x1A56FCu) {
        ctx->pc = 0x1A56FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A56F8u;
        // 0x1a56fc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5700u;
        goto label_1a5700;
    }
    ctx->pc = 0x1A56F8u;
    {
        const bool branch_taken_0x1a56f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A56FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A56F8u;
        // 0x1a56fc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a56f8) {
            ctx->pc = 0x1A5758u;
            goto label_1a5758;
        }
    }
    ctx->pc = 0x1A5700u;
label_1a5700:
    // 0x1a5700: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a5704:
    if (ctx->pc == 0x1A5704u) {
        ctx->pc = 0x1A5704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5700u;
        // 0x1a5704: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5708u;
        goto label_1a5708;
    }
    ctx->pc = 0x1A5700u;
    {
        const bool branch_taken_0x1a5700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5700u;
        // 0x1a5704: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5700) {
            ctx->pc = 0x1A5714u;
            goto label_1a5714;
        }
    }
    ctx->pc = 0x1A5708u;
label_1a5708:
    // 0x1a5708: 0x8c435b58  lw          $v1, 0x5B58($v0)
    ctx->pc = 0x1a5708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23384)));
label_1a570c:
    // 0x1a570c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1a5710:
    if (ctx->pc == 0x1A5710u) {
        ctx->pc = 0x1A5710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A570Cu;
        // 0x1a5710: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5714u;
        goto label_1a5714;
    }
    ctx->pc = 0x1A570Cu;
    {
        const bool branch_taken_0x1a570c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A570Cu;
        // 0x1a5710: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a570c) {
            ctx->pc = 0x1A571Cu;
            goto label_1a571c;
        }
    }
    ctx->pc = 0x1A5714u;
label_1a5714:
    // 0x1a5714: 0x1000000f  b           . + 4 + (0xF << 2)
label_1a5718:
    if (ctx->pc == 0x1A5718u) {
        ctx->pc = 0x1A5718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5714u;
        // 0x1a5718: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A571Cu;
        goto label_1a571c;
    }
    ctx->pc = 0x1A5714u;
    {
        const bool branch_taken_0x1a5714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5714u;
        // 0x1a5718: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5714) {
            ctx->pc = 0x1A5754u;
            goto label_1a5754;
        }
    }
    ctx->pc = 0x1A571Cu;
label_1a571c:
    // 0x1a571c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a571cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1a5720:
    // 0x1a5720: 0x24630ec8  addiu       $v1, $v1, 0xEC8
    ctx->pc = 0x1a5720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3784));
label_1a5724:
    // 0x1a5724: 0x8ca40ec0  lw          $a0, 0xEC0($a1)
    ctx->pc = 0x1a5724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3776)));
label_1a5728:
    // 0x1a5728: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a5728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1a572c:
    // 0x1a572c: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x1a572cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_1a5730:
    // 0x1a5730: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x1a5730u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1a5734:
    // 0x1a5734: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a5734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a5738:
    // 0x1a5738: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1a5738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1a573c:
    // 0x1a573c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1a573cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1a5740:
    // 0x1a5740: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1a5740u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a5744:
    // 0x1a5744: 0xa0a00008  sb          $zero, 0x8($a1)
    ctx->pc = 0x1a5744u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 0));
label_1a5748:
    // 0x1a5748: 0xc069214  jal         func_1A4850
label_1a574c:
    if (ctx->pc == 0x1A574Cu) {
        ctx->pc = 0x1A574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5748u;
        // 0x1a574c: 0xa0700009  sb          $s0, 0x9($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5750u;
        goto label_1a5750;
    }
    ctx->pc = 0x1A5748u;
    SET_GPR_U32(ctx, 31, 0x1A5750u);
    ctx->pc = 0x1A574Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5748u;
    // 0x1a574c: 0xa0700009  sb          $s0, 0x9($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4850u;
    { ctx->pc = 0x1a4850; return; }
    ctx->pc = 0x1A5750u;
label_1a5750:
    // 0x1a5750: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a5750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a5754:
    // 0x1a5754: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a5754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a5758:
    // 0x1a5758: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a575c:
    // 0x1a575c: 0x3e00008  jr          $ra
label_1a5760:
    if (ctx->pc == 0x1A5760u) {
        ctx->pc = 0x1A5760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A575Cu;
        // 0x1a5760: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5764u;
        goto label_1a5764;
    }
    ctx->pc = 0x1A575Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A575Cu;
        // 0x1a5760: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A575Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5764u;
label_1a5764:
    // 0x1a5764: 0x0  nop
    ctx->pc = 0x1a5764u;
    // NOP
label_1a5768:
    // 0x1a5768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a576c:
    // 0x1a576c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a576cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a5770:
    // 0x1a5770: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a5770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a5774:
    // 0x1a5774: 0x2e020080  sltiu       $v0, $s0, 0x80
    ctx->pc = 0x1a5774u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_1a5778:
    // 0x1a5778: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a577c:
    if (ctx->pc == 0x1A577Cu) {
        ctx->pc = 0x1A577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5778u;
        // 0x1a577c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5780u;
        goto label_1a5780;
    }
    ctx->pc = 0x1A5778u;
    {
        const bool branch_taken_0x1a5778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5778u;
        // 0x1a577c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5778) {
            ctx->pc = 0x1A5790u;
            goto label_1a5790;
        }
    }
    ctx->pc = 0x1A5780u;
label_1a5780:
    // 0x1a5780: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1a5780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1a5784:
    // 0x1a5784: 0x8c435b58  lw          $v1, 0x5B58($v0)
    ctx->pc = 0x1a5784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23384)));
label_1a5788:
    // 0x1a5788: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1a578c:
    if (ctx->pc == 0x1A578Cu) {
        ctx->pc = 0x1A578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5788u;
        // 0x1a578c: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5790u;
        goto label_1a5790;
    }
    ctx->pc = 0x1A5788u;
    {
        const bool branch_taken_0x1a5788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5788u;
        // 0x1a578c: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5788) {
            ctx->pc = 0x1A5798u;
            goto label_1a5798;
        }
    }
    ctx->pc = 0x1A5790u;
label_1a5790:
    // 0x1a5790: 0x10000010  b           . + 4 + (0x10 << 2)
label_1a5794:
    if (ctx->pc == 0x1A5794u) {
        ctx->pc = 0x1A5794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5790u;
        // 0x1a5794: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5798u;
        goto label_1a5798;
    }
    ctx->pc = 0x1A5790u;
    {
        const bool branch_taken_0x1a5790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5790u;
        // 0x1a5794: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5790) {
            ctx->pc = 0x1A57D4u;
            goto label_1a57d4;
        }
    }
    ctx->pc = 0x1A5798u;
label_1a5798:
    // 0x1a5798: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a5798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1a579c:
    // 0x1a579c: 0x24630ec8  addiu       $v1, $v1, 0xEC8
    ctx->pc = 0x1a579cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3784));
label_1a57a0:
    // 0x1a57a0: 0x8ca40ec0  lw          $a0, 0xEC0($a1)
    ctx->pc = 0x1a57a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3776)));
label_1a57a4:
    // 0x1a57a4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a57a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1a57a8:
    // 0x1a57a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1a57a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a57ac:
    // 0x1a57ac: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x1a57acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_1a57b0:
    // 0x1a57b0: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x1a57b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1a57b4:
    // 0x1a57b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a57b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a57b8:
    // 0x1a57b8: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1a57b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1a57bc:
    // 0x1a57bc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1a57bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1a57c0:
    // 0x1a57c0: 0xa0a70008  sb          $a3, 0x8($a1)
    ctx->pc = 0x1a57c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 7));
label_1a57c4:
    // 0x1a57c4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1a57c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a57c8:
    // 0x1a57c8: 0xc069214  jal         func_1A4850
label_1a57cc:
    if (ctx->pc == 0x1A57CCu) {
        ctx->pc = 0x1A57CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A57C8u;
        // 0x1a57cc: 0xa0700009  sb          $s0, 0x9($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A57D0u;
        goto label_1a57d0;
    }
    ctx->pc = 0x1A57C8u;
    SET_GPR_U32(ctx, 31, 0x1A57D0u);
    ctx->pc = 0x1A57CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A57C8u;
    // 0x1a57cc: 0xa0700009  sb          $s0, 0x9($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4850u;
    { ctx->pc = 0x1a4850; return; }
    ctx->pc = 0x1A57D0u;
label_1a57d0:
    // 0x1a57d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a57d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a57d4:
    // 0x1a57d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a57d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a57d8:
    // 0x1a57d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a57d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a57dc:
    // 0x1a57dc: 0x3e00008  jr          $ra
label_1a57e0:
    if (ctx->pc == 0x1A57E0u) {
        ctx->pc = 0x1A57E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A57DCu;
        // 0x1a57e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A57E4u;
        goto label_1a57e4;
    }
    ctx->pc = 0x1A57DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A57E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A57DCu;
        // 0x1a57e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A57DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A57E4u;
label_1a57e4:
    // 0x1a57e4: 0x0  nop
    ctx->pc = 0x1a57e4u;
    // NOP
label_1a57e8:
    // 0x1a57e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a57e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a57ec:
    // 0x1a57ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a57ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a57f0:
    // 0x1a57f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a57f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a57f4:
    // 0x1a57f4: 0x2403ffd1  addiu       $v1, $zero, -0x2F
    ctx->pc = 0x1a57f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967249));
label_1a57f8:
    // 0x1a57f8: 0xc  syscall     0
    ctx->pc = 0x1a57f8u;
    ctx->pc = 0x1A57FCu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a57fc:
    // 0x1a57fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a57fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a5800:
    // 0x1a5800: 0x12040005  beq         $s0, $a0, . + 4 + (0x5 << 2)
label_1a5804:
    if (ctx->pc == 0x1A5804u) {
        ctx->pc = 0x1A5804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5800u;
        // 0x1a5804: 0x2e020100  sltiu       $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5808u;
        goto label_1a5808;
    }
    ctx->pc = 0x1A5800u;
    {
        const bool branch_taken_0x1a5800 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x1A5804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5800u;
        // 0x1a5804: 0x2e020100  sltiu       $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5800) {
            ctx->pc = 0x1A5818u;
            goto label_1a5818;
        }
    }
    ctx->pc = 0x1A5808u;
label_1a5808:
    // 0x1a5808: 0xc0691e8  jal         func_1A47A0
label_1a580c:
    if (ctx->pc == 0x1A580Cu) {
        ctx->pc = 0x1A5810u;
        goto label_1a5810;
    }
    ctx->pc = 0x1A5808u;
    SET_GPR_U32(ctx, 31, 0x1A5810u);
    ctx->pc = 0x1A47A0u;
    { ctx->pc = 0x1a47a0; return; }
    ctx->pc = 0x1A5810u;
label_1a5810:
    // 0x1a5810: 0x10000018  b           . + 4 + (0x18 << 2)
label_1a5814:
    if (ctx->pc == 0x1A5814u) {
        ctx->pc = 0x1A5814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5810u;
        // 0x1a5814: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5818u;
        goto label_1a5818;
    }
    ctx->pc = 0x1A5810u;
    {
        const bool branch_taken_0x1a5810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5810u;
        // 0x1a5814: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5810) {
            ctx->pc = 0x1A5874u;
            goto label_1a5874;
        }
    }
    ctx->pc = 0x1A5818u;
label_1a5818:
    // 0x1a5818: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a581c:
    if (ctx->pc == 0x1A581Cu) {
        ctx->pc = 0x1A581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5818u;
        // 0x1a581c: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5820u;
        goto label_1a5820;
    }
    ctx->pc = 0x1A5818u;
    {
        const bool branch_taken_0x1a5818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5818u;
        // 0x1a581c: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5818) {
            ctx->pc = 0x1A582Cu;
            goto label_1a582c;
        }
    }
    ctx->pc = 0x1A5820u;
label_1a5820:
    // 0x1a5820: 0x8c435b58  lw          $v1, 0x5B58($v0)
    ctx->pc = 0x1a5820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23384)));
label_1a5824:
    // 0x1a5824: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1a5828:
    if (ctx->pc == 0x1A5828u) {
        ctx->pc = 0x1A5828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5824u;
        // 0x1a5828: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A582Cu;
        goto label_1a582c;
    }
    ctx->pc = 0x1A5824u;
    {
        const bool branch_taken_0x1a5824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5824u;
        // 0x1a5828: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5824) {
            ctx->pc = 0x1A5834u;
            goto label_1a5834;
        }
    }
    ctx->pc = 0x1A582Cu;
label_1a582c:
    // 0x1a582c: 0x10000010  b           . + 4 + (0x10 << 2)
label_1a5830:
    if (ctx->pc == 0x1A5830u) {
        ctx->pc = 0x1A5830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A582Cu;
        // 0x1a5830: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5834u;
        goto label_1a5834;
    }
    ctx->pc = 0x1A582Cu;
    {
        const bool branch_taken_0x1a582c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A582Cu;
        // 0x1a5830: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a582c) {
            ctx->pc = 0x1A5870u;
            goto label_1a5870;
        }
    }
    ctx->pc = 0x1A5834u;
label_1a5834:
    // 0x1a5834: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a5834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1a5838:
    // 0x1a5838: 0x24630ec8  addiu       $v1, $v1, 0xEC8
    ctx->pc = 0x1a5838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3784));
label_1a583c:
    // 0x1a583c: 0x8ca40ec0  lw          $a0, 0xEC0($a1)
    ctx->pc = 0x1a583cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3776)));
label_1a5840:
    // 0x1a5840: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a5840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1a5844:
    // 0x1a5844: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1a5844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a5848:
    // 0x1a5848: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x1a5848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_1a584c:
    // 0x1a584c: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x1a584cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1a5850:
    // 0x1a5850: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a5850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a5854:
    // 0x1a5854: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1a5854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1a5858:
    // 0x1a5858: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1a5858u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1a585c:
    // 0x1a585c: 0xa0a70008  sb          $a3, 0x8($a1)
    ctx->pc = 0x1a585cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 7));
label_1a5860:
    // 0x1a5860: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1a5860u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a5864:
    // 0x1a5864: 0xc069214  jal         func_1A4850
label_1a5868:
    if (ctx->pc == 0x1A5868u) {
        ctx->pc = 0x1A5868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5864u;
        // 0x1a5868: 0xa0700009  sb          $s0, 0x9($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A586Cu;
        goto label_1a586c;
    }
    ctx->pc = 0x1A5864u;
    SET_GPR_U32(ctx, 31, 0x1A586Cu);
    ctx->pc = 0x1A5868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5864u;
    // 0x1a5868: 0xa0700009  sb          $s0, 0x9($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4850u;
    { ctx->pc = 0x1a4850; return; }
    ctx->pc = 0x1A586Cu;
label_1a586c:
    // 0x1a586c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a586cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a5870:
    // 0x1a5870: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a5870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a5874:
    // 0x1a5874: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5878:
    // 0x1a5878: 0x3e00008  jr          $ra
label_1a587c:
    if (ctx->pc == 0x1A587Cu) {
        ctx->pc = 0x1A587Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5878u;
        // 0x1a587c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5880u;
        goto label_1a5880;
    }
    ctx->pc = 0x1A5878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A587Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5878u;
        // 0x1a587c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5880u;
label_1a5880:
    // 0x1a5880: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a5880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a5884:
    // 0x1a5884: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5884u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a5888:
    // 0x1a5888: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1a5888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_1a588c:
    // 0x1a588c: 0x244212d0  addiu       $v0, $v0, 0x12D0
    ctx->pc = 0x1a588cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4816));
label_1a5890:
    // 0x1a5890: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x1a5890u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1a5894:
    // 0x1a5894: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a5894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a5898:
    // 0x1a5898: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x1a5898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_1a589c:
    // 0x1a589c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a589cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1a58a0:
    // 0x1a58a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a58a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a58a4:
    // 0x1a58a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a58a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a58a8:
    // 0x1a58a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a58a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a58ac:
    // 0x1a58ac: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x1a58acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
label_1a58b0:
    // 0x1a58b0: 0xc069314  jal         func_1A4C50
label_1a58b4:
    if (ctx->pc == 0x1A58B4u) {
        ctx->pc = 0x1A58B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A58B0u;
        // 0x1a58b4: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A58B8u;
        goto label_1a58b8;
    }
    ctx->pc = 0x1A58B0u;
    SET_GPR_U32(ctx, 31, 0x1A58B8u);
    ctx->pc = 0x1A58B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A58B0u;
    // 0x1a58b4: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C50u;
    { ctx->pc = 0x1a4c50; return; }
    ctx->pc = 0x1A58B8u;
label_1a58b8:
    // 0x1a58b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a58b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a58bc:
    // 0x1a58bc: 0x3e00008  jr          $ra
label_1a58c0:
    if (ctx->pc == 0x1A58C0u) {
        ctx->pc = 0x1A58C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A58BCu;
        // 0x1a58c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A58C4u;
        goto label_1a58c4;
    }
    ctx->pc = 0x1A58BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A58C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A58BCu;
        // 0x1a58c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A58BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A58C4u;
label_1a58c4:
    // 0x1a58c4: 0x0  nop
    ctx->pc = 0x1a58c4u;
    // NOP
label_1a58c8:
    // 0x1a58c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a58c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a58cc:
    // 0x1a58cc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a58ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1a58d0:
    // 0x1a58d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a58d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a58d4:
    // 0x1a58d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a58d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a58d8:
    // 0x1a58d8: 0xc069314  jal         func_1A4C50
label_1a58dc:
    if (ctx->pc == 0x1A58DCu) {
        ctx->pc = 0x1A58DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A58D8u;
        // 0x1a58dc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A58E0u;
        goto label_1a58e0;
    }
    ctx->pc = 0x1A58D8u;
    SET_GPR_U32(ctx, 31, 0x1A58E0u);
    ctx->pc = 0x1A58DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A58D8u;
    // 0x1a58dc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C50u;
    { ctx->pc = 0x1a4c50; return; }
    ctx->pc = 0x1A58E0u;
label_1a58e0:
    // 0x1a58e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a58e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a58e4:
    // 0x1a58e4: 0x3e00008  jr          $ra
label_1a58e8:
    if (ctx->pc == 0x1A58E8u) {
        ctx->pc = 0x1A58E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A58E4u;
        // 0x1a58e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A58ECu;
        goto label_1a58ec;
    }
    ctx->pc = 0x1A58E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A58E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A58E4u;
        // 0x1a58e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A58E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A58ECu;
label_1a58ec:
    // 0x1a58ec: 0x0  nop
    ctx->pc = 0x1a58ecu;
    // NOP
label_1a58f0:
    // 0x1a58f0: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1a58f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_1a58f4:
    // 0x1a58f4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a58f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a58f8:
    // 0x1a58f8: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x1a58f8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
label_1a58fc:
    // 0x1a58fc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a58fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1a5900:
    // 0x1a5900: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x1a5900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_1a5904:
    // 0x1a5904: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a5904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a5908:
    // 0x1a5908: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a5908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a590c:
    // 0x1a590c: 0xc069314  jal         func_1A4C50
label_1a5910:
    if (ctx->pc == 0x1A5910u) {
        ctx->pc = 0x1A5910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A590Cu;
        // 0x1a5910: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5914u;
        goto label_1a5914;
    }
    ctx->pc = 0x1A590Cu;
    SET_GPR_U32(ctx, 31, 0x1A5914u);
    ctx->pc = 0x1A5910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A590Cu;
    // 0x1a5910: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C50u;
    { ctx->pc = 0x1a4c50; return; }
    ctx->pc = 0x1A5914u;
label_1a5914:
    // 0x1a5914: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a5914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a5918:
    // 0x1a5918: 0x3e00008  jr          $ra
label_1a591c:
    if (ctx->pc == 0x1A591Cu) {
        ctx->pc = 0x1A591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5918u;
        // 0x1a591c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5920u;
        goto label_1a5920;
    }
    ctx->pc = 0x1A5918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5918u;
        // 0x1a591c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5920u;
label_1a5920:
    // 0x1a5920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a5924:
    // 0x1a5924: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a5924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1a5928:
    // 0x1a5928: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a5928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a592c:
    // 0x1a592c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a592cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a5930:
    // 0x1a5930: 0xc069314  jal         func_1A4C50
label_1a5934:
    if (ctx->pc == 0x1A5934u) {
        ctx->pc = 0x1A5934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5930u;
        // 0x1a5934: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5938u;
        goto label_1a5938;
    }
    ctx->pc = 0x1A5930u;
    SET_GPR_U32(ctx, 31, 0x1A5938u);
    ctx->pc = 0x1A5934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5930u;
    // 0x1a5934: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C50u;
    { ctx->pc = 0x1a4c50; return; }
    ctx->pc = 0x1A5938u;
label_1a5938:
    // 0x1a5938: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a5938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a593c:
    // 0x1a593c: 0x3e00008  jr          $ra
label_1a5940:
    if (ctx->pc == 0x1A5940u) {
        ctx->pc = 0x1A5940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A593Cu;
        // 0x1a5940: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5944u;
        goto label_1a5944;
    }
    ctx->pc = 0x1A593Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A593Cu;
        // 0x1a5940: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A593Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5944u;
label_1a5944:
    // 0x1a5944: 0x0  nop
    ctx->pc = 0x1a5944u;
    // NOP
label_1a5948:
    // 0x1a5948: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a594c:
    // 0x1a594c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1a594cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a5950:
    // 0x1a5950: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x1a5950u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_1a5954:
    // 0x1a5954: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a5954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1a5958:
    // 0x1a5958: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a5958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a595c:
    // 0x1a595c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a595cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a5960:
    // 0x1a5960: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1a5960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_1a5964:
    // 0x1a5964: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x1a5964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_1a5968:
    // 0x1a5968: 0xc069314  jal         func_1A4C50
label_1a596c:
    if (ctx->pc == 0x1A596Cu) {
        ctx->pc = 0x1A596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5968u;
        // 0x1a596c: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5970u;
        goto label_1a5970;
    }
    ctx->pc = 0x1A5968u;
    SET_GPR_U32(ctx, 31, 0x1A5970u);
    ctx->pc = 0x1A596Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5968u;
    // 0x1a596c: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C50u;
    { ctx->pc = 0x1a4c50; return; }
    ctx->pc = 0x1A5970u;
label_1a5970:
    // 0x1a5970: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a5970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a5974:
    // 0x1a5974: 0x3e00008  jr          $ra
label_1a5978:
    if (ctx->pc == 0x1A5978u) {
        ctx->pc = 0x1A5978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5974u;
        // 0x1a5978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A597Cu;
        goto label_1a597c;
    }
    ctx->pc = 0x1A5974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5974u;
        // 0x1a5978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A597Cu;
label_1a597c:
    // 0x1a597c: 0x0  nop
    ctx->pc = 0x1a597cu;
    // NOP
label_1a5980:
    // 0x1a5980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a5984:
    // 0x1a5984: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1a5984u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a5988:
    // 0x1a5988: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x1a5988u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_1a598c:
    // 0x1a598c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a598cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1a5990:
    // 0x1a5990: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a5990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a5994:
    // 0x1a5994: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a5994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a5998:
    // 0x1a5998: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1a5998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_1a599c:
    // 0x1a599c: 0x2404fffa  addiu       $a0, $zero, -0x6
    ctx->pc = 0x1a599cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
label_1a59a0:
    // 0x1a59a0: 0xc069314  jal         func_1A4C50
label_1a59a4:
    if (ctx->pc == 0x1A59A4u) {
        ctx->pc = 0x1A59A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A59A0u;
        // 0x1a59a4: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A59A8u;
        goto label_1a59a8;
    }
    ctx->pc = 0x1A59A0u;
    SET_GPR_U32(ctx, 31, 0x1A59A8u);
    ctx->pc = 0x1A59A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A59A0u;
    // 0x1a59a4: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C50u;
    { ctx->pc = 0x1a4c50; return; }
    ctx->pc = 0x1A59A8u;
label_1a59a8:
    // 0x1a59a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a59a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a59ac:
    // 0x1a59ac: 0x3e00008  jr          $ra
label_1a59b0:
    if (ctx->pc == 0x1A59B0u) {
        ctx->pc = 0x1A59B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A59ACu;
        // 0x1a59b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A59B4u;
        goto label_1a59b4;
    }
    ctx->pc = 0x1A59ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A59B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A59ACu;
        // 0x1a59b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A59ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A59B4u;
label_1a59b4:
    // 0x1a59b4: 0x0  nop
    ctx->pc = 0x1a59b4u;
    // NOP
label_1a59b8:
    // 0x1a59b8: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1a59b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_1a59bc:
    // 0x1a59bc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a59bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a59c0:
    // 0x1a59c0: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x1a59c0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
label_1a59c4:
    // 0x1a59c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a59c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1a59c8:
    // 0x1a59c8: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x1a59c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_1a59cc:
    // 0x1a59cc: 0x2404fff9  addiu       $a0, $zero, -0x7
    ctx->pc = 0x1a59ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
label_1a59d0:
    // 0x1a59d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a59d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a59d4:
    // 0x1a59d4: 0xc069314  jal         func_1A4C50
label_1a59d8:
    if (ctx->pc == 0x1A59D8u) {
        ctx->pc = 0x1A59D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A59D4u;
        // 0x1a59d8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A59DCu;
        goto label_1a59dc;
    }
    ctx->pc = 0x1A59D4u;
    SET_GPR_U32(ctx, 31, 0x1A59DCu);
    ctx->pc = 0x1A59D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A59D4u;
    // 0x1a59d8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C50u;
    { ctx->pc = 0x1a4c50; return; }
    ctx->pc = 0x1A59DCu;
label_1a59dc:
    // 0x1a59dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a59dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a59e0:
    // 0x1a59e0: 0x3e00008  jr          $ra
label_1a59e4:
    if (ctx->pc == 0x1A59E4u) {
        ctx->pc = 0x1A59E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A59E0u;
        // 0x1a59e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A59E8u;
        goto label_1a59e8;
    }
    ctx->pc = 0x1A59E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A59E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A59E0u;
        // 0x1a59e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A59E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A59E8u;
label_1a59e8:
    // 0x1a59e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a59e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a59ec:
    // 0x1a59ec: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a59ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1a59f0:
    // 0x1a59f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a59f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a59f4:
    // 0x1a59f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a59f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a59f8:
    // 0x1a59f8: 0xc069314  jal         func_1A4C50
label_1a59fc:
    if (ctx->pc == 0x1A59FCu) {
        ctx->pc = 0x1A59FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A59F8u;
        // 0x1a59fc: 0x2404fff8  addiu       $a0, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5A00u;
        goto label_1a5a00;
    }
    ctx->pc = 0x1A59F8u;
    SET_GPR_U32(ctx, 31, 0x1A5A00u);
    ctx->pc = 0x1A59FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A59F8u;
    // 0x1a59fc: 0x2404fff8  addiu       $a0, $zero, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C50u;
    { ctx->pc = 0x1a4c50; return; }
    ctx->pc = 0x1A5A00u;
label_1a5a00:
    // 0x1a5a00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a5a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a5a04:
    // 0x1a5a04: 0x3e00008  jr          $ra
label_1a5a08:
    if (ctx->pc == 0x1A5A08u) {
        ctx->pc = 0x1A5A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A04u;
        // 0x1a5a08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5A0Cu;
        goto label_1a5a0c;
    }
    ctx->pc = 0x1A5A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A04u;
        // 0x1a5a08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5A0Cu;
label_1a5a0c:
    // 0x1a5a0c: 0x0  nop
    ctx->pc = 0x1a5a0cu;
    // NOP
label_1a5a10:
    // 0x1a5a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a5a14:
    // 0x1a5a14: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a5a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1a5a18:
    // 0x1a5a18: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a5a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a5a1c:
    // 0x1a5a1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a5a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a5a20:
    // 0x1a5a20: 0xc069314  jal         func_1A4C50
label_1a5a24:
    if (ctx->pc == 0x1A5A24u) {
        ctx->pc = 0x1A5A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A20u;
        // 0x1a5a24: 0x2404fff7  addiu       $a0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5A28u;
        goto label_1a5a28;
    }
    ctx->pc = 0x1A5A20u;
    SET_GPR_U32(ctx, 31, 0x1A5A28u);
    ctx->pc = 0x1A5A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5A20u;
    // 0x1a5a24: 0x2404fff7  addiu       $a0, $zero, -0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C50u;
    { ctx->pc = 0x1a4c50; return; }
    ctx->pc = 0x1A5A28u;
label_1a5a28:
    // 0x1a5a28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a5a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a5a2c:
    // 0x1a5a2c: 0x3e00008  jr          $ra
label_1a5a30:
    if (ctx->pc == 0x1A5A30u) {
        ctx->pc = 0x1A5A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A2Cu;
        // 0x1a5a30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5A34u;
        goto label_1a5a34;
    }
    ctx->pc = 0x1A5A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A2Cu;
        // 0x1a5a30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5A34u;
label_1a5a34:
    // 0x1a5a34: 0x0  nop
    ctx->pc = 0x1a5a34u;
    // NOP
label_1a5a38:
    // 0x1a5a38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a5a3c:
    // 0x1a5a3c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a5a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1a5a40:
    // 0x1a5a40: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a5a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a5a44:
    // 0x1a5a44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a5a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a5a48:
    // 0x1a5a48: 0xc069314  jal         func_1A4C50
label_1a5a4c:
    if (ctx->pc == 0x1A5A4Cu) {
        ctx->pc = 0x1A5A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A48u;
        // 0x1a5a4c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5A50u;
        goto label_1a5a50;
    }
    ctx->pc = 0x1A5A48u;
    SET_GPR_U32(ctx, 31, 0x1A5A50u);
    ctx->pc = 0x1A5A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5A48u;
    // 0x1a5a4c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C50u;
    { ctx->pc = 0x1a4c50; return; }
    ctx->pc = 0x1A5A50u;
label_1a5a50:
    // 0x1a5a50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a5a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a5a54:
    // 0x1a5a54: 0x3e00008  jr          $ra
label_1a5a58:
    if (ctx->pc == 0x1A5A58u) {
        ctx->pc = 0x1A5A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A54u;
        // 0x1a5a58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5A5Cu;
        goto label_1a5a5c;
    }
    ctx->pc = 0x1A5A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A54u;
        // 0x1a5a58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5A5Cu;
label_1a5a5c:
    // 0x1a5a5c: 0x0  nop
    ctx->pc = 0x1a5a5cu;
    // NOP
label_1a5a60:
    // 0x1a5a60: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a5a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a5a64:
    // 0x1a5a64: 0x24431300  addiu       $v1, $v0, 0x1300
    ctx->pc = 0x1a5a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_1a5a68:
    // 0x1a5a68: 0xac441300  sw          $a0, 0x1300($v0)
    ctx->pc = 0x1a5a68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4864), GPR_U32(ctx, 4));
label_1a5a6c:
    // 0x1a5a6c: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x1a5a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1a5a70:
    // 0x1a5a70: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a5a70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a5a74:
    // 0x1a5a74: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1a5a74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_1a5a78:
    // 0x1a5a78: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1a5a78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1a5a7c:
    // 0x1a5a7c: 0x3e00008  jr          $ra
label_1a5a80:
    if (ctx->pc == 0x1A5A80u) {
        ctx->pc = 0x1A5A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A7Cu;
        // 0x1a5a80: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5A84u;
        goto label_1a5a84;
    }
    ctx->pc = 0x1A5A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A7Cu;
        // 0x1a5a80: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5A84u;
label_1a5a84:
    // 0x1a5a84: 0x0  nop
    ctx->pc = 0x1a5a84u;
    // NOP
label_1a5a88:
    // 0x1a5a88: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a5a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a5a8c:
    // 0x1a5a8c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1a5a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1a5a90:
    // 0x1a5a90: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x1a5a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1a5a94:
    // 0x1a5a94: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a5a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a5a98:
    // 0x1a5a98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a5a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a5a9c:
    // 0x1a5a9c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a5a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1a5aa0:
    // 0x1a5aa0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1a5aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_1a5aa4:
    // 0x1a5aa4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1a5aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1a5aa8:
    // 0x1a5aa8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1a5aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1a5aac:
    // 0x1a5aac: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_1a5ab0:
    if (ctx->pc == 0x1A5AB0u) {
        ctx->pc = 0x1A5AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5AACu;
        // 0x1a5ab0: 0xaca4000c  sw          $a0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5AB4u;
        goto label_1a5ab4;
    }
    ctx->pc = 0x1A5AACu;
    {
        const bool branch_taken_0x1a5aac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A5AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5AACu;
        // 0x1a5ab0: 0xaca4000c  sw          $a0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5aac) {
            ctx->pc = 0x1A5ABCu;
            goto label_1a5abc;
        }
    }
    ctx->pc = 0x1A5AB4u;
label_1a5ab4:
    // 0x1a5ab4: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x1a5ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_1a5ab8:
    // 0x1a5ab8: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x1a5ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_1a5abc:
    // 0x1a5abc: 0x3e00008  jr          $ra
label_1a5ac0:
    if (ctx->pc == 0x1A5AC0u) {
        ctx->pc = 0x1A5AC4u;
        goto label_1a5ac4;
    }
    ctx->pc = 0x1A5ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5AC4u;
label_1a5ac4:
    // 0x1a5ac4: 0x0  nop
    ctx->pc = 0x1a5ac4u;
    // NOP
label_1a5ac8:
    // 0x1a5ac8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a5ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a5acc:
    // 0x1a5acc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1a5accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1a5ad0:
    // 0x1a5ad0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1a5ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1a5ad4:
    // 0x1a5ad4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a5ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a5ad8:
    // 0x1a5ad8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a5ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a5adc:
    // 0x1a5adc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a5adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1a5ae0:
    // 0x1a5ae0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1a5ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_1a5ae4:
    // 0x1a5ae4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1a5ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1a5ae8:
    // 0x1a5ae8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1a5ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1a5aec:
    // 0x1a5aec: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_1a5af0:
    if (ctx->pc == 0x1A5AF0u) {
        ctx->pc = 0x1A5AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5AECu;
        // 0x1a5af0: 0xaca40008  sw          $a0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5AF4u;
        goto label_1a5af4;
    }
    ctx->pc = 0x1A5AECu;
    {
        const bool branch_taken_0x1a5aec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A5AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5AECu;
        // 0x1a5af0: 0xaca40008  sw          $a0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5aec) {
            ctx->pc = 0x1A5AFCu;
            goto label_1a5afc;
        }
    }
    ctx->pc = 0x1A5AF4u;
label_1a5af4:
    // 0x1a5af4: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x1a5af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_1a5af8:
    // 0x1a5af8: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1a5af8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_1a5afc:
    // 0x1a5afc: 0x3e00008  jr          $ra
label_1a5b00:
    if (ctx->pc == 0x1A5B00u) {
        ctx->pc = 0x1A5B04u;
        goto label_1a5b04;
    }
    ctx->pc = 0x1A5AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5B04u;
label_1a5b04:
    // 0x1a5b04: 0x0  nop
    ctx->pc = 0x1a5b04u;
    // NOP
label_1a5b08:
    // 0x1a5b08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a5b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a5b0c:
    // 0x1a5b0c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a5b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a5b10:
    // 0x1a5b10: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a5b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a5b14:
    // 0x1a5b14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a5b18:
    // 0x1a5b18: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a5b18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a5b1c:
    // 0x1a5b1c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a5b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1a5b20:
    // 0x1a5b20: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a5b20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a5b24:
    // 0x1a5b24: 0x1082003b  beq         $a0, $v0, . + 4 + (0x3B << 2)
label_1a5b28:
    if (ctx->pc == 0x1A5B28u) {
        ctx->pc = 0x1A5B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B24u;
        // 0x1a5b28: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5B2Cu;
        goto label_1a5b2c;
    }
    ctx->pc = 0x1A5B24u;
    {
        const bool branch_taken_0x1a5b24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A5B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B24u;
        // 0x1a5b28: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b24) {
            ctx->pc = 0x1A5C14u;
            goto label_1a5c14;
        }
    }
    ctx->pc = 0x1A5B2Cu;
label_1a5b2c:
    // 0x1a5b2c: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x1a5b2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_1a5b30:
    // 0x1a5b30: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1a5b34:
    if (ctx->pc == 0x1A5B34u) {
        ctx->pc = 0x1A5B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B30u;
        // 0x1a5b34: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5B38u;
        goto label_1a5b38;
    }
    ctx->pc = 0x1A5B30u;
    {
        const bool branch_taken_0x1a5b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B30u;
        // 0x1a5b34: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b30) {
            ctx->pc = 0x1A5B48u;
            goto label_1a5b48;
        }
    }
    ctx->pc = 0x1A5B38u;
label_1a5b38:
    // 0x1a5b38: 0x1082004a  beq         $a0, $v0, . + 4 + (0x4A << 2)
label_1a5b3c:
    if (ctx->pc == 0x1A5B3Cu) {
        ctx->pc = 0x1A5B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B38u;
        // 0x1a5b3c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5B40u;
        goto label_1a5b40;
    }
    ctx->pc = 0x1A5B38u;
    {
        const bool branch_taken_0x1a5b38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A5B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B38u;
        // 0x1a5b3c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b38) {
            ctx->pc = 0x1A5C64u;
            goto label_1a5c64;
        }
    }
    ctx->pc = 0x1A5B40u;
label_1a5b40:
    // 0x1a5b40: 0x10000052  b           . + 4 + (0x52 << 2)
label_1a5b44:
    if (ctx->pc == 0x1A5B44u) {
        ctx->pc = 0x1A5B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B40u;
        // 0x1a5b44: 0xdfb20020  ld          $s2, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5B48u;
        goto label_1a5b48;
    }
    ctx->pc = 0x1A5B40u;
    {
        const bool branch_taken_0x1a5b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B40u;
        // 0x1a5b44: 0xdfb20020  ld          $s2, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b40) {
            ctx->pc = 0x1A5C8Cu;
            { ctx->pc = 0x1a5c8c; return; }
        }
    }
    ctx->pc = 0x1A5B48u;
label_1a5b48:
    // 0x1a5b48: 0x1880004f  blez        $a0, . + 4 + (0x4F << 2)
label_1a5b4c:
    if (ctx->pc == 0x1A5B4Cu) {
        ctx->pc = 0x1A5B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B48u;
        // 0x1a5b4c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5B50u;
        goto label_1a5b50;
    }
    ctx->pc = 0x1A5B48u;
    {
        const bool branch_taken_0x1a5b48 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1A5B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B48u;
        // 0x1a5b4c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b48) {
            ctx->pc = 0x1A5C88u;
            { ctx->pc = 0x1a5c88; return; }
        }
    }
    ctx->pc = 0x1A5B50u;
label_1a5b50:
    // 0x1a5b50: 0x52000019  beql        $s0, $zero, . + 4 + (0x19 << 2)
label_1a5b54:
    if (ctx->pc == 0x1A5B54u) {
        ctx->pc = 0x1A5B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B50u;
        // 0x1a5b54: 0x8e320014  lw          $s2, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5B58u;
        goto label_1a5b58;
    }
    ctx->pc = 0x1A5B50u;
    {
        const bool branch_taken_0x1a5b50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5b50) {
            ctx->pc = 0x1A5B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5B50u;
            // 0x1a5b54: 0x8e320014  lw          $s2, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5BB8u;
            goto label_1a5bb8;
        }
    }
    ctx->pc = 0x1A5B58u;
label_1a5b58:
    // 0x1a5b58: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1a5b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1a5b5c:
    // 0x1a5b5c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a5b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1a5b60:
    // 0x1a5b60: 0x2c420141  sltiu       $v0, $v0, 0x141
    ctx->pc = 0x1a5b60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)321) ? 1 : 0);
label_1a5b64:
    // 0x1a5b64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a5b68:
    if (ctx->pc == 0x1A5B68u) {
        ctx->pc = 0x1A5B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B64u;
        // 0x1a5b68: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5B6Cu;
        goto label_1a5b6c;
    }
    ctx->pc = 0x1A5B64u;
    {
        const bool branch_taken_0x1a5b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B64u;
        // 0x1a5b68: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b64) {
            ctx->pc = 0x1A5B74u;
            goto label_1a5b74;
        }
    }
    ctx->pc = 0x1A5B6Cu;
label_1a5b6c:
    // 0x1a5b6c: 0xc069a22  jal         func_1A6888
label_1a5b70:
    if (ctx->pc == 0x1A5B70u) {
        ctx->pc = 0x1A5B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B6Cu;
        // 0x1a5b70: 0x2484a4e8  addiu       $a0, $a0, -0x5B18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5B74u;
        goto label_1a5b74;
    }
    ctx->pc = 0x1A5B6Cu;
    SET_GPR_U32(ctx, 31, 0x1A5B74u);
    ctx->pc = 0x1A5B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5B6Cu;
    // 0x1a5b70: 0x2484a4e8  addiu       $a0, $a0, -0x5B18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    { ctx->pc = 0x1a6888; return; }
    ctx->pc = 0x1A5B74u;
label_1a5b74:
    // 0x1a5b74: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1a5b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1a5b78:
    // 0x1a5b78: 0x3206ffff  andi        $a2, $s0, 0xFFFF
    ctx->pc = 0x1a5b78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_1a5b7c:
    // 0x1a5b7c: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x1a5b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1a5b80:
    // 0x1a5b80: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1a5b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a5b84:
    // 0x1a5b84: 0xc069652  jal         func_1A5948
label_1a5b88:
    if (ctx->pc == 0x1A5B88u) {
        ctx->pc = 0x1A5B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B84u;
        // 0x1a5b88: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5B8Cu;
        goto label_1a5b8c;
    }
    ctx->pc = 0x1A5B84u;
    SET_GPR_U32(ctx, 31, 0x1A5B8Cu);
    ctx->pc = 0x1A5B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5B84u;
    // 0x1a5b88: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5948u;
    goto label_1a5948;
    ctx->pc = 0x1A5B8Cu;
label_1a5b8c:
    // 0x1a5b8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a5b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a5b90:
    // 0x1a5b90: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
label_1a5b94:
    if (ctx->pc == 0x1A5B94u) {
        ctx->pc = 0x1A5B98u;
        goto label_1a5b98;
    }
    ctx->pc = 0x1A5B90u;
    {
        const bool branch_taken_0x1a5b90 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1a5b90) {
            ctx->pc = 0x1A5BA4u;
            goto label_1a5ba4;
        }
    }
    ctx->pc = 0x1A5B98u;
label_1a5b98:
    // 0x1a5b98: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1a5b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1a5b9c:
    // 0x1a5b9c: 0xc069a22  jal         func_1A6888
label_1a5ba0:
    if (ctx->pc == 0x1A5BA0u) {
        ctx->pc = 0x1A5BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B9Cu;
        // 0x1a5ba0: 0x2484a510  addiu       $a0, $a0, -0x5AF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5BA4u;
        goto label_1a5ba4;
    }
    ctx->pc = 0x1A5B9Cu;
    SET_GPR_U32(ctx, 31, 0x1A5BA4u);
    ctx->pc = 0x1A5BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5B9Cu;
    // 0x1a5ba0: 0x2484a510  addiu       $a0, $a0, -0x5AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    { ctx->pc = 0x1a6888; return; }
    ctx->pc = 0x1A5BA4u;
label_1a5ba4:
    // 0x1a5ba4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1a5ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1a5ba8:
    // 0x1a5ba8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a5ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1a5bac:
    // 0x1a5bac: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1a5bacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1a5bb0:
    // 0x1a5bb0: 0x10000035  b           . + 4 + (0x35 << 2)
label_1a5bb4:
    if (ctx->pc == 0x1A5BB4u) {
        ctx->pc = 0x1A5BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5BB0u;
        // 0x1a5bb4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5BB8u;
        goto label_1a5bb8;
    }
    ctx->pc = 0x1A5BB0u;
    {
        const bool branch_taken_0x1a5bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5BB0u;
        // 0x1a5bb4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5bb0) {
            ctx->pc = 0x1A5C88u;
            { ctx->pc = 0x1a5c88; return; }
        }
    }
    ctx->pc = 0x1A5BB8u;
label_1a5bb8:
    // 0x1a5bb8: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x1a5bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1a5bbc:
    // 0x1a5bbc: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x1a5bbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_1a5bc0:
    // 0x1a5bc0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1a5bc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a5bc4:
    // 0x1a5bc4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1a5bc8:
    if (ctx->pc == 0x1A5BC8u) {
        ctx->pc = 0x1A5BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5BC4u;
        // 0x1a5bc8: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5BCCu;
        goto label_1a5bcc;
    }
    ctx->pc = 0x1A5BC4u;
    {
        const bool branch_taken_0x1a5bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5BC4u;
        // 0x1a5bc8: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5bc4) {
            ctx->pc = 0x1A5C08u;
            goto label_1a5c08;
        }
    }
    ctx->pc = 0x1A5BCCu;
label_1a5bcc:
    // 0x1a5bcc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a5bd0:
    if (ctx->pc == 0x1A5BD0u) {
        ctx->pc = 0x1A5BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5BCCu;
        // 0x1a5bd0: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5BD4u;
        goto label_1a5bd4;
    }
    ctx->pc = 0x1A5BCCu;
    {
        const bool branch_taken_0x1a5bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5BCCu;
        // 0x1a5bd0: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5bcc) {
            ctx->pc = 0x1A5BDCu;
            goto label_1a5bdc;
        }
    }
    ctx->pc = 0x1A5BD4u;
label_1a5bd4:
    // 0x1a5bd4: 0x0  nop
    ctx->pc = 0x1a5bd4u;
    // NOP
label_1a5bd8:
    // 0x1a5bd8: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1a5bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1a5bdc:
    // 0x1a5bdc: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1a5bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1a5be0:
    // 0x1a5be0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1a5be0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1a5be4:
    // 0x1a5be4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a5be4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a5be8:
    // 0x1a5be8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1a5be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1a5bec:
    // 0x1a5bec: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1a5becu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_1a5bf0:
    // 0x1a5bf0: 0xc0696a2  jal         func_1A5A88
label_1a5bf4:
    if (ctx->pc == 0x1A5BF4u) {
        ctx->pc = 0x1A5BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5BF0u;
        // 0x1a5bf4: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5BF8u;
        goto label_1a5bf8;
    }
    ctx->pc = 0x1A5BF0u;
    SET_GPR_U32(ctx, 31, 0x1A5BF8u);
    ctx->pc = 0x1A5BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5BF0u;
    // 0x1a5bf4: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5A88u;
    goto label_1a5a88;
    ctx->pc = 0x1A5BF8u;
label_1a5bf8:
    // 0x1a5bf8: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x1a5bf8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_1a5bfc:
    // 0x1a5bfc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1a5bfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a5c00:
    // 0x1a5c00: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
label_1a5c04:
    if (ctx->pc == 0x1A5C04u) {
        ctx->pc = 0x1A5C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C00u;
        // 0x1a5c04: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5C08u;
        goto label_1a5c08;
    }
    ctx->pc = 0x1A5C00u;
    {
        const bool branch_taken_0x1a5c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5c00) {
            ctx->pc = 0x1A5C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5C00u;
            // 0x1a5c04: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5bd8;
        }
    }
    ctx->pc = 0x1A5C08u;
label_1a5c08:
    // 0x1a5c08: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1a5c08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1a5c0c:
    // 0x1a5c0c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1a5c10:
    if (ctx->pc == 0x1A5C10u) {
        ctx->pc = 0x1A5C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C0Cu;
        // 0x1a5c10: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5C14u;
        goto label_1a5c14;
    }
    ctx->pc = 0x1A5C0Cu;
    {
        const bool branch_taken_0x1a5c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C0Cu;
        // 0x1a5c10: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c0c) {
            ctx->pc = 0x1A5C88u;
            { ctx->pc = 0x1a5c88; return; }
        }
    }
    ctx->pc = 0x1A5C14u;
label_1a5c14:
    // 0x1a5c14: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1a5c14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1a5c18:
    // 0x1a5c18: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1a5c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a5c1c:
    // 0x1a5c1c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1a5c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1a5c20:
    // 0x1a5c20: 0xc069660  jal         func_1A5980
label_1a5c24:
    if (ctx->pc == 0x1A5C24u) {
        ctx->pc = 0x1A5C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C20u;
        // 0x1a5c24: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5C28u;
        goto label_1a5c28;
    }
    ctx->pc = 0x1A5C20u;
    SET_GPR_U32(ctx, 31, 0x1A5C28u);
    ctx->pc = 0x1A5C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5C20u;
    // 0x1a5c24: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5980u;
    goto label_1a5980;
    ctx->pc = 0x1A5C28u;
label_1a5c28:
    // 0x1a5c28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a5c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a5c2c:
    // 0x1a5c2c: 0x4a30006  bgezl       $a1, . + 4 + (0x6 << 2)
label_1a5c30:
    if (ctx->pc == 0x1A5C30u) {
        ctx->pc = 0x1A5C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C2Cu;
        // 0x1a5c30: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5C34u;
        goto label_1a5c34;
    }
    ctx->pc = 0x1A5C2Cu;
    {
        const bool branch_taken_0x1a5c2c = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1a5c2c) {
            ctx->pc = 0x1A5C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5C2Cu;
            // 0x1a5c30: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5C48u;
            goto label_1a5c48;
        }
    }
    ctx->pc = 0x1A5C34u;
label_1a5c34:
    // 0x1a5c34: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1a5c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1a5c38:
    // 0x1a5c38: 0xc069a22  jal         func_1A6888
label_1a5c3c:
    if (ctx->pc == 0x1A5C3Cu) {
        ctx->pc = 0x1A5C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C38u;
        // 0x1a5c3c: 0x2484a528  addiu       $a0, $a0, -0x5AD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5C40u;
        goto label_1a5c40;
    }
    ctx->pc = 0x1A5C38u;
    SET_GPR_U32(ctx, 31, 0x1A5C40u);
    ctx->pc = 0x1A5C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5C38u;
    // 0x1a5c3c: 0x2484a528  addiu       $a0, $a0, -0x5AD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    { ctx->pc = 0x1a6888; return; }
    ctx->pc = 0x1A5C40u;
label_1a5c40:
    // 0x1a5c40: 0x1000000f  b           . + 4 + (0xF << 2)
label_1a5c44:
    if (ctx->pc == 0x1A5C44u) {
        ctx->pc = 0x1A5C48u;
        goto label_1a5c48;
    }
    ctx->pc = 0x1A5C40u;
    {
        const bool branch_taken_0x1a5c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5c40) {
            ctx->pc = 0x1A5C80u;
            { ctx->pc = 0x1a5c80; return; }
        }
    }
    ctx->pc = 0x1A5C48u;
label_1a5c48:
    // 0x1a5c48: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1a5c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1a5c4c:
    // 0x1a5c4c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a5c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1a5c50:
    // 0x1a5c50: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1a5c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1a5c54:
    // 0x1a5c54: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1a5c54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_1a5c58:
    // 0x1a5c58: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1a5c58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_1a5c5c:
    // 0x1a5c5c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1a5c60:
    if (ctx->pc == 0x1A5C60u) {
        ctx->pc = 0x1A5C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C5Cu;
        // 0x1a5c60: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5C64u;
        goto label_1a5c64;
    }
    ctx->pc = 0x1A5C5Cu;
    {
        const bool branch_taken_0x1a5c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C5Cu;
        // 0x1a5c60: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c5c) {
            ctx->pc = 0x1A5C88u;
            { ctx->pc = 0x1a5c88; return; }
        }
    }
    ctx->pc = 0x1A5C64u;
label_1a5c64:
    // 0x1a5c64: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1a5c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1a5c68:
    // 0x1a5c68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a5c6c:
    if (ctx->pc == 0x1A5C6Cu) {
        ctx->pc = 0x1A5C70u;
        goto label_1a5c70;
    }
    ctx->pc = 0x1A5C68u;
    {
        const bool branch_taken_0x1a5c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5c68) {
            ctx->pc = 0x1A5C80u;
            { ctx->pc = 0x1a5c80; return; }
        }
    }
    ctx->pc = 0x1A5C70u;
label_1a5c70:
    // 0x1a5c70: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1a5c70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1a5c74:
    // 0x1a5c74: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1a5c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1a5c78:
    // 0x1a5c78: 0xc069a22  jal         func_1A6888
label_1a5c7c:
    if (ctx->pc == 0x1A5C7Cu) {
        ctx->pc = 0x1A5C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C78u;
        // 0x1a5c7c: 0x2484a540  addiu       $a0, $a0, -0x5AC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944064));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5C80u;
        { ctx->pc = 0x1a5c80; return; }
    }
    ctx->pc = 0x1A5C78u;
    SET_GPR_U32(ctx, 31, 0x1A5C80u);
    ctx->pc = 0x1A5C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5C78u;
    // 0x1a5c7c: 0x2484a540  addiu       $a0, $a0, -0x5AC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    { ctx->pc = 0x1a6888; return; }
    ctx->pc = 0x1A5C80u;
    ctx->pc = 0x1a5c80u;
    return;
}
