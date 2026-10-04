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


void FUN_0019b5e8_part21(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1a5228u: goto label_1a5228;
        case 0x1a522cu: goto label_1a522c;
        case 0x1a5230u: goto label_1a5230;
        case 0x1a5234u: goto label_1a5234;
        case 0x1a5238u: goto label_1a5238;
        case 0x1a523cu: goto label_1a523c;
        case 0x1a5240u: goto label_1a5240;
        case 0x1a5244u: goto label_1a5244;
        case 0x1a5248u: goto label_1a5248;
        case 0x1a524cu: goto label_1a524c;
        case 0x1a5250u: goto label_1a5250;
        case 0x1a5254u: goto label_1a5254;
        case 0x1a5258u: goto label_1a5258;
        case 0x1a525cu: goto label_1a525c;
        case 0x1a5260u: goto label_1a5260;
        case 0x1a5264u: goto label_1a5264;
        case 0x1a5268u: goto label_1a5268;
        case 0x1a526cu: goto label_1a526c;
        case 0x1a5270u: goto label_1a5270;
        case 0x1a5274u: goto label_1a5274;
        case 0x1a5278u: goto label_1a5278;
        case 0x1a527cu: goto label_1a527c;
        case 0x1a5280u: goto label_1a5280;
        case 0x1a5284u: goto label_1a5284;
        case 0x1a5288u: goto label_1a5288;
        case 0x1a528cu: goto label_1a528c;
        case 0x1a5290u: goto label_1a5290;
        case 0x1a5294u: goto label_1a5294;
        case 0x1a5298u: goto label_1a5298;
        case 0x1a529cu: goto label_1a529c;
        case 0x1a52a0u: goto label_1a52a0;
        case 0x1a52a4u: goto label_1a52a4;
        case 0x1a52a8u: goto label_1a52a8;
        case 0x1a52acu: goto label_1a52ac;
        case 0x1a52b0u: goto label_1a52b0;
        case 0x1a52b4u: goto label_1a52b4;
        case 0x1a52b8u: goto label_1a52b8;
        case 0x1a52bcu: goto label_1a52bc;
        case 0x1a52c0u: goto label_1a52c0;
        case 0x1a52c4u: goto label_1a52c4;
        case 0x1a52c8u: goto label_1a52c8;
        case 0x1a52ccu: goto label_1a52cc;
        case 0x1a52d0u: goto label_1a52d0;
        case 0x1a52d4u: goto label_1a52d4;
        case 0x1a52d8u: goto label_1a52d8;
        case 0x1a52dcu: goto label_1a52dc;
        case 0x1a52e0u: goto label_1a52e0;
        case 0x1a52e4u: goto label_1a52e4;
        case 0x1a52e8u: goto label_1a52e8;
        case 0x1a52ecu: goto label_1a52ec;
        case 0x1a52f0u: goto label_1a52f0;
        case 0x1a52f4u: goto label_1a52f4;
        case 0x1a52f8u: goto label_1a52f8;
        case 0x1a52fcu: goto label_1a52fc;
        case 0x1a5300u: goto label_1a5300;
        case 0x1a5304u: goto label_1a5304;
        case 0x1a5308u: goto label_1a5308;
        case 0x1a530cu: goto label_1a530c;
        case 0x1a5310u: goto label_1a5310;
        case 0x1a5314u: goto label_1a5314;
        case 0x1a5318u: goto label_1a5318;
        case 0x1a531cu: goto label_1a531c;
        case 0x1a5320u: goto label_1a5320;
        case 0x1a5324u: goto label_1a5324;
        case 0x1a5328u: goto label_1a5328;
        case 0x1a532cu: goto label_1a532c;
        case 0x1a5330u: goto label_1a5330;
        case 0x1a5334u: goto label_1a5334;
        case 0x1a5338u: goto label_1a5338;
        case 0x1a533cu: goto label_1a533c;
        case 0x1a5340u: goto label_1a5340;
        case 0x1a5344u: goto label_1a5344;
        case 0x1a5348u: goto label_1a5348;
        case 0x1a534cu: goto label_1a534c;
        case 0x1a5350u: goto label_1a5350;
        case 0x1a5354u: goto label_1a5354;
        case 0x1a5358u: goto label_1a5358;
        case 0x1a535cu: goto label_1a535c;
        case 0x1a5360u: goto label_1a5360;
        case 0x1a5364u: goto label_1a5364;
        case 0x1a5368u: goto label_1a5368;
        case 0x1a536cu: goto label_1a536c;
        case 0x1a5370u: goto label_1a5370;
        case 0x1a5374u: goto label_1a5374;
        case 0x1a5378u: goto label_1a5378;
        case 0x1a537cu: goto label_1a537c;
        case 0x1a5380u: goto label_1a5380;
        case 0x1a5384u: goto label_1a5384;
        case 0x1a5388u: goto label_1a5388;
        case 0x1a538cu: goto label_1a538c;
        case 0x1a5390u: goto label_1a5390;
        case 0x1a5394u: goto label_1a5394;
        case 0x1a5398u: goto label_1a5398;
        case 0x1a539cu: goto label_1a539c;
        case 0x1a53a0u: goto label_1a53a0;
        case 0x1a53a4u: goto label_1a53a4;
        case 0x1a53a8u: goto label_1a53a8;
        case 0x1a53acu: goto label_1a53ac;
        case 0x1a53b0u: goto label_1a53b0;
        case 0x1a53b4u: goto label_1a53b4;
        case 0x1a53b8u: goto label_1a53b8;
        case 0x1a53bcu: goto label_1a53bc;
        case 0x1a53c0u: goto label_1a53c0;
        case 0x1a53c4u: goto label_1a53c4;
        case 0x1a53c8u: goto label_1a53c8;
        case 0x1a53ccu: goto label_1a53cc;
        case 0x1a53d0u: goto label_1a53d0;
        case 0x1a53d4u: goto label_1a53d4;
        case 0x1a53d8u: goto label_1a53d8;
        case 0x1a53dcu: goto label_1a53dc;
        case 0x1a53e0u: goto label_1a53e0;
        case 0x1a53e4u: goto label_1a53e4;
        case 0x1a53e8u: goto label_1a53e8;
        case 0x1a53ecu: goto label_1a53ec;
        case 0x1a53f0u: goto label_1a53f0;
        case 0x1a53f4u: goto label_1a53f4;
        case 0x1a53f8u: goto label_1a53f8;
        case 0x1a53fcu: goto label_1a53fc;
        case 0x1a5400u: goto label_1a5400;
        case 0x1a5404u: goto label_1a5404;
        case 0x1a5408u: goto label_1a5408;
        case 0x1a540cu: goto label_1a540c;
        case 0x1a5410u: goto label_1a5410;
        case 0x1a5414u: goto label_1a5414;
        case 0x1a5418u: goto label_1a5418;
        case 0x1a541cu: goto label_1a541c;
        case 0x1a5420u: goto label_1a5420;
        case 0x1a5424u: goto label_1a5424;
        case 0x1a5428u: goto label_1a5428;
        case 0x1a542cu: goto label_1a542c;
        case 0x1a5430u: goto label_1a5430;
        case 0x1a5434u: goto label_1a5434;
        case 0x1a5438u: goto label_1a5438;
        case 0x1a543cu: goto label_1a543c;
        case 0x1a5440u: goto label_1a5440;
        case 0x1a5444u: goto label_1a5444;
        case 0x1a5448u: goto label_1a5448;
        case 0x1a544cu: goto label_1a544c;
        case 0x1a5450u: goto label_1a5450;
        case 0x1a5454u: goto label_1a5454;
        case 0x1a5458u: goto label_1a5458;
        case 0x1a545cu: goto label_1a545c;
        case 0x1a5460u: goto label_1a5460;
        case 0x1a5464u: goto label_1a5464;
        case 0x1a5468u: goto label_1a5468;
        case 0x1a546cu: goto label_1a546c;
        case 0x1a5470u: goto label_1a5470;
        case 0x1a5474u: goto label_1a5474;
        case 0x1a5478u: goto label_1a5478;
        case 0x1a547cu: goto label_1a547c;
        case 0x1a5480u: goto label_1a5480;
        case 0x1a5484u: goto label_1a5484;
        case 0x1a5488u: goto label_1a5488;
        case 0x1a548cu: goto label_1a548c;
        case 0x1a5490u: goto label_1a5490;
        case 0x1a5494u: goto label_1a5494;
        case 0x1a5498u: goto label_1a5498;
        case 0x1a549cu: goto label_1a549c;
        case 0x1a54a0u: goto label_1a54a0;
        case 0x1a54a4u: goto label_1a54a4;
        case 0x1a54a8u: goto label_1a54a8;
        case 0x1a54acu: goto label_1a54ac;
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
        default: return;
    }

