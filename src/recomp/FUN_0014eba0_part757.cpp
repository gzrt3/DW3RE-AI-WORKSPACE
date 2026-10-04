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


void FUN_0014eba0_part757(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2bfde0u: goto label_2bfde0;
        case 0x2bfde4u: goto label_2bfde4;
        case 0x2bfde8u: goto label_2bfde8;
        case 0x2bfdecu: goto label_2bfdec;
        case 0x2bfdf0u: goto label_2bfdf0;
        case 0x2bfdf4u: goto label_2bfdf4;
        case 0x2bfdf8u: goto label_2bfdf8;
        case 0x2bfdfcu: goto label_2bfdfc;
        case 0x2bfe00u: goto label_2bfe00;
        case 0x2bfe04u: goto label_2bfe04;
        case 0x2bfe08u: goto label_2bfe08;
        case 0x2bfe0cu: goto label_2bfe0c;
        case 0x2bfe10u: goto label_2bfe10;
        case 0x2bfe14u: goto label_2bfe14;
        case 0x2bfe18u: goto label_2bfe18;
        case 0x2bfe1cu: goto label_2bfe1c;
        case 0x2bfe20u: goto label_2bfe20;
        case 0x2bfe24u: goto label_2bfe24;
        case 0x2bfe28u: goto label_2bfe28;
        case 0x2bfe2cu: goto label_2bfe2c;
        case 0x2bfe30u: goto label_2bfe30;
        case 0x2bfe34u: goto label_2bfe34;
        case 0x2bfe38u: goto label_2bfe38;
        case 0x2bfe3cu: goto label_2bfe3c;
        case 0x2bfe40u: goto label_2bfe40;
        case 0x2bfe44u: goto label_2bfe44;
        case 0x2bfe48u: goto label_2bfe48;
        case 0x2bfe4cu: goto label_2bfe4c;
        case 0x2bfe50u: goto label_2bfe50;
        case 0x2bfe54u: goto label_2bfe54;
        case 0x2bfe58u: goto label_2bfe58;
        case 0x2bfe5cu: goto label_2bfe5c;
        case 0x2bfe60u: goto label_2bfe60;
        case 0x2bfe64u: goto label_2bfe64;
        case 0x2bfe68u: goto label_2bfe68;
        case 0x2bfe6cu: goto label_2bfe6c;
        case 0x2bfe70u: goto label_2bfe70;
        case 0x2bfe74u: goto label_2bfe74;
        case 0x2bfe78u: goto label_2bfe78;
        case 0x2bfe7cu: goto label_2bfe7c;
        case 0x2bfe80u: goto label_2bfe80;
        case 0x2bfe84u: goto label_2bfe84;
        case 0x2bfe88u: goto label_2bfe88;
        case 0x2bfe8cu: goto label_2bfe8c;
        case 0x2bfe90u: goto label_2bfe90;
        case 0x2bfe94u: goto label_2bfe94;
        case 0x2bfe98u: goto label_2bfe98;
        case 0x2bfe9cu: goto label_2bfe9c;
        case 0x2bfea0u: goto label_2bfea0;
        case 0x2bfea4u: goto label_2bfea4;
        case 0x2bfea8u: goto label_2bfea8;
        case 0x2bfeacu: goto label_2bfeac;
        case 0x2bfeb0u: goto label_2bfeb0;
        case 0x2bfeb4u: goto label_2bfeb4;
        case 0x2bfeb8u: goto label_2bfeb8;
        case 0x2bfebcu: goto label_2bfebc;
        case 0x2bfec0u: goto label_2bfec0;
        case 0x2bfec4u: goto label_2bfec4;
        case 0x2bfec8u: goto label_2bfec8;
        case 0x2bfeccu: goto label_2bfecc;
        case 0x2bfed0u: goto label_2bfed0;
        case 0x2bfed4u: goto label_2bfed4;
        case 0x2bfed8u: goto label_2bfed8;
        case 0x2bfedcu: goto label_2bfedc;
        case 0x2bfee0u: goto label_2bfee0;
        case 0x2bfee4u: goto label_2bfee4;
        case 0x2bfee8u: goto label_2bfee8;
        case 0x2bfeecu: goto label_2bfeec;
        case 0x2bfef0u: goto label_2bfef0;
        case 0x2bfef4u: goto label_2bfef4;
        case 0x2bfef8u: goto label_2bfef8;
        case 0x2bfefcu: goto label_2bfefc;
        case 0x2bff00u: goto label_2bff00;
        case 0x2bff04u: goto label_2bff04;
        case 0x2bff08u: goto label_2bff08;
        case 0x2bff0cu: goto label_2bff0c;
        case 0x2bff10u: goto label_2bff10;
        case 0x2bff14u: goto label_2bff14;
        case 0x2bff18u: goto label_2bff18;
        case 0x2bff1cu: goto label_2bff1c;
        case 0x2bff20u: goto label_2bff20;
        case 0x2bff24u: goto label_2bff24;
        case 0x2bff28u: goto label_2bff28;
        case 0x2bff2cu: goto label_2bff2c;
        case 0x2bff30u: goto label_2bff30;
        case 0x2bff34u: goto label_2bff34;
        case 0x2bff38u: goto label_2bff38;
        case 0x2bff3cu: goto label_2bff3c;
        case 0x2bff40u: goto label_2bff40;
        case 0x2bff44u: goto label_2bff44;
        case 0x2bff48u: goto label_2bff48;
        case 0x2bff4cu: goto label_2bff4c;
        case 0x2bff50u: goto label_2bff50;
        case 0x2bff54u: goto label_2bff54;
        case 0x2bff58u: goto label_2bff58;
        case 0x2bff5cu: goto label_2bff5c;
        case 0x2bff60u: goto label_2bff60;
        case 0x2bff64u: goto label_2bff64;
        case 0x2bff68u: goto label_2bff68;
        case 0x2bff6cu: goto label_2bff6c;
        case 0x2bff70u: goto label_2bff70;
        case 0x2bff74u: goto label_2bff74;
        case 0x2bff78u: goto label_2bff78;
        case 0x2bff7cu: goto label_2bff7c;
        case 0x2bff80u: goto label_2bff80;
        case 0x2bff84u: goto label_2bff84;
        case 0x2bff88u: goto label_2bff88;
        case 0x2bff8cu: goto label_2bff8c;
        case 0x2bff90u: goto label_2bff90;
        case 0x2bff94u: goto label_2bff94;
        case 0x2bff98u: goto label_2bff98;
        case 0x2bff9cu: goto label_2bff9c;
        case 0x2bffa0u: goto label_2bffa0;
        case 0x2bffa4u: goto label_2bffa4;
        case 0x2bffa8u: goto label_2bffa8;
        case 0x2bffacu: goto label_2bffac;
        case 0x2bffb0u: goto label_2bffb0;
        case 0x2bffb4u: goto label_2bffb4;
        case 0x2bffb8u: goto label_2bffb8;
        case 0x2bffbcu: goto label_2bffbc;
        case 0x2bffc0u: goto label_2bffc0;
        case 0x2bffc4u: goto label_2bffc4;
        case 0x2bffc8u: goto label_2bffc8;
        case 0x2bffccu: goto label_2bffcc;
        case 0x2bffd0u: goto label_2bffd0;
        case 0x2bffd4u: goto label_2bffd4;
        case 0x2bffd8u: goto label_2bffd8;
        case 0x2bffdcu: goto label_2bffdc;
        case 0x2bffe0u: goto label_2bffe0;
        case 0x2bffe4u: goto label_2bffe4;
        case 0x2bffe8u: goto label_2bffe8;
        case 0x2bffecu: goto label_2bffec;
        case 0x2bfff0u: goto label_2bfff0;
        case 0x2bfff4u: goto label_2bfff4;
        case 0x2bfff8u: goto label_2bfff8;
        case 0x2bfffcu: goto label_2bfffc;
        case 0x2c0000u: goto label_2c0000;
        case 0x2c0004u: goto label_2c0004;
        case 0x2c0008u: goto label_2c0008;
        case 0x2c000cu: goto label_2c000c;
        case 0x2c0010u: goto label_2c0010;
        case 0x2c0014u: goto label_2c0014;
        case 0x2c0018u: goto label_2c0018;
        case 0x2c001cu: goto label_2c001c;
        case 0x2c0020u: goto label_2c0020;
        case 0x2c0024u: goto label_2c0024;
        case 0x2c0028u: goto label_2c0028;
        case 0x2c002cu: goto label_2c002c;
        case 0x2c0030u: goto label_2c0030;
        case 0x2c0034u: goto label_2c0034;
        case 0x2c0038u: goto label_2c0038;
        case 0x2c003cu: goto label_2c003c;
        case 0x2c0040u: goto label_2c0040;
        case 0x2c0044u: goto label_2c0044;
        case 0x2c0048u: goto label_2c0048;
        case 0x2c004cu: goto label_2c004c;
        case 0x2c0050u: goto label_2c0050;
        case 0x2c0054u: goto label_2c0054;
        case 0x2c0058u: goto label_2c0058;
        case 0x2c005cu: goto label_2c005c;
        case 0x2c0060u: goto label_2c0060;
        case 0x2c0064u: goto label_2c0064;
        case 0x2c0068u: goto label_2c0068;
        case 0x2c006cu: goto label_2c006c;
        case 0x2c0070u: goto label_2c0070;
        case 0x2c0074u: goto label_2c0074;
        case 0x2c0078u: goto label_2c0078;
        case 0x2c007cu: goto label_2c007c;
        case 0x2c0080u: goto label_2c0080;
        case 0x2c0084u: goto label_2c0084;
        case 0x2c0088u: goto label_2c0088;
        case 0x2c008cu: goto label_2c008c;
        case 0x2c0090u: goto label_2c0090;
        case 0x2c0094u: goto label_2c0094;
        case 0x2c0098u: goto label_2c0098;
        case 0x2c009cu: goto label_2c009c;
        case 0x2c00a0u: goto label_2c00a0;
        case 0x2c00a4u: goto label_2c00a4;
        case 0x2c00a8u: goto label_2c00a8;
        case 0x2c00acu: goto label_2c00ac;
        case 0x2c00b0u: goto label_2c00b0;
        case 0x2c00b4u: goto label_2c00b4;
        case 0x2c00b8u: goto label_2c00b8;
        case 0x2c00bcu: goto label_2c00bc;
        case 0x2c00c0u: goto label_2c00c0;
        case 0x2c00c4u: goto label_2c00c4;
        case 0x2c00c8u: goto label_2c00c8;
        case 0x2c00ccu: goto label_2c00cc;
        case 0x2c00d0u: goto label_2c00d0;
        case 0x2c00d4u: goto label_2c00d4;
        case 0x2c00d8u: goto label_2c00d8;
        case 0x2c00dcu: goto label_2c00dc;
        case 0x2c00e0u: goto label_2c00e0;
        case 0x2c00e4u: goto label_2c00e4;
        case 0x2c00e8u: goto label_2c00e8;
        case 0x2c00ecu: goto label_2c00ec;
        case 0x2c00f0u: goto label_2c00f0;
        case 0x2c00f4u: goto label_2c00f4;
        case 0x2c00f8u: goto label_2c00f8;
        case 0x2c00fcu: goto label_2c00fc;
        case 0x2c0100u: goto label_2c0100;
        case 0x2c0104u: goto label_2c0104;
        case 0x2c0108u: goto label_2c0108;
        case 0x2c010cu: goto label_2c010c;
        case 0x2c0110u: goto label_2c0110;
        case 0x2c0114u: goto label_2c0114;
        case 0x2c0118u: goto label_2c0118;
        case 0x2c011cu: goto label_2c011c;
        case 0x2c0120u: goto label_2c0120;
        case 0x2c0124u: goto label_2c0124;
        case 0x2c0128u: goto label_2c0128;
        case 0x2c012cu: goto label_2c012c;
        case 0x2c0130u: goto label_2c0130;
        case 0x2c0134u: goto label_2c0134;
        case 0x2c0138u: goto label_2c0138;
        case 0x2c013cu: goto label_2c013c;
        case 0x2c0140u: goto label_2c0140;
        case 0x2c0144u: goto label_2c0144;
        case 0x2c0148u: goto label_2c0148;
        case 0x2c014cu: goto label_2c014c;
        case 0x2c0150u: goto label_2c0150;
        case 0x2c0154u: goto label_2c0154;
        case 0x2c0158u: goto label_2c0158;
        case 0x2c015cu: goto label_2c015c;
        case 0x2c0160u: goto label_2c0160;
        case 0x2c0164u: goto label_2c0164;
        case 0x2c0168u: goto label_2c0168;
        case 0x2c016cu: goto label_2c016c;
        case 0x2c0170u: goto label_2c0170;
        case 0x2c0174u: goto label_2c0174;
        case 0x2c0178u: goto label_2c0178;
        case 0x2c017cu: goto label_2c017c;
        case 0x2c0180u: goto label_2c0180;
        case 0x2c0184u: goto label_2c0184;
        case 0x2c0188u: goto label_2c0188;
        case 0x2c018cu: goto label_2c018c;
        case 0x2c0190u: goto label_2c0190;
        case 0x2c0194u: goto label_2c0194;
        case 0x2c0198u: goto label_2c0198;
        case 0x2c019cu: goto label_2c019c;
        case 0x2c01a0u: goto label_2c01a0;
        case 0x2c01a4u: goto label_2c01a4;
        case 0x2c01a8u: goto label_2c01a8;
        case 0x2c01acu: goto label_2c01ac;
        case 0x2c01b0u: goto label_2c01b0;
        case 0x2c01b4u: goto label_2c01b4;
        case 0x2c01b8u: goto label_2c01b8;
        case 0x2c01bcu: goto label_2c01bc;
        case 0x2c01c0u: goto label_2c01c0;
        case 0x2c01c4u: goto label_2c01c4;
        case 0x2c01c8u: goto label_2c01c8;
        case 0x2c01ccu: goto label_2c01cc;
        case 0x2c01d0u: goto label_2c01d0;
        case 0x2c01d4u: goto label_2c01d4;
        case 0x2c01d8u: goto label_2c01d8;
        case 0x2c01dcu: goto label_2c01dc;
        case 0x2c01e0u: goto label_2c01e0;
        case 0x2c01e4u: goto label_2c01e4;
        case 0x2c01e8u: goto label_2c01e8;
        case 0x2c01ecu: goto label_2c01ec;
        case 0x2c01f0u: goto label_2c01f0;
        case 0x2c01f4u: goto label_2c01f4;
        case 0x2c01f8u: goto label_2c01f8;
        case 0x2c01fcu: goto label_2c01fc;
        case 0x2c0200u: goto label_2c0200;
        case 0x2c0204u: goto label_2c0204;
        case 0x2c0208u: goto label_2c0208;
        case 0x2c020cu: goto label_2c020c;
        case 0x2c0210u: goto label_2c0210;
        case 0x2c0214u: goto label_2c0214;
        case 0x2c0218u: goto label_2c0218;
        case 0x2c021cu: goto label_2c021c;
        case 0x2c0220u: goto label_2c0220;
        case 0x2c0224u: goto label_2c0224;
        case 0x2c0228u: goto label_2c0228;
        case 0x2c022cu: goto label_2c022c;
        case 0x2c0230u: goto label_2c0230;
        case 0x2c0234u: goto label_2c0234;
        case 0x2c0238u: goto label_2c0238;
        case 0x2c023cu: goto label_2c023c;
        case 0x2c0240u: goto label_2c0240;
        case 0x2c0244u: goto label_2c0244;
        case 0x2c0248u: goto label_2c0248;
        case 0x2c024cu: goto label_2c024c;
        case 0x2c0250u: goto label_2c0250;
        case 0x2c0254u: goto label_2c0254;
        case 0x2c0258u: goto label_2c0258;
        case 0x2c025cu: goto label_2c025c;
        case 0x2c0260u: goto label_2c0260;
        case 0x2c0264u: goto label_2c0264;
        case 0x2c0268u: goto label_2c0268;
        case 0x2c026cu: goto label_2c026c;
        case 0x2c0270u: goto label_2c0270;
        case 0x2c0274u: goto label_2c0274;
        case 0x2c0278u: goto label_2c0278;
        case 0x2c027cu: goto label_2c027c;
        case 0x2c0280u: goto label_2c0280;
        case 0x2c0284u: goto label_2c0284;
        case 0x2c0288u: goto label_2c0288;
        case 0x2c028cu: goto label_2c028c;
        case 0x2c0290u: goto label_2c0290;
        case 0x2c0294u: goto label_2c0294;
        case 0x2c0298u: goto label_2c0298;
        case 0x2c029cu: goto label_2c029c;
        case 0x2c02a0u: goto label_2c02a0;
        case 0x2c02a4u: goto label_2c02a4;
        case 0x2c02a8u: goto label_2c02a8;
        case 0x2c02acu: goto label_2c02ac;
        case 0x2c02b0u: goto label_2c02b0;
        case 0x2c02b4u: goto label_2c02b4;
        case 0x2c02b8u: goto label_2c02b8;
        case 0x2c02bcu: goto label_2c02bc;
        case 0x2c02c0u: goto label_2c02c0;
        case 0x2c02c4u: goto label_2c02c4;
        case 0x2c02c8u: goto label_2c02c8;
        case 0x2c02ccu: goto label_2c02cc;
        case 0x2c02d0u: goto label_2c02d0;
        case 0x2c02d4u: goto label_2c02d4;
        case 0x2c02d8u: goto label_2c02d8;
        case 0x2c02dcu: goto label_2c02dc;
        case 0x2c02e0u: goto label_2c02e0;
        case 0x2c02e4u: goto label_2c02e4;
        case 0x2c02e8u: goto label_2c02e8;
        case 0x2c02ecu: goto label_2c02ec;
        case 0x2c02f0u: goto label_2c02f0;
        case 0x2c02f4u: goto label_2c02f4;
        case 0x2c02f8u: goto label_2c02f8;
        case 0x2c02fcu: goto label_2c02fc;
        case 0x2c0300u: goto label_2c0300;
        case 0x2c0304u: goto label_2c0304;
        case 0x2c0308u: goto label_2c0308;
        case 0x2c030cu: goto label_2c030c;
        case 0x2c0310u: goto label_2c0310;
        case 0x2c0314u: goto label_2c0314;
        case 0x2c0318u: goto label_2c0318;
        case 0x2c031cu: goto label_2c031c;
        case 0x2c0320u: goto label_2c0320;
        case 0x2c0324u: goto label_2c0324;
        case 0x2c0328u: goto label_2c0328;
        case 0x2c032cu: goto label_2c032c;
        case 0x2c0330u: goto label_2c0330;
        case 0x2c0334u: goto label_2c0334;
        case 0x2c0338u: goto label_2c0338;
        case 0x2c033cu: goto label_2c033c;
        case 0x2c0340u: goto label_2c0340;
        case 0x2c0344u: goto label_2c0344;
        case 0x2c0348u: goto label_2c0348;
        case 0x2c034cu: goto label_2c034c;
        case 0x2c0350u: goto label_2c0350;
        case 0x2c0354u: goto label_2c0354;
        case 0x2c0358u: goto label_2c0358;
        case 0x2c035cu: goto label_2c035c;
        case 0x2c0360u: goto label_2c0360;
        case 0x2c0364u: goto label_2c0364;
        case 0x2c0368u: goto label_2c0368;
        case 0x2c036cu: goto label_2c036c;
        case 0x2c0370u: goto label_2c0370;
        case 0x2c0374u: goto label_2c0374;
        case 0x2c0378u: goto label_2c0378;
        case 0x2c037cu: goto label_2c037c;
        case 0x2c0380u: goto label_2c0380;
        case 0x2c0384u: goto label_2c0384;
        case 0x2c0388u: goto label_2c0388;
        case 0x2c038cu: goto label_2c038c;
        case 0x2c0390u: goto label_2c0390;
        case 0x2c0394u: goto label_2c0394;
        case 0x2c0398u: goto label_2c0398;
        case 0x2c039cu: goto label_2c039c;
        case 0x2c03a0u: goto label_2c03a0;
        case 0x2c03a4u: goto label_2c03a4;
        case 0x2c03a8u: goto label_2c03a8;
        case 0x2c03acu: goto label_2c03ac;
        case 0x2c03b0u: goto label_2c03b0;
        case 0x2c03b4u: goto label_2c03b4;
        case 0x2c03b8u: goto label_2c03b8;
        case 0x2c03bcu: goto label_2c03bc;
        case 0x2c03c0u: goto label_2c03c0;
        case 0x2c03c4u: goto label_2c03c4;
        case 0x2c03c8u: goto label_2c03c8;
        case 0x2c03ccu: goto label_2c03cc;
        case 0x2c03d0u: goto label_2c03d0;
        case 0x2c03d4u: goto label_2c03d4;
        case 0x2c03d8u: goto label_2c03d8;
        case 0x2c03dcu: goto label_2c03dc;
        case 0x2c03e0u: goto label_2c03e0;
        case 0x2c03e4u: goto label_2c03e4;
        case 0x2c03e8u: goto label_2c03e8;
        case 0x2c03ecu: goto label_2c03ec;
        case 0x2c03f0u: goto label_2c03f0;
        case 0x2c03f4u: goto label_2c03f4;
        case 0x2c03f8u: goto label_2c03f8;
        case 0x2c03fcu: goto label_2c03fc;
        case 0x2c0400u: goto label_2c0400;
        case 0x2c0404u: goto label_2c0404;
        case 0x2c0408u: goto label_2c0408;
        case 0x2c040cu: goto label_2c040c;
        case 0x2c0410u: goto label_2c0410;
        case 0x2c0414u: goto label_2c0414;
        case 0x2c0418u: goto label_2c0418;
        case 0x2c041cu: goto label_2c041c;
        case 0x2c0420u: goto label_2c0420;
        case 0x2c0424u: goto label_2c0424;
        case 0x2c0428u: goto label_2c0428;
        case 0x2c042cu: goto label_2c042c;
        case 0x2c0430u: goto label_2c0430;
        case 0x2c0434u: goto label_2c0434;
        case 0x2c0438u: goto label_2c0438;
        case 0x2c043cu: goto label_2c043c;
        case 0x2c0440u: goto label_2c0440;
        case 0x2c0444u: goto label_2c0444;
        case 0x2c0448u: goto label_2c0448;
        case 0x2c044cu: goto label_2c044c;
        case 0x2c0450u: goto label_2c0450;
        case 0x2c0454u: goto label_2c0454;
        case 0x2c0458u: goto label_2c0458;
        case 0x2c045cu: goto label_2c045c;
        case 0x2c0460u: goto label_2c0460;
        case 0x2c0464u: goto label_2c0464;
        case 0x2c0468u: goto label_2c0468;
        case 0x2c046cu: goto label_2c046c;
        case 0x2c0470u: goto label_2c0470;
        case 0x2c0474u: goto label_2c0474;
        case 0x2c0478u: goto label_2c0478;
        case 0x2c047cu: goto label_2c047c;
        case 0x2c0480u: goto label_2c0480;
        case 0x2c0484u: goto label_2c0484;
        case 0x2c0488u: goto label_2c0488;
        case 0x2c048cu: goto label_2c048c;
        case 0x2c0490u: goto label_2c0490;
        case 0x2c0494u: goto label_2c0494;
        case 0x2c0498u: goto label_2c0498;
        case 0x2c049cu: goto label_2c049c;
        case 0x2c04a0u: goto label_2c04a0;
        case 0x2c04a4u: goto label_2c04a4;
        case 0x2c04a8u: goto label_2c04a8;
        case 0x2c04acu: goto label_2c04ac;
        case 0x2c04b0u: goto label_2c04b0;
        case 0x2c04b4u: goto label_2c04b4;
        case 0x2c04b8u: goto label_2c04b8;
        case 0x2c04bcu: goto label_2c04bc;
        case 0x2c04c0u: goto label_2c04c0;
        case 0x2c04c4u: goto label_2c04c4;
        case 0x2c04c8u: goto label_2c04c8;
        case 0x2c04ccu: goto label_2c04cc;
        case 0x2c04d0u: goto label_2c04d0;
        case 0x2c04d4u: goto label_2c04d4;
        case 0x2c04d8u: goto label_2c04d8;
        case 0x2c04dcu: goto label_2c04dc;
        case 0x2c04e0u: goto label_2c04e0;
        case 0x2c04e4u: goto label_2c04e4;
        case 0x2c04e8u: goto label_2c04e8;
        case 0x2c04ecu: goto label_2c04ec;
        case 0x2c04f0u: goto label_2c04f0;
        case 0x2c04f4u: goto label_2c04f4;
        case 0x2c04f8u: goto label_2c04f8;
        case 0x2c04fcu: goto label_2c04fc;
        case 0x2c0500u: goto label_2c0500;
        case 0x2c0504u: goto label_2c0504;
        case 0x2c0508u: goto label_2c0508;
        case 0x2c050cu: goto label_2c050c;
        case 0x2c0510u: goto label_2c0510;
        case 0x2c0514u: goto label_2c0514;
        case 0x2c0518u: goto label_2c0518;
        case 0x2c051cu: goto label_2c051c;
        case 0x2c0520u: goto label_2c0520;
        case 0x2c0524u: goto label_2c0524;
        case 0x2c0528u: goto label_2c0528;
        case 0x2c052cu: goto label_2c052c;
        case 0x2c0530u: goto label_2c0530;
        case 0x2c0534u: goto label_2c0534;
        case 0x2c0538u: goto label_2c0538;
        case 0x2c053cu: goto label_2c053c;
        case 0x2c0540u: goto label_2c0540;
        case 0x2c0544u: goto label_2c0544;
        case 0x2c0548u: goto label_2c0548;
        case 0x2c054cu: goto label_2c054c;
        case 0x2c0550u: goto label_2c0550;
        case 0x2c0554u: goto label_2c0554;
        case 0x2c0558u: goto label_2c0558;
        case 0x2c055cu: goto label_2c055c;
        case 0x2c0560u: goto label_2c0560;
        case 0x2c0564u: goto label_2c0564;
        case 0x2c0568u: goto label_2c0568;
        case 0x2c056cu: goto label_2c056c;
        case 0x2c0570u: goto label_2c0570;
        case 0x2c0574u: goto label_2c0574;
        case 0x2c0578u: goto label_2c0578;
        case 0x2c057cu: goto label_2c057c;
        case 0x2c0580u: goto label_2c0580;
        case 0x2c0584u: goto label_2c0584;
        case 0x2c0588u: goto label_2c0588;
        case 0x2c058cu: goto label_2c058c;
        case 0x2c0590u: goto label_2c0590;
        case 0x2c0594u: goto label_2c0594;
        case 0x2c0598u: goto label_2c0598;
        case 0x2c059cu: goto label_2c059c;
        case 0x2c05a0u: goto label_2c05a0;
        case 0x2c05a4u: goto label_2c05a4;
        case 0x2c05a8u: goto label_2c05a8;
        case 0x2c05acu: goto label_2c05ac;
        default: return;
    }

