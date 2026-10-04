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

// Function: FUN_0017faa0
// Address: 0x17faa0 - 0x2bfb1c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017faa0_part110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1b4e30u: goto label_1b4e30;
        case 0x1b4e34u: goto label_1b4e34;
        case 0x1b4e38u: goto label_1b4e38;
        case 0x1b4e3cu: goto label_1b4e3c;
        case 0x1b4e40u: goto label_1b4e40;
        case 0x1b4e44u: goto label_1b4e44;
        case 0x1b4e48u: goto label_1b4e48;
        case 0x1b4e4cu: goto label_1b4e4c;
        case 0x1b4e50u: goto label_1b4e50;
        case 0x1b4e54u: goto label_1b4e54;
        case 0x1b4e58u: goto label_1b4e58;
        case 0x1b4e5cu: goto label_1b4e5c;
        case 0x1b4e60u: goto label_1b4e60;
        case 0x1b4e64u: goto label_1b4e64;
        case 0x1b4e68u: goto label_1b4e68;
        case 0x1b4e6cu: goto label_1b4e6c;
        case 0x1b4e70u: goto label_1b4e70;
        case 0x1b4e74u: goto label_1b4e74;
        case 0x1b4e78u: goto label_1b4e78;
        case 0x1b4e7cu: goto label_1b4e7c;
        case 0x1b4e80u: goto label_1b4e80;
        case 0x1b4e84u: goto label_1b4e84;
        case 0x1b4e88u: goto label_1b4e88;
        case 0x1b4e8cu: goto label_1b4e8c;
        case 0x1b4e90u: goto label_1b4e90;
        case 0x1b4e94u: goto label_1b4e94;
        case 0x1b4e98u: goto label_1b4e98;
        case 0x1b4e9cu: goto label_1b4e9c;
        case 0x1b4ea0u: goto label_1b4ea0;
        case 0x1b4ea4u: goto label_1b4ea4;
        case 0x1b4ea8u: goto label_1b4ea8;
        case 0x1b4eacu: goto label_1b4eac;
        case 0x1b4eb0u: goto label_1b4eb0;
        case 0x1b4eb4u: goto label_1b4eb4;
        case 0x1b4eb8u: goto label_1b4eb8;
        case 0x1b4ebcu: goto label_1b4ebc;
        case 0x1b4ec0u: goto label_1b4ec0;
        case 0x1b4ec4u: goto label_1b4ec4;
        case 0x1b4ec8u: goto label_1b4ec8;
        case 0x1b4eccu: goto label_1b4ecc;
        case 0x1b4ed0u: goto label_1b4ed0;
        case 0x1b4ed4u: goto label_1b4ed4;
        case 0x1b4ed8u: goto label_1b4ed8;
        case 0x1b4edcu: goto label_1b4edc;
        case 0x1b4ee0u: goto label_1b4ee0;
        case 0x1b4ee4u: goto label_1b4ee4;
        case 0x1b4ee8u: goto label_1b4ee8;
        case 0x1b4eecu: goto label_1b4eec;
        case 0x1b4ef0u: goto label_1b4ef0;
        case 0x1b4ef4u: goto label_1b4ef4;
        case 0x1b4ef8u: goto label_1b4ef8;
        case 0x1b4efcu: goto label_1b4efc;
        case 0x1b4f00u: goto label_1b4f00;
        case 0x1b4f04u: goto label_1b4f04;
        case 0x1b4f08u: goto label_1b4f08;
        case 0x1b4f0cu: goto label_1b4f0c;
        case 0x1b4f10u: goto label_1b4f10;
        case 0x1b4f14u: goto label_1b4f14;
        case 0x1b4f18u: goto label_1b4f18;
        case 0x1b4f1cu: goto label_1b4f1c;
        case 0x1b4f20u: goto label_1b4f20;
        case 0x1b4f24u: goto label_1b4f24;
        case 0x1b4f28u: goto label_1b4f28;
        case 0x1b4f2cu: goto label_1b4f2c;
        case 0x1b4f30u: goto label_1b4f30;
        case 0x1b4f34u: goto label_1b4f34;
        case 0x1b4f38u: goto label_1b4f38;
        case 0x1b4f3cu: goto label_1b4f3c;
        case 0x1b4f40u: goto label_1b4f40;
        case 0x1b4f44u: goto label_1b4f44;
        case 0x1b4f48u: goto label_1b4f48;
        case 0x1b4f4cu: goto label_1b4f4c;
        case 0x1b4f50u: goto label_1b4f50;
        case 0x1b4f54u: goto label_1b4f54;
        case 0x1b4f58u: goto label_1b4f58;
        case 0x1b4f5cu: goto label_1b4f5c;
        case 0x1b4f60u: goto label_1b4f60;
        case 0x1b4f64u: goto label_1b4f64;
        case 0x1b4f68u: goto label_1b4f68;
        case 0x1b4f6cu: goto label_1b4f6c;
        case 0x1b4f70u: goto label_1b4f70;
        case 0x1b4f74u: goto label_1b4f74;
        case 0x1b4f78u: goto label_1b4f78;
        case 0x1b4f7cu: goto label_1b4f7c;
        case 0x1b4f80u: goto label_1b4f80;
        case 0x1b4f84u: goto label_1b4f84;
        case 0x1b4f88u: goto label_1b4f88;
        case 0x1b4f8cu: goto label_1b4f8c;
        case 0x1b4f90u: goto label_1b4f90;
        case 0x1b4f94u: goto label_1b4f94;
        case 0x1b4f98u: goto label_1b4f98;
        case 0x1b4f9cu: goto label_1b4f9c;
        case 0x1b4fa0u: goto label_1b4fa0;
        case 0x1b4fa4u: goto label_1b4fa4;
        case 0x1b4fa8u: goto label_1b4fa8;
        case 0x1b4facu: goto label_1b4fac;
        case 0x1b4fb0u: goto label_1b4fb0;
        case 0x1b4fb4u: goto label_1b4fb4;
        case 0x1b4fb8u: goto label_1b4fb8;
        case 0x1b4fbcu: goto label_1b4fbc;
        case 0x1b4fc0u: goto label_1b4fc0;
        case 0x1b4fc4u: goto label_1b4fc4;
        case 0x1b4fc8u: goto label_1b4fc8;
        case 0x1b4fccu: goto label_1b4fcc;
        case 0x1b4fd0u: goto label_1b4fd0;
        case 0x1b4fd4u: goto label_1b4fd4;
        case 0x1b4fd8u: goto label_1b4fd8;
        case 0x1b4fdcu: goto label_1b4fdc;
        case 0x1b4fe0u: goto label_1b4fe0;
        case 0x1b4fe4u: goto label_1b4fe4;
        case 0x1b4fe8u: goto label_1b4fe8;
        case 0x1b4fecu: goto label_1b4fec;
        case 0x1b4ff0u: goto label_1b4ff0;
        case 0x1b4ff4u: goto label_1b4ff4;
        case 0x1b4ff8u: goto label_1b4ff8;
        case 0x1b4ffcu: goto label_1b4ffc;
        case 0x1b5000u: goto label_1b5000;
        case 0x1b5004u: goto label_1b5004;
        case 0x1b5008u: goto label_1b5008;
        case 0x1b500cu: goto label_1b500c;
        case 0x1b5010u: goto label_1b5010;
        case 0x1b5014u: goto label_1b5014;
        case 0x1b5018u: goto label_1b5018;
        case 0x1b501cu: goto label_1b501c;
        case 0x1b5020u: goto label_1b5020;
        case 0x1b5024u: goto label_1b5024;
        case 0x1b5028u: goto label_1b5028;
        case 0x1b502cu: goto label_1b502c;
        case 0x1b5030u: goto label_1b5030;
        case 0x1b5034u: goto label_1b5034;
        case 0x1b5038u: goto label_1b5038;
        case 0x1b503cu: goto label_1b503c;
        case 0x1b5040u: goto label_1b5040;
        case 0x1b5044u: goto label_1b5044;
        case 0x1b5048u: goto label_1b5048;
        case 0x1b504cu: goto label_1b504c;
        case 0x1b5050u: goto label_1b5050;
        case 0x1b5054u: goto label_1b5054;
        case 0x1b5058u: goto label_1b5058;
        case 0x1b505cu: goto label_1b505c;
        case 0x1b5060u: goto label_1b5060;
        case 0x1b5064u: goto label_1b5064;
        case 0x1b5068u: goto label_1b5068;
        case 0x1b506cu: goto label_1b506c;
        case 0x1b5070u: goto label_1b5070;
        case 0x1b5074u: goto label_1b5074;
        case 0x1b5078u: goto label_1b5078;
        case 0x1b507cu: goto label_1b507c;
        case 0x1b5080u: goto label_1b5080;
        case 0x1b5084u: goto label_1b5084;
        case 0x1b5088u: goto label_1b5088;
        case 0x1b508cu: goto label_1b508c;
        case 0x1b5090u: goto label_1b5090;
        case 0x1b5094u: goto label_1b5094;
        case 0x1b5098u: goto label_1b5098;
        case 0x1b509cu: goto label_1b509c;
        case 0x1b50a0u: goto label_1b50a0;
        case 0x1b50a4u: goto label_1b50a4;
        case 0x1b50a8u: goto label_1b50a8;
        case 0x1b50acu: goto label_1b50ac;
        case 0x1b50b0u: goto label_1b50b0;
        case 0x1b50b4u: goto label_1b50b4;
        case 0x1b50b8u: goto label_1b50b8;
        case 0x1b50bcu: goto label_1b50bc;
        case 0x1b50c0u: goto label_1b50c0;
        case 0x1b50c4u: goto label_1b50c4;
        case 0x1b50c8u: goto label_1b50c8;
        case 0x1b50ccu: goto label_1b50cc;
        case 0x1b50d0u: goto label_1b50d0;
        case 0x1b50d4u: goto label_1b50d4;
        case 0x1b50d8u: goto label_1b50d8;
        case 0x1b50dcu: goto label_1b50dc;
        case 0x1b50e0u: goto label_1b50e0;
        case 0x1b50e4u: goto label_1b50e4;
        case 0x1b50e8u: goto label_1b50e8;
        case 0x1b50ecu: goto label_1b50ec;
        case 0x1b50f0u: goto label_1b50f0;
        case 0x1b50f4u: goto label_1b50f4;
        case 0x1b50f8u: goto label_1b50f8;
        case 0x1b50fcu: goto label_1b50fc;
        case 0x1b5100u: goto label_1b5100;
        case 0x1b5104u: goto label_1b5104;
        case 0x1b5108u: goto label_1b5108;
        case 0x1b510cu: goto label_1b510c;
        case 0x1b5110u: goto label_1b5110;
        case 0x1b5114u: goto label_1b5114;
        case 0x1b5118u: goto label_1b5118;
        case 0x1b511cu: goto label_1b511c;
        case 0x1b5120u: goto label_1b5120;
        case 0x1b5124u: goto label_1b5124;
        case 0x1b5128u: goto label_1b5128;
        case 0x1b512cu: goto label_1b512c;
        case 0x1b5130u: goto label_1b5130;
        case 0x1b5134u: goto label_1b5134;
        case 0x1b5138u: goto label_1b5138;
        case 0x1b513cu: goto label_1b513c;
        case 0x1b5140u: goto label_1b5140;
        case 0x1b5144u: goto label_1b5144;
        case 0x1b5148u: goto label_1b5148;
        case 0x1b514cu: goto label_1b514c;
        case 0x1b5150u: goto label_1b5150;
        case 0x1b5154u: goto label_1b5154;
        case 0x1b5158u: goto label_1b5158;
        case 0x1b515cu: goto label_1b515c;
        case 0x1b5160u: goto label_1b5160;
        case 0x1b5164u: goto label_1b5164;
        case 0x1b5168u: goto label_1b5168;
        case 0x1b516cu: goto label_1b516c;
        case 0x1b5170u: goto label_1b5170;
        case 0x1b5174u: goto label_1b5174;
        case 0x1b5178u: goto label_1b5178;
        case 0x1b517cu: goto label_1b517c;
        case 0x1b5180u: goto label_1b5180;
        case 0x1b5184u: goto label_1b5184;
        case 0x1b5188u: goto label_1b5188;
        case 0x1b518cu: goto label_1b518c;
        case 0x1b5190u: goto label_1b5190;
        case 0x1b5194u: goto label_1b5194;
        case 0x1b5198u: goto label_1b5198;
        case 0x1b519cu: goto label_1b519c;
        case 0x1b51a0u: goto label_1b51a0;
        case 0x1b51a4u: goto label_1b51a4;
        case 0x1b51a8u: goto label_1b51a8;
        case 0x1b51acu: goto label_1b51ac;
        case 0x1b51b0u: goto label_1b51b0;
        case 0x1b51b4u: goto label_1b51b4;
        case 0x1b51b8u: goto label_1b51b8;
        case 0x1b51bcu: goto label_1b51bc;
        case 0x1b51c0u: goto label_1b51c0;
        case 0x1b51c4u: goto label_1b51c4;
        case 0x1b51c8u: goto label_1b51c8;
        case 0x1b51ccu: goto label_1b51cc;
        case 0x1b51d0u: goto label_1b51d0;
        case 0x1b51d4u: goto label_1b51d4;
        case 0x1b51d8u: goto label_1b51d8;
        case 0x1b51dcu: goto label_1b51dc;
        case 0x1b51e0u: goto label_1b51e0;
        case 0x1b51e4u: goto label_1b51e4;
        case 0x1b51e8u: goto label_1b51e8;
        case 0x1b51ecu: goto label_1b51ec;
        case 0x1b51f0u: goto label_1b51f0;
        case 0x1b51f4u: goto label_1b51f4;
        case 0x1b51f8u: goto label_1b51f8;
        case 0x1b51fcu: goto label_1b51fc;
        case 0x1b5200u: goto label_1b5200;
        case 0x1b5204u: goto label_1b5204;
        case 0x1b5208u: goto label_1b5208;
        case 0x1b520cu: goto label_1b520c;
        case 0x1b5210u: goto label_1b5210;
        case 0x1b5214u: goto label_1b5214;
        case 0x1b5218u: goto label_1b5218;
        case 0x1b521cu: goto label_1b521c;
        case 0x1b5220u: goto label_1b5220;
        case 0x1b5224u: goto label_1b5224;
        case 0x1b5228u: goto label_1b5228;
        case 0x1b522cu: goto label_1b522c;
        case 0x1b5230u: goto label_1b5230;
        case 0x1b5234u: goto label_1b5234;
        case 0x1b5238u: goto label_1b5238;
        case 0x1b523cu: goto label_1b523c;
        case 0x1b5240u: goto label_1b5240;
        case 0x1b5244u: goto label_1b5244;
        case 0x1b5248u: goto label_1b5248;
        case 0x1b524cu: goto label_1b524c;
        case 0x1b5250u: goto label_1b5250;
        case 0x1b5254u: goto label_1b5254;
        case 0x1b5258u: goto label_1b5258;
        case 0x1b525cu: goto label_1b525c;
        case 0x1b5260u: goto label_1b5260;
        case 0x1b5264u: goto label_1b5264;
        case 0x1b5268u: goto label_1b5268;
        case 0x1b526cu: goto label_1b526c;
        case 0x1b5270u: goto label_1b5270;
        case 0x1b5274u: goto label_1b5274;
        case 0x1b5278u: goto label_1b5278;
        case 0x1b527cu: goto label_1b527c;
        case 0x1b5280u: goto label_1b5280;
        case 0x1b5284u: goto label_1b5284;
        case 0x1b5288u: goto label_1b5288;
        case 0x1b528cu: goto label_1b528c;
        case 0x1b5290u: goto label_1b5290;
        case 0x1b5294u: goto label_1b5294;
        case 0x1b5298u: goto label_1b5298;
        case 0x1b529cu: goto label_1b529c;
        case 0x1b52a0u: goto label_1b52a0;
        case 0x1b52a4u: goto label_1b52a4;
        case 0x1b52a8u: goto label_1b52a8;
        case 0x1b52acu: goto label_1b52ac;
        case 0x1b52b0u: goto label_1b52b0;
        case 0x1b52b4u: goto label_1b52b4;
        case 0x1b52b8u: goto label_1b52b8;
        case 0x1b52bcu: goto label_1b52bc;
        case 0x1b52c0u: goto label_1b52c0;
        case 0x1b52c4u: goto label_1b52c4;
        case 0x1b52c8u: goto label_1b52c8;
        case 0x1b52ccu: goto label_1b52cc;
        case 0x1b52d0u: goto label_1b52d0;
        case 0x1b52d4u: goto label_1b52d4;
        case 0x1b52d8u: goto label_1b52d8;
        case 0x1b52dcu: goto label_1b52dc;
        case 0x1b52e0u: goto label_1b52e0;
        case 0x1b52e4u: goto label_1b52e4;
        case 0x1b52e8u: goto label_1b52e8;
        case 0x1b52ecu: goto label_1b52ec;
        case 0x1b52f0u: goto label_1b52f0;
        case 0x1b52f4u: goto label_1b52f4;
        case 0x1b52f8u: goto label_1b52f8;
        case 0x1b52fcu: goto label_1b52fc;
        case 0x1b5300u: goto label_1b5300;
        case 0x1b5304u: goto label_1b5304;
        case 0x1b5308u: goto label_1b5308;
        case 0x1b530cu: goto label_1b530c;
        case 0x1b5310u: goto label_1b5310;
        case 0x1b5314u: goto label_1b5314;
        case 0x1b5318u: goto label_1b5318;
        case 0x1b531cu: goto label_1b531c;
        case 0x1b5320u: goto label_1b5320;
        case 0x1b5324u: goto label_1b5324;
        case 0x1b5328u: goto label_1b5328;
        case 0x1b532cu: goto label_1b532c;
        case 0x1b5330u: goto label_1b5330;
        case 0x1b5334u: goto label_1b5334;
        case 0x1b5338u: goto label_1b5338;
        case 0x1b533cu: goto label_1b533c;
        case 0x1b5340u: goto label_1b5340;
        case 0x1b5344u: goto label_1b5344;
        case 0x1b5348u: goto label_1b5348;
        case 0x1b534cu: goto label_1b534c;
        case 0x1b5350u: goto label_1b5350;
        case 0x1b5354u: goto label_1b5354;
        case 0x1b5358u: goto label_1b5358;
        case 0x1b535cu: goto label_1b535c;
        case 0x1b5360u: goto label_1b5360;
        case 0x1b5364u: goto label_1b5364;
        case 0x1b5368u: goto label_1b5368;
        case 0x1b536cu: goto label_1b536c;
        case 0x1b5370u: goto label_1b5370;
        case 0x1b5374u: goto label_1b5374;
        case 0x1b5378u: goto label_1b5378;
        case 0x1b537cu: goto label_1b537c;
        case 0x1b5380u: goto label_1b5380;
        case 0x1b5384u: goto label_1b5384;
        case 0x1b5388u: goto label_1b5388;
        case 0x1b538cu: goto label_1b538c;
        case 0x1b5390u: goto label_1b5390;
        case 0x1b5394u: goto label_1b5394;
        case 0x1b5398u: goto label_1b5398;
        case 0x1b539cu: goto label_1b539c;
        case 0x1b53a0u: goto label_1b53a0;
        case 0x1b53a4u: goto label_1b53a4;
        case 0x1b53a8u: goto label_1b53a8;
        case 0x1b53acu: goto label_1b53ac;
        case 0x1b53b0u: goto label_1b53b0;
        case 0x1b53b4u: goto label_1b53b4;
        case 0x1b53b8u: goto label_1b53b8;
        case 0x1b53bcu: goto label_1b53bc;
        case 0x1b53c0u: goto label_1b53c0;
        case 0x1b53c4u: goto label_1b53c4;
        case 0x1b53c8u: goto label_1b53c8;
        case 0x1b53ccu: goto label_1b53cc;
        case 0x1b53d0u: goto label_1b53d0;
        case 0x1b53d4u: goto label_1b53d4;
        case 0x1b53d8u: goto label_1b53d8;
        case 0x1b53dcu: goto label_1b53dc;
        case 0x1b53e0u: goto label_1b53e0;
        case 0x1b53e4u: goto label_1b53e4;
        case 0x1b53e8u: goto label_1b53e8;
        case 0x1b53ecu: goto label_1b53ec;
        case 0x1b53f0u: goto label_1b53f0;
        case 0x1b53f4u: goto label_1b53f4;
        case 0x1b53f8u: goto label_1b53f8;
        case 0x1b53fcu: goto label_1b53fc;
        case 0x1b5400u: goto label_1b5400;
        case 0x1b5404u: goto label_1b5404;
        case 0x1b5408u: goto label_1b5408;
        case 0x1b540cu: goto label_1b540c;
        case 0x1b5410u: goto label_1b5410;
        case 0x1b5414u: goto label_1b5414;
        case 0x1b5418u: goto label_1b5418;
        case 0x1b541cu: goto label_1b541c;
        case 0x1b5420u: goto label_1b5420;
        case 0x1b5424u: goto label_1b5424;
        case 0x1b5428u: goto label_1b5428;
        case 0x1b542cu: goto label_1b542c;
        case 0x1b5430u: goto label_1b5430;
        case 0x1b5434u: goto label_1b5434;
        case 0x1b5438u: goto label_1b5438;
        case 0x1b543cu: goto label_1b543c;
        case 0x1b5440u: goto label_1b5440;
        case 0x1b5444u: goto label_1b5444;
        case 0x1b5448u: goto label_1b5448;
        case 0x1b544cu: goto label_1b544c;
        case 0x1b5450u: goto label_1b5450;
        case 0x1b5454u: goto label_1b5454;
        case 0x1b5458u: goto label_1b5458;
        case 0x1b545cu: goto label_1b545c;
        case 0x1b5460u: goto label_1b5460;
        case 0x1b5464u: goto label_1b5464;
        case 0x1b5468u: goto label_1b5468;
        case 0x1b546cu: goto label_1b546c;
        case 0x1b5470u: goto label_1b5470;
        case 0x1b5474u: goto label_1b5474;
        case 0x1b5478u: goto label_1b5478;
        case 0x1b547cu: goto label_1b547c;
        case 0x1b5480u: goto label_1b5480;
        case 0x1b5484u: goto label_1b5484;
        case 0x1b5488u: goto label_1b5488;
        case 0x1b548cu: goto label_1b548c;
        case 0x1b5490u: goto label_1b5490;
        case 0x1b5494u: goto label_1b5494;
        case 0x1b5498u: goto label_1b5498;
        case 0x1b549cu: goto label_1b549c;
        case 0x1b54a0u: goto label_1b54a0;
        case 0x1b54a4u: goto label_1b54a4;
        case 0x1b54a8u: goto label_1b54a8;
        case 0x1b54acu: goto label_1b54ac;
        case 0x1b54b0u: goto label_1b54b0;
        case 0x1b54b4u: goto label_1b54b4;
        case 0x1b54b8u: goto label_1b54b8;
        case 0x1b54bcu: goto label_1b54bc;
        case 0x1b54c0u: goto label_1b54c0;
        case 0x1b54c4u: goto label_1b54c4;
        case 0x1b54c8u: goto label_1b54c8;
        case 0x1b54ccu: goto label_1b54cc;
        case 0x1b54d0u: goto label_1b54d0;
        case 0x1b54d4u: goto label_1b54d4;
        case 0x1b54d8u: goto label_1b54d8;
        case 0x1b54dcu: goto label_1b54dc;
        case 0x1b54e0u: goto label_1b54e0;
        case 0x1b54e4u: goto label_1b54e4;
        case 0x1b54e8u: goto label_1b54e8;
        case 0x1b54ecu: goto label_1b54ec;
        case 0x1b54f0u: goto label_1b54f0;
        case 0x1b54f4u: goto label_1b54f4;
        case 0x1b54f8u: goto label_1b54f8;
        case 0x1b54fcu: goto label_1b54fc;
        case 0x1b5500u: goto label_1b5500;
        case 0x1b5504u: goto label_1b5504;
        case 0x1b5508u: goto label_1b5508;
        case 0x1b550cu: goto label_1b550c;
        case 0x1b5510u: goto label_1b5510;
        case 0x1b5514u: goto label_1b5514;
        case 0x1b5518u: goto label_1b5518;
        case 0x1b551cu: goto label_1b551c;
        case 0x1b5520u: goto label_1b5520;
        case 0x1b5524u: goto label_1b5524;
        case 0x1b5528u: goto label_1b5528;
        case 0x1b552cu: goto label_1b552c;
        case 0x1b5530u: goto label_1b5530;
        case 0x1b5534u: goto label_1b5534;
        case 0x1b5538u: goto label_1b5538;
        case 0x1b553cu: goto label_1b553c;
        case 0x1b5540u: goto label_1b5540;
        case 0x1b5544u: goto label_1b5544;
        case 0x1b5548u: goto label_1b5548;
        case 0x1b554cu: goto label_1b554c;
        case 0x1b5550u: goto label_1b5550;
        case 0x1b5554u: goto label_1b5554;
        case 0x1b5558u: goto label_1b5558;
        case 0x1b555cu: goto label_1b555c;
        case 0x1b5560u: goto label_1b5560;
        case 0x1b5564u: goto label_1b5564;
        case 0x1b5568u: goto label_1b5568;
        case 0x1b556cu: goto label_1b556c;
        case 0x1b5570u: goto label_1b5570;
        case 0x1b5574u: goto label_1b5574;
        case 0x1b5578u: goto label_1b5578;
        case 0x1b557cu: goto label_1b557c;
        case 0x1b5580u: goto label_1b5580;
        case 0x1b5584u: goto label_1b5584;
        case 0x1b5588u: goto label_1b5588;
        case 0x1b558cu: goto label_1b558c;
        case 0x1b5590u: goto label_1b5590;
        case 0x1b5594u: goto label_1b5594;
        case 0x1b5598u: goto label_1b5598;
        case 0x1b559cu: goto label_1b559c;
        case 0x1b55a0u: goto label_1b55a0;
        case 0x1b55a4u: goto label_1b55a4;
        case 0x1b55a8u: goto label_1b55a8;
        case 0x1b55acu: goto label_1b55ac;
        case 0x1b55b0u: goto label_1b55b0;
        case 0x1b55b4u: goto label_1b55b4;
        case 0x1b55b8u: goto label_1b55b8;
        case 0x1b55bcu: goto label_1b55bc;
        case 0x1b55c0u: goto label_1b55c0;
        case 0x1b55c4u: goto label_1b55c4;
        case 0x1b55c8u: goto label_1b55c8;
        case 0x1b55ccu: goto label_1b55cc;
        case 0x1b55d0u: goto label_1b55d0;
        case 0x1b55d4u: goto label_1b55d4;
        case 0x1b55d8u: goto label_1b55d8;
        case 0x1b55dcu: goto label_1b55dc;
        case 0x1b55e0u: goto label_1b55e0;
        case 0x1b55e4u: goto label_1b55e4;
        case 0x1b55e8u: goto label_1b55e8;
        case 0x1b55ecu: goto label_1b55ec;
        case 0x1b55f0u: goto label_1b55f0;
        case 0x1b55f4u: goto label_1b55f4;
        case 0x1b55f8u: goto label_1b55f8;
        case 0x1b55fcu: goto label_1b55fc;
        default: return;
    }

