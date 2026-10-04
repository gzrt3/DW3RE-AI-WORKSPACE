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

// Function: FUN_0019b808
// Address: 0x19b808 - 0x29b810
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b808_part141(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1dfdc8u: goto label_1dfdc8;
        case 0x1dfdccu: goto label_1dfdcc;
        case 0x1dfdd0u: goto label_1dfdd0;
        case 0x1dfdd4u: goto label_1dfdd4;
        case 0x1dfdd8u: goto label_1dfdd8;
        case 0x1dfddcu: goto label_1dfddc;
        case 0x1dfde0u: goto label_1dfde0;
        case 0x1dfde4u: goto label_1dfde4;
        case 0x1dfde8u: goto label_1dfde8;
        case 0x1dfdecu: goto label_1dfdec;
        case 0x1dfdf0u: goto label_1dfdf0;
        case 0x1dfdf4u: goto label_1dfdf4;
        case 0x1dfdf8u: goto label_1dfdf8;
        case 0x1dfdfcu: goto label_1dfdfc;
        case 0x1dfe00u: goto label_1dfe00;
        case 0x1dfe04u: goto label_1dfe04;
        case 0x1dfe08u: goto label_1dfe08;
        case 0x1dfe0cu: goto label_1dfe0c;
        case 0x1dfe10u: goto label_1dfe10;
        case 0x1dfe14u: goto label_1dfe14;
        case 0x1dfe18u: goto label_1dfe18;
        case 0x1dfe1cu: goto label_1dfe1c;
        case 0x1dfe20u: goto label_1dfe20;
        case 0x1dfe24u: goto label_1dfe24;
        case 0x1dfe28u: goto label_1dfe28;
        case 0x1dfe2cu: goto label_1dfe2c;
        case 0x1dfe30u: goto label_1dfe30;
        case 0x1dfe34u: goto label_1dfe34;
        case 0x1dfe38u: goto label_1dfe38;
        case 0x1dfe3cu: goto label_1dfe3c;
        case 0x1dfe40u: goto label_1dfe40;
        case 0x1dfe44u: goto label_1dfe44;
        case 0x1dfe48u: goto label_1dfe48;
        case 0x1dfe4cu: goto label_1dfe4c;
        case 0x1dfe50u: goto label_1dfe50;
        case 0x1dfe54u: goto label_1dfe54;
        case 0x1dfe58u: goto label_1dfe58;
        case 0x1dfe5cu: goto label_1dfe5c;
        case 0x1dfe60u: goto label_1dfe60;
        case 0x1dfe64u: goto label_1dfe64;
        case 0x1dfe68u: goto label_1dfe68;
        case 0x1dfe6cu: goto label_1dfe6c;
        case 0x1dfe70u: goto label_1dfe70;
        case 0x1dfe74u: goto label_1dfe74;
        case 0x1dfe78u: goto label_1dfe78;
        case 0x1dfe7cu: goto label_1dfe7c;
        case 0x1dfe80u: goto label_1dfe80;
        case 0x1dfe84u: goto label_1dfe84;
        case 0x1dfe88u: goto label_1dfe88;
        case 0x1dfe8cu: goto label_1dfe8c;
        case 0x1dfe90u: goto label_1dfe90;
        case 0x1dfe94u: goto label_1dfe94;
        case 0x1dfe98u: goto label_1dfe98;
        case 0x1dfe9cu: goto label_1dfe9c;
        case 0x1dfea0u: goto label_1dfea0;
        case 0x1dfea4u: goto label_1dfea4;
        case 0x1dfea8u: goto label_1dfea8;
        case 0x1dfeacu: goto label_1dfeac;
        case 0x1dfeb0u: goto label_1dfeb0;
        case 0x1dfeb4u: goto label_1dfeb4;
        case 0x1dfeb8u: goto label_1dfeb8;
        case 0x1dfebcu: goto label_1dfebc;
        case 0x1dfec0u: goto label_1dfec0;
        case 0x1dfec4u: goto label_1dfec4;
        case 0x1dfec8u: goto label_1dfec8;
        case 0x1dfeccu: goto label_1dfecc;
        case 0x1dfed0u: goto label_1dfed0;
        case 0x1dfed4u: goto label_1dfed4;
        case 0x1dfed8u: goto label_1dfed8;
        case 0x1dfedcu: goto label_1dfedc;
        case 0x1dfee0u: goto label_1dfee0;
        case 0x1dfee4u: goto label_1dfee4;
        case 0x1dfee8u: goto label_1dfee8;
        case 0x1dfeecu: goto label_1dfeec;
        case 0x1dfef0u: goto label_1dfef0;
        case 0x1dfef4u: goto label_1dfef4;
        case 0x1dfef8u: goto label_1dfef8;
        case 0x1dfefcu: goto label_1dfefc;
        case 0x1dff00u: goto label_1dff00;
        case 0x1dff04u: goto label_1dff04;
        case 0x1dff08u: goto label_1dff08;
        case 0x1dff0cu: goto label_1dff0c;
        case 0x1dff10u: goto label_1dff10;
        case 0x1dff14u: goto label_1dff14;
        case 0x1dff18u: goto label_1dff18;
        case 0x1dff1cu: goto label_1dff1c;
        case 0x1dff20u: goto label_1dff20;
        case 0x1dff24u: goto label_1dff24;
        case 0x1dff28u: goto label_1dff28;
        case 0x1dff2cu: goto label_1dff2c;
        case 0x1dff30u: goto label_1dff30;
        case 0x1dff34u: goto label_1dff34;
        case 0x1dff38u: goto label_1dff38;
        case 0x1dff3cu: goto label_1dff3c;
        case 0x1dff40u: goto label_1dff40;
        case 0x1dff44u: goto label_1dff44;
        case 0x1dff48u: goto label_1dff48;
        case 0x1dff4cu: goto label_1dff4c;
        case 0x1dff50u: goto label_1dff50;
        case 0x1dff54u: goto label_1dff54;
        case 0x1dff58u: goto label_1dff58;
        case 0x1dff5cu: goto label_1dff5c;
        case 0x1dff60u: goto label_1dff60;
        case 0x1dff64u: goto label_1dff64;
        case 0x1dff68u: goto label_1dff68;
        case 0x1dff6cu: goto label_1dff6c;
        case 0x1dff70u: goto label_1dff70;
        case 0x1dff74u: goto label_1dff74;
        case 0x1dff78u: goto label_1dff78;
        case 0x1dff7cu: goto label_1dff7c;
        case 0x1dff80u: goto label_1dff80;
        case 0x1dff84u: goto label_1dff84;
        case 0x1dff88u: goto label_1dff88;
        case 0x1dff8cu: goto label_1dff8c;
        case 0x1dff90u: goto label_1dff90;
        case 0x1dff94u: goto label_1dff94;
        case 0x1dff98u: goto label_1dff98;
        case 0x1dff9cu: goto label_1dff9c;
        case 0x1dffa0u: goto label_1dffa0;
        case 0x1dffa4u: goto label_1dffa4;
        case 0x1dffa8u: goto label_1dffa8;
        case 0x1dffacu: goto label_1dffac;
        case 0x1dffb0u: goto label_1dffb0;
        case 0x1dffb4u: goto label_1dffb4;
        case 0x1dffb8u: goto label_1dffb8;
        case 0x1dffbcu: goto label_1dffbc;
        case 0x1dffc0u: goto label_1dffc0;
        case 0x1dffc4u: goto label_1dffc4;
        case 0x1dffc8u: goto label_1dffc8;
        case 0x1dffccu: goto label_1dffcc;
        case 0x1dffd0u: goto label_1dffd0;
        case 0x1dffd4u: goto label_1dffd4;
        case 0x1dffd8u: goto label_1dffd8;
        case 0x1dffdcu: goto label_1dffdc;
        case 0x1dffe0u: goto label_1dffe0;
        case 0x1dffe4u: goto label_1dffe4;
        case 0x1dffe8u: goto label_1dffe8;
        case 0x1dffecu: goto label_1dffec;
        case 0x1dfff0u: goto label_1dfff0;
        case 0x1dfff4u: goto label_1dfff4;
        case 0x1dfff8u: goto label_1dfff8;
        case 0x1dfffcu: goto label_1dfffc;
        case 0x1e0000u: goto label_1e0000;
        case 0x1e0004u: goto label_1e0004;
        case 0x1e0008u: goto label_1e0008;
        case 0x1e000cu: goto label_1e000c;
        case 0x1e0010u: goto label_1e0010;
        case 0x1e0014u: goto label_1e0014;
        case 0x1e0018u: goto label_1e0018;
        case 0x1e001cu: goto label_1e001c;
        case 0x1e0020u: goto label_1e0020;
        case 0x1e0024u: goto label_1e0024;
        case 0x1e0028u: goto label_1e0028;
        case 0x1e002cu: goto label_1e002c;
        case 0x1e0030u: goto label_1e0030;
        case 0x1e0034u: goto label_1e0034;
        case 0x1e0038u: goto label_1e0038;
        case 0x1e003cu: goto label_1e003c;
        case 0x1e0040u: goto label_1e0040;
        case 0x1e0044u: goto label_1e0044;
        case 0x1e0048u: goto label_1e0048;
        case 0x1e004cu: goto label_1e004c;
        case 0x1e0050u: goto label_1e0050;
        case 0x1e0054u: goto label_1e0054;
        case 0x1e0058u: goto label_1e0058;
        case 0x1e005cu: goto label_1e005c;
        case 0x1e0060u: goto label_1e0060;
        case 0x1e0064u: goto label_1e0064;
        case 0x1e0068u: goto label_1e0068;
        case 0x1e006cu: goto label_1e006c;
        case 0x1e0070u: goto label_1e0070;
        case 0x1e0074u: goto label_1e0074;
        case 0x1e0078u: goto label_1e0078;
        case 0x1e007cu: goto label_1e007c;
        case 0x1e0080u: goto label_1e0080;
        case 0x1e0084u: goto label_1e0084;
        case 0x1e0088u: goto label_1e0088;
        case 0x1e008cu: goto label_1e008c;
        case 0x1e0090u: goto label_1e0090;
        case 0x1e0094u: goto label_1e0094;
        case 0x1e0098u: goto label_1e0098;
        case 0x1e009cu: goto label_1e009c;
        case 0x1e00a0u: goto label_1e00a0;
        case 0x1e00a4u: goto label_1e00a4;
        case 0x1e00a8u: goto label_1e00a8;
        case 0x1e00acu: goto label_1e00ac;
        case 0x1e00b0u: goto label_1e00b0;
        case 0x1e00b4u: goto label_1e00b4;
        case 0x1e00b8u: goto label_1e00b8;
        case 0x1e00bcu: goto label_1e00bc;
        case 0x1e00c0u: goto label_1e00c0;
        case 0x1e00c4u: goto label_1e00c4;
        case 0x1e00c8u: goto label_1e00c8;
        case 0x1e00ccu: goto label_1e00cc;
        case 0x1e00d0u: goto label_1e00d0;
        case 0x1e00d4u: goto label_1e00d4;
        case 0x1e00d8u: goto label_1e00d8;
        case 0x1e00dcu: goto label_1e00dc;
        case 0x1e00e0u: goto label_1e00e0;
        case 0x1e00e4u: goto label_1e00e4;
        case 0x1e00e8u: goto label_1e00e8;
        case 0x1e00ecu: goto label_1e00ec;
        case 0x1e00f0u: goto label_1e00f0;
        case 0x1e00f4u: goto label_1e00f4;
        case 0x1e00f8u: goto label_1e00f8;
        case 0x1e00fcu: goto label_1e00fc;
        case 0x1e0100u: goto label_1e0100;
        case 0x1e0104u: goto label_1e0104;
        case 0x1e0108u: goto label_1e0108;
        case 0x1e010cu: goto label_1e010c;
        case 0x1e0110u: goto label_1e0110;
        case 0x1e0114u: goto label_1e0114;
        case 0x1e0118u: goto label_1e0118;
        case 0x1e011cu: goto label_1e011c;
        case 0x1e0120u: goto label_1e0120;
        case 0x1e0124u: goto label_1e0124;
        case 0x1e0128u: goto label_1e0128;
        case 0x1e012cu: goto label_1e012c;
        case 0x1e0130u: goto label_1e0130;
        case 0x1e0134u: goto label_1e0134;
        case 0x1e0138u: goto label_1e0138;
        case 0x1e013cu: goto label_1e013c;
        case 0x1e0140u: goto label_1e0140;
        case 0x1e0144u: goto label_1e0144;
        case 0x1e0148u: goto label_1e0148;
        case 0x1e014cu: goto label_1e014c;
        case 0x1e0150u: goto label_1e0150;
        case 0x1e0154u: goto label_1e0154;
        case 0x1e0158u: goto label_1e0158;
        case 0x1e015cu: goto label_1e015c;
        case 0x1e0160u: goto label_1e0160;
        case 0x1e0164u: goto label_1e0164;
        case 0x1e0168u: goto label_1e0168;
        case 0x1e016cu: goto label_1e016c;
        case 0x1e0170u: goto label_1e0170;
        case 0x1e0174u: goto label_1e0174;
        case 0x1e0178u: goto label_1e0178;
        case 0x1e017cu: goto label_1e017c;
        case 0x1e0180u: goto label_1e0180;
        case 0x1e0184u: goto label_1e0184;
        case 0x1e0188u: goto label_1e0188;
        case 0x1e018cu: goto label_1e018c;
        case 0x1e0190u: goto label_1e0190;
        case 0x1e0194u: goto label_1e0194;
        case 0x1e0198u: goto label_1e0198;
        case 0x1e019cu: goto label_1e019c;
        case 0x1e01a0u: goto label_1e01a0;
        case 0x1e01a4u: goto label_1e01a4;
        case 0x1e01a8u: goto label_1e01a8;
        case 0x1e01acu: goto label_1e01ac;
        case 0x1e01b0u: goto label_1e01b0;
        case 0x1e01b4u: goto label_1e01b4;
        case 0x1e01b8u: goto label_1e01b8;
        case 0x1e01bcu: goto label_1e01bc;
        case 0x1e01c0u: goto label_1e01c0;
        case 0x1e01c4u: goto label_1e01c4;
        case 0x1e01c8u: goto label_1e01c8;
        case 0x1e01ccu: goto label_1e01cc;
        case 0x1e01d0u: goto label_1e01d0;
        case 0x1e01d4u: goto label_1e01d4;
        case 0x1e01d8u: goto label_1e01d8;
        case 0x1e01dcu: goto label_1e01dc;
        case 0x1e01e0u: goto label_1e01e0;
        case 0x1e01e4u: goto label_1e01e4;
        case 0x1e01e8u: goto label_1e01e8;
        case 0x1e01ecu: goto label_1e01ec;
        case 0x1e01f0u: goto label_1e01f0;
        case 0x1e01f4u: goto label_1e01f4;
        case 0x1e01f8u: goto label_1e01f8;
        case 0x1e01fcu: goto label_1e01fc;
        case 0x1e0200u: goto label_1e0200;
        case 0x1e0204u: goto label_1e0204;
        case 0x1e0208u: goto label_1e0208;
        case 0x1e020cu: goto label_1e020c;
        case 0x1e0210u: goto label_1e0210;
        case 0x1e0214u: goto label_1e0214;
        case 0x1e0218u: goto label_1e0218;
        case 0x1e021cu: goto label_1e021c;
        case 0x1e0220u: goto label_1e0220;
        case 0x1e0224u: goto label_1e0224;
        case 0x1e0228u: goto label_1e0228;
        case 0x1e022cu: goto label_1e022c;
        case 0x1e0230u: goto label_1e0230;
        case 0x1e0234u: goto label_1e0234;
        case 0x1e0238u: goto label_1e0238;
        case 0x1e023cu: goto label_1e023c;
        case 0x1e0240u: goto label_1e0240;
        case 0x1e0244u: goto label_1e0244;
        case 0x1e0248u: goto label_1e0248;
        case 0x1e024cu: goto label_1e024c;
        case 0x1e0250u: goto label_1e0250;
        case 0x1e0254u: goto label_1e0254;
        case 0x1e0258u: goto label_1e0258;
        case 0x1e025cu: goto label_1e025c;
        case 0x1e0260u: goto label_1e0260;
        case 0x1e0264u: goto label_1e0264;
        case 0x1e0268u: goto label_1e0268;
        case 0x1e026cu: goto label_1e026c;
        case 0x1e0270u: goto label_1e0270;
        case 0x1e0274u: goto label_1e0274;
        case 0x1e0278u: goto label_1e0278;
        case 0x1e027cu: goto label_1e027c;
        case 0x1e0280u: goto label_1e0280;
        case 0x1e0284u: goto label_1e0284;
        case 0x1e0288u: goto label_1e0288;
        case 0x1e028cu: goto label_1e028c;
        case 0x1e0290u: goto label_1e0290;
        case 0x1e0294u: goto label_1e0294;
        case 0x1e0298u: goto label_1e0298;
        case 0x1e029cu: goto label_1e029c;
        case 0x1e02a0u: goto label_1e02a0;
        case 0x1e02a4u: goto label_1e02a4;
        case 0x1e02a8u: goto label_1e02a8;
        case 0x1e02acu: goto label_1e02ac;
        case 0x1e02b0u: goto label_1e02b0;
        case 0x1e02b4u: goto label_1e02b4;
        case 0x1e02b8u: goto label_1e02b8;
        case 0x1e02bcu: goto label_1e02bc;
        case 0x1e02c0u: goto label_1e02c0;
        case 0x1e02c4u: goto label_1e02c4;
        case 0x1e02c8u: goto label_1e02c8;
        case 0x1e02ccu: goto label_1e02cc;
        case 0x1e02d0u: goto label_1e02d0;
        case 0x1e02d4u: goto label_1e02d4;
        case 0x1e02d8u: goto label_1e02d8;
        case 0x1e02dcu: goto label_1e02dc;
        case 0x1e02e0u: goto label_1e02e0;
        case 0x1e02e4u: goto label_1e02e4;
        case 0x1e02e8u: goto label_1e02e8;
        case 0x1e02ecu: goto label_1e02ec;
        case 0x1e02f0u: goto label_1e02f0;
        case 0x1e02f4u: goto label_1e02f4;
        case 0x1e02f8u: goto label_1e02f8;
        case 0x1e02fcu: goto label_1e02fc;
        case 0x1e0300u: goto label_1e0300;
        case 0x1e0304u: goto label_1e0304;
        case 0x1e0308u: goto label_1e0308;
        case 0x1e030cu: goto label_1e030c;
        case 0x1e0310u: goto label_1e0310;
        case 0x1e0314u: goto label_1e0314;
        case 0x1e0318u: goto label_1e0318;
        case 0x1e031cu: goto label_1e031c;
        case 0x1e0320u: goto label_1e0320;
        case 0x1e0324u: goto label_1e0324;
        case 0x1e0328u: goto label_1e0328;
        case 0x1e032cu: goto label_1e032c;
        case 0x1e0330u: goto label_1e0330;
        case 0x1e0334u: goto label_1e0334;
        case 0x1e0338u: goto label_1e0338;
        case 0x1e033cu: goto label_1e033c;
        case 0x1e0340u: goto label_1e0340;
        case 0x1e0344u: goto label_1e0344;
        case 0x1e0348u: goto label_1e0348;
        case 0x1e034cu: goto label_1e034c;
        case 0x1e0350u: goto label_1e0350;
        case 0x1e0354u: goto label_1e0354;
        case 0x1e0358u: goto label_1e0358;
        case 0x1e035cu: goto label_1e035c;
        case 0x1e0360u: goto label_1e0360;
        case 0x1e0364u: goto label_1e0364;
        case 0x1e0368u: goto label_1e0368;
        case 0x1e036cu: goto label_1e036c;
        case 0x1e0370u: goto label_1e0370;
        case 0x1e0374u: goto label_1e0374;
        case 0x1e0378u: goto label_1e0378;
        case 0x1e037cu: goto label_1e037c;
        case 0x1e0380u: goto label_1e0380;
        case 0x1e0384u: goto label_1e0384;
        case 0x1e0388u: goto label_1e0388;
        case 0x1e038cu: goto label_1e038c;
        case 0x1e0390u: goto label_1e0390;
        case 0x1e0394u: goto label_1e0394;
        case 0x1e0398u: goto label_1e0398;
        case 0x1e039cu: goto label_1e039c;
        case 0x1e03a0u: goto label_1e03a0;
        case 0x1e03a4u: goto label_1e03a4;
        case 0x1e03a8u: goto label_1e03a8;
        case 0x1e03acu: goto label_1e03ac;
        case 0x1e03b0u: goto label_1e03b0;
        case 0x1e03b4u: goto label_1e03b4;
        case 0x1e03b8u: goto label_1e03b8;
        case 0x1e03bcu: goto label_1e03bc;
        case 0x1e03c0u: goto label_1e03c0;
        case 0x1e03c4u: goto label_1e03c4;
        case 0x1e03c8u: goto label_1e03c8;
        case 0x1e03ccu: goto label_1e03cc;
        case 0x1e03d0u: goto label_1e03d0;
        case 0x1e03d4u: goto label_1e03d4;
        case 0x1e03d8u: goto label_1e03d8;
        case 0x1e03dcu: goto label_1e03dc;
        case 0x1e03e0u: goto label_1e03e0;
        case 0x1e03e4u: goto label_1e03e4;
        case 0x1e03e8u: goto label_1e03e8;
        case 0x1e03ecu: goto label_1e03ec;
        case 0x1e03f0u: goto label_1e03f0;
        case 0x1e03f4u: goto label_1e03f4;
        case 0x1e03f8u: goto label_1e03f8;
        case 0x1e03fcu: goto label_1e03fc;
        case 0x1e0400u: goto label_1e0400;
        case 0x1e0404u: goto label_1e0404;
        case 0x1e0408u: goto label_1e0408;
        case 0x1e040cu: goto label_1e040c;
        case 0x1e0410u: goto label_1e0410;
        case 0x1e0414u: goto label_1e0414;
        case 0x1e0418u: goto label_1e0418;
        case 0x1e041cu: goto label_1e041c;
        case 0x1e0420u: goto label_1e0420;
        case 0x1e0424u: goto label_1e0424;
        case 0x1e0428u: goto label_1e0428;
        case 0x1e042cu: goto label_1e042c;
        case 0x1e0430u: goto label_1e0430;
        case 0x1e0434u: goto label_1e0434;
        case 0x1e0438u: goto label_1e0438;
        case 0x1e043cu: goto label_1e043c;
        case 0x1e0440u: goto label_1e0440;
        case 0x1e0444u: goto label_1e0444;
        case 0x1e0448u: goto label_1e0448;
        case 0x1e044cu: goto label_1e044c;
        case 0x1e0450u: goto label_1e0450;
        case 0x1e0454u: goto label_1e0454;
        case 0x1e0458u: goto label_1e0458;
        case 0x1e045cu: goto label_1e045c;
        case 0x1e0460u: goto label_1e0460;
        case 0x1e0464u: goto label_1e0464;
        case 0x1e0468u: goto label_1e0468;
        case 0x1e046cu: goto label_1e046c;
        case 0x1e0470u: goto label_1e0470;
        case 0x1e0474u: goto label_1e0474;
        case 0x1e0478u: goto label_1e0478;
        case 0x1e047cu: goto label_1e047c;
        case 0x1e0480u: goto label_1e0480;
        case 0x1e0484u: goto label_1e0484;
        case 0x1e0488u: goto label_1e0488;
        case 0x1e048cu: goto label_1e048c;
        case 0x1e0490u: goto label_1e0490;
        case 0x1e0494u: goto label_1e0494;
        case 0x1e0498u: goto label_1e0498;
        case 0x1e049cu: goto label_1e049c;
        case 0x1e04a0u: goto label_1e04a0;
        case 0x1e04a4u: goto label_1e04a4;
        case 0x1e04a8u: goto label_1e04a8;
        case 0x1e04acu: goto label_1e04ac;
        case 0x1e04b0u: goto label_1e04b0;
        case 0x1e04b4u: goto label_1e04b4;
        case 0x1e04b8u: goto label_1e04b8;
        case 0x1e04bcu: goto label_1e04bc;
        case 0x1e04c0u: goto label_1e04c0;
        case 0x1e04c4u: goto label_1e04c4;
        case 0x1e04c8u: goto label_1e04c8;
        case 0x1e04ccu: goto label_1e04cc;
        case 0x1e04d0u: goto label_1e04d0;
        case 0x1e04d4u: goto label_1e04d4;
        case 0x1e04d8u: goto label_1e04d8;
        case 0x1e04dcu: goto label_1e04dc;
        case 0x1e04e0u: goto label_1e04e0;
        case 0x1e04e4u: goto label_1e04e4;
        case 0x1e04e8u: goto label_1e04e8;
        case 0x1e04ecu: goto label_1e04ec;
        case 0x1e04f0u: goto label_1e04f0;
        case 0x1e04f4u: goto label_1e04f4;
        case 0x1e04f8u: goto label_1e04f8;
        case 0x1e04fcu: goto label_1e04fc;
        case 0x1e0500u: goto label_1e0500;
        case 0x1e0504u: goto label_1e0504;
        case 0x1e0508u: goto label_1e0508;
        case 0x1e050cu: goto label_1e050c;
        case 0x1e0510u: goto label_1e0510;
        case 0x1e0514u: goto label_1e0514;
        case 0x1e0518u: goto label_1e0518;
        case 0x1e051cu: goto label_1e051c;
        case 0x1e0520u: goto label_1e0520;
        case 0x1e0524u: goto label_1e0524;
        case 0x1e0528u: goto label_1e0528;
        case 0x1e052cu: goto label_1e052c;
        case 0x1e0530u: goto label_1e0530;
        case 0x1e0534u: goto label_1e0534;
        case 0x1e0538u: goto label_1e0538;
        case 0x1e053cu: goto label_1e053c;
        case 0x1e0540u: goto label_1e0540;
        case 0x1e0544u: goto label_1e0544;
        case 0x1e0548u: goto label_1e0548;
        case 0x1e054cu: goto label_1e054c;
        case 0x1e0550u: goto label_1e0550;
        case 0x1e0554u: goto label_1e0554;
        case 0x1e0558u: goto label_1e0558;
        case 0x1e055cu: goto label_1e055c;
        case 0x1e0560u: goto label_1e0560;
        case 0x1e0564u: goto label_1e0564;
        case 0x1e0568u: goto label_1e0568;
        case 0x1e056cu: goto label_1e056c;
        case 0x1e0570u: goto label_1e0570;
        case 0x1e0574u: goto label_1e0574;
        case 0x1e0578u: goto label_1e0578;
        case 0x1e057cu: goto label_1e057c;
        case 0x1e0580u: goto label_1e0580;
        case 0x1e0584u: goto label_1e0584;
        case 0x1e0588u: goto label_1e0588;
        case 0x1e058cu: goto label_1e058c;
        case 0x1e0590u: goto label_1e0590;
        case 0x1e0594u: goto label_1e0594;
        default: return;
    }