label_2bfde0:
    // 0x2bfde0: 0xb030fff  j           func_C0C3FFC
label_2bfde4:
    if (ctx->pc == 0x2BFDE4u) {
        ctx->pc = 0x2BFDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFDE0u;
        // 0x2bfde4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFDE8u;
        goto label_2bfde8;
    }
    ctx->pc = 0x2BFDE0u;
    ctx->pc = 0x2BFDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFDE0u;
    // 0x2bfde4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC0C3FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC0C3FFCu, 0x2BFDE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BFDE8u;
label_2bfde8:
    // 0x2bfde8: 0x100f7012  beq         $zero, $t7, . + 4 + (0x7012 << 2)
label_2bfdec:
    if (ctx->pc == 0x2BFDECu) {
        ctx->pc = 0x2BFDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFDE8u;
        // 0x2bfdec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFDF0u;
        goto label_2bfdf0;
    }
    ctx->pc = 0x2BFDE8u;
    {
        const bool branch_taken_0x2bfde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 15));
        ctx->pc = 0x2BFDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFDE8u;
        // 0x2bfdec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfde8) {
            ctx->pc = 0x2DBE34u;
            return;
        }
    }
    ctx->pc = 0x2BFDF0u;
label_2bfdf0:
    // 0x2bfdf0: 0x1f67ff9  .word       0x01F67FF9                   # INVALID     $t7, $s6, 0x7FF9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfdf0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2BFDF0 raw=0x01F67FF9");
 /* MITIGATED */
