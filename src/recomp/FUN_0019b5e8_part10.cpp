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


void FUN_0019b5e8_part10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x19fc38u: goto label_19fc38;
        case 0x19fc3cu: goto label_19fc3c;
        case 0x19fc40u: goto label_19fc40;
        case 0x19fc44u: goto label_19fc44;
        case 0x19fc48u: goto label_19fc48;
        case 0x19fc4cu: goto label_19fc4c;
        case 0x19fc50u: goto label_19fc50;
        case 0x19fc54u: goto label_19fc54;
        case 0x19fc58u: goto label_19fc58;
        case 0x19fc5cu: goto label_19fc5c;
        case 0x19fc60u: goto label_19fc60;
        case 0x19fc64u: goto label_19fc64;
        case 0x19fc68u: goto label_19fc68;
        case 0x19fc6cu: goto label_19fc6c;
        case 0x19fc70u: goto label_19fc70;
        case 0x19fc74u: goto label_19fc74;
        case 0x19fc78u: goto label_19fc78;
        case 0x19fc7cu: goto label_19fc7c;
        case 0x19fc80u: goto label_19fc80;
        case 0x19fc84u: goto label_19fc84;
        case 0x19fc88u: goto label_19fc88;
        case 0x19fc8cu: goto label_19fc8c;
        case 0x19fc90u: goto label_19fc90;
        case 0x19fc94u: goto label_19fc94;
        case 0x19fc98u: goto label_19fc98;
        case 0x19fc9cu: goto label_19fc9c;
        case 0x19fca0u: goto label_19fca0;
        case 0x19fca4u: goto label_19fca4;
        case 0x19fca8u: goto label_19fca8;
        case 0x19fcacu: goto label_19fcac;
        case 0x19fcb0u: goto label_19fcb0;
        case 0x19fcb4u: goto label_19fcb4;
        case 0x19fcb8u: goto label_19fcb8;
        case 0x19fcbcu: goto label_19fcbc;
        case 0x19fcc0u: goto label_19fcc0;
        case 0x19fcc4u: goto label_19fcc4;
        case 0x19fcc8u: goto label_19fcc8;
        case 0x19fcccu: goto label_19fccc;
        case 0x19fcd0u: goto label_19fcd0;
        case 0x19fcd4u: goto label_19fcd4;
        case 0x19fcd8u: goto label_19fcd8;
        case 0x19fcdcu: goto label_19fcdc;
        case 0x19fce0u: goto label_19fce0;
        case 0x19fce4u: goto label_19fce4;
        case 0x19fce8u: goto label_19fce8;
        case 0x19fcecu: goto label_19fcec;
        case 0x19fcf0u: goto label_19fcf0;
        case 0x19fcf4u: goto label_19fcf4;
        case 0x19fcf8u: goto label_19fcf8;
        case 0x19fcfcu: goto label_19fcfc;
        case 0x19fd00u: goto label_19fd00;
        case 0x19fd04u: goto label_19fd04;
        case 0x19fd08u: goto label_19fd08;
        case 0x19fd0cu: goto label_19fd0c;
        case 0x19fd10u: goto label_19fd10;
        case 0x19fd14u: goto label_19fd14;
        case 0x19fd18u: goto label_19fd18;
        case 0x19fd1cu: goto label_19fd1c;
        case 0x19fd20u: goto label_19fd20;
        case 0x19fd24u: goto label_19fd24;
        case 0x19fd28u: goto label_19fd28;
        case 0x19fd2cu: goto label_19fd2c;
        case 0x19fd30u: goto label_19fd30;
        case 0x19fd34u: goto label_19fd34;
        case 0x19fd38u: goto label_19fd38;
        case 0x19fd3cu: goto label_19fd3c;
        case 0x19fd40u: goto label_19fd40;
        case 0x19fd44u: goto label_19fd44;
        case 0x19fd48u: goto label_19fd48;
        case 0x19fd4cu: goto label_19fd4c;
        case 0x19fd50u: goto label_19fd50;
        case 0x19fd54u: goto label_19fd54;
        case 0x19fd58u: goto label_19fd58;
        case 0x19fd5cu: goto label_19fd5c;
        case 0x19fd60u: goto label_19fd60;
        case 0x19fd64u: goto label_19fd64;
        case 0x19fd68u: goto label_19fd68;
        case 0x19fd6cu: goto label_19fd6c;
        case 0x19fd70u: goto label_19fd70;
        case 0x19fd74u: goto label_19fd74;
        case 0x19fd78u: goto label_19fd78;
        case 0x19fd7cu: goto label_19fd7c;
        case 0x19fd80u: goto label_19fd80;
        case 0x19fd84u: goto label_19fd84;
        case 0x19fd88u: goto label_19fd88;
        case 0x19fd8cu: goto label_19fd8c;
        case 0x19fd90u: goto label_19fd90;
        case 0x19fd94u: goto label_19fd94;
        case 0x19fd98u: goto label_19fd98;
        case 0x19fd9cu: goto label_19fd9c;
        case 0x19fda0u: goto label_19fda0;
        case 0x19fda4u: goto label_19fda4;
        case 0x19fda8u: goto label_19fda8;
        case 0x19fdacu: goto label_19fdac;
        case 0x19fdb0u: goto label_19fdb0;
        case 0x19fdb4u: goto label_19fdb4;
        case 0x19fdb8u: goto label_19fdb8;
        case 0x19fdbcu: goto label_19fdbc;
        case 0x19fdc0u: goto label_19fdc0;
        case 0x19fdc4u: goto label_19fdc4;
        case 0x19fdc8u: goto label_19fdc8;
        case 0x19fdccu: goto label_19fdcc;
        case 0x19fdd0u: goto label_19fdd0;
        case 0x19fdd4u: goto label_19fdd4;
        case 0x19fdd8u: goto label_19fdd8;
        case 0x19fddcu: goto label_19fddc;
        case 0x19fde0u: goto label_19fde0;
        case 0x19fde4u: goto label_19fde4;
        case 0x19fde8u: goto label_19fde8;
        case 0x19fdecu: goto label_19fdec;
        case 0x19fdf0u: goto label_19fdf0;
        case 0x19fdf4u: goto label_19fdf4;
        case 0x19fdf8u: goto label_19fdf8;
        case 0x19fdfcu: goto label_19fdfc;
        case 0x19fe00u: goto label_19fe00;
        case 0x19fe04u: goto label_19fe04;
        case 0x19fe08u: goto label_19fe08;
        case 0x19fe0cu: goto label_19fe0c;
        case 0x19fe10u: goto label_19fe10;
        case 0x19fe14u: goto label_19fe14;
        case 0x19fe18u: goto label_19fe18;
        case 0x19fe1cu: goto label_19fe1c;
        case 0x19fe20u: goto label_19fe20;
        case 0x19fe24u: goto label_19fe24;
        case 0x19fe28u: goto label_19fe28;
        case 0x19fe2cu: goto label_19fe2c;
        case 0x19fe30u: goto label_19fe30;
        case 0x19fe34u: goto label_19fe34;
        case 0x19fe38u: goto label_19fe38;
        case 0x19fe3cu: goto label_19fe3c;
        case 0x19fe40u: goto label_19fe40;
        case 0x19fe44u: goto label_19fe44;
        case 0x19fe48u: goto label_19fe48;
        case 0x19fe4cu: goto label_19fe4c;
        case 0x19fe50u: goto label_19fe50;
        case 0x19fe54u: goto label_19fe54;
        case 0x19fe58u: goto label_19fe58;
        case 0x19fe5cu: goto label_19fe5c;
        case 0x19fe60u: goto label_19fe60;
        case 0x19fe64u: goto label_19fe64;
        case 0x19fe68u: goto label_19fe68;
        case 0x19fe6cu: goto label_19fe6c;
        case 0x19fe70u: goto label_19fe70;
        case 0x19fe74u: goto label_19fe74;
        case 0x19fe78u: goto label_19fe78;
        case 0x19fe7cu: goto label_19fe7c;
        case 0x19fe80u: goto label_19fe80;
        case 0x19fe84u: goto label_19fe84;
        case 0x19fe88u: goto label_19fe88;
        case 0x19fe8cu: goto label_19fe8c;
        case 0x19fe90u: goto label_19fe90;
        case 0x19fe94u: goto label_19fe94;
        case 0x19fe98u: goto label_19fe98;
        case 0x19fe9cu: goto label_19fe9c;
        case 0x19fea0u: goto label_19fea0;
        case 0x19fea4u: goto label_19fea4;
        case 0x19fea8u: goto label_19fea8;
        case 0x19feacu: goto label_19feac;
        case 0x19feb0u: goto label_19feb0;
        case 0x19feb4u: goto label_19feb4;
        case 0x19feb8u: goto label_19feb8;
        case 0x19febcu: goto label_19febc;
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
        default: return;
    }