label_1dfdc8:
    // 0x1dfdc8: 0xa284007a  sb          $a0, 0x7A($s4)
    ctx->pc = 0x1dfdc8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 122), (uint8_t)GPR_U32(ctx, 4));
label_1dfdcc:
    // 0x1dfdcc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1dfdccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1dfdd0:
    // 0x1dfdd0: 0xa280007b  sb          $zero, 0x7B($s4)
    ctx->pc = 0x1dfdd0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 123), (uint8_t)GPR_U32(ctx, 0));
label_1dfdd4:
    // 0x1dfdd4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x1dfdd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_1dfdd8:
    // 0x1dfdd8: 0xae83007c  sw          $v1, 0x7C($s4)
    ctx->pc = 0x1dfdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 124), GPR_U32(ctx, 3));
label_1dfddc:
    // 0x1dfddc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1dfddcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1dfde0:
    // 0x1dfde0: 0xa2860088  sb          $a2, 0x88($s4)
    ctx->pc = 0x1dfde0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 136), (uint8_t)GPR_U32(ctx, 6));
label_1dfde4:
    // 0x1dfde4: 0x267300b0  addiu       $s3, $s3, 0xB0
    ctx->pc = 0x1dfde4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
label_1dfde8:
    // 0x1dfde8: 0xa2850089  sb          $a1, 0x89($s4)
    ctx->pc = 0x1dfde8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 137), (uint8_t)GPR_U32(ctx, 5));