label_2bfdf4:
    // 0x2bfdf4: 0x1e0ffd8  .word       0x01E0FFD8                   # mult        $ra, $t7, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bfdf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2bfdf8:
    // 0x2bfdf8: 0x1f77ffc  .word       0x01F77FFC                   # dsll32      $t7, $s7, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfdf8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 23) << (32 + 31));
label_2bfdfc:
    // 0x2bfdfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfdfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfe00:
    // 0x2bfe00: 0x1f87fff  .word       0x01F87FFF                   # dsra32      $t7, $t8, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfe00u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 24) >> (32 + 31));
label_2bfe04:
    // 0x2bfe04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfe04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfe08:
    // 0x2bfe08: 0x1f57ff8  .word       0x01F57FF8                   # dsll        $t7, $s5, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfe08u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 21) << 31);
label_2bfe0c:
    // 0x2bfe0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfe0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfe10:
    // 0x2bfe10: 0x0  nop
    ctx->pc = 0x2bfe10u;
    // NOP
label_2bfe14:
    // 0x2bfe14: 0x4a450650  vmaxx.z     $vf25, $vf0, $vf5x
    ctx->pc = 0x2bfe14u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
label_2bfe18:
    // 0x2bfe18: 0x1f37ffb  .word       0x01F37FFB                   # dsra        $t7, $s3, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfe18u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 19) >> 31);
label_2bfe1c:
    // 0x2bfe1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfe1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfe20:
    // 0x2bfe20: 0x1f47ffe  .word       0x01F47FFE                   # dsrl32      $t7, $s4, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfe20u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) >> (32 + 31));
label_2bfe24:
    // 0x2bfe24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfe24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfe28:
    // 0x2bfe28: 0x1f07ff7  .word       0x01F07FF7                   # INVALID     $t7, $s0, 0x7FF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfe28u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2BFE28 raw=0x01F07FF7");
 /* MITIGATED */
label_2bfe2c:
    // 0x2bfe2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfe2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfe30:
    // 0x2bfe30: 0x1f17ffa  .word       0x01F17FFA                   # dsrl        $t7, $s1, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfe30u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) >> 31);
label_2bfe34:
    // 0x2bfe34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfe34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfe38:
    // 0x2bfe38: 0x1f27ffd  .word       0x01F27FFD                   # INVALID     $t7, $s2, 0x7FFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfe38u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BFE38 raw=0x01F27FFD");
 /* MITIGATED */
label_2bfe3c:
    // 0x2bfe3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfe3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfe40:
    // 0x2bfe40: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2bfe40u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2bfe44:
    // 0x2bfe44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfe44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfe48:
    // 0x2bfe48: 0x10081001  beq         $zero, $t0, . + 4 + (0x1001 << 2)
label_2bfe4c:
    if (ctx->pc == 0x2BFE4Cu) {
        ctx->pc = 0x2BFE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFE48u;
        // 0x2bfe4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFE50u;
        goto label_2bfe50;
    }
    ctx->pc = 0x2BFE48u;
    {
        const bool branch_taken_0x2bfe48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BFE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFE48u;
        // 0x2bfe4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfe48) {
            ctx->pc = 0x2C3E50u;
            { ctx->pc = 0x2c3e50; return; }
        }
    }
    ctx->pc = 0x2BFE50u;
label_2bfe50:
    // 0x2bfe50: 0x10091019  beq         $zero, $t1, . + 4 + (0x1019 << 2)
label_2bfe54:
    if (ctx->pc == 0x2BFE54u) {
        ctx->pc = 0x2BFE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFE50u;
        // 0x2bfe54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFE58u;
        goto label_2bfe58;
    }
    ctx->pc = 0x2BFE50u;
    {
        const bool branch_taken_0x2bfe50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BFE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFE50u;
        // 0x2bfe54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfe50) {
            ctx->pc = 0x2C3EB8u;
            { ctx->pc = 0x2c3eb8; return; }
        }
    }
    ctx->pc = 0x2BFE58u;
label_2bfe58:
    // 0x2bfe58: 0x3e8a801  .word       0x03E8A801                   # INVALID     $ra, $t0, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfe58u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BFE58 raw=0x03E8A801");
 /* MITIGATED */
label_2bfe5c:
    // 0x2bfe5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfe5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfe60:
    // 0x2bfe60: 0x3e89804  sllv        $s3, $t0, $ra
    ctx->pc = 0x2bfe60u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2bfe64:
    // 0x2bfe64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfe64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfe68:
    // 0x2bfe68: 0x3e8a007  srav        $s4, $t0, $ra
    ctx->pc = 0x2bfe68u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2bfe6c:
    // 0x2bfe6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfe6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfe70:
    // 0x2bfe70: 0x3e8a80a  movz        $s5, $ra, $t0
    ctx->pc = 0x2bfe70u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 31));
label_2bfe74:
    // 0x2bfe74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfe74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfe78:
    // 0x2bfe78: 0x3e8b002  .word       0x03E8B002                   # srl         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfe78u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_2bfe7c:
    // 0x2bfe7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfe7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfe80:
    // 0x2bfe80: 0x3e8b805  .word       0x03E8B805                   # INVALID     $ra, $t0, -0x47FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfe80u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BFE80 raw=0x03E8B805");
 /* MITIGATED */
label_2bfe84:
    // 0x2bfe84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfe84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfe88:
    // 0x2bfe88: 0x3e8c008  .word       0x03E8C008                   # jr          $ra # 0008C000 <InstrIdType: CPU_SPECIAL>
label_2bfe8c:
    if (ctx->pc == 0x2BFE8Cu) {
        ctx->pc = 0x2BFE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFE88u;
        // 0x2bfe8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFE90u;
        goto label_2bfe90;
    }
    ctx->pc = 0x2BFE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFE88u;
        // 0x2bfe8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFE88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFE90u;
label_2bfe90:
    // 0x2bfe90: 0x3e8b00b  movn        $s6, $ra, $t0
    ctx->pc = 0x2bfe90u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 31));
label_2bfe94:
    // 0x2bfe94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfe94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfe98:
    // 0x2bfe98: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2bfe98u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2bfe9c:
    // 0x2bfe9c: 0x81f182bc  lb          $s1, -0x7D44($t7)
    ctx->pc = 0x2bfe9cu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935228)));
label_2bfea0:
    // 0x2bfea0: 0x3eaaaaaa  .word       0x3EAAAAAA                   # lui         $t2, 0xAAAA # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2bfea0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43690 << 16));
label_2bfea4:
    // 0x2bfea4: 0x81e09723  lb          $zero, -0x68DD($t7)
    ctx->pc = 0x2bfea4u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294940451)));
label_2bfea8:
    // 0x2bfea8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfea8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfeac:
    // 0x2bfeac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfeacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfeb0:
    // 0x2bfeb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfeb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfeb4:
    // 0x2bfeb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfeb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfeb8:
    // 0x2bfeb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfeb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfebc:
    // 0x2bfebc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfebcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfec0:
    // 0x2bfec0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfec0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfec4:
    // 0x2bfec4: 0x1e0e71e  .word       0x01E0E71E                   # ddiv        $gp, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfec4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2BFEC4 raw=0x01E0E71E");
 /* MITIGATED */
label_2bfec8:
    // 0x2bfec8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfec8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfecc:
    // 0x2bfecc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfeccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfed0:
    // 0x2bfed0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfed0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfed4:
    // 0x2bfed4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfed4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfed8:
    // 0x2bfed8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfed8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfedc:
    // 0x2bfedc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfedcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfee0:
    // 0x2bfee0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfee0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfee4:
    // 0x2bfee4: 0x1fc866c  .word       0x01FC866C                   # dadd        $s0, $t7, $gp # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfee4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_2bfee8:
    // 0x2bfee8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfee8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfeec:
    // 0x2bfeec: 0x1fc8eac  .word       0x01FC8EAC                   # dadd        $s1, $t7, $gp # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfeecu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_2bfef0:
    // 0x2bfef0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfef0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfef4:
    // 0x2bfef4: 0x1fc96ec  .word       0x01FC96EC                   # dadd        $s2, $t7, $gp # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfef4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_2bfef8:
    // 0x2bfef8: 0x3f808312  .word       0x3F808312                   # lui         $zero, 0x8312 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2bfef8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)33554 << 16));
label_2bfefc:
    // 0x2bfefc: 0x81e0e1bf  lb          $zero, -0x1E41($t7)
    ctx->pc = 0x2bfefcu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294959551)));
label_2bff00:
    // 0x2bff00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bff00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bff04:
    // 0x2bff04: 0x1e0cda3  .word       0x01E0CDA3                   # subu        $t9, $t7, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bff04u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2bff08:
    // 0x2bff08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bff08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bff0c:
    // 0x2bff0c: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bff0cu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2bff10:
    // 0x2bff10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bff10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bff14:
    // 0x2bff14: 0x1e0d5e3  .word       0x01E0D5E3                   # subu        $k0, $t7, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bff14u;
    SET_GPR_S32(ctx, 26, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2bff18:
    // 0x2bff18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bff18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bff1c:
    // 0x2bff1c: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bff1cu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2bff20:
    // 0x2bff20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bff20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bff24:
    // 0x2bff24: 0x1e0de23  .word       0x01E0DE23                   # subu        $k1, $t7, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bff24u;
    SET_GPR_S32(ctx, 27, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2bff28:
    // 0x2bff28: 0x437f0000  .word       0x437F0000                   # INVALID     $k1, $ra, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bff28u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2BFF28 raw=0x437F0000");
 /* MITIGATED */
label_2bff2c:
    // 0x2bff2c: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x2bff2cu;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_2bff30:
    // 0x2bff30: 0x3e8b000  .word       0x03E8B000                   # sll         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bff30u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
label_2bff34:
    // 0x2bff34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bff34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bff38:
    // 0x2bff38: 0x3e8b803  .word       0x03E8B803                   # sra         $s7, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bff38u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 8), 0));
label_2bff3c:
    // 0x2bff3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bff3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bff40:
    // 0x2bff40: 0x3e8c006  srlv        $t8, $t0, $ra
    ctx->pc = 0x2bff40u;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2bff44:
    // 0x2bff44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bff44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bff48:
    // 0x2bff48: 0x3e8b009  .word       0x03E8B009                   # jalr        $s6, $ra # 00080000 <InstrIdType: CPU_SPECIAL>
label_2bff4c:
    if (ctx->pc == 0x2BFF4Cu) {
        ctx->pc = 0x2BFF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF48u;
        // 0x2bff4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFF50u;
        goto label_2bff50;
    }
    ctx->pc = 0x2BFF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 22, 0x2BFF50u);
        ctx->pc = 0x2BFF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF48u;
        // 0x2bff4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFF48u, 0x2BFF50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BFF50u;
label_2bff50:
    // 0x2bff50: 0x800040f0  lb          $zero, 0x40F0($zero)
    ctx->pc = 0x2bff50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x40F0u));
