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

// Function: FUN_0019b868
// Address: 0x19b868 - 0x29b870
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b868_part86(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1c5078u: goto label_1c5078;
        case 0x1c507cu: goto label_1c507c;
        case 0x1c5080u: goto label_1c5080;
        case 0x1c5084u: goto label_1c5084;
        case 0x1c5088u: goto label_1c5088;
        case 0x1c508cu: goto label_1c508c;
        case 0x1c5090u: goto label_1c5090;
        case 0x1c5094u: goto label_1c5094;
        case 0x1c5098u: goto label_1c5098;
        case 0x1c509cu: goto label_1c509c;
        case 0x1c50a0u: goto label_1c50a0;
        case 0x1c50a4u: goto label_1c50a4;
        case 0x1c50a8u: goto label_1c50a8;
        case 0x1c50acu: goto label_1c50ac;
        case 0x1c50b0u: goto label_1c50b0;
        case 0x1c50b4u: goto label_1c50b4;
        case 0x1c50b8u: goto label_1c50b8;
        case 0x1c50bcu: goto label_1c50bc;
        case 0x1c50c0u: goto label_1c50c0;
        case 0x1c50c4u: goto label_1c50c4;
        case 0x1c50c8u: goto label_1c50c8;
        case 0x1c50ccu: goto label_1c50cc;
        case 0x1c50d0u: goto label_1c50d0;
        case 0x1c50d4u: goto label_1c50d4;
        case 0x1c50d8u: goto label_1c50d8;
        case 0x1c50dcu: goto label_1c50dc;
        case 0x1c50e0u: goto label_1c50e0;
        case 0x1c50e4u: goto label_1c50e4;
        case 0x1c50e8u: goto label_1c50e8;
        case 0x1c50ecu: goto label_1c50ec;
        case 0x1c50f0u: goto label_1c50f0;
        case 0x1c50f4u: goto label_1c50f4;
        case 0x1c50f8u: goto label_1c50f8;
        case 0x1c50fcu: goto label_1c50fc;
        case 0x1c5100u: goto label_1c5100;
        case 0x1c5104u: goto label_1c5104;
        case 0x1c5108u: goto label_1c5108;
        case 0x1c510cu: goto label_1c510c;
        case 0x1c5110u: goto label_1c5110;
        case 0x1c5114u: goto label_1c5114;
        case 0x1c5118u: goto label_1c5118;
        case 0x1c511cu: goto label_1c511c;
        case 0x1c5120u: goto label_1c5120;
        case 0x1c5124u: goto label_1c5124;
        case 0x1c5128u: goto label_1c5128;
        case 0x1c512cu: goto label_1c512c;
        case 0x1c5130u: goto label_1c5130;
        case 0x1c5134u: goto label_1c5134;
        case 0x1c5138u: goto label_1c5138;
        case 0x1c513cu: goto label_1c513c;
        case 0x1c5140u: goto label_1c5140;
        case 0x1c5144u: goto label_1c5144;
        case 0x1c5148u: goto label_1c5148;
        case 0x1c514cu: goto label_1c514c;
        case 0x1c5150u: goto label_1c5150;
        case 0x1c5154u: goto label_1c5154;
        case 0x1c5158u: goto label_1c5158;
        case 0x1c515cu: goto label_1c515c;
        case 0x1c5160u: goto label_1c5160;
        case 0x1c5164u: goto label_1c5164;
        case 0x1c5168u: goto label_1c5168;
        case 0x1c516cu: goto label_1c516c;
        case 0x1c5170u: goto label_1c5170;
        case 0x1c5174u: goto label_1c5174;
        case 0x1c5178u: goto label_1c5178;
        case 0x1c517cu: goto label_1c517c;
        case 0x1c5180u: goto label_1c5180;
        case 0x1c5184u: goto label_1c5184;
        case 0x1c5188u: goto label_1c5188;
        case 0x1c518cu: goto label_1c518c;
        case 0x1c5190u: goto label_1c5190;
        case 0x1c5194u: goto label_1c5194;
        case 0x1c5198u: goto label_1c5198;
        case 0x1c519cu: goto label_1c519c;
        case 0x1c51a0u: goto label_1c51a0;
        case 0x1c51a4u: goto label_1c51a4;
        case 0x1c51a8u: goto label_1c51a8;
        case 0x1c51acu: goto label_1c51ac;
        case 0x1c51b0u: goto label_1c51b0;
        case 0x1c51b4u: goto label_1c51b4;
        case 0x1c51b8u: goto label_1c51b8;
        case 0x1c51bcu: goto label_1c51bc;
        case 0x1c51c0u: goto label_1c51c0;
        case 0x1c51c4u: goto label_1c51c4;
        case 0x1c51c8u: goto label_1c51c8;
        case 0x1c51ccu: goto label_1c51cc;
        case 0x1c51d0u: goto label_1c51d0;
        case 0x1c51d4u: goto label_1c51d4;
        case 0x1c51d8u: goto label_1c51d8;
        case 0x1c51dcu: goto label_1c51dc;
        case 0x1c51e0u: goto label_1c51e0;
        case 0x1c51e4u: goto label_1c51e4;
        case 0x1c51e8u: goto label_1c51e8;
        case 0x1c51ecu: goto label_1c51ec;
        case 0x1c51f0u: goto label_1c51f0;
        case 0x1c51f4u: goto label_1c51f4;
        case 0x1c51f8u: goto label_1c51f8;
        case 0x1c51fcu: goto label_1c51fc;
        case 0x1c5200u: goto label_1c5200;
        case 0x1c5204u: goto label_1c5204;
        case 0x1c5208u: goto label_1c5208;
        case 0x1c520cu: goto label_1c520c;
        case 0x1c5210u: goto label_1c5210;
        case 0x1c5214u: goto label_1c5214;
        case 0x1c5218u: goto label_1c5218;
        case 0x1c521cu: goto label_1c521c;
        case 0x1c5220u: goto label_1c5220;
        case 0x1c5224u: goto label_1c5224;
        case 0x1c5228u: goto label_1c5228;
        case 0x1c522cu: goto label_1c522c;
        case 0x1c5230u: goto label_1c5230;
        case 0x1c5234u: goto label_1c5234;
        case 0x1c5238u: goto label_1c5238;
        case 0x1c523cu: goto label_1c523c;
        case 0x1c5240u: goto label_1c5240;
        case 0x1c5244u: goto label_1c5244;
        case 0x1c5248u: goto label_1c5248;
        case 0x1c524cu: goto label_1c524c;
        case 0x1c5250u: goto label_1c5250;
        case 0x1c5254u: goto label_1c5254;
        case 0x1c5258u: goto label_1c5258;
        case 0x1c525cu: goto label_1c525c;
        case 0x1c5260u: goto label_1c5260;
        case 0x1c5264u: goto label_1c5264;
        case 0x1c5268u: goto label_1c5268;
        case 0x1c526cu: goto label_1c526c;
        case 0x1c5270u: goto label_1c5270;
        case 0x1c5274u: goto label_1c5274;
        case 0x1c5278u: goto label_1c5278;
        case 0x1c527cu: goto label_1c527c;
        case 0x1c5280u: goto label_1c5280;
        case 0x1c5284u: goto label_1c5284;
        case 0x1c5288u: goto label_1c5288;
        case 0x1c528cu: goto label_1c528c;
        case 0x1c5290u: goto label_1c5290;
        case 0x1c5294u: goto label_1c5294;
        case 0x1c5298u: goto label_1c5298;
        case 0x1c529cu: goto label_1c529c;
        case 0x1c52a0u: goto label_1c52a0;
        case 0x1c52a4u: goto label_1c52a4;
        case 0x1c52a8u: goto label_1c52a8;
        case 0x1c52acu: goto label_1c52ac;
        case 0x1c52b0u: goto label_1c52b0;
        case 0x1c52b4u: goto label_1c52b4;
        case 0x1c52b8u: goto label_1c52b8;
        case 0x1c52bcu: goto label_1c52bc;
        case 0x1c52c0u: goto label_1c52c0;
        case 0x1c52c4u: goto label_1c52c4;
        case 0x1c52c8u: goto label_1c52c8;
        case 0x1c52ccu: goto label_1c52cc;
        case 0x1c52d0u: goto label_1c52d0;
        case 0x1c52d4u: goto label_1c52d4;
        case 0x1c52d8u: goto label_1c52d8;
        case 0x1c52dcu: goto label_1c52dc;
        case 0x1c52e0u: goto label_1c52e0;
        case 0x1c52e4u: goto label_1c52e4;
        case 0x1c52e8u: goto label_1c52e8;
        case 0x1c52ecu: goto label_1c52ec;
        case 0x1c52f0u: goto label_1c52f0;
        case 0x1c52f4u: goto label_1c52f4;
        case 0x1c52f8u: goto label_1c52f8;
        case 0x1c52fcu: goto label_1c52fc;
        case 0x1c5300u: goto label_1c5300;
        case 0x1c5304u: goto label_1c5304;
        case 0x1c5308u: goto label_1c5308;
        case 0x1c530cu: goto label_1c530c;
        case 0x1c5310u: goto label_1c5310;
        case 0x1c5314u: goto label_1c5314;
        case 0x1c5318u: goto label_1c5318;
        case 0x1c531cu: goto label_1c531c;
        case 0x1c5320u: goto label_1c5320;
        case 0x1c5324u: goto label_1c5324;
        case 0x1c5328u: goto label_1c5328;
        case 0x1c532cu: goto label_1c532c;
        case 0x1c5330u: goto label_1c5330;
        case 0x1c5334u: goto label_1c5334;
        case 0x1c5338u: goto label_1c5338;
        case 0x1c533cu: goto label_1c533c;
        case 0x1c5340u: goto label_1c5340;
        case 0x1c5344u: goto label_1c5344;
        case 0x1c5348u: goto label_1c5348;
        case 0x1c534cu: goto label_1c534c;
        case 0x1c5350u: goto label_1c5350;
        case 0x1c5354u: goto label_1c5354;
        case 0x1c5358u: goto label_1c5358;
        case 0x1c535cu: goto label_1c535c;
        case 0x1c5360u: goto label_1c5360;
        case 0x1c5364u: goto label_1c5364;
        case 0x1c5368u: goto label_1c5368;
        case 0x1c536cu: goto label_1c536c;
        case 0x1c5370u: goto label_1c5370;
        case 0x1c5374u: goto label_1c5374;
        case 0x1c5378u: goto label_1c5378;
        case 0x1c537cu: goto label_1c537c;
        case 0x1c5380u: goto label_1c5380;
        case 0x1c5384u: goto label_1c5384;
        case 0x1c5388u: goto label_1c5388;
        case 0x1c538cu: goto label_1c538c;
        case 0x1c5390u: goto label_1c5390;
        case 0x1c5394u: goto label_1c5394;
        case 0x1c5398u: goto label_1c5398;
        case 0x1c539cu: goto label_1c539c;
        case 0x1c53a0u: goto label_1c53a0;
        case 0x1c53a4u: goto label_1c53a4;
        case 0x1c53a8u: goto label_1c53a8;
        case 0x1c53acu: goto label_1c53ac;
        case 0x1c53b0u: goto label_1c53b0;
        case 0x1c53b4u: goto label_1c53b4;
        case 0x1c53b8u: goto label_1c53b8;
        case 0x1c53bcu: goto label_1c53bc;
        case 0x1c53c0u: goto label_1c53c0;
        case 0x1c53c4u: goto label_1c53c4;
        case 0x1c53c8u: goto label_1c53c8;
        case 0x1c53ccu: goto label_1c53cc;
        case 0x1c53d0u: goto label_1c53d0;
        case 0x1c53d4u: goto label_1c53d4;
        case 0x1c53d8u: goto label_1c53d8;
        case 0x1c53dcu: goto label_1c53dc;
        case 0x1c53e0u: goto label_1c53e0;
        case 0x1c53e4u: goto label_1c53e4;
        case 0x1c53e8u: goto label_1c53e8;
        case 0x1c53ecu: goto label_1c53ec;
        case 0x1c53f0u: goto label_1c53f0;
        case 0x1c53f4u: goto label_1c53f4;
        case 0x1c53f8u: goto label_1c53f8;
        case 0x1c53fcu: goto label_1c53fc;
        case 0x1c5400u: goto label_1c5400;
        case 0x1c5404u: goto label_1c5404;
        case 0x1c5408u: goto label_1c5408;
        case 0x1c540cu: goto label_1c540c;
        case 0x1c5410u: goto label_1c5410;
        case 0x1c5414u: goto label_1c5414;
        case 0x1c5418u: goto label_1c5418;
        case 0x1c541cu: goto label_1c541c;
        case 0x1c5420u: goto label_1c5420;
        case 0x1c5424u: goto label_1c5424;
        case 0x1c5428u: goto label_1c5428;
        case 0x1c542cu: goto label_1c542c;
        case 0x1c5430u: goto label_1c5430;
        case 0x1c5434u: goto label_1c5434;
        case 0x1c5438u: goto label_1c5438;
        case 0x1c543cu: goto label_1c543c;
        case 0x1c5440u: goto label_1c5440;
        case 0x1c5444u: goto label_1c5444;
        case 0x1c5448u: goto label_1c5448;
        case 0x1c544cu: goto label_1c544c;
        case 0x1c5450u: goto label_1c5450;
        case 0x1c5454u: goto label_1c5454;
        case 0x1c5458u: goto label_1c5458;
        case 0x1c545cu: goto label_1c545c;
        case 0x1c5460u: goto label_1c5460;
        case 0x1c5464u: goto label_1c5464;
        case 0x1c5468u: goto label_1c5468;
        case 0x1c546cu: goto label_1c546c;
        case 0x1c5470u: goto label_1c5470;
        case 0x1c5474u: goto label_1c5474;
        case 0x1c5478u: goto label_1c5478;
        case 0x1c547cu: goto label_1c547c;
        case 0x1c5480u: goto label_1c5480;
        case 0x1c5484u: goto label_1c5484;
        case 0x1c5488u: goto label_1c5488;
        case 0x1c548cu: goto label_1c548c;
        case 0x1c5490u: goto label_1c5490;
        case 0x1c5494u: goto label_1c5494;
        case 0x1c5498u: goto label_1c5498;
        case 0x1c549cu: goto label_1c549c;
        case 0x1c54a0u: goto label_1c54a0;
        case 0x1c54a4u: goto label_1c54a4;
        case 0x1c54a8u: goto label_1c54a8;
        case 0x1c54acu: goto label_1c54ac;
        case 0x1c54b0u: goto label_1c54b0;
        case 0x1c54b4u: goto label_1c54b4;
        case 0x1c54b8u: goto label_1c54b8;
        case 0x1c54bcu: goto label_1c54bc;
        case 0x1c54c0u: goto label_1c54c0;
        case 0x1c54c4u: goto label_1c54c4;
        case 0x1c54c8u: goto label_1c54c8;
        case 0x1c54ccu: goto label_1c54cc;
        case 0x1c54d0u: goto label_1c54d0;
        case 0x1c54d4u: goto label_1c54d4;
        case 0x1c54d8u: goto label_1c54d8;
        case 0x1c54dcu: goto label_1c54dc;
        case 0x1c54e0u: goto label_1c54e0;
        case 0x1c54e4u: goto label_1c54e4;
        case 0x1c54e8u: goto label_1c54e8;
        case 0x1c54ecu: goto label_1c54ec;
        case 0x1c54f0u: goto label_1c54f0;
        case 0x1c54f4u: goto label_1c54f4;
        case 0x1c54f8u: goto label_1c54f8;
        case 0x1c54fcu: goto label_1c54fc;
        case 0x1c5500u: goto label_1c5500;
        case 0x1c5504u: goto label_1c5504;
        case 0x1c5508u: goto label_1c5508;
        case 0x1c550cu: goto label_1c550c;
        case 0x1c5510u: goto label_1c5510;
        case 0x1c5514u: goto label_1c5514;
        case 0x1c5518u: goto label_1c5518;
        case 0x1c551cu: goto label_1c551c;
        case 0x1c5520u: goto label_1c5520;
        case 0x1c5524u: goto label_1c5524;
        case 0x1c5528u: goto label_1c5528;
        case 0x1c552cu: goto label_1c552c;
        case 0x1c5530u: goto label_1c5530;
        case 0x1c5534u: goto label_1c5534;
        case 0x1c5538u: goto label_1c5538;
        case 0x1c553cu: goto label_1c553c;
        case 0x1c5540u: goto label_1c5540;
        case 0x1c5544u: goto label_1c5544;
        case 0x1c5548u: goto label_1c5548;
        case 0x1c554cu: goto label_1c554c;
        case 0x1c5550u: goto label_1c5550;
        case 0x1c5554u: goto label_1c5554;
        case 0x1c5558u: goto label_1c5558;
        case 0x1c555cu: goto label_1c555c;
        case 0x1c5560u: goto label_1c5560;
        case 0x1c5564u: goto label_1c5564;
        case 0x1c5568u: goto label_1c5568;
        case 0x1c556cu: goto label_1c556c;
        case 0x1c5570u: goto label_1c5570;
        case 0x1c5574u: goto label_1c5574;
        case 0x1c5578u: goto label_1c5578;
        case 0x1c557cu: goto label_1c557c;
        case 0x1c5580u: goto label_1c5580;
        case 0x1c5584u: goto label_1c5584;
        case 0x1c5588u: goto label_1c5588;
        case 0x1c558cu: goto label_1c558c;
        case 0x1c5590u: goto label_1c5590;
        case 0x1c5594u: goto label_1c5594;
        case 0x1c5598u: goto label_1c5598;
        case 0x1c559cu: goto label_1c559c;
        case 0x1c55a0u: goto label_1c55a0;
        case 0x1c55a4u: goto label_1c55a4;
        case 0x1c55a8u: goto label_1c55a8;
        case 0x1c55acu: goto label_1c55ac;
        case 0x1c55b0u: goto label_1c55b0;
        case 0x1c55b4u: goto label_1c55b4;
        case 0x1c55b8u: goto label_1c55b8;
        case 0x1c55bcu: goto label_1c55bc;
        case 0x1c55c0u: goto label_1c55c0;
        case 0x1c55c4u: goto label_1c55c4;
        case 0x1c55c8u: goto label_1c55c8;
        case 0x1c55ccu: goto label_1c55cc;
        case 0x1c55d0u: goto label_1c55d0;
        case 0x1c55d4u: goto label_1c55d4;
        case 0x1c55d8u: goto label_1c55d8;
        case 0x1c55dcu: goto label_1c55dc;
        case 0x1c55e0u: goto label_1c55e0;
        case 0x1c55e4u: goto label_1c55e4;
        case 0x1c55e8u: goto label_1c55e8;
        case 0x1c55ecu: goto label_1c55ec;
        case 0x1c55f0u: goto label_1c55f0;
        case 0x1c55f4u: goto label_1c55f4;
        case 0x1c55f8u: goto label_1c55f8;
        case 0x1c55fcu: goto label_1c55fc;
        case 0x1c5600u: goto label_1c5600;
        case 0x1c5604u: goto label_1c5604;
        case 0x1c5608u: goto label_1c5608;
        case 0x1c560cu: goto label_1c560c;
        case 0x1c5610u: goto label_1c5610;
        case 0x1c5614u: goto label_1c5614;
        case 0x1c5618u: goto label_1c5618;
        case 0x1c561cu: goto label_1c561c;
        case 0x1c5620u: goto label_1c5620;
        case 0x1c5624u: goto label_1c5624;
        case 0x1c5628u: goto label_1c5628;
        case 0x1c562cu: goto label_1c562c;
        case 0x1c5630u: goto label_1c5630;
        case 0x1c5634u: goto label_1c5634;
        case 0x1c5638u: goto label_1c5638;
        case 0x1c563cu: goto label_1c563c;
        case 0x1c5640u: goto label_1c5640;
        case 0x1c5644u: goto label_1c5644;
        case 0x1c5648u: goto label_1c5648;
        case 0x1c564cu: goto label_1c564c;
        case 0x1c5650u: goto label_1c5650;
        case 0x1c5654u: goto label_1c5654;
        case 0x1c5658u: goto label_1c5658;
        case 0x1c565cu: goto label_1c565c;
        case 0x1c5660u: goto label_1c5660;
        case 0x1c5664u: goto label_1c5664;
        case 0x1c5668u: goto label_1c5668;
        case 0x1c566cu: goto label_1c566c;
        case 0x1c5670u: goto label_1c5670;
        case 0x1c5674u: goto label_1c5674;
        case 0x1c5678u: goto label_1c5678;
        case 0x1c567cu: goto label_1c567c;
        case 0x1c5680u: goto label_1c5680;
        case 0x1c5684u: goto label_1c5684;
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
        default: return;
    }

