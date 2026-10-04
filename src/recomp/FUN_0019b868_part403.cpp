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


void FUN_0019b868_part403(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x25fd08u: goto label_25fd08;
        case 0x25fd0cu: goto label_25fd0c;
        case 0x25fd10u: goto label_25fd10;
        case 0x25fd14u: goto label_25fd14;
        case 0x25fd18u: goto label_25fd18;
        case 0x25fd1cu: goto label_25fd1c;
        case 0x25fd20u: goto label_25fd20;
        case 0x25fd24u: goto label_25fd24;
        case 0x25fd28u: goto label_25fd28;
        case 0x25fd2cu: goto label_25fd2c;
        case 0x25fd30u: goto label_25fd30;
        case 0x25fd34u: goto label_25fd34;
        case 0x25fd38u: goto label_25fd38;
        case 0x25fd3cu: goto label_25fd3c;
        case 0x25fd40u: goto label_25fd40;
        case 0x25fd44u: goto label_25fd44;
        case 0x25fd48u: goto label_25fd48;
        case 0x25fd4cu: goto label_25fd4c;
        case 0x25fd50u: goto label_25fd50;
        case 0x25fd54u: goto label_25fd54;
        case 0x25fd58u: goto label_25fd58;
        case 0x25fd5cu: goto label_25fd5c;
        case 0x25fd60u: goto label_25fd60;
        case 0x25fd64u: goto label_25fd64;
        case 0x25fd68u: goto label_25fd68;
        case 0x25fd6cu: goto label_25fd6c;
        case 0x25fd70u: goto label_25fd70;
        case 0x25fd74u: goto label_25fd74;
        case 0x25fd78u: goto label_25fd78;
        case 0x25fd7cu: goto label_25fd7c;
        case 0x25fd80u: goto label_25fd80;
        case 0x25fd84u: goto label_25fd84;
        case 0x25fd88u: goto label_25fd88;
        case 0x25fd8cu: goto label_25fd8c;
        case 0x25fd90u: goto label_25fd90;
        case 0x25fd94u: goto label_25fd94;
        case 0x25fd98u: goto label_25fd98;
        case 0x25fd9cu: goto label_25fd9c;
        case 0x25fda0u: goto label_25fda0;
        case 0x25fda4u: goto label_25fda4;
        case 0x25fda8u: goto label_25fda8;
        case 0x25fdacu: goto label_25fdac;
        case 0x25fdb0u: goto label_25fdb0;
        case 0x25fdb4u: goto label_25fdb4;
        case 0x25fdb8u: goto label_25fdb8;
        case 0x25fdbcu: goto label_25fdbc;
        case 0x25fdc0u: goto label_25fdc0;
        case 0x25fdc4u: goto label_25fdc4;
        case 0x25fdc8u: goto label_25fdc8;
        case 0x25fdccu: goto label_25fdcc;
        case 0x25fdd0u: goto label_25fdd0;
        case 0x25fdd4u: goto label_25fdd4;
        case 0x25fdd8u: goto label_25fdd8;
        case 0x25fddcu: goto label_25fddc;
        case 0x25fde0u: goto label_25fde0;
        case 0x25fde4u: goto label_25fde4;
        case 0x25fde8u: goto label_25fde8;
        case 0x25fdecu: goto label_25fdec;
        case 0x25fdf0u: goto label_25fdf0;
        case 0x25fdf4u: goto label_25fdf4;
        case 0x25fdf8u: goto label_25fdf8;
        case 0x25fdfcu: goto label_25fdfc;
        case 0x25fe00u: goto label_25fe00;
        case 0x25fe04u: goto label_25fe04;
        case 0x25fe08u: goto label_25fe08;
        case 0x25fe0cu: goto label_25fe0c;
        case 0x25fe10u: goto label_25fe10;
        case 0x25fe14u: goto label_25fe14;
        case 0x25fe18u: goto label_25fe18;
        case 0x25fe1cu: goto label_25fe1c;
        case 0x25fe20u: goto label_25fe20;
        case 0x25fe24u: goto label_25fe24;
        case 0x25fe28u: goto label_25fe28;
        case 0x25fe2cu: goto label_25fe2c;
        case 0x25fe30u: goto label_25fe30;
        case 0x25fe34u: goto label_25fe34;
        case 0x25fe38u: goto label_25fe38;
        case 0x25fe3cu: goto label_25fe3c;
        case 0x25fe40u: goto label_25fe40;
        case 0x25fe44u: goto label_25fe44;
        case 0x25fe48u: goto label_25fe48;
        case 0x25fe4cu: goto label_25fe4c;
        case 0x25fe50u: goto label_25fe50;
        case 0x25fe54u: goto label_25fe54;
        case 0x25fe58u: goto label_25fe58;
        case 0x25fe5cu: goto label_25fe5c;
        case 0x25fe60u: goto label_25fe60;
        case 0x25fe64u: goto label_25fe64;
        case 0x25fe68u: goto label_25fe68;
        case 0x25fe6cu: goto label_25fe6c;
        case 0x25fe70u: goto label_25fe70;
        case 0x25fe74u: goto label_25fe74;
        case 0x25fe78u: goto label_25fe78;
        case 0x25fe7cu: goto label_25fe7c;
        case 0x25fe80u: goto label_25fe80;
        case 0x25fe84u: goto label_25fe84;
        case 0x25fe88u: goto label_25fe88;
        case 0x25fe8cu: goto label_25fe8c;
        case 0x25fe90u: goto label_25fe90;
        case 0x25fe94u: goto label_25fe94;
        case 0x25fe98u: goto label_25fe98;
        case 0x25fe9cu: goto label_25fe9c;
        case 0x25fea0u: goto label_25fea0;
        case 0x25fea4u: goto label_25fea4;
        case 0x25fea8u: goto label_25fea8;
        case 0x25feacu: goto label_25feac;
        case 0x25feb0u: goto label_25feb0;
        case 0x25feb4u: goto label_25feb4;
        case 0x25feb8u: goto label_25feb8;
        case 0x25febcu: goto label_25febc;
        case 0x25fec0u: goto label_25fec0;
        case 0x25fec4u: goto label_25fec4;
        case 0x25fec8u: goto label_25fec8;
        case 0x25feccu: goto label_25fecc;
        case 0x25fed0u: goto label_25fed0;
        case 0x25fed4u: goto label_25fed4;
        case 0x25fed8u: goto label_25fed8;
        case 0x25fedcu: goto label_25fedc;
        case 0x25fee0u: goto label_25fee0;
        case 0x25fee4u: goto label_25fee4;
        case 0x25fee8u: goto label_25fee8;
        case 0x25feecu: goto label_25feec;
        case 0x25fef0u: goto label_25fef0;
        case 0x25fef4u: goto label_25fef4;
        case 0x25fef8u: goto label_25fef8;
        case 0x25fefcu: goto label_25fefc;
        case 0x25ff00u: goto label_25ff00;
        case 0x25ff04u: goto label_25ff04;
        case 0x25ff08u: goto label_25ff08;
        case 0x25ff0cu: goto label_25ff0c;
        case 0x25ff10u: goto label_25ff10;
        case 0x25ff14u: goto label_25ff14;
        case 0x25ff18u: goto label_25ff18;
        case 0x25ff1cu: goto label_25ff1c;
        case 0x25ff20u: goto label_25ff20;
        case 0x25ff24u: goto label_25ff24;
        case 0x25ff28u: goto label_25ff28;
        case 0x25ff2cu: goto label_25ff2c;
        case 0x25ff30u: goto label_25ff30;
        case 0x25ff34u: goto label_25ff34;
        case 0x25ff38u: goto label_25ff38;
        case 0x25ff3cu: goto label_25ff3c;
        case 0x25ff40u: goto label_25ff40;
        case 0x25ff44u: goto label_25ff44;
        case 0x25ff48u: goto label_25ff48;
        case 0x25ff4cu: goto label_25ff4c;
        case 0x25ff50u: goto label_25ff50;
        case 0x25ff54u: goto label_25ff54;
        case 0x25ff58u: goto label_25ff58;
        case 0x25ff5cu: goto label_25ff5c;
        case 0x25ff60u: goto label_25ff60;
        case 0x25ff64u: goto label_25ff64;
        case 0x25ff68u: goto label_25ff68;
        case 0x25ff6cu: goto label_25ff6c;
        case 0x25ff70u: goto label_25ff70;
        case 0x25ff74u: goto label_25ff74;
        case 0x25ff78u: goto label_25ff78;
        case 0x25ff7cu: goto label_25ff7c;
        case 0x25ff80u: goto label_25ff80;
        case 0x25ff84u: goto label_25ff84;
        case 0x25ff88u: goto label_25ff88;
        case 0x25ff8cu: goto label_25ff8c;
        case 0x25ff90u: goto label_25ff90;
        case 0x25ff94u: goto label_25ff94;
        case 0x25ff98u: goto label_25ff98;
        case 0x25ff9cu: goto label_25ff9c;
        case 0x25ffa0u: goto label_25ffa0;
        case 0x25ffa4u: goto label_25ffa4;
        case 0x25ffa8u: goto label_25ffa8;
        case 0x25ffacu: goto label_25ffac;
        case 0x25ffb0u: goto label_25ffb0;
        case 0x25ffb4u: goto label_25ffb4;
        case 0x25ffb8u: goto label_25ffb8;
        case 0x25ffbcu: goto label_25ffbc;
        case 0x25ffc0u: goto label_25ffc0;
        case 0x25ffc4u: goto label_25ffc4;
        case 0x25ffc8u: goto label_25ffc8;
        case 0x25ffccu: goto label_25ffcc;
        case 0x25ffd0u: goto label_25ffd0;
        case 0x25ffd4u: goto label_25ffd4;
        case 0x25ffd8u: goto label_25ffd8;
        case 0x25ffdcu: goto label_25ffdc;
        case 0x25ffe0u: goto label_25ffe0;
        case 0x25ffe4u: goto label_25ffe4;
        case 0x25ffe8u: goto label_25ffe8;
        case 0x25ffecu: goto label_25ffec;
        case 0x25fff0u: goto label_25fff0;
        case 0x25fff4u: goto label_25fff4;
        case 0x25fff8u: goto label_25fff8;
        case 0x25fffcu: goto label_25fffc;
        case 0x260000u: goto label_260000;
        case 0x260004u: goto label_260004;
        case 0x260008u: goto label_260008;
        case 0x26000cu: goto label_26000c;
        case 0x260010u: goto label_260010;
        case 0x260014u: goto label_260014;
        case 0x260018u: goto label_260018;
        case 0x26001cu: goto label_26001c;
        case 0x260020u: goto label_260020;
        case 0x260024u: goto label_260024;
        case 0x260028u: goto label_260028;
        case 0x26002cu: goto label_26002c;
        case 0x260030u: goto label_260030;
        case 0x260034u: goto label_260034;
        case 0x260038u: goto label_260038;
        case 0x26003cu: goto label_26003c;
        case 0x260040u: goto label_260040;
        case 0x260044u: goto label_260044;
        case 0x260048u: goto label_260048;
        case 0x26004cu: goto label_26004c;
        case 0x260050u: goto label_260050;
        case 0x260054u: goto label_260054;
        case 0x260058u: goto label_260058;
        case 0x26005cu: goto label_26005c;
        case 0x260060u: goto label_260060;
        case 0x260064u: goto label_260064;
        case 0x260068u: goto label_260068;
        case 0x26006cu: goto label_26006c;
        case 0x260070u: goto label_260070;
        case 0x260074u: goto label_260074;
        case 0x260078u: goto label_260078;
        case 0x26007cu: goto label_26007c;
        case 0x260080u: goto label_260080;
        case 0x260084u: goto label_260084;
        case 0x260088u: goto label_260088;
        case 0x26008cu: goto label_26008c;
        case 0x260090u: goto label_260090;
        case 0x260094u: goto label_260094;
        case 0x260098u: goto label_260098;
        case 0x26009cu: goto label_26009c;
        case 0x2600a0u: goto label_2600a0;
        case 0x2600a4u: goto label_2600a4;
        case 0x2600a8u: goto label_2600a8;
        case 0x2600acu: goto label_2600ac;
        case 0x2600b0u: goto label_2600b0;
        case 0x2600b4u: goto label_2600b4;
        case 0x2600b8u: goto label_2600b8;
        case 0x2600bcu: goto label_2600bc;
        case 0x2600c0u: goto label_2600c0;
        case 0x2600c4u: goto label_2600c4;
        case 0x2600c8u: goto label_2600c8;
        case 0x2600ccu: goto label_2600cc;
        case 0x2600d0u: goto label_2600d0;
        case 0x2600d4u: goto label_2600d4;
        case 0x2600d8u: goto label_2600d8;
        case 0x2600dcu: goto label_2600dc;
        case 0x2600e0u: goto label_2600e0;
        case 0x2600e4u: goto label_2600e4;
        case 0x2600e8u: goto label_2600e8;
        case 0x2600ecu: goto label_2600ec;
        case 0x2600f0u: goto label_2600f0;
        case 0x2600f4u: goto label_2600f4;
        case 0x2600f8u: goto label_2600f8;
        case 0x2600fcu: goto label_2600fc;
        case 0x260100u: goto label_260100;
        case 0x260104u: goto label_260104;
        case 0x260108u: goto label_260108;
        case 0x26010cu: goto label_26010c;
        case 0x260110u: goto label_260110;
        case 0x260114u: goto label_260114;
        case 0x260118u: goto label_260118;
        case 0x26011cu: goto label_26011c;
        case 0x260120u: goto label_260120;
        case 0x260124u: goto label_260124;
        case 0x260128u: goto label_260128;
        case 0x26012cu: goto label_26012c;
        case 0x260130u: goto label_260130;
        case 0x260134u: goto label_260134;
        case 0x260138u: goto label_260138;
        case 0x26013cu: goto label_26013c;
        case 0x260140u: goto label_260140;
        case 0x260144u: goto label_260144;
        case 0x260148u: goto label_260148;
        case 0x26014cu: goto label_26014c;
        case 0x260150u: goto label_260150;
        case 0x260154u: goto label_260154;
        case 0x260158u: goto label_260158;
        case 0x26015cu: goto label_26015c;
        case 0x260160u: goto label_260160;
        case 0x260164u: goto label_260164;
        case 0x260168u: goto label_260168;
        case 0x26016cu: goto label_26016c;
        case 0x260170u: goto label_260170;
        case 0x260174u: goto label_260174;
        case 0x260178u: goto label_260178;
        case 0x26017cu: goto label_26017c;
        case 0x260180u: goto label_260180;
        case 0x260184u: goto label_260184;
        case 0x260188u: goto label_260188;
        case 0x26018cu: goto label_26018c;
        case 0x260190u: goto label_260190;
        case 0x260194u: goto label_260194;
        case 0x260198u: goto label_260198;
        case 0x26019cu: goto label_26019c;
        case 0x2601a0u: goto label_2601a0;
        case 0x2601a4u: goto label_2601a4;
        case 0x2601a8u: goto label_2601a8;
        case 0x2601acu: goto label_2601ac;
        case 0x2601b0u: goto label_2601b0;
        case 0x2601b4u: goto label_2601b4;
        case 0x2601b8u: goto label_2601b8;
        case 0x2601bcu: goto label_2601bc;
        case 0x2601c0u: goto label_2601c0;
        case 0x2601c4u: goto label_2601c4;
        case 0x2601c8u: goto label_2601c8;
        case 0x2601ccu: goto label_2601cc;
        case 0x2601d0u: goto label_2601d0;
        case 0x2601d4u: goto label_2601d4;
        case 0x2601d8u: goto label_2601d8;
        case 0x2601dcu: goto label_2601dc;
        case 0x2601e0u: goto label_2601e0;
        case 0x2601e4u: goto label_2601e4;
        case 0x2601e8u: goto label_2601e8;
        case 0x2601ecu: goto label_2601ec;
        case 0x2601f0u: goto label_2601f0;
        case 0x2601f4u: goto label_2601f4;
        case 0x2601f8u: goto label_2601f8;
        case 0x2601fcu: goto label_2601fc;
        case 0x260200u: goto label_260200;
        case 0x260204u: goto label_260204;
        case 0x260208u: goto label_260208;
        case 0x26020cu: goto label_26020c;
        case 0x260210u: goto label_260210;
        case 0x260214u: goto label_260214;
        case 0x260218u: goto label_260218;
        case 0x26021cu: goto label_26021c;
        case 0x260220u: goto label_260220;
        case 0x260224u: goto label_260224;
        case 0x260228u: goto label_260228;
        case 0x26022cu: goto label_26022c;
        case 0x260230u: goto label_260230;
        case 0x260234u: goto label_260234;
        case 0x260238u: goto label_260238;
        case 0x26023cu: goto label_26023c;
        case 0x260240u: goto label_260240;
        case 0x260244u: goto label_260244;
        case 0x260248u: goto label_260248;
        case 0x26024cu: goto label_26024c;
        case 0x260250u: goto label_260250;
        case 0x260254u: goto label_260254;
        case 0x260258u: goto label_260258;
        case 0x26025cu: goto label_26025c;
        case 0x260260u: goto label_260260;
        case 0x260264u: goto label_260264;
        case 0x260268u: goto label_260268;
        case 0x26026cu: goto label_26026c;
        case 0x260270u: goto label_260270;
        case 0x260274u: goto label_260274;
        case 0x260278u: goto label_260278;
        case 0x26027cu: goto label_26027c;
        case 0x260280u: goto label_260280;
        case 0x260284u: goto label_260284;
        case 0x260288u: goto label_260288;
        case 0x26028cu: goto label_26028c;
        case 0x260290u: goto label_260290;
        case 0x260294u: goto label_260294;
        case 0x260298u: goto label_260298;
        case 0x26029cu: goto label_26029c;
        case 0x2602a0u: goto label_2602a0;
        case 0x2602a4u: goto label_2602a4;
        case 0x2602a8u: goto label_2602a8;
        case 0x2602acu: goto label_2602ac;
        case 0x2602b0u: goto label_2602b0;
        case 0x2602b4u: goto label_2602b4;
        case 0x2602b8u: goto label_2602b8;
        case 0x2602bcu: goto label_2602bc;
        case 0x2602c0u: goto label_2602c0;
        case 0x2602c4u: goto label_2602c4;
        case 0x2602c8u: goto label_2602c8;
        case 0x2602ccu: goto label_2602cc;
        case 0x2602d0u: goto label_2602d0;
        case 0x2602d4u: goto label_2602d4;
        case 0x2602d8u: goto label_2602d8;
        case 0x2602dcu: goto label_2602dc;
        case 0x2602e0u: goto label_2602e0;
        case 0x2602e4u: goto label_2602e4;
        case 0x2602e8u: goto label_2602e8;
        case 0x2602ecu: goto label_2602ec;
        case 0x2602f0u: goto label_2602f0;
        case 0x2602f4u: goto label_2602f4;
        case 0x2602f8u: goto label_2602f8;
        case 0x2602fcu: goto label_2602fc;
        case 0x260300u: goto label_260300;
        case 0x260304u: goto label_260304;
        case 0x260308u: goto label_260308;
        case 0x26030cu: goto label_26030c;
        case 0x260310u: goto label_260310;
        case 0x260314u: goto label_260314;
        case 0x260318u: goto label_260318;
        case 0x26031cu: goto label_26031c;
        case 0x260320u: goto label_260320;
        case 0x260324u: goto label_260324;
        case 0x260328u: goto label_260328;
        case 0x26032cu: goto label_26032c;
        case 0x260330u: goto label_260330;
        case 0x260334u: goto label_260334;
        case 0x260338u: goto label_260338;
        case 0x26033cu: goto label_26033c;
        case 0x260340u: goto label_260340;
        case 0x260344u: goto label_260344;
        case 0x260348u: goto label_260348;
        case 0x26034cu: goto label_26034c;
        case 0x260350u: goto label_260350;
        case 0x260354u: goto label_260354;
        case 0x260358u: goto label_260358;
        case 0x26035cu: goto label_26035c;
        case 0x260360u: goto label_260360;
        case 0x260364u: goto label_260364;
        case 0x260368u: goto label_260368;
        case 0x26036cu: goto label_26036c;
        case 0x260370u: goto label_260370;
        case 0x260374u: goto label_260374;
        case 0x260378u: goto label_260378;
        case 0x26037cu: goto label_26037c;
        case 0x260380u: goto label_260380;
        case 0x260384u: goto label_260384;
        case 0x260388u: goto label_260388;
        case 0x26038cu: goto label_26038c;
        case 0x260390u: goto label_260390;
        case 0x260394u: goto label_260394;
        case 0x260398u: goto label_260398;
        case 0x26039cu: goto label_26039c;
        case 0x2603a0u: goto label_2603a0;
        case 0x2603a4u: goto label_2603a4;
        case 0x2603a8u: goto label_2603a8;
        case 0x2603acu: goto label_2603ac;
        case 0x2603b0u: goto label_2603b0;
        case 0x2603b4u: goto label_2603b4;
        case 0x2603b8u: goto label_2603b8;
        case 0x2603bcu: goto label_2603bc;
        case 0x2603c0u: goto label_2603c0;
        case 0x2603c4u: goto label_2603c4;
        case 0x2603c8u: goto label_2603c8;
        case 0x2603ccu: goto label_2603cc;
        case 0x2603d0u: goto label_2603d0;
        case 0x2603d4u: goto label_2603d4;
        case 0x2603d8u: goto label_2603d8;
        case 0x2603dcu: goto label_2603dc;
        case 0x2603e0u: goto label_2603e0;
        case 0x2603e4u: goto label_2603e4;
        case 0x2603e8u: goto label_2603e8;
        case 0x2603ecu: goto label_2603ec;
        case 0x2603f0u: goto label_2603f0;
        case 0x2603f4u: goto label_2603f4;
        case 0x2603f8u: goto label_2603f8;
        case 0x2603fcu: goto label_2603fc;
        case 0x260400u: goto label_260400;
        case 0x260404u: goto label_260404;
        case 0x260408u: goto label_260408;
        case 0x26040cu: goto label_26040c;
        case 0x260410u: goto label_260410;
        case 0x260414u: goto label_260414;
        case 0x260418u: goto label_260418;
        case 0x26041cu: goto label_26041c;
        case 0x260420u: goto label_260420;
        case 0x260424u: goto label_260424;
        case 0x260428u: goto label_260428;
        case 0x26042cu: goto label_26042c;
        case 0x260430u: goto label_260430;
        case 0x260434u: goto label_260434;
        case 0x260438u: goto label_260438;
        case 0x26043cu: goto label_26043c;
        case 0x260440u: goto label_260440;
        case 0x260444u: goto label_260444;
        case 0x260448u: goto label_260448;
        case 0x26044cu: goto label_26044c;
        case 0x260450u: goto label_260450;
        case 0x260454u: goto label_260454;
        case 0x260458u: goto label_260458;
        case 0x26045cu: goto label_26045c;
        case 0x260460u: goto label_260460;
        case 0x260464u: goto label_260464;
        case 0x260468u: goto label_260468;
        case 0x26046cu: goto label_26046c;
        case 0x260470u: goto label_260470;
        case 0x260474u: goto label_260474;
        case 0x260478u: goto label_260478;
        case 0x26047cu: goto label_26047c;
        case 0x260480u: goto label_260480;
        case 0x260484u: goto label_260484;
        case 0x260488u: goto label_260488;
        case 0x26048cu: goto label_26048c;
        case 0x260490u: goto label_260490;
        case 0x260494u: goto label_260494;
        case 0x260498u: goto label_260498;
        case 0x26049cu: goto label_26049c;
        case 0x2604a0u: goto label_2604a0;
        case 0x2604a4u: goto label_2604a4;
        case 0x2604a8u: goto label_2604a8;
        case 0x2604acu: goto label_2604ac;
        case 0x2604b0u: goto label_2604b0;
        case 0x2604b4u: goto label_2604b4;
        case 0x2604b8u: goto label_2604b8;
        case 0x2604bcu: goto label_2604bc;
        case 0x2604c0u: goto label_2604c0;
        case 0x2604c4u: goto label_2604c4;
        case 0x2604c8u: goto label_2604c8;
        case 0x2604ccu: goto label_2604cc;
        case 0x2604d0u: goto label_2604d0;
        case 0x2604d4u: goto label_2604d4;
        default: return;
    }