label_2bff54:
    // 0x2bff54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bff54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bff58:
    // 0x2bff58: 0x420f06b8  .word       0x420F06B8                   # ei # 000F0680 <InstrIdType: R5900_COP0_TLB>
    ctx->pc = 0x2bff58u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_2bff5c:
    // 0x2bff5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bff5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bff60:
    // 0x2bff60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bff60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bff64:
    // 0x2bff64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bff64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bff68:
    // 0x2bff68: 0x500a0010  beql        $zero, $t2, . + 4 + (0x10 << 2)
label_2bff6c:
    if (ctx->pc == 0x2BFF6Cu) {
        ctx->pc = 0x2BFF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF68u;
        // 0x2bff6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFF70u;
        goto label_2bff70;
    }
    ctx->pc = 0x2BFF68u;
    {
        const bool branch_taken_0x2bff68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 10));
        if (branch_taken_0x2bff68) {
            ctx->pc = 0x2BFF6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFF68u;
            // 0x2bff6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFFACu;
            goto label_2bffac;
        }
    }
    ctx->pc = 0x2BFF70u;
label_2bff70:
    // 0x2bff70: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bff70u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BFF70 raw=0x01FA0005");
 /* MITIGATED */
label_2bff74:
    // 0x2bff74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bff74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bff78:
    // 0x2bff78: 0x12015007  beq         $s0, $at, . + 4 + (0x5007 << 2)
label_2bff7c:
    if (ctx->pc == 0x2BFF7Cu) {
        ctx->pc = 0x2BFF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF78u;
        // 0x2bff7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFF80u;
        goto label_2bff80;
    }
    ctx->pc = 0x2BFF78u;
    {
        const bool branch_taken_0x2bff78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BFF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF78u;
        // 0x2bff7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bff78) {
            ctx->pc = 0x2D3F98u;
            return;
        }
    }
    ctx->pc = 0x2BFF80u;
label_2bff80:
    // 0x2bff80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bff80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bff84:
    // 0x2bff84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bff84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bff88:
    // 0x2bff88: 0x5a000810  blezl       $s0, . + 4 + (0x810 << 2)
label_2bff8c:
    if (ctx->pc == 0x2BFF8Cu) {
        ctx->pc = 0x2BFF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF88u;
        // 0x2bff8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFF90u;
        goto label_2bff90;
    }
    ctx->pc = 0x2BFF88u;
    {
        const bool branch_taken_0x2bff88 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2bff88) {
            ctx->pc = 0x2BFF8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFF88u;
            // 0x2bff8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1FCCu;
            { ctx->pc = 0x2c1fcc; return; }
        }
    }
    ctx->pc = 0x2BFF90u;
label_2bff90:
    // 0x2bff90: 0x10021830  beq         $zero, $v0, . + 4 + (0x1830 << 2)
label_2bff94:
    if (ctx->pc == 0x2BFF94u) {
        ctx->pc = 0x2BFF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF90u;
        // 0x2bff94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFF98u;
        goto label_2bff98;
    }
    ctx->pc = 0x2BFF90u;
    {
        const bool branch_taken_0x2bff90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BFF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF90u;
        // 0x2bff94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bff90) {
            ctx->pc = 0x2C6054u;
            { ctx->pc = 0x2c6054; return; }
        }
    }
    ctx->pc = 0x2BFF98u;
label_2bff98:
    // 0x2bff98: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2bff98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2bff9c:
    // 0x2bff9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bff9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bffa0:
    // 0x2bffa0: 0x10021001  beq         $zero, $v0, . + 4 + (0x1001 << 2)
label_2bffa4:
    if (ctx->pc == 0x2BFFA4u) {
        ctx->pc = 0x2BFFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFFA0u;
        // 0x2bffa4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFFA8u;
        goto label_2bffa8;
    }
    ctx->pc = 0x2BFFA0u;
    {
        const bool branch_taken_0x2bffa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BFFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFFA0u;
        // 0x2bffa4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bffa0) {
            ctx->pc = 0x2C3FA8u;
            { ctx->pc = 0x2c3fa8; return; }
        }
    }
    ctx->pc = 0x2BFFA8u;
label_2bffa8:
    // 0x2bffa8: 0x10081818  beq         $zero, $t0, . + 4 + (0x1818 << 2)
label_2bffac:
    if (ctx->pc == 0x2BFFACu) {
        ctx->pc = 0x2BFFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFFA8u;
        // 0x2bffac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFFB0u;
        goto label_2bffb0;
    }
    ctx->pc = 0x2BFFA8u;
    {
        const bool branch_taken_0x2bffa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BFFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFFA8u;
        // 0x2bffac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bffa8) {
            ctx->pc = 0x2C600Cu;
            { ctx->pc = 0x2c600c; return; }
        }
    }
    ctx->pc = 0x2BFFB0u;
label_2bffb0:
    // 0x2bffb0: 0x11eb57ff  beq         $t7, $t3, . + 4 + (0x57FF << 2)
label_2bffb4:
    if (ctx->pc == 0x2BFFB4u) {
        ctx->pc = 0x2BFFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFFB0u;
        // 0x2bffb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFFB8u;
        goto label_2bffb8;
    }
    ctx->pc = 0x2BFFB0u;
    {
        const bool branch_taken_0x2bffb0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BFFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFFB0u;
        // 0x2bffb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bffb0) {
            ctx->pc = 0x2D5FB0u;
            return;
        }
    }
    ctx->pc = 0x2BFFB8u;
label_2bffb8:
    // 0x2bffb8: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2bffbc:
    if (ctx->pc == 0x2BFFBCu) {
        ctx->pc = 0x2BFFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFFB8u;
        // 0x2bffbc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFFC0u;
        goto label_2bffc0;
    }
    ctx->pc = 0x2BFFB8u;
    {
        const bool branch_taken_0x2bffb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BFFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFFB8u;
        // 0x2bffbc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bffb8) {
            ctx->pc = 0x2D5FC0u;
            return;
        }
    }
    ctx->pc = 0x2BFFC0u;
label_2bffc0:
    // 0x2bffc0: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bffc0u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2bffc4:
    // 0x2bffc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bffc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bffc8:
    // 0x2bffc8: 0xb0b1000  j           func_C2C4000
label_2bffcc:
    if (ctx->pc == 0x2BFFCCu) {
        ctx->pc = 0x2BFFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFFC8u;
        // 0x2bffcc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFFD0u;
        goto label_2bffd0;
    }
    ctx->pc = 0x2BFFC8u;
    ctx->pc = 0x2BFFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFFC8u;
    // 0x2bffcc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2BFFC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BFFD0u;
label_2bffd0:
    // 0x2bffd0: 0x4201078c  .word       0x4201078C                   # INVALID     $s0, $at, 0x78C # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bffd0u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0xC at 0x2BFFD0 raw=0x4201078C");
 /* MITIGATED */
label_2bffd4:
    // 0x2bffd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bffd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bffd8:
    // 0x2bffd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bffd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bffdc:
    // 0x2bffdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bffdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bffe0:
    // 0x2bffe0: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2bffe0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2bffe4:
    // 0x2bffe4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bffe4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bffe8:
    // 0x2bffe8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bffe8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bffec:
    // 0x2bffec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bffecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfff0:
    // 0x2bfff0: 0x120e7009  beq         $s0, $t6, . + 4 + (0x7009 << 2)
label_2bfff4:
    if (ctx->pc == 0x2BFFF4u) {
        ctx->pc = 0x2BFFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFFF0u;
        // 0x2bfff4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFFF8u;
        goto label_2bfff8;
    }
    ctx->pc = 0x2BFFF0u;
    {
        const bool branch_taken_0x2bfff0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BFFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFFF0u;
        // 0x2bfff4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfff0) {
            ctx->pc = 0x2DC018u;
            return;
        }
    }
    ctx->pc = 0x2BFFF8u;
label_2bfff8:
    // 0x2bfff8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfff8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfffc:
    // 0x2bfffc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfffcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0000:
    // 0x2c0000: 0x5a0077bd  blezl       $s0, . + 4 + (0x77BD << 2)
label_2c0004:
    if (ctx->pc == 0x2C0004u) {
        ctx->pc = 0x2C0004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0000u;
        // 0x2c0004: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0008u;
        goto label_2c0008;
    }
    ctx->pc = 0x2C0000u;
    {
        const bool branch_taken_0x2c0000 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2c0000) {
            ctx->pc = 0x2C0004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0000u;
            // 0x2c0004: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DDEF8u;
            return;
        }
    }
    ctx->pc = 0x2C0008u;
label_2c0008:
    // 0x2c0008: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0008u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c000c:
    // 0x2c000c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c000cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0010:
    // 0x2c0010: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2c0010u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2c0014:
    // 0x2c0014: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0014u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0018:
    // 0x2c0018: 0x100108d4  beq         $zero, $at, . + 4 + (0x8D4 << 2)
label_2c001c:
    if (ctx->pc == 0x2C001Cu) {
        ctx->pc = 0x2C001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0018u;
        // 0x2c001c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0020u;
        goto label_2c0020;
    }
    ctx->pc = 0x2C0018u;
    {
        const bool branch_taken_0x2c0018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2C001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0018u;
        // 0x2c001c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0018) {
            ctx->pc = 0x2C236Cu;
            { ctx->pc = 0x2c236c; return; }
        }
    }
    ctx->pc = 0x2C0020u;
label_2c0020:
    // 0x2c0020: 0x80000efc  lb          $zero, 0xEFC($zero)
    ctx->pc = 0x2c0020u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0xEFCu));
label_2c0024:
    // 0x2c0024: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0024u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0028:
    // 0x2c0028: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0028u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c002c:
    // 0x2c002c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c002cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0030:
    // 0x2c0030: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0030u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0034:
    // 0x2c0034: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c0034u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c0038:
    // 0x2c0038: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0038u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c003c:
    // 0x2c003c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c003cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0040:
    // 0x2c0040: 0x0  nop
    ctx->pc = 0x2c0040u;
    // NOP
label_2c0044:
    // 0x2c0044: 0x4a000450  vmaxx       $vf17, $vf0, $vf0x
    ctx->pc = 0x2c0044u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
label_2c0048:
    // 0x2c0048: 0x800806bc  lb          $t0, 0x6BC($zero)
    ctx->pc = 0x2c0048u;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x6BCu));
label_2c004c:
    // 0x2c004c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c004cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0050:
    // 0x2c0050: 0x810443fe  lb          $a0, 0x43FE($t0)
    ctx->pc = 0x2c0050u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 17406)));
label_2c0054:
    // 0x2c0054: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0054u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0058:
    // 0x2c0058: 0x100740d4  beq         $zero, $a3, . + 4 + (0x40D4 << 2)
label_2c005c:
    if (ctx->pc == 0x2C005Cu) {
        ctx->pc = 0x2C005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0058u;
        // 0x2c005c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0060u;
        goto label_2c0060;
    }
    ctx->pc = 0x2C0058u;
    {
        const bool branch_taken_0x2c0058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2C005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0058u;
        // 0x2c005c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0058) {
            ctx->pc = 0x2D03ACu;
            return;
        }
    }
    ctx->pc = 0x2C0060u;
label_2c0060:
    // 0x2c0060: 0x10064001  beq         $zero, $a2, . + 4 + (0x4001 << 2)
label_2c0064:
    if (ctx->pc == 0x2C0064u) {
        ctx->pc = 0x2C0064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0060u;
        // 0x2c0064: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0068u;
        goto label_2c0068;
    }
    ctx->pc = 0x2C0060u;
    {
        const bool branch_taken_0x2c0060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2C0064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0060u;
        // 0x2c0064: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0060) {
            ctx->pc = 0x2D0068u;
            return;
        }
    }
    ctx->pc = 0x2C0068u;
label_2c0068:
    // 0x2c0068: 0x100e0000  beq         $zero, $t6, . + 4 + (0x0 << 2)