label_1dfdec:
    // 0x1dfdec: 0xa284008a  sb          $a0, 0x8A($s4)
    ctx->pc = 0x1dfdecu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 138), (uint8_t)GPR_U32(ctx, 4));
label_1dfdf0:
    // 0x1dfdf0: 0xa280008b  sb          $zero, 0x8B($s4)
    ctx->pc = 0x1dfdf0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 139), (uint8_t)GPR_U32(ctx, 0));
label_1dfdf4:
    // 0x1dfdf4: 0xae83008c  sw          $v1, 0x8C($s4)
    ctx->pc = 0x1dfdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 3));
label_1dfdf8:
    // 0x1dfdf8: 0xa2860098  sb          $a2, 0x98($s4)
    ctx->pc = 0x1dfdf8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 152), (uint8_t)GPR_U32(ctx, 6));
label_1dfdfc:
    // 0x1dfdfc: 0xa2850099  sb          $a1, 0x99($s4)
    ctx->pc = 0x1dfdfcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 153), (uint8_t)GPR_U32(ctx, 5));
label_1dfe00:
    // 0x1dfe00: 0xa284009a  sb          $a0, 0x9A($s4)
    ctx->pc = 0x1dfe00u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 154), (uint8_t)GPR_U32(ctx, 4));
label_1dfe04:
    // 0x1dfe04: 0xa280009b  sb          $zero, 0x9B($s4)
    ctx->pc = 0x1dfe04u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 155), (uint8_t)GPR_U32(ctx, 0));
label_1dfe08:
    // 0x1dfe08: 0xae83009c  sw          $v1, 0x9C($s4)
    ctx->pc = 0x1dfe08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 3));
label_1dfe0c:
    // 0x1dfe0c: 0xa28600a8  sb          $a2, 0xA8($s4)
    ctx->pc = 0x1dfe0cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 168), (uint8_t)GPR_U32(ctx, 6));
label_1dfe10:
    // 0x1dfe10: 0xa28500a9  sb          $a1, 0xA9($s4)
    ctx->pc = 0x1dfe10u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 169), (uint8_t)GPR_U32(ctx, 5));
label_1dfe14:
    // 0x1dfe14: 0xa28400aa  sb          $a0, 0xAA($s4)
    ctx->pc = 0x1dfe14u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 170), (uint8_t)GPR_U32(ctx, 4));
label_1dfe18:
    // 0x1dfe18: 0xa28000ab  sb          $zero, 0xAB($s4)
    ctx->pc = 0x1dfe18u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 171), (uint8_t)GPR_U32(ctx, 0));
label_1dfe1c:
    // 0x1dfe1c: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_1dfe20:
    if (ctx->pc == 0x1DFE20u) {
        ctx->pc = 0x1DFE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE1Cu;
        // 0x1dfe20: 0xae8300ac  sw          $v1, 0xAC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFE24u;
        goto label_1dfe24;
    }
    ctx->pc = 0x1DFE1Cu;
    {
        const bool branch_taken_0x1dfe1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE1Cu;
        // 0x1dfe20: 0xae8300ac  sw          $v1, 0xAC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe1c) {
            ctx->pc = 0x1DFD74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1dfd74; return; }
        }
    }
    ctx->pc = 0x1DFE24u;
label_1dfe24:
    // 0x1dfe24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dfe24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dfe28:
    // 0x1dfe28: 0x26240220  addiu       $a0, $s1, 0x220
    ctx->pc = 0x1dfe28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
label_1dfe2c:
    // 0x1dfe2c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1dfe2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dfe30:
    // 0x1dfe30: 0xc05e1d4  jal         func_178750
label_1dfe34:
    if (ctx->pc == 0x1DFE34u) {
        ctx->pc = 0x1DFE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE30u;
        // 0x1dfe34: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFE38u;
        goto label_1dfe38;
    }
    ctx->pc = 0x1DFE30u;
    SET_GPR_U32(ctx, 31, 0x1DFE38u);
    ctx->pc = 0x1DFE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFE30u;
    // 0x1dfe34: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178750u, 0x1DFE30u, 0x1DFE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFE38u;
label_1dfe38:
    // 0x1dfe38: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1dfe38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_1dfe3c:
    // 0x1dfe3c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1dfe3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1dfe40:
    // 0x1dfe40: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1dfe40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_1dfe44:
    // 0x1dfe44: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1dfe44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfe48:
    // 0x1dfe48: 0x3c02f531  lui         $v0, 0xF531
    ctx->pc = 0x1dfe48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62769 << 16));
label_1dfe4c:
    // 0x1dfe4c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1dfe4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1dfe50:
    // 0x1dfe50: 0x34425315  ori         $v0, $v0, 0x5315
    ctx->pc = 0x1dfe50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21269);
label_1dfe54:
    // 0x1dfe54: 0xfe230270  sd          $v1, 0x270($s1)
    ctx->pc = 0x1dfe54u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 624), GPR_U64(ctx, 3));
label_1dfe58:
    // 0x1dfe58: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1dfe58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1dfe5c:
    // 0x1dfe5c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dfe5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfe60:
    // 0x1dfe60: 0x3c023153  lui         $v0, 0x3153
    ctx->pc = 0x1dfe60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12627 << 16));
label_1dfe64:
    // 0x1dfe64: 0x34421097  ori         $v0, $v0, 0x1097
    ctx->pc = 0x1dfe64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4247);
label_1dfe68:
    // 0x1dfe68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1dfe68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1dfe6c:
    // 0x1dfe6c: 0xfe220278  sd          $v0, 0x278($s1)
    ctx->pc = 0x1dfe6cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 632), GPR_U64(ctx, 2));
label_1dfe70:
    // 0x1dfe70: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x1dfe70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_1dfe74:
    // 0x1dfe74: 0x24440280  addiu       $a0, $v0, 0x280
    ctx->pc = 0x1dfe74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
label_1dfe78:
    // 0x1dfe78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dfe78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfe7c:
    // 0x1dfe7c: 0xc05e158  jal         func_178560
label_1dfe80:
    if (ctx->pc == 0x1DFE80u) {
        ctx->pc = 0x1DFE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE7Cu;
        // 0x1dfe80: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFE84u;
        goto label_1dfe84;
    }
    ctx->pc = 0x1DFE7Cu;
    SET_GPR_U32(ctx, 31, 0x1DFE84u);
    ctx->pc = 0x1DFE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFE7Cu;
    // 0x1dfe80: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178560u, 0x1DFE7Cu, 0x1DFE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFE84u;
label_1dfe84:
    // 0x1dfe84: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1dfe84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1dfe88:
    // 0x1dfe88: 0x2a420040  slti        $v0, $s2, 0x40
    ctx->pc = 0x1dfe88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)64) ? 1 : 0);
label_1dfe8c:
    // 0x1dfe8c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_1dfe90:
    if (ctx->pc == 0x1DFE90u) {
        ctx->pc = 0x1DFE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE8Cu;
        // 0x1dfe90: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFE94u;
        goto label_1dfe94;
    }
    ctx->pc = 0x1DFE8Cu;
    {
        const bool branch_taken_0x1dfe8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE8Cu;
        // 0x1dfe90: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe8c) {
            ctx->pc = 0x1DFE70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dfe70;
        }
    }
    ctx->pc = 0x1DFE94u;
label_1dfe94:
    // 0x1dfe94: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1dfe94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1dfe98:
    // 0x1dfe98: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x1dfe98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
label_1dfe9c:
    // 0x1dfe9c: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
label_1dfea0:
    if (ctx->pc == 0x1DFEA0u) {
        ctx->pc = 0x1DFEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE9Cu;
        // 0x1dfea0: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFEA4u;
        goto label_1dfea4;
    }
    ctx->pc = 0x1DFE9Cu;
    {
        const bool branch_taken_0x1dfe9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE9Cu;
        // 0x1dfea0: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe9c) {
            ctx->pc = 0x1DFD50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1dfd50; return; }
        }
    }
    ctx->pc = 0x1DFEA4u;
label_1dfea4:
    // 0x1dfea4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1dfea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfea8:
    // 0x1dfea8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dfea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfeac:
    // 0x1dfeac: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1dfeacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1dfeb0:
    // 0x1dfeb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dfeb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfeb4:
    // 0x1dfeb4: 0x24420680  addiu       $v0, $v0, 0x680
    ctx->pc = 0x1dfeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1664));
label_1dfeb8:
    // 0x1dfeb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dfeb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dfebc:
    // 0x1dfebc: 0xc05e158  jal         func_178560
label_1dfec0:
    if (ctx->pc == 0x1DFEC0u) {
        ctx->pc = 0x1DFEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFEBCu;
        // 0x1dfec0: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFEC4u;
        goto label_1dfec4;
    }
    ctx->pc = 0x1DFEBCu;
    SET_GPR_U32(ctx, 31, 0x1DFEC4u);
    ctx->pc = 0x1DFEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFEBCu;
    // 0x1dfec0: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178560u, 0x1DFEBCu, 0x1DFEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFEC4u;
label_1dfec4:
    // 0x1dfec4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1dfec4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1dfec8:
    // 0x1dfec8: 0x2a230040  slti        $v1, $s1, 0x40
    ctx->pc = 0x1dfec8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)64) ? 1 : 0);
label_1dfecc:
    // 0x1dfecc: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_1dfed0:
    if (ctx->pc == 0x1DFED0u) {
        ctx->pc = 0x1DFED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFECCu;
        // 0x1dfed0: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFED4u;
        goto label_1dfed4;
    }
    ctx->pc = 0x1DFECCu;
    {
        const bool branch_taken_0x1dfecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFECCu;
        // 0x1dfed0: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfecc) {
            ctx->pc = 0x1DFEACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dfeac;
        }
    }
    ctx->pc = 0x1DFED4u;
label_1dfed4:
    // 0x1dfed4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1dfed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1dfed8:
    // 0x1dfed8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1dfed8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1dfedc:
    // 0x1dfedc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1dfedcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1dfee0:
    // 0x1dfee0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1dfee0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1dfee4:
    // 0x1dfee4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1dfee4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dfee8:
    // 0x1dfee8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dfee8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dfeec:
    // 0x1dfeec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dfeecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dfef0:
    // 0x1dfef0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dfef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dfef4:
    // 0x1dfef4: 0x3e00008  jr          $ra
label_1dfef8:
    if (ctx->pc == 0x1DFEF8u) {
        ctx->pc = 0x1DFEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFEF4u;
        // 0x1dfef8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFEFCu;
        goto label_1dfefc;
    }
    ctx->pc = 0x1DFEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFEF4u;
        // 0x1dfef8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFEF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFEFCu;
label_1dfefc:
    // 0x1dfefc: 0x0  nop
    ctx->pc = 0x1dfefcu;
    // NOP
label_1dff00:
    // 0x1dff00: 0xaf808d00  sw          $zero, -0x7300($gp)
    ctx->pc = 0x1dff00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937856), GPR_U32(ctx, 0));
label_1dff04:
    // 0x1dff04: 0x3e00008  jr          $ra
label_1dff08:
    if (ctx->pc == 0x1DFF08u) {
        ctx->pc = 0x1DFF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFF04u;
        // 0x1dff08: 0xaf808cf8  sw          $zero, -0x7308($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937848), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFF0Cu;
        goto label_1dff0c;
    }
    ctx->pc = 0x1DFF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFF04u;
        // 0x1dff08: 0xaf808cf8  sw          $zero, -0x7308($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937848), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFF04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFF0Cu;
label_1dff0c:
    // 0x1dff0c: 0x0  nop
    ctx->pc = 0x1dff0cu;
    // NOP
label_1dff10:
    // 0x1dff10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dff10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1dff14:
    // 0x1dff14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1dff14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1dff18:
    // 0x1dff18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dff18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1dff1c:
    // 0x1dff1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dff1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1dff20:
    // 0x1dff20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dff20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1dff24:
    // 0x1dff24: 0x8f838cf8  lw          $v1, -0x7308($gp)
    ctx->pc = 0x1dff24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
label_1dff28:
    // 0x1dff28: 0x1060005e  beqz        $v1, . + 4 + (0x5E << 2)
label_1dff2c:
    if (ctx->pc == 0x1DFF2Cu) {
        ctx->pc = 0x1DFF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFF28u;
        // 0x1dff2c: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFF30u;
        goto label_1dff30;
    }
    ctx->pc = 0x1DFF28u;
    {
        const bool branch_taken_0x1dff28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFF28u;
        // 0x1dff2c: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dff28) {
            ctx->pc = 0x1E00A4u;
            goto label_1e00a4;
        }
    }
    ctx->pc = 0x1DFF30u;
label_1dff30:
    // 0x1dff30: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x1dff30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
label_1dff34:
    // 0x1dff34: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x1dff34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dff38:
    // 0x1dff38: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x1dff38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
label_1dff3c:
    // 0x1dff3c: 0x27838d08  addiu       $v1, $gp, -0x72F8
    ctx->pc = 0x1dff3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937864));
label_1dff40:
    // 0x1dff40: 0x8f828d00  lw          $v0, -0x7300($gp)
    ctx->pc = 0x1dff40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937856)));
