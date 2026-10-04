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


void FUN_0017faa0_part329(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x21fd20u: goto label_21fd20;
        case 0x21fd24u: goto label_21fd24;
        case 0x21fd28u: goto label_21fd28;
        case 0x21fd2cu: goto label_21fd2c;
        case 0x21fd30u: goto label_21fd30;
        case 0x21fd34u: goto label_21fd34;
        case 0x21fd38u: goto label_21fd38;
        case 0x21fd3cu: goto label_21fd3c;
        case 0x21fd40u: goto label_21fd40;
        case 0x21fd44u: goto label_21fd44;
        case 0x21fd48u: goto label_21fd48;
        case 0x21fd4cu: goto label_21fd4c;
        case 0x21fd50u: goto label_21fd50;
        case 0x21fd54u: goto label_21fd54;
        case 0x21fd58u: goto label_21fd58;
        case 0x21fd5cu: goto label_21fd5c;
        case 0x21fd60u: goto label_21fd60;
        case 0x21fd64u: goto label_21fd64;
        case 0x21fd68u: goto label_21fd68;
        case 0x21fd6cu: goto label_21fd6c;
        case 0x21fd70u: goto label_21fd70;
        case 0x21fd74u: goto label_21fd74;
        case 0x21fd78u: goto label_21fd78;
        case 0x21fd7cu: goto label_21fd7c;
        case 0x21fd80u: goto label_21fd80;
        case 0x21fd84u: goto label_21fd84;
        case 0x21fd88u: goto label_21fd88;
        case 0x21fd8cu: goto label_21fd8c;
        case 0x21fd90u: goto label_21fd90;
        case 0x21fd94u: goto label_21fd94;
        case 0x21fd98u: goto label_21fd98;
        case 0x21fd9cu: goto label_21fd9c;
        case 0x21fda0u: goto label_21fda0;
        case 0x21fda4u: goto label_21fda4;
        case 0x21fda8u: goto label_21fda8;
        case 0x21fdacu: goto label_21fdac;
        case 0x21fdb0u: goto label_21fdb0;
        case 0x21fdb4u: goto label_21fdb4;
        case 0x21fdb8u: goto label_21fdb8;
        case 0x21fdbcu: goto label_21fdbc;
        case 0x21fdc0u: goto label_21fdc0;
        case 0x21fdc4u: goto label_21fdc4;
        case 0x21fdc8u: goto label_21fdc8;
        case 0x21fdccu: goto label_21fdcc;
        case 0x21fdd0u: goto label_21fdd0;
        case 0x21fdd4u: goto label_21fdd4;
        case 0x21fdd8u: goto label_21fdd8;
        case 0x21fddcu: goto label_21fddc;
        case 0x21fde0u: goto label_21fde0;
        case 0x21fde4u: goto label_21fde4;
        case 0x21fde8u: goto label_21fde8;
        case 0x21fdecu: goto label_21fdec;
        case 0x21fdf0u: goto label_21fdf0;
        case 0x21fdf4u: goto label_21fdf4;
        case 0x21fdf8u: goto label_21fdf8;
        case 0x21fdfcu: goto label_21fdfc;
        case 0x21fe00u: goto label_21fe00;
        case 0x21fe04u: goto label_21fe04;
        case 0x21fe08u: goto label_21fe08;
        case 0x21fe0cu: goto label_21fe0c;
        case 0x21fe10u: goto label_21fe10;
        case 0x21fe14u: goto label_21fe14;
        case 0x21fe18u: goto label_21fe18;
        case 0x21fe1cu: goto label_21fe1c;
        case 0x21fe20u: goto label_21fe20;
        case 0x21fe24u: goto label_21fe24;
        case 0x21fe28u: goto label_21fe28;
        case 0x21fe2cu: goto label_21fe2c;
        case 0x21fe30u: goto label_21fe30;
        case 0x21fe34u: goto label_21fe34;
        case 0x21fe38u: goto label_21fe38;
        case 0x21fe3cu: goto label_21fe3c;
        case 0x21fe40u: goto label_21fe40;
        case 0x21fe44u: goto label_21fe44;
        case 0x21fe48u: goto label_21fe48;
        case 0x21fe4cu: goto label_21fe4c;
        case 0x21fe50u: goto label_21fe50;
        case 0x21fe54u: goto label_21fe54;
        case 0x21fe58u: goto label_21fe58;
        case 0x21fe5cu: goto label_21fe5c;
        case 0x21fe60u: goto label_21fe60;
        case 0x21fe64u: goto label_21fe64;
        case 0x21fe68u: goto label_21fe68;
        case 0x21fe6cu: goto label_21fe6c;
        case 0x21fe70u: goto label_21fe70;
        case 0x21fe74u: goto label_21fe74;
        case 0x21fe78u: goto label_21fe78;
        case 0x21fe7cu: goto label_21fe7c;
        case 0x21fe80u: goto label_21fe80;
        case 0x21fe84u: goto label_21fe84;
        case 0x21fe88u: goto label_21fe88;
        case 0x21fe8cu: goto label_21fe8c;
        case 0x21fe90u: goto label_21fe90;
        case 0x21fe94u: goto label_21fe94;
        case 0x21fe98u: goto label_21fe98;
        case 0x21fe9cu: goto label_21fe9c;
        case 0x21fea0u: goto label_21fea0;
        case 0x21fea4u: goto label_21fea4;
        case 0x21fea8u: goto label_21fea8;
        case 0x21feacu: goto label_21feac;
        case 0x21feb0u: goto label_21feb0;
        case 0x21feb4u: goto label_21feb4;
        case 0x21feb8u: goto label_21feb8;
        case 0x21febcu: goto label_21febc;
        case 0x21fec0u: goto label_21fec0;
        case 0x21fec4u: goto label_21fec4;
        case 0x21fec8u: goto label_21fec8;
        case 0x21feccu: goto label_21fecc;
        case 0x21fed0u: goto label_21fed0;
        case 0x21fed4u: goto label_21fed4;
        case 0x21fed8u: goto label_21fed8;
        case 0x21fedcu: goto label_21fedc;
        case 0x21fee0u: goto label_21fee0;
        case 0x21fee4u: goto label_21fee4;
        case 0x21fee8u: goto label_21fee8;
        case 0x21feecu: goto label_21feec;
        case 0x21fef0u: goto label_21fef0;
        case 0x21fef4u: goto label_21fef4;
        case 0x21fef8u: goto label_21fef8;
        case 0x21fefcu: goto label_21fefc;
        case 0x21ff00u: goto label_21ff00;
        case 0x21ff04u: goto label_21ff04;
        case 0x21ff08u: goto label_21ff08;
        case 0x21ff0cu: goto label_21ff0c;
        case 0x21ff10u: goto label_21ff10;
        case 0x21ff14u: goto label_21ff14;
        case 0x21ff18u: goto label_21ff18;
        case 0x21ff1cu: goto label_21ff1c;
        case 0x21ff20u: goto label_21ff20;
        case 0x21ff24u: goto label_21ff24;
        case 0x21ff28u: goto label_21ff28;
        case 0x21ff2cu: goto label_21ff2c;
        case 0x21ff30u: goto label_21ff30;
        case 0x21ff34u: goto label_21ff34;
        case 0x21ff38u: goto label_21ff38;
        case 0x21ff3cu: goto label_21ff3c;
        case 0x21ff40u: goto label_21ff40;
        case 0x21ff44u: goto label_21ff44;
        case 0x21ff48u: goto label_21ff48;
        case 0x21ff4cu: goto label_21ff4c;
        case 0x21ff50u: goto label_21ff50;
        case 0x21ff54u: goto label_21ff54;
        case 0x21ff58u: goto label_21ff58;
        case 0x21ff5cu: goto label_21ff5c;
        case 0x21ff60u: goto label_21ff60;
        case 0x21ff64u: goto label_21ff64;
        case 0x21ff68u: goto label_21ff68;
        case 0x21ff6cu: goto label_21ff6c;
        case 0x21ff70u: goto label_21ff70;
        case 0x21ff74u: goto label_21ff74;
        case 0x21ff78u: goto label_21ff78;
        case 0x21ff7cu: goto label_21ff7c;
        case 0x21ff80u: goto label_21ff80;
        case 0x21ff84u: goto label_21ff84;
        case 0x21ff88u: goto label_21ff88;
        case 0x21ff8cu: goto label_21ff8c;
        case 0x21ff90u: goto label_21ff90;
        case 0x21ff94u: goto label_21ff94;
        case 0x21ff98u: goto label_21ff98;
        case 0x21ff9cu: goto label_21ff9c;
        case 0x21ffa0u: goto label_21ffa0;
        case 0x21ffa4u: goto label_21ffa4;
        case 0x21ffa8u: goto label_21ffa8;
        case 0x21ffacu: goto label_21ffac;
        case 0x21ffb0u: goto label_21ffb0;
        case 0x21ffb4u: goto label_21ffb4;
        case 0x21ffb8u: goto label_21ffb8;
        case 0x21ffbcu: goto label_21ffbc;
        case 0x21ffc0u: goto label_21ffc0;
        case 0x21ffc4u: goto label_21ffc4;
        case 0x21ffc8u: goto label_21ffc8;
        case 0x21ffccu: goto label_21ffcc;
        case 0x21ffd0u: goto label_21ffd0;
        case 0x21ffd4u: goto label_21ffd4;
        case 0x21ffd8u: goto label_21ffd8;
        case 0x21ffdcu: goto label_21ffdc;
        case 0x21ffe0u: goto label_21ffe0;
        case 0x21ffe4u: goto label_21ffe4;
        case 0x21ffe8u: goto label_21ffe8;
        case 0x21ffecu: goto label_21ffec;
        case 0x21fff0u: goto label_21fff0;
        case 0x21fff4u: goto label_21fff4;
        case 0x21fff8u: goto label_21fff8;
        case 0x21fffcu: goto label_21fffc;
        case 0x220000u: goto label_220000;
        case 0x220004u: goto label_220004;
        case 0x220008u: goto label_220008;
        case 0x22000cu: goto label_22000c;
        case 0x220010u: goto label_220010;
        case 0x220014u: goto label_220014;
        case 0x220018u: goto label_220018;
        case 0x22001cu: goto label_22001c;
        case 0x220020u: goto label_220020;
        case 0x220024u: goto label_220024;
        case 0x220028u: goto label_220028;
        case 0x22002cu: goto label_22002c;
        case 0x220030u: goto label_220030;
        case 0x220034u: goto label_220034;
        case 0x220038u: goto label_220038;
        case 0x22003cu: goto label_22003c;
        case 0x220040u: goto label_220040;
        case 0x220044u: goto label_220044;
        case 0x220048u: goto label_220048;
        case 0x22004cu: goto label_22004c;
        case 0x220050u: goto label_220050;
        case 0x220054u: goto label_220054;
        case 0x220058u: goto label_220058;
        case 0x22005cu: goto label_22005c;
        case 0x220060u: goto label_220060;
        case 0x220064u: goto label_220064;
        case 0x220068u: goto label_220068;
        case 0x22006cu: goto label_22006c;
        case 0x220070u: goto label_220070;
        case 0x220074u: goto label_220074;
        case 0x220078u: goto label_220078;
        case 0x22007cu: goto label_22007c;
        case 0x220080u: goto label_220080;
        case 0x220084u: goto label_220084;
        case 0x220088u: goto label_220088;
        case 0x22008cu: goto label_22008c;
        case 0x220090u: goto label_220090;
        case 0x220094u: goto label_220094;
        case 0x220098u: goto label_220098;
        case 0x22009cu: goto label_22009c;
        case 0x2200a0u: goto label_2200a0;
        case 0x2200a4u: goto label_2200a4;
        case 0x2200a8u: goto label_2200a8;
        case 0x2200acu: goto label_2200ac;
        case 0x2200b0u: goto label_2200b0;
        case 0x2200b4u: goto label_2200b4;
        case 0x2200b8u: goto label_2200b8;
        case 0x2200bcu: goto label_2200bc;
        case 0x2200c0u: goto label_2200c0;
        case 0x2200c4u: goto label_2200c4;
        case 0x2200c8u: goto label_2200c8;
        case 0x2200ccu: goto label_2200cc;
        case 0x2200d0u: goto label_2200d0;
        case 0x2200d4u: goto label_2200d4;
        case 0x2200d8u: goto label_2200d8;
        case 0x2200dcu: goto label_2200dc;
        case 0x2200e0u: goto label_2200e0;
        case 0x2200e4u: goto label_2200e4;
        case 0x2200e8u: goto label_2200e8;
        case 0x2200ecu: goto label_2200ec;
        case 0x2200f0u: goto label_2200f0;
        case 0x2200f4u: goto label_2200f4;
        case 0x2200f8u: goto label_2200f8;
        case 0x2200fcu: goto label_2200fc;
        case 0x220100u: goto label_220100;
        case 0x220104u: goto label_220104;
        case 0x220108u: goto label_220108;
        case 0x22010cu: goto label_22010c;
        case 0x220110u: goto label_220110;
        case 0x220114u: goto label_220114;
        case 0x220118u: goto label_220118;
        case 0x22011cu: goto label_22011c;
        case 0x220120u: goto label_220120;
        case 0x220124u: goto label_220124;
        case 0x220128u: goto label_220128;
        case 0x22012cu: goto label_22012c;
        case 0x220130u: goto label_220130;
        case 0x220134u: goto label_220134;
        case 0x220138u: goto label_220138;
        case 0x22013cu: goto label_22013c;
        case 0x220140u: goto label_220140;
        case 0x220144u: goto label_220144;
        case 0x220148u: goto label_220148;
        case 0x22014cu: goto label_22014c;
        case 0x220150u: goto label_220150;
        case 0x220154u: goto label_220154;
        case 0x220158u: goto label_220158;
        case 0x22015cu: goto label_22015c;
        case 0x220160u: goto label_220160;
        case 0x220164u: goto label_220164;
        case 0x220168u: goto label_220168;
        case 0x22016cu: goto label_22016c;
        case 0x220170u: goto label_220170;
        case 0x220174u: goto label_220174;
        case 0x220178u: goto label_220178;
        case 0x22017cu: goto label_22017c;
        case 0x220180u: goto label_220180;
        case 0x220184u: goto label_220184;
        case 0x220188u: goto label_220188;
        case 0x22018cu: goto label_22018c;
        case 0x220190u: goto label_220190;
        case 0x220194u: goto label_220194;
        case 0x220198u: goto label_220198;
        case 0x22019cu: goto label_22019c;
        case 0x2201a0u: goto label_2201a0;
        case 0x2201a4u: goto label_2201a4;
        case 0x2201a8u: goto label_2201a8;
        case 0x2201acu: goto label_2201ac;
        case 0x2201b0u: goto label_2201b0;
        case 0x2201b4u: goto label_2201b4;
        case 0x2201b8u: goto label_2201b8;
        case 0x2201bcu: goto label_2201bc;
        case 0x2201c0u: goto label_2201c0;
        case 0x2201c4u: goto label_2201c4;
        case 0x2201c8u: goto label_2201c8;
        case 0x2201ccu: goto label_2201cc;
        case 0x2201d0u: goto label_2201d0;
        case 0x2201d4u: goto label_2201d4;
        case 0x2201d8u: goto label_2201d8;
        case 0x2201dcu: goto label_2201dc;
        case 0x2201e0u: goto label_2201e0;
        case 0x2201e4u: goto label_2201e4;
        case 0x2201e8u: goto label_2201e8;
        case 0x2201ecu: goto label_2201ec;
        case 0x2201f0u: goto label_2201f0;
        case 0x2201f4u: goto label_2201f4;
        case 0x2201f8u: goto label_2201f8;
        case 0x2201fcu: goto label_2201fc;
        case 0x220200u: goto label_220200;
        case 0x220204u: goto label_220204;
        case 0x220208u: goto label_220208;
        case 0x22020cu: goto label_22020c;
        case 0x220210u: goto label_220210;
        case 0x220214u: goto label_220214;
        case 0x220218u: goto label_220218;
        case 0x22021cu: goto label_22021c;
        case 0x220220u: goto label_220220;
        case 0x220224u: goto label_220224;
        case 0x220228u: goto label_220228;
        case 0x22022cu: goto label_22022c;
        case 0x220230u: goto label_220230;
        case 0x220234u: goto label_220234;
        case 0x220238u: goto label_220238;
        case 0x22023cu: goto label_22023c;
        case 0x220240u: goto label_220240;
        case 0x220244u: goto label_220244;
        case 0x220248u: goto label_220248;
        case 0x22024cu: goto label_22024c;
        case 0x220250u: goto label_220250;
        case 0x220254u: goto label_220254;
        case 0x220258u: goto label_220258;
        case 0x22025cu: goto label_22025c;
        case 0x220260u: goto label_220260;
        case 0x220264u: goto label_220264;
        case 0x220268u: goto label_220268;
        case 0x22026cu: goto label_22026c;
        case 0x220270u: goto label_220270;
        case 0x220274u: goto label_220274;
        case 0x220278u: goto label_220278;
        case 0x22027cu: goto label_22027c;
        case 0x220280u: goto label_220280;
        case 0x220284u: goto label_220284;
        case 0x220288u: goto label_220288;
        case 0x22028cu: goto label_22028c;
        case 0x220290u: goto label_220290;
        case 0x220294u: goto label_220294;
        case 0x220298u: goto label_220298;
        case 0x22029cu: goto label_22029c;
        case 0x2202a0u: goto label_2202a0;
        case 0x2202a4u: goto label_2202a4;
        case 0x2202a8u: goto label_2202a8;
        case 0x2202acu: goto label_2202ac;
        case 0x2202b0u: goto label_2202b0;
        case 0x2202b4u: goto label_2202b4;
        case 0x2202b8u: goto label_2202b8;
        case 0x2202bcu: goto label_2202bc;
        case 0x2202c0u: goto label_2202c0;
        case 0x2202c4u: goto label_2202c4;
        case 0x2202c8u: goto label_2202c8;
        case 0x2202ccu: goto label_2202cc;
        case 0x2202d0u: goto label_2202d0;
        case 0x2202d4u: goto label_2202d4;
        case 0x2202d8u: goto label_2202d8;
        case 0x2202dcu: goto label_2202dc;
        case 0x2202e0u: goto label_2202e0;
        case 0x2202e4u: goto label_2202e4;
        case 0x2202e8u: goto label_2202e8;
        case 0x2202ecu: goto label_2202ec;
        case 0x2202f0u: goto label_2202f0;
        case 0x2202f4u: goto label_2202f4;
        case 0x2202f8u: goto label_2202f8;
        case 0x2202fcu: goto label_2202fc;
        case 0x220300u: goto label_220300;
        case 0x220304u: goto label_220304;
        case 0x220308u: goto label_220308;
        case 0x22030cu: goto label_22030c;
        case 0x220310u: goto label_220310;
        case 0x220314u: goto label_220314;
        case 0x220318u: goto label_220318;
        case 0x22031cu: goto label_22031c;
        case 0x220320u: goto label_220320;
        case 0x220324u: goto label_220324;
        case 0x220328u: goto label_220328;
        case 0x22032cu: goto label_22032c;
        case 0x220330u: goto label_220330;
        case 0x220334u: goto label_220334;
        case 0x220338u: goto label_220338;
        case 0x22033cu: goto label_22033c;
        case 0x220340u: goto label_220340;
        case 0x220344u: goto label_220344;
        case 0x220348u: goto label_220348;
        case 0x22034cu: goto label_22034c;
        case 0x220350u: goto label_220350;
        case 0x220354u: goto label_220354;
        case 0x220358u: goto label_220358;
        case 0x22035cu: goto label_22035c;
        case 0x220360u: goto label_220360;
        case 0x220364u: goto label_220364;
        case 0x220368u: goto label_220368;
        case 0x22036cu: goto label_22036c;
        case 0x220370u: goto label_220370;
        case 0x220374u: goto label_220374;
        case 0x220378u: goto label_220378;
        case 0x22037cu: goto label_22037c;
        case 0x220380u: goto label_220380;
        case 0x220384u: goto label_220384;
        case 0x220388u: goto label_220388;
        case 0x22038cu: goto label_22038c;
        case 0x220390u: goto label_220390;
        case 0x220394u: goto label_220394;
        case 0x220398u: goto label_220398;
        case 0x22039cu: goto label_22039c;
        case 0x2203a0u: goto label_2203a0;
        case 0x2203a4u: goto label_2203a4;
        case 0x2203a8u: goto label_2203a8;
        case 0x2203acu: goto label_2203ac;
        case 0x2203b0u: goto label_2203b0;
        case 0x2203b4u: goto label_2203b4;
        case 0x2203b8u: goto label_2203b8;
        case 0x2203bcu: goto label_2203bc;
        case 0x2203c0u: goto label_2203c0;
        case 0x2203c4u: goto label_2203c4;
        case 0x2203c8u: goto label_2203c8;
        case 0x2203ccu: goto label_2203cc;
        case 0x2203d0u: goto label_2203d0;
        case 0x2203d4u: goto label_2203d4;
        case 0x2203d8u: goto label_2203d8;
        case 0x2203dcu: goto label_2203dc;
        case 0x2203e0u: goto label_2203e0;
        case 0x2203e4u: goto label_2203e4;
        case 0x2203e8u: goto label_2203e8;
        case 0x2203ecu: goto label_2203ec;
        case 0x2203f0u: goto label_2203f0;
        case 0x2203f4u: goto label_2203f4;
        case 0x2203f8u: goto label_2203f8;
        case 0x2203fcu: goto label_2203fc;
        case 0x220400u: goto label_220400;
        case 0x220404u: goto label_220404;
        case 0x220408u: goto label_220408;
        case 0x22040cu: goto label_22040c;
        case 0x220410u: goto label_220410;
        case 0x220414u: goto label_220414;
        case 0x220418u: goto label_220418;
        case 0x22041cu: goto label_22041c;
        case 0x220420u: goto label_220420;
        case 0x220424u: goto label_220424;
        case 0x220428u: goto label_220428;
        case 0x22042cu: goto label_22042c;
        case 0x220430u: goto label_220430;
        case 0x220434u: goto label_220434;
        case 0x220438u: goto label_220438;
        case 0x22043cu: goto label_22043c;
        case 0x220440u: goto label_220440;
        case 0x220444u: goto label_220444;
        case 0x220448u: goto label_220448;
        case 0x22044cu: goto label_22044c;
        case 0x220450u: goto label_220450;
        case 0x220454u: goto label_220454;
        case 0x220458u: goto label_220458;
        case 0x22045cu: goto label_22045c;
        case 0x220460u: goto label_220460;
        case 0x220464u: goto label_220464;
        case 0x220468u: goto label_220468;
        case 0x22046cu: goto label_22046c;
        case 0x220470u: goto label_220470;
        case 0x220474u: goto label_220474;
        case 0x220478u: goto label_220478;
        case 0x22047cu: goto label_22047c;
        case 0x220480u: goto label_220480;
        case 0x220484u: goto label_220484;
        case 0x220488u: goto label_220488;
        case 0x22048cu: goto label_22048c;
        case 0x220490u: goto label_220490;
        case 0x220494u: goto label_220494;
        case 0x220498u: goto label_220498;
        case 0x22049cu: goto label_22049c;
        case 0x2204a0u: goto label_2204a0;
        case 0x2204a4u: goto label_2204a4;
        case 0x2204a8u: goto label_2204a8;
        case 0x2204acu: goto label_2204ac;
        case 0x2204b0u: goto label_2204b0;
        case 0x2204b4u: goto label_2204b4;
        case 0x2204b8u: goto label_2204b8;
        case 0x2204bcu: goto label_2204bc;
        case 0x2204c0u: goto label_2204c0;
        case 0x2204c4u: goto label_2204c4;
        case 0x2204c8u: goto label_2204c8;
        case 0x2204ccu: goto label_2204cc;
        case 0x2204d0u: goto label_2204d0;
        case 0x2204d4u: goto label_2204d4;
        case 0x2204d8u: goto label_2204d8;
        case 0x2204dcu: goto label_2204dc;
        case 0x2204e0u: goto label_2204e0;
        case 0x2204e4u: goto label_2204e4;
        case 0x2204e8u: goto label_2204e8;
        case 0x2204ecu: goto label_2204ec;
        default: return;
    }