label_1b4e30:
    // 0x1b4e30: 0x3c023f97  lui         $v0, 0x3F97
    ctx->pc = 0x1b4e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16279 << 16));
label_1b4e34:
    // 0x1b4e34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b4e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b4e38:
    // 0x1b4e38: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1b4e38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1b4e3c:
    // 0x1b4e3c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_1b4e40:
    if (ctx->pc == 0x1B4E40u) {
        ctx->pc = 0x1B4E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E3Cu;
        // 0x1b4e40: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4E44u;
        goto label_1b4e44;
    }
    ctx->pc = 0x1B4E3Cu;
    {
        const bool branch_taken_0x1b4e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E3Cu;
        // 0x1b4e40: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e3c) {
            ctx->pc = 0x1B4EB8u;
            goto label_1b4eb8;
        }
    }
    ctx->pc = 0x1B4E44u;
label_1b4e44:
    // 0x1b4e44: 0x3c023f2f  lui         $v0, 0x3F2F
    ctx->pc = 0x1b4e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16175 << 16));
label_1b4e48:
    // 0x1b4e48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b4e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b4e4c:
    // 0x1b4e4c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1b4e4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1b4e50:
    // 0x1b4e50: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_1b4e54:
    if (ctx->pc == 0x1B4E54u) {
        ctx->pc = 0x1B4E58u;
        goto label_1b4e58;
    }
    ctx->pc = 0x1B4E50u;
    {
        const bool branch_taken_0x1b4e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4e50) {
            ctx->pc = 0x1B4E90u;
            goto label_1b4e90;
        }
    }
    ctx->pc = 0x1B4E58u;
