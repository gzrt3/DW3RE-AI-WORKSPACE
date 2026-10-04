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


void FUN_0014eba0_part735(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2b5200u: goto label_2b5200;
        case 0x2b5204u: goto label_2b5204;
        case 0x2b5208u: goto label_2b5208;
        case 0x2b520cu: goto label_2b520c;
        case 0x2b5210u: goto label_2b5210;
        case 0x2b5214u: goto label_2b5214;
        case 0x2b5218u: goto label_2b5218;
        case 0x2b521cu: goto label_2b521c;
        case 0x2b5220u: goto label_2b5220;
        case 0x2b5224u: goto label_2b5224;
        case 0x2b5228u: goto label_2b5228;
        case 0x2b522cu: goto label_2b522c;
        case 0x2b5230u: goto label_2b5230;
        case 0x2b5234u: goto label_2b5234;
        case 0x2b5238u: goto label_2b5238;
        case 0x2b523cu: goto label_2b523c;
        case 0x2b5240u: goto label_2b5240;
        case 0x2b5244u: goto label_2b5244;
        case 0x2b5248u: goto label_2b5248;
        case 0x2b524cu: goto label_2b524c;
        case 0x2b5250u: goto label_2b5250;
        case 0x2b5254u: goto label_2b5254;
        case 0x2b5258u: goto label_2b5258;
        case 0x2b525cu: goto label_2b525c;
        case 0x2b5260u: goto label_2b5260;
        case 0x2b5264u: goto label_2b5264;
        case 0x2b5268u: goto label_2b5268;
        case 0x2b526cu: goto label_2b526c;
        case 0x2b5270u: goto label_2b5270;
        case 0x2b5274u: goto label_2b5274;
        case 0x2b5278u: goto label_2b5278;
        case 0x2b527cu: goto label_2b527c;
        case 0x2b5280u: goto label_2b5280;
        case 0x2b5284u: goto label_2b5284;
        case 0x2b5288u: goto label_2b5288;
        case 0x2b528cu: goto label_2b528c;
        case 0x2b5290u: goto label_2b5290;
        case 0x2b5294u: goto label_2b5294;
        case 0x2b5298u: goto label_2b5298;
        case 0x2b529cu: goto label_2b529c;
        case 0x2b52a0u: goto label_2b52a0;
        case 0x2b52a4u: goto label_2b52a4;
        case 0x2b52a8u: goto label_2b52a8;
        case 0x2b52acu: goto label_2b52ac;
        case 0x2b52b0u: goto label_2b52b0;
        case 0x2b52b4u: goto label_2b52b4;
        case 0x2b52b8u: goto label_2b52b8;
        case 0x2b52bcu: goto label_2b52bc;
        case 0x2b52c0u: goto label_2b52c0;
        case 0x2b52c4u: goto label_2b52c4;
        case 0x2b52c8u: goto label_2b52c8;
        case 0x2b52ccu: goto label_2b52cc;
        case 0x2b52d0u: goto label_2b52d0;
        case 0x2b52d4u: goto label_2b52d4;
        case 0x2b52d8u: goto label_2b52d8;
        case 0x2b52dcu: goto label_2b52dc;
        case 0x2b52e0u: goto label_2b52e0;
        case 0x2b52e4u: goto label_2b52e4;
        case 0x2b52e8u: goto label_2b52e8;
        case 0x2b52ecu: goto label_2b52ec;
        case 0x2b52f0u: goto label_2b52f0;
        case 0x2b52f4u: goto label_2b52f4;
        case 0x2b52f8u: goto label_2b52f8;
        case 0x2b52fcu: goto label_2b52fc;
        case 0x2b5300u: goto label_2b5300;
        case 0x2b5304u: goto label_2b5304;
        case 0x2b5308u: goto label_2b5308;
        case 0x2b530cu: goto label_2b530c;
        case 0x2b5310u: goto label_2b5310;
        case 0x2b5314u: goto label_2b5314;
        case 0x2b5318u: goto label_2b5318;
        case 0x2b531cu: goto label_2b531c;
        case 0x2b5320u: goto label_2b5320;
        case 0x2b5324u: goto label_2b5324;
        case 0x2b5328u: goto label_2b5328;
        case 0x2b532cu: goto label_2b532c;
        case 0x2b5330u: goto label_2b5330;
        case 0x2b5334u: goto label_2b5334;
        case 0x2b5338u: goto label_2b5338;
        case 0x2b533cu: goto label_2b533c;
        case 0x2b5340u: goto label_2b5340;
        case 0x2b5344u: goto label_2b5344;
        case 0x2b5348u: goto label_2b5348;
        case 0x2b534cu: goto label_2b534c;
        case 0x2b5350u: goto label_2b5350;
        case 0x2b5354u: goto label_2b5354;
        case 0x2b5358u: goto label_2b5358;
        case 0x2b535cu: goto label_2b535c;
        case 0x2b5360u: goto label_2b5360;
        case 0x2b5364u: goto label_2b5364;
        case 0x2b5368u: goto label_2b5368;
        case 0x2b536cu: goto label_2b536c;
        case 0x2b5370u: goto label_2b5370;
        case 0x2b5374u: goto label_2b5374;
        case 0x2b5378u: goto label_2b5378;
        case 0x2b537cu: goto label_2b537c;
        case 0x2b5380u: goto label_2b5380;
        case 0x2b5384u: goto label_2b5384;
        case 0x2b5388u: goto label_2b5388;
        case 0x2b538cu: goto label_2b538c;
        case 0x2b5390u: goto label_2b5390;
        case 0x2b5394u: goto label_2b5394;
        case 0x2b5398u: goto label_2b5398;
        case 0x2b539cu: goto label_2b539c;
        case 0x2b53a0u: goto label_2b53a0;
        case 0x2b53a4u: goto label_2b53a4;
        case 0x2b53a8u: goto label_2b53a8;
        case 0x2b53acu: goto label_2b53ac;
        case 0x2b53b0u: goto label_2b53b0;
        case 0x2b53b4u: goto label_2b53b4;
        case 0x2b53b8u: goto label_2b53b8;
        case 0x2b53bcu: goto label_2b53bc;
        case 0x2b53c0u: goto label_2b53c0;
        case 0x2b53c4u: goto label_2b53c4;
        case 0x2b53c8u: goto label_2b53c8;
        case 0x2b53ccu: goto label_2b53cc;
        case 0x2b53d0u: goto label_2b53d0;
        case 0x2b53d4u: goto label_2b53d4;
        case 0x2b53d8u: goto label_2b53d8;
        case 0x2b53dcu: goto label_2b53dc;
        case 0x2b53e0u: goto label_2b53e0;
        case 0x2b53e4u: goto label_2b53e4;
        case 0x2b53e8u: goto label_2b53e8;
        case 0x2b53ecu: goto label_2b53ec;
        case 0x2b53f0u: goto label_2b53f0;
        case 0x2b53f4u: goto label_2b53f4;
        case 0x2b53f8u: goto label_2b53f8;
        case 0x2b53fcu: goto label_2b53fc;
        case 0x2b5400u: goto label_2b5400;
        case 0x2b5404u: goto label_2b5404;
        case 0x2b5408u: goto label_2b5408;
        case 0x2b540cu: goto label_2b540c;
        case 0x2b5410u: goto label_2b5410;
        case 0x2b5414u: goto label_2b5414;
        case 0x2b5418u: goto label_2b5418;
        case 0x2b541cu: goto label_2b541c;
        case 0x2b5420u: goto label_2b5420;
        case 0x2b5424u: goto label_2b5424;
        case 0x2b5428u: goto label_2b5428;
        case 0x2b542cu: goto label_2b542c;
        case 0x2b5430u: goto label_2b5430;
        case 0x2b5434u: goto label_2b5434;
        case 0x2b5438u: goto label_2b5438;
        case 0x2b543cu: goto label_2b543c;
        case 0x2b5440u: goto label_2b5440;
        case 0x2b5444u: goto label_2b5444;
        case 0x2b5448u: goto label_2b5448;
        case 0x2b544cu: goto label_2b544c;
        case 0x2b5450u: goto label_2b5450;
        case 0x2b5454u: goto label_2b5454;
        case 0x2b5458u: goto label_2b5458;
        case 0x2b545cu: goto label_2b545c;
        case 0x2b5460u: goto label_2b5460;
        case 0x2b5464u: goto label_2b5464;
        case 0x2b5468u: goto label_2b5468;
        case 0x2b546cu: goto label_2b546c;
        case 0x2b5470u: goto label_2b5470;
        case 0x2b5474u: goto label_2b5474;
        case 0x2b5478u: goto label_2b5478;
        case 0x2b547cu: goto label_2b547c;
        case 0x2b5480u: goto label_2b5480;
        case 0x2b5484u: goto label_2b5484;
        case 0x2b5488u: goto label_2b5488;
        case 0x2b548cu: goto label_2b548c;
        case 0x2b5490u: goto label_2b5490;
        case 0x2b5494u: goto label_2b5494;
        case 0x2b5498u: goto label_2b5498;
        case 0x2b549cu: goto label_2b549c;
        case 0x2b54a0u: goto label_2b54a0;
        case 0x2b54a4u: goto label_2b54a4;
        case 0x2b54a8u: goto label_2b54a8;
        case 0x2b54acu: goto label_2b54ac;
        case 0x2b54b0u: goto label_2b54b0;
        case 0x2b54b4u: goto label_2b54b4;
        case 0x2b54b8u: goto label_2b54b8;
        case 0x2b54bcu: goto label_2b54bc;
        case 0x2b54c0u: goto label_2b54c0;
        case 0x2b54c4u: goto label_2b54c4;
        case 0x2b54c8u: goto label_2b54c8;
        case 0x2b54ccu: goto label_2b54cc;
        case 0x2b54d0u: goto label_2b54d0;
        case 0x2b54d4u: goto label_2b54d4;
        case 0x2b54d8u: goto label_2b54d8;
        case 0x2b54dcu: goto label_2b54dc;
        case 0x2b54e0u: goto label_2b54e0;
        case 0x2b54e4u: goto label_2b54e4;
        case 0x2b54e8u: goto label_2b54e8;
        case 0x2b54ecu: goto label_2b54ec;
        case 0x2b54f0u: goto label_2b54f0;
        case 0x2b54f4u: goto label_2b54f4;
        case 0x2b54f8u: goto label_2b54f8;
        case 0x2b54fcu: goto label_2b54fc;
        case 0x2b5500u: goto label_2b5500;
        case 0x2b5504u: goto label_2b5504;
        case 0x2b5508u: goto label_2b5508;
        case 0x2b550cu: goto label_2b550c;
        case 0x2b5510u: goto label_2b5510;
        case 0x2b5514u: goto label_2b5514;
        case 0x2b5518u: goto label_2b5518;
        case 0x2b551cu: goto label_2b551c;
        case 0x2b5520u: goto label_2b5520;
        case 0x2b5524u: goto label_2b5524;
        case 0x2b5528u: goto label_2b5528;
        case 0x2b552cu: goto label_2b552c;
        case 0x2b5530u: goto label_2b5530;
        case 0x2b5534u: goto label_2b5534;
        case 0x2b5538u: goto label_2b5538;
        case 0x2b553cu: goto label_2b553c;
        case 0x2b5540u: goto label_2b5540;
        case 0x2b5544u: goto label_2b5544;
        case 0x2b5548u: goto label_2b5548;
        case 0x2b554cu: goto label_2b554c;
        case 0x2b5550u: goto label_2b5550;
        case 0x2b5554u: goto label_2b5554;
        case 0x2b5558u: goto label_2b5558;
        case 0x2b555cu: goto label_2b555c;
        case 0x2b5560u: goto label_2b5560;
        case 0x2b5564u: goto label_2b5564;
        case 0x2b5568u: goto label_2b5568;
        case 0x2b556cu: goto label_2b556c;
        case 0x2b5570u: goto label_2b5570;
        case 0x2b5574u: goto label_2b5574;
        case 0x2b5578u: goto label_2b5578;
        case 0x2b557cu: goto label_2b557c;
        case 0x2b5580u: goto label_2b5580;
        case 0x2b5584u: goto label_2b5584;
        case 0x2b5588u: goto label_2b5588;
        case 0x2b558cu: goto label_2b558c;
        case 0x2b5590u: goto label_2b5590;
        case 0x2b5594u: goto label_2b5594;
        case 0x2b5598u: goto label_2b5598;
        case 0x2b559cu: goto label_2b559c;
        case 0x2b55a0u: goto label_2b55a0;
        case 0x2b55a4u: goto label_2b55a4;
        case 0x2b55a8u: goto label_2b55a8;
        case 0x2b55acu: goto label_2b55ac;
        case 0x2b55b0u: goto label_2b55b0;
        case 0x2b55b4u: goto label_2b55b4;
        case 0x2b55b8u: goto label_2b55b8;
        case 0x2b55bcu: goto label_2b55bc;
        case 0x2b55c0u: goto label_2b55c0;
        case 0x2b55c4u: goto label_2b55c4;
        case 0x2b55c8u: goto label_2b55c8;
        case 0x2b55ccu: goto label_2b55cc;
        case 0x2b55d0u: goto label_2b55d0;
        case 0x2b55d4u: goto label_2b55d4;
        case 0x2b55d8u: goto label_2b55d8;
        case 0x2b55dcu: goto label_2b55dc;
        case 0x2b55e0u: goto label_2b55e0;
        case 0x2b55e4u: goto label_2b55e4;
        case 0x2b55e8u: goto label_2b55e8;
        case 0x2b55ecu: goto label_2b55ec;
        case 0x2b55f0u: goto label_2b55f0;
        case 0x2b55f4u: goto label_2b55f4;
        case 0x2b55f8u: goto label_2b55f8;
        case 0x2b55fcu: goto label_2b55fc;
        case 0x2b5600u: goto label_2b5600;
        case 0x2b5604u: goto label_2b5604;
        case 0x2b5608u: goto label_2b5608;
        case 0x2b560cu: goto label_2b560c;
        case 0x2b5610u: goto label_2b5610;
        case 0x2b5614u: goto label_2b5614;
        case 0x2b5618u: goto label_2b5618;
        case 0x2b561cu: goto label_2b561c;
        case 0x2b5620u: goto label_2b5620;
        case 0x2b5624u: goto label_2b5624;
        case 0x2b5628u: goto label_2b5628;
        case 0x2b562cu: goto label_2b562c;
        case 0x2b5630u: goto label_2b5630;
        case 0x2b5634u: goto label_2b5634;
        case 0x2b5638u: goto label_2b5638;
        case 0x2b563cu: goto label_2b563c;
        case 0x2b5640u: goto label_2b5640;
        case 0x2b5644u: goto label_2b5644;
        case 0x2b5648u: goto label_2b5648;
        case 0x2b564cu: goto label_2b564c;
        case 0x2b5650u: goto label_2b5650;
        case 0x2b5654u: goto label_2b5654;
        case 0x2b5658u: goto label_2b5658;
        case 0x2b565cu: goto label_2b565c;
        case 0x2b5660u: goto label_2b5660;
        case 0x2b5664u: goto label_2b5664;
        case 0x2b5668u: goto label_2b5668;
        case 0x2b566cu: goto label_2b566c;
        case 0x2b5670u: goto label_2b5670;
        case 0x2b5674u: goto label_2b5674;
        case 0x2b5678u: goto label_2b5678;
        case 0x2b567cu: goto label_2b567c;
        case 0x2b5680u: goto label_2b5680;
        case 0x2b5684u: goto label_2b5684;
        case 0x2b5688u: goto label_2b5688;
        case 0x2b568cu: goto label_2b568c;
        case 0x2b5690u: goto label_2b5690;
        case 0x2b5694u: goto label_2b5694;
        case 0x2b5698u: goto label_2b5698;
        case 0x2b569cu: goto label_2b569c;
        case 0x2b56a0u: goto label_2b56a0;
        case 0x2b56a4u: goto label_2b56a4;
        case 0x2b56a8u: goto label_2b56a8;
        case 0x2b56acu: goto label_2b56ac;
        case 0x2b56b0u: goto label_2b56b0;
        case 0x2b56b4u: goto label_2b56b4;
        case 0x2b56b8u: goto label_2b56b8;
        case 0x2b56bcu: goto label_2b56bc;
        case 0x2b56c0u: goto label_2b56c0;
        case 0x2b56c4u: goto label_2b56c4;
        case 0x2b56c8u: goto label_2b56c8;
        case 0x2b56ccu: goto label_2b56cc;
        case 0x2b56d0u: goto label_2b56d0;
        case 0x2b56d4u: goto label_2b56d4;
        case 0x2b56d8u: goto label_2b56d8;
        case 0x2b56dcu: goto label_2b56dc;
        case 0x2b56e0u: goto label_2b56e0;
        case 0x2b56e4u: goto label_2b56e4;
        case 0x2b56e8u: goto label_2b56e8;
        case 0x2b56ecu: goto label_2b56ec;
        case 0x2b56f0u: goto label_2b56f0;
        case 0x2b56f4u: goto label_2b56f4;
        case 0x2b56f8u: goto label_2b56f8;
        case 0x2b56fcu: goto label_2b56fc;
        case 0x2b5700u: goto label_2b5700;
        case 0x2b5704u: goto label_2b5704;
        case 0x2b5708u: goto label_2b5708;
        case 0x2b570cu: goto label_2b570c;
        case 0x2b5710u: goto label_2b5710;
        case 0x2b5714u: goto label_2b5714;
        case 0x2b5718u: goto label_2b5718;
        case 0x2b571cu: goto label_2b571c;
        case 0x2b5720u: goto label_2b5720;
        case 0x2b5724u: goto label_2b5724;
        case 0x2b5728u: goto label_2b5728;
        case 0x2b572cu: goto label_2b572c;
        case 0x2b5730u: goto label_2b5730;
        case 0x2b5734u: goto label_2b5734;
        case 0x2b5738u: goto label_2b5738;
        case 0x2b573cu: goto label_2b573c;
        case 0x2b5740u: goto label_2b5740;
        case 0x2b5744u: goto label_2b5744;
        case 0x2b5748u: goto label_2b5748;
        case 0x2b574cu: goto label_2b574c;
        case 0x2b5750u: goto label_2b5750;
        case 0x2b5754u: goto label_2b5754;
        case 0x2b5758u: goto label_2b5758;
        case 0x2b575cu: goto label_2b575c;
        case 0x2b5760u: goto label_2b5760;
        case 0x2b5764u: goto label_2b5764;
        case 0x2b5768u: goto label_2b5768;
        case 0x2b576cu: goto label_2b576c;
        case 0x2b5770u: goto label_2b5770;
        case 0x2b5774u: goto label_2b5774;
        case 0x2b5778u: goto label_2b5778;
        case 0x2b577cu: goto label_2b577c;
        case 0x2b5780u: goto label_2b5780;
        case 0x2b5784u: goto label_2b5784;
        case 0x2b5788u: goto label_2b5788;
        case 0x2b578cu: goto label_2b578c;
        case 0x2b5790u: goto label_2b5790;
        case 0x2b5794u: goto label_2b5794;
        case 0x2b5798u: goto label_2b5798;
        case 0x2b579cu: goto label_2b579c;
        case 0x2b57a0u: goto label_2b57a0;
        case 0x2b57a4u: goto label_2b57a4;
        case 0x2b57a8u: goto label_2b57a8;
        case 0x2b57acu: goto label_2b57ac;
        case 0x2b57b0u: goto label_2b57b0;
        case 0x2b57b4u: goto label_2b57b4;
        case 0x2b57b8u: goto label_2b57b8;
        case 0x2b57bcu: goto label_2b57bc;
        case 0x2b57c0u: goto label_2b57c0;
        case 0x2b57c4u: goto label_2b57c4;
        case 0x2b57c8u: goto label_2b57c8;
        case 0x2b57ccu: goto label_2b57cc;
        case 0x2b57d0u: goto label_2b57d0;
        case 0x2b57d4u: goto label_2b57d4;
        case 0x2b57d8u: goto label_2b57d8;
        case 0x2b57dcu: goto label_2b57dc;
        case 0x2b57e0u: goto label_2b57e0;
        case 0x2b57e4u: goto label_2b57e4;
        case 0x2b57e8u: goto label_2b57e8;
        case 0x2b57ecu: goto label_2b57ec;
        case 0x2b57f0u: goto label_2b57f0;
        case 0x2b57f4u: goto label_2b57f4;
        case 0x2b57f8u: goto label_2b57f8;
        case 0x2b57fcu: goto label_2b57fc;
        case 0x2b5800u: goto label_2b5800;
        case 0x2b5804u: goto label_2b5804;
        case 0x2b5808u: goto label_2b5808;
        case 0x2b580cu: goto label_2b580c;
        case 0x2b5810u: goto label_2b5810;
        case 0x2b5814u: goto label_2b5814;
        case 0x2b5818u: goto label_2b5818;
        case 0x2b581cu: goto label_2b581c;
        case 0x2b5820u: goto label_2b5820;
        case 0x2b5824u: goto label_2b5824;
        case 0x2b5828u: goto label_2b5828;
        case 0x2b582cu: goto label_2b582c;
        case 0x2b5830u: goto label_2b5830;
        case 0x2b5834u: goto label_2b5834;
        case 0x2b5838u: goto label_2b5838;
        case 0x2b583cu: goto label_2b583c;
        case 0x2b5840u: goto label_2b5840;
        case 0x2b5844u: goto label_2b5844;
        case 0x2b5848u: goto label_2b5848;
        case 0x2b584cu: goto label_2b584c;
        case 0x2b5850u: goto label_2b5850;
        case 0x2b5854u: goto label_2b5854;
        case 0x2b5858u: goto label_2b5858;
        case 0x2b585cu: goto label_2b585c;
        case 0x2b5860u: goto label_2b5860;
        case 0x2b5864u: goto label_2b5864;
        case 0x2b5868u: goto label_2b5868;
        case 0x2b586cu: goto label_2b586c;
        case 0x2b5870u: goto label_2b5870;
        case 0x2b5874u: goto label_2b5874;
        case 0x2b5878u: goto label_2b5878;
        case 0x2b587cu: goto label_2b587c;
        case 0x2b5880u: goto label_2b5880;
        case 0x2b5884u: goto label_2b5884;
        case 0x2b5888u: goto label_2b5888;
        case 0x2b588cu: goto label_2b588c;
        case 0x2b5890u: goto label_2b5890;
        case 0x2b5894u: goto label_2b5894;
        case 0x2b5898u: goto label_2b5898;
        case 0x2b589cu: goto label_2b589c;
        case 0x2b58a0u: goto label_2b58a0;
        case 0x2b58a4u: goto label_2b58a4;
        case 0x2b58a8u: goto label_2b58a8;
        case 0x2b58acu: goto label_2b58ac;
        case 0x2b58b0u: goto label_2b58b0;
        case 0x2b58b4u: goto label_2b58b4;
        case 0x2b58b8u: goto label_2b58b8;
        case 0x2b58bcu: goto label_2b58bc;
        case 0x2b58c0u: goto label_2b58c0;
        case 0x2b58c4u: goto label_2b58c4;
        case 0x2b58c8u: goto label_2b58c8;
        case 0x2b58ccu: goto label_2b58cc;
        case 0x2b58d0u: goto label_2b58d0;
        case 0x2b58d4u: goto label_2b58d4;
        case 0x2b58d8u: goto label_2b58d8;
        case 0x2b58dcu: goto label_2b58dc;
        case 0x2b58e0u: goto label_2b58e0;
        case 0x2b58e4u: goto label_2b58e4;
        case 0x2b58e8u: goto label_2b58e8;
        case 0x2b58ecu: goto label_2b58ec;
        case 0x2b58f0u: goto label_2b58f0;
        case 0x2b58f4u: goto label_2b58f4;
        case 0x2b58f8u: goto label_2b58f8;
        case 0x2b58fcu: goto label_2b58fc;
        case 0x2b5900u: goto label_2b5900;
        case 0x2b5904u: goto label_2b5904;
        case 0x2b5908u: goto label_2b5908;
        case 0x2b590cu: goto label_2b590c;
        case 0x2b5910u: goto label_2b5910;
        case 0x2b5914u: goto label_2b5914;
        case 0x2b5918u: goto label_2b5918;
        case 0x2b591cu: goto label_2b591c;
        case 0x2b5920u: goto label_2b5920;
        case 0x2b5924u: goto label_2b5924;
        case 0x2b5928u: goto label_2b5928;
        case 0x2b592cu: goto label_2b592c;
        case 0x2b5930u: goto label_2b5930;
        case 0x2b5934u: goto label_2b5934;
        case 0x2b5938u: goto label_2b5938;
        case 0x2b593cu: goto label_2b593c;
        case 0x2b5940u: goto label_2b5940;
        case 0x2b5944u: goto label_2b5944;
        case 0x2b5948u: goto label_2b5948;
        case 0x2b594cu: goto label_2b594c;
        case 0x2b5950u: goto label_2b5950;
        case 0x2b5954u: goto label_2b5954;
        case 0x2b5958u: goto label_2b5958;
        case 0x2b595cu: goto label_2b595c;
        case 0x2b5960u: goto label_2b5960;
        case 0x2b5964u: goto label_2b5964;
        case 0x2b5968u: goto label_2b5968;
        case 0x2b596cu: goto label_2b596c;
        case 0x2b5970u: goto label_2b5970;
        case 0x2b5974u: goto label_2b5974;
        case 0x2b5978u: goto label_2b5978;
        case 0x2b597cu: goto label_2b597c;
        case 0x2b5980u: goto label_2b5980;
        case 0x2b5984u: goto label_2b5984;
        case 0x2b5988u: goto label_2b5988;
        case 0x2b598cu: goto label_2b598c;
        case 0x2b5990u: goto label_2b5990;
        case 0x2b5994u: goto label_2b5994;
        case 0x2b5998u: goto label_2b5998;
        case 0x2b599cu: goto label_2b599c;
        case 0x2b59a0u: goto label_2b59a0;
        case 0x2b59a4u: goto label_2b59a4;
        case 0x2b59a8u: goto label_2b59a8;
        case 0x2b59acu: goto label_2b59ac;
        case 0x2b59b0u: goto label_2b59b0;
        case 0x2b59b4u: goto label_2b59b4;
        case 0x2b59b8u: goto label_2b59b8;
        case 0x2b59bcu: goto label_2b59bc;
        case 0x2b59c0u: goto label_2b59c0;
        case 0x2b59c4u: goto label_2b59c4;
        case 0x2b59c8u: goto label_2b59c8;
        case 0x2b59ccu: goto label_2b59cc;
        default: return;
    }

