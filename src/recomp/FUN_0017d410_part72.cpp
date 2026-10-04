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

// Function: FUN_0017d410
// Address: 0x17d410 - 0x27d534
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017d410_part72(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x19fec0u: goto label_19fec0;
        case 0x19fec4u: goto label_19fec4;
        case 0x19fec8u: goto label_19fec8;
        case 0x19feccu: goto label_19fecc;
        case 0x19fed0u: goto label_19fed0;
        case 0x19fed4u: goto label_19fed4;
        case 0x19fed8u: goto label_19fed8;
        case 0x19fedcu: goto label_19fedc;
        case 0x19fee0u: goto label_19fee0;
        case 0x19fee4u: goto label_19fee4;
        case 0x19fee8u: goto label_19fee8;
        case 0x19feecu: goto label_19feec;
        case 0x19fef0u: goto label_19fef0;
        case 0x19fef4u: goto label_19fef4;
        case 0x19fef8u: goto label_19fef8;
        case 0x19fefcu: goto label_19fefc;
        case 0x19ff00u: goto label_19ff00;
        case 0x19ff04u: goto label_19ff04;
        case 0x19ff08u: goto label_19ff08;
        case 0x19ff0cu: goto label_19ff0c;
        case 0x19ff10u: goto label_19ff10;
        case 0x19ff14u: goto label_19ff14;
        case 0x19ff18u: goto label_19ff18;
        case 0x19ff1cu: goto label_19ff1c;
        case 0x19ff20u: goto label_19ff20;
        case 0x19ff24u: goto label_19ff24;
        case 0x19ff28u: goto label_19ff28;
        case 0x19ff2cu: goto label_19ff2c;
        case 0x19ff30u: goto label_19ff30;
        case 0x19ff34u: goto label_19ff34;
        case 0x19ff38u: goto label_19ff38;
        case 0x19ff3cu: goto label_19ff3c;
        case 0x19ff40u: goto label_19ff40;
        case 0x19ff44u: goto label_19ff44;
        case 0x19ff48u: goto label_19ff48;
        case 0x19ff4cu: goto label_19ff4c;
        case 0x19ff50u: goto label_19ff50;
        case 0x19ff54u: goto label_19ff54;
        case 0x19ff58u: goto label_19ff58;
        case 0x19ff5cu: goto label_19ff5c;
        case 0x19ff60u: goto label_19ff60;
        case 0x19ff64u: goto label_19ff64;
        case 0x19ff68u: goto label_19ff68;
        case 0x19ff6cu: goto label_19ff6c;
        case 0x19ff70u: goto label_19ff70;
        case 0x19ff74u: goto label_19ff74;
        case 0x19ff78u: goto label_19ff78;
        case 0x19ff7cu: goto label_19ff7c;
        case 0x19ff80u: goto label_19ff80;
        case 0x19ff84u: goto label_19ff84;
        case 0x19ff88u: goto label_19ff88;
        case 0x19ff8cu: goto label_19ff8c;
        case 0x19ff90u: goto label_19ff90;
        case 0x19ff94u: goto label_19ff94;
        case 0x19ff98u: goto label_19ff98;
        case 0x19ff9cu: goto label_19ff9c;
        case 0x19ffa0u: goto label_19ffa0;
        case 0x19ffa4u: goto label_19ffa4;
        case 0x19ffa8u: goto label_19ffa8;
        case 0x19ffacu: goto label_19ffac;
        case 0x19ffb0u: goto label_19ffb0;
        case 0x19ffb4u: goto label_19ffb4;
        case 0x19ffb8u: goto label_19ffb8;
        case 0x19ffbcu: goto label_19ffbc;
        case 0x19ffc0u: goto label_19ffc0;
        case 0x19ffc4u: goto label_19ffc4;
        case 0x19ffc8u: goto label_19ffc8;
        case 0x19ffccu: goto label_19ffcc;
        case 0x19ffd0u: goto label_19ffd0;
        case 0x19ffd4u: goto label_19ffd4;
        case 0x19ffd8u: goto label_19ffd8;
        case 0x19ffdcu: goto label_19ffdc;
        case 0x19ffe0u: goto label_19ffe0;
        case 0x19ffe4u: goto label_19ffe4;
        case 0x19ffe8u: goto label_19ffe8;
        case 0x19ffecu: goto label_19ffec;
        case 0x19fff0u: goto label_19fff0;
        case 0x19fff4u: goto label_19fff4;
        case 0x19fff8u: goto label_19fff8;
        case 0x19fffcu: goto label_19fffc;
        case 0x1a0000u: goto label_1a0000;
        case 0x1a0004u: goto label_1a0004;
        case 0x1a0008u: goto label_1a0008;
        case 0x1a000cu: goto label_1a000c;
        case 0x1a0010u: goto label_1a0010;
        case 0x1a0014u: goto label_1a0014;
        case 0x1a0018u: goto label_1a0018;
        case 0x1a001cu: goto label_1a001c;
        case 0x1a0020u: goto label_1a0020;
        case 0x1a0024u: goto label_1a0024;
        case 0x1a0028u: goto label_1a0028;
        case 0x1a002cu: goto label_1a002c;
        case 0x1a0030u: goto label_1a0030;
        case 0x1a0034u: goto label_1a0034;
        case 0x1a0038u: goto label_1a0038;
        case 0x1a003cu: goto label_1a003c;
        case 0x1a0040u: goto label_1a0040;
        case 0x1a0044u: goto label_1a0044;
        case 0x1a0048u: goto label_1a0048;
        case 0x1a004cu: goto label_1a004c;
        case 0x1a0050u: goto label_1a0050;
        case 0x1a0054u: goto label_1a0054;
        case 0x1a0058u: goto label_1a0058;
        case 0x1a005cu: goto label_1a005c;
        case 0x1a0060u: goto label_1a0060;
        case 0x1a0064u: goto label_1a0064;
        case 0x1a0068u: goto label_1a0068;
        case 0x1a006cu: goto label_1a006c;
        case 0x1a0070u: goto label_1a0070;
        case 0x1a0074u: goto label_1a0074;
        case 0x1a0078u: goto label_1a0078;
        case 0x1a007cu: goto label_1a007c;
        case 0x1a0080u: goto label_1a0080;
        case 0x1a0084u: goto label_1a0084;
        case 0x1a0088u: goto label_1a0088;
        case 0x1a008cu: goto label_1a008c;
        case 0x1a0090u: goto label_1a0090;
        case 0x1a0094u: goto label_1a0094;
        case 0x1a0098u: goto label_1a0098;
        case 0x1a009cu: goto label_1a009c;
        case 0x1a00a0u: goto label_1a00a0;
        case 0x1a00a4u: goto label_1a00a4;
        case 0x1a00a8u: goto label_1a00a8;
        case 0x1a00acu: goto label_1a00ac;
        case 0x1a00b0u: goto label_1a00b0;
        case 0x1a00b4u: goto label_1a00b4;
        case 0x1a00b8u: goto label_1a00b8;
        case 0x1a00bcu: goto label_1a00bc;
        case 0x1a00c0u: goto label_1a00c0;
        case 0x1a00c4u: goto label_1a00c4;
        case 0x1a00c8u: goto label_1a00c8;
        case 0x1a00ccu: goto label_1a00cc;
        case 0x1a00d0u: goto label_1a00d0;
        case 0x1a00d4u: goto label_1a00d4;
        case 0x1a00d8u: goto label_1a00d8;
        case 0x1a00dcu: goto label_1a00dc;
        case 0x1a00e0u: goto label_1a00e0;
        case 0x1a00e4u: goto label_1a00e4;
        case 0x1a00e8u: goto label_1a00e8;
        case 0x1a00ecu: goto label_1a00ec;
        case 0x1a00f0u: goto label_1a00f0;
        case 0x1a00f4u: goto label_1a00f4;
        case 0x1a00f8u: goto label_1a00f8;
        case 0x1a00fcu: goto label_1a00fc;
        case 0x1a0100u: goto label_1a0100;
        case 0x1a0104u: goto label_1a0104;
        case 0x1a0108u: goto label_1a0108;
        case 0x1a010cu: goto label_1a010c;
        case 0x1a0110u: goto label_1a0110;
        case 0x1a0114u: goto label_1a0114;
        case 0x1a0118u: goto label_1a0118;
        case 0x1a011cu: goto label_1a011c;
        case 0x1a0120u: goto label_1a0120;
        case 0x1a0124u: goto label_1a0124;
        case 0x1a0128u: goto label_1a0128;
        case 0x1a012cu: goto label_1a012c;
        case 0x1a0130u: goto label_1a0130;
        case 0x1a0134u: goto label_1a0134;
        case 0x1a0138u: goto label_1a0138;
        case 0x1a013cu: goto label_1a013c;
        case 0x1a0140u: goto label_1a0140;
        case 0x1a0144u: goto label_1a0144;
        case 0x1a0148u: goto label_1a0148;
        case 0x1a014cu: goto label_1a014c;
        case 0x1a0150u: goto label_1a0150;
        case 0x1a0154u: goto label_1a0154;
        case 0x1a0158u: goto label_1a0158;
        case 0x1a015cu: goto label_1a015c;
        case 0x1a0160u: goto label_1a0160;
        case 0x1a0164u: goto label_1a0164;
        case 0x1a0168u: goto label_1a0168;
        case 0x1a016cu: goto label_1a016c;
        case 0x1a0170u: goto label_1a0170;
        case 0x1a0174u: goto label_1a0174;
        case 0x1a0178u: goto label_1a0178;
        case 0x1a017cu: goto label_1a017c;
        case 0x1a0180u: goto label_1a0180;
        case 0x1a0184u: goto label_1a0184;
        case 0x1a0188u: goto label_1a0188;
        case 0x1a018cu: goto label_1a018c;
        case 0x1a0190u: goto label_1a0190;
        case 0x1a0194u: goto label_1a0194;
        case 0x1a0198u: goto label_1a0198;
        case 0x1a019cu: goto label_1a019c;
        case 0x1a01a0u: goto label_1a01a0;
        case 0x1a01a4u: goto label_1a01a4;
        case 0x1a01a8u: goto label_1a01a8;
        case 0x1a01acu: goto label_1a01ac;
        case 0x1a01b0u: goto label_1a01b0;
        case 0x1a01b4u: goto label_1a01b4;
        case 0x1a01b8u: goto label_1a01b8;
        case 0x1a01bcu: goto label_1a01bc;
        case 0x1a01c0u: goto label_1a01c0;
        case 0x1a01c4u: goto label_1a01c4;
        case 0x1a01c8u: goto label_1a01c8;
        case 0x1a01ccu: goto label_1a01cc;
        case 0x1a01d0u: goto label_1a01d0;
        case 0x1a01d4u: goto label_1a01d4;
        case 0x1a01d8u: goto label_1a01d8;
        case 0x1a01dcu: goto label_1a01dc;
        case 0x1a01e0u: goto label_1a01e0;
        case 0x1a01e4u: goto label_1a01e4;
        case 0x1a01e8u: goto label_1a01e8;
        case 0x1a01ecu: goto label_1a01ec;
        case 0x1a01f0u: goto label_1a01f0;
        case 0x1a01f4u: goto label_1a01f4;
        case 0x1a01f8u: goto label_1a01f8;
        case 0x1a01fcu: goto label_1a01fc;
        case 0x1a0200u: goto label_1a0200;
        case 0x1a0204u: goto label_1a0204;
        case 0x1a0208u: goto label_1a0208;
        case 0x1a020cu: goto label_1a020c;
        case 0x1a0210u: goto label_1a0210;
        case 0x1a0214u: goto label_1a0214;
        case 0x1a0218u: goto label_1a0218;
        case 0x1a021cu: goto label_1a021c;
        case 0x1a0220u: goto label_1a0220;
        case 0x1a0224u: goto label_1a0224;
        case 0x1a0228u: goto label_1a0228;
        case 0x1a022cu: goto label_1a022c;
        case 0x1a0230u: goto label_1a0230;
        case 0x1a0234u: goto label_1a0234;
        case 0x1a0238u: goto label_1a0238;
        case 0x1a023cu: goto label_1a023c;
        case 0x1a0240u: goto label_1a0240;
        case 0x1a0244u: goto label_1a0244;
        case 0x1a0248u: goto label_1a0248;
        case 0x1a024cu: goto label_1a024c;
        case 0x1a0250u: goto label_1a0250;
        case 0x1a0254u: goto label_1a0254;
        case 0x1a0258u: goto label_1a0258;
        case 0x1a025cu: goto label_1a025c;
        case 0x1a0260u: goto label_1a0260;
        case 0x1a0264u: goto label_1a0264;
        case 0x1a0268u: goto label_1a0268;
        case 0x1a026cu: goto label_1a026c;
        case 0x1a0270u: goto label_1a0270;
        case 0x1a0274u: goto label_1a0274;
        case 0x1a0278u: goto label_1a0278;
        case 0x1a027cu: goto label_1a027c;
        case 0x1a0280u: goto label_1a0280;
        case 0x1a0284u: goto label_1a0284;
        case 0x1a0288u: goto label_1a0288;
        case 0x1a028cu: goto label_1a028c;
        case 0x1a0290u: goto label_1a0290;
        case 0x1a0294u: goto label_1a0294;
        case 0x1a0298u: goto label_1a0298;
        case 0x1a029cu: goto label_1a029c;
        case 0x1a02a0u: goto label_1a02a0;
        case 0x1a02a4u: goto label_1a02a4;
        case 0x1a02a8u: goto label_1a02a8;
        case 0x1a02acu: goto label_1a02ac;
        case 0x1a02b0u: goto label_1a02b0;
        case 0x1a02b4u: goto label_1a02b4;
        case 0x1a02b8u: goto label_1a02b8;
        case 0x1a02bcu: goto label_1a02bc;
        case 0x1a02c0u: goto label_1a02c0;
        case 0x1a02c4u: goto label_1a02c4;
        case 0x1a02c8u: goto label_1a02c8;
        case 0x1a02ccu: goto label_1a02cc;
        case 0x1a02d0u: goto label_1a02d0;
        case 0x1a02d4u: goto label_1a02d4;
        case 0x1a02d8u: goto label_1a02d8;
        case 0x1a02dcu: goto label_1a02dc;
        case 0x1a02e0u: goto label_1a02e0;
        case 0x1a02e4u: goto label_1a02e4;
        case 0x1a02e8u: goto label_1a02e8;
        case 0x1a02ecu: goto label_1a02ec;
        case 0x1a02f0u: goto label_1a02f0;
        case 0x1a02f4u: goto label_1a02f4;
        case 0x1a02f8u: goto label_1a02f8;
        case 0x1a02fcu: goto label_1a02fc;
        case 0x1a0300u: goto label_1a0300;
        case 0x1a0304u: goto label_1a0304;
        case 0x1a0308u: goto label_1a0308;
        case 0x1a030cu: goto label_1a030c;
        case 0x1a0310u: goto label_1a0310;
        case 0x1a0314u: goto label_1a0314;
        case 0x1a0318u: goto label_1a0318;
        case 0x1a031cu: goto label_1a031c;
        case 0x1a0320u: goto label_1a0320;
        case 0x1a0324u: goto label_1a0324;
        case 0x1a0328u: goto label_1a0328;
        case 0x1a032cu: goto label_1a032c;
        case 0x1a0330u: goto label_1a0330;
        case 0x1a0334u: goto label_1a0334;
        case 0x1a0338u: goto label_1a0338;
        case 0x1a033cu: goto label_1a033c;
        case 0x1a0340u: goto label_1a0340;
        case 0x1a0344u: goto label_1a0344;
        case 0x1a0348u: goto label_1a0348;
        case 0x1a034cu: goto label_1a034c;
        case 0x1a0350u: goto label_1a0350;
        case 0x1a0354u: goto label_1a0354;
        case 0x1a0358u: goto label_1a0358;
        case 0x1a035cu: goto label_1a035c;
        case 0x1a0360u: goto label_1a0360;
        case 0x1a0364u: goto label_1a0364;
        case 0x1a0368u: goto label_1a0368;
        case 0x1a036cu: goto label_1a036c;
        case 0x1a0370u: goto label_1a0370;
        case 0x1a0374u: goto label_1a0374;
        case 0x1a0378u: goto label_1a0378;
        case 0x1a037cu: goto label_1a037c;
        case 0x1a0380u: goto label_1a0380;
        case 0x1a0384u: goto label_1a0384;
        case 0x1a0388u: goto label_1a0388;
        case 0x1a038cu: goto label_1a038c;
        case 0x1a0390u: goto label_1a0390;
        case 0x1a0394u: goto label_1a0394;
        case 0x1a0398u: goto label_1a0398;
        case 0x1a039cu: goto label_1a039c;
        case 0x1a03a0u: goto label_1a03a0;
        case 0x1a03a4u: goto label_1a03a4;
        case 0x1a03a8u: goto label_1a03a8;
        case 0x1a03acu: goto label_1a03ac;
        case 0x1a03b0u: goto label_1a03b0;
        case 0x1a03b4u: goto label_1a03b4;
        case 0x1a03b8u: goto label_1a03b8;
        case 0x1a03bcu: goto label_1a03bc;
        case 0x1a03c0u: goto label_1a03c0;
        case 0x1a03c4u: goto label_1a03c4;
        case 0x1a03c8u: goto label_1a03c8;
        case 0x1a03ccu: goto label_1a03cc;
        case 0x1a03d0u: goto label_1a03d0;
        case 0x1a03d4u: goto label_1a03d4;
        case 0x1a03d8u: goto label_1a03d8;
        case 0x1a03dcu: goto label_1a03dc;
        case 0x1a03e0u: goto label_1a03e0;
        case 0x1a03e4u: goto label_1a03e4;
        case 0x1a03e8u: goto label_1a03e8;
        case 0x1a03ecu: goto label_1a03ec;
        case 0x1a03f0u: goto label_1a03f0;
        case 0x1a03f4u: goto label_1a03f4;
        case 0x1a03f8u: goto label_1a03f8;
        case 0x1a03fcu: goto label_1a03fc;
        case 0x1a0400u: goto label_1a0400;
        case 0x1a0404u: goto label_1a0404;
        case 0x1a0408u: goto label_1a0408;
        case 0x1a040cu: goto label_1a040c;
        case 0x1a0410u: goto label_1a0410;
        case 0x1a0414u: goto label_1a0414;
        case 0x1a0418u: goto label_1a0418;
        case 0x1a041cu: goto label_1a041c;
        case 0x1a0420u: goto label_1a0420;
        case 0x1a0424u: goto label_1a0424;
        case 0x1a0428u: goto label_1a0428;
        case 0x1a042cu: goto label_1a042c;
        case 0x1a0430u: goto label_1a0430;
        case 0x1a0434u: goto label_1a0434;
        case 0x1a0438u: goto label_1a0438;
        case 0x1a043cu: goto label_1a043c;
        case 0x1a0440u: goto label_1a0440;
        case 0x1a0444u: goto label_1a0444;
        case 0x1a0448u: goto label_1a0448;
        case 0x1a044cu: goto label_1a044c;
        case 0x1a0450u: goto label_1a0450;
        case 0x1a0454u: goto label_1a0454;
        case 0x1a0458u: goto label_1a0458;
        case 0x1a045cu: goto label_1a045c;
        case 0x1a0460u: goto label_1a0460;
        case 0x1a0464u: goto label_1a0464;
        case 0x1a0468u: goto label_1a0468;
        case 0x1a046cu: goto label_1a046c;
        case 0x1a0470u: goto label_1a0470;
        case 0x1a0474u: goto label_1a0474;
        case 0x1a0478u: goto label_1a0478;
        case 0x1a047cu: goto label_1a047c;
        case 0x1a0480u: goto label_1a0480;
        case 0x1a0484u: goto label_1a0484;
        case 0x1a0488u: goto label_1a0488;
        case 0x1a048cu: goto label_1a048c;
        case 0x1a0490u: goto label_1a0490;
        case 0x1a0494u: goto label_1a0494;
        case 0x1a0498u: goto label_1a0498;
        case 0x1a049cu: goto label_1a049c;
        case 0x1a04a0u: goto label_1a04a0;
        case 0x1a04a4u: goto label_1a04a4;
        case 0x1a04a8u: goto label_1a04a8;
        case 0x1a04acu: goto label_1a04ac;
        case 0x1a04b0u: goto label_1a04b0;
        case 0x1a04b4u: goto label_1a04b4;
        case 0x1a04b8u: goto label_1a04b8;
        case 0x1a04bcu: goto label_1a04bc;
        case 0x1a04c0u: goto label_1a04c0;
        case 0x1a04c4u: goto label_1a04c4;
        case 0x1a04c8u: goto label_1a04c8;
        case 0x1a04ccu: goto label_1a04cc;
        case 0x1a04d0u: goto label_1a04d0;
        case 0x1a04d4u: goto label_1a04d4;
        case 0x1a04d8u: goto label_1a04d8;
        case 0x1a04dcu: goto label_1a04dc;
        case 0x1a04e0u: goto label_1a04e0;
        case 0x1a04e4u: goto label_1a04e4;
        case 0x1a04e8u: goto label_1a04e8;
        case 0x1a04ecu: goto label_1a04ec;
        case 0x1a04f0u: goto label_1a04f0;
        case 0x1a04f4u: goto label_1a04f4;
        case 0x1a04f8u: goto label_1a04f8;
        case 0x1a04fcu: goto label_1a04fc;
        case 0x1a0500u: goto label_1a0500;
        case 0x1a0504u: goto label_1a0504;
        case 0x1a0508u: goto label_1a0508;
        case 0x1a050cu: goto label_1a050c;
        case 0x1a0510u: goto label_1a0510;
        case 0x1a0514u: goto label_1a0514;
        case 0x1a0518u: goto label_1a0518;
        case 0x1a051cu: goto label_1a051c;
        case 0x1a0520u: goto label_1a0520;
        case 0x1a0524u: goto label_1a0524;
        case 0x1a0528u: goto label_1a0528;
        case 0x1a052cu: goto label_1a052c;
        case 0x1a0530u: goto label_1a0530;
        case 0x1a0534u: goto label_1a0534;
        case 0x1a0538u: goto label_1a0538;
        case 0x1a053cu: goto label_1a053c;
        case 0x1a0540u: goto label_1a0540;
        case 0x1a0544u: goto label_1a0544;
        case 0x1a0548u: goto label_1a0548;
        case 0x1a054cu: goto label_1a054c;
        case 0x1a0550u: goto label_1a0550;
        case 0x1a0554u: goto label_1a0554;
        case 0x1a0558u: goto label_1a0558;
        case 0x1a055cu: goto label_1a055c;
        case 0x1a0560u: goto label_1a0560;
        case 0x1a0564u: goto label_1a0564;
        case 0x1a0568u: goto label_1a0568;
        case 0x1a056cu: goto label_1a056c;
        case 0x1a0570u: goto label_1a0570;
        case 0x1a0574u: goto label_1a0574;
        case 0x1a0578u: goto label_1a0578;
        case 0x1a057cu: goto label_1a057c;
        case 0x1a0580u: goto label_1a0580;
        case 0x1a0584u: goto label_1a0584;
        case 0x1a0588u: goto label_1a0588;
        case 0x1a058cu: goto label_1a058c;
        case 0x1a0590u: goto label_1a0590;
        case 0x1a0594u: goto label_1a0594;
        case 0x1a0598u: goto label_1a0598;
        case 0x1a059cu: goto label_1a059c;
        case 0x1a05a0u: goto label_1a05a0;
        case 0x1a05a4u: goto label_1a05a4;
        case 0x1a05a8u: goto label_1a05a8;
        case 0x1a05acu: goto label_1a05ac;
        case 0x1a05b0u: goto label_1a05b0;
        case 0x1a05b4u: goto label_1a05b4;
        case 0x1a05b8u: goto label_1a05b8;
        case 0x1a05bcu: goto label_1a05bc;
        case 0x1a05c0u: goto label_1a05c0;
        case 0x1a05c4u: goto label_1a05c4;
        case 0x1a05c8u: goto label_1a05c8;
        case 0x1a05ccu: goto label_1a05cc;
        case 0x1a05d0u: goto label_1a05d0;
        case 0x1a05d4u: goto label_1a05d4;
        case 0x1a05d8u: goto label_1a05d8;
        case 0x1a05dcu: goto label_1a05dc;
        case 0x1a05e0u: goto label_1a05e0;
        case 0x1a05e4u: goto label_1a05e4;
        case 0x1a05e8u: goto label_1a05e8;
        case 0x1a05ecu: goto label_1a05ec;
        case 0x1a05f0u: goto label_1a05f0;
        case 0x1a05f4u: goto label_1a05f4;
        case 0x1a05f8u: goto label_1a05f8;
        case 0x1a05fcu: goto label_1a05fc;
        case 0x1a0600u: goto label_1a0600;
        case 0x1a0604u: goto label_1a0604;
        case 0x1a0608u: goto label_1a0608;
        case 0x1a060cu: goto label_1a060c;
        case 0x1a0610u: goto label_1a0610;
        case 0x1a0614u: goto label_1a0614;
        case 0x1a0618u: goto label_1a0618;
        case 0x1a061cu: goto label_1a061c;
        case 0x1a0620u: goto label_1a0620;
        case 0x1a0624u: goto label_1a0624;
        case 0x1a0628u: goto label_1a0628;
        case 0x1a062cu: goto label_1a062c;
        case 0x1a0630u: goto label_1a0630;
        case 0x1a0634u: goto label_1a0634;
        case 0x1a0638u: goto label_1a0638;
        case 0x1a063cu: goto label_1a063c;
        case 0x1a0640u: goto label_1a0640;
        case 0x1a0644u: goto label_1a0644;
        case 0x1a0648u: goto label_1a0648;
        case 0x1a064cu: goto label_1a064c;
        case 0x1a0650u: goto label_1a0650;
        case 0x1a0654u: goto label_1a0654;
        case 0x1a0658u: goto label_1a0658;
        case 0x1a065cu: goto label_1a065c;
        case 0x1a0660u: goto label_1a0660;
        case 0x1a0664u: goto label_1a0664;
        case 0x1a0668u: goto label_1a0668;
        case 0x1a066cu: goto label_1a066c;
        case 0x1a0670u: goto label_1a0670;
        case 0x1a0674u: goto label_1a0674;
        case 0x1a0678u: goto label_1a0678;
        case 0x1a067cu: goto label_1a067c;
        case 0x1a0680u: goto label_1a0680;
        case 0x1a0684u: goto label_1a0684;
        case 0x1a0688u: goto label_1a0688;
        case 0x1a068cu: goto label_1a068c;
        default: return;
    }