label_19fc38:
    // 0x19fc38: 0xc067d96  jal         func_19F658
label_19fc3c:
    if (ctx->pc == 0x19FC3Cu) {
        ctx->pc = 0x19FC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC38u;
        // 0x19fc3c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC40u;
        goto label_19fc40;
    }
    ctx->pc = 0x19FC38u;
    SET_GPR_U32(ctx, 31, 0x19FC40u);
    ctx->pc = 0x19FC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FC38u;
    // 0x19fc3c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F658u;
    { ctx->pc = 0x19f658; return; }
    ctx->pc = 0x19FC40u;
label_19fc40:
    // 0x19fc40: 0xc067e26  jal         func_19F898
label_19fc44:
    if (ctx->pc == 0x19FC44u) {
        ctx->pc = 0x19FC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC40u;
        // 0x19fc44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC48u;
        goto label_19fc48;
    }
    ctx->pc = 0x19FC40u;
    SET_GPR_U32(ctx, 31, 0x19FC48u);
    ctx->pc = 0x19FC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FC40u;
    // 0x19fc44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F898u;
    { ctx->pc = 0x19f898; return; }
    ctx->pc = 0x19FC48u;
label_19fc48:
    // 0x19fc48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fc4c:
    // 0x19fc4c: 0xc067d54  jal         func_19F550