label_25fd08:
    // 0x25fd08: 0x0  nop
    ctx->pc = 0x25fd08u;
    // NOP
label_25fd0c:
    // 0x25fd0c: 0x0  nop
    ctx->pc = 0x25fd0cu;
    // NOP
label_25fd10:
    // 0x25fd10: 0xa095  .word       0x0000A095                   # INVALID     $zero, $zero, -0x5F6B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fd10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25FD10 raw=0x0000A095"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25fd14:
    // 0x25fd14: 0x4b10  .word       0x00004B10                   # mfhi        $t1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fd14u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_25fd18:
    // 0x25fd18: 0x0  nop
    ctx->pc = 0x25fd18u;
    // NOP
label_25fd1c:
    // 0x25fd1c: 0x0  nop
    ctx->pc = 0x25fd1cu;
    // NOP
label_25fd20:
    // 0x25fd20: 0xa09f  .word       0x0000A09F                   # ddivu       $s4, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fd20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25FD20 raw=0x0000A09F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25fd24:
    // 0x25fd24: 0x6b60  .word       0x00006B60                   # add         $t5, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fd24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_25fd28:
    // 0x25fd28: 0x0  nop
    ctx->pc = 0x25fd28u;
    // NOP
label_25fd2c:
    // 0x25fd2c: 0x0  nop
    ctx->pc = 0x25fd2cu;
    // NOP
