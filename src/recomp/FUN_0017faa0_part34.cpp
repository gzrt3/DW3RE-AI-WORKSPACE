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


void FUN_0017faa0_part34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x18fc70u: goto label_18fc70;
        case 0x18fc74u: goto label_18fc74;
        case 0x18fc78u: goto label_18fc78;
        case 0x18fc7cu: goto label_18fc7c;
        case 0x18fc80u: goto label_18fc80;
        case 0x18fc84u: goto label_18fc84;
        case 0x18fc88u: goto label_18fc88;
        case 0x18fc8cu: goto label_18fc8c;
        case 0x18fc90u: goto label_18fc90;
        case 0x18fc94u: goto label_18fc94;
        case 0x18fc98u: goto label_18fc98;
        case 0x18fc9cu: goto label_18fc9c;
        case 0x18fca0u: goto label_18fca0;
        case 0x18fca4u: goto label_18fca4;
        case 0x18fca8u: goto label_18fca8;
        case 0x18fcacu: goto label_18fcac;
        case 0x18fcb0u: goto label_18fcb0;
        case 0x18fcb4u: goto label_18fcb4;
        case 0x18fcb8u: goto label_18fcb8;
        case 0x18fcbcu: goto label_18fcbc;
        case 0x18fcc0u: goto label_18fcc0;
        case 0x18fcc4u: goto label_18fcc4;
        case 0x18fcc8u: goto label_18fcc8;
        case 0x18fcccu: goto label_18fccc;
        case 0x18fcd0u: goto label_18fcd0;
        case 0x18fcd4u: goto label_18fcd4;
        case 0x18fcd8u: goto label_18fcd8;
        case 0x18fcdcu: goto label_18fcdc;
        case 0x18fce0u: goto label_18fce0;
        case 0x18fce4u: goto label_18fce4;
        case 0x18fce8u: goto label_18fce8;
        case 0x18fcecu: goto label_18fcec;
        case 0x18fcf0u: goto label_18fcf0;
        case 0x18fcf4u: goto label_18fcf4;
        case 0x18fcf8u: goto label_18fcf8;
        case 0x18fcfcu: goto label_18fcfc;
        case 0x18fd00u: goto label_18fd00;
        case 0x18fd04u: goto label_18fd04;
        case 0x18fd08u: goto label_18fd08;
        case 0x18fd0cu: goto label_18fd0c;
        case 0x18fd10u: goto label_18fd10;
        case 0x18fd14u: goto label_18fd14;
        case 0x18fd18u: goto label_18fd18;
        case 0x18fd1cu: goto label_18fd1c;
        case 0x18fd20u: goto label_18fd20;
        case 0x18fd24u: goto label_18fd24;
        case 0x18fd28u: goto label_18fd28;
        case 0x18fd2cu: goto label_18fd2c;
        case 0x18fd30u: goto label_18fd30;
        case 0x18fd34u: goto label_18fd34;
        case 0x18fd38u: goto label_18fd38;
        case 0x18fd3cu: goto label_18fd3c;
        case 0x18fd40u: goto label_18fd40;
        case 0x18fd44u: goto label_18fd44;
        case 0x18fd48u: goto label_18fd48;
        case 0x18fd4cu: goto label_18fd4c;
        case 0x18fd50u: goto label_18fd50;
        case 0x18fd54u: goto label_18fd54;
        case 0x18fd58u: goto label_18fd58;
        case 0x18fd5cu: goto label_18fd5c;
        case 0x18fd60u: goto label_18fd60;
        case 0x18fd64u: goto label_18fd64;
        case 0x18fd68u: goto label_18fd68;
        case 0x18fd6cu: goto label_18fd6c;
        case 0x18fd70u: goto label_18fd70;
        case 0x18fd74u: goto label_18fd74;
        case 0x18fd78u: goto label_18fd78;
        case 0x18fd7cu: goto label_18fd7c;
        case 0x18fd80u: goto label_18fd80;
        case 0x18fd84u: goto label_18fd84;
        case 0x18fd88u: goto label_18fd88;
        case 0x18fd8cu: goto label_18fd8c;
        case 0x18fd90u: goto label_18fd90;
        case 0x18fd94u: goto label_18fd94;
        case 0x18fd98u: goto label_18fd98;
        case 0x18fd9cu: goto label_18fd9c;
        case 0x18fda0u: goto label_18fda0;
        case 0x18fda4u: goto label_18fda4;
        case 0x18fda8u: goto label_18fda8;
        case 0x18fdacu: goto label_18fdac;
        case 0x18fdb0u: goto label_18fdb0;
        case 0x18fdb4u: goto label_18fdb4;
        case 0x18fdb8u: goto label_18fdb8;
        case 0x18fdbcu: goto label_18fdbc;
        case 0x18fdc0u: goto label_18fdc0;
        case 0x18fdc4u: goto label_18fdc4;
        case 0x18fdc8u: goto label_18fdc8;
        case 0x18fdccu: goto label_18fdcc;
        case 0x18fdd0u: goto label_18fdd0;
        case 0x18fdd4u: goto label_18fdd4;
        case 0x18fdd8u: goto label_18fdd8;
        case 0x18fddcu: goto label_18fddc;
        case 0x18fde0u: goto label_18fde0;
        case 0x18fde4u: goto label_18fde4;
        case 0x18fde8u: goto label_18fde8;
        case 0x18fdecu: goto label_18fdec;
        case 0x18fdf0u: goto label_18fdf0;
        case 0x18fdf4u: goto label_18fdf4;
        case 0x18fdf8u: goto label_18fdf8;
        case 0x18fdfcu: goto label_18fdfc;
        case 0x18fe00u: goto label_18fe00;
        case 0x18fe04u: goto label_18fe04;
        case 0x18fe08u: goto label_18fe08;
        case 0x18fe0cu: goto label_18fe0c;
        case 0x18fe10u: goto label_18fe10;
        case 0x18fe14u: goto label_18fe14;
        case 0x18fe18u: goto label_18fe18;
        case 0x18fe1cu: goto label_18fe1c;
        case 0x18fe20u: goto label_18fe20;
        case 0x18fe24u: goto label_18fe24;
        case 0x18fe28u: goto label_18fe28;
        case 0x18fe2cu: goto label_18fe2c;
        case 0x18fe30u: goto label_18fe30;
        case 0x18fe34u: goto label_18fe34;
        case 0x18fe38u: goto label_18fe38;
        case 0x18fe3cu: goto label_18fe3c;
        case 0x18fe40u: goto label_18fe40;
        case 0x18fe44u: goto label_18fe44;
        case 0x18fe48u: goto label_18fe48;
        case 0x18fe4cu: goto label_18fe4c;
        case 0x18fe50u: goto label_18fe50;
        case 0x18fe54u: goto label_18fe54;
        case 0x18fe58u: goto label_18fe58;
        case 0x18fe5cu: goto label_18fe5c;
        case 0x18fe60u: goto label_18fe60;
        case 0x18fe64u: goto label_18fe64;
        case 0x18fe68u: goto label_18fe68;
        case 0x18fe6cu: goto label_18fe6c;
        case 0x18fe70u: goto label_18fe70;
        case 0x18fe74u: goto label_18fe74;
        case 0x18fe78u: goto label_18fe78;
        case 0x18fe7cu: goto label_18fe7c;
        case 0x18fe80u: goto label_18fe80;
        case 0x18fe84u: goto label_18fe84;
        case 0x18fe88u: goto label_18fe88;
        case 0x18fe8cu: goto label_18fe8c;
        case 0x18fe90u: goto label_18fe90;
        case 0x18fe94u: goto label_18fe94;
        case 0x18fe98u: goto label_18fe98;
        case 0x18fe9cu: goto label_18fe9c;
        case 0x18fea0u: goto label_18fea0;
        case 0x18fea4u: goto label_18fea4;
        case 0x18fea8u: goto label_18fea8;
        case 0x18feacu: goto label_18feac;
        case 0x18feb0u: goto label_18feb0;
        case 0x18feb4u: goto label_18feb4;
        case 0x18feb8u: goto label_18feb8;
        case 0x18febcu: goto label_18febc;
        case 0x18fec0u: goto label_18fec0;
        case 0x18fec4u: goto label_18fec4;
        case 0x18fec8u: goto label_18fec8;
        case 0x18feccu: goto label_18fecc;
        case 0x18fed0u: goto label_18fed0;
        case 0x18fed4u: goto label_18fed4;
        case 0x18fed8u: goto label_18fed8;
        case 0x18fedcu: goto label_18fedc;
        case 0x18fee0u: goto label_18fee0;
        case 0x18fee4u: goto label_18fee4;
        case 0x18fee8u: goto label_18fee8;
        case 0x18feecu: goto label_18feec;
        case 0x18fef0u: goto label_18fef0;
        case 0x18fef4u: goto label_18fef4;
        case 0x18fef8u: goto label_18fef8;
        case 0x18fefcu: goto label_18fefc;
        case 0x18ff00u: goto label_18ff00;
        case 0x18ff04u: goto label_18ff04;
        case 0x18ff08u: goto label_18ff08;
        case 0x18ff0cu: goto label_18ff0c;
        case 0x18ff10u: goto label_18ff10;
        case 0x18ff14u: goto label_18ff14;
        case 0x18ff18u: goto label_18ff18;
        case 0x18ff1cu: goto label_18ff1c;
        case 0x18ff20u: goto label_18ff20;
        case 0x18ff24u: goto label_18ff24;
        case 0x18ff28u: goto label_18ff28;
        case 0x18ff2cu: goto label_18ff2c;
        case 0x18ff30u: goto label_18ff30;
        case 0x18ff34u: goto label_18ff34;
        case 0x18ff38u: goto label_18ff38;
        case 0x18ff3cu: goto label_18ff3c;
        case 0x18ff40u: goto label_18ff40;
        case 0x18ff44u: goto label_18ff44;
        case 0x18ff48u: goto label_18ff48;
        case 0x18ff4cu: goto label_18ff4c;
        case 0x18ff50u: goto label_18ff50;
        case 0x18ff54u: goto label_18ff54;
        case 0x18ff58u: goto label_18ff58;
        case 0x18ff5cu: goto label_18ff5c;
        case 0x18ff60u: goto label_18ff60;
        case 0x18ff64u: goto label_18ff64;
        case 0x18ff68u: goto label_18ff68;
        case 0x18ff6cu: goto label_18ff6c;
        case 0x18ff70u: goto label_18ff70;
        case 0x18ff74u: goto label_18ff74;
        case 0x18ff78u: goto label_18ff78;
        case 0x18ff7cu: goto label_18ff7c;
        case 0x18ff80u: goto label_18ff80;
        case 0x18ff84u: goto label_18ff84;
        case 0x18ff88u: goto label_18ff88;
        case 0x18ff8cu: goto label_18ff8c;
        case 0x18ff90u: goto label_18ff90;
        case 0x18ff94u: goto label_18ff94;
        case 0x18ff98u: goto label_18ff98;
        case 0x18ff9cu: goto label_18ff9c;
        case 0x18ffa0u: goto label_18ffa0;
        case 0x18ffa4u: goto label_18ffa4;
        case 0x18ffa8u: goto label_18ffa8;
        case 0x18ffacu: goto label_18ffac;
        case 0x18ffb0u: goto label_18ffb0;
        case 0x18ffb4u: goto label_18ffb4;
        case 0x18ffb8u: goto label_18ffb8;
        case 0x18ffbcu: goto label_18ffbc;
        case 0x18ffc0u: goto label_18ffc0;
        case 0x18ffc4u: goto label_18ffc4;
        case 0x18ffc8u: goto label_18ffc8;
        case 0x18ffccu: goto label_18ffcc;
        case 0x18ffd0u: goto label_18ffd0;
        case 0x18ffd4u: goto label_18ffd4;
        case 0x18ffd8u: goto label_18ffd8;
        case 0x18ffdcu: goto label_18ffdc;
        case 0x18ffe0u: goto label_18ffe0;
        case 0x18ffe4u: goto label_18ffe4;
        case 0x18ffe8u: goto label_18ffe8;
        case 0x18ffecu: goto label_18ffec;
        case 0x18fff0u: goto label_18fff0;
        case 0x18fff4u: goto label_18fff4;
        case 0x18fff8u: goto label_18fff8;
        case 0x18fffcu: goto label_18fffc;
        case 0x190000u: goto label_190000;
        case 0x190004u: goto label_190004;
        case 0x190008u: goto label_190008;
        case 0x19000cu: goto label_19000c;
        case 0x190010u: goto label_190010;
        case 0x190014u: goto label_190014;
        case 0x190018u: goto label_190018;
        case 0x19001cu: goto label_19001c;
        case 0x190020u: goto label_190020;
        case 0x190024u: goto label_190024;
        case 0x190028u: goto label_190028;
        case 0x19002cu: goto label_19002c;
        case 0x190030u: goto label_190030;
        case 0x190034u: goto label_190034;
        case 0x190038u: goto label_190038;
        case 0x19003cu: goto label_19003c;
        case 0x190040u: goto label_190040;
        case 0x190044u: goto label_190044;
        case 0x190048u: goto label_190048;
        case 0x19004cu: goto label_19004c;
        case 0x190050u: goto label_190050;
        case 0x190054u: goto label_190054;
        case 0x190058u: goto label_190058;
        case 0x19005cu: goto label_19005c;
        case 0x190060u: goto label_190060;
        case 0x190064u: goto label_190064;
        case 0x190068u: goto label_190068;
        case 0x19006cu: goto label_19006c;
        case 0x190070u: goto label_190070;
        case 0x190074u: goto label_190074;
        case 0x190078u: goto label_190078;
        case 0x19007cu: goto label_19007c;
        case 0x190080u: goto label_190080;
        case 0x190084u: goto label_190084;
        case 0x190088u: goto label_190088;
        case 0x19008cu: goto label_19008c;
        case 0x190090u: goto label_190090;
        case 0x190094u: goto label_190094;
        case 0x190098u: goto label_190098;
        case 0x19009cu: goto label_19009c;
        case 0x1900a0u: goto label_1900a0;
        case 0x1900a4u: goto label_1900a4;
        case 0x1900a8u: goto label_1900a8;
        case 0x1900acu: goto label_1900ac;
        case 0x1900b0u: goto label_1900b0;
        case 0x1900b4u: goto label_1900b4;
        case 0x1900b8u: goto label_1900b8;
        case 0x1900bcu: goto label_1900bc;
        case 0x1900c0u: goto label_1900c0;
        case 0x1900c4u: goto label_1900c4;
        case 0x1900c8u: goto label_1900c8;
        case 0x1900ccu: goto label_1900cc;
        case 0x1900d0u: goto label_1900d0;
        case 0x1900d4u: goto label_1900d4;
        case 0x1900d8u: goto label_1900d8;
        case 0x1900dcu: goto label_1900dc;
        case 0x1900e0u: goto label_1900e0;
        case 0x1900e4u: goto label_1900e4;
        case 0x1900e8u: goto label_1900e8;
        case 0x1900ecu: goto label_1900ec;
        case 0x1900f0u: goto label_1900f0;
        case 0x1900f4u: goto label_1900f4;
        case 0x1900f8u: goto label_1900f8;
        case 0x1900fcu: goto label_1900fc;
        case 0x190100u: goto label_190100;
        case 0x190104u: goto label_190104;
        case 0x190108u: goto label_190108;
        case 0x19010cu: goto label_19010c;
        case 0x190110u: goto label_190110;
        case 0x190114u: goto label_190114;
        case 0x190118u: goto label_190118;
        case 0x19011cu: goto label_19011c;
        case 0x190120u: goto label_190120;
        case 0x190124u: goto label_190124;
        case 0x190128u: goto label_190128;
        case 0x19012cu: goto label_19012c;
        case 0x190130u: goto label_190130;
        case 0x190134u: goto label_190134;
        case 0x190138u: goto label_190138;
        case 0x19013cu: goto label_19013c;
        case 0x190140u: goto label_190140;
        case 0x190144u: goto label_190144;
        case 0x190148u: goto label_190148;
        case 0x19014cu: goto label_19014c;
        case 0x190150u: goto label_190150;
        case 0x190154u: goto label_190154;
        case 0x190158u: goto label_190158;
        case 0x19015cu: goto label_19015c;
        case 0x190160u: goto label_190160;
        case 0x190164u: goto label_190164;
        case 0x190168u: goto label_190168;
        case 0x19016cu: goto label_19016c;
        case 0x190170u: goto label_190170;
        case 0x190174u: goto label_190174;
        case 0x190178u: goto label_190178;
        case 0x19017cu: goto label_19017c;
        case 0x190180u: goto label_190180;
        case 0x190184u: goto label_190184;
        case 0x190188u: goto label_190188;
        case 0x19018cu: goto label_19018c;
        case 0x190190u: goto label_190190;
        case 0x190194u: goto label_190194;
        case 0x190198u: goto label_190198;
        case 0x19019cu: goto label_19019c;
        case 0x1901a0u: goto label_1901a0;
        case 0x1901a4u: goto label_1901a4;
        case 0x1901a8u: goto label_1901a8;
        case 0x1901acu: goto label_1901ac;
        case 0x1901b0u: goto label_1901b0;
        case 0x1901b4u: goto label_1901b4;
        case 0x1901b8u: goto label_1901b8;
        case 0x1901bcu: goto label_1901bc;
        case 0x1901c0u: goto label_1901c0;
        case 0x1901c4u: goto label_1901c4;
        case 0x1901c8u: goto label_1901c8;
        case 0x1901ccu: goto label_1901cc;
        case 0x1901d0u: goto label_1901d0;
        case 0x1901d4u: goto label_1901d4;
        case 0x1901d8u: goto label_1901d8;
        case 0x1901dcu: goto label_1901dc;
        case 0x1901e0u: goto label_1901e0;
        case 0x1901e4u: goto label_1901e4;
        case 0x1901e8u: goto label_1901e8;
        case 0x1901ecu: goto label_1901ec;
        case 0x1901f0u: goto label_1901f0;
        case 0x1901f4u: goto label_1901f4;
        case 0x1901f8u: goto label_1901f8;
        case 0x1901fcu: goto label_1901fc;
        case 0x190200u: goto label_190200;
        case 0x190204u: goto label_190204;
        case 0x190208u: goto label_190208;
        case 0x19020cu: goto label_19020c;
        case 0x190210u: goto label_190210;
        case 0x190214u: goto label_190214;
        case 0x190218u: goto label_190218;
        case 0x19021cu: goto label_19021c;
        case 0x190220u: goto label_190220;
        case 0x190224u: goto label_190224;
        case 0x190228u: goto label_190228;
        case 0x19022cu: goto label_19022c;
        case 0x190230u: goto label_190230;
        case 0x190234u: goto label_190234;
        case 0x190238u: goto label_190238;
        case 0x19023cu: goto label_19023c;
        case 0x190240u: goto label_190240;
        case 0x190244u: goto label_190244;
        case 0x190248u: goto label_190248;
        case 0x19024cu: goto label_19024c;
        case 0x190250u: goto label_190250;
        case 0x190254u: goto label_190254;
        case 0x190258u: goto label_190258;
        case 0x19025cu: goto label_19025c;
        case 0x190260u: goto label_190260;
        case 0x190264u: goto label_190264;
        case 0x190268u: goto label_190268;
        case 0x19026cu: goto label_19026c;
        case 0x190270u: goto label_190270;
        case 0x190274u: goto label_190274;
        case 0x190278u: goto label_190278;
        case 0x19027cu: goto label_19027c;
        case 0x190280u: goto label_190280;
        case 0x190284u: goto label_190284;
        case 0x190288u: goto label_190288;
        case 0x19028cu: goto label_19028c;
        case 0x190290u: goto label_190290;
        case 0x190294u: goto label_190294;
        case 0x190298u: goto label_190298;
        case 0x19029cu: goto label_19029c;
        case 0x1902a0u: goto label_1902a0;
        case 0x1902a4u: goto label_1902a4;
        case 0x1902a8u: goto label_1902a8;
        case 0x1902acu: goto label_1902ac;
        case 0x1902b0u: goto label_1902b0;
        case 0x1902b4u: goto label_1902b4;
        case 0x1902b8u: goto label_1902b8;
        case 0x1902bcu: goto label_1902bc;
        case 0x1902c0u: goto label_1902c0;
        case 0x1902c4u: goto label_1902c4;
        case 0x1902c8u: goto label_1902c8;
        case 0x1902ccu: goto label_1902cc;
        case 0x1902d0u: goto label_1902d0;
        case 0x1902d4u: goto label_1902d4;
        case 0x1902d8u: goto label_1902d8;
        case 0x1902dcu: goto label_1902dc;
        case 0x1902e0u: goto label_1902e0;
        case 0x1902e4u: goto label_1902e4;
        case 0x1902e8u: goto label_1902e8;
        case 0x1902ecu: goto label_1902ec;
        case 0x1902f0u: goto label_1902f0;
        case 0x1902f4u: goto label_1902f4;
        case 0x1902f8u: goto label_1902f8;
        case 0x1902fcu: goto label_1902fc;
        case 0x190300u: goto label_190300;
        case 0x190304u: goto label_190304;
        case 0x190308u: goto label_190308;
        case 0x19030cu: goto label_19030c;
        case 0x190310u: goto label_190310;
        case 0x190314u: goto label_190314;
        case 0x190318u: goto label_190318;
        case 0x19031cu: goto label_19031c;
        case 0x190320u: goto label_190320;
        case 0x190324u: goto label_190324;
        case 0x190328u: goto label_190328;
        case 0x19032cu: goto label_19032c;
        case 0x190330u: goto label_190330;
        case 0x190334u: goto label_190334;
        case 0x190338u: goto label_190338;
        case 0x19033cu: goto label_19033c;
        case 0x190340u: goto label_190340;
        case 0x190344u: goto label_190344;
        case 0x190348u: goto label_190348;
        case 0x19034cu: goto label_19034c;
        case 0x190350u: goto label_190350;
        case 0x190354u: goto label_190354;
        case 0x190358u: goto label_190358;
        case 0x19035cu: goto label_19035c;
        case 0x190360u: goto label_190360;
        case 0x190364u: goto label_190364;
        case 0x190368u: goto label_190368;
        case 0x19036cu: goto label_19036c;
        case 0x190370u: goto label_190370;
        case 0x190374u: goto label_190374;
        case 0x190378u: goto label_190378;
        case 0x19037cu: goto label_19037c;
        case 0x190380u: goto label_190380;
        case 0x190384u: goto label_190384;
        case 0x190388u: goto label_190388;
        case 0x19038cu: goto label_19038c;
        case 0x190390u: goto label_190390;
        case 0x190394u: goto label_190394;
        case 0x190398u: goto label_190398;
        case 0x19039cu: goto label_19039c;
        case 0x1903a0u: goto label_1903a0;
        case 0x1903a4u: goto label_1903a4;
        case 0x1903a8u: goto label_1903a8;
        case 0x1903acu: goto label_1903ac;
        case 0x1903b0u: goto label_1903b0;
        case 0x1903b4u: goto label_1903b4;
        case 0x1903b8u: goto label_1903b8;
        case 0x1903bcu: goto label_1903bc;
        case 0x1903c0u: goto label_1903c0;
        case 0x1903c4u: goto label_1903c4;
        case 0x1903c8u: goto label_1903c8;
        case 0x1903ccu: goto label_1903cc;
        case 0x1903d0u: goto label_1903d0;
        case 0x1903d4u: goto label_1903d4;
        case 0x1903d8u: goto label_1903d8;
        case 0x1903dcu: goto label_1903dc;
        case 0x1903e0u: goto label_1903e0;
        case 0x1903e4u: goto label_1903e4;
        case 0x1903e8u: goto label_1903e8;
        case 0x1903ecu: goto label_1903ec;
        case 0x1903f0u: goto label_1903f0;
        case 0x1903f4u: goto label_1903f4;
        case 0x1903f8u: goto label_1903f8;
        case 0x1903fcu: goto label_1903fc;
        case 0x190400u: goto label_190400;
        case 0x190404u: goto label_190404;
        case 0x190408u: goto label_190408;
        case 0x19040cu: goto label_19040c;
        case 0x190410u: goto label_190410;
        case 0x190414u: goto label_190414;
        case 0x190418u: goto label_190418;
        case 0x19041cu: goto label_19041c;
        case 0x190420u: goto label_190420;
        case 0x190424u: goto label_190424;
        case 0x190428u: goto label_190428;
        case 0x19042cu: goto label_19042c;
        case 0x190430u: goto label_190430;
        case 0x190434u: goto label_190434;
        case 0x190438u: goto label_190438;
        case 0x19043cu: goto label_19043c;
        default: return;
    }