label_21fd20:
    if (ctx->pc == 0x21FD20u) {
        ctx->pc = 0x21FD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD1Cu;
        // 0x21fd20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FD24u;
        goto label_21fd24;
    }
    ctx->pc = 0x21FD1Cu;
    SET_GPR_U32(ctx, 31, 0x21FD24u);
    ctx->pc = 0x21FD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD1Cu;
    // 0x21fd20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FD1Cu, 0x21FD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD24u;
label_21fd24:
    // 0x21fd24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_21fd28:
    if (ctx->pc == 0x21FD28u) {
        ctx->pc = 0x21FD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD24u;
        // 0x21fd28: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FD2Cu;
        goto label_21fd2c;
    }
    ctx->pc = 0x21FD24u;
    {
        const bool branch_taken_0x21fd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD24u;
        // 0x21fd28: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fd24) {
            ctx->pc = 0x21FD40u;
            goto label_21fd40;
        }
    }
    ctx->pc = 0x21FD2Cu;
label_21fd2c:
    // 0x21fd2c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x21fd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_21fd30:
    // 0x21fd30: 0xc0882f8  jal         func_220BE0
label_21fd34:
    if (ctx->pc == 0x21FD34u) {
        ctx->pc = 0x21FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD30u;
        // 0x21fd34: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FD38u;
        goto label_21fd38;
    }
    ctx->pc = 0x21FD30u;
    SET_GPR_U32(ctx, 31, 0x21FD38u);
    ctx->pc = 0x21FD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD30u;
    // 0x21fd34: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x21FD38u;
label_21fd38:
    // 0x21fd38: 0x100001d5  b           . + 4 + (0x1D5 << 2)
label_21fd3c:
    if (ctx->pc == 0x21FD3Cu) {
        ctx->pc = 0x21FD40u;
        goto label_21fd40;
    }
    ctx->pc = 0x21FD38u;
    {
        const bool branch_taken_0x21fd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fd38) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FD40u;
label_21fd40:
    // 0x21fd40: 0xc084af4  jal         func_212BD0
label_21fd44:
    if (ctx->pc == 0x21FD44u) {
        ctx->pc = 0x21FD48u;
        goto label_21fd48;
    }
    ctx->pc = 0x21FD40u;
    SET_GPR_U32(ctx, 31, 0x21FD48u);
    ctx->pc = 0x212BD0u;
    { ctx->pc = 0x212bd0; return; }
    ctx->pc = 0x21FD48u;
label_21fd48:
    // 0x21fd48: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_21fd4c:
    if (ctx->pc == 0x21FD4Cu) {
        ctx->pc = 0x21FD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD48u;
        // 0x21fd4c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FD50u;
        goto label_21fd50;
    }
    ctx->pc = 0x21FD48u;
    {
        const bool branch_taken_0x21fd48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD48u;
        // 0x21fd4c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fd48) {
            ctx->pc = 0x21FD68u;
            goto label_21fd68;
        }
    }
    ctx->pc = 0x21FD50u;
label_21fd50:
    // 0x21fd50: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x21fd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_21fd54:
    // 0x21fd54: 0xc056ff8  jal         func_15BFE0
label_21fd58:
    if (ctx->pc == 0x21FD58u) {
        ctx->pc = 0x21FD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD54u;
        // 0x21fd58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FD5Cu;
        goto label_21fd5c;
    }
    ctx->pc = 0x21FD54u;
    SET_GPR_U32(ctx, 31, 0x21FD5Cu);
    ctx->pc = 0x21FD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD54u;
    // 0x21fd58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FD54u, 0x21FD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD5Cu;
label_21fd5c:
    // 0x21fd5c: 0x104001cc  beqz        $v0, . + 4 + (0x1CC << 2)
label_21fd60:
    if (ctx->pc == 0x21FD60u) {
        ctx->pc = 0x21FD64u;
        goto label_21fd64;
    }
    ctx->pc = 0x21FD5Cu;
    {
        const bool branch_taken_0x21fd5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fd5c) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FD64u;
label_21fd64:
    // 0x21fd64: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x21fd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_21fd68:
    // 0x21fd68: 0xc0882f8  jal         func_220BE0
label_21fd6c:
    if (ctx->pc == 0x21FD6Cu) {
        ctx->pc = 0x21FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD68u;
        // 0x21fd6c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FD70u;
        goto label_21fd70;
    }
    ctx->pc = 0x21FD68u;
    SET_GPR_U32(ctx, 31, 0x21FD70u);
    ctx->pc = 0x21FD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD68u;
    // 0x21fd6c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x21FD70u;
label_21fd70:
    // 0x21fd70: 0x100001c7  b           . + 4 + (0x1C7 << 2)
label_21fd74:
    if (ctx->pc == 0x21FD74u) {
        ctx->pc = 0x21FD78u;
        goto label_21fd78;
    }
    ctx->pc = 0x21FD70u;
    {
        const bool branch_taken_0x21fd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fd70) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FD78u;
label_21fd78:
    // 0x21fd78: 0xc084af4  jal         func_212BD0
label_21fd7c:
    if (ctx->pc == 0x21FD7Cu) {
        ctx->pc = 0x21FD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD78u;
        // 0x21fd7c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FD80u;
        goto label_21fd80;
    }
    ctx->pc = 0x21FD78u;
    SET_GPR_U32(ctx, 31, 0x21FD80u);
    ctx->pc = 0x21FD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD78u;
    // 0x21fd7c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    { ctx->pc = 0x212bd0; return; }
    ctx->pc = 0x21FD80u;
label_21fd80:
    // 0x21fd80: 0x104001c3  beqz        $v0, . + 4 + (0x1C3 << 2)