label_25fd30:
    // 0x25fd30: 0xa0ad  .word       0x0000A0AD                   # daddu       $s4, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fd30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25fd34:
    // 0x25fd34: 0x76a0  .word       0x000076A0                   # add         $t6, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fd34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25fd38:
    // 0x25fd38: 0x0  nop
    ctx->pc = 0x25fd38u;
    // NOP
label_25fd3c:
    // 0x25fd3c: 0x0  nop
    ctx->pc = 0x25fd3cu;
    // NOP
label_25fd40:
    // 0x25fd40: 0xa0bc  dsll32      $s4, $zero, 2
    ctx->pc = 0x25fd40u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) << (32 + 2));
label_25fd44:
    // 0x25fd44: 0x3fc0  sll         $a3, $zero, 31
    ctx->pc = 0x25fd44u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_25fd48:
    // 0x25fd48: 0x0  nop
    ctx->pc = 0x25fd48u;
    // NOP
label_25fd4c:
    // 0x25fd4c: 0x0  nop
    ctx->pc = 0x25fd4cu;
    // NOP
label_25fd50:
    // 0x25fd50: 0xa0c4  .word       0x0000A0C4                   # sllv        $s4, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fd50u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25fd54:
    // 0x25fd54: 0x4de0  .word       0x00004DE0                   # add         $t1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fd54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_25fd58:
    // 0x25fd58: 0x0  nop
    ctx->pc = 0x25fd58u;
    // NOP
label_25fd5c:
    // 0x25fd5c: 0x0  nop
    ctx->pc = 0x25fd5cu;
    // NOP
label_25fd60:
    // 0x25fd60: 0xa0ce  .word       0x0000A0CE                   # INVALID     $zero, $zero, -0x5F32 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fd60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25FD60 raw=0x0000A0CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25fd64:
    // 0x25fd64: 0x6140  sll         $t4, $zero, 5
    ctx->pc = 0x25fd64u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_25fd68:
    // 0x25fd68: 0x0  nop
    ctx->pc = 0x25fd68u;
    // NOP
label_25fd6c:
    // 0x25fd6c: 0x0  nop
    ctx->pc = 0x25fd6cu;
    // NOP
label_25fd70:
    // 0x25fd70: 0xa0db  .word       0x0000A0DB                   # divu        $s4, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fd70u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_25fd74:
    // 0x25fd74: 0x8190  .word       0x00008190                   # mfhi        $s0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fd74u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25fd78:
    // 0x25fd78: 0x0  nop
    ctx->pc = 0x25fd78u;
    // NOP
label_25fd7c:
    // 0x25fd7c: 0x0  nop
    ctx->pc = 0x25fd7cu;
    // NOP
label_25fd80:
    // 0x25fd80: 0xa0ec  .word       0x0000A0EC                   # dadd        $s4, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fd80u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, r); }
label_25fd84:
    // 0x25fd84: 0x6c10  .word       0x00006C10                   # mfhi        $t5 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fd84u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25fd88:
    // 0x25fd88: 0x0  nop
    ctx->pc = 0x25fd88u;
    // NOP
label_25fd8c:
    // 0x25fd8c: 0x0  nop
    ctx->pc = 0x25fd8cu;
    // NOP
label_25fd90:
    // 0x25fd90: 0xa0fa  dsrl        $s4, $zero, 3
    ctx->pc = 0x25fd90u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) >> 3);
label_25fd94:
    // 0x25fd94: 0x4d80  sll         $t1, $zero, 22
    ctx->pc = 0x25fd94u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_25fd98:
    // 0x25fd98: 0x0  nop
    ctx->pc = 0x25fd98u;
    // NOP
label_25fd9c:
    // 0x25fd9c: 0x0  nop
    ctx->pc = 0x25fd9cu;
    // NOP
label_25fda0:
    // 0x25fda0: 0xa104  .word       0x0000A104                   # sllv        $s4, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fda0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25fda4:
    // 0x25fda4: 0x4190  .word       0x00004190                   # mfhi        $t0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fda4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_25fda8:
    // 0x25fda8: 0x0  nop
    ctx->pc = 0x25fda8u;
    // NOP
label_25fdac:
    // 0x25fdac: 0x0  nop
    ctx->pc = 0x25fdacu;
    // NOP
label_25fdb0:
    // 0x25fdb0: 0xa10d  break       0, 644
    ctx->pc = 0x25fdb0u;
    runtime->handleBreak(rdram, ctx);
label_25fdb4:
    // 0x25fdb4: 0x4290  .word       0x00004290                   # mfhi        $t0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fdb4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_25fdb8:
    // 0x25fdb8: 0x0  nop
    ctx->pc = 0x25fdb8u;
    // NOP
label_25fdbc:
    // 0x25fdbc: 0x0  nop
    ctx->pc = 0x25fdbcu;
    // NOP
label_25fdc0:
    // 0x25fdc0: 0xa116  .word       0x0000A116                   # dsrlv       $s4, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fdc0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25fdc4:
    // 0x25fdc4: 0x39d0  .word       0x000039D0                   # mfhi        $a3 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fdc4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_25fdc8:
    // 0x25fdc8: 0x0  nop
    ctx->pc = 0x25fdc8u;
    // NOP
label_25fdcc:
    // 0x25fdcc: 0x0  nop
    ctx->pc = 0x25fdccu;
    // NOP
label_25fdd0:
    // 0x25fdd0: 0xa11e  .word       0x0000A11E                   # ddiv        $s4, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fdd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x25FDD0 raw=0x0000A11E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25fdd4:
    // 0x25fdd4: 0x4340  sll         $t0, $zero, 13
    ctx->pc = 0x25fdd4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_25fdd8:
    // 0x25fdd8: 0x0  nop
    ctx->pc = 0x25fdd8u;
    // NOP
label_25fddc:
    // 0x25fddc: 0x0  nop
    ctx->pc = 0x25fddcu;
    // NOP