label_1dff44:
    // 0x1dff44: 0x24c61e00  addiu       $a2, $a2, 0x1E00
    ctx->pc = 0x1dff44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7680));
label_1dff48:
    // 0x1dff48: 0x24a50680  addiu       $a1, $a1, 0x680
    ctx->pc = 0x1dff48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1664));
label_1dff4c:
    // 0x1dff4c: 0x43940  sll         $a3, $a0, 5
    ctx->pc = 0x1dff4cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1dff50:
    // 0x1dff50: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1dff50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1dff54:
    // 0x1dff54: 0xc78021  addu        $s0, $a2, $a3
    ctx->pc = 0x1dff54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1dff58:
    // 0x1dff58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dff58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1dff5c:
    // 0x1dff5c: 0x231c0  sll         $a2, $v0, 7
    ctx->pc = 0x1dff5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1dff60:
    // 0x1dff60: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1dff60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1dff64:
    // 0x1dff64: 0xc08e93e  jal         func_23A4F8
label_1dff68:
    if (ctx->pc == 0x1DFF68u) {
        ctx->pc = 0x1DFF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFF64u;
        // 0x1dff68: 0x26240280  addiu       $a0, $s1, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFF6Cu;
        goto label_1dff6c;
    }
    ctx->pc = 0x1DFF64u;
    SET_GPR_U32(ctx, 31, 0x1DFF6Cu);
    ctx->pc = 0x1DFF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFF64u;
    // 0x1dff68: 0x26240280  addiu       $a0, $s1, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1DFF6Cu;
label_1dff6c:
    // 0x1dff6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1dff6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dff70:
    // 0x1dff70: 0x10000009  b           . + 4 + (0x9 << 2)
label_1dff74:
    if (ctx->pc == 0x1DFF74u) {
        ctx->pc = 0x1DFF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFF70u;
        // 0x1dff74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFF78u;
        goto label_1dff78;
    }
    ctx->pc = 0x1DFF70u;
    {
        const bool branch_taken_0x1dff70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFF70u;
        // 0x1dff74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dff70) {
            ctx->pc = 0x1DFF98u;
            goto label_1dff98;
        }
    }
    ctx->pc = 0x1DFF78u;
label_1dff78:
    // 0x1dff78: 0x83828cfc  lb          $v0, -0x7304($gp)
    ctx->pc = 0x1dff78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937852)));
label_1dff7c:
    // 0x1dff7c: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x1dff7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_1dff80:
    // 0x1dff80: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1dff80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_1dff84:
    // 0x1dff84: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1dff84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1dff88:
    // 0x1dff88: 0xa06202e3  sb          $v0, 0x2E3($v1)
    ctx->pc = 0x1dff88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 739), (uint8_t)GPR_U32(ctx, 2));
label_1dff8c:
    // 0x1dff8c: 0xa06202cb  sb          $v0, 0x2CB($v1)
    ctx->pc = 0x1dff8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 715), (uint8_t)GPR_U32(ctx, 2));
label_1dff90:
    // 0x1dff90: 0xa06202b3  sb          $v0, 0x2B3($v1)
    ctx->pc = 0x1dff90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 691), (uint8_t)GPR_U32(ctx, 2));
label_1dff94:
    // 0x1dff94: 0xa062029b  sb          $v0, 0x29B($v1)
    ctx->pc = 0x1dff94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 667), (uint8_t)GPR_U32(ctx, 2));
label_1dff98:
    // 0x1dff98: 0x8f828d00  lw          $v0, -0x7300($gp)
    ctx->pc = 0x1dff98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937856)));
label_1dff9c:
    // 0x1dff9c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1dff9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1dffa0:
    // 0x1dffa0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1dffa4:
    if (ctx->pc == 0x1DFFA4u) {
        ctx->pc = 0x1DFFA8u;
        goto label_1dffa8;
    }
    ctx->pc = 0x1DFFA0u;
    {
        const bool branch_taken_0x1dffa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dffa0) {
            ctx->pc = 0x1DFF78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dff78;
        }
    }
    ctx->pc = 0x1DFFA8u;
label_1dffa8:
    // 0x1dffa8: 0xa220008b  sb          $zero, 0x8B($s1)
    ctx->pc = 0x1dffa8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 139), (uint8_t)GPR_U32(ctx, 0));
label_1dffac:
    // 0x1dffac: 0xa220007b  sb          $zero, 0x7B($s1)
    ctx->pc = 0x1dffacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 123), (uint8_t)GPR_U32(ctx, 0));
label_1dffb0:
    // 0x1dffb0: 0x8f838cfc  lw          $v1, -0x7304($gp)
    ctx->pc = 0x1dffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937852)));
label_1dffb4:
    // 0x1dffb4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1dffb8:
    // 0x1dffb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dffb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dffbc:
    // 0x1dffbc: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1dffbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1dffc0:
    // 0x1dffc0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1dffc4:
    if (ctx->pc == 0x1DFFC4u) {
        ctx->pc = 0x1DFFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFFC0u;
        // 0x1dffc4: 0x311c3  sra         $v0, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFFC8u;
        goto label_1dffc8;
    }
    ctx->pc = 0x1DFFC0u;
    {
        const bool branch_taken_0x1dffc0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DFFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFFC0u;
        // 0x1dffc4: 0x311c3  sra         $v0, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dffc0) {
            ctx->pc = 0x1DFFD0u;
            goto label_1dffd0;
        }
    }
    ctx->pc = 0x1DFFC8u;
label_1dffc8:
    // 0x1dffc8: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x1dffc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
label_1dffcc:
    // 0x1dffcc: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x1dffccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_1dffd0:
    // 0x1dffd0: 0xa22200ab  sb          $v0, 0xAB($s1)
    ctx->pc = 0x1dffd0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 171), (uint8_t)GPR_U32(ctx, 2));
label_1dffd4:
    // 0x1dffd4: 0xa222009b  sb          $v0, 0x9B($s1)
    ctx->pc = 0x1dffd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 155), (uint8_t)GPR_U32(ctx, 2));
label_1dffd8:
    // 0x1dffd8: 0x8f838cfc  lw          $v1, -0x7304($gp)
    ctx->pc = 0x1dffd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937852)));
label_1dffdc:
    // 0x1dffdc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dffdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1dffe0:
    // 0x1dffe0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dffe4:
    // 0x1dffe4: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1dffe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1dffe8:
    // 0x1dffe8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1dffec:
    if (ctx->pc == 0x1DFFECu) {
        ctx->pc = 0x1DFFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFFE8u;
        // 0x1dffec: 0x311c3  sra         $v0, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFFF0u;
        goto label_1dfff0;
    }
    ctx->pc = 0x1DFFE8u;
    {
        const bool branch_taken_0x1dffe8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DFFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFFE8u;
        // 0x1dffec: 0x311c3  sra         $v0, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dffe8) {
            ctx->pc = 0x1DFFF8u;
            goto label_1dfff8;
        }
    }
    ctx->pc = 0x1DFFF0u;
label_1dfff0:
    // 0x1dfff0: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x1dfff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
label_1dfff4:
    // 0x1dfff4: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x1dfff4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_1dfff8:
    // 0x1dfff8: 0xa222013b  sb          $v0, 0x13B($s1)
    ctx->pc = 0x1dfff8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 315), (uint8_t)GPR_U32(ctx, 2));
label_1dfffc:
    // 0x1dfffc: 0xa222012b  sb          $v0, 0x12B($s1)
    ctx->pc = 0x1dfffcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 299), (uint8_t)GPR_U32(ctx, 2));
label_1e0000:
    // 0x1e0000: 0x8f838cfc  lw          $v1, -0x7304($gp)
    ctx->pc = 0x1e0000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937852)));
label_1e0004:
    // 0x1e0004: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1e0004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1e0008:
    // 0x1e0008: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e0008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e000c:
    // 0x1e000c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1e000cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1e0010:
    // 0x1e0010: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1e0014:
    if (ctx->pc == 0x1E0014u) {
        ctx->pc = 0x1E0014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0010u;
        // 0x1e0014: 0x311c3  sra         $v0, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0018u;
        goto label_1e0018;
    }
    ctx->pc = 0x1E0010u;
    {
        const bool branch_taken_0x1e0010 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E0014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0010u;
        // 0x1e0014: 0x311c3  sra         $v0, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0010) {
            ctx->pc = 0x1E0020u;
            goto label_1e0020;
        }
    }
    ctx->pc = 0x1E0018u;
label_1e0018:
    // 0x1e0018: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x1e0018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
label_1e001c:
    // 0x1e001c: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x1e001cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_1e0020:
    // 0x1e0020: 0xa222015b  sb          $v0, 0x15B($s1)
    ctx->pc = 0x1e0020u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 347), (uint8_t)GPR_U32(ctx, 2));
label_1e0024:
    // 0x1e0024: 0xa222014b  sb          $v0, 0x14B($s1)
    ctx->pc = 0x1e0024u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 331), (uint8_t)GPR_U32(ctx, 2));
label_1e0028:
    // 0x1e0028: 0x8f838cfc  lw          $v1, -0x7304($gp)
    ctx->pc = 0x1e0028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937852)));
label_1e002c:
    // 0x1e002c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1e002cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1e0030:
    // 0x1e0030: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e0030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e0034:
    // 0x1e0034: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1e0034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1e0038:
    // 0x1e0038: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1e003c:
    if (ctx->pc == 0x1E003Cu) {
        ctx->pc = 0x1E003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0038u;
        // 0x1e003c: 0x219c3  sra         $v1, $v0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0040u;
        goto label_1e0040;
    }
    ctx->pc = 0x1E0038u;
    {
        const bool branch_taken_0x1e0038 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0038u;
        // 0x1e003c: 0x219c3  sra         $v1, $v0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0038) {
            ctx->pc = 0x1E0048u;
            goto label_1e0048;
        }
    }
    ctx->pc = 0x1E0040u;
label_1e0040:
    // 0x1e0040: 0x2442007f  addiu       $v0, $v0, 0x7F
    ctx->pc = 0x1e0040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
label_1e0044:
    // 0x1e0044: 0x219c3  sra         $v1, $v0, 7
    ctx->pc = 0x1e0044u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 7));
label_1e0048:
    // 0x1e0048: 0xa22301eb  sb          $v1, 0x1EB($s1)
    ctx->pc = 0x1e0048u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 491), (uint8_t)GPR_U32(ctx, 3));
label_1e004c:
    // 0x1e004c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1e004cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_1e0050:
    // 0x1e0050: 0xa22301db  sb          $v1, 0x1DB($s1)
    ctx->pc = 0x1e0050u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 475), (uint8_t)GPR_U32(ctx, 3));
label_1e0054:
    // 0x1e0054: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e0058:
    // 0x1e0058: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e0058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1e005c:
    // 0x1e005c: 0xa220020b  sb          $zero, 0x20B($s1)
    ctx->pc = 0x1e005cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 523), (uint8_t)GPR_U32(ctx, 0));
label_1e0060:
    // 0x1e0060: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1e0060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1e0064:
    // 0x1e0064: 0xa22001fb  sb          $zero, 0x1FB($s1)
    ctx->pc = 0x1e0064u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 507), (uint8_t)GPR_U32(ctx, 0));
label_1e0068:
    // 0x1e0068: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e0068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1e006c:
    // 0x1e006c: 0x8f838d00  lw          $v1, -0x7300($gp)
    ctx->pc = 0x1e006cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937856)));
label_1e0070:
    // 0x1e0070: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1e0070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1e0074:
    // 0x1e0074: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1e0074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1e0078:
    // 0x1e0078: 0xfe220270  sd          $v0, 0x270($s1)
    ctx->pc = 0x1e0078u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 624), GPR_U64(ctx, 2));
label_1e007c:
    // 0x1e007c: 0x24720028  addiu       $s2, $v1, 0x28
    ctx->pc = 0x1e007cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_1e0080:
    // 0x1e0080: 0xc05e234  jal         func_1788D0
label_1e0084:
    if (ctx->pc == 0x1E0084u) {
        ctx->pc = 0x1E0084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0080u;
        // 0x1e0084: 0x2645ffff  addiu       $a1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0088u;
        goto label_1e0088;
    }
    ctx->pc = 0x1E0080u;
    SET_GPR_U32(ctx, 31, 0x1E0088u);
    ctx->pc = 0x1E0084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0080u;
    // 0x1e0084: 0x2645ffff  addiu       $a1, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1E0080u, 0x1E0088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0088u;
label_1e0088:
    // 0x1e0088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e008c:
    // 0x1e008c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e008cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e0090:
    // 0x1e0090: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e0090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e0094:
    // 0x1e0094: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e0094u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0098:
    // 0x1e0098: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e0098u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e009c:
    // 0x1e009c: 0xc066c72  jal         func_19B1C8
label_1e00a0:
    if (ctx->pc == 0x1E00A0u) {
        ctx->pc = 0x1E00A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E009Cu;
        // 0x1e00a0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E00A4u;
        goto label_1e00a4;
    }
    ctx->pc = 0x1E009Cu;
    SET_GPR_U32(ctx, 31, 0x1E00A4u);
    ctx->pc = 0x1E00A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E009Cu;
    // 0x1e00a0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E009Cu, 0x1E00A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E00A4u;
label_1e00a4:
    // 0x1e00a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e00a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e00a8:
    // 0x1e00a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e00a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e00ac:
    // 0x1e00ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e00acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e00b0:
    // 0x1e00b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e00b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e00b4:
    // 0x1e00b4: 0x3e00008  jr          $ra
label_1e00b8:
    if (ctx->pc == 0x1E00B8u) {
        ctx->pc = 0x1E00B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E00B4u;
        // 0x1e00b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E00BCu;
        goto label_1e00bc;
    }
    ctx->pc = 0x1E00B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E00B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E00B4u;
        // 0x1e00b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E00B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E00BCu;
label_1e00bc:
    // 0x1e00bc: 0x0  nop
    ctx->pc = 0x1e00bcu;
    // NOP