label_19fec0:
    // 0x19fec0: 0x8cc30150  lw          $v1, 0x150($a2)
    ctx->pc = 0x19fec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 336)));
label_19fec4:
    // 0x19fec4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19fec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19fec8:
    // 0x19fec8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_19fecc:
    if (ctx->pc == 0x19FECCu) {
        ctx->pc = 0x19FECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FEC8u;
        // 0x19fecc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FED0u;
        goto label_19fed0;
    }
    ctx->pc = 0x19FEC8u;
    {
        const bool branch_taken_0x19fec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19FECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FEC8u;
        // 0x19fecc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fec8) {
            ctx->pc = 0x19FEF0u;
            goto label_19fef0;
        }
    }
    ctx->pc = 0x19FED0u;
label_19fed0:
    // 0x19fed0: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
label_19fed4:
    if (ctx->pc == 0x19FED4u) {
        ctx->pc = 0x19FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FED0u;
        // 0x19fed4: 0x8cc2084c  lw          $v0, 0x84C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FED8u;
        goto label_19fed8;
    }
    ctx->pc = 0x19FED0u;
    {
        const bool branch_taken_0x19fed0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fed0) {
            ctx->pc = 0x19FED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FED0u;
            // 0x19fed4: 0x8cc2084c  lw          $v0, 0x84C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FEF4u;
            goto label_19fef4;
        }
    }
    ctx->pc = 0x19FED8u;
label_19fed8:
    // 0x19fed8: 0x4a30004  bgezl       $a1, . + 4 + (0x4 << 2)
label_19fedc:
    if (ctx->pc == 0x19FEDCu) {
        ctx->pc = 0x19FEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FED8u;
        // 0x19fedc: 0xacc00854  sw          $zero, 0x854($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 2132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FEE0u;
        goto label_19fee0;
    }
    ctx->pc = 0x19FED8u;
    {
        const bool branch_taken_0x19fed8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x19fed8) {
            ctx->pc = 0x19FEDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FED8u;
            // 0x19fedc: 0xacc00854  sw          $zero, 0x854($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 2132), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FEECu;
            goto label_19feec;
        }
    }
    ctx->pc = 0x19FEE0u;
label_19fee0:
    // 0x19fee0: 0x8cc20854  lw          $v0, 0x854($a2)
    ctx->pc = 0x19fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2132)));
label_19fee4:
    // 0x19fee4: 0x2c470001  sltiu       $a3, $v0, 0x1
    ctx->pc = 0x19fee4u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_19fee8:
    // 0x19fee8: 0xacc00854  sw          $zero, 0x854($a2)
    ctx->pc = 0x19fee8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2132), GPR_U32(ctx, 0));
label_19feec:
    // 0x19feec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19feecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19fef0:
    // 0x19fef0: 0x8cc2084c  lw          $v0, 0x84C($a2)
    ctx->pc = 0x19fef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2124)));
label_19fef4:
    // 0x19fef4: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x19fef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_19fef8:
    // 0x19fef8: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
