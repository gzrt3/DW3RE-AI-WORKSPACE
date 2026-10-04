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


void FUN_0014eba0_part36(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x15fd10u: goto label_15fd10;
        case 0x15fd14u: goto label_15fd14;
        case 0x15fd18u: goto label_15fd18;
        case 0x15fd1cu: goto label_15fd1c;
        case 0x15fd20u: goto label_15fd20;
        case 0x15fd24u: goto label_15fd24;
        case 0x15fd28u: goto label_15fd28;
        case 0x15fd2cu: goto label_15fd2c;
        case 0x15fd30u: goto label_15fd30;
        case 0x15fd34u: goto label_15fd34;
        case 0x15fd38u: goto label_15fd38;
        case 0x15fd3cu: goto label_15fd3c;
        case 0x15fd40u: goto label_15fd40;
        case 0x15fd44u: goto label_15fd44;
        case 0x15fd48u: goto label_15fd48;
        case 0x15fd4cu: goto label_15fd4c;
        case 0x15fd50u: goto label_15fd50;
        case 0x15fd54u: goto label_15fd54;
        case 0x15fd58u: goto label_15fd58;
        case 0x15fd5cu: goto label_15fd5c;
        case 0x15fd60u: goto label_15fd60;
        case 0x15fd64u: goto label_15fd64;
        case 0x15fd68u: goto label_15fd68;
        case 0x15fd6cu: goto label_15fd6c;
        case 0x15fd70u: goto label_15fd70;
        case 0x15fd74u: goto label_15fd74;
        case 0x15fd78u: goto label_15fd78;
        case 0x15fd7cu: goto label_15fd7c;
        case 0x15fd80u: goto label_15fd80;
        case 0x15fd84u: goto label_15fd84;
        case 0x15fd88u: goto label_15fd88;
        case 0x15fd8cu: goto label_15fd8c;
        case 0x15fd90u: goto label_15fd90;
        case 0x15fd94u: goto label_15fd94;
        case 0x15fd98u: goto label_15fd98;
        case 0x15fd9cu: goto label_15fd9c;
        case 0x15fda0u: goto label_15fda0;
        case 0x15fda4u: goto label_15fda4;
        case 0x15fda8u: goto label_15fda8;
        case 0x15fdacu: goto label_15fdac;
        case 0x15fdb0u: goto label_15fdb0;
        case 0x15fdb4u: goto label_15fdb4;
        case 0x15fdb8u: goto label_15fdb8;
        case 0x15fdbcu: goto label_15fdbc;
        case 0x15fdc0u: goto label_15fdc0;
        case 0x15fdc4u: goto label_15fdc4;
        case 0x15fdc8u: goto label_15fdc8;
        case 0x15fdccu: goto label_15fdcc;
        case 0x15fdd0u: goto label_15fdd0;
        case 0x15fdd4u: goto label_15fdd4;
        case 0x15fdd8u: goto label_15fdd8;
        case 0x15fddcu: goto label_15fddc;
        case 0x15fde0u: goto label_15fde0;
        case 0x15fde4u: goto label_15fde4;
        case 0x15fde8u: goto label_15fde8;
        case 0x15fdecu: goto label_15fdec;
        case 0x15fdf0u: goto label_15fdf0;
        case 0x15fdf4u: goto label_15fdf4;
        case 0x15fdf8u: goto label_15fdf8;
        case 0x15fdfcu: goto label_15fdfc;
        case 0x15fe00u: goto label_15fe00;
        case 0x15fe04u: goto label_15fe04;
        case 0x15fe08u: goto label_15fe08;
        case 0x15fe0cu: goto label_15fe0c;
        case 0x15fe10u: goto label_15fe10;
        case 0x15fe14u: goto label_15fe14;
        case 0x15fe18u: goto label_15fe18;
        case 0x15fe1cu: goto label_15fe1c;
        case 0x15fe20u: goto label_15fe20;
        case 0x15fe24u: goto label_15fe24;
        case 0x15fe28u: goto label_15fe28;
        case 0x15fe2cu: goto label_15fe2c;
        case 0x15fe30u: goto label_15fe30;
        case 0x15fe34u: goto label_15fe34;
        case 0x15fe38u: goto label_15fe38;
        case 0x15fe3cu: goto label_15fe3c;
        case 0x15fe40u: goto label_15fe40;
        case 0x15fe44u: goto label_15fe44;
        case 0x15fe48u: goto label_15fe48;
        case 0x15fe4cu: goto label_15fe4c;
        case 0x15fe50u: goto label_15fe50;
        case 0x15fe54u: goto label_15fe54;
        case 0x15fe58u: goto label_15fe58;
        case 0x15fe5cu: goto label_15fe5c;
        case 0x15fe60u: goto label_15fe60;
        case 0x15fe64u: goto label_15fe64;
        case 0x15fe68u: goto label_15fe68;
        case 0x15fe6cu: goto label_15fe6c;
        case 0x15fe70u: goto label_15fe70;
        case 0x15fe74u: goto label_15fe74;
        case 0x15fe78u: goto label_15fe78;
        case 0x15fe7cu: goto label_15fe7c;
        case 0x15fe80u: goto label_15fe80;
        case 0x15fe84u: goto label_15fe84;
        case 0x15fe88u: goto label_15fe88;
        case 0x15fe8cu: goto label_15fe8c;
        case 0x15fe90u: goto label_15fe90;
        case 0x15fe94u: goto label_15fe94;
        case 0x15fe98u: goto label_15fe98;
        case 0x15fe9cu: goto label_15fe9c;
        case 0x15fea0u: goto label_15fea0;
        case 0x15fea4u: goto label_15fea4;
        case 0x15fea8u: goto label_15fea8;
        case 0x15feacu: goto label_15feac;
        case 0x15feb0u: goto label_15feb0;
        case 0x15feb4u: goto label_15feb4;
        case 0x15feb8u: goto label_15feb8;
        case 0x15febcu: goto label_15febc;
        case 0x15fec0u: goto label_15fec0;
        case 0x15fec4u: goto label_15fec4;
        case 0x15fec8u: goto label_15fec8;
        case 0x15feccu: goto label_15fecc;
        case 0x15fed0u: goto label_15fed0;
        case 0x15fed4u: goto label_15fed4;
        case 0x15fed8u: goto label_15fed8;
        case 0x15fedcu: goto label_15fedc;
        case 0x15fee0u: goto label_15fee0;
        case 0x15fee4u: goto label_15fee4;
        case 0x15fee8u: goto label_15fee8;
        case 0x15feecu: goto label_15feec;
        case 0x15fef0u: goto label_15fef0;
        case 0x15fef4u: goto label_15fef4;
        case 0x15fef8u: goto label_15fef8;
        case 0x15fefcu: goto label_15fefc;
        case 0x15ff00u: goto label_15ff00;
        case 0x15ff04u: goto label_15ff04;
        case 0x15ff08u: goto label_15ff08;
        case 0x15ff0cu: goto label_15ff0c;
        case 0x15ff10u: goto label_15ff10;
        case 0x15ff14u: goto label_15ff14;
        case 0x15ff18u: goto label_15ff18;
        case 0x15ff1cu: goto label_15ff1c;
        case 0x15ff20u: goto label_15ff20;
        case 0x15ff24u: goto label_15ff24;
        case 0x15ff28u: goto label_15ff28;
        case 0x15ff2cu: goto label_15ff2c;
        case 0x15ff30u: goto label_15ff30;
        case 0x15ff34u: goto label_15ff34;
        case 0x15ff38u: goto label_15ff38;
        case 0x15ff3cu: goto label_15ff3c;
        case 0x15ff40u: goto label_15ff40;
        case 0x15ff44u: goto label_15ff44;
        case 0x15ff48u: goto label_15ff48;
        case 0x15ff4cu: goto label_15ff4c;
        case 0x15ff50u: goto label_15ff50;
        case 0x15ff54u: goto label_15ff54;
        case 0x15ff58u: goto label_15ff58;
        case 0x15ff5cu: goto label_15ff5c;
        case 0x15ff60u: goto label_15ff60;
        case 0x15ff64u: goto label_15ff64;
        case 0x15ff68u: goto label_15ff68;
        case 0x15ff6cu: goto label_15ff6c;
        case 0x15ff70u: goto label_15ff70;
        case 0x15ff74u: goto label_15ff74;
        case 0x15ff78u: goto label_15ff78;
        case 0x15ff7cu: goto label_15ff7c;
        case 0x15ff80u: goto label_15ff80;
        case 0x15ff84u: goto label_15ff84;
        case 0x15ff88u: goto label_15ff88;
        case 0x15ff8cu: goto label_15ff8c;
        case 0x15ff90u: goto label_15ff90;
        case 0x15ff94u: goto label_15ff94;
        case 0x15ff98u: goto label_15ff98;
        case 0x15ff9cu: goto label_15ff9c;
        case 0x15ffa0u: goto label_15ffa0;
        case 0x15ffa4u: goto label_15ffa4;
        case 0x15ffa8u: goto label_15ffa8;
        case 0x15ffacu: goto label_15ffac;
        case 0x15ffb0u: goto label_15ffb0;
        case 0x15ffb4u: goto label_15ffb4;
        case 0x15ffb8u: goto label_15ffb8;
        case 0x15ffbcu: goto label_15ffbc;
        case 0x15ffc0u: goto label_15ffc0;
        case 0x15ffc4u: goto label_15ffc4;
        case 0x15ffc8u: goto label_15ffc8;
        case 0x15ffccu: goto label_15ffcc;
        case 0x15ffd0u: goto label_15ffd0;
        case 0x15ffd4u: goto label_15ffd4;
        case 0x15ffd8u: goto label_15ffd8;
        case 0x15ffdcu: goto label_15ffdc;
        case 0x15ffe0u: goto label_15ffe0;
        case 0x15ffe4u: goto label_15ffe4;
        case 0x15ffe8u: goto label_15ffe8;
        case 0x15ffecu: goto label_15ffec;
        case 0x15fff0u: goto label_15fff0;
        case 0x15fff4u: goto label_15fff4;
        case 0x15fff8u: goto label_15fff8;
        case 0x15fffcu: goto label_15fffc;
        case 0x160000u: goto label_160000;
        case 0x160004u: goto label_160004;
        case 0x160008u: goto label_160008;
        case 0x16000cu: goto label_16000c;
        case 0x160010u: goto label_160010;
        case 0x160014u: goto label_160014;
        case 0x160018u: goto label_160018;
        case 0x16001cu: goto label_16001c;
        case 0x160020u: goto label_160020;
        case 0x160024u: goto label_160024;
        case 0x160028u: goto label_160028;
        case 0x16002cu: goto label_16002c;
        case 0x160030u: goto label_160030;
        case 0x160034u: goto label_160034;
        case 0x160038u: goto label_160038;
        case 0x16003cu: goto label_16003c;
        case 0x160040u: goto label_160040;
        case 0x160044u: goto label_160044;
        case 0x160048u: goto label_160048;
        case 0x16004cu: goto label_16004c;
        case 0x160050u: goto label_160050;
        case 0x160054u: goto label_160054;
        case 0x160058u: goto label_160058;
        case 0x16005cu: goto label_16005c;
        case 0x160060u: goto label_160060;
        case 0x160064u: goto label_160064;
        case 0x160068u: goto label_160068;
        case 0x16006cu: goto label_16006c;
        case 0x160070u: goto label_160070;
        case 0x160074u: goto label_160074;
        case 0x160078u: goto label_160078;
        case 0x16007cu: goto label_16007c;
        case 0x160080u: goto label_160080;
        case 0x160084u: goto label_160084;
        case 0x160088u: goto label_160088;
        case 0x16008cu: goto label_16008c;
        case 0x160090u: goto label_160090;
        case 0x160094u: goto label_160094;
        case 0x160098u: goto label_160098;
        case 0x16009cu: goto label_16009c;
        case 0x1600a0u: goto label_1600a0;
        case 0x1600a4u: goto label_1600a4;
        case 0x1600a8u: goto label_1600a8;
        case 0x1600acu: goto label_1600ac;
        case 0x1600b0u: goto label_1600b0;
        case 0x1600b4u: goto label_1600b4;
        case 0x1600b8u: goto label_1600b8;
        case 0x1600bcu: goto label_1600bc;
        case 0x1600c0u: goto label_1600c0;
        case 0x1600c4u: goto label_1600c4;
        case 0x1600c8u: goto label_1600c8;
        case 0x1600ccu: goto label_1600cc;
        case 0x1600d0u: goto label_1600d0;
        case 0x1600d4u: goto label_1600d4;
        case 0x1600d8u: goto label_1600d8;
        case 0x1600dcu: goto label_1600dc;
        case 0x1600e0u: goto label_1600e0;
        case 0x1600e4u: goto label_1600e4;
        case 0x1600e8u: goto label_1600e8;
        case 0x1600ecu: goto label_1600ec;
        case 0x1600f0u: goto label_1600f0;
        case 0x1600f4u: goto label_1600f4;
        case 0x1600f8u: goto label_1600f8;
        case 0x1600fcu: goto label_1600fc;
        case 0x160100u: goto label_160100;
        case 0x160104u: goto label_160104;
        case 0x160108u: goto label_160108;
        case 0x16010cu: goto label_16010c;
        case 0x160110u: goto label_160110;
        case 0x160114u: goto label_160114;
        case 0x160118u: goto label_160118;
        case 0x16011cu: goto label_16011c;
        case 0x160120u: goto label_160120;
        case 0x160124u: goto label_160124;
        case 0x160128u: goto label_160128;
        case 0x16012cu: goto label_16012c;
        case 0x160130u: goto label_160130;
        case 0x160134u: goto label_160134;
        case 0x160138u: goto label_160138;
        case 0x16013cu: goto label_16013c;
        case 0x160140u: goto label_160140;
        case 0x160144u: goto label_160144;
        case 0x160148u: goto label_160148;
        case 0x16014cu: goto label_16014c;
        case 0x160150u: goto label_160150;
        case 0x160154u: goto label_160154;
        case 0x160158u: goto label_160158;
        case 0x16015cu: goto label_16015c;
        case 0x160160u: goto label_160160;
        case 0x160164u: goto label_160164;
        case 0x160168u: goto label_160168;
        case 0x16016cu: goto label_16016c;
        case 0x160170u: goto label_160170;
        case 0x160174u: goto label_160174;
        case 0x160178u: goto label_160178;
        case 0x16017cu: goto label_16017c;
        case 0x160180u: goto label_160180;
        case 0x160184u: goto label_160184;
        case 0x160188u: goto label_160188;
        case 0x16018cu: goto label_16018c;
        case 0x160190u: goto label_160190;
        case 0x160194u: goto label_160194;
        case 0x160198u: goto label_160198;
        case 0x16019cu: goto label_16019c;
        case 0x1601a0u: goto label_1601a0;
        case 0x1601a4u: goto label_1601a4;
        case 0x1601a8u: goto label_1601a8;
        case 0x1601acu: goto label_1601ac;
        case 0x1601b0u: goto label_1601b0;
        case 0x1601b4u: goto label_1601b4;
        case 0x1601b8u: goto label_1601b8;
        case 0x1601bcu: goto label_1601bc;
        case 0x1601c0u: goto label_1601c0;
        case 0x1601c4u: goto label_1601c4;
        case 0x1601c8u: goto label_1601c8;
        case 0x1601ccu: goto label_1601cc;
        case 0x1601d0u: goto label_1601d0;
        case 0x1601d4u: goto label_1601d4;
        case 0x1601d8u: goto label_1601d8;
        case 0x1601dcu: goto label_1601dc;
        case 0x1601e0u: goto label_1601e0;
        case 0x1601e4u: goto label_1601e4;
        case 0x1601e8u: goto label_1601e8;
        case 0x1601ecu: goto label_1601ec;
        case 0x1601f0u: goto label_1601f0;
        case 0x1601f4u: goto label_1601f4;
        case 0x1601f8u: goto label_1601f8;
        case 0x1601fcu: goto label_1601fc;
        case 0x160200u: goto label_160200;
        case 0x160204u: goto label_160204;
        case 0x160208u: goto label_160208;
        case 0x16020cu: goto label_16020c;
        case 0x160210u: goto label_160210;
        case 0x160214u: goto label_160214;
        case 0x160218u: goto label_160218;
        case 0x16021cu: goto label_16021c;
        case 0x160220u: goto label_160220;
        case 0x160224u: goto label_160224;
        case 0x160228u: goto label_160228;
        case 0x16022cu: goto label_16022c;
        case 0x160230u: goto label_160230;
        case 0x160234u: goto label_160234;
        case 0x160238u: goto label_160238;
        case 0x16023cu: goto label_16023c;
        case 0x160240u: goto label_160240;
        case 0x160244u: goto label_160244;
        case 0x160248u: goto label_160248;
        case 0x16024cu: goto label_16024c;
        case 0x160250u: goto label_160250;
        case 0x160254u: goto label_160254;
        case 0x160258u: goto label_160258;
        case 0x16025cu: goto label_16025c;
        case 0x160260u: goto label_160260;
        case 0x160264u: goto label_160264;
        case 0x160268u: goto label_160268;
        case 0x16026cu: goto label_16026c;
        case 0x160270u: goto label_160270;
        case 0x160274u: goto label_160274;
        case 0x160278u: goto label_160278;
        case 0x16027cu: goto label_16027c;
        case 0x160280u: goto label_160280;
        case 0x160284u: goto label_160284;
        case 0x160288u: goto label_160288;
        case 0x16028cu: goto label_16028c;
        case 0x160290u: goto label_160290;
        case 0x160294u: goto label_160294;
        case 0x160298u: goto label_160298;
        case 0x16029cu: goto label_16029c;
        case 0x1602a0u: goto label_1602a0;
        case 0x1602a4u: goto label_1602a4;
        case 0x1602a8u: goto label_1602a8;
        case 0x1602acu: goto label_1602ac;
        case 0x1602b0u: goto label_1602b0;
        case 0x1602b4u: goto label_1602b4;
        case 0x1602b8u: goto label_1602b8;
        case 0x1602bcu: goto label_1602bc;
        case 0x1602c0u: goto label_1602c0;
        case 0x1602c4u: goto label_1602c4;
        case 0x1602c8u: goto label_1602c8;
        case 0x1602ccu: goto label_1602cc;
        case 0x1602d0u: goto label_1602d0;
        case 0x1602d4u: goto label_1602d4;
        case 0x1602d8u: goto label_1602d8;
        case 0x1602dcu: goto label_1602dc;
        case 0x1602e0u: goto label_1602e0;
        case 0x1602e4u: goto label_1602e4;
        case 0x1602e8u: goto label_1602e8;
        case 0x1602ecu: goto label_1602ec;
        case 0x1602f0u: goto label_1602f0;
        case 0x1602f4u: goto label_1602f4;
        case 0x1602f8u: goto label_1602f8;
        case 0x1602fcu: goto label_1602fc;
        case 0x160300u: goto label_160300;
        case 0x160304u: goto label_160304;
        case 0x160308u: goto label_160308;
        case 0x16030cu: goto label_16030c;
        case 0x160310u: goto label_160310;
        case 0x160314u: goto label_160314;
        case 0x160318u: goto label_160318;
        case 0x16031cu: goto label_16031c;
        case 0x160320u: goto label_160320;
        case 0x160324u: goto label_160324;
        case 0x160328u: goto label_160328;
        case 0x16032cu: goto label_16032c;
        case 0x160330u: goto label_160330;
        case 0x160334u: goto label_160334;
        case 0x160338u: goto label_160338;
        case 0x16033cu: goto label_16033c;
        case 0x160340u: goto label_160340;
        case 0x160344u: goto label_160344;
        case 0x160348u: goto label_160348;
        case 0x16034cu: goto label_16034c;
        case 0x160350u: goto label_160350;
        case 0x160354u: goto label_160354;
        case 0x160358u: goto label_160358;
        case 0x16035cu: goto label_16035c;
        case 0x160360u: goto label_160360;
        case 0x160364u: goto label_160364;
        case 0x160368u: goto label_160368;
        case 0x16036cu: goto label_16036c;
        case 0x160370u: goto label_160370;
        case 0x160374u: goto label_160374;
        case 0x160378u: goto label_160378;
        case 0x16037cu: goto label_16037c;
        case 0x160380u: goto label_160380;
        case 0x160384u: goto label_160384;
        case 0x160388u: goto label_160388;
        case 0x16038cu: goto label_16038c;
        case 0x160390u: goto label_160390;
        case 0x160394u: goto label_160394;
        case 0x160398u: goto label_160398;
        case 0x16039cu: goto label_16039c;
        case 0x1603a0u: goto label_1603a0;
        case 0x1603a4u: goto label_1603a4;
        case 0x1603a8u: goto label_1603a8;
        case 0x1603acu: goto label_1603ac;
        case 0x1603b0u: goto label_1603b0;
        case 0x1603b4u: goto label_1603b4;
        case 0x1603b8u: goto label_1603b8;
        case 0x1603bcu: goto label_1603bc;
        case 0x1603c0u: goto label_1603c0;
        case 0x1603c4u: goto label_1603c4;
        case 0x1603c8u: goto label_1603c8;
        case 0x1603ccu: goto label_1603cc;
        case 0x1603d0u: goto label_1603d0;
        case 0x1603d4u: goto label_1603d4;
        case 0x1603d8u: goto label_1603d8;
        case 0x1603dcu: goto label_1603dc;
        case 0x1603e0u: goto label_1603e0;
        case 0x1603e4u: goto label_1603e4;
        case 0x1603e8u: goto label_1603e8;
        case 0x1603ecu: goto label_1603ec;
        case 0x1603f0u: goto label_1603f0;
        case 0x1603f4u: goto label_1603f4;
        case 0x1603f8u: goto label_1603f8;
        case 0x1603fcu: goto label_1603fc;
        case 0x160400u: goto label_160400;
        case 0x160404u: goto label_160404;
        case 0x160408u: goto label_160408;
        case 0x16040cu: goto label_16040c;
        case 0x160410u: goto label_160410;
        case 0x160414u: goto label_160414;
        case 0x160418u: goto label_160418;
        case 0x16041cu: goto label_16041c;
        case 0x160420u: goto label_160420;
        case 0x160424u: goto label_160424;
        case 0x160428u: goto label_160428;
        case 0x16042cu: goto label_16042c;
        case 0x160430u: goto label_160430;
        case 0x160434u: goto label_160434;
        case 0x160438u: goto label_160438;
        case 0x16043cu: goto label_16043c;
        case 0x160440u: goto label_160440;
        case 0x160444u: goto label_160444;
        case 0x160448u: goto label_160448;
        case 0x16044cu: goto label_16044c;
        case 0x160450u: goto label_160450;
        case 0x160454u: goto label_160454;
        case 0x160458u: goto label_160458;
        case 0x16045cu: goto label_16045c;
        case 0x160460u: goto label_160460;
        case 0x160464u: goto label_160464;
        case 0x160468u: goto label_160468;
        case 0x16046cu: goto label_16046c;
        case 0x160470u: goto label_160470;
        case 0x160474u: goto label_160474;
        case 0x160478u: goto label_160478;
        case 0x16047cu: goto label_16047c;
        case 0x160480u: goto label_160480;
        case 0x160484u: goto label_160484;
        case 0x160488u: goto label_160488;
        case 0x16048cu: goto label_16048c;
        case 0x160490u: goto label_160490;
        case 0x160494u: goto label_160494;
        case 0x160498u: goto label_160498;
        case 0x16049cu: goto label_16049c;
        case 0x1604a0u: goto label_1604a0;
        case 0x1604a4u: goto label_1604a4;
        case 0x1604a8u: goto label_1604a8;
        case 0x1604acu: goto label_1604ac;
        case 0x1604b0u: goto label_1604b0;
        case 0x1604b4u: goto label_1604b4;
        case 0x1604b8u: goto label_1604b8;
        case 0x1604bcu: goto label_1604bc;
        case 0x1604c0u: goto label_1604c0;
        case 0x1604c4u: goto label_1604c4;
        case 0x1604c8u: goto label_1604c8;
        case 0x1604ccu: goto label_1604cc;
        case 0x1604d0u: goto label_1604d0;
        case 0x1604d4u: goto label_1604d4;
        case 0x1604d8u: goto label_1604d8;
        case 0x1604dcu: goto label_1604dc;
        default: return;
    }