label_18fc70:
    // 0x18fc70: 0x3c023d00  lui         $v0, 0x3D00
    ctx->pc = 0x18fc70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15616 << 16));
label_18fc74:
    // 0x18fc74: 0x3442adfd  ori         $v0, $v0, 0xADFD
    ctx->pc = 0x18fc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44541);
label_18fc78:
    // 0x18fc78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18fc78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18fc7c:
    // 0x18fc7c: 0x0  nop
    ctx->pc = 0x18fc7cu;
    // NOP
label_18fc80:
    // 0x18fc80: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18fc80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18fc84:
    // 0x18fc84: 0x0  nop
    ctx->pc = 0x18fc84u;
    // NOP
label_18fc88:
    // 0x18fc88: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_18fc8c:
    if (ctx->pc == 0x18FC8Cu) {
        ctx->pc = 0x18FC90u;
        goto label_18fc90;
    }
    ctx->pc = 0x18FC88u;
    {
        const bool branch_taken_0x18fc88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18fc88) {
            ctx->pc = 0x18FC94u;
            goto label_18fc94;
        }
    }
    ctx->pc = 0x18FC90u;
label_18fc90:
    // 0x18fc90: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18fc90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18fc94:
    // 0x18fc94: 0xc06d4c0  jal         func_1B5300
