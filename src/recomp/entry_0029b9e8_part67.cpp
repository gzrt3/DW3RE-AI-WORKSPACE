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

// Function: entry_0029b9e8
// Address: 0x29b9e8 - 0x2bfab4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_0029b9e8_part67(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2bbd88u: goto label_2bbd88;
        case 0x2bbd8cu: goto label_2bbd8c;
        case 0x2bbd90u: goto label_2bbd90;
        case 0x2bbd94u: goto label_2bbd94;
        case 0x2bbd98u: goto label_2bbd98;
        case 0x2bbd9cu: goto label_2bbd9c;
        case 0x2bbda0u: goto label_2bbda0;
        case 0x2bbda4u: goto label_2bbda4;
        case 0x2bbda8u: goto label_2bbda8;
        case 0x2bbdacu: goto label_2bbdac;
        case 0x2bbdb0u: goto label_2bbdb0;
        case 0x2bbdb4u: goto label_2bbdb4;
        case 0x2bbdb8u: goto label_2bbdb8;
        case 0x2bbdbcu: goto label_2bbdbc;
        case 0x2bbdc0u: goto label_2bbdc0;
        case 0x2bbdc4u: goto label_2bbdc4;
        case 0x2bbdc8u: goto label_2bbdc8;
        case 0x2bbdccu: goto label_2bbdcc;
        case 0x2bbdd0u: goto label_2bbdd0;
        case 0x2bbdd4u: goto label_2bbdd4;
        case 0x2bbdd8u: goto label_2bbdd8;
        case 0x2bbddcu: goto label_2bbddc;
        case 0x2bbde0u: goto label_2bbde0;
        case 0x2bbde4u: goto label_2bbde4;
        case 0x2bbde8u: goto label_2bbde8;
        case 0x2bbdecu: goto label_2bbdec;
        case 0x2bbdf0u: goto label_2bbdf0;
        case 0x2bbdf4u: goto label_2bbdf4;
        case 0x2bbdf8u: goto label_2bbdf8;
        case 0x2bbdfcu: goto label_2bbdfc;
        case 0x2bbe00u: goto label_2bbe00;
        case 0x2bbe04u: goto label_2bbe04;
        case 0x2bbe08u: goto label_2bbe08;
        case 0x2bbe0cu: goto label_2bbe0c;
        case 0x2bbe10u: goto label_2bbe10;
        case 0x2bbe14u: goto label_2bbe14;
        case 0x2bbe18u: goto label_2bbe18;
        case 0x2bbe1cu: goto label_2bbe1c;
        case 0x2bbe20u: goto label_2bbe20;
        case 0x2bbe24u: goto label_2bbe24;
        case 0x2bbe28u: goto label_2bbe28;
        case 0x2bbe2cu: goto label_2bbe2c;
        case 0x2bbe30u: goto label_2bbe30;
        case 0x2bbe34u: goto label_2bbe34;
        case 0x2bbe38u: goto label_2bbe38;
        case 0x2bbe3cu: goto label_2bbe3c;
        case 0x2bbe40u: goto label_2bbe40;
        case 0x2bbe44u: goto label_2bbe44;
        case 0x2bbe48u: goto label_2bbe48;
        case 0x2bbe4cu: goto label_2bbe4c;
        case 0x2bbe50u: goto label_2bbe50;
        case 0x2bbe54u: goto label_2bbe54;
        case 0x2bbe58u: goto label_2bbe58;
        case 0x2bbe5cu: goto label_2bbe5c;
        case 0x2bbe60u: goto label_2bbe60;
        case 0x2bbe64u: goto label_2bbe64;
        case 0x2bbe68u: goto label_2bbe68;
        case 0x2bbe6cu: goto label_2bbe6c;
        case 0x2bbe70u: goto label_2bbe70;
        case 0x2bbe74u: goto label_2bbe74;
        case 0x2bbe78u: goto label_2bbe78;
        case 0x2bbe7cu: goto label_2bbe7c;
        case 0x2bbe80u: goto label_2bbe80;
        case 0x2bbe84u: goto label_2bbe84;
        case 0x2bbe88u: goto label_2bbe88;
        case 0x2bbe8cu: goto label_2bbe8c;
        case 0x2bbe90u: goto label_2bbe90;
        case 0x2bbe94u: goto label_2bbe94;
        case 0x2bbe98u: goto label_2bbe98;
        case 0x2bbe9cu: goto label_2bbe9c;
        case 0x2bbea0u: goto label_2bbea0;
        case 0x2bbea4u: goto label_2bbea4;
        case 0x2bbea8u: goto label_2bbea8;
        case 0x2bbeacu: goto label_2bbeac;
        case 0x2bbeb0u: goto label_2bbeb0;
        case 0x2bbeb4u: goto label_2bbeb4;
        case 0x2bbeb8u: goto label_2bbeb8;
        case 0x2bbebcu: goto label_2bbebc;
        case 0x2bbec0u: goto label_2bbec0;
        case 0x2bbec4u: goto label_2bbec4;
        case 0x2bbec8u: goto label_2bbec8;
        case 0x2bbeccu: goto label_2bbecc;
        case 0x2bbed0u: goto label_2bbed0;
        case 0x2bbed4u: goto label_2bbed4;
        case 0x2bbed8u: goto label_2bbed8;
        case 0x2bbedcu: goto label_2bbedc;
        case 0x2bbee0u: goto label_2bbee0;
        case 0x2bbee4u: goto label_2bbee4;
        case 0x2bbee8u: goto label_2bbee8;
        case 0x2bbeecu: goto label_2bbeec;
        case 0x2bbef0u: goto label_2bbef0;
        case 0x2bbef4u: goto label_2bbef4;
        case 0x2bbef8u: goto label_2bbef8;
        case 0x2bbefcu: goto label_2bbefc;
        case 0x2bbf00u: goto label_2bbf00;
        case 0x2bbf04u: goto label_2bbf04;
        case 0x2bbf08u: goto label_2bbf08;
        case 0x2bbf0cu: goto label_2bbf0c;
        case 0x2bbf10u: goto label_2bbf10;
        case 0x2bbf14u: goto label_2bbf14;
        case 0x2bbf18u: goto label_2bbf18;
        case 0x2bbf1cu: goto label_2bbf1c;
        case 0x2bbf20u: goto label_2bbf20;
        case 0x2bbf24u: goto label_2bbf24;
        case 0x2bbf28u: goto label_2bbf28;
        case 0x2bbf2cu: goto label_2bbf2c;
        case 0x2bbf30u: goto label_2bbf30;
        case 0x2bbf34u: goto label_2bbf34;
        case 0x2bbf38u: goto label_2bbf38;
        case 0x2bbf3cu: goto label_2bbf3c;
        case 0x2bbf40u: goto label_2bbf40;
        case 0x2bbf44u: goto label_2bbf44;
        case 0x2bbf48u: goto label_2bbf48;
        case 0x2bbf4cu: goto label_2bbf4c;
        case 0x2bbf50u: goto label_2bbf50;
        case 0x2bbf54u: goto label_2bbf54;
        case 0x2bbf58u: goto label_2bbf58;
        case 0x2bbf5cu: goto label_2bbf5c;
        case 0x2bbf60u: goto label_2bbf60;
        case 0x2bbf64u: goto label_2bbf64;
        case 0x2bbf68u: goto label_2bbf68;
        case 0x2bbf6cu: goto label_2bbf6c;
        case 0x2bbf70u: goto label_2bbf70;
        case 0x2bbf74u: goto label_2bbf74;
        case 0x2bbf78u: goto label_2bbf78;
        case 0x2bbf7cu: goto label_2bbf7c;
        case 0x2bbf80u: goto label_2bbf80;
        case 0x2bbf84u: goto label_2bbf84;
        case 0x2bbf88u: goto label_2bbf88;
        case 0x2bbf8cu: goto label_2bbf8c;
        case 0x2bbf90u: goto label_2bbf90;
        case 0x2bbf94u: goto label_2bbf94;
        case 0x2bbf98u: goto label_2bbf98;
        case 0x2bbf9cu: goto label_2bbf9c;
        case 0x2bbfa0u: goto label_2bbfa0;
        case 0x2bbfa4u: goto label_2bbfa4;
        case 0x2bbfa8u: goto label_2bbfa8;
        case 0x2bbfacu: goto label_2bbfac;
        case 0x2bbfb0u: goto label_2bbfb0;
        case 0x2bbfb4u: goto label_2bbfb4;
        case 0x2bbfb8u: goto label_2bbfb8;
        case 0x2bbfbcu: goto label_2bbfbc;
        case 0x2bbfc0u: goto label_2bbfc0;
        case 0x2bbfc4u: goto label_2bbfc4;
        case 0x2bbfc8u: goto label_2bbfc8;
        case 0x2bbfccu: goto label_2bbfcc;
        case 0x2bbfd0u: goto label_2bbfd0;
        case 0x2bbfd4u: goto label_2bbfd4;
        case 0x2bbfd8u: goto label_2bbfd8;
        case 0x2bbfdcu: goto label_2bbfdc;
        case 0x2bbfe0u: goto label_2bbfe0;
        case 0x2bbfe4u: goto label_2bbfe4;
        case 0x2bbfe8u: goto label_2bbfe8;
        case 0x2bbfecu: goto label_2bbfec;
        case 0x2bbff0u: goto label_2bbff0;
        case 0x2bbff4u: goto label_2bbff4;
        case 0x2bbff8u: goto label_2bbff8;
        case 0x2bbffcu: goto label_2bbffc;
        case 0x2bc000u: goto label_2bc000;
        case 0x2bc004u: goto label_2bc004;
        case 0x2bc008u: goto label_2bc008;
        case 0x2bc00cu: goto label_2bc00c;
        case 0x2bc010u: goto label_2bc010;
        case 0x2bc014u: goto label_2bc014;
        case 0x2bc018u: goto label_2bc018;
        case 0x2bc01cu: goto label_2bc01c;
        case 0x2bc020u: goto label_2bc020;
        case 0x2bc024u: goto label_2bc024;
        case 0x2bc028u: goto label_2bc028;
        case 0x2bc02cu: goto label_2bc02c;
        case 0x2bc030u: goto label_2bc030;
        case 0x2bc034u: goto label_2bc034;
        case 0x2bc038u: goto label_2bc038;
        case 0x2bc03cu: goto label_2bc03c;
        case 0x2bc040u: goto label_2bc040;
        case 0x2bc044u: goto label_2bc044;
        case 0x2bc048u: goto label_2bc048;
        case 0x2bc04cu: goto label_2bc04c;
        case 0x2bc050u: goto label_2bc050;
        case 0x2bc054u: goto label_2bc054;
        case 0x2bc058u: goto label_2bc058;
        case 0x2bc05cu: goto label_2bc05c;
        case 0x2bc060u: goto label_2bc060;
        case 0x2bc064u: goto label_2bc064;
        case 0x2bc068u: goto label_2bc068;
        case 0x2bc06cu: goto label_2bc06c;
        case 0x2bc070u: goto label_2bc070;
        case 0x2bc074u: goto label_2bc074;
        case 0x2bc078u: goto label_2bc078;
        case 0x2bc07cu: goto label_2bc07c;
        case 0x2bc080u: goto label_2bc080;
        case 0x2bc084u: goto label_2bc084;
        case 0x2bc088u: goto label_2bc088;
        case 0x2bc08cu: goto label_2bc08c;
        case 0x2bc090u: goto label_2bc090;
        case 0x2bc094u: goto label_2bc094;
        case 0x2bc098u: goto label_2bc098;
        case 0x2bc09cu: goto label_2bc09c;
        case 0x2bc0a0u: goto label_2bc0a0;
        case 0x2bc0a4u: goto label_2bc0a4;
        case 0x2bc0a8u: goto label_2bc0a8;
        case 0x2bc0acu: goto label_2bc0ac;
        case 0x2bc0b0u: goto label_2bc0b0;
        case 0x2bc0b4u: goto label_2bc0b4;
        case 0x2bc0b8u: goto label_2bc0b8;
        case 0x2bc0bcu: goto label_2bc0bc;
        case 0x2bc0c0u: goto label_2bc0c0;
        case 0x2bc0c4u: goto label_2bc0c4;
        case 0x2bc0c8u: goto label_2bc0c8;
        case 0x2bc0ccu: goto label_2bc0cc;
        case 0x2bc0d0u: goto label_2bc0d0;
        case 0x2bc0d4u: goto label_2bc0d4;
        case 0x2bc0d8u: goto label_2bc0d8;
        case 0x2bc0dcu: goto label_2bc0dc;
        case 0x2bc0e0u: goto label_2bc0e0;
        case 0x2bc0e4u: goto label_2bc0e4;
        case 0x2bc0e8u: goto label_2bc0e8;
        case 0x2bc0ecu: goto label_2bc0ec;
        case 0x2bc0f0u: goto label_2bc0f0;
        case 0x2bc0f4u: goto label_2bc0f4;
        case 0x2bc0f8u: goto label_2bc0f8;
        case 0x2bc0fcu: goto label_2bc0fc;
        case 0x2bc100u: goto label_2bc100;
        case 0x2bc104u: goto label_2bc104;
        case 0x2bc108u: goto label_2bc108;
        case 0x2bc10cu: goto label_2bc10c;
        case 0x2bc110u: goto label_2bc110;
        case 0x2bc114u: goto label_2bc114;
        case 0x2bc118u: goto label_2bc118;
        case 0x2bc11cu: goto label_2bc11c;
        case 0x2bc120u: goto label_2bc120;
        case 0x2bc124u: goto label_2bc124;
        case 0x2bc128u: goto label_2bc128;
        case 0x2bc12cu: goto label_2bc12c;
        case 0x2bc130u: goto label_2bc130;
        case 0x2bc134u: goto label_2bc134;
        case 0x2bc138u: goto label_2bc138;
        case 0x2bc13cu: goto label_2bc13c;
        case 0x2bc140u: goto label_2bc140;
        case 0x2bc144u: goto label_2bc144;
        case 0x2bc148u: goto label_2bc148;
        case 0x2bc14cu: goto label_2bc14c;
        case 0x2bc150u: goto label_2bc150;
        case 0x2bc154u: goto label_2bc154;
        case 0x2bc158u: goto label_2bc158;
        case 0x2bc15cu: goto label_2bc15c;
        case 0x2bc160u: goto label_2bc160;
        case 0x2bc164u: goto label_2bc164;
        case 0x2bc168u: goto label_2bc168;
        case 0x2bc16cu: goto label_2bc16c;
        case 0x2bc170u: goto label_2bc170;
        case 0x2bc174u: goto label_2bc174;
        case 0x2bc178u: goto label_2bc178;
        case 0x2bc17cu: goto label_2bc17c;
        case 0x2bc180u: goto label_2bc180;
        case 0x2bc184u: goto label_2bc184;
        case 0x2bc188u: goto label_2bc188;
        case 0x2bc18cu: goto label_2bc18c;
        case 0x2bc190u: goto label_2bc190;
        case 0x2bc194u: goto label_2bc194;
        case 0x2bc198u: goto label_2bc198;
        case 0x2bc19cu: goto label_2bc19c;
        case 0x2bc1a0u: goto label_2bc1a0;
        case 0x2bc1a4u: goto label_2bc1a4;
        case 0x2bc1a8u: goto label_2bc1a8;
        case 0x2bc1acu: goto label_2bc1ac;
        case 0x2bc1b0u: goto label_2bc1b0;
        case 0x2bc1b4u: goto label_2bc1b4;
        case 0x2bc1b8u: goto label_2bc1b8;
        case 0x2bc1bcu: goto label_2bc1bc;
        case 0x2bc1c0u: goto label_2bc1c0;
        case 0x2bc1c4u: goto label_2bc1c4;
        case 0x2bc1c8u: goto label_2bc1c8;
        case 0x2bc1ccu: goto label_2bc1cc;
        case 0x2bc1d0u: goto label_2bc1d0;
        case 0x2bc1d4u: goto label_2bc1d4;
        case 0x2bc1d8u: goto label_2bc1d8;
        case 0x2bc1dcu: goto label_2bc1dc;
        case 0x2bc1e0u: goto label_2bc1e0;
        case 0x2bc1e4u: goto label_2bc1e4;
        case 0x2bc1e8u: goto label_2bc1e8;
        case 0x2bc1ecu: goto label_2bc1ec;
        case 0x2bc1f0u: goto label_2bc1f0;
        case 0x2bc1f4u: goto label_2bc1f4;
        case 0x2bc1f8u: goto label_2bc1f8;
        case 0x2bc1fcu: goto label_2bc1fc;
        case 0x2bc200u: goto label_2bc200;
        case 0x2bc204u: goto label_2bc204;
        case 0x2bc208u: goto label_2bc208;
        case 0x2bc20cu: goto label_2bc20c;
        case 0x2bc210u: goto label_2bc210;
        case 0x2bc214u: goto label_2bc214;
        case 0x2bc218u: goto label_2bc218;
        case 0x2bc21cu: goto label_2bc21c;
        case 0x2bc220u: goto label_2bc220;
        case 0x2bc224u: goto label_2bc224;
        case 0x2bc228u: goto label_2bc228;
        case 0x2bc22cu: goto label_2bc22c;
        case 0x2bc230u: goto label_2bc230;
        case 0x2bc234u: goto label_2bc234;
        case 0x2bc238u: goto label_2bc238;
        case 0x2bc23cu: goto label_2bc23c;
        case 0x2bc240u: goto label_2bc240;
        case 0x2bc244u: goto label_2bc244;
        case 0x2bc248u: goto label_2bc248;
        case 0x2bc24cu: goto label_2bc24c;
        case 0x2bc250u: goto label_2bc250;
        case 0x2bc254u: goto label_2bc254;
        case 0x2bc258u: goto label_2bc258;
        case 0x2bc25cu: goto label_2bc25c;
        case 0x2bc260u: goto label_2bc260;
        case 0x2bc264u: goto label_2bc264;
        case 0x2bc268u: goto label_2bc268;
        case 0x2bc26cu: goto label_2bc26c;
        case 0x2bc270u: goto label_2bc270;
        case 0x2bc274u: goto label_2bc274;
        case 0x2bc278u: goto label_2bc278;
        case 0x2bc27cu: goto label_2bc27c;
        case 0x2bc280u: goto label_2bc280;
        case 0x2bc284u: goto label_2bc284;
        case 0x2bc288u: goto label_2bc288;
        case 0x2bc28cu: goto label_2bc28c;
        case 0x2bc290u: goto label_2bc290;
        case 0x2bc294u: goto label_2bc294;
        case 0x2bc298u: goto label_2bc298;
        case 0x2bc29cu: goto label_2bc29c;
        case 0x2bc2a0u: goto label_2bc2a0;
        case 0x2bc2a4u: goto label_2bc2a4;
        case 0x2bc2a8u: goto label_2bc2a8;
        case 0x2bc2acu: goto label_2bc2ac;
        case 0x2bc2b0u: goto label_2bc2b0;
        case 0x2bc2b4u: goto label_2bc2b4;
        case 0x2bc2b8u: goto label_2bc2b8;
        case 0x2bc2bcu: goto label_2bc2bc;
        case 0x2bc2c0u: goto label_2bc2c0;
        case 0x2bc2c4u: goto label_2bc2c4;
        case 0x2bc2c8u: goto label_2bc2c8;
        case 0x2bc2ccu: goto label_2bc2cc;
        case 0x2bc2d0u: goto label_2bc2d0;
        case 0x2bc2d4u: goto label_2bc2d4;
        case 0x2bc2d8u: goto label_2bc2d8;
        case 0x2bc2dcu: goto label_2bc2dc;
        case 0x2bc2e0u: goto label_2bc2e0;
        case 0x2bc2e4u: goto label_2bc2e4;
        case 0x2bc2e8u: goto label_2bc2e8;
        case 0x2bc2ecu: goto label_2bc2ec;
        case 0x2bc2f0u: goto label_2bc2f0;
        case 0x2bc2f4u: goto label_2bc2f4;
        case 0x2bc2f8u: goto label_2bc2f8;
        case 0x2bc2fcu: goto label_2bc2fc;
        case 0x2bc300u: goto label_2bc300;
        case 0x2bc304u: goto label_2bc304;
        case 0x2bc308u: goto label_2bc308;
        case 0x2bc30cu: goto label_2bc30c;
        case 0x2bc310u: goto label_2bc310;
        case 0x2bc314u: goto label_2bc314;
        case 0x2bc318u: goto label_2bc318;
        case 0x2bc31cu: goto label_2bc31c;
        case 0x2bc320u: goto label_2bc320;
        case 0x2bc324u: goto label_2bc324;
        case 0x2bc328u: goto label_2bc328;
        case 0x2bc32cu: goto label_2bc32c;
        case 0x2bc330u: goto label_2bc330;
        case 0x2bc334u: goto label_2bc334;
        case 0x2bc338u: goto label_2bc338;
        case 0x2bc33cu: goto label_2bc33c;
        case 0x2bc340u: goto label_2bc340;
        case 0x2bc344u: goto label_2bc344;
        case 0x2bc348u: goto label_2bc348;
        case 0x2bc34cu: goto label_2bc34c;
        case 0x2bc350u: goto label_2bc350;
        case 0x2bc354u: goto label_2bc354;
        case 0x2bc358u: goto label_2bc358;
        case 0x2bc35cu: goto label_2bc35c;
        case 0x2bc360u: goto label_2bc360;
        case 0x2bc364u: goto label_2bc364;
        case 0x2bc368u: goto label_2bc368;
        case 0x2bc36cu: goto label_2bc36c;
        case 0x2bc370u: goto label_2bc370;
        case 0x2bc374u: goto label_2bc374;
        case 0x2bc378u: goto label_2bc378;
        case 0x2bc37cu: goto label_2bc37c;
        case 0x2bc380u: goto label_2bc380;
        case 0x2bc384u: goto label_2bc384;
        case 0x2bc388u: goto label_2bc388;
        case 0x2bc38cu: goto label_2bc38c;
        case 0x2bc390u: goto label_2bc390;
        case 0x2bc394u: goto label_2bc394;
        case 0x2bc398u: goto label_2bc398;
        case 0x2bc39cu: goto label_2bc39c;
        case 0x2bc3a0u: goto label_2bc3a0;
        case 0x2bc3a4u: goto label_2bc3a4;
        case 0x2bc3a8u: goto label_2bc3a8;
        case 0x2bc3acu: goto label_2bc3ac;
        case 0x2bc3b0u: goto label_2bc3b0;
        case 0x2bc3b4u: goto label_2bc3b4;
        case 0x2bc3b8u: goto label_2bc3b8;
        case 0x2bc3bcu: goto label_2bc3bc;
        case 0x2bc3c0u: goto label_2bc3c0;
        case 0x2bc3c4u: goto label_2bc3c4;
        case 0x2bc3c8u: goto label_2bc3c8;
        case 0x2bc3ccu: goto label_2bc3cc;
        case 0x2bc3d0u: goto label_2bc3d0;
        case 0x2bc3d4u: goto label_2bc3d4;
        case 0x2bc3d8u: goto label_2bc3d8;
        case 0x2bc3dcu: goto label_2bc3dc;
        case 0x2bc3e0u: goto label_2bc3e0;
        case 0x2bc3e4u: goto label_2bc3e4;
        case 0x2bc3e8u: goto label_2bc3e8;
        case 0x2bc3ecu: goto label_2bc3ec;
        case 0x2bc3f0u: goto label_2bc3f0;
        case 0x2bc3f4u: goto label_2bc3f4;
        case 0x2bc3f8u: goto label_2bc3f8;
        case 0x2bc3fcu: goto label_2bc3fc;
        case 0x2bc400u: goto label_2bc400;
        case 0x2bc404u: goto label_2bc404;
        case 0x2bc408u: goto label_2bc408;
        case 0x2bc40cu: goto label_2bc40c;
        case 0x2bc410u: goto label_2bc410;
        case 0x2bc414u: goto label_2bc414;
        case 0x2bc418u: goto label_2bc418;
        case 0x2bc41cu: goto label_2bc41c;
        case 0x2bc420u: goto label_2bc420;
        case 0x2bc424u: goto label_2bc424;
        case 0x2bc428u: goto label_2bc428;
        case 0x2bc42cu: goto label_2bc42c;
        case 0x2bc430u: goto label_2bc430;
        case 0x2bc434u: goto label_2bc434;
        case 0x2bc438u: goto label_2bc438;
        case 0x2bc43cu: goto label_2bc43c;
        case 0x2bc440u: goto label_2bc440;
        case 0x2bc444u: goto label_2bc444;
        case 0x2bc448u: goto label_2bc448;
        case 0x2bc44cu: goto label_2bc44c;
        case 0x2bc450u: goto label_2bc450;
        case 0x2bc454u: goto label_2bc454;
        case 0x2bc458u: goto label_2bc458;
        case 0x2bc45cu: goto label_2bc45c;
        case 0x2bc460u: goto label_2bc460;
        case 0x2bc464u: goto label_2bc464;
        case 0x2bc468u: goto label_2bc468;
        case 0x2bc46cu: goto label_2bc46c;
        case 0x2bc470u: goto label_2bc470;
        case 0x2bc474u: goto label_2bc474;
        case 0x2bc478u: goto label_2bc478;
        case 0x2bc47cu: goto label_2bc47c;
        case 0x2bc480u: goto label_2bc480;
        case 0x2bc484u: goto label_2bc484;
        case 0x2bc488u: goto label_2bc488;
        case 0x2bc48cu: goto label_2bc48c;
        case 0x2bc490u: goto label_2bc490;
        case 0x2bc494u: goto label_2bc494;
        case 0x2bc498u: goto label_2bc498;
        case 0x2bc49cu: goto label_2bc49c;
        case 0x2bc4a0u: goto label_2bc4a0;
        case 0x2bc4a4u: goto label_2bc4a4;
        case 0x2bc4a8u: goto label_2bc4a8;
        case 0x2bc4acu: goto label_2bc4ac;
        case 0x2bc4b0u: goto label_2bc4b0;
        case 0x2bc4b4u: goto label_2bc4b4;
        case 0x2bc4b8u: goto label_2bc4b8;
        case 0x2bc4bcu: goto label_2bc4bc;
        case 0x2bc4c0u: goto label_2bc4c0;
        case 0x2bc4c4u: goto label_2bc4c4;
        case 0x2bc4c8u: goto label_2bc4c8;
        case 0x2bc4ccu: goto label_2bc4cc;
        case 0x2bc4d0u: goto label_2bc4d0;
        case 0x2bc4d4u: goto label_2bc4d4;
        case 0x2bc4d8u: goto label_2bc4d8;
        case 0x2bc4dcu: goto label_2bc4dc;
        case 0x2bc4e0u: goto label_2bc4e0;
        case 0x2bc4e4u: goto label_2bc4e4;
        case 0x2bc4e8u: goto label_2bc4e8;
        case 0x2bc4ecu: goto label_2bc4ec;
        case 0x2bc4f0u: goto label_2bc4f0;
        case 0x2bc4f4u: goto label_2bc4f4;
        case 0x2bc4f8u: goto label_2bc4f8;
        case 0x2bc4fcu: goto label_2bc4fc;
        case 0x2bc500u: goto label_2bc500;
        case 0x2bc504u: goto label_2bc504;
        case 0x2bc508u: goto label_2bc508;
        case 0x2bc50cu: goto label_2bc50c;
        case 0x2bc510u: goto label_2bc510;
        case 0x2bc514u: goto label_2bc514;
        case 0x2bc518u: goto label_2bc518;
        case 0x2bc51cu: goto label_2bc51c;
        case 0x2bc520u: goto label_2bc520;
        case 0x2bc524u: goto label_2bc524;
        case 0x2bc528u: goto label_2bc528;
        case 0x2bc52cu: goto label_2bc52c;
        case 0x2bc530u: goto label_2bc530;
        case 0x2bc534u: goto label_2bc534;
        case 0x2bc538u: goto label_2bc538;
        case 0x2bc53cu: goto label_2bc53c;
        case 0x2bc540u: goto label_2bc540;
        case 0x2bc544u: goto label_2bc544;
        case 0x2bc548u: goto label_2bc548;
        case 0x2bc54cu: goto label_2bc54c;
        case 0x2bc550u: goto label_2bc550;
        case 0x2bc554u: goto label_2bc554;
        default: return;
    }