label_15fd10:
    // 0x15fd10: 0x0  nop
    ctx->pc = 0x15fd10u;
    // NOP
label_15fd14:
    // 0x15fd14: 0x866300c8  lh          $v1, 0xC8($s3)
    ctx->pc = 0x15fd14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 200)));
label_15fd18:
    // 0x15fd18: 0x10600071  beqz        $v1, . + 4 + (0x71 << 2)
label_15fd1c:
    if (ctx->pc == 0x15FD1Cu) {
        ctx->pc = 0x15FD20u;
        goto label_15fd20;
    }
    ctx->pc = 0x15FD18u;
    {
        const bool branch_taken_0x15fd18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fd18) {
            ctx->pc = 0x15FEE0u;
            goto label_15fee0;
        }
    }
    ctx->pc = 0x15FD20u;
label_15fd20:
    // 0x15fd20: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x15fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_15fd24:
    // 0x15fd24: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x15fd24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_15fd28:
    // 0x15fd28: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x15fd28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_15fd2c:
    // 0x15fd2c: 0x9244000f  lbu         $a0, 0xF($s2)
    ctx->pc = 0x15fd2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 15)));
label_15fd30:
    // 0x15fd30: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x15fd30u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
label_15fd34:
    // 0x15fd34: 0x866600ca  lh          $a2, 0xCA($s3)
    ctx->pc = 0x15fd34u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 202)));
