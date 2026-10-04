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


void FUN_0014eba0_part768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2c53d0u: goto label_2c53d0;
        case 0x2c53d4u: goto label_2c53d4;
        case 0x2c53d8u: goto label_2c53d8;
        case 0x2c53dcu: goto label_2c53dc;
        case 0x2c53e0u: goto label_2c53e0;
        case 0x2c53e4u: goto label_2c53e4;
        case 0x2c53e8u: goto label_2c53e8;
        case 0x2c53ecu: goto label_2c53ec;
        case 0x2c53f0u: goto label_2c53f0;
        case 0x2c53f4u: goto label_2c53f4;
        case 0x2c53f8u: goto label_2c53f8;
        case 0x2c53fcu: goto label_2c53fc;
        case 0x2c5400u: goto label_2c5400;
        case 0x2c5404u: goto label_2c5404;
        case 0x2c5408u: goto label_2c5408;
        case 0x2c540cu: goto label_2c540c;
        case 0x2c5410u: goto label_2c5410;
        case 0x2c5414u: goto label_2c5414;
        case 0x2c5418u: goto label_2c5418;
        case 0x2c541cu: goto label_2c541c;
        case 0x2c5420u: goto label_2c5420;
        case 0x2c5424u: goto label_2c5424;
        case 0x2c5428u: goto label_2c5428;
        case 0x2c542cu: goto label_2c542c;
        case 0x2c5430u: goto label_2c5430;
        case 0x2c5434u: goto label_2c5434;
        case 0x2c5438u: goto label_2c5438;
        case 0x2c543cu: goto label_2c543c;
        case 0x2c5440u: goto label_2c5440;
        case 0x2c5444u: goto label_2c5444;
        case 0x2c5448u: goto label_2c5448;
        case 0x2c544cu: goto label_2c544c;
        case 0x2c5450u: goto label_2c5450;
        case 0x2c5454u: goto label_2c5454;
        case 0x2c5458u: goto label_2c5458;
        case 0x2c545cu: goto label_2c545c;
        case 0x2c5460u: goto label_2c5460;
        case 0x2c5464u: goto label_2c5464;
        case 0x2c5468u: goto label_2c5468;
        case 0x2c546cu: goto label_2c546c;
        case 0x2c5470u: goto label_2c5470;
        case 0x2c5474u: goto label_2c5474;
        case 0x2c5478u: goto label_2c5478;
        case 0x2c547cu: goto label_2c547c;
        case 0x2c5480u: goto label_2c5480;
        case 0x2c5484u: goto label_2c5484;
        case 0x2c5488u: goto label_2c5488;
        case 0x2c548cu: goto label_2c548c;
        case 0x2c5490u: goto label_2c5490;
        case 0x2c5494u: goto label_2c5494;
        case 0x2c5498u: goto label_2c5498;
        case 0x2c549cu: goto label_2c549c;
        case 0x2c54a0u: goto label_2c54a0;
        case 0x2c54a4u: goto label_2c54a4;
        case 0x2c54a8u: goto label_2c54a8;
        case 0x2c54acu: goto label_2c54ac;
        case 0x2c54b0u: goto label_2c54b0;
        case 0x2c54b4u: goto label_2c54b4;
        case 0x2c54b8u: goto label_2c54b8;
        case 0x2c54bcu: goto label_2c54bc;
        case 0x2c54c0u: goto label_2c54c0;
        case 0x2c54c4u: goto label_2c54c4;
        case 0x2c54c8u: goto label_2c54c8;
        case 0x2c54ccu: goto label_2c54cc;
        case 0x2c54d0u: goto label_2c54d0;
        case 0x2c54d4u: goto label_2c54d4;
        case 0x2c54d8u: goto label_2c54d8;
        case 0x2c54dcu: goto label_2c54dc;
        case 0x2c54e0u: goto label_2c54e0;
        case 0x2c54e4u: goto label_2c54e4;
        case 0x2c54e8u: goto label_2c54e8;
        case 0x2c54ecu: goto label_2c54ec;
        case 0x2c54f0u: goto label_2c54f0;
        case 0x2c54f4u: goto label_2c54f4;
        case 0x2c54f8u: goto label_2c54f8;
        case 0x2c54fcu: goto label_2c54fc;
        case 0x2c5500u: goto label_2c5500;
        case 0x2c5504u: goto label_2c5504;
        case 0x2c5508u: goto label_2c5508;
        case 0x2c550cu: goto label_2c550c;
        case 0x2c5510u: goto label_2c5510;
        case 0x2c5514u: goto label_2c5514;
        case 0x2c5518u: goto label_2c5518;
        case 0x2c551cu: goto label_2c551c;
        case 0x2c5520u: goto label_2c5520;
        case 0x2c5524u: goto label_2c5524;
        case 0x2c5528u: goto label_2c5528;
        case 0x2c552cu: goto label_2c552c;
        case 0x2c5530u: goto label_2c5530;
        case 0x2c5534u: goto label_2c5534;
        case 0x2c5538u: goto label_2c5538;
        case 0x2c553cu: goto label_2c553c;
        case 0x2c5540u: goto label_2c5540;
        case 0x2c5544u: goto label_2c5544;
        case 0x2c5548u: goto label_2c5548;
        case 0x2c554cu: goto label_2c554c;
        case 0x2c5550u: goto label_2c5550;
        case 0x2c5554u: goto label_2c5554;
        case 0x2c5558u: goto label_2c5558;
        case 0x2c555cu: goto label_2c555c;
        case 0x2c5560u: goto label_2c5560;
        case 0x2c5564u: goto label_2c5564;
        case 0x2c5568u: goto label_2c5568;
        case 0x2c556cu: goto label_2c556c;
        case 0x2c5570u: goto label_2c5570;
        case 0x2c5574u: goto label_2c5574;
        case 0x2c5578u: goto label_2c5578;
        case 0x2c557cu: goto label_2c557c;
        case 0x2c5580u: goto label_2c5580;
        case 0x2c5584u: goto label_2c5584;
        case 0x2c5588u: goto label_2c5588;
        case 0x2c558cu: goto label_2c558c;
        case 0x2c5590u: goto label_2c5590;
        case 0x2c5594u: goto label_2c5594;
        case 0x2c5598u: goto label_2c5598;
        case 0x2c559cu: goto label_2c559c;
        case 0x2c55a0u: goto label_2c55a0;
        case 0x2c55a4u: goto label_2c55a4;
        case 0x2c55a8u: goto label_2c55a8;
        case 0x2c55acu: goto label_2c55ac;
        case 0x2c55b0u: goto label_2c55b0;
        case 0x2c55b4u: goto label_2c55b4;
        case 0x2c55b8u: goto label_2c55b8;
        case 0x2c55bcu: goto label_2c55bc;
        case 0x2c55c0u: goto label_2c55c0;
        case 0x2c55c4u: goto label_2c55c4;
        case 0x2c55c8u: goto label_2c55c8;
        case 0x2c55ccu: goto label_2c55cc;
        case 0x2c55d0u: goto label_2c55d0;
        case 0x2c55d4u: goto label_2c55d4;
        case 0x2c55d8u: goto label_2c55d8;
        case 0x2c55dcu: goto label_2c55dc;
        case 0x2c55e0u: goto label_2c55e0;
        case 0x2c55e4u: goto label_2c55e4;
        case 0x2c55e8u: goto label_2c55e8;
        case 0x2c55ecu: goto label_2c55ec;
        case 0x2c55f0u: goto label_2c55f0;
        case 0x2c55f4u: goto label_2c55f4;
        case 0x2c55f8u: goto label_2c55f8;
        case 0x2c55fcu: goto label_2c55fc;
        case 0x2c5600u: goto label_2c5600;
        case 0x2c5604u: goto label_2c5604;
        case 0x2c5608u: goto label_2c5608;
        case 0x2c560cu: goto label_2c560c;
        case 0x2c5610u: goto label_2c5610;
        case 0x2c5614u: goto label_2c5614;
        case 0x2c5618u: goto label_2c5618;
        case 0x2c561cu: goto label_2c561c;
        case 0x2c5620u: goto label_2c5620;
        case 0x2c5624u: goto label_2c5624;
        case 0x2c5628u: goto label_2c5628;
        case 0x2c562cu: goto label_2c562c;
        case 0x2c5630u: goto label_2c5630;
        case 0x2c5634u: goto label_2c5634;
        case 0x2c5638u: goto label_2c5638;
        case 0x2c563cu: goto label_2c563c;
        case 0x2c5640u: goto label_2c5640;
        case 0x2c5644u: goto label_2c5644;
        case 0x2c5648u: goto label_2c5648;
        case 0x2c564cu: goto label_2c564c;
        case 0x2c5650u: goto label_2c5650;
        case 0x2c5654u: goto label_2c5654;
        case 0x2c5658u: goto label_2c5658;
        case 0x2c565cu: goto label_2c565c;
        case 0x2c5660u: goto label_2c5660;
        case 0x2c5664u: goto label_2c5664;
        case 0x2c5668u: goto label_2c5668;
        case 0x2c566cu: goto label_2c566c;
        case 0x2c5670u: goto label_2c5670;
        case 0x2c5674u: goto label_2c5674;
        case 0x2c5678u: goto label_2c5678;
        case 0x2c567cu: goto label_2c567c;
        case 0x2c5680u: goto label_2c5680;
        case 0x2c5684u: goto label_2c5684;
        case 0x2c5688u: goto label_2c5688;
        case 0x2c568cu: goto label_2c568c;
        case 0x2c5690u: goto label_2c5690;
        case 0x2c5694u: goto label_2c5694;
        case 0x2c5698u: goto label_2c5698;
        case 0x2c569cu: goto label_2c569c;
        case 0x2c56a0u: goto label_2c56a0;
        case 0x2c56a4u: goto label_2c56a4;
        case 0x2c56a8u: goto label_2c56a8;
        case 0x2c56acu: goto label_2c56ac;
        case 0x2c56b0u: goto label_2c56b0;
        case 0x2c56b4u: goto label_2c56b4;
        case 0x2c56b8u: goto label_2c56b8;
        case 0x2c56bcu: goto label_2c56bc;
        case 0x2c56c0u: goto label_2c56c0;
        case 0x2c56c4u: goto label_2c56c4;
        case 0x2c56c8u: goto label_2c56c8;
        case 0x2c56ccu: goto label_2c56cc;
        case 0x2c56d0u: goto label_2c56d0;
        case 0x2c56d4u: goto label_2c56d4;
        case 0x2c56d8u: goto label_2c56d8;
        case 0x2c56dcu: goto label_2c56dc;
        case 0x2c56e0u: goto label_2c56e0;
        case 0x2c56e4u: goto label_2c56e4;
        case 0x2c56e8u: goto label_2c56e8;
        case 0x2c56ecu: goto label_2c56ec;
        case 0x2c56f0u: goto label_2c56f0;
        case 0x2c56f4u: goto label_2c56f4;
        case 0x2c56f8u: goto label_2c56f8;
        case 0x2c56fcu: goto label_2c56fc;
        case 0x2c5700u: goto label_2c5700;
        case 0x2c5704u: goto label_2c5704;
        case 0x2c5708u: goto label_2c5708;
        case 0x2c570cu: goto label_2c570c;
        case 0x2c5710u: goto label_2c5710;
        case 0x2c5714u: goto label_2c5714;
        case 0x2c5718u: goto label_2c5718;
        case 0x2c571cu: goto label_2c571c;
        case 0x2c5720u: goto label_2c5720;
        case 0x2c5724u: goto label_2c5724;
        case 0x2c5728u: goto label_2c5728;
        case 0x2c572cu: goto label_2c572c;
        case 0x2c5730u: goto label_2c5730;
        case 0x2c5734u: goto label_2c5734;
        case 0x2c5738u: goto label_2c5738;
        case 0x2c573cu: goto label_2c573c;
        case 0x2c5740u: goto label_2c5740;
        case 0x2c5744u: goto label_2c5744;
        case 0x2c5748u: goto label_2c5748;
        case 0x2c574cu: goto label_2c574c;
        case 0x2c5750u: goto label_2c5750;
        case 0x2c5754u: goto label_2c5754;
        case 0x2c5758u: goto label_2c5758;
        case 0x2c575cu: goto label_2c575c;
        case 0x2c5760u: goto label_2c5760;
        case 0x2c5764u: goto label_2c5764;
        case 0x2c5768u: goto label_2c5768;
        case 0x2c576cu: goto label_2c576c;
        case 0x2c5770u: goto label_2c5770;
        case 0x2c5774u: goto label_2c5774;
        case 0x2c5778u: goto label_2c5778;
        case 0x2c577cu: goto label_2c577c;
        case 0x2c5780u: goto label_2c5780;
        case 0x2c5784u: goto label_2c5784;
        case 0x2c5788u: goto label_2c5788;
        case 0x2c578cu: goto label_2c578c;
        case 0x2c5790u: goto label_2c5790;
        case 0x2c5794u: goto label_2c5794;
        case 0x2c5798u: goto label_2c5798;
        case 0x2c579cu: goto label_2c579c;
        case 0x2c57a0u: goto label_2c57a0;
        case 0x2c57a4u: goto label_2c57a4;
        case 0x2c57a8u: goto label_2c57a8;
        case 0x2c57acu: goto label_2c57ac;
        case 0x2c57b0u: goto label_2c57b0;
        case 0x2c57b4u: goto label_2c57b4;
        case 0x2c57b8u: goto label_2c57b8;
        case 0x2c57bcu: goto label_2c57bc;
        case 0x2c57c0u: goto label_2c57c0;
        case 0x2c57c4u: goto label_2c57c4;
        case 0x2c57c8u: goto label_2c57c8;
        case 0x2c57ccu: goto label_2c57cc;
        case 0x2c57d0u: goto label_2c57d0;
        case 0x2c57d4u: goto label_2c57d4;
        case 0x2c57d8u: goto label_2c57d8;
        case 0x2c57dcu: goto label_2c57dc;
        case 0x2c57e0u: goto label_2c57e0;
        case 0x2c57e4u: goto label_2c57e4;
        case 0x2c57e8u: goto label_2c57e8;
        case 0x2c57ecu: goto label_2c57ec;
        case 0x2c57f0u: goto label_2c57f0;
        case 0x2c57f4u: goto label_2c57f4;
        case 0x2c57f8u: goto label_2c57f8;
        case 0x2c57fcu: goto label_2c57fc;
        case 0x2c5800u: goto label_2c5800;
        case 0x2c5804u: goto label_2c5804;
        case 0x2c5808u: goto label_2c5808;
        case 0x2c580cu: goto label_2c580c;
        case 0x2c5810u: goto label_2c5810;
        case 0x2c5814u: goto label_2c5814;
        case 0x2c5818u: goto label_2c5818;
        case 0x2c581cu: goto label_2c581c;
        case 0x2c5820u: goto label_2c5820;
        case 0x2c5824u: goto label_2c5824;
        case 0x2c5828u: goto label_2c5828;
        case 0x2c582cu: goto label_2c582c;
        case 0x2c5830u: goto label_2c5830;
        case 0x2c5834u: goto label_2c5834;
        case 0x2c5838u: goto label_2c5838;
        case 0x2c583cu: goto label_2c583c;
        case 0x2c5840u: goto label_2c5840;
        case 0x2c5844u: goto label_2c5844;
        case 0x2c5848u: goto label_2c5848;
        case 0x2c584cu: goto label_2c584c;
        case 0x2c5850u: goto label_2c5850;
        case 0x2c5854u: goto label_2c5854;
        case 0x2c5858u: goto label_2c5858;
        case 0x2c585cu: goto label_2c585c;
        case 0x2c5860u: goto label_2c5860;
        case 0x2c5864u: goto label_2c5864;
        case 0x2c5868u: goto label_2c5868;
        case 0x2c586cu: goto label_2c586c;
        case 0x2c5870u: goto label_2c5870;
        case 0x2c5874u: goto label_2c5874;
        case 0x2c5878u: goto label_2c5878;
        case 0x2c587cu: goto label_2c587c;
        case 0x2c5880u: goto label_2c5880;
        case 0x2c5884u: goto label_2c5884;
        case 0x2c5888u: goto label_2c5888;
        case 0x2c588cu: goto label_2c588c;
        case 0x2c5890u: goto label_2c5890;
        case 0x2c5894u: goto label_2c5894;
        case 0x2c5898u: goto label_2c5898;
        case 0x2c589cu: goto label_2c589c;
        case 0x2c58a0u: goto label_2c58a0;
        case 0x2c58a4u: goto label_2c58a4;
        case 0x2c58a8u: goto label_2c58a8;
        case 0x2c58acu: goto label_2c58ac;
        case 0x2c58b0u: goto label_2c58b0;
        case 0x2c58b4u: goto label_2c58b4;
        case 0x2c58b8u: goto label_2c58b8;
        case 0x2c58bcu: goto label_2c58bc;
        case 0x2c58c0u: goto label_2c58c0;
        case 0x2c58c4u: goto label_2c58c4;
        case 0x2c58c8u: goto label_2c58c8;
        case 0x2c58ccu: goto label_2c58cc;
        case 0x2c58d0u: goto label_2c58d0;
        case 0x2c58d4u: goto label_2c58d4;
        case 0x2c58d8u: goto label_2c58d8;
        case 0x2c58dcu: goto label_2c58dc;
        case 0x2c58e0u: goto label_2c58e0;
        case 0x2c58e4u: goto label_2c58e4;
        case 0x2c58e8u: goto label_2c58e8;
        case 0x2c58ecu: goto label_2c58ec;
        case 0x2c58f0u: goto label_2c58f0;
        case 0x2c58f4u: goto label_2c58f4;
        case 0x2c58f8u: goto label_2c58f8;
        case 0x2c58fcu: goto label_2c58fc;
        case 0x2c5900u: goto label_2c5900;
        case 0x2c5904u: goto label_2c5904;
        case 0x2c5908u: goto label_2c5908;
        case 0x2c590cu: goto label_2c590c;
        case 0x2c5910u: goto label_2c5910;
        case 0x2c5914u: goto label_2c5914;
        case 0x2c5918u: goto label_2c5918;
        case 0x2c591cu: goto label_2c591c;
        case 0x2c5920u: goto label_2c5920;
        case 0x2c5924u: goto label_2c5924;
        case 0x2c5928u: goto label_2c5928;
        case 0x2c592cu: goto label_2c592c;
        case 0x2c5930u: goto label_2c5930;
        case 0x2c5934u: goto label_2c5934;
        case 0x2c5938u: goto label_2c5938;
        case 0x2c593cu: goto label_2c593c;
        case 0x2c5940u: goto label_2c5940;
        case 0x2c5944u: goto label_2c5944;
        case 0x2c5948u: goto label_2c5948;
        case 0x2c594cu: goto label_2c594c;
        case 0x2c5950u: goto label_2c5950;
        case 0x2c5954u: goto label_2c5954;
        case 0x2c5958u: goto label_2c5958;
        case 0x2c595cu: goto label_2c595c;
        case 0x2c5960u: goto label_2c5960;
        case 0x2c5964u: goto label_2c5964;
        case 0x2c5968u: goto label_2c5968;
        case 0x2c596cu: goto label_2c596c;
        case 0x2c5970u: goto label_2c5970;
        case 0x2c5974u: goto label_2c5974;
        case 0x2c5978u: goto label_2c5978;
        case 0x2c597cu: goto label_2c597c;
        case 0x2c5980u: goto label_2c5980;
        case 0x2c5984u: goto label_2c5984;
        case 0x2c5988u: goto label_2c5988;
        case 0x2c598cu: goto label_2c598c;
        case 0x2c5990u: goto label_2c5990;
        case 0x2c5994u: goto label_2c5994;
        case 0x2c5998u: goto label_2c5998;
        case 0x2c599cu: goto label_2c599c;
        case 0x2c59a0u: goto label_2c59a0;
        case 0x2c59a4u: goto label_2c59a4;
        case 0x2c59a8u: goto label_2c59a8;
        case 0x2c59acu: goto label_2c59ac;
        case 0x2c59b0u: goto label_2c59b0;
        case 0x2c59b4u: goto label_2c59b4;
        case 0x2c59b8u: goto label_2c59b8;
        case 0x2c59bcu: goto label_2c59bc;
        case 0x2c59c0u: goto label_2c59c0;
        case 0x2c59c4u: goto label_2c59c4;
        case 0x2c59c8u: goto label_2c59c8;
        case 0x2c59ccu: goto label_2c59cc;
        case 0x2c59d0u: goto label_2c59d0;
        case 0x2c59d4u: goto label_2c59d4;
        case 0x2c59d8u: goto label_2c59d8;
        case 0x2c59dcu: goto label_2c59dc;
        case 0x2c59e0u: goto label_2c59e0;
        case 0x2c59e4u: goto label_2c59e4;
        case 0x2c59e8u: goto label_2c59e8;
        case 0x2c59ecu: goto label_2c59ec;
        case 0x2c59f0u: goto label_2c59f0;
        case 0x2c59f4u: goto label_2c59f4;
        case 0x2c59f8u: goto label_2c59f8;
        case 0x2c59fcu: goto label_2c59fc;
        case 0x2c5a00u: goto label_2c5a00;
        case 0x2c5a04u: goto label_2c5a04;
        case 0x2c5a08u: goto label_2c5a08;
        case 0x2c5a0cu: goto label_2c5a0c;
        case 0x2c5a10u: goto label_2c5a10;
        case 0x2c5a14u: goto label_2c5a14;
        case 0x2c5a18u: goto label_2c5a18;
        case 0x2c5a1cu: goto label_2c5a1c;
        case 0x2c5a20u: goto label_2c5a20;
        case 0x2c5a24u: goto label_2c5a24;
        case 0x2c5a28u: goto label_2c5a28;
        case 0x2c5a2cu: goto label_2c5a2c;
        case 0x2c5a30u: goto label_2c5a30;
        case 0x2c5a34u: goto label_2c5a34;
        case 0x2c5a38u: goto label_2c5a38;
        case 0x2c5a3cu: goto label_2c5a3c;
        case 0x2c5a40u: goto label_2c5a40;
        case 0x2c5a44u: goto label_2c5a44;
        case 0x2c5a48u: goto label_2c5a48;
        case 0x2c5a4cu: goto label_2c5a4c;
        case 0x2c5a50u: goto label_2c5a50;
        case 0x2c5a54u: goto label_2c5a54;
        case 0x2c5a58u: goto label_2c5a58;
        case 0x2c5a5cu: goto label_2c5a5c;
        case 0x2c5a60u: goto label_2c5a60;
        case 0x2c5a64u: goto label_2c5a64;
        case 0x2c5a68u: goto label_2c5a68;
        case 0x2c5a6cu: goto label_2c5a6c;
        case 0x2c5a70u: goto label_2c5a70;
        case 0x2c5a74u: goto label_2c5a74;
        case 0x2c5a78u: goto label_2c5a78;
        case 0x2c5a7cu: goto label_2c5a7c;
        case 0x2c5a80u: goto label_2c5a80;
        case 0x2c5a84u: goto label_2c5a84;
        case 0x2c5a88u: goto label_2c5a88;
        case 0x2c5a8cu: goto label_2c5a8c;
        case 0x2c5a90u: goto label_2c5a90;
        case 0x2c5a94u: goto label_2c5a94;
        case 0x2c5a98u: goto label_2c5a98;
        case 0x2c5a9cu: goto label_2c5a9c;
        case 0x2c5aa0u: goto label_2c5aa0;
        case 0x2c5aa4u: goto label_2c5aa4;
        case 0x2c5aa8u: goto label_2c5aa8;
        case 0x2c5aacu: goto label_2c5aac;
        case 0x2c5ab0u: goto label_2c5ab0;
        case 0x2c5ab4u: goto label_2c5ab4;
        case 0x2c5ab8u: goto label_2c5ab8;
        case 0x2c5abcu: goto label_2c5abc;
        case 0x2c5ac0u: goto label_2c5ac0;
        case 0x2c5ac4u: goto label_2c5ac4;
        case 0x2c5ac8u: goto label_2c5ac8;
        case 0x2c5accu: goto label_2c5acc;
        case 0x2c5ad0u: goto label_2c5ad0;
        case 0x2c5ad4u: goto label_2c5ad4;
        case 0x2c5ad8u: goto label_2c5ad8;
        case 0x2c5adcu: goto label_2c5adc;
        case 0x2c5ae0u: goto label_2c5ae0;
        case 0x2c5ae4u: goto label_2c5ae4;
        case 0x2c5ae8u: goto label_2c5ae8;
        case 0x2c5aecu: goto label_2c5aec;
        case 0x2c5af0u: goto label_2c5af0;
        case 0x2c5af4u: goto label_2c5af4;
        case 0x2c5af8u: goto label_2c5af8;
        case 0x2c5afcu: goto label_2c5afc;
        case 0x2c5b00u: goto label_2c5b00;
        case 0x2c5b04u: goto label_2c5b04;
        case 0x2c5b08u: goto label_2c5b08;
        case 0x2c5b0cu: goto label_2c5b0c;
        case 0x2c5b10u: goto label_2c5b10;
        case 0x2c5b14u: goto label_2c5b14;
        case 0x2c5b18u: goto label_2c5b18;
        case 0x2c5b1cu: goto label_2c5b1c;
        case 0x2c5b20u: goto label_2c5b20;
        case 0x2c5b24u: goto label_2c5b24;
        case 0x2c5b28u: goto label_2c5b28;
        case 0x2c5b2cu: goto label_2c5b2c;
        case 0x2c5b30u: goto label_2c5b30;
        case 0x2c5b34u: goto label_2c5b34;
        case 0x2c5b38u: goto label_2c5b38;
        case 0x2c5b3cu: goto label_2c5b3c;
        case 0x2c5b40u: goto label_2c5b40;
        case 0x2c5b44u: goto label_2c5b44;
        case 0x2c5b48u: goto label_2c5b48;
        case 0x2c5b4cu: goto label_2c5b4c;
        case 0x2c5b50u: goto label_2c5b50;
        case 0x2c5b54u: goto label_2c5b54;
        case 0x2c5b58u: goto label_2c5b58;
        case 0x2c5b5cu: goto label_2c5b5c;
        case 0x2c5b60u: goto label_2c5b60;
        case 0x2c5b64u: goto label_2c5b64;
        case 0x2c5b68u: goto label_2c5b68;
        case 0x2c5b6cu: goto label_2c5b6c;
        case 0x2c5b70u: goto label_2c5b70;
        case 0x2c5b74u: goto label_2c5b74;
        case 0x2c5b78u: goto label_2c5b78;
        case 0x2c5b7cu: goto label_2c5b7c;
        case 0x2c5b80u: goto label_2c5b80;
        case 0x2c5b84u: goto label_2c5b84;
        case 0x2c5b88u: goto label_2c5b88;
        case 0x2c5b8cu: goto label_2c5b8c;
        case 0x2c5b90u: goto label_2c5b90;
        case 0x2c5b94u: goto label_2c5b94;
        case 0x2c5b98u: goto label_2c5b98;
        case 0x2c5b9cu: goto label_2c5b9c;
        default: return;
    }

