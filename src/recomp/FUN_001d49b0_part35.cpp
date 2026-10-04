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

// Function: FUN_001d49b0
// Address: 0x1d49b0 - 0x254d4c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_001d49b0_part35(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1e5350u: goto label_1e5350;
        case 0x1e5354u: goto label_1e5354;
        case 0x1e5358u: goto label_1e5358;
        case 0x1e535cu: goto label_1e535c;
        case 0x1e5360u: goto label_1e5360;
        case 0x1e5364u: goto label_1e5364;
        case 0x1e5368u: goto label_1e5368;
        case 0x1e536cu: goto label_1e536c;
        case 0x1e5370u: goto label_1e5370;
        case 0x1e5374u: goto label_1e5374;
        case 0x1e5378u: goto label_1e5378;
        case 0x1e537cu: goto label_1e537c;
        case 0x1e5380u: goto label_1e5380;
        case 0x1e5384u: goto label_1e5384;
        case 0x1e5388u: goto label_1e5388;
        case 0x1e538cu: goto label_1e538c;
        case 0x1e5390u: goto label_1e5390;
        case 0x1e5394u: goto label_1e5394;
        case 0x1e5398u: goto label_1e5398;
        case 0x1e539cu: goto label_1e539c;
        case 0x1e53a0u: goto label_1e53a0;
        case 0x1e53a4u: goto label_1e53a4;
        case 0x1e53a8u: goto label_1e53a8;
        case 0x1e53acu: goto label_1e53ac;
        case 0x1e53b0u: goto label_1e53b0;
        case 0x1e53b4u: goto label_1e53b4;
        case 0x1e53b8u: goto label_1e53b8;
        case 0x1e53bcu: goto label_1e53bc;
        case 0x1e53c0u: goto label_1e53c0;
        case 0x1e53c4u: goto label_1e53c4;
        case 0x1e53c8u: goto label_1e53c8;
        case 0x1e53ccu: goto label_1e53cc;
        case 0x1e53d0u: goto label_1e53d0;
        case 0x1e53d4u: goto label_1e53d4;
        case 0x1e53d8u: goto label_1e53d8;
        case 0x1e53dcu: goto label_1e53dc;
        case 0x1e53e0u: goto label_1e53e0;
        case 0x1e53e4u: goto label_1e53e4;
        case 0x1e53e8u: goto label_1e53e8;
        case 0x1e53ecu: goto label_1e53ec;
        case 0x1e53f0u: goto label_1e53f0;
        case 0x1e53f4u: goto label_1e53f4;
        case 0x1e53f8u: goto label_1e53f8;
        case 0x1e53fcu: goto label_1e53fc;
        case 0x1e5400u: goto label_1e5400;
        case 0x1e5404u: goto label_1e5404;
        case 0x1e5408u: goto label_1e5408;
        case 0x1e540cu: goto label_1e540c;
        case 0x1e5410u: goto label_1e5410;
        case 0x1e5414u: goto label_1e5414;
        case 0x1e5418u: goto label_1e5418;
        case 0x1e541cu: goto label_1e541c;
        case 0x1e5420u: goto label_1e5420;
        case 0x1e5424u: goto label_1e5424;
        case 0x1e5428u: goto label_1e5428;
        case 0x1e542cu: goto label_1e542c;
        case 0x1e5430u: goto label_1e5430;
        case 0x1e5434u: goto label_1e5434;
        case 0x1e5438u: goto label_1e5438;
        case 0x1e543cu: goto label_1e543c;
        case 0x1e5440u: goto label_1e5440;
        case 0x1e5444u: goto label_1e5444;
        case 0x1e5448u: goto label_1e5448;
        case 0x1e544cu: goto label_1e544c;
        case 0x1e5450u: goto label_1e5450;
        case 0x1e5454u: goto label_1e5454;
        case 0x1e5458u: goto label_1e5458;
        case 0x1e545cu: goto label_1e545c;
        case 0x1e5460u: goto label_1e5460;
        case 0x1e5464u: goto label_1e5464;
        case 0x1e5468u: goto label_1e5468;
        case 0x1e546cu: goto label_1e546c;
        case 0x1e5470u: goto label_1e5470;
        case 0x1e5474u: goto label_1e5474;
        case 0x1e5478u: goto label_1e5478;
        case 0x1e547cu: goto label_1e547c;
        case 0x1e5480u: goto label_1e5480;
        case 0x1e5484u: goto label_1e5484;
        case 0x1e5488u: goto label_1e5488;
        case 0x1e548cu: goto label_1e548c;
        case 0x1e5490u: goto label_1e5490;
        case 0x1e5494u: goto label_1e5494;
        case 0x1e5498u: goto label_1e5498;
        case 0x1e549cu: goto label_1e549c;
        case 0x1e54a0u: goto label_1e54a0;
        case 0x1e54a4u: goto label_1e54a4;
        case 0x1e54a8u: goto label_1e54a8;
        case 0x1e54acu: goto label_1e54ac;
        case 0x1e54b0u: goto label_1e54b0;
        case 0x1e54b4u: goto label_1e54b4;
        case 0x1e54b8u: goto label_1e54b8;
        case 0x1e54bcu: goto label_1e54bc;
        case 0x1e54c0u: goto label_1e54c0;
        case 0x1e54c4u: goto label_1e54c4;
        case 0x1e54c8u: goto label_1e54c8;
        case 0x1e54ccu: goto label_1e54cc;
        case 0x1e54d0u: goto label_1e54d0;
        case 0x1e54d4u: goto label_1e54d4;
        case 0x1e54d8u: goto label_1e54d8;
        case 0x1e54dcu: goto label_1e54dc;
        case 0x1e54e0u: goto label_1e54e0;
        case 0x1e54e4u: goto label_1e54e4;
        case 0x1e54e8u: goto label_1e54e8;
        case 0x1e54ecu: goto label_1e54ec;
        case 0x1e54f0u: goto label_1e54f0;
        case 0x1e54f4u: goto label_1e54f4;
        case 0x1e54f8u: goto label_1e54f8;
        case 0x1e54fcu: goto label_1e54fc;
        case 0x1e5500u: goto label_1e5500;
        case 0x1e5504u: goto label_1e5504;
        case 0x1e5508u: goto label_1e5508;
        case 0x1e550cu: goto label_1e550c;
        case 0x1e5510u: goto label_1e5510;
        case 0x1e5514u: goto label_1e5514;
        case 0x1e5518u: goto label_1e5518;
        case 0x1e551cu: goto label_1e551c;
        case 0x1e5520u: goto label_1e5520;
        case 0x1e5524u: goto label_1e5524;
        case 0x1e5528u: goto label_1e5528;
        case 0x1e552cu: goto label_1e552c;
        case 0x1e5530u: goto label_1e5530;
        case 0x1e5534u: goto label_1e5534;
        case 0x1e5538u: goto label_1e5538;
        case 0x1e553cu: goto label_1e553c;
        case 0x1e5540u: goto label_1e5540;
        case 0x1e5544u: goto label_1e5544;
        case 0x1e5548u: goto label_1e5548;
        case 0x1e554cu: goto label_1e554c;
        case 0x1e5550u: goto label_1e5550;
        case 0x1e5554u: goto label_1e5554;
        case 0x1e5558u: goto label_1e5558;
        case 0x1e555cu: goto label_1e555c;
        case 0x1e5560u: goto label_1e5560;
        case 0x1e5564u: goto label_1e5564;
        case 0x1e5568u: goto label_1e5568;
        case 0x1e556cu: goto label_1e556c;
        case 0x1e5570u: goto label_1e5570;
        case 0x1e5574u: goto label_1e5574;
        case 0x1e5578u: goto label_1e5578;
        case 0x1e557cu: goto label_1e557c;
        case 0x1e5580u: goto label_1e5580;
        case 0x1e5584u: goto label_1e5584;
        case 0x1e5588u: goto label_1e5588;
        case 0x1e558cu: goto label_1e558c;
        case 0x1e5590u: goto label_1e5590;
        case 0x1e5594u: goto label_1e5594;
        case 0x1e5598u: goto label_1e5598;
        case 0x1e559cu: goto label_1e559c;
        case 0x1e55a0u: goto label_1e55a0;
        case 0x1e55a4u: goto label_1e55a4;
        case 0x1e55a8u: goto label_1e55a8;
        case 0x1e55acu: goto label_1e55ac;
        case 0x1e55b0u: goto label_1e55b0;
        case 0x1e55b4u: goto label_1e55b4;
        case 0x1e55b8u: goto label_1e55b8;
        case 0x1e55bcu: goto label_1e55bc;
        case 0x1e55c0u: goto label_1e55c0;
        case 0x1e55c4u: goto label_1e55c4;
        case 0x1e55c8u: goto label_1e55c8;
        case 0x1e55ccu: goto label_1e55cc;
        case 0x1e55d0u: goto label_1e55d0;
        case 0x1e55d4u: goto label_1e55d4;
        case 0x1e55d8u: goto label_1e55d8;
        case 0x1e55dcu: goto label_1e55dc;
        case 0x1e55e0u: goto label_1e55e0;
        case 0x1e55e4u: goto label_1e55e4;
        case 0x1e55e8u: goto label_1e55e8;
        case 0x1e55ecu: goto label_1e55ec;
        case 0x1e55f0u: goto label_1e55f0;
        case 0x1e55f4u: goto label_1e55f4;
        case 0x1e55f8u: goto label_1e55f8;
        case 0x1e55fcu: goto label_1e55fc;
        case 0x1e5600u: goto label_1e5600;
        case 0x1e5604u: goto label_1e5604;
        case 0x1e5608u: goto label_1e5608;
        case 0x1e560cu: goto label_1e560c;
        case 0x1e5610u: goto label_1e5610;
        case 0x1e5614u: goto label_1e5614;
        case 0x1e5618u: goto label_1e5618;
        case 0x1e561cu: goto label_1e561c;
        case 0x1e5620u: goto label_1e5620;
        case 0x1e5624u: goto label_1e5624;
        case 0x1e5628u: goto label_1e5628;
        case 0x1e562cu: goto label_1e562c;
        case 0x1e5630u: goto label_1e5630;
        case 0x1e5634u: goto label_1e5634;
        case 0x1e5638u: goto label_1e5638;
        case 0x1e563cu: goto label_1e563c;
        case 0x1e5640u: goto label_1e5640;
        case 0x1e5644u: goto label_1e5644;
        case 0x1e5648u: goto label_1e5648;
        case 0x1e564cu: goto label_1e564c;
        case 0x1e5650u: goto label_1e5650;
        case 0x1e5654u: goto label_1e5654;
        case 0x1e5658u: goto label_1e5658;
        case 0x1e565cu: goto label_1e565c;
        case 0x1e5660u: goto label_1e5660;
        case 0x1e5664u: goto label_1e5664;
        case 0x1e5668u: goto label_1e5668;
        case 0x1e566cu: goto label_1e566c;
        case 0x1e5670u: goto label_1e5670;
        case 0x1e5674u: goto label_1e5674;
        case 0x1e5678u: goto label_1e5678;
        case 0x1e567cu: goto label_1e567c;
        case 0x1e5680u: goto label_1e5680;
        case 0x1e5684u: goto label_1e5684;
        case 0x1e5688u: goto label_1e5688;
        case 0x1e568cu: goto label_1e568c;
        case 0x1e5690u: goto label_1e5690;
        case 0x1e5694u: goto label_1e5694;
        case 0x1e5698u: goto label_1e5698;
        case 0x1e569cu: goto label_1e569c;
        case 0x1e56a0u: goto label_1e56a0;
        case 0x1e56a4u: goto label_1e56a4;
        case 0x1e56a8u: goto label_1e56a8;
        case 0x1e56acu: goto label_1e56ac;
        case 0x1e56b0u: goto label_1e56b0;
        case 0x1e56b4u: goto label_1e56b4;
        case 0x1e56b8u: goto label_1e56b8;
        case 0x1e56bcu: goto label_1e56bc;
        case 0x1e56c0u: goto label_1e56c0;
        case 0x1e56c4u: goto label_1e56c4;
        case 0x1e56c8u: goto label_1e56c8;
        case 0x1e56ccu: goto label_1e56cc;
        case 0x1e56d0u: goto label_1e56d0;
        case 0x1e56d4u: goto label_1e56d4;
        case 0x1e56d8u: goto label_1e56d8;
        case 0x1e56dcu: goto label_1e56dc;
        case 0x1e56e0u: goto label_1e56e0;
        case 0x1e56e4u: goto label_1e56e4;
        case 0x1e56e8u: goto label_1e56e8;
        case 0x1e56ecu: goto label_1e56ec;
        case 0x1e56f0u: goto label_1e56f0;
        case 0x1e56f4u: goto label_1e56f4;
        case 0x1e56f8u: goto label_1e56f8;
        case 0x1e56fcu: goto label_1e56fc;
        case 0x1e5700u: goto label_1e5700;
        case 0x1e5704u: goto label_1e5704;
        case 0x1e5708u: goto label_1e5708;
        case 0x1e570cu: goto label_1e570c;
        case 0x1e5710u: goto label_1e5710;
        case 0x1e5714u: goto label_1e5714;
        case 0x1e5718u: goto label_1e5718;
        case 0x1e571cu: goto label_1e571c;
        case 0x1e5720u: goto label_1e5720;
        case 0x1e5724u: goto label_1e5724;
        case 0x1e5728u: goto label_1e5728;
        case 0x1e572cu: goto label_1e572c;
        case 0x1e5730u: goto label_1e5730;
        case 0x1e5734u: goto label_1e5734;
        case 0x1e5738u: goto label_1e5738;
        case 0x1e573cu: goto label_1e573c;
        case 0x1e5740u: goto label_1e5740;
        case 0x1e5744u: goto label_1e5744;
        case 0x1e5748u: goto label_1e5748;
        case 0x1e574cu: goto label_1e574c;
        case 0x1e5750u: goto label_1e5750;
        case 0x1e5754u: goto label_1e5754;
        case 0x1e5758u: goto label_1e5758;
        case 0x1e575cu: goto label_1e575c;
        case 0x1e5760u: goto label_1e5760;
        case 0x1e5764u: goto label_1e5764;
        case 0x1e5768u: goto label_1e5768;
        case 0x1e576cu: goto label_1e576c;
        case 0x1e5770u: goto label_1e5770;
        case 0x1e5774u: goto label_1e5774;
        case 0x1e5778u: goto label_1e5778;
        case 0x1e577cu: goto label_1e577c;
        case 0x1e5780u: goto label_1e5780;
        case 0x1e5784u: goto label_1e5784;
        case 0x1e5788u: goto label_1e5788;
        case 0x1e578cu: goto label_1e578c;
        case 0x1e5790u: goto label_1e5790;
        case 0x1e5794u: goto label_1e5794;
        case 0x1e5798u: goto label_1e5798;
        case 0x1e579cu: goto label_1e579c;
        case 0x1e57a0u: goto label_1e57a0;
        case 0x1e57a4u: goto label_1e57a4;
        case 0x1e57a8u: goto label_1e57a8;
        case 0x1e57acu: goto label_1e57ac;
        case 0x1e57b0u: goto label_1e57b0;
        case 0x1e57b4u: goto label_1e57b4;
        case 0x1e57b8u: goto label_1e57b8;
        case 0x1e57bcu: goto label_1e57bc;
        case 0x1e57c0u: goto label_1e57c0;
        case 0x1e57c4u: goto label_1e57c4;
        case 0x1e57c8u: goto label_1e57c8;
        case 0x1e57ccu: goto label_1e57cc;
        case 0x1e57d0u: goto label_1e57d0;
        case 0x1e57d4u: goto label_1e57d4;
        case 0x1e57d8u: goto label_1e57d8;
        case 0x1e57dcu: goto label_1e57dc;
        case 0x1e57e0u: goto label_1e57e0;
        case 0x1e57e4u: goto label_1e57e4;
        case 0x1e57e8u: goto label_1e57e8;
        case 0x1e57ecu: goto label_1e57ec;
        case 0x1e57f0u: goto label_1e57f0;
        case 0x1e57f4u: goto label_1e57f4;
        case 0x1e57f8u: goto label_1e57f8;
        case 0x1e57fcu: goto label_1e57fc;
        case 0x1e5800u: goto label_1e5800;
        case 0x1e5804u: goto label_1e5804;
        case 0x1e5808u: goto label_1e5808;
        case 0x1e580cu: goto label_1e580c;
        case 0x1e5810u: goto label_1e5810;
        case 0x1e5814u: goto label_1e5814;
        case 0x1e5818u: goto label_1e5818;
        case 0x1e581cu: goto label_1e581c;
        case 0x1e5820u: goto label_1e5820;
        case 0x1e5824u: goto label_1e5824;
        case 0x1e5828u: goto label_1e5828;
        case 0x1e582cu: goto label_1e582c;
        case 0x1e5830u: goto label_1e5830;
        case 0x1e5834u: goto label_1e5834;
        case 0x1e5838u: goto label_1e5838;
        case 0x1e583cu: goto label_1e583c;
        case 0x1e5840u: goto label_1e5840;
        case 0x1e5844u: goto label_1e5844;
        case 0x1e5848u: goto label_1e5848;
        case 0x1e584cu: goto label_1e584c;
        case 0x1e5850u: goto label_1e5850;
        case 0x1e5854u: goto label_1e5854;
        case 0x1e5858u: goto label_1e5858;
        case 0x1e585cu: goto label_1e585c;
        case 0x1e5860u: goto label_1e5860;
        case 0x1e5864u: goto label_1e5864;
        case 0x1e5868u: goto label_1e5868;
        case 0x1e586cu: goto label_1e586c;
        case 0x1e5870u: goto label_1e5870;
        case 0x1e5874u: goto label_1e5874;
        case 0x1e5878u: goto label_1e5878;
        case 0x1e587cu: goto label_1e587c;
        case 0x1e5880u: goto label_1e5880;
        case 0x1e5884u: goto label_1e5884;
        case 0x1e5888u: goto label_1e5888;
        case 0x1e588cu: goto label_1e588c;
        case 0x1e5890u: goto label_1e5890;
        case 0x1e5894u: goto label_1e5894;
        case 0x1e5898u: goto label_1e5898;
        case 0x1e589cu: goto label_1e589c;
        case 0x1e58a0u: goto label_1e58a0;
        case 0x1e58a4u: goto label_1e58a4;
        case 0x1e58a8u: goto label_1e58a8;
        case 0x1e58acu: goto label_1e58ac;
        case 0x1e58b0u: goto label_1e58b0;
        case 0x1e58b4u: goto label_1e58b4;
        case 0x1e58b8u: goto label_1e58b8;
        case 0x1e58bcu: goto label_1e58bc;
        case 0x1e58c0u: goto label_1e58c0;
        case 0x1e58c4u: goto label_1e58c4;
        case 0x1e58c8u: goto label_1e58c8;
        case 0x1e58ccu: goto label_1e58cc;
        case 0x1e58d0u: goto label_1e58d0;
        case 0x1e58d4u: goto label_1e58d4;
        case 0x1e58d8u: goto label_1e58d8;
        case 0x1e58dcu: goto label_1e58dc;
        case 0x1e58e0u: goto label_1e58e0;
        case 0x1e58e4u: goto label_1e58e4;
        case 0x1e58e8u: goto label_1e58e8;
        case 0x1e58ecu: goto label_1e58ec;
        case 0x1e58f0u: goto label_1e58f0;
        case 0x1e58f4u: goto label_1e58f4;
        case 0x1e58f8u: goto label_1e58f8;
        case 0x1e58fcu: goto label_1e58fc;
        case 0x1e5900u: goto label_1e5900;
        case 0x1e5904u: goto label_1e5904;
        case 0x1e5908u: goto label_1e5908;
        case 0x1e590cu: goto label_1e590c;
        case 0x1e5910u: goto label_1e5910;
        case 0x1e5914u: goto label_1e5914;
        case 0x1e5918u: goto label_1e5918;
        case 0x1e591cu: goto label_1e591c;
        case 0x1e5920u: goto label_1e5920;
        case 0x1e5924u: goto label_1e5924;
        case 0x1e5928u: goto label_1e5928;
        case 0x1e592cu: goto label_1e592c;
        case 0x1e5930u: goto label_1e5930;
        case 0x1e5934u: goto label_1e5934;
        case 0x1e5938u: goto label_1e5938;
        case 0x1e593cu: goto label_1e593c;
        case 0x1e5940u: goto label_1e5940;
        case 0x1e5944u: goto label_1e5944;
        case 0x1e5948u: goto label_1e5948;
        case 0x1e594cu: goto label_1e594c;
        case 0x1e5950u: goto label_1e5950;
        case 0x1e5954u: goto label_1e5954;
        case 0x1e5958u: goto label_1e5958;
        case 0x1e595cu: goto label_1e595c;
        case 0x1e5960u: goto label_1e5960;
        case 0x1e5964u: goto label_1e5964;
        case 0x1e5968u: goto label_1e5968;
        case 0x1e596cu: goto label_1e596c;
        case 0x1e5970u: goto label_1e5970;
        case 0x1e5974u: goto label_1e5974;
        case 0x1e5978u: goto label_1e5978;
        case 0x1e597cu: goto label_1e597c;
        case 0x1e5980u: goto label_1e5980;
        case 0x1e5984u: goto label_1e5984;
        case 0x1e5988u: goto label_1e5988;
        case 0x1e598cu: goto label_1e598c;
        case 0x1e5990u: goto label_1e5990;
        case 0x1e5994u: goto label_1e5994;
        case 0x1e5998u: goto label_1e5998;
        case 0x1e599cu: goto label_1e599c;
        case 0x1e59a0u: goto label_1e59a0;
        case 0x1e59a4u: goto label_1e59a4;
        case 0x1e59a8u: goto label_1e59a8;
        case 0x1e59acu: goto label_1e59ac;
        case 0x1e59b0u: goto label_1e59b0;
        case 0x1e59b4u: goto label_1e59b4;
        case 0x1e59b8u: goto label_1e59b8;
        case 0x1e59bcu: goto label_1e59bc;
        case 0x1e59c0u: goto label_1e59c0;
        case 0x1e59c4u: goto label_1e59c4;
        case 0x1e59c8u: goto label_1e59c8;
        case 0x1e59ccu: goto label_1e59cc;
        case 0x1e59d0u: goto label_1e59d0;
        case 0x1e59d4u: goto label_1e59d4;
        case 0x1e59d8u: goto label_1e59d8;
        case 0x1e59dcu: goto label_1e59dc;
        case 0x1e59e0u: goto label_1e59e0;
        case 0x1e59e4u: goto label_1e59e4;
        case 0x1e59e8u: goto label_1e59e8;
        case 0x1e59ecu: goto label_1e59ec;
        case 0x1e59f0u: goto label_1e59f0;
        case 0x1e59f4u: goto label_1e59f4;
        case 0x1e59f8u: goto label_1e59f8;
        case 0x1e59fcu: goto label_1e59fc;
        case 0x1e5a00u: goto label_1e5a00;
        case 0x1e5a04u: goto label_1e5a04;
        case 0x1e5a08u: goto label_1e5a08;
        case 0x1e5a0cu: goto label_1e5a0c;
        case 0x1e5a10u: goto label_1e5a10;
        case 0x1e5a14u: goto label_1e5a14;
        case 0x1e5a18u: goto label_1e5a18;
        case 0x1e5a1cu: goto label_1e5a1c;
        case 0x1e5a20u: goto label_1e5a20;
        case 0x1e5a24u: goto label_1e5a24;
        case 0x1e5a28u: goto label_1e5a28;
        case 0x1e5a2cu: goto label_1e5a2c;
        case 0x1e5a30u: goto label_1e5a30;
        case 0x1e5a34u: goto label_1e5a34;
        case 0x1e5a38u: goto label_1e5a38;
        case 0x1e5a3cu: goto label_1e5a3c;
        case 0x1e5a40u: goto label_1e5a40;
        case 0x1e5a44u: goto label_1e5a44;
        case 0x1e5a48u: goto label_1e5a48;
        case 0x1e5a4cu: goto label_1e5a4c;
        case 0x1e5a50u: goto label_1e5a50;
        case 0x1e5a54u: goto label_1e5a54;
        case 0x1e5a58u: goto label_1e5a58;
        case 0x1e5a5cu: goto label_1e5a5c;
        case 0x1e5a60u: goto label_1e5a60;
        case 0x1e5a64u: goto label_1e5a64;
        case 0x1e5a68u: goto label_1e5a68;
        case 0x1e5a6cu: goto label_1e5a6c;
        case 0x1e5a70u: goto label_1e5a70;
        case 0x1e5a74u: goto label_1e5a74;
        case 0x1e5a78u: goto label_1e5a78;
        case 0x1e5a7cu: goto label_1e5a7c;
        case 0x1e5a80u: goto label_1e5a80;
        case 0x1e5a84u: goto label_1e5a84;
        case 0x1e5a88u: goto label_1e5a88;
        case 0x1e5a8cu: goto label_1e5a8c;
        case 0x1e5a90u: goto label_1e5a90;
        case 0x1e5a94u: goto label_1e5a94;
        case 0x1e5a98u: goto label_1e5a98;
        case 0x1e5a9cu: goto label_1e5a9c;
        case 0x1e5aa0u: goto label_1e5aa0;
        case 0x1e5aa4u: goto label_1e5aa4;
        case 0x1e5aa8u: goto label_1e5aa8;
        case 0x1e5aacu: goto label_1e5aac;
        case 0x1e5ab0u: goto label_1e5ab0;
        case 0x1e5ab4u: goto label_1e5ab4;
        case 0x1e5ab8u: goto label_1e5ab8;
        case 0x1e5abcu: goto label_1e5abc;
        case 0x1e5ac0u: goto label_1e5ac0;
        case 0x1e5ac4u: goto label_1e5ac4;
        case 0x1e5ac8u: goto label_1e5ac8;
        case 0x1e5accu: goto label_1e5acc;
        case 0x1e5ad0u: goto label_1e5ad0;
        case 0x1e5ad4u: goto label_1e5ad4;
        case 0x1e5ad8u: goto label_1e5ad8;
        case 0x1e5adcu: goto label_1e5adc;
        case 0x1e5ae0u: goto label_1e5ae0;
        case 0x1e5ae4u: goto label_1e5ae4;
        case 0x1e5ae8u: goto label_1e5ae8;
        case 0x1e5aecu: goto label_1e5aec;
        case 0x1e5af0u: goto label_1e5af0;
        case 0x1e5af4u: goto label_1e5af4;
        case 0x1e5af8u: goto label_1e5af8;
        case 0x1e5afcu: goto label_1e5afc;
        case 0x1e5b00u: goto label_1e5b00;
        case 0x1e5b04u: goto label_1e5b04;
        case 0x1e5b08u: goto label_1e5b08;
        case 0x1e5b0cu: goto label_1e5b0c;
        case 0x1e5b10u: goto label_1e5b10;
        case 0x1e5b14u: goto label_1e5b14;
        case 0x1e5b18u: goto label_1e5b18;
        case 0x1e5b1cu: goto label_1e5b1c;
        default: return;
    }

