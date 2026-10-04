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

// Function: FUN_001d49b0
// Address: 0x1d49b0 - 0x254d4c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_001d49b0_part122(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x20fb00u: goto label_20fb00;
        case 0x20fb04u: goto label_20fb04;
        case 0x20fb08u: goto label_20fb08;
        case 0x20fb0cu: goto label_20fb0c;
        case 0x20fb10u: goto label_20fb10;
        case 0x20fb14u: goto label_20fb14;
        case 0x20fb18u: goto label_20fb18;
        case 0x20fb1cu: goto label_20fb1c;
        case 0x20fb20u: goto label_20fb20;
        case 0x20fb24u: goto label_20fb24;
        case 0x20fb28u: goto label_20fb28;
        case 0x20fb2cu: goto label_20fb2c;
        case 0x20fb30u: goto label_20fb30;
        case 0x20fb34u: goto label_20fb34;
        case 0x20fb38u: goto label_20fb38;
        case 0x20fb3cu: goto label_20fb3c;
        case 0x20fb40u: goto label_20fb40;
        case 0x20fb44u: goto label_20fb44;
        case 0x20fb48u: goto label_20fb48;
        case 0x20fb4cu: goto label_20fb4c;
        case 0x20fb50u: goto label_20fb50;
        case 0x20fb54u: goto label_20fb54;
        case 0x20fb58u: goto label_20fb58;
        case 0x20fb5cu: goto label_20fb5c;
        case 0x20fb60u: goto label_20fb60;
        case 0x20fb64u: goto label_20fb64;
        case 0x20fb68u: goto label_20fb68;
        case 0x20fb6cu: goto label_20fb6c;
        case 0x20fb70u: goto label_20fb70;
        case 0x20fb74u: goto label_20fb74;
        case 0x20fb78u: goto label_20fb78;
        case 0x20fb7cu: goto label_20fb7c;
        case 0x20fb80u: goto label_20fb80;
        case 0x20fb84u: goto label_20fb84;
        case 0x20fb88u: goto label_20fb88;
        case 0x20fb8cu: goto label_20fb8c;
        case 0x20fb90u: goto label_20fb90;
        case 0x20fb94u: goto label_20fb94;
        case 0x20fb98u: goto label_20fb98;
        case 0x20fb9cu: goto label_20fb9c;
        case 0x20fba0u: goto label_20fba0;
        case 0x20fba4u: goto label_20fba4;
        case 0x20fba8u: goto label_20fba8;
        case 0x20fbacu: goto label_20fbac;
        case 0x20fbb0u: goto label_20fbb0;
        case 0x20fbb4u: goto label_20fbb4;
        case 0x20fbb8u: goto label_20fbb8;
        case 0x20fbbcu: goto label_20fbbc;
        case 0x20fbc0u: goto label_20fbc0;
        case 0x20fbc4u: goto label_20fbc4;
        case 0x20fbc8u: goto label_20fbc8;
        case 0x20fbccu: goto label_20fbcc;
        case 0x20fbd0u: goto label_20fbd0;
        case 0x20fbd4u: goto label_20fbd4;
        case 0x20fbd8u: goto label_20fbd8;
        case 0x20fbdcu: goto label_20fbdc;
        case 0x20fbe0u: goto label_20fbe0;
        case 0x20fbe4u: goto label_20fbe4;
        case 0x20fbe8u: goto label_20fbe8;
        case 0x20fbecu: goto label_20fbec;
        case 0x20fbf0u: goto label_20fbf0;
        case 0x20fbf4u: goto label_20fbf4;
        case 0x20fbf8u: goto label_20fbf8;
        case 0x20fbfcu: goto label_20fbfc;
        case 0x20fc00u: goto label_20fc00;
        case 0x20fc04u: goto label_20fc04;
        case 0x20fc08u: goto label_20fc08;
        case 0x20fc0cu: goto label_20fc0c;
        case 0x20fc10u: goto label_20fc10;
        case 0x20fc14u: goto label_20fc14;
        case 0x20fc18u: goto label_20fc18;
        case 0x20fc1cu: goto label_20fc1c;
        case 0x20fc20u: goto label_20fc20;
        case 0x20fc24u: goto label_20fc24;
        case 0x20fc28u: goto label_20fc28;
        case 0x20fc2cu: goto label_20fc2c;
        case 0x20fc30u: goto label_20fc30;
        case 0x20fc34u: goto label_20fc34;
        case 0x20fc38u: goto label_20fc38;
        case 0x20fc3cu: goto label_20fc3c;
        case 0x20fc40u: goto label_20fc40;
        case 0x20fc44u: goto label_20fc44;
        case 0x20fc48u: goto label_20fc48;
        case 0x20fc4cu: goto label_20fc4c;
        case 0x20fc50u: goto label_20fc50;
        case 0x20fc54u: goto label_20fc54;
        case 0x20fc58u: goto label_20fc58;
        case 0x20fc5cu: goto label_20fc5c;
        case 0x20fc60u: goto label_20fc60;
        case 0x20fc64u: goto label_20fc64;
        case 0x20fc68u: goto label_20fc68;
        case 0x20fc6cu: goto label_20fc6c;
        case 0x20fc70u: goto label_20fc70;
        case 0x20fc74u: goto label_20fc74;
        case 0x20fc78u: goto label_20fc78;
        case 0x20fc7cu: goto label_20fc7c;
        case 0x20fc80u: goto label_20fc80;
        case 0x20fc84u: goto label_20fc84;
        case 0x20fc88u: goto label_20fc88;
        case 0x20fc8cu: goto label_20fc8c;
        case 0x20fc90u: goto label_20fc90;
        case 0x20fc94u: goto label_20fc94;
        case 0x20fc98u: goto label_20fc98;
        case 0x20fc9cu: goto label_20fc9c;
        case 0x20fca0u: goto label_20fca0;
        case 0x20fca4u: goto label_20fca4;
        case 0x20fca8u: goto label_20fca8;
        case 0x20fcacu: goto label_20fcac;
        case 0x20fcb0u: goto label_20fcb0;
        case 0x20fcb4u: goto label_20fcb4;
        case 0x20fcb8u: goto label_20fcb8;
        case 0x20fcbcu: goto label_20fcbc;
        case 0x20fcc0u: goto label_20fcc0;
        case 0x20fcc4u: goto label_20fcc4;
        case 0x20fcc8u: goto label_20fcc8;
        case 0x20fcccu: goto label_20fccc;
        case 0x20fcd0u: goto label_20fcd0;
        case 0x20fcd4u: goto label_20fcd4;
        case 0x20fcd8u: goto label_20fcd8;
        case 0x20fcdcu: goto label_20fcdc;
        case 0x20fce0u: goto label_20fce0;
        case 0x20fce4u: goto label_20fce4;
        case 0x20fce8u: goto label_20fce8;
        case 0x20fcecu: goto label_20fcec;
        case 0x20fcf0u: goto label_20fcf0;
        case 0x20fcf4u: goto label_20fcf4;
        case 0x20fcf8u: goto label_20fcf8;
        case 0x20fcfcu: goto label_20fcfc;
        case 0x20fd00u: goto label_20fd00;
        case 0x20fd04u: goto label_20fd04;
        case 0x20fd08u: goto label_20fd08;
        case 0x20fd0cu: goto label_20fd0c;
        case 0x20fd10u: goto label_20fd10;
        case 0x20fd14u: goto label_20fd14;
        case 0x20fd18u: goto label_20fd18;
        case 0x20fd1cu: goto label_20fd1c;
        case 0x20fd20u: goto label_20fd20;
        case 0x20fd24u: goto label_20fd24;
        case 0x20fd28u: goto label_20fd28;
        case 0x20fd2cu: goto label_20fd2c;
        case 0x20fd30u: goto label_20fd30;
        case 0x20fd34u: goto label_20fd34;
        case 0x20fd38u: goto label_20fd38;
        case 0x20fd3cu: goto label_20fd3c;
        case 0x20fd40u: goto label_20fd40;
        case 0x20fd44u: goto label_20fd44;
        case 0x20fd48u: goto label_20fd48;
        case 0x20fd4cu: goto label_20fd4c;
        case 0x20fd50u: goto label_20fd50;
        case 0x20fd54u: goto label_20fd54;
        case 0x20fd58u: goto label_20fd58;
        case 0x20fd5cu: goto label_20fd5c;
        case 0x20fd60u: goto label_20fd60;
        case 0x20fd64u: goto label_20fd64;
        case 0x20fd68u: goto label_20fd68;
        case 0x20fd6cu: goto label_20fd6c;
        case 0x20fd70u: goto label_20fd70;
        case 0x20fd74u: goto label_20fd74;
        case 0x20fd78u: goto label_20fd78;
        case 0x20fd7cu: goto label_20fd7c;
        case 0x20fd80u: goto label_20fd80;
        case 0x20fd84u: goto label_20fd84;
        case 0x20fd88u: goto label_20fd88;
        case 0x20fd8cu: goto label_20fd8c;
        case 0x20fd90u: goto label_20fd90;
        case 0x20fd94u: goto label_20fd94;
        case 0x20fd98u: goto label_20fd98;
        case 0x20fd9cu: goto label_20fd9c;
        case 0x20fda0u: goto label_20fda0;
        case 0x20fda4u: goto label_20fda4;
        case 0x20fda8u: goto label_20fda8;
        case 0x20fdacu: goto label_20fdac;
        case 0x20fdb0u: goto label_20fdb0;
        case 0x20fdb4u: goto label_20fdb4;
        case 0x20fdb8u: goto label_20fdb8;
        case 0x20fdbcu: goto label_20fdbc;
        case 0x20fdc0u: goto label_20fdc0;
        case 0x20fdc4u: goto label_20fdc4;
        case 0x20fdc8u: goto label_20fdc8;
        case 0x20fdccu: goto label_20fdcc;
        case 0x20fdd0u: goto label_20fdd0;
        case 0x20fdd4u: goto label_20fdd4;
        case 0x20fdd8u: goto label_20fdd8;
        case 0x20fddcu: goto label_20fddc;
        case 0x20fde0u: goto label_20fde0;
        case 0x20fde4u: goto label_20fde4;
        case 0x20fde8u: goto label_20fde8;
        case 0x20fdecu: goto label_20fdec;
        case 0x20fdf0u: goto label_20fdf0;
        case 0x20fdf4u: goto label_20fdf4;
        case 0x20fdf8u: goto label_20fdf8;
        case 0x20fdfcu: goto label_20fdfc;
        case 0x20fe00u: goto label_20fe00;
        case 0x20fe04u: goto label_20fe04;
        case 0x20fe08u: goto label_20fe08;
        case 0x20fe0cu: goto label_20fe0c;
        case 0x20fe10u: goto label_20fe10;
        case 0x20fe14u: goto label_20fe14;
        case 0x20fe18u: goto label_20fe18;
        case 0x20fe1cu: goto label_20fe1c;
        case 0x20fe20u: goto label_20fe20;
        case 0x20fe24u: goto label_20fe24;
        case 0x20fe28u: goto label_20fe28;
        case 0x20fe2cu: goto label_20fe2c;
        case 0x20fe30u: goto label_20fe30;
        case 0x20fe34u: goto label_20fe34;
        case 0x20fe38u: goto label_20fe38;
        case 0x20fe3cu: goto label_20fe3c;
        case 0x20fe40u: goto label_20fe40;
        case 0x20fe44u: goto label_20fe44;
        case 0x20fe48u: goto label_20fe48;
        case 0x20fe4cu: goto label_20fe4c;
        case 0x20fe50u: goto label_20fe50;
        case 0x20fe54u: goto label_20fe54;
        case 0x20fe58u: goto label_20fe58;
        case 0x20fe5cu: goto label_20fe5c;
        case 0x20fe60u: goto label_20fe60;
        case 0x20fe64u: goto label_20fe64;
        case 0x20fe68u: goto label_20fe68;
        case 0x20fe6cu: goto label_20fe6c;
        case 0x20fe70u: goto label_20fe70;
        case 0x20fe74u: goto label_20fe74;
        case 0x20fe78u: goto label_20fe78;
        case 0x20fe7cu: goto label_20fe7c;
        case 0x20fe80u: goto label_20fe80;
        case 0x20fe84u: goto label_20fe84;
        case 0x20fe88u: goto label_20fe88;
        case 0x20fe8cu: goto label_20fe8c;
        case 0x20fe90u: goto label_20fe90;
        case 0x20fe94u: goto label_20fe94;
        case 0x20fe98u: goto label_20fe98;
        case 0x20fe9cu: goto label_20fe9c;
        case 0x20fea0u: goto label_20fea0;
        case 0x20fea4u: goto label_20fea4;
        case 0x20fea8u: goto label_20fea8;
        case 0x20feacu: goto label_20feac;
        case 0x20feb0u: goto label_20feb0;
        case 0x20feb4u: goto label_20feb4;
        case 0x20feb8u: goto label_20feb8;
        case 0x20febcu: goto label_20febc;
        case 0x20fec0u: goto label_20fec0;
        case 0x20fec4u: goto label_20fec4;
        case 0x20fec8u: goto label_20fec8;
        case 0x20feccu: goto label_20fecc;
        case 0x20fed0u: goto label_20fed0;
        case 0x20fed4u: goto label_20fed4;
        case 0x20fed8u: goto label_20fed8;
        case 0x20fedcu: goto label_20fedc;
        case 0x20fee0u: goto label_20fee0;
        case 0x20fee4u: goto label_20fee4;
        case 0x20fee8u: goto label_20fee8;
        case 0x20feecu: goto label_20feec;
        case 0x20fef0u: goto label_20fef0;
        case 0x20fef4u: goto label_20fef4;
        case 0x20fef8u: goto label_20fef8;
        case 0x20fefcu: goto label_20fefc;
        case 0x20ff00u: goto label_20ff00;
        case 0x20ff04u: goto label_20ff04;
        case 0x20ff08u: goto label_20ff08;
        case 0x20ff0cu: goto label_20ff0c;
        case 0x20ff10u: goto label_20ff10;
        case 0x20ff14u: goto label_20ff14;
        case 0x20ff18u: goto label_20ff18;
        case 0x20ff1cu: goto label_20ff1c;
        case 0x20ff20u: goto label_20ff20;
        case 0x20ff24u: goto label_20ff24;
        case 0x20ff28u: goto label_20ff28;
        case 0x20ff2cu: goto label_20ff2c;
        case 0x20ff30u: goto label_20ff30;
        case 0x20ff34u: goto label_20ff34;
        case 0x20ff38u: goto label_20ff38;
        case 0x20ff3cu: goto label_20ff3c;
        case 0x20ff40u: goto label_20ff40;
        case 0x20ff44u: goto label_20ff44;
        case 0x20ff48u: goto label_20ff48;
        case 0x20ff4cu: goto label_20ff4c;
        case 0x20ff50u: goto label_20ff50;
        case 0x20ff54u: goto label_20ff54;
        case 0x20ff58u: goto label_20ff58;
        case 0x20ff5cu: goto label_20ff5c;
        case 0x20ff60u: goto label_20ff60;
        case 0x20ff64u: goto label_20ff64;
        case 0x20ff68u: goto label_20ff68;
        case 0x20ff6cu: goto label_20ff6c;
        case 0x20ff70u: goto label_20ff70;
        case 0x20ff74u: goto label_20ff74;
        case 0x20ff78u: goto label_20ff78;
        case 0x20ff7cu: goto label_20ff7c;
        case 0x20ff80u: goto label_20ff80;
        case 0x20ff84u: goto label_20ff84;
        case 0x20ff88u: goto label_20ff88;
        case 0x20ff8cu: goto label_20ff8c;
        case 0x20ff90u: goto label_20ff90;
        case 0x20ff94u: goto label_20ff94;
        case 0x20ff98u: goto label_20ff98;
        case 0x20ff9cu: goto label_20ff9c;
        case 0x20ffa0u: goto label_20ffa0;
        case 0x20ffa4u: goto label_20ffa4;
        case 0x20ffa8u: goto label_20ffa8;
        case 0x20ffacu: goto label_20ffac;
        case 0x20ffb0u: goto label_20ffb0;
        case 0x20ffb4u: goto label_20ffb4;
        case 0x20ffb8u: goto label_20ffb8;
        case 0x20ffbcu: goto label_20ffbc;
        case 0x20ffc0u: goto label_20ffc0;
        case 0x20ffc4u: goto label_20ffc4;
        case 0x20ffc8u: goto label_20ffc8;
        case 0x20ffccu: goto label_20ffcc;
        case 0x20ffd0u: goto label_20ffd0;
        case 0x20ffd4u: goto label_20ffd4;
        case 0x20ffd8u: goto label_20ffd8;
        case 0x20ffdcu: goto label_20ffdc;
        case 0x20ffe0u: goto label_20ffe0;
        case 0x20ffe4u: goto label_20ffe4;
        case 0x20ffe8u: goto label_20ffe8;
        case 0x20ffecu: goto label_20ffec;
        case 0x20fff0u: goto label_20fff0;
        case 0x20fff4u: goto label_20fff4;
        case 0x20fff8u: goto label_20fff8;
        case 0x20fffcu: goto label_20fffc;
        case 0x210000u: goto label_210000;
        case 0x210004u: goto label_210004;
        case 0x210008u: goto label_210008;
        case 0x21000cu: goto label_21000c;
        case 0x210010u: goto label_210010;
        case 0x210014u: goto label_210014;
        case 0x210018u: goto label_210018;
        case 0x21001cu: goto label_21001c;
        case 0x210020u: goto label_210020;
        case 0x210024u: goto label_210024;
        case 0x210028u: goto label_210028;
        case 0x21002cu: goto label_21002c;
        case 0x210030u: goto label_210030;
        case 0x210034u: goto label_210034;
        case 0x210038u: goto label_210038;
        case 0x21003cu: goto label_21003c;
        case 0x210040u: goto label_210040;
        case 0x210044u: goto label_210044;
        case 0x210048u: goto label_210048;
        case 0x21004cu: goto label_21004c;
        case 0x210050u: goto label_210050;
        case 0x210054u: goto label_210054;
        case 0x210058u: goto label_210058;
        case 0x21005cu: goto label_21005c;
        case 0x210060u: goto label_210060;
        case 0x210064u: goto label_210064;
        case 0x210068u: goto label_210068;
        case 0x21006cu: goto label_21006c;
        case 0x210070u: goto label_210070;
        case 0x210074u: goto label_210074;
        case 0x210078u: goto label_210078;
        case 0x21007cu: goto label_21007c;
        case 0x210080u: goto label_210080;
        case 0x210084u: goto label_210084;
        case 0x210088u: goto label_210088;
        case 0x21008cu: goto label_21008c;
        case 0x210090u: goto label_210090;
        case 0x210094u: goto label_210094;
        case 0x210098u: goto label_210098;
        case 0x21009cu: goto label_21009c;
        case 0x2100a0u: goto label_2100a0;
        case 0x2100a4u: goto label_2100a4;
        case 0x2100a8u: goto label_2100a8;
        case 0x2100acu: goto label_2100ac;
        case 0x2100b0u: goto label_2100b0;
        case 0x2100b4u: goto label_2100b4;
        case 0x2100b8u: goto label_2100b8;
        case 0x2100bcu: goto label_2100bc;
        case 0x2100c0u: goto label_2100c0;
        case 0x2100c4u: goto label_2100c4;
        case 0x2100c8u: goto label_2100c8;
        case 0x2100ccu: goto label_2100cc;
        case 0x2100d0u: goto label_2100d0;
        case 0x2100d4u: goto label_2100d4;
        case 0x2100d8u: goto label_2100d8;
        case 0x2100dcu: goto label_2100dc;
        case 0x2100e0u: goto label_2100e0;
        case 0x2100e4u: goto label_2100e4;
        case 0x2100e8u: goto label_2100e8;
        case 0x2100ecu: goto label_2100ec;
        case 0x2100f0u: goto label_2100f0;
        case 0x2100f4u: goto label_2100f4;
        case 0x2100f8u: goto label_2100f8;
        case 0x2100fcu: goto label_2100fc;
        case 0x210100u: goto label_210100;
        case 0x210104u: goto label_210104;
        case 0x210108u: goto label_210108;
        case 0x21010cu: goto label_21010c;
        case 0x210110u: goto label_210110;
        case 0x210114u: goto label_210114;
        case 0x210118u: goto label_210118;
        case 0x21011cu: goto label_21011c;
        case 0x210120u: goto label_210120;
        case 0x210124u: goto label_210124;
        case 0x210128u: goto label_210128;
        case 0x21012cu: goto label_21012c;
        case 0x210130u: goto label_210130;
        case 0x210134u: goto label_210134;
        case 0x210138u: goto label_210138;
        case 0x21013cu: goto label_21013c;
        case 0x210140u: goto label_210140;
        case 0x210144u: goto label_210144;
        case 0x210148u: goto label_210148;
        case 0x21014cu: goto label_21014c;
        case 0x210150u: goto label_210150;
        case 0x210154u: goto label_210154;
        case 0x210158u: goto label_210158;
        case 0x21015cu: goto label_21015c;
        case 0x210160u: goto label_210160;
        case 0x210164u: goto label_210164;
        case 0x210168u: goto label_210168;
        case 0x21016cu: goto label_21016c;
        case 0x210170u: goto label_210170;
        case 0x210174u: goto label_210174;
        case 0x210178u: goto label_210178;
        case 0x21017cu: goto label_21017c;
        case 0x210180u: goto label_210180;
        case 0x210184u: goto label_210184;
        case 0x210188u: goto label_210188;
        case 0x21018cu: goto label_21018c;
        case 0x210190u: goto label_210190;
        case 0x210194u: goto label_210194;
        case 0x210198u: goto label_210198;
        case 0x21019cu: goto label_21019c;
        case 0x2101a0u: goto label_2101a0;
        case 0x2101a4u: goto label_2101a4;
        case 0x2101a8u: goto label_2101a8;
        case 0x2101acu: goto label_2101ac;
        case 0x2101b0u: goto label_2101b0;
        case 0x2101b4u: goto label_2101b4;
        case 0x2101b8u: goto label_2101b8;
        case 0x2101bcu: goto label_2101bc;
        case 0x2101c0u: goto label_2101c0;
        case 0x2101c4u: goto label_2101c4;
        case 0x2101c8u: goto label_2101c8;
        case 0x2101ccu: goto label_2101cc;
        case 0x2101d0u: goto label_2101d0;
        case 0x2101d4u: goto label_2101d4;
        case 0x2101d8u: goto label_2101d8;
        case 0x2101dcu: goto label_2101dc;
        case 0x2101e0u: goto label_2101e0;
        case 0x2101e4u: goto label_2101e4;
        case 0x2101e8u: goto label_2101e8;
        case 0x2101ecu: goto label_2101ec;
        case 0x2101f0u: goto label_2101f0;
        case 0x2101f4u: goto label_2101f4;
        case 0x2101f8u: goto label_2101f8;
        case 0x2101fcu: goto label_2101fc;
        case 0x210200u: goto label_210200;
        case 0x210204u: goto label_210204;
        case 0x210208u: goto label_210208;
        case 0x21020cu: goto label_21020c;
        case 0x210210u: goto label_210210;
        case 0x210214u: goto label_210214;
        case 0x210218u: goto label_210218;
        case 0x21021cu: goto label_21021c;
        case 0x210220u: goto label_210220;
        case 0x210224u: goto label_210224;
        case 0x210228u: goto label_210228;
        case 0x21022cu: goto label_21022c;
        case 0x210230u: goto label_210230;
        case 0x210234u: goto label_210234;
        case 0x210238u: goto label_210238;
        case 0x21023cu: goto label_21023c;
        case 0x210240u: goto label_210240;
        case 0x210244u: goto label_210244;
        case 0x210248u: goto label_210248;
        case 0x21024cu: goto label_21024c;
        case 0x210250u: goto label_210250;
        case 0x210254u: goto label_210254;
        case 0x210258u: goto label_210258;
        case 0x21025cu: goto label_21025c;
        case 0x210260u: goto label_210260;
        case 0x210264u: goto label_210264;
        case 0x210268u: goto label_210268;
        case 0x21026cu: goto label_21026c;
        case 0x210270u: goto label_210270;
        case 0x210274u: goto label_210274;
        case 0x210278u: goto label_210278;
        case 0x21027cu: goto label_21027c;
        case 0x210280u: goto label_210280;
        case 0x210284u: goto label_210284;
        case 0x210288u: goto label_210288;
        case 0x21028cu: goto label_21028c;
        case 0x210290u: goto label_210290;
        case 0x210294u: goto label_210294;
        case 0x210298u: goto label_210298;
        case 0x21029cu: goto label_21029c;
        case 0x2102a0u: goto label_2102a0;
        case 0x2102a4u: goto label_2102a4;
        case 0x2102a8u: goto label_2102a8;
        case 0x2102acu: goto label_2102ac;
        case 0x2102b0u: goto label_2102b0;
        case 0x2102b4u: goto label_2102b4;
        case 0x2102b8u: goto label_2102b8;
        case 0x2102bcu: goto label_2102bc;
        case 0x2102c0u: goto label_2102c0;
        case 0x2102c4u: goto label_2102c4;
        case 0x2102c8u: goto label_2102c8;
        case 0x2102ccu: goto label_2102cc;
        default: return;
    }