label_2b5200:
    // 0x2b5200: 0x81e51b7c  lb          $a1, 0x1B7C($t7)
    ctx->pc = 0x2b5200u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2b5204:
    // 0x2b5204: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5204u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5208:
    // 0x2b5208: 0x81e61b7c  lb          $a2, 0x1B7C($t7)
    ctx->pc = 0x2b5208u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2b520c:
    // 0x2b520c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b520cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5210:
    // 0x2b5210: 0x81f01b7c  lb          $s0, 0x1B7C($t7)
    ctx->pc = 0x2b5210u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2b5214:
    // 0x2b5214: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5214u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5218:
    // 0x2b5218: 0x22000000  addi        $zero, $s0, 0x0
    ctx->pc = 0x2b5218u;
    // NOP (addi to $zero)
label_2b521c:
    // 0x2b521c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b521cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5220:
    // 0x2b5220: 0x81e52b7d  lb          $a1, 0x2B7D($t7)
    ctx->pc = 0x2b5220u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 11133)));
label_2b5224:
    // 0x2b5224: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5224u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5228:
    // 0x2b5228: 0x81e6337d  lb          $a2, 0x337D($t7)
    ctx->pc = 0x2b5228u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 13181)));
label_2b522c:
    // 0x2b522c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b522cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5230:
    // 0x2b5230: 0x901800  .word       0x00901800                   # sll         $v1, $s0, 0 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 0));