label_1e5350:
    // 0x1e5350: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1e5350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1e5354:
    // 0x1e5354: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x1e5354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1e5358:
    // 0x1e5358: 0xaf808dd0  sw          $zero, -0x7230($gp)
    ctx->pc = 0x1e5358u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938064), GPR_U32(ctx, 0));
label_1e535c:
    // 0x1e535c: 0xc07091c  jal         func_1C2470
label_1e5360:
    if (ctx->pc == 0x1E5360u) {
        ctx->pc = 0x1E5360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E535Cu;
        // 0x1e5360: 0xaf808dc8  sw          $zero, -0x7238($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938056), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5364u;
        goto label_1e5364;
    }
    ctx->pc = 0x1E535Cu;
    SET_GPR_U32(ctx, 31, 0x1E5364u);
    ctx->pc = 0x1E5360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E535Cu;
    // 0x1e5360: 0xaf808dc8  sw          $zero, -0x7238($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938056), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2470u, 0x1E535Cu, 0x1E5364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5364u;
label_1e5364:
    // 0x1e5364: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e5364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e5368:
    // 0x1e5368: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e5368u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e536c:
    // 0x1e536c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e536cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5370:
    // 0x1e5370: 0x27828dd8  addiu       $v0, $gp, -0x7228
    ctx->pc = 0x1e5370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938072));