label_21fd84:
    if (ctx->pc == 0x21FD84u) {
        ctx->pc = 0x21FD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD80u;
        // 0x21fd84: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FD88u;
        goto label_21fd88;
    }
    ctx->pc = 0x21FD80u;
    {
        const bool branch_taken_0x21fd80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD80u;
        // 0x21fd84: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fd80) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FD88u;
label_21fd88:
    // 0x21fd88: 0xc0882f8  jal         func_220BE0
label_21fd8c:
    if (ctx->pc == 0x21FD8Cu) {
        ctx->pc = 0x21FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD88u;
        // 0x21fd8c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FD90u;
        goto label_21fd90;
    }
    ctx->pc = 0x21FD88u;
    SET_GPR_U32(ctx, 31, 0x21FD90u);
    ctx->pc = 0x21FD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD88u;
    // 0x21fd8c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x21FD90u;
label_21fd90:
    // 0x21fd90: 0x100001bf  b           . + 4 + (0x1BF << 2)
label_21fd94:
    if (ctx->pc == 0x21FD94u) {
        ctx->pc = 0x21FD98u;
        goto label_21fd98;
    }
    ctx->pc = 0x21FD90u;
    {
        const bool branch_taken_0x21fd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fd90) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FD98u;
label_21fd98:
    // 0x21fd98: 0xc084af4  jal         func_212BD0
label_21fd9c:
    if (ctx->pc == 0x21FD9Cu) {
        ctx->pc = 0x21FD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD98u;
        // 0x21fd9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FDA0u;
        goto label_21fda0;
    }
    ctx->pc = 0x21FD98u;
    SET_GPR_U32(ctx, 31, 0x21FDA0u);
    ctx->pc = 0x21FD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD98u;
    // 0x21fd9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    { ctx->pc = 0x212bd0; return; }
    ctx->pc = 0x21FDA0u;
label_21fda0:
    // 0x21fda0: 0x104001bb  beqz        $v0, . + 4 + (0x1BB << 2)
label_21fda4:
    if (ctx->pc == 0x21FDA4u) {
        ctx->pc = 0x21FDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDA0u;
        // 0x21fda4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FDA8u;
        goto label_21fda8;
    }
    ctx->pc = 0x21FDA0u;
    {
        const bool branch_taken_0x21fda0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDA0u;
        // 0x21fda4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fda0) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FDA8u;
label_21fda8:
    // 0x21fda8: 0xc0882f8  jal         func_220BE0
label_21fdac:
    if (ctx->pc == 0x21FDACu) {
        ctx->pc = 0x21FDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDA8u;
        // 0x21fdac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FDB0u;
        goto label_21fdb0;
    }
    ctx->pc = 0x21FDA8u;
    SET_GPR_U32(ctx, 31, 0x21FDB0u);
    ctx->pc = 0x21FDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FDA8u;
    // 0x21fdac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x21FDB0u;
label_21fdb0:
    // 0x21fdb0: 0x100001b7  b           . + 4 + (0x1B7 << 2)
label_21fdb4:
    if (ctx->pc == 0x21FDB4u) {
        ctx->pc = 0x21FDB8u;
        goto label_21fdb8;
    }
    ctx->pc = 0x21FDB0u;
    {
        const bool branch_taken_0x21fdb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fdb0) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FDB8u;
label_21fdb8:
    // 0x21fdb8: 0xc084af4  jal         func_212BD0
label_21fdbc:
    if (ctx->pc == 0x21FDBCu) {
        ctx->pc = 0x21FDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDB8u;
        // 0x21fdbc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FDC0u;
        goto label_21fdc0;
    }
    ctx->pc = 0x21FDB8u;
    SET_GPR_U32(ctx, 31, 0x21FDC0u);
    ctx->pc = 0x21FDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FDB8u;
    // 0x21fdbc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    { ctx->pc = 0x212bd0; return; }
    ctx->pc = 0x21FDC0u;
label_21fdc0:
    // 0x21fdc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_21fdc4:
    if (ctx->pc == 0x21FDC4u) {
        ctx->pc = 0x21FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDC0u;
        // 0x21fdc4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FDC8u;
        goto label_21fdc8;
    }
    ctx->pc = 0x21FDC0u;
    {
        const bool branch_taken_0x21fdc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDC0u;
        // 0x21fdc4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fdc0) {
            ctx->pc = 0x21FDD8u;
            goto label_21fdd8;
        }
    }
    ctx->pc = 0x21FDC8u;
label_21fdc8:
    // 0x21fdc8: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x21fdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_21fdcc:
    // 0x21fdcc: 0xc0882f8  jal         func_220BE0
label_21fdd0:
    if (ctx->pc == 0x21FDD0u) {
        ctx->pc = 0x21FDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDCCu;
        // 0x21fdd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FDD4u;
        goto label_21fdd4;
    }
    ctx->pc = 0x21FDCCu;
    SET_GPR_U32(ctx, 31, 0x21FDD4u);
    ctx->pc = 0x21FDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FDCCu;
    // 0x21fdd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x21FDD4u;
label_21fdd4:
    // 0x21fdd4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x21fdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_21fdd8:
    // 0x21fdd8: 0xc084af4  jal         func_212BD0
label_21fddc:
    if (ctx->pc == 0x21FDDCu) {
        ctx->pc = 0x21FDE0u;
        goto label_21fde0;
    }
    ctx->pc = 0x21FDD8u;
    SET_GPR_U32(ctx, 31, 0x21FDE0u);
    ctx->pc = 0x212BD0u;
    { ctx->pc = 0x212bd0; return; }
    ctx->pc = 0x21FDE0u;
label_21fde0:
    // 0x21fde0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_21fde4:
    if (ctx->pc == 0x21FDE4u) {
        ctx->pc = 0x21FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDE0u;
        // 0x21fde4: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FDE8u;
        goto label_21fde8;
    }
    ctx->pc = 0x21FDE0u;
    {
        const bool branch_taken_0x21fde0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDE0u;
        // 0x21fde4: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fde0) {
            ctx->pc = 0x21FDF8u;
            goto label_21fdf8;
        }
    }
    ctx->pc = 0x21FDE8u;
label_21fde8:
    // 0x21fde8: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x21fde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_21fdec:
    // 0x21fdec: 0xc0882f8  jal         func_220BE0
label_21fdf0:
    if (ctx->pc == 0x21FDF0u) {
        ctx->pc = 0x21FDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDECu;
        // 0x21fdf0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FDF4u;
        goto label_21fdf4;
    }
    ctx->pc = 0x21FDECu;
    SET_GPR_U32(ctx, 31, 0x21FDF4u);
    ctx->pc = 0x21FDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FDECu;
    // 0x21fdf0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x21FDF4u;
label_21fdf4:
    // 0x21fdf4: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x21fdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_21fdf8:
    // 0x21fdf8: 0xc084af4  jal         func_212BD0
label_21fdfc:
    if (ctx->pc == 0x21FDFCu) {
        ctx->pc = 0x21FE00u;
        goto label_21fe00;
    }
    ctx->pc = 0x21FDF8u;
    SET_GPR_U32(ctx, 31, 0x21FE00u);
    ctx->pc = 0x212BD0u;
    { ctx->pc = 0x212bd0; return; }
    ctx->pc = 0x21FE00u;
label_21fe00:
    // 0x21fe00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_21fe04:
    if (ctx->pc == 0x21FE04u) {
        ctx->pc = 0x21FE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE00u;
        // 0x21fe04: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FE08u;
        goto label_21fe08;
    }
    ctx->pc = 0x21FE00u;
    {
        const bool branch_taken_0x21fe00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE00u;
        // 0x21fe04: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe00) {
            ctx->pc = 0x21FE18u;
            goto label_21fe18;
        }
    }
    ctx->pc = 0x21FE08u;
label_21fe08:
    // 0x21fe08: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x21fe08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_21fe0c:
    // 0x21fe0c: 0xc0882f8  jal         func_220BE0
label_21fe10:
    if (ctx->pc == 0x21FE10u) {
        ctx->pc = 0x21FE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE0Cu;
        // 0x21fe10: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FE14u;
        goto label_21fe14;
    }
    ctx->pc = 0x21FE0Cu;
    SET_GPR_U32(ctx, 31, 0x21FE14u);
    ctx->pc = 0x21FE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE0Cu;
    // 0x21fe10: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x21FE14u;
label_21fe14:
    // 0x21fe14: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x21fe14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_21fe18:
    // 0x21fe18: 0xc084af4  jal         func_212BD0
label_21fe1c:
    if (ctx->pc == 0x21FE1Cu) {
        ctx->pc = 0x21FE20u;
        goto label_21fe20;
    }
    ctx->pc = 0x21FE18u;
    SET_GPR_U32(ctx, 31, 0x21FE20u);
    ctx->pc = 0x212BD0u;
    { ctx->pc = 0x212bd0; return; }
    ctx->pc = 0x21FE20u;
label_21fe20:
    // 0x21fe20: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_21fe24:
    if (ctx->pc == 0x21FE24u) {
        ctx->pc = 0x21FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE20u;
        // 0x21fe24: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FE28u;
        goto label_21fe28;
    }
    ctx->pc = 0x21FE20u;
    {
        const bool branch_taken_0x21fe20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE20u;
        // 0x21fe24: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe20) {
            ctx->pc = 0x21FE40u;
            goto label_21fe40;
        }
    }
    ctx->pc = 0x21FE28u;
label_21fe28:
    // 0x21fe28: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x21fe28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_21fe2c:
    // 0x21fe2c: 0xc056ff8  jal         func_15BFE0
label_21fe30:
    if (ctx->pc == 0x21FE30u) {
        ctx->pc = 0x21FE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE2Cu;
        // 0x21fe30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FE34u;
        goto label_21fe34;
    }
    ctx->pc = 0x21FE2Cu;
    SET_GPR_U32(ctx, 31, 0x21FE34u);
    ctx->pc = 0x21FE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE2Cu;
    // 0x21fe30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FE2Cu, 0x21FE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE34u;
label_21fe34:
    // 0x21fe34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_21fe38:
    if (ctx->pc == 0x21FE38u) {
        ctx->pc = 0x21FE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE34u;
        // 0x21fe38: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FE3Cu;
        goto label_21fe3c;
    }
    ctx->pc = 0x21FE34u;
    {
        const bool branch_taken_0x21fe34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE34u;
        // 0x21fe38: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe34) {
            ctx->pc = 0x21FE50u;
            goto label_21fe50;
        }
    }
    ctx->pc = 0x21FE3Cu;
label_21fe3c:
    // 0x21fe3c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x21fe3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_21fe40:
    // 0x21fe40: 0xc0882f8  jal         func_220BE0
label_21fe44:
    if (ctx->pc == 0x21FE44u) {
        ctx->pc = 0x21FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE40u;
        // 0x21fe44: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FE48u;
        goto label_21fe48;
    }
    ctx->pc = 0x21FE40u;
    SET_GPR_U32(ctx, 31, 0x21FE48u);
    ctx->pc = 0x21FE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE40u;
    // 0x21fe44: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x21FE48u;
label_21fe48:
    // 0x21fe48: 0x10000191  b           . + 4 + (0x191 << 2)
label_21fe4c:
    if (ctx->pc == 0x21FE4Cu) {
        ctx->pc = 0x21FE50u;
        goto label_21fe50;
    }
    ctx->pc = 0x21FE48u;
    {
        const bool branch_taken_0x21fe48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fe48) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FE50u;
label_21fe50:
    // 0x21fe50: 0xc084af4  jal         func_212BD0
label_21fe54:
    if (ctx->pc == 0x21FE54u) {
        ctx->pc = 0x21FE58u;
        goto label_21fe58;
    }
    ctx->pc = 0x21FE50u;
    SET_GPR_U32(ctx, 31, 0x21FE58u);
    ctx->pc = 0x212BD0u;
    { ctx->pc = 0x212bd0; return; }
    ctx->pc = 0x21FE58u;
label_21fe58:
    // 0x21fe58: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_21fe5c:
    if (ctx->pc == 0x21FE5Cu) {
        ctx->pc = 0x21FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE58u;
        // 0x21fe5c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FE60u;
        goto label_21fe60;
    }
    ctx->pc = 0x21FE58u;
    {
        const bool branch_taken_0x21fe58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE58u;
        // 0x21fe5c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe58) {
            ctx->pc = 0x21FE78u;
            goto label_21fe78;
        }
    }
    ctx->pc = 0x21FE60u;
label_21fe60:
    // 0x21fe60: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x21fe60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_21fe64:
    // 0x21fe64: 0xc056ff8  jal         func_15BFE0
label_21fe68:
    if (ctx->pc == 0x21FE68u) {
        ctx->pc = 0x21FE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE64u;
        // 0x21fe68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FE6Cu;
        goto label_21fe6c;
    }
    ctx->pc = 0x21FE64u;
    SET_GPR_U32(ctx, 31, 0x21FE6Cu);
    ctx->pc = 0x21FE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE64u;
    // 0x21fe68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FE64u, 0x21FE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE6Cu;
label_21fe6c:
    // 0x21fe6c: 0x10400188  beqz        $v0, . + 4 + (0x188 << 2)
label_21fe70:
    if (ctx->pc == 0x21FE70u) {
        ctx->pc = 0x21FE74u;
        goto label_21fe74;
    }
    ctx->pc = 0x21FE6Cu;
    {
        const bool branch_taken_0x21fe6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fe6c) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FE74u;
label_21fe74:
    // 0x21fe74: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x21fe74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_21fe78:
    // 0x21fe78: 0xc0882f8  jal         func_220BE0
label_21fe7c:
    if (ctx->pc == 0x21FE7Cu) {
        ctx->pc = 0x21FE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE78u;
        // 0x21fe7c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FE80u;
        goto label_21fe80;
    }
    ctx->pc = 0x21FE78u;
    SET_GPR_U32(ctx, 31, 0x21FE80u);
    ctx->pc = 0x21FE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE78u;
    // 0x21fe7c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x21FE80u;
label_21fe80:
    // 0x21fe80: 0x10000183  b           . + 4 + (0x183 << 2)
label_21fe84:
    if (ctx->pc == 0x21FE84u) {
        ctx->pc = 0x21FE88u;
        goto label_21fe88;
    }
    ctx->pc = 0x21FE80u;
    {
        const bool branch_taken_0x21fe80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fe80) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FE88u;
label_21fe88:
    // 0x21fe88: 0xc084af4  jal         func_212BD0
label_21fe8c:
    if (ctx->pc == 0x21FE8Cu) {
        ctx->pc = 0x21FE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE88u;
        // 0x21fe8c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FE90u;
        goto label_21fe90;
    }
    ctx->pc = 0x21FE88u;
    SET_GPR_U32(ctx, 31, 0x21FE90u);
    ctx->pc = 0x21FE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE88u;
    // 0x21fe8c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    { ctx->pc = 0x212bd0; return; }
    ctx->pc = 0x21FE90u;
label_21fe90:
    // 0x21fe90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_21fe94:
    if (ctx->pc == 0x21FE94u) {
        ctx->pc = 0x21FE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE90u;
        // 0x21fe94: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FE98u;
        goto label_21fe98;
    }
    ctx->pc = 0x21FE90u;
    {
        const bool branch_taken_0x21fe90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE90u;
        // 0x21fe94: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe90) {
            ctx->pc = 0x21FEA8u;
            goto label_21fea8;
        }
    }
    ctx->pc = 0x21FE98u;
