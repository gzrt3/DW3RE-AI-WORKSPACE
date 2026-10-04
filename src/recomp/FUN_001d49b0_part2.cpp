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


void FUN_001d49b0_part2(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1d5180u: goto label_1d5180;
        case 0x1d5184u: goto label_1d5184;
        case 0x1d5188u: goto label_1d5188;
        case 0x1d518cu: goto label_1d518c;
        case 0x1d5190u: goto label_1d5190;
        case 0x1d5194u: goto label_1d5194;
        case 0x1d5198u: goto label_1d5198;
        case 0x1d519cu: goto label_1d519c;
        case 0x1d51a0u: goto label_1d51a0;
        case 0x1d51a4u: goto label_1d51a4;
        case 0x1d51a8u: goto label_1d51a8;
        case 0x1d51acu: goto label_1d51ac;
        case 0x1d51b0u: goto label_1d51b0;
        case 0x1d51b4u: goto label_1d51b4;
        case 0x1d51b8u: goto label_1d51b8;
        case 0x1d51bcu: goto label_1d51bc;
        case 0x1d51c0u: goto label_1d51c0;
        case 0x1d51c4u: goto label_1d51c4;
        case 0x1d51c8u: goto label_1d51c8;
        case 0x1d51ccu: goto label_1d51cc;
        case 0x1d51d0u: goto label_1d51d0;
        case 0x1d51d4u: goto label_1d51d4;
        case 0x1d51d8u: goto label_1d51d8;
        case 0x1d51dcu: goto label_1d51dc;
        case 0x1d51e0u: goto label_1d51e0;
        case 0x1d51e4u: goto label_1d51e4;
        case 0x1d51e8u: goto label_1d51e8;
        case 0x1d51ecu: goto label_1d51ec;
        case 0x1d51f0u: goto label_1d51f0;
        case 0x1d51f4u: goto label_1d51f4;
        case 0x1d51f8u: goto label_1d51f8;
        case 0x1d51fcu: goto label_1d51fc;
        case 0x1d5200u: goto label_1d5200;
        case 0x1d5204u: goto label_1d5204;
        case 0x1d5208u: goto label_1d5208;
        case 0x1d520cu: goto label_1d520c;
        case 0x1d5210u: goto label_1d5210;
        case 0x1d5214u: goto label_1d5214;
        case 0x1d5218u: goto label_1d5218;
        case 0x1d521cu: goto label_1d521c;
        case 0x1d5220u: goto label_1d5220;
        case 0x1d5224u: goto label_1d5224;
        case 0x1d5228u: goto label_1d5228;
        case 0x1d522cu: goto label_1d522c;
        case 0x1d5230u: goto label_1d5230;
        case 0x1d5234u: goto label_1d5234;
        case 0x1d5238u: goto label_1d5238;
        case 0x1d523cu: goto label_1d523c;
        case 0x1d5240u: goto label_1d5240;
        case 0x1d5244u: goto label_1d5244;
        case 0x1d5248u: goto label_1d5248;
        case 0x1d524cu: goto label_1d524c;
        case 0x1d5250u: goto label_1d5250;
        case 0x1d5254u: goto label_1d5254;
        case 0x1d5258u: goto label_1d5258;
        case 0x1d525cu: goto label_1d525c;
        case 0x1d5260u: goto label_1d5260;
        case 0x1d5264u: goto label_1d5264;
        case 0x1d5268u: goto label_1d5268;
        case 0x1d526cu: goto label_1d526c;
        case 0x1d5270u: goto label_1d5270;
        case 0x1d5274u: goto label_1d5274;
        case 0x1d5278u: goto label_1d5278;
        case 0x1d527cu: goto label_1d527c;
        case 0x1d5280u: goto label_1d5280;
        case 0x1d5284u: goto label_1d5284;
        case 0x1d5288u: goto label_1d5288;
        case 0x1d528cu: goto label_1d528c;
        case 0x1d5290u: goto label_1d5290;
        case 0x1d5294u: goto label_1d5294;
        case 0x1d5298u: goto label_1d5298;
        case 0x1d529cu: goto label_1d529c;
        case 0x1d52a0u: goto label_1d52a0;
        case 0x1d52a4u: goto label_1d52a4;
        case 0x1d52a8u: goto label_1d52a8;
        case 0x1d52acu: goto label_1d52ac;
        case 0x1d52b0u: goto label_1d52b0;
        case 0x1d52b4u: goto label_1d52b4;
        case 0x1d52b8u: goto label_1d52b8;
        case 0x1d52bcu: goto label_1d52bc;
        case 0x1d52c0u: goto label_1d52c0;
        case 0x1d52c4u: goto label_1d52c4;
        case 0x1d52c8u: goto label_1d52c8;
        case 0x1d52ccu: goto label_1d52cc;
        case 0x1d52d0u: goto label_1d52d0;
        case 0x1d52d4u: goto label_1d52d4;
        case 0x1d52d8u: goto label_1d52d8;
        case 0x1d52dcu: goto label_1d52dc;
        case 0x1d52e0u: goto label_1d52e0;
        case 0x1d52e4u: goto label_1d52e4;
        case 0x1d52e8u: goto label_1d52e8;
        case 0x1d52ecu: goto label_1d52ec;
        case 0x1d52f0u: goto label_1d52f0;
        case 0x1d52f4u: goto label_1d52f4;
        case 0x1d52f8u: goto label_1d52f8;
        case 0x1d52fcu: goto label_1d52fc;
        case 0x1d5300u: goto label_1d5300;
        case 0x1d5304u: goto label_1d5304;
        case 0x1d5308u: goto label_1d5308;
        case 0x1d530cu: goto label_1d530c;
        case 0x1d5310u: goto label_1d5310;
        case 0x1d5314u: goto label_1d5314;
        case 0x1d5318u: goto label_1d5318;
        case 0x1d531cu: goto label_1d531c;
        case 0x1d5320u: goto label_1d5320;
        case 0x1d5324u: goto label_1d5324;
        case 0x1d5328u: goto label_1d5328;
        case 0x1d532cu: goto label_1d532c;
        case 0x1d5330u: goto label_1d5330;
        case 0x1d5334u: goto label_1d5334;
        case 0x1d5338u: goto label_1d5338;
        case 0x1d533cu: goto label_1d533c;
        case 0x1d5340u: goto label_1d5340;
        case 0x1d5344u: goto label_1d5344;
        case 0x1d5348u: goto label_1d5348;
        case 0x1d534cu: goto label_1d534c;
        case 0x1d5350u: goto label_1d5350;
        case 0x1d5354u: goto label_1d5354;
        case 0x1d5358u: goto label_1d5358;
        case 0x1d535cu: goto label_1d535c;
        case 0x1d5360u: goto label_1d5360;
        case 0x1d5364u: goto label_1d5364;
        case 0x1d5368u: goto label_1d5368;
        case 0x1d536cu: goto label_1d536c;
        case 0x1d5370u: goto label_1d5370;
        case 0x1d5374u: goto label_1d5374;
        case 0x1d5378u: goto label_1d5378;
        case 0x1d537cu: goto label_1d537c;
        case 0x1d5380u: goto label_1d5380;
        case 0x1d5384u: goto label_1d5384;
        case 0x1d5388u: goto label_1d5388;
        case 0x1d538cu: goto label_1d538c;
        case 0x1d5390u: goto label_1d5390;
        case 0x1d5394u: goto label_1d5394;
        case 0x1d5398u: goto label_1d5398;
        case 0x1d539cu: goto label_1d539c;
        case 0x1d53a0u: goto label_1d53a0;
        case 0x1d53a4u: goto label_1d53a4;
        case 0x1d53a8u: goto label_1d53a8;
        case 0x1d53acu: goto label_1d53ac;
        case 0x1d53b0u: goto label_1d53b0;
        case 0x1d53b4u: goto label_1d53b4;
        case 0x1d53b8u: goto label_1d53b8;
        case 0x1d53bcu: goto label_1d53bc;
        case 0x1d53c0u: goto label_1d53c0;
        case 0x1d53c4u: goto label_1d53c4;
        case 0x1d53c8u: goto label_1d53c8;
        case 0x1d53ccu: goto label_1d53cc;
        case 0x1d53d0u: goto label_1d53d0;
        case 0x1d53d4u: goto label_1d53d4;
        case 0x1d53d8u: goto label_1d53d8;
        case 0x1d53dcu: goto label_1d53dc;
        case 0x1d53e0u: goto label_1d53e0;
        case 0x1d53e4u: goto label_1d53e4;
        case 0x1d53e8u: goto label_1d53e8;
        case 0x1d53ecu: goto label_1d53ec;
        case 0x1d53f0u: goto label_1d53f0;
        case 0x1d53f4u: goto label_1d53f4;
        case 0x1d53f8u: goto label_1d53f8;
        case 0x1d53fcu: goto label_1d53fc;
        case 0x1d5400u: goto label_1d5400;
        case 0x1d5404u: goto label_1d5404;
        case 0x1d5408u: goto label_1d5408;
        case 0x1d540cu: goto label_1d540c;
        case 0x1d5410u: goto label_1d5410;
        case 0x1d5414u: goto label_1d5414;
        case 0x1d5418u: goto label_1d5418;
        case 0x1d541cu: goto label_1d541c;
        case 0x1d5420u: goto label_1d5420;
        case 0x1d5424u: goto label_1d5424;
        case 0x1d5428u: goto label_1d5428;
        case 0x1d542cu: goto label_1d542c;
        case 0x1d5430u: goto label_1d5430;
        case 0x1d5434u: goto label_1d5434;
        case 0x1d5438u: goto label_1d5438;
        case 0x1d543cu: goto label_1d543c;
        case 0x1d5440u: goto label_1d5440;
        case 0x1d5444u: goto label_1d5444;
        case 0x1d5448u: goto label_1d5448;
        case 0x1d544cu: goto label_1d544c;
        case 0x1d5450u: goto label_1d5450;
        case 0x1d5454u: goto label_1d5454;
        case 0x1d5458u: goto label_1d5458;
        case 0x1d545cu: goto label_1d545c;
        case 0x1d5460u: goto label_1d5460;
        case 0x1d5464u: goto label_1d5464;
        case 0x1d5468u: goto label_1d5468;
        case 0x1d546cu: goto label_1d546c;
        case 0x1d5470u: goto label_1d5470;
        case 0x1d5474u: goto label_1d5474;
        case 0x1d5478u: goto label_1d5478;
        case 0x1d547cu: goto label_1d547c;
        case 0x1d5480u: goto label_1d5480;
        case 0x1d5484u: goto label_1d5484;
        case 0x1d5488u: goto label_1d5488;
        case 0x1d548cu: goto label_1d548c;
        case 0x1d5490u: goto label_1d5490;
        case 0x1d5494u: goto label_1d5494;
        case 0x1d5498u: goto label_1d5498;
        case 0x1d549cu: goto label_1d549c;
        case 0x1d54a0u: goto label_1d54a0;
        case 0x1d54a4u: goto label_1d54a4;
        case 0x1d54a8u: goto label_1d54a8;
        case 0x1d54acu: goto label_1d54ac;
        case 0x1d54b0u: goto label_1d54b0;
        case 0x1d54b4u: goto label_1d54b4;
        case 0x1d54b8u: goto label_1d54b8;
        case 0x1d54bcu: goto label_1d54bc;
        case 0x1d54c0u: goto label_1d54c0;
        case 0x1d54c4u: goto label_1d54c4;
        case 0x1d54c8u: goto label_1d54c8;
        case 0x1d54ccu: goto label_1d54cc;
        case 0x1d54d0u: goto label_1d54d0;
        case 0x1d54d4u: goto label_1d54d4;
        case 0x1d54d8u: goto label_1d54d8;
        case 0x1d54dcu: goto label_1d54dc;
        case 0x1d54e0u: goto label_1d54e0;
        case 0x1d54e4u: goto label_1d54e4;
        case 0x1d54e8u: goto label_1d54e8;
        case 0x1d54ecu: goto label_1d54ec;
        case 0x1d54f0u: goto label_1d54f0;
        case 0x1d54f4u: goto label_1d54f4;
        case 0x1d54f8u: goto label_1d54f8;
        case 0x1d54fcu: goto label_1d54fc;
        case 0x1d5500u: goto label_1d5500;
        case 0x1d5504u: goto label_1d5504;
        case 0x1d5508u: goto label_1d5508;
        case 0x1d550cu: goto label_1d550c;
        case 0x1d5510u: goto label_1d5510;
        case 0x1d5514u: goto label_1d5514;
        case 0x1d5518u: goto label_1d5518;
        case 0x1d551cu: goto label_1d551c;
        case 0x1d5520u: goto label_1d5520;
        case 0x1d5524u: goto label_1d5524;
        case 0x1d5528u: goto label_1d5528;
        case 0x1d552cu: goto label_1d552c;
        case 0x1d5530u: goto label_1d5530;
        case 0x1d5534u: goto label_1d5534;
        case 0x1d5538u: goto label_1d5538;
        case 0x1d553cu: goto label_1d553c;
        case 0x1d5540u: goto label_1d5540;
        case 0x1d5544u: goto label_1d5544;
        case 0x1d5548u: goto label_1d5548;
        case 0x1d554cu: goto label_1d554c;
        case 0x1d5550u: goto label_1d5550;
        case 0x1d5554u: goto label_1d5554;
        case 0x1d5558u: goto label_1d5558;
        case 0x1d555cu: goto label_1d555c;
        case 0x1d5560u: goto label_1d5560;
        case 0x1d5564u: goto label_1d5564;
        case 0x1d5568u: goto label_1d5568;
        case 0x1d556cu: goto label_1d556c;
        case 0x1d5570u: goto label_1d5570;
        case 0x1d5574u: goto label_1d5574;
        case 0x1d5578u: goto label_1d5578;
        case 0x1d557cu: goto label_1d557c;
        case 0x1d5580u: goto label_1d5580;
        case 0x1d5584u: goto label_1d5584;
        case 0x1d5588u: goto label_1d5588;
        case 0x1d558cu: goto label_1d558c;
        case 0x1d5590u: goto label_1d5590;
        case 0x1d5594u: goto label_1d5594;
        case 0x1d5598u: goto label_1d5598;
        case 0x1d559cu: goto label_1d559c;
        case 0x1d55a0u: goto label_1d55a0;
        case 0x1d55a4u: goto label_1d55a4;
        case 0x1d55a8u: goto label_1d55a8;
        case 0x1d55acu: goto label_1d55ac;
        case 0x1d55b0u: goto label_1d55b0;
        case 0x1d55b4u: goto label_1d55b4;
        case 0x1d55b8u: goto label_1d55b8;
        case 0x1d55bcu: goto label_1d55bc;
        case 0x1d55c0u: goto label_1d55c0;
        case 0x1d55c4u: goto label_1d55c4;
        case 0x1d55c8u: goto label_1d55c8;
        case 0x1d55ccu: goto label_1d55cc;
        case 0x1d55d0u: goto label_1d55d0;
        case 0x1d55d4u: goto label_1d55d4;
        case 0x1d55d8u: goto label_1d55d8;
        case 0x1d55dcu: goto label_1d55dc;
        case 0x1d55e0u: goto label_1d55e0;
        case 0x1d55e4u: goto label_1d55e4;
        case 0x1d55e8u: goto label_1d55e8;
        case 0x1d55ecu: goto label_1d55ec;
        case 0x1d55f0u: goto label_1d55f0;
        case 0x1d55f4u: goto label_1d55f4;
        case 0x1d55f8u: goto label_1d55f8;
        case 0x1d55fcu: goto label_1d55fc;
        case 0x1d5600u: goto label_1d5600;
        case 0x1d5604u: goto label_1d5604;
        case 0x1d5608u: goto label_1d5608;
        case 0x1d560cu: goto label_1d560c;
        case 0x1d5610u: goto label_1d5610;
        case 0x1d5614u: goto label_1d5614;
        case 0x1d5618u: goto label_1d5618;
        case 0x1d561cu: goto label_1d561c;
        case 0x1d5620u: goto label_1d5620;
        case 0x1d5624u: goto label_1d5624;
        case 0x1d5628u: goto label_1d5628;
        case 0x1d562cu: goto label_1d562c;
        case 0x1d5630u: goto label_1d5630;
        case 0x1d5634u: goto label_1d5634;
        case 0x1d5638u: goto label_1d5638;
        case 0x1d563cu: goto label_1d563c;
        case 0x1d5640u: goto label_1d5640;
        case 0x1d5644u: goto label_1d5644;
        case 0x1d5648u: goto label_1d5648;
        case 0x1d564cu: goto label_1d564c;
        case 0x1d5650u: goto label_1d5650;
        case 0x1d5654u: goto label_1d5654;
        case 0x1d5658u: goto label_1d5658;
        case 0x1d565cu: goto label_1d565c;
        case 0x1d5660u: goto label_1d5660;
        case 0x1d5664u: goto label_1d5664;
        case 0x1d5668u: goto label_1d5668;
        case 0x1d566cu: goto label_1d566c;
        case 0x1d5670u: goto label_1d5670;
        case 0x1d5674u: goto label_1d5674;
        case 0x1d5678u: goto label_1d5678;
        case 0x1d567cu: goto label_1d567c;
        case 0x1d5680u: goto label_1d5680;
        case 0x1d5684u: goto label_1d5684;
        case 0x1d5688u: goto label_1d5688;
        case 0x1d568cu: goto label_1d568c;
        case 0x1d5690u: goto label_1d5690;
        case 0x1d5694u: goto label_1d5694;
        case 0x1d5698u: goto label_1d5698;
        case 0x1d569cu: goto label_1d569c;
        case 0x1d56a0u: goto label_1d56a0;
        case 0x1d56a4u: goto label_1d56a4;
        case 0x1d56a8u: goto label_1d56a8;
        case 0x1d56acu: goto label_1d56ac;
        case 0x1d56b0u: goto label_1d56b0;
        case 0x1d56b4u: goto label_1d56b4;
        case 0x1d56b8u: goto label_1d56b8;
        case 0x1d56bcu: goto label_1d56bc;
        case 0x1d56c0u: goto label_1d56c0;
        case 0x1d56c4u: goto label_1d56c4;
        case 0x1d56c8u: goto label_1d56c8;
        case 0x1d56ccu: goto label_1d56cc;
        case 0x1d56d0u: goto label_1d56d0;
        case 0x1d56d4u: goto label_1d56d4;
        case 0x1d56d8u: goto label_1d56d8;
        case 0x1d56dcu: goto label_1d56dc;
        case 0x1d56e0u: goto label_1d56e0;
        case 0x1d56e4u: goto label_1d56e4;
        case 0x1d56e8u: goto label_1d56e8;
        case 0x1d56ecu: goto label_1d56ec;
        case 0x1d56f0u: goto label_1d56f0;
        case 0x1d56f4u: goto label_1d56f4;
        case 0x1d56f8u: goto label_1d56f8;
        case 0x1d56fcu: goto label_1d56fc;
        case 0x1d5700u: goto label_1d5700;
        case 0x1d5704u: goto label_1d5704;
        case 0x1d5708u: goto label_1d5708;
        case 0x1d570cu: goto label_1d570c;
        case 0x1d5710u: goto label_1d5710;
        case 0x1d5714u: goto label_1d5714;
        case 0x1d5718u: goto label_1d5718;
        case 0x1d571cu: goto label_1d571c;
        case 0x1d5720u: goto label_1d5720;
        case 0x1d5724u: goto label_1d5724;
        case 0x1d5728u: goto label_1d5728;
        case 0x1d572cu: goto label_1d572c;
        case 0x1d5730u: goto label_1d5730;
        case 0x1d5734u: goto label_1d5734;
        case 0x1d5738u: goto label_1d5738;
        case 0x1d573cu: goto label_1d573c;
        case 0x1d5740u: goto label_1d5740;
        case 0x1d5744u: goto label_1d5744;
        case 0x1d5748u: goto label_1d5748;
        case 0x1d574cu: goto label_1d574c;
        case 0x1d5750u: goto label_1d5750;
        case 0x1d5754u: goto label_1d5754;
        case 0x1d5758u: goto label_1d5758;
        case 0x1d575cu: goto label_1d575c;
        case 0x1d5760u: goto label_1d5760;
        case 0x1d5764u: goto label_1d5764;
        case 0x1d5768u: goto label_1d5768;
        case 0x1d576cu: goto label_1d576c;
        case 0x1d5770u: goto label_1d5770;
        case 0x1d5774u: goto label_1d5774;
        case 0x1d5778u: goto label_1d5778;
        case 0x1d577cu: goto label_1d577c;
        case 0x1d5780u: goto label_1d5780;
        case 0x1d5784u: goto label_1d5784;
        case 0x1d5788u: goto label_1d5788;
        case 0x1d578cu: goto label_1d578c;
        case 0x1d5790u: goto label_1d5790;
        case 0x1d5794u: goto label_1d5794;
        case 0x1d5798u: goto label_1d5798;
        case 0x1d579cu: goto label_1d579c;
        case 0x1d57a0u: goto label_1d57a0;
        case 0x1d57a4u: goto label_1d57a4;
        case 0x1d57a8u: goto label_1d57a8;
        case 0x1d57acu: goto label_1d57ac;
        case 0x1d57b0u: goto label_1d57b0;
        case 0x1d57b4u: goto label_1d57b4;
        case 0x1d57b8u: goto label_1d57b8;
        case 0x1d57bcu: goto label_1d57bc;
        case 0x1d57c0u: goto label_1d57c0;
        case 0x1d57c4u: goto label_1d57c4;
        case 0x1d57c8u: goto label_1d57c8;
        case 0x1d57ccu: goto label_1d57cc;
        case 0x1d57d0u: goto label_1d57d0;
        case 0x1d57d4u: goto label_1d57d4;
        case 0x1d57d8u: goto label_1d57d8;
        case 0x1d57dcu: goto label_1d57dc;
        case 0x1d57e0u: goto label_1d57e0;
        case 0x1d57e4u: goto label_1d57e4;
        case 0x1d57e8u: goto label_1d57e8;
        case 0x1d57ecu: goto label_1d57ec;
        case 0x1d57f0u: goto label_1d57f0;
        case 0x1d57f4u: goto label_1d57f4;
        case 0x1d57f8u: goto label_1d57f8;
        case 0x1d57fcu: goto label_1d57fc;
        case 0x1d5800u: goto label_1d5800;
        case 0x1d5804u: goto label_1d5804;
        case 0x1d5808u: goto label_1d5808;
        case 0x1d580cu: goto label_1d580c;
        case 0x1d5810u: goto label_1d5810;
        case 0x1d5814u: goto label_1d5814;
        case 0x1d5818u: goto label_1d5818;
        case 0x1d581cu: goto label_1d581c;
        case 0x1d5820u: goto label_1d5820;
        case 0x1d5824u: goto label_1d5824;
        case 0x1d5828u: goto label_1d5828;
        case 0x1d582cu: goto label_1d582c;
        case 0x1d5830u: goto label_1d5830;
        case 0x1d5834u: goto label_1d5834;
        case 0x1d5838u: goto label_1d5838;
        case 0x1d583cu: goto label_1d583c;
        case 0x1d5840u: goto label_1d5840;
        case 0x1d5844u: goto label_1d5844;
        case 0x1d5848u: goto label_1d5848;
        case 0x1d584cu: goto label_1d584c;
        case 0x1d5850u: goto label_1d5850;
        case 0x1d5854u: goto label_1d5854;
        case 0x1d5858u: goto label_1d5858;
        case 0x1d585cu: goto label_1d585c;
        case 0x1d5860u: goto label_1d5860;
        case 0x1d5864u: goto label_1d5864;
        case 0x1d5868u: goto label_1d5868;
        case 0x1d586cu: goto label_1d586c;
        case 0x1d5870u: goto label_1d5870;
        case 0x1d5874u: goto label_1d5874;
        case 0x1d5878u: goto label_1d5878;
        case 0x1d587cu: goto label_1d587c;
        case 0x1d5880u: goto label_1d5880;
        case 0x1d5884u: goto label_1d5884;
        case 0x1d5888u: goto label_1d5888;
        case 0x1d588cu: goto label_1d588c;
        case 0x1d5890u: goto label_1d5890;
        case 0x1d5894u: goto label_1d5894;
        case 0x1d5898u: goto label_1d5898;
        case 0x1d589cu: goto label_1d589c;
        case 0x1d58a0u: goto label_1d58a0;
        case 0x1d58a4u: goto label_1d58a4;
        case 0x1d58a8u: goto label_1d58a8;
        case 0x1d58acu: goto label_1d58ac;
        case 0x1d58b0u: goto label_1d58b0;
        case 0x1d58b4u: goto label_1d58b4;
        case 0x1d58b8u: goto label_1d58b8;
        case 0x1d58bcu: goto label_1d58bc;
        case 0x1d58c0u: goto label_1d58c0;
        case 0x1d58c4u: goto label_1d58c4;
        case 0x1d58c8u: goto label_1d58c8;
        case 0x1d58ccu: goto label_1d58cc;
        case 0x1d58d0u: goto label_1d58d0;
        case 0x1d58d4u: goto label_1d58d4;
        case 0x1d58d8u: goto label_1d58d8;
        case 0x1d58dcu: goto label_1d58dc;
        case 0x1d58e0u: goto label_1d58e0;
        case 0x1d58e4u: goto label_1d58e4;
        case 0x1d58e8u: goto label_1d58e8;
        case 0x1d58ecu: goto label_1d58ec;
        case 0x1d58f0u: goto label_1d58f0;
        case 0x1d58f4u: goto label_1d58f4;
        case 0x1d58f8u: goto label_1d58f8;
        case 0x1d58fcu: goto label_1d58fc;
        case 0x1d5900u: goto label_1d5900;
        case 0x1d5904u: goto label_1d5904;
        case 0x1d5908u: goto label_1d5908;
        case 0x1d590cu: goto label_1d590c;
        case 0x1d5910u: goto label_1d5910;
        case 0x1d5914u: goto label_1d5914;
        case 0x1d5918u: goto label_1d5918;
        case 0x1d591cu: goto label_1d591c;
        case 0x1d5920u: goto label_1d5920;
        case 0x1d5924u: goto label_1d5924;
        case 0x1d5928u: goto label_1d5928;
        case 0x1d592cu: goto label_1d592c;
        case 0x1d5930u: goto label_1d5930;
        case 0x1d5934u: goto label_1d5934;
        case 0x1d5938u: goto label_1d5938;
        case 0x1d593cu: goto label_1d593c;
        case 0x1d5940u: goto label_1d5940;
        case 0x1d5944u: goto label_1d5944;
        case 0x1d5948u: goto label_1d5948;
        case 0x1d594cu: goto label_1d594c;
        default: return;
    }