label_1c5078:
    // 0x1c5078: 0xace5019c  sw          $a1, 0x19C($a3)
    ctx->pc = 0x1c5078u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 412), GPR_U32(ctx, 5));
label_1c507c:
    // 0x1c507c: 0xace601b0  sw          $a2, 0x1B0($a3)
    ctx->pc = 0x1c507cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 432), GPR_U32(ctx, 6));
label_1c5080:
    // 0x1c5080: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_1c5084:
    if (ctx->pc == 0x1C5084u) {
        ctx->pc = 0x1C5084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5080u;
        // 0x1c5084: 0xace501b4  sw          $a1, 0x1B4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 436), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5088u;
        goto label_1c5088;
    }
    ctx->pc = 0x1C5080u;
    {
        const bool branch_taken_0x1c5080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5080u;
        // 0x1c5084: 0xace501b4  sw          $a1, 0x1B4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 436), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5080) {
            ctx->pc = 0x1C5034u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1c5034; return; }
        }
    }
    ctx->pc = 0x1C5088u;
label_1c5088:
    // 0x1c5088: 0x3e00008  jr          $ra
label_1c508c:
    if (ctx->pc == 0x1C508Cu) {
        ctx->pc = 0x1C5090u;
        goto label_1c5090;
    }
    ctx->pc = 0x1C5088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5090u;