label_2c53d0:
    // 0x2c53d0: 0x10c0c8  .word       0x0010C0C8                   # jr          $zero # 0010C0C0 <InstrIdType: CPU_SPECIAL>
label_2c53d4:
    if (ctx->pc == 0x2C53D4u) {
        ctx->pc = 0x2C53D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C53D0u;
        // 0x2c53d4: 0x10bf18  .word       0x0010BF18                   # mult        $s7, $zero, $s0 # 00000700 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C53D8u;
        goto label_2c53d8;
    }
    ctx->pc = 0x2C53D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C53D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C53D0u;
        // 0x2c53d4: 0x10bf18  .word       0x0010BF18                   # mult        $s7, $zero, $s0 # 00000700 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C53D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C53D8u;
label_2c53d8:
    // 0x2c53d8: 0x10bf48  .word       0x0010BF48                   # jr          $zero # 0010BF40 <InstrIdType: CPU_SPECIAL>
label_2c53dc:
    if (ctx->pc == 0x2C53DCu) {
        ctx->pc = 0x2C53DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C53D8u;
        // 0x2c53dc: 0x10bf6c  .word       0x0010BF6C                   # dadd        $s7, $zero, $s0 # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, r); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C53E0u;
        goto label_2c53e0;
    }
    ctx->pc = 0x2C53D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C53DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C53D8u;
        // 0x2c53dc: 0x10bf6c  .word       0x0010BF6C                   # dadd        $s7, $zero, $s0 # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, r); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C53D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C53E0u;
label_2c53e0:
    // 0x2c53e0: 0x10bf9c  .word       0x0010BF9C                   # dmult       $zero, $s0 # 0000BF80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c53e0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C53E0 raw=0x0010BF9C");
 /* MITIGATED */
label_2c53e4:
    // 0x2c53e4: 0x10bfc4  .word       0x0010BFC4                   # sllv        $s7, $s0, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c53e4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 0) & 0x1F));
label_2c53e8:
    // 0x2c53e8: 0x10c008  .word       0x0010C008                   # jr          $zero # 0010C000 <InstrIdType: CPU_SPECIAL>