label_2c006c:
    if (ctx->pc == 0x2C006Cu) {
        ctx->pc = 0x2C006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0068u;
        // 0x2c006c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0070u;
        goto label_2c0070;
    }
    ctx->pc = 0x2C0068u;
    {
        const bool branch_taken_0x2c0068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2C006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0068u;
        // 0x2c006c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0068) {
            ctx->pc = 0x2C006Cu;
            goto label_2c006c;
        }
    }
    ctx->pc = 0x2C0070u;
label_2c0070:
    // 0x2c0070: 0x808e43ff  lb          $t6, 0x43FF($a0)
    ctx->pc = 0x2c0070u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 17407)));
label_2c0074:
    // 0x2c0074: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0074u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0078:
    // 0x2c0078: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0078u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2C0078 raw=0x01FA0005");
 /* MITIGATED */
label_2c007c:
    // 0x2c007c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c007cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0080:
    // 0x2c0080: 0x10020096  beq         $zero, $v0, . + 4 + (0x96 << 2)
label_2c0084:
    if (ctx->pc == 0x2C0084u) {
        ctx->pc = 0x2C0084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0080u;
        // 0x2c0084: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0088u;
        goto label_2c0088;
    }
    ctx->pc = 0x2C0080u;
    {
        const bool branch_taken_0x2c0080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C0084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0080u;
        // 0x2c0084: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0080) {
            ctx->pc = 0x2C02DCu;
            goto label_2c02dc;
        }
    }
    ctx->pc = 0x2C0088u;
label_2c0088:
    // 0x2c0088: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2c008c:
    if (ctx->pc == 0x2C008Cu) {
        ctx->pc = 0x2C008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0088u;
        // 0x2c008c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0090u;
        goto label_2c0090;
    }
    ctx->pc = 0x2C0088u;
    {
        const bool branch_taken_0x2c0088 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0088u;
        // 0x2c008c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0088) {
            ctx->pc = 0x2C2088u;
            { ctx->pc = 0x2c2088; return; }
        }
    }
    ctx->pc = 0x2C0090u;
label_2c0090:
    // 0x2c0090: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2c0094:
    if (ctx->pc == 0x2C0094u) {
        ctx->pc = 0x2C0094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0090u;
        // 0x2c0094: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0098u;
        goto label_2c0098;
    }
    ctx->pc = 0x2C0090u;
    {
        const bool branch_taken_0x2c0090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C0094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0090u;
        // 0x2c0094: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0090) {
            ctx->pc = 0x2D6098u;
            return;
        }
    }
    ctx->pc = 0x2C0098u;
label_2c0098:
    // 0x2c0098: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0098u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2c009c:
    // 0x2c009c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c009cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c00a0:
    // 0x2c00a0: 0xb0b1000  j           func_C2C4000
label_2c00a4:
    if (ctx->pc == 0x2C00A4u) {
        ctx->pc = 0x2C00A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C00A0u;
        // 0x2c00a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C00A8u;
        goto label_2c00a8;
    }
    ctx->pc = 0x2C00A0u;
    ctx->pc = 0x2C00A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C00A0u;
    // 0x2c00a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2C00A0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C00A8u;
label_2c00a8:
    // 0x2c00a8: 0x12042001  beq         $s0, $a0, . + 4 + (0x2001 << 2)
label_2c00ac:
    if (ctx->pc == 0x2C00ACu) {
        ctx->pc = 0x2C00ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C00A8u;
        // 0x2c00ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C00B0u;
        goto label_2c00b0;
    }
    ctx->pc = 0x2C00A8u;
    {
        const bool branch_taken_0x2c00a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x2C00ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C00A8u;
        // 0x2c00ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c00a8) {
            ctx->pc = 0x2C80B0u;
            { ctx->pc = 0x2c80b0; return; }
        }
    }
    ctx->pc = 0x2C00B0u;
label_2c00b0:
    // 0x2c00b0: 0x90c3000  j           func_430C000
label_2c00b4:
    if (ctx->pc == 0x2C00B4u) {
        ctx->pc = 0x2C00B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C00B0u;
        // 0x2c00b4: 0x1e08418  .word       0x01E08418                   # mult        $s0, $t7, $zero # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C00B8u;
        goto label_2c00b8;
    }
    ctx->pc = 0x2C00B0u;
    ctx->pc = 0x2C00B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C00B0u;
    // 0x2c00b4: 0x1e08418  .word       0x01E08418                   # mult        $s0, $t7, $zero # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C000u, 0x2C00B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C00B8u;
label_2c00b8:
    // 0x2c00b8: 0x82e3000  j           func_B8C000
label_2c00bc:
    if (ctx->pc == 0x2C00BCu) {
        ctx->pc = 0x2C00BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C00B8u;
        // 0x2c00bc: 0x1e08c58  .word       0x01E08C58                   # mult        $s1, $t7, $zero # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C00C0u;
        goto label_2c00c0;
    }
    ctx->pc = 0x2C00B8u;
    ctx->pc = 0x2C00BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C00B8u;
    // 0x2c00bc: 0x1e08c58  .word       0x01E08C58                   # mult        $s1, $t7, $zero # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0xB8C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB8C000u, 0x2C00B8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C00C0u;
label_2c00c0:
    // 0x2c00c0: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2c00c4:
    if (ctx->pc == 0x2C00C4u) {
        ctx->pc = 0x2C00C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C00C0u;
        // 0x2c00c4: 0x1e09498  .word       0x01E09498                   # mult        $s2, $t7, $zero # 00000480 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C00C8u;
        goto label_2c00c8;
    }
    ctx->pc = 0x2C00C0u;
    {
        const bool branch_taken_0x2c00c0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C00C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C00C0u;
        // 0x2c00c4: 0x1e09498  .word       0x01E09498                   # mult        $s2, $t7, $zero # 00000480 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c00c0) {
            ctx->pc = 0x2C20C0u;
            { ctx->pc = 0x2c20c0; return; }
        }
    }
    ctx->pc = 0x2C00C8u;
label_2c00c8:
    // 0x2c00c8: 0x10033001  beq         $zero, $v1, . + 4 + (0x3001 << 2)
label_2c00cc:
    if (ctx->pc == 0x2C00CCu) {
        ctx->pc = 0x2C00CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C00C8u;
        // 0x2c00cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C00D0u;
        goto label_2c00d0;
    }
    ctx->pc = 0x2C00C8u;
    {
        const bool branch_taken_0x2c00c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C00CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C00C8u;
        // 0x2c00cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c00c8) {
            ctx->pc = 0x2CC0D0u;
            { ctx->pc = 0x2cc0d0; return; }
        }
    }
    ctx->pc = 0x2C00D0u;
label_2c00d0:
    // 0x2c00d0: 0x10020002  beq         $zero, $v0, . + 4 + (0x2 << 2)
label_2c00d4:
    if (ctx->pc == 0x2C00D4u) {
        ctx->pc = 0x2C00D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C00D0u;
        // 0x2c00d4: 0x208428  .word       0x00208428                   # mfsa        $s0 # 00200400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 16, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C00D8u;
        goto label_2c00d8;
    }
    ctx->pc = 0x2C00D0u;
    {
        const bool branch_taken_0x2c00d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C00D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C00D0u;
        // 0x2c00d4: 0x208428  .word       0x00208428                   # mfsa        $s0 # 00200400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 16, ctx->sa);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c00d0) {
            ctx->pc = 0x2C00DCu;
            goto label_2c00dc;
        }
    }
    ctx->pc = 0x2C00D8u;
label_2c00d8:
    // 0x2c00d8: 0x800270b4  lb          $v0, 0x70B4($zero)
    ctx->pc = 0x2c00d8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x70B4u));
label_2c00dc:
    // 0x2c00dc: 0x208c68  .word       0x00208C68                   # mfsa        $s1 # 00200440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c00dcu;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_2c00e0:
    // 0x2c00e0: 0x800b6334  lb          $t3, 0x6334($zero)
    ctx->pc = 0x2c00e0u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x6334u));
label_2c00e4:
    // 0x2c00e4: 0x2094a8  .word       0x002094A8                   # mfsa        $s2 # 00200480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c00e4u;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_2c00e8:
    // 0x2c00e8: 0x50020002  beql        $zero, $v0, . + 4 + (0x2 << 2)
label_2c00ec:
    if (ctx->pc == 0x2C00ECu) {
        ctx->pc = 0x2C00ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C00E8u;
        // 0x2c00ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C00F0u;
        goto label_2c00f0;
    }
    ctx->pc = 0x2C00E8u;
    {
        const bool branch_taken_0x2c00e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c00e8) {
            ctx->pc = 0x2C00ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C00E8u;
            // 0x2c00ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C00F4u;
            goto label_2c00f4;
        }
    }
    ctx->pc = 0x2C00F0u;
label_2c00f0:
    // 0x2c00f0: 0x800d07f2  lb          $t5, 0x7F2($zero)
    ctx->pc = 0x2c00f0u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x7F2u));
label_2c00f4:
    // 0x2c00f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c00f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c00f8:
    // 0x2c00f8: 0x100d0003  beq         $zero, $t5, . + 4 + (0x3 << 2)
label_2c00fc:
    if (ctx->pc == 0x2C00FCu) {
        ctx->pc = 0x2C00FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C00F8u;
        // 0x2c00fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0100u;
        goto label_2c0100;
    }
    ctx->pc = 0x2C00F8u;
    {
        const bool branch_taken_0x2c00f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2C00FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C00F8u;
        // 0x2c00fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c00f8) {
            ctx->pc = 0x2C0108u;
            goto label_2c0108;
        }
    }
    ctx->pc = 0x2C0100u;
label_2c0100:
    // 0x2c0100: 0x800c1970  lb          $t4, 0x1970($zero)
    ctx->pc = 0x2c0100u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x1970u));
label_2c0104:
    // 0x2c0104: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0104u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0108:
    // 0x2c0108: 0x81f31b7c  lb          $s3, 0x1B7C($t7)
    ctx->pc = 0x2c0108u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2c010c:
    // 0x2c010c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c010cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0110:
    // 0x2c0110: 0x1f43000  .word       0x01F43000                   # sll         $a2, $s4, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0110u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 0));
label_2c0114:
    // 0x2c0114: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0114u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0118:
    // 0x2c0118: 0x800c29b0  lb          $t4, 0x29B0($zero)
    ctx->pc = 0x2c0118u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x29B0u));
label_2c011c:
    // 0x2c011c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c011cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0120:
    // 0x2c0120: 0x22000000  addi        $zero, $s0, 0x0
    ctx->pc = 0x2c0120u;
    // NOP (addi to $zero)
label_2c0124:
    // 0x2c0124: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0124u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0128:
    // 0x2c0128: 0x809e6bfd  lb          $fp, 0x6BFD($a0)
    ctx->pc = 0x2c0128u;
    SET_GPR_S32(ctx, 30, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 27645)));
label_2c012c:
    // 0x2c012c: 0x1f309bc  .word       0x01F309BC                   # dsll32      $at, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c012cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << (32 + 6));
label_2c0130:
    // 0x2c0130: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2c0130u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2c0134:
    // 0x2c0134: 0x1f310bd  .word       0x01F310BD                   # INVALID     $t7, $s3, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0134u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C0134 raw=0x01F310BD");
 /* MITIGATED */
label_2c0138:
    // 0x2c0138: 0x800b07b2  lb          $t3, 0x7B2($zero)
    ctx->pc = 0x2c0138u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x7B2u));
label_2c013c:
    // 0x2c013c: 0x1f318be  .word       0x01F318BE                   # dsrl32      $v1, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c013cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (32 + 2));
label_2c0140:
    // 0x2c0140: 0x800a07b2  lb          $t2, 0x7B2($zero)
    ctx->pc = 0x2c0140u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x7B2u));
label_2c0144:
    // 0x2c0144: 0x1e0254b  .word       0x01E0254B                   # movn        $a0, $t7, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0144u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
label_2c0148:
    // 0x2c0148: 0x800907b2  lb          $t1, 0x7B2($zero)
    ctx->pc = 0x2c0148u;
    SET_GPR_S32(ctx, 9, (int8_t)FAST_READ8(0x7B2u));
label_2c014c:
    // 0x2c014c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c014cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0150:
    // 0x2c0150: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0150u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0154:
    // 0x2c0154: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0154u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0158:
    // 0x2c0158: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0158u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c015c:
    // 0x2c015c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c015cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0160:
    // 0x2c0160: 0x81f503bc  lb          $s5, 0x3BC($t7)
    ctx->pc = 0x2c0160u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2c0164:
    // 0x2c0164: 0x1f361bc  .word       0x01F361BC                   # dsll32      $t4, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0164u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 19) << (32 + 6));
label_2c0168:
    // 0x2c0168: 0x81f08b3c  lb          $s0, -0x74C4($t7)
    ctx->pc = 0x2c0168u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937404)));
label_2c016c:
    // 0x2c016c: 0x1f368bd  .word       0x01F368BD                   # INVALID     $t7, $s3, 0x68BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c016cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C016C raw=0x01F368BD");
 /* MITIGATED */
label_2c0170:
    // 0x2c0170: 0x81f1933c  lb          $s1, -0x6CC4($t7)
    ctx->pc = 0x2c0170u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939452)));