label_1c5090:
    // 0x1c5090: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1c5090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1c5094:
    // 0x1c5094: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c5094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1c5098:
    // 0x1c5098: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c5098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1c509c:
    // 0x1c509c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c509cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1c50a0:
    // 0x1c50a0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c50a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c50a4:
    // 0x1c50a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c50a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1c50a8:
    // 0x1c50a8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c50a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c50ac:
    // 0x1c50ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c50acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1c50b0:
    // 0x1c50b0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1c50b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1c50b4:
    // 0x1c50b4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1c50b4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1c50b8:
    // 0x1c50b8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1c50b8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1c50bc:
    // 0x1c50bc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1c50bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1c50c0:
    // 0x1c50c0: 0xc0727d8  jal         func_1C9F60
label_1c50c4:
    if (ctx->pc == 0x1C50C4u) {
        ctx->pc = 0x1C50C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C50C0u;
        // 0x1c50c4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C50C8u;
        goto label_1c50c8;
    }
    ctx->pc = 0x1C50C0u;
    SET_GPR_U32(ctx, 31, 0x1C50C8u);
    ctx->pc = 0x1C50C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50C0u;
    // 0x1c50c4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9F60u;
    { ctx->pc = 0x1c9f60; return; }
    ctx->pc = 0x1C50C8u;
label_1c50c8:
    // 0x1c50c8: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x1c50c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c50cc:
    // 0x1c50cc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c50ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1c50d0:
    // 0x1c50d0: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x1c50d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c50d4:
    // 0x1c50d4: 0x27b00074  addiu       $s0, $sp, 0x74
    ctx->pc = 0x1c50d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_1c50d8:
    // 0x1c50d8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1c50d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1c50dc:
    // 0x1c50dc: 0x27b10078  addiu       $s1, $sp, 0x78
    ctx->pc = 0x1c50dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_1c50e0:
    // 0x1c50e0: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x1c50e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c50e4:
    // 0x1c50e4: 0x27b2007c  addiu       $s2, $sp, 0x7C
    ctx->pc = 0x1c50e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_1c50e8:
    // 0x1c50e8: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1c50e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c50ec:
    // 0x1c50ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c50ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c50f0:
    // 0x1c50f0: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x1c50f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1c50f4:
    // 0x1c50f4: 0x266410f0  addiu       $a0, $s3, 0x10F0
    ctx->pc = 0x1c50f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4336));
label_1c50f8:
    // 0x1c50f8: 0x46032500  add.s       $f20, $f4, $f3
    ctx->pc = 0x1c50f8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_1c50fc:
    // 0x1c50fc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1c50fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1c5100:
    // 0x1c5100: 0x46022540  add.s       $f21, $f4, $f2
    ctx->pc = 0x1c5100u;
    ctx->f[21] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_1c5104:
    // 0x1c5104: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1c5104u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1c5108:
    // 0x1c5108: 0xe6150000  swc1        $f21, 0x0($s0)
    ctx->pc = 0x1c5108u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1c510c:
    // 0x1c510c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1c510cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1c5110:
    // 0x1c5110: 0x46050d81  sub.s       $f22, $f1, $f5
    ctx->pc = 0x1c5110u;
    ctx->f[22] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_1c5114:
    // 0x1c5114: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1c5114u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1c5118:
    // 0x1c5118: 0xc066e34  jal         func_19B8D0
label_1c511c:
    if (ctx->pc == 0x1C511Cu) {
        ctx->pc = 0x1C511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5118u;
        // 0x1c511c: 0x460505c1  sub.s       $f23, $f0, $f5 (Delay Slot)
        ctx->f[23] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5120u;
        goto label_1c5120;
    }
    ctx->pc = 0x1C5118u;
    SET_GPR_U32(ctx, 31, 0x1C5120u);
    ctx->pc = 0x1C511Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5118u;
    // 0x1c511c: 0x460505c1  sub.s       $f23, $f0, $f5 (Delay Slot)
    ctx->f[23] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x1C5120u;
label_1c5120:
    // 0x1c5120: 0x4616a040  add.s       $f1, $f20, $f22
    ctx->pc = 0x1c5120u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_1c5124:
    // 0x1c5124: 0x26641100  addiu       $a0, $s3, 0x1100
    ctx->pc = 0x1c5124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4352));
label_1c5128:
    // 0x1c5128: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1c5128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1c512c:
    // 0x1c512c: 0x4617a800  add.s       $f0, $f21, $f23
    ctx->pc = 0x1c512cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
label_1c5130:
    // 0x1c5130: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x1c5130u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1c5134:
    // 0x1c5134: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1c5134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1c5138:
    // 0x1c5138: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1c5138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1c513c:
    // 0x1c513c: 0xc066e34  jal         func_19B8D0
label_1c5140:
    if (ctx->pc == 0x1C5140u) {
        ctx->pc = 0x1C5140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C513Cu;
        // 0x1c5140: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5144u;
        goto label_1c5144;
    }
    ctx->pc = 0x1C513Cu;
    SET_GPR_U32(ctx, 31, 0x1C5144u);
    ctx->pc = 0x1C5140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C513Cu;
    // 0x1c5140: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x1C5144u;
label_1c5144:
    // 0x1c5144: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c5144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1c5148:
    // 0x1c5148: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1c5148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1c514c:
    // 0x1c514c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1c514cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c5150:
    // 0x1c5150: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1c5150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1c5154:
    // 0x1c5154: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c5154u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c5158:
    // 0x1c5158: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1c5158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1c515c:
    // 0x1c515c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c515cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c5160:
    // 0x1c5160: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c5160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c5164:
    // 0x1c5164: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c5164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c5168:
    // 0x1c5168: 0x3e00008  jr          $ra
label_1c516c:
    if (ctx->pc == 0x1C516Cu) {
        ctx->pc = 0x1C516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5168u;
        // 0x1c516c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5170u;
        goto label_1c5170;
    }
    ctx->pc = 0x1C5168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5168u;
        // 0x1c516c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5170u;