label_25fde0:
    // 0x25fde0: 0xa127  .word       0x0000A127                   # not         $s4, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fde0u;
    SET_GPR_U64(ctx, 20, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_25fde4:
    // 0x25fde4: 0x7410  .word       0x00007410                   # mfhi        $t6 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fde4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_25fde8:
    // 0x25fde8: 0x0  nop
    ctx->pc = 0x25fde8u;
    // NOP
label_25fdec:
    // 0x25fdec: 0x0  nop
    ctx->pc = 0x25fdecu;
    // NOP
label_25fdf0:
    // 0x25fdf0: 0xa136  tne         $zero, $zero, 644
    ctx->pc = 0x25fdf0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25fdf4:
    // 0x25fdf4: 0x55e0  .word       0x000055E0                   # add         $t2, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fdf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_25fdf8:
    // 0x25fdf8: 0x0  nop
    ctx->pc = 0x25fdf8u;
    // NOP
label_25fdfc:
    // 0x25fdfc: 0x0  nop
    ctx->pc = 0x25fdfcu;
    // NOP
label_25fe00:
    // 0x25fe00: 0xa141  .word       0x0000A141                   # INVALID     $zero, $zero, -0x5EBF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fe00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25FE00 raw=0x0000A141"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25fe04:
    // 0x25fe04: 0x5d90  .word       0x00005D90                   # mfhi        $t3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fe04u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_25fe08:
    // 0x25fe08: 0x0  nop
    ctx->pc = 0x25fe08u;
    // NOP
label_25fe0c:
    // 0x25fe0c: 0x0  nop
    ctx->pc = 0x25fe0cu;
    // NOP
label_25fe10:
    // 0x25fe10: 0xa14d  break       0, 645
    ctx->pc = 0x25fe10u;
    runtime->handleBreak(rdram, ctx);
label_25fe14:
    // 0x25fe14: 0x4ad0  .word       0x00004AD0                   # mfhi        $t1 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fe14u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_25fe18:
    // 0x25fe18: 0x0  nop
    ctx->pc = 0x25fe18u;
    // NOP
label_25fe1c:
    // 0x25fe1c: 0x0  nop
    ctx->pc = 0x25fe1cu;
    // NOP
label_25fe20:
    // 0x25fe20: 0xa157  .word       0x0000A157                   # dsrav       $s4, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fe20u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25fe24:
    // 0x25fe24: 0x4710  .word       0x00004710                   # mfhi        $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fe24u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_25fe28:
    // 0x25fe28: 0x0  nop
    ctx->pc = 0x25fe28u;
    // NOP
label_25fe2c:
    // 0x25fe2c: 0x0  nop
    ctx->pc = 0x25fe2cu;
    // NOP
label_25fe30:
    // 0x25fe30: 0xa160  .word       0x0000A160                   # add         $s4, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fe30u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_25fe34:
    // 0x25fe34: 0x4fb0  tge         $zero, $zero, 318
    ctx->pc = 0x25fe34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25fe38:
    // 0x25fe38: 0x0  nop
    ctx->pc = 0x25fe38u;
    // NOP
label_25fe3c:
    // 0x25fe3c: 0x0  nop
    ctx->pc = 0x25fe3cu;
    // NOP
label_25fe40:
    // 0x25fe40: 0xa16a  .word       0x0000A16A                   # slt         $s4, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fe40u;
    SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_25fe44:
    // 0x25fe44: 0x6110  .word       0x00006110                   # mfhi        $t4 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fe44u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25fe48:
    // 0x25fe48: 0x0  nop
    ctx->pc = 0x25fe48u;
    // NOP
label_25fe4c:
    // 0x25fe4c: 0x0  nop
    ctx->pc = 0x25fe4cu;
    // NOP
label_25fe50:
    // 0x25fe50: 0xa177  .word       0x0000A177                   # INVALID     $zero, $zero, -0x5E89 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fe50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25FE50 raw=0x0000A177"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25fe54:
    // 0x25fe54: 0x4b30  tge         $zero, $zero, 300
    ctx->pc = 0x25fe54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25fe58:
    // 0x25fe58: 0x0  nop
    ctx->pc = 0x25fe58u;
    // NOP
label_25fe5c:
    // 0x25fe5c: 0x0  nop
    ctx->pc = 0x25fe5cu;
    // NOP
label_25fe60:
    // 0x25fe60: 0xa181  .word       0x0000A181                   # INVALID     $zero, $zero, -0x5E7F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fe60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25FE60 raw=0x0000A181"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25fe64:
    // 0x25fe64: 0x6620  .word       0x00006620                   # add         $t4, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fe64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_25fe68:
    // 0x25fe68: 0x0  nop
    ctx->pc = 0x25fe68u;
    // NOP
label_25fe6c:
    // 0x25fe6c: 0x0  nop
    ctx->pc = 0x25fe6cu;
    // NOP
label_25fe70:
    // 0x25fe70: 0xa18e  .word       0x0000A18E                   # INVALID     $zero, $zero, -0x5E72 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fe70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25FE70 raw=0x0000A18E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25fe74:
    // 0x25fe74: 0x4240  sll         $t0, $zero, 9
    ctx->pc = 0x25fe74u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_25fe78:
    // 0x25fe78: 0x0  nop
    ctx->pc = 0x25fe78u;
    // NOP
label_25fe7c:
    // 0x25fe7c: 0x0  nop
    ctx->pc = 0x25fe7cu;
    // NOP
label_25fe80:
    // 0x25fe80: 0xa197  .word       0x0000A197                   # dsrav       $s4, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fe80u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25fe84:
    // 0x25fe84: 0x4d70  tge         $zero, $zero, 309
    ctx->pc = 0x25fe84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25fe88:
    // 0x25fe88: 0x0  nop
    ctx->pc = 0x25fe88u;
    // NOP
label_25fe8c:
    // 0x25fe8c: 0x0  nop
    ctx->pc = 0x25fe8cu;
    // NOP
label_25fe90:
    // 0x25fe90: 0xa1a1  .word       0x0000A1A1                   # addu        $s4, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fe90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25fe94:
    // 0x25fe94: 0x4320  .word       0x00004320                   # add         $t0, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fe94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_25fe98:
    // 0x25fe98: 0x0  nop
    ctx->pc = 0x25fe98u;
    // NOP
label_25fe9c:
    // 0x25fe9c: 0x0  nop
    ctx->pc = 0x25fe9cu;
    // NOP
label_25fea0:
    // 0x25fea0: 0xa1aa  .word       0x0000A1AA                   # slt         $s4, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fea0u;
    SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_25fea4:
    // 0x25fea4: 0x4900  sll         $t1, $zero, 4
    ctx->pc = 0x25fea4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_25fea8:
    // 0x25fea8: 0x0  nop
    ctx->pc = 0x25fea8u;
    // NOP
label_25feac:
    // 0x25feac: 0x0  nop
    ctx->pc = 0x25feacu;
    // NOP
label_25feb0:
    // 0x25feb0: 0xa1b4  teq         $zero, $zero, 646
    ctx->pc = 0x25feb0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25feb4:
    // 0x25feb4: 0x8390  .word       0x00008390                   # mfhi        $s0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25feb4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25feb8:
    // 0x25feb8: 0x0  nop
    ctx->pc = 0x25feb8u;
    // NOP
label_25febc:
    // 0x25febc: 0x0  nop
    ctx->pc = 0x25febcu;
    // NOP
label_25fec0:
    // 0x25fec0: 0xa1c5  .word       0x0000A1C5                   # INVALID     $zero, $zero, -0x5E3B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fec0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25FEC0 raw=0x0000A1C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25fec4:
    // 0x25fec4: 0x6240  sll         $t4, $zero, 9
    ctx->pc = 0x25fec4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_25fec8:
    // 0x25fec8: 0x0  nop
    ctx->pc = 0x25fec8u;
    // NOP
label_25fecc:
    // 0x25fecc: 0x0  nop
    ctx->pc = 0x25feccu;
    // NOP
label_25fed0:
    // 0x25fed0: 0xa1d2  .word       0x0000A1D2                   # mflo        $s4 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fed0u;
    SET_GPR_U64(ctx, 20, ctx->lo);
label_25fed4:
    // 0x25fed4: 0x74e0  .word       0x000074E0                   # add         $t6, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fed4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25fed8:
    // 0x25fed8: 0x0  nop
    ctx->pc = 0x25fed8u;
    // NOP
label_25fedc:
    // 0x25fedc: 0x0  nop
    ctx->pc = 0x25fedcu;
    // NOP
label_25fee0:
    // 0x25fee0: 0xa1e1  .word       0x0000A1E1                   # addu        $s4, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fee0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25fee4:
    // 0x25fee4: 0x4200  sll         $t0, $zero, 8
    ctx->pc = 0x25fee4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_25fee8:
    // 0x25fee8: 0x0  nop
    ctx->pc = 0x25fee8u;
    // NOP
label_25feec:
    // 0x25feec: 0x0  nop
    ctx->pc = 0x25feecu;
    // NOP
label_25fef0:
    // 0x25fef0: 0xa1ea  .word       0x0000A1EA                   # slt         $s4, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fef0u;
    SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_25fef4:
    // 0x25fef4: 0x35f0  tge         $zero, $zero, 215
    ctx->pc = 0x25fef4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25fef8:
    // 0x25fef8: 0x0  nop
    ctx->pc = 0x25fef8u;
    // NOP
label_25fefc:
    // 0x25fefc: 0x0  nop
    ctx->pc = 0x25fefcu;
    // NOP
label_25ff00:
    // 0x25ff00: 0xa1f1  tgeu        $zero, $zero, 647
    ctx->pc = 0x25ff00u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ff04:
    // 0x25ff04: 0x4920  .word       0x00004920                   # add         $t1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ff04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_25ff08:
    // 0x25ff08: 0x0  nop
    ctx->pc = 0x25ff08u;
    // NOP
label_25ff0c:
    // 0x25ff0c: 0x0  nop
    ctx->pc = 0x25ff0cu;
    // NOP
label_25ff10:
    // 0x25ff10: 0xa1fb  dsra        $s4, $zero, 7
    ctx->pc = 0x25ff10u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 0) >> 7);
label_25ff14:
    // 0x25ff14: 0x4f80  sll         $t1, $zero, 30
    ctx->pc = 0x25ff14u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_25ff18:
    // 0x25ff18: 0x0  nop
    ctx->pc = 0x25ff18u;
    // NOP
label_25ff1c:
    // 0x25ff1c: 0x0  nop
    ctx->pc = 0x25ff1cu;
    // NOP
label_25ff20:
    // 0x25ff20: 0xa205  .word       0x0000A205                   # INVALID     $zero, $zero, -0x5DFB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ff20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25FF20 raw=0x0000A205"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ff24:
    // 0x25ff24: 0x5590  .word       0x00005590                   # mfhi        $t2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ff24u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_25ff28:
    // 0x25ff28: 0x0  nop
    ctx->pc = 0x25ff28u;
    // NOP
label_25ff2c:
    // 0x25ff2c: 0x0  nop
    ctx->pc = 0x25ff2cu;
    // NOP
label_25ff30:
    // 0x25ff30: 0xa210  .word       0x0000A210                   # mfhi        $s4 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ff30u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_25ff34:
    // 0x25ff34: 0x35c0  sll         $a2, $zero, 23
    ctx->pc = 0x25ff34u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_25ff38:
    // 0x25ff38: 0x0  nop
    ctx->pc = 0x25ff38u;
    // NOP
label_25ff3c:
    // 0x25ff3c: 0x0  nop
    ctx->pc = 0x25ff3cu;
    // NOP
label_25ff40:
    // 0x25ff40: 0xa217  .word       0x0000A217                   # dsrav       $s4, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ff40u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25ff44:
    // 0x25ff44: 0x4ae0  .word       0x00004AE0                   # add         $t1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ff44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_25ff48:
    // 0x25ff48: 0x0  nop
    ctx->pc = 0x25ff48u;
    // NOP
label_25ff4c:
    // 0x25ff4c: 0x0  nop
    ctx->pc = 0x25ff4cu;
    // NOP
label_25ff50:
    // 0x25ff50: 0xa221  .word       0x0000A221                   # addu        $s4, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ff50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25ff54:
    // 0x25ff54: 0x3470  tge         $zero, $zero, 209
    ctx->pc = 0x25ff54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ff58:
    // 0x25ff58: 0x0  nop
    ctx->pc = 0x25ff58u;
    // NOP
label_25ff5c:
    // 0x25ff5c: 0x0  nop
    ctx->pc = 0x25ff5cu;
    // NOP