label_18fc98:
    if (ctx->pc == 0x18FC98u) {
        ctx->pc = 0x18FC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC94u;
        // 0x18fc98: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FC9Cu;
        goto label_18fc9c;
    }
    ctx->pc = 0x18FC94u;
    SET_GPR_U32(ctx, 31, 0x18FC9Cu);
    ctx->pc = 0x18FC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FC94u;
    // 0x18fc98: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    { ctx->pc = 0x1b5300; return; }
    ctx->pc = 0x18FC9Cu;
label_18fc9c:
    // 0x18fc9c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x18fc9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_18fca0:
    // 0x18fca0: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x18fca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_18fca4:
    // 0x18fca4: 0xc06d412  jal         func_1B5048
label_18fca8:
    if (ctx->pc == 0x18FCA8u) {
        ctx->pc = 0x18FCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FCA4u;
        // 0x18fca8: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FCACu;
        goto label_18fcac;
    }
    ctx->pc = 0x18FCA4u;
    SET_GPR_U32(ctx, 31, 0x18FCACu);
    ctx->pc = 0x18FCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FCA4u;
    // 0x18fca8: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5048u;
    { ctx->pc = 0x1b5048; return; }
    ctx->pc = 0x18FCACu;
label_18fcac:
    // 0x18fcac: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x18fcacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_18fcb0:
    // 0x18fcb0: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x18fcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_18fcb4:
    // 0x18fcb4: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x18fcb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_18fcb8:
    // 0x18fcb8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x18fcb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18fcbc:
    // 0x18fcbc: 0xc066e14  jal         func_19B850
label_18fcc0:
    if (ctx->pc == 0x18FCC0u) {
        ctx->pc = 0x18FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FCBCu;
        // 0x18fcc0: 0x4600d307  neg.s       $f12, $f26 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[26]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FCC4u;
        goto label_18fcc4;
    }
    ctx->pc = 0x18FCBCu;
    SET_GPR_U32(ctx, 31, 0x18FCC4u);
    ctx->pc = 0x18FCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FCBCu;
    // 0x18fcc0: 0x4600d307  neg.s       $f12, $f26 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x18FCC4u;
label_18fcc4:
    // 0x18fcc4: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x18fcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
label_18fcc8:
    // 0x18fcc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18fcc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18fccc:
    // 0x18fccc: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x18fcccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_18fcd0:
    // 0x18fcd0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x18fcd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18fcd4:
    // 0x18fcd4: 0x0  nop
    ctx->pc = 0x18fcd4u;
    // NOP
label_18fcd8:
    // 0x18fcd8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_18fcdc:
    if (ctx->pc == 0x18FCDCu) {
        ctx->pc = 0x18FCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FCD8u;
        // 0x18fcdc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FCE0u;
        goto label_18fce0;
    }
    ctx->pc = 0x18FCD8u;
    {
        const bool branch_taken_0x18fcd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18FCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FCD8u;
        // 0x18fcdc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fcd8) {
            ctx->pc = 0x18FCFCu;
            goto label_18fcfc;
        }
    }
    ctx->pc = 0x18FCE0u;
label_18fce0:
    // 0x18fce0: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x18fce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18fce4:
    // 0x18fce4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x18fce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_18fce8:
    // 0x18fce8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18fce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18fcec:
    // 0x18fcec: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x18fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
label_18fcf0:
    // 0x18fcf0: 0x4482b800  mtc1        $v0, $f23
    ctx->pc = 0x18fcf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_18fcf4:
    // 0x18fcf4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18fcf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18fcf8:
    // 0x18fcf8: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x18fcf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_18fcfc:
    // 0x18fcfc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18fcfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18fd00:
    // 0x18fd00: 0xc066e02  jal         func_19B808
label_18fd04:
    if (ctx->pc == 0x18FD04u) {
        ctx->pc = 0x18FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD00u;
        // 0x18fd04: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FD08u;
        goto label_18fd08;
    }
    ctx->pc = 0x18FD00u;
    SET_GPR_U32(ctx, 31, 0x18FD08u);
    ctx->pc = 0x18FD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FD00u;
    // 0x18fd04: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x18FD08u;
label_18fd08:
    // 0x18fd08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18fd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18fd0c:
    // 0x18fd0c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x18fd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_18fd10:
    // 0x18fd10: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x18fd10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_18fd14:
    // 0x18fd14: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x18fd14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_18fd18:
    // 0x18fd18: 0xc064978  jal         func_1925E0
label_18fd1c:
    if (ctx->pc == 0x18FD1Cu) {
        ctx->pc = 0x18FD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD18u;
        // 0x18fd1c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FD20u;
        goto label_18fd20;
    }
    ctx->pc = 0x18FD18u;
    SET_GPR_U32(ctx, 31, 0x18FD20u);
    ctx->pc = 0x18FD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FD18u;
    // 0x18fd1c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1925E0u;
    { ctx->pc = 0x1925e0; return; }
    ctx->pc = 0x18FD20u;
label_18fd20:
    // 0x18fd20: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_18fd24:
    if (ctx->pc == 0x18FD24u) {
        ctx->pc = 0x18FD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD20u;
        // 0x18fd24: 0x27a30090  addiu       $v1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FD28u;
        goto label_18fd28;
    }
    ctx->pc = 0x18FD20u;
    {
        const bool branch_taken_0x18fd20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD20u;
        // 0x18fd24: 0x27a30090  addiu       $v1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fd20) {
            ctx->pc = 0x18FD9Cu;
            goto label_18fd9c;
        }
    }
    ctx->pc = 0x18FD28u;
label_18fd28:
    // 0x18fd28: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x18fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_18fd2c:
    // 0x18fd2c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x18fd2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_18fd30:
    // 0x18fd30: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x18fd30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_18fd34:
    // 0x18fd34: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18fd34u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_18fd38:
    // 0x18fd38: 0x4a0002ff  vnop
    ctx->pc = 0x18fd38u;
    // NOP operation, no action needed for VU0
label_18fd3c:
    // 0x18fd3c: 0x4a0002ff  vnop
    ctx->pc = 0x18fd3cu;
    // NOP operation, no action needed for VU0
label_18fd40:
    // 0x18fd40: 0x4a0002ff  vnop
    ctx->pc = 0x18fd40u;
    // NOP operation, no action needed for VU0
label_18fd44:
    // 0x18fd44: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18fd44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_18fd48:
    // 0x18fd48: 0x4a0002ff  vnop
    ctx->pc = 0x18fd48u;
    // NOP operation, no action needed for VU0
label_18fd4c:
    // 0x18fd4c: 0x4a0002ff  vnop
    ctx->pc = 0x18fd4cu;
    // NOP operation, no action needed for VU0
label_18fd50:
    // 0x18fd50: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18fd50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18fd54:
    // 0x18fd54: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18fd54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18fd58:
    // 0x18fd58: 0x4a0002ff  vnop
    ctx->pc = 0x18fd58u;
    // NOP operation, no action needed for VU0
label_18fd5c:
    // 0x18fd5c: 0x4a0002ff  vnop
    ctx->pc = 0x18fd5cu;
    // NOP operation, no action needed for VU0
label_18fd60:
    // 0x18fd60: 0x4a0002ff  vnop
    ctx->pc = 0x18fd60u;
    // NOP operation, no action needed for VU0
label_18fd64:
    // 0x18fd64: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18fd64u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_18fd68:
    // 0x18fd68: 0x4a0003bf  vwaitq
    ctx->pc = 0x18fd68u;
    // VWAITQ (Q already resolved in this runtime)
label_18fd6c:
    // 0x18fd6c: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18fd6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18fd70:
    // 0x18fd70: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x18fd70u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18fd74:
    // 0x18fd74: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x18fd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_18fd78:
    // 0x18fd78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18fd78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18fd7c:
    // 0x18fd7c: 0x4602d541  sub.s       $f21, $f26, $f2
    ctx->pc = 0x18fd7cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[26], ctx->f[2]);
label_18fd80:
    // 0x18fd80: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x18fd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18fd84:
    // 0x18fd84: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x18fd84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_18fd88:
    // 0x18fd88: 0x46020041  sub.s       $f1, $f0, $f2
    ctx->pc = 0x18fd88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_18fd8c:
    // 0x18fd8c: 0x46140800  add.s       $f0, $f1, $f20
    ctx->pc = 0x18fd8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_18fd90:
    // 0x18fd90: 0x4600bd00  add.s       $f20, $f23, $f0
    ctx->pc = 0x18fd90u;
    ctx->f[20] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_18fd94:
    // 0x18fd94: 0x10000003  b           . + 4 + (0x3 << 2)