label_1b4e58:
    // 0x1b4e58: 0x460d6800  add.s       $f0, $f13, $f13
    ctx->pc = 0x1b4e58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
label_1b4e5c:
    // 0x1b4e5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b4e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b4e60:
    // 0x1b4e60: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b4e60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b4e64:
    // 0x1b4e64: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1b4e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1b4e68:
    // 0x1b4e68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b4e68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b4e6c:
    // 0x1b4e6c: 0x0  nop
    ctx->pc = 0x1b4e6cu;
    // NOP
label_1b4e70:
    // 0x1b4e70: 0x46016840  add.s       $f1, $f13, $f1
    ctx->pc = 0x1b4e70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
label_1b4e74:
    // 0x1b4e74: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b4e74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1b4e78:
    // 0x1b4e78: 0x0  nop
    ctx->pc = 0x1b4e78u;
    // NOP
label_1b4e7c:
    // 0x1b4e7c: 0x0  nop
    ctx->pc = 0x1b4e7cu;
    // NOP
label_1b4e80:
    // 0x1b4e80: 0x46010343  div.s       $f13, $f0, $f1
    ctx->pc = 0x1b4e80u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[1];
label_1b4e84:
    // 0x1b4e84: 0x10000023  b           . + 4 + (0x23 << 2)
label_1b4e88:
    if (ctx->pc == 0x1B4E88u) {
        ctx->pc = 0x1B4E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E84u;
        // 0x1b4e88: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4E8Cu;
        goto label_1b4e8c;
    }
    ctx->pc = 0x1B4E84u;
    {
        const bool branch_taken_0x1b4e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E84u;
        // 0x1b4e88: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e84) {
            ctx->pc = 0x1B4F14u;
            goto label_1b4f14;
        }
    }
    ctx->pc = 0x1B4E8Cu;
label_1b4e8c:
    // 0x1b4e8c: 0x0  nop
    ctx->pc = 0x1b4e8cu;
    // NOP
label_1b4e90:
    // 0x1b4e90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b4e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b4e94:
    // 0x1b4e94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b4e94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4e98:
    // 0x1b4e98: 0x0  nop
    ctx->pc = 0x1b4e98u;
    // NOP
label_1b4e9c:
    // 0x1b4e9c: 0x46006840  add.s       $f1, $f13, $f0
    ctx->pc = 0x1b4e9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
label_1b4ea0:
    // 0x1b4ea0: 0x46006801  sub.s       $f0, $f13, $f0
    ctx->pc = 0x1b4ea0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
label_1b4ea4:
    // 0x1b4ea4: 0x0  nop
    ctx->pc = 0x1b4ea4u;
    // NOP
label_1b4ea8:
    // 0x1b4ea8: 0x0  nop
    ctx->pc = 0x1b4ea8u;
    // NOP
label_1b4eac:
    // 0x1b4eac: 0x46010343  div.s       $f13, $f0, $f1
    ctx->pc = 0x1b4eacu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[1];
label_1b4eb0:
    // 0x1b4eb0: 0x10000018  b           . + 4 + (0x18 << 2)
label_1b4eb4:
    if (ctx->pc == 0x1B4EB4u) {
        ctx->pc = 0x1B4EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4EB0u;
        // 0x1b4eb4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4EB8u;
        goto label_1b4eb8;
    }
    ctx->pc = 0x1B4EB0u;
    {
        const bool branch_taken_0x1b4eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4EB0u;
        // 0x1b4eb4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4eb0) {
            ctx->pc = 0x1B4F14u;
            goto label_1b4f14;
        }
    }
    ctx->pc = 0x1B4EB8u;
label_1b4eb8:
    // 0x1b4eb8: 0x3c02401b  lui         $v0, 0x401B
    ctx->pc = 0x1b4eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16411 << 16));
label_1b4ebc:
    // 0x1b4ebc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b4ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b4ec0:
    // 0x1b4ec0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1b4ec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1b4ec4:
    // 0x1b4ec4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_1b4ec8:
    if (ctx->pc == 0x1B4EC8u) {
        ctx->pc = 0x1B4EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4EC4u;
        // 0x1b4ec8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4ECCu;
        goto label_1b4ecc;
    }
    ctx->pc = 0x1B4EC4u;
    {
        const bool branch_taken_0x1b4ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4ec4) {
            ctx->pc = 0x1B4EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4EC4u;
            // 0x1b4ec8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4F00u;
            goto label_1b4f00;
        }
    }
    ctx->pc = 0x1B4ECCu;
label_1b4ecc:
    // 0x1b4ecc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1b4eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_1b4ed0:
    // 0x1b4ed0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b4ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4ed4:
    // 0x1b4ed4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b4ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b4ed8:
    // 0x1b4ed8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b4ed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b4edc:
    // 0x1b4edc: 0x46006842  mul.s       $f1, $f13, $f0
    ctx->pc = 0x1b4edcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
label_1b4ee0:
    // 0x1b4ee0: 0x46006801  sub.s       $f0, $f13, $f0
    ctx->pc = 0x1b4ee0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
label_1b4ee4:
    // 0x1b4ee4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b4ee4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b4ee8:
    // 0x1b4ee8: 0x0  nop
    ctx->pc = 0x1b4ee8u;
    // NOP
label_1b4eec:
    // 0x1b4eec: 0x0  nop
    ctx->pc = 0x1b4eecu;
    // NOP
label_1b4ef0:
    // 0x1b4ef0: 0x46010343  div.s       $f13, $f0, $f1
    ctx->pc = 0x1b4ef0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[1];
label_1b4ef4:
    // 0x1b4ef4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1b4ef8:
    if (ctx->pc == 0x1B4EF8u) {
        ctx->pc = 0x1B4EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4EF4u;
        // 0x1b4ef8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4EFCu;
        goto label_1b4efc;
    }
    ctx->pc = 0x1B4EF4u;
    {
        const bool branch_taken_0x1b4ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4EF4u;
        // 0x1b4ef8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4ef4) {
            ctx->pc = 0x1B4F14u;
            goto label_1b4f14;
        }
    }
    ctx->pc = 0x1B4EFCu;
label_1b4efc:
    // 0x1b4efc: 0x0  nop
    ctx->pc = 0x1b4efcu;
    // NOP
label_1b4f00:
    // 0x1b4f00: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1b4f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_1b4f04:
    // 0x1b4f04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b4f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4f08:
    // 0x1b4f08: 0x0  nop
    ctx->pc = 0x1b4f08u;
    // NOP
label_1b4f0c:
    // 0x1b4f0c: 0x0  nop
    ctx->pc = 0x1b4f0cu;
    // NOP
label_1b4f10:
    // 0x1b4f10: 0x460d0343  div.s       $f13, $f0, $f13
    ctx->pc = 0x1b4f10u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[13];
label_1b4f14:
    // 0x1b4f14: 0x460d6b02  mul.s       $f12, $f13, $f13
    ctx->pc = 0x1b4f14u;
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
label_1b4f18:
    // 0x1b4f18: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1b4f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_1b4f1c:
    // 0x1b4f1c: 0x2442b278  addiu       $v0, $v0, -0x4D88
    ctx->pc = 0x1b4f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947448));
label_1b4f20:
    // 0x1b4f20: 0xc4470028  lwc1        $f7, 0x28($v0)
    ctx->pc = 0x1b4f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1b4f24:
    // 0x1b4f24: 0xc4440020  lwc1        $f4, 0x20($v0)
    ctx->pc = 0x1b4f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1b4f28:
    // 0x1b4f28: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x1b4f28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_1b4f2c:
    // 0x1b4f2c: 0xc4450024  lwc1        $f5, 0x24($v0)
    ctx->pc = 0x1b4f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1b4f30:
    // 0x1b4f30: 0xc4460018  lwc1        $f6, 0x18($v0)
    ctx->pc = 0x1b4f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1b4f34:
    // 0x1b4f34: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x1b4f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4f38:
    // 0x1b4f38: 0xc4480010  lwc1        $f8, 0x10($v0)
    ctx->pc = 0x1b4f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1b4f3c:
    // 0x1b4f3c: 0x460701c2  mul.s       $f7, $f0, $f7
    ctx->pc = 0x1b4f3cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_1b4f40:
    // 0x1b4f40: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x1b4f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b4f44:
    // 0x1b4f44: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x1b4f44u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_1b4f48:
    // 0x1b4f48: 0xc4490008  lwc1        $f9, 0x8($v0)
    ctx->pc = 0x1b4f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1b4f4c:
    // 0x1b4f4c: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x1b4f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b4f50:
    // 0x1b4f50: 0xc44a0004  lwc1        $f10, 0x4($v0)
    ctx->pc = 0x1b4f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1b4f54:
    // 0x1b4f54: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x1b4f54u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