label_20fb00:
    // 0x20fb00: 0x11a70003  beq         $t5, $a3, . + 4 + (0x3 << 2)
label_20fb04:
    if (ctx->pc == 0x20FB04u) {
        ctx->pc = 0x20FB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB00u;
        // 0x20fb04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FB08u;
        goto label_20fb08;
    }
    ctx->pc = 0x20FB00u;
    {
        const bool branch_taken_0x20fb00 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 7));
        ctx->pc = 0x20FB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB00u;
        // 0x20fb04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fb00) {
            ctx->pc = 0x20FB10u;
            goto label_20fb10;
        }
    }
    ctx->pc = 0x20FB08u;
label_20fb08:
    // 0x20fb08: 0x1000000d  b           . + 4 + (0xD << 2)
label_20fb0c:
    if (ctx->pc == 0x20FB0Cu) {
        ctx->pc = 0x20FB10u;
        goto label_20fb10;
    }
    ctx->pc = 0x20FB08u;
    {
        const bool branch_taken_0x20fb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20fb08) {
            ctx->pc = 0x20FB40u;
            goto label_20fb40;
        }
    }
    ctx->pc = 0x20FB10u;
label_20fb10:
    // 0x20fb10: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x20fb10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_20fb14:
    // 0x20fb14: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x20fb14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