label_1e00c0:
    // 0x1e00c0: 0x8f848cf8  lw          $a0, -0x7308($gp)
    ctx->pc = 0x1e00c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
label_1e00c4:
    // 0x1e00c4: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
label_1e00c8:
    if (ctx->pc == 0x1E00C8u) {
        ctx->pc = 0x1E00CCu;
        goto label_1e00cc;
    }
    ctx->pc = 0x1E00C4u;
    {
        const bool branch_taken_0x1e00c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e00c4) {
            ctx->pc = 0x1E0138u;
            goto label_1e0138;
        }
    }
    ctx->pc = 0x1E00CCu;
label_1e00cc:
    // 0x1e00cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e00ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e00d0:
    // 0x1e00d0: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
label_1e00d4:
    if (ctx->pc == 0x1E00D4u) {
        ctx->pc = 0x1E00D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E00D0u;
        // 0x1e00d4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E00D8u;
        goto label_1e00d8;
    }
    ctx->pc = 0x1E00D0u;
    {
        const bool branch_taken_0x1e00d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E00D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E00D0u;
        // 0x1e00d4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e00d0) {
            ctx->pc = 0x1E0114u;
            goto label_1e0114;
        }
    }
    ctx->pc = 0x1E00D8u;
label_1e00d8:
    // 0x1e00d8: 0x8f838cfc  lw          $v1, -0x7304($gp)
    ctx->pc = 0x1e00d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937852)));
label_1e00dc:
    // 0x1e00dc: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x1e00dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1e00e0:
    // 0x1e00e0: 0x28810080  slti        $at, $a0, 0x80
    ctx->pc = 0x1e00e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
label_1e00e4:
    // 0x1e00e4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1e00e8:
    if (ctx->pc == 0x1E00E8u) {
        ctx->pc = 0x1E00ECu;
        goto label_1e00ec;
    }
    ctx->pc = 0x1E00E4u;
    {
        const bool branch_taken_0x1e00e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e00e4) {
            ctx->pc = 0x1E00F4u;
            goto label_1e00f4;
        }
    }
    ctx->pc = 0x1E00ECu;
label_1e00ec:
    // 0x1e00ec: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e00f0:
    if (ctx->pc == 0x1E00F0u) {
        ctx->pc = 0x1E00F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E00ECu;
        // 0x1e00f0: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E00F4u;
        goto label_1e00f4;
    }
    ctx->pc = 0x1E00ECu;
    {
        const bool branch_taken_0x1e00ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E00F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E00ECu;
        // 0x1e00f0: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e00ec) {
            ctx->pc = 0x1E00FCu;
            goto label_1e00fc;
        }
    }
    ctx->pc = 0x1E00F4u;
label_1e00f4:
    // 0x1e00f4: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1e00f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e00f8:
    // 0x1e00f8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e00f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e00fc:
    // 0x1e00fc: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_1e0100:
    if (ctx->pc == 0x1E0100u) {
        ctx->pc = 0x1E0100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E00FCu;
        // 0x1e0100: 0xaf848cfc  sw          $a0, -0x7304($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937852), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0104u;
        goto label_1e0104;
    }
    ctx->pc = 0x1E00FCu;
    {
        const bool branch_taken_0x1e00fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E0100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E00FCu;
        // 0x1e0100: 0xaf848cfc  sw          $a0, -0x7304($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937852), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e00fc) {
            ctx->pc = 0x1E0138u;
            goto label_1e0138;
        }
    }
    ctx->pc = 0x1E0104u;
label_1e0104:
    // 0x1e0104: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e0104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e0108:
    // 0x1e0108: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e010c:
    if (ctx->pc == 0x1E010Cu) {
        ctx->pc = 0x1E010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0108u;
        // 0x1e010c: 0xaf838cf8  sw          $v1, -0x7308($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937848), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0110u;
        goto label_1e0110;
    }
    ctx->pc = 0x1E0108u;
    {
        const bool branch_taken_0x1e0108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0108u;
        // 0x1e010c: 0xaf838cf8  sw          $v1, -0x7308($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937848), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0108) {
            ctx->pc = 0x1E0138u;
            goto label_1e0138;
        }
    }
    ctx->pc = 0x1E0110u;
label_1e0110:
    // 0x1e0110: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1e0110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e0114:
    // 0x1e0114: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
label_1e0118:
    if (ctx->pc == 0x1E0118u) {
        ctx->pc = 0x1E011Cu;
        goto label_1e011c;
    }
    ctx->pc = 0x1E0114u;
    {
        const bool branch_taken_0x1e0114 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e0114) {
            ctx->pc = 0x1E0138u;
            goto label_1e0138;
        }
    }
    ctx->pc = 0x1E011Cu;
label_1e011c:
    // 0x1e011c: 0x8f838cfc  lw          $v1, -0x7304($gp)
    ctx->pc = 0x1e011cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937852)));
label_1e0120:
    // 0x1e0120: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1e0120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_1e0124:
    // 0x1e0124: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1e0124u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1e0128:
    // 0x1e0128: 0x1180a  movz        $v1, $zero, $at
    ctx->pc = 0x1e0128u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_1e012c:
    // 0x1e012c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1e0130:
    if (ctx->pc == 0x1E0130u) {
        ctx->pc = 0x1E0130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E012Cu;
        // 0x1e0130: 0xaf838cfc  sw          $v1, -0x7304($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937852), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0134u;
        goto label_1e0134;
    }
    ctx->pc = 0x1E012Cu;
    {
        const bool branch_taken_0x1e012c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E012Cu;
        // 0x1e0130: 0xaf838cfc  sw          $v1, -0x7304($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937852), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e012c) {
            ctx->pc = 0x1E0138u;
            goto label_1e0138;
        }
    }
    ctx->pc = 0x1E0134u;
label_1e0134:
    // 0x1e0134: 0xaf808cf8  sw          $zero, -0x7308($gp)
    ctx->pc = 0x1e0134u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937848), GPR_U32(ctx, 0));
label_1e0138:
    // 0x1e0138: 0x3e00008  jr          $ra
label_1e013c:
    if (ctx->pc == 0x1E013Cu) {
        ctx->pc = 0x1E0140u;
        goto label_1e0140;
    }
    ctx->pc = 0x1E0138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0140u;
label_1e0140:
    // 0x1e0140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e0144:
    // 0x1e0144: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1e0144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1e0148:
    // 0x1e0148: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e0148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e014c:
    // 0x1e014c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1e014cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1e0150:
    // 0x1e0150: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e0150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e0154:
    // 0x1e0154: 0x2442b6c0  addiu       $v0, $v0, -0x4940
    ctx->pc = 0x1e0154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948544));
label_1e0158:
    // 0x1e0158: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1e0158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e015c:
    // 0x1e015c: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x1e015cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1e0160:
    // 0x1e0160: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e0160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e0164:
    // 0x1e0164: 0xc0550d0  jal         func_154340
label_1e0168:
    if (ctx->pc == 0x1E0168u) {
        ctx->pc = 0x1E0168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0164u;
        // 0x1e0168: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E016Cu;
        goto label_1e016c;
    }
    ctx->pc = 0x1E0164u;
    SET_GPR_U32(ctx, 31, 0x1E016Cu);
    ctx->pc = 0x1E0168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0164u;
    // 0x1e0168: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154340u, 0x1E0164u, 0x1E016Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E016Cu;
label_1e016c:
    // 0x1e016c: 0x24030268  addiu       $v1, $zero, 0x268
    ctx->pc = 0x1e016cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 616));
label_1e0170:
    // 0x1e0170: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1e0170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1e0174:
    // 0x1e0174: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1e0174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1e0178:
    // 0x1e0178: 0x624023  subu        $t0, $v1, $v0
    ctx->pc = 0x1e0178u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e017c:
    // 0x1e017c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1e017cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1e0180:
    // 0x1e0180: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1e0180u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e0184:
    // 0x1e0184: 0x2409019a  addiu       $t1, $zero, 0x19A
    ctx->pc = 0x1e0184u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 410));
label_1e0188:
    // 0x1e0188: 0xc054e5c  jal         func_153970
label_1e018c:
    if (ctx->pc == 0x1E018Cu) {
        ctx->pc = 0x1E018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0188u;
        // 0x1e018c: 0x340affe0  ori         $t2, $zero, 0xFFE0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0190u;
        goto label_1e0190;
    }
    ctx->pc = 0x1E0188u;
    SET_GPR_U32(ctx, 31, 0x1E0190u);
    ctx->pc = 0x1E018Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0188u;
    // 0x1e018c: 0x340affe0  ori         $t2, $zero, 0xFFE0 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1E0188u, 0x1E0190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0190u;
label_1e0190:
    // 0x1e0190: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x1e0190u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e0194:
    // 0x1e0194: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x1e0194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
label_1e0198:
    // 0x1e0198: 0x24840680  addiu       $a0, $a0, 0x680
    ctx->pc = 0x1e0198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1664));
label_1e019c:
    // 0x1e019c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e019cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e01a0:
    // 0x1e01a0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1e01a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1e01a4:
    // 0x1e01a4: 0xc054e74  jal         func_1539D0
label_1e01a8:
    if (ctx->pc == 0x1E01A8u) {
        ctx->pc = 0x1E01A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E01A4u;
        // 0x1e01a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E01ACu;
        goto label_1e01ac;
    }
    ctx->pc = 0x1E01A4u;
    SET_GPR_U32(ctx, 31, 0x1E01ACu);
    ctx->pc = 0x1E01A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E01A4u;
    // 0x1e01a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1E01A4u, 0x1E01ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E01ACu;
label_1e01ac:
    // 0x1e01ac: 0xaf828d00  sw          $v0, -0x7300($gp)
    ctx->pc = 0x1e01acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937856), GPR_U32(ctx, 2));
label_1e01b0:
    // 0x1e01b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e01b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e01b4:
    // 0x1e01b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e01b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e01b8:
    // 0x1e01b8: 0x3e00008  jr          $ra
label_1e01bc:
    if (ctx->pc == 0x1E01BCu) {
        ctx->pc = 0x1E01BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E01B8u;
        // 0x1e01bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E01C0u;
        goto label_1e01c0;
    }
    ctx->pc = 0x1E01B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E01BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E01B8u;
        // 0x1e01bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E01B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E01C0u;
label_1e01c0:
    // 0x1e01c0: 0x8f848cf8  lw          $a0, -0x7308($gp)
    ctx->pc = 0x1e01c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
label_1e01c4:
    // 0x1e01c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e01c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e01c8:
    // 0x1e01c8: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
label_1e01cc:
    if (ctx->pc == 0x1E01CCu) {
        ctx->pc = 0x1E01CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E01C8u;
        // 0x1e01cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E01D0u;
        goto label_1e01d0;
    }
    ctx->pc = 0x1E01C8u;
    {
        const bool branch_taken_0x1e01c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E01CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E01C8u;
        // 0x1e01cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e01c8) {
            ctx->pc = 0x1E01D4u;
            goto label_1e01d4;
        }
    }
    ctx->pc = 0x1E01D0u;
label_1e01d0:
    // 0x1e01d0: 0xaf838cf8  sw          $v1, -0x7308($gp)
    ctx->pc = 0x1e01d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937848), GPR_U32(ctx, 3));
label_1e01d4:
    // 0x1e01d4: 0x3e00008  jr          $ra
label_1e01d8:
    if (ctx->pc == 0x1E01D8u) {
        ctx->pc = 0x1E01DCu;
        goto label_1e01dc;
    }
    ctx->pc = 0x1E01D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E01D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E01DCu;
label_1e01dc:
    // 0x1e01dc: 0x0  nop
    ctx->pc = 0x1e01dcu;
    // NOP
label_1e01e0:
    // 0x1e01e0: 0x8f838cf8  lw          $v1, -0x7308($gp)
    ctx->pc = 0x1e01e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
label_1e01e4:
    // 0x1e01e4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1e01e8:
    if (ctx->pc == 0x1E01E8u) {
        ctx->pc = 0x1E01E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E01E4u;
        // 0x1e01e8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E01ECu;
        goto label_1e01ec;
    }
    ctx->pc = 0x1E01E4u;
    {
        const bool branch_taken_0x1e01e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E01E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E01E4u;
        // 0x1e01e8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e01e4) {
            ctx->pc = 0x1E01F0u;
            goto label_1e01f0;
        }
    }
    ctx->pc = 0x1E01ECu;
label_1e01ec:
    // 0x1e01ec: 0xaf838cf8  sw          $v1, -0x7308($gp)
    ctx->pc = 0x1e01ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937848), GPR_U32(ctx, 3));
label_1e01f0:
    // 0x1e01f0: 0x3e00008  jr          $ra
label_1e01f4:
    if (ctx->pc == 0x1E01F4u) {
        ctx->pc = 0x1E01F8u;
        goto label_1e01f8;
    }
    ctx->pc = 0x1E01F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E01F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E01F8u;
label_1e01f8:
    // 0x1e01f8: 0x0  nop
    ctx->pc = 0x1e01f8u;
    // NOP
label_1e01fc:
    // 0x1e01fc: 0x0  nop
    ctx->pc = 0x1e01fcu;
    // NOP
label_1e0200:
    // 0x1e0200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e0200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1e0204:
    // 0x1e0204: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e0204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e0208:
    // 0x1e0208: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e0208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e020c:
    // 0x1e020c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e020cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e0210:
    // 0x1e0210: 0xc078178  jal         func_1E05E0
label_1e0214:
    if (ctx->pc == 0x1E0214u) {
        ctx->pc = 0x1E0214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0210u;
        // 0x1e0214: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0218u;
        goto label_1e0218;
    }
    ctx->pc = 0x1E0210u;
    SET_GPR_U32(ctx, 31, 0x1E0218u);
    ctx->pc = 0x1E0214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0210u;
    // 0x1e0214: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E05E0u;
    { ctx->pc = 0x1e05e0; return; }
    ctx->pc = 0x1E0218u;