label_1b4f58:
    // 0x1b4f58: 0xc44b0000  lwc1        $f11, 0x0($v0)
    ctx->pc = 0x1b4f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1b4f5c:
    // 0x1b4f5c: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x1b4f5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_1b4f60:
    // 0x1b4f60: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x1b4f60u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_1b4f64:
    // 0x1b4f64: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1b4f64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1b4f68:
    // 0x1b4f68: 0x46043180  add.s       $f6, $f6, $f4
    ctx->pc = 0x1b4f68u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
label_1b4f6c:
    // 0x1b4f6c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1b4f6cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1b4f70:
    // 0x1b4f70: 0x46060182  mul.s       $f6, $f0, $f6
    ctx->pc = 0x1b4f70u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_1b4f74:
    // 0x1b4f74: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x1b4f74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1b4f78:
    // 0x1b4f78: 0x46064200  add.s       $f8, $f8, $f6
    ctx->pc = 0x1b4f78u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[6]);
label_1b4f7c:
    // 0x1b4f7c: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x1b4f7cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_1b4f80:
    // 0x1b4f80: 0x46080202  mul.s       $f8, $f0, $f8
    ctx->pc = 0x1b4f80u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
label_1b4f84:
    // 0x1b4f84: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x1b4f84u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1b4f88:
    // 0x1b4f88: 0x46084a40  add.s       $f9, $f9, $f8
    ctx->pc = 0x1b4f88u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[8]);
label_1b4f8c:
    // 0x1b4f8c: 0x46035280  add.s       $f10, $f10, $f3
    ctx->pc = 0x1b4f8cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[3]);
label_1b4f90:
    // 0x1b4f90: 0x46090242  mul.s       $f9, $f0, $f9
    ctx->pc = 0x1b4f90u;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
label_1b4f94:
    // 0x1b4f94: 0x460a0042  mul.s       $f1, $f0, $f10
    ctx->pc = 0x1b4f94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
label_1b4f98:
    // 0x1b4f98: 0x46095ac0  add.s       $f11, $f11, $f9
    ctx->pc = 0x1b4f98u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[9]);
label_1b4f9c:
    // 0x1b4f9c: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
label_1b4fa0:
    if (ctx->pc == 0x1B4FA0u) {
        ctx->pc = 0x1B4FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F9Cu;
        // 0x1b4fa0: 0x460b6002  mul.s       $f0, $f12, $f11 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[11]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4FA4u;
        goto label_1b4fa4;
    }
    ctx->pc = 0x1B4F9Cu;
    {
        const bool branch_taken_0x1b4f9c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B4FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F9Cu;
        // 0x1b4fa0: 0x460b6002  mul.s       $f0, $f12, $f11 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[11]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4f9c) {
            ctx->pc = 0x1B4FB8u;
            goto label_1b4fb8;
        }
    }
    ctx->pc = 0x1B4FA4u;
label_1b4fa4:
    // 0x1b4fa4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b4fa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b4fa8:
    // 0x1b4fa8: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x1b4fa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
label_1b4fac:
    // 0x1b4fac: 0x10000010  b           . + 4 + (0x10 << 2)
label_1b4fb0:
    if (ctx->pc == 0x1B4FB0u) {
        ctx->pc = 0x1B4FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FACu;
        // 0x1b4fb0: 0x46006801  sub.s       $f0, $f13, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4FB4u;
        goto label_1b4fb4;
    }
    ctx->pc = 0x1B4FACu;
    {
        const bool branch_taken_0x1b4fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FACu;
        // 0x1b4fb0: 0x46006801  sub.s       $f0, $f13, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4fac) {
            ctx->pc = 0x1B4FF0u;
            goto label_1b4ff0;
        }
    }
    ctx->pc = 0x1B4FB4u;
label_1b4fb4:
    // 0x1b4fb4: 0x0  nop
    ctx->pc = 0x1b4fb4u;
    // NOP
label_1b4fb8:
    // 0x1b4fb8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b4fb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b4fbc:
    // 0x1b4fbc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1b4fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1b4fc0:
    // 0x1b4fc0: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x1b4fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_1b4fc4:
    // 0x1b4fc4: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1b4fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_1b4fc8:
    // 0x1b4fc8: 0xc421b268  lwc1        $f1, -0x4D98($at)
    ctx->pc = 0x1b4fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294947432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4fcc:
    // 0x1b4fcc: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x1b4fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_1b4fd0:
    // 0x1b4fd0: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1b4fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_1b4fd4:
    // 0x1b4fd4: 0xc422b258  lwc1        $f2, -0x4DA8($at)
    ctx->pc = 0x1b4fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294947416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b4fd8:
    // 0x1b4fd8: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x1b4fd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
label_1b4fdc:
    // 0x1b4fdc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b4fdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b4fe0:
    // 0x1b4fe0: 0x460d0001  sub.s       $f0, $f0, $f13
    ctx->pc = 0x1b4fe0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
label_1b4fe4:
    // 0x1b4fe4: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
label_1b4fe8:
    if (ctx->pc == 0x1B4FE8u) {
        ctx->pc = 0x1B4FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FE4u;
        // 0x1b4fe8: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4FECu;
        goto label_1b4fec;
    }
    ctx->pc = 0x1B4FE4u;
    {
        const bool branch_taken_0x1b4fe4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1B4FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FE4u;
        // 0x1b4fe8: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4fe4) {
            ctx->pc = 0x1B4FF0u;
            goto label_1b4ff0;
        }
    }
    ctx->pc = 0x1B4FECu;
label_1b4fec:
    // 0x1b4fec: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b4fecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1b4ff0:
    // 0x1b4ff0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b4ff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b4ff4:
    // 0x1b4ff4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b4ff4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b4ff8:
    // 0x1b4ff8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b4ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b4ffc:
    // 0x1b4ffc: 0x3e00008  jr          $ra
label_1b5000:
    if (ctx->pc == 0x1B5000u) {
        ctx->pc = 0x1B5000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FFCu;
        // 0x1b5000: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5004u;
        goto label_1b5004;
    }
    ctx->pc = 0x1B4FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FFCu;
        // 0x1b5000: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5004u;
label_1b5004:
    // 0x1b5004: 0x0  nop
    ctx->pc = 0x1b5004u;
    // NOP
label_1b5008:
    // 0x1b5008: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b5008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b500c:
    // 0x1b500c: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x1b500cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
label_1b5010:
    // 0x1b5010: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b5010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b5014:
    // 0x1b5014: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x1b5014u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1b5018:
    // 0x1b5018: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1b5018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_1b501c:
    // 0x1b501c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1b501cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1b5020:
    // 0x1b5020: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1b5020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1b5024:
    // 0x1b5024: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b5024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b5028:
    // 0x1b5028: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b5028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1b502c:
    // 0x1b502c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1b502cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5030:
    // 0x1b5030: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1b5030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1b5034:
    // 0x1b5034: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b5034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b5038:
    // 0x1b5038: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b503c:
    // 0x1b503c: 0x3e00008  jr          $ra
label_1b5040:
    if (ctx->pc == 0x1B5040u) {
        ctx->pc = 0x1B5040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B503Cu;
        // 0x1b5040: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5044u;
        goto label_1b5044;
    }
    ctx->pc = 0x1B503Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B503Cu;
        // 0x1b5040: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B503Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5044u;
label_1b5044:
    // 0x1b5044: 0x0  nop
    ctx->pc = 0x1b5044u;
    // NOP
label_1b5048:
    // 0x1b5048: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b5048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b504c:
    // 0x1b504c: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x1b504cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
label_1b5050:
    // 0x1b5050: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b5050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b5054:
    // 0x1b5054: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1b5054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1b5058:
    // 0x1b5058: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1b5058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_1b505c:
    // 0x1b505c: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x1b505cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
label_1b5060:
    // 0x1b5060: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b5060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1b5064:
    // 0x1b5064: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b5064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b5068:
    // 0x1b5068: 0x34630fd8  ori         $v1, $v1, 0xFD8
    ctx->pc = 0x1b5068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4056);
label_1b506c:
    // 0x1b506c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1b506cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1b5070:
    // 0x1b5070: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1b5070u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b5074:
    // 0x1b5074: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_1b5078:
    if (ctx->pc == 0x1B5078u) {
        ctx->pc = 0x1B507Cu;
        goto label_1b507c;
    }
    ctx->pc = 0x1B5074u;
    {
        const bool branch_taken_0x1b5074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5074) {
            ctx->pc = 0x1B5090u;
            goto label_1b5090;
        }
    }
    ctx->pc = 0x1B507Cu;
label_1b507c:
    // 0x1b507c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1b507cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b5080:
    // 0x1b5080: 0xc06cfb0  jal         func_1B3EC0
label_1b5084:
    if (ctx->pc == 0x1B5084u) {
        ctx->pc = 0x1B5088u;
        goto label_1b5088;
    }
    ctx->pc = 0x1B5080u;
    SET_GPR_U32(ctx, 31, 0x1B5088u);
    ctx->pc = 0x1B3EC0u;
    { ctx->pc = 0x1b3ec0; return; }
    ctx->pc = 0x1B5088u;
label_1b5088:
    // 0x1b5088: 0x10000022  b           . + 4 + (0x22 << 2)
label_1b508c:
    if (ctx->pc == 0x1B508Cu) {
        ctx->pc = 0x1B508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5088u;
        // 0x1b508c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5090u;
        goto label_1b5090;
    }
    ctx->pc = 0x1B5088u;
    {
        const bool branch_taken_0x1b5088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5088u;
        // 0x1b508c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5088) {
            ctx->pc = 0x1B5114u;
            goto label_1b5114;
        }
    }
    ctx->pc = 0x1B5090u;
label_1b5090:
    // 0x1b5090: 0xc06ce88  jal         func_1B3A20
label_1b5094:
    if (ctx->pc == 0x1B5094u) {
        ctx->pc = 0x1B5094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5090u;
        // 0x1b5094: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5098u;
        goto label_1b5098;
    }
    ctx->pc = 0x1B5090u;
    SET_GPR_U32(ctx, 31, 0x1B5098u);
    ctx->pc = 0x1B5094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5090u;
    // 0x1b5094: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A20u;
    { ctx->pc = 0x1b3a20; return; }
    ctx->pc = 0x1B5098u;
label_1b5098:
    // 0x1b5098: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b5098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b509c:
    // 0x1b509c: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x1b509cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_1b50a0:
    // 0x1b50a0: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
label_1b50a4:
    if (ctx->pc == 0x1B50A4u) {
        ctx->pc = 0x1B50A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50A0u;
        // 0x1b50a4: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B50A8u;
        goto label_1b50a8;
    }
    ctx->pc = 0x1B50A0u;
    {
        const bool branch_taken_0x1b50a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B50A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50A0u;
        // 0x1b50a4: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b50a0) {
            ctx->pc = 0x1B50E0u;
            goto label_1b50e0;
        }
    }
    ctx->pc = 0x1B50A8u;
label_1b50a8:
    // 0x1b50a8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1b50ac:
    if (ctx->pc == 0x1B50ACu) {
        ctx->pc = 0x1B50ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50A8u;
        // 0x1b50ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B50B0u;
        goto label_1b50b0;
    }
    ctx->pc = 0x1B50A8u;
    {
        const bool branch_taken_0x1b50a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b50a8) {
            ctx->pc = 0x1B50ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B50A8u;
            // 0x1b50ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B50C0u;
            goto label_1b50c0;
        }
    }
    ctx->pc = 0x1B50B0u;
label_1b50b0:
    // 0x1b50b0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1b50b4:
    if (ctx->pc == 0x1B50B4u) {
        ctx->pc = 0x1B50B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50B0u;
        // 0x1b50b4: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B50B8u;
        goto label_1b50b8;
    }
    ctx->pc = 0x1B50B0u;
    {
        const bool branch_taken_0x1b50b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B50B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50B0u;
        // 0x1b50b4: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b50b0) {
            ctx->pc = 0x1B50D0u;
            goto label_1b50d0;
        }
    }
    ctx->pc = 0x1B50B8u;
label_1b50b8:
    // 0x1b50b8: 0x10000013  b           . + 4 + (0x13 << 2)
label_1b50bc:
    if (ctx->pc == 0x1B50BCu) {
        ctx->pc = 0x1B50BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50B8u;
        // 0x1b50bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B50C0u;
        goto label_1b50c0;
    }
    ctx->pc = 0x1B50B8u;
    {
        const bool branch_taken_0x1b50b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B50BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50B8u;
        // 0x1b50bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b50b8) {
            ctx->pc = 0x1B5108u;
            goto label_1b5108;
        }
    }
    ctx->pc = 0x1B50C0u;