label_1d5180:
    // 0x1d5180: 0x3c054049  lui         $a1, 0x4049
    ctx->pc = 0x1d5180u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16457 << 16));
label_1d5184:
    // 0x1d5184: 0x34a60fdb  ori         $a2, $a1, 0xFDB
    ctx->pc = 0x1d5184u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_1d5188:
    // 0x1d5188: 0x3c054334  lui         $a1, 0x4334
    ctx->pc = 0x1d5188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17204 << 16));
label_1d518c:
    // 0x1d518c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1d518cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_1d5190:
    // 0x1d5190: 0x460320c3  div.s       $f3, $f4, $f3
    ctx->pc = 0x1d5190u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[3] = ctx->f[4] / ctx->f[3];
label_1d5194:
    // 0x1d5194: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x1d5194u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d5198:
    // 0x1d5198: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1d5198u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d519c:
    // 0x1d519c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1d519cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1d51a0:
    // 0x1d51a0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1d51a0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_1d51a4:
    // 0x1d51a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d51a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d51a8:
    // 0x1d51a8: 0xe46001d0  swc1        $f0, 0x1D0($v1)
    ctx->pc = 0x1d51a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 464), bits); }
label_1d51ac:
    // 0x1d51ac: 0xc46001d0  lwc1        $f0, 0x1D0($v1)
    ctx->pc = 0x1d51acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d51b0:
    // 0x1d51b0: 0x3c054049  lui         $a1, 0x4049
    ctx->pc = 0x1d51b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16457 << 16));