label_15fd38:
    // 0x15fd38: 0x3c02479c  lui         $v0, 0x479C
    ctx->pc = 0x15fd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18332 << 16));
label_15fd3c:
    // 0x15fd3c: 0x25085670  addiu       $t0, $t0, 0x5670
    ctx->pc = 0x15fd3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 22128));
label_15fd40:
    // 0x15fd40: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15fd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_15fd44:
    // 0x15fd44: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x15fd44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_15fd48:
    // 0x15fd48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fd48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15fd4c:
    // 0x15fd4c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15fd4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_15fd50:
    // 0x15fd50: 0x44834000  mtc1        $v1, $f8
    ctx->pc = 0x15fd50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_15fd54:
    // 0x15fd54: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x15fd54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_15fd58:
    // 0x15fd58: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x15fd58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_15fd5c:
    // 0x15fd5c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x15fd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_15fd60:
    // 0x15fd60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15fd60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15fd64:
    // 0x15fd64: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x15fd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_15fd68:
    // 0x15fd68: 0x1021821  addu        $v1, $t0, $v0
    ctx->pc = 0x15fd68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_15fd6c:
    // 0x15fd6c: 0xe61023  subu        $v0, $a3, $a2
    ctx->pc = 0x15fd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_15fd70:
    // 0x15fd70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15fd70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15fd74:
    // 0x15fd74: 0xc66600c0  lwc1        $f6, 0xC0($s3)
    ctx->pc = 0x15fd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_15fd78:
    // 0x15fd78: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x15fd78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_15fd7c:
    // 0x15fd7c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x15fd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15fd80:
    // 0x15fd80: 0xc4650010  lwc1        $f5, 0x10($v1)
    ctx->pc = 0x15fd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_15fd84:
    // 0x15fd84: 0xc464002c  lwc1        $f4, 0x2C($v1)
    ctx->pc = 0x15fd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_15fd88:
    // 0x15fd88: 0xc6a30010  lwc1        $f3, 0x10($s5)
    ctx->pc = 0x15fd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_15fd8c:
    // 0x15fd8c: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x15fd8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_15fd90:
    // 0x15fd90: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x15fd90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_15fd94:
    // 0x15fd94: 0x46080843  div.s       $f1, $f1, $f8
    ctx->pc = 0x15fd94u;
    if (ctx->f[8] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[8];
label_15fd98:
    // 0x15fd98: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x15fd98u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
label_15fd9c:
    // 0x15fd9c: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x15fd9cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
label_15fda0:
    // 0x15fda0: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x15fda0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_15fda4:
    // 0x15fda4: 0x46011881  sub.s       $f2, $f3, $f1
    ctx->pc = 0x15fda4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_15fda8:
    // 0x15fda8: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x15fda8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_15fdac:
    // 0x15fdac: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x15fdacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_15fdb0:
    // 0x15fdb0: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x15fdb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_15fdb4:
    // 0x15fdb4: 0x9246000f  lbu         $a2, 0xF($s2)
    ctx->pc = 0x15fdb4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 15)));
label_15fdb8:
    // 0x15fdb8: 0xc66200c4  lwc1        $f2, 0xC4($s3)
    ctx->pc = 0x15fdb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_15fdbc:
    // 0x15fdbc: 0x866200ca  lh          $v0, 0xCA($s3)
    ctx->pc = 0x15fdbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 202)));