label_2b5234:
    // 0x2b5234: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5234u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5238:
    // 0x2b5238: 0x81f11b7c  lb          $s1, 0x1B7C($t7)
    ctx->pc = 0x2b5238u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2b523c:
    // 0x2b523c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b523cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5240:
    // 0x2b5240: 0x81e61b7c  lb          $a2, 0x1B7C($t7)
    ctx->pc = 0x2b5240u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2b5244:
    // 0x2b5244: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5244u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5248:
    // 0x2b5248: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5248u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b524c:
    // 0x2b524c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b524cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5250:
    // 0x2b5250: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5250u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5254:
    // 0x2b5254: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5254u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5258:
    // 0x2b5258: 0x80918b3d  lb          $s1, -0x74C3($a0)
    ctx->pc = 0x2b5258u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294937405)));
label_2b525c:
    // 0x2b525c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b525cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5260:
    // 0x2b5260: 0x8051033d  lb          $s1, 0x33D($v0)
    ctx->pc = 0x2b5260u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2b5264:
    // 0x2b5264: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5264u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5268:
    // 0x2b5268: 0x8046033d  lb          $a2, 0x33D($v0)
    ctx->pc = 0x2b5268u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2b526c:
    // 0x2b526c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b526cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5270:
    // 0x2b5270: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5270u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5274:
    // 0x2b5274: 0x1f009bc  .word       0x01F009BC                   # dsll32      $at, $s0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5274u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 16) << (32 + 6));
label_2b5278:
    // 0x2b5278: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5278u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b527c:
    // 0x2b527c: 0x1f010bd  .word       0x01F010BD                   # INVALID     $t7, $s0, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b527cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B527C raw=0x01F010BD");
 /* MITIGATED */