label_1e5374:
    // 0x1e5374: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1e5374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1e5378:
    // 0x1e5378: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e5378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e537c:
    // 0x1e537c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1e537cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e5380:
    // 0x1e5380: 0xc05e234  jal         func_1788D0
label_1e5384:
    if (ctx->pc == 0x1E5384u) {
        ctx->pc = 0x1E5384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5380u;
        // 0x1e5384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5388u;
        goto label_1e5388;
    }
    ctx->pc = 0x1E5380u;
    SET_GPR_U32(ctx, 31, 0x1E5388u);
    ctx->pc = 0x1E5384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5380u;
    // 0x1e5384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1E5380u, 0x1E5388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5388u;
label_1e5388:
    // 0x1e5388: 0x240300a8  addiu       $v1, $zero, 0xA8
    ctx->pc = 0x1e5388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1e538c:
    // 0x1e538c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e538cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5390:
    // 0x1e5390: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1e5390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_1e5394:
    // 0x1e5394: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e5394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e5398:
    // 0x1e5398: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1e5398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1e539c:
    // 0x1e539c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1e539cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1e53a0:
    // 0x1e53a0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e53a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e53a4:
    // 0x1e53a4: 0x240600f8  addiu       $a2, $zero, 0xF8
    ctx->pc = 0x1e53a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
label_1e53a8:
    // 0x1e53a8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e53a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e53ac:
    // 0x1e53ac: 0x24070104  addiu       $a3, $zero, 0x104
    ctx->pc = 0x1e53acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
label_1e53b0:
    // 0x1e53b0: 0xdc253100  ld          $a1, 0x3100($at)
    ctx->pc = 0x1e53b0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 12544)));
label_1e53b4:
    // 0x1e53b4: 0x2408012c  addiu       $t0, $zero, 0x12C
    ctx->pc = 0x1e53b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_1e53b8:
    // 0x1e53b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e53b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e53bc:
    // 0x1e53bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e53bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e53c0:
    // 0x1e53c0: 0xc05de30  jal         func_1778C0
label_1e53c4:
    if (ctx->pc == 0x1E53C4u) {
        ctx->pc = 0x1E53C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E53C0u;
        // 0x1e53c4: 0x240b0090  addiu       $t3, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E53C8u;
        goto label_1e53c8;
    }
    ctx->pc = 0x1E53C0u;
    SET_GPR_U32(ctx, 31, 0x1E53C8u);
    ctx->pc = 0x1E53C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E53C0u;
    // 0x1e53c4: 0x240b0090  addiu       $t3, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E53C0u, 0x1E53C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E53C8u;
label_1e53c8:
    // 0x1e53c8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1e53c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_1e53cc:
    // 0x1e53cc: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1e53ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1e53d0:
    // 0x1e53d0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1e53d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1e53d4:
    // 0x1e53d4: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x1e53d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_1e53d8:
    // 0x1e53d8: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1e53d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1e53dc:
    // 0x1e53dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e53dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e53e0:
    // 0x1e53e0: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1e53e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1e53e4:
    // 0x1e53e4: 0x24060110  addiu       $a2, $zero, 0x110
    ctx->pc = 0x1e53e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_1e53e8:
    // 0x1e53e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e53e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e53ec:
    // 0x1e53ec: 0x2407011c  addiu       $a3, $zero, 0x11C
    ctx->pc = 0x1e53ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 284));
label_1e53f0:
    // 0x1e53f0: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e53f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e53f4:
    // 0x1e53f4: 0x2408012c  addiu       $t0, $zero, 0x12C
    ctx->pc = 0x1e53f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_1e53f8:
    // 0x1e53f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e53f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e53fc:
    // 0x1e53fc: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x1e53fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1e5400:
    // 0x1e5400: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x1e5400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
label_1e5404:
    // 0x1e5404: 0x240a0078  addiu       $t2, $zero, 0x78
    ctx->pc = 0x1e5404u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1e5408:
    // 0x1e5408: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x1e5408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
label_1e540c:
    // 0x1e540c: 0xc05dd88  jal         func_177620
label_1e5410:
    if (ctx->pc == 0x1E5410u) {
        ctx->pc = 0x1E5410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E540Cu;
        // 0x1e5410: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5414u;
        goto label_1e5414;
    }
    ctx->pc = 0x1E540Cu;
    SET_GPR_U32(ctx, 31, 0x1E5414u);
    ctx->pc = 0x1E5410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E540Cu;
    // 0x1e5410: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177620u, 0x1E540Cu, 0x1E5414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5414u;
label_1e5414:
    // 0x1e5414: 0x240200a8  addiu       $v0, $zero, 0xA8
    ctx->pc = 0x1e5414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1e5418:
    // 0x1e5418: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e5418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e541c:
    // 0x1e541c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e541cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1e5420:
    // 0x1e5420: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e5420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e5424:
    // 0x1e5424: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1e5424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1e5428:
    // 0x1e5428: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e542c:
    // 0x1e542c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e542cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e5430:
    // 0x1e5430: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x1e5430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_1e5434:
    // 0x1e5434: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e5434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e5438:
    // 0x1e5438: 0x240600f8  addiu       $a2, $zero, 0xF8
    ctx->pc = 0x1e5438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
label_1e543c:
    // 0x1e543c: 0xdc2530f8  ld          $a1, 0x30F8($at)
    ctx->pc = 0x1e543cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 12536)));
label_1e5440:
    // 0x1e5440: 0x24070104  addiu       $a3, $zero, 0x104
    ctx->pc = 0x1e5440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
label_1e5444:
    // 0x1e5444: 0x2408012c  addiu       $t0, $zero, 0x12C
    ctx->pc = 0x1e5444u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_1e5448:
    // 0x1e5448: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e5448u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e544c:
    // 0x1e544c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e544cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5450:
    // 0x1e5450: 0xc05de30  jal         func_1778C0
label_1e5454:
    if (ctx->pc == 0x1E5454u) {
        ctx->pc = 0x1E5454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5450u;
        // 0x1e5454: 0x240b0090  addiu       $t3, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5458u;
        goto label_1e5458;
    }
    ctx->pc = 0x1E5450u;
    SET_GPR_U32(ctx, 31, 0x1E5458u);
    ctx->pc = 0x1E5454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5450u;
    // 0x1e5454: 0x240b0090  addiu       $t3, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E5450u, 0x1E5458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5458u;
label_1e5458:
    // 0x1e5458: 0x240200a8  addiu       $v0, $zero, 0xA8
    ctx->pc = 0x1e5458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1e545c:
    // 0x1e545c: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e545cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e5460:
    // 0x1e5460: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e5460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1e5464:
    // 0x1e5464: 0x260401f0  addiu       $a0, $s0, 0x1F0
    ctx->pc = 0x1e5464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
label_1e5468:
    // 0x1e5468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e546c:
    // 0x1e546c: 0x240600f8  addiu       $a2, $zero, 0xF8
    ctx->pc = 0x1e546cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
label_1e5470:
    // 0x1e5470: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1e5470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1e5474:
    // 0x1e5474: 0x24070104  addiu       $a3, $zero, 0x104
    ctx->pc = 0x1e5474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
label_1e5478:
    // 0x1e5478: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e5478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e547c:
    // 0x1e547c: 0x2408012c  addiu       $t0, $zero, 0x12C
    ctx->pc = 0x1e547cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_1e5480:
    // 0x1e5480: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e5480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e5484:
    // 0x1e5484: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e5484u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5488:
    // 0x1e5488: 0xdc253100  ld          $a1, 0x3100($at)
    ctx->pc = 0x1e5488u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 12544)));
label_1e548c:
    // 0x1e548c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e548cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5490:
    // 0x1e5490: 0xc05de30  jal         func_1778C0
label_1e5494:
    if (ctx->pc == 0x1E5494u) {
        ctx->pc = 0x1E5494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5490u;
        // 0x1e5494: 0x240b0090  addiu       $t3, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5498u;
        goto label_1e5498;
    }
    ctx->pc = 0x1E5490u;
    SET_GPR_U32(ctx, 31, 0x1E5498u);
    ctx->pc = 0x1E5494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5490u;
    // 0x1e5494: 0x240b0090  addiu       $t3, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E5490u, 0x1E5498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5498u;
label_1e5498:
    // 0x1e5498: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e5498u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1e549c:
    // 0x1e549c: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1e549cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e54a0:
    // 0x1e54a0: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
label_1e54a4:
    if (ctx->pc == 0x1E54A4u) {
        ctx->pc = 0x1E54A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E54A0u;
        // 0x1e54a4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E54A8u;
        goto label_1e54a8;
    }
    ctx->pc = 0x1E54A0u;
    {
        const bool branch_taken_0x1e54a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E54A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E54A0u;
        // 0x1e54a4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e54a0) {
            ctx->pc = 0x1E5370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5370;
        }
    }
    ctx->pc = 0x1E54A8u;
label_1e54a8:
    // 0x1e54a8: 0xaf808e40  sw          $zero, -0x71C0($gp)
    ctx->pc = 0x1e54a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938176), GPR_U32(ctx, 0));
label_1e54ac:
    // 0x1e54ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e54acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e54b0:
    // 0x1e54b0: 0xaf808e38  sw          $zero, -0x71C8($gp)
    ctx->pc = 0x1e54b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938168), GPR_U32(ctx, 0));
label_1e54b4:
    // 0x1e54b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e54b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e54b8:
    // 0x1e54b8: 0xaf808e3c  sw          $zero, -0x71C4($gp)
    ctx->pc = 0x1e54b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938172), GPR_U32(ctx, 0));
label_1e54bc:
    // 0x1e54bc: 0x27828e48  addiu       $v0, $gp, -0x71B8
    ctx->pc = 0x1e54bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938184));
label_1e54c0:
    // 0x1e54c0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1e54c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e54c4:
    // 0x1e54c4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e54c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1e54c8:
    // 0x1e54c8: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1e54c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e54cc:
    // 0x1e54cc: 0xc05e234  jal         func_1788D0
label_1e54d0:
    if (ctx->pc == 0x1E54D0u) {
        ctx->pc = 0x1E54D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E54CCu;
        // 0x1e54d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E54D4u;
        goto label_1e54d4;
    }
    ctx->pc = 0x1E54CCu;
    SET_GPR_U32(ctx, 31, 0x1E54D4u);
    ctx->pc = 0x1E54D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E54CCu;
    // 0x1e54d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1E54CCu, 0x1E54D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E54D4u;
label_1e54d4:
    // 0x1e54d4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x1e54d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1e54d8:
    // 0x1e54d8: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e54d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e54dc:
    // 0x1e54dc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e54dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1e54e0:
    // 0x1e54e0: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1e54e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1e54e4:
    // 0x1e54e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e54e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e54e8:
    // 0x1e54e8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1e54e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e54ec:
    // 0x1e54ec: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1e54ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1e54f0:
    // 0x1e54f0: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1e54f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1e54f4:
    // 0x1e54f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e54f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e54f8:
    // 0x1e54f8: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e54f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e54fc:
    // 0x1e54fc: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e54fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e5500:
    // 0x1e5500: 0x240803e8  addiu       $t0, $zero, 0x3E8
    ctx->pc = 0x1e5500u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_1e5504:
    // 0x1e5504: 0xdc2530e8  ld          $a1, 0x30E8($at)
    ctx->pc = 0x1e5504u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 12520)));