label_1a5228:
    if (ctx->pc == 0x1A5228u) {
        ctx->pc = 0x1A522Cu;
        goto label_1a522c;
    }
    ctx->pc = 0x1A5224u;
    {
        const bool branch_taken_0x1a5224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5224) {
            ctx->pc = 0x1A5238u;
            goto label_1a5238;
        }
    }
    ctx->pc = 0x1A522Cu;
label_1a522c:
    // 0x1a522c: 0xf  sync
    ctx->pc = 0x1a522cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a5230:
    // 0x1a5230: 0xbcd60001  cache       0x16, 0x1($a2)
    ctx->pc = 0x1a5230u;
    // CACHE instruction (ignored)
label_1a5234:
    // 0x1a5234: 0xf  sync
    ctx->pc = 0x1a5234u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a5238:
    // 0x1a5238: 0xf  sync
    ctx->pc = 0x1a5238u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a523c:
    // 0x1a523c: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x1a523cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_1a5240:
    // 0x1a5240: 0x28c21000  slti        $v0, $a2, 0x1000
    ctx->pc = 0x1a5240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4096) ? 1 : 0);
label_1a5244:
    // 0x1a5244: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
label_1a5248:
    if (ctx->pc == 0x1A5248u) {
        ctx->pc = 0x1A524Cu;
        goto label_1a524c;
    }
    ctx->pc = 0x1A5244u;
    {
        const bool branch_taken_0x1a5244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5244) {
            ctx->pc = 0x1A51C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1a51c0; return; }
        }
    }
    ctx->pc = 0x1A524Cu;