label_2b5280:
    // 0x2b5280: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5280u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5284:
    // 0x2b5284: 0x1f018be  .word       0x01F018BE                   # dsrl32      $v1, $s0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) >> (32 + 2));
label_2b5288:
    // 0x2b5288: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5288u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b528c:
    // 0x2b528c: 0x1e0270b  .word       0x01E0270B                   # movn        $a0, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b528cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
label_2b5290:
    // 0x2b5290: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5290u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5294:
    // 0x2b5294: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5294u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5298:
    // 0x2b5298: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5298u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b529c:
    // 0x2b529c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b529cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b52a0:
    // 0x2b52a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b52a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b52a4:
    // 0x2b52a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b52a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b52a8:
    // 0x2b52a8: 0x81fc03bc  lb          $gp, 0x3BC($t7)
    ctx->pc = 0x2b52a8u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2b52ac:
    // 0x2b52ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b52acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b52b0:
    // 0x2b52b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b52b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b52b4:
    // 0x2b52b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b52b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b52b8:
    // 0x2b52b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b52b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b52bc:
    // 0x2b52bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b52bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b52c0:
    // 0x2b52c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b52c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b52c4:
    // 0x2b52c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b52c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b52c8:
    // 0x2b52c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b52c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b52cc:
    // 0x2b52cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b52ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b52d0:
    // 0x2b52d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b52d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b52d4:
    // 0x2b52d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b52d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b52d8:
    // 0x2b52d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b52d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b52dc:
    // 0x2b52dc: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b52dcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2b52e0:
    // 0x2b52e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b52e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b52e4:
    // 0x2b52e4: 0x20f721  .word       0x0020F721                   # addu        $fp, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b52e4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2b52e8:
    // 0x2b52e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b52e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b52ec:
    // 0x2b52ec: 0x1c0e7dc  .word       0x01C0E7DC                   # dmult       $t6, $zero # 0000E7C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b52ecu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B52EC raw=0x01C0E7DC");
 /* MITIGATED */
label_2b52f0:
    // 0x2b52f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b52f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b52f4:
    // 0x2b52f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b52f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b52f8:
    // 0x2b52f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b52f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b52fc:
    // 0x2b52fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b52fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5300:
    // 0x2b5300: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5300u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5304:
    // 0x2b5304: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5304u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5308:
    // 0x2b5308: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5308u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b530c:
    // 0x2b530c: 0x20e7df  .word       0x0020E7DF                   # ddivu       $gp, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b530cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2B530C raw=0x0020E7DF");
 /* MITIGATED */
label_2b5310:
    // 0x2b5310: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5310u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5314:
    // 0x2b5314: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5314u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5318:
    // 0x2b5318: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5318u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b531c:
    // 0x2b531c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b531cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5320:
    // 0x2b5320: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5320u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5324:
    // 0x2b5324: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5324u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5328:
    // 0x2b5328: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5328u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b532c:
    // 0x2b532c: 0x20ffd0  .word       0x0020FFD0                   # mfhi        $ra # 002007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b532cu;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_2b5330:
    // 0x2b5330: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5330u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5334:
    // 0x2b5334: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5334u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5338:
    // 0x2b5338: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5338u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b533c:
    // 0x2b533c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b533cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5340:
    // 0x2b5340: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5340u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5344:
    // 0x2b5344: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5344u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5348:
    // 0x2b5348: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5348u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b534c:
    // 0x2b534c: 0x1faf97d  .word       0x01FAF97D                   # INVALID     $t7, $k0, -0x683 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b534cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B534C raw=0x01FAF97D");
 /* MITIGATED */
label_2b5350:
    // 0x2b5350: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5350u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5354:
    // 0x2b5354: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5354u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5358:
    // 0x2b5358: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5358u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b535c:
    // 0x2b535c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b535cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5360:
    // 0x2b5360: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5360u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5364:
    // 0x2b5364: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5364u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5368:
    // 0x2b5368: 0x3e5d002  .word       0x03E5D002                   # srl         $k0, $a1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5368u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 5), 0));
label_2b536c:
    // 0x2b536c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b536cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5370:
    // 0x2b5370: 0x3e6d002  .word       0x03E6D002                   # srl         $k0, $a2, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5370u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 6), 0));
label_2b5374:
    // 0x2b5374: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5374u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5378:
    // 0x2b5378: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5378u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b537c:
    // 0x2b537c: 0x1c08c5c  .word       0x01C08C5C                   # dmult       $t6, $zero # 00008C40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b537cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B537C raw=0x01C08C5C");
 /* MITIGATED */
label_2b5380:
    // 0x2b5380: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5380u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5384:
    // 0x2b5384: 0x1c0319c  .word       0x01C0319C                   # dmult       $t6, $zero # 00003180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5384u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B5384 raw=0x01C0319C");
 /* MITIGATED */
label_2b5388:
    // 0x2b5388: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5388u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b538c:
    // 0x2b538c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b538cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5390:
    // 0x2b5390: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5390u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5394:
    // 0x2b5394: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5394u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5398:
    // 0x2b5398: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5398u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b539c:
    // 0x2b539c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b539cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b53a0:
    // 0x2b53a0: 0x3e58800  .word       0x03E58800                   # sll         $s1, $a1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b53a0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
label_2b53a4:
    // 0x2b53a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b53a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b53a8:
    // 0x2b53a8: 0x3e63000  .word       0x03E63000                   # sll         $a2, $a2, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b53a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 0));
label_2b53ac:
    // 0x2b53ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b53acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b53b0:
    // 0x2b53b0: 0x81f41b7c  lb          $s4, 0x1B7C($t7)
    ctx->pc = 0x2b53b0u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2b53b4:
    // 0x2b53b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b53b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b53b8:
    // 0x2b53b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b53b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b53bc:
    // 0x2b53bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b53bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b53c0:
    // 0x2b53c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b53c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b53c4:
    // 0x2b53c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b53c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b53c8:
    // 0x2b53c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b53c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b53cc:
    // 0x2b53cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b53ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b53d0:
    // 0x2b53d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b53d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b53d4:
    // 0x2b53d4: 0x1cba52a  .word       0x01CBA52A                   # slt         $s4, $t6, $t3 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b53d4u;
    SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_2b53d8:
    // 0x2b53d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b53d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b53dc:
    // 0x2b53dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b53dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b53e0:
    // 0x2b53e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b53e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b53e4:
    // 0x2b53e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b53e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b53e8:
    // 0x2b53e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b53e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b53ec:
    // 0x2b53ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b53ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b53f0:
    // 0x2b53f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b53f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b53f4:
    // 0x2b53f4: 0x1e0a51f  .word       0x01E0A51F                   # ddivu       $s4, $t7, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b53f4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2B53F4 raw=0x01E0A51F");
 /* MITIGATED */
label_2b53f8:
    // 0x2b53f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b53f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b53fc:
    // 0x2b53fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b53fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5400:
    // 0x2b5400: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5400u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5404:
    // 0x2b5404: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5404u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5408:
    // 0x2b5408: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5408u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b540c:
    // 0x2b540c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b540cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5410:
    // 0x2b5410: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5410u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5414:
    // 0x2b5414: 0x1f4a17c  .word       0x01F4A17C                   # dsll32      $s4, $s4, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5414u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 5));
label_2b5418:
    // 0x2b5418: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5418u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b541c:
    // 0x2b541c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b541cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5420:
    // 0x2b5420: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5420u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5424:
    // 0x2b5424: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5424u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5428:
    // 0x2b5428: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5428u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b542c:
    // 0x2b542c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b542cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5430:
    // 0x2b5430: 0x2255001  .word       0x02255001                   # INVALID     $s1, $a1, 0x5001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5430u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B5430 raw=0x02255001");
 /* MITIGATED */
label_2b5434:
    // 0x2b5434: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5434u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5438:
    // 0x2b5438: 0x3c5a001  .word       0x03C5A001                   # INVALID     $fp, $a1, -0x5FFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5438u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B5438 raw=0x03C5A001");
 /* MITIGATED */
label_2b543c:
    // 0x2b543c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b543cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5440:
    // 0x2b5440: 0x3e6a001  .word       0x03E6A001                   # INVALID     $ra, $a2, -0x5FFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5440u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B5440 raw=0x03E6A001");
 /* MITIGATED */
label_2b5444:
    // 0x2b5444: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5444u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5448:
    // 0x2b5448: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5448u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b544c:
    // 0x2b544c: 0x1f061bc  .word       0x01F061BC                   # dsll32      $t4, $s0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b544cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 16) << (32 + 6));
label_2b5450:
    // 0x2b5450: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5450u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5454:
    // 0x2b5454: 0x1f068bd  .word       0x01F068BD                   # INVALID     $t7, $s0, 0x68BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5454u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B5454 raw=0x01F068BD");
 /* MITIGATED */
label_2b5458:
    // 0x2b5458: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5458u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b545c:
    // 0x2b545c: 0x1f070be  .word       0x01F070BE                   # dsrl32      $t6, $s0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b545cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 16) >> (32 + 2));
label_2b5460:
    // 0x2b5460: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5460u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5464:
    // 0x2b5464: 0x1e07c8b  .word       0x01E07C8B                   # movn        $t7, $t7, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5464u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 15));
label_2b5468:
    // 0x2b5468: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5468u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b546c:
    // 0x2b546c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b546cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5470:
    // 0x2b5470: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5470u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5474:
    // 0x2b5474: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5474u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5478:
    // 0x2b5478: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5478u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b547c:
    // 0x2b547c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b547cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5480:
    // 0x2b5480: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5480u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5484:
    // 0x2b5484: 0x1d291ff  .word       0x01D291FF                   # dsra32      $s2, $s2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5484u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 7));
label_2b5488:
    // 0x2b5488: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5488u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b548c:
    // 0x2b548c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b548cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5490:
    // 0x2b5490: 0x8062d3fc  lb          $v0, -0x2C04($v1)
    ctx->pc = 0x2b5490u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294956028)));
label_2b5494:
    // 0x2b5494: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5494u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5498:
    // 0x2b5498: 0x10052803  beq         $zero, $a1, . + 4 + (0x2803 << 2)