label_1c5170:
    // 0x1c5170: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1c5170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1c5174:
    // 0x1c5174: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c5174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1c5178:
    // 0x1c5178: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c5178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1c517c:
    // 0x1c517c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c517cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1c5180:
    // 0x1c5180: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c5180u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c5184:
    // 0x1c5184: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c5184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1c5188:
    // 0x1c5188: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c5188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c518c:
    // 0x1c518c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c518cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1c5190:
    // 0x1c5190: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1c5190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1c5194:
    // 0x1c5194: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1c5194u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1c5198:
    // 0x1c5198: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1c5198u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1c519c:
    // 0x1c519c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1c519cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1c51a0:
    // 0x1c51a0: 0xc0727d8  jal         func_1C9F60
label_1c51a4:
    if (ctx->pc == 0x1C51A4u) {
        ctx->pc = 0x1C51A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51A0u;
        // 0x1c51a4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C51A8u;
        goto label_1c51a8;
    }
    ctx->pc = 0x1C51A0u;
    SET_GPR_U32(ctx, 31, 0x1C51A8u);
    ctx->pc = 0x1C51A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51A0u;
    // 0x1c51a4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9F60u;
    { ctx->pc = 0x1c9f60; return; }
    ctx->pc = 0x1C51A8u;
label_1c51a8:
    // 0x1c51a8: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x1c51a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c51ac:
    // 0x1c51ac: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c51acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1c51b0:
    // 0x1c51b0: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x1c51b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c51b4:
    // 0x1c51b4: 0x27b00074  addiu       $s0, $sp, 0x74
    ctx->pc = 0x1c51b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_1c51b8:
    // 0x1c51b8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1c51b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1c51bc:
    // 0x1c51bc: 0x27b10078  addiu       $s1, $sp, 0x78
    ctx->pc = 0x1c51bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_1c51c0:
    // 0x1c51c0: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x1c51c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c51c4:
    // 0x1c51c4: 0x27b2007c  addiu       $s2, $sp, 0x7C
    ctx->pc = 0x1c51c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_1c51c8:
    // 0x1c51c8: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1c51c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c51cc:
    // 0x1c51cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c51ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c51d0:
    // 0x1c51d0: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x1c51d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1c51d4:
    // 0x1c51d4: 0x26640d30  addiu       $a0, $s3, 0xD30
    ctx->pc = 0x1c51d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3376));
label_1c51d8:
    // 0x1c51d8: 0x46032500  add.s       $f20, $f4, $f3
    ctx->pc = 0x1c51d8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_1c51dc:
    // 0x1c51dc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1c51dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1c51e0:
    // 0x1c51e0: 0x46022540  add.s       $f21, $f4, $f2
    ctx->pc = 0x1c51e0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_1c51e4:
    // 0x1c51e4: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1c51e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1c51e8:
    // 0x1c51e8: 0xe6150000  swc1        $f21, 0x0($s0)
    ctx->pc = 0x1c51e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1c51ec:
    // 0x1c51ec: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1c51ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1c51f0:
    // 0x1c51f0: 0x46050d81  sub.s       $f22, $f1, $f5
    ctx->pc = 0x1c51f0u;
    ctx->f[22] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_1c51f4:
    // 0x1c51f4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1c51f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1c51f8:
    // 0x1c51f8: 0xc066e34  jal         func_19B8D0
label_1c51fc:
    if (ctx->pc == 0x1C51FCu) {
        ctx->pc = 0x1C51FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51F8u;
        // 0x1c51fc: 0x460505c1  sub.s       $f23, $f0, $f5 (Delay Slot)
        ctx->f[23] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5200u;
        goto label_1c5200;
    }
    ctx->pc = 0x1C51F8u;
    SET_GPR_U32(ctx, 31, 0x1C5200u);
    ctx->pc = 0x1C51FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51F8u;
    // 0x1c51fc: 0x460505c1  sub.s       $f23, $f0, $f5 (Delay Slot)
    ctx->f[23] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x1C5200u;
label_1c5200:
    // 0x1c5200: 0x4616a040  add.s       $f1, $f20, $f22
    ctx->pc = 0x1c5200u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_1c5204:
    // 0x1c5204: 0x26640d40  addiu       $a0, $s3, 0xD40
    ctx->pc = 0x1c5204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3392));
label_1c5208:
    // 0x1c5208: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1c5208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1c520c:
    // 0x1c520c: 0x4617a800  add.s       $f0, $f21, $f23
    ctx->pc = 0x1c520cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
label_1c5210:
    // 0x1c5210: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x1c5210u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1c5214:
    // 0x1c5214: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1c5214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1c5218:
    // 0x1c5218: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1c5218u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1c521c:
    // 0x1c521c: 0xc066e34  jal         func_19B8D0
label_1c5220:
    if (ctx->pc == 0x1C5220u) {
        ctx->pc = 0x1C5220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C521Cu;
        // 0x1c5220: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5224u;
        goto label_1c5224;
    }
    ctx->pc = 0x1C521Cu;
    SET_GPR_U32(ctx, 31, 0x1C5224u);
    ctx->pc = 0x1C5220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C521Cu;
    // 0x1c5220: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x1C5224u;
label_1c5224:
    // 0x1c5224: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c5224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1c5228:
    // 0x1c5228: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1c5228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1c522c:
    // 0x1c522c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1c522cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c5230:
    // 0x1c5230: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1c5230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1c5234:
    // 0x1c5234: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c5234u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c5238:
    // 0x1c5238: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1c5238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1c523c:
    // 0x1c523c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c523cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c5240:
    // 0x1c5240: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c5240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c5244:
    // 0x1c5244: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c5244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c5248:
    // 0x1c5248: 0x3e00008  jr          $ra
label_1c524c:
    if (ctx->pc == 0x1C524Cu) {
        ctx->pc = 0x1C524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5248u;
        // 0x1c524c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5250u;
        goto label_1c5250;
    }
    ctx->pc = 0x1C5248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5248u;
        // 0x1c524c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5250u;
label_1c5250:
    // 0x1c5250: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c5250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1c5254:
    // 0x1c5254: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c5254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1c5258:
    // 0x1c5258: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c5258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1c525c:
    // 0x1c525c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c525cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1c5260:
    // 0x1c5260: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c5260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c5264:
    // 0x1c5264: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1c5264u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1c5268:
    // 0x1c5268: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c5268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c526c:
    // 0x1c526c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c526cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c5270:
    // 0x1c5270: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c5270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c5274:
    // 0x1c5274: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1c5274u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_1c5278:
    // 0x1c5278: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1c5278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1c527c:
    // 0x1c527c: 0xc0727d8  jal         func_1C9F60
label_1c5280:
    if (ctx->pc == 0x1C5280u) {
        ctx->pc = 0x1C5280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C527Cu;
        // 0x1c5280: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5284u;
        goto label_1c5284;
    }
    ctx->pc = 0x1C527Cu;
    SET_GPR_U32(ctx, 31, 0x1C5284u);
    ctx->pc = 0x1C5280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C527Cu;
    // 0x1c5280: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9F60u;
    { ctx->pc = 0x1c9f60; return; }
    ctx->pc = 0x1C5284u;
label_1c5284:
    // 0x1c5284: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1c5284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_1c5288:
    // 0x1c5288: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x1c5288u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1c528c:
    // 0x1c528c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1c528cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5290:
    // 0x1c5290: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1c5290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c5294:
    // 0x1c5294: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c5294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1c5298:
    // 0x1c5298: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x1c5298u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1c529c:
    // 0x1c529c: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x1c529cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c52a0:
    // 0x1c52a0: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x1c52a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c52a4:
    // 0x1c52a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c52a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c52a8:
    // 0x1c52a8: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x1c52a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_1c52ac:
    // 0x1c52ac: 0x46012040  add.s       $f1, $f4, $f1
    ctx->pc = 0x1c52acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_1c52b0:
    // 0x1c52b0: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x1c52b0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
label_1c52b4:
    // 0x1c52b4: 0x120301db  beq         $s0, $v1, . + 4 + (0x1DB << 2)
label_1c52b8:
    if (ctx->pc == 0x1C52B8u) {
        ctx->pc = 0x1C52B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52B4u;
        // 0x1c52b8: 0x460618c1  sub.s       $f3, $f3, $f6 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C52BCu;
        goto label_1c52bc;
    }
    ctx->pc = 0x1C52B4u;
    {
        const bool branch_taken_0x1c52b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C52B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52B4u;
        // 0x1c52b8: 0x460618c1  sub.s       $f3, $f3, $f6 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52b4) {
            ctx->pc = 0x1C5A24u;
            { ctx->pc = 0x1c5a24; return; }
        }
    }
    ctx->pc = 0x1C52BCu;
label_1c52bc:
    // 0x1c52bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c52bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c52c0:
    // 0x1c52c0: 0x1203013e  beq         $s0, $v1, . + 4 + (0x13E << 2)
label_1c52c4:
    if (ctx->pc == 0x1C52C4u) {
        ctx->pc = 0x1C52C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52C0u;
        // 0x1c52c4: 0x4600a907  neg.s       $f4, $f21 (Delay Slot)
        ctx->f[4] = FPU_NEG_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C52C8u;
        goto label_1c52c8;
    }
    ctx->pc = 0x1C52C0u;
    {
        const bool branch_taken_0x1c52c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C52C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52C0u;
        // 0x1c52c4: 0x4600a907  neg.s       $f4, $f21 (Delay Slot)
        ctx->f[4] = FPU_NEG_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52c0) {
            ctx->pc = 0x1C57BCu;
            goto label_1c57bc;
        }
    }
    ctx->pc = 0x1C52C8u;