label_19fc50:
    if (ctx->pc == 0x19FC50u) {
        ctx->pc = 0x19FC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC4Cu;
        // 0x19fc50: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC54u;
        goto label_19fc54;
    }
    ctx->pc = 0x19FC4Cu;
    SET_GPR_U32(ctx, 31, 0x19FC54u);
    ctx->pc = 0x19FC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FC4Cu;
    // 0x19fc50: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F550u;
    { ctx->pc = 0x19f550; return; }
    ctx->pc = 0x19FC54u;
label_19fc54:
    // 0x19fc54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fc58:
    // 0x19fc58: 0x1051ffe7  beq         $v0, $s1, . + 4 + (-0x19 << 2)
label_19fc5c:
    if (ctx->pc == 0x19FC5Cu) {
        ctx->pc = 0x19FC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC58u;
        // 0x19fc5c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC60u;
        goto label_19fc60;
    }
    ctx->pc = 0x19FC58u;
    {
        const bool branch_taken_0x19fc58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x19FC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC58u;
        // 0x19fc5c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc58) {
            ctx->pc = 0x19FBF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x19fbf8; return; }
        }
    }
    ctx->pc = 0x19FC60u;
label_19fc60:
    // 0x19fc60: 0x1053ffe3  beq         $v0, $s3, . + 4 + (-0x1D << 2)
label_19fc64:
    if (ctx->pc == 0x19FC64u) {
        ctx->pc = 0x19FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC60u;
        // 0x19fc64: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC68u;
        goto label_19fc68;
    }
    ctx->pc = 0x19FC60u;
    {
        const bool branch_taken_0x19fc60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x19FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC60u;
        // 0x19fc64: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc60) {
            ctx->pc = 0x19FBF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x19fbf0; return; }
        }
    }
    ctx->pc = 0x19FC68u;
label_19fc68:
    // 0x19fc68: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x19fc68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_19fc6c:
    // 0x19fc6c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x19fc6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19fc70:
    // 0x19fc70: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x19fc70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19fc74:
    // 0x19fc74: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x19fc74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19fc78:
    // 0x19fc78: 0x3e00008  jr          $ra
label_19fc7c:
    if (ctx->pc == 0x19FC7Cu) {
        ctx->pc = 0x19FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC78u;
        // 0x19fc7c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC80u;
        goto label_19fc80;
    }
    ctx->pc = 0x19FC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC78u;
        // 0x19fc7c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FC80u;