label_18fd98:
    if (ctx->pc == 0x18FD98u) {
        ctx->pc = 0x18FD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD94u;
        // 0x18fd98: 0xe7a10094  swc1        $f1, 0x94($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FD9Cu;
        goto label_18fd9c;
    }
    ctx->pc = 0x18FD94u;
    {
        const bool branch_taken_0x18fd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD94u;
        // 0x18fd98: 0xe7a10094  swc1        $f1, 0x94($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fd94) {
            ctx->pc = 0x18FDA4u;
            goto label_18fda4;
        }
    }
    ctx->pc = 0x18FD9Cu;
label_18fd9c:
    // 0x18fd9c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x18fd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18fda0:
    // 0x18fda0: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x18fda0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_18fda4:
    // 0x18fda4: 0x4619c602  mul.s       $f24, $f24, $f25
    ctx->pc = 0x18fda4u;
    ctx->f[24] = FPU_MUL_S(ctx->f[24], ctx->f[25]);
label_18fda8:
    // 0x18fda8: 0xc06d4c0  jal         func_1B5300
label_18fdac:
    if (ctx->pc == 0x18FDACu) {
        ctx->pc = 0x18FDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDA8u;
        // 0x18fdac: 0x4616c300  add.s       $f12, $f24, $f22 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[24], ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FDB0u;
        goto label_18fdb0;
    }
    ctx->pc = 0x18FDA8u;
    SET_GPR_U32(ctx, 31, 0x18FDB0u);
    ctx->pc = 0x18FDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FDA8u;
    // 0x18fdac: 0x4616c300  add.s       $f12, $f24, $f22 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[24], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    { ctx->pc = 0x1b5300; return; }
    ctx->pc = 0x18FDB0u;
label_18fdb0:
    // 0x18fdb0: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x18fdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18fdb4:
    // 0x18fdb4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x18fdb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_18fdb8:
    // 0x18fdb8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18fdb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18fdbc:
    // 0x18fdbc: 0x4616c300  add.s       $f12, $f24, $f22
    ctx->pc = 0x18fdbcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[24], ctx->f[22]);
label_18fdc0:
    // 0x18fdc0: 0xc06d412  jal         func_1B5048
label_18fdc4:
    if (ctx->pc == 0x18FDC4u) {
        ctx->pc = 0x18FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDC0u;
        // 0x18fdc4: 0xe6600030  swc1        $f0, 0x30($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FDC8u;
        goto label_18fdc8;
    }
    ctx->pc = 0x18FDC0u;
    SET_GPR_U32(ctx, 31, 0x18FDC8u);
    ctx->pc = 0x18FDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FDC0u;
    // 0x18fdc4: 0xe6600030  swc1        $f0, 0x30($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5048u;
    { ctx->pc = 0x1b5048; return; }
    ctx->pc = 0x18FDC8u;
label_18fdc8:
    // 0x18fdc8: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x18fdc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_18fdcc:
    // 0x18fdcc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18fdccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18fdd0:
    // 0x18fdd0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18fdd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18fdd4:
    // 0x18fdd4: 0x26660030  addiu       $a2, $s3, 0x30
    ctx->pc = 0x18fdd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_18fdd8:
    // 0x18fdd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18fdd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18fddc:
    // 0x18fddc: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x18fddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18fde0:
    // 0x18fde0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18fde0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_18fde4:
    // 0x18fde4: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x18fde4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
label_18fde8:
    // 0x18fde8: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x18fde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18fdec:
    // 0x18fdec: 0x4601a001  sub.s       $f0, $f20, $f1
    ctx->pc = 0x18fdecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_18fdf0:
    // 0x18fdf0: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x18fdf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
label_18fdf4:
    // 0x18fdf4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18fdf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18fdf8:
    // 0x18fdf8: 0xc064e24  jal         func_193890
label_18fdfc:
    if (ctx->pc == 0x18FDFCu) {
        ctx->pc = 0x18FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDF8u;
        // 0x18fdfc: 0xe6600034  swc1        $f0, 0x34($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FE00u;
        goto label_18fe00;
    }
    ctx->pc = 0x18FDF8u;
    SET_GPR_U32(ctx, 31, 0x18FE00u);
    ctx->pc = 0x18FDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FDF8u;
    // 0x18fdfc: 0xe6600034  swc1        $f0, 0x34($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x193890u;
    { ctx->pc = 0x193890; return; }
    ctx->pc = 0x18FE00u;
label_18fe00:
    // 0x18fe00: 0xaf828888  sw          $v0, -0x7778($gp)
    ctx->pc = 0x18fe00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936712), GPR_U32(ctx, 2));
label_18fe04:
    // 0x18fe04: 0x8f868888  lw          $a2, -0x7778($gp)
    ctx->pc = 0x18fe04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936712)));
label_18fe08:
    // 0x18fe08: 0x18c00086  blez        $a2, . + 4 + (0x86 << 2)
label_18fe0c:
    if (ctx->pc == 0x18FE0Cu) {
        ctx->pc = 0x18FE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FE08u;
        // 0x18fe0c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FE10u;
        goto label_18fe10;
    }
    ctx->pc = 0x18FE08u;
    {
        const bool branch_taken_0x18fe08 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x18FE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FE08u;
        // 0x18fe0c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fe08) {
            ctx->pc = 0x190024u;
            goto label_190024;
        }
    }
    ctx->pc = 0x18FE10u;
label_18fe10:
    // 0x18fe10: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x18fe10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
label_18fe14:
    // 0x18fe14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18fe14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18fe18:
    // 0x18fe18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18fe18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18fe1c:
    // 0x18fe1c: 0x10000031  b           . + 4 + (0x31 << 2)
label_18fe20:
    if (ctx->pc == 0x18FE20u) {
        ctx->pc = 0x18FE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FE1Cu;
        // 0x18fe20: 0x246362e0  addiu       $v1, $v1, 0x62E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FE24u;
        goto label_18fe24;
    }
    ctx->pc = 0x18FE1Cu;
    {
        const bool branch_taken_0x18fe1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FE1Cu;
        // 0x18fe20: 0x246362e0  addiu       $v1, $v1, 0x62E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fe1c) {
            ctx->pc = 0x18FEE4u;
            goto label_18fee4;
        }
    }
    ctx->pc = 0x18FE24u;
label_18fe24:
    // 0x18fe24: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18fe24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_18fe28:
    // 0x18fe28: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x18fe28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_18fe2c:
    // 0x18fe2c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x18fe2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_18fe30:
    // 0x18fe30: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18fe30u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_18fe34:
    // 0x18fe34: 0x4a0002ff  vnop
    ctx->pc = 0x18fe34u;
    // NOP operation, no action needed for VU0
label_18fe38:
    // 0x18fe38: 0x4a0002ff  vnop
    ctx->pc = 0x18fe38u;
    // NOP operation, no action needed for VU0
label_18fe3c:
    // 0x18fe3c: 0x4a0002ff  vnop
    ctx->pc = 0x18fe3cu;
    // NOP operation, no action needed for VU0
label_18fe40:
    // 0x18fe40: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x18fe40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_18fe44:
    // 0x18fe44: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18fe44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_18fe48:
    // 0x18fe48: 0x4a0002ff  vnop
    ctx->pc = 0x18fe48u;
    // NOP operation, no action needed for VU0
label_18fe4c:
    // 0x18fe4c: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18fe4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18fe50:
    // 0x18fe50: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x18fe50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18fe54:
    // 0x18fe54: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18fe54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18fe58:
    // 0x18fe58: 0x4a0002ff  vnop
    ctx->pc = 0x18fe58u;
    // NOP operation, no action needed for VU0
label_18fe5c:
    // 0x18fe5c: 0x4a0002ff  vnop
    ctx->pc = 0x18fe5cu;
    // NOP operation, no action needed for VU0
label_18fe60:
    // 0x18fe60: 0x4a0002ff  vnop
    ctx->pc = 0x18fe60u;
    // NOP operation, no action needed for VU0
label_18fe64:
    // 0x18fe64: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18fe64u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_18fe68:
    // 0x18fe68: 0x4a0003bf  vwaitq
    ctx->pc = 0x18fe68u;
    // VWAITQ (Q already resolved in this runtime)
label_18fe6c:
    // 0x18fe6c: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18fe6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18fe70:
    // 0x18fe70: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x18fe70u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18fe74:
    // 0x18fe74: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x18fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_18fe78:
    // 0x18fe78: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_18fe7c:
    // 0x18fe7c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x18fe7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_18fe80:
    // 0x18fe80: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18fe80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_18fe84:
    // 0x18fe84: 0x4a0002ff  vnop
    ctx->pc = 0x18fe84u;
    // NOP operation, no action needed for VU0
label_18fe88:
    // 0x18fe88: 0x4a0002ff  vnop
    ctx->pc = 0x18fe88u;
    // NOP operation, no action needed for VU0
label_18fe8c:
    // 0x18fe8c: 0x4a0002ff  vnop
    ctx->pc = 0x18fe8cu;
    // NOP operation, no action needed for VU0
label_18fe90:
    // 0x18fe90: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x18fe90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_18fe94:
    // 0x18fe94: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18fe94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_18fe98:
    // 0x18fe98: 0x4a0002ff  vnop
    ctx->pc = 0x18fe98u;
    // NOP operation, no action needed for VU0
label_18fe9c:
    // 0x18fe9c: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18fe9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18fea0:
    // 0x18fea0: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x18fea0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18fea4:
    // 0x18fea4: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18fea4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18fea8:
    // 0x18fea8: 0x4a0002ff  vnop
    ctx->pc = 0x18fea8u;
    // NOP operation, no action needed for VU0
label_18feac:
    // 0x18feac: 0x4a0002ff  vnop
    ctx->pc = 0x18feacu;
    // NOP operation, no action needed for VU0
label_18feb0:
    // 0x18feb0: 0x4a0002ff  vnop
    ctx->pc = 0x18feb0u;
    // NOP operation, no action needed for VU0
label_18feb4:
    // 0x18feb4: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18feb4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_18feb8:
    // 0x18feb8: 0x4a0003bf  vwaitq
    ctx->pc = 0x18feb8u;
    // VWAITQ (Q already resolved in this runtime)
label_18febc:
    // 0x18febc: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18febcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18fec0:
    // 0x18fec0: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x18fec0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18fec4:
    // 0x18fec4: 0x0  nop
    ctx->pc = 0x18fec4u;
    // NOP
label_18fec8:
    // 0x18fec8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18fec8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18fecc:
    // 0x18fecc: 0x0  nop
    ctx->pc = 0x18feccu;
    // NOP
label_18fed0:
    // 0x18fed0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_18fed4:
    if (ctx->pc == 0x18FED4u) {
        ctx->pc = 0x18FED8u;
        goto label_18fed8;
    }
    ctx->pc = 0x18FED0u;
    {
        const bool branch_taken_0x18fed0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18fed0) {
            ctx->pc = 0x18FEDCu;
            goto label_18fedc;
        }
    }
    ctx->pc = 0x18FED8u;
label_18fed8:
    // 0x18fed8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x18fed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18fedc:
    // 0x18fedc: 0x0  nop
    ctx->pc = 0x18fedcu;
    // NOP
label_18fee0:
    // 0x18fee0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18fee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_18fee4:
    // 0x18fee4: 0x0  nop
    ctx->pc = 0x18fee4u;
    // NOP
label_18fee8:
    // 0x18fee8: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x18fee8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_18feec:
    // 0x18feec: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