label_1e5508:
    // 0x1e5508: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e5508u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e550c:
    // 0x1e550c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e550cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5510:
    // 0x1e5510: 0xc05de30  jal         func_1778C0
label_1e5514:
    if (ctx->pc == 0x1E5514u) {
        ctx->pc = 0x1E5514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5510u;
        // 0x1e5514: 0x240b00f8  addiu       $t3, $zero, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5518u;
        goto label_1e5518;
    }
    ctx->pc = 0x1E5510u;
    SET_GPR_U32(ctx, 31, 0x1E5518u);
    ctx->pc = 0x1E5514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5510u;
    // 0x1e5514: 0x240b00f8  addiu       $t3, $zero, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E5510u, 0x1E5518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5518u;
label_1e5518:
    // 0x1e5518: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e5518u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e551c:
    // 0x1e551c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1e551cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e5520:
    // 0x1e5520: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_1e5524:
    if (ctx->pc == 0x1E5524u) {
        ctx->pc = 0x1E5524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5520u;
        // 0x1e5524: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5528u;
        goto label_1e5528;
    }
    ctx->pc = 0x1E5520u;
    {
        const bool branch_taken_0x1e5520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5520u;
        // 0x1e5524: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5520) {
            ctx->pc = 0x1E54BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e54bc;
        }
    }
    ctx->pc = 0x1E5528u;
label_1e5528:
    // 0x1e5528: 0xc07a228  jal         func_1E88A0
label_1e552c:
    if (ctx->pc == 0x1E552Cu) {
        ctx->pc = 0x1E5530u;
        goto label_1e5530;
    }
    ctx->pc = 0x1E5528u;
    SET_GPR_U32(ctx, 31, 0x1E5530u);
    ctx->pc = 0x1E88A0u;
    { ctx->pc = 0x1e88a0; return; }
    ctx->pc = 0x1E5530u;
label_1e5530:
    // 0x1e5530: 0xc07ab5c  jal         func_1EAD70
label_1e5534:
    if (ctx->pc == 0x1E5534u) {
        ctx->pc = 0x1E5534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5530u;
        // 0x1e5534: 0x8f848e98  lw          $a0, -0x7168($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5538u;
        goto label_1e5538;
    }
    ctx->pc = 0x1E5530u;
    SET_GPR_U32(ctx, 31, 0x1E5538u);
    ctx->pc = 0x1E5534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5530u;
    // 0x1e5534: 0x8f848e98  lw          $a0, -0x7168($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD70u;
    { ctx->pc = 0x1ead70; return; }
    ctx->pc = 0x1E5538u;
label_1e5538:
    // 0x1e5538: 0xc077fc0  jal         func_1DFF00
label_1e553c:
    if (ctx->pc == 0x1E553Cu) {
        ctx->pc = 0x1E5540u;
        goto label_1e5540;
    }
    ctx->pc = 0x1E5538u;
    SET_GPR_U32(ctx, 31, 0x1E5540u);
    ctx->pc = 0x1DFF00u;
    { ctx->pc = 0x1dff00; return; }
    ctx->pc = 0x1E5540u;
label_1e5540:
    // 0x1e5540: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1e5540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1e5544:
    // 0x1e5544: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x1e5544u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1e5548:
    // 0x1e5548: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1e5548u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1e554c:
    // 0x1e554c: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1e554cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e5550:
    // 0x1e5550: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1e5550u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e5554:
    // 0x1e5554: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1e5554u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e5558:
    // 0x1e5558: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1e5558u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e555c:
    // 0x1e555c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1e555cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e5560:
    // 0x1e5560: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1e5560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e5564:
    // 0x1e5564: 0x3e00008  jr          $ra
label_1e5568:
    if (ctx->pc == 0x1E5568u) {
        ctx->pc = 0x1E5568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5564u;
        // 0x1e5568: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E556Cu;
        goto label_1e556c;
    }
    ctx->pc = 0x1E5564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5564u;
        // 0x1e5568: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E556Cu;
label_1e556c:
    // 0x1e556c: 0x0  nop
    ctx->pc = 0x1e556cu;
    // NOP
label_1e5570:
    // 0x1e5570: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1e5570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_1e5574:
    // 0x1e5574: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e5574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1e5578:
    // 0x1e5578: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e5578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e557c:
    // 0x1e557c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e557cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e5580:
    // 0x1e5580: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e5580u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e5584:
    // 0x1e5584: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e5584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e5588:
    // 0x1e5588: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1e5588u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e558c:
    // 0x1e558c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e558cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e5590:
    // 0x1e5590: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1e5590u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e5594:
    // 0x1e5594: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e5594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e5598:
    // 0x1e5598: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1e5598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e559c:
    // 0x1e559c: 0xaf808e9c  sw          $zero, -0x7164($gp)
    ctx->pc = 0x1e559cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938268), GPR_U32(ctx, 0));
label_1e55a0:
    // 0x1e55a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e55a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e55a4:
    // 0x1e55a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e55a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e55a8:
    // 0x1e55a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e55a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e55ac:
    // 0x1e55ac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e55acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e55b0:
    // 0x1e55b0: 0xc079658  jal         func_1E5960
label_1e55b4:
    if (ctx->pc == 0x1E55B4u) {
        ctx->pc = 0x1E55B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E55B0u;
        // 0x1e55b4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E55B8u;
        goto label_1e55b8;
    }
    ctx->pc = 0x1E55B0u;
    SET_GPR_U32(ctx, 31, 0x1E55B8u);
    ctx->pc = 0x1E55B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E55B0u;
    // 0x1e55b4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5960u;
    goto label_1e5960;
    ctx->pc = 0x1E55B8u;
label_1e55b8:
    // 0x1e55b8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1e55bc:
    if (ctx->pc == 0x1E55BCu) {
        ctx->pc = 0x1E55C0u;
        goto label_1e55c0;
    }
    ctx->pc = 0x1E55B8u;
    {
        const bool branch_taken_0x1e55b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e55b8) {
            ctx->pc = 0x1E55E8u;
            goto label_1e55e8;
        }
    }
    ctx->pc = 0x1E55C0u;
label_1e55c0:
    // 0x1e55c0: 0x12700009  beq         $s3, $s0, . + 4 + (0x9 << 2)
label_1e55c4:
    if (ctx->pc == 0x1E55C4u) {
        ctx->pc = 0x1E55C8u;
        goto label_1e55c8;
    }
    ctx->pc = 0x1E55C0u;
    {
        const bool branch_taken_0x1e55c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        if (branch_taken_0x1e55c0) {
            ctx->pc = 0x1E55E8u;
            goto label_1e55e8;
        }
    }
    ctx->pc = 0x1E55C8u;
label_1e55c8:
    // 0x1e55c8: 0x8f848e9c  lw          $a0, -0x7164($gp)
    ctx->pc = 0x1e55c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938268)));
label_1e55cc:
    // 0x1e55cc: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x1e55ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e55d0:
    // 0x1e55d0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1e55d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1e55d4:
    // 0x1e55d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e55d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e55d8:
    // 0x1e55d8: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1e55d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_1e55dc:
    // 0x1e55dc: 0x8f838e9c  lw          $v1, -0x7164($gp)
    ctx->pc = 0x1e55dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938268)));
label_1e55e0:
    // 0x1e55e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e55e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e55e4:
    // 0x1e55e4: 0xaf838e9c  sw          $v1, -0x7164($gp)
    ctx->pc = 0x1e55e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938268), GPR_U32(ctx, 3));
label_1e55e8:
    // 0x1e55e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e55e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e55ec:
    // 0x1e55ec: 0x2a030029  slti        $v1, $s0, 0x29
    ctx->pc = 0x1e55ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)41) ? 1 : 0);
label_1e55f0:
    // 0x1e55f0: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_1e55f4:
    if (ctx->pc == 0x1E55F4u) {
        ctx->pc = 0x1E55F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E55F0u;
        // 0x1e55f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E55F8u;
        goto label_1e55f8;
    }
    ctx->pc = 0x1E55F0u;
    {
        const bool branch_taken_0x1e55f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E55F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E55F0u;
        // 0x1e55f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e55f0) {
            ctx->pc = 0x1E55A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e55a8;
        }
    }
    ctx->pc = 0x1E55F8u;
label_1e55f8:
    // 0x1e55f8: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1e55f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1e55fc:
    // 0x1e55fc: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x1e55fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
label_1e5600:
    // 0x1e5600: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1e5600u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5604:
    // 0x1e5604: 0xafaa0060  sw          $t2, 0x60($sp)
    ctx->pc = 0x1e5604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 10));
label_1e5608:
    // 0x1e5608: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1e5608u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e560c:
    // 0x1e560c: 0xafaa0064  sw          $t2, 0x64($sp)
    ctx->pc = 0x1e560cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 10));
label_1e5610:
    // 0x1e5610: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1e5610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1e5614:
    // 0x1e5614: 0xafaa0068  sw          $t2, 0x68($sp)
    ctx->pc = 0x1e5614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 10));
label_1e5618:
    // 0x1e5618: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1e5618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e561c:
    // 0x1e561c: 0xafaa006c  sw          $t2, 0x6C($sp)
    ctx->pc = 0x1e561cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 10));
label_1e5620:
    // 0x1e5620: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e5620u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5624:
    // 0x1e5624: 0xafaa0070  sw          $t2, 0x70($sp)
    ctx->pc = 0x1e5624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 10));
label_1e5628:
    // 0x1e5628: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x1e5628u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e562c:
    // 0x1e562c: 0xafaa0074  sw          $t2, 0x74($sp)
    ctx->pc = 0x1e562cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 10));
label_1e5630:
    // 0x1e5630: 0x25083420  addiu       $t0, $t0, 0x3420
    ctx->pc = 0x1e5630u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13344));
label_1e5634:
    // 0x1e5634: 0xafaa0078  sw          $t2, 0x78($sp)
    ctx->pc = 0x1e5634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 10));
label_1e5638:
    // 0x1e5638: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1e563c:
    if (ctx->pc == 0x1E563Cu) {
        ctx->pc = 0x1E563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5638u;
        // 0x1e563c: 0xafaa007c  sw          $t2, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5640u;
        goto label_1e5640;
    }
    ctx->pc = 0x1E5638u;
    {
        const bool branch_taken_0x1e5638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5638u;
        // 0x1e563c: 0xafaa007c  sw          $t2, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5638) {
            ctx->pc = 0x1E56B8u;
            goto label_1e56b8;
        }
    }
    ctx->pc = 0x1E5640u;
label_1e5640:
    // 0x1e5640: 0x12d1821  addu        $v1, $t1, $t5
    ctx->pc = 0x1e5640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
label_1e5644:
    // 0x1e5644: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e5644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e5648:
    // 0x1e5648: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1e5648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1e564c:
    // 0x1e564c: 0x906b0000  lbu         $t3, 0x0($v1)
    ctx->pc = 0x1e564cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e5650:
    // 0x1e5650: 0x11600006  beqz        $t3, . + 4 + (0x6 << 2)
label_1e5654:
    if (ctx->pc == 0x1E5654u) {
        ctx->pc = 0x1E5658u;
        goto label_1e5658;
    }
    ctx->pc = 0x1E5650u;
    {
        const bool branch_taken_0x1e5650 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5650) {
            ctx->pc = 0x1E566Cu;
            goto label_1e566c;
        }
    }
    ctx->pc = 0x1E5658u;
label_1e5658:
    // 0x1e5658: 0x11670004  beq         $t3, $a3, . + 4 + (0x4 << 2)
label_1e565c:
    if (ctx->pc == 0x1E565Cu) {
        ctx->pc = 0x1E5660u;
        goto label_1e5660;
    }
    ctx->pc = 0x1E5658u;
    {
        const bool branch_taken_0x1e5658 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 7));
        if (branch_taken_0x1e5658) {
            ctx->pc = 0x1E566Cu;
            goto label_1e566c;
        }
    }
    ctx->pc = 0x1E5660u;
label_1e5660:
    // 0x1e5660: 0x11660002  beq         $t3, $a2, . + 4 + (0x2 << 2)
label_1e5664:
    if (ctx->pc == 0x1E5664u) {
        ctx->pc = 0x1E5668u;
        goto label_1e5668;
    }
    ctx->pc = 0x1E5660u;
    {
        const bool branch_taken_0x1e5660 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 6));
        if (branch_taken_0x1e5660) {
            ctx->pc = 0x1E566Cu;
            goto label_1e566c;
        }
    }
    ctx->pc = 0x1E5668u;
label_1e5668:
    // 0x1e5668: 0x240b0007  addiu       $t3, $zero, 0x7
    ctx->pc = 0x1e5668u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1e566c:
    // 0x1e566c: 0x0  nop
    ctx->pc = 0x1e566cu;
    // NOP