label_1d51b4:
    // 0x1d51b4: 0xc4620040  lwc1        $f2, 0x40($v1)
    ctx->pc = 0x1d51b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d51b8:
    // 0x1d51b8: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x1d51b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_1d51bc:
    // 0x1d51bc: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x1d51bcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1d51c0:
    // 0x1d51c0: 0x0  nop
    ctx->pc = 0x1d51c0u;
    // NOP
label_1d51c4:
    // 0x1d51c4: 0x46020041  sub.s       $f1, $f0, $f2
    ctx->pc = 0x1d51c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1d51c8:
    // 0x1d51c8: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x1d51c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d51cc:
    // 0x1d51cc: 0x0  nop
    ctx->pc = 0x1d51ccu;
    // NOP
label_1d51d0:
    // 0x1d51d0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1d51d4:
    if (ctx->pc == 0x1D51D4u) {
        ctx->pc = 0x1D51D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51D0u;
        // 0x1d51d4: 0x3c05c049  lui         $a1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D51D8u;
        goto label_1d51d8;
    }
    ctx->pc = 0x1D51D0u;
    {
        const bool branch_taken_0x1d51d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D51D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51D0u;
        // 0x1d51d4: 0x3c05c049  lui         $a1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d51d0) {
            ctx->pc = 0x1D51ECu;
            goto label_1d51ec;
        }
    }
    ctx->pc = 0x1D51D8u;
label_1d51d8:
    // 0x1d51d8: 0x3c0540c9  lui         $a1, 0x40C9
    ctx->pc = 0x1d51d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16585 << 16));
label_1d51dc:
    // 0x1d51dc: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x1d51dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_1d51e0:
    // 0x1d51e0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d51e0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d51e4:
    // 0x1d51e4: 0x1000000d  b           . + 4 + (0xD << 2)
label_1d51e8:
    if (ctx->pc == 0x1D51E8u) {
        ctx->pc = 0x1D51E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51E4u;
        // 0x1d51e8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D51ECu;
        goto label_1d51ec;
    }
    ctx->pc = 0x1D51E4u;
    {
        const bool branch_taken_0x1d51e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D51E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51E4u;
        // 0x1d51e8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d51e4) {
            ctx->pc = 0x1D521Cu;
            goto label_1d521c;
        }
    }
    ctx->pc = 0x1D51ECu;
label_1d51ec:
    // 0x1d51ec: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x1d51ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_1d51f0:
    // 0x1d51f0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d51f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d51f4:
    // 0x1d51f4: 0x0  nop
    ctx->pc = 0x1d51f4u;
    // NOP
label_1d51f8:
    // 0x1d51f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d51f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d51fc:
    // 0x1d51fc: 0x0  nop
    ctx->pc = 0x1d51fcu;
    // NOP
label_1d5200:
    // 0x1d5200: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1d5204:
    if (ctx->pc == 0x1D5204u) {
        ctx->pc = 0x1D5208u;
        goto label_1d5208;
    }
    ctx->pc = 0x1D5200u;
    {
        const bool branch_taken_0x1d5200 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d5200) {
            ctx->pc = 0x1D521Cu;
            goto label_1d521c;
        }
    }
    ctx->pc = 0x1D5208u;
label_1d5208:
    // 0x1d5208: 0x3c0540c9  lui         $a1, 0x40C9
    ctx->pc = 0x1d5208u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16585 << 16));
label_1d520c:
    // 0x1d520c: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x1d520cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_1d5210:
    // 0x1d5210: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d5210u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d5214:
    // 0x1d5214: 0x10000001  b           . + 4 + (0x1 << 2)
label_1d5218:
    if (ctx->pc == 0x1D5218u) {
        ctx->pc = 0x1D5218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5214u;
        // 0x1d5218: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D521Cu;
        goto label_1d521c;
    }
    ctx->pc = 0x1D5214u;
    {
        const bool branch_taken_0x1d5214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5214u;
        // 0x1d5218: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5214) {
            ctx->pc = 0x1D521Cu;
            goto label_1d521c;
        }
    }
    ctx->pc = 0x1D521Cu;
label_1d521c:
    // 0x1d521c: 0x3c05bf06  lui         $a1, 0xBF06
    ctx->pc = 0x1d521cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48902 << 16));
label_1d5220:
    // 0x1d5220: 0x34a50a92  ori         $a1, $a1, 0xA92
    ctx->pc = 0x1d5220u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2706);
label_1d5224:
    // 0x1d5224: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d5224u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d5228:
    // 0x1d5228: 0x0  nop
    ctx->pc = 0x1d5228u;
    // NOP
label_1d522c:
    // 0x1d522c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d522cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d5230:
    // 0x1d5230: 0x0  nop
    ctx->pc = 0x1d5230u;
    // NOP
label_1d5234:
    // 0x1d5234: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_1d5238:
    if (ctx->pc == 0x1D5238u) {
        ctx->pc = 0x1D5238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5234u;
        // 0x1d5238: 0x3c053f06  lui         $a1, 0x3F06 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16134 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D523Cu;
        goto label_1d523c;
    }
    ctx->pc = 0x1D5234u;
    {
        const bool branch_taken_0x1d5234 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D5238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5234u;
        // 0x1d5238: 0x3c053f06  lui         $a1, 0x3F06 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16134 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5234) {
            ctx->pc = 0x1D52B8u;
            goto label_1d52b8;
        }
    }
    ctx->pc = 0x1D523Cu;
label_1d523c:
    // 0x1d523c: 0x3c063f06  lui         $a2, 0x3F06
    ctx->pc = 0x1d523cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16134 << 16));
label_1d5240:
    // 0x1d5240: 0x3c054049  lui         $a1, 0x4049
    ctx->pc = 0x1d5240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16457 << 16));
label_1d5244:
    // 0x1d5244: 0x34c60a92  ori         $a2, $a2, 0xA92
    ctx->pc = 0x1d5244u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2706);
label_1d5248:
    // 0x1d5248: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x1d5248u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_1d524c:
    // 0x1d524c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1d524cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d5250:
    // 0x1d5250: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d5250u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d5254:
    // 0x1d5254: 0x0  nop
    ctx->pc = 0x1d5254u;
    // NOP
label_1d5258:
    // 0x1d5258: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1d5258u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1d525c:
    // 0x1d525c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d525cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d5260:
    // 0x1d5260: 0x0  nop
    ctx->pc = 0x1d5260u;
    // NOP
label_1d5264:
    // 0x1d5264: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1d5268:
    if (ctx->pc == 0x1D5268u) {
        ctx->pc = 0x1D5268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5264u;
        // 0x1d5268: 0x3c05c049  lui         $a1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D526Cu;
        goto label_1d526c;
    }
    ctx->pc = 0x1D5264u;
    {
        const bool branch_taken_0x1d5264 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D5268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5264u;
        // 0x1d5268: 0x3c05c049  lui         $a1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5264) {
            ctx->pc = 0x1D5280u;
            goto label_1d5280;
        }
    }
    ctx->pc = 0x1D526Cu;
label_1d526c:
    // 0x1d526c: 0x3c0540c9  lui         $a1, 0x40C9
    ctx->pc = 0x1d526cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16585 << 16));
label_1d5270:
    // 0x1d5270: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x1d5270u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_1d5274:
    // 0x1d5274: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d5274u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d5278:
    // 0x1d5278: 0x1000000d  b           . + 4 + (0xD << 2)
label_1d527c:
    if (ctx->pc == 0x1D527Cu) {
        ctx->pc = 0x1D527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5278u;
        // 0x1d527c: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5280u;
        goto label_1d5280;
    }
    ctx->pc = 0x1D5278u;
    {
        const bool branch_taken_0x1d5278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5278u;
        // 0x1d527c: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5278) {
            ctx->pc = 0x1D52B0u;
            goto label_1d52b0;
        }
    }
    ctx->pc = 0x1D5280u;
label_1d5280:
    // 0x1d5280: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x1d5280u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_1d5284:
    // 0x1d5284: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d5284u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d5288:
    // 0x1d5288: 0x0  nop
    ctx->pc = 0x1d5288u;
    // NOP
label_1d528c:
    // 0x1d528c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d528cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d5290:
    // 0x1d5290: 0x0  nop
    ctx->pc = 0x1d5290u;
    // NOP
label_1d5294:
    // 0x1d5294: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1d5298:
    if (ctx->pc == 0x1D5298u) {
        ctx->pc = 0x1D529Cu;
        goto label_1d529c;
    }
    ctx->pc = 0x1D5294u;
    {
        const bool branch_taken_0x1d5294 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d5294) {
            ctx->pc = 0x1D52B0u;
            goto label_1d52b0;
        }
    }
    ctx->pc = 0x1D529Cu;