label_2b549c:
    if (ctx->pc == 0x2B549Cu) {
        ctx->pc = 0x2B549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5498u;
        // 0x2b549c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B54A0u;
        goto label_2b54a0;
    }
    ctx->pc = 0x2B5498u;
    {
        const bool branch_taken_0x2b5498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5498u;
        // 0x2b549c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5498) {
            ctx->pc = 0x2BF4A8u;
            { ctx->pc = 0x2bf4a8; return; }
        }
    }
    ctx->pc = 0x2B54A0u;
label_2b54a0:
    // 0x2b54a0: 0x10063003  beq         $zero, $a2, . + 4 + (0x3003 << 2)
label_2b54a4:
    if (ctx->pc == 0x2B54A4u) {
        ctx->pc = 0x2B54A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B54A0u;
        // 0x2b54a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B54A8u;
        goto label_2b54a8;
    }
    ctx->pc = 0x2B54A0u;
    {
        const bool branch_taken_0x2b54a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B54A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B54A0u;
        // 0x2b54a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b54a0) {
            ctx->pc = 0x2C14B0u;
            { ctx->pc = 0x2c14b0; return; }
        }
    }
    ctx->pc = 0x2B54A8u;
label_2b54a8:
    // 0x2b54a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b54a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b54ac:
    // 0x2b54ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b54acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b54b0:
    // 0x2b54b0: 0x5201001c  beql        $s0, $at, . + 4 + (0x1C << 2)
label_2b54b4:
    if (ctx->pc == 0x2B54B4u) {
        ctx->pc = 0x2B54B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B54B0u;
        // 0x2b54b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B54B8u;
        goto label_2b54b8;
    }
    ctx->pc = 0x2B54B0u;
    {
        const bool branch_taken_0x2b54b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b54b0) {
            ctx->pc = 0x2B54B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B54B0u;
            // 0x2b54b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5524u;
            goto label_2b5524;
        }
    }
    ctx->pc = 0x2B54B8u;
label_2b54b8:
    // 0x2b54b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b54b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b54bc:
    // 0x2b54bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b54bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b54c0:
    // 0x2b54c0: 0x10042001  beq         $zero, $a0, . + 4 + (0x2001 << 2)
label_2b54c4:
    if (ctx->pc == 0x2B54C4u) {
        ctx->pc = 0x2B54C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B54C0u;
        // 0x2b54c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B54C8u;
        goto label_2b54c8;
    }
    ctx->pc = 0x2B54C0u;
    {
        const bool branch_taken_0x2b54c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B54C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B54C0u;
        // 0x2b54c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b54c0) {
            ctx->pc = 0x2BD4C8u;
            { ctx->pc = 0x2bd4c8; return; }
        }
    }
    ctx->pc = 0x2B54C8u;
label_2b54c8:
    // 0x2b54c8: 0x10020001  beq         $zero, $v0, . + 4 + (0x1 << 2)
label_2b54cc:
    if (ctx->pc == 0x2B54CCu) {
        ctx->pc = 0x2B54CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B54C8u;
        // 0x2b54cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B54D0u;
        goto label_2b54d0;
    }
    ctx->pc = 0x2B54C8u;
    {
        const bool branch_taken_0x2b54c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B54CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B54C8u;
        // 0x2b54cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b54c8) {
            ctx->pc = 0x2B54D0u;
            goto label_2b54d0;
        }
    }
    ctx->pc = 0x2B54D0u;
label_2b54d0:
    // 0x2b54d0: 0x800410b4  lb          $a0, 0x10B4($zero)
    ctx->pc = 0x2b54d0u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x10B4u));
label_2b54d4:
    // 0x2b54d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b54d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b54d8:
    // 0x2b54d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b54d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b54dc:
    // 0x2b54dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b54dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b54e0:
    // 0x2b54e0: 0x50020004  beql        $zero, $v0, . + 4 + (0x4 << 2)
label_2b54e4:
    if (ctx->pc == 0x2B54E4u) {
        ctx->pc = 0x2B54E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B54E0u;
        // 0x2b54e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B54E8u;
        goto label_2b54e8;
    }
    ctx->pc = 0x2B54E0u;
    {
        const bool branch_taken_0x2b54e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b54e0) {
            ctx->pc = 0x2B54E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B54E0u;
            // 0x2b54e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B54F4u;
            goto label_2b54f4;
        }
    }
    ctx->pc = 0x2B54E8u;
label_2b54e8:
    // 0x2b54e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b54e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b54ec:
    // 0x2b54ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b54ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b54f0:
    // 0x2b54f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b54f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b54f4:
    // 0x2b54f4: 0x558428  .word       0x00558428                   # mfsa        $s0 # 00550400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b54f4u;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_2b54f8:
    // 0x2b54f8: 0x40000003  .word       0x40000003                   # mfc0        $zero, Index # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b54f8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b54fc:
    // 0x2b54fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b54fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5500:
    // 0x2b5500: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5500u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5504:
    // 0x2b5504: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5504u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5508:
    // 0x2b5508: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5508u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b550c:
    // 0x2b550c: 0x155842c  .word       0x0155842C                   # dadd        $s0, $t2, $s5 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b550cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 10); int64_t b = (int64_t)GPR_S64(ctx, 21); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_2b5510:
    // 0x2b5510: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5510u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5514:
    // 0x2b5514: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5514u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5518:
    // 0x2b5518: 0x800c67f2  lb          $t4, 0x67F2($zero)
    ctx->pc = 0x2b5518u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x67F2u));
label_2b551c:
    // 0x2b551c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b551cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5520:
    // 0x2b5520: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5520u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5524:
    // 0x2b5524: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5524u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5528:
    // 0x2b5528: 0x520c07a0  beql        $s0, $t4, . + 4 + (0x7A0 << 2)
label_2b552c:
    if (ctx->pc == 0x2B552Cu) {
        ctx->pc = 0x2B552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5528u;
        // 0x2b552c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5530u;
        goto label_2b5530;
    }
    ctx->pc = 0x2B5528u;
    {
        const bool branch_taken_0x2b5528 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        if (branch_taken_0x2b5528) {
            ctx->pc = 0x2B552Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5528u;
            // 0x2b552c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B73ACu;
            { ctx->pc = 0x2b73ac; return; }
        }
    }
    ctx->pc = 0x2B5530u;
label_2b5530:
    // 0x2b5530: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5530u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5534:
    // 0x2b5534: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5534u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5538:
    // 0x2b5538: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b5538u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b553c:
    // 0x2b553c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b553cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5540:
    // 0x2b5540: 0x904100a  j           func_4104028
label_2b5544:
    if (ctx->pc == 0x2B5544u) {
        ctx->pc = 0x2B5544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5540u;
        // 0x2b5544: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5548u;
        goto label_2b5548;
    }
    ctx->pc = 0x2B5540u;
    ctx->pc = 0x2B5544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5540u;
    // 0x2b5544: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4104028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4104028u, 0x2B5540u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B5548u;
label_2b5548:
    // 0x2b5548: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5548u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b554c:
    // 0x2b554c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b554cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5550:
    // 0x2b5550: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5550u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5554:
    // 0x2b5554: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5554u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5558:
    // 0x2b5558: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5558u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b555c:
    // 0x2b555c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b555cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5560:
    // 0x2b5560: 0x12042001  beq         $s0, $a0, . + 4 + (0x2001 << 2)
label_2b5564:
    if (ctx->pc == 0x2B5564u) {
        ctx->pc = 0x2B5564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5560u;
        // 0x2b5564: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5568u;
        goto label_2b5568;
    }
    ctx->pc = 0x2B5560u;
    {
        const bool branch_taken_0x2b5560 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B5564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5560u;
        // 0x2b5564: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5560) {
            ctx->pc = 0x2BD568u;
            { ctx->pc = 0x2bd568; return; }
        }
    }
    ctx->pc = 0x2B5568u;
label_2b5568:
    // 0x2b5568: 0xb04100a  j           func_C104028
label_2b556c:
    if (ctx->pc == 0x2B556Cu) {
        ctx->pc = 0x2B556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5568u;
        // 0x2b556c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5570u;
        goto label_2b5570;
    }
    ctx->pc = 0x2B5568u;
    ctx->pc = 0x2B556Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5568u;
    // 0x2b556c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC104028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC104028u, 0x2B5568u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B5570u;
label_2b5570:
    // 0x2b5570: 0x5a00278d  blezl       $s0, . + 4 + (0x278D << 2)
label_2b5574:
    if (ctx->pc == 0x2B5574u) {
        ctx->pc = 0x2B5574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5570u;
        // 0x2b5574: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5578u;
        goto label_2b5578;
    }
    ctx->pc = 0x2B5570u;
    {
        const bool branch_taken_0x2b5570 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b5570) {
            ctx->pc = 0x2B5574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5570u;
            // 0x2b5574: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF3A8u;
            { ctx->pc = 0x2bf3a8; return; }
        }
    }
    ctx->pc = 0x2B5578u;
label_2b5578:
    // 0x2b5578: 0x100210ca  beq         $zero, $v0, . + 4 + (0x10CA << 2)
label_2b557c:
    if (ctx->pc == 0x2B557Cu) {
        ctx->pc = 0x2B557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5578u;
        // 0x2b557c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5580u;
        goto label_2b5580;
    }
    ctx->pc = 0x2B5578u;
    {
        const bool branch_taken_0x2b5578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5578u;
        // 0x2b557c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5578) {
            ctx->pc = 0x2B98A4u;
            { ctx->pc = 0x2b98a4; return; }
        }
    }
    ctx->pc = 0x2B5580u;
label_2b5580:
    // 0x2b5580: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2b5580u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2b5584:
    // 0x2b5584: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5584u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5588:
    // 0x2b5588: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5588u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b558c:
    // 0x2b558c: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b558cu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b5590:
    // 0x2b5590: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5590u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5594:
    // 0x2b5594: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5594u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5598:
    // 0x2b5598: 0x11e117ff  beq         $t7, $at, . + 4 + (0x17FF << 2)