label_1b50c0:
    // 0x1b50c0: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
label_1b50c4:
    if (ctx->pc == 0x1B50C4u) {
        ctx->pc = 0x1B50C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50C0u;
        // 0x1b50c4: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B50C8u;
        goto label_1b50c8;
    }
    ctx->pc = 0x1B50C0u;
    {
        const bool branch_taken_0x1b50c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B50C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50C0u;
        // 0x1b50c4: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b50c0) {
            ctx->pc = 0x1B50F8u;
            goto label_1b50f8;
        }
    }
    ctx->pc = 0x1B50C8u;
label_1b50c8:
    // 0x1b50c8: 0x1000000f  b           . + 4 + (0xF << 2)
label_1b50cc:
    if (ctx->pc == 0x1B50CCu) {
        ctx->pc = 0x1B50CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50C8u;
        // 0x1b50cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B50D0u;
        goto label_1b50d0;
    }
    ctx->pc = 0x1B50C8u;
    {
        const bool branch_taken_0x1b50c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B50CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50C8u;
        // 0x1b50cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b50c8) {
            ctx->pc = 0x1B5108u;
            goto label_1b5108;
        }
    }
    ctx->pc = 0x1B50D0u;
label_1b50d0:
    // 0x1b50d0: 0xc06cfb0  jal         func_1B3EC0
label_1b50d4:
    if (ctx->pc == 0x1B50D4u) {
        ctx->pc = 0x1B50D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50D0u;
        // 0x1b50d4: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B50D8u;
        goto label_1b50d8;
    }
    ctx->pc = 0x1B50D0u;
    SET_GPR_U32(ctx, 31, 0x1B50D8u);
    ctx->pc = 0x1B50D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B50D0u;
    // 0x1b50d4: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3EC0u;
    { ctx->pc = 0x1b3ec0; return; }
    ctx->pc = 0x1B50D8u;
label_1b50d8:
    // 0x1b50d8: 0x1000000e  b           . + 4 + (0xE << 2)
label_1b50dc:
    if (ctx->pc == 0x1B50DCu) {
        ctx->pc = 0x1B50DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50D8u;
        // 0x1b50dc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B50E0u;
        goto label_1b50e0;
    }
    ctx->pc = 0x1B50D8u;
    {
        const bool branch_taken_0x1b50d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B50DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50D8u;
        // 0x1b50dc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b50d8) {
            ctx->pc = 0x1B5114u;
            goto label_1b5114;
        }
    }
    ctx->pc = 0x1B50E0u;
label_1b50e0:
    // 0x1b50e0: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x1b50e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b50e4:
    // 0x1b50e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b50e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b50e8:
    // 0x1b50e8: 0xc06d236  jal         func_1B48D8
label_1b50ec:
    if (ctx->pc == 0x1B50ECu) {
        ctx->pc = 0x1B50ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50E8u;
        // 0x1b50ec: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B50F0u;
        goto label_1b50f0;
    }
    ctx->pc = 0x1B50E8u;
    SET_GPR_U32(ctx, 31, 0x1B50F0u);
    ctx->pc = 0x1B50ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B50E8u;
    // 0x1b50ec: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B48D8u;
    { ctx->pc = 0x1b48d8; return; }
    ctx->pc = 0x1B50F0u;
label_1b50f0:
    // 0x1b50f0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1b50f4:
    if (ctx->pc == 0x1B50F4u) {
        ctx->pc = 0x1B50F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50F0u;
        // 0x1b50f4: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B50F8u;
        goto label_1b50f8;
    }
    ctx->pc = 0x1B50F0u;
    {
        const bool branch_taken_0x1b50f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B50F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50F0u;
        // 0x1b50f4: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b50f0) {
            ctx->pc = 0x1B5110u;
            goto label_1b5110;
        }
    }
    ctx->pc = 0x1B50F8u;
label_1b50f8:
    // 0x1b50f8: 0xc06cfb0  jal         func_1B3EC0
label_1b50fc:
    if (ctx->pc == 0x1B50FCu) {
        ctx->pc = 0x1B50FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50F8u;
        // 0x1b50fc: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5100u;
        goto label_1b5100;
    }
    ctx->pc = 0x1B50F8u;
    SET_GPR_U32(ctx, 31, 0x1B5100u);
    ctx->pc = 0x1B50FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B50F8u;
    // 0x1b50fc: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3EC0u;
    { ctx->pc = 0x1b3ec0; return; }
    ctx->pc = 0x1B5100u;
label_1b5100:
    // 0x1b5100: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b5104:
    if (ctx->pc == 0x1B5104u) {
        ctx->pc = 0x1B5104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5100u;
        // 0x1b5104: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5108u;
        goto label_1b5108;
    }
    ctx->pc = 0x1B5100u;
    {
        const bool branch_taken_0x1b5100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5100u;
        // 0x1b5104: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5100) {
            ctx->pc = 0x1B5110u;
            goto label_1b5110;
        }
    }
    ctx->pc = 0x1B5108u;
label_1b5108:
    // 0x1b5108: 0xc06d236  jal         func_1B48D8
label_1b510c:
    if (ctx->pc == 0x1B510Cu) {
        ctx->pc = 0x1B510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5108u;
        // 0x1b510c: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5110u;
        goto label_1b5110;
    }
    ctx->pc = 0x1B5108u;
    SET_GPR_U32(ctx, 31, 0x1B5110u);
    ctx->pc = 0x1B510Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5108u;
    // 0x1b510c: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B48D8u;
    { ctx->pc = 0x1b48d8; return; }
    ctx->pc = 0x1B5110u;
label_1b5110:
    // 0x1b5110: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b5110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b5114:
    // 0x1b5114: 0x3e00008  jr          $ra
label_1b5118:
    if (ctx->pc == 0x1B5118u) {
        ctx->pc = 0x1B5118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5114u;
        // 0x1b5118: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B511Cu;
        goto label_1b511c;
    }
    ctx->pc = 0x1B5114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5114u;
        // 0x1b5118: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B511Cu;
label_1b511c:
    // 0x1b511c: 0x0  nop
    ctx->pc = 0x1b511cu;
    // NOP
label_1b5120:
    // 0x1b5120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b5120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b5124:
    // 0x1b5124: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x1b5124u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
label_1b5128:
    // 0x1b5128: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b5128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b512c:
    // 0x1b512c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1b512cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_1b5130:
    // 0x1b5130: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b5130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5134:
    // 0x1b5134: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b5134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b5138:
    // 0x1b5138: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1b5138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1b513c:
    // 0x1b513c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b513cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5140:
    // 0x1b5140: 0x3e00008  jr          $ra
label_1b5144:
    if (ctx->pc == 0x1B5144u) {
        ctx->pc = 0x1B5144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5140u;
        // 0x1b5144: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5148u;
        goto label_1b5148;
    }
    ctx->pc = 0x1B5140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5140u;
        // 0x1b5144: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5148u;
label_1b5148:
    // 0x1b5148: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x1b5148u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1b514c:
    // 0x1b514c: 0x0  nop
    ctx->pc = 0x1b514cu;
    // NOP
label_1b5150:
    // 0x1b5150: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1b5150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1b5154:
    // 0x1b5154: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1b5154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_1b5158:
    // 0x1b5158: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b5158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b515c:
    // 0x1b515c: 0x823024  and         $a2, $a0, $v0
    ctx->pc = 0x1b515cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1b5160:
    // 0x1b5160: 0x61dc2  srl         $v1, $a2, 23
    ctx->pc = 0x1b5160u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 23));
label_1b5164:
    // 0x1b5164: 0x2465ff81  addiu       $a1, $v1, -0x7F
    ctx->pc = 0x1b5164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967169));
label_1b5168:
    // 0x1b5168: 0x28a20017  slti        $v0, $a1, 0x17
    ctx->pc = 0x1b5168u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
label_1b516c:
    // 0x1b516c: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_1b5170:
    if (ctx->pc == 0x1B5170u) {
        ctx->pc = 0x1B5170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B516Cu;
        // 0x1b5170: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5174u;
        goto label_1b5174;
    }
    ctx->pc = 0x1B516Cu;
    {
        const bool branch_taken_0x1b516c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B516Cu;
        // 0x1b5170: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b516c) {
            ctx->pc = 0x1B5230u;
            goto label_1b5230;
        }
    }
    ctx->pc = 0x1B5174u;
label_1b5174:
    // 0x1b5174: 0x4a30016  bgezl       $a1, . + 4 + (0x16 << 2)
label_1b5178:
    if (ctx->pc == 0x1B5178u) {
        ctx->pc = 0x1B5178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5174u;
        // 0x1b5178: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B517Cu;
        goto label_1b517c;
    }
    ctx->pc = 0x1B5174u;
    {
        const bool branch_taken_0x1b5174 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1b5174) {
            ctx->pc = 0x1B5178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5174u;
            // 0x1b5178: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B51D0u;
            goto label_1b51d0;
        }
    }
    ctx->pc = 0x1B517Cu;
label_1b517c:
    // 0x1b517c: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x1b517cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
label_1b5180:
    // 0x1b5180: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x1b5180u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
label_1b5184:
    // 0x1b5184: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b5184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5188:
    // 0x1b5188: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b5188u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b518c:
    // 0x1b518c: 0x0  nop
    ctx->pc = 0x1b518cu;
    // NOP
label_1b5190:
    // 0x1b5190: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x1b5190u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_1b5194:
    // 0x1b5194: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b5194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b5198:
    // 0x1b5198: 0x0  nop
    ctx->pc = 0x1b5198u;
    // NOP
label_1b519c:
    // 0x1b519c: 0x45000022  bc1f        . + 4 + (0x22 << 2)
label_1b51a0:
    if (ctx->pc == 0x1B51A0u) {
        ctx->pc = 0x1B51A4u;
        goto label_1b51a4;
    }
    ctx->pc = 0x1B519Cu;
    {
        const bool branch_taken_0x1b519c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b519c) {
            ctx->pc = 0x1B5228u;
            goto label_1b5228;
        }
    }
    ctx->pc = 0x1B51A4u;
label_1b51a4:
    // 0x1b51a4: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_1b51a8:
    if (ctx->pc == 0x1B51A8u) {
        ctx->pc = 0x1B51A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B51A4u;
        // 0x1b51a8: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B51ACu;
        goto label_1b51ac;
    }
    ctx->pc = 0x1B51A4u;
    {
        const bool branch_taken_0x1b51a4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1B51A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B51A4u;
        // 0x1b51a8: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b51a4) {
            ctx->pc = 0x1B51B8u;
            goto label_1b51b8;
        }
    }
    ctx->pc = 0x1B51ACu;
label_1b51ac:
    // 0x1b51ac: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1b51b0:
    if (ctx->pc == 0x1B51B0u) {
        ctx->pc = 0x1B51B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B51ACu;
        // 0x1b51b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B51B4u;
        goto label_1b51b4;
    }
    ctx->pc = 0x1B51ACu;
    {
        const bool branch_taken_0x1b51ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B51B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B51ACu;
        // 0x1b51b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b51ac) {
            ctx->pc = 0x1B5228u;
            goto label_1b5228;
        }
    }
    ctx->pc = 0x1B51B4u;
label_1b51b4:
    // 0x1b51b4: 0x0  nop
    ctx->pc = 0x1b51b4u;
    // NOP
label_1b51b8:
    // 0x1b51b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b51b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b51bc:
    // 0x1b51bc: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x1b51bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_1b51c0:
    // 0x1b51c0: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_1b51c4:
    if (ctx->pc == 0x1B51C4u) {
        ctx->pc = 0x1B51C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B51C0u;
        // 0x1b51c4: 0x3c04bf80  lui         $a0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B51C8u;
        goto label_1b51c8;
    }
    ctx->pc = 0x1B51C0u;
    {
        const bool branch_taken_0x1b51c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b51c0) {
            ctx->pc = 0x1B51C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B51C0u;
            // 0x1b51c4: 0x3c04bf80  lui         $a0, 0xBF80 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5228u;
            goto label_1b5228;
        }
    }
    ctx->pc = 0x1B51C8u;
label_1b51c8:
    // 0x1b51c8: 0x10000017  b           . + 4 + (0x17 << 2)