label_1c52c8:
    // 0x1c52c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c52c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c52cc:
    // 0x1c52cc: 0x120300a0  beq         $s0, $v1, . + 4 + (0xA0 << 2)
label_1c52d0:
    if (ctx->pc == 0x1C52D0u) {
        ctx->pc = 0x1C52D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52CCu;
        // 0x1c52d0: 0x4600a107  neg.s       $f4, $f20 (Delay Slot)
        ctx->f[4] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C52D4u;
        goto label_1c52d4;
    }
    ctx->pc = 0x1C52CCu;
    {
        const bool branch_taken_0x1c52cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C52D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52CCu;
        // 0x1c52d0: 0x4600a107  neg.s       $f4, $f20 (Delay Slot)
        ctx->f[4] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52cc) {
            ctx->pc = 0x1C5550u;
            goto label_1c5550;
        }
    }
    ctx->pc = 0x1C52D4u;
label_1c52d4:
    // 0x1c52d4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1c52d8:
    if (ctx->pc == 0x1C52D8u) {
        ctx->pc = 0x1C52D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52D4u;
        // 0x1c52d8: 0x4600a907  neg.s       $f4, $f21 (Delay Slot)
        ctx->f[4] = FPU_NEG_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C52DCu;
        goto label_1c52dc;
    }
    ctx->pc = 0x1C52D4u;
    {
        const bool branch_taken_0x1c52d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C52D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52D4u;
        // 0x1c52d8: 0x4600a907  neg.s       $f4, $f21 (Delay Slot)
        ctx->f[4] = FPU_NEG_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52d4) {
            ctx->pc = 0x1C52E4u;
            goto label_1c52e4;
        }
    }
    ctx->pc = 0x1C52DCu;
label_1c52dc:
    // 0x1c52dc: 0x1000026a  b           . + 4 + (0x26A << 2)
label_1c52e0:
    if (ctx->pc == 0x1C52E0u) {
        ctx->pc = 0x1C52E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52DCu;
        // 0x1c52e0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C52E4u;
        goto label_1c52e4;
    }
    ctx->pc = 0x1C52DCu;
    {
        const bool branch_taken_0x1c52dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C52E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52DCu;
        // 0x1c52e0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52dc) {
            ctx->pc = 0x1C5C88u;
            { ctx->pc = 0x1c5c88; return; }
        }
    }
    ctx->pc = 0x1C52E4u;
label_1c52e4:
    // 0x1c52e4: 0x4600a147  neg.s       $f5, $f20
    ctx->pc = 0x1c52e4u;
    ctx->f[5] = FPU_NEG_S(ctx->f[20]);
label_1c52e8:
    // 0x1c52e8: 0xe6240260  swc1        $f4, 0x260($s1)
    ctx->pc = 0x1c52e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 608), bits); }
label_1c52ec:
    // 0x1c52ec: 0xe6250264  swc1        $f5, 0x264($s1)
    ctx->pc = 0x1c52ecu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 612), bits); }
label_1c52f0:
    // 0x1c52f0: 0xae200268  sw          $zero, 0x268($s1)
    ctx->pc = 0x1c52f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 616), GPR_U32(ctx, 0));
label_1c52f4:
    // 0x1c52f4: 0xe626026c  swc1        $f6, 0x26C($s1)
    ctx->pc = 0x1c52f4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 620), bits); }
label_1c52f8:
    // 0x1c52f8: 0xe6240270  swc1        $f4, 0x270($s1)
    ctx->pc = 0x1c52f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 624), bits); }
label_1c52fc:
    // 0x1c52fc: 0xae200274  sw          $zero, 0x274($s1)
    ctx->pc = 0x1c52fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 0));
label_1c5300:
    // 0x1c5300: 0xae200278  sw          $zero, 0x278($s1)
    ctx->pc = 0x1c5300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 632), GPR_U32(ctx, 0));
label_1c5304:
    // 0x1c5304: 0xe626027c  swc1        $f6, 0x27C($s1)
    ctx->pc = 0x1c5304u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 636), bits); }
label_1c5308:
    // 0x1c5308: 0xae200280  sw          $zero, 0x280($s1)
    ctx->pc = 0x1c5308u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 640), GPR_U32(ctx, 0));
label_1c530c:
    // 0x1c530c: 0xe6250284  swc1        $f5, 0x284($s1)
    ctx->pc = 0x1c530cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 644), bits); }
label_1c5310:
    // 0x1c5310: 0xae200288  sw          $zero, 0x288($s1)
    ctx->pc = 0x1c5310u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 648), GPR_U32(ctx, 0));
label_1c5314:
    // 0x1c5314: 0xe626028c  swc1        $f6, 0x28C($s1)
    ctx->pc = 0x1c5314u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 652), bits); }
label_1c5318:
    // 0x1c5318: 0xae200290  sw          $zero, 0x290($s1)
    ctx->pc = 0x1c5318u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 0));
label_1c531c:
    // 0x1c531c: 0xae200294  sw          $zero, 0x294($s1)
    ctx->pc = 0x1c531cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 660), GPR_U32(ctx, 0));
label_1c5320:
    // 0x1c5320: 0xae200298  sw          $zero, 0x298($s1)
    ctx->pc = 0x1c5320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 0));
label_1c5324:
    // 0x1c5324: 0xe626029c  swc1        $f6, 0x29C($s1)
    ctx->pc = 0x1c5324u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 668), bits); }
label_1c5328:
    // 0x1c5328: 0x962302f2  lhu         $v1, 0x2F2($s1)
    ctx->pc = 0x1c5328u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 754)));
label_1c532c:
    // 0x1c532c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1c5330:
    if (ctx->pc == 0x1C5330u) {
        ctx->pc = 0x1C5330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C532Cu;
        // 0x1c5330: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5334u;
        goto label_1c5334;
    }
    ctx->pc = 0x1C532Cu;
    {
        const bool branch_taken_0x1c532c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C5330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C532Cu;
        // 0x1c5330: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c532c) {
            ctx->pc = 0x1C5340u;
            goto label_1c5340;
        }
    }
    ctx->pc = 0x1C5334u;
label_1c5334:
    // 0x1c5334: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x1c5334u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1c5338:
    // 0x1c5338: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c533c:
    if (ctx->pc == 0x1C533Cu) {
        ctx->pc = 0x1C533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5338u;
        // 0x1c533c: 0x46802120  cvt.s.w     $f4, $f4 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5340u;
        goto label_1c5340;
    }
    ctx->pc = 0x1C5338u;
    {
        const bool branch_taken_0x1c5338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5338u;
        // 0x1c533c: 0x46802120  cvt.s.w     $f4, $f4 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5338) {
            ctx->pc = 0x1C5358u;
            goto label_1c5358;
        }
    }
    ctx->pc = 0x1C5340u;
label_1c5340:
    // 0x1c5340: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c5340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c5344:
    // 0x1c5344: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c5344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c5348:
    // 0x1c5348: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x1c5348u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1c534c:
    // 0x1c534c: 0x0  nop
    ctx->pc = 0x1c534cu;
    // NOP
label_1c5350:
    // 0x1c5350: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1c5350u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_1c5354:
    // 0x1c5354: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x1c5354u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_1c5358:
    // 0x1c5358: 0x0  nop
    ctx->pc = 0x1c5358u;
    // NOP
label_1c535c:
    // 0x1c535c: 0x0  nop
    ctx->pc = 0x1c535cu;
    // NOP
label_1c5360:
    // 0x1c5360: 0x46040103  div.s       $f4, $f0, $f4
    ctx->pc = 0x1c5360u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[4] = ctx->f[0] / ctx->f[4];
label_1c5364:
    // 0x1c5364: 0x0  nop
    ctx->pc = 0x1c5364u;
    // NOP
label_1c5368:
    // 0x1c5368: 0xe62402b0  swc1        $f4, 0x2B0($s1)
    ctx->pc = 0x1c5368u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 688), bits); }
label_1c536c:
    // 0x1c536c: 0x962302f4  lhu         $v1, 0x2F4($s1)
    ctx->pc = 0x1c536cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 756)));
label_1c5370:
    // 0x1c5370: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1c5374:
    if (ctx->pc == 0x1C5374u) {
        ctx->pc = 0x1C5374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5370u;
        // 0x1c5374: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5378u;
        goto label_1c5378;
    }
    ctx->pc = 0x1C5370u;
    {
        const bool branch_taken_0x1c5370 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C5374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5370u;
        // 0x1c5374: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5370) {
            ctx->pc = 0x1C5384u;
            goto label_1c5384;
        }
    }
    ctx->pc = 0x1C5378u;
label_1c5378:
    // 0x1c5378: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x1c5378u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1c537c:
    // 0x1c537c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c5380:
    if (ctx->pc == 0x1C5380u) {
        ctx->pc = 0x1C5380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C537Cu;
        // 0x1c5380: 0x46802120  cvt.s.w     $f4, $f4 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5384u;
        goto label_1c5384;
    }
    ctx->pc = 0x1C537Cu;
    {
        const bool branch_taken_0x1c537c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C537Cu;
        // 0x1c5380: 0x46802120  cvt.s.w     $f4, $f4 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c537c) {
            ctx->pc = 0x1C539Cu;
            goto label_1c539c;
        }
    }
    ctx->pc = 0x1C5384u;