label_2c0174:
    // 0x2c0174: 0x1f370be  .word       0x01F370BE                   # dsrl32      $t6, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0174u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) >> (32 + 2));
label_2c0178:
    // 0x2c0178: 0x81dc2b7c  lb          $gp, 0x2B7C($t6)
    ctx->pc = 0x2c0178u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 11132)));
label_2c017c:
    // 0x2c017c: 0x1e07c8b  .word       0x01E07C8B                   # movn        $t7, $t7, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c017cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 15));
label_2c0180:
    // 0x2c0180: 0x8054033d  lb          $s4, 0x33D($v0)
    ctx->pc = 0x2c0180u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2c0184:
    // 0x2c0184: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0184u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0188:
    // 0x2c0188: 0x8194337c  lb          $s4, 0x337C($t4)
    ctx->pc = 0x2c0188u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 13180)));
label_2c018c:
    // 0x2c018c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c018cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0190:
    // 0x2c0190: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0190u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0194:
    // 0x2c0194: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0194u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2c0198:
    // 0x2c0198: 0x800a0270  lb          $t2, 0x270($zero)
    ctx->pc = 0x2c0198u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x270u));
label_2c019c:
    // 0x2c019c: 0x20f561  .word       0x0020F561                   # addu        $fp, $at, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c019cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2c01a0:
    // 0x2c01a0: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2c01a0u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2c01a4:
    // 0x2c01a4: 0x1c0afdc  .word       0x01C0AFDC                   # dmult       $t6, $zero # 0000AFC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c01a4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C01A4 raw=0x01C0AFDC");
 /* MITIGATED */
label_2c01a8:
    // 0x2c01a8: 0x81f31b7c  lb          $s3, 0x1B7C($t7)
    ctx->pc = 0x2c01a8u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2c01ac:
    // 0x2c01ac: 0x1cbe72a  .word       0x01CBE72A                   # slt         $gp, $t6, $t3 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c01acu;
    SET_GPR_U64(ctx, 28, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_2c01b0:
    // 0x2c01b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c01b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c01b4:
    // 0x2c01b4: 0x1c0a51c  .word       0x01C0A51C                   # dmult       $t6, $zero # 0000A500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c01b4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C01B4 raw=0x01C0A51C");
 /* MITIGATED */
label_2c01b8:
    // 0x2c01b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c01b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c01bc:
    // 0x2c01bc: 0x1d081ff  .word       0x01D081FF                   # dsra32      $s0, $s0, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c01bcu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 7));
label_2c01c0:
    // 0x2c01c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c01c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c01c4:
    // 0x2c01c4: 0x20afdf  .word       0x0020AFDF                   # ddivu       $s5, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c01c4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2C01C4 raw=0x0020AFDF");
 /* MITIGATED */
label_2c01c8:
    // 0x2c01c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c01c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c01cc:
    // 0x2c01cc: 0x1e0e71f  .word       0x01E0E71F                   # ddivu       $gp, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c01ccu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2C01CC raw=0x01E0E71F");
 /* MITIGATED */
label_2c01d0:
    // 0x2c01d0: 0x3e7a000  .word       0x03E7A000                   # sll         $s4, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c01d0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2c01d4:
    // 0x2c01d4: 0x1d189ff  .word       0x01D189FF                   # dsra32      $s1, $s1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c01d4u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 7));
label_2c01d8:
    // 0x2c01d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c01d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c01dc:
    // 0x2c01dc: 0x1d291ff  .word       0x01D291FF                   # dsra32      $s2, $s2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c01dcu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 7));
label_2c01e0:
    // 0x2c01e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c01e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c01e4:
    // 0x2c01e4: 0x20ffd0  .word       0x0020FFD0                   # mfhi        $ra # 002007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c01e4u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_2c01e8:
    // 0x2c01e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c01e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c01ec:
    // 0x2c01ec: 0x1fce17c  .word       0x01FCE17C                   # dsll32      $gp, $gp, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c01ecu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 28) << (32 + 5));
label_2c01f0:
    // 0x2c01f0: 0x800c67f2  lb          $t4, 0x67F2($zero)
    ctx->pc = 0x2c01f0u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x67F2u));
label_2c01f4:
    // 0x2c01f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c01f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c01f8:
    // 0x2c01f8: 0x2400003f  addiu       $zero, $zero, 0x3F
    ctx->pc = 0x2c01f8u;
    // NOP (addiu $zero, ...)
label_2c01fc:
    // 0x2c01fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c01fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0200:
    // 0x2c0200: 0x2275801  .word       0x02275801                   # INVALID     $s1, $a3, 0x5801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0200u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2C0200 raw=0x02275801");
 /* MITIGATED */
label_2c0204:
    // 0x2c0204: 0x1f5f97d  .word       0x01F5F97D                   # INVALID     $t7, $s5, -0x683 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0204u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C0204 raw=0x01F5F97D");
 /* MITIGATED */
label_2c0208:
    // 0x2c0208: 0x3c7e001  .word       0x03C7E001                   # INVALID     $fp, $a3, -0x1FFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0208u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2C0208 raw=0x03C7E001");
 /* MITIGATED */
label_2c020c:
    // 0x2c020c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c020cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0210:
    // 0x2c0210: 0x800102f0  lb          $at, 0x2F0($zero)
    ctx->pc = 0x2c0210u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2F0u));
label_2c0214:
    // 0x2c0214: 0x1f309bc  .word       0x01F309BC                   # dsll32      $at, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0214u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << (32 + 6));
label_2c0218:
    // 0x2c0218: 0x800d6ff2  lb          $t5, 0x6FF2($zero)
    ctx->pc = 0x2c0218u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x6FF2u));
label_2c021c:
    // 0x2c021c: 0x1f310bd  .word       0x01F310BD                   # INVALID     $t7, $s3, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c021cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C021C raw=0x01F310BD");
 /* MITIGATED */
label_2c0220:
    // 0x2c0220: 0x3e7a802  .word       0x03E7A802                   # srl         $s5, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0220u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 7), 0));
label_2c0224:
    // 0x2c0224: 0x1f318be  .word       0x01F318BE                   # dsrl32      $v1, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (32 + 2));
label_2c0228:
    // 0x2c0228: 0x8062abfc  lb          $v0, -0x5404($v1)
    ctx->pc = 0x2c0228u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294945788)));
label_2c022c:
    // 0x2c022c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c022cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0230:
    // 0x2c0230: 0x5a006806  blezl       $s0, . + 4 + (0x6806 << 2)
label_2c0234:
    if (ctx->pc == 0x2C0234u) {
        ctx->pc = 0x2C0234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0230u;
        // 0x2c0234: 0x1e0254b  .word       0x01E0254B                   # movn        $a0, $t7, $zero # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0238u;
        goto label_2c0238;
    }
    ctx->pc = 0x2C0230u;
    {
        const bool branch_taken_0x2c0230 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2c0230) {
            ctx->pc = 0x2C0234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0230u;
            // 0x2c0234: 0x1e0254b  .word       0x01E0254B                   # movn        $a0, $t7, $zero # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA24Cu;
            return;
        }
    }
    ctx->pc = 0x2C0238u;
label_2c0238:
    // 0x2c0238: 0x10073803  beq         $zero, $a3, . + 4 + (0x3803 << 2)
label_2c023c:
    if (ctx->pc == 0x2C023Cu) {
        ctx->pc = 0x2C023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0238u;
        // 0x2c023c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0240u;
        goto label_2c0240;
    }
    ctx->pc = 0x2C0238u;
    {
        const bool branch_taken_0x2c0238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2C023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0238u;
        // 0x2c023c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0238) {
            ctx->pc = 0x2CE248u;
            { ctx->pc = 0x2ce248; return; }
        }
    }
    ctx->pc = 0x2C0240u;
label_2c0240:
    // 0x2c0240: 0x800a4a70  lb          $t2, 0x4A70($zero)
    ctx->pc = 0x2c0240u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x4A70u));
label_2c0244:
    // 0x2c0244: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0244u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0248:
    // 0x2c0248: 0x800b4a70  lb          $t3, 0x4A70($zero)
    ctx->pc = 0x2c0248u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x4A70u));
label_2c024c:
    // 0x2c024c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c024cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0250:
    // 0x2c0250: 0x802df3fc  lb          $t5, -0xC04($at)
    ctx->pc = 0x2c0250u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964220)));
label_2c0254:
    // 0x2c0254: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0254u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0258:
    // 0x2c0258: 0x5a00480e  blezl       $s0, . + 4 + (0x480E << 2)
label_2c025c:
    if (ctx->pc == 0x2C025Cu) {
        ctx->pc = 0x2C025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0258u;
        // 0x2c025c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0260u;
        goto label_2c0260;
    }
    ctx->pc = 0x2C0258u;
    {
        const bool branch_taken_0x2c0258 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2c0258) {
            ctx->pc = 0x2C025Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0258u;
            // 0x2c025c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2294u;
            return;
        }
    }
    ctx->pc = 0x2C0260u;
label_2c0260:
    // 0x2c0260: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0260u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0264:
    // 0x2c0264: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0264u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0268:
    // 0x2c0268: 0x520c07de  beql        $s0, $t4, . + 4 + (0x7DE << 2)
label_2c026c:
    if (ctx->pc == 0x2C026Cu) {
        ctx->pc = 0x2C026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0268u;
        // 0x2c026c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0270u;
        goto label_2c0270;
    }
    ctx->pc = 0x2C0268u;
    {
        const bool branch_taken_0x2c0268 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        if (branch_taken_0x2c0268) {
            ctx->pc = 0x2C026Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0268u;
            // 0x2c026c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C21E4u;
            { ctx->pc = 0x2c21e4; return; }
        }
    }
    ctx->pc = 0x2C0270u;
label_2c0270:
    // 0x2c0270: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2c0270u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2c0274:
    // 0x2c0274: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0274u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0278:
    // 0x2c0278: 0x808e13fe  lb          $t6, 0x13FE($a0)
    ctx->pc = 0x2c0278u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5118)));
label_2c027c:
    // 0x2c027c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c027cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0280:
    // 0x2c0280: 0x5a0027c5  blezl       $s0, . + 4 + (0x27C5 << 2)
label_2c0284:
    if (ctx->pc == 0x2C0284u) {
        ctx->pc = 0x2C0284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0280u;
        // 0x2c0284: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0288u;
        goto label_2c0288;
    }
    ctx->pc = 0x2C0280u;
    {
        const bool branch_taken_0x2c0280 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2c0280) {
            ctx->pc = 0x2C0284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0280u;
            // 0x2c0284: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA198u;
            { ctx->pc = 0x2ca198; return; }
        }
    }
    ctx->pc = 0x2C0288u;
label_2c0288:
    // 0x2c0288: 0x12042001  beq         $s0, $a0, . + 4 + (0x2001 << 2)
label_2c028c:
    if (ctx->pc == 0x2C028Cu) {
        ctx->pc = 0x2C028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0288u;
        // 0x2c028c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0290u;
        goto label_2c0290;
    }
    ctx->pc = 0x2C0288u;
    {
        const bool branch_taken_0x2c0288 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x2C028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0288u;
        // 0x2c028c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0288) {
            ctx->pc = 0x2C8290u;
            { ctx->pc = 0x2c8290; return; }
        }
    }
    ctx->pc = 0x2C0290u;
label_2c0290:
    // 0x2c0290: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0290u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0294:
    // 0x2c0294: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0294u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0298:
    // 0x2c0298: 0x500e0002  beql        $zero, $t6, . + 4 + (0x2 << 2)
label_2c029c:
    if (ctx->pc == 0x2C029Cu) {
        ctx->pc = 0x2C029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0298u;
        // 0x2c029c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C02A0u;
        goto label_2c02a0;
    }
    ctx->pc = 0x2C0298u;
    {
        const bool branch_taken_0x2c0298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        if (branch_taken_0x2c0298) {
            ctx->pc = 0x2C029Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0298u;
            // 0x2c029c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C02A4u;
            goto label_2c02a4;
        }
    }
    ctx->pc = 0x2C02A0u;
label_2c02a0:
    // 0x2c02a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c02a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c02a4:
    // 0x2c02a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c02a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c02a8:
    // 0x2c02a8: 0x400001a3  .word       0x400001A3                   # mfc0        $zero, Index # 000001A3 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c02a8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c02ac:
    // 0x2c02ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c02acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c02b0:
    // 0x2c02b0: 0x100210d4  beq         $zero, $v0, . + 4 + (0x10D4 << 2)
label_2c02b4:
    if (ctx->pc == 0x2C02B4u) {
        ctx->pc = 0x2C02B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C02B0u;
        // 0x2c02b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C02B8u;
        goto label_2c02b8;
    }
    ctx->pc = 0x2C02B0u;
    {
        const bool branch_taken_0x2c02b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C02B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C02B0u;
        // 0x2c02b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c02b0) {
            ctx->pc = 0x2C4604u;
            { ctx->pc = 0x2c4604; return; }
        }
    }
    ctx->pc = 0x2C02B8u;