label_20fb18:
    // 0x20fb18: 0x29220005  slti        $v0, $t1, 0x5
    ctx->pc = 0x20fb18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)5) ? 1 : 0);
label_20fb1c:
    // 0x20fb1c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
label_20fb20:
    if (ctx->pc == 0x20FB20u) {
        ctx->pc = 0x20FB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB1Cu;
        // 0x20fb20: 0x25ef0002  addiu       $t7, $t7, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FB24u;
        goto label_20fb24;
    }
    ctx->pc = 0x20FB1Cu;
    {
        const bool branch_taken_0x20fb1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB1Cu;
        // 0x20fb20: 0x25ef0002  addiu       $t7, $t7, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fb1c) {
            ctx->pc = 0x20FA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x20fa98; return; }
        }
    }
    ctx->pc = 0x20FB24u;
label_20fb24:
    // 0x20fb24: 0x0  nop
    ctx->pc = 0x20fb24u;
    // NOP
label_20fb28:
    // 0x20fb28: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x20fb28u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_20fb2c:
    // 0x20fb2c: 0x29c20082  slti        $v0, $t6, 0x82
    ctx->pc = 0x20fb2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)130) ? 1 : 0);
label_20fb30:
    // 0x20fb30: 0x258c0018  addiu       $t4, $t4, 0x18
    ctx->pc = 0x20fb30u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 24));
label_20fb34:
    // 0x20fb34: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
label_20fb38:
    if (ctx->pc == 0x20FB38u) {
        ctx->pc = 0x20FB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB34u;
        // 0x20fb38: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FB3Cu;
        goto label_20fb3c;
    }
    ctx->pc = 0x20FB34u;
    {
        const bool branch_taken_0x20fb34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB34u;
        // 0x20fb38: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fb34) {
            ctx->pc = 0x20FA7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x20fa7c; return; }
        }
    }
    ctx->pc = 0x20FB3Cu;
label_20fb3c:
    // 0x20fb3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20fb40:
    // 0x20fb40: 0x3e00008  jr          $ra
label_20fb44:
    if (ctx->pc == 0x20FB44u) {
        ctx->pc = 0x20FB48u;
        goto label_20fb48;
    }
    ctx->pc = 0x20FB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FB40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20FB48u;
label_20fb48:
    // 0x20fb48: 0x0  nop
    ctx->pc = 0x20fb48u;
    // NOP
label_20fb4c:
    // 0x20fb4c: 0x0  nop
    ctx->pc = 0x20fb4cu;
    // NOP
label_20fb50:
    // 0x20fb50: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20fb50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_20fb54:
    // 0x20fb54: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20fb54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20fb58:
    // 0x20fb58: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x20fb58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
label_20fb5c:
    // 0x20fb5c: 0x3c07002b  lui         $a3, 0x2B
    ctx->pc = 0x20fb5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)43 << 16));
label_20fb60:
    // 0x20fb60: 0x342133e8  ori         $at, $at, 0x33E8
    ctx->pc = 0x20fb60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13288);
label_20fb64:
    // 0x20fb64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20fb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20fb68:
    // 0x20fb68: 0x24c6c990  addiu       $a2, $a2, -0x3670
    ctx->pc = 0x20fb68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953360));
label_20fb6c:
    // 0x20fb6c: 0x24e7ff78  addiu       $a3, $a3, -0x88
    ctx->pc = 0x20fb6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967160));
label_20fb70:
    // 0x20fb70: 0x814021  addu        $t0, $a0, $at
    ctx->pc = 0x20fb70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_20fb74:
    // 0x20fb74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20fb74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20fb78:
    // 0x20fb78: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x20fb78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_20fb7c:
    // 0x20fb7c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x20fb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_20fb80:
    // 0x20fb80: 0x28a20029  slti        $v0, $a1, 0x29
    ctx->pc = 0x20fb80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)41) ? 1 : 0);
label_20fb84:
    // 0x20fb84: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x20fb84u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
label_20fb88:
    // 0x20fb88: 0x85030002  lh          $v1, 0x2($t0)
    ctx->pc = 0x20fb88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_20fb8c:
    // 0x20fb8c: 0xa4e30002  sh          $v1, 0x2($a3)
    ctx->pc = 0x20fb8cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 3));
label_20fb90:
    // 0x20fb90: 0x91030004  lbu         $v1, 0x4($t0)
    ctx->pc = 0x20fb90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
label_20fb94:
    // 0x20fb94: 0xa0e30004  sb          $v1, 0x4($a3)
    ctx->pc = 0x20fb94u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 3));
label_20fb98:
    // 0x20fb98: 0x91030005  lbu         $v1, 0x5($t0)
    ctx->pc = 0x20fb98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
label_20fb9c:
    // 0x20fb9c: 0xa0e30005  sb          $v1, 0x5($a3)
    ctx->pc = 0x20fb9cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5), (uint8_t)GPR_U32(ctx, 3));
label_20fba0:
    // 0x20fba0: 0x8d030014  lw          $v1, 0x14($t0)
    ctx->pc = 0x20fba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_20fba4:
    // 0x20fba4: 0xace30014  sw          $v1, 0x14($a3)
    ctx->pc = 0x20fba4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
label_20fba8:
    // 0x20fba8: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x20fba8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
label_20fbac:
    // 0x20fbac: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_20fbb0:
    if (ctx->pc == 0x20FBB0u) {
        ctx->pc = 0x20FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBACu;
        // 0x20fbb0: 0x24e70018  addiu       $a3, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FBB4u;
        goto label_20fbb4;
    }
    ctx->pc = 0x20FBACu;
    {
        const bool branch_taken_0x20fbac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBACu;
        // 0x20fbb0: 0x24e70018  addiu       $a3, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fbac) {
            ctx->pc = 0x20FB78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fb78;
        }
    }
    ctx->pc = 0x20FBB4u;
label_20fbb4:
    // 0x20fbb4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20fbb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_20fbb8:
    // 0x20fbb8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20fbb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20fbbc:
    // 0x20fbbc: 0x342139c0  ori         $at, $at, 0x39C0
    ctx->pc = 0x20fbbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14784);
label_20fbc0:
    // 0x20fbc0: 0xc13821  addu        $a3, $a2, $at
    ctx->pc = 0x20fbc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_20fbc4:
    // 0x20fbc4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20fbc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_20fbc8:
    // 0x20fbc8: 0x34213908  ori         $at, $at, 0x3908
    ctx->pc = 0x20fbc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14600);
label_20fbcc:
    // 0x20fbcc: 0x814021  addu        $t0, $a0, $at
    ctx->pc = 0x20fbccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_20fbd0:
    // 0x20fbd0: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x20fbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_20fbd4:
    // 0x20fbd4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x20fbd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_20fbd8:
    // 0x20fbd8: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
label_20fbdc:
    if (ctx->pc == 0x20FBDCu) {
        ctx->pc = 0x20FBE0u;
        goto label_20fbe0;
    }
    ctx->pc = 0x20FBD8u;
    {
        const bool branch_taken_0x20fbd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x20fbd8) {
            ctx->pc = 0x20FBE4u;
            goto label_20fbe4;
        }
    }
    ctx->pc = 0x20FBE0u;
label_20fbe0:
    // 0x20fbe0: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x20fbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_20fbe4:
    // 0x20fbe4: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x20fbe4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
label_20fbe8:
    // 0x20fbe8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x20fbe8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_20fbec:
    // 0x20fbec: 0x91030001  lbu         $v1, 0x1($t0)
    ctx->pc = 0x20fbecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
label_20fbf0:
    // 0x20fbf0: 0x29220019  slti        $v0, $t1, 0x19
    ctx->pc = 0x20fbf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)25) ? 1 : 0);
label_20fbf4:
    // 0x20fbf4: 0xa0e30001  sb          $v1, 0x1($a3)
    ctx->pc = 0x20fbf4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
label_20fbf8:
    // 0x20fbf8: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x20fbf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_20fbfc:
    // 0x20fbfc: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_20fc00:
    if (ctx->pc == 0x20FC00u) {
        ctx->pc = 0x20FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBFCu;
        // 0x20fc00: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FC04u;
        goto label_20fc04;
    }
    ctx->pc = 0x20FBFCu;
    {
        const bool branch_taken_0x20fbfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBFCu;
        // 0x20fc00: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fbfc) {
            ctx->pc = 0x20FBD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fbd4;
        }
    }
    ctx->pc = 0x20FC04u;
label_20fc04:
    // 0x20fc04: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20fc04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_20fc08:
    // 0x20fc08: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x20fc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_20fc0c:
    // 0x20fc0c: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x20fc0cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_20fc10:
    // 0x20fc10: 0x902339dc  lbu         $v1, 0x39DC($at)
    ctx->pc = 0x20fc10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 14812)));
label_20fc14:
    // 0x20fc14: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_20fc18:
    if (ctx->pc == 0x20FC18u) {
        ctx->pc = 0x20FC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC14u;
        // 0x20fc18: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FC1Cu;
        goto label_20fc1c;
    }
    ctx->pc = 0x20FC14u;
    {
        const bool branch_taken_0x20fc14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20FC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC14u;
        // 0x20fc18: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fc14) {
            ctx->pc = 0x20FC30u;
            goto label_20fc30;
        }
    }
    ctx->pc = 0x20FC1Cu;
label_20fc1c:
    // 0x20fc1c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20fc1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_20fc20:
    // 0x20fc20: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x20fc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_20fc24:
    // 0x20fc24: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x20fc24u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_20fc28:
    // 0x20fc28: 0xa02239dd  sb          $v0, 0x39DD($at)
    ctx->pc = 0x20fc28u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14813), (uint8_t)GPR_U32(ctx, 2));