label_19fefc:
    if (ctx->pc == 0x19FEFCu) {
        ctx->pc = 0x19FEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FEF8u;
        // 0x19fefc: 0xacc301ac  sw          $v1, 0x1AC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FF00u;
        goto label_19ff00;
    }
    ctx->pc = 0x19FEF8u;
    {
        const bool branch_taken_0x19fef8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FEF8u;
        // 0x19fefc: 0xacc301ac  sw          $v1, 0x1AC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fef8) {
            ctx->pc = 0x19FF14u;
            goto label_19ff14;
        }
    }
    ctx->pc = 0x19FF00u;
label_19ff00:
    // 0x19ff00: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x19ff00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_19ff04:
    // 0x19ff04: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_19ff08:
    if (ctx->pc == 0x19FF08u) {
        ctx->pc = 0x19FF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FF04u;
        // 0x19ff08: 0x8cc20850  lw          $v0, 0x850($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FF0Cu;
        goto label_19ff0c;
    }
    ctx->pc = 0x19FF04u;
    {
        const bool branch_taken_0x19ff04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ff04) {
            ctx->pc = 0x19FF08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FF04u;
            // 0x19ff08: 0x8cc20850  lw          $v0, 0x850($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FF18u;
            goto label_19ff18;
        }
    }
    ctx->pc = 0x19FF0Cu;
label_19ff0c:
    // 0x19ff0c: 0x24620400  addiu       $v0, $v1, 0x400
    ctx->pc = 0x19ff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
label_19ff10:
    // 0x19ff10: 0xacc201ac  sw          $v0, 0x1AC($a2)
    ctx->pc = 0x19ff10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 428), GPR_U32(ctx, 2));
label_19ff14:
    // 0x19ff14: 0x8cc20850  lw          $v0, 0x850($a2)
    ctx->pc = 0x19ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2128)));
label_19ff18:
    // 0x19ff18: 0x8cc401ac  lw          $a0, 0x1AC($a2)
    ctx->pc = 0x19ff18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 428)));
label_19ff1c:
    // 0x19ff1c: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x19ff1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_19ff20:
    // 0x19ff20: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x19ff20u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_19ff24:
    // 0x19ff24: 0x3e00008  jr          $ra
label_19ff28:
    if (ctx->pc == 0x19FF28u) {
        ctx->pc = 0x19FF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FF24u;
        // 0x19ff28: 0xacc20850  sw          $v0, 0x850($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 2128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FF2Cu;
        goto label_19ff2c;
    }
    ctx->pc = 0x19FF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FF24u;
        // 0x19ff28: 0xacc20850  sw          $v0, 0x850($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 2128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FF24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FF2Cu;
label_19ff2c:
    // 0x19ff2c: 0x0  nop
    ctx->pc = 0x19ff2cu;
    // NOP
label_19ff30:
    // 0x19ff30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19ff30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_19ff34:
    // 0x19ff34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19ff34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19ff38:
    // 0x19ff38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19ff38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19ff3c:
    // 0x19ff3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19ff3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19ff40:
    // 0x19ff40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19ff40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19ff44:
    // 0x19ff44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19ff44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19ff48:
    // 0x19ff48: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x19ff48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
label_19ff4c:
    // 0x19ff4c: 0x8e020850  lw          $v0, 0x850($s0)
    ctx->pc = 0x19ff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2128)));
label_19ff50:
    // 0x19ff50: 0xae030854  sw          $v1, 0x854($s0)
    ctx->pc = 0x19ff50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2132), GPR_U32(ctx, 3));
label_19ff54:
    // 0x19ff54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19ff58:
    // 0x19ff58: 0xc067dd2  jal         func_19F748
label_19ff5c:
    if (ctx->pc == 0x19FF5Cu) {
        ctx->pc = 0x19FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FF58u;
        // 0x19ff5c: 0xae02084c  sw          $v0, 0x84C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FF60u;
        goto label_19ff60;
    }
    ctx->pc = 0x19FF58u;
    SET_GPR_U32(ctx, 31, 0x19FF60u);
    ctx->pc = 0x19FF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FF58u;
    // 0x19ff5c: 0xae02084c  sw          $v0, 0x84C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FF60u;
label_19ff60:
    // 0x19ff60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ff60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ff64:
    // 0x19ff64: 0xc067dd2  jal         func_19F748
label_19ff68:
    if (ctx->pc == 0x19FF68u) {
        ctx->pc = 0x19FF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FF64u;
        // 0x19ff68: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FF6Cu;
        goto label_19ff6c;
    }
    ctx->pc = 0x19FF64u;
    SET_GPR_U32(ctx, 31, 0x19FF6Cu);
    ctx->pc = 0x19FF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FF64u;
    // 0x19ff68: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FF6Cu;
label_19ff6c:
    // 0x19ff6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ff6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ff70:
    // 0x19ff70: 0xc067dd2  jal         func_19F748
label_19ff74:
    if (ctx->pc == 0x19FF74u) {
        ctx->pc = 0x19FF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FF70u;
        // 0x19ff74: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FF78u;
        goto label_19ff78;
    }
    ctx->pc = 0x19FF70u;
    SET_GPR_U32(ctx, 31, 0x19FF78u);
    ctx->pc = 0x19FF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FF70u;
    // 0x19ff74: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FF78u;
label_19ff78:
    // 0x19ff78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ff78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ff7c:
    // 0x19ff7c: 0xc067dd2  jal         func_19F748
label_19ff80:
    if (ctx->pc == 0x19FF80u) {
        ctx->pc = 0x19FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FF7Cu;
        // 0x19ff80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FF84u;
        goto label_19ff84;
    }
    ctx->pc = 0x19FF7Cu;
    SET_GPR_U32(ctx, 31, 0x19FF84u);
    ctx->pc = 0x19FF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FF7Cu;
    // 0x19ff80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FF84u;
label_19ff84:
    // 0x19ff84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ff84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ff88:
    // 0x19ff88: 0xc067dd2  jal         func_19F748
label_19ff8c:
    if (ctx->pc == 0x19FF8Cu) {
        ctx->pc = 0x19FF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FF88u;
        // 0x19ff8c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FF90u;
        goto label_19ff90;
    }
    ctx->pc = 0x19FF88u;
    SET_GPR_U32(ctx, 31, 0x19FF90u);
    ctx->pc = 0x19FF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FF88u;
    // 0x19ff8c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FF90u;
label_19ff90:
    // 0x19ff90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ff90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ff94:
    // 0x19ff94: 0xc067dd2  jal         func_19F748
label_19ff98:
    if (ctx->pc == 0x19FF98u) {
        ctx->pc = 0x19FF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FF94u;
        // 0x19ff98: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FF9Cu;
        goto label_19ff9c;
    }
    ctx->pc = 0x19FF94u;
    SET_GPR_U32(ctx, 31, 0x19FF9Cu);
    ctx->pc = 0x19FF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FF94u;
    // 0x19ff98: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FF9Cu;
label_19ff9c:
    // 0x19ff9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ff9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ffa0:
    // 0x19ffa0: 0xc067dd2  jal         func_19F748
label_19ffa4:
    if (ctx->pc == 0x19FFA4u) {
        ctx->pc = 0x19FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FFA0u;
        // 0x19ffa4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FFA8u;
        goto label_19ffa8;
    }
    ctx->pc = 0x19FFA0u;
    SET_GPR_U32(ctx, 31, 0x19FFA8u);
    ctx->pc = 0x19FFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FFA0u;
    // 0x19ffa4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FFA8u;
label_19ffa8:
    // 0x19ffa8: 0xae0201a4  sw          $v0, 0x1A4($s0)
    ctx->pc = 0x19ffa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 2));
label_19ffac:
    // 0x19ffac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ffacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ffb0:
    // 0x19ffb0: 0xc067dd2  jal         func_19F748
label_19ffb4:
    if (ctx->pc == 0x19FFB4u) {
        ctx->pc = 0x19FFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FFB0u;
        // 0x19ffb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FFB8u;
        goto label_19ffb8;
    }
    ctx->pc = 0x19FFB0u;
    SET_GPR_U32(ctx, 31, 0x19FFB8u);
    ctx->pc = 0x19FFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FFB0u;
    // 0x19ffb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FFB8u;
label_19ffb8:
    // 0x19ffb8: 0xae0201a8  sw          $v0, 0x1A8($s0)
    ctx->pc = 0x19ffb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 2));
label_19ffbc:
    // 0x19ffbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ffbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ffc0:
    // 0x19ffc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19ffc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19ffc4:
    // 0x19ffc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19ffc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19ffc8:
    // 0x19ffc8: 0x8067ed6  j           func_19FB58
label_19ffcc:
    if (ctx->pc == 0x19FFCCu) {
        ctx->pc = 0x19FFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FFC8u;
        // 0x19ffcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FFD0u;
        goto label_19ffd0;
    }
    ctx->pc = 0x19FFC8u;
    ctx->pc = 0x19FFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FFC8u;
    // 0x19ffcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FB58u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x19fb58; return; }
    ctx->pc = 0x19FFD0u;
label_19ffd0:
    // 0x19ffd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19ffd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_19ffd4:
    // 0x19ffd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19ffd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19ffd8:
    // 0x19ffd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19ffd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19ffdc:
    // 0x19ffdc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19ffdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19ffe0:
    // 0x19ffe0: 0xc067dd2  jal         func_19F748
label_19ffe4:
    if (ctx->pc == 0x19FFE4u) {
        ctx->pc = 0x19FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FFE0u;
        // 0x19ffe4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FFE8u;
        goto label_19ffe8;
    }
    ctx->pc = 0x19FFE0u;
    SET_GPR_U32(ctx, 31, 0x19FFE8u);
    ctx->pc = 0x19FFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FFE0u;
    // 0x19ffe4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FFE8u;
label_19ffe8:
    // 0x19ffe8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_19ffec:
    if (ctx->pc == 0x19FFECu) {
        ctx->pc = 0x19FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FFE8u;
        // 0x19ffec: 0xae020840  sw          $v0, 0x840($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FFF0u;
        goto label_19fff0;
    }
    ctx->pc = 0x19FFE8u;
    {
        const bool branch_taken_0x19ffe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FFE8u;
        // 0x19ffec: 0xae020840  sw          $v0, 0x840($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ffe8) {
            ctx->pc = 0x1A000Cu;
            goto label_1a000c;
        }
    }
    ctx->pc = 0x19FFF0u;
label_19fff0:
    // 0x19fff0: 0xc067ca0  jal         func_19F280
label_19fff4:
    if (ctx->pc == 0x19FFF4u) {
        ctx->pc = 0x19FFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FFF0u;
        // 0x19fff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FFF8u;
        goto label_19fff8;
    }
    ctx->pc = 0x19FFF0u;
    SET_GPR_U32(ctx, 31, 0x19FFF8u);
    ctx->pc = 0x19FFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FFF0u;
    // 0x19fff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    { ctx->pc = 0x19f280; return; }
    ctx->pc = 0x19FFF8u;
label_19fff8:
    // 0x19fff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fffc:
    // 0x19fffc: 0xc067c94  jal         func_19F250
label_1a0000:
    if (ctx->pc == 0x1A0000u) {
        ctx->pc = 0x1A0000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FFFCu;
        // 0x1a0000: 0x3c055000  lui         $a1, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0004u;
        goto label_1a0004;
    }
    ctx->pc = 0x19FFFCu;
    SET_GPR_U32(ctx, 31, 0x1A0004u);
    ctx->pc = 0x1A0000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FFFCu;
    // 0x1a0000: 0x3c055000  lui         $a1, 0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F250u;
    { ctx->pc = 0x19f250; return; }
    ctx->pc = 0x1A0004u;
label_1a0004:
    // 0x1a0004: 0xc067ca0  jal         func_19F280
label_1a0008:
    if (ctx->pc == 0x1A0008u) {
        ctx->pc = 0x1A0008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0004u;
        // 0x1a0008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A000Cu;
        goto label_1a000c;
    }
    ctx->pc = 0x1A0004u;
    SET_GPR_U32(ctx, 31, 0x1A000Cu);
    ctx->pc = 0x1A0008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0004u;
    // 0x1a0008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    { ctx->pc = 0x19f280; return; }
    ctx->pc = 0x1A000Cu;
label_1a000c:
    // 0x1a000c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a000cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a0010:
    // 0x1a0010: 0xc067dd2  jal         func_19F748
label_1a0014:
    if (ctx->pc == 0x1A0014u) {
        ctx->pc = 0x1A0014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0010u;
        // 0x1a0014: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0018u;
        goto label_1a0018;
    }
    ctx->pc = 0x1A0010u;
    SET_GPR_U32(ctx, 31, 0x1A0018u);
    ctx->pc = 0x1A0014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0010u;
    // 0x1a0014: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A0018u;
label_1a0018:
    // 0x1a0018: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a001c:
    if (ctx->pc == 0x1A001Cu) {
        ctx->pc = 0x1A001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0018u;
        // 0x1a001c: 0xae020844  sw          $v0, 0x844($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0020u;
        goto label_1a0020;
    }
    ctx->pc = 0x1A0018u;
    {
        const bool branch_taken_0x1a0018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0018u;
        // 0x1a001c: 0xae020844  sw          $v0, 0x844($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0018) {
            ctx->pc = 0x1A003Cu;
            goto label_1a003c;
        }
    }
    ctx->pc = 0x1A0020u;
label_1a0020:
    // 0x1a0020: 0xc067ca0  jal         func_19F280
label_1a0024:
    if (ctx->pc == 0x1A0024u) {
        ctx->pc = 0x1A0024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0020u;
        // 0x1a0024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0028u;
        goto label_1a0028;
    }
    ctx->pc = 0x1A0020u;
    SET_GPR_U32(ctx, 31, 0x1A0028u);
    ctx->pc = 0x1A0024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0020u;
    // 0x1a0024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    { ctx->pc = 0x19f280; return; }
    ctx->pc = 0x1A0028u;
label_1a0028:
    // 0x1a0028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a002c:
    // 0x1a002c: 0xc067c94  jal         func_19F250
label_1a0030:
    if (ctx->pc == 0x1A0030u) {
        ctx->pc = 0x1A0030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A002Cu;
        // 0x1a0030: 0x3c055800  lui         $a1, 0x5800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22528 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0034u;
        goto label_1a0034;
    }
    ctx->pc = 0x1A002Cu;
    SET_GPR_U32(ctx, 31, 0x1A0034u);
    ctx->pc = 0x1A0030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A002Cu;
    // 0x1a0030: 0x3c055800  lui         $a1, 0x5800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22528 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F250u;
    { ctx->pc = 0x19f250; return; }
    ctx->pc = 0x1A0034u;
label_1a0034:
    // 0x1a0034: 0xc067ca0  jal         func_19F280