label_2c02b8:
    // 0x2c02b8: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2c02b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2c02bc:
    // 0x2c02bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c02bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c02c0:
    // 0x2c02c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c02c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c02c4:
    // 0x2c02c4: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c02c4u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c02c8:
    // 0x2c02c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c02c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c02cc:
    // 0x2c02cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c02ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c02d0:
    // 0x2c02d0: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2c02d0u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2c02d4:
    // 0x2c02d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c02d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c02d8:
    // 0x2c02d8: 0x808e0bfe  lb          $t6, 0xBFE($a0)
    ctx->pc = 0x2c02d8u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3070)));
label_2c02dc:
    // 0x2c02dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c02dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c02e0:
    // 0x2c02e0: 0x24010410  addiu       $at, $zero, 0x410
    ctx->pc = 0x2c02e0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
label_2c02e4:
    // 0x2c02e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c02e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c02e8:
    // 0x2c02e8: 0x52010030  beql        $s0, $at, . + 4 + (0x30 << 2)
label_2c02ec:
    if (ctx->pc == 0x2C02ECu) {
        ctx->pc = 0x2C02ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C02E8u;
        // 0x2c02ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C02F0u;
        goto label_2c02f0;
    }
    ctx->pc = 0x2C02E8u;
    {
        const bool branch_taken_0x2c02e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c02e8) {
            ctx->pc = 0x2C02ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C02E8u;
            // 0x2c02ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C03ACu;
            goto label_2c03ac;
        }
    }
    ctx->pc = 0x2C02F0u;
label_2c02f0:
    // 0x2c02f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c02f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c02f4:
    // 0x2c02f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c02f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c02f8:
    // 0x2c02f8: 0x26fdf7df  addiu       $sp, $s7, -0x821
    ctx->pc = 0x2c02f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 23), 4294965215));
label_2c02fc:
    // 0x2c02fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c02fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0300:
    // 0x2c0300: 0x5201002d  beql        $s0, $at, . + 4 + (0x2D << 2)
label_2c0304:
    if (ctx->pc == 0x2C0304u) {
        ctx->pc = 0x2C0304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0300u;
        // 0x2c0304: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0308u;
        goto label_2c0308;
    }
    ctx->pc = 0x2C0300u;
    {
        const bool branch_taken_0x2c0300 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c0300) {
            ctx->pc = 0x2C0304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0300u;
            // 0x2c0304: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C03B8u;
            goto label_2c03b8;
        }
    }
    ctx->pc = 0x2C0308u;
label_2c0308:
    // 0x2c0308: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0308u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c030c:
    // 0x2c030c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c030cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0310:
    // 0x2c0310: 0x26ff7df7  addiu       $ra, $s7, 0x7DF7
    ctx->pc = 0x2c0310u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 32247));
label_2c0314:
    // 0x2c0314: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0314u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0318:
    // 0x2c0318: 0x5201002a  beql        $s0, $at, . + 4 + (0x2A << 2)
label_2c031c:
    if (ctx->pc == 0x2C031Cu) {
        ctx->pc = 0x2C031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0318u;
        // 0x2c031c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0320u;
        goto label_2c0320;
    }
    ctx->pc = 0x2C0318u;
    {
        const bool branch_taken_0x2c0318 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c0318) {
            ctx->pc = 0x2C031Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0318u;
            // 0x2c031c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C03C4u;
            goto label_2c03c4;
        }
    }
    ctx->pc = 0x2C0320u;
label_2c0320:
    // 0x2c0320: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0320u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0324:
    // 0x2c0324: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0324u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0328:
    // 0x2c0328: 0x26ffbefb  addiu       $ra, $s7, -0x4105
    ctx->pc = 0x2c0328u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294950651));
label_2c032c:
    // 0x2c032c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c032cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0330:
    // 0x2c0330: 0x52010027  beql        $s0, $at, . + 4 + (0x27 << 2)
label_2c0334:
    if (ctx->pc == 0x2C0334u) {
        ctx->pc = 0x2C0334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0330u;
        // 0x2c0334: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0338u;
        goto label_2c0338;
    }
    ctx->pc = 0x2C0330u;
    {
        const bool branch_taken_0x2c0330 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c0330) {
            ctx->pc = 0x2C0334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0330u;
            // 0x2c0334: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C03D0u;
            goto label_2c03d0;
        }
    }
    ctx->pc = 0x2C0338u;
label_2c0338:
    // 0x2c0338: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0338u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c033c:
    // 0x2c033c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c033cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0340:
    // 0x2c0340: 0x26ffdf7d  addiu       $ra, $s7, -0x2083
    ctx->pc = 0x2c0340u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294958973));
label_2c0344:
    // 0x2c0344: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0344u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0348:
    // 0x2c0348: 0x52010024  beql        $s0, $at, . + 4 + (0x24 << 2)
label_2c034c:
    if (ctx->pc == 0x2C034Cu) {
        ctx->pc = 0x2C034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0348u;
        // 0x2c034c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0350u;
        goto label_2c0350;
    }
    ctx->pc = 0x2C0348u;
    {
        const bool branch_taken_0x2c0348 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c0348) {
            ctx->pc = 0x2C034Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0348u;
            // 0x2c034c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C03DCu;
            goto label_2c03dc;
        }
    }
    ctx->pc = 0x2C0350u;
label_2c0350:
    // 0x2c0350: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0350u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0354:
    // 0x2c0354: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0354u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0358:
    // 0x2c0358: 0x26ffefbe  addiu       $ra, $s7, -0x1042
    ctx->pc = 0x2c0358u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294963134));
label_2c035c:
    // 0x2c035c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c035cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0360:
    // 0x2c0360: 0x52010021  beql        $s0, $at, . + 4 + (0x21 << 2)
label_2c0364:
    if (ctx->pc == 0x2C0364u) {
        ctx->pc = 0x2C0364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0360u;
        // 0x2c0364: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0368u;
        goto label_2c0368;
    }
    ctx->pc = 0x2C0360u;
    {
        const bool branch_taken_0x2c0360 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c0360) {
            ctx->pc = 0x2C0364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0360u;
            // 0x2c0364: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C03E8u;
            goto label_2c03e8;
        }
    }
    ctx->pc = 0x2C0368u;
label_2c0368:
    // 0x2c0368: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0368u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c036c:
    // 0x2c036c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c036cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0370:
    // 0x2c0370: 0x120f704b  beq         $s0, $t7, . + 4 + (0x704B << 2)
label_2c0374:
    if (ctx->pc == 0x2C0374u) {
        ctx->pc = 0x2C0374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0370u;
        // 0x2c0374: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0378u;
        goto label_2c0378;
    }
    ctx->pc = 0x2C0370u;
    {
        const bool branch_taken_0x2c0370 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        ctx->pc = 0x2C0374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0370u;
        // 0x2c0374: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0370) {
            ctx->pc = 0x2DC4A0u;
            return;
        }
    }
    ctx->pc = 0x2C0378u;
label_2c0378:
    // 0x2c0378: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0378u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c037c:
    // 0x2c037c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c037cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0380:
    // 0x2c0380: 0x5a007816  blezl       $s0, . + 4 + (0x7816 << 2)
label_2c0384:
    if (ctx->pc == 0x2C0384u) {
        ctx->pc = 0x2C0384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0380u;
        // 0x2c0384: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0388u;
        goto label_2c0388;
    }
    ctx->pc = 0x2C0380u;
    {
        const bool branch_taken_0x2c0380 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2c0380) {
            ctx->pc = 0x2C0384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0380u;
            // 0x2c0384: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE3DCu;
            return;
        }
    }
    ctx->pc = 0x2C0388u;
label_2c0388:
    // 0x2c0388: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0388u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c038c:
    // 0x2c038c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c038cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0390:
    // 0x2c0390: 0x100f7012  beq         $zero, $t7, . + 4 + (0x7012 << 2)
label_2c0394:
    if (ctx->pc == 0x2C0394u) {
        ctx->pc = 0x2C0394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0390u;
        // 0x2c0394: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0398u;
        goto label_2c0398;
    }
    ctx->pc = 0x2C0390u;
    {
        const bool branch_taken_0x2c0390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 15));
        ctx->pc = 0x2C0394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0390u;
        // 0x2c0394: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0390) {
            ctx->pc = 0x2DC3DCu;
            return;
        }
    }
    ctx->pc = 0x2C0398u;
label_2c0398:
    // 0x2c0398: 0x1fc3ff8  .word       0x01FC3FF8                   # dsll        $a3, $gp, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0398u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 28) << 31);
label_2c039c:
    // 0x2c039c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c039cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c03a0:
    // 0x2c03a0: 0x1f63ffb  .word       0x01F63FFB                   # dsra        $a3, $s6, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c03a0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 22) >> 31);
label_2c03a4:
    // 0x2c03a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c03a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c03a8:
    // 0x2c03a8: 0x1f43ffe  .word       0x01F43FFE                   # dsrl32      $a3, $s4, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c03a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 20) >> (32 + 31));
label_2c03ac:
    // 0x2c03ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c03acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c03b0:
    // 0x2c03b0: 0x1f937fd  .word       0x01F937FD                   # INVALID     $t7, $t9, 0x37FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c03b0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C03B0 raw=0x01F937FD");
 /* MITIGATED */
label_2c03b4:
    // 0x2c03b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c03b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c03b8:
    // 0x2c03b8: 0x1f737fe  .word       0x01F737FE                   # dsrl32      $a2, $s7, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c03b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) >> (32 + 31));
label_2c03bc:
    // 0x2c03bc: 0x1fce13c  .word       0x01FCE13C                   # dsll32      $gp, $gp, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c03bcu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 28) << (32 + 4));
label_2c03c0:
    // 0x2c03c0: 0x1f837ff  .word       0x01F837FF                   # dsra32      $a2, $t8, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c03c0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 24) >> (32 + 31));
label_2c03c4:
    // 0x2c03c4: 0x1f6b13c  .word       0x01F6B13C                   # dsll32      $s6, $s6, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c03c4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 4));
label_2c03c8:
    // 0x2c03c8: 0x3ef8000  .word       0x03EF8000                   # sll         $s0, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c03c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 15), 0));
label_2c03cc:
    // 0x2c03cc: 0x1f4a13c  .word       0x01F4A13C                   # dsll32      $s4, $s4, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c03ccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 4));
label_2c03d0:
    // 0x2c03d0: 0x3efe001  .word       0x03EFE001                   # INVALID     $ra, $t7, -0x1FFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c03d0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2C03D0 raw=0x03EFE001");
 /* MITIGATED */
label_2c03d4:
    // 0x2c03d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c03d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c03d8:
    // 0x2c03d8: 0x3efb004  sllv        $s6, $t7, $ra
    ctx->pc = 0x2c03d8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2c03dc:
    // 0x2c03dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c03dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c03e0:
    // 0x2c03e0: 0x3efa007  srav        $s4, $t7, $ra
    ctx->pc = 0x2c03e0u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2c03e4:
    // 0x2c03e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c03e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c03e8:
    // 0x2c03e8: 0x3efc802  .word       0x03EFC802                   # srl         $t9, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c03e8u;
    SET_GPR_S32(ctx, 25, (int32_t)SRL32(GPR_U32(ctx, 15), 0));
label_2c03ec:
    // 0x2c03ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c03ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c03f0:
    // 0x2c03f0: 0x3efb805  .word       0x03EFB805                   # INVALID     $ra, $t7, -0x47FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c03f0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2C03F0 raw=0x03EFB805");
 /* MITIGATED */
label_2c03f4:
    // 0x2c03f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c03f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c03f8:
    // 0x2c03f8: 0x3efc008  .word       0x03EFC008                   # jr          $ra # 000FC000 <InstrIdType: CPU_SPECIAL>
label_2c03fc:
    if (ctx->pc == 0x2C03FCu) {
        ctx->pc = 0x2C03FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C03F8u;
        // 0x2c03fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0400u;
        goto label_2c0400;
    }
    ctx->pc = 0x2C03F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C03FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C03F8u;
        // 0x2c03fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C03F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0400u;
label_2c0400:
    // 0x2c0400: 0x3ef8803  .word       0x03EF8803                   # sra         $s1, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0400u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 15), 0));
label_2c0404:
    // 0x2c0404: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0404u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0408:
    // 0x2c0408: 0x3ef9006  srlv        $s2, $t7, $ra
    ctx->pc = 0x2c0408u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2c040c:
    // 0x2c040c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c040cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0410:
    // 0x2c0410: 0x100e7009  beq         $zero, $t6, . + 4 + (0x7009 << 2)