label_20fc2c:
    // 0x20fc2c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20fc2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_20fc30:
    // 0x20fc30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20fc30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20fc34:
    // 0x20fc34: 0x34213a10  ori         $at, $at, 0x3A10
    ctx->pc = 0x20fc34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14864);
label_20fc38:
    // 0x20fc38: 0xc13021  addu        $a2, $a2, $at
    ctx->pc = 0x20fc38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_20fc3c:
    // 0x20fc3c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20fc3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_20fc40:
    // 0x20fc40: 0x3421393c  ori         $at, $at, 0x393C
    ctx->pc = 0x20fc40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14652);
label_20fc44:
    // 0x20fc44: 0x813821  addu        $a3, $a0, $at
    ctx->pc = 0x20fc44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_20fc48:
    // 0x20fc48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20fc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20fc4c:
    // 0x20fc4c: 0x24090019  addiu       $t1, $zero, 0x19
    ctx->pc = 0x20fc4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_20fc50:
    // 0x20fc50: 0x3c0a3e00  lui         $t2, 0x3E00
    ctx->pc = 0x20fc50u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15872 << 16));
label_20fc54:
    // 0x20fc54: 0x24030082  addiu       $v1, $zero, 0x82
    ctx->pc = 0x20fc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_20fc58:
    // 0x20fc58: 0x90e4000a  lbu         $a0, 0xA($a3)
    ctx->pc = 0x20fc58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 10)));
label_20fc5c:
    // 0x20fc5c: 0xa0c4000a  sb          $a0, 0xA($a2)
    ctx->pc = 0x20fc5cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 10), (uint8_t)GPR_U32(ctx, 4));
label_20fc60:
    // 0x20fc60: 0x90e4000b  lbu         $a0, 0xB($a3)
    ctx->pc = 0x20fc60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 11)));
label_20fc64:
    // 0x20fc64: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_20fc68:
    if (ctx->pc == 0x20FC68u) {
        ctx->pc = 0x20FC6Cu;
        goto label_20fc6c;
    }
    ctx->pc = 0x20FC64u;
    {
        const bool branch_taken_0x20fc64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20fc64) {
            ctx->pc = 0x20FC70u;
            goto label_20fc70;
        }
    }
    ctx->pc = 0x20FC6Cu;
label_20fc6c:
    // 0x20fc6c: 0x240400ab  addiu       $a0, $zero, 0xAB
    ctx->pc = 0x20fc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_20fc70:
    // 0x20fc70: 0xa0c4000b  sb          $a0, 0xB($a2)
    ctx->pc = 0x20fc70u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 11), (uint8_t)GPR_U32(ctx, 4));
label_20fc74:
    // 0x20fc74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20fc74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20fc78:
    // 0x20fc78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20fc78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20fc7c:
    // 0x20fc7c: 0x0  nop
    ctx->pc = 0x20fc7cu;
    // NOP
label_20fc80:
    // 0x20fc80: 0x825814  dsllv       $t3, $v0, $a0
    ctx->pc = 0x20fc80u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_20fc84:
    // 0x20fc84: 0xab2825  or          $a1, $a1, $t3
    ctx->pc = 0x20fc84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 11));
label_20fc88:
    // 0x20fc88: 0x248b0001  addiu       $t3, $a0, 0x1
    ctx->pc = 0x20fc88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_20fc8c:
    // 0x20fc8c: 0x1626014  dsllv       $t4, $v0, $t3
    ctx->pc = 0x20fc8cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (GPR_U32(ctx, 11) & 0x3F));
label_20fc90:
    // 0x20fc90: 0x248b0002  addiu       $t3, $a0, 0x2
    ctx->pc = 0x20fc90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_20fc94:
    // 0x20fc94: 0xac2825  or          $a1, $a1, $t4
    ctx->pc = 0x20fc94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 12));
label_20fc98:
    // 0x20fc98: 0x1625814  dsllv       $t3, $v0, $t3
    ctx->pc = 0x20fc98u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (GPR_U32(ctx, 11) & 0x3F));
label_20fc9c:
    // 0x20fc9c: 0xab2825  or          $a1, $a1, $t3
    ctx->pc = 0x20fc9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 11));
label_20fca0:
    // 0x20fca0: 0x248b0003  addiu       $t3, $a0, 0x3
    ctx->pc = 0x20fca0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
label_20fca4:
    // 0x20fca4: 0x1626014  dsllv       $t4, $v0, $t3
    ctx->pc = 0x20fca4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (GPR_U32(ctx, 11) & 0x3F));
label_20fca8:
    // 0x20fca8: 0x248b0004  addiu       $t3, $a0, 0x4
    ctx->pc = 0x20fca8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_20fcac:
    // 0x20fcac: 0xac2825  or          $a1, $a1, $t4
    ctx->pc = 0x20fcacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 12));
label_20fcb0:
    // 0x20fcb0: 0x1625814  dsllv       $t3, $v0, $t3
    ctx->pc = 0x20fcb0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (GPR_U32(ctx, 11) & 0x3F));
label_20fcb4:
    // 0x20fcb4: 0xab2825  or          $a1, $a1, $t3
    ctx->pc = 0x20fcb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 11));
label_20fcb8:
    // 0x20fcb8: 0x248b0005  addiu       $t3, $a0, 0x5
    ctx->pc = 0x20fcb8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
label_20fcbc:
    // 0x20fcbc: 0x1626014  dsllv       $t4, $v0, $t3
    ctx->pc = 0x20fcbcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (GPR_U32(ctx, 11) & 0x3F));
label_20fcc0:
    // 0x20fcc0: 0x248b0006  addiu       $t3, $a0, 0x6
    ctx->pc = 0x20fcc0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
label_20fcc4:
    // 0x20fcc4: 0xac2825  or          $a1, $a1, $t4
    ctx->pc = 0x20fcc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 12));
label_20fcc8:
    // 0x20fcc8: 0x1625814  dsllv       $t3, $v0, $t3
    ctx->pc = 0x20fcc8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (GPR_U32(ctx, 11) & 0x3F));
label_20fccc:
    // 0x20fccc: 0xab2825  or          $a1, $a1, $t3
    ctx->pc = 0x20fcccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 11));
label_20fcd0:
    // 0x20fcd0: 0x248b0007  addiu       $t3, $a0, 0x7
    ctx->pc = 0x20fcd0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
label_20fcd4:
    // 0x20fcd4: 0x1625814  dsllv       $t3, $v0, $t3
    ctx->pc = 0x20fcd4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (GPR_U32(ctx, 11) & 0x3F));
label_20fcd8:
    // 0x20fcd8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x20fcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_20fcdc:
    // 0x20fcdc: 0xab2825  or          $a1, $a1, $t3
    ctx->pc = 0x20fcdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 11));
label_20fce0:
    // 0x20fce0: 0x288b0011  slti        $t3, $a0, 0x11
    ctx->pc = 0x20fce0u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)17) ? 1 : 0);
label_20fce4:
    // 0x20fce4: 0x1560ffe5  bnez        $t3, . + 4 + (-0x1B << 2)
label_20fce8:
    if (ctx->pc == 0x20FCE8u) {
        ctx->pc = 0x20FCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FCE4u;
        // 0x20fce8: 0x28810019  slti        $at, $a0, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FCECu;
        goto label_20fcec;
    }
    ctx->pc = 0x20FCE4u;
    {
        const bool branch_taken_0x20fce4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FCE4u;
        // 0x20fce8: 0x28810019  slti        $at, $a0, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fce4) {
            ctx->pc = 0x20FC7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fc7c;
        }
    }
    ctx->pc = 0x20FCECu;
label_20fcec:
    // 0x20fcec: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_20fcf0:
    if (ctx->pc == 0x20FCF0u) {
        ctx->pc = 0x20FCF4u;
        goto label_20fcf4;
    }
    ctx->pc = 0x20FCECu;
    {
        const bool branch_taken_0x20fcec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20fcec) {
            ctx->pc = 0x20FD14u;
            goto label_20fd14;
        }
    }
    ctx->pc = 0x20FCF4u;
label_20fcf4:
    // 0x20fcf4: 0x0  nop
    ctx->pc = 0x20fcf4u;
    // NOP
label_20fcf8:
    // 0x20fcf8: 0x825814  dsllv       $t3, $v0, $a0
    ctx->pc = 0x20fcf8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_20fcfc:
    // 0x20fcfc: 0xab2825  or          $a1, $a1, $t3
    ctx->pc = 0x20fcfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 11));
label_20fd00:
    // 0x20fd00: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20fd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_20fd04:
    // 0x20fd04: 0x288b0019  slti        $t3, $a0, 0x19
    ctx->pc = 0x20fd04u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
label_20fd08:
    // 0x20fd08: 0x0  nop
    ctx->pc = 0x20fd08u;
    // NOP
label_20fd0c:
    // 0x20fd0c: 0x1560fff9  bnez        $t3, . + 4 + (-0x7 << 2)
label_20fd10:
    if (ctx->pc == 0x20FD10u) {
        ctx->pc = 0x20FD14u;
        goto label_20fd14;
    }
    ctx->pc = 0x20FD0Cu;
    {
        const bool branch_taken_0x20fd0c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fd0c) {
            ctx->pc = 0x20FCF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fcf4;
        }
    }
    ctx->pc = 0x20FD14u;
label_20fd14:
    // 0x20fd14: 0x0  nop
    ctx->pc = 0x20fd14u;
    // NOP
label_20fd18:
    // 0x20fd18: 0x9ce4000c  lwu         $a0, 0xC($a3)
    ctx->pc = 0x20fd18u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_20fd1c:
    // 0x20fd1c: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x20fd1cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20fd20:
    // 0x20fd20: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x20fd20u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_20fd24:
    // 0x20fd24: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x20fd24u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20fd28:
    // 0x20fd28: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x20fd28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_20fd2c:
    // 0x20fd2c: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x20fd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
label_20fd30:
    // 0x20fd30: 0x9ce5000c  lwu         $a1, 0xC($a3)
    ctx->pc = 0x20fd30u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_20fd34:
    // 0x20fd34: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x20fd34u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
label_20fd38:
    // 0x20fd38: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x20fd38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
label_20fd3c:
    // 0x20fd3c: 0x52bf8  dsll        $a1, $a1, 15
    ctx->pc = 0x20fd3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 15);
label_20fd40:
    // 0x20fd40: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x20fd40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_20fd44:
    // 0x20fd44: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x20fd44u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
label_20fd48:
    // 0x20fd48: 0x91840000  lbu         $a0, 0x0($t4)
    ctx->pc = 0x20fd48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_20fd4c:
    // 0x20fd4c: 0x14890002  bne         $a0, $t1, . + 4 + (0x2 << 2)
label_20fd50:
    if (ctx->pc == 0x20FD50u) {
        ctx->pc = 0x20FD54u;
        goto label_20fd54;
    }
    ctx->pc = 0x20FD4Cu;
    {
        const bool branch_taken_0x20fd4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 9));
        if (branch_taken_0x20fd4c) {
            ctx->pc = 0x20FD58u;
            goto label_20fd58;
        }
    }
    ctx->pc = 0x20FD54u;
label_20fd54:
    // 0x20fd54: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x20fd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_20fd58:
    // 0x20fd58: 0xa1640000  sb          $a0, 0x0($t3)
    ctx->pc = 0x20fd58u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 4));
label_20fd5c:
    // 0x20fd5c: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x20fd5cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_20fd60:
    // 0x20fd60: 0x91850001  lbu         $a1, 0x1($t4)
    ctx->pc = 0x20fd60u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
label_20fd64:
    // 0x20fd64: 0x29a40005  slti        $a0, $t5, 0x5
    ctx->pc = 0x20fd64u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)5) ? 1 : 0);
label_20fd68:
    // 0x20fd68: 0xa1650001  sb          $a1, 0x1($t3)
    ctx->pc = 0x20fd68u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1), (uint8_t)GPR_U32(ctx, 5));
label_20fd6c:
    // 0x20fd6c: 0x258c0002  addiu       $t4, $t4, 0x2
    ctx->pc = 0x20fd6cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
label_20fd70:
    // 0x20fd70: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