label_2bbd88:
    // 0x2bbd88: 0x400007fc  .word       0x400007FC                   # mfc0        $zero, Index # 000007FC <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bbd88u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bbd8c:
    // 0x2bbd8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbd8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbd90:
    // 0x2bbd90: 0x81fad33d  lb          $k0, -0x2CC3($t7)
    ctx->pc = 0x2bbd90u;
    SET_GPR_S32(ctx, 26, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955837)));
label_2bbd94:
    // 0x2bbd94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbd94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbd98:
    // 0x2bbd98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbd98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbd9c:
    // 0x2bbd9c: 0x1d9d6e8  .word       0x01D9D6E8                   # mfsa        $k0 # 01D906C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bbd9cu;
    SET_GPR_U32(ctx, 26, ctx->sa);
label_2bbda0:
    // 0x2bbda0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbda0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbda4:
    // 0x2bbda4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbda4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbda8:
    // 0x2bbda8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbda8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbdac:
    // 0x2bbdac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbdacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbdb0:
    // 0x2bbdb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbdb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbdb4:
    // 0x2bbdb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbdb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbdb8:
    // 0x2bbdb8: 0x801bcbbc  lb          $k1, -0x3444($zero)
    ctx->pc = 0x2bbdb8u;
    SET_GPR_S32(ctx, 27, (int8_t)runtime->Load8(rdram, ctx, 0xFFFFCBBCu));