label_18fef0:
    if (ctx->pc == 0x18FEF0u) {
        ctx->pc = 0x18FEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FEECu;
        // 0x18fef0: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FEF4u;
        goto label_18fef4;
    }
    ctx->pc = 0x18FEECu;
    {
        const bool branch_taken_0x18feec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18FEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FEECu;
        // 0x18fef0: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18feec) {
            ctx->pc = 0x18FE24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18fe24;
        }
    }
    ctx->pc = 0x18FEF4u;
label_18fef4:
    // 0x18fef4: 0xaf848884  sw          $a0, -0x777C($gp)
    ctx->pc = 0x18fef4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936708), GPR_U32(ctx, 4));
label_18fef8:
    // 0x18fef8: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x18fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_18fefc:
    // 0x18fefc: 0x8f848884  lw          $a0, -0x777C($gp)
    ctx->pc = 0x18fefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936708)));
label_18ff00:
    // 0x18ff00: 0x24426420  addiu       $v0, $v0, 0x6420
    ctx->pc = 0x18ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25632));
label_18ff04:
    // 0x18ff04: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x18ff04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_18ff08:
    // 0x18ff08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18ff08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18ff0c:
    // 0x18ff0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18ff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18ff10:
    // 0x18ff10: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_18ff14:
    if (ctx->pc == 0x18FF14u) {
        ctx->pc = 0x18FF18u;
        goto label_18ff18;
    }
    ctx->pc = 0x18FF10u;
    {
        const bool branch_taken_0x18ff10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ff10) {
            ctx->pc = 0x18FF98u;
            goto label_18ff98;
        }
    }
    ctx->pc = 0x18FF18u;
label_18ff18:
    // 0x18ff18: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x18ff18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_18ff1c:
    // 0x18ff1c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x18ff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_18ff20:
    // 0x18ff20: 0x244262e0  addiu       $v0, $v0, 0x62E0
    ctx->pc = 0x18ff20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25312));
label_18ff24:
    // 0x18ff24: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x18ff24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_18ff28:
    // 0x18ff28: 0xc066e26  jal         func_19B898
label_18ff2c:
    if (ctx->pc == 0x18FF2Cu) {
        ctx->pc = 0x18FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF28u;
        // 0x18ff2c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FF30u;
        goto label_18ff30;
    }
    ctx->pc = 0x18FF28u;
    SET_GPR_U32(ctx, 31, 0x18FF30u);
    ctx->pc = 0x18FF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FF28u;
    // 0x18ff2c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18FF30u;
label_18ff30:
    // 0x18ff30: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x18ff30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_18ff34:
    // 0x18ff34: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x18ff34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_18ff38:
    // 0x18ff38: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x18ff38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_18ff3c:
    // 0x18ff3c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x18ff3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_18ff40:
    // 0x18ff40: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18ff40u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_18ff44:
    // 0x18ff44: 0x4a0002ff  vnop
    ctx->pc = 0x18ff44u;
    // NOP operation, no action needed for VU0
label_18ff48:
    // 0x18ff48: 0x4a0002ff  vnop
    ctx->pc = 0x18ff48u;
    // NOP operation, no action needed for VU0
label_18ff4c:
    // 0x18ff4c: 0x4a0002ff  vnop
    ctx->pc = 0x18ff4cu;
    // NOP operation, no action needed for VU0
label_18ff50:
    // 0x18ff50: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18ff50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_18ff54:
    // 0x18ff54: 0x4a0002ff  vnop
    ctx->pc = 0x18ff54u;
    // NOP operation, no action needed for VU0
label_18ff58:
    // 0x18ff58: 0x4a0002ff  vnop
    ctx->pc = 0x18ff58u;
    // NOP operation, no action needed for VU0
label_18ff5c:
    // 0x18ff5c: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18ff5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18ff60:
    // 0x18ff60: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18ff60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18ff64:
    // 0x18ff64: 0x4a0002ff  vnop
    ctx->pc = 0x18ff64u;
    // NOP operation, no action needed for VU0
label_18ff68:
    // 0x18ff68: 0x4a0002ff  vnop
    ctx->pc = 0x18ff68u;
    // NOP operation, no action needed for VU0
label_18ff6c:
    // 0x18ff6c: 0x4a0002ff  vnop
    ctx->pc = 0x18ff6cu;
    // NOP operation, no action needed for VU0
label_18ff70:
    // 0x18ff70: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18ff70u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_18ff74:
    // 0x18ff74: 0x4a0003bf  vwaitq
    ctx->pc = 0x18ff74u;
    // VWAITQ (Q already resolved in this runtime)
label_18ff78:
    // 0x18ff78: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18ff78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18ff7c:
    // 0x18ff7c: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x18ff7cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18ff80:
    // 0x18ff80: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x18ff80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18ff84:
    // 0x18ff84: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x18ff84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_18ff88:
    // 0x18ff88: 0xc066e26  jal         func_19B898
label_18ff8c:
    if (ctx->pc == 0x18FF8Cu) {
        ctx->pc = 0x18FF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF88u;
        // 0x18ff8c: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FF90u;
        goto label_18ff90;
    }
    ctx->pc = 0x18FF88u;
    SET_GPR_U32(ctx, 31, 0x18FF90u);
    ctx->pc = 0x18FF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FF88u;
    // 0x18ff8c: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18FF90u;
label_18ff90:
    // 0x18ff90: 0x10000023  b           . + 4 + (0x23 << 2)
label_18ff94:
    if (ctx->pc == 0x18FF94u) {
        ctx->pc = 0x18FF98u;
        goto label_18ff98;
    }
    ctx->pc = 0x18FF90u;
    {
        const bool branch_taken_0x18ff90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ff90) {
            ctx->pc = 0x190020u;
            goto label_190020;
        }
    }
    ctx->pc = 0x18FF98u;
label_18ff98:
    // 0x18ff98: 0x94420056  lhu         $v0, 0x56($v0)
    ctx->pc = 0x18ff98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 86)));
label_18ff9c:
    // 0x18ff9c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x18ff9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_18ffa0:
    // 0x18ffa0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_18ffa4:
    if (ctx->pc == 0x18FFA4u) {
        ctx->pc = 0x18FFA8u;
        goto label_18ffa8;
    }
    ctx->pc = 0x18FFA0u;
    {
        const bool branch_taken_0x18ffa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ffa0) {
            ctx->pc = 0x190020u;
            goto label_190020;
        }
    }
    ctx->pc = 0x18FFA8u;
label_18ffa8:
    // 0x18ffa8: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x18ffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_18ffac:
    // 0x18ffac: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x18ffacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_18ffb0:
    // 0x18ffb0: 0x244262e0  addiu       $v0, $v0, 0x62E0
    ctx->pc = 0x18ffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25312));
label_18ffb4:
    // 0x18ffb4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x18ffb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_18ffb8:
    // 0x18ffb8: 0xc066e26  jal         func_19B898
label_18ffbc:
    if (ctx->pc == 0x18FFBCu) {
        ctx->pc = 0x18FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FFB8u;
        // 0x18ffbc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FFC0u;
        goto label_18ffc0;
    }
    ctx->pc = 0x18FFB8u;
    SET_GPR_U32(ctx, 31, 0x18FFC0u);
    ctx->pc = 0x18FFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FFB8u;
    // 0x18ffbc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18FFC0u;
label_18ffc0:
    // 0x18ffc0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x18ffc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_18ffc4:
    // 0x18ffc4: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x18ffc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_18ffc8:
    // 0x18ffc8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x18ffc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_18ffcc:
    // 0x18ffcc: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x18ffccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_18ffd0:
    // 0x18ffd0: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18ffd0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_18ffd4:
    // 0x18ffd4: 0x4a0002ff  vnop
    ctx->pc = 0x18ffd4u;
    // NOP operation, no action needed for VU0
label_18ffd8:
    // 0x18ffd8: 0x4a0002ff  vnop
    ctx->pc = 0x18ffd8u;
    // NOP operation, no action needed for VU0
label_18ffdc:
    // 0x18ffdc: 0x4a0002ff  vnop
    ctx->pc = 0x18ffdcu;
    // NOP operation, no action needed for VU0
label_18ffe0:
    // 0x18ffe0: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18ffe0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_18ffe4:
    // 0x18ffe4: 0x4a0002ff  vnop
    ctx->pc = 0x18ffe4u;
    // NOP operation, no action needed for VU0
label_18ffe8:
    // 0x18ffe8: 0x4a0002ff  vnop
    ctx->pc = 0x18ffe8u;
    // NOP operation, no action needed for VU0
label_18ffec:
    // 0x18ffec: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18ffecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18fff0:
    // 0x18fff0: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18fff0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18fff4:
    // 0x18fff4: 0x4a0002ff  vnop
    ctx->pc = 0x18fff4u;
    // NOP operation, no action needed for VU0
label_18fff8:
    // 0x18fff8: 0x4a0002ff  vnop
    ctx->pc = 0x18fff8u;
    // NOP operation, no action needed for VU0
label_18fffc:
    // 0x18fffc: 0x4a0002ff  vnop
    ctx->pc = 0x18fffcu;
    // NOP operation, no action needed for VU0
label_190000:
    // 0x190000: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x190000u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_190004:
    // 0x190004: 0x4a0003bf  vwaitq
    ctx->pc = 0x190004u;
    // VWAITQ (Q already resolved in this runtime)
label_190008:
    // 0x190008: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x190008u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_19000c:
    // 0x19000c: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x19000cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_190010:
    // 0x190010: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x190010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190014:
    // 0x190014: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x190014u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_190018:
    // 0x190018: 0xc066e26  jal         func_19B898
label_19001c:
    if (ctx->pc == 0x19001Cu) {
        ctx->pc = 0x19001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190018u;
        // 0x19001c: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x190020u;
        goto label_190020;
    }
    ctx->pc = 0x190018u;
    SET_GPR_U32(ctx, 31, 0x190020u);
    ctx->pc = 0x19001Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190018u;
    // 0x19001c: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x190020u;
label_190020:
    // 0x190020: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x190020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_190024:
    // 0x190024: 0x26650040  addiu       $a1, $s3, 0x40
    ctx->pc = 0x190024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_190028:
    // 0x190028: 0xc066e08  jal         func_19B820
label_19002c:
    if (ctx->pc == 0x19002Cu) {
        ctx->pc = 0x19002Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190028u;
        // 0x19002c: 0x26660030  addiu       $a2, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190030u;
        goto label_190030;
    }
    ctx->pc = 0x190028u;
    SET_GPR_U32(ctx, 31, 0x190030u);
    ctx->pc = 0x19002Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190028u;
    // 0x19002c: 0x26660030  addiu       $a2, $s3, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x190030u;
label_190030:
    // 0x190030: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x190030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_190034:
    // 0x190034: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x190034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190038:
    // 0x190038: 0xc7ac00f4  lwc1        $f12, 0xF4($sp)
    ctx->pc = 0x190038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19003c:
    // 0x19003c: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x19003cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_190040:
    // 0x190040: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x190040u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_190044:
    // 0x190044: 0x46000344  c1          0x344
    ctx->pc = 0x190044u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_190048:
    // 0x190048: 0x0  nop
    ctx->pc = 0x190048u;
    // NOP
label_19004c:
    // 0x19004c: 0x0  nop
    ctx->pc = 0x19004cu;
    // NOP
label_190050:
    // 0x190050: 0xc06d51e  jal         func_1B5478
label_190054:
    if (ctx->pc == 0x190054u) {
        ctx->pc = 0x190058u;
        goto label_190058;
    }
    ctx->pc = 0x190050u;
    SET_GPR_U32(ctx, 31, 0x190058u);
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x190058u;
label_190058:
    // 0x190058: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x190058u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_19005c:
    // 0x19005c: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x19005cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