label_20fd74:
    if (ctx->pc == 0x20FD74u) {
        ctx->pc = 0x20FD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD70u;
        // 0x20fd74: 0x256b0002  addiu       $t3, $t3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FD78u;
        goto label_20fd78;
    }
    ctx->pc = 0x20FD70u;
    {
        const bool branch_taken_0x20fd70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD70u;
        // 0x20fd74: 0x256b0002  addiu       $t3, $t3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd70) {
            ctx->pc = 0x20FD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fd48;
        }
    }
    ctx->pc = 0x20FD78u;
label_20fd78:
    // 0x20fd78: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x20fd78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_20fd7c:
    // 0x20fd7c: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x20fd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
label_20fd80:
    // 0x20fd80: 0x29040082  slti        $a0, $t0, 0x82
    ctx->pc = 0x20fd80u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)130) ? 1 : 0);
label_20fd84:
    // 0x20fd84: 0x1480ffb4  bnez        $a0, . + 4 + (-0x4C << 2)
label_20fd88:
    if (ctx->pc == 0x20FD88u) {
        ctx->pc = 0x20FD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD84u;
        // 0x20fd88: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FD8Cu;
        goto label_20fd8c;
    }
    ctx->pc = 0x20FD84u;
    {
        const bool branch_taken_0x20fd84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD84u;
        // 0x20fd88: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd84) {
            ctx->pc = 0x20FC58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fc58;
        }
    }
    ctx->pc = 0x20FD8Cu;
label_20fd8c:
    // 0x20fd8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20fd8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20fd90:
    // 0x20fd90: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x20fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_20fd94:
    // 0x20fd94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20fd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20fd98:
    // 0x20fd98: 0x34454ef8  ori         $a1, $v0, 0x4EF8
    ctx->pc = 0x20fd98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20216);
label_20fd9c:
    // 0x20fd9c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x20fd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_20fda0:
    // 0x20fda0: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x20fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
label_20fda4:
    // 0x20fda4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_20fda8:
    // 0x20fda8: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x20fda8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_20fdac:
    // 0x20fdac: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x20fdacu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_20fdb0:
    // 0x20fdb0: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x20fdb0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_20fdb4:
    // 0x20fdb4: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20fdb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_20fdb8:
    // 0x20fdb8: 0xa34014  dsllv       $t0, $v1, $a1
    ctx->pc = 0x20fdb8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (GPR_U32(ctx, 5) & 0x3F));
label_20fdbc:
    // 0x20fdbc: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x20fdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_20fdc0:
    // 0x20fdc0: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x20fdc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
label_20fdc4:
    // 0x20fdc4: 0x24850002  addiu       $a1, $a0, 0x2
    ctx->pc = 0x20fdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_20fdc8:
    // 0x20fdc8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x20fdc8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_20fdcc:
    // 0x20fdcc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x20fdccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_20fdd0:
    // 0x20fdd0: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x20fdd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_20fdd4:
    // 0x20fdd4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x20fdd4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_20fdd8:
    // 0x20fdd8: 0xfc470000  sd          $a3, 0x0($v0)
    ctx->pc = 0x20fdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 7));
label_20fddc:
    // 0x20fddc: 0xa35814  dsllv       $t3, $v1, $a1
    ctx->pc = 0x20fddcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << (GPR_U32(ctx, 5) & 0x3F));
label_20fde0:
    // 0x20fde0: 0xdc2c1888  ld          $t4, 0x1888($at)
    ctx->pc = 0x20fde0u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 1), 6280)));
label_20fde4:
    // 0x20fde4: 0xc36814  dsllv       $t5, $v1, $a2
    ctx->pc = 0x20fde4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) << (GPR_U32(ctx, 6) & 0x3F));
label_20fde8:
    // 0x20fde8: 0x24850003  addiu       $a1, $a0, 0x3
    ctx->pc = 0x20fde8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
label_20fdec:
    // 0x20fdec: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x20fdecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
label_20fdf0:
    // 0x20fdf0: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x20fdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_20fdf4:
    // 0x20fdf4: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x20fdf4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_20fdf8:
    // 0x20fdf8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x20fdf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_20fdfc:
    // 0x20fdfc: 0xc35014  dsllv       $t2, $v1, $a2
    ctx->pc = 0x20fdfcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (GPR_U32(ctx, 6) & 0x3F));
label_20fe00:
    // 0x20fe00: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x20fe00u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_20fe04:
    // 0x20fe04: 0x24860005  addiu       $a2, $a0, 0x5
    ctx->pc = 0x20fe04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
label_20fe08:
    // 0x20fe08: 0xa34814  dsllv       $t1, $v1, $a1
    ctx->pc = 0x20fe08u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (GPR_U32(ctx, 5) & 0x3F));
label_20fe0c:
    // 0x20fe0c: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x20fe0cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
label_20fe10:
    // 0x20fe10: 0x24850006  addiu       $a1, $a0, 0x6
    ctx->pc = 0x20fe10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
label_20fe14:
    // 0x20fe14: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x20fe14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_20fe18:
    // 0x20fe18: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x20fe18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_20fe1c:
    // 0x20fe1c: 0x18b5825  or          $t3, $t4, $t3
    ctx->pc = 0x20fe1cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
label_20fe20:
    // 0x20fe20: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x20fe20u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_20fe24:
    // 0x20fe24: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x20fe24u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_20fe28:
    // 0x20fe28: 0xa33814  dsllv       $a3, $v1, $a1
    ctx->pc = 0x20fe28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (GPR_U32(ctx, 5) & 0x3F));
label_20fe2c:
    // 0x20fe2c: 0x16a5025  or          $t2, $t3, $t2
    ctx->pc = 0x20fe2cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
label_20fe30:
    // 0x20fe30: 0x24850007  addiu       $a1, $a0, 0x7
    ctx->pc = 0x20fe30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
label_20fe34:
    // 0x20fe34: 0xc34014  dsllv       $t0, $v1, $a2
    ctx->pc = 0x20fe34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (GPR_U32(ctx, 6) & 0x3F));
label_20fe38:
    // 0x20fe38: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x20fe38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_20fe3c:
    // 0x20fe3c: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x20fe3cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
label_20fe40:
    // 0x20fe40: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x20fe40u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_20fe44:
    // 0x20fe44: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x20fe44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
label_20fe48:
    // 0x20fe48: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x20fe48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_20fe4c:
    // 0x20fe4c: 0xa33014  dsllv       $a2, $v1, $a1
    ctx->pc = 0x20fe4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (GPR_U32(ctx, 5) & 0x3F));
label_20fe50:
    // 0x20fe50: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x20fe50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
label_20fe54:
    // 0x20fe54: 0x2885001d  slti        $a1, $a0, 0x1D
    ctx->pc = 0x20fe54u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)29) ? 1 : 0);
label_20fe58:
    // 0x20fe58: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x20fe58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
label_20fe5c:
    // 0x20fe5c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20fe5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_20fe60:
    // 0x20fe60: 0x14a0ffd1  bnez        $a1, . + 4 + (-0x2F << 2)
label_20fe64:
    if (ctx->pc == 0x20FE64u) {
        ctx->pc = 0x20FE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FE60u;
        // 0x20fe64: 0xfc261888  sd          $a2, 0x1888($at) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 1), 6280), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FE68u;
        goto label_20fe68;
    }
    ctx->pc = 0x20FE60u;
    {
        const bool branch_taken_0x20fe60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FE60u;
        // 0x20fe64: 0xfc261888  sd          $a2, 0x1888($at) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 1), 6280), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fe60) {
            ctx->pc = 0x20FDA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fda8;
        }
    }
    ctx->pc = 0x20FE68u;
label_20fe68:
    // 0x20fe68: 0x28810025  slti        $at, $a0, 0x25
    ctx->pc = 0x20fe68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)37) ? 1 : 0);
label_20fe6c:
    // 0x20fe6c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_20fe70:
    if (ctx->pc == 0x20FE70u) {
        ctx->pc = 0x20FE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FE6Cu;
        // 0x20fe70: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FE74u;
        goto label_20fe74;
    }
    ctx->pc = 0x20FE6Cu;
    {
        const bool branch_taken_0x20fe6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FE6Cu;
        // 0x20fe70: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fe6c) {
            ctx->pc = 0x20FEA0u;
            goto label_20fea0;
        }
    }
    ctx->pc = 0x20FE74u;
label_20fe74:
    // 0x20fe74: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20fe74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_20fe78:
    // 0x20fe78: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x20fe78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
label_20fe7c:
    // 0x20fe7c: 0xdc231888  ld          $v1, 0x1888($at)
    ctx->pc = 0x20fe7cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 1), 6280)));
label_20fe80:
    // 0x20fe80: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20fe80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_20fe84:
    // 0x20fe84: 0x462814  dsllv       $a1, $a2, $v0
    ctx->pc = 0x20fe84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (GPR_U32(ctx, 2) & 0x3F));
label_20fe88:
    // 0x20fe88: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20fe88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_20fe8c:
    // 0x20fe8c: 0x28820025  slti        $v0, $a0, 0x25
    ctx->pc = 0x20fe8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)37) ? 1 : 0);
label_20fe90:
    // 0x20fe90: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x20fe90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_20fe94:
    // 0x20fe94: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20fe94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_20fe98:
    // 0x20fe98: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_20fe9c:
    if (ctx->pc == 0x20FE9Cu) {
        ctx->pc = 0x20FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FE98u;
        // 0x20fe9c: 0xfc231888  sd          $v1, 0x1888($at) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 1), 6280), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FEA0u;
        goto label_20fea0;
    }
    ctx->pc = 0x20FE98u;
    {
        const bool branch_taken_0x20fe98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FE98u;
        // 0x20fe9c: 0xfc231888  sd          $v1, 0x1888($at) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 1), 6280), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fe98) {
            ctx->pc = 0x20FE74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fe74;
        }
    }
    ctx->pc = 0x20FEA0u;
label_20fea0:
    // 0x20fea0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20fea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20fea4:
    // 0x20fea4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x20fea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_20fea8:
    // 0x20fea8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x20fea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_20feac:
    // 0x20feac: 0x34454ef0  ori         $a1, $v0, 0x4EF0
    ctx->pc = 0x20feacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20208);
label_20feb0:
    // 0x20feb0: 0x2463c990  addiu       $v1, $v1, -0x3670
    ctx->pc = 0x20feb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953360));
label_20feb4:
    // 0x20feb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20feb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20feb8:
    // 0x20feb8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20feb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_20febc:
    // 0x20febc: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x20febcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20fec0:
    // 0x20fec0: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x20fec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_20fec4:
    // 0x20fec4: 0xc26804  sllv        $t5, $v0, $a2
    ctx->pc = 0x20fec4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
label_20fec8:
    // 0x20fec8: 0x824004  sllv        $t0, $v0, $a0
    ctx->pc = 0x20fec8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_20fecc:
    // 0x20fecc: 0x24860003  addiu       $a2, $a0, 0x3
    ctx->pc = 0x20feccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
label_20fed0:
    // 0x20fed0: 0x24850002  addiu       $a1, $a0, 0x2
    ctx->pc = 0x20fed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_20fed4:
    // 0x20fed4: 0xc25804  sllv        $t3, $v0, $a2
    ctx->pc = 0x20fed4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
label_20fed8:
    // 0x20fed8: 0xa26004  sllv        $t4, $v0, $a1
    ctx->pc = 0x20fed8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
label_20fedc:
    // 0x20fedc: 0x24860005  addiu       $a2, $a0, 0x5
    ctx->pc = 0x20fedcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
label_20fee0:
    // 0x20fee0: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x20fee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_20fee4:
    // 0x20fee4: 0xa25004  sllv        $t2, $v0, $a1
    ctx->pc = 0x20fee4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
label_20fee8:
    // 0x20fee8: 0xc24804  sllv        $t1, $v0, $a2
    ctx->pc = 0x20fee8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
label_20feec:
    // 0x20feec: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x20feecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_20fef0:
    // 0x20fef0: 0x24850006  addiu       $a1, $a0, 0x6
    ctx->pc = 0x20fef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