label_15fdc0:
    // 0x15fdc0: 0xc6a10014  lwc1        $f1, 0x14($s5)
    ctx->pc = 0x15fdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15fdc4:
    // 0x15fdc4: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x15fdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_15fdc8:
    // 0x15fdc8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x15fdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_15fdcc:
    // 0x15fdcc: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x15fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_15fdd0:
    // 0x15fdd0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x15fdd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_15fdd4:
    // 0x15fdd4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15fdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15fdd8:
    // 0x15fdd8: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x15fdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_15fddc:
    // 0x15fddc: 0x46140100  add.s       $f4, $f0, $f20
    ctx->pc = 0x15fddcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_15fde0:
    // 0x15fde0: 0xc4630014  lwc1        $f3, 0x14($v1)
    ctx->pc = 0x15fde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_15fde4:
    // 0x15fde4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x15fde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15fde8:
    // 0x15fde8: 0xc4620030  lwc1        $f2, 0x30($v1)
    ctx->pc = 0x15fde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_15fdec:
    // 0x15fdec: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x15fdecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_15fdf0:
    // 0x15fdf0: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x15fdf0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_15fdf4:
    // 0x15fdf4: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x15fdf4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_15fdf8:
    // 0x15fdf8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15fdf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15fdfc:
    // 0x15fdfc: 0x0  nop
    ctx->pc = 0x15fdfcu;
    // NOP
label_15fe00:
    // 0x15fe00: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x15fe00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_15fe04:
    // 0x15fe04: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15fe04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15fe08:
    // 0x15fe08: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15fe08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_15fe0c:
    // 0x15fe0c: 0x46080003  div.s       $f0, $f0, $f8
    ctx->pc = 0x15fe0cu;
    if (ctx->f[8] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[8];
label_15fe10:
    // 0x15fe10: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x15fe10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_15fe14:
    // 0x15fe14: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x15fe14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_15fe18:
    // 0x15fe18: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x15fe18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_15fe1c:
    // 0x15fe1c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x15fe1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_15fe20:
    // 0x15fe20: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x15fe20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_15fe24:
    // 0x15fe24: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x15fe24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_15fe28:
    // 0x15fe28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15fe2c:
    // 0x15fe2c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x15fe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_15fe30:
    // 0x15fe30: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x15fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_15fe34:
    // 0x15fe34: 0xc066e34  jal         func_19B8D0
label_15fe38:
    if (ctx->pc == 0x15FE38u) {
        ctx->pc = 0x15FE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE34u;
        // 0x15fe38: 0x24540020  addiu       $s4, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FE3Cu;
        goto label_15fe3c;
    }
    ctx->pc = 0x15FE34u;
    SET_GPR_U32(ctx, 31, 0x15FE3Cu);
    ctx->pc = 0x15FE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FE34u;
    // 0x15fe38: 0x24540020  addiu       $s4, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x15FE3Cu;
label_15fe3c:
    // 0x15fe3c: 0x87a80090  lh          $t0, 0x90($sp)
    ctx->pc = 0x15fe3cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 144)));
label_15fe40:
    // 0x15fe40: 0x3c048888  lui         $a0, 0x8888
    ctx->pc = 0x15fe40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34952 << 16));
label_15fe44:
    // 0x15fe44: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15fe44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_15fe48:
    // 0x15fe48: 0x34878889  ori         $a3, $a0, 0x8889
    ctx->pc = 0x15fe48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
label_15fe4c:
    // 0x15fe4c: 0x3409ffe0  ori         $t1, $zero, 0xFFE0
    ctx->pc = 0x15fe4cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_15fe50:
    // 0x15fe50: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x15fe50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_15fe54:
    // 0x15fe54: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x15fe54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_15fe58:
    // 0x15fe58: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x15fe58u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
label_15fe5c:
    // 0x15fe5c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x15fe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_15fe60:
    // 0x15fe60: 0xa6880020  sh          $t0, 0x20($s4)
    ctx->pc = 0x15fe60u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 32), (uint16_t)GPR_U32(ctx, 8));
label_15fe64:
    // 0x15fe64: 0x87a40094  lh          $a0, 0x94($sp)
    ctx->pc = 0x15fe64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 148)));
label_15fe68:
    // 0x15fe68: 0xa6840022  sh          $a0, 0x22($s4)
    ctx->pc = 0x15fe68u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 34), (uint16_t)GPR_U32(ctx, 4));
label_15fe6c:
    // 0x15fe6c: 0xae890024  sw          $t1, 0x24($s4)
    ctx->pc = 0x15fe6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 9));
label_15fe70:
    // 0x15fe70: 0x87a40098  lh          $a0, 0x98($sp)
    ctx->pc = 0x15fe70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 152)));
label_15fe74:
    // 0x15fe74: 0xa6840030  sh          $a0, 0x30($s4)
    ctx->pc = 0x15fe74u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 48), (uint16_t)GPR_U32(ctx, 4));
label_15fe78:
    // 0x15fe78: 0x87a4009c  lh          $a0, 0x9C($sp)
    ctx->pc = 0x15fe78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 156)));
label_15fe7c:
    // 0x15fe7c: 0xa6840032  sh          $a0, 0x32($s4)
    ctx->pc = 0x15fe7cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 50), (uint16_t)GPR_U32(ctx, 4));
label_15fe80:
    // 0x15fe80: 0xae890034  sw          $t1, 0x34($s4)
    ctx->pc = 0x15fe80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 9));
label_15fe84:
    // 0x15fe84: 0xa2860010  sb          $a2, 0x10($s4)
    ctx->pc = 0x15fe84u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 16), (uint8_t)GPR_U32(ctx, 6));
label_15fe88:
    // 0x15fe88: 0xa2860011  sb          $a2, 0x11($s4)
    ctx->pc = 0x15fe88u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 17), (uint8_t)GPR_U32(ctx, 6));
label_15fe8c:
    // 0x15fe8c: 0xa2850012  sb          $a1, 0x12($s4)
    ctx->pc = 0x15fe8cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 18), (uint8_t)GPR_U32(ctx, 5));
label_15fe90:
    // 0x15fe90: 0x866500ca  lh          $a1, 0xCA($s3)
    ctx->pc = 0x15fe90u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 202)));
label_15fe94:
    // 0x15fe94: 0x9024761c  lbu         $a0, 0x761C($at)
    ctx->pc = 0x15fe94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 30236)));
label_15fe98:
    // 0x15fe98: 0x541c0  sll         $t0, $a1, 7
    ctx->pc = 0x15fe98u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
label_15fe9c:
    // 0x15fe9c: 0xe80018  mult        $zero, $a3, $t0
    ctx->pc = 0x15fe9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_15fea0:
    // 0x15fea0: 0x837c2  srl         $a2, $t0, 31
    ctx->pc = 0x15fea0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_15fea4:
    // 0x15fea4: 0x0  nop
    ctx->pc = 0x15fea4u;
    // NOP
label_15fea8:
    // 0x15fea8: 0x2810  mfhi        $a1
    ctx->pc = 0x15fea8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_15feac:
    // 0x15feac: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x15feacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_15feb0:
    // 0x15feb0: 0x52943  sra         $a1, $a1, 5
    ctx->pc = 0x15feb0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
label_15feb4:
    // 0x15feb4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15feb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_15feb8:
    // 0x15feb8: 0x853018  mult        $a2, $a0, $a1
    ctx->pc = 0x15feb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_15febc:
    // 0x15febc: 0xe60018  mult        $zero, $a3, $a2
    ctx->pc = 0x15febcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_15fec0:
    // 0x15fec0: 0x62fc2  srl         $a1, $a2, 31
    ctx->pc = 0x15fec0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_15fec4:
    // 0x15fec4: 0x0  nop
    ctx->pc = 0x15fec4u;
    // NOP
label_15fec8:
    // 0x15fec8: 0x2010  mfhi        $a0
    ctx->pc = 0x15fec8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_15fecc:
    // 0x15fecc: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x15feccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_15fed0:
    // 0x15fed0: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x15fed0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_15fed4:
    // 0x15fed4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15fed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_15fed8:
    // 0x15fed8: 0xa2840013  sb          $a0, 0x13($s4)
    ctx->pc = 0x15fed8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 19), (uint8_t)GPR_U32(ctx, 4));
label_15fedc:
    // 0x15fedc: 0xae830014  sw          $v1, 0x14($s4)
    ctx->pc = 0x15fedcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 3));
label_15fee0:
    // 0x15fee0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15fee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15fee4:
    // 0x15fee4: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x15fee4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_15fee8:
    // 0x15fee8: 0x1460ff88  bnez        $v1, . + 4 + (-0x78 << 2)
label_15feec:
    if (ctx->pc == 0x15FEECu) {
        ctx->pc = 0x15FEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FEE8u;
        // 0x15feec: 0x267300d0  addiu       $s3, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FEF0u;
        goto label_15fef0;
    }
    ctx->pc = 0x15FEE8u;
    {
        const bool branch_taken_0x15fee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FEE8u;
        // 0x15feec: 0x267300d0  addiu       $s3, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fee8) {
            ctx->pc = 0x15FD0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x15fd0c; return; }
        }
    }
    ctx->pc = 0x15FEF0u;
label_15fef0:
    // 0x15fef0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15fef0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15fef4:
    // 0x15fef4: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x15fef4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
label_15fef8:
    // 0x15fef8: 0x1460ff83  bnez        $v1, . + 4 + (-0x7D << 2)
label_15fefc:
    if (ctx->pc == 0x15FEFCu) {
        ctx->pc = 0x15FF00u;
        goto label_15ff00;
    }
    ctx->pc = 0x15FEF8u;
    {
        const bool branch_taken_0x15fef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fef8) {
            ctx->pc = 0x15FD08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x15fd08; return; }
        }
    }
    ctx->pc = 0x15FF00u;
label_15ff00:
    // 0x15ff00: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x15ff00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_15ff04:
    // 0x15ff04: 0x2ac30002  slti        $v1, $s6, 0x2
    ctx->pc = 0x15ff04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
label_15ff08:
    // 0x15ff08: 0x1460ff7f  bnez        $v1, . + 4 + (-0x81 << 2)
label_15ff0c:
    if (ctx->pc == 0x15FF0Cu) {
        ctx->pc = 0x15FF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF08u;
        // 0x15ff0c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FF10u;
        goto label_15ff10;
    }
    ctx->pc = 0x15FF08u;
    {
        const bool branch_taken_0x15ff08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF08u;
        // 0x15ff0c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff08) {
            ctx->pc = 0x15FD08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x15fd08; return; }
        }
    }
    ctx->pc = 0x15FF10u;