label_2c53ec:
    if (ctx->pc == 0x2C53ECu) {
        ctx->pc = 0x2C53ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C53E8u;
        // 0x2c53ec: 0x10c04c  .word       0x0010C04C                   # syscall     769 # 00100000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->pc = 0x2C53F0u;
        runtime->handleSyscall(rdram, ctx, 0x4301u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C53F0u;
        goto label_2c53f0;
    }
    ctx->pc = 0x2C53E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C53ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C53E8u;
        // 0x2c53ec: 0x10c04c  .word       0x0010C04C                   # syscall     769 # 00100000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->pc = 0x2C53F0u;
        runtime->handleSyscall(rdram, ctx, 0x4301u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C53E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C53F0u;
label_2c53f0:
    // 0x2c53f0: 0x10c094  .word       0x0010C094                   # dsllv       $t8, $s0, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c53f0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 16) << (GPR_U32(ctx, 0) & 0x3F));
label_2c53f4:
    // 0x2c53f4: 0x0  nop
    ctx->pc = 0x2c53f4u;
    // NOP
label_2c53f8:
    // 0x2c53f8: 0x0  nop
    ctx->pc = 0x2c53f8u;
    // NOP
label_2c53fc:
    // 0x2c53fc: 0x0  nop
    ctx->pc = 0x2c53fcu;
    // NOP
label_2c5400:
    // 0x2c5400: 0x10ca18  .word       0x0010CA18                   # mult        $t9, $zero, $s0 # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c5400u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_2c5404:
    // 0x2c5404: 0x10ca58  .word       0x0010CA58                   # mult        $t9, $zero, $s0 # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c5404u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_2c5408:
    // 0x2c5408: 0x10ca58  .word       0x0010CA58                   # mult        $t9, $zero, $s0 # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c5408u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_2c540c:
    // 0x2c540c: 0x10ca28  .word       0x0010CA28                   # mfsa        $t9 # 00100200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c540cu;
    SET_GPR_U32(ctx, 25, ctx->sa);
label_2c5410:
    // 0x2c5410: 0x10cb74  teq         $zero, $s0, 813
    ctx->pc = 0x2c5410u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
label_2c5414:
    // 0x2c5414: 0x10cb74  teq         $zero, $s0, 813
    ctx->pc = 0x2c5414u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
label_2c5418:
    // 0x2c5418: 0x10ca38  dsll        $t9, $s0, 8
    ctx->pc = 0x2c5418u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 16) << 8);
label_2c541c:
    // 0x2c541c: 0x10cc8c  .word       0x0010CC8C                   # syscall     818 # 00100000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c541cu;
    ctx->pc = 0x2C5420u;
runtime->handleSyscall(rdram, ctx, 0x4332u);
label_2c5420:
    // 0x2c5420: 0x10cc8c  .word       0x0010CC8C                   # syscall     818 # 00100000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5420u;
    ctx->pc = 0x2C5424u;
runtime->handleSyscall(rdram, ctx, 0x4332u);
label_2c5424:
    // 0x2c5424: 0x10ca48  .word       0x0010CA48                   # jr          $zero # 0010CA40 <InstrIdType: CPU_SPECIAL>
label_2c5428:
    if (ctx->pc == 0x2C5428u) {
        ctx->pc = 0x2C5428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5424u;
        // 0x2c5428: 0x10cda0  .word       0x0010CDA0                   # add         $t9, $zero, $s0 # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C542Cu;
        goto label_2c542c;
    }
    ctx->pc = 0x2C5424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C5428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5424u;
        // 0x2c5428: 0x10cda0  .word       0x0010CDA0                   # add         $t9, $zero, $s0 # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5424u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C542Cu;
label_2c542c:
    // 0x2c542c: 0x10cda0  .word       0x0010CDA0                   # add         $t9, $zero, $s0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c542cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_2c5430:
    // 0x2c5430: 0x10fda0  .word       0x0010FDA0                   # add         $ra, $zero, $s0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5430u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_2c5434:
    // 0x2c5434: 0x10fd14  .word       0x0010FD14                   # dsllv       $ra, $s0, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5434u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 16) << (GPR_U32(ctx, 0) & 0x3F));
label_2c5438:
    // 0x2c5438: 0x10fd14  .word       0x0010FD14                   # dsllv       $ra, $s0, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5438u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 16) << (GPR_U32(ctx, 0) & 0x3F));
label_2c543c:
    // 0x2c543c: 0x10fd14  .word       0x0010FD14                   # dsllv       $ra, $s0, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c543cu;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 16) << (GPR_U32(ctx, 0) & 0x3F));
label_2c5440:
    // 0x2c5440: 0x10fda0  .word       0x0010FDA0                   # add         $ra, $zero, $s0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5440u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_2c5444:
    // 0x2c5444: 0x10fd2c  .word       0x0010FD2C                   # dadd        $ra, $zero, $s0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5444u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_2c5448:
    // 0x2c5448: 0x10fd2c  .word       0x0010FD2C                   # dadd        $ra, $zero, $s0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5448u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_2c544c:
    // 0x2c544c: 0x10fd2c  .word       0x0010FD2C                   # dadd        $ra, $zero, $s0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c544cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 16); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_2c5450:
    // 0x2c5450: 0x10fda0  .word       0x0010FDA0                   # add         $ra, $zero, $s0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5450u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_2c5454:
    // 0x2c5454: 0x10fd58  .word       0x0010FD58                   # mult        $ra, $zero, $s0 # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c5454u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2c5458:
    // 0x2c5458: 0x10fd58  .word       0x0010FD58                   # mult        $ra, $zero, $s0 # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c5458u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2c545c:
    // 0x2c545c: 0x10fd58  .word       0x0010FD58                   # mult        $ra, $zero, $s0 # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c545cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2c5460:
    // 0x2c5460: 0x10fda0  .word       0x0010FDA0                   # add         $ra, $zero, $s0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5460u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_2c5464:
    // 0x2c5464: 0x10fd80  sll         $ra, $s0, 22
    ctx->pc = 0x2c5464u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 16), 22));
label_2c5468:
    // 0x2c5468: 0x10fd80  sll         $ra, $s0, 22
    ctx->pc = 0x2c5468u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 16), 22));
label_2c546c:
    // 0x2c546c: 0x10fd80  sll         $ra, $s0, 22
    ctx->pc = 0x2c546cu;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 16), 22));
label_2c5470:
    // 0x2c5470: 0x11905c  .word       0x0011905C                   # dmult       $zero, $s1 # 00009040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5470u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C5470 raw=0x0011905C");
 /* MITIGATED */
label_2c5474:
    // 0x2c5474: 0x1195a8  .word       0x001195A8                   # mfsa        $s2 # 00110580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c5474u;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_2c5478:
    // 0x2c5478: 0x1195a8  .word       0x001195A8                   # mfsa        $s2 # 00110580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c5478u;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_2c547c:
    // 0x2c547c: 0x119484  .word       0x00119484                   # sllv        $s2, $s1, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c547cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 0) & 0x1F));
label_2c5480:
    // 0x2c5480: 0x1195a8  .word       0x001195A8                   # mfsa        $s2 # 00110580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c5480u;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_2c5484:
    // 0x2c5484: 0x11905c  .word       0x0011905C                   # dmult       $zero, $s1 # 00009040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5484u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C5484 raw=0x0011905C");
 /* MITIGATED */
label_2c5488:
    // 0x2c5488: 0x0  nop
    ctx->pc = 0x2c5488u;
    // NOP
label_2c548c:
    // 0x2c548c: 0x0  nop
    ctx->pc = 0x2c548cu;
    // NOP
label_2c5490:
    // 0x2c5490: 0x127708  .word       0x00127708                   # jr          $zero # 00127700 <InstrIdType: CPU_SPECIAL>
label_2c5494:
    if (ctx->pc == 0x2C5494u) {
        ctx->pc = 0x2C5494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5490u;
        // 0x2c5494: 0x1278ac  .word       0x001278AC                   # dadd        $t7, $zero, $s2 # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, r); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5498u;
        goto label_2c5498;
    }
    ctx->pc = 0x2C5490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C5494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5490u;
        // 0x2c5494: 0x1278ac  .word       0x001278AC                   # dadd        $t7, $zero, $s2 # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, r); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5490u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C5498u;
label_2c5498:
    // 0x2c5498: 0x127740  sll         $t6, $s2, 29
    ctx->pc = 0x2c5498u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 18), 29));
label_2c549c:
    // 0x2c549c: 0x127874  teq         $zero, $s2, 481
    ctx->pc = 0x2c549cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_2c54a0:
    // 0x2c54a0: 0x12775c  .word       0x0012775C                   # dmult       $zero, $s2 # 00007740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c54a0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C54A0 raw=0x0012775C");
 /* MITIGATED */
label_2c54a4:
    // 0x2c54a4: 0x127778  dsll        $t6, $s2, 29
    ctx->pc = 0x2c54a4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 18) << 29);
label_2c54a8:
    // 0x2c54a8: 0x127708  .word       0x00127708                   # jr          $zero # 00127700 <InstrIdType: CPU_SPECIAL>
label_2c54ac:
    if (ctx->pc == 0x2C54ACu) {
        ctx->pc = 0x2C54ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C54A8u;
        // 0x2c54ac: 0x127724  .word       0x00127724                   # and         $t6, $zero, $s2 # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) & GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C54B0u;
        goto label_2c54b0;
    }
    ctx->pc = 0x2C54A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C54ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C54A8u;
        // 0x2c54ac: 0x127724  .word       0x00127724                   # and         $t6, $zero, $s2 # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) & GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C54A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C54B0u;
label_2c54b0:
    // 0x2c54b0: 0x127794  .word       0x00127794                   # dsllv       $t6, $s2, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c54b0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 18) << (GPR_U32(ctx, 0) & 0x3F));
label_2c54b4:
    // 0x2c54b4: 0x1277b0  tge         $zero, $s2, 478
    ctx->pc = 0x2c54b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_2c54b8:
    // 0x2c54b8: 0x1277cc  .word       0x001277CC                   # syscall     479 # 00120000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c54b8u;
    ctx->pc = 0x2C54BCu;
runtime->handleSyscall(rdram, ctx, 0x49DFu);
label_2c54bc:
    // 0x2c54bc: 0x127708  .word       0x00127708                   # jr          $zero # 00127700 <InstrIdType: CPU_SPECIAL>
label_2c54c0:
    if (ctx->pc == 0x2C54C0u) {
        ctx->pc = 0x2C54C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C54BCu;
        // 0x2c54c0: 0x1278ac  .word       0x001278AC                   # dadd        $t7, $zero, $s2 # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, r); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C54C4u;
        goto label_2c54c4;
    }
    ctx->pc = 0x2C54BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C54C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C54BCu;
        // 0x2c54c0: 0x1278ac  .word       0x001278AC                   # dadd        $t7, $zero, $s2 # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, r); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C54BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C54C4u;
label_2c54c4:
    // 0x2c54c4: 0x12775c  .word       0x0012775C                   # dmult       $zero, $s2 # 00007740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c54c4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C54C4 raw=0x0012775C");
 /* MITIGATED */
label_2c54c8:
    // 0x2c54c8: 0x1277e8  .word       0x001277E8                   # mfsa        $t6 # 001207C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c54c8u;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_2c54cc:
    // 0x2c54cc: 0x127804  sllv        $t7, $s2, $zero
    ctx->pc = 0x2c54ccu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 0) & 0x1F));
label_2c54d0:
    // 0x2c54d0: 0x127820  add         $t7, $zero, $s2
    ctx->pc = 0x2c54d0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2c54d4:
    // 0x2c54d4: 0x12783c  dsll32      $t7, $s2, 0
    ctx->pc = 0x2c54d4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 18) << (32 + 0));
label_2c54d8:
    // 0x2c54d8: 0x127858  .word       0x00127858                   # mult        $t7, $zero, $s2 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c54d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_2c54dc:
    // 0x2c54dc: 0x127874  teq         $zero, $s2, 481
    ctx->pc = 0x2c54dcu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_2c54e0:
    // 0x2c54e0: 0x127890  .word       0x00127890                   # mfhi        $t7 # 00120080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c54e0u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_2c54e4:
    // 0x2c54e4: 0x1278ac  .word       0x001278AC                   # dadd        $t7, $zero, $s2 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c54e4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, r); }
label_2c54e8:
    // 0x2c54e8: 0x127740  sll         $t6, $s2, 29
    ctx->pc = 0x2c54e8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 18), 29));
label_2c54ec:
    // 0x2c54ec: 0x0  nop
    ctx->pc = 0x2c54ecu;
    // NOP
label_2c54f0:
    // 0x2c54f0: 0x127558  .word       0x00127558                   # mult        $t6, $zero, $s2 # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c54f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2c54f4:
    // 0x2c54f4: 0x127574  teq         $zero, $s2, 469
    ctx->pc = 0x2c54f4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_2c54f8:
    // 0x2c54f8: 0x127590  .word       0x00127590                   # mfhi        $t6 # 00120580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c54f8u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2c54fc:
    // 0x2c54fc: 0x127590  .word       0x00127590                   # mfhi        $t6 # 00120580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c54fcu;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2c5500:
    // 0x2c5500: 0x1275ac  .word       0x001275AC                   # dadd        $t6, $zero, $s2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5500u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_2c5504:
    // 0x2c5504: 0x127574  teq         $zero, $s2, 469
    ctx->pc = 0x2c5504u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_2c5508:
    // 0x2c5508: 0x1275c8  .word       0x001275C8                   # jr          $zero # 001275C0 <InstrIdType: CPU_SPECIAL>
label_2c550c:
    if (ctx->pc == 0x2C550Cu) {
        ctx->pc = 0x2C550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5508u;
        // 0x2c550c: 0x1275e4  .word       0x001275E4                   # and         $t6, $zero, $s2 # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) & GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5510u;
        goto label_2c5510;
    }
    ctx->pc = 0x2C5508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5508u;
        // 0x2c550c: 0x1275e4  .word       0x001275E4                   # and         $t6, $zero, $s2 # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) & GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5508u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C5510u;
label_2c5510:
    // 0x2c5510: 0x127600  sll         $t6, $s2, 24
    ctx->pc = 0x2c5510u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 18), 24));
label_2c5514:
    // 0x2c5514: 0x12761c  .word       0x0012761C                   # dmult       $zero, $s2 # 00007600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5514u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C5514 raw=0x0012761C");
 /* MITIGATED */
label_2c5518:
    // 0x2c5518: 0x127638  dsll        $t6, $s2, 24
    ctx->pc = 0x2c5518u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 18) << 24);
label_2c551c:
    // 0x2c551c: 0x1275c8  .word       0x001275C8                   # jr          $zero # 001275C0 <InstrIdType: CPU_SPECIAL>
label_2c5520:
    if (ctx->pc == 0x2C5520u) {
        ctx->pc = 0x2C5520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C551Cu;
        // 0x2c5520: 0x127654  .word       0x00127654                   # dsllv       $t6, $s2, $zero # 00000640 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 18) << (GPR_U32(ctx, 0) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5524u;
        goto label_2c5524;
    }
    ctx->pc = 0x2C551Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C5520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C551Cu;
        // 0x2c5520: 0x127654  .word       0x00127654                   # dsllv       $t6, $s2, $zero # 00000640 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 18) << (GPR_U32(ctx, 0) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C551Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C5524u;