label_21fe98:
    // 0x21fe98: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x21fe98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_21fe9c:
    // 0x21fe9c: 0xc0882f8  jal         func_220BE0
label_21fea0:
    if (ctx->pc == 0x21FEA0u) {
        ctx->pc = 0x21FEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE9Cu;
        // 0x21fea0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FEA4u;
        goto label_21fea4;
    }
    ctx->pc = 0x21FE9Cu;
    SET_GPR_U32(ctx, 31, 0x21FEA4u);
    ctx->pc = 0x21FEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE9Cu;
    // 0x21fea0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x21FEA4u;
label_21fea4:
    // 0x21fea4: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x21fea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_21fea8:
    // 0x21fea8: 0xc084af4  jal         func_212BD0
label_21feac:
    if (ctx->pc == 0x21FEACu) {
        ctx->pc = 0x21FEB0u;
        goto label_21feb0;
    }
    ctx->pc = 0x21FEA8u;
    SET_GPR_U32(ctx, 31, 0x21FEB0u);
    ctx->pc = 0x212BD0u;
    { ctx->pc = 0x212bd0; return; }
    ctx->pc = 0x21FEB0u;
label_21feb0:
    // 0x21feb0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_21feb4:
    if (ctx->pc == 0x21FEB4u) {
        ctx->pc = 0x21FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEB0u;
        // 0x21feb4: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FEB8u;
        goto label_21feb8;
    }
    ctx->pc = 0x21FEB0u;
    {
        const bool branch_taken_0x21feb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEB0u;
        // 0x21feb4: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21feb0) {
            ctx->pc = 0x21FED0u;
            goto label_21fed0;
        }
    }
    ctx->pc = 0x21FEB8u;
label_21feb8:
    // 0x21feb8: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x21feb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_21febc:
    // 0x21febc: 0xc056ff8  jal         func_15BFE0
label_21fec0:
    if (ctx->pc == 0x21FEC0u) {
        ctx->pc = 0x21FEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEBCu;
        // 0x21fec0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FEC4u;
        goto label_21fec4;
    }
    ctx->pc = 0x21FEBCu;
    SET_GPR_U32(ctx, 31, 0x21FEC4u);
    ctx->pc = 0x21FEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FEBCu;
    // 0x21fec0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FEBCu, 0x21FEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FEC4u;
label_21fec4:
    // 0x21fec4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_21fec8:
    if (ctx->pc == 0x21FEC8u) {
        ctx->pc = 0x21FEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEC4u;
        // 0x21fec8: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FECCu;
        goto label_21fecc;
    }
    ctx->pc = 0x21FEC4u;
    {
        const bool branch_taken_0x21fec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEC4u;
        // 0x21fec8: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fec4) {
            ctx->pc = 0x21FEE8u;
            goto label_21fee8;
        }
    }
    ctx->pc = 0x21FECCu;
label_21fecc:
    // 0x21fecc: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x21feccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_21fed0:
    // 0x21fed0: 0xc0882f8  jal         func_220BE0
label_21fed4:
    if (ctx->pc == 0x21FED4u) {
        ctx->pc = 0x21FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FED0u;
        // 0x21fed4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FED8u;
        goto label_21fed8;
    }
    ctx->pc = 0x21FED0u;
    SET_GPR_U32(ctx, 31, 0x21FED8u);
    ctx->pc = 0x21FED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FED0u;
    // 0x21fed4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x21FED8u;
label_21fed8:
    // 0x21fed8: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x21fed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_21fedc:
    // 0x21fedc: 0xc0882f8  jal         func_220BE0
label_21fee0:
    if (ctx->pc == 0x21FEE0u) {
        ctx->pc = 0x21FEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEDCu;
        // 0x21fee0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FEE4u;
        goto label_21fee4;
    }
    ctx->pc = 0x21FEDCu;
    SET_GPR_U32(ctx, 31, 0x21FEE4u);
    ctx->pc = 0x21FEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FEDCu;
    // 0x21fee0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x21FEE4u;
label_21fee4:
    // 0x21fee4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x21fee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_21fee8:
    // 0x21fee8: 0xc084af4  jal         func_212BD0
label_21feec:
    if (ctx->pc == 0x21FEECu) {
        ctx->pc = 0x21FEF0u;
        goto label_21fef0;
    }
    ctx->pc = 0x21FEE8u;
    SET_GPR_U32(ctx, 31, 0x21FEF0u);
    ctx->pc = 0x212BD0u;
    { ctx->pc = 0x212bd0; return; }
    ctx->pc = 0x21FEF0u;
label_21fef0:
    // 0x21fef0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_21fef4:
    if (ctx->pc == 0x21FEF4u) {
        ctx->pc = 0x21FEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEF0u;
        // 0x21fef4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FEF8u;
        goto label_21fef8;
    }
    ctx->pc = 0x21FEF0u;
    {
        const bool branch_taken_0x21fef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEF0u;
        // 0x21fef4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fef0) {
            ctx->pc = 0x21FF10u;
            goto label_21ff10;
        }
    }
    ctx->pc = 0x21FEF8u;
label_21fef8:
    // 0x21fef8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x21fef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_21fefc:
    // 0x21fefc: 0xc056ff8  jal         func_15BFE0
label_21ff00:
    if (ctx->pc == 0x21FF00u) {
        ctx->pc = 0x21FF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEFCu;
        // 0x21ff00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FF04u;
        goto label_21ff04;
    }
    ctx->pc = 0x21FEFCu;
    SET_GPR_U32(ctx, 31, 0x21FF04u);
    ctx->pc = 0x21FF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FEFCu;
    // 0x21ff00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FEFCu, 0x21FF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF04u;
label_21ff04:
    // 0x21ff04: 0x10400162  beqz        $v0, . + 4 + (0x162 << 2)
label_21ff08:
    if (ctx->pc == 0x21FF08u) {
        ctx->pc = 0x21FF0Cu;
        goto label_21ff0c;
    }
    ctx->pc = 0x21FF04u;
    {
        const bool branch_taken_0x21ff04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ff04) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FF0Cu;
label_21ff0c:
    // 0x21ff0c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x21ff0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_21ff10:
    // 0x21ff10: 0xc0882f8  jal         func_220BE0
label_21ff14:
    if (ctx->pc == 0x21FF14u) {
        ctx->pc = 0x21FF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF10u;
        // 0x21ff14: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FF18u;
        goto label_21ff18;
    }
    ctx->pc = 0x21FF10u;
    SET_GPR_U32(ctx, 31, 0x21FF18u);
    ctx->pc = 0x21FF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF10u;
    // 0x21ff14: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x21FF18u;
label_21ff18:
    // 0x21ff18: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x21ff18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_21ff1c:
    // 0x21ff1c: 0xc0882f8  jal         func_220BE0
label_21ff20:
    if (ctx->pc == 0x21FF20u) {
        ctx->pc = 0x21FF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF1Cu;
        // 0x21ff20: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FF24u;
        goto label_21ff24;
    }
    ctx->pc = 0x21FF1Cu;
    SET_GPR_U32(ctx, 31, 0x21FF24u);
    ctx->pc = 0x21FF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF1Cu;
    // 0x21ff20: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x21FF24u;
label_21ff24:
    // 0x21ff24: 0x1000015a  b           . + 4 + (0x15A << 2)
label_21ff28:
    if (ctx->pc == 0x21FF28u) {
        ctx->pc = 0x21FF2Cu;
        goto label_21ff2c;
    }
    ctx->pc = 0x21FF24u;
    {
        const bool branch_taken_0x21ff24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ff24) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FF2Cu;
label_21ff2c:
    // 0x21ff2c: 0xc084af4  jal         func_212BD0
label_21ff30:
    if (ctx->pc == 0x21FF30u) {
        ctx->pc = 0x21FF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF2Cu;
        // 0x21ff30: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FF34u;
        goto label_21ff34;
    }
    ctx->pc = 0x21FF2Cu;
    SET_GPR_U32(ctx, 31, 0x21FF34u);
    ctx->pc = 0x21FF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF2Cu;
    // 0x21ff30: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    { ctx->pc = 0x212bd0; return; }
    ctx->pc = 0x21FF34u;
label_21ff34:
    // 0x21ff34: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_21ff38:
    if (ctx->pc == 0x21FF38u) {
        ctx->pc = 0x21FF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF34u;
        // 0x21ff38: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FF3Cu;
        goto label_21ff3c;
    }
    ctx->pc = 0x21FF34u;
    {
        const bool branch_taken_0x21ff34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF34u;
        // 0x21ff38: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff34) {
            ctx->pc = 0x21FF54u;
            goto label_21ff54;
        }
    }
    ctx->pc = 0x21FF3Cu;
label_21ff3c:
    // 0x21ff3c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x21ff3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_21ff40:
    // 0x21ff40: 0xc056ff8  jal         func_15BFE0
label_21ff44:
    if (ctx->pc == 0x21FF44u) {
        ctx->pc = 0x21FF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF40u;
        // 0x21ff44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FF48u;
        goto label_21ff48;
    }
    ctx->pc = 0x21FF40u;
    SET_GPR_U32(ctx, 31, 0x21FF48u);
    ctx->pc = 0x21FF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF40u;
    // 0x21ff44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FF40u, 0x21FF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF48u;
label_21ff48:
    // 0x21ff48: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_21ff4c:
    if (ctx->pc == 0x21FF4Cu) {
        ctx->pc = 0x21FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF48u;
        // 0x21ff4c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FF50u;
        goto label_21ff50;
    }
    ctx->pc = 0x21FF48u;
    {
        const bool branch_taken_0x21ff48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF48u;
        // 0x21ff4c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff48) {
            ctx->pc = 0x21FF6Cu;
            goto label_21ff6c;
        }
    }
    ctx->pc = 0x21FF50u;
label_21ff50:
    // 0x21ff50: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x21ff50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_21ff54:
    // 0x21ff54: 0xc0882f8  jal         func_220BE0
label_21ff58:
    if (ctx->pc == 0x21FF58u) {
        ctx->pc = 0x21FF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF54u;
        // 0x21ff58: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FF5Cu;
        goto label_21ff5c;
    }
    ctx->pc = 0x21FF54u;
    SET_GPR_U32(ctx, 31, 0x21FF5Cu);
    ctx->pc = 0x21FF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF54u;
    // 0x21ff58: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x21FF5Cu;
label_21ff5c:
    // 0x21ff5c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x21ff5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_21ff60:
    // 0x21ff60: 0xc0882f8  jal         func_220BE0
label_21ff64:
    if (ctx->pc == 0x21FF64u) {
        ctx->pc = 0x21FF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF60u;
        // 0x21ff64: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FF68u;
        goto label_21ff68;
    }
    ctx->pc = 0x21FF60u;
    SET_GPR_U32(ctx, 31, 0x21FF68u);
    ctx->pc = 0x21FF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF60u;
    // 0x21ff64: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x21FF68u;
label_21ff68:
    // 0x21ff68: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x21ff68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_21ff6c:
    // 0x21ff6c: 0xc084af4  jal         func_212BD0
label_21ff70:
    if (ctx->pc == 0x21FF70u) {
        ctx->pc = 0x21FF74u;
        goto label_21ff74;
    }
    ctx->pc = 0x21FF6Cu;
    SET_GPR_U32(ctx, 31, 0x21FF74u);
    ctx->pc = 0x212BD0u;
    { ctx->pc = 0x212bd0; return; }
    ctx->pc = 0x21FF74u;
label_21ff74:
    // 0x21ff74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_21ff78:
    if (ctx->pc == 0x21FF78u) {
        ctx->pc = 0x21FF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF74u;
        // 0x21ff78: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FF7Cu;
        goto label_21ff7c;
    }
    ctx->pc = 0x21FF74u;
    {
        const bool branch_taken_0x21ff74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF74u;
        // 0x21ff78: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff74) {
            ctx->pc = 0x21FF8Cu;
            goto label_21ff8c;
        }
    }
    ctx->pc = 0x21FF7Cu;
label_21ff7c:
    // 0x21ff7c: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x21ff7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_21ff80:
    // 0x21ff80: 0xc0882f8  jal         func_220BE0
label_21ff84:
    if (ctx->pc == 0x21FF84u) {
        ctx->pc = 0x21FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF80u;
        // 0x21ff84: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FF88u;
        goto label_21ff88;
    }
    ctx->pc = 0x21FF80u;
    SET_GPR_U32(ctx, 31, 0x21FF88u);
    ctx->pc = 0x21FF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF80u;
    // 0x21ff84: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x21FF88u;
label_21ff88:
    // 0x21ff88: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x21ff88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_21ff8c:
    // 0x21ff8c: 0xc084af4  jal         func_212BD0
label_21ff90:
    if (ctx->pc == 0x21FF90u) {
        ctx->pc = 0x21FF94u;
        goto label_21ff94;
    }
    ctx->pc = 0x21FF8Cu;
    SET_GPR_U32(ctx, 31, 0x21FF94u);
    ctx->pc = 0x212BD0u;
    { ctx->pc = 0x212bd0; return; }
    ctx->pc = 0x21FF94u;
label_21ff94:
    // 0x21ff94: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_21ff98:
    if (ctx->pc == 0x21FF98u) {
        ctx->pc = 0x21FF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF94u;
        // 0x21ff98: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FF9Cu;
        goto label_21ff9c;
    }
    ctx->pc = 0x21FF94u;
    {
        const bool branch_taken_0x21ff94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF94u;
        // 0x21ff98: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff94) {
            ctx->pc = 0x21FFB4u;
            goto label_21ffb4;
        }
    }
    ctx->pc = 0x21FF9Cu;
label_21ff9c:
    // 0x21ff9c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x21ff9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_21ffa0:
    // 0x21ffa0: 0xc056ff8  jal         func_15BFE0
label_21ffa4:
    if (ctx->pc == 0x21FFA4u) {
        ctx->pc = 0x21FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFA0u;
        // 0x21ffa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FFA8u;
        goto label_21ffa8;
    }
    ctx->pc = 0x21FFA0u;
    SET_GPR_U32(ctx, 31, 0x21FFA8u);
    ctx->pc = 0x21FFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FFA0u;
    // 0x21ffa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FFA0u, 0x21FFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FFA8u;
label_21ffa8:
    // 0x21ffa8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_21ffac:
    if (ctx->pc == 0x21FFACu) {
        ctx->pc = 0x21FFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFA8u;
        // 0x21ffac: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FFB0u;
        goto label_21ffb0;
    }
    ctx->pc = 0x21FFA8u;
    {
        const bool branch_taken_0x21ffa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFA8u;
        // 0x21ffac: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ffa8) {
            ctx->pc = 0x21FFC4u;
            goto label_21ffc4;
        }
    }
    ctx->pc = 0x21FFB0u;
label_21ffb0:
    // 0x21ffb0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x21ffb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_21ffb4:
    // 0x21ffb4: 0xc0882f8  jal         func_220BE0
label_21ffb8:
    if (ctx->pc == 0x21FFB8u) {
        ctx->pc = 0x21FFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFB4u;
        // 0x21ffb8: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FFBCu;
        goto label_21ffbc;
    }
    ctx->pc = 0x21FFB4u;
    SET_GPR_U32(ctx, 31, 0x21FFBCu);
    ctx->pc = 0x21FFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FFB4u;
    // 0x21ffb8: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x21FFBCu;