label_2bbdbc:
    // 0x2bbdbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbdbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbdc0:
    // 0x2bbdc0: 0x800003bf  lb          $zero, 0x3BF($zero)
    ctx->pc = 0x2bbdc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x3BFu));
label_2bbdc4:
    // 0x2bbdc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbdc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbdc8:
    // 0x2bbdc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbdc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbdcc:
    // 0x2bbdcc: 0x800720  .word       0x00800720                   # add         $zero, $a0, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbdccu;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2bbdd0:
    // 0x2bbdd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbdd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbdd4:
    // 0x2bbdd4: 0x1f1ae6c  .word       0x01F1AE6C                   # dadd        $s5, $t7, $s1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbdd4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 17); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
label_2bbdd8:
    // 0x2bbdd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbdd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbddc:
    // 0x2bbddc: 0x1f2b6ac  .word       0x01F2B6AC                   # dadd        $s6, $t7, $s2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbddcu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, r); }
label_2bbde0:
    // 0x2bbde0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbde0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbde4:
    // 0x2bbde4: 0x1f3beec  .word       0x01F3BEEC                   # dadd        $s7, $t7, $s3 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbde4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 19); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, r); }
label_2bbde8:
    // 0x2bbde8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbde8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbdec:
    // 0x2bbdec: 0x1f42f6c  .word       0x01F42F6C                   # dadd        $a1, $t7, $s4 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbdecu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 20); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_2bbdf0:
    // 0x2bbdf0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbdf0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbdf4:
    // 0x2bbdf4: 0x1fcce59  .word       0x01FCCE59                   # multu       $t7, $gp # 0000CE40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbdf4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_2bbdf8:
    // 0x2bbdf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbdf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbdfc:
    // 0x2bbdfc: 0x1fcd699  .word       0x01FCD699                   # multu       $t7, $gp # 0000D680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbdfcu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_2bbe00:
    // 0x2bbe00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbe00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbe04:
    // 0x2bbe04: 0x1fcded9  .word       0x01FCDED9                   # multu       $t7, $gp # 0000DEC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbe04u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_2bbe08:
    // 0x2bbe08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbe08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbe0c:
    // 0x2bbe0c: 0x1fcef59  .word       0x01FCEF59                   # multu       $t7, $gp # 0000EF40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbe0cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_2bbe10:
    // 0x2bbe10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbe10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbe14:
    // 0x2bbe14: 0x1f1ce68  .word       0x01F1CE68                   # mfsa        $t9 # 01F10640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bbe14u;
    SET_GPR_U32(ctx, 25, ctx->sa);
label_2bbe18:
    // 0x2bbe18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbe18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbe1c:
    // 0x2bbe1c: 0x1f2d6a8  .word       0x01F2D6A8                   # mfsa        $k0 # 01F20680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bbe1cu;
    SET_GPR_U32(ctx, 26, ctx->sa);
label_2bbe20:
    // 0x2bbe20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbe20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbe24:
    // 0x2bbe24: 0x1f3dee8  .word       0x01F3DEE8                   # mfsa        $k1 # 01F306C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bbe24u;
    SET_GPR_U32(ctx, 27, ctx->sa);
label_2bbe28:
    // 0x2bbe28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbe28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbe2c:
    // 0x2bbe2c: 0x1f4ef68  .word       0x01F4EF68                   # mfsa        $sp # 01F40740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bbe2cu;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_2bbe30:
    // 0x2bbe30: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2bbe30u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BBE30 raw=0x48000800");
 /* MITIGATED */
label_2bbe34:
    // 0x2bbe34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbe34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbe38:
    // 0x2bbe38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbe38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbe3c:
    // 0x2bbe3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbe3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbe40:
    // 0x2bbe40: 0x1f54000  .word       0x01F54000                   # sll         $t0, $s5, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbe40u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 0));
label_2bbe44:
    // 0x2bbe44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbe44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbe48:
    // 0x2bbe48: 0x1f1000a  movz        $zero, $t7, $s1
    ctx->pc = 0x2bbe48u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 15));
label_2bbe4c:
    // 0x2bbe4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbe4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbe50:
    // 0x2bbe50: 0x1f2000b  movn        $zero, $t7, $s2
    ctx->pc = 0x2bbe50u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 15));
label_2bbe54:
    // 0x2bbe54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbe54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbe58:
    // 0x2bbe58: 0x1f3000c  .word       0x01F3000C                   # syscall     0 # 01F30000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbe58u;
    ctx->pc = 0x2BBE5Cu;
runtime->handleSyscall(rdram, ctx, 0x7CC00u);
label_2bbe5c:
    // 0x2bbe5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbe5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbe60:
    // 0x2bbe60: 0x1f4000d  break       500
    ctx->pc = 0x2bbe60u;
    runtime->handleBreak(rdram, ctx);
label_2bbe64:
    // 0x2bbe64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbe64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbe68:
    // 0x2bbe68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbe68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbe6c:
    // 0x2bbe6c: 0x1f589bc  .word       0x01F589BC                   # dsll32      $s1, $s5, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbe6cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) << (32 + 6));
label_2bbe70:
    // 0x2bbe70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbe70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbe74:
    // 0x2bbe74: 0x1f590bd  .word       0x01F590BD                   # INVALID     $t7, $s5, -0x6F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbe74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BBE74 raw=0x01F590BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bbe78:
    // 0x2bbe78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbe78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbe7c:
    // 0x2bbe7c: 0x1f598be  .word       0x01F598BE                   # dsrl32      $s3, $s5, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbe7cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) >> (32 + 2));
label_2bbe80:
    // 0x2bbe80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbe80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbe84:
    // 0x2bbe84: 0x1f5a64b  .word       0x01F5A64B                   # movn        $s4, $t7, $s5 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbe84u;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 15));
label_2bbe88:
    // 0x2bbe88: 0x10072801  beq         $zero, $a3, . + 4 + (0x2801 << 2)
label_2bbe8c:
    if (ctx->pc == 0x2BBE8Cu) {
        ctx->pc = 0x2BBE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBE88u;
        // 0x2bbe8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBE90u;
        goto label_2bbe90;
    }
    ctx->pc = 0x2BBE88u;
    {
        const bool branch_taken_0x2bbe88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BBE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBE88u;
        // 0x2bbe8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbe88) {
            ctx->pc = 0x2C5E90u;
            return;
        }
    }
    ctx->pc = 0x2BBE90u;
label_2bbe90:
    // 0x2bbe90: 0x10093001  beq         $zero, $t1, . + 4 + (0x3001 << 2)
label_2bbe94:
    if (ctx->pc == 0x2BBE94u) {
        ctx->pc = 0x2BBE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBE90u;
        // 0x2bbe94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBE98u;
        goto label_2bbe98;
    }
    ctx->pc = 0x2BBE90u;
    {
        const bool branch_taken_0x2bbe90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BBE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBE90u;
        // 0x2bbe94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbe90) {
            ctx->pc = 0x2C7E98u;
            return;
        }
    }
    ctx->pc = 0x2BBE98u;
label_2bbe98:
    // 0x2bbe98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbe98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbe9c:
    // 0x2bbe9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbe9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbea0:
    // 0x2bbea0: 0x81f903bc  lb          $t9, 0x3BC($t7)
    ctx->pc = 0x2bbea0u;
    SET_GPR_S32(ctx, 25, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2bbea4:
    // 0x2bbea4: 0x400583  .word       0x00400583                   # sra         $zero, $zero, 22 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbea4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 22));
label_2bbea8:
    // 0x2bbea8: 0x1964002  .word       0x01964002                   # srl         $t0, $s6, 0 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbea8u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 22), 0));
label_2bbeac:
    // 0x2bbeac: 0x400183  .word       0x00400183                   # sra         $zero, $zero, 6 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbeacu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 6));
label_2bbeb0:
    // 0x2bbeb0: 0x1864003  .word       0x01864003                   # sra         $t0, $a2, 0 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbeb0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 6), 0));
label_2bbeb4:
    // 0x2bbeb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbeb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbeb8:
    // 0x2bbeb8: 0x1fb4001  .word       0x01FB4001                   # INVALID     $t7, $k1, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbeb8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BBEB8 raw=0x01FB4001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bbebc:
    // 0x2bbebc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbebcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbec0:
    // 0x2bbec0: 0x1f54004  sllv        $t0, $s5, $t7
    ctx->pc = 0x2bbec0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 15) & 0x1F));