label_2c5524:
    // 0x2c5524: 0x127670  tge         $zero, $s2, 473
    ctx->pc = 0x2c5524u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_2c5528:
    // 0x2c5528: 0x127670  tge         $zero, $s2, 473
    ctx->pc = 0x2c5528u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_2c552c:
    // 0x2c552c: 0x12768c  .word       0x0012768C                   # syscall     474 # 00120000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c552cu;
    ctx->pc = 0x2C5530u;
runtime->handleSyscall(rdram, ctx, 0x49DAu);
label_2c5530:
    // 0x2c5530: 0x127670  tge         $zero, $s2, 473
    ctx->pc = 0x2c5530u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_2c5534:
    // 0x2c5534: 0x127638  dsll        $t6, $s2, 24
    ctx->pc = 0x2c5534u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 18) << 24);
label_2c5538:
    // 0x2c5538: 0x127574  teq         $zero, $s2, 469
    ctx->pc = 0x2c5538u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_2c553c:
    // 0x2c553c: 0x127590  .word       0x00127590                   # mfhi        $t6 # 00120580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c553cu;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2c5540:
    // 0x2c5540: 0x1276a8  .word       0x001276A8                   # mfsa        $t6 # 00120680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c5540u;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_2c5544:
    // 0x2c5544: 0x127654  .word       0x00127654                   # dsllv       $t6, $s2, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5544u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 18) << (GPR_U32(ctx, 0) & 0x3F));
label_2c5548:
    // 0x2c5548: 0x127558  .word       0x00127558                   # mult        $t6, $zero, $s2 # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c5548u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2c554c:
    // 0x2c554c: 0x0  nop
    ctx->pc = 0x2c554cu;
    // NOP
label_2c5550:
    // 0x2c5550: 0x12d790  .word       0x0012D790                   # mfhi        $k0 # 00120780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5550u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2c5554:
    // 0x2c5554: 0x12d82c  dadd        $k1, $zero, $s2
    ctx->pc = 0x2c5554u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 27, r); }
label_2c5558:
    // 0x2c5558: 0x12d8b0  tge         $zero, $s2, 866
    ctx->pc = 0x2c5558u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_2c555c:
    // 0x2c555c: 0x12d8c0  sll         $k1, $s2, 3
    ctx->pc = 0x2c555cu;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_2c5560:
    // 0x2c5560: 0x12d938  dsll        $k1, $s2, 4
    ctx->pc = 0x2c5560u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 18) << 4);
label_2c5564:
    // 0x2c5564: 0x12e2cc  .word       0x0012E2CC                   # syscall     907 # 00120000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5564u;
    ctx->pc = 0x2C5568u;
runtime->handleSyscall(rdram, ctx, 0x4B8Bu);
label_2c5568:
    // 0x2c5568: 0x12e34c  .word       0x0012E34C                   # syscall     909 # 00120000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5568u;
    ctx->pc = 0x2C556Cu;
runtime->handleSyscall(rdram, ctx, 0x4B8Du);
label_2c556c:
    // 0x2c556c: 0x12e35c  .word       0x0012E35C                   # dmult       $zero, $s2 # 0000E340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c556cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C556C raw=0x0012E35C");
 /* MITIGATED */
label_2c5570:
    // 0x2c5570: 0x12e3f8  dsll        $gp, $s2, 15
    ctx->pc = 0x2c5570u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 18) << 15);
label_2c5574:
    // 0x2c5574: 0x0  nop
    ctx->pc = 0x2c5574u;
    // NOP
label_2c5578:
    // 0x2c5578: 0x0  nop
    ctx->pc = 0x2c5578u;
    // NOP
label_2c557c:
    // 0x2c557c: 0x0  nop
    ctx->pc = 0x2c557cu;
    // NOP
label_2c5580:
    // 0x2c5580: 0x12e680  sll         $gp, $s2, 26
    ctx->pc = 0x2c5580u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 18), 26));
label_2c5584:
    // 0x2c5584: 0x12e680  sll         $gp, $s2, 26
    ctx->pc = 0x2c5584u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 18), 26));
label_2c5588:
    // 0x2c5588: 0x12e554  .word       0x0012E554                   # dsllv       $gp, $s2, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5588u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 18) << (GPR_U32(ctx, 0) & 0x3F));
label_2c558c:
    // 0x2c558c: 0x12e568  .word       0x0012E568                   # mfsa        $gp # 00120540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c558cu;
    SET_GPR_U32(ctx, 28, ctx->sa);
label_2c5590:
    // 0x2c5590: 0x12e57c  dsll32      $gp, $s2, 21
    ctx->pc = 0x2c5590u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 18) << (32 + 21));
label_2c5594:
    // 0x2c5594: 0x12e58c  .word       0x0012E58C                   # syscall     918 # 00120000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5594u;
    ctx->pc = 0x2C5598u;
runtime->handleSyscall(rdram, ctx, 0x4B96u);
label_2c5598:
    // 0x2c5598: 0x12e5a0  .word       0x0012E5A0                   # add         $gp, $zero, $s2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5598u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_2c559c:
    // 0x2c559c: 0x12e5b4  teq         $zero, $s2, 918
    ctx->pc = 0x2c559cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_2c55a0:
    // 0x2c55a0: 0x12e5c8  .word       0x0012E5C8                   # jr          $zero # 0012E5C0 <InstrIdType: CPU_SPECIAL>
label_2c55a4:
    if (ctx->pc == 0x2C55A4u) {
        ctx->pc = 0x2C55A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C55A0u;
        // 0x2c55a4: 0x12e5dc  .word       0x0012E5DC                   # dmult       $zero, $s2 # 0000E5C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C55A4 raw=0x0012E5DC");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C55A8u;
        goto label_2c55a8;
    }
    ctx->pc = 0x2C55A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C55A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C55A0u;
        // 0x2c55a4: 0x12e5dc  .word       0x0012E5DC                   # dmult       $zero, $s2 # 0000E5C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C55A4 raw=0x0012E5DC");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C55A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C55A8u;
label_2c55a8:
    // 0x2c55a8: 0x12e5f0  tge         $zero, $s2, 919
    ctx->pc = 0x2c55a8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_2c55ac:
    // 0x2c55ac: 0x0  nop
    ctx->pc = 0x2c55acu;
    // NOP
label_2c55b0:
    // 0x2c55b0: 0x12e7b4  teq         $zero, $s2, 926
    ctx->pc = 0x2c55b0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_2c55b4:
    // 0x2c55b4: 0x12e7b4  teq         $zero, $s2, 926
    ctx->pc = 0x2c55b4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_2c55b8:
    // 0x2c55b8: 0x12e7b4  teq         $zero, $s2, 926
    ctx->pc = 0x2c55b8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_2c55bc:
    // 0x2c55bc: 0x12e7b4  teq         $zero, $s2, 926
    ctx->pc = 0x2c55bcu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_2c55c0:
    // 0x2c55c0: 0x12e7b4  teq         $zero, $s2, 926
    ctx->pc = 0x2c55c0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_2c55c4:
    // 0x2c55c4: 0x12e7b4  teq         $zero, $s2, 926
    ctx->pc = 0x2c55c4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_2c55c8:
    // 0x2c55c8: 0x12e7b4  teq         $zero, $s2, 926
    ctx->pc = 0x2c55c8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_2c55cc:
    // 0x2c55cc: 0x0  nop
    ctx->pc = 0x2c55ccu;
    // NOP
label_2c55d0:
    // 0x2c55d0: 0x12ea40  sll         $sp, $s2, 9
    ctx->pc = 0x2c55d0u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 18), 9));
label_2c55d4:
    // 0x2c55d4: 0x12ea54  .word       0x0012EA54                   # dsllv       $sp, $s2, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c55d4u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 18) << (GPR_U32(ctx, 0) & 0x3F));
label_2c55d8:
    // 0x2c55d8: 0x12ea68  .word       0x0012EA68                   # mfsa        $sp # 00120240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c55d8u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_2c55dc:
    // 0x2c55dc: 0x12ea7c  dsll32      $sp, $s2, 9
    ctx->pc = 0x2c55dcu;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 18) << (32 + 9));
label_2c55e0:
    // 0x2c55e0: 0x12ea90  .word       0x0012EA90                   # mfhi        $sp # 00120280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c55e0u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_2c55e4:
    // 0x2c55e4: 0x12eaa4  .word       0x0012EAA4                   # and         $sp, $zero, $s2 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c55e4u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) & GPR_U64(ctx, 18));
label_2c55e8:
    // 0x2c55e8: 0x12eab8  dsll        $sp, $s2, 10
    ctx->pc = 0x2c55e8u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 18) << 10);
label_2c55ec:
    // 0x2c55ec: 0x0  nop
    ctx->pc = 0x2c55ecu;
    // NOP
label_2c55f0:
    // 0x2c55f0: 0x12e874  teq         $zero, $s2, 929
    ctx->pc = 0x2c55f0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_2c55f4:
    // 0x2c55f4: 0x12e888  .word       0x0012E888                   # jr          $zero # 0012E880 <InstrIdType: CPU_SPECIAL>
label_2c55f8:
    if (ctx->pc == 0x2C55F8u) {
        ctx->pc = 0x2C55F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C55F4u;
        // 0x2c55f8: 0x12e8cc  .word       0x0012E8CC                   # syscall     931 # 00120000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->pc = 0x2C55FCu;
        runtime->handleSyscall(rdram, ctx, 0x4BA3u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C55FCu;
        goto label_2c55fc;
    }
    ctx->pc = 0x2C55F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C55F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C55F4u;
        // 0x2c55f8: 0x12e8cc  .word       0x0012E8CC                   # syscall     931 # 00120000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->pc = 0x2C55FCu;
        runtime->handleSyscall(rdram, ctx, 0x4BA3u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C55F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C55FCu;
label_2c55fc:
    // 0x2c55fc: 0x12e910  .word       0x0012E910                   # mfhi        $sp # 00120100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c55fcu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_2c5600:
    // 0x2c5600: 0x12e924  .word       0x0012E924                   # and         $sp, $zero, $s2 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5600u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) & GPR_U64(ctx, 18));
label_2c5604:
    // 0x2c5604: 0x12e968  .word       0x0012E968                   # mfsa        $sp # 00120140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c5604u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_2c5608:
    // 0x2c5608: 0x12e9ac  .word       0x0012E9AC                   # dadd        $sp, $zero, $s2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5608u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 29, r); }
label_2c560c:
    // 0x2c560c: 0x0  nop
    ctx->pc = 0x2c560cu;
    // NOP
label_2c5610:
    // 0x2c5610: 0x676e694b  daddiu      $t6, $k1, 0x694B
    ctx->pc = 0x2c5610u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26955);
label_2c5614:
    // 0x2c5614: 0x20666f20  addi        $a2, $v1, 0x6F20
    ctx->pc = 0x2c5614u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28448, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_2c5618:
    // 0x2c5618: 0x20696557  addi        $t1, $v1, 0x6557
    ctx->pc = 0x2c5618u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25943, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_2c561c:
    // 0x2c561c: 0x61432020  daddi       $v1, $t2, 0x2020
    ctx->pc = 0x2c561cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8224; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_2c5620:
    // 0x2c5620: 0x6143206f  daddi       $v1, $t2, 0x206F
    ctx->pc = 0x2c5620u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8303; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_2c5624:
    // 0x2c5624: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5624u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2c5628:
    // 0x2c5628: 0x0  nop
    ctx->pc = 0x2c5628u;
    // NOP
label_2c562c:
    // 0x2c562c: 0x0  nop
    ctx->pc = 0x2c562cu;
    // NOP
label_2c5630:
    // 0x2c5630: 0x20756853  addi        $s5, $v1, 0x6853
    ctx->pc = 0x2c5630u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26707, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2c5634:
    // 0x2c5634: 0x6e6f7246  ldr         $t7, 0x7246($s3)
    ctx->pc = 0x2c5634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29254); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c5638:
    // 0x2c5638: 0x65472074  daddiu      $a3, $t2, 0x2074
    ctx->pc = 0x2c5638u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8308);
label_2c563c:
    // 0x2c563c: 0x6172656e  daddi       $s2, $t3, 0x656E
    ctx->pc = 0x2c563cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c5640:
    // 0x2c5640: 0x2020206c  addi        $zero, $at, 0x206C
    ctx->pc = 0x2c5640u;
    // NOP (addi to $zero)
label_2c5644:
    // 0x2c5644: 0x6e617547  ldr         $at, 0x7547($s3)
    ctx->pc = 0x2c5644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30023); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c5648:
    // 0x2c5648: 0x755920  .word       0x00755920                   # add         $t3, $v1, $s5 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5648u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2c564c:
    // 0x2c564c: 0x0  nop
    ctx->pc = 0x2c564cu;
    // NOP
label_2c5650:
    // 0x2c5650: 0x20756853  addi        $s5, $v1, 0x6853
    ctx->pc = 0x2c5650u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26707, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2c5654:
    // 0x2c5654: 0x68676952  ldl         $a3, 0x6952($v1)
    ctx->pc = 0x2c5654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26962); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2c5658:
    // 0x2c5658: 0x65472074  daddiu      $a3, $t2, 0x2074
    ctx->pc = 0x2c5658u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8308);
label_2c565c:
    // 0x2c565c: 0x6172656e  daddi       $s2, $t3, 0x656E
    ctx->pc = 0x2c565cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c5660:
    // 0x2c5660: 0x2020206c  addi        $zero, $at, 0x206C
    ctx->pc = 0x2c5660u;
    // NOP (addi to $zero)
label_2c5664:
    // 0x2c5664: 0x6e61685a  ldr         $at, 0x685A($s3)
    ctx->pc = 0x2c5664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c5668:
    // 0x2c5668: 0x65462067  daddiu      $a2, $t2, 0x2067
    ctx->pc = 0x2c5668u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8295);
label_2c566c:
    // 0x2c566c: 0x69  .word       0x00000069                   # mtsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c566cu;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2c5670:
    // 0x2c5670: 0x20756853  addi        $s5, $v1, 0x6853
    ctx->pc = 0x2c5670u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26707, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2c5674:
    // 0x2c5674: 0x6d697250  ldr         $t1, 0x7250($t3)
    ctx->pc = 0x2c5674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2c5678:
    // 0x2c5678: 0x694d2065  ldl         $t5, 0x2065($t2)
    ctx->pc = 0x2c5678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
label_2c567c:
    // 0x2c567c: 0x7473696e  .word       0x7473696E                   # INVALID     $v1, $s3, 0x696E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c567cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C567C raw=0x7473696E");
 /* MITIGATED */