label_190060:
    // 0x190060: 0xc7ad00f8  lwc1        $f13, 0xF8($sp)
    ctx->pc = 0x190060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_190064:
    // 0x190064: 0xc06d51e  jal         func_1B5478
label_190068:
    if (ctx->pc == 0x190068u) {
        ctx->pc = 0x190068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190064u;
        // 0x190068: 0xc7ac00f0  lwc1        $f12, 0xF0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19006Cu;
        goto label_19006c;
    }
    ctx->pc = 0x190064u;
    SET_GPR_U32(ctx, 31, 0x19006Cu);
    ctx->pc = 0x190068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190064u;
    // 0x190068: 0xc7ac00f0  lwc1        $f12, 0xF0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x19006Cu;
label_19006c:
    // 0x19006c: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x19006cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_190070:
    // 0x190070: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x190070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_190074:
    // 0x190074: 0xe6600024  swc1        $f0, 0x24($s3)
    ctx->pc = 0x190074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
label_190078:
    // 0x190078: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x190078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_19007c:
    // 0x19007c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19007cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190080:
    // 0x190080: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x190080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_190084:
    // 0x190084: 0x26660030  addiu       $a2, $s3, 0x30
    ctx->pc = 0x190084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_190088:
    // 0x190088: 0xc066e08  jal         func_19B820
label_19008c:
    if (ctx->pc == 0x19008Cu) {
        ctx->pc = 0x19008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190088u;
        // 0x19008c: 0x4600dec2  mul.s       $f27, $f27, $f0 (Delay Slot)
        ctx->f[27] = FPU_MUL_S(ctx->f[27], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x190090u;
        goto label_190090;
    }
    ctx->pc = 0x190088u;
    SET_GPR_U32(ctx, 31, 0x190090u);
    ctx->pc = 0x19008Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190088u;
    // 0x19008c: 0x4600dec2  mul.s       $f27, $f27, $f0 (Delay Slot)
    ctx->f[27] = FPU_MUL_S(ctx->f[27], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x190090u;
label_190090:
    // 0x190090: 0xc6610020  lwc1        $f1, 0x20($s3)
    ctx->pc = 0x190090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_190094:
    // 0x190094: 0x4601d801  sub.s       $f0, $f27, $f1
    ctx->pc = 0x190094u;
    ctx->f[0] = FPU_SUB_S(ctx->f[27], ctx->f[1]);
label_190098:
    // 0x190098: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x190098u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
label_19009c:
    // 0x19009c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19009cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1900a0:
    // 0x1900a0: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x1900a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
label_1900a4:
    // 0x1900a4: 0xc7ad0078  lwc1        $f13, 0x78($sp)
    ctx->pc = 0x1900a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1900a8:
    // 0x1900a8: 0xc06d51e  jal         func_1B5478
label_1900ac:
    if (ctx->pc == 0x1900ACu) {
        ctx->pc = 0x1900ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1900A8u;
        // 0x1900ac: 0xc7ac0070  lwc1        $f12, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1900B0u;
        goto label_1900b0;
    }
    ctx->pc = 0x1900A8u;
    SET_GPR_U32(ctx, 31, 0x1900B0u);
    ctx->pc = 0x1900ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1900A8u;
    // 0x1900ac: 0xc7ac0070  lwc1        $f12, 0x70($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x1900B0u;
label_1900b0:
    // 0x1900b0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1900b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1900b4:
    // 0x1900b4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1900b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1900b8:
    // 0x1900b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1900b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1900bc:
    // 0x1900bc: 0x0  nop
    ctx->pc = 0x1900bcu;
    // NOP
label_1900c0:
    // 0x1900c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1900c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1900c4:
    // 0x1900c4: 0x0  nop
    ctx->pc = 0x1900c4u;
    // NOP
label_1900c8:
    // 0x1900c8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1900cc:
    if (ctx->pc == 0x1900CCu) {
        ctx->pc = 0x1900CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1900C8u;
        // 0x1900cc: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1900D0u;
        goto label_1900d0;
    }
    ctx->pc = 0x1900C8u;
    {
        const bool branch_taken_0x1900c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1900CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1900C8u;
        // 0x1900cc: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1900c8) {
            ctx->pc = 0x1900E4u;
            goto label_1900e4;
        }
    }
    ctx->pc = 0x1900D0u;
label_1900d0:
    // 0x1900d0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1900d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1900d4:
    // 0x1900d4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1900d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1900d8:
    // 0x1900d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1900d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1900dc:
    // 0x1900dc: 0x1000000d  b           . + 4 + (0xD << 2)
label_1900e0:
    if (ctx->pc == 0x1900E0u) {
        ctx->pc = 0x1900E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1900DCu;
        // 0x1900e0: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1900E4u;
        goto label_1900e4;
    }
    ctx->pc = 0x1900DCu;
    {
        const bool branch_taken_0x1900dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1900E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1900DCu;
        // 0x1900e0: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1900dc) {
            ctx->pc = 0x190114u;
            goto label_190114;
        }
    }
    ctx->pc = 0x1900E4u;
label_1900e4:
    // 0x1900e4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1900e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1900e8:
    // 0x1900e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1900e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1900ec:
    // 0x1900ec: 0x0  nop
    ctx->pc = 0x1900ecu;
    // NOP
label_1900f0:
    // 0x1900f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1900f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1900f4:
    // 0x1900f4: 0x0  nop
    ctx->pc = 0x1900f4u;
    // NOP
label_1900f8:
    // 0x1900f8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1900fc:
    if (ctx->pc == 0x1900FCu) {
        ctx->pc = 0x190100u;
        goto label_190100;
    }
    ctx->pc = 0x1900F8u;
    {
        const bool branch_taken_0x1900f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1900f8) {
            ctx->pc = 0x190114u;
            goto label_190114;
        }
    }
    ctx->pc = 0x190100u;
label_190100:
    // 0x190100: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x190100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_190104:
    // 0x190104: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x190104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_190108:
    // 0x190108: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x190108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19010c:
    // 0x19010c: 0x0  nop
    ctx->pc = 0x19010cu;
    // NOP
label_190110:
    // 0x190110: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x190110u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_190114:
    // 0x190114: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x190114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_190118:
    // 0x190118: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x190118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_19011c:
    // 0x19011c: 0xe6600024  swc1        $f0, 0x24($s3)
    ctx->pc = 0x19011cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
label_190120:
    // 0x190120: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x190120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
label_190124:
    // 0x190124: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x190124u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_190128:
    // 0x190128: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x190128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_19012c:
    // 0x19012c: 0xc066e44  jal         func_19B910
label_190130:
    if (ctx->pc == 0x190130u) {
        ctx->pc = 0x190130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19012Cu;
        // 0x190130: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190134u;
        goto label_190134;
    }
    ctx->pc = 0x19012Cu;
    SET_GPR_U32(ctx, 31, 0x190134u);
    ctx->pc = 0x190130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19012Cu;
    // 0x190130: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x190134u;
label_190134:
    // 0x190134: 0xc66c0028  lwc1        $f12, 0x28($s3)
    ctx->pc = 0x190134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_190138:
    // 0x190138: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x190138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_19013c:
    // 0x19013c: 0xc066e6c  jal         func_19B9B0
label_190140:
    if (ctx->pc == 0x190140u) {
        ctx->pc = 0x190140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19013Cu;
        // 0x190140: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190144u;
        goto label_190144;
    }
    ctx->pc = 0x19013Cu;
    SET_GPR_U32(ctx, 31, 0x190144u);
    ctx->pc = 0x190140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19013Cu;
    // 0x190140: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x190144u;
label_190144:
    // 0x190144: 0xc66c0020  lwc1        $f12, 0x20($s3)
    ctx->pc = 0x190144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_190148:
    // 0x190148: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x190148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_19014c:
    // 0x19014c: 0xc066e96  jal         func_19BA58
label_190150:
    if (ctx->pc == 0x190150u) {
        ctx->pc = 0x190150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19014Cu;
        // 0x190150: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190154u;
        goto label_190154;
    }
    ctx->pc = 0x19014Cu;
    SET_GPR_U32(ctx, 31, 0x190154u);
    ctx->pc = 0x190150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19014Cu;
    // 0x190150: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x190154u;
label_190154:
    // 0x190154: 0xc66c0024  lwc1        $f12, 0x24($s3)
    ctx->pc = 0x190154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_190158:
    // 0x190158: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x190158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_19015c:
    // 0x19015c: 0xc066ec0  jal         func_19BB00
label_190160:
    if (ctx->pc == 0x190160u) {
        ctx->pc = 0x190160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19015Cu;
        // 0x190160: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190164u;
        goto label_190164;
    }
    ctx->pc = 0x19015Cu;
    SET_GPR_U32(ctx, 31, 0x190164u);
    ctx->pc = 0x190160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19015Cu;
    // 0x190160: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x190164u;
label_190164:
    // 0x190164: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x190164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_190168:
    // 0x190168: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x190168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_19016c:
    // 0x19016c: 0xc066d7a  jal         func_19B5E8
label_190170:
    if (ctx->pc == 0x190170u) {
        ctx->pc = 0x190170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19016Cu;
        // 0x190170: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190174u;
        goto label_190174;
    }
    ctx->pc = 0x19016Cu;
    SET_GPR_U32(ctx, 31, 0x190174u);
    ctx->pc = 0x190170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19016Cu;
    // 0x190170: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x190174u;
label_190174:
    // 0x190174: 0x26640040  addiu       $a0, $s3, 0x40
    ctx->pc = 0x190174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_190178:
    // 0x190178: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x190178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_19017c:
    // 0x19017c: 0xc066e02  jal         func_19B808
label_190180:
    if (ctx->pc == 0x190180u) {
        ctx->pc = 0x190180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19017Cu;
        // 0x190180: 0x27a60140  addiu       $a2, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190184u;
        goto label_190184;
    }
    ctx->pc = 0x19017Cu;
    SET_GPR_U32(ctx, 31, 0x190184u);
    ctx->pc = 0x190180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19017Cu;
    // 0x190180: 0x27a60140  addiu       $a2, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x190184u;
label_190184:
    // 0x190184: 0xc066e44  jal         func_19B910
label_190188:
    if (ctx->pc == 0x190188u) {
        ctx->pc = 0x190188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190184u;
        // 0x190188: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19018Cu;
        goto label_19018c;
    }
    ctx->pc = 0x190184u;
    SET_GPR_U32(ctx, 31, 0x19018Cu);
    ctx->pc = 0x190188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190184u;
    // 0x190188: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x19018Cu;
label_19018c:
    // 0x19018c: 0xc66c0028  lwc1        $f12, 0x28($s3)
    ctx->pc = 0x19018cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_190190:
    // 0x190190: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x190190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_190194:
    // 0x190194: 0xc066e6c  jal         func_19B9B0
label_190198:
    if (ctx->pc == 0x190198u) {
        ctx->pc = 0x190198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190194u;
        // 0x190198: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19019Cu;
        goto label_19019c;
    }
    ctx->pc = 0x190194u;
    SET_GPR_U32(ctx, 31, 0x19019Cu);
    ctx->pc = 0x190198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190194u;
    // 0x190198: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x19019Cu;
label_19019c:
    // 0x19019c: 0xc66c0020  lwc1        $f12, 0x20($s3)
    ctx->pc = 0x19019cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1901a0:
    // 0x1901a0: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1901a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1901a4:
    // 0x1901a4: 0xc066e96  jal         func_19BA58
label_1901a8:
    if (ctx->pc == 0x1901A8u) {
        ctx->pc = 0x1901A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1901A4u;
        // 0x1901a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1901ACu;
        goto label_1901ac;
    }
    ctx->pc = 0x1901A4u;
    SET_GPR_U32(ctx, 31, 0x1901ACu);
    ctx->pc = 0x1901A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1901A4u;
    // 0x1901a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x1901ACu;