label_1a524c:
    // 0x1a524c: 0x3e00008  jr          $ra
label_1a5250:
    if (ctx->pc == 0x1A5250u) {
        ctx->pc = 0x1A5254u;
        goto label_1a5254;
    }
    ctx->pc = 0x1A524Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A524Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5254u;
label_1a5254:
    // 0x1a5254: 0x0  nop
    ctx->pc = 0x1a5254u;
    // NOP
label_1a5258:
    // 0x1a5258: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a5258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a525c:
    // 0x1a525c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a525cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a5260:
    // 0x1a5260: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a5260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a5264:
    // 0x1a5264: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a5264u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a5268:
    // 0x1a5268: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a5268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1a526c:
    // 0x1a526c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a526cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a5270:
    // 0x1a5270: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a5274:
    // 0x1a5274: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x1a5274u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
label_1a5278:
    // 0x1a5278: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a5278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1a527c:
    // 0x1a527c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x1a527cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_1a5280:
    // 0x1a5280: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1a5284:
    if (ctx->pc == 0x1A5284u) {
        ctx->pc = 0x1A5288u;
        goto label_1a5288;
    }
    ctx->pc = 0x1A5280u;
    {
        const bool branch_taken_0x1a5280 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5280) {
            ctx->pc = 0x1A5290u;
            goto label_1a5290;
        }
    }
    ctx->pc = 0x1A5288u;