label_2c5680:
    // 0x2c5680: 0x20207265  addi        $zero, $at, 0x7265
    ctx->pc = 0x2c5680u;
    // NOP (addi to $zero)
label_2c5684:
    // 0x2c5684: 0x75685a20  .word       0x75685A20                   # INVALID     $t3, $t0, 0x5A20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5684u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C5684 raw=0x75685A20");
 /* MITIGATED */
label_2c5688:
    // 0x2c5688: 0x4c206567  .word       0x4C206567                   # INVALID     $at, $zero, 0x6567 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5688u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C5688 raw=0x4C206567");
 /* MITIGATED */
label_2c568c:
    // 0x2c568c: 0x676e6169  daddiu      $t6, $k1, 0x6169
    ctx->pc = 0x2c568cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24937);
label_2c5690:
    // 0x2c5690: 0x0  nop
    ctx->pc = 0x2c5690u;
    // NOP
label_2c5694:
    // 0x2c5694: 0x0  nop
    ctx->pc = 0x2c5694u;
    // NOP
label_2c5698:
    // 0x2c5698: 0x0  nop
    ctx->pc = 0x2c5698u;
    // NOP
label_2c569c:
    // 0x2c569c: 0x0  nop
    ctx->pc = 0x2c569cu;
    // NOP
label_2c56a0:
    // 0x2c56a0: 0x696c6c41  ldl         $t4, 0x6C41($t3)
    ctx->pc = 0x2c56a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 27713); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_2c56a4:
    // 0x2c56a4: 0x46206465  .word       0x46206465                   # INVALID     $s1, $zero, 0x6465 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c56a4u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x11, function 0x25 at 0x2C56A4 raw=0x46206465");
 /* MITIGATED */
label_2c56a8:
    // 0x2c56a8: 0x6563726f  daddiu      $v1, $t3, 0x726F
    ctx->pc = 0x2c56a8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29295);
label_2c56ac:
    // 0x2c56ac: 0x65472073  daddiu      $a3, $t2, 0x2073
    ctx->pc = 0x2c56acu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8307);
label_2c56b0:
    // 0x2c56b0: 0x6172656e  daddi       $s2, $t3, 0x656E
    ctx->pc = 0x2c56b0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c56b4:
    // 0x2c56b4: 0x2020206c  addi        $zero, $at, 0x206C
    ctx->pc = 0x2c56b4u;
    // NOP (addi to $zero)
label_2c56b8:
    // 0x2c56b8: 0x2075694c  addi        $s5, $v1, 0x694C
    ctx->pc = 0x2c56b8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26956, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2c56bc:
    // 0x2c56bc: 0x696542  .word       0x00696542                   # srl         $t4, $t1, 21 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c56bcu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 9), 21));
label_2c56c0:
    // 0x2c56c0: 0x20756853  addi        $s5, $v1, 0x6853
    ctx->pc = 0x2c56c0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26707, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2c56c4:
    // 0x2c56c4: 0x65706d45  daddiu      $s0, $t3, 0x6D45
    ctx->pc = 0x2c56c4u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)27973);
label_2c56c8:
    // 0x2c56c8: 0x20726f72  addi        $s2, $v1, 0x6F72
    ctx->pc = 0x2c56c8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28530, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_2c56cc:
    // 0x2c56cc: 0x694c2020  ldl         $t4, 0x2020($t2)
    ctx->pc = 0x2c56ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_2c56d0:
    // 0x2c56d0: 0x65422075  daddiu      $v0, $t2, 0x2075
    ctx->pc = 0x2c56d0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8309);
label_2c56d4:
    // 0x2c56d4: 0x69  .word       0x00000069                   # mtsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c56d4u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2c56d8:
    // 0x2c56d8: 0x0  nop
    ctx->pc = 0x2c56d8u;
    // NOP
label_2c56dc:
    // 0x2c56dc: 0x0  nop
    ctx->pc = 0x2c56dcu;
    // NOP
label_2c56e0:
    // 0x2c56e0: 0x206f6143  addi        $t7, $v1, 0x6143
    ctx->pc = 0x2c56e0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24899, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2c56e4:
    // 0x2c56e4: 0x276f6143  addiu       $t7, $k1, 0x6143
    ctx->pc = 0x2c56e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 27), 24899));
label_2c56e8:
    // 0x2c56e8: 0x65472073  daddiu      $a3, $t2, 0x2073
    ctx->pc = 0x2c56e8u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8307);
label_2c56ec:
    // 0x2c56ec: 0x6172656e  daddi       $s2, $t3, 0x656E
    ctx->pc = 0x2c56ecu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c56f0:
    // 0x2c56f0: 0x2020206c  addi        $zero, $at, 0x206C
    ctx->pc = 0x2c56f0u;
    // NOP (addi to $zero)
label_2c56f4:
    // 0x2c56f4: 0x68616958  ldl         $at, 0x6958($v1)
    ctx->pc = 0x2c56f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26968); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_2c56f8:
    // 0x2c56f8: 0x4420756f  .word       0x4420756F                   # dmfc1       $zero, $f14 # 0000056F <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c56f8u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x2F at 0x2C56F8 raw=0x4420756F");
 /* MITIGATED */
label_2c56fc:
    // 0x2c56fc: 0x6e75  .word       0x00006E75                   # INVALID     $zero, $zero, 0x6E75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c56fcu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2C56FC raw=0x00006E75");
 /* MITIGATED */
label_2c5700:
    // 0x2c5700: 0x206f6143  addi        $t7, $v1, 0x6143
    ctx->pc = 0x2c5700u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24899, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2c5704:
    // 0x2c5704: 0x276f6143  addiu       $t7, $k1, 0x6143
    ctx->pc = 0x2c5704u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 27), 24899));
label_2c5708:
    // 0x2c5708: 0x61432073  daddi       $v1, $t2, 0x2073
    ctx->pc = 0x2c5708u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8307; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_2c570c:
    // 0x2c570c: 0x696c6176  ldl         $t4, 0x6176($t3)
    ctx->pc = 0x2c570cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24950); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_2c5710:
    // 0x2c5710: 0x47207265  .word       0x47207265                   # INVALID     $t9, $zero, 0x7265 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c5710u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0x25 at 0x2C5710 raw=0x47207265");
 /* MITIGATED */
label_2c5714:
    // 0x2c5714: 0x72656e65  .word       0x72656E65                   # INVALID     $s3, $a1, 0x6E65 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c5714u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2C5714 raw=0x72656E65");
 /* MITIGATED */
label_2c5718:
    // 0x2c5718: 0x20206c61  addi        $zero, $at, 0x6C61
    ctx->pc = 0x2c5718u;
    // NOP (addi to $zero)
label_2c571c:
    // 0x2c571c: 0x61695820  daddi       $t1, $t3, 0x5820
    ctx->pc = 0x2c571cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)22560; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_2c5720:
    // 0x2c5720: 0x20756f68  addi        $s5, $v1, 0x6F68
    ctx->pc = 0x2c5720u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28520, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2c5724:
    // 0x2c5724: 0x6e7544  .word       0x006E7544                   # sllv        $t6, $t6, $v1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5724u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 3) & 0x1F));
label_2c5728:
    // 0x2c5728: 0x0  nop
    ctx->pc = 0x2c5728u;
    // NOP
label_2c572c:
    // 0x2c572c: 0x0  nop
    ctx->pc = 0x2c572cu;
    // NOP
label_2c5730:
    // 0x2c5730: 0x20696557  addi        $t1, $v1, 0x6557
    ctx->pc = 0x2c5730u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25943, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_2c5734:
    // 0x2c5734: 0x6e6f7246  ldr         $t7, 0x7246($s3)
    ctx->pc = 0x2c5734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29254); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c5738:
    // 0x2c5738: 0x65472074  daddiu      $a3, $t2, 0x2074
    ctx->pc = 0x2c5738u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8308);
label_2c573c:
    // 0x2c573c: 0x6172656e  daddi       $s2, $t3, 0x656E
    ctx->pc = 0x2c573cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c5740:
    // 0x2c5740: 0x2020206c  addi        $zero, $at, 0x206C
    ctx->pc = 0x2c5740u;
    // NOP (addi to $zero)
label_2c5744:
    // 0x2c5744: 0x6e61685a  ldr         $at, 0x685A($s3)
    ctx->pc = 0x2c5744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c5748:
    // 0x2c5748: 0x694c2067  ldl         $t4, 0x2067($t2)
    ctx->pc = 0x2c5748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_2c574c:
    // 0x2c574c: 0x6f61  .word       0x00006F61                   # addu        $t5, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c574cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2c5750:
    // 0x2c5750: 0x53207557  beql        $t9, $zero, . + 4 + (0x7557 << 2)
label_2c5754:
    if (ctx->pc == 0x2C5754u) {
        ctx->pc = 0x2C5754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5750u;
        // 0x2c5754: 0x74617274  .word       0x74617274                   # INVALID     $v1, $at, 0x7274 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C5754 raw=0x74617274");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5758u;
        goto label_2c5758;
    }
    ctx->pc = 0x2C5750u;
    {
        const bool branch_taken_0x2c5750 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5750) {
            ctx->pc = 0x2C5754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5750u;
            // 0x2c5754: 0x74617274  .word       0x74617274                   # INVALID     $v1, $at, 0x7274 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//             throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C5754 raw=0x74617274");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2CB0u;
            return;
        }
    }
    ctx->pc = 0x2C5758u;
label_2c5758:
    // 0x2c5758: 0x73696765  .word       0x73696765                   # INVALID     $k1, $t1, 0x6765 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c5758u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2C5758 raw=0x73696765");
 /* MITIGATED */
label_2c575c:
    // 0x2c575c: 0x20202074  addi        $zero, $at, 0x2074
    ctx->pc = 0x2c575cu;
    // NOP (addi to $zero)
label_2c5760:
    // 0x2c5760: 0x6775685a  daddiu      $s5, $k1, 0x685A
    ctx->pc = 0x2c5760u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26714);
label_2c5764:
    // 0x2c5764: 0x694c2065  ldl         $t4, 0x2065($t2)
    ctx->pc = 0x2c5764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_2c5768:
    // 0x2c5768: 0x676e61  .word       0x00676E61                   # addu        $t5, $v1, $a3 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5768u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2c576c:
    // 0x2c576c: 0x0  nop
    ctx->pc = 0x2c576cu;
    // NOP
label_2c5770:
    // 0x2c5770: 0x12fed0  .word       0x0012FED0                   # mfhi        $ra # 001206C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5770u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_2c5774:
    // 0x2c5774: 0x12ff0c  .word       0x0012FF0C                   # syscall     1020 # 00120000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5774u;
    ctx->pc = 0x2C5778u;
runtime->handleSyscall(rdram, ctx, 0x4BFCu);
label_2c5778:
    // 0x2c5778: 0x12ff1c  .word       0x0012FF1C                   # dmult       $zero, $s2 # 0000FF00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5778u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C5778 raw=0x0012FF1C");
 /* MITIGATED */
label_2c577c:
    // 0x2c577c: 0x12ff2c  .word       0x0012FF2C                   # dadd        $ra, $zero, $s2 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c577cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_2c5780:
    // 0x2c5780: 0x12ff3c  dsll32      $ra, $s2, 28
    ctx->pc = 0x2c5780u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 18) << (32 + 28));
label_2c5784:
    // 0x2c5784: 0x12ff4c  .word       0x0012FF4C                   # syscall     1021 # 00120000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5784u;
    ctx->pc = 0x2C5788u;
runtime->handleSyscall(rdram, ctx, 0x4BFDu);
label_2c5788:
    // 0x2c5788: 0x12ff5c  .word       0x0012FF5C                   # dmult       $zero, $s2 # 0000FF40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5788u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C5788 raw=0x0012FF5C");
 /* MITIGATED */
label_2c578c:
    // 0x2c578c: 0x12ff6c  .word       0x0012FF6C                   # dadd        $ra, $zero, $s2 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c578cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_2c5790:
    // 0x2c5790: 0x12ff7c  dsll32      $ra, $s2, 29
    ctx->pc = 0x2c5790u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 18) << (32 + 29));
label_2c5794:
    // 0x2c5794: 0x12ffcc  .word       0x0012FFCC                   # syscall     1023 # 00120000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5794u;
    ctx->pc = 0x2C5798u;
runtime->handleSyscall(rdram, ctx, 0x4BFFu);
label_2c5798:
    // 0x2c5798: 0x12ffe8  .word       0x0012FFE8                   # mfsa        $ra # 001207C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c5798u;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2c579c:
    // 0x2c579c: 0x0  nop
    ctx->pc = 0x2c579cu;
    // NOP
label_2c57a0:
    // 0x2c57a0: 0x137188  .word       0x00137188                   # jr          $zero # 00137180 <InstrIdType: CPU_SPECIAL>
label_2c57a4:
    if (ctx->pc == 0x2C57A4u) {
        ctx->pc = 0x2C57A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C57A0u;
        // 0x2c57a4: 0x136aec  .word       0x00136AEC                   # dadd        $t5, $zero, $s3 # 000002C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 19); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C57A8u;
        goto label_2c57a8;
    }
    ctx->pc = 0x2C57A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C57A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C57A0u;
        // 0x2c57a4: 0x136aec  .word       0x00136AEC                   # dadd        $t5, $zero, $s3 # 000002C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 19); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C57A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C57A8u;
label_2c57a8:
    // 0x2c57a8: 0x136b00  sll         $t5, $s3, 12
    ctx->pc = 0x2c57a8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 19), 12));
label_2c57ac:
    // 0x2c57ac: 0x136b10  .word       0x00136B10                   # mfhi        $t5 # 00130300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c57acu;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2c57b0:
    // 0x2c57b0: 0x136b20  .word       0x00136B20                   # add         $t5, $zero, $s3 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c57b0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2c57b4:
    // 0x2c57b4: 0x136b84  .word       0x00136B84                   # sllv        $t5, $s3, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c57b4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 0) & 0x1F));
label_2c57b8:
    // 0x2c57b8: 0x136b98  .word       0x00136B98                   # mult        $t5, $zero, $s3 # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c57b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_2c57bc:
    // 0x2c57bc: 0x136bb0  tge         $zero, $s3, 430
    ctx->pc = 0x2c57bcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_2c57c0:
    // 0x2c57c0: 0x136bcc  .word       0x00136BCC                   # syscall     431 # 00130000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c57c0u;
    ctx->pc = 0x2C57C4u;