label_1e0218:
    // 0x1e0218: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e0218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e021c:
    // 0x1e021c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e021cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0220:
    // 0x1e0220: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x1e0220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1e0224:
    // 0x1e0224: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1e0224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1e0228:
    // 0x1e0228: 0xc05b4d4  jal         func_16D350
label_1e022c:
    if (ctx->pc == 0x1E022Cu) {
        ctx->pc = 0x1E022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0228u;
        // 0x1e022c: 0x2408003c  addiu       $t0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0230u;
        goto label_1e0230;
    }
    ctx->pc = 0x1E0228u;
    SET_GPR_U32(ctx, 31, 0x1E0230u);
    ctx->pc = 0x1E022Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0228u;
    // 0x1e022c: 0x2408003c  addiu       $t0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D350u, 0x1E0228u, 0x1E0230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0230u;
label_1e0230:
    // 0x1e0230: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1e0230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1e0234:
    // 0x1e0234: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e0234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0238:
    // 0x1e0238: 0xc04e188  jal         func_138620
label_1e023c:
    if (ctx->pc == 0x1E023Cu) {
        ctx->pc = 0x1E023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0238u;
        // 0x1e023c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0240u;
        goto label_1e0240;
    }
    ctx->pc = 0x1E0238u;
    SET_GPR_U32(ctx, 31, 0x1E0240u);
    ctx->pc = 0x1E023Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0238u;
    // 0x1e023c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x1E0238u, 0x1E0240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0240u;
label_1e0240:
    // 0x1e0240: 0xc04e198  jal         func_138660
label_1e0244:
    if (ctx->pc == 0x1E0244u) {
        ctx->pc = 0x1E0248u;
        goto label_1e0248;
    }
    ctx->pc = 0x1E0240u;
    SET_GPR_U32(ctx, 31, 0x1E0248u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x1E0240u, 0x1E0248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0248u;
label_1e0248:
    // 0x1e0248: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
label_1e024c:
    if (ctx->pc == 0x1E024Cu) {
        ctx->pc = 0x1E0250u;
        goto label_1e0250;
    }
    ctx->pc = 0x1E0248u;
    {
        const bool branch_taken_0x1e0248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0248) {
            ctx->pc = 0x1E0320u;
            goto label_1e0320;
        }
    }
    ctx->pc = 0x1E0250u;
label_1e0250:
    // 0x1e0250: 0xc084d0c  jal         func_213430
label_1e0254:
    if (ctx->pc == 0x1E0254u) {
        ctx->pc = 0x1E0258u;
        goto label_1e0258;
    }
    ctx->pc = 0x1E0250u;
    SET_GPR_U32(ctx, 31, 0x1E0258u);
    ctx->pc = 0x213430u;
    { ctx->pc = 0x213430; return; }
    ctx->pc = 0x1E0258u;
label_1e0258:
    // 0x1e0258: 0x8f828d14  lw          $v0, -0x72EC($gp)
    ctx->pc = 0x1e0258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937876)));
label_1e025c:
    // 0x1e025c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_1e0260:
    if (ctx->pc == 0x1E0260u) {
        ctx->pc = 0x1E0264u;
        goto label_1e0264;
    }
    ctx->pc = 0x1E025Cu;
    {
        const bool branch_taken_0x1e025c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e025c) {
            ctx->pc = 0x1E02CCu;
            goto label_1e02cc;
        }
    }
    ctx->pc = 0x1E0264u;
label_1e0264:
    // 0x1e0264: 0x8f828d1c  lw          $v0, -0x72E4($gp)
    ctx->pc = 0x1e0264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937884)));
label_1e0268:
    // 0x1e0268: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e026c:
    // 0x1e026c: 0xaf828d1c  sw          $v0, -0x72E4($gp)
    ctx->pc = 0x1e026cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937884), GPR_U32(ctx, 2));
label_1e0270:
    // 0x1e0270: 0x8f838d1c  lw          $v1, -0x72E4($gp)
    ctx->pc = 0x1e0270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937884)));
label_1e0274:
    // 0x1e0274: 0x2462ffe0  addiu       $v0, $v1, -0x20
    ctx->pc = 0x1e0274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_1e0278:
    // 0x1e0278: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_1e027c:
    if (ctx->pc == 0x1E027Cu) {
        ctx->pc = 0x1E0280u;
        goto label_1e0280;
    }
    ctx->pc = 0x1E0278u;
    {
        const bool branch_taken_0x1e0278 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1e0278) {
            ctx->pc = 0x1E0284u;
            goto label_1e0284;
        }
    }
    ctx->pc = 0x1E0280u;
label_1e0280:
    // 0x1e0280: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e0280u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0284:
    // 0x1e0284: 0xaf828d20  sw          $v0, -0x72E0($gp)
    ctx->pc = 0x1e0284u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937888), GPR_U32(ctx, 2));
label_1e0288:
    // 0x1e0288: 0x2462ffc0  addiu       $v0, $v1, -0x40
    ctx->pc = 0x1e0288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_1e028c:
    // 0x1e028c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_1e0290:
    if (ctx->pc == 0x1E0290u) {
        ctx->pc = 0x1E0294u;
        goto label_1e0294;
    }
    ctx->pc = 0x1E028Cu;
    {
        const bool branch_taken_0x1e028c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1e028c) {
            ctx->pc = 0x1E0298u;
            goto label_1e0298;
        }
    }
    ctx->pc = 0x1E0294u;
label_1e0294:
    // 0x1e0294: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e0294u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0298:
    // 0x1e0298: 0xaf828d24  sw          $v0, -0x72DC($gp)
    ctx->pc = 0x1e0298u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937892), GPR_U32(ctx, 2));
label_1e029c:
    // 0x1e029c: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x1e029cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_1e02a0:
    // 0x1e02a0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1e02a4:
    if (ctx->pc == 0x1E02A4u) {
        ctx->pc = 0x1E02A8u;
        goto label_1e02a8;
    }
    ctx->pc = 0x1E02A0u;
    {
        const bool branch_taken_0x1e02a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e02a0) {
            ctx->pc = 0x1E02CCu;
            goto label_1e02cc;
        }
    }
    ctx->pc = 0x1E02A8u;
label_1e02a8:
    // 0x1e02a8: 0x8f838d18  lw          $v1, -0x72E8($gp)
    ctx->pc = 0x1e02a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937880)));
label_1e02ac:
    // 0x1e02ac: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x1e02acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
label_1e02b0:
    // 0x1e02b0: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x1e02b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1e02b4:
    // 0x1e02b4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1e02b8:
    if (ctx->pc == 0x1E02B8u) {
        ctx->pc = 0x1E02B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E02B4u;
        // 0x1e02b8: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E02BCu;
        goto label_1e02bc;
    }
    ctx->pc = 0x1E02B4u;
    {
        const bool branch_taken_0x1e02b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E02B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E02B4u;
        // 0x1e02b8: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e02b4) {
            ctx->pc = 0x1E02C4u;
            goto label_1e02c4;
        }
    }
    ctx->pc = 0x1E02BCu;
label_1e02bc:
    // 0x1e02bc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1e02c0:
    if (ctx->pc == 0x1E02C0u) {
        ctx->pc = 0x1E02C4u;
        goto label_1e02c4;
    }
    ctx->pc = 0x1E02BCu;
    {
        const bool branch_taken_0x1e02bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e02bc) {
            ctx->pc = 0x1E02CCu;
            goto label_1e02cc;
        }
    }
    ctx->pc = 0x1E02C4u;
label_1e02c4:
    // 0x1e02c4: 0x0  nop
    ctx->pc = 0x1e02c4u;
    // NOP
label_1e02c8:
    // 0x1e02c8: 0xaf808d24  sw          $zero, -0x72DC($gp)
    ctx->pc = 0x1e02c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937892), GPR_U32(ctx, 0));
label_1e02cc:
    // 0x1e02cc: 0x0  nop
    ctx->pc = 0x1e02ccu;
    // NOP
label_1e02d0:
    // 0x1e02d0: 0xc04e168  jal         func_1385A0
label_1e02d4:
    if (ctx->pc == 0x1E02D4u) {
        ctx->pc = 0x1E02D8u;
        goto label_1e02d8;
    }
    ctx->pc = 0x1E02D0u;
    SET_GPR_U32(ctx, 31, 0x1E02D8u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1E02D0u, 0x1E02D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E02D8u;
label_1e02d8:
    // 0x1e02d8: 0xc084cb0  jal         func_2132C0
label_1e02dc:
    if (ctx->pc == 0x1E02DCu) {
        ctx->pc = 0x1E02E0u;
        goto label_1e02e0;
    }
    ctx->pc = 0x1E02D8u;
    SET_GPR_U32(ctx, 31, 0x1E02E0u);
    ctx->pc = 0x2132C0u;
    { ctx->pc = 0x2132c0; return; }
    ctx->pc = 0x1E02E0u;
label_1e02e0:
    // 0x1e02e0: 0xc0782a0  jal         func_1E0A80
label_1e02e4:
    if (ctx->pc == 0x1E02E4u) {
        ctx->pc = 0x1E02E8u;
        goto label_1e02e8;
    }
    ctx->pc = 0x1E02E0u;
    SET_GPR_U32(ctx, 31, 0x1E02E8u);
    ctx->pc = 0x1E0A80u;
    { ctx->pc = 0x1e0a80; return; }
    ctx->pc = 0x1E02E8u;
label_1e02e8:
    // 0x1e02e8: 0xc04e120  jal         func_138480
label_1e02ec:
    if (ctx->pc == 0x1E02ECu) {
        ctx->pc = 0x1E02F0u;
        goto label_1e02f0;
    }
    ctx->pc = 0x1E02E8u;
    SET_GPR_U32(ctx, 31, 0x1E02F0u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1E02E8u, 0x1E02F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E02F0u;
label_1e02f0:
    // 0x1e02f0: 0xc05b578  jal         func_16D5E0
label_1e02f4:
    if (ctx->pc == 0x1E02F4u) {
        ctx->pc = 0x1E02F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E02F0u;
        // 0x1e02f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E02F8u;
        goto label_1e02f8;
    }
    ctx->pc = 0x1E02F0u;
    SET_GPR_U32(ctx, 31, 0x1E02F8u);
    ctx->pc = 0x1E02F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E02F0u;
    // 0x1e02f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1E02F0u, 0x1E02F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E02F8u;
label_1e02f8:
    // 0x1e02f8: 0xc060258  jal         func_180960
label_1e02fc:
    if (ctx->pc == 0x1E02FCu) {
        ctx->pc = 0x1E0300u;
        goto label_1e0300;
    }
    ctx->pc = 0x1E02F8u;
    SET_GPR_U32(ctx, 31, 0x1E0300u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1E02F8u, 0x1E0300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0300u;
label_1e0300:
    // 0x1e0300: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x1e0300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
label_1e0304:
    // 0x1e0304: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1e0308:
    if (ctx->pc == 0x1E0308u) {
        ctx->pc = 0x1E0308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0304u;
        // 0x1e0308: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E030Cu;
        goto label_1e030c;
    }
    ctx->pc = 0x1E0304u;
    {
        const bool branch_taken_0x1e0304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0304u;
        // 0x1e0308: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0304) {
            ctx->pc = 0x1E0310u;
            goto label_1e0310;
        }
    }
    ctx->pc = 0x1E030Cu;
label_1e030c:
    // 0x1e030c: 0xaf828d10  sw          $v0, -0x72F0($gp)
    ctx->pc = 0x1e030cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937872), GPR_U32(ctx, 2));
label_1e0310:
    // 0x1e0310: 0xc04e198  jal         func_138660
label_1e0314:
    if (ctx->pc == 0x1E0314u) {
        ctx->pc = 0x1E0318u;
        goto label_1e0318;
    }
    ctx->pc = 0x1E0310u;
    SET_GPR_U32(ctx, 31, 0x1E0318u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x1E0310u, 0x1E0318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0318u;
label_1e0318:
    // 0x1e0318: 0x1040ffcd  beqz        $v0, . + 4 + (-0x33 << 2)
label_1e031c:
    if (ctx->pc == 0x1E031Cu) {
        ctx->pc = 0x1E0320u;
        goto label_1e0320;
    }
    ctx->pc = 0x1E0318u;
    {
        const bool branch_taken_0x1e0318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0318) {
            ctx->pc = 0x1E0250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0250;
        }
    }
    ctx->pc = 0x1E0320u;
label_1e0320:
    // 0x1e0320: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e0324:
    // 0x1e0324: 0xaf828d14  sw          $v0, -0x72EC($gp)
    ctx->pc = 0x1e0324u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937876), GPR_U32(ctx, 2));
label_1e0328:
    // 0x1e0328: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1e0328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_1e032c:
    // 0x1e032c: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
label_1e0330:
    if (ctx->pc == 0x1E0330u) {
        ctx->pc = 0x1E0334u;
        goto label_1e0334;
    }
    ctx->pc = 0x1E032Cu;
    {
        const bool branch_taken_0x1e032c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e032c) {
            ctx->pc = 0x1E045Cu;
            goto label_1e045c;
        }
    }
    ctx->pc = 0x1E0334u;
label_1e0334:
    // 0x1e0334: 0x8f828d20  lw          $v0, -0x72E0($gp)
    ctx->pc = 0x1e0334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937888)));
label_1e0338:
    // 0x1e0338: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e0338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e033c:
    // 0x1e033c: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
label_1e0340:
    if (ctx->pc == 0x1E0340u) {
        ctx->pc = 0x1E0340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E033Cu;
        // 0x1e0340: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0344u;
        goto label_1e0344;
    }
    ctx->pc = 0x1E033Cu;
    {
        const bool branch_taken_0x1e033c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1E0340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E033Cu;
        // 0x1e0340: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e033c) {
            ctx->pc = 0x1E0354u;
            goto label_1e0354;
        }
    }
    ctx->pc = 0x1E0344u;