label_2b559c:
    if (ctx->pc == 0x2B559Cu) {
        ctx->pc = 0x2B559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5598u;
        // 0x2b559c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B55A0u;
        goto label_2b55a0;
    }
    ctx->pc = 0x2B5598u;
    {
        const bool branch_taken_0x2b5598 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 1));
        ctx->pc = 0x2B559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5598u;
        // 0x2b559c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5598) {
            ctx->pc = 0x2BB598u;
            { ctx->pc = 0x2bb598; return; }
        }
    }
    ctx->pc = 0x2B55A0u;
label_2b55a0:
    // 0x2b55a0: 0x80010872  lb          $at, 0x872($zero)
    ctx->pc = 0x2b55a0u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x872u));
label_2b55a4:
    // 0x2b55a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b55a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b55a8:
    // 0x2b55a8: 0xa212fff  j           func_884BFFC
label_2b55ac:
    if (ctx->pc == 0x2B55ACu) {
        ctx->pc = 0x2B55ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B55A8u;
        // 0x2b55ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B55B0u;
        goto label_2b55b0;
    }
    ctx->pc = 0x2B55A8u;
    ctx->pc = 0x2B55ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B55A8u;
    // 0x2b55ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x884BFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x884BFFCu, 0x2B55A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B55B0u;
label_2b55b0:
    // 0x2b55b0: 0xa2137ff  j           func_884DFFC
label_2b55b4:
    if (ctx->pc == 0x2B55B4u) {
        ctx->pc = 0x2B55B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B55B0u;
        // 0x2b55b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B55B8u;
        goto label_2b55b8;
    }
    ctx->pc = 0x2B55B0u;
    ctx->pc = 0x2B55B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B55B0u;
    // 0x2b55b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x884DFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x884DFFCu, 0x2B55B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B55B8u;
label_2b55b8:
    // 0x2b55b8: 0x400007e0  .word       0x400007E0                   # mfc0        $zero, Index # 000007E0 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b55b8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b55bc:
    // 0x2b55bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b55bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b55c0:
    // 0x2b55c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b55c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b55c4:
    // 0x2b55c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b55c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b55c8:
    // 0x2b55c8: 0x0  nop
    ctx->pc = 0x2b55c8u;
    // NOP
label_2b55cc:
    // 0x2b55cc: 0x0  nop
    ctx->pc = 0x2b55ccu;
    // NOP
label_2b55d0:
    // 0x2b55d0: 0x0  nop
    ctx->pc = 0x2b55d0u;
    // NOP
label_2b55d4:
    // 0x2b55d4: 0x4a000000  vaddx       $vf0, $vf0, $vf0x
    ctx->pc = 0x2b55d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
label_2b55d8:
    // 0x2b55d8: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2b55d8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2b55dc:
    // 0x2b55dc: 0x3e0298  .word       0x003E0298                   # mult        $zero, $at, $fp # 00000280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b55dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2b55e0:
    // 0x2b55e0: 0x846080a  j           func_1182028
label_2b55e4:
    if (ctx->pc == 0x2B55E4u) {
        ctx->pc = 0x2B55E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B55E0u;
        // 0x2b55e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B55E8u;
        goto label_2b55e8;
    }
    ctx->pc = 0x2B55E0u;
    ctx->pc = 0x2B55E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B55E0u;
    // 0x2b55e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1182028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1182028u, 0x2B55E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B55E8u;
label_2b55e8:
    // 0x2b55e8: 0x100508ca  beq         $zero, $a1, . + 4 + (0x8CA << 2)
label_2b55ec:
    if (ctx->pc == 0x2B55ECu) {
        ctx->pc = 0x2B55ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B55E8u;
        // 0x2b55ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B55F0u;
        goto label_2b55f0;
    }
    ctx->pc = 0x2B55E8u;
    {
        const bool branch_taken_0x2b55e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B55ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B55E8u;
        // 0x2b55ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b55e8) {
            ctx->pc = 0x2B7914u;
            { ctx->pc = 0x2b7914; return; }
        }
    }
    ctx->pc = 0x2B55F0u;
label_2b55f0:
    // 0x2b55f0: 0x81f40b7c  lb          $s4, 0xB7C($t7)
    ctx->pc = 0x2b55f0u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b55f4:
    // 0x2b55f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b55f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b55f8:
    // 0x2b55f8: 0x81f50b7c  lb          $s5, 0xB7C($t7)
    ctx->pc = 0x2b55f8u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b55fc:
    // 0x2b55fc: 0x1ea517c  .word       0x01EA517C                   # dsll32      $t2, $t2, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b55fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 5));
label_2b5600:
    // 0x2b5600: 0x81f60b7c  lb          $s6, 0xB7C($t7)
    ctx->pc = 0x2b5600u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b5604:
    // 0x2b5604: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5604u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5608:
    // 0x2b5608: 0x81f70b7c  lb          $s7, 0xB7C($t7)
    ctx->pc = 0x2b5608u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b560c:
    // 0x2b560c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b560cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5610:
    // 0x2b5610: 0x81f80b7c  lb          $t8, 0xB7C($t7)
    ctx->pc = 0x2b5610u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b5614:
    // 0x2b5614: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5614u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5618:
    // 0x2b5618: 0x800629b0  lb          $a2, 0x29B0($zero)
    ctx->pc = 0x2b5618u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x29B0u));
label_2b561c:
    // 0x2b561c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b561cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5620:
    // 0x2b5620: 0x81e5a37d  lb          $a1, -0x5C83($t7)
    ctx->pc = 0x2b5620u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2b5624:
    // 0x2b5624: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5624u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5628:
    // 0x2b5628: 0x81e5ab7d  lb          $a1, -0x5483($t7)
    ctx->pc = 0x2b5628u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2b562c:
    // 0x2b562c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b562cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5630:
    // 0x2b5630: 0x81e5b37d  lb          $a1, -0x4C83($t7)
    ctx->pc = 0x2b5630u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2b5634:
    // 0x2b5634: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5634u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5638:
    // 0x2b5638: 0x81e5bb7d  lb          $a1, -0x4483($t7)
    ctx->pc = 0x2b5638u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2b563c:
    // 0x2b563c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b563cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5640:
    // 0x2b5640: 0x81e5c37d  lb          $a1, -0x3C83($t7)
    ctx->pc = 0x2b5640u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2b5644:
    // 0x2b5644: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5644u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5648:
    // 0x2b5648: 0x81f40b7c  lb          $s4, 0xB7C($t7)
    ctx->pc = 0x2b5648u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b564c:
    // 0x2b564c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b564cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5650:
    // 0x2b5650: 0x81f50b7c  lb          $s5, 0xB7C($t7)
    ctx->pc = 0x2b5650u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b5654:
    // 0x2b5654: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5654u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5658:
    // 0x2b5658: 0x81f60b7c  lb          $s6, 0xB7C($t7)
    ctx->pc = 0x2b5658u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b565c:
    // 0x2b565c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b565cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5660:
    // 0x2b5660: 0x81f70b7c  lb          $s7, 0xB7C($t7)
    ctx->pc = 0x2b5660u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b5664:
    // 0x2b5664: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5664u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5668:
    // 0x2b5668: 0x81f80b7c  lb          $t8, 0xB7C($t7)
    ctx->pc = 0x2b5668u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b566c:
    // 0x2b566c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b566cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5670:
    // 0x2b5670: 0x81e6a37d  lb          $a2, -0x5C83($t7)
    ctx->pc = 0x2b5670u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2b5674:
    // 0x2b5674: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5674u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5678:
    // 0x2b5678: 0x81e6ab7d  lb          $a2, -0x5483($t7)
    ctx->pc = 0x2b5678u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2b567c:
    // 0x2b567c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b567cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5680:
    // 0x2b5680: 0x81e6b37d  lb          $a2, -0x4C83($t7)
    ctx->pc = 0x2b5680u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2b5684:
    // 0x2b5684: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5684u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5688:
    // 0x2b5688: 0x81e6bb7d  lb          $a2, -0x4483($t7)
    ctx->pc = 0x2b5688u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2b568c:
    // 0x2b568c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b568cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5690:
    // 0x2b5690: 0x81e6c37d  lb          $a2, -0x3C83($t7)
    ctx->pc = 0x2b5690u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2b5694:
    // 0x2b5694: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5694u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5698:
    // 0x2b5698: 0x80940b7c  lb          $s4, 0xB7C($a0)
    ctx->pc = 0x2b5698u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2940)));
label_2b569c:
    // 0x2b569c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b569cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b56a0:
    // 0x2b56a0: 0x800008f0  lb          $zero, 0x8F0($zero)
    ctx->pc = 0x2b56a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x8F0u));
label_2b56a4:
    // 0x2b56a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b56a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b56a8:
    // 0x2b56a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b56a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b56ac:
    // 0x2b56ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b56acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b56b0:
    // 0x2b56b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b56b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b56b4:
    // 0x2b56b4: 0x540541  .word       0x00540541                   # INVALID     $v0, $s4, 0x541 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b56b4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B56B4 raw=0x00540541");
 /* MITIGATED */
label_2b56b8:
    // 0x2b56b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b56b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b56bc:
    // 0x2b56bc: 0x1140545  .word       0x01140545                   # INVALID     $t0, $s4, 0x545 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b56bcu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B56BC raw=0x01140545");
 /* MITIGATED */
label_2b56c0:
    // 0x2b56c0: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b56c0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b56c4:
    // 0x2b56c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b56c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b56c8:
    // 0x2b56c8: 0x100e0000  beq         $zero, $t6, . + 4 + (0x0 << 2)
label_2b56cc:
    if (ctx->pc == 0x2B56CCu) {
        ctx->pc = 0x2B56CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B56C8u;
        // 0x2b56cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B56D0u;
        goto label_2b56d0;
    }
    ctx->pc = 0x2B56C8u;
    {
        const bool branch_taken_0x2b56c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B56CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B56C8u;
        // 0x2b56cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b56c8) {
            ctx->pc = 0x2B56CCu;
            goto label_2b56cc;
        }
    }
    ctx->pc = 0x2B56D0u;
label_2b56d0:
    // 0x2b56d0: 0xa8e100a  j           func_A384028