label_1d529c:
    // 0x1d529c: 0x3c0540c9  lui         $a1, 0x40C9
    ctx->pc = 0x1d529cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16585 << 16));
label_1d52a0:
    // 0x1d52a0: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x1d52a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_1d52a4:
    // 0x1d52a4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d52a4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d52a8:
    // 0x1d52a8: 0x10000001  b           . + 4 + (0x1 << 2)
label_1d52ac:
    if (ctx->pc == 0x1D52ACu) {
        ctx->pc = 0x1D52ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52A8u;
        // 0x1d52ac: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D52B0u;
        goto label_1d52b0;
    }
    ctx->pc = 0x1D52A8u;
    {
        const bool branch_taken_0x1d52a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D52ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52A8u;
        // 0x1d52ac: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52a8) {
            ctx->pc = 0x1D52B0u;
            goto label_1d52b0;
        }
    }
    ctx->pc = 0x1D52B0u;
label_1d52b0:
    // 0x1d52b0: 0x10000023  b           . + 4 + (0x23 << 2)
label_1d52b4:
    if (ctx->pc == 0x1D52B4u) {
        ctx->pc = 0x1D52B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52B0u;
        // 0x1d52b4: 0xe46101d0  swc1        $f1, 0x1D0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 464), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D52B8u;
        goto label_1d52b8;
    }
    ctx->pc = 0x1D52B0u;
    {
        const bool branch_taken_0x1d52b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D52B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52B0u;
        // 0x1d52b4: 0xe46101d0  swc1        $f1, 0x1D0($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 464), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52b0) {
            ctx->pc = 0x1D5340u;
            goto label_1d5340;
        }
    }
    ctx->pc = 0x1D52B8u;
label_1d52b8:
    // 0x1d52b8: 0x34a50a92  ori         $a1, $a1, 0xA92
    ctx->pc = 0x1d52b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2706);
label_1d52bc:
    // 0x1d52bc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d52bcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d52c0:
    // 0x1d52c0: 0x0  nop
    ctx->pc = 0x1d52c0u;
    // NOP
label_1d52c4:
    // 0x1d52c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d52c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d52c8:
    // 0x1d52c8: 0x0  nop
    ctx->pc = 0x1d52c8u;
    // NOP
label_1d52cc:
    // 0x1d52cc: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
label_1d52d0:
    if (ctx->pc == 0x1D52D0u) {
        ctx->pc = 0x1D52D4u;
        goto label_1d52d4;
    }
    ctx->pc = 0x1D52CCu;
    {
        const bool branch_taken_0x1d52cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d52cc) {
            ctx->pc = 0x1D5340u;
            goto label_1d5340;
        }
    }
    ctx->pc = 0x1D52D4u;
label_1d52d4:
    // 0x1d52d4: 0x46020040  add.s       $f1, $f0, $f2
    ctx->pc = 0x1d52d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1d52d8:
    // 0x1d52d8: 0x3c054049  lui         $a1, 0x4049
    ctx->pc = 0x1d52d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16457 << 16));
label_1d52dc:
    // 0x1d52dc: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x1d52dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_1d52e0:
    // 0x1d52e0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d52e0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d52e4:
    // 0x1d52e4: 0x0  nop
    ctx->pc = 0x1d52e4u;
    // NOP
label_1d52e8:
    // 0x1d52e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d52e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d52ec:
    // 0x1d52ec: 0x0  nop
    ctx->pc = 0x1d52ecu;
    // NOP
label_1d52f0:
    // 0x1d52f0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1d52f4:
    if (ctx->pc == 0x1D52F4u) {
        ctx->pc = 0x1D52F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52F0u;
        // 0x1d52f4: 0x3c05c049  lui         $a1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D52F8u;
        goto label_1d52f8;
    }
    ctx->pc = 0x1D52F0u;
    {
        const bool branch_taken_0x1d52f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D52F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52F0u;
        // 0x1d52f4: 0x3c05c049  lui         $a1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52f0) {
            ctx->pc = 0x1D530Cu;
            goto label_1d530c;
        }
    }
    ctx->pc = 0x1D52F8u;
label_1d52f8:
    // 0x1d52f8: 0x3c0540c9  lui         $a1, 0x40C9
    ctx->pc = 0x1d52f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16585 << 16));
label_1d52fc:
    // 0x1d52fc: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x1d52fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_1d5300:
    // 0x1d5300: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d5300u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d5304:
    // 0x1d5304: 0x1000000d  b           . + 4 + (0xD << 2)
label_1d5308:
    if (ctx->pc == 0x1D5308u) {
        ctx->pc = 0x1D5308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5304u;
        // 0x1d5308: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D530Cu;
        goto label_1d530c;
    }
    ctx->pc = 0x1D5304u;
    {
        const bool branch_taken_0x1d5304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5304u;
        // 0x1d5308: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5304) {
            ctx->pc = 0x1D533Cu;
            goto label_1d533c;
        }
    }
    ctx->pc = 0x1D530Cu;
label_1d530c:
    // 0x1d530c: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x1d530cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_1d5310:
    // 0x1d5310: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d5310u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d5314:
    // 0x1d5314: 0x0  nop
    ctx->pc = 0x1d5314u;
    // NOP
label_1d5318:
    // 0x1d5318: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d5318u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d531c:
    // 0x1d531c: 0x0  nop
    ctx->pc = 0x1d531cu;
    // NOP
label_1d5320:
    // 0x1d5320: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1d5324:
    if (ctx->pc == 0x1D5324u) {
        ctx->pc = 0x1D5328u;
        goto label_1d5328;
    }
    ctx->pc = 0x1D5320u;
    {
        const bool branch_taken_0x1d5320 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d5320) {
            ctx->pc = 0x1D533Cu;
            goto label_1d533c;
        }
    }
    ctx->pc = 0x1D5328u;
label_1d5328:
    // 0x1d5328: 0x3c0540c9  lui         $a1, 0x40C9
    ctx->pc = 0x1d5328u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16585 << 16));
label_1d532c:
    // 0x1d532c: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x1d532cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_1d5330:
    // 0x1d5330: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d5330u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d5334:
    // 0x1d5334: 0x10000001  b           . + 4 + (0x1 << 2)
label_1d5338:
    if (ctx->pc == 0x1D5338u) {
        ctx->pc = 0x1D5338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5334u;
        // 0x1d5338: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D533Cu;
        goto label_1d533c;
    }
    ctx->pc = 0x1D5334u;
    {
        const bool branch_taken_0x1d5334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5334u;
        // 0x1d5338: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5334) {
            ctx->pc = 0x1D533Cu;
            goto label_1d533c;
        }
    }
    ctx->pc = 0x1D533Cu;
label_1d533c:
    // 0x1d533c: 0xe46101d0  swc1        $f1, 0x1D0($v1)
    ctx->pc = 0x1d533cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 464), bits); }
label_1d5340:
    // 0x1d5340: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x1d5340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d5344:
    // 0x1d5344: 0xc46001d4  lwc1        $f0, 0x1D4($v1)
    ctx->pc = 0x1d5344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d5348:
    // 0x1d5348: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1d5348u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_1d534c:
    // 0x1d534c: 0x3c0442fe  lui         $a0, 0x42FE
    ctx->pc = 0x1d534cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17150 << 16));
label_1d5350:
    // 0x1d5350: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1d5350u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d5354:
    // 0x1d5354: 0x0  nop
    ctx->pc = 0x1d5354u;
    // NOP
label_1d5358:
    // 0x1d5358: 0x46022083  div.s       $f2, $f4, $f2
    ctx->pc = 0x1d5358u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[2] = ctx->f[4] / ctx->f[2];
label_1d535c:
    // 0x1d535c: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x1d535cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
label_1d5360:
    // 0x1d5360: 0x34850fdb  ori         $a1, $a0, 0xFDB
    ctx->pc = 0x1d5360u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_1d5364:
    // 0x1d5364: 0x3c044334  lui         $a0, 0x4334
    ctx->pc = 0x1d5364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17204 << 16));
label_1d5368:
    // 0x1d5368: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x1d5368u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1d536c:
    // 0x1d536c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1d536cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d5370:
    // 0x1d5370: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1d5370u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_1d5374:
    // 0x1d5374: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1d5374u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_1d5378:
    // 0x1d5378: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d5378u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d537c:
    // 0x1d537c: 0xe46001d4  swc1        $f0, 0x1D4($v1)
    ctx->pc = 0x1d537cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 468), bits); }
label_1d5380:
    // 0x1d5380: 0xc4620044  lwc1        $f2, 0x44($v1)
    ctx->pc = 0x1d5380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d5384:
    // 0x1d5384: 0x46020041  sub.s       $f1, $f0, $f2
    ctx->pc = 0x1d5384u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1d5388:
    // 0x1d5388: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x1d5388u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d538c:
    // 0x1d538c: 0x0  nop
    ctx->pc = 0x1d538cu;
    // NOP
label_1d5390:
    // 0x1d5390: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1d5394:
    if (ctx->pc == 0x1D5394u) {
        ctx->pc = 0x1D5398u;
        goto label_1d5398;
    }
    ctx->pc = 0x1D5390u;
    {
        const bool branch_taken_0x1d5390 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d5390) {
            ctx->pc = 0x1D53ACu;
            goto label_1d53ac;
        }
    }
    ctx->pc = 0x1D5398u;
label_1d5398:
    // 0x1d5398: 0x3c0440c9  lui         $a0, 0x40C9
    ctx->pc = 0x1d5398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16585 << 16));
label_1d539c:
    // 0x1d539c: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x1d539cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_1d53a0:
    // 0x1d53a0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d53a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d53a4:
    // 0x1d53a4: 0x1000000d  b           . + 4 + (0xD << 2)
label_1d53a8:
    if (ctx->pc == 0x1D53A8u) {
        ctx->pc = 0x1D53A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53A4u;
        // 0x1d53a8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D53ACu;
        goto label_1d53ac;
    }
    ctx->pc = 0x1D53A4u;
    {
        const bool branch_taken_0x1d53a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D53A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53A4u;
        // 0x1d53a8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53a4) {
            ctx->pc = 0x1D53DCu;
            goto label_1d53dc;
        }
    }
    ctx->pc = 0x1D53ACu;
label_1d53ac:
    // 0x1d53ac: 0x3c04c049  lui         $a0, 0xC049
    ctx->pc = 0x1d53acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49225 << 16));
label_1d53b0:
    // 0x1d53b0: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x1d53b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_1d53b4:
    // 0x1d53b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d53b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d53b8:
    // 0x1d53b8: 0x0  nop
    ctx->pc = 0x1d53b8u;
    // NOP
label_1d53bc:
    // 0x1d53bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d53bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d53c0:
    // 0x1d53c0: 0x0  nop
    ctx->pc = 0x1d53c0u;
    // NOP
label_1d53c4:
    // 0x1d53c4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1d53c8:
    if (ctx->pc == 0x1D53C8u) {
        ctx->pc = 0x1D53C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53C4u;
        // 0x1d53c8: 0x3c0440c9  lui         $a0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D53CCu;
        goto label_1d53cc;
    }
    ctx->pc = 0x1D53C4u;
    {
        const bool branch_taken_0x1d53c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D53C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53C4u;
        // 0x1d53c8: 0x3c0440c9  lui         $a0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53c4) {
            ctx->pc = 0x1D53DCu;
            goto label_1d53dc;
        }
    }
    ctx->pc = 0x1D53CCu;
label_1d53cc:
    // 0x1d53cc: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x1d53ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_1d53d0:
    // 0x1d53d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d53d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d53d4:
    // 0x1d53d4: 0x10000001  b           . + 4 + (0x1 << 2)
label_1d53d8:
    if (ctx->pc == 0x1D53D8u) {
        ctx->pc = 0x1D53D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53D4u;
        // 0x1d53d8: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D53DCu;
        goto label_1d53dc;
    }
    ctx->pc = 0x1D53D4u;
    {
        const bool branch_taken_0x1d53d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D53D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53D4u;
        // 0x1d53d8: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53d4) {
            ctx->pc = 0x1D53DCu;
            goto label_1d53dc;
        }
    }
    ctx->pc = 0x1D53DCu;
label_1d53dc:
    // 0x1d53dc: 0x3c04bf49  lui         $a0, 0xBF49
    ctx->pc = 0x1d53dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48969 << 16));