label_1901ac:
    // 0x1901ac: 0xc66c0024  lwc1        $f12, 0x24($s3)
    ctx->pc = 0x1901acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1901b0:
    // 0x1901b0: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1901b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1901b4:
    // 0x1901b4: 0xc066ec0  jal         func_19BB00
label_1901b8:
    if (ctx->pc == 0x1901B8u) {
        ctx->pc = 0x1901B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1901B4u;
        // 0x1901b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1901BCu;
        goto label_1901bc;
    }
    ctx->pc = 0x1901B4u;
    SET_GPR_U32(ctx, 31, 0x1901BCu);
    ctx->pc = 0x1901B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1901B4u;
    // 0x1901b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x1901BCu;
label_1901bc:
    // 0x1901bc: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x1901bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
label_1901c0:
    // 0x1901c0: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x1901c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1901c4:
    // 0x1901c4: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1901c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1901c8:
    // 0x1901c8: 0xc066d7a  jal         func_19B5E8
label_1901cc:
    if (ctx->pc == 0x1901CCu) {
        ctx->pc = 0x1901CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1901C8u;
        // 0x1901cc: 0x24c62f70  addiu       $a2, $a2, 0x2F70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1901D0u;
        goto label_1901d0;
    }
    ctx->pc = 0x1901C8u;
    SET_GPR_U32(ctx, 31, 0x1901D0u);
    ctx->pc = 0x1901CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1901C8u;
    // 0x1901cc: 0x24c62f70  addiu       $a2, $a2, 0x2F70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x1901D0u;
label_1901d0:
    // 0x1901d0: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x1901d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
label_1901d4:
    // 0x1901d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1901d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1901d8:
    // 0x1901d8: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1901d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1901dc:
    // 0x1901dc: 0xc066d7a  jal         func_19B5E8
label_1901e0:
    if (ctx->pc == 0x1901E0u) {
        ctx->pc = 0x1901E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1901DCu;
        // 0x1901e0: 0x24c62f80  addiu       $a2, $a2, 0x2F80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1901E4u;
        goto label_1901e4;
    }
    ctx->pc = 0x1901DCu;
    SET_GPR_U32(ctx, 31, 0x1901E4u);
    ctx->pc = 0x1901E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1901DCu;
    // 0x1901e0: 0x24c62f80  addiu       $a2, $a2, 0x2F80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x1901E4u;
label_1901e4:
    // 0x1901e4: 0x8e6300e8  lw          $v1, 0xE8($s3)
    ctx->pc = 0x1901e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 232)));
label_1901e8:
    // 0x1901e8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1901e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1901ec:
    // 0x1901ec: 0x24429c40  addiu       $v0, $v0, -0x63C0
    ctx->pc = 0x1901ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941760));
label_1901f0:
    // 0x1901f0: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x1901f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_1901f4:
    // 0x1901f4: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x1901f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1901f8:
    // 0x1901f8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1901f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1901fc:
    // 0x1901fc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1901fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_190200:
    // 0x190200: 0xc066f08  jal         func_19BC20
label_190204:
    if (ctx->pc == 0x190204u) {
        ctx->pc = 0x190204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190200u;
        // 0x190204: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190208u;
        goto label_190208;
    }
    ctx->pc = 0x190200u;
    SET_GPR_U32(ctx, 31, 0x190208u);
    ctx->pc = 0x190204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190200u;
    // 0x190204: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BC20u;
    { ctx->pc = 0x19bc20; return; }
    ctx->pc = 0x190208u;
label_190208:
    // 0x190208: 0xc064294  jal         func_190A50
label_19020c:
    if (ctx->pc == 0x19020Cu) {
        ctx->pc = 0x19020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190208u;
        // 0x19020c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190210u;
        goto label_190210;
    }
    ctx->pc = 0x190208u;
    SET_GPR_U32(ctx, 31, 0x190210u);
    ctx->pc = 0x19020Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190208u;
    // 0x19020c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190A50u;
    { ctx->pc = 0x190a50; return; }
    ctx->pc = 0x190210u;
label_190210:
    // 0x190210: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x190210u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190214:
    // 0x190214: 0x0  nop
    ctx->pc = 0x190214u;
    // NOP
label_190218:
    // 0x190218: 0x46170032  c.eq.s      $f0, $f23
    ctx->pc = 0x190218u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19021c:
    // 0x19021c: 0x0  nop
    ctx->pc = 0x19021cu;
    // NOP
label_190220:
    // 0x190220: 0x45010057  bc1t        . + 4 + (0x57 << 2)
label_190224:
    if (ctx->pc == 0x190224u) {
        ctx->pc = 0x190224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190220u;
        // 0x190224: 0x3c0242a0  lui         $v0, 0x42A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190228u;
        goto label_190228;
    }
    ctx->pc = 0x190220u;
    {
        const bool branch_taken_0x190220 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x190224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190220u;
        // 0x190224: 0x3c0242a0  lui         $v0, 0x42A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190220) {
            ctx->pc = 0x190380u;
            goto label_190380;
        }
    }
    ctx->pc = 0x190228u;
label_190228:
    // 0x190228: 0x26620030  addiu       $v0, $s3, 0x30
    ctx->pc = 0x190228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_19022c:
    // 0x19022c: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x19022cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_190230:
    // 0x190230: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x190230u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_190234:
    // 0x190234: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x190234u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_190238:
    // 0x190238: 0x4a0002ff  vnop
    ctx->pc = 0x190238u;
    // NOP operation, no action needed for VU0
label_19023c:
    // 0x19023c: 0x4a0002ff  vnop
    ctx->pc = 0x19023cu;
    // NOP operation, no action needed for VU0
label_190240:
    // 0x190240: 0x4a0002ff  vnop
    ctx->pc = 0x190240u;
    // NOP operation, no action needed for VU0
label_190244:
    // 0x190244: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x190244u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_190248:
    // 0x190248: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x190248u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_19024c:
    // 0x19024c: 0x4a0002ff  vnop
    ctx->pc = 0x19024cu;
    // NOP operation, no action needed for VU0
label_190250:
    // 0x190250: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x190250u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_190254:
    // 0x190254: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x190254u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_190258:
    // 0x190258: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x190258u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19025c:
    // 0x19025c: 0x4a0002ff  vnop
    ctx->pc = 0x19025cu;
    // NOP operation, no action needed for VU0
label_190260:
    // 0x190260: 0x4a0002ff  vnop
    ctx->pc = 0x190260u;
    // NOP operation, no action needed for VU0
label_190264:
    // 0x190264: 0x4a0002ff  vnop
    ctx->pc = 0x190264u;
    // NOP operation, no action needed for VU0
label_190268:
    // 0x190268: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x190268u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_19026c:
    // 0x19026c: 0x4a0003bf  vwaitq
    ctx->pc = 0x19026cu;
    // VWAITQ (Q already resolved in this runtime)
label_190270:
    // 0x190270: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x190270u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_190274:
    // 0x190274: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x190274u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_190278:
    // 0x190278: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x190278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
label_19027c:
    // 0x19027c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19027cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190280:
    // 0x190280: 0x0  nop
    ctx->pc = 0x190280u;
    // NOP
label_190284:
    // 0x190284: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x190284u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_190288:
    // 0x190288: 0x0  nop
    ctx->pc = 0x190288u;
    // NOP
label_19028c:
    // 0x19028c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_190290:
    if (ctx->pc == 0x190290u) {
        ctx->pc = 0x190290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19028Cu;
        // 0x190290: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190294u;
        goto label_190294;
    }
    ctx->pc = 0x19028Cu;
    {
        const bool branch_taken_0x19028c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x190290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19028Cu;
        // 0x190290: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19028c) {
            ctx->pc = 0x1902ACu;
            goto label_1902ac;
        }
    }
    ctx->pc = 0x190294u;
label_190294:
    // 0x190294: 0xc6610054  lwc1        $f1, 0x54($s3)
    ctx->pc = 0x190294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_190298:
    // 0x190298: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x190298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19029c:
    // 0x19029c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19029cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1902a0:
    // 0x1902a0: 0x0  nop
    ctx->pc = 0x1902a0u;
    // NOP
label_1902a4:
    // 0x1902a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1902a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1902a8:
    // 0x1902a8: 0xe6600034  swc1        $f0, 0x34($s3)
    ctx->pc = 0x1902a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
label_1902ac:
    // 0x1902ac: 0x26650040  addiu       $a1, $s3, 0x40
    ctx->pc = 0x1902acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_1902b0:
    // 0x1902b0: 0xc066e08  jal         func_19B820
label_1902b4:
    if (ctx->pc == 0x1902B4u) {
        ctx->pc = 0x1902B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1902B0u;
        // 0x1902b4: 0x26660030  addiu       $a2, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1902B8u;
        goto label_1902b8;
    }
    ctx->pc = 0x1902B0u;
    SET_GPR_U32(ctx, 31, 0x1902B8u);
    ctx->pc = 0x1902B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1902B0u;
    // 0x1902b4: 0x26660030  addiu       $a2, $s3, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x1902B8u;
label_1902b8:
    // 0x1902b8: 0xc7a10190  lwc1        $f1, 0x190($sp)
    ctx->pc = 0x1902b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1902bc:
    // 0x1902bc: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x1902bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1902c0:
    // 0x1902c0: 0xc7ac0194  lwc1        $f12, 0x194($sp)
    ctx->pc = 0x1902c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1902c4:
    // 0x1902c4: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x1902c4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_1902c8:
    // 0x1902c8: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x1902c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_1902cc:
    // 0x1902cc: 0x46000344  c1          0x344
    ctx->pc = 0x1902ccu;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_1902d0:
    // 0x1902d0: 0x0  nop
    ctx->pc = 0x1902d0u;
    // NOP
label_1902d4:
    // 0x1902d4: 0x0  nop
    ctx->pc = 0x1902d4u;
    // NOP
label_1902d8:
    // 0x1902d8: 0xc06d51e  jal         func_1B5478
label_1902dc:
    if (ctx->pc == 0x1902DCu) {
        ctx->pc = 0x1902E0u;
        goto label_1902e0;
    }
    ctx->pc = 0x1902D8u;
    SET_GPR_U32(ctx, 31, 0x1902E0u);
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x1902E0u;
label_1902e0:
    // 0x1902e0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1902e0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1902e4:
    // 0x1902e4: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x1902e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
label_1902e8:
    // 0x1902e8: 0xc7ad0198  lwc1        $f13, 0x198($sp)
    ctx->pc = 0x1902e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1902ec:
    // 0x1902ec: 0xc06d51e  jal         func_1B5478
label_1902f0:
    if (ctx->pc == 0x1902F0u) {
        ctx->pc = 0x1902F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1902ECu;
        // 0x1902f0: 0xc7ac0190  lwc1        $f12, 0x190($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1902F4u;
        goto label_1902f4;
    }
    ctx->pc = 0x1902ECu;
    SET_GPR_U32(ctx, 31, 0x1902F4u);
    ctx->pc = 0x1902F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1902ECu;
    // 0x1902f0: 0xc7ac0190  lwc1        $f12, 0x190($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x1902F4u;
label_1902f4:
    // 0x1902f4: 0xe6600024  swc1        $f0, 0x24($s3)
    ctx->pc = 0x1902f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
label_1902f8:
    // 0x1902f8: 0xc066e44  jal         func_19B910