label_1b51cc:
    if (ctx->pc == 0x1B51CCu) {
        ctx->pc = 0x1B51D0u;
        goto label_1b51d0;
    }
    ctx->pc = 0x1B51C8u;
    {
        const bool branch_taken_0x1b51c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b51c8) {
            ctx->pc = 0x1B5228u;
            goto label_1b5228;
        }
    }
    ctx->pc = 0x1B51D0u;
label_1b51d0:
    // 0x1b51d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b51d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b51d4:
    // 0x1b51d4: 0xa23007  srav        $a2, $v0, $a1
    ctx->pc = 0x1b51d4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
label_1b51d8:
    // 0x1b51d8: 0x861824  and         $v1, $a0, $a2
    ctx->pc = 0x1b51d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_1b51dc:
    // 0x1b51dc: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_1b51e0:
    if (ctx->pc == 0x1B51E0u) {
        ctx->pc = 0x1B51E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B51DCu;
        // 0x1b51e0: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B51E4u;
        goto label_1b51e4;
    }
    ctx->pc = 0x1B51DCu;
    {
        const bool branch_taken_0x1b51dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B51E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B51DCu;
        // 0x1b51e0: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b51dc) {
            ctx->pc = 0x1B5230u;
            goto label_1b5230;
        }
    }
    ctx->pc = 0x1B51E4u;
label_1b51e4:
    // 0x1b51e4: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x1b51e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
label_1b51e8:
    // 0x1b51e8: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x1b51e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
label_1b51ec:
    // 0x1b51ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b51ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b51f0:
    // 0x1b51f0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b51f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b51f4:
    // 0x1b51f4: 0x0  nop
    ctx->pc = 0x1b51f4u;
    // NOP
label_1b51f8:
    // 0x1b51f8: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x1b51f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_1b51fc:
    // 0x1b51fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b51fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b5200:
    // 0x1b5200: 0x0  nop
    ctx->pc = 0x1b5200u;
    // NOP
label_1b5204:
    // 0x1b5204: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1b5208:
    if (ctx->pc == 0x1B5208u) {
        ctx->pc = 0x1B520Cu;
        goto label_1b520c;
    }
    ctx->pc = 0x1B5204u;
    {
        const bool branch_taken_0x1b5204 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b5204) {
            ctx->pc = 0x1B5228u;
            goto label_1b5228;
        }
    }
    ctx->pc = 0x1B520Cu;
label_1b520c:
    // 0x1b520c: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
label_1b5210:
    if (ctx->pc == 0x1B5210u) {
        ctx->pc = 0x1B5210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B520Cu;
        // 0x1b5210: 0x61027  nor         $v0, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5214u;
        goto label_1b5214;
    }
    ctx->pc = 0x1B520Cu;
    {
        const bool branch_taken_0x1b520c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1B5210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B520Cu;
        // 0x1b5210: 0x61027  nor         $v0, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b520c) {
            ctx->pc = 0x1B5224u;
            goto label_1b5224;
        }
    }
    ctx->pc = 0x1B5214u;
label_1b5214:
    // 0x1b5214: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1b5214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_1b5218:
    // 0x1b5218: 0xa21007  srav        $v0, $v0, $a1
    ctx->pc = 0x1b5218u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
label_1b521c:
    // 0x1b521c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1b521cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1b5220:
    // 0x1b5220: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x1b5220u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
label_1b5224:
    // 0x1b5224: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1b5224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1b5228:
    // 0x1b5228: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1b5228u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b522c:
    // 0x1b522c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b522cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5230:
    // 0x1b5230: 0x3e00008  jr          $ra
label_1b5234:
    if (ctx->pc == 0x1B5234u) {
        ctx->pc = 0x1B5238u;
        goto label_1b5238;
    }
    ctx->pc = 0x1B5230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5238u;
label_1b5238:
    // 0x1b5238: 0x44066000  mfc1        $a2, $f12
    ctx->pc = 0x1b5238u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1b523c:
    // 0x1b523c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b523cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b5240:
    // 0x1b5240: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b5244:
    // 0x1b5244: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x1b5244u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1b5248:
    // 0x1b5248: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1b5248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_1b524c:
    // 0x1b524c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b524cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b5250:
    // 0x1b5250: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x1b5250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_1b5254:
    // 0x1b5254: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x1b5254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_1b5258:
    // 0x1b5258: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b5258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b525c:
    // 0x1b525c: 0x22dc2  srl         $a1, $v0, 23
    ctx->pc = 0x1b525cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
label_1b5260:
    // 0x1b5260: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x1b5260u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1b5264:
    // 0x1b5264: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x1b5264u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
label_1b5268:
    // 0x1b5268: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_1b526c:
    if (ctx->pc == 0x1B526Cu) {
        ctx->pc = 0x1B526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5268u;
        // 0x1b526c: 0xa42821  addu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5270u;
        goto label_1b5270;
    }
    ctx->pc = 0x1B5268u;
    {
        const bool branch_taken_0x1b5268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5268u;
        // 0x1b526c: 0xa42821  addu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5268) {
            ctx->pc = 0x1B52F0u;
            goto label_1b52f0;
        }
    }
    ctx->pc = 0x1B5270u;
label_1b5270:
    // 0x1b5270: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x1b5270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
label_1b5274:
    // 0x1b5274: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1b5278:
    if (ctx->pc == 0x1B5278u) {
        ctx->pc = 0x1B5278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5274u;
        // 0x1b5278: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B527Cu;
        goto label_1b527c;
    }
    ctx->pc = 0x1B5274u;
    {
        const bool branch_taken_0x1b5274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5274u;
        // 0x1b5278: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5274) {
            ctx->pc = 0x1B5290u;
            goto label_1b5290;
        }
    }
    ctx->pc = 0x1B527Cu;
label_1b527c:
    // 0x1b527c: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x1b527cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
label_1b5280:
    // 0x1b5280: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x1b5280u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
label_1b5284:
    // 0x1b5284: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b5284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1b5288:
    // 0x1b5288: 0x10000016  b           . + 4 + (0x16 << 2)
label_1b528c:
    if (ctx->pc == 0x1B528Cu) {
        ctx->pc = 0x1B5290u;
        goto label_1b5290;
    }
    ctx->pc = 0x1B5288u;
    {
        const bool branch_taken_0x1b5288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5288) {
            ctx->pc = 0x1B52E4u;
            goto label_1b52e4;
        }
    }
    ctx->pc = 0x1B5290u;
label_1b5290:
    // 0x1b5290: 0x18a00009  blez        $a1, . + 4 + (0x9 << 2)
label_1b5294:
    if (ctx->pc == 0x1B5294u) {
        ctx->pc = 0x1B5294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5290u;
        // 0x1b5294: 0x3402c350  ori         $v0, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5298u;
        goto label_1b5298;
    }
    ctx->pc = 0x1B5290u;
    {
        const bool branch_taken_0x1b5290 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1B5294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5290u;
        // 0x1b5294: 0x3402c350  ori         $v0, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5290) {
            ctx->pc = 0x1B52B8u;
            goto label_1b52b8;
        }
    }
    ctx->pc = 0x1B5298u;
label_1b5298:
    // 0x1b5298: 0x3c02807f  lui         $v0, 0x807F
    ctx->pc = 0x1b5298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32895 << 16));
label_1b529c:
    // 0x1b529c: 0x51dc0  sll         $v1, $a1, 23
    ctx->pc = 0x1b529cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 23));
label_1b52a0:
    // 0x1b52a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b52a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b52a4:
    // 0x1b52a4: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x1b52a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_1b52a8:
    // 0x1b52a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b52a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b52ac:
    // 0x1b52ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b52acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b52b0:
    // 0x1b52b0: 0x1000000f  b           . + 4 + (0xF << 2)
label_1b52b4:
    if (ctx->pc == 0x1B52B4u) {
        ctx->pc = 0x1B52B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B52B0u;
        // 0x1b52b4: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B52B8u;
        goto label_1b52b8;
    }
    ctx->pc = 0x1B52B0u;
    {
        const bool branch_taken_0x1b52b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B52B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B52B0u;
        // 0x1b52b4: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b52b0) {
            ctx->pc = 0x1B52F0u;
            goto label_1b52f0;
        }
    }
    ctx->pc = 0x1B52B8u;
label_1b52b8:
    // 0x1b52b8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1b52b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1b52bc:
    // 0x1b52bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1b52c0:
    if (ctx->pc == 0x1B52C0u) {
        ctx->pc = 0x1B52C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B52BCu;
        // 0x1b52c0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B52C4u;
        goto label_1b52c4;
    }
    ctx->pc = 0x1B52BCu;
    {
        const bool branch_taken_0x1b52bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B52C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B52BCu;
        // 0x1b52c0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b52bc) {
            ctx->pc = 0x1B52D8u;
            goto label_1b52d8;
        }
    }
    ctx->pc = 0x1B52C4u;
label_1b52c4:
    // 0x1b52c4: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x1b52c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
label_1b52c8:
    // 0x1b52c8: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x1b52c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
label_1b52cc:
    // 0x1b52cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b52ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1b52d0:
    // 0x1b52d0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b52d4:
    if (ctx->pc == 0x1B52D4u) {
        ctx->pc = 0x1B52D8u;
        goto label_1b52d8;
    }
    ctx->pc = 0x1B52D0u;
    {
        const bool branch_taken_0x1b52d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b52d0) {
            ctx->pc = 0x1B52E4u;
            goto label_1b52e4;
        }
    }
    ctx->pc = 0x1B52D8u;
label_1b52d8:
    // 0x1b52d8: 0x3c010da2  lui         $at, 0xDA2
    ctx->pc = 0x1b52d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3490 << 16));
label_1b52dc:
    // 0x1b52dc: 0x34214260  ori         $at, $at, 0x4260
    ctx->pc = 0x1b52dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16992);
label_1b52e0:
    // 0x1b52e0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b52e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1b52e4:
    // 0x1b52e4: 0xc06d402  jal         func_1B5008
label_1b52e8:
    if (ctx->pc == 0x1B52E8u) {
        ctx->pc = 0x1B52E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B52E4u;
        // 0x1b52e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B52ECu;
        goto label_1b52ec;
    }
    ctx->pc = 0x1B52E4u;
    SET_GPR_U32(ctx, 31, 0x1B52ECu);
    ctx->pc = 0x1B52E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B52E4u;
    // 0x1b52e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5008u;
    goto label_1b5008;
    ctx->pc = 0x1B52ECu;
label_1b52ec:
    // 0x1b52ec: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1b52ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1b52f0:
    // 0x1b52f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b52f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b52f4:
    // 0x1b52f4: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x1b52f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b52f8:
    // 0x1b52f8: 0x3e00008  jr          $ra
label_1b52fc:
    if (ctx->pc == 0x1B52FCu) {
        ctx->pc = 0x1B52FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B52F8u;
        // 0x1b52fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5300u;
        goto label_1b5300;
    }
    ctx->pc = 0x1B52F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B52FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B52F8u;
        // 0x1b52fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B52F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5300u;
label_1b5300:
    // 0x1b5300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b5300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b5304:
    // 0x1b5304: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x1b5304u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
label_1b5308:
    // 0x1b5308: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b5308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b530c:
    // 0x1b530c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1b530cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1b5310:
    // 0x1b5310: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1b5310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_1b5314:
    // 0x1b5314: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x1b5314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
label_1b5318:
    // 0x1b5318: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b5318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1b531c:
    // 0x1b531c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b531cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b5320:
    // 0x1b5320: 0x34630fd8  ori         $v1, $v1, 0xFD8
    ctx->pc = 0x1b5320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4056);
label_1b5324:
    // 0x1b5324: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1b5324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1b5328:
    // 0x1b5328: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1b5328u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b532c:
    // 0x1b532c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_1b5330:
    if (ctx->pc == 0x1B5330u) {
        ctx->pc = 0x1B5334u;
        goto label_1b5334;
    }
    ctx->pc = 0x1B532Cu;
    {
        const bool branch_taken_0x1b532c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b532c) {
            ctx->pc = 0x1B5348u;
            goto label_1b5348;
        }
    }
    ctx->pc = 0x1B5334u;
label_1b5334:
    // 0x1b5334: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1b5334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b5338:
    // 0x1b5338: 0xc06d236  jal         func_1B48D8
label_1b533c:
    if (ctx->pc == 0x1B533Cu) {
        ctx->pc = 0x1B533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5338u;
        // 0x1b533c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5340u;
        goto label_1b5340;
    }
    ctx->pc = 0x1B5338u;
    SET_GPR_U32(ctx, 31, 0x1B5340u);
    ctx->pc = 0x1B533Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5338u;
    // 0x1b533c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B48D8u;
    { ctx->pc = 0x1b48d8; return; }
    ctx->pc = 0x1B5340u;