label_1a0038:
    if (ctx->pc == 0x1A0038u) {
        ctx->pc = 0x1A0038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0034u;
        // 0x1a0038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A003Cu;
        goto label_1a003c;
    }
    ctx->pc = 0x1A0034u;
    SET_GPR_U32(ctx, 31, 0x1A003Cu);
    ctx->pc = 0x1A0038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0034u;
    // 0x1a0038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    { ctx->pc = 0x19f280; return; }
    ctx->pc = 0x1A003Cu;
label_1a003c:
    // 0x1a003c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a003cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a0040:
    // 0x1a0040: 0xc067dd2  jal         func_19F748
label_1a0044:
    if (ctx->pc == 0x1A0044u) {
        ctx->pc = 0x1A0044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0040u;
        // 0x1a0044: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0048u;
        goto label_1a0048;
    }
    ctx->pc = 0x1A0040u;
    SET_GPR_U32(ctx, 31, 0x1A0048u);
    ctx->pc = 0x1A0044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0040u;
    // 0x1a0044: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A0048u;
label_1a0048:
    // 0x1a0048: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a004c:
    if (ctx->pc == 0x1A004Cu) {
        ctx->pc = 0x1A004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0048u;
        // 0x1a004c: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0050u;
        goto label_1a0050;
    }
    ctx->pc = 0x1A0048u;
    {
        const bool branch_taken_0x1a0048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0048u;
        // 0x1a004c: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0048) {
            ctx->pc = 0x1A005Cu;
            goto label_1a005c;
        }
    }
    ctx->pc = 0x1A0050u;
label_1a0050:
    // 0x1a0050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a0054:
    // 0x1a0054: 0xc068d2c  jal         func_1A34B0
label_1a0058:
    if (ctx->pc == 0x1A0058u) {
        ctx->pc = 0x1A0058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0054u;
        // 0x1a0058: 0x24a5a1a8  addiu       $a1, $a1, -0x5E58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A005Cu;
        goto label_1a005c;
    }
    ctx->pc = 0x1A0054u;
    SET_GPR_U32(ctx, 31, 0x1A005Cu);
    ctx->pc = 0x1A0058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0054u;
    // 0x1a0058: 0x24a5a1a8  addiu       $a1, $a1, -0x5E58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    { ctx->pc = 0x1a34b0; return; }
    ctx->pc = 0x1A005Cu;
label_1a005c:
    // 0x1a005c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a005cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a0060:
    // 0x1a0060: 0xc067dd2  jal         func_19F748
label_1a0064:
    if (ctx->pc == 0x1A0064u) {
        ctx->pc = 0x1A0064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0060u;
        // 0x1a0064: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0068u;
        goto label_1a0068;
    }
    ctx->pc = 0x1A0060u;
    SET_GPR_U32(ctx, 31, 0x1A0068u);
    ctx->pc = 0x1A0064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0060u;
    // 0x1a0064: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A0068u;
label_1a0068:
    // 0x1a0068: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a006c:
    if (ctx->pc == 0x1A006Cu) {
        ctx->pc = 0x1A006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0068u;
        // 0x1a006c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0070u;
        goto label_1a0070;
    }
    ctx->pc = 0x1A0068u;
    {
        const bool branch_taken_0x1a0068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0068u;
        // 0x1a006c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0068) {
            ctx->pc = 0x1A0088u;
            goto label_1a0088;
        }
    }
    ctx->pc = 0x1A0070u;
label_1a0070:
    // 0x1a0070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a0074:
    // 0x1a0074: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1a0074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1a0078:
    // 0x1a0078: 0x24a5a1d0  addiu       $a1, $a1, -0x5E30
    ctx->pc = 0x1a0078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943184));
label_1a007c:
    // 0x1a007c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a007cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a0080:
    // 0x1a0080: 0x8068d2c  j           func_1A34B0
label_1a0084:
    if (ctx->pc == 0x1A0084u) {
        ctx->pc = 0x1A0084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0080u;
        // 0x1a0084: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0088u;
        goto label_1a0088;
    }
    ctx->pc = 0x1A0080u;
    ctx->pc = 0x1A0084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0080u;
    // 0x1a0084: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    { ctx->pc = 0x1a34b0; return; }
    ctx->pc = 0x1A0088u;
label_1a0088:
    // 0x1a0088: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a008c:
    // 0x1a008c: 0x3e00008  jr          $ra
label_1a0090:
    if (ctx->pc == 0x1A0090u) {
        ctx->pc = 0x1A0090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A008Cu;
        // 0x1a0090: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0094u;
        goto label_1a0094;
    }
    ctx->pc = 0x1A008Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A008Cu;
        // 0x1a0090: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A008Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0094u;
label_1a0094:
    // 0x1a0094: 0x0  nop
    ctx->pc = 0x1a0094u;
    // NOP
label_1a0098:
    // 0x1a0098: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a0098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1a009c:
    // 0x1a009c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a009cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a00a0:
    // 0x1a00a0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a00a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1a00a4:
    // 0x1a00a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a00a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a00a8:
    // 0x1a00a8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1a00a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_1a00ac:
    // 0x1a00ac: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a00acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1a00b0:
    // 0x1a00b0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a00b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1a00b4:
    // 0x1a00b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a00b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a00b8:
    // 0x1a00b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a00b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a00bc:
    // 0x1a00bc: 0x8e22013c  lw          $v0, 0x13C($s1)
    ctx->pc = 0x1a00bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
label_1a00c0:
    // 0x1a00c0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1a00c4:
    if (ctx->pc == 0x1A00C4u) {
        ctx->pc = 0x1A00C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A00C0u;
        // 0x1a00c4: 0x8e230174  lw          $v1, 0x174($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A00C8u;
        goto label_1a00c8;
    }
    ctx->pc = 0x1A00C0u;
    {
        const bool branch_taken_0x1a00c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a00c0) {
            ctx->pc = 0x1A00C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A00C0u;
            // 0x1a00c4: 0x8e230174  lw          $v1, 0x174($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A00E4u;
            goto label_1a00e4;
        }
    }
    ctx->pc = 0x1A00C8u;
label_1a00c8:
    // 0x1a00c8: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x1a00c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
label_1a00cc:
    // 0x1a00cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a00d0:
    if (ctx->pc == 0x1A00D0u) {
        ctx->pc = 0x1A00D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A00CCu;
        // 0x1a00d0: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A00D4u;
        goto label_1a00d4;
    }
    ctx->pc = 0x1A00CCu;
    {
        const bool branch_taken_0x1a00cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A00D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A00CCu;
        // 0x1a00d0: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a00cc) {
            ctx->pc = 0x1A00F0u;
            goto label_1a00f0;
        }
    }
    ctx->pc = 0x1A00D4u;
label_1a00d4:
    // 0x1a00d4: 0x8e230178  lw          $v1, 0x178($s1)
    ctx->pc = 0x1a00d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
label_1a00d8:
    // 0x1a00d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a00d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a00dc:
    // 0x1a00dc: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a00e0:
    if (ctx->pc == 0x1A00E0u) {
        ctx->pc = 0x1A00E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A00DCu;
        // 0x1a00e0: 0x43980b  movn        $s3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A00E4u;
        goto label_1a00e4;
    }
    ctx->pc = 0x1A00DCu;
    {
        const bool branch_taken_0x1a00dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A00E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A00DCu;
        // 0x1a00e0: 0x43980b  movn        $s3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a00dc) {
            ctx->pc = 0x1A0100u;
            goto label_1a0100;
        }
    }
    ctx->pc = 0x1A00E4u;
label_1a00e4:
    // 0x1a00e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a00e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a00e8:
    // 0x1a00e8: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_1a00ec:
    if (ctx->pc == 0x1A00ECu) {
        ctx->pc = 0x1A00ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A00E8u;
        // 0x1a00ec: 0x8e220184  lw          $v0, 0x184($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A00F0u;
        goto label_1a00f0;
    }
    ctx->pc = 0x1A00E8u;
    {
        const bool branch_taken_0x1a00e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a00e8) {
            ctx->pc = 0x1A00ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A00E8u;
            // 0x1a00ec: 0x8e220184  lw          $v0, 0x184($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A00F8u;
            goto label_1a00f8;
        }
    }
    ctx->pc = 0x1A00F0u;
label_1a00f0:
    // 0x1a00f0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a00f4:
    if (ctx->pc == 0x1A00F4u) {
        ctx->pc = 0x1A00F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A00F0u;
        // 0x1a00f4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A00F8u;
        goto label_1a00f8;
    }
    ctx->pc = 0x1A00F0u;
    {
        const bool branch_taken_0x1a00f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A00F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A00F0u;
        // 0x1a00f4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a00f0) {
            ctx->pc = 0x1A0100u;
            goto label_1a0100;
        }
    }
    ctx->pc = 0x1A00F8u;
label_1a00f8:
    // 0x1a00f8: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x1a00f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a00fc:
    // 0x1a00fc: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x1a00fcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_1a0100:
    // 0x1a0100: 0x1a600019  blez        $s3, . + 4 + (0x19 << 2)
label_1a0104:
    if (ctx->pc == 0x1A0104u) {
        ctx->pc = 0x1A0104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0100u;
        // 0x1a0104: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0108u;
        goto label_1a0108;
    }
    ctx->pc = 0x1A0100u;
    {
        const bool branch_taken_0x1a0100 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1A0104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0100u;
        // 0x1a0104: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0100) {
            ctx->pc = 0x1A0168u;
            goto label_1a0168;
        }
    }
    ctx->pc = 0x1A0108u;
label_1a0108:
    // 0x1a0108: 0x2635018c  addiu       $s5, $s1, 0x18C
    ctx->pc = 0x1a0108u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 396));
label_1a010c:
    // 0x1a010c: 0x26340198  addiu       $s4, $s1, 0x198
    ctx->pc = 0x1a010cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 408));
label_1a0110:
    // 0x1a0110: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a0114:
    // 0x1a0114: 0x0  nop
    ctx->pc = 0x1a0114u;
    // NOP
label_1a0118:
    // 0x1a0118: 0xc067dd2  jal         func_19F748
label_1a011c:
    if (ctx->pc == 0x1A011Cu) {
        ctx->pc = 0x1A011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0118u;
        // 0x1a011c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0120u;
        goto label_1a0120;
    }
    ctx->pc = 0x1A0118u;
    SET_GPR_U32(ctx, 31, 0x1A0120u);
    ctx->pc = 0x1A011Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0118u;
    // 0x1a011c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A0120u;
label_1a0120:
    // 0x1a0120: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x1a0120u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1a0124:
    // 0x1a0124: 0x2b01821  addu        $v1, $s5, $s0
    ctx->pc = 0x1a0124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_1a0128:
    // 0x1a0128: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a012c:
    // 0x1a012c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a012cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1a0130:
    // 0x1a0130: 0xc067dd2  jal         func_19F748
label_1a0134:
    if (ctx->pc == 0x1A0134u) {
        ctx->pc = 0x1A0134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0130u;
        // 0x1a0134: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0138u;
        goto label_1a0138;
    }
    ctx->pc = 0x1A0130u;
    SET_GPR_U32(ctx, 31, 0x1A0138u);
    ctx->pc = 0x1A0134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0130u;
    // 0x1a0134: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A0138u;
label_1a0138:
    // 0x1a0138: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a0138u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1a013c:
    // 0x1a013c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a013cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a0140:
    // 0x1a0140: 0xc067dd2  jal         func_19F748
label_1a0144:
    if (ctx->pc == 0x1A0144u) {
        ctx->pc = 0x1A0144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0140u;
        // 0x1a0144: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0148u;
        goto label_1a0148;
    }
    ctx->pc = 0x1A0140u;
    SET_GPR_U32(ctx, 31, 0x1A0148u);
    ctx->pc = 0x1A0144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0140u;
    // 0x1a0144: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A0148u;
label_1a0148:
    // 0x1a0148: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x1a0148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_1a014c:
    // 0x1a014c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a014cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a0150:
    // 0x1a0150: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a0150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1a0154:
    // 0x1a0154: 0xc067dd2  jal         func_19F748
label_1a0158:
    if (ctx->pc == 0x1A0158u) {
        ctx->pc = 0x1A0158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0154u;
        // 0x1a0158: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A015Cu;
        goto label_1a015c;
    }
    ctx->pc = 0x1A0154u;
    SET_GPR_U32(ctx, 31, 0x1A015Cu);
    ctx->pc = 0x1A0158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0154u;
    // 0x1a0158: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A015Cu;
label_1a015c:
    // 0x1a015c: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x1a015cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_1a0160:
    // 0x1a0160: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_1a0164:
    if (ctx->pc == 0x1A0164u) {
        ctx->pc = 0x1A0164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0160u;
        // 0x1a0164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0168u;
        goto label_1a0168;
    }
    ctx->pc = 0x1A0160u;
    {
        const bool branch_taken_0x1a0160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0160u;
        // 0x1a0164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0160) {
            ctx->pc = 0x1A0118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0118;
        }
    }
    ctx->pc = 0x1A0168u;
label_1a0168:
    // 0x1a0168: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a0168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a016c:
    // 0x1a016c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1a016cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a0170:
    // 0x1a0170: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a0170u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a0174:
    // 0x1a0174: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a0174u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a0178:
    // 0x1a0178: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a0178u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a017c:
    // 0x1a017c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a017cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a0180:
    // 0x1a0180: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a0184:
    // 0x1a0184: 0x3e00008  jr          $ra
label_1a0188:
    if (ctx->pc == 0x1A0188u) {
        ctx->pc = 0x1A0188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0184u;
        // 0x1a0188: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A018Cu;
        goto label_1a018c;
    }
    ctx->pc = 0x1A0184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0184u;
        // 0x1a0188: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A018Cu;
label_1a018c:
    // 0x1a018c: 0x0  nop
    ctx->pc = 0x1a018cu;
    // NOP
label_1a0190:
    // 0x1a0190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a0194:
    // 0x1a0194: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a0194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0198:
    // 0x1a0198: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a0198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a019c:
    // 0x1a019c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a019cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a01a0:
    // 0x1a01a0: 0xc067dd2  jal         func_19F748
label_1a01a4:
    if (ctx->pc == 0x1A01A4u) {
        ctx->pc = 0x1A01A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A01A0u;
        // 0x1a01a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A01A8u;
        goto label_1a01a8;
    }
    ctx->pc = 0x1A01A0u;
    SET_GPR_U32(ctx, 31, 0x1A01A8u);
    ctx->pc = 0x1A01A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A01A0u;
    // 0x1a01a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A01A8u;
label_1a01a8:
    // 0x1a01a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a01a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a01ac:
    // 0x1a01ac: 0xc067dd2  jal         func_19F748
label_1a01b0:
    if (ctx->pc == 0x1A01B0u) {
        ctx->pc = 0x1A01B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A01ACu;
        // 0x1a01b0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A01B4u;
        goto label_1a01b4;
    }
    ctx->pc = 0x1A01ACu;
    SET_GPR_U32(ctx, 31, 0x1A01B4u);
    ctx->pc = 0x1A01B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A01ACu;
    // 0x1a01b0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A01B4u;