runtime->handleSyscall(rdram, ctx, 0x4DAFu);
label_2c57c4:
    // 0x2c57c4: 0x136bec  .word       0x00136BEC                   # dadd        $t5, $zero, $s3 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c57c4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 19); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_2c57c8:
    // 0x2c57c8: 0x136c6c  .word       0x00136C6C                   # dadd        $t5, $zero, $s3 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c57c8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 19); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_2c57cc:
    // 0x2c57cc: 0x136d30  tge         $zero, $s3, 436
    ctx->pc = 0x2c57ccu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_2c57d0:
    // 0x2c57d0: 0x136d40  sll         $t5, $s3, 21
    ctx->pc = 0x2c57d0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 19), 21));
label_2c57d4:
    // 0x2c57d4: 0x136d50  .word       0x00136D50                   # mfhi        $t5 # 00130540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c57d4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2c57d8:
    // 0x2c57d8: 0x136d60  .word       0x00136D60                   # add         $t5, $zero, $s3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c57d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2c57dc:
    // 0x2c57dc: 0x136d70  tge         $zero, $s3, 437
    ctx->pc = 0x2c57dcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_2c57e0:
    // 0x2c57e0: 0x136d8c  .word       0x00136D8C                   # syscall     438 # 00130000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c57e0u;
    ctx->pc = 0x2C57E4u;
runtime->handleSyscall(rdram, ctx, 0x4DB6u);
label_2c57e4:
    // 0x2c57e4: 0x136da0  .word       0x00136DA0                   # add         $t5, $zero, $s3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c57e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2c57e8:
    // 0x2c57e8: 0x136db0  tge         $zero, $s3, 438
    ctx->pc = 0x2c57e8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_2c57ec:
    // 0x2c57ec: 0x136dc0  sll         $t5, $s3, 23
    ctx->pc = 0x2c57ecu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 19), 23));
label_2c57f0:
    // 0x2c57f0: 0x136dd0  .word       0x00136DD0                   # mfhi        $t5 # 001305C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c57f0u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2c57f4:
    // 0x2c57f4: 0x136de0  .word       0x00136DE0                   # add         $t5, $zero, $s3 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c57f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2c57f8:
    // 0x2c57f8: 0x136df0  tge         $zero, $s3, 439
    ctx->pc = 0x2c57f8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_2c57fc:
    // 0x2c57fc: 0x136e00  sll         $t5, $s3, 24
    ctx->pc = 0x2c57fcu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 19), 24));
label_2c5800:
    // 0x2c5800: 0x136e10  .word       0x00136E10                   # mfhi        $t5 # 00130600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5800u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2c5804:
    // 0x2c5804: 0x136e20  .word       0x00136E20                   # add         $t5, $zero, $s3 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5804u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2c5808:
    // 0x2c5808: 0x136e30  tge         $zero, $s3, 440
    ctx->pc = 0x2c5808u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_2c580c:
    // 0x2c580c: 0x136e40  sll         $t5, $s3, 25
    ctx->pc = 0x2c580cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 19), 25));
label_2c5810:
    // 0x2c5810: 0x136e50  .word       0x00136E50                   # mfhi        $t5 # 00130640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5810u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2c5814:
    // 0x2c5814: 0x136e60  .word       0x00136E60                   # add         $t5, $zero, $s3 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5814u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2c5818:
    // 0x2c5818: 0x136e70  tge         $zero, $s3, 441
    ctx->pc = 0x2c5818u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_2c581c:
    // 0x2c581c: 0x136e80  sll         $t5, $s3, 26
    ctx->pc = 0x2c581cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 19), 26));
label_2c5820:
    // 0x2c5820: 0x136e90  .word       0x00136E90                   # mfhi        $t5 # 00130680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5820u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2c5824:
    // 0x2c5824: 0x136ea0  .word       0x00136EA0                   # add         $t5, $zero, $s3 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5824u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2c5828:
    // 0x2c5828: 0x136eb0  tge         $zero, $s3, 442
    ctx->pc = 0x2c5828u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_2c582c:
    // 0x2c582c: 0x136ec0  sll         $t5, $s3, 27
    ctx->pc = 0x2c582cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 19), 27));
label_2c5830:
    // 0x2c5830: 0x136ed0  .word       0x00136ED0                   # mfhi        $t5 # 001306C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5830u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2c5834:
    // 0x2c5834: 0x136ee8  .word       0x00136EE8                   # mfsa        $t5 # 001306C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c5834u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_2c5838:
    // 0x2c5838: 0x136f98  .word       0x00136F98                   # mult        $t5, $zero, $s3 # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c5838u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_2c583c:
    // 0x2c583c: 0x136fa8  .word       0x00136FA8                   # mfsa        $t5 # 00130780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c583cu;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_2c5840:
    // 0x2c5840: 0x136fb8  dsll        $t5, $s3, 30
    ctx->pc = 0x2c5840u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 19) << 30);
label_2c5844:
    // 0x2c5844: 0x136fc8  .word       0x00136FC8                   # jr          $zero # 00136FC0 <InstrIdType: CPU_SPECIAL>
label_2c5848:
    if (ctx->pc == 0x2C5848u) {
        ctx->pc = 0x2C5848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5844u;
        // 0x2c5848: 0x136fd8  .word       0x00136FD8                   # mult        $t5, $zero, $s3 # 000007C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C584Cu;
        goto label_2c584c;
    }
    ctx->pc = 0x2C5844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C5848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5844u;
        // 0x2c5848: 0x136fd8  .word       0x00136FD8                   # mult        $t5, $zero, $s3 # 000007C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5844u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C584Cu;
label_2c584c:
    // 0x2c584c: 0x136fe8  .word       0x00136FE8                   # mfsa        $t5 # 001307C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c584cu;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_2c5850:
    // 0x2c5850: 0x136ff8  dsll        $t5, $s3, 31
    ctx->pc = 0x2c5850u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 19) << 31);
label_2c5854:
    // 0x2c5854: 0x137008  .word       0x00137008                   # jr          $zero # 00137000 <InstrIdType: CPU_SPECIAL>
label_2c5858:
    if (ctx->pc == 0x2C5858u) {
        ctx->pc = 0x2C5858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5854u;
        // 0x2c5858: 0x137018  mult        $t6, $zero, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C585Cu;
        goto label_2c585c;
    }
    ctx->pc = 0x2C5854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C5858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5854u;
        // 0x2c5858: 0x137018  mult        $t6, $zero, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5854u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C585Cu;
label_2c585c:
    // 0x2c585c: 0x137028  .word       0x00137028                   # mfsa        $t6 # 00130000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c585cu;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_2c5860:
    // 0x2c5860: 0x137038  dsll        $t6, $s3, 0
    ctx->pc = 0x2c5860u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) << 0);
label_2c5864:
    // 0x2c5864: 0x137048  .word       0x00137048                   # jr          $zero # 00137040 <InstrIdType: CPU_SPECIAL>
label_2c5868:
    if (ctx->pc == 0x2C5868u) {
        ctx->pc = 0x2C5868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5864u;
        // 0x2c5868: 0x137058  .word       0x00137058                   # mult        $t6, $zero, $s3 # 00000040 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C586Cu;
        goto label_2c586c;
    }
    ctx->pc = 0x2C5864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C5868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5864u;
        // 0x2c5868: 0x137058  .word       0x00137058                   # mult        $t6, $zero, $s3 # 00000040 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5864u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C586Cu;
label_2c586c:
    // 0x2c586c: 0x137068  .word       0x00137068                   # mfsa        $t6 # 00130040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c586cu;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_2c5870:
    // 0x2c5870: 0x137078  dsll        $t6, $s3, 1
    ctx->pc = 0x2c5870u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) << 1);
label_2c5874:
    // 0x2c5874: 0x137088  .word       0x00137088                   # jr          $zero # 00137080 <InstrIdType: CPU_SPECIAL>
label_2c5878:
    if (ctx->pc == 0x2C5878u) {
        ctx->pc = 0x2C5878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5874u;
        // 0x2c5878: 0x137098  .word       0x00137098                   # mult        $t6, $zero, $s3 # 00000080 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C587Cu;
        goto label_2c587c;
    }
    ctx->pc = 0x2C5874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C5878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5874u;
        // 0x2c5878: 0x137098  .word       0x00137098                   # mult        $t6, $zero, $s3 # 00000080 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5874u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C587Cu;
label_2c587c:
    // 0x2c587c: 0x1370a8  .word       0x001370A8                   # mfsa        $t6 # 00130080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c587cu;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_2c5880:
    // 0x2c5880: 0x1370b8  dsll        $t6, $s3, 2
    ctx->pc = 0x2c5880u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) << 2);
label_2c5884:
    // 0x2c5884: 0x1370c8  .word       0x001370C8                   # jr          $zero # 001370C0 <InstrIdType: CPU_SPECIAL>
label_2c5888:
    if (ctx->pc == 0x2C5888u) {
        ctx->pc = 0x2C5888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5884u;
        // 0x2c5888: 0x1370d8  .word       0x001370D8                   # mult        $t6, $zero, $s3 # 000000C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C588Cu;
        goto label_2c588c;
    }
    ctx->pc = 0x2C5884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C5888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5884u;
        // 0x2c5888: 0x1370d8  .word       0x001370D8                   # mult        $t6, $zero, $s3 # 000000C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5884u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C588Cu;
label_2c588c:
    // 0x2c588c: 0x1370e8  .word       0x001370E8                   # mfsa        $t6 # 001300C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c588cu;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_2c5890:
    // 0x2c5890: 0x1370f8  dsll        $t6, $s3, 3
    ctx->pc = 0x2c5890u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) << 3);
label_2c5894:
    // 0x2c5894: 0x137108  .word       0x00137108                   # jr          $zero # 00137100 <InstrIdType: CPU_SPECIAL>
label_2c5898:
    if (ctx->pc == 0x2C5898u) {
        ctx->pc = 0x2C5898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5894u;
        // 0x2c5898: 0x137118  .word       0x00137118                   # mult        $t6, $zero, $s3 # 00000100 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C589Cu;
        goto label_2c589c;
    }
    ctx->pc = 0x2C5894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C5898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5894u;
        // 0x2c5898: 0x137118  .word       0x00137118                   # mult        $t6, $zero, $s3 # 00000100 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5894u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C589Cu;
label_2c589c:
    // 0x2c589c: 0x137128  .word       0x00137128                   # mfsa        $t6 # 00130100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c589cu;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_2c58a0:
    // 0x2c58a0: 0x137138  dsll        $t6, $s3, 4
    ctx->pc = 0x2c58a0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) << 4);
label_2c58a4:
    // 0x2c58a4: 0x137148  .word       0x00137148                   # jr          $zero # 00137140 <InstrIdType: CPU_SPECIAL>
label_2c58a8:
    if (ctx->pc == 0x2C58A8u) {
        ctx->pc = 0x2C58A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C58A4u;
        // 0x2c58a8: 0x1371ac  .word       0x001371AC                   # dadd        $t6, $zero, $s3 # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 19); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C58ACu;
        goto label_2c58ac;
    }
    ctx->pc = 0x2C58A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C58A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C58A4u;
        // 0x2c58a8: 0x1371ac  .word       0x001371AC                   # dadd        $t6, $zero, $s3 # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 19); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C58A4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C58ACu;
label_2c58ac:
    // 0x2c58ac: 0x137158  .word       0x00137158                   # mult        $t6, $zero, $s3 # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c58acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2c58b0:
    // 0x2c58b0: 0x137168  .word       0x00137168                   # mfsa        $t6 # 00130140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c58b0u;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_2c58b4:
    // 0x2c58b4: 0x136c80  sll         $t5, $s3, 18
    ctx->pc = 0x2c58b4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 19), 18));
label_2c58b8:
    // 0x2c58b8: 0x136c90  .word       0x00136C90                   # mfhi        $t5 # 00130480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c58b8u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2c58bc:
    // 0x2c58bc: 0x136ca0  .word       0x00136CA0                   # add         $t5, $zero, $s3 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c58bcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2c58c0:
    // 0x2c58c0: 0x136cb0  tge         $zero, $s3, 434
    ctx->pc = 0x2c58c0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_2c58c4:
    // 0x2c58c4: 0x136cc0  sll         $t5, $s3, 19
    ctx->pc = 0x2c58c4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 19), 19));
label_2c58c8:
    // 0x2c58c8: 0x136cd0  .word       0x00136CD0                   # mfhi        $t5 # 001304C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c58c8u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2c58cc:
    // 0x2c58cc: 0x136ce0  .word       0x00136CE0                   # add         $t5, $zero, $s3 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c58ccu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2c58d0:
    // 0x2c58d0: 0x136cf0  tge         $zero, $s3, 435
    ctx->pc = 0x2c58d0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_2c58d4:
    // 0x2c58d4: 0x136d00  sll         $t5, $s3, 20
    ctx->pc = 0x2c58d4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 19), 20));
label_2c58d8:
    // 0x2c58d8: 0x136d10  .word       0x00136D10                   # mfhi        $t5 # 00130500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c58d8u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2c58dc:
    // 0x2c58dc: 0x136d20  .word       0x00136D20                   # add         $t5, $zero, $s3 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c58dcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2c58e0:
    // 0x2c58e0: 0x137178  dsll        $t6, $s3, 5
    ctx->pc = 0x2c58e0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) << 5);
label_2c58e4:
    // 0x2c58e4: 0x0  nop
    ctx->pc = 0x2c58e4u;
    // NOP
label_2c58e8:
    // 0x2c58e8: 0x0  nop
    ctx->pc = 0x2c58e8u;
    // NOP
label_2c58ec:
    // 0x2c58ec: 0x0  nop
    ctx->pc = 0x2c58ecu;
    // NOP
label_2c58f0:
    // 0x2c58f0: 0x1375cc  .word       0x001375CC                   # syscall     471 # 00130000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c58f0u;
    ctx->pc = 0x2C58F4u;
runtime->handleSyscall(rdram, ctx, 0x4DD7u);
label_2c58f4:
    // 0x2c58f4: 0x1375d8  .word       0x001375D8                   # mult        $t6, $zero, $s3 # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c58f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2c58f8:
    // 0x2c58f8: 0x1375e0  .word       0x001375E0                   # add         $t6, $zero, $s3 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c58f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2c58fc:
    // 0x2c58fc: 0x1375e8  .word       0x001375E8                   # mfsa        $t6 # 001305C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c58fcu;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_2c5900:
    // 0x2c5900: 0x1375f0  tge         $zero, $s3, 471
    ctx->pc = 0x2c5900u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_2c5904:
    // 0x2c5904: 0x1375f8  dsll        $t6, $s3, 23
    ctx->pc = 0x2c5904u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) << 23);
label_2c5908:
    // 0x2c5908: 0x137600  sll         $t6, $s3, 24
    ctx->pc = 0x2c5908u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 19), 24));
label_2c590c:
    // 0x2c590c: 0x137690  .word       0x00137690                   # mfhi        $t6 # 00130680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c590cu;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2c5910:
    // 0x2c5910: 0x148948  .word       0x00148948                   # jr          $zero # 00148940 <InstrIdType: CPU_SPECIAL>