label_21ffbc:
    // 0x21ffbc: 0x10000134  b           . + 4 + (0x134 << 2)
label_21ffc0:
    if (ctx->pc == 0x21FFC0u) {
        ctx->pc = 0x21FFC4u;
        goto label_21ffc4;
    }
    ctx->pc = 0x21FFBCu;
    {
        const bool branch_taken_0x21ffbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ffbc) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FFC4u;
label_21ffc4:
    // 0x21ffc4: 0xc084af4  jal         func_212BD0
label_21ffc8:
    if (ctx->pc == 0x21FFC8u) {
        ctx->pc = 0x21FFCCu;
        goto label_21ffcc;
    }
    ctx->pc = 0x21FFC4u;
    SET_GPR_U32(ctx, 31, 0x21FFCCu);
    ctx->pc = 0x212BD0u;
    { ctx->pc = 0x212bd0; return; }
    ctx->pc = 0x21FFCCu;
label_21ffcc:
    // 0x21ffcc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_21ffd0:
    if (ctx->pc == 0x21FFD0u) {
        ctx->pc = 0x21FFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFCCu;
        // 0x21ffd0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FFD4u;
        goto label_21ffd4;
    }
    ctx->pc = 0x21FFCCu;
    {
        const bool branch_taken_0x21ffcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFCCu;
        // 0x21ffd0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ffcc) {
            ctx->pc = 0x21FFECu;
            goto label_21ffec;
        }
    }
    ctx->pc = 0x21FFD4u;
label_21ffd4:
    // 0x21ffd4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x21ffd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_21ffd8:
    // 0x21ffd8: 0xc056ff8  jal         func_15BFE0
label_21ffdc:
    if (ctx->pc == 0x21FFDCu) {
        ctx->pc = 0x21FFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFD8u;
        // 0x21ffdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FFE0u;
        goto label_21ffe0;
    }
    ctx->pc = 0x21FFD8u;
    SET_GPR_U32(ctx, 31, 0x21FFE0u);
    ctx->pc = 0x21FFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FFD8u;
    // 0x21ffdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FFD8u, 0x21FFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FFE0u;
label_21ffe0:
    // 0x21ffe0: 0x1040012b  beqz        $v0, . + 4 + (0x12B << 2)
label_21ffe4:
    if (ctx->pc == 0x21FFE4u) {
        ctx->pc = 0x21FFE8u;
        goto label_21ffe8;
    }
    ctx->pc = 0x21FFE0u;
    {
        const bool branch_taken_0x21ffe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ffe0) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FFE8u;
label_21ffe8:
    // 0x21ffe8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x21ffe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_21ffec:
    // 0x21ffec: 0xc0882f8  jal         func_220BE0
label_21fff0:
    if (ctx->pc == 0x21FFF0u) {
        ctx->pc = 0x21FFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFECu;
        // 0x21fff0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FFF4u;
        goto label_21fff4;
    }
    ctx->pc = 0x21FFECu;
    SET_GPR_U32(ctx, 31, 0x21FFF4u);
    ctx->pc = 0x21FFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FFECu;
    // 0x21fff0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x21FFF4u;
label_21fff4:
    // 0x21fff4: 0x10000126  b           . + 4 + (0x126 << 2)
label_21fff8:
    if (ctx->pc == 0x21FFF8u) {
        ctx->pc = 0x21FFFCu;
        goto label_21fffc;
    }
    ctx->pc = 0x21FFF4u;
    {
        const bool branch_taken_0x21fff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fff4) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x21FFFCu;
label_21fffc:
    // 0x21fffc: 0xc084af4  jal         func_212BD0
label_220000:
    if (ctx->pc == 0x220000u) {
        ctx->pc = 0x220000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFFCu;
        // 0x220000: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220004u;
        goto label_220004;
    }
    ctx->pc = 0x21FFFCu;
    SET_GPR_U32(ctx, 31, 0x220004u);
    ctx->pc = 0x220000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FFFCu;
    // 0x220000: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    { ctx->pc = 0x212bd0; return; }
    ctx->pc = 0x220004u;
label_220004:
    // 0x220004: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_220008:
    if (ctx->pc == 0x220008u) {
        ctx->pc = 0x220008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220004u;
        // 0x220008: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22000Cu;
        goto label_22000c;
    }
    ctx->pc = 0x220004u;
    {
        const bool branch_taken_0x220004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220004u;
        // 0x220008: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220004) {
            ctx->pc = 0x220024u;
            goto label_220024;
        }
    }
    ctx->pc = 0x22000Cu;
label_22000c:
    // 0x22000c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x22000cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_220010:
    // 0x220010: 0xc056ff8  jal         func_15BFE0
label_220014:
    if (ctx->pc == 0x220014u) {
        ctx->pc = 0x220014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220010u;
        // 0x220014: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220018u;
        goto label_220018;
    }
    ctx->pc = 0x220010u;
    SET_GPR_U32(ctx, 31, 0x220018u);
    ctx->pc = 0x220014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220010u;
    // 0x220014: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x220010u, 0x220018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220018u;
label_220018:
    // 0x220018: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_22001c:
    if (ctx->pc == 0x22001Cu) {
        ctx->pc = 0x22001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220018u;
        // 0x22001c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220020u;
        goto label_220020;
    }
    ctx->pc = 0x220018u;
    {
        const bool branch_taken_0x220018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220018u;
        // 0x22001c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220018) {
            ctx->pc = 0x22003Cu;
            goto label_22003c;
        }
    }
    ctx->pc = 0x220020u;
label_220020:
    // 0x220020: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x220020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_220024:
    // 0x220024: 0xc0882f8  jal         func_220BE0
label_220028:
    if (ctx->pc == 0x220028u) {
        ctx->pc = 0x220028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220024u;
        // 0x220028: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22002Cu;
        goto label_22002c;
    }
    ctx->pc = 0x220024u;
    SET_GPR_U32(ctx, 31, 0x22002Cu);
    ctx->pc = 0x220028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220024u;
    // 0x220028: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x22002Cu;
label_22002c:
    // 0x22002c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x22002cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_220030:
    // 0x220030: 0xc0882f8  jal         func_220BE0
label_220034:
    if (ctx->pc == 0x220034u) {
        ctx->pc = 0x220034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220030u;
        // 0x220034: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220038u;
        goto label_220038;
    }
    ctx->pc = 0x220030u;
    SET_GPR_U32(ctx, 31, 0x220038u);
    ctx->pc = 0x220034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220030u;
    // 0x220034: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x220038u;
label_220038:
    // 0x220038: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x220038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22003c:
    // 0x22003c: 0xc084af4  jal         func_212BD0
label_220040:
    if (ctx->pc == 0x220040u) {
        ctx->pc = 0x220044u;
        goto label_220044;
    }
    ctx->pc = 0x22003Cu;
    SET_GPR_U32(ctx, 31, 0x220044u);
    ctx->pc = 0x212BD0u;
    { ctx->pc = 0x212bd0; return; }
    ctx->pc = 0x220044u;
label_220044:
    // 0x220044: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_220048:
    if (ctx->pc == 0x220048u) {
        ctx->pc = 0x220048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220044u;
        // 0x220048: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22004Cu;
        goto label_22004c;
    }
    ctx->pc = 0x220044u;
    {
        const bool branch_taken_0x220044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220044u;
        // 0x220048: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220044) {
            ctx->pc = 0x22005Cu;
            goto label_22005c;
        }
    }
    ctx->pc = 0x22004Cu;
label_22004c:
    // 0x22004c: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x22004cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_220050:
    // 0x220050: 0xc0882f8  jal         func_220BE0
label_220054:
    if (ctx->pc == 0x220054u) {
        ctx->pc = 0x220054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220050u;
        // 0x220054: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220058u;
        goto label_220058;
    }
    ctx->pc = 0x220050u;
    SET_GPR_U32(ctx, 31, 0x220058u);
    ctx->pc = 0x220054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220050u;
    // 0x220054: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x220058u;
label_220058:
    // 0x220058: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x220058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22005c:
    // 0x22005c: 0xc084af4  jal         func_212BD0
label_220060:
    if (ctx->pc == 0x220060u) {
        ctx->pc = 0x220064u;
        goto label_220064;
    }
    ctx->pc = 0x22005Cu;
    SET_GPR_U32(ctx, 31, 0x220064u);
    ctx->pc = 0x212BD0u;
    { ctx->pc = 0x212bd0; return; }
    ctx->pc = 0x220064u;
label_220064:
    // 0x220064: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_220068:
    if (ctx->pc == 0x220068u) {
        ctx->pc = 0x220068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220064u;
        // 0x220068: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22006Cu;
        goto label_22006c;
    }
    ctx->pc = 0x220064u;
    {
        const bool branch_taken_0x220064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220064u;
        // 0x220068: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220064) {
            ctx->pc = 0x22007Cu;
            goto label_22007c;
        }
    }
    ctx->pc = 0x22006Cu;
label_22006c:
    // 0x22006c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x22006cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_220070:
    // 0x220070: 0xc0882f8  jal         func_220BE0
label_220074:
    if (ctx->pc == 0x220074u) {
        ctx->pc = 0x220074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220070u;
        // 0x220074: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220078u;
        goto label_220078;
    }
    ctx->pc = 0x220070u;
    SET_GPR_U32(ctx, 31, 0x220078u);
    ctx->pc = 0x220074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220070u;
    // 0x220074: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x220078u;
label_220078:
    // 0x220078: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x220078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_22007c:
    // 0x22007c: 0xc084af4  jal         func_212BD0
label_220080:
    if (ctx->pc == 0x220080u) {
        ctx->pc = 0x220084u;
        goto label_220084;
    }
    ctx->pc = 0x22007Cu;
    SET_GPR_U32(ctx, 31, 0x220084u);
    ctx->pc = 0x212BD0u;
    { ctx->pc = 0x212bd0; return; }
    ctx->pc = 0x220084u;
label_220084:
    // 0x220084: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_220088:
    if (ctx->pc == 0x220088u) {
        ctx->pc = 0x220088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220084u;
        // 0x220088: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22008Cu;
        goto label_22008c;
    }
    ctx->pc = 0x220084u;
    {
        const bool branch_taken_0x220084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220084u;
        // 0x220088: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220084) {
            ctx->pc = 0x2200A4u;
            goto label_2200a4;
        }
    }
    ctx->pc = 0x22008Cu;
label_22008c:
    // 0x22008c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x22008cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_220090:
    // 0x220090: 0xc056ff8  jal         func_15BFE0
label_220094:
    if (ctx->pc == 0x220094u) {
        ctx->pc = 0x220094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220090u;
        // 0x220094: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220098u;
        goto label_220098;
    }
    ctx->pc = 0x220090u;
    SET_GPR_U32(ctx, 31, 0x220098u);
    ctx->pc = 0x220094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220090u;
    // 0x220094: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x220090u, 0x220098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220098u;
label_220098:
    // 0x220098: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_22009c:
    if (ctx->pc == 0x22009Cu) {
        ctx->pc = 0x22009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220098u;
        // 0x22009c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2200A0u;
        goto label_2200a0;
    }
    ctx->pc = 0x220098u;
    {
        const bool branch_taken_0x220098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220098u;
        // 0x22009c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220098) {
            ctx->pc = 0x2200B4u;
            goto label_2200b4;
        }
    }
    ctx->pc = 0x2200A0u;
label_2200a0:
    // 0x2200a0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2200a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2200a4:
    // 0x2200a4: 0xc0882f8  jal         func_220BE0
label_2200a8:
    if (ctx->pc == 0x2200A8u) {
        ctx->pc = 0x2200A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2200A4u;
        // 0x2200a8: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2200ACu;
        goto label_2200ac;
    }
    ctx->pc = 0x2200A4u;
    SET_GPR_U32(ctx, 31, 0x2200ACu);
    ctx->pc = 0x2200A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2200A4u;
    // 0x2200a8: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x2200ACu;
label_2200ac:
    // 0x2200ac: 0x1000000e  b           . + 4 + (0xE << 2)
label_2200b0:
    if (ctx->pc == 0x2200B0u) {
        ctx->pc = 0x2200B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2200ACu;
        // 0x2200b0: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2200B4u;
        goto label_2200b4;
    }
    ctx->pc = 0x2200ACu;
    {
        const bool branch_taken_0x2200ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2200B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2200ACu;
        // 0x2200b0: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2200ac) {
            ctx->pc = 0x2200E8u;
            goto label_2200e8;
        }
    }
    ctx->pc = 0x2200B4u;
label_2200b4:
    // 0x2200b4: 0xc084af4  jal         func_212BD0
label_2200b8:
    if (ctx->pc == 0x2200B8u) {
        ctx->pc = 0x2200BCu;
        goto label_2200bc;
    }
    ctx->pc = 0x2200B4u;
    SET_GPR_U32(ctx, 31, 0x2200BCu);
    ctx->pc = 0x212BD0u;
    { ctx->pc = 0x212bd0; return; }
    ctx->pc = 0x2200BCu;
label_2200bc:
    // 0x2200bc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2200c0:
    if (ctx->pc == 0x2200C0u) {
        ctx->pc = 0x2200C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2200BCu;
        // 0x2200c0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2200C4u;
        goto label_2200c4;
    }
    ctx->pc = 0x2200BCu;
    {
        const bool branch_taken_0x2200bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2200C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2200BCu;
        // 0x2200c0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2200bc) {
            ctx->pc = 0x2200DCu;
            goto label_2200dc;
        }
    }
    ctx->pc = 0x2200C4u;
label_2200c4:
    // 0x2200c4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2200c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2200c8:
    // 0x2200c8: 0xc056ff8  jal         func_15BFE0
label_2200cc:
    if (ctx->pc == 0x2200CCu) {
        ctx->pc = 0x2200CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2200C8u;
        // 0x2200cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2200D0u;
        goto label_2200d0;
    }
    ctx->pc = 0x2200C8u;
    SET_GPR_U32(ctx, 31, 0x2200D0u);
    ctx->pc = 0x2200CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2200C8u;
    // 0x2200cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x2200C8u, 0x2200D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2200D0u;
label_2200d0:
    // 0x2200d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2200d4:
    if (ctx->pc == 0x2200D4u) {
        ctx->pc = 0x2200D8u;
        goto label_2200d8;
    }
    ctx->pc = 0x2200D0u;
    {
        const bool branch_taken_0x2200d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2200d0) {
            ctx->pc = 0x2200E4u;
            goto label_2200e4;
        }
    }
    ctx->pc = 0x2200D8u;
label_2200d8:
    // 0x2200d8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2200d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2200dc:
    // 0x2200dc: 0xc0882f8  jal         func_220BE0
label_2200e0:
    if (ctx->pc == 0x2200E0u) {
        ctx->pc = 0x2200E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2200DCu;
        // 0x2200e0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2200E4u;
        goto label_2200e4;
    }
    ctx->pc = 0x2200DCu;
    SET_GPR_U32(ctx, 31, 0x2200E4u);
    ctx->pc = 0x2200E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2200DCu;
    // 0x2200e0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x2200E4u;