label_19fc80:
    // 0x19fc80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19fc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_19fc84:
    // 0x19fc84: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19fc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19fc88:
    // 0x19fc88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19fc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19fc8c:
    // 0x19fc8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19fc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19fc90:
    // 0x19fc90: 0xc067dd2  jal         func_19F748
label_19fc94:
    if (ctx->pc == 0x19FC94u) {
        ctx->pc = 0x19FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC90u;
        // 0x19fc94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC98u;
        goto label_19fc98;
    }
    ctx->pc = 0x19FC90u;
    SET_GPR_U32(ctx, 31, 0x19FC98u);
    ctx->pc = 0x19FC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FC90u;
    // 0x19fc94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FC98u;
label_19fc98:
    // 0x19fc98: 0xae020164  sw          $v0, 0x164($s0)
    ctx->pc = 0x19fc98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 2));
label_19fc9c:
    // 0x19fc9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fca0:
    // 0x19fca0: 0xc067dd2  jal         func_19F748
label_19fca4:
    if (ctx->pc == 0x19FCA4u) {
        ctx->pc = 0x19FCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCA0u;
        // 0x19fca4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FCA8u;
        goto label_19fca8;
    }
    ctx->pc = 0x19FCA0u;
    SET_GPR_U32(ctx, 31, 0x19FCA8u);
    ctx->pc = 0x19FCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FCA0u;
    // 0x19fca4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FCA8u;
label_19fca8:
    // 0x19fca8: 0xae020168  sw          $v0, 0x168($s0)
    ctx->pc = 0x19fca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 2));
label_19fcac:
    // 0x19fcac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fcacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fcb0:
    // 0x19fcb0: 0xc067dd2  jal         func_19F748
label_19fcb4:
    if (ctx->pc == 0x19FCB4u) {
        ctx->pc = 0x19FCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCB0u;
        // 0x19fcb4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FCB8u;
        goto label_19fcb8;
    }
    ctx->pc = 0x19FCB0u;
    SET_GPR_U32(ctx, 31, 0x19FCB8u);
    ctx->pc = 0x19FCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FCB0u;
    // 0x19fcb4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FCB8u;
label_19fcb8:
    // 0x19fcb8: 0xae02016c  sw          $v0, 0x16C($s0)
    ctx->pc = 0x19fcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 2));
label_19fcbc:
    // 0x19fcbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fcbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fcc0:
    // 0x19fcc0: 0xc067dd2  jal         func_19F748
label_19fcc4:
    if (ctx->pc == 0x19FCC4u) {
        ctx->pc = 0x19FCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCC0u;
        // 0x19fcc4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FCC8u;
        goto label_19fcc8;
    }
    ctx->pc = 0x19FCC0u;
    SET_GPR_U32(ctx, 31, 0x19FCC8u);
    ctx->pc = 0x19FCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FCC0u;
    // 0x19fcc4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FCC8u;
label_19fcc8:
    // 0x19fcc8: 0xae020170  sw          $v0, 0x170($s0)
    ctx->pc = 0x19fcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 2));
label_19fccc:
    // 0x19fccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fcccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fcd0:
    // 0x19fcd0: 0xc067dd2  jal         func_19F748
label_19fcd4:
    if (ctx->pc == 0x19FCD4u) {
        ctx->pc = 0x19FCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCD0u;
        // 0x19fcd4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FCD8u;
        goto label_19fcd8;
    }
    ctx->pc = 0x19FCD0u;
    SET_GPR_U32(ctx, 31, 0x19FCD8u);
    ctx->pc = 0x19FCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FCD0u;
    // 0x19fcd4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FCD8u;
label_19fcd8:
    // 0x19fcd8: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x19fcd8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
label_19fcdc:
    // 0x19fcdc: 0x3c06fffc  lui         $a2, 0xFFFC
    ctx->pc = 0x19fcdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65532 << 16));
label_19fce0:
    // 0x19fce0: 0x34e72010  ori         $a3, $a3, 0x2010
    ctx->pc = 0x19fce0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8208);
label_19fce4:
    // 0x19fce4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x19fce4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_19fce8:
    // 0x19fce8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x19fce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_19fcec:
    // 0x19fcec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x19fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_19fcf0:
    // 0x19fcf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fcf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fcf4:
    // 0x19fcf4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19fcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19fcf8:
    // 0x19fcf8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x19fcf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_19fcfc:
    // 0x19fcfc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x19fcfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_19fd00:
    // 0x19fd00: 0xc067dd2  jal         func_19F748