label_1b5340:
    // 0x1b5340: 0x10000027  b           . + 4 + (0x27 << 2)
label_1b5344:
    if (ctx->pc == 0x1B5344u) {
        ctx->pc = 0x1B5344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5340u;
        // 0x1b5344: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5348u;
        goto label_1b5348;
    }
    ctx->pc = 0x1B5340u;
    {
        const bool branch_taken_0x1b5340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5340u;
        // 0x1b5344: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5340) {
            ctx->pc = 0x1B53E0u;
            goto label_1b53e0;
        }
    }
    ctx->pc = 0x1B5348u;
label_1b5348:
    // 0x1b5348: 0xc06ce88  jal         func_1B3A20
label_1b534c:
    if (ctx->pc == 0x1B534Cu) {
        ctx->pc = 0x1B534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5348u;
        // 0x1b534c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5350u;
        goto label_1b5350;
    }
    ctx->pc = 0x1B5348u;
    SET_GPR_U32(ctx, 31, 0x1B5350u);
    ctx->pc = 0x1B534Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5348u;
    // 0x1b534c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A20u;
    { ctx->pc = 0x1b3a20; return; }
    ctx->pc = 0x1B5350u;
label_1b5350:
    // 0x1b5350: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b5350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5354:
    // 0x1b5354: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x1b5354u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_1b5358:
    // 0x1b5358: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
label_1b535c:
    if (ctx->pc == 0x1B535Cu) {
        ctx->pc = 0x1B535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5358u;
        // 0x1b535c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5360u;
        goto label_1b5360;
    }
    ctx->pc = 0x1B5358u;
    {
        const bool branch_taken_0x1b5358 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5358u;
        // 0x1b535c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5358) {
            ctx->pc = 0x1B53A0u;
            goto label_1b53a0;
        }
    }
    ctx->pc = 0x1B5360u;
label_1b5360:
    // 0x1b5360: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1b5364:
    if (ctx->pc == 0x1B5364u) {
        ctx->pc = 0x1B5364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5360u;
        // 0x1b5364: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5368u;
        goto label_1b5368;
    }
    ctx->pc = 0x1B5360u;
    {
        const bool branch_taken_0x1b5360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5360) {
            ctx->pc = 0x1B5364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5360u;
            // 0x1b5364: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5378u;
            goto label_1b5378;
        }
    }
    ctx->pc = 0x1B5368u;
label_1b5368:
    // 0x1b5368: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1b536c:
    if (ctx->pc == 0x1B536Cu) {
        ctx->pc = 0x1B536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5368u;
        // 0x1b536c: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5370u;
        goto label_1b5370;
    }
    ctx->pc = 0x1B5368u;
    {
        const bool branch_taken_0x1b5368 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5368u;
        // 0x1b536c: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5368) {
            ctx->pc = 0x1B5388u;
            goto label_1b5388;
        }
    }
    ctx->pc = 0x1B5370u;
label_1b5370:
    // 0x1b5370: 0x10000017  b           . + 4 + (0x17 << 2)
label_1b5374:
    if (ctx->pc == 0x1B5374u) {
        ctx->pc = 0x1B5378u;
        goto label_1b5378;
    }
    ctx->pc = 0x1B5370u;
    {
        const bool branch_taken_0x1b5370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5370) {
            ctx->pc = 0x1B53D0u;
            goto label_1b53d0;
        }
    }
    ctx->pc = 0x1B5378u;
label_1b5378:
    // 0x1b5378: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
label_1b537c:
    if (ctx->pc == 0x1B537Cu) {
        ctx->pc = 0x1B537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5378u;
        // 0x1b537c: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5380u;
        goto label_1b5380;
    }
    ctx->pc = 0x1B5378u;
    {
        const bool branch_taken_0x1b5378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5378u;
        // 0x1b537c: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5378) {
            ctx->pc = 0x1B53B8u;
            goto label_1b53b8;
        }
    }
    ctx->pc = 0x1B5380u;
label_1b5380:
    // 0x1b5380: 0x10000013  b           . + 4 + (0x13 << 2)
label_1b5384:
    if (ctx->pc == 0x1B5384u) {
        ctx->pc = 0x1B5388u;
        goto label_1b5388;
    }
    ctx->pc = 0x1B5380u;
    {
        const bool branch_taken_0x1b5380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5380) {
            ctx->pc = 0x1B53D0u;
            goto label_1b53d0;
        }
    }
    ctx->pc = 0x1B5388u;
label_1b5388:
    // 0x1b5388: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b5388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b538c:
    // 0x1b538c: 0xc06d236  jal         func_1B48D8
label_1b5390:
    if (ctx->pc == 0x1B5390u) {
        ctx->pc = 0x1B5390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B538Cu;
        // 0x1b5390: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5394u;
        goto label_1b5394;
    }
    ctx->pc = 0x1B538Cu;
    SET_GPR_U32(ctx, 31, 0x1B5394u);
    ctx->pc = 0x1B5390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B538Cu;
    // 0x1b5390: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B48D8u;
    { ctx->pc = 0x1b48d8; return; }
    ctx->pc = 0x1B5394u;
label_1b5394:
    // 0x1b5394: 0x10000012  b           . + 4 + (0x12 << 2)
label_1b5398:
    if (ctx->pc == 0x1B5398u) {
        ctx->pc = 0x1B5398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5394u;
        // 0x1b5398: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B539Cu;
        goto label_1b539c;
    }
    ctx->pc = 0x1B5394u;
    {
        const bool branch_taken_0x1b5394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5394u;
        // 0x1b5398: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5394) {
            ctx->pc = 0x1B53E0u;
            goto label_1b53e0;
        }
    }
    ctx->pc = 0x1B539Cu;
label_1b539c:
    // 0x1b539c: 0x0  nop
    ctx->pc = 0x1b539cu;
    // NOP
label_1b53a0:
    // 0x1b53a0: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x1b53a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b53a4:
    // 0x1b53a4: 0xc06cfb0  jal         func_1B3EC0
label_1b53a8:
    if (ctx->pc == 0x1B53A8u) {
        ctx->pc = 0x1B53A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B53A4u;
        // 0x1b53a8: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B53ACu;
        goto label_1b53ac;
    }
    ctx->pc = 0x1B53A4u;
    SET_GPR_U32(ctx, 31, 0x1B53ACu);
    ctx->pc = 0x1B53A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B53A4u;
    // 0x1b53a8: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3EC0u;
    { ctx->pc = 0x1b3ec0; return; }
    ctx->pc = 0x1B53ACu;
label_1b53ac:
    // 0x1b53ac: 0x1000000c  b           . + 4 + (0xC << 2)
label_1b53b0:
    if (ctx->pc == 0x1B53B0u) {
        ctx->pc = 0x1B53B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B53ACu;
        // 0x1b53b0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B53B4u;
        goto label_1b53b4;
    }
    ctx->pc = 0x1B53ACu;
    {
        const bool branch_taken_0x1b53ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B53B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B53ACu;
        // 0x1b53b0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b53ac) {
            ctx->pc = 0x1B53E0u;
            goto label_1b53e0;
        }
    }
    ctx->pc = 0x1B53B4u;
label_1b53b4:
    // 0x1b53b4: 0x0  nop
    ctx->pc = 0x1b53b4u;
    // NOP
label_1b53b8:
    // 0x1b53b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b53b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b53bc:
    // 0x1b53bc: 0xc06d236  jal         func_1B48D8
label_1b53c0:
    if (ctx->pc == 0x1B53C0u) {
        ctx->pc = 0x1B53C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B53BCu;
        // 0x1b53c0: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B53C4u;
        goto label_1b53c4;
    }
    ctx->pc = 0x1B53BCu;
    SET_GPR_U32(ctx, 31, 0x1B53C4u);
    ctx->pc = 0x1B53C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B53BCu;
    // 0x1b53c0: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B48D8u;
    { ctx->pc = 0x1b48d8; return; }
    ctx->pc = 0x1B53C4u;
label_1b53c4:
    // 0x1b53c4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1b53c8:
    if (ctx->pc == 0x1B53C8u) {
        ctx->pc = 0x1B53C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B53C4u;
        // 0x1b53c8: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B53CCu;
        goto label_1b53cc;
    }
    ctx->pc = 0x1B53C4u;
    {
        const bool branch_taken_0x1b53c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B53C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B53C4u;
        // 0x1b53c8: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b53c4) {
            ctx->pc = 0x1B53DCu;
            goto label_1b53dc;
        }
    }
    ctx->pc = 0x1B53CCu;
label_1b53cc:
    // 0x1b53cc: 0x0  nop
    ctx->pc = 0x1b53ccu;
    // NOP
label_1b53d0:
    // 0x1b53d0: 0xc06cfb0  jal         func_1B3EC0
label_1b53d4:
    if (ctx->pc == 0x1B53D4u) {
        ctx->pc = 0x1B53D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B53D0u;
        // 0x1b53d4: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B53D8u;
        goto label_1b53d8;
    }
    ctx->pc = 0x1B53D0u;
    SET_GPR_U32(ctx, 31, 0x1B53D8u);
    ctx->pc = 0x1B53D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B53D0u;
    // 0x1b53d4: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3EC0u;
    { ctx->pc = 0x1b3ec0; return; }
    ctx->pc = 0x1B53D8u;
label_1b53d8:
    // 0x1b53d8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b53d8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1b53dc:
    // 0x1b53dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b53dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b53e0:
    // 0x1b53e0: 0x3e00008  jr          $ra
label_1b53e4:
    if (ctx->pc == 0x1B53E4u) {
        ctx->pc = 0x1B53E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B53E0u;
        // 0x1b53e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B53E8u;
        goto label_1b53e8;
    }
    ctx->pc = 0x1B53E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B53E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B53E0u;
        // 0x1b53e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B53E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B53E8u;
label_1b53e8:
    // 0x1b53e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b53e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b53ec:
    // 0x1b53ec: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x1b53ecu;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
label_1b53f0:
    // 0x1b53f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b53f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b53f4:
    // 0x1b53f4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1b53f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1b53f8:
    // 0x1b53f8: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1b53f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_1b53fc:
    // 0x1b53fc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1b53fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b5400:
    // 0x1b5400: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1b5400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1b5404:
    // 0x1b5404: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b5404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b5408:
    // 0x1b5408: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x1b5408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
label_1b540c:
    // 0x1b540c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1b540cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1b5410:
    // 0x1b5410: 0x34420fda  ori         $v0, $v0, 0xFDA
    ctx->pc = 0x1b5410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4058);
label_1b5414:
    // 0x1b5414: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b5414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b5418:
    // 0x1b5418: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1b541c:
    if (ctx->pc == 0x1B541Cu) {
        ctx->pc = 0x1B541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5418u;
        // 0x1b541c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5420u;
        goto label_1b5420;
    }
    ctx->pc = 0x1B5418u;
    {
        const bool branch_taken_0x1b5418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5418u;
        // 0x1b541c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5418) {
            ctx->pc = 0x1B5430u;
            goto label_1b5430;
        }
    }
    ctx->pc = 0x1B5420u;
label_1b5420:
    // 0x1b5420: 0xc06d280  jal         func_1B4A00
label_1b5424:
    if (ctx->pc == 0x1B5424u) {
        ctx->pc = 0x1B5424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5420u;
        // 0x1b5424: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5428u;
        goto label_1b5428;
    }
    ctx->pc = 0x1B5420u;
    SET_GPR_U32(ctx, 31, 0x1B5428u);
    ctx->pc = 0x1B5424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5420u;
    // 0x1b5424: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A00u;
    { ctx->pc = 0x1b4a00; return; }
    ctx->pc = 0x1B5428u;
label_1b5428:
    // 0x1b5428: 0x1000000b  b           . + 4 + (0xB << 2)
label_1b542c:
    if (ctx->pc == 0x1B542Cu) {
        ctx->pc = 0x1B542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5428u;
        // 0x1b542c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5430u;
        goto label_1b5430;
    }
    ctx->pc = 0x1B5428u;
    {
        const bool branch_taken_0x1b5428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5428u;
        // 0x1b542c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5428) {
            ctx->pc = 0x1B5458u;
            goto label_1b5458;
        }
    }
    ctx->pc = 0x1B5430u;
label_1b5430:
    // 0x1b5430: 0xc06ce88  jal         func_1B3A20