label_15ff10:
    // 0x15ff10: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x15ff10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_15ff14:
    // 0x15ff14: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x15ff14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_15ff18:
    // 0x15ff18: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x15ff18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_15ff1c:
    // 0x15ff1c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x15ff1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_15ff20:
    // 0x15ff20: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x15ff20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15ff24:
    // 0x15ff24: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x15ff24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15ff28:
    // 0x15ff28: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x15ff28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15ff2c:
    // 0x15ff2c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15ff2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15ff30:
    // 0x15ff30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15ff30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15ff34:
    // 0x15ff34: 0x3e00008  jr          $ra
label_15ff38:
    if (ctx->pc == 0x15FF38u) {
        ctx->pc = 0x15FF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF34u;
        // 0x15ff38: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FF3Cu;
        goto label_15ff3c;
    }
    ctx->pc = 0x15FF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF34u;
        // 0x15ff38: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15FF3Cu;
label_15ff3c:
    // 0x15ff3c: 0x0  nop
    ctx->pc = 0x15ff3cu;
    // NOP
label_15ff40:
    // 0x15ff40: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x15ff40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_15ff44:
    // 0x15ff44: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15ff44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_15ff48:
    // 0x15ff48: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x15ff48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_15ff4c:
    // 0x15ff4c: 0x34217610  ori         $at, $at, 0x7610
    ctx->pc = 0x15ff4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30224);
label_15ff50:
    // 0x15ff50: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x15ff50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_15ff54:
    // 0x15ff54: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x15ff54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_15ff58:
    // 0x15ff58: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x15ff58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_15ff5c:
    // 0x15ff5c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x15ff5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_15ff60:
    // 0x15ff60: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x15ff60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_15ff64:
    // 0x15ff64: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15ff64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15ff68:
    // 0x15ff68: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x15ff68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_15ff6c:
    // 0x15ff6c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x15ff6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_15ff70:
    // 0x15ff70: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15ff70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_15ff74:
    // 0x15ff74: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15ff74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_15ff78:
    // 0x15ff78: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15ff78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_15ff7c:
    // 0x15ff7c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x15ff7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_15ff80:
    // 0x15ff80: 0x2a18021  addu        $s0, $s5, $at
    ctx->pc = 0x15ff80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
label_15ff84:
    // 0x15ff84: 0xc066e44  jal         func_19B910
label_15ff88:
    if (ctx->pc == 0x15FF88u) {
        ctx->pc = 0x15FF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF84u;
        // 0x15ff88: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FF8Cu;
        goto label_15ff8c;
    }
    ctx->pc = 0x15FF84u;
    SET_GPR_U32(ctx, 31, 0x15FF8Cu);
    ctx->pc = 0x15FF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FF84u;
    // 0x15ff88: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x15FF8Cu;
label_15ff8c:
    // 0x15ff8c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x15ff8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_15ff90:
    // 0x15ff90: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x15ff90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_15ff94:
    // 0x15ff94: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x15ff94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
label_15ff98:
    // 0x15ff98: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x15ff98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_15ff9c:
    // 0x15ff9c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x15ff9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_15ffa0:
    // 0x15ffa0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x15ffa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_15ffa4:
    // 0x15ffa4: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x15ffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_15ffa8:
    // 0x15ffa8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x15ffa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_15ffac:
    // 0x15ffac: 0x27a200ec  addiu       $v0, $sp, 0xEC
    ctx->pc = 0x15ffacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
label_15ffb0:
    // 0x15ffb0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x15ffb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_15ffb4:
    // 0x15ffb4: 0xc064f38  jal         func_193CE0
label_15ffb8:
    if (ctx->pc == 0x15FFB8u) {
        ctx->pc = 0x15FFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FFB4u;
        // 0x15ffb8: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FFBCu;
        goto label_15ffbc;
    }
    ctx->pc = 0x15FFB4u;
    SET_GPR_U32(ctx, 31, 0x15FFBCu);
    ctx->pc = 0x15FFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FFB4u;
    // 0x15ffb8: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193CE0u;
    { ctx->pc = 0x193ce0; return; }
    ctx->pc = 0x15FFBCu;
label_15ffbc:
    // 0x15ffbc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x15ffbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_15ffc0:
    // 0x15ffc0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15ffc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_15ffc4:
    // 0x15ffc4: 0xc066e6c  jal         func_19B9B0
label_15ffc8:
    if (ctx->pc == 0x15FFC8u) {
        ctx->pc = 0x15FFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FFC4u;
        // 0x15ffc8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FFCCu;
        goto label_15ffcc;
    }
    ctx->pc = 0x15FFC4u;
    SET_GPR_U32(ctx, 31, 0x15FFCCu);
    ctx->pc = 0x15FFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FFC4u;
    // 0x15ffc8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x15FFCCu;
label_15ffcc:
    // 0x15ffcc: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x15ffccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_15ffd0:
    // 0x15ffd0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x15ffd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_15ffd4:
    // 0x15ffd4: 0xafa600e0  sw          $a2, 0xE0($sp)
    ctx->pc = 0x15ffd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 6));
label_15ffd8:
    // 0x15ffd8: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x15ffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_15ffdc:
    // 0x15ffdc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x15ffdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_15ffe0:
    // 0x15ffe0: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x15ffe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_15ffe4:
    // 0x15ffe4: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x15ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_15ffe8:
    // 0x15ffe8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x15ffe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_15ffec:
    // 0x15ffec: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x15ffecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_15fff0:
    // 0x15fff0: 0x27a200ec  addiu       $v0, $sp, 0xEC
    ctx->pc = 0x15fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
label_15fff4:
    // 0x15fff4: 0xc064f38  jal         func_193CE0
label_15fff8:
    if (ctx->pc == 0x15FFF8u) {
        ctx->pc = 0x15FFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FFF4u;
        // 0x15fff8: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FFFCu;
        goto label_15fffc;
    }
    ctx->pc = 0x15FFF4u;
    SET_GPR_U32(ctx, 31, 0x15FFFCu);
    ctx->pc = 0x15FFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FFF4u;
    // 0x15fff8: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193CE0u;
    { ctx->pc = 0x193ce0; return; }
    ctx->pc = 0x15FFFCu;
label_15fffc:
    // 0x15fffc: 0x9208000f  lbu         $t0, 0xF($s0)
    ctx->pc = 0x15fffcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
label_160000:
    // 0x160000: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x160000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_160004:
    // 0x160004: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x160004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_160008:
    // 0x160008: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x160008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_16000c:
    // 0x16000c: 0x246356a4  addiu       $v1, $v1, 0x56A4
    ctx->pc = 0x16000cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22180));
label_160010:
    // 0x160010: 0x244256a8  addiu       $v0, $v0, 0x56A8
    ctx->pc = 0x160010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22184));
label_160014:
    // 0x160014: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x160014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_160018:
    // 0x160018: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x160018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_16001c:
    // 0x16001c: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x16001cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_160020:
    // 0x160020: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x160020u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_160024:
    // 0x160024: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x160024u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_160028:
    // 0x160028: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x160028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_16002c:
    // 0x16002c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x16002cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_160030:
    // 0x160030: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x160030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_160034:
    // 0x160034: 0x9207000f  lbu         $a3, 0xF($s0)
    ctx->pc = 0x160034u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
label_160038:
    // 0x160038: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x160038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_16003c:
    // 0x16003c: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x16003cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_160040:
    // 0x160040: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x160040u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_160044:
    // 0x160044: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x160044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_160048:
    // 0x160048: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x160048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16004c:
    // 0x16004c: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x16004cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_160050:
    // 0x160050: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x160050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_160054:
    // 0x160054: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x160054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_160058:
    // 0x160058: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x160058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_16005c:
    // 0x16005c: 0x27a200ec  addiu       $v0, $sp, 0xEC
    ctx->pc = 0x16005cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
label_160060:
    // 0x160060: 0xc066e1a  jal         func_19B868
label_160064:
    if (ctx->pc == 0x160064u) {
        ctx->pc = 0x160064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160060u;
        // 0x160064: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160068u;
        goto label_160068;
    }
    ctx->pc = 0x160060u;
    SET_GPR_U32(ctx, 31, 0x160068u);
    ctx->pc = 0x160064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160060u;
    // 0x160064: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    { ctx->pc = 0x19b868; return; }
    ctx->pc = 0x160068u;
label_160068:
    // 0x160068: 0x26b24710  addiu       $s2, $s5, 0x4710
    ctx->pc = 0x160068u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 18192));
label_16006c:
    // 0x16006c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16006cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160070:
    // 0x160070: 0x0  nop
    ctx->pc = 0x160070u;
    // NOP
label_160074:
    // 0x160074: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x160074u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
label_160078:
    // 0x160078: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_16007c:
    if (ctx->pc == 0x16007Cu) {
        ctx->pc = 0x16007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160078u;
        // 0x16007c: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160080u;
        goto label_160080;
    }
    ctx->pc = 0x160078u;
    {
        const bool branch_taken_0x160078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160078u;
        // 0x16007c: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160078) {
            ctx->pc = 0x1600DCu;
            goto label_1600dc;
        }
    }
    ctx->pc = 0x160080u;
label_160080:
    // 0x160080: 0x8ea24d10  lw          $v0, 0x4D10($s5)
    ctx->pc = 0x160080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 19728)));
label_160084:
    // 0x160084: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x160084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_160088:
    // 0x160088: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x160088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16008c:
    // 0x16008c: 0x9209000f  lbu         $t1, 0xF($s0)
    ctx->pc = 0x16008cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
label_160090:
    // 0x160090: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x160090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_160094:
    // 0x160094: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x160094u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_160098:
    // 0x160098: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x160098u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16009c:
    // 0x16009c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x16009cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1600a0:
    // 0x1600a0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1600a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1600a4:
    // 0x1600a4: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x1600a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_1600a8:
    // 0x1600a8: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x1600a8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