label_2200e4:
    // 0x2200e4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2200e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2200e8:
    // 0x2200e8: 0xc084af4  jal         func_212BD0
label_2200ec:
    if (ctx->pc == 0x2200ECu) {
        ctx->pc = 0x2200F0u;
        goto label_2200f0;
    }
    ctx->pc = 0x2200E8u;
    SET_GPR_U32(ctx, 31, 0x2200F0u);
    ctx->pc = 0x212BD0u;
    { ctx->pc = 0x212bd0; return; }
    ctx->pc = 0x2200F0u;
label_2200f0:
    // 0x2200f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2200f4:
    if (ctx->pc == 0x2200F4u) {
        ctx->pc = 0x2200F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2200F0u;
        // 0x2200f4: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2200F8u;
        goto label_2200f8;
    }
    ctx->pc = 0x2200F0u;
    {
        const bool branch_taken_0x2200f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2200F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2200F0u;
        // 0x2200f4: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2200f0) {
            ctx->pc = 0x220108u;
            goto label_220108;
        }
    }
    ctx->pc = 0x2200F8u;
label_2200f8:
    // 0x2200f8: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2200f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2200fc:
    // 0x2200fc: 0xc0882f8  jal         func_220BE0
label_220100:
    if (ctx->pc == 0x220100u) {
        ctx->pc = 0x220100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2200FCu;
        // 0x220100: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220104u;
        goto label_220104;
    }
    ctx->pc = 0x2200FCu;
    SET_GPR_U32(ctx, 31, 0x220104u);
    ctx->pc = 0x220100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2200FCu;
    // 0x220100: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x220104u;
label_220104:
    // 0x220104: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x220104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_220108:
    // 0x220108: 0xc084af4  jal         func_212BD0
label_22010c:
    if (ctx->pc == 0x22010Cu) {
        ctx->pc = 0x220110u;
        goto label_220110;
    }
    ctx->pc = 0x220108u;
    SET_GPR_U32(ctx, 31, 0x220110u);
    ctx->pc = 0x212BD0u;
    { ctx->pc = 0x212bd0; return; }
    ctx->pc = 0x220110u;
label_220110:
    // 0x220110: 0x104000df  beqz        $v0, . + 4 + (0xDF << 2)
label_220114:
    if (ctx->pc == 0x220114u) {
        ctx->pc = 0x220114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220110u;
        // 0x220114: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220118u;
        goto label_220118;
    }
    ctx->pc = 0x220110u;
    {
        const bool branch_taken_0x220110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220110u;
        // 0x220114: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220110) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x220118u;
label_220118:
    // 0x220118: 0xc0882f8  jal         func_220BE0
label_22011c:
    if (ctx->pc == 0x22011Cu) {
        ctx->pc = 0x22011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220118u;
        // 0x22011c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220120u;
        goto label_220120;
    }
    ctx->pc = 0x220118u;
    SET_GPR_U32(ctx, 31, 0x220120u);
    ctx->pc = 0x22011Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220118u;
    // 0x22011c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x220120u;
label_220120:
    // 0x220120: 0x100000db  b           . + 4 + (0xDB << 2)
label_220124:
    if (ctx->pc == 0x220124u) {
        ctx->pc = 0x220128u;
        goto label_220128;
    }
    ctx->pc = 0x220120u;
    {
        const bool branch_taken_0x220120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220120) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x220128u;
label_220128:
    // 0x220128: 0xc084af4  jal         func_212BD0
label_22012c:
    if (ctx->pc == 0x22012Cu) {
        ctx->pc = 0x22012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220128u;
        // 0x22012c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220130u;
        goto label_220130;
    }
    ctx->pc = 0x220128u;
    SET_GPR_U32(ctx, 31, 0x220130u);
    ctx->pc = 0x22012Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220128u;
    // 0x22012c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    { ctx->pc = 0x212bd0; return; }
    ctx->pc = 0x220130u;
label_220130:
    // 0x220130: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_220134:
    if (ctx->pc == 0x220134u) {
        ctx->pc = 0x220134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220130u;
        // 0x220134: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220138u;
        goto label_220138;
    }
    ctx->pc = 0x220130u;
    {
        const bool branch_taken_0x220130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220130u;
        // 0x220134: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220130) {
            ctx->pc = 0x220150u;
            goto label_220150;
        }
    }
    ctx->pc = 0x220138u;
label_220138:
    // 0x220138: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x220138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_22013c:
    // 0x22013c: 0xc056ff8  jal         func_15BFE0
label_220140:
    if (ctx->pc == 0x220140u) {
        ctx->pc = 0x220140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22013Cu;
        // 0x220140: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220144u;
        goto label_220144;
    }
    ctx->pc = 0x22013Cu;
    SET_GPR_U32(ctx, 31, 0x220144u);
    ctx->pc = 0x220140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22013Cu;
    // 0x220140: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x22013Cu, 0x220144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220144u;
label_220144:
    // 0x220144: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_220148:
    if (ctx->pc == 0x220148u) {
        ctx->pc = 0x220148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220144u;
        // 0x220148: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22014Cu;
        goto label_22014c;
    }
    ctx->pc = 0x220144u;
    {
        const bool branch_taken_0x220144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220144u;
        // 0x220148: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220144) {
            ctx->pc = 0x220168u;
            goto label_220168;
        }
    }
    ctx->pc = 0x22014Cu;
label_22014c:
    // 0x22014c: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x22014cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_220150:
    // 0x220150: 0xc0882f8  jal         func_220BE0
label_220154:
    if (ctx->pc == 0x220154u) {
        ctx->pc = 0x220154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220150u;
        // 0x220154: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220158u;
        goto label_220158;
    }
    ctx->pc = 0x220150u;
    SET_GPR_U32(ctx, 31, 0x220158u);
    ctx->pc = 0x220154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220150u;
    // 0x220154: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x220158u;
label_220158:
    // 0x220158: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x220158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_22015c:
    // 0x22015c: 0xc0882f8  jal         func_220BE0
label_220160:
    if (ctx->pc == 0x220160u) {
        ctx->pc = 0x220160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22015Cu;
        // 0x220160: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220164u;
        goto label_220164;
    }
    ctx->pc = 0x22015Cu;
    SET_GPR_U32(ctx, 31, 0x220164u);
    ctx->pc = 0x220160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22015Cu;
    // 0x220160: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x220164u;
label_220164:
    // 0x220164: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x220164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_220168:
    // 0x220168: 0xc084af4  jal         func_212BD0
label_22016c:
    if (ctx->pc == 0x22016Cu) {
        ctx->pc = 0x220170u;
        goto label_220170;
    }
    ctx->pc = 0x220168u;
    SET_GPR_U32(ctx, 31, 0x220170u);
    ctx->pc = 0x212BD0u;
    { ctx->pc = 0x212bd0; return; }
    ctx->pc = 0x220170u;
label_220170:
    // 0x220170: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_220174:
    if (ctx->pc == 0x220174u) {
        ctx->pc = 0x220174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220170u;
        // 0x220174: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220178u;
        goto label_220178;
    }
    ctx->pc = 0x220170u;
    {
        const bool branch_taken_0x220170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220170u;
        // 0x220174: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220170) {
            ctx->pc = 0x220188u;
            goto label_220188;
        }
    }
    ctx->pc = 0x220178u;
label_220178:
    // 0x220178: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x220178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_22017c:
    // 0x22017c: 0xc0882f8  jal         func_220BE0
label_220180:
    if (ctx->pc == 0x220180u) {
        ctx->pc = 0x220180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22017Cu;
        // 0x220180: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220184u;
        goto label_220184;
    }
    ctx->pc = 0x22017Cu;
    SET_GPR_U32(ctx, 31, 0x220184u);
    ctx->pc = 0x220180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22017Cu;
    // 0x220180: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x220184u;
label_220184:
    // 0x220184: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x220184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_220188:
    // 0x220188: 0xc084af4  jal         func_212BD0
label_22018c:
    if (ctx->pc == 0x22018Cu) {
        ctx->pc = 0x220190u;
        goto label_220190;
    }
    ctx->pc = 0x220188u;
    SET_GPR_U32(ctx, 31, 0x220190u);
    ctx->pc = 0x212BD0u;
    { ctx->pc = 0x212bd0; return; }
    ctx->pc = 0x220190u;
label_220190:
    // 0x220190: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_220194:
    if (ctx->pc == 0x220194u) {
        ctx->pc = 0x220194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220190u;
        // 0x220194: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220198u;
        goto label_220198;
    }
    ctx->pc = 0x220190u;
    {
        const bool branch_taken_0x220190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220190u;
        // 0x220194: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220190) {
            ctx->pc = 0x2201A8u;
            goto label_2201a8;
        }
    }
    ctx->pc = 0x220198u;
label_220198:
    // 0x220198: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x220198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_22019c:
    // 0x22019c: 0xc0882f8  jal         func_220BE0
label_2201a0:
    if (ctx->pc == 0x2201A0u) {
        ctx->pc = 0x2201A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22019Cu;
        // 0x2201a0: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2201A4u;
        goto label_2201a4;
    }
    ctx->pc = 0x22019Cu;
    SET_GPR_U32(ctx, 31, 0x2201A4u);
    ctx->pc = 0x2201A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22019Cu;
    // 0x2201a0: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x2201A4u;
label_2201a4:
    // 0x2201a4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2201a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2201a8:
    // 0x2201a8: 0xc084af4  jal         func_212BD0
label_2201ac:
    if (ctx->pc == 0x2201ACu) {
        ctx->pc = 0x2201B0u;
        goto label_2201b0;
    }
    ctx->pc = 0x2201A8u;
    SET_GPR_U32(ctx, 31, 0x2201B0u);
    ctx->pc = 0x212BD0u;
    { ctx->pc = 0x212bd0; return; }
    ctx->pc = 0x2201B0u;
label_2201b0:
    // 0x2201b0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2201b4:
    if (ctx->pc == 0x2201B4u) {
        ctx->pc = 0x2201B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201B0u;
        // 0x2201b4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2201B8u;
        goto label_2201b8;
    }
    ctx->pc = 0x2201B0u;
    {
        const bool branch_taken_0x2201b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2201B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201B0u;
        // 0x2201b4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2201b0) {
            ctx->pc = 0x2201D0u;
            goto label_2201d0;
        }
    }
    ctx->pc = 0x2201B8u;
label_2201b8:
    // 0x2201b8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2201b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2201bc:
    // 0x2201bc: 0xc056ff8  jal         func_15BFE0
label_2201c0:
    if (ctx->pc == 0x2201C0u) {
        ctx->pc = 0x2201C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201BCu;
        // 0x2201c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2201C4u;
        goto label_2201c4;
    }
    ctx->pc = 0x2201BCu;
    SET_GPR_U32(ctx, 31, 0x2201C4u);
    ctx->pc = 0x2201C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2201BCu;
    // 0x2201c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x2201BCu, 0x2201C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2201C4u;
label_2201c4:
    // 0x2201c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2201c8:
    if (ctx->pc == 0x2201C8u) {
        ctx->pc = 0x2201C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201C4u;
        // 0x2201c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2201CCu;
        goto label_2201cc;
    }
    ctx->pc = 0x2201C4u;
    {
        const bool branch_taken_0x2201c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2201C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201C4u;
        // 0x2201c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2201c4) {
            ctx->pc = 0x2201E8u;
            goto label_2201e8;
        }
    }
    ctx->pc = 0x2201CCu;
label_2201cc:
    // 0x2201cc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2201ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2201d0:
    // 0x2201d0: 0xc0882f8  jal         func_220BE0
label_2201d4:
    if (ctx->pc == 0x2201D4u) {
        ctx->pc = 0x2201D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201D0u;
        // 0x2201d4: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2201D8u;
        goto label_2201d8;
    }
    ctx->pc = 0x2201D0u;
    SET_GPR_U32(ctx, 31, 0x2201D8u);
    ctx->pc = 0x2201D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2201D0u;
    // 0x2201d4: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x2201D8u;
label_2201d8:
    // 0x2201d8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2201d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2201dc:
    // 0x2201dc: 0xc0882f8  jal         func_220BE0
label_2201e0:
    if (ctx->pc == 0x2201E0u) {
        ctx->pc = 0x2201E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201DCu;
        // 0x2201e0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2201E4u;
        goto label_2201e4;
    }
    ctx->pc = 0x2201DCu;
    SET_GPR_U32(ctx, 31, 0x2201E4u);
    ctx->pc = 0x2201E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2201DCu;
    // 0x2201e0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x2201E4u;
label_2201e4:
    // 0x2201e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2201e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2201e8:
    // 0x2201e8: 0xc084af4  jal         func_212BD0
label_2201ec:
    if (ctx->pc == 0x2201ECu) {
        ctx->pc = 0x2201F0u;
        goto label_2201f0;
    }
    ctx->pc = 0x2201E8u;
    SET_GPR_U32(ctx, 31, 0x2201F0u);
    ctx->pc = 0x212BD0u;
    { ctx->pc = 0x212bd0; return; }
    ctx->pc = 0x2201F0u;
label_2201f0:
    // 0x2201f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2201f4:
    if (ctx->pc == 0x2201F4u) {
        ctx->pc = 0x2201F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201F0u;
        // 0x2201f4: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2201F8u;
        goto label_2201f8;
    }
    ctx->pc = 0x2201F0u;
    {
        const bool branch_taken_0x2201f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2201F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201F0u;
        // 0x2201f4: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2201f0) {
            ctx->pc = 0x220208u;
            goto label_220208;
        }
    }
    ctx->pc = 0x2201F8u;
label_2201f8:
    // 0x2201f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2201f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2201fc:
    // 0x2201fc: 0xc0882f8  jal         func_220BE0
label_220200:
    if (ctx->pc == 0x220200u) {
        ctx->pc = 0x220200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201FCu;
        // 0x220200: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220204u;
        goto label_220204;
    }
    ctx->pc = 0x2201FCu;
    SET_GPR_U32(ctx, 31, 0x220204u);
    ctx->pc = 0x220200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2201FCu;
    // 0x220200: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x220204u;
label_220204:
    // 0x220204: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x220204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_220208:
    // 0x220208: 0xc084af4  jal         func_212BD0
label_22020c:
    if (ctx->pc == 0x22020Cu) {
        ctx->pc = 0x220210u;
        goto label_220210;
    }
    ctx->pc = 0x220208u;
    SET_GPR_U32(ctx, 31, 0x220210u);
    ctx->pc = 0x212BD0u;
    { ctx->pc = 0x212bd0; return; }
    ctx->pc = 0x220210u;
label_220210:
    // 0x220210: 0x1040009f  beqz        $v0, . + 4 + (0x9F << 2)