label_25ff60:
    // 0x25ff60: 0xa228  .word       0x0000A228                   # mfsa        $s4 # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25ff60u;
    SET_GPR_U32(ctx, 20, ctx->sa);
label_25ff64:
    // 0x25ff64: 0x5850  .word       0x00005850                   # mfhi        $t3 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ff64u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_25ff68:
    // 0x25ff68: 0x0  nop
    ctx->pc = 0x25ff68u;
    // NOP
label_25ff6c:
    // 0x25ff6c: 0x0  nop
    ctx->pc = 0x25ff6cu;
    // NOP
label_25ff70:
    // 0x25ff70: 0xa234  teq         $zero, $zero, 648
    ctx->pc = 0x25ff70u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ff74:
    // 0x25ff74: 0x5f90  .word       0x00005F90                   # mfhi        $t3 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ff74u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_25ff78:
    // 0x25ff78: 0x0  nop
    ctx->pc = 0x25ff78u;
    // NOP
label_25ff7c:
    // 0x25ff7c: 0x0  nop
    ctx->pc = 0x25ff7cu;
    // NOP
label_25ff80:
    // 0x25ff80: 0xa240  sll         $s4, $zero, 9
    ctx->pc = 0x25ff80u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_25ff84:
    // 0x25ff84: 0x4ec0  sll         $t1, $zero, 27
    ctx->pc = 0x25ff84u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_25ff88:
    // 0x25ff88: 0x0  nop
    ctx->pc = 0x25ff88u;
    // NOP
label_25ff8c:
    // 0x25ff8c: 0x0  nop
    ctx->pc = 0x25ff8cu;
    // NOP
label_25ff90:
    // 0x25ff90: 0xa24a  .word       0x0000A24A                   # movz        $s4, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ff90u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
label_25ff94:
    // 0x25ff94: 0x46e0  .word       0x000046E0                   # add         $t0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ff94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_25ff98:
    // 0x25ff98: 0x0  nop
    ctx->pc = 0x25ff98u;
    // NOP
label_25ff9c:
    // 0x25ff9c: 0x0  nop
    ctx->pc = 0x25ff9cu;
    // NOP
label_25ffa0:
    // 0x25ffa0: 0xa253  .word       0x0000A253                   # mtlo        $zero # 0000A240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ffa0u;
    ctx->lo = GPR_U64(ctx, 0);
label_25ffa4:
    // 0x25ffa4: 0x4140  sll         $t0, $zero, 5
    ctx->pc = 0x25ffa4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_25ffa8:
    // 0x25ffa8: 0x0  nop
    ctx->pc = 0x25ffa8u;
    // NOP
label_25ffac:
    // 0x25ffac: 0x0  nop
    ctx->pc = 0x25ffacu;
    // NOP
label_25ffb0:
    // 0x25ffb0: 0xa25c  .word       0x0000A25C                   # dmult       $zero, $zero # 0000A240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ffb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x25FFB0 raw=0x0000A25C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ffb4:
    // 0x25ffb4: 0x48f0  tge         $zero, $zero, 291
    ctx->pc = 0x25ffb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ffb8:
    // 0x25ffb8: 0x0  nop
    ctx->pc = 0x25ffb8u;
    // NOP
label_25ffbc:
    // 0x25ffbc: 0x0  nop
    ctx->pc = 0x25ffbcu;
    // NOP
label_25ffc0:
    // 0x25ffc0: 0xa266  .word       0x0000A266                   # xor         $s4, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ffc0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25ffc4:
    // 0x25ffc4: 0x7690  .word       0x00007690                   # mfhi        $t6 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ffc4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_25ffc8:
    // 0x25ffc8: 0x0  nop
    ctx->pc = 0x25ffc8u;
    // NOP
label_25ffcc:
    // 0x25ffcc: 0x0  nop
    ctx->pc = 0x25ffccu;
    // NOP
label_25ffd0:
    // 0x25ffd0: 0xa275  .word       0x0000A275                   # INVALID     $zero, $zero, -0x5D8B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ffd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25FFD0 raw=0x0000A275"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ffd4:
    // 0x25ffd4: 0x76c0  sll         $t6, $zero, 27
    ctx->pc = 0x25ffd4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_25ffd8:
    // 0x25ffd8: 0x0  nop
    ctx->pc = 0x25ffd8u;
    // NOP
label_25ffdc:
    // 0x25ffdc: 0x0  nop
    ctx->pc = 0x25ffdcu;
    // NOP
label_25ffe0:
    // 0x25ffe0: 0xa284  .word       0x0000A284                   # sllv        $s4, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ffe0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25ffe4:
    // 0x25ffe4: 0x5370  tge         $zero, $zero, 333
    ctx->pc = 0x25ffe4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ffe8:
    // 0x25ffe8: 0x0  nop
    ctx->pc = 0x25ffe8u;
    // NOP
label_25ffec:
    // 0x25ffec: 0x0  nop
    ctx->pc = 0x25ffecu;
    // NOP
label_25fff0:
    // 0x25fff0: 0xa28f  .word       0x0000A28F                   # sync # 0000A000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fff0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_25fff4:
    // 0x25fff4: 0x3ef0  tge         $zero, $zero, 251
    ctx->pc = 0x25fff4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25fff8:
    // 0x25fff8: 0x0  nop
    ctx->pc = 0x25fff8u;
    // NOP
label_25fffc:
    // 0x25fffc: 0x0  nop
    ctx->pc = 0x25fffcu;
    // NOP
label_260000:
    // 0x260000: 0xa297  .word       0x0000A297                   # dsrav       $s4, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260000u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_260004:
    // 0x260004: 0x5c50  .word       0x00005C50                   # mfhi        $t3 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260004u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_260008:
    // 0x260008: 0x0  nop
    ctx->pc = 0x260008u;
    // NOP
label_26000c:
    // 0x26000c: 0x0  nop
    ctx->pc = 0x26000cu;
    // NOP
label_260010:
    // 0x260010: 0xa2a3  .word       0x0000A2A3                   # negu        $s4, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260010u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_260014:
    // 0x260014: 0x71f0  tge         $zero, $zero, 455
    ctx->pc = 0x260014u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260018:
    // 0x260018: 0x0  nop
    ctx->pc = 0x260018u;
    // NOP
label_26001c:
    // 0x26001c: 0x0  nop
    ctx->pc = 0x26001cu;
    // NOP
label_260020:
    // 0x260020: 0xa2b2  tlt         $zero, $zero, 650
    ctx->pc = 0x260020u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260024:
    // 0x260024: 0x4410  .word       0x00004410                   # mfhi        $t0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260024u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_260028:
    // 0x260028: 0x0  nop
    ctx->pc = 0x260028u;
    // NOP
label_26002c:
    // 0x26002c: 0x0  nop
    ctx->pc = 0x26002cu;
    // NOP
label_260030:
    // 0x260030: 0xa2bb  dsra        $s4, $zero, 10
    ctx->pc = 0x260030u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 0) >> 10);
label_260034:
    // 0x260034: 0x5fd0  .word       0x00005FD0                   # mfhi        $t3 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260034u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_260038:
    // 0x260038: 0x0  nop
    ctx->pc = 0x260038u;
    // NOP
label_26003c:
    // 0x26003c: 0x0  nop
    ctx->pc = 0x26003cu;
    // NOP
label_260040:
    // 0x260040: 0xa2c7  .word       0x0000A2C7                   # srav        $s4, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260040u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_260044:
    // 0x260044: 0x12a00  sll         $a1, $at, 8
    ctx->pc = 0x260044u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 1), 8));
label_260048:
    // 0x260048: 0x0  nop
    ctx->pc = 0x260048u;
    // NOP
label_26004c:
    // 0x26004c: 0x0  nop
    ctx->pc = 0x26004cu;
    // NOP
label_260050:
    // 0x260050: 0xa2ed  .word       0x0000A2ED                   # daddu       $s4, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260050u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_260054:
    // 0x260054: 0x11db0  tge         $zero, $at, 118
    ctx->pc = 0x260054u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_260058:
    // 0x260058: 0x0  nop
    ctx->pc = 0x260058u;
    // NOP
label_26005c:
    // 0x26005c: 0x0  nop
    ctx->pc = 0x26005cu;
    // NOP
label_260060:
    // 0x260060: 0xa311  .word       0x0000A311                   # mthi        $zero # 0000A300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260060u;
    ctx->hi = GPR_U64(ctx, 0);
label_260064:
    // 0x260064: 0x126a0  .word       0x000126A0                   # add         $a0, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260064u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_260068:
    // 0x260068: 0x0  nop
    ctx->pc = 0x260068u;
    // NOP
label_26006c:
    // 0x26006c: 0x0  nop
    ctx->pc = 0x26006cu;
    // NOP
label_260070:
    // 0x260070: 0xa336  tne         $zero, $zero, 652
    ctx->pc = 0x260070u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260074:
    // 0x260074: 0xdda0  .word       0x0000DDA0                   # add         $k1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260074u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_260078:
    // 0x260078: 0x0  nop
    ctx->pc = 0x260078u;
    // NOP
label_26007c:
    // 0x26007c: 0x0  nop
    ctx->pc = 0x26007cu;
    // NOP
label_260080:
    // 0x260080: 0xa352  .word       0x0000A352                   # mflo        $s4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260080u;
    SET_GPR_U64(ctx, 20, ctx->lo);
label_260084:
    // 0x260084: 0xfef0  tge         $zero, $zero, 1019
    ctx->pc = 0x260084u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260088:
    // 0x260088: 0x0  nop
    ctx->pc = 0x260088u;
    // NOP
label_26008c:
    // 0x26008c: 0x0  nop
    ctx->pc = 0x26008cu;
    // NOP
label_260090:
    // 0x260090: 0xa372  tlt         $zero, $zero, 653
    ctx->pc = 0x260090u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260094:
    // 0x260094: 0xfd10  .word       0x0000FD10                   # mfhi        $ra # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260094u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_260098:
    // 0x260098: 0x0  nop
    ctx->pc = 0x260098u;
    // NOP
label_26009c:
    // 0x26009c: 0x0  nop
    ctx->pc = 0x26009cu;
    // NOP
label_2600a0:
    // 0x2600a0: 0xa392  .word       0x0000A392                   # mflo        $s4 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2600a0u;
    SET_GPR_U64(ctx, 20, ctx->lo);
label_2600a4:
    // 0x2600a4: 0x15a60  .word       0x00015A60                   # add         $t3, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2600a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2600a8:
    // 0x2600a8: 0x0  nop
    ctx->pc = 0x2600a8u;
    // NOP
label_2600ac:
    // 0x2600ac: 0x0  nop
    ctx->pc = 0x2600acu;
    // NOP
label_2600b0:
    // 0x2600b0: 0xa3be  dsrl32      $s4, $zero, 14
    ctx->pc = 0x2600b0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) >> (32 + 14));
label_2600b4:
    // 0x2600b4: 0xb600  sll         $s6, $zero, 24
    ctx->pc = 0x2600b4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_2600b8:
    // 0x2600b8: 0x0  nop
    ctx->pc = 0x2600b8u;
    // NOP