label_1600ac:
    // 0x1600ac: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1600acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1600b0:
    // 0x1600b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1600b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1600b4:
    // 0x1600b4: 0x9028761c  lbu         $t0, 0x761C($at)
    ctx->pc = 0x1600b4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 30236)));
label_1600b8:
    // 0x1600b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1600b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1600bc:
    // 0x1600bc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1600bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1600c0:
    // 0x1600c0: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1600c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_1600c4:
    // 0x1600c4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1600c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1600c8:
    // 0x1600c8: 0xc058214  jal         func_160850
label_1600cc:
    if (ctx->pc == 0x1600CCu) {
        ctx->pc = 0x1600CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600C8u;
        // 0x1600cc: 0x24444d40  addiu       $a0, $v0, 0x4D40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 19776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1600D0u;
        goto label_1600d0;
    }
    ctx->pc = 0x1600C8u;
    SET_GPR_U32(ctx, 31, 0x1600D0u);
    ctx->pc = 0x1600CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1600C8u;
    // 0x1600cc: 0x24444d40  addiu       $a0, $v0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160850u;
    { ctx->pc = 0x160850; return; }
    ctx->pc = 0x1600D0u;
label_1600d0:
    // 0x1600d0: 0x8ea24d10  lw          $v0, 0x4D10($s5)
    ctx->pc = 0x1600d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 19728)));
label_1600d4:
    // 0x1600d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1600d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1600d8:
    // 0x1600d8: 0xaea24d10  sw          $v0, 0x4D10($s5)
    ctx->pc = 0x1600d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 19728), GPR_U32(ctx, 2));
label_1600dc:
    // 0x1600dc: 0x0  nop
    ctx->pc = 0x1600dcu;
    // NOP
label_1600e0:
    // 0x1600e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1600e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1600e4:
    // 0x1600e4: 0x2a220080  slti        $v0, $s1, 0x80
    ctx->pc = 0x1600e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
label_1600e8:
    // 0x1600e8: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_1600ec:
    if (ctx->pc == 0x1600ECu) {
        ctx->pc = 0x1600ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600E8u;
        // 0x1600ec: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1600F0u;
        goto label_1600f0;
    }
    ctx->pc = 0x1600E8u;
    {
        const bool branch_taken_0x1600e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1600ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600E8u;
        // 0x1600ec: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1600e8) {
            ctx->pc = 0x160070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160070;
        }
    }
    ctx->pc = 0x1600F0u;
label_1600f0:
    // 0x1600f0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1600f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1600f4:
    // 0x1600f4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1600f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1600f8:
    // 0x1600f8: 0x34424c70  ori         $v0, $v0, 0x4C70
    ctx->pc = 0x1600f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19568);
label_1600fc:
    // 0x1600fc: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x1600fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_160100:
    // 0x160100: 0x2a28821  addu        $s1, $s5, $v0
    ctx->pc = 0x160100u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_160104:
    // 0x160104: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x160104u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160108:
    // 0x160108: 0x0  nop
    ctx->pc = 0x160108u;
    // NOP
label_16010c:
    // 0x16010c: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x16010cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
label_160110:
    // 0x160110: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
label_160114:
    if (ctx->pc == 0x160114u) {
        ctx->pc = 0x160114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160110u;
        // 0x160114: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160118u;
        goto label_160118;
    }
    ctx->pc = 0x160110u;
    {
        const bool branch_taken_0x160110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160110u;
        // 0x160114: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160110) {
            ctx->pc = 0x160358u;
            goto label_160358;
        }
    }
    ctx->pc = 0x160118u;
label_160118:
    // 0x160118: 0xc066e44  jal         func_19B910
label_16011c:
    if (ctx->pc == 0x16011Cu) {
        ctx->pc = 0x160120u;
        goto label_160120;
    }
    ctx->pc = 0x160118u;
    SET_GPR_U32(ctx, 31, 0x160120u);
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x160120u;
label_160120:
    // 0x160120: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x160120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_160124:
    // 0x160124: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x160124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_160128:
    // 0x160128: 0xc44c0044  lwc1        $f12, 0x44($v0)
    ctx->pc = 0x160128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16012c:
    // 0x16012c: 0xc066e6c  jal         func_19B9B0
label_160130:
    if (ctx->pc == 0x160130u) {
        ctx->pc = 0x160130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16012Cu;
        // 0x160130: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160134u;
        goto label_160134;
    }
    ctx->pc = 0x16012Cu;
    SET_GPR_U32(ctx, 31, 0x160134u);
    ctx->pc = 0x160130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16012Cu;
    // 0x160130: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x160134u;
label_160134:
    // 0x160134: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x160134u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_160138:
    // 0x160138: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x160138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_16013c:
    // 0x16013c: 0xafa600e0  sw          $a2, 0xE0($sp)
    ctx->pc = 0x16013cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 6));
label_160140:
    // 0x160140: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x160140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_160144:
    // 0x160144: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x160144u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_160148:
    // 0x160148: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x160148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_16014c:
    // 0x16014c: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x16014cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_160150:
    // 0x160150: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x160150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_160154:
    // 0x160154: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x160154u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_160158:
    // 0x160158: 0x27a200ec  addiu       $v0, $sp, 0xEC
    ctx->pc = 0x160158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
label_16015c:
    // 0x16015c: 0xc064f38  jal         func_193CE0
label_160160:
    if (ctx->pc == 0x160160u) {
        ctx->pc = 0x160160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16015Cu;
        // 0x160160: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160164u;
        goto label_160164;
    }
    ctx->pc = 0x16015Cu;
    SET_GPR_U32(ctx, 31, 0x160164u);
    ctx->pc = 0x160160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16015Cu;
    // 0x160160: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193CE0u;
    { ctx->pc = 0x193ce0; return; }
    ctx->pc = 0x160164u;
label_160164:
    // 0x160164: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x160164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_160168:
    // 0x160168: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x160168u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
label_16016c:
    // 0x16016c: 0x9208000f  lbu         $t0, 0xF($s0)
    ctx->pc = 0x16016cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
label_160170:
    // 0x160170: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x160170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_160174:
    // 0x160174: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x160174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_160178:
    // 0x160178: 0x24e75670  addiu       $a3, $a3, 0x5670
    ctx->pc = 0x160178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22128));
label_16017c:
    // 0x16017c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x16017cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_160180:
    // 0x160180: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x160180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_160184:
    // 0x160184: 0xc4420150  lwc1        $f2, 0x150($v0)
    ctx->pc = 0x160184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_160188:
    // 0x160188: 0x81900  sll         $v1, $t0, 4
    ctx->pc = 0x160188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_16018c:
    // 0x16018c: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x16018cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_160190:
    // 0x160190: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x160190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_160194:
    // 0x160194: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x160194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_160198:
    // 0x160198: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x160198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16019c:
    // 0x16019c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x16019cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1601a0:
    // 0x1601a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1601a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1601a4:
    // 0x1601a4: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1601a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1601a8:
    // 0x1601a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1601a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1601ac:
    // 0x1601ac: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x1601acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1601b0:
    // 0x1601b0: 0x9203000f  lbu         $v1, 0xF($s0)
    ctx->pc = 0x1601b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
label_1601b4:
    // 0x1601b4: 0xc4410158  lwc1        $f1, 0x158($v0)
    ctx->pc = 0x1601b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1601b8:
    // 0x1601b8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1601b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1601bc:
    // 0x1601bc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1601bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1601c0:
    // 0x1601c0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1601c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1601c4:
    // 0x1601c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1601c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1601c8:
    // 0x1601c8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1601c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_1601cc:
    // 0x1601cc: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1601ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1601d0:
    // 0x1601d0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1601d0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1601d4:
    // 0x1601d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1601d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1601d8:
    // 0x1601d8: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x1601d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_1601dc:
    // 0x1601dc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1601dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1601e0:
    // 0x1601e0: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x1601e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_1601e4:
    // 0x1601e4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1601e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1601e8:
    // 0x1601e8: 0x27a200ec  addiu       $v0, $sp, 0xEC
    ctx->pc = 0x1601e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
label_1601ec:
    // 0x1601ec: 0xc066e1a  jal         func_19B868
label_1601f0:
    if (ctx->pc == 0x1601F0u) {
        ctx->pc = 0x1601F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1601ECu;
        // 0x1601f0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1601F4u;
        goto label_1601f4;
    }
    ctx->pc = 0x1601ECu;
    SET_GPR_U32(ctx, 31, 0x1601F4u);
    ctx->pc = 0x1601F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1601ECu;
    // 0x1601f0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    { ctx->pc = 0x19b868; return; }
    ctx->pc = 0x1601F4u;
label_1601f4:
    // 0x1601f4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1601f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1601f8:
    // 0x1601f8: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x1601f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1601fc:
    // 0x1601fc: 0xc066d86  jal         func_19B618
label_160200:
    if (ctx->pc == 0x160200u) {
        ctx->pc = 0x160200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1601FCu;
        // 0x160200: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160204u;
        goto label_160204;
    }
    ctx->pc = 0x1601FCu;
    SET_GPR_U32(ctx, 31, 0x160204u);
    ctx->pc = 0x160200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1601FCu;
    // 0x160200: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    { ctx->pc = 0x19b618; return; }
    ctx->pc = 0x160204u;
label_160204:
    // 0x160204: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x160204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_160208:
    // 0x160208: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x160208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_16020c:
    // 0x16020c: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x16020cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_160210:
    // 0x160210: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x160210u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160214:
    // 0x160214: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x160214u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160218:
    // 0x160218: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x160218u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16021c:
    // 0x16021c: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x16021cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_160220:
    // 0x160220: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x160220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_160224:
    // 0x160224: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x160224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_160228:
    // 0x160228: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x160228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16022c:
    // 0x16022c: 0x34214c90  ori         $at, $at, 0x4C90
    ctx->pc = 0x16022cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19600);