label_1d53e0:
    // 0x1d53e0: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x1d53e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_1d53e4:
    // 0x1d53e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d53e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d53e8:
    // 0x1d53e8: 0x0  nop
    ctx->pc = 0x1d53e8u;
    // NOP
label_1d53ec:
    // 0x1d53ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d53ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d53f0:
    // 0x1d53f0: 0x0  nop
    ctx->pc = 0x1d53f0u;
    // NOP
label_1d53f4:
    // 0x1d53f4: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_1d53f8:
    if (ctx->pc == 0x1D53F8u) {
        ctx->pc = 0x1D53F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53F4u;
        // 0x1d53f8: 0x3c043f49  lui         $a0, 0x3F49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16201 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D53FCu;
        goto label_1d53fc;
    }
    ctx->pc = 0x1D53F4u;
    {
        const bool branch_taken_0x1d53f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D53F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53F4u;
        // 0x1d53f8: 0x3c043f49  lui         $a0, 0x3F49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16201 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53f4) {
            ctx->pc = 0x1D5478u;
            goto label_1d5478;
        }
    }
    ctx->pc = 0x1D53FCu;
label_1d53fc:
    // 0x1d53fc: 0x3c053f49  lui         $a1, 0x3F49
    ctx->pc = 0x1d53fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16201 << 16));
label_1d5400:
    // 0x1d5400: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x1d5400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
label_1d5404:
    // 0x1d5404: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x1d5404u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_1d5408:
    // 0x1d5408: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x1d5408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_1d540c:
    // 0x1d540c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1d540cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d5410:
    // 0x1d5410: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d5410u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d5414:
    // 0x1d5414: 0x0  nop
    ctx->pc = 0x1d5414u;
    // NOP
label_1d5418:
    // 0x1d5418: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1d5418u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1d541c:
    // 0x1d541c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d541cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d5420:
    // 0x1d5420: 0x0  nop
    ctx->pc = 0x1d5420u;
    // NOP
label_1d5424:
    // 0x1d5424: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1d5428:
    if (ctx->pc == 0x1D5428u) {
        ctx->pc = 0x1D5428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5424u;
        // 0x1d5428: 0x3c04c049  lui         $a0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D542Cu;
        goto label_1d542c;
    }
    ctx->pc = 0x1D5424u;
    {
        const bool branch_taken_0x1d5424 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D5428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5424u;
        // 0x1d5428: 0x3c04c049  lui         $a0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5424) {
            ctx->pc = 0x1D5440u;
            goto label_1d5440;
        }
    }
    ctx->pc = 0x1D542Cu;
label_1d542c:
    // 0x1d542c: 0x3c0440c9  lui         $a0, 0x40C9
    ctx->pc = 0x1d542cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16585 << 16));
label_1d5430:
    // 0x1d5430: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x1d5430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_1d5434:
    // 0x1d5434: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d5434u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d5438:
    // 0x1d5438: 0x1000000d  b           . + 4 + (0xD << 2)
label_1d543c:
    if (ctx->pc == 0x1D543Cu) {
        ctx->pc = 0x1D543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5438u;
        // 0x1d543c: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5440u;
        goto label_1d5440;
    }
    ctx->pc = 0x1D5438u;
    {
        const bool branch_taken_0x1d5438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5438u;
        // 0x1d543c: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5438) {
            ctx->pc = 0x1D5470u;
            goto label_1d5470;
        }
    }
    ctx->pc = 0x1D5440u;
label_1d5440:
    // 0x1d5440: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x1d5440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_1d5444:
    // 0x1d5444: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d5444u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d5448:
    // 0x1d5448: 0x0  nop
    ctx->pc = 0x1d5448u;
    // NOP
label_1d544c:
    // 0x1d544c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d544cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d5450:
    // 0x1d5450: 0x0  nop
    ctx->pc = 0x1d5450u;
    // NOP
label_1d5454:
    // 0x1d5454: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1d5458:
    if (ctx->pc == 0x1D5458u) {
        ctx->pc = 0x1D545Cu;
        goto label_1d545c;
    }
    ctx->pc = 0x1D5454u;
    {
        const bool branch_taken_0x1d5454 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d5454) {
            ctx->pc = 0x1D5470u;
            goto label_1d5470;
        }
    }
    ctx->pc = 0x1D545Cu;
label_1d545c:
    // 0x1d545c: 0x3c0440c9  lui         $a0, 0x40C9
    ctx->pc = 0x1d545cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16585 << 16));
label_1d5460:
    // 0x1d5460: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x1d5460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_1d5464:
    // 0x1d5464: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d5464u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d5468:
    // 0x1d5468: 0x10000001  b           . + 4 + (0x1 << 2)
label_1d546c:
    if (ctx->pc == 0x1D546Cu) {
        ctx->pc = 0x1D546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5468u;
        // 0x1d546c: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5470u;
        goto label_1d5470;
    }
    ctx->pc = 0x1D5468u;
    {
        const bool branch_taken_0x1d5468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5468u;
        // 0x1d546c: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5468) {
            ctx->pc = 0x1D5470u;
            goto label_1d5470;
        }
    }
    ctx->pc = 0x1D5470u;
label_1d5470:
    // 0x1d5470: 0x10000023  b           . + 4 + (0x23 << 2)
label_1d5474:
    if (ctx->pc == 0x1D5474u) {
        ctx->pc = 0x1D5474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5470u;
        // 0x1d5474: 0xe46101d4  swc1        $f1, 0x1D4($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 468), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5478u;
        goto label_1d5478;
    }
    ctx->pc = 0x1D5470u;
    {
        const bool branch_taken_0x1d5470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5470u;
        // 0x1d5474: 0xe46101d4  swc1        $f1, 0x1D4($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 468), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5470) {
            ctx->pc = 0x1D5500u;
            goto label_1d5500;
        }
    }
    ctx->pc = 0x1D5478u;
label_1d5478:
    // 0x1d5478: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x1d5478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_1d547c:
    // 0x1d547c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d547cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d5480:
    // 0x1d5480: 0x0  nop
    ctx->pc = 0x1d5480u;
    // NOP
label_1d5484:
    // 0x1d5484: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d5484u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d5488:
    // 0x1d5488: 0x0  nop
    ctx->pc = 0x1d5488u;
    // NOP
label_1d548c:
    // 0x1d548c: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
label_1d5490:
    if (ctx->pc == 0x1D5490u) {
        ctx->pc = 0x1D5494u;
        goto label_1d5494;
    }
    ctx->pc = 0x1D548Cu;
    {
        const bool branch_taken_0x1d548c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d548c) {
            ctx->pc = 0x1D5500u;
            goto label_1d5500;
        }
    }
    ctx->pc = 0x1D5494u;
label_1d5494:
    // 0x1d5494: 0x46020040  add.s       $f1, $f0, $f2
    ctx->pc = 0x1d5494u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1d5498:
    // 0x1d5498: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x1d5498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
label_1d549c:
    // 0x1d549c: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x1d549cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_1d54a0:
    // 0x1d54a0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d54a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d54a4:
    // 0x1d54a4: 0x0  nop
    ctx->pc = 0x1d54a4u;
    // NOP
label_1d54a8:
    // 0x1d54a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d54a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d54ac:
    // 0x1d54ac: 0x0  nop
    ctx->pc = 0x1d54acu;
    // NOP
label_1d54b0:
    // 0x1d54b0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1d54b4:
    if (ctx->pc == 0x1D54B4u) {
        ctx->pc = 0x1D54B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D54B0u;
        // 0x1d54b4: 0x3c04c049  lui         $a0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D54B8u;
        goto label_1d54b8;
    }
    ctx->pc = 0x1D54B0u;
    {
        const bool branch_taken_0x1d54b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D54B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D54B0u;
        // 0x1d54b4: 0x3c04c049  lui         $a0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d54b0) {
            ctx->pc = 0x1D54CCu;
            goto label_1d54cc;
        }
    }
    ctx->pc = 0x1D54B8u;
label_1d54b8:
    // 0x1d54b8: 0x3c0440c9  lui         $a0, 0x40C9
    ctx->pc = 0x1d54b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16585 << 16));
label_1d54bc:
    // 0x1d54bc: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x1d54bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_1d54c0:
    // 0x1d54c0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d54c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d54c4:
    // 0x1d54c4: 0x1000000d  b           . + 4 + (0xD << 2)
label_1d54c8:
    if (ctx->pc == 0x1D54C8u) {
        ctx->pc = 0x1D54C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D54C4u;
        // 0x1d54c8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D54CCu;
        goto label_1d54cc;
    }
    ctx->pc = 0x1D54C4u;
    {
        const bool branch_taken_0x1d54c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D54C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D54C4u;
        // 0x1d54c8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d54c4) {
            ctx->pc = 0x1D54FCu;
            goto label_1d54fc;
        }
    }
    ctx->pc = 0x1D54CCu;
label_1d54cc:
    // 0x1d54cc: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x1d54ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_1d54d0:
    // 0x1d54d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d54d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d54d4:
    // 0x1d54d4: 0x0  nop
    ctx->pc = 0x1d54d4u;
    // NOP
label_1d54d8:
    // 0x1d54d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d54d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d54dc:
    // 0x1d54dc: 0x0  nop
    ctx->pc = 0x1d54dcu;
    // NOP
label_1d54e0:
    // 0x1d54e0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1d54e4:
    if (ctx->pc == 0x1D54E4u) {
        ctx->pc = 0x1D54E8u;
        goto label_1d54e8;
    }
    ctx->pc = 0x1D54E0u;
    {
        const bool branch_taken_0x1d54e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d54e0) {
            ctx->pc = 0x1D54FCu;
            goto label_1d54fc;
        }
    }
    ctx->pc = 0x1D54E8u;
label_1d54e8:
    // 0x1d54e8: 0x3c0440c9  lui         $a0, 0x40C9
    ctx->pc = 0x1d54e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16585 << 16));
label_1d54ec:
    // 0x1d54ec: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x1d54ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_1d54f0:
    // 0x1d54f0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d54f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d54f4:
    // 0x1d54f4: 0x10000001  b           . + 4 + (0x1 << 2)
label_1d54f8:
    if (ctx->pc == 0x1D54F8u) {
        ctx->pc = 0x1D54F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D54F4u;
        // 0x1d54f8: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D54FCu;
        goto label_1d54fc;
    }
    ctx->pc = 0x1D54F4u;
    {
        const bool branch_taken_0x1d54f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D54F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D54F4u;
        // 0x1d54f8: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d54f4) {
            ctx->pc = 0x1D54FCu;
            goto label_1d54fc;
        }
    }
    ctx->pc = 0x1D54FCu;
label_1d54fc:
    // 0x1d54fc: 0xe46101d4  swc1        $f1, 0x1D4($v1)
    ctx->pc = 0x1d54fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 468), bits); }
label_1d5500:
    // 0x1d5500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d5504:
    // 0x1d5504: 0x3e00008  jr          $ra
label_1d5508:
    if (ctx->pc == 0x1D5508u) {
        ctx->pc = 0x1D5508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5504u;
        // 0x1d5508: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D550Cu;
        goto label_1d550c;
    }
    ctx->pc = 0x1D5504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5504u;
        // 0x1d5508: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D550Cu;
label_1d550c:
    // 0x1d550c: 0x0  nop
    ctx->pc = 0x1d550cu;
    // NOP
label_1d5510:
    // 0x1d5510: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1d5510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1d5514:
    // 0x1d5514: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1d5514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1d5518:
    // 0x1d5518: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1d5518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1d551c:
    // 0x1d551c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1d551cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1d5520:
    // 0x1d5520: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1d5520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1d5524:
    // 0x1d5524: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d5524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1d5528:
    // 0x1d5528: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d5528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1d552c:
    // 0x1d552c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d552cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1d5530:
    // 0x1d5530: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d5530u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1d5534:
    // 0x1d5534: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d5534u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1d5538:
    // 0x1d5538: 0x8c86001c  lw          $a2, 0x1C($a0)
    ctx->pc = 0x1d5538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_1d553c:
    // 0x1d553c: 0x8c900020  lw          $s0, 0x20($a0)
    ctx->pc = 0x1d553cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1d5540:
    // 0x1d5540: 0x8c950024  lw          $s5, 0x24($a0)
    ctx->pc = 0x1d5540u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1d5544:
    // 0x1d5544: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