label_2600bc:
    // 0x2600bc: 0x0  nop
    ctx->pc = 0x2600bcu;
    // NOP
label_2600c0:
    // 0x2600c0: 0xa3d5  .word       0x0000A3D5                   # INVALID     $zero, $zero, -0x5C2B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2600c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2600C0 raw=0x0000A3D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2600c4:
    // 0x2600c4: 0xe380  sll         $gp, $zero, 14
    ctx->pc = 0x2600c4u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_2600c8:
    // 0x2600c8: 0x0  nop
    ctx->pc = 0x2600c8u;
    // NOP
label_2600cc:
    // 0x2600cc: 0x0  nop
    ctx->pc = 0x2600ccu;
    // NOP
label_2600d0:
    // 0x2600d0: 0xa3f2  tlt         $zero, $zero, 655
    ctx->pc = 0x2600d0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2600d4:
    // 0x2600d4: 0x112a0  .word       0x000112A0                   # add         $v0, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2600d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_2600d8:
    // 0x2600d8: 0x0  nop
    ctx->pc = 0x2600d8u;
    // NOP
label_2600dc:
    // 0x2600dc: 0x0  nop
    ctx->pc = 0x2600dcu;
    // NOP
label_2600e0:
    // 0x2600e0: 0xa415  .word       0x0000A415                   # INVALID     $zero, $zero, -0x5BEB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2600e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2600E0 raw=0x0000A415"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2600e4:
    // 0x2600e4: 0x10250  .word       0x00010250                   # mfhi        $zero # 00010240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2600e4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2600e8:
    // 0x2600e8: 0x0  nop
    ctx->pc = 0x2600e8u;
    // NOP
label_2600ec:
    // 0x2600ec: 0x0  nop
    ctx->pc = 0x2600ecu;
    // NOP
label_2600f0:
    // 0x2600f0: 0xa436  tne         $zero, $zero, 656
    ctx->pc = 0x2600f0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2600f4:
    // 0x2600f4: 0xdf00  sll         $k1, $zero, 28
    ctx->pc = 0x2600f4u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_2600f8:
    // 0x2600f8: 0x0  nop
    ctx->pc = 0x2600f8u;
    // NOP
label_2600fc:
    // 0x2600fc: 0x0  nop
    ctx->pc = 0x2600fcu;
    // NOP
label_260100:
    // 0x260100: 0xa452  .word       0x0000A452                   # mflo        $s4 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260100u;
    SET_GPR_U64(ctx, 20, ctx->lo);
label_260104:
    // 0x260104: 0xef20  .word       0x0000EF20                   # add         $sp, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260104u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_260108:
    // 0x260108: 0x0  nop
    ctx->pc = 0x260108u;
    // NOP
label_26010c:
    // 0x26010c: 0x0  nop
    ctx->pc = 0x26010cu;
    // NOP
label_260110:
    // 0x260110: 0xa470  tge         $zero, $zero, 657
    ctx->pc = 0x260110u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260114:
    // 0x260114: 0x11f70  tge         $zero, $at, 125
    ctx->pc = 0x260114u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_260118:
    // 0x260118: 0x0  nop
    ctx->pc = 0x260118u;
    // NOP
label_26011c:
    // 0x26011c: 0x0  nop
    ctx->pc = 0x26011cu;
    // NOP
label_260120:
    // 0x260120: 0xa494  .word       0x0000A494                   # dsllv       $s4, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260120u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_260124:
    // 0x260124: 0xd2c0  sll         $k0, $zero, 11
    ctx->pc = 0x260124u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_260128:
    // 0x260128: 0x0  nop
    ctx->pc = 0x260128u;
    // NOP
label_26012c:
    // 0x26012c: 0x0  nop
    ctx->pc = 0x26012cu;
    // NOP
label_260130:
    // 0x260130: 0xa4af  .word       0x0000A4AF                   # dsubu       $s4, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260130u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_260134:
    // 0x260134: 0x12750  .word       0x00012750                   # mfhi        $a0 # 00010740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260134u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_260138:
    // 0x260138: 0x0  nop
    ctx->pc = 0x260138u;
    // NOP
label_26013c:
    // 0x26013c: 0x0  nop
    ctx->pc = 0x26013cu;
    // NOP
label_260140:
    // 0x260140: 0xa4d4  .word       0x0000A4D4                   # dsllv       $s4, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260140u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_260144:
    // 0x260144: 0x13070  tge         $zero, $at, 193
    ctx->pc = 0x260144u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_260148:
    // 0x260148: 0x0  nop
    ctx->pc = 0x260148u;
    // NOP
label_26014c:
    // 0x26014c: 0x0  nop
    ctx->pc = 0x26014cu;
    // NOP
label_260150:
    // 0x260150: 0xa4fb  dsra        $s4, $zero, 19
    ctx->pc = 0x260150u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 0) >> 19);
label_260154:
    // 0x260154: 0xcd80  sll         $t9, $zero, 22
    ctx->pc = 0x260154u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_260158:
    // 0x260158: 0x0  nop
    ctx->pc = 0x260158u;
    // NOP
label_26015c:
    // 0x26015c: 0x0  nop
    ctx->pc = 0x26015cu;
    // NOP
label_260160:
    // 0x260160: 0xa515  .word       0x0000A515                   # INVALID     $zero, $zero, -0x5AEB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260160u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x260160 raw=0x0000A515"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_260164:
    // 0x260164: 0x11c60  .word       0x00011C60                   # add         $v1, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260164u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_260168:
    // 0x260168: 0x0  nop
    ctx->pc = 0x260168u;
    // NOP
label_26016c:
    // 0x26016c: 0x0  nop
    ctx->pc = 0x26016cu;
    // NOP
label_260170:
    // 0x260170: 0xa539  .word       0x0000A539                   # INVALID     $zero, $zero, -0x5AC7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260170u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x260170 raw=0x0000A539"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_260174:
    // 0x260174: 0xe1b0  tge         $zero, $zero, 902
    ctx->pc = 0x260174u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260178:
    // 0x260178: 0x0  nop
    ctx->pc = 0x260178u;
    // NOP
label_26017c:
    // 0x26017c: 0x0  nop
    ctx->pc = 0x26017cu;
    // NOP
label_260180:
    // 0x260180: 0xa556  .word       0x0000A556                   # dsrlv       $s4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260180u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_260184:
    // 0x260184: 0xc400  sll         $t8, $zero, 16
    ctx->pc = 0x260184u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_260188:
    // 0x260188: 0x0  nop
    ctx->pc = 0x260188u;
    // NOP
label_26018c:
    // 0x26018c: 0x0  nop
    ctx->pc = 0x26018cu;
    // NOP
label_260190:
    // 0x260190: 0xa56f  .word       0x0000A56F                   # dsubu       $s4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260190u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_260194:
    // 0x260194: 0x11490  .word       0x00011490                   # mfhi        $v0 # 00010480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260194u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_260198:
    // 0x260198: 0x0  nop
    ctx->pc = 0x260198u;
    // NOP
label_26019c:
    // 0x26019c: 0x0  nop
    ctx->pc = 0x26019cu;
    // NOP
label_2601a0:
    // 0x2601a0: 0xa592  .word       0x0000A592                   # mflo        $s4 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2601a0u;
    SET_GPR_U64(ctx, 20, ctx->lo);
label_2601a4:
    // 0x2601a4: 0x11580  sll         $v0, $at, 22
    ctx->pc = 0x2601a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), 22));
label_2601a8:
    // 0x2601a8: 0x0  nop
    ctx->pc = 0x2601a8u;
    // NOP
label_2601ac:
    // 0x2601ac: 0x0  nop
    ctx->pc = 0x2601acu;
    // NOP
label_2601b0:
    // 0x2601b0: 0xa5b5  .word       0x0000A5B5                   # INVALID     $zero, $zero, -0x5A4B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2601b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2601B0 raw=0x0000A5B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2601b4:
    // 0x2601b4: 0x105c0  sll         $zero, $at, 23
    ctx->pc = 0x2601b4u;
    
label_2601b8:
    // 0x2601b8: 0x0  nop
    ctx->pc = 0x2601b8u;
    // NOP
label_2601bc:
    // 0x2601bc: 0x0  nop
    ctx->pc = 0x2601bcu;
    // NOP
label_2601c0:
    // 0x2601c0: 0xa5d6  .word       0x0000A5D6                   # dsrlv       $s4, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2601c0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2601c4:
    // 0x2601c4: 0x103c0  sll         $zero, $at, 15
    ctx->pc = 0x2601c4u;
    
label_2601c8:
    // 0x2601c8: 0x0  nop
    ctx->pc = 0x2601c8u;
    // NOP
label_2601cc:
    // 0x2601cc: 0x0  nop
    ctx->pc = 0x2601ccu;
    // NOP
label_2601d0:
    // 0x2601d0: 0xa5f7  .word       0x0000A5F7                   # INVALID     $zero, $zero, -0x5A09 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2601d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2601D0 raw=0x0000A5F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2601d4:
    // 0x2601d4: 0x10020  add         $zero, $zero, $at
    ctx->pc = 0x2601d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2601d8:
    // 0x2601d8: 0x0  nop
    ctx->pc = 0x2601d8u;
    // NOP
label_2601dc:
    // 0x2601dc: 0x0  nop
    ctx->pc = 0x2601dcu;
    // NOP
label_2601e0:
    // 0x2601e0: 0xa618  .word       0x0000A618                   # mult        $s4, $zero, $zero # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2601e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
label_2601e4:
    // 0x2601e4: 0x11000  sll         $v0, $at, 0
    ctx->pc = 0x2601e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
label_2601e8:
    // 0x2601e8: 0x0  nop
    ctx->pc = 0x2601e8u;
    // NOP
label_2601ec:
    // 0x2601ec: 0x0  nop
    ctx->pc = 0x2601ecu;
    // NOP
label_2601f0:
    // 0x2601f0: 0xa63a  dsrl        $s4, $zero, 24
    ctx->pc = 0x2601f0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) >> 24);
label_2601f4:
    // 0x2601f4: 0xe4c0  sll         $gp, $zero, 19
    ctx->pc = 0x2601f4u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_2601f8:
    // 0x2601f8: 0x0  nop
    ctx->pc = 0x2601f8u;
    // NOP
label_2601fc:
    // 0x2601fc: 0x0  nop
    ctx->pc = 0x2601fcu;
    // NOP
label_260200:
    // 0x260200: 0xa657  .word       0x0000A657                   # dsrav       $s4, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260200u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_260204:
    // 0x260204: 0x127e0  .word       0x000127E0                   # add         $a0, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260204u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_260208:
    // 0x260208: 0x0  nop
    ctx->pc = 0x260208u;
    // NOP
label_26020c:
    // 0x26020c: 0x0  nop
    ctx->pc = 0x26020cu;
    // NOP
label_260210:
    // 0x260210: 0xa67c  dsll32      $s4, $zero, 25
    ctx->pc = 0x260210u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) << (32 + 25));