label_20fef4:
    // 0x20fef4: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x20fef4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_20fef8:
    // 0x20fef8: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20fef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_20fefc:
    // 0x20fefc: 0x8c261880  lw          $a2, 0x1880($at)
    ctx->pc = 0x20fefcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6272)));
label_20ff00:
    // 0x20ff00: 0xa24004  sllv        $t0, $v0, $a1
    ctx->pc = 0x20ff00u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
label_20ff04:
    // 0x20ff04: 0x24850007  addiu       $a1, $a0, 0x7
    ctx->pc = 0x20ff04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
label_20ff08:
    // 0x20ff08: 0xa23804  sllv        $a3, $v0, $a1
    ctx->pc = 0x20ff08u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
label_20ff0c:
    // 0x20ff0c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x20ff0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_20ff10:
    // 0x20ff10: 0x2885000e  slti        $a1, $a0, 0xE
    ctx->pc = 0x20ff10u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)14) ? 1 : 0);
label_20ff14:
    // 0x20ff14: 0xcd3025  or          $a2, $a2, $t5
    ctx->pc = 0x20ff14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 13));
label_20ff18:
    // 0x20ff18: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_20ff1c:
    // 0x20ff1c: 0xac261880  sw          $a2, 0x1880($at)
    ctx->pc = 0x20ff1cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6272), GPR_U32(ctx, 6));
label_20ff20:
    // 0x20ff20: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_20ff24:
    // 0x20ff24: 0x8c261880  lw          $a2, 0x1880($at)
    ctx->pc = 0x20ff24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6272)));
label_20ff28:
    // 0x20ff28: 0xcc3025  or          $a2, $a2, $t4
    ctx->pc = 0x20ff28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 12));
label_20ff2c:
    // 0x20ff2c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_20ff30:
    // 0x20ff30: 0xac261880  sw          $a2, 0x1880($at)
    ctx->pc = 0x20ff30u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6272), GPR_U32(ctx, 6));
label_20ff34:
    // 0x20ff34: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_20ff38:
    // 0x20ff38: 0x8c261880  lw          $a2, 0x1880($at)
    ctx->pc = 0x20ff38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6272)));
label_20ff3c:
    // 0x20ff3c: 0xcb3025  or          $a2, $a2, $t3
    ctx->pc = 0x20ff3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 11));
label_20ff40:
    // 0x20ff40: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_20ff44:
    // 0x20ff44: 0xac261880  sw          $a2, 0x1880($at)
    ctx->pc = 0x20ff44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6272), GPR_U32(ctx, 6));
label_20ff48:
    // 0x20ff48: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_20ff4c:
    // 0x20ff4c: 0x8c261880  lw          $a2, 0x1880($at)
    ctx->pc = 0x20ff4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6272)));
label_20ff50:
    // 0x20ff50: 0xca3025  or          $a2, $a2, $t2
    ctx->pc = 0x20ff50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 10));
label_20ff54:
    // 0x20ff54: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_20ff58:
    // 0x20ff58: 0xac261880  sw          $a2, 0x1880($at)
    ctx->pc = 0x20ff58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6272), GPR_U32(ctx, 6));
label_20ff5c:
    // 0x20ff5c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_20ff60:
    // 0x20ff60: 0x8c261880  lw          $a2, 0x1880($at)
    ctx->pc = 0x20ff60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6272)));
label_20ff64:
    // 0x20ff64: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x20ff64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
label_20ff68:
    // 0x20ff68: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_20ff6c:
    // 0x20ff6c: 0xac261880  sw          $a2, 0x1880($at)
    ctx->pc = 0x20ff6cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6272), GPR_U32(ctx, 6));
label_20ff70:
    // 0x20ff70: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_20ff74:
    // 0x20ff74: 0x8c261880  lw          $a2, 0x1880($at)
    ctx->pc = 0x20ff74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6272)));
label_20ff78:
    // 0x20ff78: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x20ff78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
label_20ff7c:
    // 0x20ff7c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_20ff80:
    // 0x20ff80: 0xac261880  sw          $a2, 0x1880($at)
    ctx->pc = 0x20ff80u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6272), GPR_U32(ctx, 6));
label_20ff84:
    // 0x20ff84: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_20ff88:
    // 0x20ff88: 0x8c261880  lw          $a2, 0x1880($at)
    ctx->pc = 0x20ff88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6272)));
label_20ff8c:
    // 0x20ff8c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x20ff8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_20ff90:
    // 0x20ff90: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_20ff94:
    // 0x20ff94: 0x14a0ffc9  bnez        $a1, . + 4 + (-0x37 << 2)
label_20ff98:
    if (ctx->pc == 0x20FF98u) {
        ctx->pc = 0x20FF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF94u;
        // 0x20ff98: 0xac261880  sw          $a2, 0x1880($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6272), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FF9Cu;
        goto label_20ff9c;
    }
    ctx->pc = 0x20FF94u;
    {
        const bool branch_taken_0x20ff94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF94u;
        // 0x20ff98: 0xac261880  sw          $a2, 0x1880($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6272), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ff94) {
            ctx->pc = 0x20FEBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20febc;
        }
    }
    ctx->pc = 0x20FF9Cu;
label_20ff9c:
    // 0x20ff9c: 0x28810016  slti        $at, $a0, 0x16
    ctx->pc = 0x20ff9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)22) ? 1 : 0);
label_20ffa0:
    // 0x20ffa0: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_20ffa4:
    if (ctx->pc == 0x20FFA4u) {
        ctx->pc = 0x20FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFA0u;
        // 0x20ffa4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FFA8u;
        goto label_20ffa8;
    }
    ctx->pc = 0x20FFA0u;
    {
        const bool branch_taken_0x20ffa0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFA0u;
        // 0x20ffa4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ffa0) {
            ctx->pc = 0x20FFCCu;
            goto label_20ffcc;
        }
    }
    ctx->pc = 0x20FFA8u;
label_20ffa8:
    // 0x20ffa8: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ffa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_20ffac:
    // 0x20ffac: 0x862804  sllv        $a1, $a2, $a0
    ctx->pc = 0x20ffacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
label_20ffb0:
    // 0x20ffb0: 0x8c231880  lw          $v1, 0x1880($at)
    ctx->pc = 0x20ffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6272)));
label_20ffb4:
    // 0x20ffb4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20ffb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_20ffb8:
    // 0x20ffb8: 0x28820016  slti        $v0, $a0, 0x16
    ctx->pc = 0x20ffb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)22) ? 1 : 0);
label_20ffbc:
    // 0x20ffbc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x20ffbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_20ffc0:
    // 0x20ffc0: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ffc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_20ffc4:
    // 0x20ffc4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_20ffc8:
    if (ctx->pc == 0x20FFC8u) {
        ctx->pc = 0x20FFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFC4u;
        // 0x20ffc8: 0xac231880  sw          $v1, 0x1880($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FFCCu;
        goto label_20ffcc;
    }
    ctx->pc = 0x20FFC4u;
    {
        const bool branch_taken_0x20ffc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFC4u;
        // 0x20ffc8: 0xac231880  sw          $v1, 0x1880($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ffc4) {
            ctx->pc = 0x20FFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ffa8;
        }
    }
    ctx->pc = 0x20FFCCu;
label_20ffcc:
    // 0x20ffcc: 0x0  nop
    ctx->pc = 0x20ffccu;
    // NOP
label_20ffd0:
    // 0x20ffd0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x20ffd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_20ffd4:
    // 0x20ffd4: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x20ffd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_20ffd8:
    // 0x20ffd8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x20ffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_20ffdc:
    // 0x20ffdc: 0x2484b310  addiu       $a0, $a0, -0x4CF0
    ctx->pc = 0x20ffdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947600));
label_20ffe0:
    // 0x20ffe0: 0x24a5c990  addiu       $a1, $a1, -0x3670
    ctx->pc = 0x20ffe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953360));
label_20ffe4:
    // 0x20ffe4: 0xc08e93e  jal         func_23A4F8
label_20ffe8:
    if (ctx->pc == 0x20FFE8u) {
        ctx->pc = 0x20FFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFE4u;
        // 0x20ffe8: 0x34464f20  ori         $a2, $v0, 0x4F20 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FFECu;
        goto label_20ffec;
    }
    ctx->pc = 0x20FFE4u;
    SET_GPR_U32(ctx, 31, 0x20FFECu);
    ctx->pc = 0x20FFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FFE4u;
    // 0x20ffe8: 0x34464f20  ori         $a2, $v0, 0x4F20 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20256);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x20FFECu;
label_20ffec:
    // 0x20ffec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20ffecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20fff0:
    // 0x20fff0: 0x3e00008  jr          $ra
label_20fff4:
    if (ctx->pc == 0x20FFF4u) {
        ctx->pc = 0x20FFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFF0u;
        // 0x20fff4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FFF8u;
        goto label_20fff8;
    }
    ctx->pc = 0x20FFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFF0u;
        // 0x20fff4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20FFF8u;
label_20fff8:
    // 0x20fff8: 0x0  nop
    ctx->pc = 0x20fff8u;
    // NOP
label_20fffc:
    // 0x20fffc: 0x0  nop
    ctx->pc = 0x20fffcu;
    // NOP
label_210000:
    // 0x210000: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x210000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_210004:
    // 0x210004: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x210004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_210008:
    // 0x210008: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x210008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_21000c:
    // 0x21000c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x21000cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_210010:
    // 0x210010: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x210010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_210014:
    // 0x210014: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x210014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_210018:
    // 0x210018: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x210018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_21001c:
    // 0x21001c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21001cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_210020:
    // 0x210020: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x210020u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_210024:
    // 0x210024: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x210024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_210028:
    // 0x210028: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x210028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_21002c:
    // 0x21002c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21002cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_210030:
    // 0x210030: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_210034:
    if (ctx->pc == 0x210034u) {
        ctx->pc = 0x210034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210030u;
        // 0x210034: 0x260b82d  daddu       $s7, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210038u;
        goto label_210038;
    }
    ctx->pc = 0x210030u;
    {
        const bool branch_taken_0x210030 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x210034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210030u;
        // 0x210034: 0x260b82d  daddu       $s7, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210030) {
            ctx->pc = 0x210044u;
            goto label_210044;
        }
    }
    ctx->pc = 0x210038u;
label_210038:
    // 0x210038: 0x3c120021  lui         $s2, 0x21
    ctx->pc = 0x210038u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)33 << 16));
label_21003c:
    // 0x21003c: 0x10000003  b           . + 4 + (0x3 << 2)
label_210040:
    if (ctx->pc == 0x210040u) {
        ctx->pc = 0x210040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21003Cu;
        // 0x210040: 0x26522380  addiu       $s2, $s2, 0x2380 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 9088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210044u;
        goto label_210044;
    }
    ctx->pc = 0x21003Cu;
    {
        const bool branch_taken_0x21003c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21003Cu;
        // 0x210040: 0x26522380  addiu       $s2, $s2, 0x2380 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 9088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21003c) {
            ctx->pc = 0x21004Cu;
            goto label_21004c;
        }
    }
    ctx->pc = 0x210044u;
label_210044:
    // 0x210044: 0x3c120021  lui         $s2, 0x21
    ctx->pc = 0x210044u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)33 << 16));
label_210048:
    // 0x210048: 0x265223c0  addiu       $s2, $s2, 0x23C0
    ctx->pc = 0x210048u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 9152));
label_21004c:
    // 0x21004c: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x21004cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
label_210050:
    // 0x210050: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x210050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_210054:
    // 0x210054: 0x2631c990  addiu       $s1, $s1, -0x3670
    ctx->pc = 0x210054u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294953360));
label_210058:
    // 0x210058: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x210058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_21005c:
    // 0x21005c: 0x240f809  jalr        $s2
label_210060:
    if (ctx->pc == 0x210060u) {
        ctx->pc = 0x210060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21005Cu;
        // 0x210060: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210064u;
        goto label_210064;
    }
    ctx->pc = 0x21005Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x210064u);
        ctx->pc = 0x210060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21005Cu;
        // 0x210060: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21005Cu, 0x210064u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210064u;
label_210064:
    // 0x210064: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x210064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_210068:
    // 0x210068: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x210068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21006c:
    // 0x21006c: 0xc0841dc  jal         func_210770