label_19fd04:
    if (ctx->pc == 0x19FD04u) {
        ctx->pc = 0x19FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD00u;
        // 0x19fd04: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FD08u;
        goto label_19fd08;
    }
    ctx->pc = 0x19FD00u;
    SET_GPR_U32(ctx, 31, 0x19FD08u);
    ctx->pc = 0x19FD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FD00u;
    // 0x19fd04: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FD08u;
label_19fd08:
    // 0x19fd08: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19fd08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19fd0c:
    // 0x19fd0c: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x19fd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_19fd10:
    // 0x19fd10: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_19fd14:
    if (ctx->pc == 0x19FD14u) {
        ctx->pc = 0x19FD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD10u;
        // 0x19fd14: 0xae030174  sw          $v1, 0x174($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FD18u;
        goto label_19fd18;
    }
    ctx->pc = 0x19FD10u;
    {
        const bool branch_taken_0x19fd10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD10u;
        // 0x19fd14: 0xae030174  sw          $v1, 0x174($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd10) {
            ctx->pc = 0x19FD1Cu;
            goto label_19fd1c;
        }
    }
    ctx->pc = 0x19FD18u;
label_19fd18:
    // 0x19fd18: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x19fd18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
label_19fd1c:
    // 0x19fd1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fd1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fd20:
    // 0x19fd20: 0xc067dd2  jal         func_19F748
label_19fd24:
    if (ctx->pc == 0x19FD24u) {
        ctx->pc = 0x19FD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD20u;
        // 0x19fd24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FD28u;
        goto label_19fd28;
    }
    ctx->pc = 0x19FD20u;
    SET_GPR_U32(ctx, 31, 0x19FD28u);
    ctx->pc = 0x19FD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FD20u;
    // 0x19fd24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FD28u;
label_19fd28:
    // 0x19fd28: 0xae020178  sw          $v0, 0x178($s0)
    ctx->pc = 0x19fd28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 2));
label_19fd2c:
    // 0x19fd2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fd2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fd30:
    // 0x19fd30: 0xc067dd2  jal         func_19F748
label_19fd34:
    if (ctx->pc == 0x19FD34u) {
        ctx->pc = 0x19FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD30u;
        // 0x19fd34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FD38u;
        goto label_19fd38;
    }
    ctx->pc = 0x19FD30u;
    SET_GPR_U32(ctx, 31, 0x19FD38u);
    ctx->pc = 0x19FD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FD30u;
    // 0x19fd34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FD38u;
label_19fd38:
    // 0x19fd38: 0xae02017c  sw          $v0, 0x17C($s0)
    ctx->pc = 0x19fd38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 2));
label_19fd3c:
    // 0x19fd3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fd40:
    // 0x19fd40: 0xc067dd2  jal         func_19F748
label_19fd44:
    if (ctx->pc == 0x19FD44u) {
        ctx->pc = 0x19FD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD40u;
        // 0x19fd44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FD48u;
        goto label_19fd48;
    }
    ctx->pc = 0x19FD40u;
    SET_GPR_U32(ctx, 31, 0x19FD48u);
    ctx->pc = 0x19FD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FD40u;
    // 0x19fd44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FD48u;
label_19fd48:
    // 0x19fd48: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x19fd48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
label_19fd4c:
    // 0x19fd4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fd4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fd50:
    // 0x19fd50: 0xc067dd2  jal         func_19F748
label_19fd54:
    if (ctx->pc == 0x19FD54u) {
        ctx->pc = 0x19FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD50u;
        // 0x19fd54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FD58u;
        goto label_19fd58;
    }
    ctx->pc = 0x19FD50u;
    SET_GPR_U32(ctx, 31, 0x19FD58u);
    ctx->pc = 0x19FD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FD50u;
    // 0x19fd54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FD58u;
label_19fd58:
    // 0x19fd58: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x19fd58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_19fd5c:
    // 0x19fd5c: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x19fd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8208)));
label_19fd60:
    // 0x19fd60: 0x3c03ffbf  lui         $v1, 0xFFBF
    ctx->pc = 0x19fd60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65471 << 16));