label_260214:
    // 0x260214: 0x14fe0  .word       0x00014FE0                   # add         $t1, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260214u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_260218:
    // 0x260218: 0x0  nop
    ctx->pc = 0x260218u;
    // NOP
label_26021c:
    // 0x26021c: 0x0  nop
    ctx->pc = 0x26021cu;
    // NOP
label_260220:
    // 0x260220: 0xa6a6  .word       0x0000A6A6                   # xor         $s4, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260220u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_260224:
    // 0x260224: 0x10600  sll         $zero, $at, 24
    ctx->pc = 0x260224u;
    
label_260228:
    // 0x260228: 0x0  nop
    ctx->pc = 0x260228u;
    // NOP
label_26022c:
    // 0x26022c: 0x0  nop
    ctx->pc = 0x26022cu;
    // NOP
label_260230:
    // 0x260230: 0xa6c7  .word       0x0000A6C7                   # srav        $s4, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260230u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_260234:
    // 0x260234: 0x8dc0  sll         $s1, $zero, 23
    ctx->pc = 0x260234u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_260238:
    // 0x260238: 0x0  nop
    ctx->pc = 0x260238u;
    // NOP
label_26023c:
    // 0x26023c: 0x0  nop
    ctx->pc = 0x26023cu;
    // NOP
label_260240:
    // 0x260240: 0xa6d9  .word       0x0000A6D9                   # multu       $zero, $zero # 0000A6C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260240u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
label_260244:
    // 0x260244: 0x11000  sll         $v0, $at, 0
    ctx->pc = 0x260244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
label_260248:
    // 0x260248: 0x0  nop
    ctx->pc = 0x260248u;
    // NOP
label_26024c:
    // 0x26024c: 0x0  nop
    ctx->pc = 0x26024cu;
    // NOP
label_260250:
    // 0x260250: 0xa6fb  dsra        $s4, $zero, 27
    ctx->pc = 0x260250u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 0) >> 27);
label_260254:
    // 0x260254: 0x4fc0  sll         $t1, $zero, 31
    ctx->pc = 0x260254u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_260258:
    // 0x260258: 0x0  nop
    ctx->pc = 0x260258u;
    // NOP
label_26025c:
    // 0x26025c: 0x0  nop
    ctx->pc = 0x26025cu;
    // NOP
label_260260:
    // 0x260260: 0xa705  .word       0x0000A705                   # INVALID     $zero, $zero, -0x58FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260260u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x260260 raw=0x0000A705"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_260264:
    // 0x260264: 0x10570  tge         $zero, $at, 21
    ctx->pc = 0x260264u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_260268:
    // 0x260268: 0x0  nop
    ctx->pc = 0x260268u;
    // NOP
label_26026c:
    // 0x26026c: 0x0  nop
    ctx->pc = 0x26026cu;
    // NOP
label_260270:
    // 0x260270: 0xa726  .word       0x0000A726                   # xor         $s4, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260270u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_260274:
    // 0x260274: 0x15c50  .word       0x00015C50                   # mfhi        $t3 # 00010440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260274u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_260278:
    // 0x260278: 0x0  nop
    ctx->pc = 0x260278u;
    // NOP
label_26027c:
    // 0x26027c: 0x0  nop
    ctx->pc = 0x26027cu;
    // NOP
label_260280:
    // 0x260280: 0xa752  .word       0x0000A752                   # mflo        $s4 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260280u;
    SET_GPR_U64(ctx, 20, ctx->lo);
label_260284:
    // 0x260284: 0x13a60  .word       0x00013A60                   # add         $a3, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260284u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_260288:
    // 0x260288: 0x0  nop
    ctx->pc = 0x260288u;
    // NOP
label_26028c:
    // 0x26028c: 0x0  nop
    ctx->pc = 0x26028cu;
    // NOP
label_260290:
    // 0x260290: 0xa77a  dsrl        $s4, $zero, 29
    ctx->pc = 0x260290u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) >> 29);
label_260294:
    // 0x260294: 0xbe40  sll         $s7, $zero, 25
    ctx->pc = 0x260294u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_260298:
    // 0x260298: 0x0  nop
    ctx->pc = 0x260298u;
    // NOP
label_26029c:
    // 0x26029c: 0x0  nop
    ctx->pc = 0x26029cu;
    // NOP
label_2602a0:
    // 0x2602a0: 0xa792  .word       0x0000A792                   # mflo        $s4 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2602a0u;
    SET_GPR_U64(ctx, 20, ctx->lo);
label_2602a4:
    // 0x2602a4: 0x10630  tge         $zero, $at, 24
    ctx->pc = 0x2602a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2602a8:
    // 0x2602a8: 0x0  nop
    ctx->pc = 0x2602a8u;
    // NOP
label_2602ac:
    // 0x2602ac: 0x0  nop
    ctx->pc = 0x2602acu;
    // NOP
label_2602b0:
    // 0x2602b0: 0xa7b3  tltu        $zero, $zero, 670
    ctx->pc = 0x2602b0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2602b4:
    // 0x2602b4: 0x7d80  sll         $t7, $zero, 22
    ctx->pc = 0x2602b4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_2602b8:
    // 0x2602b8: 0x0  nop
    ctx->pc = 0x2602b8u;
    // NOP
label_2602bc:
    // 0x2602bc: 0x0  nop
    ctx->pc = 0x2602bcu;
    // NOP
label_2602c0:
    // 0x2602c0: 0xa7c3  sra         $s4, $zero, 31
    ctx->pc = 0x2602c0u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 0), 31));
label_2602c4:
    // 0x2602c4: 0x15390  .word       0x00015390                   # mfhi        $t2 # 00010380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2602c4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_2602c8:
    // 0x2602c8: 0x0  nop
    ctx->pc = 0x2602c8u;
    // NOP
label_2602cc:
    // 0x2602cc: 0x0  nop
    ctx->pc = 0x2602ccu;
    // NOP
label_2602d0:
    // 0x2602d0: 0xa7ee  .word       0x0000A7EE                   # dsub        $s4, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2602d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, r); }
label_2602d4:
    // 0x2602d4: 0x64a0  .word       0x000064A0                   # add         $t4, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2602d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2602d8:
    // 0x2602d8: 0x0  nop
    ctx->pc = 0x2602d8u;
    // NOP
label_2602dc:
    // 0x2602dc: 0x0  nop
    ctx->pc = 0x2602dcu;
    // NOP
label_2602e0:
    // 0x2602e0: 0xa7fb  dsra        $s4, $zero, 31
    ctx->pc = 0x2602e0u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 0) >> 31);
label_2602e4:
    // 0x2602e4: 0x4be0  .word       0x00004BE0                   # add         $t1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2602e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2602e8:
    // 0x2602e8: 0x0  nop
    ctx->pc = 0x2602e8u;
    // NOP
label_2602ec:
    // 0x2602ec: 0x0  nop
    ctx->pc = 0x2602ecu;
    // NOP
label_2602f0:
    // 0x2602f0: 0xa805  .word       0x0000A805                   # INVALID     $zero, $zero, -0x57FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2602f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2602F0 raw=0x0000A805"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2602f4:
    // 0x2602f4: 0x5290  .word       0x00005290                   # mfhi        $t2 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2602f4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_2602f8:
    // 0x2602f8: 0x0  nop
    ctx->pc = 0x2602f8u;
    // NOP
label_2602fc:
    // 0x2602fc: 0x0  nop
    ctx->pc = 0x2602fcu;
    // NOP
label_260300:
    // 0x260300: 0xa810  mfhi        $s5
    ctx->pc = 0x260300u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_260304:
    // 0x260304: 0x5f00  sll         $t3, $zero, 28
    ctx->pc = 0x260304u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_260308:
    // 0x260308: 0x0  nop
    ctx->pc = 0x260308u;
    // NOP
label_26030c:
    // 0x26030c: 0x0  nop
    ctx->pc = 0x26030cu;
    // NOP
label_260310:
    // 0x260310: 0xa81c  .word       0x0000A81C                   # dmult       $zero, $zero # 0000A800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260310u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x260310 raw=0x0000A81C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_260314:
    // 0x260314: 0x68d0  .word       0x000068D0                   # mfhi        $t5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260314u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_260318:
    // 0x260318: 0x0  nop
    ctx->pc = 0x260318u;
    // NOP
label_26031c:
    // 0x26031c: 0x0  nop
    ctx->pc = 0x26031cu;
    // NOP
label_260320:
    // 0x260320: 0xa82a  slt         $s5, $zero, $zero
    ctx->pc = 0x260320u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_260324:
    // 0x260324: 0x6990  .word       0x00006990                   # mfhi        $t5 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260324u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_260328:
    // 0x260328: 0x0  nop
    ctx->pc = 0x260328u;
    // NOP
label_26032c:
    // 0x26032c: 0x0  nop
    ctx->pc = 0x26032cu;
    // NOP
label_260330:
    // 0x260330: 0xa838  dsll        $s5, $zero, 0
    ctx->pc = 0x260330u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) << 0);
label_260334:
    // 0x260334: 0x4d50  .word       0x00004D50                   # mfhi        $t1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260334u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_260338:
    // 0x260338: 0x0  nop
    ctx->pc = 0x260338u;
    // NOP
label_26033c:
    // 0x26033c: 0x0  nop
    ctx->pc = 0x26033cu;
    // NOP
label_260340:
    // 0x260340: 0xa842  srl         $s5, $zero, 1
    ctx->pc = 0x260340u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 0), 1));
label_260344:
    // 0x260344: 0x5ec0  sll         $t3, $zero, 27
    ctx->pc = 0x260344u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_260348:
    // 0x260348: 0x0  nop
    ctx->pc = 0x260348u;
    // NOP
label_26034c:
    // 0x26034c: 0x0  nop
    ctx->pc = 0x26034cu;
    // NOP
label_260350:
    // 0x260350: 0xa84e  .word       0x0000A84E                   # INVALID     $zero, $zero, -0x57B2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260350u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x260350 raw=0x0000A84E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_260354:
    // 0x260354: 0x6090  .word       0x00006090                   # mfhi        $t4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260354u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_260358:
    // 0x260358: 0x0  nop
    ctx->pc = 0x260358u;
    // NOP
label_26035c:
    // 0x26035c: 0x0  nop
    ctx->pc = 0x26035cu;
    // NOP
label_260360:
    // 0x260360: 0xa85b  .word       0x0000A85B                   # divu        $s5, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260360u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_260364:
    // 0x260364: 0x54e0  .word       0x000054E0                   # add         $t2, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260364u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_260368:
    // 0x260368: 0x0  nop
    ctx->pc = 0x260368u;
    // NOP
label_26036c:
    // 0x26036c: 0x0  nop
    ctx->pc = 0x26036cu;
    // NOP
label_260370:
    // 0x260370: 0xa866  .word       0x0000A866                   # xor         $s5, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260370u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_260374:
    // 0x260374: 0x5660  .word       0x00005660                   # add         $t2, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260374u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_260378:
    // 0x260378: 0x0  nop
    ctx->pc = 0x260378u;
    // NOP
label_26037c:
    // 0x26037c: 0x0  nop
    ctx->pc = 0x26037cu;
    // NOP