label_210070:
    if (ctx->pc == 0x210070u) {
        ctx->pc = 0x210070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21006Cu;
        // 0x210070: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210074u;
        goto label_210074;
    }
    ctx->pc = 0x21006Cu;
    SET_GPR_U32(ctx, 31, 0x210074u);
    ctx->pc = 0x210070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21006Cu;
    // 0x210070: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210770u;
    { ctx->pc = 0x210770; return; }
    ctx->pc = 0x210074u;
label_210074:
    // 0x210074: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x210074u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210078:
    // 0x210078: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x210078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_21007c:
    // 0x21007c: 0x24a5ccf0  addiu       $a1, $a1, -0x3310
    ctx->pc = 0x21007cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954224));
label_210080:
    // 0x210080: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x210080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_210084:
    // 0x210084: 0x240f809  jalr        $s2
label_210088:
    if (ctx->pc == 0x210088u) {
        ctx->pc = 0x210088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210084u;
        // 0x210088: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21008Cu;
        goto label_21008c;
    }
    ctx->pc = 0x210084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x21008Cu);
        ctx->pc = 0x210088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210084u;
        // 0x210088: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210084u, 0x21008Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21008Cu;
label_21008c:
    // 0x21008c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x21008cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_210090:
    // 0x210090: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210094:
    // 0x210094: 0x24a5caec  addiu       $a1, $a1, -0x3514
    ctx->pc = 0x210094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953708));
label_210098:
    // 0x210098: 0x240f809  jalr        $s2
label_21009c:
    if (ctx->pc == 0x21009Cu) {
        ctx->pc = 0x21009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210098u;
        // 0x21009c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2100A0u;
        goto label_2100a0;
    }
    ctx->pc = 0x210098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x2100A0u);
        ctx->pc = 0x21009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210098u;
        // 0x21009c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210098u, 0x2100A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2100A0u;
label_2100a0:
    // 0x2100a0: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2100a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2100a4:
    // 0x2100a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2100a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2100a8:
    // 0x2100a8: 0x24a5ccf4  addiu       $a1, $a1, -0x330C
    ctx->pc = 0x2100a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954228));
label_2100ac:
    // 0x2100ac: 0x240f809  jalr        $s2
label_2100b0:
    if (ctx->pc == 0x2100B0u) {
        ctx->pc = 0x2100B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100ACu;
        // 0x2100b0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2100B4u;
        goto label_2100b4;
    }
    ctx->pc = 0x2100ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x2100B4u);
        ctx->pc = 0x2100B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100ACu;
        // 0x2100b0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2100ACu, 0x2100B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2100B4u;
label_2100b4:
    // 0x2100b4: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2100b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2100b8:
    // 0x2100b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2100b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2100bc:
    // 0x2100bc: 0x24a5ccf8  addiu       $a1, $a1, -0x3308
    ctx->pc = 0x2100bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954232));
label_2100c0:
    // 0x2100c0: 0x240f809  jalr        $s2
label_2100c4:
    if (ctx->pc == 0x2100C4u) {
        ctx->pc = 0x2100C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100C0u;
        // 0x2100c4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2100C8u;
        goto label_2100c8;
    }
    ctx->pc = 0x2100C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x2100C8u);
        ctx->pc = 0x2100C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100C0u;
        // 0x2100c4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2100C0u, 0x2100C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2100C8u;
label_2100c8:
    // 0x2100c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2100c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2100cc:
    // 0x2100cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2100ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2100d0:
    // 0x2100d0: 0xc084294  jal         func_210A50
label_2100d4:
    if (ctx->pc == 0x2100D4u) {
        ctx->pc = 0x2100D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100D0u;
        // 0x2100d4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2100D8u;
        goto label_2100d8;
    }
    ctx->pc = 0x2100D0u;
    SET_GPR_U32(ctx, 31, 0x2100D8u);
    ctx->pc = 0x2100D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2100D0u;
    // 0x2100d4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210A50u;
    { ctx->pc = 0x210a50; return; }
    ctx->pc = 0x2100D8u;
label_2100d8:
    // 0x2100d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2100d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2100dc:
    // 0x2100dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2100dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2100e0:
    // 0x2100e0: 0xc0842cc  jal         func_210B30
label_2100e4:
    if (ctx->pc == 0x2100E4u) {
        ctx->pc = 0x2100E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100E0u;
        // 0x2100e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2100E8u;
        goto label_2100e8;
    }
    ctx->pc = 0x2100E0u;
    SET_GPR_U32(ctx, 31, 0x2100E8u);
    ctx->pc = 0x2100E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2100E0u;
    // 0x2100e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210B30u;
    { ctx->pc = 0x210b30; return; }
    ctx->pc = 0x2100E8u;
label_2100e8:
    // 0x2100e8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_2100ec:
    if (ctx->pc == 0x2100ECu) {
        ctx->pc = 0x2100ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100E8u;
        // 0x2100ec: 0x3c120021  lui         $s2, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2100F0u;
        goto label_2100f0;
    }
    ctx->pc = 0x2100E8u;
    {
        const bool branch_taken_0x2100e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2100ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100E8u;
        // 0x2100ec: 0x3c120021  lui         $s2, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2100e8) {
            ctx->pc = 0x2100FCu;
            goto label_2100fc;
        }
    }
    ctx->pc = 0x2100F0u;
label_2100f0:
    // 0x2100f0: 0x3c120021  lui         $s2, 0x21
    ctx->pc = 0x2100f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)33 << 16));
label_2100f4:
    // 0x2100f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2100f8:
    if (ctx->pc == 0x2100F8u) {
        ctx->pc = 0x2100F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100F4u;
        // 0x2100f8: 0x26522380  addiu       $s2, $s2, 0x2380 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 9088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2100FCu;
        goto label_2100fc;
    }
    ctx->pc = 0x2100F4u;
    {
        const bool branch_taken_0x2100f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2100F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100F4u;
        // 0x2100f8: 0x26522380  addiu       $s2, $s2, 0x2380 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 9088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2100f4) {
            ctx->pc = 0x210100u;
            goto label_210100;
        }
    }
    ctx->pc = 0x2100FCu;
label_2100fc:
    // 0x2100fc: 0x265223c0  addiu       $s2, $s2, 0x23C0
    ctx->pc = 0x2100fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 9152));
label_210100:
    // 0x210100: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x210100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_210104:
    // 0x210104: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x210104u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210108:
    // 0x210108: 0x342139c0  ori         $at, $at, 0x39C0
    ctx->pc = 0x210108u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14784);
label_21010c:
    // 0x21010c: 0x221a021  addu        $s4, $s1, $at
    ctx->pc = 0x21010cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_210110:
    // 0x210110: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210114:
    // 0x210114: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x210114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_210118:
    // 0x210118: 0x240f809  jalr        $s2
label_21011c:
    if (ctx->pc == 0x21011Cu) {
        ctx->pc = 0x21011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210118u;
        // 0x21011c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210120u;
        goto label_210120;
    }
    ctx->pc = 0x210118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x210120u);
        ctx->pc = 0x21011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210118u;
        // 0x21011c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210118u, 0x210120u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210120u;
label_210120:
    // 0x210120: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210124:
    // 0x210124: 0x26850001  addiu       $a1, $s4, 0x1
    ctx->pc = 0x210124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_210128:
    // 0x210128: 0x240f809  jalr        $s2
label_21012c:
    if (ctx->pc == 0x21012Cu) {
        ctx->pc = 0x21012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210128u;
        // 0x21012c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210130u;
        goto label_210130;
    }
    ctx->pc = 0x210128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x210130u);
        ctx->pc = 0x21012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210128u;
        // 0x21012c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210128u, 0x210130u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210130u;
label_210130:
    // 0x210130: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x210130u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_210134:
    // 0x210134: 0x2a630028  slti        $v1, $s3, 0x28
    ctx->pc = 0x210134u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)40) ? 1 : 0);
label_210138:
    // 0x210138: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_21013c:
    if (ctx->pc == 0x21013Cu) {
        ctx->pc = 0x21013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210138u;
        // 0x21013c: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210140u;
        goto label_210140;
    }
    ctx->pc = 0x210138u;
    {
        const bool branch_taken_0x210138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210138u;
        // 0x21013c: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210138) {
            ctx->pc = 0x210110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210110;
        }
    }
    ctx->pc = 0x210140u;
label_210140:
    // 0x210140: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_210144:
    if (ctx->pc == 0x210144u) {
        ctx->pc = 0x210144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210140u;
        // 0x210144: 0x3c120021  lui         $s2, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210148u;
        goto label_210148;
    }
    ctx->pc = 0x210140u;
    {
        const bool branch_taken_0x210140 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x210144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210140u;
        // 0x210144: 0x3c120021  lui         $s2, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210140) {
            ctx->pc = 0x210154u;
            goto label_210154;
        }
    }
    ctx->pc = 0x210148u;
label_210148:
    // 0x210148: 0x3c120021  lui         $s2, 0x21
    ctx->pc = 0x210148u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)33 << 16));
label_21014c:
    // 0x21014c: 0x10000002  b           . + 4 + (0x2 << 2)
label_210150:
    if (ctx->pc == 0x210150u) {
        ctx->pc = 0x210150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21014Cu;
        // 0x210150: 0x26522380  addiu       $s2, $s2, 0x2380 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 9088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210154u;
        goto label_210154;
    }
    ctx->pc = 0x21014Cu;
    {
        const bool branch_taken_0x21014c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21014Cu;
        // 0x210150: 0x26522380  addiu       $s2, $s2, 0x2380 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 9088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21014c) {
            ctx->pc = 0x210158u;
            goto label_210158;
        }
    }
    ctx->pc = 0x210154u;
label_210154:
    // 0x210154: 0x265223c0  addiu       $s2, $s2, 0x23C0
    ctx->pc = 0x210154u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 9152));
label_210158:
    // 0x210158: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x210158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_21015c:
    // 0x21015c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x21015cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210160:
    // 0x210160: 0x34213a10  ori         $at, $at, 0x3A10
    ctx->pc = 0x210160u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14864);
label_210164:
    // 0x210164: 0x221a021  addu        $s4, $s1, $at
    ctx->pc = 0x210164u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_210168:
    // 0x210168: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x210168u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_21016c:
    // 0x21016c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x21016cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210170:
    // 0x210170: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210174:
    // 0x210174: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x210174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_210178:
    // 0x210178: 0x240f809  jalr        $s2
label_21017c:
    if (ctx->pc == 0x21017Cu) {
        ctx->pc = 0x21017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210178u;
        // 0x21017c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210180u;
        goto label_210180;
    }
    ctx->pc = 0x210178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x210180u);
        ctx->pc = 0x21017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210178u;
        // 0x21017c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210178u, 0x210180u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210180u;
label_210180:
    // 0x210180: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210184:
    // 0x210184: 0x26c50001  addiu       $a1, $s6, 0x1
    ctx->pc = 0x210184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_210188:
    // 0x210188: 0x240f809  jalr        $s2
label_21018c:
    if (ctx->pc == 0x21018Cu) {
        ctx->pc = 0x21018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210188u;
        // 0x21018c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210190u;
        goto label_210190;
    }
    ctx->pc = 0x210188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x210190u);
        ctx->pc = 0x21018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210188u;
        // 0x21018c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210188u, 0x210190u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210190u;
label_210190:
    // 0x210190: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x210190u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_210194:
    // 0x210194: 0x2aa30005  slti        $v1, $s5, 0x5
    ctx->pc = 0x210194u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
label_210198:
    // 0x210198: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_21019c:
    if (ctx->pc == 0x21019Cu) {
        ctx->pc = 0x21019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210198u;
        // 0x21019c: 0x26d60002  addiu       $s6, $s6, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2101A0u;
        goto label_2101a0;
    }
    ctx->pc = 0x210198u;
    {
        const bool branch_taken_0x210198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210198u;
        // 0x21019c: 0x26d60002  addiu       $s6, $s6, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210198) {
            ctx->pc = 0x210170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210170;
        }
    }
    ctx->pc = 0x2101A0u;
label_2101a0:
    // 0x2101a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2101a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2101a4:
    // 0x2101a4: 0x2685000a  addiu       $a1, $s4, 0xA
    ctx->pc = 0x2101a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 10));