label_1c5384:
    // 0x1c5384: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c5384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c5388:
    // 0x1c5388: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c5388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c538c:
    // 0x1c538c: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x1c538cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1c5390:
    // 0x1c5390: 0x0  nop
    ctx->pc = 0x1c5390u;
    // NOP
label_1c5394:
    // 0x1c5394: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1c5394u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_1c5398:
    // 0x1c5398: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x1c5398u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_1c539c:
    // 0x1c539c: 0x0  nop
    ctx->pc = 0x1c539cu;
    // NOP
label_1c53a0:
    // 0x1c53a0: 0x0  nop
    ctx->pc = 0x1c53a0u;
    // NOP
label_1c53a4:
    // 0x1c53a4: 0x46040903  div.s       $f4, $f1, $f4
    ctx->pc = 0x1c53a4u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[4] = ctx->f[1] / ctx->f[4];
label_1c53a8:
    // 0x1c53a8: 0x0  nop
    ctx->pc = 0x1c53a8u;
    // NOP
label_1c53ac:
    // 0x1c53ac: 0xe62402b4  swc1        $f4, 0x2B4($s1)
    ctx->pc = 0x1c53acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 692), bits); }
label_1c53b0:
    // 0x1c53b0: 0x962302f2  lhu         $v1, 0x2F2($s1)
    ctx->pc = 0x1c53b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 754)));
label_1c53b4:
    // 0x1c53b4: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1c53b8:
    if (ctx->pc == 0x1C53B8u) {
        ctx->pc = 0x1C53B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C53B4u;
        // 0x1c53b8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C53BCu;
        goto label_1c53bc;
    }
    ctx->pc = 0x1C53B4u;
    {
        const bool branch_taken_0x1c53b4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C53B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C53B4u;
        // 0x1c53b8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c53b4) {
            ctx->pc = 0x1C53C8u;
            goto label_1c53c8;
        }
    }
    ctx->pc = 0x1C53BCu;
label_1c53bc:
    // 0x1c53bc: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x1c53bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1c53c0:
    // 0x1c53c0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c53c4:
    if (ctx->pc == 0x1C53C4u) {
        ctx->pc = 0x1C53C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C53C0u;
        // 0x1c53c4: 0x46802120  cvt.s.w     $f4, $f4 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C53C8u;
        goto label_1c53c8;
    }
    ctx->pc = 0x1C53C0u;
    {
        const bool branch_taken_0x1c53c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C53C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C53C0u;
        // 0x1c53c4: 0x46802120  cvt.s.w     $f4, $f4 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c53c0) {
            ctx->pc = 0x1C53E0u;
            goto label_1c53e0;
        }
    }
    ctx->pc = 0x1C53C8u;
label_1c53c8:
    // 0x1c53c8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c53c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c53cc:
    // 0x1c53cc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c53ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c53d0:
    // 0x1c53d0: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x1c53d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1c53d4:
    // 0x1c53d4: 0x0  nop
    ctx->pc = 0x1c53d4u;
    // NOP
label_1c53d8:
    // 0x1c53d8: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1c53d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_1c53dc:
    // 0x1c53dc: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x1c53dcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_1c53e0:
    // 0x1c53e0: 0x0  nop
    ctx->pc = 0x1c53e0u;
    // NOP
label_1c53e4:
    // 0x1c53e4: 0x0  nop
    ctx->pc = 0x1c53e4u;
    // NOP
label_1c53e8:
    // 0x1c53e8: 0x46040103  div.s       $f4, $f0, $f4
    ctx->pc = 0x1c53e8u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[4] = ctx->f[0] / ctx->f[4];
label_1c53ec:
    // 0x1c53ec: 0xe62402b8  swc1        $f4, 0x2B8($s1)
    ctx->pc = 0x1c53ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 696), bits); }
label_1c53f0:
    // 0x1c53f0: 0x962302f4  lhu         $v1, 0x2F4($s1)
    ctx->pc = 0x1c53f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 756)));
label_1c53f4:
    // 0x1c53f4: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1c53f8:
    if (ctx->pc == 0x1C53F8u) {
        ctx->pc = 0x1C53F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C53F4u;
        // 0x1c53f8: 0x46030900  add.s       $f4, $f1, $f3 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C53FCu;
        goto label_1c53fc;
    }
    ctx->pc = 0x1C53F4u;
    {
        const bool branch_taken_0x1c53f4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C53F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C53F4u;
        // 0x1c53f8: 0x46030900  add.s       $f4, $f1, $f3 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c53f4) {
            ctx->pc = 0x1C5408u;
            goto label_1c5408;
        }
    }
    ctx->pc = 0x1C53FCu;
label_1c53fc:
    // 0x1c53fc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1c53fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1c5400:
    // 0x1c5400: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c5404:
    if (ctx->pc == 0x1C5404u) {
        ctx->pc = 0x1C5404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5400u;
        // 0x1c5404: 0x468018e0  cvt.s.w     $f3, $f3 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5408u;
        goto label_1c5408;
    }
    ctx->pc = 0x1C5400u;
    {
        const bool branch_taken_0x1c5400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5400u;
        // 0x1c5404: 0x468018e0  cvt.s.w     $f3, $f3 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5400) {
            ctx->pc = 0x1C5424u;
            goto label_1c5424;
        }
    }
    ctx->pc = 0x1C5408u;
label_1c5408:
    // 0x1c5408: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1c5408u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_1c540c:
    // 0x1c540c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c540cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c5410:
    // 0x1c5410: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c5410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c5414:
    // 0x1c5414: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x1c5414u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1c5418:
    // 0x1c5418: 0x0  nop
    ctx->pc = 0x1c5418u;
    // NOP
label_1c541c:
    // 0x1c541c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1c541cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1c5420:
    // 0x1c5420: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1c5420u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_1c5424:
    // 0x1c5424: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x1c5424u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1c5428:
    // 0x1c5428: 0x0  nop
    ctx->pc = 0x1c5428u;
    // NOP
label_1c542c:
    // 0x1c542c: 0x46032003  div.s       $f0, $f4, $f3
    ctx->pc = 0x1c542cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[0] = ctx->f[4] / ctx->f[3];
label_1c5430:
    // 0x1c5430: 0x0  nop
    ctx->pc = 0x1c5430u;
    // NOP
label_1c5434:
    // 0x1c5434: 0xe62002bc  swc1        $f0, 0x2BC($s1)
    ctx->pc = 0x1c5434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 700), bits); }
label_1c5438:
    // 0x1c5438: 0x962302f2  lhu         $v1, 0x2F2($s1)
    ctx->pc = 0x1c5438u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 754)));
label_1c543c:
    // 0x1c543c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1c5440:
    if (ctx->pc == 0x1C5440u) {
        ctx->pc = 0x1C5440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C543Cu;
        // 0x1c5440: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5444u;
        goto label_1c5444;
    }
    ctx->pc = 0x1C543Cu;
    {
        const bool branch_taken_0x1c543c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C5440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C543Cu;
        // 0x1c5440: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c543c) {
            ctx->pc = 0x1C5450u;
            goto label_1c5450;
        }
    }
    ctx->pc = 0x1C5444u;
label_1c5444:
    // 0x1c5444: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c5444u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c5448:
    // 0x1c5448: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c544c:
    if (ctx->pc == 0x1C544Cu) {
        ctx->pc = 0x1C544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5448u;
        // 0x1c544c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5450u;
        goto label_1c5450;
    }
    ctx->pc = 0x1C5448u;
    {
        const bool branch_taken_0x1c5448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5448u;
        // 0x1c544c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5448) {
            ctx->pc = 0x1C5468u;
            goto label_1c5468;
        }
    }
    ctx->pc = 0x1C5450u;
label_1c5450:
    // 0x1c5450: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c5450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c5454:
    // 0x1c5454: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c5454u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c5458:
    // 0x1c5458: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c5458u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c545c:
    // 0x1c545c: 0x0  nop
    ctx->pc = 0x1c545cu;
    // NOP
label_1c5460:
    // 0x1c5460: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c5460u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1c5464:
    // 0x1c5464: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1c5464u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1c5468:
    // 0x1c5468: 0x0  nop
    ctx->pc = 0x1c5468u;
    // NOP
label_1c546c:
    // 0x1c546c: 0x0  nop
    ctx->pc = 0x1c546cu;
    // NOP
label_1c5470:
    // 0x1c5470: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1c5470u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
label_1c5474:
    // 0x1c5474: 0x0  nop
    ctx->pc = 0x1c5474u;
    // NOP
label_1c5478:
    // 0x1c5478: 0xe62002c0  swc1        $f0, 0x2C0($s1)
    ctx->pc = 0x1c5478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 704), bits); }
label_1c547c:
    // 0x1c547c: 0x962302f4  lhu         $v1, 0x2F4($s1)
    ctx->pc = 0x1c547cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 756)));
label_1c5480:
    // 0x1c5480: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1c5484:
    if (ctx->pc == 0x1C5484u) {
        ctx->pc = 0x1C5484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5480u;
        // 0x1c5484: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5488u;
        goto label_1c5488;
    }
    ctx->pc = 0x1C5480u;
    {
        const bool branch_taken_0x1c5480 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C5484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5480u;
        // 0x1c5484: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5480) {
            ctx->pc = 0x1C5494u;
            goto label_1c5494;
        }
    }
    ctx->pc = 0x1C5488u;