label_2bbec4:
    // 0x2bbec4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbec4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbec8:
    // 0x2bbec8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbec8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbecc:
    // 0x2bbecc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbeccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbed0:
    // 0x2bbed0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbed0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbed4:
    // 0x2bbed4: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbed4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2bbed8:
    // 0x2bbed8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbed8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbedc:
    // 0x2bbedc: 0x20f6a1  .word       0x0020F6A1                   # addu        $fp, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbedcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2bbee0:
    // 0x2bbee0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbee0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbee4:
    // 0x2bbee4: 0x1e0ce1c  .word       0x01E0CE1C                   # dmult       $t7, $zero # 0000CE00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbee4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2BBEE4 raw=0x01E0CE1C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bbee8:
    // 0x2bbee8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbee8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbeec:
    // 0x2bbeec: 0x1c0b59c  .word       0x01C0B59C                   # dmult       $t6, $zero # 0000B580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbeecu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2BBEEC raw=0x01C0B59C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bbef0:
    // 0x2bbef0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbef0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbef4:
    // 0x2bbef4: 0x1c0319c  .word       0x01C0319C                   # dmult       $t6, $zero # 00003180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbef4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2BBEF4 raw=0x01C0319C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bbef8:
    // 0x2bbef8: 0x10073803  beq         $zero, $a3, . + 4 + (0x3803 << 2)
label_2bbefc:
    if (ctx->pc == 0x2BBEFCu) {
        ctx->pc = 0x2BBEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBEF8u;
        // 0x2bbefc: 0x1fbd97c  .word       0x01FBD97C                   # dsll32      $k1, $k1, 5 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 27, GPR_U64(ctx, 27) << (32 + 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBF00u;
        goto label_2bbf00;
    }
    ctx->pc = 0x2BBEF8u;
    {
        const bool branch_taken_0x2bbef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BBEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBEF8u;
        // 0x2bbefc: 0x1fbd97c  .word       0x01FBD97C                   # dsll32      $k1, $k1, 5 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 27, GPR_U64(ctx, 27) << (32 + 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbef8) {
            ctx->pc = 0x2C9F08u;
            return;
        }
    }
    ctx->pc = 0x2BBF00u;
label_2bbf00:
    // 0x2bbf00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbf00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbf04:
    // 0x2bbf04: 0x20d69f  .word       0x0020D69F                   # ddivu       $k0, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbf04u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2BBF04 raw=0x0020D69F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bbf08:
    // 0x2bbf08: 0x3e7b7fd  .word       0x03E7B7FD                   # INVALID     $ra, $a3, -0x4803 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbf08u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BBF08 raw=0x03E7B7FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bbf0c:
    // 0x2bbf0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbf0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbf10:
    // 0x2bbf10: 0x3e93000  .word       0x03E93000                   # sll         $a2, $t1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbf10u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 0));
label_2bbf14:
    // 0x2bbf14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbf14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbf18:
    // 0x2bbf18: 0x2275ffe  .word       0x02275FFE                   # dsrl32      $t3, $a3, 31 # 02200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbf18u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) >> (32 + 31));
label_2bbf1c:
    // 0x2bbf1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbf1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbf20:
    // 0x2bbf20: 0x3c7dffe  .word       0x03C7DFFE                   # dsrl32      $k1, $a3, 31 # 03C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbf20u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 7) >> (32 + 31));
label_2bbf24:
    // 0x2bbf24: 0x20d610  .word       0x0020D610                   # mfhi        $k0 # 00200600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbf24u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2bbf28:
    // 0x2bbf28: 0x3e9d801  .word       0x03E9D801                   # INVALID     $ra, $t1, -0x27FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbf28u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BBF28 raw=0x03E9D801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bbf2c:
    // 0x2bbf2c: 0x1f589bc  .word       0x01F589BC                   # dsll32      $s1, $s5, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbf2cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) << (32 + 6));
label_2bbf30:
    // 0x2bbf30: 0x10094803  beq         $zero, $t1, . + 4 + (0x4803 << 2)
label_2bbf34:
    if (ctx->pc == 0x2BBF34u) {
        ctx->pc = 0x2BBF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF30u;
        // 0x2bbf34: 0x1f590bd  .word       0x01F590BD                   # INVALID     $t7, $s5, -0x6F43 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BBF34 raw=0x01F590BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBF38u;
        goto label_2bbf38;
    }
    ctx->pc = 0x2BBF30u;
    {
        const bool branch_taken_0x2bbf30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BBF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF30u;
        // 0x2bbf34: 0x1f590bd  .word       0x01F590BD                   # INVALID     $t7, $s5, -0x6F43 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BBF34 raw=0x01F590BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbf30) {
            ctx->pc = 0x2CDF40u;
            return;
        }
    }
    ctx->pc = 0x2BBF38u;
label_2bbf38:
    // 0x2bbf38: 0x10084004  beq         $zero, $t0, . + 4 + (0x4004 << 2)
label_2bbf3c:
    if (ctx->pc == 0x2BBF3Cu) {
        ctx->pc = 0x2BBF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF38u;
        // 0x2bbf3c: 0x1f598be  .word       0x01F598BE                   # dsrl32      $s3, $s5, 2 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) >> (32 + 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBF40u;
        goto label_2bbf40;
    }
    ctx->pc = 0x2BBF38u;
    {
        const bool branch_taken_0x2bbf38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BBF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF38u;
        // 0x2bbf3c: 0x1f598be  .word       0x01F598BE                   # dsrl32      $s3, $s5, 2 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) >> (32 + 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbf38) {
            ctx->pc = 0x2CBF4Cu;
            return;
        }
    }
    ctx->pc = 0x2BBF40u;
label_2bbf40:
    // 0x2bbf40: 0x800a57f2  lb          $t2, 0x57F2($zero)
    ctx->pc = 0x2bbf40u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x57F2u));
label_2bbf44:
    // 0x2bbf44: 0x1fac17d  .word       0x01FAC17D                   # INVALID     $t7, $k0, -0x3E83 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbf44u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BBF44 raw=0x01FAC17D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bbf48:
    // 0x2bbf48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbf48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbf4c:
    // 0x2bbf4c: 0x1f5a64b  .word       0x01F5A64B                   # movn        $s4, $t7, $s5 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbf4cu;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 15));
label_2bbf50:
    // 0x2bbf50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbf50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbf54:
    // 0x2bbf54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbf54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbf58:
    // 0x2bbf58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbf58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbf5c:
    // 0x2bbf5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbf5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbf60:
    // 0x2bbf60: 0x3e7d7ff  .word       0x03E7D7FF                   # dsra32      $k0, $a3, 31 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbf60u;
    SET_GPR_S64(ctx, 26, GPR_S64(ctx, 7) >> (32 + 31));
label_2bbf64:
    // 0x2bbf64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbf64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbf68:
    // 0x2bbf68: 0x520a07e6  beql        $s0, $t2, . + 4 + (0x7E6 << 2)
label_2bbf6c:
    if (ctx->pc == 0x2BBF6Cu) {
        ctx->pc = 0x2BBF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF68u;
        // 0x2bbf6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBF70u;
        goto label_2bbf70;
    }
    ctx->pc = 0x2BBF68u;
    {
        const bool branch_taken_0x2bbf68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2bbf68) {
            ctx->pc = 0x2BBF6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BBF68u;
            // 0x2bbf6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDF04u;
            { ctx->pc = 0x2bdf04; return; }
        }
    }
    ctx->pc = 0x2BBF70u;
label_2bbf70:
    // 0x2bbf70: 0x3e9d7ff  .word       0x03E9D7FF                   # dsra32      $k0, $t1, 31 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbf70u;
    SET_GPR_S64(ctx, 26, GPR_S64(ctx, 9) >> (32 + 31));
label_2bbf74:
    // 0x2bbf74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbf74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbf78:
    // 0x2bbf78: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2bbf78u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BBF78 raw=0x48000800");
 /* MITIGATED */
label_2bbf7c:
    // 0x2bbf7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbf7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbf80:
    // 0x2bbf80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbf80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbf84:
    // 0x2bbf84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbf84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbf88:
    // 0x2bbf88: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2bbf88u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2bbf8c:
    // 0x2bbf8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbf8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbf90:
    // 0x2bbf90: 0x1001100b  beq         $zero, $at, . + 4 + (0x100B << 2)
label_2bbf94:
    if (ctx->pc == 0x2BBF94u) {
        ctx->pc = 0x2BBF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF90u;
        // 0x2bbf94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBF98u;
        goto label_2bbf98;
    }
    ctx->pc = 0x2BBF90u;
    {
        const bool branch_taken_0x2bbf90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BBF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF90u;
        // 0x2bbf94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbf90) {
            ctx->pc = 0x2BFFC0u;
            return;
        }
    }
    ctx->pc = 0x2BBF98u;
label_2bbf98:
    // 0x2bbf98: 0x10030066  beq         $zero, $v1, . + 4 + (0x66 << 2)
label_2bbf9c:
    if (ctx->pc == 0x2BBF9Cu) {
        ctx->pc = 0x2BBF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF98u;
        // 0x2bbf9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBFA0u;
        goto label_2bbfa0;
    }
    ctx->pc = 0x2BBF98u;
    {
        const bool branch_taken_0x2bbf98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BBF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF98u;
        // 0x2bbf9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbf98) {
            ctx->pc = 0x2BC134u;
            goto label_2bc134;
        }
    }
    ctx->pc = 0x2BBFA0u;
label_2bbfa0:
    // 0x2bbfa0: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbfa0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BBFA0 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bbfa4:
    // 0x2bbfa4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbfa4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbfa8:
    // 0x2bbfa8: 0x1002104b  beq         $zero, $v0, . + 4 + (0x104B << 2)
label_2bbfac:
    if (ctx->pc == 0x2BBFACu) {
        ctx->pc = 0x2BBFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFA8u;
        // 0x2bbfac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBFB0u;
        goto label_2bbfb0;
    }
    ctx->pc = 0x2BBFA8u;
    {
        const bool branch_taken_0x2bbfa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BBFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFA8u;
        // 0x2bbfac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbfa8) {
            ctx->pc = 0x2C00D8u;
            return;
        }
    }
    ctx->pc = 0x2BBFB0u;
label_2bbfb0:
    // 0x2bbfb0: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2bbfb4:
    if (ctx->pc == 0x2BBFB4u) {
        ctx->pc = 0x2BBFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFB0u;
        // 0x2bbfb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBFB8u;
        goto label_2bbfb8;
    }
    ctx->pc = 0x2BBFB0u;
    {
        const bool branch_taken_0x2bbfb0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BBFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFB0u;
        // 0x2bbfb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbfb0) {
            ctx->pc = 0x2BDFB0u;
            { ctx->pc = 0x2bdfb0; return; }
        }
    }
    ctx->pc = 0x2BBFB8u;
label_2bbfb8:
    // 0x2bbfb8: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2bbfbc:
    if (ctx->pc == 0x2BBFBCu) {
        ctx->pc = 0x2BBFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFB8u;
        // 0x2bbfbc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBFC0u;
        goto label_2bbfc0;
    }
    ctx->pc = 0x2BBFB8u;
    {
        const bool branch_taken_0x2bbfb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BBFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFB8u;
        // 0x2bbfbc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbfb8) {
            ctx->pc = 0x2D1FC0u;
            return;
        }
    }
    ctx->pc = 0x2BBFC0u;
label_2bbfc0:
    // 0x2bbfc0: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbfc0u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2bbfc4:
    // 0x2bbfc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbfc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbfc8:
    // 0x2bbfc8: 0x3e2d001  .word       0x03E2D001                   # INVALID     $ra, $v0, -0x2FFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbfc8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BBFC8 raw=0x03E2D001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bbfcc:
    // 0x2bbfcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbfccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbfd0:
    // 0x2bbfd0: 0xb0b1000  j           func_C2C4000
label_2bbfd4:
    if (ctx->pc == 0x2BBFD4u) {
        ctx->pc = 0x2BBFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFD0u;
        // 0x2bbfd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBFD8u;
        goto label_2bbfd8;
    }
    ctx->pc = 0x2BBFD0u;
    ctx->pc = 0x2BBFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBFD0u;
    // 0x2bbfd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2BBFD0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BBFD8u;
label_2bbfd8:
    // 0x2bbfd8: 0xa800fff  j           func_A003FFC