label_2101a8:
    // 0x2101a8: 0x240f809  jalr        $s2
label_2101ac:
    if (ctx->pc == 0x2101ACu) {
        ctx->pc = 0x2101ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101A8u;
        // 0x2101ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2101B0u;
        goto label_2101b0;
    }
    ctx->pc = 0x2101A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x2101B0u);
        ctx->pc = 0x2101ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101A8u;
        // 0x2101ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2101A8u, 0x2101B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2101B0u;
label_2101b0:
    // 0x2101b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2101b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2101b4:
    // 0x2101b4: 0x2685000b  addiu       $a1, $s4, 0xB
    ctx->pc = 0x2101b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 11));
label_2101b8:
    // 0x2101b8: 0x240f809  jalr        $s2
label_2101bc:
    if (ctx->pc == 0x2101BCu) {
        ctx->pc = 0x2101BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101B8u;
        // 0x2101bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2101C0u;
        goto label_2101c0;
    }
    ctx->pc = 0x2101B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x2101C0u);
        ctx->pc = 0x2101BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101B8u;
        // 0x2101bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2101B8u, 0x2101C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2101C0u;
label_2101c0:
    // 0x2101c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2101c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2101c4:
    // 0x2101c4: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x2101c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_2101c8:
    // 0x2101c8: 0x240f809  jalr        $s2
label_2101cc:
    if (ctx->pc == 0x2101CCu) {
        ctx->pc = 0x2101CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101C8u;
        // 0x2101cc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2101D0u;
        goto label_2101d0;
    }
    ctx->pc = 0x2101C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x2101D0u);
        ctx->pc = 0x2101CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101C8u;
        // 0x2101cc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2101C8u, 0x2101D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2101D0u;
label_2101d0:
    // 0x2101d0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2101d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2101d4:
    // 0x2101d4: 0x2a6300ab  slti        $v1, $s3, 0xAB
    ctx->pc = 0x2101d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)171) ? 1 : 0);
label_2101d8:
    // 0x2101d8: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
label_2101dc:
    if (ctx->pc == 0x2101DCu) {
        ctx->pc = 0x2101DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101D8u;
        // 0x2101dc: 0x26940018  addiu       $s4, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2101E0u;
        goto label_2101e0;
    }
    ctx->pc = 0x2101D8u;
    {
        const bool branch_taken_0x2101d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2101DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101D8u;
        // 0x2101dc: 0x26940018  addiu       $s4, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2101d8) {
            ctx->pc = 0x210168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210168;
        }
    }
    ctx->pc = 0x2101E0u;
label_2101e0:
    // 0x2101e0: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_2101e4:
    if (ctx->pc == 0x2101E4u) {
        ctx->pc = 0x2101E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101E0u;
        // 0x2101e4: 0x3c120021  lui         $s2, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2101E8u;
        goto label_2101e8;
    }
    ctx->pc = 0x2101E0u;
    {
        const bool branch_taken_0x2101e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2101E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101E0u;
        // 0x2101e4: 0x3c120021  lui         $s2, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2101e0) {
            ctx->pc = 0x2101F4u;
            goto label_2101f4;
        }
    }
    ctx->pc = 0x2101E8u;
label_2101e8:
    // 0x2101e8: 0x3c120021  lui         $s2, 0x21
    ctx->pc = 0x2101e8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)33 << 16));
label_2101ec:
    // 0x2101ec: 0x10000002  b           . + 4 + (0x2 << 2)
label_2101f0:
    if (ctx->pc == 0x2101F0u) {
        ctx->pc = 0x2101F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101ECu;
        // 0x2101f0: 0x26522380  addiu       $s2, $s2, 0x2380 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 9088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2101F4u;
        goto label_2101f4;
    }
    ctx->pc = 0x2101ECu;
    {
        const bool branch_taken_0x2101ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2101F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101ECu;
        // 0x2101f0: 0x26522380  addiu       $s2, $s2, 0x2380 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 9088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2101ec) {
            ctx->pc = 0x2101F8u;
            goto label_2101f8;
        }
    }
    ctx->pc = 0x2101F4u;
label_2101f4:
    // 0x2101f4: 0x265223c0  addiu       $s2, $s2, 0x23C0
    ctx->pc = 0x2101f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 9152));
label_2101f8:
    // 0x2101f8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2101f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2101fc:
    // 0x2101fc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2101fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210200:
    // 0x210200: 0x34214a18  ori         $at, $at, 0x4A18
    ctx->pc = 0x210200u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18968);
label_210204:
    // 0x210204: 0x221a021  addu        $s4, $s1, $at
    ctx->pc = 0x210204u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_210208:
    // 0x210208: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21020c:
    // 0x21020c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x21020cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_210210:
    // 0x210210: 0x240f809  jalr        $s2
label_210214:
    if (ctx->pc == 0x210214u) {
        ctx->pc = 0x210214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210210u;
        // 0x210214: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210218u;
        goto label_210218;
    }
    ctx->pc = 0x210210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x210218u);
        ctx->pc = 0x210214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210210u;
        // 0x210214: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210210u, 0x210218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210218u;
label_210218:
    // 0x210218: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21021c:
    // 0x21021c: 0x26850001  addiu       $a1, $s4, 0x1
    ctx->pc = 0x21021cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_210220:
    // 0x210220: 0x240f809  jalr        $s2
label_210224:
    if (ctx->pc == 0x210224u) {
        ctx->pc = 0x210224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210220u;
        // 0x210224: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210228u;
        goto label_210228;
    }
    ctx->pc = 0x210220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x210228u);
        ctx->pc = 0x210224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210220u;
        // 0x210224: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210220u, 0x210228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210228u;
label_210228:
    // 0x210228: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x210228u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_21022c:
    // 0x21022c: 0x2a63000a  slti        $v1, $s3, 0xA
    ctx->pc = 0x21022cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
label_210230:
    // 0x210230: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_210234:
    if (ctx->pc == 0x210234u) {
        ctx->pc = 0x210234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210230u;
        // 0x210234: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210238u;
        goto label_210238;
    }
    ctx->pc = 0x210230u;
    {
        const bool branch_taken_0x210230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x210234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210230u;
        // 0x210234: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210230) {
            ctx->pc = 0x210208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210208;
        }
    }
    ctx->pc = 0x210238u;
label_210238:
    // 0x210238: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_21023c:
    if (ctx->pc == 0x21023Cu) {
        ctx->pc = 0x21023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210238u;
        // 0x21023c: 0x3c120021  lui         $s2, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210240u;
        goto label_210240;
    }
    ctx->pc = 0x210238u;
    {
        const bool branch_taken_0x210238 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x21023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210238u;
        // 0x21023c: 0x3c120021  lui         $s2, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210238) {
            ctx->pc = 0x21024Cu;
            goto label_21024c;
        }
    }
    ctx->pc = 0x210240u;
label_210240:
    // 0x210240: 0x3c120021  lui         $s2, 0x21
    ctx->pc = 0x210240u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)33 << 16));
label_210244:
    // 0x210244: 0x10000002  b           . + 4 + (0x2 << 2)
label_210248:
    if (ctx->pc == 0x210248u) {
        ctx->pc = 0x210248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210244u;
        // 0x210248: 0x26522380  addiu       $s2, $s2, 0x2380 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 9088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21024Cu;
        goto label_21024c;
    }
    ctx->pc = 0x210244u;
    {
        const bool branch_taken_0x210244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210244u;
        // 0x210248: 0x26522380  addiu       $s2, $s2, 0x2380 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 9088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210244) {
            ctx->pc = 0x210250u;
            goto label_210250;
        }
    }
    ctx->pc = 0x21024Cu;
label_21024c:
    // 0x21024c: 0x265223c0  addiu       $s2, $s2, 0x23C0
    ctx->pc = 0x21024cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 9152));
label_210250:
    // 0x210250: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x210250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_210254:
    // 0x210254: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x210254u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210258:
    // 0x210258: 0x34214a30  ori         $at, $at, 0x4A30
    ctx->pc = 0x210258u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18992);
label_21025c:
    // 0x21025c: 0x221a021  addu        $s4, $s1, $at
    ctx->pc = 0x21025cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_210260:
    // 0x210260: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x210260u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_210264:
    // 0x210264: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x210264u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210268:
    // 0x210268: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21026c:
    // 0x21026c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x21026cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_210270:
    // 0x210270: 0x240f809  jalr        $s2
label_210274:
    if (ctx->pc == 0x210274u) {
        ctx->pc = 0x210274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210270u;
        // 0x210274: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210278u;
        goto label_210278;
    }
    ctx->pc = 0x210270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x210278u);
        ctx->pc = 0x210274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210270u;
        // 0x210274: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210270u, 0x210278u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210278u;
label_210278:
    // 0x210278: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21027c:
    // 0x21027c: 0x26c50001  addiu       $a1, $s6, 0x1
    ctx->pc = 0x21027cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_210280:
    // 0x210280: 0x240f809  jalr        $s2
label_210284:
    if (ctx->pc == 0x210284u) {
        ctx->pc = 0x210284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210280u;
        // 0x210284: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210288u;
        goto label_210288;
    }
    ctx->pc = 0x210280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x210288u);
        ctx->pc = 0x210284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210280u;
        // 0x210284: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210280u, 0x210288u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210288u;
label_210288:
    // 0x210288: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x210288u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_21028c:
    // 0x21028c: 0x2aa30005  slti        $v1, $s5, 0x5
    ctx->pc = 0x21028cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
label_210290:
    // 0x210290: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_210294:
    if (ctx->pc == 0x210294u) {
        ctx->pc = 0x210294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210290u;
        // 0x210294: 0x26d60002  addiu       $s6, $s6, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210298u;
        goto label_210298;
    }
    ctx->pc = 0x210290u;
    {
        const bool branch_taken_0x210290 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x210294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210290u;
        // 0x210294: 0x26d60002  addiu       $s6, $s6, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210290) {
            ctx->pc = 0x210268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210268;
        }
    }
    ctx->pc = 0x210298u;
label_210298:
    // 0x210298: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21029c:
    // 0x21029c: 0x2685000a  addiu       $a1, $s4, 0xA
    ctx->pc = 0x21029cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 10));
label_2102a0:
    // 0x2102a0: 0x240f809  jalr        $s2
label_2102a4:
    if (ctx->pc == 0x2102A4u) {
        ctx->pc = 0x2102A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2102A0u;
        // 0x2102a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2102A8u;
        goto label_2102a8;
    }
    ctx->pc = 0x2102A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x2102A8u);
        ctx->pc = 0x2102A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2102A0u;
        // 0x2102a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2102A0u, 0x2102A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2102A8u;
label_2102a8:
    // 0x2102a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2102a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2102ac:
    // 0x2102ac: 0x2685000b  addiu       $a1, $s4, 0xB
    ctx->pc = 0x2102acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 11));
label_2102b0:
    // 0x2102b0: 0x240f809  jalr        $s2
label_2102b4:
    if (ctx->pc == 0x2102B4u) {
        ctx->pc = 0x2102B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2102B0u;
        // 0x2102b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2102B8u;
        goto label_2102b8;
    }
    ctx->pc = 0x2102B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x2102B8u);
        ctx->pc = 0x2102B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2102B0u;
        // 0x2102b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2102B0u, 0x2102B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2102B8u;
label_2102b8:
    // 0x2102b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2102b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2102bc:
    // 0x2102bc: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x2102bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_2102c0:
    // 0x2102c0: 0x240f809  jalr        $s2
label_2102c4:
    if (ctx->pc == 0x2102C4u) {
        ctx->pc = 0x2102C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2102C0u;
        // 0x2102c4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2102C8u;
        goto label_2102c8;
    }
    ctx->pc = 0x2102C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x2102C8u);
        ctx->pc = 0x2102C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2102C0u;
        // 0x2102c4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2102C0u, 0x2102C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2102C8u;
label_2102c8:
    // 0x2102c8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2102c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2102cc:
    // 0x2102cc: 0x2a63000f  slti        $v1, $s3, 0xF
    ctx->pc = 0x2102ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)15) ? 1 : 0);
    ctx->pc = 0x2102d0u;
    return;
}