label_1c5488:
    // 0x1c5488: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c5488u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c548c:
    // 0x1c548c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c5490:
    if (ctx->pc == 0x1C5490u) {
        ctx->pc = 0x1C5490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C548Cu;
        // 0x1c5490: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5494u;
        goto label_1c5494;
    }
    ctx->pc = 0x1C548Cu;
    {
        const bool branch_taken_0x1c548c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C548Cu;
        // 0x1c5490: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c548c) {
            ctx->pc = 0x1C54ACu;
            goto label_1c54ac;
        }
    }
    ctx->pc = 0x1C5494u;
label_1c5494:
    // 0x1c5494: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c5494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c5498:
    // 0x1c5498: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c5498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c549c:
    // 0x1c549c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c549cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c54a0:
    // 0x1c54a0: 0x0  nop
    ctx->pc = 0x1c54a0u;
    // NOP
label_1c54a4:
    // 0x1c54a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c54a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1c54a8:
    // 0x1c54a8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1c54a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1c54ac:
    // 0x1c54ac: 0x0  nop
    ctx->pc = 0x1c54acu;
    // NOP
label_1c54b0:
    // 0x1c54b0: 0x0  nop
    ctx->pc = 0x1c54b0u;
    // NOP
label_1c54b4:
    // 0x1c54b4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1c54b4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1c54b8:
    // 0x1c54b8: 0x0  nop
    ctx->pc = 0x1c54b8u;
    // NOP
label_1c54bc:
    // 0x1c54bc: 0xe62002c4  swc1        $f0, 0x2C4($s1)
    ctx->pc = 0x1c54bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 708), bits); }
label_1c54c0:
    // 0x1c54c0: 0x962302f2  lhu         $v1, 0x2F2($s1)
    ctx->pc = 0x1c54c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 754)));
label_1c54c4:
    // 0x1c54c4: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1c54c8:
    if (ctx->pc == 0x1C54C8u) {
        ctx->pc = 0x1C54C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C54C4u;
        // 0x1c54c8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C54CCu;
        goto label_1c54cc;
    }
    ctx->pc = 0x1C54C4u;
    {
        const bool branch_taken_0x1c54c4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C54C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C54C4u;
        // 0x1c54c8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c54c4) {
            ctx->pc = 0x1C54D8u;
            goto label_1c54d8;
        }
    }
    ctx->pc = 0x1C54CCu;
label_1c54cc:
    // 0x1c54cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c54ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c54d0:
    // 0x1c54d0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c54d4:
    if (ctx->pc == 0x1C54D4u) {
        ctx->pc = 0x1C54D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C54D0u;
        // 0x1c54d4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C54D8u;
        goto label_1c54d8;
    }
    ctx->pc = 0x1C54D0u;
    {
        const bool branch_taken_0x1c54d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C54D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C54D0u;
        // 0x1c54d4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c54d0) {
            ctx->pc = 0x1C54F0u;
            goto label_1c54f0;
        }
    }
    ctx->pc = 0x1C54D8u;
label_1c54d8:
    // 0x1c54d8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c54d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c54dc:
    // 0x1c54dc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c54dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c54e0:
    // 0x1c54e0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c54e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c54e4:
    // 0x1c54e4: 0x0  nop
    ctx->pc = 0x1c54e4u;
    // NOP
label_1c54e8:
    // 0x1c54e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c54e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1c54ec:
    // 0x1c54ec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1c54ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1c54f0:
    // 0x1c54f0: 0x0  nop
    ctx->pc = 0x1c54f0u;
    // NOP
label_1c54f4:
    // 0x1c54f4: 0x0  nop
    ctx->pc = 0x1c54f4u;
    // NOP
label_1c54f8:
    // 0x1c54f8: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1c54f8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
label_1c54fc:
    // 0x1c54fc: 0x0  nop
    ctx->pc = 0x1c54fcu;
    // NOP
label_1c5500:
    // 0x1c5500: 0xe62002c8  swc1        $f0, 0x2C8($s1)
    ctx->pc = 0x1c5500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 712), bits); }
label_1c5504:
    // 0x1c5504: 0x962302f4  lhu         $v1, 0x2F4($s1)
    ctx->pc = 0x1c5504u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 756)));
label_1c5508:
    // 0x1c5508: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1c550c:
    if (ctx->pc == 0x1C550Cu) {
        ctx->pc = 0x1C550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5508u;
        // 0x1c550c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5510u;
        goto label_1c5510;
    }
    ctx->pc = 0x1C5508u;
    {
        const bool branch_taken_0x1c5508 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5508u;
        // 0x1c550c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5508) {
            ctx->pc = 0x1C551Cu;
            goto label_1c551c;
        }
    }
    ctx->pc = 0x1C5510u;
label_1c5510:
    // 0x1c5510: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c5510u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c5514:
    // 0x1c5514: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c5518:
    if (ctx->pc == 0x1C5518u) {
        ctx->pc = 0x1C5518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5514u;
        // 0x1c5518: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C551Cu;
        goto label_1c551c;
    }
    ctx->pc = 0x1C5514u;
    {
        const bool branch_taken_0x1c5514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5514u;
        // 0x1c5518: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5514) {
            ctx->pc = 0x1C5534u;
            goto label_1c5534;
        }
    }
    ctx->pc = 0x1C551Cu;
label_1c551c:
    // 0x1c551c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c551cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c5520:
    // 0x1c5520: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c5520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c5524:
    // 0x1c5524: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c5524u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c5528:
    // 0x1c5528: 0x0  nop
    ctx->pc = 0x1c5528u;
    // NOP
label_1c552c:
    // 0x1c552c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c552cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1c5530:
    // 0x1c5530: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1c5530u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1c5534:
    // 0x1c5534: 0x0  nop
    ctx->pc = 0x1c5534u;
    // NOP
label_1c5538:
    // 0x1c5538: 0x0  nop
    ctx->pc = 0x1c5538u;
    // NOP
label_1c553c:
    // 0x1c553c: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x1c553cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[0] = ctx->f[4] / ctx->f[0];
label_1c5540:
    // 0x1c5540: 0x0  nop
    ctx->pc = 0x1c5540u;
    // NOP
label_1c5544:
    // 0x1c5544: 0x0  nop
    ctx->pc = 0x1c5544u;
    // NOP
label_1c5548:
    // 0x1c5548: 0x100001ce  b           . + 4 + (0x1CE << 2)
label_1c554c:
    if (ctx->pc == 0x1C554Cu) {
        ctx->pc = 0x1C554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5548u;
        // 0x1c554c: 0xe62002cc  swc1        $f0, 0x2CC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 716), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5550u;
        goto label_1c5550;
    }
    ctx->pc = 0x1C5548u;
    {
        const bool branch_taken_0x1c5548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5548u;
        // 0x1c554c: 0xe62002cc  swc1        $f0, 0x2CC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 716), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5548) {
            ctx->pc = 0x1C5C84u;
            { ctx->pc = 0x1c5c84; return; }
        }
    }
    ctx->pc = 0x1C5550u;
label_1c5550:
    // 0x1c5550: 0xae200260  sw          $zero, 0x260($s1)
    ctx->pc = 0x1c5550u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 0));
label_1c5554:
    // 0x1c5554: 0xe6240264  swc1        $f4, 0x264($s1)
    ctx->pc = 0x1c5554u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 612), bits); }
label_1c5558:
    // 0x1c5558: 0xae200268  sw          $zero, 0x268($s1)
    ctx->pc = 0x1c5558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 616), GPR_U32(ctx, 0));
label_1c555c:
    // 0x1c555c: 0xe626026c  swc1        $f6, 0x26C($s1)
    ctx->pc = 0x1c555cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 620), bits); }
label_1c5560:
    // 0x1c5560: 0xae200270  sw          $zero, 0x270($s1)
    ctx->pc = 0x1c5560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 624), GPR_U32(ctx, 0));
label_1c5564:
    // 0x1c5564: 0xae200274  sw          $zero, 0x274($s1)
    ctx->pc = 0x1c5564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 0));
label_1c5568:
    // 0x1c5568: 0xae200278  sw          $zero, 0x278($s1)
    ctx->pc = 0x1c5568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 632), GPR_U32(ctx, 0));
label_1c556c:
    // 0x1c556c: 0xe626027c  swc1        $f6, 0x27C($s1)
    ctx->pc = 0x1c556cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 636), bits); }
label_1c5570:
    // 0x1c5570: 0xe6350280  swc1        $f21, 0x280($s1)
    ctx->pc = 0x1c5570u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 640), bits); }
label_1c5574:
    // 0x1c5574: 0xe6240284  swc1        $f4, 0x284($s1)
    ctx->pc = 0x1c5574u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 644), bits); }
label_1c5578:
    // 0x1c5578: 0xae200288  sw          $zero, 0x288($s1)
    ctx->pc = 0x1c5578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 648), GPR_U32(ctx, 0));
label_1c557c:
    // 0x1c557c: 0xe626028c  swc1        $f6, 0x28C($s1)
    ctx->pc = 0x1c557cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 652), bits); }
label_1c5580:
    // 0x1c5580: 0xe6350290  swc1        $f21, 0x290($s1)
    ctx->pc = 0x1c5580u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 656), bits); }
label_1c5584:
    // 0x1c5584: 0xae200294  sw          $zero, 0x294($s1)
    ctx->pc = 0x1c5584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 660), GPR_U32(ctx, 0));
label_1c5588:
    // 0x1c5588: 0xae200298  sw          $zero, 0x298($s1)
    ctx->pc = 0x1c5588u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 0));
label_1c558c:
    // 0x1c558c: 0xe626029c  swc1        $f6, 0x29C($s1)
    ctx->pc = 0x1c558cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 668), bits); }