label_19fd64:
    // 0x19fd64: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x19fd64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_19fd68:
    // 0x19fd68: 0x21580  sll         $v0, $v0, 22
    ctx->pc = 0x19fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 22));
label_19fd6c:
    // 0x19fd6c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x19fd6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_19fd70:
    // 0x19fd70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fd74:
    // 0x19fd74: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x19fd74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_19fd78:
    // 0x19fd78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19fd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19fd7c:
    // 0x19fd7c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x19fd7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
label_19fd80:
    // 0x19fd80: 0xc067dd2  jal         func_19F748
label_19fd84:
    if (ctx->pc == 0x19FD84u) {
        ctx->pc = 0x19FD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD80u;
        // 0x19fd84: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FD88u;
        goto label_19fd88;
    }
    ctx->pc = 0x19FD80u;
    SET_GPR_U32(ctx, 31, 0x19FD88u);
    ctx->pc = 0x19FD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FD80u;
    // 0x19fd84: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FD88u;
label_19fd88:
    // 0x19fd88: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x19fd88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_19fd8c:
    // 0x19fd8c: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x19fd8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8208)));
label_19fd90:
    // 0x19fd90: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x19fd90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
label_19fd94:
    // 0x19fd94: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x19fd94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_19fd98:
    // 0x19fd98: 0x21540  sll         $v0, $v0, 21
    ctx->pc = 0x19fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 21));
label_19fd9c:
    // 0x19fd9c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x19fd9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_19fda0:
    // 0x19fda0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fda4:
    // 0x19fda4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x19fda4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_19fda8:
    // 0x19fda8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19fda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19fdac:
    // 0x19fdac: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x19fdacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
label_19fdb0:
    // 0x19fdb0: 0xc067dd2  jal         func_19F748
label_19fdb4:
    if (ctx->pc == 0x19FDB4u) {
        ctx->pc = 0x19FDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDB0u;
        // 0x19fdb4: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FDB8u;
        goto label_19fdb8;
    }
    ctx->pc = 0x19FDB0u;
    SET_GPR_U32(ctx, 31, 0x19FDB8u);
    ctx->pc = 0x19FDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FDB0u;
    // 0x19fdb4: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FDB8u;
label_19fdb8:
    // 0x19fdb8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x19fdb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_19fdbc:
    // 0x19fdbc: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x19fdbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8208)));
label_19fdc0:
    // 0x19fdc0: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x19fdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
label_19fdc4:
    // 0x19fdc4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x19fdc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_19fdc8:
    // 0x19fdc8: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x19fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
label_19fdcc:
    // 0x19fdcc: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x19fdccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_19fdd0:
    // 0x19fdd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fdd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fdd4:
    // 0x19fdd4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x19fdd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_19fdd8:
    // 0x19fdd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19fdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19fddc:
    // 0x19fddc: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x19fddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
label_19fde0:
    // 0x19fde0: 0xc067dd2  jal         func_19F748
label_19fde4:
    if (ctx->pc == 0x19FDE4u) {
        ctx->pc = 0x19FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDE0u;
        // 0x19fde4: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FDE8u;
        goto label_19fde8;
    }
    ctx->pc = 0x19FDE0u;
    SET_GPR_U32(ctx, 31, 0x19FDE8u);
    ctx->pc = 0x19FDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FDE0u;
    // 0x19fde4: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FDE8u;
label_19fde8:
    // 0x19fde8: 0xae020184  sw          $v0, 0x184($s0)
    ctx->pc = 0x19fde8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
label_19fdec:
    // 0x19fdec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fdf0:
    // 0x19fdf0: 0xc067dd2  jal         func_19F748
label_19fdf4:
    if (ctx->pc == 0x19FDF4u) {
        ctx->pc = 0x19FDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDF0u;
        // 0x19fdf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FDF8u;
        goto label_19fdf8;
    }
    ctx->pc = 0x19FDF0u;
    SET_GPR_U32(ctx, 31, 0x19FDF8u);
    ctx->pc = 0x19FDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FDF0u;
    // 0x19fdf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FDF8u;
label_19fdf8:
    // 0x19fdf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fdf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fdfc:
    // 0x19fdfc: 0xc067dd2  jal         func_19F748