label_1a5288:
    // 0x1a5288: 0xc06b518  jal         func_1AD460
label_1a528c:
    if (ctx->pc == 0x1A528Cu) {
        ctx->pc = 0x1A5290u;
        goto label_1a5290;
    }
    ctx->pc = 0x1A5288u;
    SET_GPR_U32(ctx, 31, 0x1A5290u);
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A5290u;
label_1a5290:
    // 0x1a5290: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1a5290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_1a5294:
    // 0x1a5294: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x1a5294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
label_1a5298:
    // 0x1a5298: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x1a5298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
label_1a529c:
    // 0x1a529c: 0xc06946c  jal         func_1A51B0
label_1a52a0:
    if (ctx->pc == 0x1A52A0u) {
        ctx->pc = 0x1A52A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A529Cu;
        // 0x1a52a0: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A52A4u;
        goto label_1a52a4;
    }
    ctx->pc = 0x1A529Cu;
    SET_GPR_U32(ctx, 31, 0x1A52A4u);
    ctx->pc = 0x1A52A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A529Cu;
    // 0x1a52a0: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A51B0u;
    { ctx->pc = 0x1a51b0; return; }
    ctx->pc = 0x1A52A4u;
label_1a52a4:
    // 0x1a52a4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1a52a8:
    if (ctx->pc == 0x1A52A8u) {
        ctx->pc = 0x1A52A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52A4u;
        // 0x1a52a8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A52ACu;
        goto label_1a52ac;
    }
    ctx->pc = 0x1A52A4u;
    {
        const bool branch_taken_0x1a52a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A52A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52A4u;
        // 0x1a52a8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a52a4) {
            ctx->pc = 0x1A52C0u;
            goto label_1a52c0;
        }
    }
    ctx->pc = 0x1A52ACu;
label_1a52ac:
    // 0x1a52ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a52acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a52b0:
    // 0x1a52b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a52b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a52b4:
    // 0x1a52b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a52b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a52b8:
    // 0x1a52b8: 0x806b52a  j           func_1AD4A8
label_1a52bc:
    if (ctx->pc == 0x1A52BCu) {
        ctx->pc = 0x1A52BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52B8u;
        // 0x1a52bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A52C0u;
        goto label_1a52c0;
    }
    ctx->pc = 0x1A52B8u;
    ctx->pc = 0x1A52BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A52B8u;
    // 0x1a52bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A52C0u;
label_1a52c0:
    // 0x1a52c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a52c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a52c4:
    // 0x1a52c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a52c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a52c8:
    // 0x1a52c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a52c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a52cc:
    // 0x1a52cc: 0x3e00008  jr          $ra
label_1a52d0:
    if (ctx->pc == 0x1A52D0u) {
        ctx->pc = 0x1A52D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52CCu;
        // 0x1a52d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A52D4u;
        goto label_1a52d4;
    }
    ctx->pc = 0x1A52CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A52D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52CCu;
        // 0x1a52d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A52CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A52D4u;
label_1a52d4:
    // 0x1a52d4: 0x0  nop
    ctx->pc = 0x1a52d4u;
    // NOP
label_1a52d8:
    // 0x1a52d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a52d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1a52dc:
    // 0x1a52dc: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x1a52dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
label_1a52e0:
    // 0x1a52e0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1a52e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1a52e4:
    // 0x1a52e4: 0x806946c  j           func_1A51B0
label_1a52e8:
    if (ctx->pc == 0x1A52E8u) {
        ctx->pc = 0x1A52E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52E4u;
        // 0x1a52e8: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A52ECu;
        goto label_1a52ec;
    }
    ctx->pc = 0x1A52E4u;
    ctx->pc = 0x1A52E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A52E4u;
    // 0x1a52e8: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A51B0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x1a51b0; return; }
    ctx->pc = 0x1A52ECu;