label_160230:
    // 0x160230: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x160230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_160234:
    // 0x160234: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x160234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_160238:
    // 0x160238: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x160238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_16023c:
    // 0x16023c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x16023cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_160240:
    // 0x160240: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x160240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_160244:
    // 0x160244: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x160244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_160248:
    // 0x160248: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x160248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_16024c:
    // 0x16024c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x16024cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_160250:
    // 0x160250: 0x24510020  addiu       $s1, $v0, 0x20
    ctx->pc = 0x160250u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_160254:
    // 0x160254: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x160254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_160258:
    // 0x160258: 0x24425730  addiu       $v0, $v0, 0x5730
    ctx->pc = 0x160258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22320));
label_16025c:
    // 0x16025c: 0x529821  addu        $s3, $v0, $s2
    ctx->pc = 0x16025cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_160260:
    // 0x160260: 0xc066d7a  jal         func_19B5E8
label_160264:
    if (ctx->pc == 0x160264u) {
        ctx->pc = 0x160264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160260u;
        // 0x160264: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160268u;
        goto label_160268;
    }
    ctx->pc = 0x160260u;
    SET_GPR_U32(ctx, 31, 0x160268u);
    ctx->pc = 0x160264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160260u;
    // 0x160264: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x160268u;
label_160268:
    // 0x160268: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x160268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_16026c:
    // 0x16026c: 0xc066e34  jal         func_19B8D0
label_160270:
    if (ctx->pc == 0x160270u) {
        ctx->pc = 0x160270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16026Cu;
        // 0x160270: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160274u;
        goto label_160274;
    }
    ctx->pc = 0x16026Cu;
    SET_GPR_U32(ctx, 31, 0x160274u);
    ctx->pc = 0x160270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16026Cu;
    // 0x160270: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x160274u;
label_160274:
    // 0x160274: 0x87a200d0  lh          $v0, 0xD0($sp)
    ctx->pc = 0x160274u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 208)));
label_160278:
    // 0x160278: 0x3403ffe0  ori         $v1, $zero, 0xFFE0
    ctx->pc = 0x160278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_16027c:
    // 0x16027c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x16027cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_160280:
    // 0x160280: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x160280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_160284:
    // 0x160284: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x160284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_160288:
    // 0x160288: 0xa6220010  sh          $v0, 0x10($s1)
    ctx->pc = 0x160288u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
label_16028c:
    // 0x16028c: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x16028cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_160290:
    // 0x160290: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x160290u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_160294:
    // 0x160294: 0xa6220012  sh          $v0, 0x12($s1)
    ctx->pc = 0x160294u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
label_160298:
    // 0x160298: 0xc066d7a  jal         func_19B5E8
label_16029c:
    if (ctx->pc == 0x16029Cu) {
        ctx->pc = 0x16029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160298u;
        // 0x16029c: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1602A0u;
        goto label_1602a0;
    }
    ctx->pc = 0x160298u;
    SET_GPR_U32(ctx, 31, 0x1602A0u);
    ctx->pc = 0x16029Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160298u;
    // 0x16029c: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x1602A0u;
label_1602a0:
    // 0x1602a0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1602a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1602a4:
    // 0x1602a4: 0xc066e34  jal         func_19B8D0
label_1602a8:
    if (ctx->pc == 0x1602A8u) {
        ctx->pc = 0x1602A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602A4u;
        // 0x1602a8: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1602ACu;
        goto label_1602ac;
    }
    ctx->pc = 0x1602A4u;
    SET_GPR_U32(ctx, 31, 0x1602ACu);
    ctx->pc = 0x1602A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1602A4u;
    // 0x1602a8: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x1602ACu;
label_1602ac:
    // 0x1602ac: 0x87a200d0  lh          $v0, 0xD0($sp)
    ctx->pc = 0x1602acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 208)));
label_1602b0:
    // 0x1602b0: 0x3403ffe0  ori         $v1, $zero, 0xFFE0
    ctx->pc = 0x1602b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_1602b4:
    // 0x1602b4: 0x26660020  addiu       $a2, $s3, 0x20
    ctx->pc = 0x1602b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_1602b8:
    // 0x1602b8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1602b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1602bc:
    // 0x1602bc: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1602bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1602c0:
    // 0x1602c0: 0xa6220020  sh          $v0, 0x20($s1)
    ctx->pc = 0x1602c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 2));
label_1602c4:
    // 0x1602c4: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x1602c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_1602c8:
    // 0x1602c8: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1602c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1602cc:
    // 0x1602cc: 0xa6220022  sh          $v0, 0x22($s1)
    ctx->pc = 0x1602ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 2));
label_1602d0:
    // 0x1602d0: 0xc066d7a  jal         func_19B5E8
label_1602d4:
    if (ctx->pc == 0x1602D4u) {
        ctx->pc = 0x1602D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602D0u;
        // 0x1602d4: 0xae230024  sw          $v1, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1602D8u;
        goto label_1602d8;
    }
    ctx->pc = 0x1602D0u;
    SET_GPR_U32(ctx, 31, 0x1602D8u);
    ctx->pc = 0x1602D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1602D0u;
    // 0x1602d4: 0xae230024  sw          $v1, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x1602D8u;
label_1602d8:
    // 0x1602d8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1602d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1602dc:
    // 0x1602dc: 0xc066e34  jal         func_19B8D0
label_1602e0:
    if (ctx->pc == 0x1602E0u) {
        ctx->pc = 0x1602E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602DCu;
        // 0x1602e0: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1602E4u;
        goto label_1602e4;
    }
    ctx->pc = 0x1602DCu;
    SET_GPR_U32(ctx, 31, 0x1602E4u);
    ctx->pc = 0x1602E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1602DCu;
    // 0x1602e0: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x1602E4u;
label_1602e4:
    // 0x1602e4: 0x87a600d0  lh          $a2, 0xD0($sp)
    ctx->pc = 0x1602e4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 208)));
label_1602e8:
    // 0x1602e8: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x1602e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_1602ec:
    // 0x1602ec: 0x34448889  ori         $a0, $v0, 0x8889
    ctx->pc = 0x1602ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_1602f0:
    // 0x1602f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1602f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1602f4:
    // 0x1602f4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1602f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1602f8:
    // 0x1602f8: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x1602f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_1602fc:
    // 0x1602fc: 0x3405ffe0  ori         $a1, $zero, 0xFFE0
    ctx->pc = 0x1602fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_160300:
    // 0x160300: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x160300u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
label_160304:
    // 0x160304: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x160304u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_160308:
    // 0x160308: 0x26d60040  addiu       $s6, $s6, 0x40
    ctx->pc = 0x160308u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
label_16030c:
    // 0x16030c: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x16030cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_160310:
    // 0x160310: 0xa6260030  sh          $a2, 0x30($s1)
    ctx->pc = 0x160310u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 6));
label_160314:
    // 0x160314: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x160314u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_160318:
    // 0x160318: 0xa6220032  sh          $v0, 0x32($s1)
    ctx->pc = 0x160318u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 2));
label_16031c:
    // 0x16031c: 0xae250034  sw          $a1, 0x34($s1)
    ctx->pc = 0x16031cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 5));
label_160320:
    // 0x160320: 0x9022761c  lbu         $v0, 0x761C($at)
    ctx->pc = 0x160320u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 30236)));
label_160324:
    // 0x160324: 0x229c0  sll         $a1, $v0, 7
    ctx->pc = 0x160324u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_160328:
    // 0x160328: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x160328u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_16032c:
    // 0x16032c: 0x0  nop
    ctx->pc = 0x16032cu;
    // NOP
label_160330:
    // 0x160330: 0x0  nop
    ctx->pc = 0x160330u;
    // NOP
label_160334:
    // 0x160334: 0x1010  mfhi        $v0
    ctx->pc = 0x160334u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_160338:
    // 0x160338: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x160338u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_16033c:
    // 0x16033c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x16033cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_160340:
    // 0x160340: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x160340u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_160344:
    // 0x160344: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x160344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_160348:
    // 0x160348: 0xa222002b  sb          $v0, 0x2B($s1)
    ctx->pc = 0x160348u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 43), (uint8_t)GPR_U32(ctx, 2));
label_16034c:
    // 0x16034c: 0xa222001b  sb          $v0, 0x1B($s1)
    ctx->pc = 0x16034cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 27), (uint8_t)GPR_U32(ctx, 2));
label_160350:
    // 0x160350: 0x1460ffbb  bnez        $v1, . + 4 + (-0x45 << 2)
label_160354:
    if (ctx->pc == 0x160354u) {
        ctx->pc = 0x160354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160350u;
        // 0x160354: 0xa222000b  sb          $v0, 0xB($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160358u;
        goto label_160358;
    }
    ctx->pc = 0x160350u;
    {
        const bool branch_taken_0x160350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160350u;
        // 0x160354: 0xa222000b  sb          $v0, 0xB($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160350) {
            ctx->pc = 0x160240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160240;
        }
    }
    ctx->pc = 0x160358u;
label_160358:
    // 0x160358: 0x2be1021  addu        $v0, $s5, $fp
    ctx->pc = 0x160358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 30)));
label_16035c:
    // 0x16035c: 0x24514650  addiu       $s1, $v0, 0x4650
    ctx->pc = 0x16035cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 18000));
label_160360:
    // 0x160360: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x160360u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160364:
    // 0x160364: 0x0  nop
    ctx->pc = 0x160364u;
    // NOP
label_160368:
    // 0x160368: 0x0  nop
    ctx->pc = 0x160368u;
    // NOP
label_16036c:
    // 0x16036c: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x16036cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
label_160370:
    // 0x160370: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_160374:
    if (ctx->pc == 0x160374u) {
        ctx->pc = 0x160378u;
        goto label_160378;
    }
    ctx->pc = 0x160370u;
    {
        const bool branch_taken_0x160370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160370) {
            ctx->pc = 0x16043Cu;
            goto label_16043c;
        }
    }
    ctx->pc = 0x160378u;