label_1a01b4:
    // 0x1a01b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a01b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a01b8:
    // 0x1a01b8: 0xc067dd2  jal         func_19F748
label_1a01bc:
    if (ctx->pc == 0x1A01BCu) {
        ctx->pc = 0x1A01BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A01B8u;
        // 0x1a01bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A01C0u;
        goto label_1a01c0;
    }
    ctx->pc = 0x1A01B8u;
    SET_GPR_U32(ctx, 31, 0x1A01C0u);
    ctx->pc = 0x1A01BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A01B8u;
    // 0x1a01bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A01C0u;
label_1a01c0:
    // 0x1a01c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a01c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a01c4:
    // 0x1a01c4: 0xc067dd2  jal         func_19F748
label_1a01c8:
    if (ctx->pc == 0x1A01C8u) {
        ctx->pc = 0x1A01C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A01C4u;
        // 0x1a01c8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A01CCu;
        goto label_1a01cc;
    }
    ctx->pc = 0x1A01C4u;
    SET_GPR_U32(ctx, 31, 0x1A01CCu);
    ctx->pc = 0x1A01C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A01C4u;
    // 0x1a01c8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A01CCu;
label_1a01cc:
    // 0x1a01cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a01ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a01d0:
    // 0x1a01d0: 0xc067dd2  jal         func_19F748
label_1a01d4:
    if (ctx->pc == 0x1A01D4u) {
        ctx->pc = 0x1A01D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A01D0u;
        // 0x1a01d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A01D8u;
        goto label_1a01d8;
    }
    ctx->pc = 0x1A01D0u;
    SET_GPR_U32(ctx, 31, 0x1A01D8u);
    ctx->pc = 0x1A01D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A01D0u;
    // 0x1a01d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A01D8u;
label_1a01d8:
    // 0x1a01d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a01d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a01dc:
    // 0x1a01dc: 0xc067dd2  jal         func_19F748
label_1a01e0:
    if (ctx->pc == 0x1A01E0u) {
        ctx->pc = 0x1A01E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A01DCu;
        // 0x1a01e0: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A01E4u;
        goto label_1a01e4;
    }
    ctx->pc = 0x1A01DCu;
    SET_GPR_U32(ctx, 31, 0x1A01E4u);
    ctx->pc = 0x1A01E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A01DCu;
    // 0x1a01e0: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A01E4u;
label_1a01e4:
    // 0x1a01e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a01e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a01e8:
    // 0x1a01e8: 0xc067dd2  jal         func_19F748
label_1a01ec:
    if (ctx->pc == 0x1A01ECu) {
        ctx->pc = 0x1A01ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A01E8u;
        // 0x1a01ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A01F0u;
        goto label_1a01f0;
    }
    ctx->pc = 0x1A01E8u;
    SET_GPR_U32(ctx, 31, 0x1A01F0u);
    ctx->pc = 0x1A01ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A01E8u;
    // 0x1a01ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A01F0u;
label_1a01f0:
    // 0x1a01f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a01f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a01f4:
    // 0x1a01f4: 0xc067dd2  jal         func_19F748
label_1a01f8:
    if (ctx->pc == 0x1A01F8u) {
        ctx->pc = 0x1A01F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A01F4u;
        // 0x1a01f8: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A01FCu;
        goto label_1a01fc;
    }
    ctx->pc = 0x1A01F4u;
    SET_GPR_U32(ctx, 31, 0x1A01FCu);
    ctx->pc = 0x1A01F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A01F4u;
    // 0x1a01f8: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A01FCu;
label_1a01fc:
    // 0x1a01fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a01fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a0200:
    // 0x1a0200: 0xc067dd2  jal         func_19F748
label_1a0204:
    if (ctx->pc == 0x1A0204u) {
        ctx->pc = 0x1A0204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0200u;
        // 0x1a0204: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0208u;
        goto label_1a0208;
    }
    ctx->pc = 0x1A0200u;
    SET_GPR_U32(ctx, 31, 0x1A0208u);
    ctx->pc = 0x1A0204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0200u;
    // 0x1a0204: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A0208u;
label_1a0208:
    // 0x1a0208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a020c:
    // 0x1a020c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a020cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a0210:
    // 0x1a0210: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0210u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a0214:
    // 0x1a0214: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1a0214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1a0218:
    // 0x1a0218: 0x8067dd2  j           func_19F748
label_1a021c:
    if (ctx->pc == 0x1A021Cu) {
        ctx->pc = 0x1A021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0218u;
        // 0x1a021c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0220u;
        goto label_1a0220;
    }
    ctx->pc = 0x1A0218u;
    ctx->pc = 0x1A021Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0218u;
    // 0x1a021c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A0220u;
label_1a0220:
    // 0x1a0220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a0220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a0224:
    // 0x1a0224: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a0224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a0228:
    // 0x1a0228: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a0228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a022c:
    // 0x1a022c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a022cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a0230:
    // 0x1a0230: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a0230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a0234:
    // 0x1a0234: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a0234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a0238:
    // 0x1a0238: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1a0238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_1a023c:
    // 0x1a023c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_1a0240:
    if (ctx->pc == 0x1A0240u) {
        ctx->pc = 0x1A0240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A023Cu;
        // 0x1a0240: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0244u;
        goto label_1a0244;
    }
    ctx->pc = 0x1A023Cu;
    {
        const bool branch_taken_0x1a023c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A0240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A023Cu;
        // 0x1a0240: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a023c) {
            ctx->pc = 0x1A0268u;
            goto label_1a0268;
        }
    }
    ctx->pc = 0x1A0244u;
label_1a0244:
    // 0x1a0244: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x1a0244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_1a0248:
    // 0x1a0248: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a024c:
    if (ctx->pc == 0x1A024Cu) {
        ctx->pc = 0x1A024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0248u;
        // 0x1a024c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0250u;
        goto label_1a0250;
    }
    ctx->pc = 0x1A0248u;
    {
        const bool branch_taken_0x1a0248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0248u;
        // 0x1a024c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0248) {
            ctx->pc = 0x1A0268u;
            goto label_1a0268;
        }
    }
    ctx->pc = 0x1A0250u;
label_1a0250:
    // 0x1a0250: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1a0250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1a0254:
    // 0x1a0254: 0xc068d2c  jal         func_1A34B0
label_1a0258:
    if (ctx->pc == 0x1A0258u) {
        ctx->pc = 0x1A0258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0254u;
        // 0x1a0258: 0x24a5a200  addiu       $a1, $a1, -0x5E00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A025Cu;
        goto label_1a025c;
    }
    ctx->pc = 0x1A0254u;
    SET_GPR_U32(ctx, 31, 0x1A025Cu);
    ctx->pc = 0x1A0258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0254u;
    // 0x1a0258: 0x24a5a200  addiu       $a1, $a1, -0x5E00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    { ctx->pc = 0x1a34b0; return; }
    ctx->pc = 0x1A025Cu;
label_1a025c:
    // 0x1a025c: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x1a025cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
label_1a0260:
    // 0x1a0260: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1a0260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_1a0264:
    // 0x1a0264: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a0264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a0268:
    // 0x1a0268: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_1a026c:
    if (ctx->pc == 0x1A026Cu) {
        ctx->pc = 0x1A026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0268u;
        // 0x1a026c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0270u;
        goto label_1a0270;
    }
    ctx->pc = 0x1A0268u;
    {
        const bool branch_taken_0x1a0268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0268u;
        // 0x1a026c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0268) {
            ctx->pc = 0x1A02A4u;
            goto label_1a02a4;
        }
    }
    ctx->pc = 0x1A0270u;
label_1a0270:
    // 0x1a0270: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a0274:
    if (ctx->pc == 0x1A0274u) {
        ctx->pc = 0x1A0274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0270u;
        // 0x1a0274: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0278u;
        goto label_1a0278;
    }
    ctx->pc = 0x1A0270u;
    {
        const bool branch_taken_0x1a0270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0270u;
        // 0x1a0274: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0270) {
            ctx->pc = 0x1A0288u;
            goto label_1a0288;
        }
    }
    ctx->pc = 0x1A0278u;
label_1a0278:
    // 0x1a0278: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_1a027c:
    if (ctx->pc == 0x1A027Cu) {
        ctx->pc = 0x1A027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0278u;
        // 0x1a027c: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0280u;
        goto label_1a0280;
    }
    ctx->pc = 0x1A0278u;
    {
        const bool branch_taken_0x1a0278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0278u;
        // 0x1a027c: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0278) {
            ctx->pc = 0x1A029Cu;
            goto label_1a029c;
        }
    }
    ctx->pc = 0x1A0280u;
label_1a0280:
    // 0x1a0280: 0x1000000b  b           . + 4 + (0xB << 2)
label_1a0284:
    if (ctx->pc == 0x1A0284u) {
        ctx->pc = 0x1A0284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0280u;
        // 0x1a0284: 0x8e1101c0  lw          $s1, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0288u;
        goto label_1a0288;
    }
    ctx->pc = 0x1A0280u;
    {
        const bool branch_taken_0x1a0280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0280u;
        // 0x1a0284: 0x8e1101c0  lw          $s1, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0280) {
            ctx->pc = 0x1A02B0u;
            goto label_1a02b0;
        }
    }
    ctx->pc = 0x1A0288u;
label_1a0288:
    // 0x1a0288: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a0288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a028c:
    // 0x1a028c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1a0290:
    if (ctx->pc == 0x1A0290u) {
        ctx->pc = 0x1A0290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A028Cu;
        // 0x1a0290: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0294u;
        goto label_1a0294;
    }
    ctx->pc = 0x1A028Cu;
    {
        const bool branch_taken_0x1a028c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A0290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A028Cu;
        // 0x1a0290: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a028c) {
            ctx->pc = 0x1A02ACu;
            goto label_1a02ac;
        }
    }
    ctx->pc = 0x1A0294u;
label_1a0294:
    // 0x1a0294: 0x10000009  b           . + 4 + (0x9 << 2)
label_1a0298:
    if (ctx->pc == 0x1A0298u) {
        ctx->pc = 0x1A0298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0294u;
        // 0x1a0298: 0x8e1101c0  lw          $s1, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A029Cu;
        goto label_1a029c;
    }
    ctx->pc = 0x1A0294u;
    {
        const bool branch_taken_0x1a0294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0294u;
        // 0x1a0298: 0x8e1101c0  lw          $s1, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0294) {
            ctx->pc = 0x1A02BCu;
            goto label_1a02bc;
        }
    }
    ctx->pc = 0x1A029Cu;
label_1a029c:
    // 0x1a029c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a02a0:
    if (ctx->pc == 0x1A02A0u) {
        ctx->pc = 0x1A02A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A029Cu;
        // 0x1a02a0: 0x8e1101d0  lw          $s1, 0x1D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A02A4u;
        goto label_1a02a4;
    }
    ctx->pc = 0x1A029Cu;
    {
        const bool branch_taken_0x1a029c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A02A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A029Cu;
        // 0x1a02a0: 0x8e1101d0  lw          $s1, 0x1D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a029c) {
            ctx->pc = 0x1A02BCu;
            goto label_1a02bc;
        }
    }
    ctx->pc = 0x1A02A4u;
label_1a02a4:
    // 0x1a02a4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a02a8:
    if (ctx->pc == 0x1A02A8u) {
        ctx->pc = 0x1A02A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A02A4u;
        // 0x1a02a8: 0x8e1101e0  lw          $s1, 0x1E0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A02ACu;
        goto label_1a02ac;
    }
    ctx->pc = 0x1A02A4u;
    {
        const bool branch_taken_0x1a02a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A02A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A02A4u;
        // 0x1a02a8: 0x8e1101e0  lw          $s1, 0x1E0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a02a4) {
            ctx->pc = 0x1A02BCu;
            goto label_1a02bc;
        }
    }
    ctx->pc = 0x1A02ACu;
label_1a02ac:
    // 0x1a02ac: 0x8e1101c0  lw          $s1, 0x1C0($s0)
    ctx->pc = 0x1a02acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_1a02b0:
    // 0x1a02b0: 0x24a5a220  addiu       $a1, $a1, -0x5DE0
    ctx->pc = 0x1a02b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943264));
label_1a02b4:
    // 0x1a02b4: 0xc068d2c  jal         func_1A34B0
label_1a02b8:
    if (ctx->pc == 0x1A02B8u) {
        ctx->pc = 0x1A02B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A02B4u;
        // 0x1a02b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A02BCu;
        goto label_1a02bc;
    }
    ctx->pc = 0x1A02B4u;
    SET_GPR_U32(ctx, 31, 0x1A02BCu);
    ctx->pc = 0x1A02B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A02B4u;
    // 0x1a02b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    { ctx->pc = 0x1a34b0; return; }
    ctx->pc = 0x1A02BCu;
label_1a02bc:
    // 0x1a02bc: 0xc067952  jal         func_19E548
label_1a02c0:
    if (ctx->pc == 0x1A02C0u) {
        ctx->pc = 0x1A02C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A02BCu;
        // 0x1a02c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A02C4u;
        goto label_1a02c4;
    }
    ctx->pc = 0x1A02BCu;
    SET_GPR_U32(ctx, 31, 0x1A02C4u);
    ctx->pc = 0x1A02C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A02BCu;
    // 0x1a02c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E548u;
    { ctx->pc = 0x19e548; return; }
    ctx->pc = 0x1A02C4u;
label_1a02c4:
    // 0x1a02c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a02c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a02c8:
    // 0x1a02c8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1a02cc:
    if (ctx->pc == 0x1A02CCu) {
        ctx->pc = 0x1A02CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A02C8u;
        // 0x1a02cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A02D0u;
        goto label_1a02d0;
    }
    ctx->pc = 0x1A02C8u;
    {
        const bool branch_taken_0x1a02c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A02CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A02C8u;
        // 0x1a02cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a02c8) {
            ctx->pc = 0x1A02D4u;
            goto label_1a02d4;
        }
    }
    ctx->pc = 0x1A02D0u;
label_1a02d0:
    // 0x1a02d0: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1a02d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_1a02d4:
    // 0x1a02d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a02d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a02d8:
    // 0x1a02d8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a02d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a02dc:
    // 0x1a02dc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a02dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a02e0:
    // 0x1a02e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a02e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a02e4:
    // 0x1a02e4: 0x3e00008  jr          $ra
label_1a02e8:
    if (ctx->pc == 0x1A02E8u) {
        ctx->pc = 0x1A02E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A02E4u;
        // 0x1a02e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A02ECu;
        goto label_1a02ec;
    }
    ctx->pc = 0x1A02E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A02E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A02E4u;
        // 0x1a02e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A02E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A02ECu;
label_1a02ec:
    // 0x1a02ec: 0x0  nop
    ctx->pc = 0x1a02ecu;
    // NOP
label_1a02f0:
    // 0x1a02f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a02f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a02f4:
    // 0x1a02f4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1a02f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a02f8:
    // 0x1a02f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a02f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a02fc:
    // 0x1a02fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a02fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a0300:
    // 0x1a0300: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