label_1b5434:
    if (ctx->pc == 0x1B5434u) {
        ctx->pc = 0x1B5438u;
        goto label_1b5438;
    }
    ctx->pc = 0x1B5430u;
    SET_GPR_U32(ctx, 31, 0x1B5438u);
    ctx->pc = 0x1B3A20u;
    { ctx->pc = 0x1b3a20; return; }
    ctx->pc = 0x1B5438u;
label_1b5438:
    // 0x1b5438: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b5438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b543c:
    // 0x1b543c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b543cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1b5440:
    // 0x1b5440: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x1b5440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b5444:
    // 0x1b5444: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1b5444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1b5448:
    // 0x1b5448: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x1b5448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b544c:
    // 0x1b544c: 0xc06d280  jal         func_1B4A00
label_1b5450:
    if (ctx->pc == 0x1B5450u) {
        ctx->pc = 0x1B5450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B544Cu;
        // 0x1b5450: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5454u;
        goto label_1b5454;
    }
    ctx->pc = 0x1B544Cu;
    SET_GPR_U32(ctx, 31, 0x1B5454u);
    ctx->pc = 0x1B5450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B544Cu;
    // 0x1b5450: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A00u;
    { ctx->pc = 0x1b4a00; return; }
    ctx->pc = 0x1B5454u;
label_1b5454:
    // 0x1b5454: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b5454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b5458:
    // 0x1b5458: 0x3e00008  jr          $ra
label_1b545c:
    if (ctx->pc == 0x1B545Cu) {
        ctx->pc = 0x1B545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5458u;
        // 0x1b545c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5460u;
        goto label_1b5460;
    }
    ctx->pc = 0x1B5458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5458u;
        // 0x1b545c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5460u;
label_1b5460:
    // 0x1b5460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b5460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b5464:
    // 0x1b5464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b5468:
    // 0x1b5468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b546c:
    // 0x1b546c: 0x806c9e6  j           func_1B2798
label_1b5470:
    if (ctx->pc == 0x1B5470u) {
        ctx->pc = 0x1B5470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B546Cu;
        // 0x1b5470: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5474u;
        goto label_1b5474;
    }
    ctx->pc = 0x1B546Cu;
    ctx->pc = 0x1B5470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B546Cu;
    // 0x1b5470: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2798u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x1b2798; return; }
    ctx->pc = 0x1B5474u;
label_1b5474:
    // 0x1b5474: 0x0  nop
    ctx->pc = 0x1b5474u;
    // NOP
label_1b5478:
    // 0x1b5478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b5478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b547c:
    // 0x1b547c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b547cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b5480:
    // 0x1b5480: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5484:
    // 0x1b5484: 0x806caf6  j           func_1B2BD8
label_1b5488:
    if (ctx->pc == 0x1B5488u) {
        ctx->pc = 0x1B5488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5484u;
        // 0x1b5488: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B548Cu;
        goto label_1b548c;
    }
    ctx->pc = 0x1B5484u;
    ctx->pc = 0x1B5488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5484u;
    // 0x1b5488: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2BD8u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x1b2bd8; return; }
    ctx->pc = 0x1B548Cu;
label_1b548c:
    // 0x1b548c: 0x0  nop
    ctx->pc = 0x1b548cu;
    // NOP
label_1b5490:
    // 0x1b5490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b5490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b5494:
    // 0x1b5494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b5498:
    // 0x1b5498: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b549c:
    // 0x1b549c: 0x806cb70  j           func_1B2DC0
label_1b54a0:
    if (ctx->pc == 0x1B54A0u) {
        ctx->pc = 0x1B54A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B549Cu;
        // 0x1b54a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B54A4u;
        goto label_1b54a4;
    }
    ctx->pc = 0x1B549Cu;
    ctx->pc = 0x1B54A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B549Cu;
    // 0x1b54a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2DC0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x1b2dc0; return; }
    ctx->pc = 0x1B54A4u;
label_1b54a4:
    // 0x1b54a4: 0x0  nop
    ctx->pc = 0x1b54a4u;
    // NOP
label_1b54a8:
    // 0x1b54a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b54a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b54ac:
    // 0x1b54ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b54acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b54b0:
    // 0x1b54b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b54b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b54b4:
    // 0x1b54b4: 0x806cc0c  j           func_1B3030
label_1b54b8:
    if (ctx->pc == 0x1B54B8u) {
        ctx->pc = 0x1B54B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B54B4u;
        // 0x1b54b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B54BCu;
        goto label_1b54bc;
    }
    ctx->pc = 0x1B54B4u;
    ctx->pc = 0x1B54B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B54B4u;
    // 0x1b54b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3030u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x1b3030; return; }
    ctx->pc = 0x1B54BCu;
label_1b54bc:
    // 0x1b54bc: 0x0  nop
    ctx->pc = 0x1b54bcu;
    // NOP
label_1b54c0:
    // 0x1b54c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b54c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b54c4:
    // 0x1b54c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b54c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b54c8:
    // 0x1b54c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b54c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b54cc:
    // 0x1b54cc: 0x806cc80  j           func_1B3200
label_1b54d0:
    if (ctx->pc == 0x1B54D0u) {
        ctx->pc = 0x1B54D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B54CCu;
        // 0x1b54d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B54D4u;
        goto label_1b54d4;
    }
    ctx->pc = 0x1B54CCu;
    ctx->pc = 0x1B54D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B54CCu;
    // 0x1b54d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3200u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x1b3200; return; }
    ctx->pc = 0x1B54D4u;
label_1b54d4:
    // 0x1b54d4: 0x0  nop
    ctx->pc = 0x1b54d4u;
    // NOP
label_1b54d8:
    // 0x1b54d8: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1b54d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_1b54dc:
    // 0x1b54dc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b54dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1b54e0:
    // 0x1b54e0: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1b54e0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_1b54e4:
    // 0x1b54e4: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1b54e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_1b54e8:
    // 0x1b54e8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1b54e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1b54ec:
    // 0x1b54ec: 0x620019  multu       $v1, $v0
    ctx->pc = 0x1b54ecu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1b54f0:
    // 0x1b54f0: 0x3012  mflo        $a2
    ctx->pc = 0x1b54f0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_1b54f4:
    // 0x1b54f4: 0x4010  mfhi        $t0
    ctx->pc = 0x1b54f4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_1b54f8:
    // 0x1b54f8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b54f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_1b54fc:
    // 0x1b54fc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1b54fcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_1b5500:
    // 0x1b5500: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x1b5500u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1b5504:
    // 0x1b5504: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1b5504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b5508:
    // 0x1b5508: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1b5508u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_1b550c:
    // 0x1b550c: 0x70822018  mult1       $a0, $a0, $v0
    ctx->pc = 0x1b550cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1b5510:
    // 0x1b5510: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1b5510u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_1b5514:
    // 0x1b5514: 0x1254824  and         $t1, $t1, $a1
    ctx->pc = 0x1b5514u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
label_1b5518:
    // 0x1b5518: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x1b5518u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_1b551c:
    // 0x1b551c: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x1b551cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
label_1b5520:
    // 0x1b5520: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x1b5520u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
label_1b5524:
    // 0x1b5524: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x1b5524u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
label_1b5528:
    // 0x1b5528: 0x1274824  and         $t1, $t1, $a3
    ctx->pc = 0x1b5528u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
label_1b552c:
    // 0x1b552c: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x1b552cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
label_1b5530:
    // 0x1b5530: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b5530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b5534:
    // 0x1b5534: 0x9103f  dsra32      $v0, $t1, 0
    ctx->pc = 0x1b5534u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 9) >> (32 + 0));
label_1b5538:
    // 0x1b5538: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x1b5538u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
label_1b553c:
    // 0x1b553c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b553cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b5540:
    // 0x1b5540: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b5540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1b5544:
    // 0x1b5544: 0x3e00008  jr          $ra
label_1b5548:
    if (ctx->pc == 0x1B5548u) {
        ctx->pc = 0x1B5548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5544u;
        // 0x1b5548: 0xe21025  or          $v0, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B554Cu;
        goto label_1b554c;
    }
    ctx->pc = 0x1B5544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5544u;
        // 0x1b5548: 0xe21025  or          $v0, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B554Cu;
label_1b554c:
    // 0x1b554c: 0x0  nop
    ctx->pc = 0x1b554cu;
    // NOP
label_1b5550:
    // 0x1b5550: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1b5550u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b5554:
    // 0x1b5554: 0x9503f  dsra32      $t2, $t1, 0
    ctx->pc = 0x1b5554u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 9) >> (32 + 0));
label_1b5558:
    // 0x1b5558: 0xa203c  dsll32      $a0, $t2, 0
    ctx->pc = 0x1b5558u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) << (32 + 0));
label_1b555c:
    // 0x1b555c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1b555cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_1b5560:
    // 0x1b5560: 0x4810016  bgez        $a0, . + 4 + (0x16 << 2)
label_1b5564:
    if (ctx->pc == 0x1B5564u) {
        ctx->pc = 0x1B5564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5560u;
        // 0x1b5564: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5568u;
        goto label_1b5568;
    }
    ctx->pc = 0x1B5560u;
    {
        const bool branch_taken_0x1b5560 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1B5564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5560u;
        // 0x1b5564: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5560) {
            ctx->pc = 0x1B55BCu;
            goto label_1b55bc;
        }
    }
    ctx->pc = 0x1B5568u;
label_1b5568:
    // 0x1b5568: 0x9103c  dsll32      $v0, $t1, 0
    ctx->pc = 0x1b5568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
label_1b556c:
    // 0x1b556c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b556cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1b5570:
    // 0x1b5570: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b5570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b5574:
    // 0x1b5574: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b5574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1b5578:
    // 0x1b5578: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1b5578u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1b557c:
    // 0x1b557c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1b557cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_1b5580:
    // 0x1b5580: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b5580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1b5584:
    // 0x1b5584: 0x41823  negu        $v1, $a0
    ctx->pc = 0x1b5584u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_1b5588:
    // 0x1b5588: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b5588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1b558c:
    // 0x1b558c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1b558cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_1b5590:
    // 0x1b5590: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b5590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_1b5594:
    // 0x1b5594: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1b5594u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1b5598:
    // 0x1b5598: 0x2418ffff  addiu       $t8, $zero, -0x1
    ctx->pc = 0x1b5598u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b559c:
    // 0x1b559c: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1b559cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_1b55a0:
    // 0x1b55a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b55a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1b55a4:
    // 0x1b55a4: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x1b55a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_1b55a8:
    // 0x1b55a8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1b55a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1b55ac:
    // 0x1b55ac: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b55acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b55b0:
    // 0x1b55b0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b55b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1b55b4:
    // 0x1b55b4: 0xc34825  or          $t1, $a2, $v1
    ctx->pc = 0x1b55b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_1b55b8:
    // 0x1b55b8: 0x9503f  dsra32      $t2, $t1, 0
    ctx->pc = 0x1b55b8u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 9) >> (32 + 0));
label_1b55bc:
    // 0x1b55bc: 0x5203f  dsra32      $a0, $a1, 0
    ctx->pc = 0x1b55bcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 5) >> (32 + 0));
label_1b55c0:
    // 0x1b55c0: 0x4810015  bgez        $a0, . + 4 + (0x15 << 2)
label_1b55c4:
    if (ctx->pc == 0x1B55C4u) {
        ctx->pc = 0x1B55C8u;
        goto label_1b55c8;
    }
    ctx->pc = 0x1B55C0u;
    {
        const bool branch_taken_0x1b55c0 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1b55c0) {
            ctx->pc = 0x1B5618u;
            { ctx->pc = 0x1b5618; return; }
        }
    }
    ctx->pc = 0x1B55C8u;
label_1b55c8:
    // 0x1b55c8: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1b55c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_1b55cc:
    // 0x1b55cc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b55ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1b55d0:
    // 0x1b55d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b55d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b55d4:
    // 0x1b55d4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b55d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1b55d8:
    // 0x1b55d8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1b55d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1b55dc:
    // 0x1b55dc: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x1b55dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_1b55e0:
    // 0x1b55e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b55e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1b55e4:
    // 0x1b55e4: 0x41823  negu        $v1, $a0
    ctx->pc = 0x1b55e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_1b55e8:
    // 0x1b55e8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b55e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1b55ec:
    // 0x1b55ec: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1b55ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_1b55f0:
    // 0x1b55f0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b55f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_1b55f4:
    // 0x1b55f4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1b55f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1b55f8:
    // 0x1b55f8: 0x18c027  nor         $t8, $zero, $t8
    ctx->pc = 0x1b55f8u;
    SET_GPR_U64(ctx, 24, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 24)));
label_1b55fc:
    // 0x1b55fc: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x1b55fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    ctx->pc = 0x1b5600u;
    return;
}