label_1a52ec:
    // 0x1a52ec: 0x0  nop
    ctx->pc = 0x1a52ecu;
    // NOP
label_1a52f0:
    // 0x1a52f0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x1a52f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
label_1a52f4:
    // 0x1a52f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a52f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1a52f8:
    // 0x1a52f8: 0x3e00008  jr          $ra
label_1a52fc:
    if (ctx->pc == 0x1A52FCu) {
        ctx->pc = 0x1A52FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52F8u;
        // 0x1a52fc: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5300u;
        goto label_1a5300;
    }
    ctx->pc = 0x1A52F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A52FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52F8u;
        // 0x1a52fc: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A52F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5300u;
label_1a5300:
    // 0x1a5300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a5300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a5304:
    // 0x1a5304: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a5304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a5308:
    // 0x1a5308: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a5308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a530c:
    // 0x1a530c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a530cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a5310:
    // 0x1a5310: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a5314:
    // 0x1a5314: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x1a5314u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
label_1a5318:
    // 0x1a5318: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a5318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1a531c:
    // 0x1a531c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x1a531cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_1a5320:
    // 0x1a5320: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1a5324:
    if (ctx->pc == 0x1A5324u) {
        ctx->pc = 0x1A5328u;
        goto label_1a5328;
    }
    ctx->pc = 0x1A5320u;
    {
        const bool branch_taken_0x1a5320 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5320) {
            ctx->pc = 0x1A5330u;
            goto label_1a5330;
        }
    }
    ctx->pc = 0x1A5328u;
label_1a5328:
    // 0x1a5328: 0xc06b518  jal         func_1AD460
label_1a532c:
    if (ctx->pc == 0x1A532Cu) {
        ctx->pc = 0x1A5330u;
        goto label_1a5330;
    }
    ctx->pc = 0x1A5328u;
    SET_GPR_U32(ctx, 31, 0x1A5330u);
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A5330u;
label_1a5330:
    // 0x1a5330: 0xc06915c  jal         func_1A4570
label_1a5334:
    if (ctx->pc == 0x1A5334u) {
        ctx->pc = 0x1A5334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5330u;
        // 0x1a5334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5338u;
        goto label_1a5338;
    }
    ctx->pc = 0x1A5330u;
    SET_GPR_U32(ctx, 31, 0x1A5338u);
    ctx->pc = 0x1A5334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5330u;
    // 0x1a5334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4570u;
    { ctx->pc = 0x1a4570; return; }
    ctx->pc = 0x1A5338u;
label_1a5338:
    // 0x1a5338: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a5338u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a533c:
    // 0x1a533c: 0xf  sync
    ctx->pc = 0x1a533cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a5340:
    // 0x1a5340: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1a5344:
    if (ctx->pc == 0x1A5344u) {
        ctx->pc = 0x1A5344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5340u;
        // 0x1a5344: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5348u;
        goto label_1a5348;
    }
    ctx->pc = 0x1A5340u;
    {
        const bool branch_taken_0x1a5340 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5340u;
        // 0x1a5344: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5340) {
            ctx->pc = 0x1A5354u;
            goto label_1a5354;
        }
    }
    ctx->pc = 0x1A5348u;
label_1a5348:
    // 0x1a5348: 0xc06b52a  jal         func_1AD4A8
label_1a534c:
    if (ctx->pc == 0x1A534Cu) {
        ctx->pc = 0x1A5350u;
        goto label_1a5350;
    }
    ctx->pc = 0x1A5348u;
    SET_GPR_U32(ctx, 31, 0x1A5350u);
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A5350u;
label_1a5350:
    // 0x1a5350: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a5350u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a5354:
    // 0x1a5354: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a5354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a5358:
    // 0x1a5358: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a5358u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a535c:
    // 0x1a535c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a535cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5360:
    // 0x1a5360: 0x3e00008  jr          $ra