label_1d5548:
    if (ctx->pc == 0x1D5548u) {
        ctx->pc = 0x1D5548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5544u;
        // 0x1d5548: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D554Cu;
        goto label_1d554c;
    }
    ctx->pc = 0x1D5544u;
    {
        const bool branch_taken_0x1d5544 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5544u;
        // 0x1d5548: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5544) {
            ctx->pc = 0x1D559Cu;
            goto label_1d559c;
        }
    }
    ctx->pc = 0x1D554Cu;
label_1d554c:
    // 0x1d554c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1d554cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1d5550:
    // 0x1d5550: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d5550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d5554:
    // 0x1d5554: 0x90c501a2  lbu         $a1, 0x1A2($a2)
    ctx->pc = 0x1d5554u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 418)));
label_1d5558:
    // 0x1d5558: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x1d5558u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_1d555c:
    // 0x1d555c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1d555cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1d5560:
    // 0x1d5560: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1d5564:
    if (ctx->pc == 0x1D5564u) {
        ctx->pc = 0x1D5568u;
        goto label_1d5568;
    }
    ctx->pc = 0x1D5560u;
    {
        const bool branch_taken_0x1d5560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5560) {
            ctx->pc = 0x1D557Cu;
            goto label_1d557c;
        }
    }
    ctx->pc = 0x1D5568u;
label_1d5568:
    // 0x1d5568: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x1d5568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_1d556c:
    // 0x1d556c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d556cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d5570:
    // 0x1d5570: 0x30632440  andi        $v1, $v1, 0x2440
    ctx->pc = 0x1d5570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)9280);
label_1d5574:
    // 0x1d5574: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1d5578:
    if (ctx->pc == 0x1D5578u) {
        ctx->pc = 0x1D557Cu;
        goto label_1d557c;
    }
    ctx->pc = 0x1D5574u;
    {
        const bool branch_taken_0x1d5574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5574) {
            ctx->pc = 0x1D5588u;
            goto label_1d5588;
        }
    }
    ctx->pc = 0x1D557Cu;
label_1d557c:
    // 0x1d557c: 0xae80001c  sw          $zero, 0x1C($s4)
    ctx->pc = 0x1d557cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 0));
label_1d5580:
    // 0x1d5580: 0x10000007  b           . + 4 + (0x7 << 2)
label_1d5584:
    if (ctx->pc == 0x1D5584u) {
        ctx->pc = 0x1D5584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5580u;
        // 0x1d5584: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5588u;
        goto label_1d5588;
    }
    ctx->pc = 0x1D5580u;
    {
        const bool branch_taken_0x1d5580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5580u;
        // 0x1d5584: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5580) {
            ctx->pc = 0x1D55A0u;
            goto label_1d55a0;
        }
    }
    ctx->pc = 0x1D5588u;
label_1d5588:
    // 0x1d5588: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d5588u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1d558c:
    // 0x1d558c: 0x24c301b0  addiu       $v1, $a2, 0x1B0
    ctx->pc = 0x1d558cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 432));
label_1d5590:
    // 0x1d5590: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d5590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d5594:
    // 0x1d5594: 0x10000002  b           . + 4 + (0x2 << 2)
label_1d5598:
    if (ctx->pc == 0x1D5598u) {
        ctx->pc = 0x1D5598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5594u;
        // 0x1d5598: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D559Cu;
        goto label_1d559c;
    }
    ctx->pc = 0x1D5594u;
    {
        const bool branch_taken_0x1d5594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5594u;
        // 0x1d5598: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5594) {
            ctx->pc = 0x1D55A0u;
            goto label_1d55a0;
        }
    }
    ctx->pc = 0x1D559Cu;
label_1d559c:
    // 0x1d559c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d559cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d55a0:
    // 0x1d55a0: 0x1620004c  bnez        $s1, . + 4 + (0x4C << 2)
label_1d55a4:
    if (ctx->pc == 0x1D55A4u) {
        ctx->pc = 0x1D55A8u;
        goto label_1d55a8;
    }
    ctx->pc = 0x1D55A0u;
    {
        const bool branch_taken_0x1d55a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d55a0) {
            ctx->pc = 0x1D56D4u;
            goto label_1d56d4;
        }
    }
    ctx->pc = 0x1D55A8u;
label_1d55a8:
    // 0x1d55a8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1d55a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1d55ac:
    // 0x1d55ac: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1d55acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1d55b0:
    // 0x1d55b0: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x1d55b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1d55b4:
    // 0x1d55b4: 0x2413001c  addiu       $s3, $zero, 0x1C
    ctx->pc = 0x1d55b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1d55b8:
    // 0x1d55b8: 0x278380d0  addiu       $v1, $gp, -0x7F30
    ctx->pc = 0x1d55b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934736));
label_1d55bc:
    // 0x1d55bc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d55bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1d55c0:
    // 0x1d55c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d55c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d55c4:
    // 0x1d55c4: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1d55c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d55c8:
    // 0x1d55c8: 0x10000033  b           . + 4 + (0x33 << 2)
label_1d55cc:
    if (ctx->pc == 0x1D55CCu) {
        ctx->pc = 0x1D55CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D55C8u;
        // 0x1d55cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D55D0u;
        goto label_1d55d0;
    }
    ctx->pc = 0x1D55C8u;
    {
        const bool branch_taken_0x1d55c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D55CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D55C8u;
        // 0x1d55cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d55c8) {
            ctx->pc = 0x1D5698u;
            goto label_1d5698;
        }
    }
    ctx->pc = 0x1D55D0u;
label_1d55d0:
    // 0x1d55d0: 0x82230028  lb          $v1, 0x28($s1)
    ctx->pc = 0x1d55d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
label_1d55d4:
    // 0x1d55d4: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
label_1d55d8:
    if (ctx->pc == 0x1D55D8u) {
        ctx->pc = 0x1D55DCu;
        goto label_1d55dc;
    }
    ctx->pc = 0x1D55D4u;
    {
        const bool branch_taken_0x1d55d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d55d4) {
            ctx->pc = 0x1D568Cu;
            goto label_1d568c;
        }
    }
    ctx->pc = 0x1D55DCu;
label_1d55dc:
    // 0x1d55dc: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1d55dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1d55e0:
    // 0x1d55e0: 0x92030234  lbu         $v1, 0x234($s0)
    ctx->pc = 0x1d55e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 564)));
label_1d55e4:
    // 0x1d55e4: 0x90840234  lbu         $a0, 0x234($a0)
    ctx->pc = 0x1d55e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 564)));
label_1d55e8:
    // 0x1d55e8: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
label_1d55ec:
    if (ctx->pc == 0x1D55ECu) {
        ctx->pc = 0x1D55F0u;
        goto label_1d55f0;
    }
    ctx->pc = 0x1D55E8u;
    {
        const bool branch_taken_0x1d55e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d55e8) {
            ctx->pc = 0x1D568Cu;
            goto label_1d568c;
        }
    }
    ctx->pc = 0x1D55F0u;
label_1d55f0:
    // 0x1d55f0: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1d55f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1d55f4:
    // 0x1d55f4: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x1d55f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1d55f8:
    // 0x1d55f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d55f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d55fc:
    // 0x1d55fc: 0x30632440  andi        $v1, $v1, 0x2440
    ctx->pc = 0x1d55fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)9280);
label_1d5600:
    // 0x1d5600: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
label_1d5604:
    if (ctx->pc == 0x1D5604u) {
        ctx->pc = 0x1D5608u;
        goto label_1d5608;
    }
    ctx->pc = 0x1D5600u;
    {
        const bool branch_taken_0x1d5600 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5600) {
            ctx->pc = 0x1D568Cu;
            goto label_1d568c;
        }
    }
    ctx->pc = 0x1D5608u;
label_1d5608:
    // 0x1d5608: 0xc06d448  jal         func_1B5120
label_1d560c:
    if (ctx->pc == 0x1D560Cu) {
        ctx->pc = 0x1D560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5608u;
        // 0x1d560c: 0xc62c2130  lwc1        $f12, 0x2130($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5610u;
        goto label_1d5610;
    }
    ctx->pc = 0x1D5608u;
    SET_GPR_U32(ctx, 31, 0x1D5610u);
    ctx->pc = 0x1D560Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5608u;
    // 0x1d560c: 0xc62c2130  lwc1        $f12, 0x2130($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5120u, 0x1D5608u, 0x1D5610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5610u;
label_1d5610:
    // 0x1d5610: 0xc6212138  lwc1        $f1, 0x2138($s1)
    ctx->pc = 0x1d5610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d5614:
    // 0x1d5614: 0xc62c2134  lwc1        $f12, 0x2134($s1)
    ctx->pc = 0x1d5614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d5618:
    // 0x1d5618: 0x46010543  div.s       $f21, $f0, $f1
    ctx->pc = 0x1d5618u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[21] = ctx->f[0] / ctx->f[1];
label_1d561c:
    // 0x1d561c: 0x0  nop
    ctx->pc = 0x1d561cu;
    // NOP
label_1d5620:
    // 0x1d5620: 0x0  nop
    ctx->pc = 0x1d5620u;
    // NOP
label_1d5624:
    // 0x1d5624: 0xc06d448  jal         func_1B5120
label_1d5628:
    if (ctx->pc == 0x1D5628u) {
        ctx->pc = 0x1D562Cu;
        goto label_1d562c;
    }
    ctx->pc = 0x1D5624u;
    SET_GPR_U32(ctx, 31, 0x1D562Cu);
    ctx->pc = 0x1B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5120u, 0x1D5624u, 0x1D562Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D562Cu;
label_1d562c:
    // 0x1d562c: 0xc6222138  lwc1        $f2, 0x2138($s1)
    ctx->pc = 0x1d562cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d5630:
    // 0x1d5630: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1d5630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_1d5634:
    // 0x1d5634: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d5634u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d5638:
    // 0x1d5638: 0x0  nop
    ctx->pc = 0x1d5638u;
    // NOP
label_1d563c:
    // 0x1d563c: 0x4601a836  c.le.s      $f21, $f1
    ctx->pc = 0x1d563cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d5640:
    // 0x1d5640: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x1d5640u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[2];
label_1d5644:
    // 0x1d5644: 0x0  nop
    ctx->pc = 0x1d5644u;
    // NOP
label_1d5648:
    // 0x1d5648: 0x0  nop
    ctx->pc = 0x1d5648u;
    // NOP
label_1d564c:
    // 0x1d564c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_1d5650:
    if (ctx->pc == 0x1D5650u) {
        ctx->pc = 0x1D5654u;
        goto label_1d5654;
    }
    ctx->pc = 0x1D564Cu;
    {
        const bool branch_taken_0x1d564c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d564c) {
            ctx->pc = 0x1D568Cu;
            goto label_1d568c;
        }
    }
    ctx->pc = 0x1D5654u;
label_1d5654:
    // 0x1d5654: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x1d5654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
label_1d5658:
    // 0x1d5658: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1d5658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
label_1d565c:
    // 0x1d565c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d565cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d5660:
    // 0x1d5660: 0x0  nop
    ctx->pc = 0x1d5660u;
    // NOP
label_1d5664:
    // 0x1d5664: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d5664u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d5668:
    // 0x1d5668: 0x0  nop
    ctx->pc = 0x1d5668u;
    // NOP
label_1d566c:
    // 0x1d566c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1d5670:
    if (ctx->pc == 0x1D5670u) {
        ctx->pc = 0x1D5670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D566Cu;
        // 0x1d5670: 0x4601a800  add.s       $f0, $f21, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5674u;
        goto label_1d5674;
    }
    ctx->pc = 0x1D566Cu;
    {
        const bool branch_taken_0x1d566c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D5670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D566Cu;
        // 0x1d5670: 0x4601a800  add.s       $f0, $f21, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d566c) {
            ctx->pc = 0x1D568Cu;
            goto label_1d568c;
        }
    }
    ctx->pc = 0x1D5674u;
label_1d5674:
    // 0x1d5674: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1d5674u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d5678:
    // 0x1d5678: 0x0  nop
    ctx->pc = 0x1d5678u;
    // NOP
label_1d567c:
    // 0x1d567c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1d5680:
    if (ctx->pc == 0x1D5680u) {
        ctx->pc = 0x1D5684u;
        goto label_1d5684;
    }
    ctx->pc = 0x1D567Cu;
    {
        const bool branch_taken_0x1d567c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d567c) {
            ctx->pc = 0x1D568Cu;
            goto label_1d568c;
        }
    }
    ctx->pc = 0x1D5684u;