label_220214:
    if (ctx->pc == 0x220214u) {
        ctx->pc = 0x220214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220210u;
        // 0x220214: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220218u;
        goto label_220218;
    }
    ctx->pc = 0x220210u;
    {
        const bool branch_taken_0x220210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220210u;
        // 0x220214: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220210) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x220218u;
label_220218:
    // 0x220218: 0xc0882f8  jal         func_220BE0
label_22021c:
    if (ctx->pc == 0x22021Cu) {
        ctx->pc = 0x22021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220218u;
        // 0x22021c: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220220u;
        goto label_220220;
    }
    ctx->pc = 0x220218u;
    SET_GPR_U32(ctx, 31, 0x220220u);
    ctx->pc = 0x22021Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220218u;
    // 0x22021c: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x220220u;
label_220220:
    // 0x220220: 0x1000009b  b           . + 4 + (0x9B << 2)
label_220224:
    if (ctx->pc == 0x220224u) {
        ctx->pc = 0x220228u;
        goto label_220228;
    }
    ctx->pc = 0x220220u;
    {
        const bool branch_taken_0x220220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220220) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x220228u;
label_220228:
    // 0x220228: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x220228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_22022c:
    // 0x22022c: 0x8c244970  lw          $a0, 0x4970($at)
    ctx->pc = 0x22022cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
label_220230:
    // 0x220230: 0x24633420  addiu       $v1, $v1, 0x3420
    ctx->pc = 0x220230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13344));
label_220234:
    // 0x220234: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x220234u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
label_220238:
    // 0x220238: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x220238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_22023c:
    // 0x22023c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22023cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_220240:
    // 0x220240: 0xa424b4ea  sh          $a0, -0x4B16($at)
    ctx->pc = 0x220240u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294948074), (uint16_t)GPR_U32(ctx, 4));
label_220244:
    // 0x220244: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x220244u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_220248:
    // 0x220248: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
label_22024c:
    if (ctx->pc == 0x22024Cu) {
        ctx->pc = 0x22024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220248u;
        // 0x22024c: 0x24c6b4e0  addiu       $a2, $a2, -0x4B20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948064));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220250u;
        goto label_220250;
    }
    ctx->pc = 0x220248u;
    {
        const bool branch_taken_0x220248 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220248u;
        // 0x22024c: 0x24c6b4e0  addiu       $a2, $a2, -0x4B20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220248) {
            ctx->pc = 0x2202C0u;
            goto label_2202c0;
        }
    }
    ctx->pc = 0x220250u;
label_220250:
    // 0x220250: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x220250u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_220254:
    // 0x220254: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x220254u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220258:
    // 0x220258: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x220258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_22025c:
    // 0x22025c: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x22025cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_220260:
    // 0x220260: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x220260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_220264:
    // 0x220264: 0x642823  subu        $a1, $v1, $a0
    ctx->pc = 0x220264u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_220268:
    // 0x220268: 0x91030010  lbu         $v1, 0x10($t0)
    ctx->pc = 0x220268u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 16)));
label_22026c:
    // 0x22026c: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
label_220270:
    if (ctx->pc == 0x220270u) {
        ctx->pc = 0x220274u;
        goto label_220274;
    }
    ctx->pc = 0x22026Cu;
    {
        const bool branch_taken_0x22026c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x22026c) {
            ctx->pc = 0x2202ACu;
            goto label_2202ac;
        }
    }
    ctx->pc = 0x220274u;
label_220274:
    // 0x220274: 0x9504000a  lhu         $a0, 0xA($t0)
    ctx->pc = 0x220274u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 10)));
label_220278:
    // 0x220278: 0x288300fa  slti        $v1, $a0, 0xFA
    ctx->pc = 0x220278u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)250) ? 1 : 0);
label_22027c:
    // 0x22027c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_220280:
    if (ctx->pc == 0x220280u) {
        ctx->pc = 0x220280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22027Cu;
        // 0x220280: 0x2881010f  slti        $at, $a0, 0x10F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)271) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x220284u;
        goto label_220284;
    }
    ctx->pc = 0x22027Cu;
    {
        const bool branch_taken_0x22027c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22027Cu;
        // 0x220280: 0x2881010f  slti        $at, $a0, 0x10F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)271) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22027c) {
            ctx->pc = 0x220290u;
            goto label_220290;
        }
    }
    ctx->pc = 0x220284u;
label_220284:
    // 0x220284: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_220288:
    if (ctx->pc == 0x220288u) {
        ctx->pc = 0x220288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220284u;
        // 0x220288: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22028Cu;
        goto label_22028c;
    }
    ctx->pc = 0x220284u;
    {
        const bool branch_taken_0x220284 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x220288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220284u;
        // 0x220288: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220284) {
            ctx->pc = 0x220290u;
            goto label_220290;
        }
    }
    ctx->pc = 0x22028Cu;
label_22028c:
    // 0x22028c: 0xa503000a  sh          $v1, 0xA($t0)
    ctx->pc = 0x22028cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 10), (uint16_t)GPR_U32(ctx, 3));
label_220290:
    // 0x220290: 0x9504000c  lhu         $a0, 0xC($t0)
    ctx->pc = 0x220290u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
label_220294:
    // 0x220294: 0x288300fa  slti        $v1, $a0, 0xFA
    ctx->pc = 0x220294u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)250) ? 1 : 0);
label_220298:
    // 0x220298: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_22029c:
    if (ctx->pc == 0x22029Cu) {
        ctx->pc = 0x22029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220298u;
        // 0x22029c: 0x2881010f  slti        $at, $a0, 0x10F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)271) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2202A0u;
        goto label_2202a0;
    }
    ctx->pc = 0x220298u;
    {
        const bool branch_taken_0x220298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220298u;
        // 0x22029c: 0x2881010f  slti        $at, $a0, 0x10F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)271) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220298) {
            ctx->pc = 0x2202ACu;
            goto label_2202ac;
        }
    }
    ctx->pc = 0x2202A0u;
label_2202a0:
    // 0x2202a0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_2202a4:
    if (ctx->pc == 0x2202A4u) {
        ctx->pc = 0x2202A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202A0u;
        // 0x2202a4: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2202A8u;
        goto label_2202a8;
    }
    ctx->pc = 0x2202A0u;
    {
        const bool branch_taken_0x2202a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2202A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202A0u;
        // 0x2202a4: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2202a0) {
            ctx->pc = 0x2202ACu;
            goto label_2202ac;
        }
    }
    ctx->pc = 0x2202A8u;
label_2202a8:
    // 0x2202a8: 0xa503000c  sh          $v1, 0xC($t0)
    ctx->pc = 0x2202a8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 12), (uint16_t)GPR_U32(ctx, 3));
label_2202ac:
    // 0x2202ac: 0x0  nop
    ctx->pc = 0x2202acu;
    // NOP
label_2202b0:
    // 0x2202b0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2202b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2202b4:
    // 0x2202b4: 0x28e300ff  slti        $v1, $a3, 0xFF
    ctx->pc = 0x2202b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)255) ? 1 : 0);
label_2202b8:
    // 0x2202b8: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
label_2202bc:
    if (ctx->pc == 0x2202BCu) {
        ctx->pc = 0x2202BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202B8u;
        // 0x2202bc: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2202C0u;
        goto label_2202c0;
    }
    ctx->pc = 0x2202B8u;
    {
        const bool branch_taken_0x2202b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2202BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202B8u;
        // 0x2202bc: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2202b8) {
            ctx->pc = 0x220268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220268;
        }
    }
    ctx->pc = 0x2202C0u;
label_2202c0:
    // 0x2202c0: 0x94c4000a  lhu         $a0, 0xA($a2)
    ctx->pc = 0x2202c0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
label_2202c4:
    // 0x2202c4: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x2202c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2202c8:
    // 0x2202c8: 0x14830071  bne         $a0, $v1, . + 4 + (0x71 << 2)
label_2202cc:
    if (ctx->pc == 0x2202CCu) {
        ctx->pc = 0x2202CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202C8u;
        // 0x2202cc: 0x240400f8  addiu       $a0, $zero, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2202D0u;
        goto label_2202d0;
    }
    ctx->pc = 0x2202C8u;
    {
        const bool branch_taken_0x2202c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2202CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202C8u;
        // 0x2202cc: 0x240400f8  addiu       $a0, $zero, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2202c8) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x2202D0u;
label_2202d0:
    // 0x2202d0: 0xc0882f8  jal         func_220BE0
label_2202d4:
    if (ctx->pc == 0x2202D4u) {
        ctx->pc = 0x2202D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202D0u;
        // 0x2202d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2202D8u;
        goto label_2202d8;
    }
    ctx->pc = 0x2202D0u;
    SET_GPR_U32(ctx, 31, 0x2202D8u);
    ctx->pc = 0x2202D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2202D0u;
    // 0x2202d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x2202D8u;
label_2202d8:
    // 0x2202d8: 0x1000006d  b           . + 4 + (0x6D << 2)
label_2202dc:
    if (ctx->pc == 0x2202DCu) {
        ctx->pc = 0x2202E0u;
        goto label_2202e0;
    }
    ctx->pc = 0x2202D8u;
    {
        const bool branch_taken_0x2202d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2202d8) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x2202E0u;
label_2202e0:
    // 0x2202e0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x2202e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_2202e4:
    // 0x2202e4: 0x8c244970  lw          $a0, 0x4970($at)
    ctx->pc = 0x2202e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
label_2202e8:
    // 0x2202e8: 0x24633420  addiu       $v1, $v1, 0x3420
    ctx->pc = 0x2202e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13344));
label_2202ec:
    // 0x2202ec: 0x3c080030  lui         $t0, 0x30
    ctx->pc = 0x2202ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)48 << 16));
label_2202f0:
    // 0x2202f0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x2202f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_2202f4:
    // 0x2202f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2202f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2202f8:
    // 0x2202f8: 0xa424b4ea  sh          $a0, -0x4B16($at)
    ctx->pc = 0x2202f8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294948074), (uint16_t)GPR_U32(ctx, 4));
label_2202fc:
    // 0x2202fc: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2202fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_220300:
    // 0x220300: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
label_220304:
    if (ctx->pc == 0x220304u) {
        ctx->pc = 0x220304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220300u;
        // 0x220304: 0x2508b4e0  addiu       $t0, $t0, -0x4B20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294948064));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220308u;
        goto label_220308;
    }
    ctx->pc = 0x220300u;
    {
        const bool branch_taken_0x220300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x220304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220300u;
        // 0x220304: 0x2508b4e0  addiu       $t0, $t0, -0x4B20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294948064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220300) {
            ctx->pc = 0x220378u;
            goto label_220378;
        }
    }
    ctx->pc = 0x220308u;
label_220308:
    // 0x220308: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x220308u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_22030c:
    // 0x22030c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22030cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220310:
    // 0x220310: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x220310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_220314:
    // 0x220314: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x220314u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_220318:
    // 0x220318: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x220318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_22031c:
    // 0x22031c: 0x642823  subu        $a1, $v1, $a0
    ctx->pc = 0x22031cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_220320:
    // 0x220320: 0x90e30010  lbu         $v1, 0x10($a3)
    ctx->pc = 0x220320u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
label_220324:
    // 0x220324: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
label_220328:
    if (ctx->pc == 0x220328u) {
        ctx->pc = 0x22032Cu;
        goto label_22032c;
    }
    ctx->pc = 0x220324u;
    {
        const bool branch_taken_0x220324 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x220324) {
            ctx->pc = 0x220364u;
            goto label_220364;
        }
    }
    ctx->pc = 0x22032Cu;
label_22032c:
    // 0x22032c: 0x94e4000a  lhu         $a0, 0xA($a3)
    ctx->pc = 0x22032cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_220330:
    // 0x220330: 0x288300fa  slti        $v1, $a0, 0xFA
    ctx->pc = 0x220330u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)250) ? 1 : 0);
label_220334:
    // 0x220334: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_220338:
    if (ctx->pc == 0x220338u) {
        ctx->pc = 0x220338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220334u;
        // 0x220338: 0x2881010f  slti        $at, $a0, 0x10F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)271) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22033Cu;
        goto label_22033c;
    }
    ctx->pc = 0x220334u;
    {
        const bool branch_taken_0x220334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220334u;
        // 0x220338: 0x2881010f  slti        $at, $a0, 0x10F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)271) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220334) {
            ctx->pc = 0x220348u;
            goto label_220348;
        }
    }
    ctx->pc = 0x22033Cu;
label_22033c:
    // 0x22033c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_220340:
    if (ctx->pc == 0x220340u) {
        ctx->pc = 0x220340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22033Cu;
        // 0x220340: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220344u;
        goto label_220344;
    }
    ctx->pc = 0x22033Cu;
    {
        const bool branch_taken_0x22033c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x220340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22033Cu;
        // 0x220340: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22033c) {
            ctx->pc = 0x220348u;
            goto label_220348;
        }
    }
    ctx->pc = 0x220344u;
label_220344:
    // 0x220344: 0xa4e3000a  sh          $v1, 0xA($a3)
    ctx->pc = 0x220344u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10), (uint16_t)GPR_U32(ctx, 3));
label_220348:
    // 0x220348: 0x94e4000c  lhu         $a0, 0xC($a3)
    ctx->pc = 0x220348u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
label_22034c:
    // 0x22034c: 0x288300fa  slti        $v1, $a0, 0xFA
    ctx->pc = 0x22034cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)250) ? 1 : 0);
label_220350:
    // 0x220350: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_220354:
    if (ctx->pc == 0x220354u) {
        ctx->pc = 0x220354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220350u;
        // 0x220354: 0x2881010f  slti        $at, $a0, 0x10F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)271) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x220358u;
        goto label_220358;
    }
    ctx->pc = 0x220350u;
    {
        const bool branch_taken_0x220350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220350u;
        // 0x220354: 0x2881010f  slti        $at, $a0, 0x10F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)271) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220350) {
            ctx->pc = 0x220364u;
            goto label_220364;
        }
    }
    ctx->pc = 0x220358u;
label_220358:
    // 0x220358: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_22035c:
    if (ctx->pc == 0x22035Cu) {
        ctx->pc = 0x22035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220358u;
        // 0x22035c: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220360u;
        goto label_220360;
    }
    ctx->pc = 0x220358u;
    {
        const bool branch_taken_0x220358 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220358u;
        // 0x22035c: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220358) {
            ctx->pc = 0x220364u;
            goto label_220364;
        }
    }
    ctx->pc = 0x220360u;
label_220360:
    // 0x220360: 0xa4e3000c  sh          $v1, 0xC($a3)
    ctx->pc = 0x220360u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 3));
label_220364:
    // 0x220364: 0x0  nop
    ctx->pc = 0x220364u;
    // NOP
label_220368:
    // 0x220368: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x220368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_22036c:
    // 0x22036c: 0x28c300ff  slti        $v1, $a2, 0xFF
    ctx->pc = 0x22036cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)255) ? 1 : 0);
label_220370:
    // 0x220370: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
label_220374:
    if (ctx->pc == 0x220374u) {
        ctx->pc = 0x220374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220370u;
        // 0x220374: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220378u;
        goto label_220378;
    }
    ctx->pc = 0x220370u;
    {
        const bool branch_taken_0x220370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220370u;
        // 0x220374: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220370) {
            ctx->pc = 0x220320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220320;
        }
    }
    ctx->pc = 0x220378u;
label_220378:
    // 0x220378: 0x9504000a  lhu         $a0, 0xA($t0)
    ctx->pc = 0x220378u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 10)));