label_1e5670:
    // 0x1e5670: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e5670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5674:
    // 0x1e5674: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1e5674u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5678:
    // 0x1e5678: 0xac1821  addu        $v1, $a1, $t4
    ctx->pc = 0x1e5678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_1e567c:
    // 0x1e567c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e567cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e5680:
    // 0x1e5680: 0x146a0005  bne         $v1, $t2, . + 4 + (0x5 << 2)
label_1e5684:
    if (ctx->pc == 0x1E5684u) {
        ctx->pc = 0x1E5688u;
        goto label_1e5688;
    }
    ctx->pc = 0x1E5680u;
    {
        const bool branch_taken_0x1e5680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        if (branch_taken_0x1e5680) {
            ctx->pc = 0x1E5698u;
            goto label_1e5698;
        }
    }
    ctx->pc = 0x1E5688u;
label_1e5688:
    // 0x1e5688: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1e5688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1e568c:
    // 0x1e568c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1e568cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1e5690:
    // 0x1e5690: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e5694:
    if (ctx->pc == 0x1E5694u) {
        ctx->pc = 0x1E5694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5690u;
        // 0x1e5694: 0xac6b0000  sw          $t3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5698u;
        goto label_1e5698;
    }
    ctx->pc = 0x1E5690u;
    {
        const bool branch_taken_0x1e5690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5690u;
        // 0x1e5694: 0xac6b0000  sw          $t3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5690) {
            ctx->pc = 0x1E56B0u;
            goto label_1e56b0;
        }
    }
    ctx->pc = 0x1E5698u;
label_1e5698:
    // 0x1e5698: 0x11630005  beq         $t3, $v1, . + 4 + (0x5 << 2)
label_1e569c:
    if (ctx->pc == 0x1E569Cu) {
        ctx->pc = 0x1E56A0u;
        goto label_1e56a0;
    }
    ctx->pc = 0x1E5698u;
    {
        const bool branch_taken_0x1e5698 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e5698) {
            ctx->pc = 0x1E56B0u;
            goto label_1e56b0;
        }
    }
    ctx->pc = 0x1E56A0u;
label_1e56a0:
    // 0x1e56a0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e56a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1e56a4:
    // 0x1e56a4: 0x28830008  slti        $v1, $a0, 0x8
    ctx->pc = 0x1e56a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
label_1e56a8:
    // 0x1e56a8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_1e56ac:
    if (ctx->pc == 0x1E56ACu) {
        ctx->pc = 0x1E56ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E56A8u;
        // 0x1e56ac: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E56B0u;
        goto label_1e56b0;
    }
    ctx->pc = 0x1E56A8u;
    {
        const bool branch_taken_0x1e56a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E56ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E56A8u;
        // 0x1e56ac: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e56a8) {
            ctx->pc = 0x1E5678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5678;
        }
    }
    ctx->pc = 0x1E56B0u;
label_1e56b0:
    // 0x1e56b0: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x1e56b0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
label_1e56b4:
    // 0x1e56b4: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x1e56b4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_1e56b8:
    // 0x1e56b8: 0x8f838e9c  lw          $v1, -0x7164($gp)
    ctx->pc = 0x1e56b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938268)));
label_1e56bc:
    // 0x1e56bc: 0x1c3202a  slt         $a0, $t6, $v1
    ctx->pc = 0x1e56bcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1e56c0:
    // 0x1e56c0: 0x1480ffdf  bnez        $a0, . + 4 + (-0x21 << 2)
label_1e56c4:
    if (ctx->pc == 0x1E56C4u) {
        ctx->pc = 0x1E56C8u;
        goto label_1e56c8;
    }
    ctx->pc = 0x1E56C0u;
    {
        const bool branch_taken_0x1e56c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e56c0) {
            ctx->pc = 0x1E5640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5640;
        }
    }
    ctx->pc = 0x1E56C8u;
label_1e56c8:
    // 0x1e56c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e56c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e56cc:
    // 0x1e56cc: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x1e56ccu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e56d0:
    // 0x1e56d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e56d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e56d4:
    // 0x1e56d4: 0x3c090025  lui         $t1, 0x25
    ctx->pc = 0x1e56d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)37 << 16));
label_1e56d8:
    // 0x1e56d8: 0x3c06004b  lui         $a2, 0x4B
    ctx->pc = 0x1e56d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)75 << 16));
label_1e56dc:
    // 0x1e56dc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1e56dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e56e0:
    // 0x1e56e0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1e56e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e56e4:
    // 0x1e56e4: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x1e56e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e56e8:
    // 0x1e56e8: 0x25293420  addiu       $t1, $t1, 0x3420
    ctx->pc = 0x1e56e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 13344));
label_1e56ec:
    // 0x1e56ec: 0x24c63120  addiu       $a2, $a2, 0x3120
    ctx->pc = 0x1e56ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12576));
label_1e56f0:
    // 0x1e56f0: 0x27ac0060  addiu       $t4, $sp, 0x60
    ctx->pc = 0x1e56f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1e56f4:
    // 0x1e56f4: 0x240b0008  addiu       $t3, $zero, 0x8
    ctx->pc = 0x1e56f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1e56f8:
    // 0x1e56f8: 0x18f2821  addu        $a1, $t4, $t7
    ctx->pc = 0x1e56f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
label_1e56fc:
    // 0x1e56fc: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x1e56fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e5700:
    // 0x1e5700: 0x122b0020  beq         $s1, $t3, . + 4 + (0x20 << 2)
label_1e5704:
    if (ctx->pc == 0x1E5704u) {
        ctx->pc = 0x1E5708u;
        goto label_1e5708;
    }
    ctx->pc = 0x1E5700u;
    {
        const bool branch_taken_0x1e5700 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 11));
        if (branch_taken_0x1e5700) {
            ctx->pc = 0x1E5784u;
            goto label_1e5784;
        }
    }
    ctx->pc = 0x1E5708u;
label_1e5708:
    // 0x1e5708: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e5708u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e570c:
    // 0x1e570c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1e570cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5710:
    // 0x1e5710: 0x10000015  b           . + 4 + (0x15 << 2)
label_1e5714:
    if (ctx->pc == 0x1E5714u) {
        ctx->pc = 0x1E5714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5710u;
        // 0x1e5714: 0x200702d  daddu       $t6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5718u;
        goto label_1e5718;
    }
    ctx->pc = 0x1E5710u;
    {
        const bool branch_taken_0x1e5710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5710u;
        // 0x1e5714: 0x200702d  daddu       $t6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5710) {
            ctx->pc = 0x1E5768u;
            goto label_1e5768;
        }
    }
    ctx->pc = 0x1E5718u;
label_1e5718:
    // 0x1e5718: 0x14d2821  addu        $a1, $t2, $t5
    ctx->pc = 0x1e5718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
label_1e571c:
    // 0x1e571c: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x1e571cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e5720:
    // 0x1e5720: 0x1322821  addu        $a1, $t1, $s2
    ctx->pc = 0x1e5720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 18)));
label_1e5724:
    // 0x1e5724: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x1e5724u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1e5728:
    // 0x1e5728: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_1e572c:
    if (ctx->pc == 0x1E572Cu) {
        ctx->pc = 0x1E5730u;
        goto label_1e5730;
    }
    ctx->pc = 0x1E5728u;
    {
        const bool branch_taken_0x1e5728 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5728) {
            ctx->pc = 0x1E5744u;
            goto label_1e5744;
        }
    }
    ctx->pc = 0x1E5730u;
label_1e5730:
    // 0x1e5730: 0x10a80004  beq         $a1, $t0, . + 4 + (0x4 << 2)
label_1e5734:
    if (ctx->pc == 0x1E5734u) {
        ctx->pc = 0x1E5738u;
        goto label_1e5738;
    }
    ctx->pc = 0x1E5730u;
    {
        const bool branch_taken_0x1e5730 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 8));
        if (branch_taken_0x1e5730) {
            ctx->pc = 0x1E5744u;
            goto label_1e5744;
        }
    }
    ctx->pc = 0x1E5738u;
label_1e5738:
    // 0x1e5738: 0x10a70002  beq         $a1, $a3, . + 4 + (0x2 << 2)
label_1e573c:
    if (ctx->pc == 0x1E573Cu) {
        ctx->pc = 0x1E5740u;
        goto label_1e5740;
    }
    ctx->pc = 0x1E5738u;
    {
        const bool branch_taken_0x1e5738 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x1e5738) {
            ctx->pc = 0x1E5744u;
            goto label_1e5744;
        }
    }
    ctx->pc = 0x1E5740u;
label_1e5740:
    // 0x1e5740: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1e5740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1e5744:
    // 0x1e5744: 0x0  nop
    ctx->pc = 0x1e5744u;
    // NOP
label_1e5748:
    // 0x1e5748: 0x16250005  bne         $s1, $a1, . + 4 + (0x5 << 2)
label_1e574c:
    if (ctx->pc == 0x1E574Cu) {
        ctx->pc = 0x1E5750u;
        goto label_1e5750;
    }
    ctx->pc = 0x1E5748u;
    {
        const bool branch_taken_0x1e5748 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        if (branch_taken_0x1e5748) {
            ctx->pc = 0x1E5760u;
            goto label_1e5760;
        }
    }
    ctx->pc = 0x1E5750u;
label_1e5750:
    // 0x1e5750: 0xce2821  addu        $a1, $a2, $t6
    ctx->pc = 0x1e5750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
label_1e5754:
    // 0x1e5754: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1e5754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1e5758:
    // 0x1e5758: 0xacb20000  sw          $s2, 0x0($a1)
    ctx->pc = 0x1e5758u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 18));
label_1e575c:
    // 0x1e575c: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x1e575cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
label_1e5760:
    // 0x1e5760: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x1e5760u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
label_1e5764:
    // 0x1e5764: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e5764u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1e5768:
    // 0x1e5768: 0x263282a  slt         $a1, $s3, $v1
    ctx->pc = 0x1e5768u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1e576c:
    // 0x1e576c: 0x14a0ffea  bnez        $a1, . + 4 + (-0x16 << 2)
label_1e5770:
    if (ctx->pc == 0x1E5770u) {
        ctx->pc = 0x1E5774u;
        goto label_1e5774;
    }
    ctx->pc = 0x1E576Cu;
    {
        const bool branch_taken_0x1e576c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e576c) {
            ctx->pc = 0x1E5718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5718;
        }
    }
    ctx->pc = 0x1E5774u;
label_1e5774:
    // 0x1e5774: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e5774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1e5778:
    // 0x1e5778: 0x28850008  slti        $a1, $a0, 0x8
    ctx->pc = 0x1e5778u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
label_1e577c:
    // 0x1e577c: 0x14a0ffde  bnez        $a1, . + 4 + (-0x22 << 2)
label_1e5780:
    if (ctx->pc == 0x1E5780u) {
        ctx->pc = 0x1E5780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E577Cu;
        // 0x1e5780: 0x25ef0004  addiu       $t7, $t7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5784u;
        goto label_1e5784;
    }
    ctx->pc = 0x1E577Cu;
    {
        const bool branch_taken_0x1e577c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E577Cu;
        // 0x1e5780: 0x25ef0004  addiu       $t7, $t7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e577c) {
            ctx->pc = 0x1E56F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e56f8;
        }
    }
    ctx->pc = 0x1E5784u;
label_1e5784:
    // 0x1e5784: 0x0  nop
    ctx->pc = 0x1e5784u;
    // NOP
label_1e5788:
    // 0x1e5788: 0x3c09004b  lui         $t1, 0x4B
    ctx->pc = 0x1e5788u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)75 << 16));
label_1e578c:
    // 0x1e578c: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x1e578cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
label_1e5790:
    // 0x1e5790: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x1e5790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
label_1e5794:
    // 0x1e5794: 0xaf808e7c  sw          $zero, -0x7184($gp)
    ctx->pc = 0x1e5794u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938236), GPR_U32(ctx, 0));
label_1e5798:
    // 0x1e5798: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1e5798u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e579c:
    // 0x1e579c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e579cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e57a0:
    // 0x1e57a0: 0x25293120  addiu       $t1, $t1, 0x3120
    ctx->pc = 0x1e57a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12576));
label_1e57a4:
    // 0x1e57a4: 0x25083420  addiu       $t0, $t0, 0x3420
    ctx->pc = 0x1e57a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13344));
label_1e57a8:
    // 0x1e57a8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1e57a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e57ac:
    // 0x1e57ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e57acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e57b0:
    // 0x1e57b0: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1e57b4:
    if (ctx->pc == 0x1E57B4u) {
        ctx->pc = 0x1E57B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E57B0u;
        // 0x1e57b4: 0x24a53110  addiu       $a1, $a1, 0x3110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E57B8u;
        goto label_1e57b8;
    }
    ctx->pc = 0x1E57B0u;
    {
        const bool branch_taken_0x1e57b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E57B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E57B0u;
        // 0x1e57b4: 0x24a53110  addiu       $a1, $a1, 0x3110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e57b0) {
            ctx->pc = 0x1E5830u;
            goto label_1e5830;
        }
    }
    ctx->pc = 0x1E57B8u;