label_1d5684:
    // 0x1d5684: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1d5684u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1d5688:
    // 0x1d5688: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x1d5688u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d568c:
    // 0x1d568c: 0x0  nop
    ctx->pc = 0x1d568cu;
    // NOP
label_1d5690:
    // 0x1d5690: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d5690u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1d5694:
    // 0x1d5694: 0x26312150  addiu       $s1, $s1, 0x2150
    ctx->pc = 0x1d5694u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8528));
label_1d5698:
    // 0x1d5698: 0x2a43001c  slti        $v1, $s2, 0x1C
    ctx->pc = 0x1d5698u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)28) ? 1 : 0);
label_1d569c:
    // 0x1d569c: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
label_1d56a0:
    if (ctx->pc == 0x1D56A0u) {
        ctx->pc = 0x1D56A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D569Cu;
        // 0x1d56a0: 0x2a61001c  slti        $at, $s3, 0x1C (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)28) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D56A4u;
        goto label_1d56a4;
    }
    ctx->pc = 0x1D569Cu;
    {
        const bool branch_taken_0x1d569c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D56A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D569Cu;
        // 0x1d56a0: 0x2a61001c  slti        $at, $s3, 0x1C (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)28) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d569c) {
            ctx->pc = 0x1D55D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d55d0;
        }
    }
    ctx->pc = 0x1D56A4u;
label_1d56a4:
    // 0x1d56a4: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_1d56a8:
    if (ctx->pc == 0x1D56A8u) {
        ctx->pc = 0x1D56A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56A4u;
        // 0x1d56a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D56ACu;
        goto label_1d56ac;
    }
    ctx->pc = 0x1D56A4u;
    {
        const bool branch_taken_0x1d56a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D56A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56A4u;
        // 0x1d56a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d56a4) {
            ctx->pc = 0x1D56D4u;
            goto label_1d56d4;
        }
    }
    ctx->pc = 0x1D56ACu;
label_1d56ac:
    // 0x1d56ac: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x1d56acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1d56b0:
    // 0x1d56b0: 0x24032150  addiu       $v1, $zero, 0x2150
    ctx->pc = 0x1d56b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8528));
label_1d56b4:
    // 0x1d56b4: 0x2632018  mult        $a0, $s3, $v1
    ctx->pc = 0x1d56b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1d56b8:
    // 0x1d56b8: 0x278580d0  addiu       $a1, $gp, -0x7F30
    ctx->pc = 0x1d56b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934736));
label_1d56bc:
    // 0x1d56bc: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1d56bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1d56c0:
    // 0x1d56c0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1d56c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1d56c4:
    // 0x1d56c4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d56c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d56c8:
    // 0x1d56c8: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x1d56c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d56cc:
    // 0x1d56cc: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1d56ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1d56d0:
    // 0x1d56d0: 0xae83001c  sw          $v1, 0x1C($s4)
    ctx->pc = 0x1d56d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 3));
label_1d56d4:
    // 0x1d56d4: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
label_1d56d8:
    if (ctx->pc == 0x1D56D8u) {
        ctx->pc = 0x1D56DCu;
        goto label_1d56dc;
    }
    ctx->pc = 0x1D56D4u;
    {
        const bool branch_taken_0x1d56d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d56d4) {
            ctx->pc = 0x1D5768u;
            goto label_1d5768;
        }
    }
    ctx->pc = 0x1D56DCu;
label_1d56dc:
    // 0x1d56dc: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x1d56dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_1d56e0:
    // 0x1d56e0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1d56e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1d56e4:
    // 0x1d56e4: 0x26a60150  addiu       $a2, $s5, 0x150
    ctx->pc = 0x1d56e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 336));
label_1d56e8:
    // 0x1d56e8: 0xc066e08  jal         func_19B820
label_1d56ec:
    if (ctx->pc == 0x1D56ECu) {
        ctx->pc = 0x1D56ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56E8u;
        // 0x1d56ec: 0x24450150  addiu       $a1, $v0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D56F0u;
        goto label_1d56f0;
    }
    ctx->pc = 0x1D56E8u;
    SET_GPR_U32(ctx, 31, 0x1D56F0u);
    ctx->pc = 0x1D56ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D56E8u;
    // 0x1d56ec: 0x24450150  addiu       $a1, $v0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B820u, 0x1D56E8u, 0x1D56F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D56F0u;
label_1d56f0:
    // 0x1d56f0: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x1d56f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_1d56f4:
    // 0x1d56f4: 0x26a30150  addiu       $v1, $s5, 0x150
    ctx->pc = 0x1d56f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 336));
label_1d56f8:
    // 0x1d56f8: 0x24420150  addiu       $v0, $v0, 0x150
    ctx->pc = 0x1d56f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
label_1d56fc:
    // 0x1d56fc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1d56fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1d5700:
    // 0x1d5700: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1d5700u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1d5704:
    // 0x1d5704: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1d5704u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1d5708:
    // 0x1d5708: 0x4a0002ff  vnop
    ctx->pc = 0x1d5708u;
    // NOP operation, no action needed for VU0
label_1d570c:
    // 0x1d570c: 0x4a0002ff  vnop
    ctx->pc = 0x1d570cu;
    // NOP operation, no action needed for VU0
label_1d5710:
    // 0x1d5710: 0x4a0002ff  vnop
    ctx->pc = 0x1d5710u;
    // NOP operation, no action needed for VU0
label_1d5714:
    // 0x1d5714: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x1d5714u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1d5718:
    // 0x1d5718: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x1d5718u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_1d571c:
    // 0x1d571c: 0x4a0002ff  vnop
    ctx->pc = 0x1d571cu;
    // NOP operation, no action needed for VU0
label_1d5720:
    // 0x1d5720: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x1d5720u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_1d5724:
    // 0x1d5724: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x1d5724u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_1d5728:
    // 0x1d5728: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x1d5728u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1d572c:
    // 0x1d572c: 0x4a0002ff  vnop
    ctx->pc = 0x1d572cu;
    // NOP operation, no action needed for VU0
label_1d5730:
    // 0x1d5730: 0x4a0002ff  vnop
    ctx->pc = 0x1d5730u;
    // NOP operation, no action needed for VU0
label_1d5734:
    // 0x1d5734: 0x4a0002ff  vnop
    ctx->pc = 0x1d5734u;
    // NOP operation, no action needed for VU0
label_1d5738:
    // 0x1d5738: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1d5738u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_1d573c:
    // 0x1d573c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1d573cu;
    // VWAITQ (Q already resolved in this runtime)
label_1d5740:
    // 0x1d5740: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x1d5740u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_1d5744:
    // 0x1d5744: 0x44896800  mtc1        $t1, $f13
    ctx->pc = 0x1d5744u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1d5748:
    // 0x1d5748: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x1d5748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d574c:
    // 0x1d574c: 0xc06d51e  jal         func_1B5478
label_1d5750:
    if (ctx->pc == 0x1D5750u) {
        ctx->pc = 0x1D5750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D574Cu;
        // 0x1d5750: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5754u;
        goto label_1d5754;
    }
    ctx->pc = 0x1D574Cu;
    SET_GPR_U32(ctx, 31, 0x1D5754u);
    ctx->pc = 0x1D5750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D574Cu;
    // 0x1d5750: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5478u, 0x1D574Cu, 0x1D5754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5754u;
label_1d5754:
    // 0x1d5754: 0xe6a001d0  swc1        $f0, 0x1D0($s5)
    ctx->pc = 0x1d5754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 464), bits); }
label_1d5758:
    // 0x1d5758: 0xc7ad0088  lwc1        $f13, 0x88($sp)
    ctx->pc = 0x1d5758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d575c:
    // 0x1d575c: 0xc06d51e  jal         func_1B5478
label_1d5760:
    if (ctx->pc == 0x1D5760u) {
        ctx->pc = 0x1D5760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D575Cu;
        // 0x1d5760: 0xc7ac0080  lwc1        $f12, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5764u;
        goto label_1d5764;
    }
    ctx->pc = 0x1D575Cu;
    SET_GPR_U32(ctx, 31, 0x1D5764u);
    ctx->pc = 0x1D5760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D575Cu;
    // 0x1d5760: 0xc7ac0080  lwc1        $f12, 0x80($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5478u, 0x1D575Cu, 0x1D5764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5764u;
label_1d5764:
    // 0x1d5764: 0xe6a001d4  swc1        $f0, 0x1D4($s5)
    ctx->pc = 0x1d5764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 468), bits); }
label_1d5768:
    // 0x1d5768: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1d5768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1d576c:
    // 0x1d576c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d576cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1d5770:
    // 0x1d5770: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1d5770u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d5774:
    // 0x1d5774: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d5774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d5778:
    // 0x1d5778: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1d5778u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d577c:
    // 0x1d577c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1d577cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d5780:
    // 0x1d5780: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d5780u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d5784:
    // 0x1d5784: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d5784u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d5788:
    // 0x1d5788: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d5788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d578c:
    // 0x1d578c: 0x3e00008  jr          $ra
label_1d5790:
    if (ctx->pc == 0x1D5790u) {
        ctx->pc = 0x1D5790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D578Cu;
        // 0x1d5790: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5794u;
        goto label_1d5794;
    }
    ctx->pc = 0x1D578Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D578Cu;
        // 0x1d5790: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D578Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5794u;
label_1d5794:
    // 0x1d5794: 0x0  nop
    ctx->pc = 0x1d5794u;
    // NOP
label_1d5798:
    // 0x1d5798: 0x0  nop
    ctx->pc = 0x1d5798u;
    // NOP
label_1d579c:
    // 0x1d579c: 0x0  nop
    ctx->pc = 0x1d579cu;
    // NOP
label_1d57a0:
    // 0x1d57a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d57a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d57a4:
    // 0x1d57a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d57a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d57a8:
    // 0x1d57a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d57a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d57ac:
    // 0x1d57ac: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d57acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d57b0:
    // 0x1d57b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d57b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d57b4:
    // 0x1d57b4: 0xc050f08  jal         func_143C20
label_1d57b8:
    if (ctx->pc == 0x1D57B8u) {
        ctx->pc = 0x1D57B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D57B4u;
        // 0x1d57b8: 0x8c450024  lw          $a1, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D57BCu;
        goto label_1d57bc;
    }
    ctx->pc = 0x1D57B4u;
    SET_GPR_U32(ctx, 31, 0x1D57BCu);
    ctx->pc = 0x1D57B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D57B4u;
    // 0x1d57b8: 0x8c450024  lw          $a1, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143C20u, 0x1D57B4u, 0x1D57BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D57BCu;
label_1d57bc:
    // 0x1d57bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d57bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d57c0:
    // 0x1d57c0: 0x3e00008  jr          $ra
label_1d57c4:
    if (ctx->pc == 0x1D57C4u) {
        ctx->pc = 0x1D57C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D57C0u;
        // 0x1d57c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D57C8u;
        goto label_1d57c8;
    }
    ctx->pc = 0x1D57C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D57C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D57C0u;
        // 0x1d57c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D57C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D57C8u;
label_1d57c8:
    // 0x1d57c8: 0x0  nop
    ctx->pc = 0x1d57c8u;
    // NOP
label_1d57cc:
    // 0x1d57cc: 0x0  nop
    ctx->pc = 0x1d57ccu;
    // NOP
label_1d57d0:
    // 0x1d57d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d57d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d57d4:
    // 0x1d57d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d57d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d57d8:
    // 0x1d57d8: 0x3c06004b  lui         $a2, 0x4B
    ctx->pc = 0x1d57d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)75 << 16));
label_1d57dc:
    // 0x1d57dc: 0x24c603a0  addiu       $a2, $a2, 0x3A0
    ctx->pc = 0x1d57dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 928));
label_1d57e0:
    // 0x1d57e0: 0xc84821  addu        $t1, $a2, $t0
    ctx->pc = 0x1d57e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1d57e4:
    // 0x1d57e4: 0x8d230020  lw          $v1, 0x20($t1)
    ctx->pc = 0x1d57e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
label_1d57e8:
    // 0x1d57e8: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
label_1d57ec:
    if (ctx->pc == 0x1D57ECu) {
        ctx->pc = 0x1D57F0u;
        goto label_1d57f0;
    }
    ctx->pc = 0x1D57E8u;
    {
        const bool branch_taken_0x1d57e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1d57e8) {
            ctx->pc = 0x1D5804u;
            goto label_1d5804;
        }
    }
    ctx->pc = 0x1D57F0u;