label_1a0304:
    if (ctx->pc == 0x1A0304u) {
        ctx->pc = 0x1A0304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0300u;
        // 0x1a0304: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0308u;
        goto label_1a0308;
    }
    ctx->pc = 0x1A0300u;
    {
        const bool branch_taken_0x1a0300 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0300u;
        // 0x1a0304: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0300) {
            ctx->pc = 0x1A035Cu;
            goto label_1a035c;
        }
    }
    ctx->pc = 0x1A0308u;
label_1a0308:
    // 0x1a0308: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1a0308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_1a030c:
    // 0x1a030c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a030cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a0310:
    // 0x1a0310: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
label_1a0314:
    if (ctx->pc == 0x1A0314u) {
        ctx->pc = 0x1A0314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0310u;
        // 0x1a0314: 0x8e020150  lw          $v0, 0x150($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0318u;
        goto label_1a0318;
    }
    ctx->pc = 0x1A0310u;
    {
        const bool branch_taken_0x1a0310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A0314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0310u;
        // 0x1a0314: 0x8e020150  lw          $v0, 0x150($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0310) {
            ctx->pc = 0x1A0338u;
            goto label_1a0338;
        }
    }
    ctx->pc = 0x1A0318u;
label_1a0318:
    // 0x1a0318: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
label_1a031c:
    if (ctx->pc == 0x1A031Cu) {
        ctx->pc = 0x1A031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0318u;
        // 0x1a031c: 0x8e0501b8  lw          $a1, 0x1B8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0320u;
        goto label_1a0320;
    }
    ctx->pc = 0x1A0318u;
    {
        const bool branch_taken_0x1a0318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a0318) {
            ctx->pc = 0x1A031Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0318u;
            // 0x1a031c: 0x8e0501b8  lw          $a1, 0x1B8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0324u;
            goto label_1a0324;
        }
    }
    ctx->pc = 0x1A0320u;
label_1a0320:
    // 0x1a0320: 0x8e0501c4  lw          $a1, 0x1C4($s0)
    ctx->pc = 0x1a0320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
label_1a0324:
    // 0x1a0324: 0x24e6ffff  addiu       $a2, $a3, -0x1
    ctx->pc = 0x1a0324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_1a0328:
    // 0x1a0328: 0xc0682c0  jal         func_1A0B00
label_1a032c:
    if (ctx->pc == 0x1A032Cu) {
        ctx->pc = 0x1A032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0328u;
        // 0x1a032c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0330u;
        goto label_1a0330;
    }
    ctx->pc = 0x1A0328u;
    SET_GPR_U32(ctx, 31, 0x1A0330u);
    ctx->pc = 0x1A032Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0328u;
    // 0x1a032c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0B00u;
    { ctx->pc = 0x1a0b00; return; }
    ctx->pc = 0x1A0330u;
label_1a0330:
    // 0x1a0330: 0x1000000b  b           . + 4 + (0xB << 2)
label_1a0334:
    if (ctx->pc == 0x1A0334u) {
        ctx->pc = 0x1A0334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0330u;
        // 0x1a0334: 0x8e0300f8  lw          $v1, 0xF8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0338u;
        goto label_1a0338;
    }
    ctx->pc = 0x1A0330u;
    {
        const bool branch_taken_0x1a0330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0330u;
        // 0x1a0334: 0x8e0300f8  lw          $v1, 0xF8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0330) {
            ctx->pc = 0x1A0360u;
            goto label_1a0360;
        }
    }
    ctx->pc = 0x1A0338u;
label_1a0338:
    // 0x1a0338: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_1a033c:
    if (ctx->pc == 0x1A033Cu) {
        ctx->pc = 0x1A033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0338u;
        // 0x1a033c: 0x8e0501c8  lw          $a1, 0x1C8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0340u;
        goto label_1a0340;
    }
    ctx->pc = 0x1A0338u;
    {
        const bool branch_taken_0x1a0338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a0338) {
            ctx->pc = 0x1A033Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0338u;
            // 0x1a033c: 0x8e0501c8  lw          $a1, 0x1C8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A034Cu;
            goto label_1a034c;
        }
    }
    ctx->pc = 0x1A0340u;
label_1a0340:
    // 0x1a0340: 0x8e0501d4  lw          $a1, 0x1D4($s0)
    ctx->pc = 0x1a0340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_1a0344:
    // 0x1a0344: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a0348:
    if (ctx->pc == 0x1A0348u) {
        ctx->pc = 0x1A0348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0344u;
        // 0x1a0348: 0x8e0601e4  lw          $a2, 0x1E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A034Cu;
        goto label_1a034c;
    }
    ctx->pc = 0x1A0344u;
    {
        const bool branch_taken_0x1a0344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0344u;
        // 0x1a0348: 0x8e0601e4  lw          $a2, 0x1E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0344) {
            ctx->pc = 0x1A0350u;
            goto label_1a0350;
        }
    }
    ctx->pc = 0x1A034Cu;
label_1a034c:
    // 0x1a034c: 0x8e0601d8  lw          $a2, 0x1D8($s0)
    ctx->pc = 0x1a034cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 472)));
label_1a0350:
    // 0x1a0350: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1a0350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_1a0354:
    // 0x1a0354: 0xc068304  jal         func_1A0C10
label_1a0358:
    if (ctx->pc == 0x1A0358u) {
        ctx->pc = 0x1A0358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0354u;
        // 0x1a0358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A035Cu;
        goto label_1a035c;
    }
    ctx->pc = 0x1A0354u;
    SET_GPR_U32(ctx, 31, 0x1A035Cu);
    ctx->pc = 0x1A0358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0354u;
    // 0x1a0358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0C10u;
    { ctx->pc = 0x1a0c10; return; }
    ctx->pc = 0x1A035Cu;
label_1a035c:
    // 0x1a035c: 0x8e0300f8  lw          $v1, 0xF8($s0)
    ctx->pc = 0x1a035cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
label_1a0360:
    // 0x1a0360: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a0360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0364:
    // 0x1a0364: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1a0368:
    if (ctx->pc == 0x1A0368u) {
        ctx->pc = 0x1A0368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0364u;
        // 0x1a0368: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A036Cu;
        goto label_1a036c;
    }
    ctx->pc = 0x1A0364u;
    {
        const bool branch_taken_0x1a0364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A0368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0364u;
        // 0x1a0368: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0364) {
            ctx->pc = 0x1A0374u;
            goto label_1a0374;
        }
    }
    ctx->pc = 0x1A036Cu;
label_1a036c:
    // 0x1a036c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a036cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a0370:
    // 0x1a0370: 0xae0200f8  sw          $v0, 0xF8($s0)
    ctx->pc = 0x1a0370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
label_1a0374:
    // 0x1a0374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a0378:
    // 0x1a0378: 0x3e00008  jr          $ra
label_1a037c:
    if (ctx->pc == 0x1A037Cu) {
        ctx->pc = 0x1A037Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0378u;
        // 0x1a037c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0380u;
        goto label_1a0380;
    }
    ctx->pc = 0x1A0378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A037Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0378u;
        // 0x1a037c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0380u;
label_1a0380:
    // 0x1a0380: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1a0380u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a0384:
    // 0x1a0384: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x1a0384u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a0388:
    // 0x1a0388: 0x8ce90174  lw          $t1, 0x174($a3)
    ctx->pc = 0x1a0388u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
label_1a038c:
    // 0x1a038c: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x1a038cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a0390:
    // 0x1a0390: 0x8cea0150  lw          $t2, 0x150($a3)
    ctx->pc = 0x1a0390u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 336)));
label_1a0394:
    // 0x1a0394: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a0394u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a0398:
    // 0x1a0398: 0x39220003  xori        $v0, $t1, 0x3
    ctx->pc = 0x1a0398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)3);
label_1a039c:
    // 0x1a039c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1a039cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a03a0:
    // 0x1a03a0: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x1a03a0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a03a4:
    // 0x1a03a4: 0x154e0044  bne         $t2, $t6, . + 4 + (0x44 << 2)
label_1a03a8:
    if (ctx->pc == 0x1A03A8u) {
        ctx->pc = 0x1A03A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A03A4u;
        // 0x1a03a8: 0x182580a  movz        $t3, $t4, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A03ACu;
        goto label_1a03ac;
    }
    ctx->pc = 0x1A03A4u;
    {
        const bool branch_taken_0x1a03a4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 14));
        ctx->pc = 0x1A03A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A03A4u;
        // 0x1a03a8: 0x182580a  movz        $t3, $t4, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a03a4) {
            ctx->pc = 0x1A04B8u;
            goto label_1a04b8;
        }
    }
    ctx->pc = 0x1A03ACu;
label_1a03ac:
    // 0x1a03ac: 0x8ce200a0  lw          $v0, 0xA0($a3)
    ctx->pc = 0x1a03acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 160)));
label_1a03b0:
    // 0x1a03b0: 0x8ce300a4  lw          $v1, 0xA4($a3)
    ctx->pc = 0x1a03b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 164)));
label_1a03b4:
    // 0x1a03b4: 0x8ce501c4  lw          $a1, 0x1C4($a3)
    ctx->pc = 0x1a03b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 452)));
label_1a03b8:
    // 0x1a03b8: 0x8ce601d4  lw          $a2, 0x1D4($a3)
    ctx->pc = 0x1a03b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 468)));
label_1a03bc:
    // 0x1a03bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a03bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a03c0:
    // 0x1a03c0: 0x8ce401e4  lw          $a0, 0x1E4($a3)
    ctx->pc = 0x1a03c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
label_1a03c4:
    // 0x1a03c4: 0x4b102a  slt         $v0, $v0, $t3
    ctx->pc = 0x1a03c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_1a03c8:
    // 0x1a03c8: 0xace501c0  sw          $a1, 0x1C0($a3)
    ctx->pc = 0x1a03c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 448), GPR_U32(ctx, 5));
label_1a03cc:
    // 0x1a03cc: 0xace601d0  sw          $a2, 0x1D0($a3)
    ctx->pc = 0x1a03ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 464), GPR_U32(ctx, 6));
label_1a03d0:
    // 0x1a03d0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1a03d4:
    if (ctx->pc == 0x1A03D4u) {
        ctx->pc = 0x1A03D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A03D0u;
        // 0x1a03d4: 0xace401e0  sw          $a0, 0x1E0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A03D8u;
        goto label_1a03d8;
    }
    ctx->pc = 0x1A03D0u;
    {
        const bool branch_taken_0x1a03d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A03D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A03D0u;
        // 0x1a03d4: 0xace401e0  sw          $a0, 0x1E0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a03d0) {
            ctx->pc = 0x1A03E4u;
            goto label_1a03e4;
        }
    }
    ctx->pc = 0x1A03D8u;
label_1a03d8:
    // 0x1a03d8: 0xace000e8  sw          $zero, 0xE8($a3)
    ctx->pc = 0x1a03d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 232), GPR_U32(ctx, 0));
label_1a03dc:
    // 0x1a03dc: 0xace001a8  sw          $zero, 0x1A8($a3)
    ctx->pc = 0x1a03dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 424), GPR_U32(ctx, 0));
label_1a03e0:
    // 0x1a03e0: 0xace001a4  sw          $zero, 0x1A4($a3)
    ctx->pc = 0x1a03e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 420), GPR_U32(ctx, 0));
label_1a03e4:
    // 0x1a03e4: 0x8ce200e8  lw          $v0, 0xE8($a3)
    ctx->pc = 0x1a03e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 232)));
label_1a03e8:
    // 0x1a03e8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1a03ec:
    if (ctx->pc == 0x1A03ECu) {
        ctx->pc = 0x1A03ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A03E8u;
        // 0x1a03ec: 0x8ce201a4  lw          $v0, 0x1A4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A03F0u;
        goto label_1a03f0;
    }
    ctx->pc = 0x1A03E8u;
    {
        const bool branch_taken_0x1a03e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a03e8) {
            ctx->pc = 0x1A03ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A03E8u;
            // 0x1a03ec: 0x8ce201a4  lw          $v0, 0x1A4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0400u;
            goto label_1a0400;
        }
    }
    ctx->pc = 0x1A03F0u;
label_1a03f0:
    // 0x1a03f0: 0x8ce201a8  lw          $v0, 0x1A8($a3)
    ctx->pc = 0x1a03f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 424)));
label_1a03f4:
    // 0x1a03f4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_1a03f8:
    if (ctx->pc == 0x1A03F8u) {
        ctx->pc = 0x1A03F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A03F4u;
        // 0x1a03f8: 0xace000e8  sw          $zero, 0xE8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A03FCu;
        goto label_1a03fc;
    }
    ctx->pc = 0x1A03F4u;
    {
        const bool branch_taken_0x1a03f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a03f4) {
            ctx->pc = 0x1A03F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A03F4u;
            // 0x1a03f8: 0xace000e8  sw          $zero, 0xE8($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 232), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0428u;
            goto label_1a0428;
        }
    }
    ctx->pc = 0x1A03FCu;
label_1a03fc:
    // 0x1a03fc: 0x8ce201a4  lw          $v0, 0x1A4($a3)
    ctx->pc = 0x1a03fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
label_1a0400:
    // 0x1a0400: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_1a0404:
    if (ctx->pc == 0x1A0404u) {
        ctx->pc = 0x1A0404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0400u;
        // 0x1a0404: 0xace000e8  sw          $zero, 0xE8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0408u;
        goto label_1a0408;
    }
    ctx->pc = 0x1A0400u;
    {
        const bool branch_taken_0x1a0400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0400) {
            ctx->pc = 0x1A0404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0400u;
            // 0x1a0404: 0xace000e8  sw          $zero, 0xE8($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 232), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0428u;
            goto label_1a0428;
        }
    }
    ctx->pc = 0x1A0408u;
label_1a0408:
    // 0x1a0408: 0x8ce201b8  lw          $v0, 0x1B8($a3)
    ctx->pc = 0x1a0408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
label_1a040c:
    // 0x1a040c: 0x8ce401c8  lw          $a0, 0x1C8($a3)
    ctx->pc = 0x1a040cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
label_1a0410:
    // 0x1a0410: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1a0410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_1a0414:
    // 0x1a0414: 0x8ce301d8  lw          $v1, 0x1D8($a3)
    ctx->pc = 0x1a0414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
label_1a0418:
    // 0x1a0418: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1a0418u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
label_1a041c:
    // 0x1a041c: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x1a041cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
label_1a0420:
    // 0x1a0420: 0x8ce90174  lw          $t1, 0x174($a3)
    ctx->pc = 0x1a0420u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
label_1a0424:
    // 0x1a0424: 0xace000e8  sw          $zero, 0xE8($a3)
    ctx->pc = 0x1a0424u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 232), GPR_U32(ctx, 0));
label_1a0428:
    // 0x1a0428: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a0428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a042c:
    // 0x1a042c: 0x1522000b  bne         $t1, $v0, . + 4 + (0xB << 2)