label_2c5914:
    if (ctx->pc == 0x2C5914u) {
        ctx->pc = 0x2C5914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5910u;
        // 0x2c5914: 0x1489f0  tge         $zero, $s4, 551 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5918u;
        goto label_2c5918;
    }
    ctx->pc = 0x2C5910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C5914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5910u;
        // 0x2c5914: 0x1489f0  tge         $zero, $s4, 551 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5910u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C5918u;
label_2c5918:
    // 0x2c5918: 0x148a84  .word       0x00148A84                   # sllv        $s1, $s4, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5918u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 0) & 0x1F));
label_2c591c:
    // 0x2c591c: 0x148b18  .word       0x00148B18                   # mult        $s1, $zero, $s4 # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c591cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_2c5920:
    // 0x2c5920: 0x148b18  .word       0x00148B18                   # mult        $s1, $zero, $s4 # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c5920u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_2c5924:
    // 0x2c5924: 0x148a24  .word       0x00148A24                   # and         $s1, $zero, $s4 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5924u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) & GPR_U64(ctx, 20));
label_2c5928:
    // 0x2c5928: 0x0  nop
    ctx->pc = 0x2c5928u;
    // NOP
label_2c592c:
    // 0x2c592c: 0x0  nop
    ctx->pc = 0x2c592cu;
    // NOP
label_2c5930:
    // 0x2c5930: 0x148e7c  dsll32      $s1, $s4, 25
    ctx->pc = 0x2c5930u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 20) << (32 + 25));
label_2c5934:
    // 0x2c5934: 0x148d1c  .word       0x00148D1C                   # dmult       $zero, $s4 # 00008D00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5934u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C5934 raw=0x00148D1C");
 /* MITIGATED */
label_2c5938:
    // 0x2c5938: 0x148ddc  .word       0x00148DDC                   # dmult       $zero, $s4 # 00008DC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5938u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C5938 raw=0x00148DDC");
 /* MITIGATED */
label_2c593c:
    // 0x2c593c: 0x148e30  tge         $zero, $s4, 568
    ctx->pc = 0x2c593cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_2c5940:
    // 0x2c5940: 0x148e7c  dsll32      $s1, $s4, 25
    ctx->pc = 0x2c5940u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 20) << (32 + 25));
label_2c5944:
    // 0x2c5944: 0x148e7c  dsll32      $s1, $s4, 25
    ctx->pc = 0x2c5944u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 20) << (32 + 25));
label_2c5948:
    // 0x2c5948: 0x148d1c  .word       0x00148D1C                   # dmult       $zero, $s4 # 00008D00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5948u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C5948 raw=0x00148D1C");
 /* MITIGATED */
label_2c594c:
    // 0x2c594c: 0x148ddc  .word       0x00148DDC                   # dmult       $zero, $s4 # 00008DC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c594cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C594C raw=0x00148DDC");
 /* MITIGATED */
label_2c5950:
    // 0x2c5950: 0x148ddc  .word       0x00148DDC                   # dmult       $zero, $s4 # 00008DC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5950u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C5950 raw=0x00148DDC");
 /* MITIGATED */
label_2c5954:
    // 0x2c5954: 0x0  nop
    ctx->pc = 0x2c5954u;
    // NOP
label_2c5958:
    // 0x2c5958: 0x0  nop
    ctx->pc = 0x2c5958u;
    // NOP
label_2c595c:
    // 0x2c595c: 0x0  nop
    ctx->pc = 0x2c595cu;
    // NOP
label_2c5960:
    // 0x2c5960: 0x14f9a4  .word       0x0014F9A4                   # and         $ra, $zero, $s4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5960u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) & GPR_U64(ctx, 20));
label_2c5964:
    // 0x2c5964: 0x14f9a4  .word       0x0014F9A4                   # and         $ra, $zero, $s4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5964u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) & GPR_U64(ctx, 20));
label_2c5968:
    // 0x2c5968: 0x14f9a4  .word       0x0014F9A4                   # and         $ra, $zero, $s4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5968u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) & GPR_U64(ctx, 20));
label_2c596c:
    // 0x2c596c: 0x14ff6c  .word       0x0014FF6C                   # dadd        $ra, $zero, $s4 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c596cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 20); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_2c5970:
    // 0x2c5970: 0x14ff6c  .word       0x0014FF6C                   # dadd        $ra, $zero, $s4 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5970u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 20); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_2c5974:
    // 0x2c5974: 0x14ff6c  .word       0x0014FF6C                   # dadd        $ra, $zero, $s4 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5974u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 20); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_2c5978:
    // 0x2c5978: 0x14ff6c  .word       0x0014FF6C                   # dadd        $ra, $zero, $s4 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5978u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 20); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_2c597c:
    // 0x2c597c: 0x14ff6c  .word       0x0014FF6C                   # dadd        $ra, $zero, $s4 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c597cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 20); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_2c5980:
    // 0x2c5980: 0x150220  .word       0x00150220                   # add         $zero, $zero, $s5 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5980u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2c5984:
    // 0x2c5984: 0x150220  .word       0x00150220                   # add         $zero, $zero, $s5 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5984u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2c5988:
    // 0x2c5988: 0x14fce0  .word       0x0014FCE0                   # add         $ra, $zero, $s4 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5988u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_2c598c:
    // 0x2c598c: 0x14fce0  .word       0x0014FCE0                   # add         $ra, $zero, $s4 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c598cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_2c5990:
    // 0x2c5990: 0x14fce0  .word       0x0014FCE0                   # add         $ra, $zero, $s4 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5990u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_2c5994:
    // 0x2c5994: 0x14fce0  .word       0x0014FCE0                   # add         $ra, $zero, $s4 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5994u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_2c5998:
    // 0x2c5998: 0x150108  .word       0x00150108                   # jr          $zero # 00150100 <InstrIdType: CPU_SPECIAL>
label_2c599c:
    if (ctx->pc == 0x2C599Cu) {
        ctx->pc = 0x2C599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5998u;
        // 0x2c599c: 0x14fbe0  .word       0x0014FBE0                   # add         $ra, $zero, $s4 # 000003C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C59A0u;
        goto label_2c59a0;
    }
    ctx->pc = 0x2C5998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5998u;
        // 0x2c599c: 0x14fbe0  .word       0x0014FBE0                   # add         $ra, $zero, $s4 # 000003C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5998u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C59A0u;
label_2c59a0:
    // 0x2c59a0: 0x14fbe0  .word       0x0014FBE0                   # add         $ra, $zero, $s4 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c59a0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_2c59a4:
    // 0x2c59a4: 0x14fbe0  .word       0x0014FBE0                   # add         $ra, $zero, $s4 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c59a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_2c59a8:
    // 0x2c59a8: 0x150220  .word       0x00150220                   # add         $zero, $zero, $s5 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c59a8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2c59ac:
    // 0x2c59ac: 0x150220  .word       0x00150220                   # add         $zero, $zero, $s5 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c59acu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2c59b0:
    // 0x2c59b0: 0x150220  .word       0x00150220                   # add         $zero, $zero, $s5 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c59b0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2c59b4:
    // 0x2c59b4: 0x1501c4  .word       0x001501C4                   # sllv        $zero, $s5, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c59b4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 0) & 0x1F));
label_2c59b8:
    // 0x2c59b8: 0x14fef4  teq         $zero, $s4, 1019
    ctx->pc = 0x2c59b8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_2c59bc:
    // 0x2c59bc: 0x0  nop
    ctx->pc = 0x2c59bcu;
    // NOP
label_2c59c0:
    // 0x2c59c0: 0x80303030  lb          $s0, 0x3030($at)
    ctx->pc = 0x2c59c0u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 12336)));
label_2c59c4:
    // 0x2c59c4: 0x80202020  lb          $zero, 0x2020($at)
    ctx->pc = 0x2c59c4u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 8224)));
label_2c59c8:
    // 0x2c59c8: 0x80202020  lb          $zero, 0x2020($at)
    ctx->pc = 0x2c59c8u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 8224)));
label_2c59cc:
    // 0x2c59cc: 0x60206060  daddi       $zero, $at, 0x6060
    ctx->pc = 0x2c59ccu;
    { int64_t src = (int64_t)GPR_S64(ctx, 1); int64_t imm = (int64_t)(int32_t)24672; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2c59d0:
    // 0x2c59d0: 0x60206020  daddi       $zero, $at, 0x6020
    ctx->pc = 0x2c59d0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 1); int64_t imm = (int64_t)(int32_t)24608; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2c59d4:
    // 0x2c59d4: 0x60606060  daddi       $zero, $v1, 0x6060
    ctx->pc = 0x2c59d4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 3); int64_t imm = (int64_t)(int32_t)24672; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2c59d8:
    // 0x2c59d8: 0x48604080  .word       0x48604080                   # INVALID     $v1, $zero, 0x4080 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c59d8u;
//     throw std::runtime_error("Unhandled COP2 format: 0x3 at 0x2C59D8 raw=0x48604080");
 /* MITIGATED */
label_2c59dc:
    // 0x2c59dc: 0x4848  .word       0x00004848                   # jr          $zero # 00004840 <InstrIdType: CPU_SPECIAL>
label_2c59e0:
    if (ctx->pc == 0x2C59E0u) {
        ctx->pc = 0x2C59E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C59DCu;
        // 0x2c59e0: 0x5f617375  .word       0x5F617375                   # bgtzl       $k1, . + 4 + (0x7375 << 2) # 00010000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C59E0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C59E4u;
        goto label_2c59e4;
    }
    ctx->pc = 0x2C59DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C59E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C59DCu;
        // 0x2c59e0: 0x5f617375  .word       0x5F617375                   # bgtzl       $k1, . + 4 + (0x7375 << 2) # 00010000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C59E0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C59DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C59E4u;
label_2c59e4:
    // 0x2c59e4: 0x746e6f66  .word       0x746E6F66                   # INVALID     $v1, $t6, 0x6F66 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c59e4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C59E4 raw=0x746E6F66");
 /* MITIGATED */
label_2c59e8:
    // 0x2c59e8: 0x326d742e  andi        $t5, $s3, 0x742E
    ctx->pc = 0x2c59e8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)29742);
label_2c59ec:
    // 0x2c59ec: 0x0  nop
    ctx->pc = 0x2c59ecu;
    // NOP
label_2c59f0:
    // 0x2c59f0: 0x6a6e616b  ldl         $t6, 0x616B($s3)
    ctx->pc = 0x2c59f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24939); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_2c59f4:
    // 0x2c59f4: 0x6d742e69  ldr         $s4, 0x2E69($t3)
    ctx->pc = 0x2c59f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 11881); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_2c59f8:
    // 0x2c59f8: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x2c59f8u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c59fc:
    // 0x2c59fc: 0x0  nop
    ctx->pc = 0x2c59fcu;
    // NOP
label_2c5a00:
    // 0x2c5a00: 0x1574f0  tge         $zero, $s5, 467
    ctx->pc = 0x2c5a00u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_2c5a04:
    // 0x2c5a04: 0x157544  .word       0x00157544                   # sllv        $t6, $s5, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5a04u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 0) & 0x1F));
label_2c5a08:
    // 0x2c5a08: 0x157574  teq         $zero, $s5, 469
    ctx->pc = 0x2c5a08u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_2c5a0c:
    // 0x2c5a0c: 0x157594  .word       0x00157594                   # dsllv       $t6, $s5, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5a0cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 21) << (GPR_U32(ctx, 0) & 0x3F));
label_2c5a10:
    // 0x2c5a10: 0x157658  .word       0x00157658                   # mult        $t6, $zero, $s5 # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c5a10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2c5a14:
    // 0x2c5a14: 0x1575c0  sll         $t6, $s5, 23
    ctx->pc = 0x2c5a14u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 21), 23));
label_2c5a18:
    // 0x2c5a18: 0x1575c0  sll         $t6, $s5, 23
    ctx->pc = 0x2c5a18u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 21), 23));
label_2c5a1c:
    // 0x2c5a1c: 0x157658  .word       0x00157658                   # mult        $t6, $zero, $s5 # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c5a1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2c5a20:
    // 0x2c5a20: 0x1575e4  .word       0x001575E4                   # and         $t6, $zero, $s5 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5a20u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) & GPR_U64(ctx, 21));
label_2c5a24:
    // 0x2c5a24: 0x1575f8  dsll        $t6, $s5, 23
    ctx->pc = 0x2c5a24u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 21) << 23);
label_2c5a28:
    // 0x2c5a28: 0x157658  .word       0x00157658                   # mult        $t6, $zero, $s5 # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c5a28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2c5a2c:
    // 0x2c5a2c: 0x157618  .word       0x00157618                   # mult        $t6, $zero, $s5 # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c5a2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2c5a30:
    // 0x2c5a30: 0x157630  tge         $zero, $s5, 472
    ctx->pc = 0x2c5a30u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_2c5a34:
    // 0x2c5a34: 0x1575c0  sll         $t6, $s5, 23
    ctx->pc = 0x2c5a34u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 21), 23));
label_2c5a38:
    // 0x2c5a38: 0x1575c0  sll         $t6, $s5, 23
    ctx->pc = 0x2c5a38u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 21), 23));
label_2c5a3c:
    // 0x2c5a3c: 0x1575e4  .word       0x001575E4                   # and         $t6, $zero, $s5 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5a3cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) & GPR_U64(ctx, 21));
label_2c5a40:
    // 0x2c5a40: 0x1575e4  .word       0x001575E4                   # and         $t6, $zero, $s5 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5a40u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) & GPR_U64(ctx, 21));
label_2c5a44:
    // 0x2c5a44: 0x1575e4  .word       0x001575E4                   # and         $t6, $zero, $s5 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5a44u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) & GPR_U64(ctx, 21));
label_2c5a48:
    // 0x2c5a48: 0x1575e4  .word       0x001575E4                   # and         $t6, $zero, $s5 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5a48u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) & GPR_U64(ctx, 21));
label_2c5a4c:
    // 0x2c5a4c: 0x157608  .word       0x00157608                   # jr          $zero # 00157600 <InstrIdType: CPU_SPECIAL>
label_2c5a50:
    if (ctx->pc == 0x2C5A50u) {
        ctx->pc = 0x2C5A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5A4Cu;
        // 0x2c5a50: 0x157608  .word       0x00157608                   # jr          $zero # 00157600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5A54u;
        goto label_2c5a54;
    }
    ctx->pc = 0x2C5A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2C5A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5A4Cu;
        // 0x2c5a50: 0x157608  .word       0x00157608                   # jr          $zero # 00157600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5A4Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C5A54u;
label_2c5a54:
    // 0x2c5a54: 0x157648  .word       0x00157648                   # jr          $zero # 00157640 <InstrIdType: CPU_SPECIAL>