label_1d57f0:
    // 0x1d57f0: 0x85230016  lh          $v1, 0x16($t1)
    ctx->pc = 0x1d57f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 22)));
label_1d57f4:
    // 0x1d57f4: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x1d57f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1d57f8:
    // 0x1d57f8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1d57fc:
    if (ctx->pc == 0x1D57FCu) {
        ctx->pc = 0x1D57FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D57F8u;
        // 0x1d57fc: 0x252a0016  addiu       $t2, $t1, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5800u;
        goto label_1d5800;
    }
    ctx->pc = 0x1D57F8u;
    {
        const bool branch_taken_0x1d57f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D57FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D57F8u;
        // 0x1d57fc: 0x252a0016  addiu       $t2, $t1, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d57f8) {
            ctx->pc = 0x1D5804u;
            goto label_1d5804;
        }
    }
    ctx->pc = 0x1D5800u;
label_1d5800:
    // 0x1d5800: 0xa5450000  sh          $a1, 0x0($t2)
    ctx->pc = 0x1d5800u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 5));
label_1d5804:
    // 0x1d5804: 0x0  nop
    ctx->pc = 0x1d5804u;
    // NOP
label_1d5808:
    // 0x1d5808: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1d5808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1d580c:
    // 0x1d580c: 0x28e30002  slti        $v1, $a3, 0x2
    ctx->pc = 0x1d580cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d5810:
    // 0x1d5810: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_1d5814:
    if (ctx->pc == 0x1D5814u) {
        ctx->pc = 0x1D5814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5810u;
        // 0x1d5814: 0x25080070  addiu       $t0, $t0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5818u;
        goto label_1d5818;
    }
    ctx->pc = 0x1D5810u;
    {
        const bool branch_taken_0x1d5810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5810u;
        // 0x1d5814: 0x25080070  addiu       $t0, $t0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5810) {
            ctx->pc = 0x1D57E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d57e0;
        }
    }
    ctx->pc = 0x1D5818u;
label_1d5818:
    // 0x1d5818: 0x3e00008  jr          $ra
label_1d581c:
    if (ctx->pc == 0x1D581Cu) {
        ctx->pc = 0x1D5820u;
        goto label_1d5820;
    }
    ctx->pc = 0x1D5818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5820u;
label_1d5820:
    // 0x1d5820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d5820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d5824:
    // 0x1d5824: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d5824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d5828:
    // 0x1d5828: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d5828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d582c:
    // 0x1d582c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d582cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d5830:
    // 0x1d5830: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d5830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5834:
    // 0x1d5834: 0x3c10004b  lui         $s0, 0x4B
    ctx->pc = 0x1d5834u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)75 << 16));
label_1d5838:
    // 0x1d5838: 0x261003a0  addiu       $s0, $s0, 0x3A0
    ctx->pc = 0x1d5838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 928));
label_1d583c:
    // 0x1d583c: 0x0  nop
    ctx->pc = 0x1d583cu;
    // NOP
label_1d5840:
    // 0x1d5840: 0x86030012  lh          $v1, 0x12($s0)
    ctx->pc = 0x1d5840u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_1d5844:
    // 0x1d5844: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_1d5848:
    if (ctx->pc == 0x1D5848u) {
        ctx->pc = 0x1D584Cu;
        goto label_1d584c;
    }
    ctx->pc = 0x1D5844u;
    {
        const bool branch_taken_0x1d5844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5844) {
            ctx->pc = 0x1D58ACu;
            goto label_1d58ac;
        }
    }
    ctx->pc = 0x1D584Cu;
label_1d584c:
    // 0x1d584c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d584cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d5850:
    // 0x1d5850: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1d5850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1d5854:
    // 0x1d5854: 0x8463003c  lh          $v1, 0x3C($v1)
    ctx->pc = 0x1d5854u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
label_1d5858:
    // 0x1d5858: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_1d585c:
    if (ctx->pc == 0x1D585Cu) {
        ctx->pc = 0x1D585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5858u;
        // 0x1d585c: 0x24020079  addiu       $v0, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5860u;
        goto label_1d5860;
    }
    ctx->pc = 0x1D5858u;
    {
        const bool branch_taken_0x1d5858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5858u;
        // 0x1d585c: 0x24020079  addiu       $v0, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5858) {
            ctx->pc = 0x1D5874u;
            goto label_1d5874;
        }
    }
    ctx->pc = 0x1D5860u;
label_1d5860:
    // 0x1d5860: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1d5864:
    if (ctx->pc == 0x1D5864u) {
        ctx->pc = 0x1D5868u;
        goto label_1d5868;
    }
    ctx->pc = 0x1D5860u;
    {
        const bool branch_taken_0x1d5860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d5860) {
            ctx->pc = 0x1D5874u;
            goto label_1d5874;
        }
    }
    ctx->pc = 0x1D5868u;
label_1d5868:
    // 0x1d5868: 0x2402007e  addiu       $v0, $zero, 0x7E
    ctx->pc = 0x1d5868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_1d586c:
    // 0x1d586c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_1d5870:
    if (ctx->pc == 0x1D5870u) {
        ctx->pc = 0x1D5874u;
        goto label_1d5874;
    }
    ctx->pc = 0x1D586Cu;
    {
        const bool branch_taken_0x1d586c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d586c) {
            ctx->pc = 0x1D58A0u;
            goto label_1d58a0;
        }
    }
    ctx->pc = 0x1D5874u;
label_1d5874:
    // 0x1d5874: 0x0  nop
    ctx->pc = 0x1d5874u;
    // NOP
label_1d5878:
    // 0x1d5878: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d5878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d587c:
    // 0x1d587c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d587cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d5880:
    // 0x1d5880: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1d5880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1d5884:
    // 0x1d5884: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1d5884u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d5888:
    // 0x1d5888: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1d5888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1d588c:
    // 0x1d588c: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x1d588cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1d5890:
    // 0x1d5890: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1d5890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1d5894:
    // 0x1d5894: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x1d5894u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1d5898:
    // 0x1d5898: 0xc05b390  jal         func_16CE40
label_1d589c:
    if (ctx->pc == 0x1D589Cu) {
        ctx->pc = 0x1D589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5898u;
        // 0x1d589c: 0x43200b  movn        $a0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D58A0u;
        goto label_1d58a0;
    }
    ctx->pc = 0x1D5898u;
    SET_GPR_U32(ctx, 31, 0x1D58A0u);
    ctx->pc = 0x1D589Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5898u;
    // 0x1d589c: 0x43200b  movn        $a0, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CE40u, 0x1D5898u, 0x1D58A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D58A0u;
label_1d58a0:
    // 0x1d58a0: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1d58a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d58a4:
    // 0x1d58a4: 0xc045460  jal         func_115180
label_1d58a8:
    if (ctx->pc == 0x1D58A8u) {
        ctx->pc = 0x1D58A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D58A4u;
        // 0x1d58a8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D58ACu;
        goto label_1d58ac;
    }
    ctx->pc = 0x1D58A4u;
    SET_GPR_U32(ctx, 31, 0x1D58ACu);
    ctx->pc = 0x1D58A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D58A4u;
    // 0x1d58a8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115180u, 0x1D58A4u, 0x1D58ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D58ACu;
label_1d58ac:
    // 0x1d58ac: 0x0  nop
    ctx->pc = 0x1d58acu;
    // NOP
label_1d58b0:
    // 0x1d58b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d58b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d58b4:
    // 0x1d58b4: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x1d58b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d58b8:
    // 0x1d58b8: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
label_1d58bc:
    if (ctx->pc == 0x1D58BCu) {
        ctx->pc = 0x1D58BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D58B8u;
        // 0x1d58bc: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D58C0u;
        goto label_1d58c0;
    }
    ctx->pc = 0x1D58B8u;
    {
        const bool branch_taken_0x1d58b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D58BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D58B8u;
        // 0x1d58bc: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d58b8) {
            ctx->pc = 0x1D583Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d583c;
        }
    }
    ctx->pc = 0x1D58C0u;
label_1d58c0:
    // 0x1d58c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d58c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d58c4:
    // 0x1d58c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d58c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d58c8:
    // 0x1d58c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d58c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d58cc:
    // 0x1d58cc: 0x3e00008  jr          $ra
label_1d58d0:
    if (ctx->pc == 0x1D58D0u) {
        ctx->pc = 0x1D58D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D58CCu;
        // 0x1d58d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D58D4u;
        goto label_1d58d4;
    }
    ctx->pc = 0x1D58CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D58D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D58CCu;
        // 0x1d58d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D58CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D58D4u;
label_1d58d4:
    // 0x1d58d4: 0x0  nop
    ctx->pc = 0x1d58d4u;
    // NOP
label_1d58d8:
    // 0x1d58d8: 0x0  nop
    ctx->pc = 0x1d58d8u;
    // NOP
label_1d58dc:
    // 0x1d58dc: 0x0  nop
    ctx->pc = 0x1d58dcu;
    // NOP
label_1d58e0:
    // 0x1d58e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d58e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d58e4:
    // 0x1d58e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d58e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d58e8:
    // 0x1d58e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d58e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d58ec:
    // 0x1d58ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d58ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d58f0:
    // 0x1d58f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d58f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d58f4:
    // 0x1d58f4: 0x3c10004b  lui         $s0, 0x4B
    ctx->pc = 0x1d58f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)75 << 16));
label_1d58f8:
    // 0x1d58f8: 0x261003a0  addiu       $s0, $s0, 0x3A0
    ctx->pc = 0x1d58f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 928));
label_1d58fc:
    // 0x1d58fc: 0x0  nop
    ctx->pc = 0x1d58fcu;
    // NOP
label_1d5900:
    // 0x1d5900: 0x86030012  lh          $v1, 0x12($s0)
    ctx->pc = 0x1d5900u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_1d5904:
    // 0x1d5904: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_1d5908:
    if (ctx->pc == 0x1D5908u) {
        ctx->pc = 0x1D590Cu;
        goto label_1d590c;
    }
    ctx->pc = 0x1D5904u;
    {
        const bool branch_taken_0x1d5904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5904) {
            ctx->pc = 0x1D5944u;
            goto label_1d5944;
        }
    }
    ctx->pc = 0x1D590Cu;
label_1d590c:
    // 0x1d590c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d590cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d5910:
    // 0x1d5910: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d5910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d5914:
    // 0x1d5914: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1d5914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1d5918:
    // 0x1d5918: 0xc05b2e4  jal         func_16CB90
label_1d591c:
    if (ctx->pc == 0x1D591Cu) {
        ctx->pc = 0x1D591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5918u;
        // 0x1d591c: 0x43200b  movn        $a0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5920u;
        goto label_1d5920;
    }
    ctx->pc = 0x1D5918u;
    SET_GPR_U32(ctx, 31, 0x1D5920u);
    ctx->pc = 0x1D591Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5918u;
    // 0x1d591c: 0x43200b  movn        $a0, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CB90u, 0x1D5918u, 0x1D5920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5920u;
label_1d5920:
    // 0x1d5920: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5924:
    // 0x1d5924: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1d5924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d5928:
    // 0x1d5928: 0x0  nop
    ctx->pc = 0x1d5928u;
    // NOP
label_1d592c:
    // 0x1d592c: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x1d592cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_1d5930:
    // 0x1d5930: 0xa0640068  sb          $a0, 0x68($v1)
    ctx->pc = 0x1d5930u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 104), (uint8_t)GPR_U32(ctx, 4));
label_1d5934:
    // 0x1d5934: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d5934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1d5938:
    // 0x1d5938: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x1d5938u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d593c:
    // 0x1d593c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_1d5940:
    if (ctx->pc == 0x1D5940u) {
        ctx->pc = 0x1D5944u;
        goto label_1d5944;
    }
    ctx->pc = 0x1D593Cu;
    {
        const bool branch_taken_0x1d593c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d593c) {
            ctx->pc = 0x1D5928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5928;
        }
    }
    ctx->pc = 0x1D5944u;
label_1d5944:
    // 0x1d5944: 0x0  nop
    ctx->pc = 0x1d5944u;
    // NOP
label_1d5948:
    // 0x1d5948: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d5948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d594c:
    // 0x1d594c: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x1d594cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    ctx->pc = 0x1d5950u;
    return;
}