label_1e0344:
    // 0x1e0344: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x1e0344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1e0348:
    // 0x1e0348: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1e0348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1e034c:
    // 0x1e034c: 0xc05b4d4  jal         func_16D350
label_1e0350:
    if (ctx->pc == 0x1E0350u) {
        ctx->pc = 0x1E0350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E034Cu;
        // 0x1e0350: 0x2408003c  addiu       $t0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0354u;
        goto label_1e0354;
    }
    ctx->pc = 0x1E034Cu;
    SET_GPR_U32(ctx, 31, 0x1E0354u);
    ctx->pc = 0x1E0350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E034Cu;
    // 0x1e0350: 0x2408003c  addiu       $t0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D350u, 0x1E034Cu, 0x1E0354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0354u;
label_1e0354:
    // 0x1e0354: 0x0  nop
    ctx->pc = 0x1e0354u;
    // NOP
label_1e0358:
    // 0x1e0358: 0x8f828d24  lw          $v0, -0x72DC($gp)
    ctx->pc = 0x1e0358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937892)));
label_1e035c:
    // 0x1e035c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e035cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e0360:
    // 0x1e0360: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
label_1e0364:
    if (ctx->pc == 0x1E0364u) {
        ctx->pc = 0x1E0364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0360u;
        // 0x1e0364: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0368u;
        goto label_1e0368;
    }
    ctx->pc = 0x1E0360u;
    {
        const bool branch_taken_0x1e0360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1E0364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0360u;
        // 0x1e0364: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0360) {
            ctx->pc = 0x1E0378u;
            goto label_1e0378;
        }
    }
    ctx->pc = 0x1E0368u;
label_1e0368:
    // 0x1e0368: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x1e0368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1e036c:
    // 0x1e036c: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1e036cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1e0370:
    // 0x1e0370: 0xc05b4d4  jal         func_16D350
label_1e0374:
    if (ctx->pc == 0x1E0374u) {
        ctx->pc = 0x1E0374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0370u;
        // 0x1e0374: 0x2408003c  addiu       $t0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0378u;
        goto label_1e0378;
    }
    ctx->pc = 0x1E0370u;
    SET_GPR_U32(ctx, 31, 0x1E0378u);
    ctx->pc = 0x1E0374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0370u;
    // 0x1e0374: 0x2408003c  addiu       $t0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D350u, 0x1E0370u, 0x1E0378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0378u;
label_1e0378:
    // 0x1e0378: 0x8f828d1c  lw          $v0, -0x72E4($gp)
    ctx->pc = 0x1e0378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937884)));
label_1e037c:
    // 0x1e037c: 0x28410100  slti        $at, $v0, 0x100
    ctx->pc = 0x1e037cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
label_1e0380:
    // 0x1e0380: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
label_1e0384:
    if (ctx->pc == 0x1E0384u) {
        ctx->pc = 0x1E0388u;
        goto label_1e0388;
    }
    ctx->pc = 0x1E0380u;
    {
        const bool branch_taken_0x1e0380 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0380) {
            ctx->pc = 0x1E045Cu;
            goto label_1e045c;
        }
    }
    ctx->pc = 0x1E0388u;
label_1e0388:
    // 0x1e0388: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1e0388u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1e038c:
    // 0x1e038c: 0x30421008  andi        $v0, $v0, 0x1008
    ctx->pc = 0x1e038cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4104);
label_1e0390:
    // 0x1e0390: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
label_1e0394:
    if (ctx->pc == 0x1E0394u) {
        ctx->pc = 0x1E0398u;
        goto label_1e0398;
    }
    ctx->pc = 0x1E0390u;
    {
        const bool branch_taken_0x1e0390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0390) {
            ctx->pc = 0x1E045Cu;
            goto label_1e045c;
        }
    }
    ctx->pc = 0x1E0398u;
label_1e0398:
    // 0x1e0398: 0xc084d0c  jal         func_213430
label_1e039c:
    if (ctx->pc == 0x1E039Cu) {
        ctx->pc = 0x1E03A0u;
        goto label_1e03a0;
    }
    ctx->pc = 0x1E0398u;
    SET_GPR_U32(ctx, 31, 0x1E03A0u);
    ctx->pc = 0x213430u;
    { ctx->pc = 0x213430; return; }
    ctx->pc = 0x1E03A0u;
label_1e03a0:
    // 0x1e03a0: 0x8f828d14  lw          $v0, -0x72EC($gp)
    ctx->pc = 0x1e03a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937876)));
label_1e03a4:
    // 0x1e03a4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_1e03a8:
    if (ctx->pc == 0x1E03A8u) {
        ctx->pc = 0x1E03ACu;
        goto label_1e03ac;
    }
    ctx->pc = 0x1E03A4u;
    {
        const bool branch_taken_0x1e03a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e03a4) {
            ctx->pc = 0x1E0414u;
            goto label_1e0414;
        }
    }
    ctx->pc = 0x1E03ACu;
label_1e03ac:
    // 0x1e03ac: 0x8f828d1c  lw          $v0, -0x72E4($gp)
    ctx->pc = 0x1e03acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937884)));
label_1e03b0:
    // 0x1e03b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e03b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e03b4:
    // 0x1e03b4: 0xaf828d1c  sw          $v0, -0x72E4($gp)
    ctx->pc = 0x1e03b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937884), GPR_U32(ctx, 2));
label_1e03b8:
    // 0x1e03b8: 0x8f838d1c  lw          $v1, -0x72E4($gp)
    ctx->pc = 0x1e03b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937884)));
label_1e03bc:
    // 0x1e03bc: 0x2462ffe0  addiu       $v0, $v1, -0x20
    ctx->pc = 0x1e03bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_1e03c0:
    // 0x1e03c0: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_1e03c4:
    if (ctx->pc == 0x1E03C4u) {
        ctx->pc = 0x1E03C8u;
        goto label_1e03c8;
    }
    ctx->pc = 0x1E03C0u;
    {
        const bool branch_taken_0x1e03c0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1e03c0) {
            ctx->pc = 0x1E03CCu;
            goto label_1e03cc;
        }
    }
    ctx->pc = 0x1E03C8u;
label_1e03c8:
    // 0x1e03c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e03c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e03cc:
    // 0x1e03cc: 0xaf828d20  sw          $v0, -0x72E0($gp)
    ctx->pc = 0x1e03ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937888), GPR_U32(ctx, 2));
label_1e03d0:
    // 0x1e03d0: 0x2462ffc0  addiu       $v0, $v1, -0x40
    ctx->pc = 0x1e03d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_1e03d4:
    // 0x1e03d4: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_1e03d8:
    if (ctx->pc == 0x1E03D8u) {
        ctx->pc = 0x1E03DCu;
        goto label_1e03dc;
    }
    ctx->pc = 0x1E03D4u;
    {
        const bool branch_taken_0x1e03d4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1e03d4) {
            ctx->pc = 0x1E03E0u;
            goto label_1e03e0;
        }
    }
    ctx->pc = 0x1E03DCu;
label_1e03dc:
    // 0x1e03dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e03dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e03e0:
    // 0x1e03e0: 0xaf828d24  sw          $v0, -0x72DC($gp)
    ctx->pc = 0x1e03e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937892), GPR_U32(ctx, 2));
label_1e03e4:
    // 0x1e03e4: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x1e03e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_1e03e8:
    // 0x1e03e8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1e03ec:
    if (ctx->pc == 0x1E03ECu) {
        ctx->pc = 0x1E03F0u;
        goto label_1e03f0;
    }
    ctx->pc = 0x1E03E8u;
    {
        const bool branch_taken_0x1e03e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e03e8) {
            ctx->pc = 0x1E0414u;
            goto label_1e0414;
        }
    }
    ctx->pc = 0x1E03F0u;
label_1e03f0:
    // 0x1e03f0: 0x8f838d18  lw          $v1, -0x72E8($gp)
    ctx->pc = 0x1e03f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937880)));
label_1e03f4:
    // 0x1e03f4: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x1e03f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
label_1e03f8:
    // 0x1e03f8: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x1e03f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1e03fc:
    // 0x1e03fc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1e0400:
    if (ctx->pc == 0x1E0400u) {
        ctx->pc = 0x1E0400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E03FCu;
        // 0x1e0400: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0404u;
        goto label_1e0404;
    }
    ctx->pc = 0x1E03FCu;
    {
        const bool branch_taken_0x1e03fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E03FCu;
        // 0x1e0400: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e03fc) {
            ctx->pc = 0x1E040Cu;
            goto label_1e040c;
        }
    }
    ctx->pc = 0x1E0404u;
label_1e0404:
    // 0x1e0404: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1e0408:
    if (ctx->pc == 0x1E0408u) {
        ctx->pc = 0x1E040Cu;
        goto label_1e040c;
    }
    ctx->pc = 0x1E0404u;
    {
        const bool branch_taken_0x1e0404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e0404) {
            ctx->pc = 0x1E0414u;
            goto label_1e0414;
        }
    }
    ctx->pc = 0x1E040Cu;
label_1e040c:
    // 0x1e040c: 0x0  nop
    ctx->pc = 0x1e040cu;
    // NOP
label_1e0410:
    // 0x1e0410: 0xaf808d24  sw          $zero, -0x72DC($gp)
    ctx->pc = 0x1e0410u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937892), GPR_U32(ctx, 0));
label_1e0414:
    // 0x1e0414: 0x0  nop
    ctx->pc = 0x1e0414u;
    // NOP
label_1e0418:
    // 0x1e0418: 0xc04e168  jal         func_1385A0
label_1e041c:
    if (ctx->pc == 0x1E041Cu) {
        ctx->pc = 0x1E0420u;
        goto label_1e0420;
    }
    ctx->pc = 0x1E0418u;
    SET_GPR_U32(ctx, 31, 0x1E0420u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1E0418u, 0x1E0420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0420u;
label_1e0420:
    // 0x1e0420: 0xc084cb0  jal         func_2132C0
label_1e0424:
    if (ctx->pc == 0x1E0424u) {
        ctx->pc = 0x1E0428u;
        goto label_1e0428;
    }
    ctx->pc = 0x1E0420u;
    SET_GPR_U32(ctx, 31, 0x1E0428u);
    ctx->pc = 0x2132C0u;
    { ctx->pc = 0x2132c0; return; }
    ctx->pc = 0x1E0428u;
label_1e0428:
    // 0x1e0428: 0xc0782a0  jal         func_1E0A80
label_1e042c:
    if (ctx->pc == 0x1E042Cu) {
        ctx->pc = 0x1E0430u;
        goto label_1e0430;
    }
    ctx->pc = 0x1E0428u;
    SET_GPR_U32(ctx, 31, 0x1E0430u);
    ctx->pc = 0x1E0A80u;
    { ctx->pc = 0x1e0a80; return; }
    ctx->pc = 0x1E0430u;
label_1e0430:
    // 0x1e0430: 0xc04e120  jal         func_138480
label_1e0434:
    if (ctx->pc == 0x1E0434u) {
        ctx->pc = 0x1E0438u;
        goto label_1e0438;
    }
    ctx->pc = 0x1E0430u;
    SET_GPR_U32(ctx, 31, 0x1E0438u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1E0430u, 0x1E0438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0438u;
label_1e0438:
    // 0x1e0438: 0xc05b578  jal         func_16D5E0
label_1e043c:
    if (ctx->pc == 0x1E043Cu) {
        ctx->pc = 0x1E043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0438u;
        // 0x1e043c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0440u;
        goto label_1e0440;
    }
    ctx->pc = 0x1E0438u;
    SET_GPR_U32(ctx, 31, 0x1E0440u);
    ctx->pc = 0x1E043Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0438u;
    // 0x1e043c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1E0438u, 0x1E0440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0440u;
label_1e0440:
    // 0x1e0440: 0xc060258  jal         func_180960
label_1e0444:
    if (ctx->pc == 0x1E0444u) {
        ctx->pc = 0x1E0448u;
        goto label_1e0448;
    }
    ctx->pc = 0x1E0440u;
    SET_GPR_U32(ctx, 31, 0x1E0448u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1E0440u, 0x1E0448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0448u;
label_1e0448:
    // 0x1e0448: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x1e0448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
label_1e044c:
    // 0x1e044c: 0x1040ffb6  beqz        $v0, . + 4 + (-0x4A << 2)
label_1e0450:
    if (ctx->pc == 0x1E0450u) {
        ctx->pc = 0x1E0450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E044Cu;
        // 0x1e0450: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0454u;
        goto label_1e0454;
    }
    ctx->pc = 0x1E044Cu;
    {
        const bool branch_taken_0x1e044c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E044Cu;
        // 0x1e0450: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e044c) {
            ctx->pc = 0x1E0328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0328;
        }
    }
    ctx->pc = 0x1E0454u;
label_1e0454:
    // 0x1e0454: 0x1000ffb4  b           . + 4 + (-0x4C << 2)
label_1e0458:
    if (ctx->pc == 0x1E0458u) {
        ctx->pc = 0x1E0458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0454u;
        // 0x1e0458: 0xaf828d10  sw          $v0, -0x72F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937872), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E045Cu;
        goto label_1e045c;
    }
    ctx->pc = 0x1E0454u;
    {
        const bool branch_taken_0x1e0454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0454u;
        // 0x1e0458: 0xaf828d10  sw          $v0, -0x72F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937872), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0454) {
            ctx->pc = 0x1E0328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0328;
        }
    }
    ctx->pc = 0x1E045Cu;
label_1e045c:
    // 0x1e045c: 0x0  nop
    ctx->pc = 0x1e045cu;
    // NOP
label_1e0460:
    // 0x1e0460: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1e0460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e0464:
    // 0x1e0464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e0464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0468:
    // 0x1e0468: 0xc04e188  jal         func_138620
label_1e046c:
    if (ctx->pc == 0x1E046Cu) {
        ctx->pc = 0x1E046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0468u;
        // 0x1e046c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0470u;
        goto label_1e0470;
    }
    ctx->pc = 0x1E0468u;
    SET_GPR_U32(ctx, 31, 0x1E0470u);
    ctx->pc = 0x1E046Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0468u;
    // 0x1e046c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x1E0468u, 0x1E0470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0470u;
label_1e0470:
    // 0x1e0470: 0xc04e198  jal         func_138660
label_1e0474:
    if (ctx->pc == 0x1E0474u) {
        ctx->pc = 0x1E0478u;
        goto label_1e0478;
    }
    ctx->pc = 0x1E0470u;
    SET_GPR_U32(ctx, 31, 0x1E0478u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x1E0470u, 0x1E0478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0478u;
label_1e0478:
    // 0x1e0478: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
label_1e047c:
    if (ctx->pc == 0x1E047Cu) {
        ctx->pc = 0x1E0480u;
        goto label_1e0480;
    }
    ctx->pc = 0x1E0478u;
    {
        const bool branch_taken_0x1e0478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0478) {
            ctx->pc = 0x1E0550u;
            goto label_1e0550;
        }
    }
    ctx->pc = 0x1E0480u;
label_1e0480:
    // 0x1e0480: 0xc084d0c  jal         func_213430
label_1e0484:
    if (ctx->pc == 0x1E0484u) {
        ctx->pc = 0x1E0488u;
        goto label_1e0488;
    }
    ctx->pc = 0x1E0480u;
    SET_GPR_U32(ctx, 31, 0x1E0488u);
    ctx->pc = 0x213430u;
    { ctx->pc = 0x213430; return; }
    ctx->pc = 0x1E0488u;
label_1e0488:
    // 0x1e0488: 0x8f828d14  lw          $v0, -0x72EC($gp)
    ctx->pc = 0x1e0488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937876)));