label_1a5364:
    if (ctx->pc == 0x1A5364u) {
        ctx->pc = 0x1A5364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5360u;
        // 0x1a5364: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5368u;
        goto label_1a5368;
    }
    ctx->pc = 0x1A5360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5360u;
        // 0x1a5364: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5368u;
label_1a5368:
    // 0x1a5368: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a5368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a536c:
    // 0x1a536c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a536cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a5370:
    // 0x1a5370: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a5370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a5374:
    // 0x1a5374: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a5374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a5378:
    // 0x1a5378: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a537c:
    // 0x1a537c: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x1a537cu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
label_1a5380:
    // 0x1a5380: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a5380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1a5384:
    // 0x1a5384: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x1a5384u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_1a5388:
    // 0x1a5388: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1a538c:
    if (ctx->pc == 0x1A538Cu) {
        ctx->pc = 0x1A5390u;
        goto label_1a5390;
    }
    ctx->pc = 0x1A5388u;
    {
        const bool branch_taken_0x1a5388 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5388) {
            ctx->pc = 0x1A5398u;
            goto label_1a5398;
        }
    }
    ctx->pc = 0x1A5390u;
label_1a5390:
    // 0x1a5390: 0xc06b518  jal         func_1AD460
label_1a5394:
    if (ctx->pc == 0x1A5394u) {
        ctx->pc = 0x1A5398u;
        goto label_1a5398;
    }
    ctx->pc = 0x1A5390u;
    SET_GPR_U32(ctx, 31, 0x1A5398u);
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A5398u;
label_1a5398:
    // 0x1a5398: 0xc069158  jal         func_1A4560
label_1a539c:
    if (ctx->pc == 0x1A539Cu) {
        ctx->pc = 0x1A539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5398u;
        // 0x1a539c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A53A0u;
        goto label_1a53a0;
    }
    ctx->pc = 0x1A5398u;
    SET_GPR_U32(ctx, 31, 0x1A53A0u);
    ctx->pc = 0x1A539Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5398u;
    // 0x1a539c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4560u;
    { ctx->pc = 0x1a4560; return; }
    ctx->pc = 0x1A53A0u;
label_1a53a0:
    // 0x1a53a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a53a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a53a4:
    // 0x1a53a4: 0xf  sync
    ctx->pc = 0x1a53a4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a53a8:
    // 0x1a53a8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1a53ac:
    if (ctx->pc == 0x1A53ACu) {
        ctx->pc = 0x1A53ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53A8u;
        // 0x1a53ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A53B0u;
        goto label_1a53b0;
    }
    ctx->pc = 0x1A53A8u;
    {
        const bool branch_taken_0x1a53a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A53ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53A8u;
        // 0x1a53ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a53a8) {
            ctx->pc = 0x1A53BCu;
            goto label_1a53bc;
        }
    }
    ctx->pc = 0x1A53B0u;
label_1a53b0:
    // 0x1a53b0: 0xc06b52a  jal         func_1AD4A8
label_1a53b4:
    if (ctx->pc == 0x1A53B4u) {
        ctx->pc = 0x1A53B8u;
        goto label_1a53b8;
    }
    ctx->pc = 0x1A53B0u;
    SET_GPR_U32(ctx, 31, 0x1A53B8u);
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A53B8u;
label_1a53b8:
    // 0x1a53b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a53b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a53bc:
    // 0x1a53bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a53bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a53c0:
    // 0x1a53c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a53c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a53c4:
    // 0x1a53c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a53c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a53c8:
    // 0x1a53c8: 0x3e00008  jr          $ra
label_1a53cc:
    if (ctx->pc == 0x1A53CCu) {
        ctx->pc = 0x1A53CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53C8u;
        // 0x1a53cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A53D0u;
        goto label_1a53d0;
    }
    ctx->pc = 0x1A53C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A53CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53C8u;
        // 0x1a53cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A53C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A53D0u;