label_2c5a58:
    if (ctx->pc == 0x2C5A58u) {
        ctx->pc = 0x2C5A5Cu;
        goto label_2c5a5c;
    }
    ctx->pc = 0x2C5A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5A54u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C5A5Cu;
label_2c5a5c:
    // 0x2c5a5c: 0x0  nop
    ctx->pc = 0x2c5a5cu;
    // NOP
label_2c5a60:
    // 0x2c5a60: 0x20656854  addi        $a1, $v1, 0x6854
    ctx->pc = 0x2c5a60u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2c5a64:
    // 0x2c5a64: 0x6c6c6559  ldr         $t4, 0x6559($v1)
    ctx->pc = 0x2c5a64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25945); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2c5a68:
    // 0x2c5a68: 0x5420776f  bnel        $at, $zero, . + 4 + (0x776F << 2)
label_2c5a6c:
    if (ctx->pc == 0x2C5A6Cu) {
        ctx->pc = 0x2C5A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5A68u;
        // 0x2c5a6c: 0x61627275  daddi       $v0, $t3, 0x7275 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29301; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5A70u;
        goto label_2c5a70;
    }
    ctx->pc = 0x2C5A68u;
    {
        const bool branch_taken_0x2c5a68 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5a68) {
            ctx->pc = 0x2C5A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5A68u;
            // 0x2c5a6c: 0x61627275  daddi       $v0, $t3, 0x7275 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29301; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3828u;
            return;
        }
    }
    ctx->pc = 0x2C5A70u;
label_2c5a70:
    // 0x2c5a70: 0x6552206e  daddiu      $s2, $t2, 0x206E
    ctx->pc = 0x2c5a70u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8302);
label_2c5a74:
    // 0x2c5a74: 0x6c6c6562  ldr         $t4, 0x6562($v1)
    ctx->pc = 0x2c5a74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25954); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2c5a78:
    // 0x2c5a78: 0x6e6f69  .word       0x006E6F69                   # mtsa        $v1 # 000E6F40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c5a78u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_2c5a7c:
    // 0x2c5a7c: 0x0  nop
    ctx->pc = 0x2c5a7cu;
    // NOP
label_2c5a80:
    // 0x2c5a80: 0x20656854  addi        $a1, $v1, 0x6854
    ctx->pc = 0x2c5a80u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2c5a84:
    // 0x2c5a84: 0x74746142  .word       0x74746142                   # INVALID     $v1, $s4, 0x6142 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5a84u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C5A84 raw=0x74746142");
 /* MITIGATED */
label_2c5a88:
    // 0x2c5a88: 0x6120656c  daddi       $zero, $t1, 0x656C
    ctx->pc = 0x2c5a88u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)25964; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2c5a8c:
    // 0x2c5a8c: 0x75482074  .word       0x75482074                   # INVALID     $t2, $t0, 0x2074 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5a8cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C5A8C raw=0x75482074");
 /* MITIGATED */
label_2c5a90:
    // 0x2c5a90: 0x6f614c20  ldr         $at, 0x4C20($k1)
    ctx->pc = 0x2c5a90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 19488); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c5a94:
    // 0x2c5a94: 0x74614720  .word       0x74614720                   # INVALID     $v1, $at, 0x4720 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5a94u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C5A94 raw=0x74614720");
 /* MITIGATED */
label_2c5a98:
    // 0x2c5a98: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5a98u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c5a9c:
    // 0x2c5a9c: 0x0  nop
    ctx->pc = 0x2c5a9cu;
    // NOP
label_2c5aa0:
    // 0x2c5aa0: 0x70727553  .word       0x70727553                   # mtlo1       $v1 # 00127540 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c5aa0u;
    ctx->lo1 = GPR_U64(ctx, 3);
label_2c5aa4:
    // 0x2c5aa4: 0x65736972  daddiu      $s3, $t3, 0x6972
    ctx->pc = 0x2c5aa4u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26994);
label_2c5aa8:
    // 0x2c5aa8: 0x74744120  .word       0x74744120                   # INVALID     $v1, $s4, 0x4120 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5aa8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C5AA8 raw=0x74744120");
 /* MITIGATED */
label_2c5aac:
    // 0x2c5aac: 0x206b6361  addi        $t3, $v1, 0x6361
    ctx->pc = 0x2c5aacu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25441, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 11, (int32_t)tmp); }
label_2c5ab0:
    // 0x2c5ab0: 0x4c206e6f  .word       0x4C206E6F                   # INVALID     $at, $zero, 0x6E6F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5ab0u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C5AB0 raw=0x4C206E6F");
 /* MITIGATED */
label_2c5ab4:
    // 0x2c5ab4: 0x42207569  .word       0x42207569                   # INVALID     $s1, $zero, 0x7569 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c5ab4u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x2C5AB4 raw=0x42207569");
 /* MITIGATED */
label_2c5ab8:
    // 0x2c5ab8: 0x6f6169  .word       0x006F6169                   # mtsa        $v1 # 000F6140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c5ab8u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_2c5abc:
    // 0x2c5abc: 0x0  nop
    ctx->pc = 0x2c5abcu;
    // NOP
label_2c5ac0:
    // 0x2c5ac0: 0x20656854  addi        $a1, $v1, 0x6854
    ctx->pc = 0x2c5ac0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2c5ac4:
    // 0x2c5ac4: 0x74746142  .word       0x74746142                   # INVALID     $v1, $s4, 0x6142 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5ac4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C5AC4 raw=0x74746142");
 /* MITIGATED */
label_2c5ac8:
    // 0x2c5ac8: 0x6120656c  daddi       $zero, $t1, 0x656C
    ctx->pc = 0x2c5ac8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)25964; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2c5acc:
    // 0x2c5acc: 0x61572074  daddi       $s7, $t2, 0x2074
    ctx->pc = 0x2c5accu;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8308; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, res); }
label_2c5ad0:
    // 0x2c5ad0: 0x6143206e  daddi       $v1, $t2, 0x206E
    ctx->pc = 0x2c5ad0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8302; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_2c5ad4:
    // 0x2c5ad4: 0x656c7473  daddiu      $t4, $t3, 0x7473
    ctx->pc = 0x2c5ad4u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29811);
label_2c5ad8:
    // 0x2c5ad8: 0x0  nop
    ctx->pc = 0x2c5ad8u;
    // NOP
label_2c5adc:
    // 0x2c5adc: 0x0  nop
    ctx->pc = 0x2c5adcu;
    // NOP
label_2c5ae0:
    // 0x2c5ae0: 0x61737341  daddi       $s3, $t3, 0x7341
    ctx->pc = 0x2c5ae0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29505; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_2c5ae4:
    // 0x2c5ae4: 0x20746c75  addi        $s4, $v1, 0x6C75
    ctx->pc = 0x2c5ae4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27765, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_2c5ae8:
    // 0x2c5ae8: 0x74206e6f  .word       0x74206E6F                   # INVALID     $at, $zero, 0x6E6F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5ae8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C5AE8 raw=0x74206E6F");
 /* MITIGATED */
label_2c5aec:
    // 0x2c5aec: 0x57206568  bnel        $t9, $zero, . + 4 + (0x6568 << 2)
label_2c5af0:
    if (ctx->pc == 0x2C5AF0u) {
        ctx->pc = 0x2C5AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5AECu;
        // 0x2c5af0: 0x65542075  daddiu      $s4, $t2, 0x2075 (Delay Slot)
        SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8309);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5AF4u;
        goto label_2c5af4;
    }
    ctx->pc = 0x2C5AECu;
    {
        const bool branch_taken_0x2c5aec = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5aec) {
            ctx->pc = 0x2C5AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5AECu;
            // 0x2c5af0: 0x65542075  daddiu      $s4, $t2, 0x2075 (Delay Slot)
            SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8309);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF090u;
            return;
        }
    }
    ctx->pc = 0x2C5AF4u;
label_2c5af4:
    // 0x2c5af4: 0x74697272  .word       0x74697272                   # INVALID     $v1, $t1, 0x7272 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5af4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C5AF4 raw=0x74697272");
 /* MITIGATED */
label_2c5af8:
    // 0x2c5af8: 0x79726f  .word       0x0079726F                   # dsubu       $t6, $v1, $t9 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5af8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) - GPR_U64(ctx, 25));
label_2c5afc:
    // 0x2c5afc: 0x0  nop
    ctx->pc = 0x2c5afcu;
    // NOP
label_2c5b00:
    // 0x2c5b00: 0x20656854  addi        $a1, $v1, 0x6854
    ctx->pc = 0x2c5b00u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2c5b04:
    // 0x2c5b04: 0x74746142  .word       0x74746142                   # INVALID     $v1, $s4, 0x6142 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5b04u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C5B04 raw=0x74746142");
 /* MITIGATED */
label_2c5b08:
    // 0x2c5b08: 0x6120656c  daddi       $zero, $t1, 0x656C
    ctx->pc = 0x2c5b08u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)25964; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2c5b0c:
    // 0x2c5b0c: 0x75472074  .word       0x75472074                   # INVALID     $t2, $a3, 0x2074 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5b0cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C5B0C raw=0x75472074");
 /* MITIGATED */
label_2c5b10:
    // 0x2c5b10: 0x44206e61  .word       0x44206E61                   # dmfc1       $zero, $f13 # 00000661 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c5b10u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x21 at 0x2C5B10 raw=0x44206E61");
 /* MITIGATED */
label_2c5b14:
    // 0x2c5b14: 0x75  .word       0x00000075                   # INVALID     $zero, $zero, 0x75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5b14u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2C5B14 raw=0x00000075");
 /* MITIGATED */
label_2c5b18:
    // 0x2c5b18: 0x0  nop
    ctx->pc = 0x2c5b18u;
    // NOP
label_2c5b1c:
    // 0x2c5b1c: 0x0  nop
    ctx->pc = 0x2c5b1cu;
    // NOP
label_2c5b20:
    // 0x2c5b20: 0x6e617547  ldr         $at, 0x7547($s3)
    ctx->pc = 0x2c5b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30023); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c5b24:
    // 0x2c5b24: 0x27755920  addiu       $s5, $k1, 0x5920
    ctx->pc = 0x2c5b24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 27), 22816));
label_2c5b28:
    // 0x2c5b28: 0x73452073  .word       0x73452073                   # INVALID     $k0, $a1, 0x2073 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c5b28u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x2C5B28 raw=0x73452073");
 /* MITIGATED */
label_2c5b2c:
    // 0x2c5b2c: 0x65706163  daddiu      $s0, $t3, 0x6163
    ctx->pc = 0x2c5b2cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24931);
label_2c5b30:
    // 0x2c5b30: 0x0  nop
    ctx->pc = 0x2c5b30u;
    // NOP
label_2c5b34:
    // 0x2c5b34: 0x0  nop
    ctx->pc = 0x2c5b34u;
    // NOP
label_2c5b38:
    // 0x2c5b38: 0x0  nop
    ctx->pc = 0x2c5b38u;
    // NOP
label_2c5b3c:
    // 0x2c5b3c: 0x0  nop
    ctx->pc = 0x2c5b3cu;
    // NOP
label_2c5b40:
    // 0x2c5b40: 0x20656854  addi        $a1, $v1, 0x6854
    ctx->pc = 0x2c5b40u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2c5b44:
    // 0x2c5b44: 0x74746142  .word       0x74746142                   # INVALID     $v1, $s4, 0x6142 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5b44u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C5B44 raw=0x74746142");
 /* MITIGATED */
label_2c5b48:
    // 0x2c5b48: 0x6f20656c  ldr         $zero, 0x656C($t9)
    ctx->pc = 0x2c5b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 25964); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2c5b4c:
    // 0x2c5b4c: 0x68432066  ldl         $v1, 0x2066($v0)
    ctx->pc = 0x2c5b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8294); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2c5b50:
    // 0x2c5b50: 0x20676e61  addi        $a3, $v1, 0x6E61
    ctx->pc = 0x2c5b50u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28257, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_2c5b54:
    // 0x2c5b54: 0x6e6142  .word       0x006E6142                   # srl         $t4, $t6, 5 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5b54u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 14), 5));
label_2c5b58:
    // 0x2c5b58: 0x0  nop
    ctx->pc = 0x2c5b58u;
    // NOP
label_2c5b5c:
    // 0x2c5b5c: 0x0  nop
    ctx->pc = 0x2c5b5cu;
    // NOP
label_2c5b60:
    // 0x2c5b60: 0x20656854  addi        $a1, $v1, 0x6854
    ctx->pc = 0x2c5b60u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2c5b64:
    // 0x2c5b64: 0x74746142  .word       0x74746142                   # INVALID     $v1, $s4, 0x6142 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5b64u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C5B64 raw=0x74746142");
 /* MITIGATED */
label_2c5b68:
    // 0x2c5b68: 0x6120656c  daddi       $zero, $t1, 0x656C
    ctx->pc = 0x2c5b68u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)25964; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2c5b6c:
    // 0x2c5b6c: 0x68432074  ldl         $v1, 0x2074($v0)
    ctx->pc = 0x2c5b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8308); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2c5b70:
    // 0x2c5b70: 0x69422069  ldl         $v0, 0x2069($t2)
    ctx->pc = 0x2c5b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8297); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2c5b74:
    // 0x2c5b74: 0x0  nop
    ctx->pc = 0x2c5b74u;
    // NOP
label_2c5b78:
    // 0x2c5b78: 0x0  nop
    ctx->pc = 0x2c5b78u;
    // NOP
label_2c5b7c:
    // 0x2c5b7c: 0x0  nop
    ctx->pc = 0x2c5b7cu;
    // NOP
label_2c5b80:
    // 0x2c5b80: 0x61737341  daddi       $s3, $t3, 0x7341
    ctx->pc = 0x2c5b80u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29505; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_2c5b84:
    // 0x2c5b84: 0x20746c75  addi        $s4, $v1, 0x6C75
    ctx->pc = 0x2c5b84u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27765, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_2c5b88:
    // 0x2c5b88: 0x43206e6f  .word       0x43206E6F                   # INVALID     $t9, $zero, 0x6E6F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c5b88u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2C5B88 raw=0x43206E6F");
 /* MITIGATED */
label_2c5b8c:
    // 0x2c5b8c: 0x676e6568  daddiu      $t6, $k1, 0x6568
    ctx->pc = 0x2c5b8cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25960);
label_2c5b90:
    // 0x2c5b90: 0x754420  .word       0x00754420                   # add         $t0, $v1, $s5 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5b90u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2c5b94:
    // 0x2c5b94: 0x0  nop
    ctx->pc = 0x2c5b94u;
    // NOP
label_2c5b98:
    // 0x2c5b98: 0x0  nop
    ctx->pc = 0x2c5b98u;
    // NOP
label_2c5b9c:
    // 0x2c5b9c: 0x0  nop
    ctx->pc = 0x2c5b9cu;
    // NOP
    ctx->pc = 0x2c5ba0u;
    return;
}