label_1a0430:
    if (ctx->pc == 0x1A0430u) {
        ctx->pc = 0x1A0430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A042Cu;
        // 0x1a0430: 0xace001a8  sw          $zero, 0x1A8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 424), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0434u;
        goto label_1a0434;
    }
    ctx->pc = 0x1A042Cu;
    {
        const bool branch_taken_0x1a042c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A0430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A042Cu;
        // 0x1a0430: 0xace001a8  sw          $zero, 0x1A8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 424), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a042c) {
            ctx->pc = 0x1A045Cu;
            goto label_1a045c;
        }
    }
    ctx->pc = 0x1A0434u;
label_1a0434:
    // 0x1a0434: 0x8ce301b8  lw          $v1, 0x1B8($a3)
    ctx->pc = 0x1a0434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
label_1a0438:
    // 0x1a0438: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a0438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a043c:
    // 0x1a043c: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x1a043cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1a0440:
    // 0x1a0440: 0x50440018  beql        $v0, $a0, . + 4 + (0x18 << 2)
label_1a0444:
    if (ctx->pc == 0x1A0444u) {
        ctx->pc = 0x1A0444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0440u;
        // 0x1a0444: 0x8ce301bc  lw          $v1, 0x1BC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0448u;
        goto label_1a0448;
    }
    ctx->pc = 0x1A0440u;
    {
        const bool branch_taken_0x1a0440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a0440) {
            ctx->pc = 0x1A0444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0440u;
            // 0x1a0444: 0x8ce301bc  lw          $v1, 0x1BC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A04A4u;
            goto label_1a04a4;
        }
    }
    ctx->pc = 0x1A0448u;
label_1a0448:
    // 0x1a0448: 0x8ce201a4  lw          $v0, 0x1A4($a3)
    ctx->pc = 0x1a0448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
label_1a044c:
    // 0x1a044c: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_1a0450:
    if (ctx->pc == 0x1A0450u) {
        ctx->pc = 0x1A0450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A044Cu;
        // 0x1a0450: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0454u;
        goto label_1a0454;
    }
    ctx->pc = 0x1A044Cu;
    {
        const bool branch_taken_0x1a044c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A044Cu;
        // 0x1a0450: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a044c) {
            ctx->pc = 0x1A0570u;
            goto label_1a0570;
        }
    }
    ctx->pc = 0x1A0454u;
label_1a0454:
    // 0x1a0454: 0x10000013  b           . + 4 + (0x13 << 2)
label_1a0458:
    if (ctx->pc == 0x1A0458u) {
        ctx->pc = 0x1A0458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0454u;
        // 0x1a0458: 0x8ce301bc  lw          $v1, 0x1BC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A045Cu;
        goto label_1a045c;
    }
    ctx->pc = 0x1A0454u;
    {
        const bool branch_taken_0x1a0454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0454u;
        // 0x1a0458: 0x8ce301bc  lw          $v1, 0x1BC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0454) {
            ctx->pc = 0x1A04A4u;
            goto label_1a04a4;
        }
    }
    ctx->pc = 0x1A045Cu;
label_1a045c:
    // 0x1a045c: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x1a045cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
label_1a0460:
    // 0x1a0460: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a0460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0464:
    // 0x1a0464: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1a0464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1a0468:
    // 0x1a0468: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
label_1a046c:
    if (ctx->pc == 0x1A046Cu) {
        ctx->pc = 0x1A046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0468u;
        // 0x1a046c: 0x8ce201a4  lw          $v0, 0x1A4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0470u;
        goto label_1a0470;
    }
    ctx->pc = 0x1A0468u;
    {
        const bool branch_taken_0x1a0468 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a0468) {
            ctx->pc = 0x1A046Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0468u;
            // 0x1a046c: 0x8ce201a4  lw          $v0, 0x1A4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0484u;
            goto label_1a0484;
        }
    }
    ctx->pc = 0x1A0470u;
label_1a0470:
    // 0x1a0470: 0x8ce201d8  lw          $v0, 0x1D8($a3)
    ctx->pc = 0x1a0470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
label_1a0474:
    // 0x1a0474: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x1a0474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1a0478:
    // 0x1a0478: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
label_1a047c:
    if (ctx->pc == 0x1A047Cu) {
        ctx->pc = 0x1A047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0478u;
        // 0x1a047c: 0x8ce201cc  lw          $v0, 0x1CC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0480u;
        goto label_1a0480;
    }
    ctx->pc = 0x1A0478u;
    {
        const bool branch_taken_0x1a0478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a0478) {
            ctx->pc = 0x1A047Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0478u;
            // 0x1a047c: 0x8ce201cc  lw          $v0, 0x1CC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0490u;
            goto label_1a0490;
        }
    }
    ctx->pc = 0x1A0480u;
label_1a0480:
    // 0x1a0480: 0x8ce201a4  lw          $v0, 0x1A4($a3)
    ctx->pc = 0x1a0480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
label_1a0484:
    // 0x1a0484: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_1a0488:
    if (ctx->pc == 0x1A0488u) {
        ctx->pc = 0x1A0488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0484u;
        // 0x1a0488: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A048Cu;
        goto label_1a048c;
    }
    ctx->pc = 0x1A0484u;
    {
        const bool branch_taken_0x1a0484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0484u;
        // 0x1a0488: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0484) {
            ctx->pc = 0x1A0570u;
            goto label_1a0570;
        }
    }
    ctx->pc = 0x1A048Cu;
label_1a048c:
    // 0x1a048c: 0x8ce201cc  lw          $v0, 0x1CC($a3)
    ctx->pc = 0x1a048cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
label_1a0490:
    // 0x1a0490: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a0490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0494:
    // 0x1a0494: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1a0494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1a0498:
    // 0x1a0498: 0x14830035  bne         $a0, $v1, . + 4 + (0x35 << 2)
label_1a049c:
    if (ctx->pc == 0x1A049Cu) {
        ctx->pc = 0x1A049Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0498u;
        // 0x1a049c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A04A0u;
        goto label_1a04a0;
    }
    ctx->pc = 0x1A0498u;
    {
        const bool branch_taken_0x1a0498 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A049Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0498u;
        // 0x1a049c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0498) {
            ctx->pc = 0x1A0570u;
            goto label_1a0570;
        }
    }
    ctx->pc = 0x1A04A0u;
label_1a04a0:
    // 0x1a04a0: 0x8ce301dc  lw          $v1, 0x1DC($a3)
    ctx->pc = 0x1a04a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
label_1a04a4:
    // 0x1a04a4: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x1a04a4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a04a8:
    // 0x1a04a8: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x1a04a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1a04ac:
    // 0x1a04ac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a04acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1a04b0:
    // 0x1a04b0: 0x1000002e  b           . + 4 + (0x2E << 2)
label_1a04b4:
    if (ctx->pc == 0x1A04B4u) {
        ctx->pc = 0x1A04B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04B0u;
        // 0x1a04b4: 0x2680b  movn        $t5, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A04B8u;
        goto label_1a04b8;
    }
    ctx->pc = 0x1A04B0u;
    {
        const bool branch_taken_0x1a04b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A04B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04B0u;
        // 0x1a04b4: 0x2680b  movn        $t5, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a04b0) {
            ctx->pc = 0x1A056Cu;
            goto label_1a056c;
        }
    }
    ctx->pc = 0x1A04B8u;
label_1a04b8:
    // 0x1a04b8: 0x54a0000e  bnel        $a1, $zero, . + 4 + (0xE << 2)
label_1a04bc:
    if (ctx->pc == 0x1A04BCu) {
        ctx->pc = 0x1A04BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04B8u;
        // 0x1a04bc: 0x8ce201bc  lw          $v0, 0x1BC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A04C0u;
        goto label_1a04c0;
    }
    ctx->pc = 0x1A04B8u;
    {
        const bool branch_taken_0x1a04b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a04b8) {
            ctx->pc = 0x1A04BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A04B8u;
            // 0x1a04bc: 0x8ce201bc  lw          $v0, 0x1BC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A04F4u;
            goto label_1a04f4;
        }
    }
    ctx->pc = 0x1A04C0u;
label_1a04c0:
    // 0x1a04c0: 0x8ce601b8  lw          $a2, 0x1B8($a3)
    ctx->pc = 0x1a04c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
label_1a04c4:
    // 0x1a04c4: 0x8ce401bc  lw          $a0, 0x1BC($a3)
    ctx->pc = 0x1a04c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
label_1a04c8:
    // 0x1a04c8: 0xace601bc  sw          $a2, 0x1BC($a3)
    ctx->pc = 0x1a04c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 444), GPR_U32(ctx, 6));
label_1a04cc:
    // 0x1a04cc: 0x8ce601c8  lw          $a2, 0x1C8($a3)
    ctx->pc = 0x1a04ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
label_1a04d0:
    // 0x1a04d0: 0x8ce301cc  lw          $v1, 0x1CC($a3)
    ctx->pc = 0x1a04d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
label_1a04d4:
    // 0x1a04d4: 0xace601cc  sw          $a2, 0x1CC($a3)
    ctx->pc = 0x1a04d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 460), GPR_U32(ctx, 6));
label_1a04d8:
    // 0x1a04d8: 0x8ce601d8  lw          $a2, 0x1D8($a3)
    ctx->pc = 0x1a04d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
label_1a04dc:
    // 0x1a04dc: 0x8ce201dc  lw          $v0, 0x1DC($a3)
    ctx->pc = 0x1a04dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
label_1a04e0:
    // 0x1a04e0: 0xace401b8  sw          $a0, 0x1B8($a3)
    ctx->pc = 0x1a04e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 440), GPR_U32(ctx, 4));
label_1a04e4:
    // 0x1a04e4: 0xace301c8  sw          $v1, 0x1C8($a3)
    ctx->pc = 0x1a04e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 456), GPR_U32(ctx, 3));
label_1a04e8:
    // 0x1a04e8: 0xace201d8  sw          $v0, 0x1D8($a3)
    ctx->pc = 0x1a04e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 472), GPR_U32(ctx, 2));
label_1a04ec:
    // 0x1a04ec: 0xace601dc  sw          $a2, 0x1DC($a3)
    ctx->pc = 0x1a04ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 476), GPR_U32(ctx, 6));
label_1a04f0:
    // 0x1a04f0: 0x8ce201bc  lw          $v0, 0x1BC($a3)
    ctx->pc = 0x1a04f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
label_1a04f4:
    // 0x1a04f4: 0x8ce401cc  lw          $a0, 0x1CC($a3)
    ctx->pc = 0x1a04f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
label_1a04f8:
    // 0x1a04f8: 0x8ce301dc  lw          $v1, 0x1DC($a3)
    ctx->pc = 0x1a04f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
label_1a04fc:
    // 0x1a04fc: 0xace201c0  sw          $v0, 0x1C0($a3)
    ctx->pc = 0x1a04fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 448), GPR_U32(ctx, 2));
label_1a0500:
    // 0x1a0500: 0xace401d0  sw          $a0, 0x1D0($a3)
    ctx->pc = 0x1a0500u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 464), GPR_U32(ctx, 4));
label_1a0504:
    // 0x1a0504: 0x152e0006  bne         $t1, $t6, . + 4 + (0x6 << 2)
label_1a0508:
    if (ctx->pc == 0x1A0508u) {
        ctx->pc = 0x1A0508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0504u;
        // 0x1a0508: 0xace301e0  sw          $v1, 0x1E0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A050Cu;
        goto label_1a050c;
    }
    ctx->pc = 0x1A0504u;
    {
        const bool branch_taken_0x1a0504 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 14));
        ctx->pc = 0x1A0508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0504u;
        // 0x1a0508: 0xace301e0  sw          $v1, 0x1E0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0504) {
            ctx->pc = 0x1A0520u;
            goto label_1a0520;
        }
    }
    ctx->pc = 0x1A050Cu;
label_1a050c:
    // 0x1a050c: 0x554c0017  bnel        $t2, $t4, . + 4 + (0x17 << 2)
label_1a0510:
    if (ctx->pc == 0x1A0510u) {
        ctx->pc = 0x1A0510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A050Cu;
        // 0x1a0510: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0514u;
        goto label_1a0514;
    }
    ctx->pc = 0x1A050Cu;
    {
        const bool branch_taken_0x1a050c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        if (branch_taken_0x1a050c) {
            ctx->pc = 0x1A0510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A050Cu;
            // 0x1a0510: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A056Cu;
            goto label_1a056c;
        }
    }
    ctx->pc = 0x1A0514u;
label_1a0514:
    // 0x1a0514: 0x8ce201b8  lw          $v0, 0x1B8($a3)
    ctx->pc = 0x1a0514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
label_1a0518:
    // 0x1a0518: 0x10000010  b           . + 4 + (0x10 << 2)
label_1a051c:
    if (ctx->pc == 0x1A051Cu) {
        ctx->pc = 0x1A051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0518u;
        // 0x1a051c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0520u;
        goto label_1a0520;
    }
    ctx->pc = 0x1A0518u;
    {
        const bool branch_taken_0x1a0518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0518u;
        // 0x1a051c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0518) {
            ctx->pc = 0x1A055Cu;
            goto label_1a055c;
        }
    }
    ctx->pc = 0x1A0520u;
label_1a0520:
    // 0x1a0520: 0x39220001  xori        $v0, $t1, 0x1
    ctx->pc = 0x1a0520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)1);
label_1a0524:
    // 0x1a0524: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a0524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0528:
    // 0x1a0528: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x1a0528u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_1a052c:
    // 0x1a052c: 0x154c000e  bne         $t2, $t4, . + 4 + (0xE << 2)
label_1a0530:
    if (ctx->pc == 0x1A0530u) {
        ctx->pc = 0x1A0530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A052Cu;
        // 0x1a0530: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0534u;
        goto label_1a0534;
    }
    ctx->pc = 0x1A052Cu;
    {
        const bool branch_taken_0x1a052c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        ctx->pc = 0x1A0530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A052Cu;
        // 0x1a0530: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a052c) {
            ctx->pc = 0x1A0568u;
            goto label_1a0568;
        }
    }
    ctx->pc = 0x1A0534u;
label_1a0534:
    // 0x1a0534: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
label_1a0538:
    if (ctx->pc == 0x1A0538u) {
        ctx->pc = 0x1A0538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0534u;
        // 0x1a0538: 0x8ce201c8  lw          $v0, 0x1C8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A053Cu;
        goto label_1a053c;
    }
    ctx->pc = 0x1A0534u;
    {
        const bool branch_taken_0x1a0534 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0534) {
            ctx->pc = 0x1A0538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0534u;
            // 0x1a0538: 0x8ce201c8  lw          $v0, 0x1C8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A054Cu;
            goto label_1a054c;
        }
    }
    ctx->pc = 0x1A053Cu;
label_1a053c:
    // 0x1a053c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x1a053cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1a0540:
    // 0x1a0540: 0x5046000a  beql        $v0, $a2, . + 4 + (0xA << 2)