label_1e57b8:
    // 0x1e57b8: 0x12a2021  addu        $a0, $t1, $t2
    ctx->pc = 0x1e57b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_1e57bc:
    // 0x1e57bc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1e57bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e57c0:
    // 0x1e57c0: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x1e57c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_1e57c4:
    // 0x1e57c4: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1e57c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1e57c8:
    // 0x1e57c8: 0x1087000b  beq         $a0, $a3, . + 4 + (0xB << 2)
label_1e57cc:
    if (ctx->pc == 0x1E57CCu) {
        ctx->pc = 0x1E57D0u;
        goto label_1e57d0;
    }
    ctx->pc = 0x1E57C8u;
    {
        const bool branch_taken_0x1e57c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        if (branch_taken_0x1e57c8) {
            ctx->pc = 0x1E57F8u;
            goto label_1e57f8;
        }
    }
    ctx->pc = 0x1E57D0u;
label_1e57d0:
    // 0x1e57d0: 0x10860007  beq         $a0, $a2, . + 4 + (0x7 << 2)
label_1e57d4:
    if (ctx->pc == 0x1E57D4u) {
        ctx->pc = 0x1E57D8u;
        goto label_1e57d8;
    }
    ctx->pc = 0x1E57D0u;
    {
        const bool branch_taken_0x1e57d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x1e57d0) {
            ctx->pc = 0x1E57F0u;
            goto label_1e57f0;
        }
    }
    ctx->pc = 0x1E57D8u;
label_1e57d8:
    // 0x1e57d8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1e57dc:
    if (ctx->pc == 0x1E57DCu) {
        ctx->pc = 0x1E57E0u;
        goto label_1e57e0;
    }
    ctx->pc = 0x1E57D8u;
    {
        const bool branch_taken_0x1e57d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e57d8) {
            ctx->pc = 0x1E57E8u;
            goto label_1e57e8;
        }
    }
    ctx->pc = 0x1E57E0u;
label_1e57e0:
    // 0x1e57e0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e57e4:
    if (ctx->pc == 0x1E57E4u) {
        ctx->pc = 0x1E57E8u;
        goto label_1e57e8;
    }
    ctx->pc = 0x1E57E0u;
    {
        const bool branch_taken_0x1e57e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e57e0) {
            ctx->pc = 0x1E5800u;
            goto label_1e5800;
        }
    }
    ctx->pc = 0x1E57E8u;
label_1e57e8:
    // 0x1e57e8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e57ec:
    if (ctx->pc == 0x1E57ECu) {
        ctx->pc = 0x1E57ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E57E8u;
        // 0x1e57ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E57F0u;
        goto label_1e57f0;
    }
    ctx->pc = 0x1E57E8u;
    {
        const bool branch_taken_0x1e57e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E57ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E57E8u;
        // 0x1e57ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e57e8) {
            ctx->pc = 0x1E5804u;
            goto label_1e5804;
        }
    }
    ctx->pc = 0x1E57F0u;
label_1e57f0:
    // 0x1e57f0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e57f4:
    if (ctx->pc == 0x1E57F4u) {
        ctx->pc = 0x1E57F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E57F0u;
        // 0x1e57f4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E57F8u;
        goto label_1e57f8;
    }
    ctx->pc = 0x1E57F0u;
    {
        const bool branch_taken_0x1e57f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E57F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E57F0u;
        // 0x1e57f4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e57f0) {
            ctx->pc = 0x1E5804u;
            goto label_1e5804;
        }
    }
    ctx->pc = 0x1E57F8u;
label_1e57f8:
    // 0x1e57f8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e57fc:
    if (ctx->pc == 0x1E57FCu) {
        ctx->pc = 0x1E57FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E57F8u;
        // 0x1e57fc: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5800u;
        goto label_1e5800;
    }
    ctx->pc = 0x1E57F8u;
    {
        const bool branch_taken_0x1e57f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E57FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E57F8u;
        // 0x1e57fc: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e57f8) {
            ctx->pc = 0x1E5804u;
            goto label_1e5804;
        }
    }
    ctx->pc = 0x1E5800u;
label_1e5800:
    // 0x1e5800: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e5800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e5804:
    // 0x1e5804: 0x0  nop
    ctx->pc = 0x1e5804u;
    // NOP
label_1e5808:
    // 0x1e5808: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1e5808u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1e580c:
    // 0x1e580c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1e580cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1e5810:
    // 0x1e5810: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1e5810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5814:
    // 0x1e5814: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e5818:
    if (ctx->pc == 0x1E5818u) {
        ctx->pc = 0x1E581Cu;
        goto label_1e581c;
    }
    ctx->pc = 0x1E5814u;
    {
        const bool branch_taken_0x1e5814 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5814) {
            ctx->pc = 0x1E5828u;
            goto label_1e5828;
        }
    }
    ctx->pc = 0x1E581Cu;
label_1e581c:
    // 0x1e581c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e581cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5820:
    // 0x1e5820: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e5824:
    if (ctx->pc == 0x1E5824u) {
        ctx->pc = 0x1E5824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5820u;
        // 0x1e5824: 0xaf848e7c  sw          $a0, -0x7184($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938236), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5828u;
        goto label_1e5828;
    }
    ctx->pc = 0x1E5820u;
    {
        const bool branch_taken_0x1e5820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5820u;
        // 0x1e5824: 0xaf848e7c  sw          $a0, -0x7184($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938236), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5820) {
            ctx->pc = 0x1E583Cu;
            goto label_1e583c;
        }
    }
    ctx->pc = 0x1E5828u;
label_1e5828:
    // 0x1e5828: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x1e5828u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_1e582c:
    // 0x1e582c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1e582cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1e5830:
    // 0x1e5830: 0x163202a  slt         $a0, $t3, $v1
    ctx->pc = 0x1e5830u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1e5834:
    // 0x1e5834: 0x1480ffe1  bnez        $a0, . + 4 + (-0x1F << 2)
label_1e5838:
    if (ctx->pc == 0x1E5838u) {
        ctx->pc = 0x1E5838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5834u;
        // 0x1e5838: 0x12a2021  addu        $a0, $t1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E583Cu;
        goto label_1e583c;
    }
    ctx->pc = 0x1E5834u;
    {
        const bool branch_taken_0x1e5834 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5834u;
        // 0x1e5838: 0x12a2021  addu        $a0, $t1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5834) {
            ctx->pc = 0x1E57BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e57bc;
        }
    }
    ctx->pc = 0x1E583Cu;
label_1e583c:
    // 0x1e583c: 0x0  nop
    ctx->pc = 0x1e583cu;
    // NOP
label_1e5840:
    // 0x1e5840: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e5840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e5844:
    // 0x1e5844: 0x8c253120  lw          $a1, 0x3120($at)
    ctx->pc = 0x1e5844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 12576)));
label_1e5848:
    // 0x1e5848: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1e5848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_1e584c:
    // 0x1e584c: 0x24843420  addiu       $a0, $a0, 0x3420
    ctx->pc = 0x1e584cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13344));
label_1e5850:
    // 0x1e5850: 0xaf808e78  sw          $zero, -0x7188($gp)
    ctx->pc = 0x1e5850u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938232), GPR_U32(ctx, 0));
label_1e5854:
    // 0x1e5854: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1e5854u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e5858:
    // 0x1e5858: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1e5858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1e585c:
    // 0x1e585c: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1e585cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5860:
    // 0x1e5860: 0x1089000d  beq         $a0, $t1, . + 4 + (0xD << 2)
label_1e5864:
    if (ctx->pc == 0x1E5864u) {
        ctx->pc = 0x1E5864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5860u;
        // 0x1e5864: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5868u;
        goto label_1e5868;
    }
    ctx->pc = 0x1E5860u;
    {
        const bool branch_taken_0x1e5860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 9));
        ctx->pc = 0x1E5864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5860u;
        // 0x1e5864: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5860) {
            ctx->pc = 0x1E5898u;
            goto label_1e5898;
        }
    }
    ctx->pc = 0x1E5868u;
label_1e5868:
    // 0x1e5868: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1e5868u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e586c:
    // 0x1e586c: 0x10890009  beq         $a0, $t1, . + 4 + (0x9 << 2)
label_1e5870:
    if (ctx->pc == 0x1E5870u) {
        ctx->pc = 0x1E5874u;
        goto label_1e5874;
    }
    ctx->pc = 0x1E586Cu;
    {
        const bool branch_taken_0x1e586c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 9));
        if (branch_taken_0x1e586c) {
            ctx->pc = 0x1E5894u;
            goto label_1e5894;
        }
    }
    ctx->pc = 0x1E5874u;
label_1e5874:
    // 0x1e5874: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e5878:
    if (ctx->pc == 0x1E5878u) {
        ctx->pc = 0x1E5878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5874u;
        // 0x1e5878: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E587Cu;
        goto label_1e587c;
    }
    ctx->pc = 0x1E5874u;
    {
        const bool branch_taken_0x1e5874 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5874u;
        // 0x1e5878: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5874) {
            ctx->pc = 0x1E5888u;
            goto label_1e5888;
        }
    }
    ctx->pc = 0x1E587Cu;
label_1e587c:
    // 0x1e587c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e5880:
    if (ctx->pc == 0x1E5880u) {
        ctx->pc = 0x1E5880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E587Cu;
        // 0x1e5880: 0x24090003  addiu       $t1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5884u;
        goto label_1e5884;
    }
    ctx->pc = 0x1E587Cu;
    {
        const bool branch_taken_0x1e587c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E587Cu;
        // 0x1e5880: 0x24090003  addiu       $t1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e587c) {
            ctx->pc = 0x1E5894u;
            goto label_1e5894;
        }
    }
    ctx->pc = 0x1E5884u;
label_1e5884:
    // 0x1e5884: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e5884u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5888:
    // 0x1e5888: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e588c:
    if (ctx->pc == 0x1E588Cu) {
        ctx->pc = 0x1E5890u;
        goto label_1e5890;
    }
    ctx->pc = 0x1E5888u;
    {
        const bool branch_taken_0x1e5888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5888) {
            ctx->pc = 0x1E5894u;
            goto label_1e5894;
        }
    }
    ctx->pc = 0x1E5890u;
label_1e5890:
    // 0x1e5890: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x1e5890u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e5894:
    // 0x1e5894: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1e5894u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5898:
    // 0x1e5898: 0x3c08004b  lui         $t0, 0x4B
    ctx->pc = 0x1e5898u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)75 << 16));
label_1e589c:
    // 0x1e589c: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x1e589cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
label_1e58a0:
    // 0x1e58a0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1e58a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e58a4:
    // 0x1e58a4: 0x25083120  addiu       $t0, $t0, 0x3120
    ctx->pc = 0x1e58a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12576));
label_1e58a8:
    // 0x1e58a8: 0x24e73420  addiu       $a3, $a3, 0x3420
    ctx->pc = 0x1e58a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13344));
label_1e58ac:
    // 0x1e58ac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1e58acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e58b0:
    // 0x1e58b0: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1e58b4:
    if (ctx->pc == 0x1E58B4u) {
        ctx->pc = 0x1E58B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E58B0u;
        // 0x1e58b4: 0x160282d  daddu       $a1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E58B8u;
        goto label_1e58b8;
    }
    ctx->pc = 0x1E58B0u;
    {
        const bool branch_taken_0x1e58b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E58B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E58B0u;
        // 0x1e58b4: 0x160282d  daddu       $a1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e58b0) {
            ctx->pc = 0x1E5924u;
            goto label_1e5924;
        }
    }
    ctx->pc = 0x1E58B8u;
label_1e58b8:
    // 0x1e58b8: 0x10a2021  addu        $a0, $t0, $t2
    ctx->pc = 0x1e58b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
label_1e58bc:
    // 0x1e58bc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1e58bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e58c0:
    // 0x1e58c0: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x1e58c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_1e58c4:
    // 0x1e58c4: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1e58c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1e58c8:
    // 0x1e58c8: 0x1086000b  beq         $a0, $a2, . + 4 + (0xB << 2)
label_1e58cc:
    if (ctx->pc == 0x1E58CCu) {
        ctx->pc = 0x1E58D0u;
        goto label_1e58d0;
    }
    ctx->pc = 0x1E58C8u;
    {
        const bool branch_taken_0x1e58c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x1e58c8) {
            ctx->pc = 0x1E58F8u;
            goto label_1e58f8;
        }
    }
    ctx->pc = 0x1E58D0u;
label_1e58d0:
    // 0x1e58d0: 0x10850007  beq         $a0, $a1, . + 4 + (0x7 << 2)
label_1e58d4:
    if (ctx->pc == 0x1E58D4u) {
        ctx->pc = 0x1E58D8u;
        goto label_1e58d8;
    }
    ctx->pc = 0x1E58D0u;
    {
        const bool branch_taken_0x1e58d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1e58d0) {
            ctx->pc = 0x1E58F0u;
            goto label_1e58f0;
        }
    }
    ctx->pc = 0x1E58D8u;
label_1e58d8:
    // 0x1e58d8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1e58dc:
    if (ctx->pc == 0x1E58DCu) {
        ctx->pc = 0x1E58E0u;
        goto label_1e58e0;
    }
    ctx->pc = 0x1E58D8u;
    {
        const bool branch_taken_0x1e58d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e58d8) {
            ctx->pc = 0x1E58E8u;
            goto label_1e58e8;
        }
    }
    ctx->pc = 0x1E58E0u;