label_2bbfdc:
    if (ctx->pc == 0x2BBFDCu) {
        ctx->pc = 0x2BBFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFD8u;
        // 0x2bbfdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBFE0u;
        goto label_2bbfe0;
    }
    ctx->pc = 0x2BBFD8u;
    ctx->pc = 0x2BBFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBFD8u;
    // 0x2bbfdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA003FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA003FFCu, 0x2BBFD8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BBFE0u;
label_2bbfe0:
    // 0x2bbfe0: 0xb030fff  j           func_C0C3FFC
label_2bbfe4:
    if (ctx->pc == 0x2BBFE4u) {
        ctx->pc = 0x2BBFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFE0u;
        // 0x2bbfe4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBFE8u;
        goto label_2bbfe8;
    }
    ctx->pc = 0x2BBFE0u;
    ctx->pc = 0x2BBFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBFE0u;
    // 0x2bbfe4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC0C3FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC0C3FFCu, 0x2BBFE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BBFE8u;
label_2bbfe8:
    // 0x2bbfe8: 0x100f7012  beq         $zero, $t7, . + 4 + (0x7012 << 2)
label_2bbfec:
    if (ctx->pc == 0x2BBFECu) {
        ctx->pc = 0x2BBFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFE8u;
        // 0x2bbfec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBFF0u;
        goto label_2bbff0;
    }
    ctx->pc = 0x2BBFE8u;
    {
        const bool branch_taken_0x2bbfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 15));
        ctx->pc = 0x2BBFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFE8u;
        // 0x2bbfec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbfe8) {
            ctx->pc = 0x2D8034u;
            return;
        }
    }
    ctx->pc = 0x2BBFF0u;
label_2bbff0:
    // 0x2bbff0: 0x1f67ff6  tne         $t7, $s6, 511
    ctx->pc = 0x2bbff0u;
    if (GPR_U64(ctx, 15) != GPR_U64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_2bbff4:
    // 0x2bbff4: 0x1e0ffd8  .word       0x01E0FFD8                   # mult        $ra, $t7, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bbff4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2bbff8:
    // 0x2bbff8: 0x1f77ffa  .word       0x01F77FFA                   # dsrl        $t7, $s7, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbff8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 23) >> 31);
label_2bbffc:
    // 0x2bbffc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbffcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc000:
    // 0x2bc000: 0x1f87ffe  .word       0x01F87FFE                   # dsrl32      $t7, $t8, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc000u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) >> (32 + 31));
label_2bc004:
    // 0x2bc004: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc004u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc008:
    // 0x2bc008: 0x1f57ff5  .word       0x01F57FF5                   # INVALID     $t7, $s5, 0x7FF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc008u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2BC008 raw=0x01F57FF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc00c:
    // 0x2bc00c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc00cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc010:
    // 0x2bc010: 0x1f37ff9  .word       0x01F37FF9                   # INVALID     $t7, $s3, 0x7FF9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc010u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2BC010 raw=0x01F37FF9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc014:
    // 0x2bc014: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc014u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc018:
    // 0x2bc018: 0x1f47ffd  .word       0x01F47FFD                   # INVALID     $t7, $s4, 0x7FFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc018u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BC018 raw=0x01F47FFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc01c:
    // 0x2bc01c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc01cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc020:
    // 0x2bc020: 0x1f07ff4  teq         $t7, $s0, 511
    ctx->pc = 0x2bc020u;
    if (GPR_U64(ctx, 15) == GPR_U64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
label_2bc024:
    // 0x2bc024: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc024u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc028:
    // 0x2bc028: 0x1f17ff8  .word       0x01F17FF8                   # dsll        $t7, $s1, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc028u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) << 31);
label_2bc02c:
    // 0x2bc02c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc02cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc030:
    // 0x2bc030: 0x1f27ffc  .word       0x01F27FFC                   # dsll32      $t7, $s2, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc030u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 18) << (32 + 31));
label_2bc034:
    // 0x2bc034: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc034u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc038:
    // 0x2bc038: 0x1f97ff7  .word       0x01F97FF7                   # INVALID     $t7, $t9, 0x7FF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc038u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2BC038 raw=0x01F97FF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc03c:
    // 0x2bc03c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc03cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc040:
    // 0x2bc040: 0x1fa7ffb  .word       0x01FA7FFB                   # dsra        $t7, $k0, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc040u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 26) >> 31);
label_2bc044:
    // 0x2bc044: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc044u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc048:
    // 0x2bc048: 0x1fb7fff  .word       0x01FB7FFF                   # dsra32      $t7, $k1, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc048u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 27) >> (32 + 31));
label_2bc04c:
    // 0x2bc04c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc04cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc050:
    // 0x2bc050: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2bc050u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2bc054:
    // 0x2bc054: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc054u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc058:
    // 0x2bc058: 0x1008100b  beq         $zero, $t0, . + 4 + (0x100B << 2)
label_2bc05c:
    if (ctx->pc == 0x2BC05Cu) {
        ctx->pc = 0x2BC05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC058u;
        // 0x2bc05c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC060u;
        goto label_2bc060;
    }
    ctx->pc = 0x2BC058u;
    {
        const bool branch_taken_0x2bc058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BC05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC058u;
        // 0x2bc05c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc058) {
            ctx->pc = 0x2C0088u;
            return;
        }
    }
    ctx->pc = 0x2BC060u;
label_2bc060:
    // 0x2bc060: 0x1009102b  beq         $zero, $t1, . + 4 + (0x102B << 2)
label_2bc064:
    if (ctx->pc == 0x2BC064u) {
        ctx->pc = 0x2BC064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC060u;
        // 0x2bc064: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC068u;
        goto label_2bc068;
    }
    ctx->pc = 0x2BC060u;
    {
        const bool branch_taken_0x2bc060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BC064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC060u;
        // 0x2bc064: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc060) {
            ctx->pc = 0x2C0110u;
            return;
        }
    }
    ctx->pc = 0x2BC068u;
label_2bc068:
    // 0x2bc068: 0x3e8a801  .word       0x03E8A801                   # INVALID     $ra, $t0, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc068u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BC068 raw=0x03E8A801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc06c:
    // 0x2bc06c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc06cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc070:
    // 0x2bc070: 0x3e89805  .word       0x03E89805                   # INVALID     $ra, $t0, -0x67FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc070u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BC070 raw=0x03E89805"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc074:
    // 0x2bc074: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc074u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc078:
    // 0x2bc078: 0x3e8a009  .word       0x03E8A009                   # jalr        $s4, $ra # 00080000 <InstrIdType: CPU_SPECIAL>
label_2bc07c:
    if (ctx->pc == 0x2BC07Cu) {
        ctx->pc = 0x2BC07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC078u;
        // 0x2bc07c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC080u;
        goto label_2bc080;
    }
    ctx->pc = 0x2BC078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 20, 0x2BC080u);
        ctx->pc = 0x2BC07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC078u;
        // 0x2bc07c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC078u, 0x2BC080u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BC080u;
label_2bc080:
    // 0x2bc080: 0x3e8a80d  break       1000, 672
    ctx->pc = 0x2bc080u;
    runtime->handleBreak(rdram, ctx);
label_2bc084:
    // 0x2bc084: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc084u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc088:
    // 0x2bc088: 0x3e8b002  .word       0x03E8B002                   # srl         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc088u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_2bc08c:
    // 0x2bc08c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc08cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc090:
    // 0x2bc090: 0x3e8b806  srlv        $s7, $t0, $ra
    ctx->pc = 0x2bc090u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2bc094:
    // 0x2bc094: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc094u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc098:
    // 0x2bc098: 0x3e8c00a  movz        $t8, $ra, $t0
    ctx->pc = 0x2bc098u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 31));
label_2bc09c:
    // 0x2bc09c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc09cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc0a0:
    // 0x2bc0a0: 0x3e8b00e  .word       0x03E8B00E                   # INVALID     $ra, $t0, -0x4FF2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc0a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2BC0A0 raw=0x03E8B00E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc0a4:
    // 0x2bc0a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc0a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc0a8:
    // 0x2bc0a8: 0x3e8c803  .word       0x03E8C803                   # sra         $t9, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc0a8u;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 8), 0));
label_2bc0ac:
    // 0x2bc0ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc0acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc0b0:
    // 0x2bc0b0: 0x3e8d007  srav        $k0, $t0, $ra
    ctx->pc = 0x2bc0b0u;
    SET_GPR_S32(ctx, 26, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2bc0b4:
    // 0x2bc0b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc0b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc0b8:
    // 0x2bc0b8: 0x3e8d80b  movn        $k1, $ra, $t0
    ctx->pc = 0x2bc0b8u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 27, GPR_VEC(ctx, 31));
label_2bc0bc:
    // 0x2bc0bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc0bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc0c0:
    // 0x2bc0c0: 0x3e8c80f  .word       0x03E8C80F                   # sync # 03E8C800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc0c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2bc0c4:
    // 0x2bc0c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc0c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc0c8:
    // 0x2bc0c8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2bc0c8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2bc0cc:
    // 0x2bc0cc: 0x81f182bc  lb          $s1, -0x7D44($t7)
    ctx->pc = 0x2bc0ccu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935228)));
label_2bc0d0:
    // 0x2bc0d0: 0x3eaaaaaa  .word       0x3EAAAAAA                   # lui         $t2, 0xAAAA # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2bc0d0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43690 << 16));
label_2bc0d4:
    // 0x2bc0d4: 0x81e09723  lb          $zero, -0x68DD($t7)
    ctx->pc = 0x2bc0d4u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294940451)));
label_2bc0d8:
    // 0x2bc0d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc0d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc0dc:
    // 0x2bc0dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc0dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc0e0:
    // 0x2bc0e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc0e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc0e4:
    // 0x2bc0e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc0e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc0e8:
    // 0x2bc0e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc0e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc0ec:
    // 0x2bc0ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc0ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc0f0:
    // 0x2bc0f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc0f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc0f4:
    // 0x2bc0f4: 0x1e0e71e  .word       0x01E0E71E                   # ddiv        $gp, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc0f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2BC0F4 raw=0x01E0E71E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc0f8:
    // 0x2bc0f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc0f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc0fc:
    // 0x2bc0fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc0fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc100:
    // 0x2bc100: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc100u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc104:
    // 0x2bc104: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc104u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc108:
    // 0x2bc108: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc108u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc10c:
    // 0x2bc10c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc10cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc110:
    // 0x2bc110: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc110u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc114:
    // 0x2bc114: 0x1fc866c  .word       0x01FC866C                   # dadd        $s0, $t7, $gp # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc114u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_2bc118:
    // 0x2bc118: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc118u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc11c:
    // 0x2bc11c: 0x1fc8eac  .word       0x01FC8EAC                   # dadd        $s1, $t7, $gp # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc11cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_2bc120:
    // 0x2bc120: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc120u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc124:
    // 0x2bc124: 0x1fc96ec  .word       0x01FC96EC                   # dadd        $s2, $t7, $gp # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc124u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_2bc128:
    // 0x2bc128: 0x3f808312  .word       0x3F808312                   # lui         $zero, 0x8312 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2bc128u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)33554 << 16));
label_2bc12c:
    // 0x2bc12c: 0x81e0e1bf  lb          $zero, -0x1E41($t7)
    ctx->pc = 0x2bc12cu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294959551)));
label_2bc130:
    // 0x2bc130: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc130u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc134:
    // 0x2bc134: 0x1e0cda3  .word       0x01E0CDA3                   # subu        $t9, $t7, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc134u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2bc138:
    // 0x2bc138: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc138u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc13c:
    // 0x2bc13c: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc13cu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2bc140:
    // 0x2bc140: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc140u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc144:
    // 0x2bc144: 0x1e0d5e3  .word       0x01E0D5E3                   # subu        $k0, $t7, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc144u;
    SET_GPR_S32(ctx, 26, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2bc148:
    // 0x2bc148: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc148u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc14c:
    // 0x2bc14c: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc14cu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2bc150:
    // 0x2bc150: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc150u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc154:
    // 0x2bc154: 0x1e0de23  .word       0x01E0DE23                   # subu        $k1, $t7, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc154u;
    SET_GPR_S32(ctx, 27, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2bc158:
    // 0x2bc158: 0x437f0000  .word       0x437F0000                   # INVALID     $k1, $ra, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bc158u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2BC158 raw=0x437F0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc15c:
    // 0x2bc15c: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x2bc15cu;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_2bc160:
    // 0x2bc160: 0x3e8b000  .word       0x03E8B000                   # sll         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc160u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
label_2bc164:
    // 0x2bc164: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc164u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc168:
    // 0x2bc168: 0x3e8b804  sllv        $s7, $t0, $ra
    ctx->pc = 0x2bc168u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2bc16c:
    // 0x2bc16c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc16cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc170:
    // 0x2bc170: 0x3e8c008  .word       0x03E8C008                   # jr          $ra # 0008C000 <InstrIdType: CPU_SPECIAL>
label_2bc174:
    if (ctx->pc == 0x2BC174u) {
        ctx->pc = 0x2BC174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC170u;
        // 0x2bc174: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC178u;
        goto label_2bc178;
    }
    ctx->pc = 0x2BC170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC170u;
        // 0x2bc174: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC178u;
label_2bc178:
    // 0x2bc178: 0x3e8b00c  .word       0x03E8B00C                   # syscall     704 # 03E80000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc178u;
    ctx->pc = 0x2BC17Cu;
runtime->handleSyscall(rdram, ctx, 0xFA2C0u);
label_2bc17c:
    // 0x2bc17c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc17cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc180:
    // 0x2bc180: 0x800040f0  lb          $zero, 0x40F0($zero)
    ctx->pc = 0x2bc180u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x40F0u));