label_2b56d4:
    if (ctx->pc == 0x2B56D4u) {
        ctx->pc = 0x2B56D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B56D0u;
        // 0x2b56d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B56D8u;
        goto label_2b56d8;
    }
    ctx->pc = 0x2B56D0u;
    ctx->pc = 0x2B56D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B56D0u;
    // 0x2b56d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA384028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA384028u, 0x2B56D0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B56D8u;
label_2b56d8:
    // 0x2b56d8: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2b56dc:
    if (ctx->pc == 0x2B56DCu) {
        ctx->pc = 0x2B56DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B56D8u;
        // 0x2b56dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B56E0u;
        goto label_2b56e0;
    }
    ctx->pc = 0x2B56D8u;
    {
        const bool branch_taken_0x2b56d8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B56DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B56D8u;
        // 0x2b56dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b56d8) {
            ctx->pc = 0x2B76D8u;
            { ctx->pc = 0x2b76d8; return; }
        }
    }
    ctx->pc = 0x2B56E0u;
label_2b56e0:
    // 0x2b56e0: 0x100b5805  beq         $zero, $t3, . + 4 + (0x5805 << 2)
label_2b56e4:
    if (ctx->pc == 0x2B56E4u) {
        ctx->pc = 0x2B56E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B56E0u;
        // 0x2b56e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B56E8u;
        goto label_2b56e8;
    }
    ctx->pc = 0x2B56E0u;
    {
        const bool branch_taken_0x2b56e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B56E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B56E0u;
        // 0x2b56e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b56e0) {
            ctx->pc = 0x2CB6F8u;
            { ctx->pc = 0x2cb6f8; return; }
        }
    }
    ctx->pc = 0x2B56E8u;
label_2b56e8:
    // 0x2b56e8: 0xb0b1000  j           func_C2C4000
label_2b56ec:
    if (ctx->pc == 0x2B56ECu) {
        ctx->pc = 0x2B56ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B56E8u;
        // 0x2b56ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B56F0u;
        goto label_2b56f0;
    }
    ctx->pc = 0x2B56E8u;
    ctx->pc = 0x2B56ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B56E8u;
    // 0x2b56ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2B56E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B56F0u;
label_2b56f0:
    // 0x2b56f0: 0xb0b1005  j           func_C2C4014
label_2b56f4:
    if (ctx->pc == 0x2B56F4u) {
        ctx->pc = 0x2B56F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B56F0u;
        // 0x2b56f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B56F8u;
        goto label_2b56f8;
    }
    ctx->pc = 0x2B56F0u;
    ctx->pc = 0x2B56F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B56F0u;
    // 0x2b56f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4014u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4014u, 0x2B56F0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B56F8u;
label_2b56f8:
    // 0x2b56f8: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b56f8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B56F8 raw=0x01FA0005");
 /* MITIGATED */
label_2b56fc:
    // 0x2b56fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b56fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5700:
    // 0x2b5700: 0x100200a6  beq         $zero, $v0, . + 4 + (0xA6 << 2)
label_2b5704:
    if (ctx->pc == 0x2B5704u) {
        ctx->pc = 0x2B5704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5700u;
        // 0x2b5704: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5708u;
        goto label_2b5708;
    }
    ctx->pc = 0x2B5700u;
    {
        const bool branch_taken_0x2b5700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B5704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5700u;
        // 0x2b5704: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5700) {
            ctx->pc = 0x2B599Cu;
            goto label_2b599c;
        }
    }
    ctx->pc = 0x2B5708u;
label_2b5708:
    // 0x2b5708: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2b570c:
    if (ctx->pc == 0x2B570Cu) {
        ctx->pc = 0x2B570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5708u;
        // 0x2b570c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5710u;
        goto label_2b5710;
    }
    ctx->pc = 0x2B5708u;
    {
        const bool branch_taken_0x2b5708 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5708u;
        // 0x2b570c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5708) {
            ctx->pc = 0x2B7708u;
            { ctx->pc = 0x2b7708; return; }
        }
    }
    ctx->pc = 0x2B5710u;
label_2b5710:
    // 0x2b5710: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2b5714:
    if (ctx->pc == 0x2B5714u) {
        ctx->pc = 0x2B5714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5710u;
        // 0x2b5714: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5718u;
        goto label_2b5718;
    }
    ctx->pc = 0x2B5710u;
    {
        const bool branch_taken_0x2b5710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B5714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5710u;
        // 0x2b5714: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5710) {
            ctx->pc = 0x2CB718u;
            { ctx->pc = 0x2cb718; return; }
        }
    }
    ctx->pc = 0x2B5718u;
label_2b5718:
    // 0x2b5718: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5718u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2b571c:
    // 0x2b571c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b571cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5720:
    // 0x2b5720: 0xb0b1000  j           func_C2C4000
label_2b5724:
    if (ctx->pc == 0x2B5724u) {
        ctx->pc = 0x2B5724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5720u;
        // 0x2b5724: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5728u;
        goto label_2b5728;
    }
    ctx->pc = 0x2B5720u;
    ctx->pc = 0x2B5724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5720u;
    // 0x2b5724: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2B5720u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B5728u;
label_2b5728:
    // 0x2b5728: 0x90c1800  j           func_4306000
label_2b572c:
    if (ctx->pc == 0x2B572Cu) {
        ctx->pc = 0x2B572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5728u;
        // 0x2b572c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5730u;
        goto label_2b5730;
    }
    ctx->pc = 0x2B5728u;
    ctx->pc = 0x2B572Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5728u;
    // 0x2b572c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306000u, 0x2B5728u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B5730u;
label_2b5730:
    // 0x2b5730: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5730u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5734:
    // 0x2b5734: 0x1e08418  .word       0x01E08418                   # mult        $s0, $t7, $zero # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b5734u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_2b5738:
    // 0x2b5738: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5738u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b573c:
    // 0x2b573c: 0x1e08c58  .word       0x01E08C58                   # mult        $s1, $t7, $zero # 00000440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b573cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_2b5740:
    // 0x2b5740: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5740u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5744:
    // 0x2b5744: 0x1e09498  .word       0x01E09498                   # mult        $s2, $t7, $zero # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b5744u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_2b5748:
    // 0x2b5748: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5748u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b574c:
    // 0x2b574c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b574cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5750:
    // 0x2b5750: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5750u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5754:
    // 0x2b5754: 0x208428  .word       0x00208428                   # mfsa        $s0 # 00200400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b5754u;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_2b5758:
    // 0x2b5758: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5758u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b575c:
    // 0x2b575c: 0x208c68  .word       0x00208C68                   # mfsa        $s1 # 00200440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b575cu;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_2b5760:
    // 0x2b5760: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5760u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5764:
    // 0x2b5764: 0x2094a8  .word       0x002094A8                   # mfsa        $s2 # 00200480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b5764u;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_2b5768:
    // 0x2b5768: 0x100d0003  beq         $zero, $t5, . + 4 + (0x3 << 2)
label_2b576c:
    if (ctx->pc == 0x2B576Cu) {
        ctx->pc = 0x2B576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5768u;
        // 0x2b576c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5770u;
        goto label_2b5770;
    }
    ctx->pc = 0x2B5768u;
    {
        const bool branch_taken_0x2b5768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5768u;
        // 0x2b576c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5768) {
            ctx->pc = 0x2B5778u;
            goto label_2b5778;
        }
    }
    ctx->pc = 0x2B5770u;
label_2b5770:
    // 0x2b5770: 0x10040000  beq         $zero, $a0, . + 4 + (0x0 << 2)
label_2b5774:
    if (ctx->pc == 0x2B5774u) {
        ctx->pc = 0x2B5774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5770u;
        // 0x2b5774: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5778u;
        goto label_2b5778;
    }
    ctx->pc = 0x2B5770u;
    {
        const bool branch_taken_0x2b5770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B5774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5770u;
        // 0x2b5774: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5770) {
            ctx->pc = 0x2B5774u;
            goto label_2b5774;
        }
    }
    ctx->pc = 0x2B5778u;
label_2b5778:
    // 0x2b5778: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2b577c:
    if (ctx->pc == 0x2B577Cu) {
        ctx->pc = 0x2B577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5778u;
        // 0x2b577c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5780u;
        goto label_2b5780;
    }
    ctx->pc = 0x2B5778u;
    {
        const bool branch_taken_0x2b5778 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5778u;
        // 0x2b577c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5778) {
            ctx->pc = 0x2B7778u;
            { ctx->pc = 0x2b7778; return; }
        }
    }
    ctx->pc = 0x2B5780u;
label_2b5780:
    // 0x2b5780: 0x800b6334  lb          $t3, 0x6334($zero)
    ctx->pc = 0x2b5780u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x6334u));
label_2b5784:
    // 0x2b5784: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5784u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5788:
    // 0x2b5788: 0x81e51b7c  lb          $a1, 0x1B7C($t7)
    ctx->pc = 0x2b5788u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2b578c:
    // 0x2b578c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b578cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5790:
    // 0x2b5790: 0x81e61b7c  lb          $a2, 0x1B7C($t7)
    ctx->pc = 0x2b5790u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2b5794:
    // 0x2b5794: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5794u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5798:
    // 0x2b5798: 0x81f31b7c  lb          $s3, 0x1B7C($t7)
    ctx->pc = 0x2b5798u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2b579c:
    // 0x2b579c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b579cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b57a0:
    // 0x2b57a0: 0x22000000  addi        $zero, $s0, 0x0
    ctx->pc = 0x2b57a0u;
    // NOP (addi to $zero)
label_2b57a4:
    // 0x2b57a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b57a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b57a8:
    // 0x2b57a8: 0x800b07b2  lb          $t3, 0x7B2($zero)
    ctx->pc = 0x2b57a8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x7B2u));
label_2b57ac:
    // 0x2b57ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b57acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b57b0:
    // 0x2b57b0: 0x800a07b2  lb          $t2, 0x7B2($zero)
    ctx->pc = 0x2b57b0u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x7B2u));