label_19fe00:
    if (ctx->pc == 0x19FE00u) {
        ctx->pc = 0x19FE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDFCu;
        // 0x19fe00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FE04u;
        goto label_19fe04;
    }
    ctx->pc = 0x19FDFCu;
    SET_GPR_U32(ctx, 31, 0x19FE04u);
    ctx->pc = 0x19FE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FDFCu;
    // 0x19fe00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FE04u;
label_19fe04:
    // 0x19fe04: 0xae020188  sw          $v0, 0x188($s0)
    ctx->pc = 0x19fe04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 2));
label_19fe08:
    // 0x19fe08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fe08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fe0c:
    // 0x19fe0c: 0xc067dd2  jal         func_19F748
label_19fe10:
    if (ctx->pc == 0x19FE10u) {
        ctx->pc = 0x19FE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE0Cu;
        // 0x19fe10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FE14u;
        goto label_19fe14;
    }
    ctx->pc = 0x19FE0Cu;
    SET_GPR_U32(ctx, 31, 0x19FE14u);
    ctx->pc = 0x19FE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FE0Cu;
    // 0x19fe10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FE14u;
label_19fe14:
    // 0x19fe14: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_19fe18:
    if (ctx->pc == 0x19FE18u) {
        ctx->pc = 0x19FE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE14u;
        // 0x19fe18: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FE1Cu;
        goto label_19fe1c;
    }
    ctx->pc = 0x19FE14u;
    {
        const bool branch_taken_0x19fe14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE14u;
        // 0x19fe18: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe14) {
            ctx->pc = 0x19FE64u;
            goto label_19fe64;
        }
    }
    ctx->pc = 0x19FE1Cu;
label_19fe1c:
    // 0x19fe1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fe1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fe20:
    // 0x19fe20: 0xc067dd2  jal         func_19F748
label_19fe24:
    if (ctx->pc == 0x19FE24u) {
        ctx->pc = 0x19FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE20u;
        // 0x19fe24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FE28u;
        goto label_19fe28;
    }
    ctx->pc = 0x19FE20u;
    SET_GPR_U32(ctx, 31, 0x19FE28u);
    ctx->pc = 0x19FE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FE20u;
    // 0x19fe24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FE28u;
label_19fe28:
    // 0x19fe28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fe28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fe2c:
    // 0x19fe2c: 0xc067dd2  jal         func_19F748
label_19fe30:
    if (ctx->pc == 0x19FE30u) {
        ctx->pc = 0x19FE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE2Cu;
        // 0x19fe30: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FE34u;
        goto label_19fe34;
    }
    ctx->pc = 0x19FE2Cu;
    SET_GPR_U32(ctx, 31, 0x19FE34u);
    ctx->pc = 0x19FE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FE2Cu;
    // 0x19fe30: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FE34u;
label_19fe34:
    // 0x19fe34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fe34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fe38:
    // 0x19fe38: 0xc067dd2  jal         func_19F748
label_19fe3c:
    if (ctx->pc == 0x19FE3Cu) {
        ctx->pc = 0x19FE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE38u;
        // 0x19fe3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FE40u;
        goto label_19fe40;
    }
    ctx->pc = 0x19FE38u;
    SET_GPR_U32(ctx, 31, 0x19FE40u);
    ctx->pc = 0x19FE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FE38u;
    // 0x19fe3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FE40u;
label_19fe40:
    // 0x19fe40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fe40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fe44:
    // 0x19fe44: 0xc067dd2  jal         func_19F748
label_19fe48:
    if (ctx->pc == 0x19FE48u) {
        ctx->pc = 0x19FE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE44u;
        // 0x19fe48: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FE4Cu;
        goto label_19fe4c;
    }
    ctx->pc = 0x19FE44u;
    SET_GPR_U32(ctx, 31, 0x19FE4Cu);
    ctx->pc = 0x19FE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FE44u;
    // 0x19fe48: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FE4Cu;
label_19fe4c:
    // 0x19fe4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fe4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fe50:
    // 0x19fe50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19fe50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19fe54:
    // 0x19fe54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19fe54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19fe58:
    // 0x19fe58: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x19fe58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_19fe5c:
    // 0x19fe5c: 0x8067dd2  j           func_19F748