label_1e048c:
    // 0x1e048c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_1e0490:
    if (ctx->pc == 0x1E0490u) {
        ctx->pc = 0x1E0494u;
        goto label_1e0494;
    }
    ctx->pc = 0x1E048Cu;
    {
        const bool branch_taken_0x1e048c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e048c) {
            ctx->pc = 0x1E04FCu;
            goto label_1e04fc;
        }
    }
    ctx->pc = 0x1E0494u;
label_1e0494:
    // 0x1e0494: 0x8f828d1c  lw          $v0, -0x72E4($gp)
    ctx->pc = 0x1e0494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937884)));
label_1e0498:
    // 0x1e0498: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e049c:
    // 0x1e049c: 0xaf828d1c  sw          $v0, -0x72E4($gp)
    ctx->pc = 0x1e049cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937884), GPR_U32(ctx, 2));
label_1e04a0:
    // 0x1e04a0: 0x8f838d1c  lw          $v1, -0x72E4($gp)
    ctx->pc = 0x1e04a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937884)));
label_1e04a4:
    // 0x1e04a4: 0x2462ffe0  addiu       $v0, $v1, -0x20
    ctx->pc = 0x1e04a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_1e04a8:
    // 0x1e04a8: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_1e04ac:
    if (ctx->pc == 0x1E04ACu) {
        ctx->pc = 0x1E04B0u;
        goto label_1e04b0;
    }
    ctx->pc = 0x1E04A8u;
    {
        const bool branch_taken_0x1e04a8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1e04a8) {
            ctx->pc = 0x1E04B4u;
            goto label_1e04b4;
        }
    }
    ctx->pc = 0x1E04B0u;
label_1e04b0:
    // 0x1e04b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e04b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e04b4:
    // 0x1e04b4: 0xaf828d20  sw          $v0, -0x72E0($gp)
    ctx->pc = 0x1e04b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937888), GPR_U32(ctx, 2));
label_1e04b8:
    // 0x1e04b8: 0x2462ffc0  addiu       $v0, $v1, -0x40
    ctx->pc = 0x1e04b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_1e04bc:
    // 0x1e04bc: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_1e04c0:
    if (ctx->pc == 0x1E04C0u) {
        ctx->pc = 0x1E04C4u;
        goto label_1e04c4;
    }
    ctx->pc = 0x1E04BCu;
    {
        const bool branch_taken_0x1e04bc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1e04bc) {
            ctx->pc = 0x1E04C8u;
            goto label_1e04c8;
        }
    }
    ctx->pc = 0x1E04C4u;
label_1e04c4:
    // 0x1e04c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e04c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e04c8:
    // 0x1e04c8: 0xaf828d24  sw          $v0, -0x72DC($gp)
    ctx->pc = 0x1e04c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937892), GPR_U32(ctx, 2));
label_1e04cc:
    // 0x1e04cc: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x1e04ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_1e04d0:
    // 0x1e04d0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1e04d4:
    if (ctx->pc == 0x1E04D4u) {
        ctx->pc = 0x1E04D8u;
        goto label_1e04d8;
    }
    ctx->pc = 0x1E04D0u;
    {
        const bool branch_taken_0x1e04d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e04d0) {
            ctx->pc = 0x1E04FCu;
            goto label_1e04fc;
        }
    }
    ctx->pc = 0x1E04D8u;
label_1e04d8:
    // 0x1e04d8: 0x8f838d18  lw          $v1, -0x72E8($gp)
    ctx->pc = 0x1e04d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937880)));
label_1e04dc:
    // 0x1e04dc: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x1e04dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
label_1e04e0:
    // 0x1e04e0: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x1e04e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1e04e4:
    // 0x1e04e4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1e04e8:
    if (ctx->pc == 0x1E04E8u) {
        ctx->pc = 0x1E04E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E04E4u;
        // 0x1e04e8: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E04ECu;
        goto label_1e04ec;
    }
    ctx->pc = 0x1E04E4u;
    {
        const bool branch_taken_0x1e04e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E04E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E04E4u;
        // 0x1e04e8: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e04e4) {
            ctx->pc = 0x1E04F4u;
            goto label_1e04f4;
        }
    }
    ctx->pc = 0x1E04ECu;
label_1e04ec:
    // 0x1e04ec: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1e04f0:
    if (ctx->pc == 0x1E04F0u) {
        ctx->pc = 0x1E04F4u;
        goto label_1e04f4;
    }
    ctx->pc = 0x1E04ECu;
    {
        const bool branch_taken_0x1e04ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e04ec) {
            ctx->pc = 0x1E04FCu;
            goto label_1e04fc;
        }
    }
    ctx->pc = 0x1E04F4u;
label_1e04f4:
    // 0x1e04f4: 0x0  nop
    ctx->pc = 0x1e04f4u;
    // NOP
label_1e04f8:
    // 0x1e04f8: 0xaf808d24  sw          $zero, -0x72DC($gp)
    ctx->pc = 0x1e04f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937892), GPR_U32(ctx, 0));
label_1e04fc:
    // 0x1e04fc: 0x0  nop
    ctx->pc = 0x1e04fcu;
    // NOP
label_1e0500:
    // 0x1e0500: 0xc04e168  jal         func_1385A0
label_1e0504:
    if (ctx->pc == 0x1E0504u) {
        ctx->pc = 0x1E0508u;
        goto label_1e0508;
    }
    ctx->pc = 0x1E0500u;
    SET_GPR_U32(ctx, 31, 0x1E0508u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1E0500u, 0x1E0508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0508u;
label_1e0508:
    // 0x1e0508: 0xc084cb0  jal         func_2132C0
label_1e050c:
    if (ctx->pc == 0x1E050Cu) {
        ctx->pc = 0x1E0510u;
        goto label_1e0510;
    }
    ctx->pc = 0x1E0508u;
    SET_GPR_U32(ctx, 31, 0x1E0510u);
    ctx->pc = 0x2132C0u;
    { ctx->pc = 0x2132c0; return; }
    ctx->pc = 0x1E0510u;
label_1e0510:
    // 0x1e0510: 0xc0782a0  jal         func_1E0A80
label_1e0514:
    if (ctx->pc == 0x1E0514u) {
        ctx->pc = 0x1E0518u;
        goto label_1e0518;
    }
    ctx->pc = 0x1E0510u;
    SET_GPR_U32(ctx, 31, 0x1E0518u);
    ctx->pc = 0x1E0A80u;
    { ctx->pc = 0x1e0a80; return; }
    ctx->pc = 0x1E0518u;
label_1e0518:
    // 0x1e0518: 0xc04e120  jal         func_138480
label_1e051c:
    if (ctx->pc == 0x1E051Cu) {
        ctx->pc = 0x1E0520u;
        goto label_1e0520;
    }
    ctx->pc = 0x1E0518u;
    SET_GPR_U32(ctx, 31, 0x1E0520u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1E0518u, 0x1E0520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0520u;
label_1e0520:
    // 0x1e0520: 0xc05b578  jal         func_16D5E0
label_1e0524:
    if (ctx->pc == 0x1E0524u) {
        ctx->pc = 0x1E0524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0520u;
        // 0x1e0524: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0528u;
        goto label_1e0528;
    }
    ctx->pc = 0x1E0520u;
    SET_GPR_U32(ctx, 31, 0x1E0528u);
    ctx->pc = 0x1E0524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0520u;
    // 0x1e0524: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1E0520u, 0x1E0528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0528u;
label_1e0528:
    // 0x1e0528: 0xc060258  jal         func_180960
label_1e052c:
    if (ctx->pc == 0x1E052Cu) {
        ctx->pc = 0x1E0530u;
        goto label_1e0530;
    }
    ctx->pc = 0x1E0528u;
    SET_GPR_U32(ctx, 31, 0x1E0530u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1E0528u, 0x1E0530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0530u;
label_1e0530:
    // 0x1e0530: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x1e0530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
label_1e0534:
    // 0x1e0534: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1e0538:
    if (ctx->pc == 0x1E0538u) {
        ctx->pc = 0x1E0538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0534u;
        // 0x1e0538: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E053Cu;
        goto label_1e053c;
    }
    ctx->pc = 0x1E0534u;
    {
        const bool branch_taken_0x1e0534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0534u;
        // 0x1e0538: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0534) {
            ctx->pc = 0x1E0540u;
            goto label_1e0540;
        }
    }
    ctx->pc = 0x1E053Cu;
label_1e053c:
    // 0x1e053c: 0xaf828d10  sw          $v0, -0x72F0($gp)
    ctx->pc = 0x1e053cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937872), GPR_U32(ctx, 2));
label_1e0540:
    // 0x1e0540: 0xc04e198  jal         func_138660
label_1e0544:
    if (ctx->pc == 0x1E0544u) {
        ctx->pc = 0x1E0548u;
        goto label_1e0548;
    }
    ctx->pc = 0x1E0540u;
    SET_GPR_U32(ctx, 31, 0x1E0548u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x1E0540u, 0x1E0548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0548u;
label_1e0548:
    // 0x1e0548: 0x1040ffcd  beqz        $v0, . + 4 + (-0x33 << 2)
label_1e054c:
    if (ctx->pc == 0x1E054Cu) {
        ctx->pc = 0x1E0550u;
        goto label_1e0550;
    }
    ctx->pc = 0x1E0548u;
    {
        const bool branch_taken_0x1e0548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0548) {
            ctx->pc = 0x1E0480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0480;
        }
    }
    ctx->pc = 0x1E0550u;
label_1e0550:
    // 0x1e0550: 0xc060258  jal         func_180960
label_1e0554:
    if (ctx->pc == 0x1E0554u) {
        ctx->pc = 0x1E0558u;
        goto label_1e0558;
    }
    ctx->pc = 0x1E0550u;
    SET_GPR_U32(ctx, 31, 0x1E0558u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1E0550u, 0x1E0558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0558u;
label_1e0558:
    // 0x1e0558: 0xc060258  jal         func_180960
label_1e055c:
    if (ctx->pc == 0x1E055Cu) {
        ctx->pc = 0x1E0560u;
        goto label_1e0560;
    }
    ctx->pc = 0x1E0558u;
    SET_GPR_U32(ctx, 31, 0x1E0560u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1E0558u, 0x1E0560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0560u;
label_1e0560:
    // 0x1e0560: 0xc084c2c  jal         func_2130B0
label_1e0564:
    if (ctx->pc == 0x1E0564u) {
        ctx->pc = 0x1E0568u;
        goto label_1e0568;
    }
    ctx->pc = 0x1E0560u;
    SET_GPR_U32(ctx, 31, 0x1E0568u);
    ctx->pc = 0x2130B0u;
    { ctx->pc = 0x2130b0; return; }
    ctx->pc = 0x1E0568u;
label_1e0568:
    // 0x1e0568: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e0568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e056c:
    // 0x1e056c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e056cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0570:
    // 0x1e0570: 0x0  nop
    ctx->pc = 0x1e0570u;
    // NOP
label_1e0574:
    // 0x1e0574: 0x27828d28  addiu       $v0, $gp, -0x72D8
    ctx->pc = 0x1e0574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937896));
label_1e0578:
    // 0x1e0578: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x1e0578u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1e057c:
    // 0x1e057c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1e057cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e0580:
    // 0x1e0580: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e0584:
    if (ctx->pc == 0x1E0584u) {
        ctx->pc = 0x1E0588u;
        goto label_1e0588;
    }
    ctx->pc = 0x1E0580u;
    {
        const bool branch_taken_0x1e0580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0580) {
            ctx->pc = 0x1E0594u;
            goto label_1e0594;
        }
    }
    ctx->pc = 0x1E0588u;
label_1e0588:
    // 0x1e0588: 0xc070038  jal         func_1C00E0
label_1e058c:
    if (ctx->pc == 0x1E058Cu) {
        ctx->pc = 0x1E0590u;
        goto label_1e0590;
    }
    ctx->pc = 0x1E0588u;
    SET_GPR_U32(ctx, 31, 0x1E0590u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E0590u;
label_1e0590:
    // 0x1e0590: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1e0590u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1e0594:
    // 0x1e0594: 0x0  nop
    ctx->pc = 0x1e0594u;
    // NOP
    ctx->pc = 0x1e0598u;
    return;
}