label_260380:
    // 0x260380: 0xa871  tgeu        $zero, $zero, 673
    ctx->pc = 0x260380u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260384:
    // 0x260384: 0x5d70  tge         $zero, $zero, 373
    ctx->pc = 0x260384u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260388:
    // 0x260388: 0x0  nop
    ctx->pc = 0x260388u;
    // NOP
label_26038c:
    // 0x26038c: 0x0  nop
    ctx->pc = 0x26038cu;
    // NOP
label_260390:
    // 0x260390: 0xa87d  .word       0x0000A87D                   # INVALID     $zero, $zero, -0x5783 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260390u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x260390 raw=0x0000A87D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_260394:
    // 0x260394: 0x54c0  sll         $t2, $zero, 19
    ctx->pc = 0x260394u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_260398:
    // 0x260398: 0x0  nop
    ctx->pc = 0x260398u;
    // NOP
label_26039c:
    // 0x26039c: 0x0  nop
    ctx->pc = 0x26039cu;
    // NOP
label_2603a0:
    // 0x2603a0: 0xa888  .word       0x0000A888                   # jr          $zero # 0000A880 <InstrIdType: CPU_SPECIAL>
label_2603a4:
    if (ctx->pc == 0x2603A4u) {
        ctx->pc = 0x2603A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2603A0u;
        // 0x2603a4: 0x4720  .word       0x00004720                   # add         $t0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2603A8u;
        goto label_2603a8;
    }
    ctx->pc = 0x2603A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2603A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2603A0u;
        // 0x2603a4: 0x4720  .word       0x00004720                   # add         $t0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2603A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2603A8u;
label_2603a8:
    // 0x2603a8: 0x0  nop
    ctx->pc = 0x2603a8u;
    // NOP
label_2603ac:
    // 0x2603ac: 0x0  nop
    ctx->pc = 0x2603acu;
    // NOP
label_2603b0:
    // 0x2603b0: 0xa891  .word       0x0000A891                   # mthi        $zero # 0000A880 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2603b0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2603b4:
    // 0x2603b4: 0x5f50  .word       0x00005F50                   # mfhi        $t3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2603b4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2603b8:
    // 0x2603b8: 0x0  nop
    ctx->pc = 0x2603b8u;
    // NOP
label_2603bc:
    // 0x2603bc: 0x0  nop
    ctx->pc = 0x2603bcu;
    // NOP
label_2603c0:
    // 0x2603c0: 0xa89d  .word       0x0000A89D                   # dmultu      $zero, $zero # 0000A880 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2603c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2603C0 raw=0x0000A89D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2603c4:
    // 0x2603c4: 0x41c0  sll         $t0, $zero, 7
    ctx->pc = 0x2603c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_2603c8:
    // 0x2603c8: 0x0  nop
    ctx->pc = 0x2603c8u;
    // NOP
label_2603cc:
    // 0x2603cc: 0x0  nop
    ctx->pc = 0x2603ccu;
    // NOP
label_2603d0:
    // 0x2603d0: 0xa8a6  .word       0x0000A8A6                   # xor         $s5, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2603d0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2603d4:
    // 0x2603d4: 0x5c50  .word       0x00005C50                   # mfhi        $t3 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2603d4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2603d8:
    // 0x2603d8: 0x0  nop
    ctx->pc = 0x2603d8u;
    // NOP
label_2603dc:
    // 0x2603dc: 0x0  nop
    ctx->pc = 0x2603dcu;
    // NOP
label_2603e0:
    // 0x2603e0: 0xa8b2  tlt         $zero, $zero, 674
    ctx->pc = 0x2603e0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2603e4:
    // 0x2603e4: 0x4910  .word       0x00004910                   # mfhi        $t1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2603e4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_2603e8:
    // 0x2603e8: 0x0  nop
    ctx->pc = 0x2603e8u;
    // NOP
label_2603ec:
    // 0x2603ec: 0x0  nop
    ctx->pc = 0x2603ecu;
    // NOP
label_2603f0:
    // 0x2603f0: 0xa8bc  dsll32      $s5, $zero, 2
    ctx->pc = 0x2603f0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) << (32 + 2));
label_2603f4:
    // 0x2603f4: 0x4e90  .word       0x00004E90                   # mfhi        $t1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2603f4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_2603f8:
    // 0x2603f8: 0x0  nop
    ctx->pc = 0x2603f8u;
    // NOP
label_2603fc:
    // 0x2603fc: 0x0  nop
    ctx->pc = 0x2603fcu;
    // NOP
label_260400:
    // 0x260400: 0xa8c6  .word       0x0000A8C6                   # srlv        $s5, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260400u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_260404:
    // 0x260404: 0x42a0  .word       0x000042A0                   # add         $t0, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260404u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_260408:
    // 0x260408: 0x0  nop
    ctx->pc = 0x260408u;
    // NOP
label_26040c:
    // 0x26040c: 0x0  nop
    ctx->pc = 0x26040cu;
    // NOP
label_260410:
    // 0x260410: 0xa8cf  .word       0x0000A8CF                   # sync # 0000A800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260410u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_260414:
    // 0x260414: 0x51b0  tge         $zero, $zero, 326
    ctx->pc = 0x260414u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260418:
    // 0x260418: 0x0  nop
    ctx->pc = 0x260418u;
    // NOP
label_26041c:
    // 0x26041c: 0x0  nop
    ctx->pc = 0x26041cu;
    // NOP
label_260420:
    // 0x260420: 0xa8da  .word       0x0000A8DA                   # div         $s5, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260420u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_260424:
    // 0x260424: 0x5670  tge         $zero, $zero, 345
    ctx->pc = 0x260424u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260428:
    // 0x260428: 0x0  nop
    ctx->pc = 0x260428u;
    // NOP
label_26042c:
    // 0x26042c: 0x0  nop
    ctx->pc = 0x26042cu;
    // NOP
label_260430:
    // 0x260430: 0xa8e5  .word       0x0000A8E5                   # move        $s5, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260430u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_260434:
    // 0x260434: 0x4a70  tge         $zero, $zero, 297
    ctx->pc = 0x260434u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260438:
    // 0x260438: 0x0  nop
    ctx->pc = 0x260438u;
    // NOP
label_26043c:
    // 0x26043c: 0x0  nop
    ctx->pc = 0x26043cu;
    // NOP
label_260440:
    // 0x260440: 0xa8ef  .word       0x0000A8EF                   # dsubu       $s5, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260440u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_260444:
    // 0x260444: 0x4750  .word       0x00004750                   # mfhi        $t0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260444u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_260448:
    // 0x260448: 0x0  nop
    ctx->pc = 0x260448u;
    // NOP
label_26044c:
    // 0x26044c: 0x0  nop
    ctx->pc = 0x26044cu;
    // NOP
label_260450:
    // 0x260450: 0xa8f8  dsll        $s5, $zero, 3
    ctx->pc = 0x260450u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) << 3);
label_260454:
    // 0x260454: 0x2750  .word       0x00002750                   # mfhi        $a0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260454u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_260458:
    // 0x260458: 0x0  nop
    ctx->pc = 0x260458u;
    // NOP
label_26045c:
    // 0x26045c: 0x0  nop
    ctx->pc = 0x26045cu;
    // NOP
label_260460:
    // 0x260460: 0xa8fd  .word       0x0000A8FD                   # INVALID     $zero, $zero, -0x5703 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260460u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x260460 raw=0x0000A8FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_260464:
    // 0x260464: 0x4320  .word       0x00004320                   # add         $t0, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260464u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_260468:
    // 0x260468: 0x0  nop
    ctx->pc = 0x260468u;
    // NOP
label_26046c:
    // 0x26046c: 0x0  nop
    ctx->pc = 0x26046cu;
    // NOP
label_260470:
    // 0x260470: 0xa906  .word       0x0000A906                   # srlv        $s5, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260470u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_260474:
    // 0x260474: 0x6390  .word       0x00006390                   # mfhi        $t4 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260474u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_260478:
    // 0x260478: 0x0  nop
    ctx->pc = 0x260478u;
    // NOP
label_26047c:
    // 0x26047c: 0x0  nop
    ctx->pc = 0x26047cu;
    // NOP
label_260480:
    // 0x260480: 0xa913  .word       0x0000A913                   # mtlo        $zero # 0000A900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260480u;
    ctx->lo = GPR_U64(ctx, 0);
label_260484:
    // 0x260484: 0x4820  add         $t1, $zero, $zero
    ctx->pc = 0x260484u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_260488:
    // 0x260488: 0x0  nop
    ctx->pc = 0x260488u;
    // NOP
label_26048c:
    // 0x26048c: 0x0  nop
    ctx->pc = 0x26048cu;
    // NOP
label_260490:
    // 0x260490: 0xa91d  .word       0x0000A91D                   # dmultu      $zero, $zero # 0000A900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260490u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x260490 raw=0x0000A91D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_260494:
    // 0x260494: 0x60c0  sll         $t4, $zero, 3
    ctx->pc = 0x260494u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_260498:
    // 0x260498: 0x0  nop
    ctx->pc = 0x260498u;
    // NOP
label_26049c:
    // 0x26049c: 0x0  nop
    ctx->pc = 0x26049cu;
    // NOP
label_2604a0:
    // 0x2604a0: 0xa92a  .word       0x0000A92A                   # slt         $s5, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2604a0u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2604a4:
    // 0x2604a4: 0x6070  tge         $zero, $zero, 385
    ctx->pc = 0x2604a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2604a8:
    // 0x2604a8: 0x0  nop
    ctx->pc = 0x2604a8u;
    // NOP
label_2604ac:
    // 0x2604ac: 0x0  nop
    ctx->pc = 0x2604acu;
    // NOP
label_2604b0:
    // 0x2604b0: 0xa937  .word       0x0000A937                   # INVALID     $zero, $zero, -0x56C9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2604b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2604B0 raw=0x0000A937"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2604b4:
    // 0x2604b4: 0x5d20  .word       0x00005D20                   # add         $t3, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2604b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2604b8:
    // 0x2604b8: 0x0  nop
    ctx->pc = 0x2604b8u;
    // NOP
label_2604bc:
    // 0x2604bc: 0x0  nop
    ctx->pc = 0x2604bcu;
    // NOP
label_2604c0:
    // 0x2604c0: 0xa943  sra         $s5, $zero, 5
    ctx->pc = 0x2604c0u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 0), 5));
label_2604c4:
    // 0x2604c4: 0x4ce0  .word       0x00004CE0                   # add         $t1, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2604c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2604c8:
    // 0x2604c8: 0x0  nop
    ctx->pc = 0x2604c8u;
    // NOP
label_2604cc:
    // 0x2604cc: 0x0  nop
    ctx->pc = 0x2604ccu;
    // NOP
label_2604d0:
    // 0x2604d0: 0xa94d  break       0, 677
    ctx->pc = 0x2604d0u;
    runtime->handleBreak(rdram, ctx);
label_2604d4:
    // 0x2604d4: 0x5600  sll         $t2, $zero, 24
    ctx->pc = 0x2604d4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
    ctx->pc = 0x2604d8u;
    return;
}