label_1c5590:
    // 0x1c5590: 0x962302f2  lhu         $v1, 0x2F2($s1)
    ctx->pc = 0x1c5590u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 754)));
label_1c5594:
    // 0x1c5594: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1c5598:
    if (ctx->pc == 0x1C5598u) {
        ctx->pc = 0x1C5598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5594u;
        // 0x1c5598: 0x46020140  add.s       $f5, $f0, $f2 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C559Cu;
        goto label_1c559c;
    }
    ctx->pc = 0x1C5594u;
    {
        const bool branch_taken_0x1c5594 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C5598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5594u;
        // 0x1c5598: 0x46020140  add.s       $f5, $f0, $f2 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5594) {
            ctx->pc = 0x1C55A8u;
            goto label_1c55a8;
        }
    }
    ctx->pc = 0x1C559Cu;
label_1c559c:
    // 0x1c559c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c559cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c55a0:
    // 0x1c55a0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c55a4:
    if (ctx->pc == 0x1C55A4u) {
        ctx->pc = 0x1C55A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C55A0u;
        // 0x1c55a4: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C55A8u;
        goto label_1c55a8;
    }
    ctx->pc = 0x1C55A0u;
    {
        const bool branch_taken_0x1c55a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C55A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C55A0u;
        // 0x1c55a4: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c55a0) {
            ctx->pc = 0x1C55C4u;
            goto label_1c55c4;
        }
    }
    ctx->pc = 0x1C55A8u;
label_1c55a8:
    // 0x1c55a8: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1c55a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_1c55ac:
    // 0x1c55ac: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c55acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c55b0:
    // 0x1c55b0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c55b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c55b4:
    // 0x1c55b4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1c55b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c55b8:
    // 0x1c55b8: 0x0  nop
    ctx->pc = 0x1c55b8u;
    // NOP
label_1c55bc:
    // 0x1c55bc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c55bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1c55c0:
    // 0x1c55c0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1c55c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1c55c4:
    // 0x1c55c4: 0x0  nop
    ctx->pc = 0x1c55c4u;
    // NOP
label_1c55c8:
    // 0x1c55c8: 0x0  nop
    ctx->pc = 0x1c55c8u;
    // NOP
label_1c55cc:
    // 0x1c55cc: 0x46022883  div.s       $f2, $f5, $f2
    ctx->pc = 0x1c55ccu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[2] = ctx->f[5] / ctx->f[2];
label_1c55d0:
    // 0x1c55d0: 0x0  nop
    ctx->pc = 0x1c55d0u;
    // NOP
label_1c55d4:
    // 0x1c55d4: 0xe62202b0  swc1        $f2, 0x2B0($s1)
    ctx->pc = 0x1c55d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 688), bits); }
label_1c55d8:
    // 0x1c55d8: 0x962302f4  lhu         $v1, 0x2F4($s1)
    ctx->pc = 0x1c55d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 756)));
label_1c55dc:
    // 0x1c55dc: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1c55e0:
    if (ctx->pc == 0x1C55E0u) {
        ctx->pc = 0x1C55E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C55DCu;
        // 0x1c55e0: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C55E4u;
        goto label_1c55e4;
    }
    ctx->pc = 0x1C55DCu;
    {
        const bool branch_taken_0x1c55dc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C55E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C55DCu;
        // 0x1c55e0: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c55dc) {
            ctx->pc = 0x1C55F0u;
            goto label_1c55f0;
        }
    }
    ctx->pc = 0x1C55E4u;
label_1c55e4:
    // 0x1c55e4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c55e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c55e8:
    // 0x1c55e8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c55ec:
    if (ctx->pc == 0x1C55ECu) {
        ctx->pc = 0x1C55ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C55E8u;
        // 0x1c55ec: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C55F0u;
        goto label_1c55f0;
    }
    ctx->pc = 0x1C55E8u;
    {
        const bool branch_taken_0x1c55e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C55ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C55E8u;
        // 0x1c55ec: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c55e8) {
            ctx->pc = 0x1C5608u;
            goto label_1c5608;
        }
    }
    ctx->pc = 0x1C55F0u;
label_1c55f0:
    // 0x1c55f0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c55f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c55f4:
    // 0x1c55f4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c55f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c55f8:
    // 0x1c55f8: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1c55f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c55fc:
    // 0x1c55fc: 0x0  nop
    ctx->pc = 0x1c55fcu;
    // NOP
label_1c5600:
    // 0x1c5600: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c5600u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1c5604:
    // 0x1c5604: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1c5604u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1c5608:
    // 0x1c5608: 0x0  nop
    ctx->pc = 0x1c5608u;
    // NOP
label_1c560c:
    // 0x1c560c: 0x0  nop
    ctx->pc = 0x1c560cu;
    // NOP
label_1c5610:
    // 0x1c5610: 0x46020883  div.s       $f2, $f1, $f2
    ctx->pc = 0x1c5610u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[2];
label_1c5614:
    // 0x1c5614: 0x0  nop
    ctx->pc = 0x1c5614u;
    // NOP
label_1c5618:
    // 0x1c5618: 0xe62202b4  swc1        $f2, 0x2B4($s1)
    ctx->pc = 0x1c5618u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 692), bits); }
label_1c561c:
    // 0x1c561c: 0x962302f2  lhu         $v1, 0x2F2($s1)
    ctx->pc = 0x1c561cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 754)));
label_1c5620:
    // 0x1c5620: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1c5624:
    if (ctx->pc == 0x1C5624u) {
        ctx->pc = 0x1C5624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5620u;
        // 0x1c5624: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5628u;
        goto label_1c5628;
    }
    ctx->pc = 0x1C5620u;
    {
        const bool branch_taken_0x1c5620 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C5624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5620u;
        // 0x1c5624: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5620) {
            ctx->pc = 0x1C5634u;
            goto label_1c5634;
        }
    }
    ctx->pc = 0x1C5628u;
label_1c5628:
    // 0x1c5628: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c5628u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c562c:
    // 0x1c562c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c5630:
    if (ctx->pc == 0x1C5630u) {
        ctx->pc = 0x1C5630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C562Cu;
        // 0x1c5630: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5634u;
        goto label_1c5634;
    }
    ctx->pc = 0x1C562Cu;
    {
        const bool branch_taken_0x1c562c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C562Cu;
        // 0x1c5630: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c562c) {
            ctx->pc = 0x1C564Cu;
            goto label_1c564c;
        }
    }
    ctx->pc = 0x1C5634u;
label_1c5634:
    // 0x1c5634: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c5634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c5638:
    // 0x1c5638: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c5638u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c563c:
    // 0x1c563c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1c563cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c5640:
    // 0x1c5640: 0x0  nop
    ctx->pc = 0x1c5640u;
    // NOP
label_1c5644:
    // 0x1c5644: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c5644u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1c5648:
    // 0x1c5648: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1c5648u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1c564c:
    // 0x1c564c: 0x0  nop
    ctx->pc = 0x1c564cu;
    // NOP
label_1c5650:
    // 0x1c5650: 0x0  nop
    ctx->pc = 0x1c5650u;
    // NOP
label_1c5654:
    // 0x1c5654: 0x46022883  div.s       $f2, $f5, $f2
    ctx->pc = 0x1c5654u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[2] = ctx->f[5] / ctx->f[2];
label_1c5658:
    // 0x1c5658: 0xe62202b8  swc1        $f2, 0x2B8($s1)
    ctx->pc = 0x1c5658u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 696), bits); }
label_1c565c:
    // 0x1c565c: 0x962302f4  lhu         $v1, 0x2F4($s1)
    ctx->pc = 0x1c565cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 756)));
label_1c5660:
    // 0x1c5660: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1c5664:
    if (ctx->pc == 0x1C5664u) {
        ctx->pc = 0x1C5664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5660u;
        // 0x1c5664: 0x460308c0  add.s       $f3, $f1, $f3 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5668u;
        goto label_1c5668;
    }
    ctx->pc = 0x1C5660u;
    {
        const bool branch_taken_0x1c5660 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C5664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5660u;
        // 0x1c5664: 0x460308c0  add.s       $f3, $f1, $f3 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5660) {
            ctx->pc = 0x1C5674u;
            goto label_1c5674;
        }
    }
    ctx->pc = 0x1C5668u;
label_1c5668:
    // 0x1c5668: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c5668u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c566c:
    // 0x1c566c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c5670:
    if (ctx->pc == 0x1C5670u) {
        ctx->pc = 0x1C5670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C566Cu;
        // 0x1c5670: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5674u;
        goto label_1c5674;
    }
    ctx->pc = 0x1C566Cu;
    {
        const bool branch_taken_0x1c566c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C566Cu;
        // 0x1c5670: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c566c) {
            ctx->pc = 0x1C5690u;
            goto label_1c5690;
        }
    }
    ctx->pc = 0x1C5674u;
label_1c5674:
    // 0x1c5674: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1c5674u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_1c5678:
    // 0x1c5678: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c5678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c567c:
    // 0x1c567c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c567cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1c5680:
    // 0x1c5680: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1c5680u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c5684:
    // 0x1c5684: 0x0  nop
    ctx->pc = 0x1c5684u;
    // NOP
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
            { ctx->pc = 0x1c5c84; return; }
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
        { ctx->pc = 0x1c5848; return; }
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
            { ctx->pc = 0x1c5854; return; }
        }
    }
    ctx->pc = 0x1C5848u;
    ctx->pc = 0x1c5848u;
    return;
}