label_22037c:
    // 0x22037c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x22037cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_220380:
    // 0x220380: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_220384:
    if (ctx->pc == 0x220384u) {
        ctx->pc = 0x220384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220380u;
        // 0x220384: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220388u;
        goto label_220388;
    }
    ctx->pc = 0x220380u;
    {
        const bool branch_taken_0x220380 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x220384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220380u;
        // 0x220384: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220380) {
            ctx->pc = 0x22039Cu;
            goto label_22039c;
        }
    }
    ctx->pc = 0x220388u;
label_220388:
    // 0x220388: 0x240400f8  addiu       $a0, $zero, 0xF8
    ctx->pc = 0x220388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
label_22038c:
    // 0x22038c: 0xc0882f8  jal         func_220BE0
label_220390:
    if (ctx->pc == 0x220390u) {
        ctx->pc = 0x220390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22038Cu;
        // 0x220390: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220394u;
        goto label_220394;
    }
    ctx->pc = 0x22038Cu;
    SET_GPR_U32(ctx, 31, 0x220394u);
    ctx->pc = 0x220390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22038Cu;
    // 0x220390: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x220394u;
label_220394:
    // 0x220394: 0x1000003e  b           . + 4 + (0x3E << 2)
label_220398:
    if (ctx->pc == 0x220398u) {
        ctx->pc = 0x22039Cu;
        goto label_22039c;
    }
    ctx->pc = 0x220394u;
    {
        const bool branch_taken_0x220394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220394) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x22039Cu;
label_22039c:
    // 0x22039c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_2203a0:
    if (ctx->pc == 0x2203A0u) {
        ctx->pc = 0x2203A4u;
        goto label_2203a4;
    }
    ctx->pc = 0x22039Cu;
    {
        const bool branch_taken_0x22039c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22039c) {
            ctx->pc = 0x2203B8u;
            goto label_2203b8;
        }
    }
    ctx->pc = 0x2203A4u;
label_2203a4:
    // 0x2203a4: 0x240400f8  addiu       $a0, $zero, 0xF8
    ctx->pc = 0x2203a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
label_2203a8:
    // 0x2203a8: 0xc0882f8  jal         func_220BE0
label_2203ac:
    if (ctx->pc == 0x2203ACu) {
        ctx->pc = 0x2203ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2203A8u;
        // 0x2203ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2203B0u;
        goto label_2203b0;
    }
    ctx->pc = 0x2203A8u;
    SET_GPR_U32(ctx, 31, 0x2203B0u);
    ctx->pc = 0x2203ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2203A8u;
    // 0x2203ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x2203B0u;
label_2203b0:
    // 0x2203b0: 0x10000037  b           . + 4 + (0x37 << 2)
label_2203b4:
    if (ctx->pc == 0x2203B4u) {
        ctx->pc = 0x2203B8u;
        goto label_2203b8;
    }
    ctx->pc = 0x2203B0u;
    {
        const bool branch_taken_0x2203b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2203b0) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x2203B8u;
label_2203b8:
    // 0x2203b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2203b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2203bc:
    // 0x2203bc: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_2203c0:
    if (ctx->pc == 0x2203C0u) {
        ctx->pc = 0x2203C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2203BCu;
        // 0x2203c0: 0x2403001a  addiu       $v1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2203C4u;
        goto label_2203c4;
    }
    ctx->pc = 0x2203BCu;
    {
        const bool branch_taken_0x2203bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2203C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2203BCu;
        // 0x2203c0: 0x2403001a  addiu       $v1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2203bc) {
            ctx->pc = 0x2203D8u;
            goto label_2203d8;
        }
    }
    ctx->pc = 0x2203C4u;
label_2203c4:
    // 0x2203c4: 0x240400f8  addiu       $a0, $zero, 0xF8
    ctx->pc = 0x2203c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
label_2203c8:
    // 0x2203c8: 0xc0882f8  jal         func_220BE0
label_2203cc:
    if (ctx->pc == 0x2203CCu) {
        ctx->pc = 0x2203CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2203C8u;
        // 0x2203cc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2203D0u;
        goto label_2203d0;
    }
    ctx->pc = 0x2203C8u;
    SET_GPR_U32(ctx, 31, 0x2203D0u);
    ctx->pc = 0x2203CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2203C8u;
    // 0x2203cc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x2203D0u;
label_2203d0:
    // 0x2203d0: 0x1000002f  b           . + 4 + (0x2F << 2)
label_2203d4:
    if (ctx->pc == 0x2203D4u) {
        ctx->pc = 0x2203D8u;
        goto label_2203d8;
    }
    ctx->pc = 0x2203D0u;
    {
        const bool branch_taken_0x2203d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2203d0) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x2203D8u;
label_2203d8:
    // 0x2203d8: 0x1483002d  bne         $a0, $v1, . + 4 + (0x2D << 2)
label_2203dc:
    if (ctx->pc == 0x2203DCu) {
        ctx->pc = 0x2203E0u;
        goto label_2203e0;
    }
    ctx->pc = 0x2203D8u;
    {
        const bool branch_taken_0x2203d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2203d8) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x2203E0u;
label_2203e0:
    // 0x2203e0: 0x240400f8  addiu       $a0, $zero, 0xF8
    ctx->pc = 0x2203e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
label_2203e4:
    // 0x2203e4: 0xc0882f8  jal         func_220BE0
label_2203e8:
    if (ctx->pc == 0x2203E8u) {
        ctx->pc = 0x2203E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2203E4u;
        // 0x2203e8: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2203ECu;
        goto label_2203ec;
    }
    ctx->pc = 0x2203E4u;
    SET_GPR_U32(ctx, 31, 0x2203ECu);
    ctx->pc = 0x2203E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2203E4u;
    // 0x2203e8: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x2203ECu;
label_2203ec:
    // 0x2203ec: 0x10000028  b           . + 4 + (0x28 << 2)
label_2203f0:
    if (ctx->pc == 0x2203F0u) {
        ctx->pc = 0x2203F4u;
        goto label_2203f4;
    }
    ctx->pc = 0x2203ECu;
    {
        const bool branch_taken_0x2203ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2203ec) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x2203F4u;
label_2203f4:
    // 0x2203f4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2203f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_2203f8:
    // 0x2203f8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x2203f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_2203fc:
    // 0x2203fc: 0x8c244970  lw          $a0, 0x4970($at)
    ctx->pc = 0x2203fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
label_220400:
    // 0x220400: 0x24633420  addiu       $v1, $v1, 0x3420
    ctx->pc = 0x220400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13344));
label_220404:
    // 0x220404: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x220404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_220408:
    // 0x220408: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x220408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22040c:
    // 0x22040c: 0xa424b4ea  sh          $a0, -0x4B16($at)
    ctx->pc = 0x22040cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294948074), (uint16_t)GPR_U32(ctx, 4));
label_220410:
    // 0x220410: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x220410u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_220414:
    // 0x220414: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
label_220418:
    if (ctx->pc == 0x220418u) {
        ctx->pc = 0x220418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220414u;
        // 0x220418: 0x3c070030  lui         $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22041Cu;
        goto label_22041c;
    }
    ctx->pc = 0x220414u;
    {
        const bool branch_taken_0x220414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x220418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220414u;
        // 0x220418: 0x3c070030  lui         $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220414) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x22041Cu;
label_22041c:
    // 0x22041c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22041cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220420:
    // 0x220420: 0x24e7b4e0  addiu       $a3, $a3, -0x4B20
    ctx->pc = 0x220420u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948064));
label_220424:
    // 0x220424: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x220424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_220428:
    // 0x220428: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x220428u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22042c:
    // 0x22042c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x22042cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_220430:
    // 0x220430: 0x642823  subu        $a1, $v1, $a0
    ctx->pc = 0x220430u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_220434:
    // 0x220434: 0x90e30010  lbu         $v1, 0x10($a3)
    ctx->pc = 0x220434u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
label_220438:
    // 0x220438: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
label_22043c:
    if (ctx->pc == 0x22043Cu) {
        ctx->pc = 0x220440u;
        goto label_220440;
    }
    ctx->pc = 0x220438u;
    {
        const bool branch_taken_0x220438 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x220438) {
            ctx->pc = 0x22047Cu;
            goto label_22047c;
        }
    }
    ctx->pc = 0x220440u;
label_220440:
    // 0x220440: 0x94e4000a  lhu         $a0, 0xA($a3)
    ctx->pc = 0x220440u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_220444:
    // 0x220444: 0x288300fa  slti        $v1, $a0, 0xFA
    ctx->pc = 0x220444u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)250) ? 1 : 0);
label_220448:
    // 0x220448: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_22044c:
    if (ctx->pc == 0x22044Cu) {
        ctx->pc = 0x22044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220448u;
        // 0x22044c: 0x2881010f  slti        $at, $a0, 0x10F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)271) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x220450u;
        goto label_220450;
    }
    ctx->pc = 0x220448u;
    {
        const bool branch_taken_0x220448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220448u;
        // 0x22044c: 0x2881010f  slti        $at, $a0, 0x10F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)271) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220448) {
            ctx->pc = 0x22045Cu;
            goto label_22045c;
        }
    }
    ctx->pc = 0x220450u;
label_220450:
    // 0x220450: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_220454:
    if (ctx->pc == 0x220454u) {
        ctx->pc = 0x220454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220450u;
        // 0x220454: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220458u;
        goto label_220458;
    }
    ctx->pc = 0x220450u;
    {
        const bool branch_taken_0x220450 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x220454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220450u;
        // 0x220454: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220450) {
            ctx->pc = 0x22045Cu;
            goto label_22045c;
        }
    }
    ctx->pc = 0x220458u;
label_220458:
    // 0x220458: 0xa4e3000a  sh          $v1, 0xA($a3)
    ctx->pc = 0x220458u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10), (uint16_t)GPR_U32(ctx, 3));
label_22045c:
    // 0x22045c: 0x0  nop
    ctx->pc = 0x22045cu;
    // NOP
label_220460:
    // 0x220460: 0x94e4000c  lhu         $a0, 0xC($a3)
    ctx->pc = 0x220460u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
label_220464:
    // 0x220464: 0x288300fa  slti        $v1, $a0, 0xFA
    ctx->pc = 0x220464u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)250) ? 1 : 0);
label_220468:
    // 0x220468: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_22046c:
    if (ctx->pc == 0x22046Cu) {
        ctx->pc = 0x22046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220468u;
        // 0x22046c: 0x2881010f  slti        $at, $a0, 0x10F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)271) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x220470u;
        goto label_220470;
    }
    ctx->pc = 0x220468u;
    {
        const bool branch_taken_0x220468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220468u;
        // 0x22046c: 0x2881010f  slti        $at, $a0, 0x10F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)271) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220468) {
            ctx->pc = 0x22047Cu;
            goto label_22047c;
        }
    }
    ctx->pc = 0x220470u;
label_220470:
    // 0x220470: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_220474:
    if (ctx->pc == 0x220474u) {
        ctx->pc = 0x220474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220470u;
        // 0x220474: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220478u;
        goto label_220478;
    }
    ctx->pc = 0x220470u;
    {
        const bool branch_taken_0x220470 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x220474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220470u;
        // 0x220474: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220470) {
            ctx->pc = 0x22047Cu;
            goto label_22047c;
        }
    }
    ctx->pc = 0x220478u;
label_220478:
    // 0x220478: 0xa4e3000c  sh          $v1, 0xC($a3)
    ctx->pc = 0x220478u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 3));
label_22047c:
    // 0x22047c: 0x0  nop
    ctx->pc = 0x22047cu;
    // NOP
label_220480:
    // 0x220480: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x220480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_220484:
    // 0x220484: 0x28c300ff  slti        $v1, $a2, 0xFF
    ctx->pc = 0x220484u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)255) ? 1 : 0);
label_220488:
    // 0x220488: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_22048c:
    if (ctx->pc == 0x22048Cu) {
        ctx->pc = 0x22048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220488u;
        // 0x22048c: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220490u;
        goto label_220490;
    }
    ctx->pc = 0x220488u;
    {
        const bool branch_taken_0x220488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220488u;
        // 0x22048c: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220488) {
            ctx->pc = 0x220434u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220434;
        }
    }
    ctx->pc = 0x220490u;
label_220490:
    // 0x220490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x220490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_220494:
    // 0x220494: 0x3e00008  jr          $ra
label_220498:
    if (ctx->pc == 0x220498u) {
        ctx->pc = 0x220498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220494u;
        // 0x220498: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22049Cu;
        goto label_22049c;
    }
    ctx->pc = 0x220494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220494u;
        // 0x220498: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22049Cu;
label_22049c:
    // 0x22049c: 0x0  nop
    ctx->pc = 0x22049cu;
    // NOP
label_2204a0:
    // 0x2204a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2204a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2204a4:
    // 0x2204a4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2204a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2204a8:
    // 0x2204a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2204a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2204ac:
    // 0x2204ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2204acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2204b0:
    // 0x2204b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2204b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2204b4:
    // 0x2204b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2204b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2204b8:
    // 0x2204b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2204b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2204bc:
    // 0x2204bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2204bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2204c0:
    // 0x2204c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2204c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2204c4:
    // 0x2204c4: 0x16630010  bne         $s3, $v1, . + 4 + (0x10 << 2)
label_2204c8:
    if (ctx->pc == 0x2204C8u) {
        ctx->pc = 0x2204C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2204C4u;
        // 0x2204c8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2204CCu;
        goto label_2204cc;
    }
    ctx->pc = 0x2204C4u;
    {
        const bool branch_taken_0x2204c4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x2204C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2204C4u;
        // 0x2204c8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2204c4) {
            ctx->pc = 0x220508u;
            { ctx->pc = 0x220508; return; }
        }
    }
    ctx->pc = 0x2204CCu;
label_2204cc:
    // 0x2204cc: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_2204d0:
    if (ctx->pc == 0x2204D0u) {
        ctx->pc = 0x2204D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2204CCu;
        // 0x2204d0: 0x24030043  addiu       $v1, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2204D4u;
        goto label_2204d4;
    }
    ctx->pc = 0x2204CCu;
    {
        const bool branch_taken_0x2204cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2204D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2204CCu;
        // 0x2204d0: 0x24030043  addiu       $v1, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2204cc) {
            ctx->pc = 0x22050Cu;
            { ctx->pc = 0x22050c; return; }
        }
    }
    ctx->pc = 0x2204D4u;
label_2204d4:
    // 0x2204d4: 0x262200e6  addiu       $v0, $s1, 0xE6
    ctx->pc = 0x2204d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 230));
label_2204d8:
    // 0x2204d8: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x2204d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
label_2204dc:
    // 0x2204dc: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2204dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2204e0:
    // 0x2204e0: 0x2610f180  addiu       $s0, $s0, -0xE80
    ctx->pc = 0x2204e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963584));
label_2204e4:
    // 0x2204e4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x2204e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
label_2204e8:
    // 0x2204e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2204e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2204ec:
    // 0x2204ec: 0x2442b4e0  addiu       $v0, $v0, -0x4B20
    ctx->pc = 0x2204ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948064));
    ctx->pc = 0x2204f0u;
    return;
}