label_1902fc:
    if (ctx->pc == 0x1902FCu) {
        ctx->pc = 0x1902FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1902F8u;
        // 0x1902fc: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190300u;
        goto label_190300;
    }
    ctx->pc = 0x1902F8u;
    SET_GPR_U32(ctx, 31, 0x190300u);
    ctx->pc = 0x1902FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1902F8u;
    // 0x1902fc: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x190300u;
label_190300:
    // 0x190300: 0xc66c0028  lwc1        $f12, 0x28($s3)
    ctx->pc = 0x190300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_190304:
    // 0x190304: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x190304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_190308:
    // 0x190308: 0xc066e6c  jal         func_19B9B0
label_19030c:
    if (ctx->pc == 0x19030Cu) {
        ctx->pc = 0x19030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190308u;
        // 0x19030c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190310u;
        goto label_190310;
    }
    ctx->pc = 0x190308u;
    SET_GPR_U32(ctx, 31, 0x190310u);
    ctx->pc = 0x19030Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190308u;
    // 0x19030c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x190310u;
label_190310:
    // 0x190310: 0xc66c0020  lwc1        $f12, 0x20($s3)
    ctx->pc = 0x190310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_190314:
    // 0x190314: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x190314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_190318:
    // 0x190318: 0xc066e96  jal         func_19BA58
label_19031c:
    if (ctx->pc == 0x19031Cu) {
        ctx->pc = 0x19031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190318u;
        // 0x19031c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190320u;
        goto label_190320;
    }
    ctx->pc = 0x190318u;
    SET_GPR_U32(ctx, 31, 0x190320u);
    ctx->pc = 0x19031Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190318u;
    // 0x19031c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x190320u;
label_190320:
    // 0x190320: 0xc66c0024  lwc1        $f12, 0x24($s3)
    ctx->pc = 0x190320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_190324:
    // 0x190324: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x190324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_190328:
    // 0x190328: 0xc066ec0  jal         func_19BB00
label_19032c:
    if (ctx->pc == 0x19032Cu) {
        ctx->pc = 0x19032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190328u;
        // 0x19032c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190330u;
        goto label_190330;
    }
    ctx->pc = 0x190328u;
    SET_GPR_U32(ctx, 31, 0x190330u);
    ctx->pc = 0x19032Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190328u;
    // 0x19032c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x190330u;
label_190330:
    // 0x190330: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x190330u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
label_190334:
    // 0x190334: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x190334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_190338:
    // 0x190338: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x190338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_19033c:
    // 0x19033c: 0xc066d7a  jal         func_19B5E8
label_190340:
    if (ctx->pc == 0x190340u) {
        ctx->pc = 0x190340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19033Cu;
        // 0x190340: 0x24c62f70  addiu       $a2, $a2, 0x2F70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190344u;
        goto label_190344;
    }
    ctx->pc = 0x19033Cu;
    SET_GPR_U32(ctx, 31, 0x190344u);
    ctx->pc = 0x190340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19033Cu;
    // 0x190340: 0x24c62f70  addiu       $a2, $a2, 0x2F70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x190344u;
label_190344:
    // 0x190344: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x190344u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
label_190348:
    // 0x190348: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x190348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19034c:
    // 0x19034c: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x19034cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_190350:
    // 0x190350: 0xc066d7a  jal         func_19B5E8
label_190354:
    if (ctx->pc == 0x190354u) {
        ctx->pc = 0x190354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190350u;
        // 0x190354: 0x24c62f80  addiu       $a2, $a2, 0x2F80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190358u;
        goto label_190358;
    }
    ctx->pc = 0x190350u;
    SET_GPR_U32(ctx, 31, 0x190358u);
    ctx->pc = 0x190354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190350u;
    // 0x190354: 0x24c62f80  addiu       $a2, $a2, 0x2F80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x190358u;
label_190358:
    // 0x190358: 0x8e6300e8  lw          $v1, 0xE8($s3)
    ctx->pc = 0x190358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 232)));
label_19035c:
    // 0x19035c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x19035cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_190360:
    // 0x190360: 0x24429c40  addiu       $v0, $v0, -0x63C0
    ctx->pc = 0x190360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941760));
label_190364:
    // 0x190364: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x190364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_190368:
    // 0x190368: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x190368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_19036c:
    // 0x19036c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x19036cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_190370:
    // 0x190370: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x190370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_190374:
    // 0x190374: 0xc066f08  jal         func_19BC20
label_190378:
    if (ctx->pc == 0x190378u) {
        ctx->pc = 0x190378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190374u;
        // 0x190378: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19037Cu;
        goto label_19037c;
    }
    ctx->pc = 0x190374u;
    SET_GPR_U32(ctx, 31, 0x19037Cu);
    ctx->pc = 0x190378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190374u;
    // 0x190378: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BC20u;
    { ctx->pc = 0x19bc20; return; }
    ctx->pc = 0x19037Cu;
label_19037c:
    // 0x19037c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x19037cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_190380:
    // 0x190380: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190384:
    // 0x190384: 0x0  nop
    ctx->pc = 0x190384u;
    // NOP
label_190388:
    // 0x190388: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x190388u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19038c:
    // 0x19038c: 0x0  nop
    ctx->pc = 0x19038cu;
    // NOP
label_190390:
    // 0x190390: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_190394:
    if (ctx->pc == 0x190394u) {
        ctx->pc = 0x190394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190390u;
        // 0x190394: 0xaf808880  sw          $zero, -0x7780($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936704), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190398u;
        goto label_190398;
    }
    ctx->pc = 0x190390u;
    {
        const bool branch_taken_0x190390 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x190394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190390u;
        // 0x190394: 0xaf808880  sw          $zero, -0x7780($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936704), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190390) {
            ctx->pc = 0x1903A4u;
            goto label_1903a4;
        }
    }
    ctx->pc = 0x190398u;
label_190398:
    // 0x190398: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x190398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_19039c:
    // 0x19039c: 0x1000000f  b           . + 4 + (0xF << 2)
label_1903a0:
    if (ctx->pc == 0x1903A0u) {
        ctx->pc = 0x1903A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19039Cu;
        // 0x1903a0: 0xaf828880  sw          $v0, -0x7780($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1903A4u;
        goto label_1903a4;
    }
    ctx->pc = 0x19039Cu;
    {
        const bool branch_taken_0x19039c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1903A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19039Cu;
        // 0x1903a0: 0xaf828880  sw          $v0, -0x7780($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19039c) {
            ctx->pc = 0x1903DCu;
            goto label_1903dc;
        }
    }
    ctx->pc = 0x1903A4u;
label_1903a4:
    // 0x1903a4: 0x461aa834  c.lt.s      $f21, $f26
    ctx->pc = 0x1903a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1903a8:
    // 0x1903a8: 0x0  nop
    ctx->pc = 0x1903a8u;
    // NOP
label_1903ac:
    // 0x1903ac: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_1903b0:
    if (ctx->pc == 0x1903B0u) {
        ctx->pc = 0x1903B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903ACu;
        // 0x1903b0: 0x4600d081  sub.s       $f2, $f26, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[26], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1903B4u;
        goto label_1903b4;
    }
    ctx->pc = 0x1903ACu;
    {
        const bool branch_taken_0x1903ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1903B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903ACu;
        // 0x1903b0: 0x4600d081  sub.s       $f2, $f26, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[26], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1903ac) {
            ctx->pc = 0x1903DCu;
            goto label_1903dc;
        }
    }
    ctx->pc = 0x1903B4u;
label_1903b4:
    // 0x1903b4: 0x3c03c2c8  lui         $v1, 0xC2C8
    ctx->pc = 0x1903b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49864 << 16));
label_1903b8:
    // 0x1903b8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1903b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1903bc:
    // 0x1903bc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1903bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1903c0:
    // 0x1903c0: 0x4600a841  sub.s       $f1, $f21, $f0
    ctx->pc = 0x1903c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_1903c4:
    // 0x1903c4: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1903c4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
label_1903c8:
    // 0x1903c8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1903c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1903cc:
    // 0x1903cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1903ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1903d0:
    // 0x1903d0: 0x0  nop
    ctx->pc = 0x1903d0u;
    // NOP
label_1903d4:
    // 0x1903d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1903d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1903d8:
    // 0x1903d8: 0xe7808880  swc1        $f0, -0x7780($gp)
    ctx->pc = 0x1903d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936704), bits); }
label_1903dc:
    // 0x1903dc: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1903dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1903e0:
    // 0x1903e0: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x1903e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_1903e4:
    // 0x1903e4: 0xc7808880  lwc1        $f0, -0x7780($gp)
    ctx->pc = 0x1903e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1903e8:
    // 0x1903e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1903e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1903ec:
    // 0x1903ec: 0x26660030  addiu       $a2, $s3, 0x30
    ctx->pc = 0x1903ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_1903f0:
    // 0x1903f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1903f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1903f4:
    // 0x1903f4: 0xc066e08  jal         func_19B820
label_1903f8:
    if (ctx->pc == 0x1903F8u) {
        ctx->pc = 0x1903F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903F4u;
        // 0x1903f8: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1903FCu;
        goto label_1903fc;
    }
    ctx->pc = 0x1903F4u;
    SET_GPR_U32(ctx, 31, 0x1903FCu);
    ctx->pc = 0x1903F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1903F4u;
    // 0x1903f8: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x1903FCu;
label_1903fc:
    // 0x1903fc: 0x8e6300e8  lw          $v1, 0xE8($s3)
    ctx->pc = 0x1903fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 232)));
label_190400:
    // 0x190400: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x190400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_190404:
    // 0x190404: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x190404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_190408:
    // 0x190408: 0x24429c40  addiu       $v0, $v0, -0x63C0
    ctx->pc = 0x190408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941760));
label_19040c:
    // 0x19040c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x19040cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_190410:
    // 0x190410: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x190410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_190414:
    // 0x190414: 0xc066d7a  jal         func_19B5E8
label_190418:
    if (ctx->pc == 0x190418u) {
        ctx->pc = 0x190418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190414u;
        // 0x190418: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19041Cu;
        goto label_19041c;
    }
    ctx->pc = 0x190414u;
    SET_GPR_U32(ctx, 31, 0x19041Cu);
    ctx->pc = 0x190418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190414u;
    // 0x190418: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x19041Cu;
label_19041c:
    // 0x19041c: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x19041cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_190420:
    // 0x190420: 0xc066daa  jal         func_19B6A8
label_190424:
    if (ctx->pc == 0x190424u) {
        ctx->pc = 0x190424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190420u;
        // 0x190424: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190428u;
        goto label_190428;
    }
    ctx->pc = 0x190420u;
    SET_GPR_U32(ctx, 31, 0x190428u);
    ctx->pc = 0x190424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190420u;
    // 0x190424: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x190428u;
label_190428:
    // 0x190428: 0xc06d448  jal         func_1B5120
label_19042c:
    if (ctx->pc == 0x19042Cu) {
        ctx->pc = 0x19042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190428u;
        // 0x19042c: 0xc7ac01e4  lwc1        $f12, 0x1E4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x190430u;
        goto label_190430;
    }
    ctx->pc = 0x190428u;
    SET_GPR_U32(ctx, 31, 0x190430u);
    ctx->pc = 0x19042Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190428u;
    // 0x19042c: 0xc7ac01e4  lwc1        $f12, 0x1E4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x190430u;
label_190430:
    // 0x190430: 0xc66200c0  lwc1        $f2, 0xC0($s3)
    ctx->pc = 0x190430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_190434:
    // 0x190434: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x190434u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_190438:
    // 0x190438: 0x0  nop
    ctx->pc = 0x190438u;
    // NOP
label_19043c:
    // 0x19043c: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x190440u;
    return;
}