label_2bc184:
    // 0x2bc184: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc184u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc188:
    // 0x2bc188: 0x420f0698  .word       0x420F0698                   # eret # 000F0680 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bc188u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_2bc18c:
    // 0x2bc18c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc18cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc190:
    // 0x2bc190: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc190u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc194:
    // 0x2bc194: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc194u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc198:
    // 0x2bc198: 0x500a001f  beql        $zero, $t2, . + 4 + (0x1F << 2)
label_2bc19c:
    if (ctx->pc == 0x2BC19Cu) {
        ctx->pc = 0x2BC19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC198u;
        // 0x2bc19c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC1A0u;
        goto label_2bc1a0;
    }
    ctx->pc = 0x2BC198u;
    {
        const bool branch_taken_0x2bc198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 10));
        if (branch_taken_0x2bc198) {
            ctx->pc = 0x2BC19Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC198u;
            // 0x2bc19c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC218u;
            goto label_2bc218;
        }
    }
    ctx->pc = 0x2BC1A0u;
label_2bc1a0:
    // 0x2bc1a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc1a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc1a4:
    // 0x2bc1a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc1a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc1a8:
    // 0x2bc1a8: 0x12015007  beq         $s0, $at, . + 4 + (0x5007 << 2)
label_2bc1ac:
    if (ctx->pc == 0x2BC1ACu) {
        ctx->pc = 0x2BC1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1A8u;
        // 0x2bc1ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC1B0u;
        goto label_2bc1b0;
    }
    ctx->pc = 0x2BC1A8u;
    {
        const bool branch_taken_0x2bc1a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BC1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1A8u;
        // 0x2bc1ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc1a8) {
            ctx->pc = 0x2D01C8u;
            return;
        }
    }
    ctx->pc = 0x2BC1B0u;
label_2bc1b0:
    // 0x2bc1b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc1b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc1b4:
    // 0x2bc1b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc1b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc1b8:
    // 0x2bc1b8: 0x5a00081f  blezl       $s0, . + 4 + (0x81F << 2)
label_2bc1bc:
    if (ctx->pc == 0x2BC1BCu) {
        ctx->pc = 0x2BC1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1B8u;
        // 0x2bc1bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC1C0u;
        goto label_2bc1c0;
    }
    ctx->pc = 0x2BC1B8u;
    {
        const bool branch_taken_0x2bc1b8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2bc1b8) {
            ctx->pc = 0x2BC1BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC1B8u;
            // 0x2bc1bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE238u;
            { ctx->pc = 0x2be238; return; }
        }
    }
    ctx->pc = 0x2BC1C0u;
label_2bc1c0:
    // 0x2bc1c0: 0x10021840  beq         $zero, $v0, . + 4 + (0x1840 << 2)
label_2bc1c4:
    if (ctx->pc == 0x2BC1C4u) {
        ctx->pc = 0x2BC1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1C0u;
        // 0x2bc1c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC1C8u;
        goto label_2bc1c8;
    }
    ctx->pc = 0x2BC1C0u;
    {
        const bool branch_taken_0x2bc1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BC1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1C0u;
        // 0x2bc1c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc1c0) {
            ctx->pc = 0x2C22C4u;
            return;
        }
    }
    ctx->pc = 0x2BC1C8u;
label_2bc1c8:
    // 0x2bc1c8: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2bc1c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2bc1cc:
    // 0x2bc1cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc1ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc1d0:
    // 0x2bc1d0: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc1d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BC1D0 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc1d4:
    // 0x2bc1d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc1d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc1d8:
    // 0x2bc1d8: 0x10051001  beq         $zero, $a1, . + 4 + (0x1001 << 2)
label_2bc1dc:
    if (ctx->pc == 0x2BC1DCu) {
        ctx->pc = 0x2BC1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1D8u;
        // 0x2bc1dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC1E0u;
        goto label_2bc1e0;
    }
    ctx->pc = 0x2BC1D8u;
    {
        const bool branch_taken_0x2bc1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x2BC1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1D8u;
        // 0x2bc1dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc1d8) {
            ctx->pc = 0x2C01E0u;
            return;
        }
    }
    ctx->pc = 0x2BC1E0u;
label_2bc1e0:
    // 0x2bc1e0: 0x800a5070  lb          $t2, 0x5070($zero)
    ctx->pc = 0x2bc1e0u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x5070u));
label_2bc1e4:
    // 0x2bc1e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc1e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc1e8:
    // 0x2bc1e8: 0x800a0870  lb          $t2, 0x870($zero)
    ctx->pc = 0x2bc1e8u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x870u));
label_2bc1ec:
    // 0x2bc1ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc1ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc1f0:
    // 0x2bc1f0: 0x80012870  lb          $at, 0x2870($zero)
    ctx->pc = 0x2bc1f0u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2870u));
label_2bc1f4:
    // 0x2bc1f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc1f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc1f8:
    // 0x2bc1f8: 0x10060801  beq         $zero, $a2, . + 4 + (0x801 << 2)
label_2bc1fc:
    if (ctx->pc == 0x2BC1FCu) {
        ctx->pc = 0x2BC1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1F8u;
        // 0x2bc1fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC200u;
        goto label_2bc200;
    }
    ctx->pc = 0x2BC1F8u;
    {
        const bool branch_taken_0x2bc1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BC1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1F8u;
        // 0x2bc1fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc1f8) {
            ctx->pc = 0x2BE200u;
            { ctx->pc = 0x2be200; return; }
        }
    }
    ctx->pc = 0x2BC200u;
label_2bc200:
    // 0x2bc200: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2bc204:
    if (ctx->pc == 0x2BC204u) {
        ctx->pc = 0x2BC204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC200u;
        // 0x2bc204: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC208u;
        goto label_2bc208;
    }
    ctx->pc = 0x2BC200u;
    {
        const bool branch_taken_0x2bc200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BC204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC200u;
        // 0x2bc204: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc200) {
            ctx->pc = 0x2C2284u;
            return;
        }
    }
    ctx->pc = 0x2BC208u;
label_2bc208:
    // 0x2bc208: 0x11eb57ff  beq         $t7, $t3, . + 4 + (0x57FF << 2)
label_2bc20c:
    if (ctx->pc == 0x2BC20Cu) {
        ctx->pc = 0x2BC20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC208u;
        // 0x2bc20c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC210u;
        goto label_2bc210;
    }
    ctx->pc = 0x2BC208u;
    {
        const bool branch_taken_0x2bc208 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BC20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC208u;
        // 0x2bc20c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc208) {
            ctx->pc = 0x2D2208u;
            return;
        }
    }
    ctx->pc = 0x2BC210u;
label_2bc210:
    // 0x2bc210: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2bc214:
    if (ctx->pc == 0x2BC214u) {
        ctx->pc = 0x2BC214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC210u;
        // 0x2bc214: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC218u;
        goto label_2bc218;
    }
    ctx->pc = 0x2BC210u;
    {
        const bool branch_taken_0x2bc210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BC214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC210u;
        // 0x2bc214: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc210) {
            ctx->pc = 0x2D2218u;
            return;
        }
    }
    ctx->pc = 0x2BC218u;
label_2bc218:
    // 0x2bc218: 0x3e5d000  .word       0x03E5D000                   # sll         $k0, $a1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc218u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
label_2bc21c:
    // 0x2bc21c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc21cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc220:
    // 0x2bc220: 0x3e6d000  .word       0x03E6D000                   # sll         $k0, $a2, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc220u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 6), 0));
label_2bc224:
    // 0x2bc224: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc224u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc228:
    // 0x2bc228: 0xb0b2800  j           func_C2CA000
label_2bc22c:
    if (ctx->pc == 0x2BC22Cu) {
        ctx->pc = 0x2BC22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC228u;
        // 0x2bc22c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC230u;
        goto label_2bc230;
    }
    ctx->pc = 0x2BC228u;
    ctx->pc = 0x2BC22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC228u;
    // 0x2bc22c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2CA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2CA000u, 0x2BC228u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BC230u;
label_2bc230:
    // 0x2bc230: 0xb0b3000  j           func_C2CC000
label_2bc234:
    if (ctx->pc == 0x2BC234u) {
        ctx->pc = 0x2BC234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC230u;
        // 0x2bc234: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC238u;
        goto label_2bc238;
    }
    ctx->pc = 0x2BC230u;
    ctx->pc = 0x2BC234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC230u;
    // 0x2bc234: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2CC000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2CC000u, 0x2BC230u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BC238u;
label_2bc238:
    // 0x2bc238: 0x42010780  .word       0x42010780                   # INVALID     $s0, $at, 0x780 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bc238u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x2BC238 raw=0x42010780"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc23c:
    // 0x2bc23c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc23cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc240:
    // 0x2bc240: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc240u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc244:
    // 0x2bc244: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc244u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc248:
    // 0x2bc248: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2bc248u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2bc24c:
    // 0x2bc24c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc24cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc250:
    // 0x2bc250: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2bc250u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2bc254:
    // 0x2bc254: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc254u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc258:
    // 0x2bc258: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc258u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc25c:
    // 0x2bc25c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc25cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc260:
    // 0x2bc260: 0xa231000  j           func_88C4000
label_2bc264:
    if (ctx->pc == 0x2BC264u) {
        ctx->pc = 0x2BC264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC260u;
        // 0x2bc264: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC268u;
        goto label_2bc268;
    }
    ctx->pc = 0x2BC260u;
    ctx->pc = 0x2BC264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC260u;
    // 0x2bc264: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x88C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x88C4000u, 0x2BC260u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BC268u;
label_2bc268:
    // 0x2bc268: 0x80002efc  lb          $zero, 0x2EFC($zero)
    ctx->pc = 0x2bc268u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2EFCu));
label_2bc26c:
    // 0x2bc26c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc26cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc270:
    // 0x2bc270: 0x10021005  beq         $zero, $v0, . + 4 + (0x1005 << 2)
label_2bc274:
    if (ctx->pc == 0x2BC274u) {
        ctx->pc = 0x2BC274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC270u;
        // 0x2bc274: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC278u;
        goto label_2bc278;
    }
    ctx->pc = 0x2BC270u;
    {
        const bool branch_taken_0x2bc270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BC274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC270u;
        // 0x2bc274: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc270) {
            ctx->pc = 0x2C0288u;
            return;
        }
    }
    ctx->pc = 0x2BC278u;
label_2bc278:
    // 0x2bc278: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2bc278u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2bc27c:
    // 0x2bc27c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc27cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc280:
    // 0x2bc280: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc280u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc284:
    // 0x2bc284: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc284u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc288:
    // 0x2bc288: 0x800036fc  lb          $zero, 0x36FC($zero)
    ctx->pc = 0x2bc288u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x36FCu));
label_2bc28c:
    // 0x2bc28c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc28cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc290:
    // 0x2bc290: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc290u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc294:
    // 0x2bc294: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc294u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc298:
    // 0x2bc298: 0x120e700c  beq         $s0, $t6, . + 4 + (0x700C << 2)
label_2bc29c:
    if (ctx->pc == 0x2BC29Cu) {
        ctx->pc = 0x2BC29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC298u;
        // 0x2bc29c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC2A0u;
        goto label_2bc2a0;
    }
    ctx->pc = 0x2BC298u;
    {
        const bool branch_taken_0x2bc298 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BC29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC298u;
        // 0x2bc29c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc298) {
            ctx->pc = 0x2D82CCu;
            return;
        }
    }
    ctx->pc = 0x2BC2A0u;
label_2bc2a0:
    // 0x2bc2a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc2a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc2a4:
    // 0x2bc2a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc2a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc2a8:
    // 0x2bc2a8: 0x5a0077a7  blezl       $s0, . + 4 + (0x77A7 << 2)