label_1a53d0:
    // 0x1a53d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a53d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a53d4:
    // 0x1a53d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a53d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a53d8:
    // 0x1a53d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a53d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a53dc:
    // 0x1a53dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a53dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a53e0:
    // 0x1a53e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a53e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a53e4:
    // 0x1a53e4: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x1a53e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
label_1a53e8:
    // 0x1a53e8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a53e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1a53ec:
    // 0x1a53ec: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x1a53ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_1a53f0:
    // 0x1a53f0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1a53f4:
    if (ctx->pc == 0x1A53F4u) {
        ctx->pc = 0x1A53F8u;
        goto label_1a53f8;
    }
    ctx->pc = 0x1A53F0u;
    {
        const bool branch_taken_0x1a53f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a53f0) {
            ctx->pc = 0x1A5400u;
            goto label_1a5400;
        }
    }
    ctx->pc = 0x1A53F8u;
label_1a53f8:
    // 0x1a53f8: 0xc06b518  jal         func_1AD460
label_1a53fc:
    if (ctx->pc == 0x1A53FCu) {
        ctx->pc = 0x1A5400u;
        goto label_1a5400;
    }
    ctx->pc = 0x1A53F8u;
    SET_GPR_U32(ctx, 31, 0x1A5400u);
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A5400u;
label_1a5400:
    // 0x1a5400: 0xc069164  jal         func_1A4590
label_1a5404:
    if (ctx->pc == 0x1A5404u) {
        ctx->pc = 0x1A5404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5400u;
        // 0x1a5404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5408u;
        goto label_1a5408;
    }
    ctx->pc = 0x1A5400u;
    SET_GPR_U32(ctx, 31, 0x1A5408u);
    ctx->pc = 0x1A5404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5400u;
    // 0x1a5404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4590u;
    { ctx->pc = 0x1a4590; return; }
    ctx->pc = 0x1A5408u;
label_1a5408:
    // 0x1a5408: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a5408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a540c:
    // 0x1a540c: 0xf  sync
    ctx->pc = 0x1a540cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a5410:
    // 0x1a5410: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1a5414:
    if (ctx->pc == 0x1A5414u) {
        ctx->pc = 0x1A5414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5410u;
        // 0x1a5414: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5418u;
        goto label_1a5418;
    }
    ctx->pc = 0x1A5410u;
    {
        const bool branch_taken_0x1a5410 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5410u;
        // 0x1a5414: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5410) {
            ctx->pc = 0x1A5424u;
            goto label_1a5424;
        }
    }
    ctx->pc = 0x1A5418u;
label_1a5418:
    // 0x1a5418: 0xc06b52a  jal         func_1AD4A8
label_1a541c:
    if (ctx->pc == 0x1A541Cu) {
        ctx->pc = 0x1A5420u;
        goto label_1a5420;
    }
    ctx->pc = 0x1A5418u;
    SET_GPR_U32(ctx, 31, 0x1A5420u);
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A5420u;
label_1a5420:
    // 0x1a5420: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a5420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a5424:
    // 0x1a5424: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a5424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a5428:
    // 0x1a5428: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a5428u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a542c:
    // 0x1a542c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a542cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5430:
    // 0x1a5430: 0x3e00008  jr          $ra
label_1a5434:
    if (ctx->pc == 0x1A5434u) {
        ctx->pc = 0x1A5434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5430u;
        // 0x1a5434: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5438u;
        goto label_1a5438;
    }
    ctx->pc = 0x1A5430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5430u;
        // 0x1a5434: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5438u;
label_1a5438:
    // 0x1a5438: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a5438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a543c:
    // 0x1a543c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a543cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a5440:
    // 0x1a5440: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a5440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a5444:
    // 0x1a5444: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a5444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a5448:
    // 0x1a5448: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a544c:
    // 0x1a544c: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x1a544cu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