label_2b57b4:
    // 0x2b57b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b57b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b57b8:
    // 0x2b57b8: 0x800907b2  lb          $t1, 0x7B2($zero)
    ctx->pc = 0x2b57b8u;
    SET_GPR_S32(ctx, 9, (int8_t)FAST_READ8(0x7B2u));
label_2b57bc:
    // 0x2b57bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b57bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b57c0:
    // 0x2b57c0: 0x81e52b7d  lb          $a1, 0x2B7D($t7)
    ctx->pc = 0x2b57c0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 11133)));
label_2b57c4:
    // 0x2b57c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b57c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b57c8:
    // 0x2b57c8: 0x81e6337d  lb          $a2, 0x337D($t7)
    ctx->pc = 0x2b57c8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 13181)));
label_2b57cc:
    // 0x2b57cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b57ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b57d0:
    // 0x2b57d0: 0x931800  .word       0x00931800                   # sll         $v1, $s3, 0 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b57d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 0));
label_2b57d4:
    // 0x2b57d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b57d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b57d8:
    // 0x2b57d8: 0x81f61b7c  lb          $s6, 0x1B7C($t7)
    ctx->pc = 0x2b57d8u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2b57dc:
    // 0x2b57dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b57dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b57e0:
    // 0x2b57e0: 0x81e61b7c  lb          $a2, 0x1B7C($t7)
    ctx->pc = 0x2b57e0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2b57e4:
    // 0x2b57e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b57e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b57e8:
    // 0x2b57e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b57e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b57ec:
    // 0x2b57ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b57ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b57f0:
    // 0x2b57f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b57f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b57f4:
    // 0x2b57f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b57f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b57f8:
    // 0x2b57f8: 0x8096b33d  lb          $s6, -0x4CC3($a0)
    ctx->pc = 0x2b57f8u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294947645)));
label_2b57fc:
    // 0x2b57fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b57fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5800:
    // 0x2b5800: 0x8056033d  lb          $s6, 0x33D($v0)
    ctx->pc = 0x2b5800u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2b5804:
    // 0x2b5804: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5804u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5808:
    // 0x2b5808: 0x8046033d  lb          $a2, 0x33D($v0)
    ctx->pc = 0x2b5808u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2b580c:
    // 0x2b580c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b580cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5810:
    // 0x2b5810: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5810u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5814:
    // 0x2b5814: 0x1f309bc  .word       0x01F309BC                   # dsll32      $at, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5814u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << (32 + 6));
label_2b5818:
    // 0x2b5818: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5818u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b581c:
    // 0x2b581c: 0x1f310bd  .word       0x01F310BD                   # INVALID     $t7, $s3, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b581cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B581C raw=0x01F310BD");
 /* MITIGATED */
label_2b5820:
    // 0x2b5820: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5820u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5824:
    // 0x2b5824: 0x1f318be  .word       0x01F318BE                   # dsrl32      $v1, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (32 + 2));
label_2b5828:
    // 0x2b5828: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5828u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b582c:
    // 0x2b582c: 0x1e0270b  .word       0x01E0270B                   # movn        $a0, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b582cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
label_2b5830:
    // 0x2b5830: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5830u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5834:
    // 0x2b5834: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5834u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5838:
    // 0x2b5838: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5838u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b583c:
    // 0x2b583c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b583cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5840:
    // 0x2b5840: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5840u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5844:
    // 0x2b5844: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5844u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5848:
    // 0x2b5848: 0x81fc03bc  lb          $gp, 0x3BC($t7)
    ctx->pc = 0x2b5848u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2b584c:
    // 0x2b584c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b584cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5850:
    // 0x2b5850: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5850u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5854:
    // 0x2b5854: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5854u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5858:
    // 0x2b5858: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5858u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b585c:
    // 0x2b585c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b585cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5860:
    // 0x2b5860: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5860u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5864:
    // 0x2b5864: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5864u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5868:
    // 0x2b5868: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5868u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b586c:
    // 0x2b586c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b586cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5870:
    // 0x2b5870: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5870u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5874:
    // 0x2b5874: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5874u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5878:
    // 0x2b5878: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5878u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b587c:
    // 0x2b587c: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b587cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2b5880:
    // 0x2b5880: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5880u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5884:
    // 0x2b5884: 0x20f721  .word       0x0020F721                   # addu        $fp, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5884u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2b5888:
    // 0x2b5888: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5888u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b588c:
    // 0x2b588c: 0x1c0e7dc  .word       0x01C0E7DC                   # dmult       $t6, $zero # 0000E7C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b588cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B588C raw=0x01C0E7DC");
 /* MITIGATED */
label_2b5890:
    // 0x2b5890: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5890u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5894:
    // 0x2b5894: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5894u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5898:
    // 0x2b5898: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5898u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b589c:
    // 0x2b589c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b589cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b58a0:
    // 0x2b58a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b58a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b58a4:
    // 0x2b58a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b58a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b58a8:
    // 0x2b58a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b58a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b58ac:
    // 0x2b58ac: 0x20e7df  .word       0x0020E7DF                   # ddivu       $gp, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b58acu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2B58AC raw=0x0020E7DF");
 /* MITIGATED */
label_2b58b0:
    // 0x2b58b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b58b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b58b4:
    // 0x2b58b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b58b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b58b8:
    // 0x2b58b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b58b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b58bc:
    // 0x2b58bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b58bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b58c0:
    // 0x2b58c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b58c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b58c4:
    // 0x2b58c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b58c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b58c8:
    // 0x2b58c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b58c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b58cc:
    // 0x2b58cc: 0x20ffd0  .word       0x0020FFD0                   # mfhi        $ra # 002007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b58ccu;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_2b58d0:
    // 0x2b58d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b58d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b58d4:
    // 0x2b58d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b58d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b58d8:
    // 0x2b58d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b58d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b58dc:
    // 0x2b58dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b58dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b58e0:
    // 0x2b58e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b58e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b58e4:
    // 0x2b58e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b58e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b58e8:
    // 0x2b58e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b58e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b58ec:
    // 0x2b58ec: 0x1faf97d  .word       0x01FAF97D                   # INVALID     $t7, $k0, -0x683 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b58ecu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B58EC raw=0x01FAF97D");
 /* MITIGATED */
label_2b58f0:
    // 0x2b58f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b58f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b58f4:
    // 0x2b58f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b58f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b58f8:
    // 0x2b58f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b58f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b58fc:
    // 0x2b58fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b58fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5900:
    // 0x2b5900: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5900u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5904:
    // 0x2b5904: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5904u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5908:
    // 0x2b5908: 0x3e5d002  .word       0x03E5D002                   # srl         $k0, $a1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5908u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 5), 0));
label_2b590c:
    // 0x2b590c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b590cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5910:
    // 0x2b5910: 0x3e6d002  .word       0x03E6D002                   # srl         $k0, $a2, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5910u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 6), 0));
label_2b5914:
    // 0x2b5914: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5914u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5918:
    // 0x2b5918: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5918u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b591c:
    // 0x2b591c: 0x1c0b59c  .word       0x01C0B59C                   # dmult       $t6, $zero # 0000B580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b591cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B591C raw=0x01C0B59C");
 /* MITIGATED */
label_2b5920:
    // 0x2b5920: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5920u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5924:
    // 0x2b5924: 0x1c0319c  .word       0x01C0319C                   # dmult       $t6, $zero # 00003180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5924u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B5924 raw=0x01C0319C");
 /* MITIGATED */
label_2b5928:
    // 0x2b5928: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5928u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b592c:
    // 0x2b592c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b592cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5930:
    // 0x2b5930: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5930u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5934:
    // 0x2b5934: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5934u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5938:
    // 0x2b5938: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5938u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b593c:
    // 0x2b593c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b593cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5940:
    // 0x2b5940: 0x3e5b000  .word       0x03E5B000                   # sll         $s6, $a1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5940u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
label_2b5944:
    // 0x2b5944: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5944u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5948:
    // 0x2b5948: 0x3e63000  .word       0x03E63000                   # sll         $a2, $a2, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5948u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 0));
label_2b594c:
    // 0x2b594c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b594cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5950:
    // 0x2b5950: 0x81f41b7c  lb          $s4, 0x1B7C($t7)
    ctx->pc = 0x2b5950u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2b5954:
    // 0x2b5954: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5954u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5958:
    // 0x2b5958: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5958u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b595c:
    // 0x2b595c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b595cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5960:
    // 0x2b5960: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5960u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5964:
    // 0x2b5964: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5964u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5968:
    // 0x2b5968: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5968u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b596c:
    // 0x2b596c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b596cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5970:
    // 0x2b5970: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5970u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5974:
    // 0x2b5974: 0x1cba52a  .word       0x01CBA52A                   # slt         $s4, $t6, $t3 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5974u;
    SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_2b5978:
    // 0x2b5978: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5978u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b597c:
    // 0x2b597c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b597cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5980:
    // 0x2b5980: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5980u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5984:
    // 0x2b5984: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5984u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5988:
    // 0x2b5988: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5988u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b598c:
    // 0x2b598c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b598cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5990:
    // 0x2b5990: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5990u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5994:
    // 0x2b5994: 0x1e0a51f  .word       0x01E0A51F                   # ddivu       $s4, $t7, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5994u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2B5994 raw=0x01E0A51F");
 /* MITIGATED */
label_2b5998:
    // 0x2b5998: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5998u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b599c:
    // 0x2b599c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b599cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b59a0:
    // 0x2b59a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b59a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b59a4:
    // 0x2b59a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b59a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b59a8:
    // 0x2b59a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b59a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b59ac:
    // 0x2b59ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b59acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b59b0:
    // 0x2b59b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b59b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b59b4:
    // 0x2b59b4: 0x1f4a17c  .word       0x01F4A17C                   # dsll32      $s4, $s4, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b59b4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 5));
label_2b59b8:
    // 0x2b59b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b59b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b59bc:
    // 0x2b59bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b59bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b59c0:
    // 0x2b59c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b59c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b59c4:
    // 0x2b59c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b59c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b59c8:
    // 0x2b59c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b59c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b59cc:
    // 0x2b59cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b59ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x2b59d0u;
    return;
}