label_160378:
    // 0x160378: 0x16e00017  bnez        $s7, . + 4 + (0x17 << 2)
label_16037c:
    if (ctx->pc == 0x16037Cu) {
        ctx->pc = 0x16037Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160378u;
        // 0x16037c: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160380u;
        goto label_160380;
    }
    ctx->pc = 0x160378u;
    {
        const bool branch_taken_0x160378 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x16037Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160378u;
        // 0x16037c: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160378) {
            ctx->pc = 0x1603D8u;
            goto label_1603d8;
        }
    }
    ctx->pc = 0x160380u;
label_160380:
    // 0x160380: 0x8ea24d10  lw          $v0, 0x4D10($s5)
    ctx->pc = 0x160380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 19728)));
label_160384:
    // 0x160384: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x160384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_160388:
    // 0x160388: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x160388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16038c:
    // 0x16038c: 0x9209000f  lbu         $t1, 0xF($s0)
    ctx->pc = 0x16038cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
label_160390:
    // 0x160390: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x160390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_160394:
    // 0x160394: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x160394u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_160398:
    // 0x160398: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x160398u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16039c:
    // 0x16039c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x16039cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1603a0:
    // 0x1603a0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1603a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1603a4:
    // 0x1603a4: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x1603a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_1603a8:
    // 0x1603a8: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x1603a8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
label_1603ac:
    // 0x1603ac: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1603acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1603b0:
    // 0x1603b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1603b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1603b4:
    // 0x1603b4: 0x9028761c  lbu         $t0, 0x761C($at)
    ctx->pc = 0x1603b4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 30236)));
label_1603b8:
    // 0x1603b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1603b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1603bc:
    // 0x1603bc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1603bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1603c0:
    // 0x1603c0: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1603c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_1603c4:
    // 0x1603c4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1603c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1603c8:
    // 0x1603c8: 0xc058214  jal         func_160850
label_1603cc:
    if (ctx->pc == 0x1603CCu) {
        ctx->pc = 0x1603CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603C8u;
        // 0x1603cc: 0x24444d40  addiu       $a0, $v0, 0x4D40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 19776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1603D0u;
        goto label_1603d0;
    }
    ctx->pc = 0x1603C8u;
    SET_GPR_U32(ctx, 31, 0x1603D0u);
    ctx->pc = 0x1603CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1603C8u;
    // 0x1603cc: 0x24444d40  addiu       $a0, $v0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160850u;
    { ctx->pc = 0x160850; return; }
    ctx->pc = 0x1603D0u;
label_1603d0:
    // 0x1603d0: 0x10000016  b           . + 4 + (0x16 << 2)
label_1603d4:
    if (ctx->pc == 0x1603D4u) {
        ctx->pc = 0x1603D8u;
        goto label_1603d8;
    }
    ctx->pc = 0x1603D0u;
    {
        const bool branch_taken_0x1603d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1603d0) {
            ctx->pc = 0x16042Cu;
            goto label_16042c;
        }
    }
    ctx->pc = 0x1603D8u;
label_1603d8:
    // 0x1603d8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1603d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1603dc:
    // 0x1603dc: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x1603dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1603e0:
    // 0x1603e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1603e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1603e4:
    // 0x1603e4: 0x8ea24d10  lw          $v0, 0x4D10($s5)
    ctx->pc = 0x1603e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 19728)));
label_1603e8:
    // 0x1603e8: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x1603e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1603ec:
    // 0x1603ec: 0x9209000f  lbu         $t1, 0xF($s0)
    ctx->pc = 0x1603ecu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
label_1603f0:
    // 0x1603f0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1603f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1603f4:
    // 0x1603f4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1603f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1603f8:
    // 0x1603f8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1603f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1603fc:
    // 0x1603fc: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x1603fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_160400:
    // 0x160400: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x160400u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
label_160404:
    // 0x160404: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x160404u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_160408:
    // 0x160408: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x160408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_16040c:
    // 0x16040c: 0x9028761c  lbu         $t0, 0x761C($at)
    ctx->pc = 0x16040cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 30236)));
label_160410:
    // 0x160410: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x160410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_160414:
    // 0x160414: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x160414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_160418:
    // 0x160418: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x160418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_16041c:
    // 0x16041c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x16041cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_160420:
    // 0x160420: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x160420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_160424:
    // 0x160424: 0xc058214  jal         func_160850
label_160428:
    if (ctx->pc == 0x160428u) {
        ctx->pc = 0x160428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160424u;
        // 0x160428: 0x24444d40  addiu       $a0, $v0, 0x4D40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 19776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16042Cu;
        goto label_16042c;
    }
    ctx->pc = 0x160424u;
    SET_GPR_U32(ctx, 31, 0x16042Cu);
    ctx->pc = 0x160428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160424u;
    // 0x160428: 0x24444d40  addiu       $a0, $v0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160850u;
    { ctx->pc = 0x160850; return; }
    ctx->pc = 0x16042Cu;
label_16042c:
    // 0x16042c: 0x0  nop
    ctx->pc = 0x16042cu;
    // NOP
label_160430:
    // 0x160430: 0x8ea24d10  lw          $v0, 0x4D10($s5)
    ctx->pc = 0x160430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 19728)));
label_160434:
    // 0x160434: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x160434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_160438:
    // 0x160438: 0xaea24d10  sw          $v0, 0x4D10($s5)
    ctx->pc = 0x160438u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 19728), GPR_U32(ctx, 2));
label_16043c:
    // 0x16043c: 0x0  nop
    ctx->pc = 0x16043cu;
    // NOP
label_160440:
    // 0x160440: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x160440u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_160444:
    // 0x160444: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x160444u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
label_160448:
    // 0x160448: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
label_16044c:
    if (ctx->pc == 0x16044Cu) {
        ctx->pc = 0x16044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160448u;
        // 0x16044c: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160450u;
        goto label_160450;
    }
    ctx->pc = 0x160448u;
    {
        const bool branch_taken_0x160448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160448u;
        // 0x16044c: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160448) {
            ctx->pc = 0x160364u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160364;
        }
    }
    ctx->pc = 0x160450u;
label_160450:
    // 0x160450: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x160450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_160454:
    // 0x160454: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x160454u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_160458:
    // 0x160458: 0x27de0060  addiu       $fp, $fp, 0x60
    ctx->pc = 0x160458u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 96));
label_16045c:
    // 0x16045c: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x16045cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
label_160460:
    // 0x160460: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x160460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_160464:
    // 0x160464: 0x2ae20002  slti        $v0, $s7, 0x2
    ctx->pc = 0x160464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
label_160468:
    // 0x160468: 0x1440ff27  bnez        $v0, . + 4 + (-0xD9 << 2)
label_16046c:
    if (ctx->pc == 0x16046Cu) {
        ctx->pc = 0x16046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160468u;
        // 0x16046c: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160470u;
        goto label_160470;
    }
    ctx->pc = 0x160468u;
    {
        const bool branch_taken_0x160468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160468u;
        // 0x16046c: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160468) {
            ctx->pc = 0x160108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160108;
        }
    }
    ctx->pc = 0x160470u;
label_160470:
    // 0x160470: 0x8ea24d10  lw          $v0, 0x4D10($s5)
    ctx->pc = 0x160470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 19728)));
label_160474:
    // 0x160474: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x160474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_160478:
    // 0x160478: 0x34633ffc  ori         $v1, $v1, 0x3FFC
    ctx->pc = 0x160478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16380);
label_16047c:
    // 0x16047c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16047cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_160480:
    // 0x160480: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x160480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_160484:
    // 0x160484: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x160484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_160488:
    // 0x160488: 0x22902  srl         $a1, $v0, 4
    ctx->pc = 0x160488u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_16048c:
    // 0x16048c: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x16048cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_160490:
    // 0x160490: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x160490u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_160494:
    // 0x160494: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x160494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_160498:
    // 0x160498: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x160498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16049c:
    // 0x16049c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x16049cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1604a0:
    // 0x1604a0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1604a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1604a4:
    // 0x1604a4: 0x24514d20  addiu       $s1, $v0, 0x4D20
    ctx->pc = 0x1604a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 19744));
label_1604a8:
    // 0x1604a8: 0xc05e234  jal         func_1788D0
label_1604ac:
    if (ctx->pc == 0x1604ACu) {
        ctx->pc = 0x1604ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604A8u;
        // 0x1604ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1604B0u;
        goto label_1604b0;
    }
    ctx->pc = 0x1604A8u;
    SET_GPR_U32(ctx, 31, 0x1604B0u);
    ctx->pc = 0x1604ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1604A8u;
    // 0x1604ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    { ctx->pc = 0x1788d0; return; }
    ctx->pc = 0x1604B0u;
label_1604b0:
    // 0x1604b0: 0x8ea54d10  lw          $a1, 0x4D10($s5)
    ctx->pc = 0x1604b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 19728)));
label_1604b4:
    // 0x1604b4: 0x3c038400  lui         $v1, 0x8400
    ctx->pc = 0x1604b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33792 << 16));
label_1604b8:
    // 0x1604b8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1604b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_1604bc:
    // 0x1604bc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1604bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1604c0:
    // 0x1604c0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1604c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1604c4:
    // 0x1604c4: 0x34214c70  ori         $at, $at, 0x4C70
    ctx->pc = 0x1604c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19568);
label_1604c8:
    // 0x1604c8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1604c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1604cc:
    // 0x1604cc: 0x2a13021  addu        $a2, $s5, $at
    ctx->pc = 0x1604ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
label_1604d0:
    // 0x1604d0: 0x3403f535  ori         $v1, $zero, 0xF535
    ctx->pc = 0x1604d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62773);
label_1604d4:
    // 0x1604d4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1604d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1604d8:
    // 0x1604d8: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1604d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_1604dc:
    // 0x1604dc: 0x34633107  ori         $v1, $v1, 0x3107
    ctx->pc = 0x1604dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12551);
    ctx->pc = 0x1604e0u;
    return;
}