label_2c0414:
    if (ctx->pc == 0x2C0414u) {
        ctx->pc = 0x2C0414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0410u;
        // 0x2c0414: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0418u;
        goto label_2c0418;
    }
    ctx->pc = 0x2C0410u;
    {
        const bool branch_taken_0x2c0410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2C0414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0410u;
        // 0x2c0414: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0410) {
            ctx->pc = 0x2DC438u;
            return;
        }
    }
    ctx->pc = 0x2C0418u;
label_2c0418:
    // 0x2c0418: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2c0418u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2c041c:
    // 0x2c041c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c041cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0420:
    // 0x2c0420: 0x808e0bff  lb          $t6, 0xBFF($a0)
    ctx->pc = 0x2c0420u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3071)));
label_2c0424:
    // 0x2c0424: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0424u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0428:
    // 0x2c0428: 0x40000008  .word       0x40000008                   # mfc0        $zero, Index # 00000008 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c0428u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c042c:
    // 0x2c042c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c042cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0430:
    // 0x2c0430: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0430u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0434:
    // 0x2c0434: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0434u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0438:
    // 0x2c0438: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2c0438u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2c043c:
    // 0x2c043c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c043cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0440:
    // 0x2c0440: 0x420f0009  .word       0x420F0009                   # INVALID     $s0, $t7, 0x9 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c0440u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x9 at 0x2C0440 raw=0x420F0009");
 /* MITIGATED */
label_2c0444:
    // 0x2c0444: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0444u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0448:
    // 0x2c0448: 0x100e00b5  beq         $zero, $t6, . + 4 + (0xB5 << 2)
label_2c044c:
    if (ctx->pc == 0x2C044Cu) {
        ctx->pc = 0x2C044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0448u;
        // 0x2c044c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0450u;
        goto label_2c0450;
    }
    ctx->pc = 0x2C0448u;
    {
        const bool branch_taken_0x2c0448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2C044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0448u;
        // 0x2c044c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0448) {
            ctx->pc = 0x2C0720u;
            { ctx->pc = 0x2c0720; return; }
        }
    }
    ctx->pc = 0x2C0450u;
label_2c0450:
    // 0x2c0450: 0x420f0034  .word       0x420F0034                   # INVALID     $s0, $t7, 0x34 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c0450u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x34 at 0x2C0450 raw=0x420F0034");
 /* MITIGATED */
label_2c0454:
    // 0x2c0454: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0454u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0458:
    // 0x2c0458: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0458u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c045c:
    // 0x2c045c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c045cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0460:
    // 0x2c0460: 0x420f001b  .word       0x420F001B                   # INVALID     $s0, $t7, 0x1B # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c0460u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1B at 0x2C0460 raw=0x420F001B");
 /* MITIGATED */
label_2c0464:
    // 0x2c0464: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0464u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0468:
    // 0x2c0468: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0468u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c046c:
    // 0x2c046c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c046cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0470:
    // 0x2c0470: 0x11e117ff  beq         $t7, $at, . + 4 + (0x17FF << 2)
label_2c0474:
    if (ctx->pc == 0x2C0474u) {
        ctx->pc = 0x2C0474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0470u;
        // 0x2c0474: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0478u;
        goto label_2c0478;
    }
    ctx->pc = 0x2C0470u;
    {
        const bool branch_taken_0x2c0470 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 1));
        ctx->pc = 0x2C0474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0470u;
        // 0x2c0474: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0470) {
            ctx->pc = 0x2C6470u;
            { ctx->pc = 0x2c6470; return; }
        }
    }
    ctx->pc = 0x2C0478u;
label_2c0478:
    // 0x2c0478: 0x80010872  lb          $at, 0x872($zero)
    ctx->pc = 0x2c0478u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x872u));
label_2c047c:
    // 0x2c047c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c047cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0480:
    // 0x2c0480: 0x400007bc  .word       0x400007BC                   # mfc0        $zero, Index # 000007BC <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c0480u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c0484:
    // 0x2c0484: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0484u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0488:
    // 0x2c0488: 0xa213fff  j           func_884FFFC
label_2c048c:
    if (ctx->pc == 0x2C048Cu) {
        ctx->pc = 0x2C048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0488u;
        // 0x2c048c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0490u;
        goto label_2c0490;
    }
    ctx->pc = 0x2C0488u;
    ctx->pc = 0x2C048Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0488u;
    // 0x2c048c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x884FFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x884FFFCu, 0x2C0488u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C0490u;
label_2c0490:
    // 0x2c0490: 0x81ee837f  lb          $t6, -0x7C81($t7)
    ctx->pc = 0x2c0490u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935423)));
label_2c0494:
    // 0x2c0494: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0494u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0498:
    // 0x2c0498: 0x81ee8b7f  lb          $t6, -0x7481($t7)
    ctx->pc = 0x2c0498u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937471)));
label_2c049c:
    // 0x2c049c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c049cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c04a0:
    // 0x2c04a0: 0x81ee937f  lb          $t6, -0x6C81($t7)
    ctx->pc = 0x2c04a0u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939519)));
label_2c04a4:
    // 0x2c04a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c04a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c04a8:
    // 0x2c04a8: 0x81ee9b7f  lb          $t6, -0x6481($t7)
    ctx->pc = 0x2c04a8u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941567)));
label_2c04ac:
    // 0x2c04ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c04acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c04b0:
    // 0x2c04b0: 0x81eeab7f  lb          $t6, -0x5481($t7)
    ctx->pc = 0x2c04b0u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945663)));
label_2c04b4:
    // 0x2c04b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c04b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c04b8:
    // 0x2c04b8: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2c04bc:
    if (ctx->pc == 0x2C04BCu) {
        ctx->pc = 0x2C04BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C04B8u;
        // 0x2c04bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C04C0u;
        goto label_2c04c0;
    }
    ctx->pc = 0x2C04B8u;
    {
        const bool branch_taken_0x2c04b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2C04BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C04B8u;
        // 0x2c04bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c04b8) {
            ctx->pc = 0x2DC4C0u;
            return;
        }
    }
    ctx->pc = 0x2C04C0u;
label_2c04c0:
    // 0x2c04c0: 0x810273ff  lb          $v0, 0x73FF($t0)
    ctx->pc = 0x2c04c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2c04c4:
    // 0x2c04c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c04c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c04c8:
    // 0x2c04c8: 0x808373ff  lb          $v1, 0x73FF($a0)
    ctx->pc = 0x2c04c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2c04cc:
    // 0x2c04cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c04ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c04d0:
    // 0x2c04d0: 0x804473ff  lb          $a0, 0x73FF($v0)
    ctx->pc = 0x2c04d0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2c04d4:
    // 0x2c04d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c04d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c04d8:
    // 0x2c04d8: 0x802573ff  lb          $a1, 0x73FF($at)
    ctx->pc = 0x2c04d8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2c04dc:
    // 0x2c04dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c04dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c04e0:
    // 0x2c04e0: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2c04e4:
    if (ctx->pc == 0x2C04E4u) {
        ctx->pc = 0x2C04E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C04E0u;
        // 0x2c04e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C04E8u;
        goto label_2c04e8;
    }
    ctx->pc = 0x2C04E0u;
    {
        const bool branch_taken_0x2c04e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2C04E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C04E0u;
        // 0x2c04e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c04e0) {
            ctx->pc = 0x2DC4E8u;
            return;
        }
    }
    ctx->pc = 0x2C04E8u;
label_2c04e8:
    // 0x2c04e8: 0x810673ff  lb          $a2, 0x73FF($t0)
    ctx->pc = 0x2c04e8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2c04ec:
    // 0x2c04ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c04ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c04f0:
    // 0x2c04f0: 0x808773ff  lb          $a3, 0x73FF($a0)
    ctx->pc = 0x2c04f0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2c04f4:
    // 0x2c04f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c04f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c04f8:
    // 0x2c04f8: 0x804873ff  lb          $t0, 0x73FF($v0)
    ctx->pc = 0x2c04f8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2c04fc:
    // 0x2c04fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c04fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0500:
    // 0x2c0500: 0x802973ff  lb          $t1, 0x73FF($at)
    ctx->pc = 0x2c0500u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2c0504:
    // 0x2c0504: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0504u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0508:
    // 0x2c0508: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2c050c:
    if (ctx->pc == 0x2C050Cu) {
        ctx->pc = 0x2C050Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0508u;
        // 0x2c050c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0510u;
        goto label_2c0510;
    }
    ctx->pc = 0x2C0508u;
    {
        const bool branch_taken_0x2c0508 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2C050Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0508u;
        // 0x2c050c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0508) {
            ctx->pc = 0x2DC510u;
            return;
        }
    }
    ctx->pc = 0x2C0510u;
label_2c0510:
    // 0x2c0510: 0x810a73ff  lb          $t2, 0x73FF($t0)
    ctx->pc = 0x2c0510u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2c0514:
    // 0x2c0514: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0514u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0518:
    // 0x2c0518: 0x808b73ff  lb          $t3, 0x73FF($a0)
    ctx->pc = 0x2c0518u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2c051c:
    // 0x2c051c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c051cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0520:
    // 0x2c0520: 0x804c73ff  lb          $t4, 0x73FF($v0)
    ctx->pc = 0x2c0520u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2c0524:
    // 0x2c0524: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0524u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0528:
    // 0x2c0528: 0x802d73ff  lb          $t5, 0x73FF($at)
    ctx->pc = 0x2c0528u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2c052c:
    // 0x2c052c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c052cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0530:
    // 0x2c0530: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c0530u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2C0530 raw=0x48007800");
 /* MITIGATED */
label_2c0534:
    // 0x2c0534: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0534u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0538:
    // 0x2c0538: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0538u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c053c:
    // 0x2c053c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c053cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0540:
    // 0x2c0540: 0x800f0070  lb          $t7, 0x70($zero)
    ctx->pc = 0x2c0540u;
    SET_GPR_S32(ctx, 15, (int8_t)FAST_READ8(0x70u));
label_2c0544:
    // 0x2c0544: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0544u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0548:
    // 0x2c0548: 0x810a73fe  lb          $t2, 0x73FE($t0)
    ctx->pc = 0x2c0548u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2c054c:
    // 0x2c054c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c054cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0550:
    // 0x2c0550: 0x808b73fe  lb          $t3, 0x73FE($a0)
    ctx->pc = 0x2c0550u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2c0554:
    // 0x2c0554: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0554u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0558:
    // 0x2c0558: 0x804c73fe  lb          $t4, 0x73FE($v0)
    ctx->pc = 0x2c0558u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2c055c:
    // 0x2c055c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c055cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0560:
    // 0x2c0560: 0x802d73fe  lb          $t5, 0x73FE($at)
    ctx->pc = 0x2c0560u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2c0564:
    // 0x2c0564: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0564u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0568:
    // 0x2c0568: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2c056c:
    if (ctx->pc == 0x2C056Cu) {
        ctx->pc = 0x2C056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0568u;
        // 0x2c056c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0570u;
        goto label_2c0570;
    }
    ctx->pc = 0x2C0568u;
    {
        const bool branch_taken_0x2c0568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2C056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0568u;
        // 0x2c056c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0568) {
            ctx->pc = 0x2DC570u;
            return;
        }
    }
    ctx->pc = 0x2C0570u;
label_2c0570:
    // 0x2c0570: 0x810673fe  lb          $a2, 0x73FE($t0)
    ctx->pc = 0x2c0570u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2c0574:
    // 0x2c0574: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0574u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0578:
    // 0x2c0578: 0x808773fe  lb          $a3, 0x73FE($a0)
    ctx->pc = 0x2c0578u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2c057c:
    // 0x2c057c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c057cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0580:
    // 0x2c0580: 0x804873fe  lb          $t0, 0x73FE($v0)
    ctx->pc = 0x2c0580u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2c0584:
    // 0x2c0584: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0584u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0588:
    // 0x2c0588: 0x802973fe  lb          $t1, 0x73FE($at)
    ctx->pc = 0x2c0588u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2c058c:
    // 0x2c058c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c058cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0590:
    // 0x2c0590: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2c0594:
    if (ctx->pc == 0x2C0594u) {
        ctx->pc = 0x2C0594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0590u;
        // 0x2c0594: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0598u;
        goto label_2c0598;
    }
    ctx->pc = 0x2C0590u;
    {
        const bool branch_taken_0x2c0590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2C0594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0590u;
        // 0x2c0594: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0590) {
            ctx->pc = 0x2DC598u;
            return;
        }
    }
    ctx->pc = 0x2C0598u;
label_2c0598:
    // 0x2c0598: 0x810273fe  lb          $v0, 0x73FE($t0)
    ctx->pc = 0x2c0598u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2c059c:
    // 0x2c059c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c059cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c05a0:
    // 0x2c05a0: 0x808373fe  lb          $v1, 0x73FE($a0)
    ctx->pc = 0x2c05a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2c05a4:
    // 0x2c05a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c05a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c05a8:
    // 0x2c05a8: 0x804473fe  lb          $a0, 0x73FE($v0)
    ctx->pc = 0x2c05a8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2c05ac:
    // 0x2c05ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c05acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x2c05b0u;
    return;
}