label_1a5450:
    // 0x1a5450: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a5450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1a5454:
    // 0x1a5454: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x1a5454u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_1a5458:
    // 0x1a5458: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1a545c:
    if (ctx->pc == 0x1A545Cu) {
        ctx->pc = 0x1A5460u;
        goto label_1a5460;
    }
    ctx->pc = 0x1A5458u;
    {
        const bool branch_taken_0x1a5458 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5458) {
            ctx->pc = 0x1A5468u;
            goto label_1a5468;
        }
    }
    ctx->pc = 0x1A5460u;
label_1a5460:
    // 0x1a5460: 0xc06b518  jal         func_1AD460
label_1a5464:
    if (ctx->pc == 0x1A5464u) {
        ctx->pc = 0x1A5468u;
        goto label_1a5468;
    }
    ctx->pc = 0x1A5460u;
    SET_GPR_U32(ctx, 31, 0x1A5468u);
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A5468u;
label_1a5468:
    // 0x1a5468: 0xc069160  jal         func_1A4580
label_1a546c:
    if (ctx->pc == 0x1A546Cu) {
        ctx->pc = 0x1A546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5468u;
        // 0x1a546c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5470u;
        goto label_1a5470;
    }
    ctx->pc = 0x1A5468u;
    SET_GPR_U32(ctx, 31, 0x1A5470u);
    ctx->pc = 0x1A546Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5468u;
    // 0x1a546c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4580u;
    { ctx->pc = 0x1a4580; return; }
    ctx->pc = 0x1A5470u;
label_1a5470:
    // 0x1a5470: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a5470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a5474:
    // 0x1a5474: 0xf  sync
    ctx->pc = 0x1a5474u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a5478:
    // 0x1a5478: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1a547c:
    if (ctx->pc == 0x1A547Cu) {
        ctx->pc = 0x1A547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5478u;
        // 0x1a547c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5480u;
        goto label_1a5480;
    }
    ctx->pc = 0x1A5478u;
    {
        const bool branch_taken_0x1a5478 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5478u;
        // 0x1a547c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5478) {
            ctx->pc = 0x1A548Cu;
            goto label_1a548c;
        }
    }
    ctx->pc = 0x1A5480u;
label_1a5480:
    // 0x1a5480: 0xc06b52a  jal         func_1AD4A8
label_1a5484:
    if (ctx->pc == 0x1A5484u) {
        ctx->pc = 0x1A5488u;
        goto label_1a5488;
    }
    ctx->pc = 0x1A5480u;
    SET_GPR_U32(ctx, 31, 0x1A5488u);
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A5488u;
label_1a5488:
    // 0x1a5488: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a5488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a548c:
    // 0x1a548c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a548cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a5490:
    // 0x1a5490: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a5490u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a5494:
    // 0x1a5494: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5494u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5498:
    // 0x1a5498: 0x3e00008  jr          $ra
label_1a549c:
    if (ctx->pc == 0x1A549Cu) {
        ctx->pc = 0x1A549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5498u;
        // 0x1a549c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A54A0u;
        goto label_1a54a0;
    }
    ctx->pc = 0x1A5498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5498u;
        // 0x1a549c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A54A0u;
label_1a54a0:
    // 0x1a54a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a54a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a54a4:
    // 0x1a54a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a54a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a54a8:
    // 0x1a54a8: 0xc069170  jal         func_1A45C0
label_1a54ac:
    if (ctx->pc == 0x1A54ACu) {
        ctx->pc = 0x1A54B0u;
        goto label_1a54b0;
    }
    ctx->pc = 0x1A54A8u;
    SET_GPR_U32(ctx, 31, 0x1A54B0u);
    ctx->pc = 0x1A45C0u;
    { ctx->pc = 0x1a45c0; return; }
    ctx->pc = 0x1A54B0u;
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
    ctx->pc = 0x1a59f8u;
    return;
}