label_2bc2ac:
    if (ctx->pc == 0x2BC2ACu) {
        ctx->pc = 0x2BC2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC2A8u;
        // 0x2bc2ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC2B0u;
        goto label_2bc2b0;
    }
    ctx->pc = 0x2BC2A8u;
    {
        const bool branch_taken_0x2bc2a8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2bc2a8) {
            ctx->pc = 0x2BC2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC2A8u;
            // 0x2bc2ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA148u;
            return;
        }
    }
    ctx->pc = 0x2BC2B0u;
label_2bc2b0:
    // 0x2bc2b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc2b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc2b4:
    // 0x2bc2b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc2b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc2b8:
    // 0x2bc2b8: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2bc2b8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2bc2bc:
    // 0x2bc2bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc2bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc2c0:
    // 0x2bc2c0: 0x100108ca  beq         $zero, $at, . + 4 + (0x8CA << 2)
label_2bc2c4:
    if (ctx->pc == 0x2BC2C4u) {
        ctx->pc = 0x2BC2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC2C0u;
        // 0x2bc2c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC2C8u;
        goto label_2bc2c8;
    }
    ctx->pc = 0x2BC2C0u;
    {
        const bool branch_taken_0x2bc2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BC2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC2C0u;
        // 0x2bc2c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc2c0) {
            ctx->pc = 0x2BE5ECu;
            { ctx->pc = 0x2be5ec; return; }
        }
    }
    ctx->pc = 0x2BC2C8u;
label_2bc2c8:
    // 0x2bc2c8: 0x80000efc  lb          $zero, 0xEFC($zero)
    ctx->pc = 0x2bc2c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0xEFCu));
label_2bc2cc:
    // 0x2bc2cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc2ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc2d0:
    // 0x2bc2d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc2d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc2d4:
    // 0x2bc2d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc2d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc2d8:
    // 0x2bc2d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc2d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc2dc:
    // 0x2bc2dc: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bc2dcu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bc2e0:
    // 0x2bc2e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc2e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc2e4:
    // 0x2bc2e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc2e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc2e8:
    // 0x2bc2e8: 0x0  nop
    ctx->pc = 0x2bc2e8u;
    // NOP
label_2bc2ec:
    // 0x2bc2ec: 0x0  nop
    ctx->pc = 0x2bc2ecu;
    // NOP
label_2bc2f0:
    // 0x2bc2f0: 0x0  nop
    ctx->pc = 0x2bc2f0u;
    // NOP
label_2bc2f4:
    // 0x2bc2f4: 0x4af10000  vaddx.yzw   $vf0, $vf0, $vf17x
    ctx->pc = 0x2bc2f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
label_2bc2f8:
    // 0x2bc2f8: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2bc2f8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2bc2fc:
    // 0x2bc2fc: 0x3e0298  .word       0x003E0298                   # mult        $zero, $at, $fp # 00000280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bc2fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2bc300:
    // 0x2bc300: 0x848080a  j           func_1202028
label_2bc304:
    if (ctx->pc == 0x2BC304u) {
        ctx->pc = 0x2BC304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC300u;
        // 0x2bc304: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC308u;
        goto label_2bc308;
    }
    ctx->pc = 0x2BC300u;
    ctx->pc = 0x2BC304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC300u;
    // 0x2bc304: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1202028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1202028u, 0x2BC300u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BC308u;
label_2bc308:
    // 0x2bc308: 0x100708ca  beq         $zero, $a3, . + 4 + (0x8CA << 2)
label_2bc30c:
    if (ctx->pc == 0x2BC30Cu) {
        ctx->pc = 0x2BC30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC308u;
        // 0x2bc30c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC310u;
        goto label_2bc310;
    }
    ctx->pc = 0x2BC308u;
    {
        const bool branch_taken_0x2bc308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BC30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC308u;
        // 0x2bc30c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc308) {
            ctx->pc = 0x2BE634u;
            { ctx->pc = 0x2be634; return; }
        }
    }
    ctx->pc = 0x2BC310u;
label_2bc310:
    // 0x2bc310: 0x81f40b7c  lb          $s4, 0xB7C($t7)
    ctx->pc = 0x2bc310u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bc314:
    // 0x2bc314: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc314u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc318:
    // 0x2bc318: 0x81f50b7c  lb          $s5, 0xB7C($t7)
    ctx->pc = 0x2bc318u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bc31c:
    // 0x2bc31c: 0x1ea517c  .word       0x01EA517C                   # dsll32      $t2, $t2, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc31cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 5));
label_2bc320:
    // 0x2bc320: 0x81f60b7c  lb          $s6, 0xB7C($t7)
    ctx->pc = 0x2bc320u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bc324:
    // 0x2bc324: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc324u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc328:
    // 0x2bc328: 0x81f70b7c  lb          $s7, 0xB7C($t7)
    ctx->pc = 0x2bc328u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bc32c:
    // 0x2bc32c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc32cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc330:
    // 0x2bc330: 0x81f80b7c  lb          $t8, 0xB7C($t7)
    ctx->pc = 0x2bc330u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bc334:
    // 0x2bc334: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc334u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc338:
    // 0x2bc338: 0x80083a30  lb          $t0, 0x3A30($zero)
    ctx->pc = 0x2bc338u;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x3A30u));
label_2bc33c:
    // 0x2bc33c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc33cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc340:
    // 0x2bc340: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2bc340u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2bc344:
    // 0x2bc344: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc344u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc348:
    // 0x2bc348: 0x81e7ab7d  lb          $a3, -0x5483($t7)
    ctx->pc = 0x2bc348u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2bc34c:
    // 0x2bc34c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc34cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc350:
    // 0x2bc350: 0x81e7b37d  lb          $a3, -0x4C83($t7)
    ctx->pc = 0x2bc350u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2bc354:
    // 0x2bc354: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc354u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc358:
    // 0x2bc358: 0x81e7bb7d  lb          $a3, -0x4483($t7)
    ctx->pc = 0x2bc358u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2bc35c:
    // 0x2bc35c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc35cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc360:
    // 0x2bc360: 0x81e7c37d  lb          $a3, -0x3C83($t7)
    ctx->pc = 0x2bc360u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2bc364:
    // 0x2bc364: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc364u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc368:
    // 0x2bc368: 0x81f40b7c  lb          $s4, 0xB7C($t7)
    ctx->pc = 0x2bc368u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bc36c:
    // 0x2bc36c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc36cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc370:
    // 0x2bc370: 0x81f50b7c  lb          $s5, 0xB7C($t7)
    ctx->pc = 0x2bc370u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bc374:
    // 0x2bc374: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc374u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc378:
    // 0x2bc378: 0x81f60b7c  lb          $s6, 0xB7C($t7)
    ctx->pc = 0x2bc378u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bc37c:
    // 0x2bc37c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc37cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc380:
    // 0x2bc380: 0x81f70b7c  lb          $s7, 0xB7C($t7)
    ctx->pc = 0x2bc380u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bc384:
    // 0x2bc384: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc384u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc388:
    // 0x2bc388: 0x81f80b7c  lb          $t8, 0xB7C($t7)
    ctx->pc = 0x2bc388u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bc38c:
    // 0x2bc38c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc38cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc390:
    // 0x2bc390: 0x81e8a37d  lb          $t0, -0x5C83($t7)
    ctx->pc = 0x2bc390u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2bc394:
    // 0x2bc394: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc394u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc398:
    // 0x2bc398: 0x81e8ab7d  lb          $t0, -0x5483($t7)
    ctx->pc = 0x2bc398u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2bc39c:
    // 0x2bc39c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc39cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc3a0:
    // 0x2bc3a0: 0x81e8b37d  lb          $t0, -0x4C83($t7)
    ctx->pc = 0x2bc3a0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2bc3a4:
    // 0x2bc3a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc3a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc3a8:
    // 0x2bc3a8: 0x81e8bb7d  lb          $t0, -0x4483($t7)
    ctx->pc = 0x2bc3a8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2bc3ac:
    // 0x2bc3ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc3acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc3b0:
    // 0x2bc3b0: 0x81e8c37d  lb          $t0, -0x3C83($t7)
    ctx->pc = 0x2bc3b0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2bc3b4:
    // 0x2bc3b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc3b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc3b8:
    // 0x2bc3b8: 0x10060801  beq         $zero, $a2, . + 4 + (0x801 << 2)
label_2bc3bc:
    if (ctx->pc == 0x2BC3BCu) {
        ctx->pc = 0x2BC3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC3B8u;
        // 0x2bc3bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC3C0u;
        goto label_2bc3c0;
    }
    ctx->pc = 0x2BC3B8u;
    {
        const bool branch_taken_0x2bc3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BC3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC3B8u;
        // 0x2bc3bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc3b8) {
            ctx->pc = 0x2BE3C0u;
            { ctx->pc = 0x2be3c0; return; }
        }
    }
    ctx->pc = 0x2BC3C0u;
label_2bc3c0:
    // 0x2bc3c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc3c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc3c4:
    // 0x2bc3c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc3c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc3c8:
    // 0x2bc3c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc3c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc3cc:
    // 0x2bc3cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc3ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc3d0:
    // 0x2bc3d0: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2bc3d0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2bc3d4:
    // 0x2bc3d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc3d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc3d8:
    // 0x2bc3d8: 0x100e0000  beq         $zero, $t6, . + 4 + (0x0 << 2)
label_2bc3dc:
    if (ctx->pc == 0x2BC3DCu) {
        ctx->pc = 0x2BC3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC3D8u;
        // 0x2bc3dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC3E0u;
        goto label_2bc3e0;
    }
    ctx->pc = 0x2BC3D8u;
    {
        const bool branch_taken_0x2bc3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BC3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC3D8u;
        // 0x2bc3dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc3d8) {
            ctx->pc = 0x2BC3DCu;
            goto label_2bc3dc;
        }
    }
    ctx->pc = 0x2BC3E0u;
label_2bc3e0:
    // 0x2bc3e0: 0xa8e100a  j           func_A384028
label_2bc3e4:
    if (ctx->pc == 0x2BC3E4u) {
        ctx->pc = 0x2BC3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC3E0u;
        // 0x2bc3e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC3E8u;
        goto label_2bc3e8;
    }
    ctx->pc = 0x2BC3E0u;
    ctx->pc = 0x2BC3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC3E0u;
    // 0x2bc3e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA384028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA384028u, 0x2BC3E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BC3E8u;
label_2bc3e8:
    // 0x2bc3e8: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2bc3ec:
    if (ctx->pc == 0x2BC3ECu) {
        ctx->pc = 0x2BC3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC3E8u;
        // 0x2bc3ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC3F0u;
        goto label_2bc3f0;
    }
    ctx->pc = 0x2BC3E8u;
    {
        const bool branch_taken_0x2bc3e8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BC3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC3E8u;
        // 0x2bc3ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc3e8) {
            ctx->pc = 0x2BE3E8u;
            { ctx->pc = 0x2be3e8; return; }
        }
    }
    ctx->pc = 0x2BC3F0u;
label_2bc3f0:
    // 0x2bc3f0: 0x100b5805  beq         $zero, $t3, . + 4 + (0x5805 << 2)
label_2bc3f4:
    if (ctx->pc == 0x2BC3F4u) {
        ctx->pc = 0x2BC3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC3F0u;
        // 0x2bc3f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC3F8u;
        goto label_2bc3f8;
    }
    ctx->pc = 0x2BC3F0u;
    {
        const bool branch_taken_0x2bc3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BC3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC3F0u;
        // 0x2bc3f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc3f0) {
            ctx->pc = 0x2D2408u;
            return;
        }
    }
    ctx->pc = 0x2BC3F8u;
label_2bc3f8:
    // 0x2bc3f8: 0xb0b1000  j           func_C2C4000
label_2bc3fc:
    if (ctx->pc == 0x2BC3FCu) {
        ctx->pc = 0x2BC3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC3F8u;
        // 0x2bc3fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC400u;
        goto label_2bc400;
    }
    ctx->pc = 0x2BC3F8u;
    ctx->pc = 0x2BC3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC3F8u;
    // 0x2bc3fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2BC3F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BC400u;
label_2bc400:
    // 0x2bc400: 0xb0b1005  j           func_C2C4014
label_2bc404:
    if (ctx->pc == 0x2BC404u) {
        ctx->pc = 0x2BC404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC400u;
        // 0x2bc404: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC408u;
        goto label_2bc408;
    }
    ctx->pc = 0x2BC400u;
    ctx->pc = 0x2BC404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC400u;
    // 0x2bc404: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4014u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4014u, 0x2BC400u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BC408u;
label_2bc408:
    // 0x2bc408: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc408u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BC408 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc40c:
    // 0x2bc40c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc40cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc410:
    // 0x2bc410: 0x100200a6  beq         $zero, $v0, . + 4 + (0xA6 << 2)