label_1e58e0:
    // 0x1e58e0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e58e4:
    if (ctx->pc == 0x1E58E4u) {
        ctx->pc = 0x1E58E8u;
        goto label_1e58e8;
    }
    ctx->pc = 0x1E58E0u;
    {
        const bool branch_taken_0x1e58e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e58e0) {
            ctx->pc = 0x1E5900u;
            goto label_1e5900;
        }
    }
    ctx->pc = 0x1E58E8u;
label_1e58e8:
    // 0x1e58e8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e58ec:
    if (ctx->pc == 0x1E58ECu) {
        ctx->pc = 0x1E58ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E58E8u;
        // 0x1e58ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E58F0u;
        goto label_1e58f0;
    }
    ctx->pc = 0x1E58E8u;
    {
        const bool branch_taken_0x1e58e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E58ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E58E8u;
        // 0x1e58ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e58e8) {
            ctx->pc = 0x1E5904u;
            goto label_1e5904;
        }
    }
    ctx->pc = 0x1E58F0u;
label_1e58f0:
    // 0x1e58f0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e58f4:
    if (ctx->pc == 0x1E58F4u) {
        ctx->pc = 0x1E58F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E58F0u;
        // 0x1e58f4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E58F8u;
        goto label_1e58f8;
    }
    ctx->pc = 0x1E58F0u;
    {
        const bool branch_taken_0x1e58f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E58F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E58F0u;
        // 0x1e58f4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e58f0) {
            ctx->pc = 0x1E5904u;
            goto label_1e5904;
        }
    }
    ctx->pc = 0x1E58F8u;
label_1e58f8:
    // 0x1e58f8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e58fc:
    if (ctx->pc == 0x1E58FCu) {
        ctx->pc = 0x1E58FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E58F8u;
        // 0x1e58fc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5900u;
        goto label_1e5900;
    }
    ctx->pc = 0x1E58F8u;
    {
        const bool branch_taken_0x1e58f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E58FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E58F8u;
        // 0x1e58fc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e58f8) {
            ctx->pc = 0x1E5904u;
            goto label_1e5904;
        }
    }
    ctx->pc = 0x1E5900u;
label_1e5900:
    // 0x1e5900: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e5900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e5904:
    // 0x1e5904: 0x0  nop
    ctx->pc = 0x1e5904u;
    // NOP
label_1e5908:
    // 0x1e5908: 0x11240004  beq         $t1, $a0, . + 4 + (0x4 << 2)
label_1e590c:
    if (ctx->pc == 0x1E590Cu) {
        ctx->pc = 0x1E5910u;
        goto label_1e5910;
    }
    ctx->pc = 0x1E5908u;
    {
        const bool branch_taken_0x1e5908 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 4));
        if (branch_taken_0x1e5908) {
            ctx->pc = 0x1E591Cu;
            goto label_1e591c;
        }
    }
    ctx->pc = 0x1E5910u;
label_1e5910:
    // 0x1e5910: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e5910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5914:
    // 0x1e5914: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e5918:
    if (ctx->pc == 0x1E5918u) {
        ctx->pc = 0x1E5918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5914u;
        // 0x1e5918: 0xaf838e78  sw          $v1, -0x7188($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E591Cu;
        goto label_1e591c;
    }
    ctx->pc = 0x1E5914u;
    {
        const bool branch_taken_0x1e5914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5914u;
        // 0x1e5918: 0xaf838e78  sw          $v1, -0x7188($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5914) {
            ctx->pc = 0x1E5934u;
            goto label_1e5934;
        }
    }
    ctx->pc = 0x1E591Cu;
label_1e591c:
    // 0x1e591c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x1e591cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_1e5920:
    // 0x1e5920: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1e5920u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1e5924:
    // 0x1e5924: 0x0  nop
    ctx->pc = 0x1e5924u;
    // NOP
label_1e5928:
    // 0x1e5928: 0x163202a  slt         $a0, $t3, $v1
    ctx->pc = 0x1e5928u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1e592c:
    // 0x1e592c: 0x1480ffe3  bnez        $a0, . + 4 + (-0x1D << 2)
label_1e5930:
    if (ctx->pc == 0x1E5930u) {
        ctx->pc = 0x1E5930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E592Cu;
        // 0x1e5930: 0x10a2021  addu        $a0, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5934u;
        goto label_1e5934;
    }
    ctx->pc = 0x1E592Cu;
    {
        const bool branch_taken_0x1e592c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E592Cu;
        // 0x1e5930: 0x10a2021  addu        $a0, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e592c) {
            ctx->pc = 0x1E58BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e58bc;
        }
    }
    ctx->pc = 0x1E5934u;
label_1e5934:
    // 0x1e5934: 0x0  nop
    ctx->pc = 0x1e5934u;
    // NOP
label_1e5938:
    // 0x1e5938: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e5938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1e593c:
    // 0x1e593c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e593cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e5940:
    // 0x1e5940: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e5940u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e5944:
    // 0x1e5944: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e5944u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e5948:
    // 0x1e5948: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e5948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e594c:
    // 0x1e594c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e594cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e5950:
    // 0x1e5950: 0x3e00008  jr          $ra
label_1e5954:
    if (ctx->pc == 0x1E5954u) {
        ctx->pc = 0x1E5954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5950u;
        // 0x1e5954: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5958u;
        goto label_1e5958;
    }
    ctx->pc = 0x1E5950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5950u;
        // 0x1e5954: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5958u;
label_1e5958:
    // 0x1e5958: 0x0  nop
    ctx->pc = 0x1e5958u;
    // NOP
label_1e595c:
    // 0x1e595c: 0x0  nop
    ctx->pc = 0x1e595cu;
    // NOP
label_1e5960:
    // 0x1e5960: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e5960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1e5964:
    // 0x1e5964: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e5964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1e5968:
    // 0x1e5968: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e5968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e596c:
    // 0x1e596c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e596cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e5970:
    // 0x1e5970: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e5970u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e5974:
    // 0x1e5974: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e5974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e5978:
    // 0x1e5978: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1e5978u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e597c:
    // 0x1e597c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e597cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e5980:
    // 0x1e5980: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1e5980u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e5984:
    // 0x1e5984: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e5984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e5988:
    // 0x1e5988: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1e5988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e598c:
    // 0x1e598c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e598cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e5990:
    // 0x1e5990: 0xc0901c0  jal         func_240700
label_1e5994:
    if (ctx->pc == 0x1E5994u) {
        ctx->pc = 0x1E5994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5990u;
        // 0x1e5994: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5998u;
        goto label_1e5998;
    }
    ctx->pc = 0x1E5990u;
    SET_GPR_U32(ctx, 31, 0x1E5998u);
    ctx->pc = 0x1E5994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5990u;
    // 0x1e5994: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240700u;
    { ctx->pc = 0x240700; return; }
    ctx->pc = 0x1E5998u;
label_1e5998:
    // 0x1e5998: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_1e599c:
    if (ctx->pc == 0x1E599Cu) {
        ctx->pc = 0x1E59A0u;
        goto label_1e59a0;
    }
    ctx->pc = 0x1E5998u;
    {
        const bool branch_taken_0x1e5998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5998) {
            ctx->pc = 0x1E5AD8u;
            goto label_1e5ad8;
        }
    }
    ctx->pc = 0x1E59A0u;
label_1e59a0:
    // 0x1e59a0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1e59a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1e59a4:
    // 0x1e59a4: 0x1682001f  bne         $s4, $v0, . + 4 + (0x1F << 2)
label_1e59a8:
    if (ctx->pc == 0x1E59A8u) {
        ctx->pc = 0x1E59A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E59A4u;
        // 0x1e59a8: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E59ACu;
        goto label_1e59ac;
    }
    ctx->pc = 0x1E59A4u;
    {
        const bool branch_taken_0x1e59a4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E59A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E59A4u;
        // 0x1e59a8: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e59a4) {
            ctx->pc = 0x1E5A24u;
            goto label_1e5a24;
        }
    }
    ctx->pc = 0x1E59ACu;
label_1e59ac:
    // 0x1e59ac: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1e59acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1e59b0:
    // 0x1e59b0: 0x12620016  beq         $s3, $v0, . + 4 + (0x16 << 2)
label_1e59b4:
    if (ctx->pc == 0x1E59B4u) {
        ctx->pc = 0x1E59B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E59B0u;
        // 0x1e59b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E59B8u;
        goto label_1e59b8;
    }
    ctx->pc = 0x1E59B0u;
    {
        const bool branch_taken_0x1e59b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E59B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E59B0u;
        // 0x1e59b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e59b0) {
            ctx->pc = 0x1E5A0Cu;
            goto label_1e5a0c;
        }
    }
    ctx->pc = 0x1E59B8u;
label_1e59b8:
    // 0x1e59b8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1e59b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1e59bc:
    // 0x1e59bc: 0x12620012  beq         $s3, $v0, . + 4 + (0x12 << 2)
label_1e59c0:
    if (ctx->pc == 0x1E59C0u) {
        ctx->pc = 0x1E59C4u;
        goto label_1e59c4;
    }
    ctx->pc = 0x1E59BCu;
    {
        const bool branch_taken_0x1e59bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e59bc) {
            ctx->pc = 0x1E5A08u;
            goto label_1e5a08;
        }
    }
    ctx->pc = 0x1E59C4u;
label_1e59c4:
    // 0x1e59c4: 0x2662ffef  addiu       $v0, $s3, -0x11
    ctx->pc = 0x1e59c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967279));
label_1e59c8:
    // 0x1e59c8: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x1e59c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1e59cc:
    // 0x1e59cc: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_1e59d0:
    if (ctx->pc == 0x1E59D0u) {
        ctx->pc = 0x1E59D4u;
        goto label_1e59d4;
    }
    ctx->pc = 0x1E59CCu;
    {
        const bool branch_taken_0x1e59cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e59cc) {
            ctx->pc = 0x1E5A08u;
            goto label_1e5a08;
        }
    }
    ctx->pc = 0x1E59D4u;
label_1e59d4:
    // 0x1e59d4: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1e59d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_1e59d8:
    // 0x1e59d8: 0x1262000b  beq         $s3, $v0, . + 4 + (0xB << 2)
label_1e59dc:
    if (ctx->pc == 0x1E59DCu) {
        ctx->pc = 0x1E59E0u;
        goto label_1e59e0;
    }
    ctx->pc = 0x1E59D8u;
    {
        const bool branch_taken_0x1e59d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e59d8) {
            ctx->pc = 0x1E5A08u;
            goto label_1e5a08;
        }
    }
    ctx->pc = 0x1E59E0u;
label_1e59e0:
    // 0x1e59e0: 0x2662ffdd  addiu       $v0, $s3, -0x23
    ctx->pc = 0x1e59e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967261));
label_1e59e4:
    // 0x1e59e4: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x1e59e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1e59e8:
    // 0x1e59e8: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
label_1e59ec:
    if (ctx->pc == 0x1E59ECu) {
        ctx->pc = 0x1E59F0u;
        goto label_1e59f0;
    }
    ctx->pc = 0x1E59E8u;
    {
        const bool branch_taken_0x1e59e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e59e8) {
            ctx->pc = 0x1E5A08u;
            goto label_1e5a08;
        }
    }
    ctx->pc = 0x1E59F0u;
label_1e59f0:
    // 0x1e59f0: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x1e59f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_1e59f4:
    // 0x1e59f4: 0x12620004  beq         $s3, $v0, . + 4 + (0x4 << 2)
label_1e59f8:
    if (ctx->pc == 0x1E59F8u) {
        ctx->pc = 0x1E59FCu;
        goto label_1e59fc;
    }
    ctx->pc = 0x1E59F4u;
    {
        const bool branch_taken_0x1e59f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e59f4) {
            ctx->pc = 0x1E5A08u;
            goto label_1e5a08;
        }
    }
    ctx->pc = 0x1E59FCu;
label_1e59fc:
    // 0x1e59fc: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1e59fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1e5a00:
    // 0x1e5a00: 0x16620005  bne         $s3, $v0, . + 4 + (0x5 << 2)
label_1e5a04:
    if (ctx->pc == 0x1E5A04u) {
        ctx->pc = 0x1E5A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A00u;
        // 0x1e5a04: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5A08u;
        goto label_1e5a08;
    }
    ctx->pc = 0x1E5A00u;
    {
        const bool branch_taken_0x1e5a00 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E5A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A00u;
        // 0x1e5a04: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5a00) {
            ctx->pc = 0x1E5A18u;
            goto label_1e5a18;
        }
    }
    ctx->pc = 0x1E5A08u;
label_1e5a08:
    // 0x1e5a08: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e5a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5a0c:
    // 0x1e5a0c: 0x10000033  b           . + 4 + (0x33 << 2)
label_1e5a10:
    if (ctx->pc == 0x1E5A10u) {
        ctx->pc = 0x1E5A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A0Cu;
        // 0x1e5a10: 0x2682fff1  addiu       $v0, $s4, -0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967281));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5A14u;
        goto label_1e5a14;
    }
    ctx->pc = 0x1E5A0Cu;
    {
        const bool branch_taken_0x1e5a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A0Cu;
        // 0x1e5a10: 0x2682fff1  addiu       $v0, $s4, -0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967281));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5a0c) {
            ctx->pc = 0x1E5ADCu;
            goto label_1e5adc;
        }
    }
    ctx->pc = 0x1E5A14u;