label_1a0544:
    if (ctx->pc == 0x1A0544u) {
        ctx->pc = 0x1A0544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0540u;
        // 0x1a0544: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0548u;
        goto label_1a0548;
    }
    ctx->pc = 0x1A0540u;
    {
        const bool branch_taken_0x1a0540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x1a0540) {
            ctx->pc = 0x1A0544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0540u;
            // 0x1a0544: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A056Cu;
            goto label_1a056c;
        }
    }
    ctx->pc = 0x1A0548u;
label_1a0548:
    // 0x1a0548: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x1a0548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
label_1a054c:
    // 0x1a054c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1a054cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1a0550:
    // 0x1a0550: 0x14860007  bne         $a0, $a2, . + 4 + (0x7 << 2)
label_1a0554:
    if (ctx->pc == 0x1A0554u) {
        ctx->pc = 0x1A0554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0550u;
        // 0x1a0554: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0558u;
        goto label_1a0558;
    }
    ctx->pc = 0x1A0550u;
    {
        const bool branch_taken_0x1a0550 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x1A0554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0550u;
        // 0x1a0554: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0550) {
            ctx->pc = 0x1A0570u;
            goto label_1a0570;
        }
    }
    ctx->pc = 0x1A0558u;
label_1a0558:
    // 0x1a0558: 0x8ce201d8  lw          $v0, 0x1D8($a3)
    ctx->pc = 0x1a0558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
label_1a055c:
    // 0x1a055c: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x1a055cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1a0560:
    // 0x1a0560: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_1a0564:
    if (ctx->pc == 0x1A0564u) {
        ctx->pc = 0x1A0564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0560u;
        // 0x1a0564: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0568u;
        goto label_1a0568;
    }
    ctx->pc = 0x1A0560u;
    {
        const bool branch_taken_0x1a0560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1A0564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0560u;
        // 0x1a0564: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0560) {
            ctx->pc = 0x1A0570u;
            goto label_1a0570;
        }
    }
    ctx->pc = 0x1A0568u;
label_1a0568:
    // 0x1a0568: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x1a0568u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a056c:
    // 0x1a056c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a056cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a0570:
    // 0x1a0570: 0x1122000c  beq         $t1, $v0, . + 4 + (0xC << 2)
label_1a0574:
    if (ctx->pc == 0x1A0574u) {
        ctx->pc = 0x1A0574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0570u;
        // 0x1a0574: 0x29220003  slti        $v0, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0578u;
        goto label_1a0578;
    }
    ctx->pc = 0x1A0570u;
    {
        const bool branch_taken_0x1a0570 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A0574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0570u;
        // 0x1a0574: 0x29220003  slti        $v0, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0570) {
            ctx->pc = 0x1A05A4u;
            goto label_1a05a4;
        }
    }
    ctx->pc = 0x1A0578u;
label_1a0578:
    // 0x1a0578: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a057c:
    if (ctx->pc == 0x1A057Cu) {
        ctx->pc = 0x1A057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0578u;
        // 0x1a057c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0580u;
        goto label_1a0580;
    }
    ctx->pc = 0x1A0578u;
    {
        const bool branch_taken_0x1a0578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0578u;
        // 0x1a057c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0578) {
            ctx->pc = 0x1A0590u;
            goto label_1a0590;
        }
    }
    ctx->pc = 0x1A0580u;
label_1a0580:
    // 0x1a0580: 0x51220009  beql        $t1, $v0, . + 4 + (0x9 << 2)
label_1a0584:
    if (ctx->pc == 0x1A0584u) {
        ctx->pc = 0x1A0584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0580u;
        // 0x1a0584: 0x8ce801d0  lw          $t0, 0x1D0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 464)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0588u;
        goto label_1a0588;
    }
    ctx->pc = 0x1A0580u;
    {
        const bool branch_taken_0x1a0580 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a0580) {
            ctx->pc = 0x1A0584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0580u;
            // 0x1a0584: 0x8ce801d0  lw          $t0, 0x1D0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A05A8u;
            goto label_1a05a8;
        }
    }
    ctx->pc = 0x1A0588u;
label_1a0588:
    // 0x1a0588: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a058c:
    if (ctx->pc == 0x1A058Cu) {
        ctx->pc = 0x1A058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0588u;
        // 0x1a058c: 0xad000028  sw          $zero, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0590u;
        goto label_1a0590;
    }
    ctx->pc = 0x1A0588u;
    {
        const bool branch_taken_0x1a0588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0588u;
        // 0x1a058c: 0xad000028  sw          $zero, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0588) {
            ctx->pc = 0x1A05ACu;
            goto label_1a05ac;
        }
    }
    ctx->pc = 0x1A0590u;
label_1a0590:
    // 0x1a0590: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a0590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a0594:
    // 0x1a0594: 0x51220004  beql        $t1, $v0, . + 4 + (0x4 << 2)
label_1a0598:
    if (ctx->pc == 0x1A0598u) {
        ctx->pc = 0x1A0598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0594u;
        // 0x1a0598: 0x8ce801c0  lw          $t0, 0x1C0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A059Cu;
        goto label_1a059c;
    }
    ctx->pc = 0x1A0594u;
    {
        const bool branch_taken_0x1a0594 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a0594) {
            ctx->pc = 0x1A0598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0594u;
            // 0x1a0598: 0x8ce801c0  lw          $t0, 0x1C0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A05A8u;
            goto label_1a05a8;
        }
    }
    ctx->pc = 0x1A059Cu;
label_1a059c:
    // 0x1a059c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a05a0:
    if (ctx->pc == 0x1A05A0u) {
        ctx->pc = 0x1A05A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A059Cu;
        // 0x1a05a0: 0xad000028  sw          $zero, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A05A4u;
        goto label_1a05a4;
    }
    ctx->pc = 0x1A059Cu;
    {
        const bool branch_taken_0x1a059c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A05A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A059Cu;
        // 0x1a05a0: 0xad000028  sw          $zero, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a059c) {
            ctx->pc = 0x1A05ACu;
            goto label_1a05ac;
        }
    }
    ctx->pc = 0x1A05A4u;
label_1a05a4:
    // 0x1a05a4: 0x8ce801e0  lw          $t0, 0x1E0($a3)
    ctx->pc = 0x1a05a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 480)));
label_1a05a8:
    // 0x1a05a8: 0xad000028  sw          $zero, 0x28($t0)
    ctx->pc = 0x1a05a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
label_1a05ac:
    // 0x1a05ac: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x1a05acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_1a05b0:
    // 0x1a05b0: 0xdce30828  ld          $v1, 0x828($a3)
    ctx->pc = 0x1a05b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 2088)));
label_1a05b4:
    // 0x1a05b4: 0x8ce40150  lw          $a0, 0x150($a3)
    ctx->pc = 0x1a05b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 336)));
label_1a05b8:
    // 0x1a05b8: 0xfd030018  sd          $v1, 0x18($t0)
    ctx->pc = 0x1a05b8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 3));
label_1a05bc:
    // 0x1a05bc: 0xad04002c  sw          $a0, 0x2C($t0)
    ctx->pc = 0x1a05bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 4));
label_1a05c0:
    // 0x1a05c0: 0xdce30830  ld          $v1, 0x830($a3)
    ctx->pc = 0x1a05c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 2096)));
label_1a05c4:
    // 0x1a05c4: 0x8ce40174  lw          $a0, 0x174($a3)
    ctx->pc = 0x1a05c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
label_1a05c8:
    // 0x1a05c8: 0xfd030020  sd          $v1, 0x20($t0)
    ctx->pc = 0x1a05c8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 3));
label_1a05cc:
    // 0x1a05cc: 0xad040030  sw          $a0, 0x30($t0)
    ctx->pc = 0x1a05ccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 4));
label_1a05d0:
    // 0x1a05d0: 0x8ce3013c  lw          $v1, 0x13C($a3)
    ctx->pc = 0x1a05d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 316)));
label_1a05d4:
    // 0x1a05d4: 0xad030034  sw          $v1, 0x34($t0)
    ctx->pc = 0x1a05d4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 3));
label_1a05d8:
    // 0x1a05d8: 0x8ce40188  lw          $a0, 0x188($a3)
    ctx->pc = 0x1a05d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 392)));
label_1a05dc:
    // 0x1a05dc: 0xad040038  sw          $a0, 0x38($t0)
    ctx->pc = 0x1a05dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 56), GPR_U32(ctx, 4));
label_1a05e0:
    // 0x1a05e0: 0x8ce30178  lw          $v1, 0x178($a3)
    ctx->pc = 0x1a05e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 376)));
label_1a05e4:
    // 0x1a05e4: 0xad03003c  sw          $v1, 0x3C($t0)
    ctx->pc = 0x1a05e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 3));
label_1a05e8:
    // 0x1a05e8: 0x8ce40184  lw          $a0, 0x184($a3)
    ctx->pc = 0x1a05e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
label_1a05ec:
    // 0x1a05ec: 0xad040040  sw          $a0, 0x40($t0)
    ctx->pc = 0x1a05ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 64), GPR_U32(ctx, 4));
label_1a05f0:
    // 0x1a05f0: 0x8ce3018c  lw          $v1, 0x18C($a3)
    ctx->pc = 0x1a05f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 396)));
label_1a05f4:
    // 0x1a05f4: 0xad030044  sw          $v1, 0x44($t0)
    ctx->pc = 0x1a05f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 68), GPR_U32(ctx, 3));
label_1a05f8:
    // 0x1a05f8: 0x8ce40190  lw          $a0, 0x190($a3)
    ctx->pc = 0x1a05f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 400)));
label_1a05fc:
    // 0x1a05fc: 0xad040048  sw          $a0, 0x48($t0)
    ctx->pc = 0x1a05fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 72), GPR_U32(ctx, 4));
label_1a0600:
    // 0x1a0600: 0x8ce30194  lw          $v1, 0x194($a3)
    ctx->pc = 0x1a0600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 404)));
label_1a0604:
    // 0x1a0604: 0xad03004c  sw          $v1, 0x4C($t0)
    ctx->pc = 0x1a0604u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 76), GPR_U32(ctx, 3));
label_1a0608:
    // 0x1a0608: 0x8ce40198  lw          $a0, 0x198($a3)
    ctx->pc = 0x1a0608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 408)));
label_1a060c:
    // 0x1a060c: 0xad040050  sw          $a0, 0x50($t0)
    ctx->pc = 0x1a060cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 80), GPR_U32(ctx, 4));
label_1a0610:
    // 0x1a0610: 0x8ce3019c  lw          $v1, 0x19C($a3)
    ctx->pc = 0x1a0610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 412)));
label_1a0614:
    // 0x1a0614: 0xad030054  sw          $v1, 0x54($t0)
    ctx->pc = 0x1a0614u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 84), GPR_U32(ctx, 3));
label_1a0618:
    // 0x1a0618: 0x8ce401a0  lw          $a0, 0x1A0($a3)
    ctx->pc = 0x1a0618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 416)));
label_1a061c:
    // 0x1a061c: 0xad040058  sw          $a0, 0x58($t0)
    ctx->pc = 0x1a061cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 88), GPR_U32(ctx, 4));
label_1a0620:
    // 0x1a0620: 0x8ce30148  lw          $v1, 0x148($a3)
    ctx->pc = 0x1a0620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 328)));
label_1a0624:
    // 0x1a0624: 0xad03005c  sw          $v1, 0x5C($t0)
    ctx->pc = 0x1a0624u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 92), GPR_U32(ctx, 3));
label_1a0628:
    // 0x1a0628: 0x8ce4014c  lw          $a0, 0x14C($a3)
    ctx->pc = 0x1a0628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 332)));
label_1a062c:
    // 0x1a062c: 0x3e00008  jr          $ra
label_1a0630:
    if (ctx->pc == 0x1A0630u) {
        ctx->pc = 0x1A0630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A062Cu;
        // 0x1a0630: 0xad040060  sw          $a0, 0x60($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0634u;
        goto label_1a0634;
    }
    ctx->pc = 0x1A062Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A062Cu;
        // 0x1a0630: 0xad040060  sw          $a0, 0x60($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A062Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0634u;
label_1a0634:
    // 0x1a0634: 0x0  nop
    ctx->pc = 0x1a0634u;
    // NOP
label_1a0638:
    // 0x1a0638: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1a0638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_1a063c:
    // 0x1a063c: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x1a063cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
label_1a0640:
    // 0x1a0640: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x1a0640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
label_1a0644:
    // 0x1a0644: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a0644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a0648:
    // 0x1a0648: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x1a0648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
label_1a064c:
    // 0x1a064c: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x1a064cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_1a0650:
    // 0x1a0650: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_1a0654:
    if (ctx->pc == 0x1A0654u) {
        ctx->pc = 0x1A0654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0650u;
        // 0x1a0654: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0658u;
        goto label_1a0658;
    }
    ctx->pc = 0x1A0650u;
    {
        const bool branch_taken_0x1a0650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0650u;
        // 0x1a0654: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0650) {
            ctx->pc = 0x1A067Cu;
            goto label_1a067c;
        }
    }
    ctx->pc = 0x1A0658u;
label_1a0658:
    // 0x1a0658: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x1a0658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_1a065c:
    // 0x1a065c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1a065cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1a0660:
    // 0x1a0660: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1a0660u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a0664:
    // 0x1a0664: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1a0668:
    if (ctx->pc == 0x1A0668u) {
        ctx->pc = 0x1A0668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0664u;
        // 0x1a0668: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A066Cu;
        goto label_1a066c;
    }
    ctx->pc = 0x1A0664u;
    {
        const bool branch_taken_0x1a0664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0664u;
        // 0x1a0668: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0664) {
            ctx->pc = 0x1A0694u;
            { ctx->pc = 0x1a0694; return; }
        }
    }
    ctx->pc = 0x1A066Cu;
label_1a066c:
    // 0x1a066c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1a066cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1a0670:
    // 0x1a0670: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1a0670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a0674:
    // 0x1a0674: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a0678:
    if (ctx->pc == 0x1A0678u) {
        ctx->pc = 0x1A0678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0674u;
        // 0x1a0678: 0x38510001  xori        $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A067Cu;
        goto label_1a067c;
    }
    ctx->pc = 0x1A0674u;
    {
        const bool branch_taken_0x1a0674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0674u;
        // 0x1a0678: 0x38510001  xori        $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0674) {
            ctx->pc = 0x1A0694u;
            { ctx->pc = 0x1a0694; return; }
        }
    }
    ctx->pc = 0x1A067Cu;
label_1a067c:
    // 0x1a067c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1a067cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1a0680:
    // 0x1a0680: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x1a0680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_1a0684:
    // 0x1a0684: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x1a0684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_1a0688:
    // 0x1a0688: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1a0688u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1a068c:
    // 0x1a068c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1a068cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    ctx->pc = 0x1a0690u;
    return;
}