label_2bc414:
    if (ctx->pc == 0x2BC414u) {
        ctx->pc = 0x2BC414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC410u;
        // 0x2bc414: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC418u;
        goto label_2bc418;
    }
    ctx->pc = 0x2BC410u;
    {
        const bool branch_taken_0x2bc410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BC414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC410u;
        // 0x2bc414: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc410) {
            ctx->pc = 0x2BC6ACu;
            { ctx->pc = 0x2bc6ac; return; }
        }
    }
    ctx->pc = 0x2BC418u;
label_2bc418:
    // 0x2bc418: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2bc41c:
    if (ctx->pc == 0x2BC41Cu) {
        ctx->pc = 0x2BC41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC418u;
        // 0x2bc41c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC420u;
        goto label_2bc420;
    }
    ctx->pc = 0x2BC418u;
    {
        const bool branch_taken_0x2bc418 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BC41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC418u;
        // 0x2bc41c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc418) {
            ctx->pc = 0x2BE418u;
            { ctx->pc = 0x2be418; return; }
        }
    }
    ctx->pc = 0x2BC420u;
label_2bc420:
    // 0x2bc420: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2bc424:
    if (ctx->pc == 0x2BC424u) {
        ctx->pc = 0x2BC424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC420u;
        // 0x2bc424: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC428u;
        goto label_2bc428;
    }
    ctx->pc = 0x2BC420u;
    {
        const bool branch_taken_0x2bc420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BC424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC420u;
        // 0x2bc424: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc420) {
            ctx->pc = 0x2D2428u;
            return;
        }
    }
    ctx->pc = 0x2BC428u;
label_2bc428:
    // 0x2bc428: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc428u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2bc42c:
    // 0x2bc42c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc42cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc430:
    // 0x2bc430: 0xb0b1000  j           func_C2C4000
label_2bc434:
    if (ctx->pc == 0x2BC434u) {
        ctx->pc = 0x2BC434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC430u;
        // 0x2bc434: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC438u;
        goto label_2bc438;
    }
    ctx->pc = 0x2BC430u;
    ctx->pc = 0x2BC434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC430u;
    // 0x2bc434: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2BC430u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BC438u;
label_2bc438:
    // 0x2bc438: 0x90c3000  j           func_430C000
label_2bc43c:
    if (ctx->pc == 0x2BC43Cu) {
        ctx->pc = 0x2BC43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC438u;
        // 0x2bc43c: 0x1e08418  .word       0x01E08418                   # mult        $s0, $t7, $zero # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC440u;
        goto label_2bc440;
    }
    ctx->pc = 0x2BC438u;
    ctx->pc = 0x2BC43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC438u;
    // 0x2bc43c: 0x1e08418  .word       0x01E08418                   # mult        $s0, $t7, $zero # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C000u, 0x2BC438u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BC440u;
label_2bc440:
    // 0x2bc440: 0x82e3000  j           func_B8C000
label_2bc444:
    if (ctx->pc == 0x2BC444u) {
        ctx->pc = 0x2BC444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC440u;
        // 0x2bc444: 0x1e08c58  .word       0x01E08C58                   # mult        $s1, $t7, $zero # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC448u;
        goto label_2bc448;
    }
    ctx->pc = 0x2BC440u;
    ctx->pc = 0x2BC444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC440u;
    // 0x2bc444: 0x1e08c58  .word       0x01E08C58                   # mult        $s1, $t7, $zero # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0xB8C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB8C000u, 0x2BC440u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BC448u;
label_2bc448:
    // 0x2bc448: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2bc44c:
    if (ctx->pc == 0x2BC44Cu) {
        ctx->pc = 0x2BC44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC448u;
        // 0x2bc44c: 0x1e09498  .word       0x01E09498                   # mult        $s2, $t7, $zero # 00000480 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC450u;
        goto label_2bc450;
    }
    ctx->pc = 0x2BC448u;
    {
        const bool branch_taken_0x2bc448 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BC44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC448u;
        // 0x2bc44c: 0x1e09498  .word       0x01E09498                   # mult        $s2, $t7, $zero # 00000480 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc448) {
            ctx->pc = 0x2BE448u;
            { ctx->pc = 0x2be448; return; }
        }
    }
    ctx->pc = 0x2BC450u;
label_2bc450:
    // 0x2bc450: 0x10033001  beq         $zero, $v1, . + 4 + (0x3001 << 2)
label_2bc454:
    if (ctx->pc == 0x2BC454u) {
        ctx->pc = 0x2BC454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC450u;
        // 0x2bc454: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC458u;
        goto label_2bc458;
    }
    ctx->pc = 0x2BC450u;
    {
        const bool branch_taken_0x2bc450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BC454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC450u;
        // 0x2bc454: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc450) {
            ctx->pc = 0x2C8458u;
            return;
        }
    }
    ctx->pc = 0x2BC458u;
label_2bc458:
    // 0x2bc458: 0x10020002  beq         $zero, $v0, . + 4 + (0x2 << 2)
label_2bc45c:
    if (ctx->pc == 0x2BC45Cu) {
        ctx->pc = 0x2BC45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC458u;
        // 0x2bc45c: 0x208428  .word       0x00208428                   # mfsa        $s0 # 00200400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 16, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC460u;
        goto label_2bc460;
    }
    ctx->pc = 0x2BC458u;
    {
        const bool branch_taken_0x2bc458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BC45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC458u;
        // 0x2bc45c: 0x208428  .word       0x00208428                   # mfsa        $s0 # 00200400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 16, ctx->sa);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc458) {
            ctx->pc = 0x2BC464u;
            goto label_2bc464;
        }
    }
    ctx->pc = 0x2BC460u;
label_2bc460:
    // 0x2bc460: 0x800270b4  lb          $v0, 0x70B4($zero)
    ctx->pc = 0x2bc460u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x70B4u));
label_2bc464:
    // 0x2bc464: 0x208c68  .word       0x00208C68                   # mfsa        $s1 # 00200440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bc464u;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_2bc468:
    // 0x2bc468: 0x800b6334  lb          $t3, 0x6334($zero)
    ctx->pc = 0x2bc468u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x6334u));
label_2bc46c:
    // 0x2bc46c: 0x2094a8  .word       0x002094A8                   # mfsa        $s2 # 00200480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bc46cu;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_2bc470:
    // 0x2bc470: 0x50020002  beql        $zero, $v0, . + 4 + (0x2 << 2)
label_2bc474:
    if (ctx->pc == 0x2BC474u) {
        ctx->pc = 0x2BC474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC470u;
        // 0x2bc474: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC478u;
        goto label_2bc478;
    }
    ctx->pc = 0x2BC470u;
    {
        const bool branch_taken_0x2bc470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bc470) {
            ctx->pc = 0x2BC474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC470u;
            // 0x2bc474: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC47Cu;
            goto label_2bc47c;
        }
    }
    ctx->pc = 0x2BC478u;
label_2bc478:
    // 0x2bc478: 0x800d07f2  lb          $t5, 0x7F2($zero)
    ctx->pc = 0x2bc478u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x7F2u));
label_2bc47c:
    // 0x2bc47c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc47cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc480:
    // 0x2bc480: 0x100d0003  beq         $zero, $t5, . + 4 + (0x3 << 2)
label_2bc484:
    if (ctx->pc == 0x2BC484u) {
        ctx->pc = 0x2BC484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC480u;
        // 0x2bc484: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC488u;
        goto label_2bc488;
    }
    ctx->pc = 0x2BC480u;
    {
        const bool branch_taken_0x2bc480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BC484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC480u;
        // 0x2bc484: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc480) {
            ctx->pc = 0x2BC490u;
            goto label_2bc490;
        }
    }
    ctx->pc = 0x2BC488u;
label_2bc488:
    // 0x2bc488: 0x800c1930  lb          $t4, 0x1930($zero)
    ctx->pc = 0x2bc488u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x1930u));
label_2bc48c:
    // 0x2bc48c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc48cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc490:
    // 0x2bc490: 0x800c2170  lb          $t4, 0x2170($zero)
    ctx->pc = 0x2bc490u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x2170u));
label_2bc494:
    // 0x2bc494: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc494u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc498:
    // 0x2bc498: 0x1f43000  .word       0x01F43000                   # sll         $a2, $s4, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc498u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 0));
label_2bc49c:
    // 0x2bc49c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc49cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc4a0:
    // 0x2bc4a0: 0x800c29b0  lb          $t4, 0x29B0($zero)
    ctx->pc = 0x2bc4a0u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x29B0u));
label_2bc4a4:
    // 0x2bc4a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc4a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc4a8:
    // 0x2bc4a8: 0x22000000  addi        $zero, $s0, 0x0
    ctx->pc = 0x2bc4a8u;
    // NOP (addi to $zero)
label_2bc4ac:
    // 0x2bc4ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc4acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc4b0:
    // 0x2bc4b0: 0x809e6bfd  lb          $fp, 0x6BFD($a0)
    ctx->pc = 0x2bc4b0u;
    SET_GPR_S32(ctx, 30, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 27645)));
label_2bc4b4:
    // 0x2bc4b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc4b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc4b8:
    // 0x2bc4b8: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2bc4b8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2bc4bc:
    // 0x2bc4bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc4bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc4c0:
    // 0x2bc4c0: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2bc4c0u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2bc4c4:
    // 0x2bc4c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc4c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc4c8:
    // 0x2bc4c8: 0xa48080a  j           func_9202028
label_2bc4cc:
    if (ctx->pc == 0x2BC4CCu) {
        ctx->pc = 0x2BC4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC4C8u;
        // 0x2bc4cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC4D0u;
        goto label_2bc4d0;
    }
    ctx->pc = 0x2BC4C8u;
    ctx->pc = 0x2BC4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC4C8u;
    // 0x2bc4cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x9202028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9202028u, 0x2BC4C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BC4D0u;
label_2bc4d0:
    // 0x2bc4d0: 0x81e8a37d  lb          $t0, -0x5C83($t7)
    ctx->pc = 0x2bc4d0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2bc4d4:
    // 0x2bc4d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc4d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc4d8:
    // 0x2bc4d8: 0x800b07b2  lb          $t3, 0x7B2($zero)
    ctx->pc = 0x2bc4d8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x7B2u));
label_2bc4dc:
    // 0x2bc4dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc4dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc4e0:
    // 0x2bc4e0: 0x800a07b2  lb          $t2, 0x7B2($zero)
    ctx->pc = 0x2bc4e0u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x7B2u));
label_2bc4e4:
    // 0x2bc4e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc4e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc4e8:
    // 0x2bc4e8: 0x800907b2  lb          $t1, 0x7B2($zero)
    ctx->pc = 0x2bc4e8u;
    SET_GPR_S32(ctx, 9, (int8_t)FAST_READ8(0x7B2u));
label_2bc4ec:
    // 0x2bc4ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc4ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc4f0:
    // 0x2bc4f0: 0x81f31b7c  lb          $s3, 0x1B7C($t7)
    ctx->pc = 0x2bc4f0u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2bc4f4:
    // 0x2bc4f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc4f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc4f8:
    // 0x2bc4f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc4f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc4fc:
    // 0x2bc4fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc4fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc500:
    // 0x2bc500: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc500u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc504:
    // 0x2bc504: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc504u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc508:
    // 0x2bc508: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc508u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc50c:
    // 0x2bc50c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc50cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc510:
    // 0x2bc510: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc510u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc514:
    // 0x2bc514: 0x1f309bc  .word       0x01F309BC                   # dsll32      $at, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc514u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << (32 + 6));
label_2bc518:
    // 0x2bc518: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc518u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc51c:
    // 0x2bc51c: 0x1f310bd  .word       0x01F310BD                   # INVALID     $t7, $s3, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc51cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BC51C raw=0x01F310BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc520:
    // 0x2bc520: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc520u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc524:
    // 0x2bc524: 0x1f318be  .word       0x01F318BE                   # dsrl32      $v1, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (32 + 2));
label_2bc528:
    // 0x2bc528: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc528u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc52c:
    // 0x2bc52c: 0x1e0270b  .word       0x01E0270B                   # movn        $a0, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc52cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
label_2bc530:
    // 0x2bc530: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc530u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc534:
    // 0x2bc534: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc534u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc538:
    // 0x2bc538: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc538u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc53c:
    // 0x2bc53c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc53cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc540:
    // 0x2bc540: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc540u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc544:
    // 0x2bc544: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc544u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc548:
    // 0x2bc548: 0x81fc03bc  lb          $gp, 0x3BC($t7)
    ctx->pc = 0x2bc548u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2bc54c:
    // 0x2bc54c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc54cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc550:
    // 0x2bc550: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc550u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc554:
    // 0x2bc554: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc554u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x2bc558u;
    return;
}