label_1e5a14:
    // 0x1e5a14: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1e5a14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5a18:
    // 0x1e5a18: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1e5a1c:
    if (ctx->pc == 0x1E5A1Cu) {
        ctx->pc = 0x1E5A20u;
        goto label_1e5a20;
    }
    ctx->pc = 0x1E5A18u;
    {
        const bool branch_taken_0x1e5a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5a18) {
            ctx->pc = 0x1E5AD8u;
            goto label_1e5ad8;
        }
    }
    ctx->pc = 0x1E5A20u;
label_1e5a20:
    // 0x1e5a20: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1e5a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1e5a24:
    // 0x1e5a24: 0x16820017  bne         $s4, $v0, . + 4 + (0x17 << 2)
label_1e5a28:
    if (ctx->pc == 0x1E5A28u) {
        ctx->pc = 0x1E5A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A24u;
        // 0x1e5a28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5A2Cu;
        goto label_1e5a2c;
    }
    ctx->pc = 0x1E5A24u;
    {
        const bool branch_taken_0x1e5a24 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E5A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A24u;
        // 0x1e5a28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5a24) {
            ctx->pc = 0x1E5A84u;
            goto label_1e5a84;
        }
    }
    ctx->pc = 0x1E5A2Cu;
label_1e5a2c:
    // 0x1e5a2c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1e5a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1e5a30:
    // 0x1e5a30: 0x12620011  beq         $s3, $v0, . + 4 + (0x11 << 2)
label_1e5a34:
    if (ctx->pc == 0x1E5A34u) {
        ctx->pc = 0x1E5A38u;
        goto label_1e5a38;
    }
    ctx->pc = 0x1E5A30u;
    {
        const bool branch_taken_0x1e5a30 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e5a30) {
            ctx->pc = 0x1E5A78u;
            goto label_1e5a78;
        }
    }
    ctx->pc = 0x1E5A38u;
label_1e5a38:
    // 0x1e5a38: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1e5a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1e5a3c:
    // 0x1e5a3c: 0x1262000e  beq         $s3, $v0, . + 4 + (0xE << 2)
label_1e5a40:
    if (ctx->pc == 0x1E5A40u) {
        ctx->pc = 0x1E5A44u;
        goto label_1e5a44;
    }
    ctx->pc = 0x1E5A3Cu;
    {
        const bool branch_taken_0x1e5a3c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e5a3c) {
            ctx->pc = 0x1E5A78u;
            goto label_1e5a78;
        }
    }
    ctx->pc = 0x1E5A44u;
label_1e5a44:
    // 0x1e5a44: 0x2662ffef  addiu       $v0, $s3, -0x11
    ctx->pc = 0x1e5a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967279));
label_1e5a48:
    // 0x1e5a48: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x1e5a48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1e5a4c:
    // 0x1e5a4c: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
label_1e5a50:
    if (ctx->pc == 0x1E5A50u) {
        ctx->pc = 0x1E5A54u;
        goto label_1e5a54;
    }
    ctx->pc = 0x1E5A4Cu;
    {
        const bool branch_taken_0x1e5a4c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5a4c) {
            ctx->pc = 0x1E5A78u;
            goto label_1e5a78;
        }
    }
    ctx->pc = 0x1E5A54u;
label_1e5a54:
    // 0x1e5a54: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1e5a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_1e5a58:
    // 0x1e5a58: 0x12620007  beq         $s3, $v0, . + 4 + (0x7 << 2)
label_1e5a5c:
    if (ctx->pc == 0x1E5A5Cu) {
        ctx->pc = 0x1E5A60u;
        goto label_1e5a60;
    }
    ctx->pc = 0x1E5A58u;
    {
        const bool branch_taken_0x1e5a58 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e5a58) {
            ctx->pc = 0x1E5A78u;
            goto label_1e5a78;
        }
    }
    ctx->pc = 0x1E5A60u;
label_1e5a60:
    // 0x1e5a60: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x1e5a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1e5a64:
    // 0x1e5a64: 0x12620004  beq         $s3, $v0, . + 4 + (0x4 << 2)
label_1e5a68:
    if (ctx->pc == 0x1E5A68u) {
        ctx->pc = 0x1E5A6Cu;
        goto label_1e5a6c;
    }
    ctx->pc = 0x1E5A64u;
    {
        const bool branch_taken_0x1e5a64 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e5a64) {
            ctx->pc = 0x1E5A78u;
            goto label_1e5a78;
        }
    }
    ctx->pc = 0x1E5A6Cu;
label_1e5a6c:
    // 0x1e5a6c: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1e5a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1e5a70:
    // 0x1e5a70: 0x16620019  bne         $s3, $v0, . + 4 + (0x19 << 2)
label_1e5a74:
    if (ctx->pc == 0x1E5A74u) {
        ctx->pc = 0x1E5A78u;
        goto label_1e5a78;
    }
    ctx->pc = 0x1E5A70u;
    {
        const bool branch_taken_0x1e5a70 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e5a70) {
            ctx->pc = 0x1E5AD8u;
            goto label_1e5ad8;
        }
    }
    ctx->pc = 0x1E5A78u;
label_1e5a78:
    // 0x1e5a78: 0x10000017  b           . + 4 + (0x17 << 2)
label_1e5a7c:
    if (ctx->pc == 0x1E5A7Cu) {
        ctx->pc = 0x1E5A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A78u;
        // 0x1e5a7c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5A80u;
        goto label_1e5a80;
    }
    ctx->pc = 0x1E5A78u;
    {
        const bool branch_taken_0x1e5a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A78u;
        // 0x1e5a7c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5a78) {
            ctx->pc = 0x1E5AD8u;
            goto label_1e5ad8;
        }
    }
    ctx->pc = 0x1E5A80u;
label_1e5a80:
    // 0x1e5a80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5a84:
    // 0x1e5a84: 0x16420014  bne         $s2, $v0, . + 4 + (0x14 << 2)
label_1e5a88:
    if (ctx->pc == 0x1E5A88u) {
        ctx->pc = 0x1E5A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A84u;
        // 0x1e5a88: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5A8Cu;
        goto label_1e5a8c;
    }
    ctx->pc = 0x1E5A84u;
    {
        const bool branch_taken_0x1e5a84 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E5A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A84u;
        // 0x1e5a88: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5a84) {
            ctx->pc = 0x1E5AD8u;
            goto label_1e5ad8;
        }
    }
    ctx->pc = 0x1E5A8Cu;
label_1e5a8c:
    // 0x1e5a8c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1e5a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e5a90:
    // 0x1e5a90: 0x12820004  beq         $s4, $v0, . + 4 + (0x4 << 2)
label_1e5a94:
    if (ctx->pc == 0x1E5A94u) {
        ctx->pc = 0x1E5A98u;
        goto label_1e5a98;
    }
    ctx->pc = 0x1E5A90u;
    {
        const bool branch_taken_0x1e5a90 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e5a90) {
            ctx->pc = 0x1E5AA4u;
            goto label_1e5aa4;
        }
    }
    ctx->pc = 0x1E5A98u;
label_1e5a98:
    // 0x1e5a98: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1e5a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1e5a9c:
    // 0x1e5a9c: 0x1682000d  bne         $s4, $v0, . + 4 + (0xD << 2)
label_1e5aa0:
    if (ctx->pc == 0x1E5AA0u) {
        ctx->pc = 0x1E5AA4u;
        goto label_1e5aa4;
    }
    ctx->pc = 0x1E5A9Cu;
    {
        const bool branch_taken_0x1e5a9c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e5a9c) {
            ctx->pc = 0x1E5AD4u;
            goto label_1e5ad4;
        }
    }
    ctx->pc = 0x1E5AA4u;
label_1e5aa4:
    // 0x1e5aa4: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1e5aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_1e5aa8:
    // 0x1e5aa8: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x1e5aa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
label_1e5aac:
    // 0x1e5aac: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x1e5aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_1e5ab0:
    // 0x1e5ab0: 0x2442cc20  addiu       $v0, $v0, -0x33E0
    ctx->pc = 0x1e5ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954016));
label_1e5ab4:
    // 0x1e5ab4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e5ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e5ab8:
    // 0x1e5ab8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1e5ab8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_1e5abc:
    // 0x1e5abc: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x1e5abcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_1e5ac0:
    // 0x1e5ac0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1e5ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5ac4:
    // 0x1e5ac4: 0x901814  dsllv       $v1, $s0, $a0
    ctx->pc = 0x1e5ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (GPR_U32(ctx, 4) & 0x3F));
label_1e5ac8:
    // 0x1e5ac8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e5ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1e5acc:
    // 0x1e5acc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e5ad0:
    if (ctx->pc == 0x1E5AD0u) {
        ctx->pc = 0x1E5AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5ACCu;
        // 0x1e5ad0: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5AD4u;
        goto label_1e5ad4;
    }
    ctx->pc = 0x1E5ACCu;
    {
        const bool branch_taken_0x1e5acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5ACCu;
        // 0x1e5ad0: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5acc) {
            ctx->pc = 0x1E5AD8u;
            goto label_1e5ad8;
        }
    }
    ctx->pc = 0x1E5AD4u;
label_1e5ad4:
    // 0x1e5ad4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1e5ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5ad8:
    // 0x1e5ad8: 0x2682fff1  addiu       $v0, $s4, -0xF
    ctx->pc = 0x1e5ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967281));
label_1e5adc:
    // 0x1e5adc: 0x2c410003  sltiu       $at, $v0, 0x3
    ctx->pc = 0x1e5adcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1e5ae0:
    // 0x1e5ae0: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_1e5ae4:
    if (ctx->pc == 0x1E5AE4u) {
        ctx->pc = 0x1E5AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5AE0u;
        // 0x1e5ae4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5AE8u;
        goto label_1e5ae8;
    }
    ctx->pc = 0x1E5AE0u;
    {
        const bool branch_taken_0x1e5ae0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5AE0u;
        // 0x1e5ae4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5ae0) {
            ctx->pc = 0x1E5AF8u;
            goto label_1e5af8;
        }
    }
    ctx->pc = 0x1E5AE8u;
label_1e5ae8:
    // 0x1e5ae8: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1e5ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1e5aec:
    // 0x1e5aec: 0x1682000d  bne         $s4, $v0, . + 4 + (0xD << 2)
label_1e5af0:
    if (ctx->pc == 0x1E5AF0u) {
        ctx->pc = 0x1E5AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5AECu;
        // 0x1e5af0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5AF4u;
        goto label_1e5af4;
    }
    ctx->pc = 0x1E5AECu;
    {
        const bool branch_taken_0x1e5aec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E5AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5AECu;
        // 0x1e5af0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5aec) {
            ctx->pc = 0x1E5B24u;
            { ctx->pc = 0x1e5b24; return; }
        }
    }
    ctx->pc = 0x1E5AF4u;
label_1e5af4:
    // 0x1e5af4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1e5af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1e5af8:
    // 0x1e5af8: 0x16620009  bne         $s3, $v0, . + 4 + (0x9 << 2)
label_1e5afc:
    if (ctx->pc == 0x1E5AFCu) {
        ctx->pc = 0x1E5B00u;
        goto label_1e5b00;
    }
    ctx->pc = 0x1E5AF8u;
    {
        const bool branch_taken_0x1e5af8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e5af8) {
            ctx->pc = 0x1E5B20u;
            { ctx->pc = 0x1e5b20; return; }
        }
    }
    ctx->pc = 0x1E5B00u;
label_1e5b00:
    // 0x1e5b00: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x1e5b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_1e5b04:
    // 0x1e5b04: 0x8c22ccf8  lw          $v0, -0x3308($at)
    ctx->pc = 0x1e5b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954232)));
label_1e5b08:
    // 0x1e5b08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1e5b0c:
    if (ctx->pc == 0x1E5B0Cu) {
        ctx->pc = 0x1E5B10u;
        goto label_1e5b10;
    }
    ctx->pc = 0x1E5B08u;
    {
        const bool branch_taken_0x1e5b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5b08) {
            ctx->pc = 0x1E5B20u;
            { ctx->pc = 0x1e5b20; return; }
        }
    }
    ctx->pc = 0x1E5B10u;
label_1e5b10:
    // 0x1e5b10: 0x8f828db4  lw          $v0, -0x724C($gp)
    ctx->pc = 0x1e5b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938036)));
label_1e5b14:
    // 0x1e5b14: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1e5b18:
    if (ctx->pc == 0x1E5B18u) {
        ctx->pc = 0x1E5B1Cu;
        goto label_1e5b1c;
    }
    ctx->pc = 0x1E5B14u;
    {
        const bool branch_taken_0x1e5b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5b14) {
            ctx->pc = 0x1E5B20u;
            { ctx->pc = 0x1e5b20; return; }
        }
    }
    ctx->pc = 0x1E5B1Cu;
label_1e5b1c:
    // 0x1e5b1c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e5b1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1e5b20u;
    return;
}