label_19fe60:
    if (ctx->pc == 0x19FE60u) {
        ctx->pc = 0x19FE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE5Cu;
        // 0x19fe60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FE64u;
        goto label_19fe64;
    }
    ctx->pc = 0x19FE5Cu;
    ctx->pc = 0x19FE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FE5Cu;
    // 0x19fe60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FE64u;
label_19fe64:
    // 0x19fe64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19fe64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19fe68:
    // 0x19fe68: 0x3e00008  jr          $ra
label_19fe6c:
    if (ctx->pc == 0x19FE6Cu) {
        ctx->pc = 0x19FE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE68u;
        // 0x19fe6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FE70u;
        goto label_19fe70;
    }
    ctx->pc = 0x19FE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE68u;
        // 0x19fe6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FE70u;
label_19fe70:
    // 0x19fe70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19fe70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_19fe74:
    // 0x19fe74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19fe74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19fe78:
    // 0x19fe78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19fe78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19fe7c:
    // 0x19fe7c: 0x10000004  b           . + 4 + (0x4 << 2)
label_19fe80:
    if (ctx->pc == 0x19FE80u) {
        ctx->pc = 0x19FE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE7Cu;
        // 0x19fe80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FE84u;
        goto label_19fe84;
    }
    ctx->pc = 0x19FE7Cu;
    {
        const bool branch_taken_0x19fe7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE7Cu;
        // 0x19fe80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe7c) {
            ctx->pc = 0x19FE90u;
            goto label_19fe90;
        }
    }
    ctx->pc = 0x19FE84u;
label_19fe84:
    // 0x19fe84: 0x0  nop
    ctx->pc = 0x19fe84u;
    // NOP
label_19fe88:
    // 0x19fe88: 0xc067d96  jal         func_19F658
label_19fe8c:
    if (ctx->pc == 0x19FE8Cu) {
        ctx->pc = 0x19FE90u;
        goto label_19fe90;
    }
    ctx->pc = 0x19FE88u;
    SET_GPR_U32(ctx, 31, 0x19FE90u);
    ctx->pc = 0x19F658u;
    { ctx->pc = 0x19f658; return; }
    ctx->pc = 0x19FE90u;
label_19fe90:
    // 0x19fe90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fe90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fe94:
    // 0x19fe94: 0xc067dd2  jal         func_19F748
label_19fe98:
    if (ctx->pc == 0x19FE98u) {
        ctx->pc = 0x19FE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE94u;
        // 0x19fe98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FE9Cu;
        goto label_19fe9c;
    }
    ctx->pc = 0x19FE94u;
    SET_GPR_U32(ctx, 31, 0x19FE9Cu);
    ctx->pc = 0x19FE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FE94u;
    // 0x19fe98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FE9Cu;
label_19fe9c:
    // 0x19fe9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fe9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fea0:
    // 0x19fea0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_19fea4:
    if (ctx->pc == 0x19FEA4u) {
        ctx->pc = 0x19FEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FEA0u;
        // 0x19fea4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FEA8u;
        goto label_19fea8;
    }
    ctx->pc = 0x19FEA0u;
    {
        const bool branch_taken_0x19fea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FEA0u;
        // 0x19fea4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fea0) {
            ctx->pc = 0x19FE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19fe88;
        }
    }
    ctx->pc = 0x19FEA8u;
label_19fea8:
    // 0x19fea8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19fea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19feac:
    // 0x19feac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19feacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19feb0:
    // 0x19feb0: 0x3e00008  jr          $ra
label_19feb4:
    if (ctx->pc == 0x19FEB4u) {
        ctx->pc = 0x19FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FEB0u;
        // 0x19feb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FEB8u;
        goto label_19feb8;
    }
    ctx->pc = 0x19FEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FEB0u;
        // 0x19feb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FEB8u;
label_19feb8:
    // 0x19feb8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x19feb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19febc:
    // 0x19febc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19febcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
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
            { ctx->pc = 0x1a04b8; return; }
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
            { ctx->pc = 0x1a0428; return; }
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
        { ctx->pc = 0x1a0408; return; }
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
            { ctx->pc = 0x1a0428; return; }
        }
    }
    ctx->pc = 0x1A0408u;
    ctx->pc = 0x1a0408u;
    return;
}
