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

// Function: FUN_0019b850
// Address: 0x19b850 - 0x29b858
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b850_part501(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x28fa90u: goto label_28fa90;
        case 0x28fa94u: goto label_28fa94;
        case 0x28fa98u: goto label_28fa98;
        case 0x28fa9cu: goto label_28fa9c;
        case 0x28faa0u: goto label_28faa0;
        case 0x28faa4u: goto label_28faa4;
        case 0x28faa8u: goto label_28faa8;
        case 0x28faacu: goto label_28faac;
        case 0x28fab0u: goto label_28fab0;
        case 0x28fab4u: goto label_28fab4;
        case 0x28fab8u: goto label_28fab8;
        case 0x28fabcu: goto label_28fabc;
        case 0x28fac0u: goto label_28fac0;
        case 0x28fac4u: goto label_28fac4;
        case 0x28fac8u: goto label_28fac8;
        case 0x28faccu: goto label_28facc;
        case 0x28fad0u: goto label_28fad0;
        case 0x28fad4u: goto label_28fad4;
        case 0x28fad8u: goto label_28fad8;
        case 0x28fadcu: goto label_28fadc;
        case 0x28fae0u: goto label_28fae0;
        case 0x28fae4u: goto label_28fae4;
        case 0x28fae8u: goto label_28fae8;
        case 0x28faecu: goto label_28faec;
        case 0x28faf0u: goto label_28faf0;
        case 0x28faf4u: goto label_28faf4;
        case 0x28faf8u: goto label_28faf8;
        case 0x28fafcu: goto label_28fafc;
        case 0x28fb00u: goto label_28fb00;
        case 0x28fb04u: goto label_28fb04;
        case 0x28fb08u: goto label_28fb08;
        case 0x28fb0cu: goto label_28fb0c;
        case 0x28fb10u: goto label_28fb10;
        case 0x28fb14u: goto label_28fb14;
        case 0x28fb18u: goto label_28fb18;
        case 0x28fb1cu: goto label_28fb1c;
        case 0x28fb20u: goto label_28fb20;
        case 0x28fb24u: goto label_28fb24;
        case 0x28fb28u: goto label_28fb28;
        case 0x28fb2cu: goto label_28fb2c;
        case 0x28fb30u: goto label_28fb30;
        case 0x28fb34u: goto label_28fb34;
        case 0x28fb38u: goto label_28fb38;
        case 0x28fb3cu: goto label_28fb3c;
        case 0x28fb40u: goto label_28fb40;
        case 0x28fb44u: goto label_28fb44;
        case 0x28fb48u: goto label_28fb48;
        case 0x28fb4cu: goto label_28fb4c;
        case 0x28fb50u: goto label_28fb50;
        case 0x28fb54u: goto label_28fb54;
        case 0x28fb58u: goto label_28fb58;
        case 0x28fb5cu: goto label_28fb5c;
        case 0x28fb60u: goto label_28fb60;
        case 0x28fb64u: goto label_28fb64;
        case 0x28fb68u: goto label_28fb68;
        case 0x28fb6cu: goto label_28fb6c;
        case 0x28fb70u: goto label_28fb70;
        case 0x28fb74u: goto label_28fb74;
        case 0x28fb78u: goto label_28fb78;
        case 0x28fb7cu: goto label_28fb7c;
        case 0x28fb80u: goto label_28fb80;
        case 0x28fb84u: goto label_28fb84;
        case 0x28fb88u: goto label_28fb88;
        case 0x28fb8cu: goto label_28fb8c;
        case 0x28fb90u: goto label_28fb90;
        case 0x28fb94u: goto label_28fb94;
        case 0x28fb98u: goto label_28fb98;
        case 0x28fb9cu: goto label_28fb9c;
        case 0x28fba0u: goto label_28fba0;
        case 0x28fba4u: goto label_28fba4;
        case 0x28fba8u: goto label_28fba8;
        case 0x28fbacu: goto label_28fbac;
        case 0x28fbb0u: goto label_28fbb0;
        case 0x28fbb4u: goto label_28fbb4;
        case 0x28fbb8u: goto label_28fbb8;
        case 0x28fbbcu: goto label_28fbbc;
        case 0x28fbc0u: goto label_28fbc0;
        case 0x28fbc4u: goto label_28fbc4;
        case 0x28fbc8u: goto label_28fbc8;
        case 0x28fbccu: goto label_28fbcc;
        case 0x28fbd0u: goto label_28fbd0;
        case 0x28fbd4u: goto label_28fbd4;
        case 0x28fbd8u: goto label_28fbd8;
        case 0x28fbdcu: goto label_28fbdc;
        case 0x28fbe0u: goto label_28fbe0;
        case 0x28fbe4u: goto label_28fbe4;
        case 0x28fbe8u: goto label_28fbe8;
        case 0x28fbecu: goto label_28fbec;
        case 0x28fbf0u: goto label_28fbf0;
        case 0x28fbf4u: goto label_28fbf4;
        case 0x28fbf8u: goto label_28fbf8;
        case 0x28fbfcu: goto label_28fbfc;
        case 0x28fc00u: goto label_28fc00;
        case 0x28fc04u: goto label_28fc04;
        case 0x28fc08u: goto label_28fc08;
        case 0x28fc0cu: goto label_28fc0c;
        case 0x28fc10u: goto label_28fc10;
        case 0x28fc14u: goto label_28fc14;
        case 0x28fc18u: goto label_28fc18;
        case 0x28fc1cu: goto label_28fc1c;
        case 0x28fc20u: goto label_28fc20;
        case 0x28fc24u: goto label_28fc24;
        case 0x28fc28u: goto label_28fc28;
        case 0x28fc2cu: goto label_28fc2c;
        case 0x28fc30u: goto label_28fc30;
        case 0x28fc34u: goto label_28fc34;
        case 0x28fc38u: goto label_28fc38;
        case 0x28fc3cu: goto label_28fc3c;
        case 0x28fc40u: goto label_28fc40;
        case 0x28fc44u: goto label_28fc44;
        case 0x28fc48u: goto label_28fc48;
        case 0x28fc4cu: goto label_28fc4c;
        case 0x28fc50u: goto label_28fc50;
        case 0x28fc54u: goto label_28fc54;
        case 0x28fc58u: goto label_28fc58;
        case 0x28fc5cu: goto label_28fc5c;
        case 0x28fc60u: goto label_28fc60;
        case 0x28fc64u: goto label_28fc64;
        case 0x28fc68u: goto label_28fc68;
        case 0x28fc6cu: goto label_28fc6c;
        case 0x28fc70u: goto label_28fc70;
        case 0x28fc74u: goto label_28fc74;
        case 0x28fc78u: goto label_28fc78;
        case 0x28fc7cu: goto label_28fc7c;
        case 0x28fc80u: goto label_28fc80;
        case 0x28fc84u: goto label_28fc84;
        case 0x28fc88u: goto label_28fc88;
        case 0x28fc8cu: goto label_28fc8c;
        case 0x28fc90u: goto label_28fc90;
        case 0x28fc94u: goto label_28fc94;
        case 0x28fc98u: goto label_28fc98;
        case 0x28fc9cu: goto label_28fc9c;
        case 0x28fca0u: goto label_28fca0;
        case 0x28fca4u: goto label_28fca4;
        case 0x28fca8u: goto label_28fca8;
        case 0x28fcacu: goto label_28fcac;
        case 0x28fcb0u: goto label_28fcb0;
        case 0x28fcb4u: goto label_28fcb4;
        case 0x28fcb8u: goto label_28fcb8;
        case 0x28fcbcu: goto label_28fcbc;
        case 0x28fcc0u: goto label_28fcc0;
        case 0x28fcc4u: goto label_28fcc4;
        case 0x28fcc8u: goto label_28fcc8;
        case 0x28fcccu: goto label_28fccc;
        case 0x28fcd0u: goto label_28fcd0;
        case 0x28fcd4u: goto label_28fcd4;
        case 0x28fcd8u: goto label_28fcd8;
        case 0x28fcdcu: goto label_28fcdc;
        case 0x28fce0u: goto label_28fce0;
        case 0x28fce4u: goto label_28fce4;
        case 0x28fce8u: goto label_28fce8;
        case 0x28fcecu: goto label_28fcec;
        case 0x28fcf0u: goto label_28fcf0;
        case 0x28fcf4u: goto label_28fcf4;
        case 0x28fcf8u: goto label_28fcf8;
        case 0x28fcfcu: goto label_28fcfc;
        case 0x28fd00u: goto label_28fd00;
        case 0x28fd04u: goto label_28fd04;
        case 0x28fd08u: goto label_28fd08;
        case 0x28fd0cu: goto label_28fd0c;
        case 0x28fd10u: goto label_28fd10;
        case 0x28fd14u: goto label_28fd14;
        case 0x28fd18u: goto label_28fd18;
        case 0x28fd1cu: goto label_28fd1c;
        case 0x28fd20u: goto label_28fd20;
        case 0x28fd24u: goto label_28fd24;
        case 0x28fd28u: goto label_28fd28;
        case 0x28fd2cu: goto label_28fd2c;
        case 0x28fd30u: goto label_28fd30;
        case 0x28fd34u: goto label_28fd34;
        case 0x28fd38u: goto label_28fd38;
        case 0x28fd3cu: goto label_28fd3c;
        case 0x28fd40u: goto label_28fd40;
        case 0x28fd44u: goto label_28fd44;
        case 0x28fd48u: goto label_28fd48;
        case 0x28fd4cu: goto label_28fd4c;
        case 0x28fd50u: goto label_28fd50;
        case 0x28fd54u: goto label_28fd54;
        case 0x28fd58u: goto label_28fd58;
        case 0x28fd5cu: goto label_28fd5c;
        case 0x28fd60u: goto label_28fd60;
        case 0x28fd64u: goto label_28fd64;
        case 0x28fd68u: goto label_28fd68;
        case 0x28fd6cu: goto label_28fd6c;
        case 0x28fd70u: goto label_28fd70;
        case 0x28fd74u: goto label_28fd74;
        case 0x28fd78u: goto label_28fd78;
        case 0x28fd7cu: goto label_28fd7c;
        case 0x28fd80u: goto label_28fd80;
        case 0x28fd84u: goto label_28fd84;
        case 0x28fd88u: goto label_28fd88;
        case 0x28fd8cu: goto label_28fd8c;
        case 0x28fd90u: goto label_28fd90;
        case 0x28fd94u: goto label_28fd94;
        case 0x28fd98u: goto label_28fd98;
        case 0x28fd9cu: goto label_28fd9c;
        case 0x28fda0u: goto label_28fda0;
        case 0x28fda4u: goto label_28fda4;
        case 0x28fda8u: goto label_28fda8;
        case 0x28fdacu: goto label_28fdac;
        case 0x28fdb0u: goto label_28fdb0;
        case 0x28fdb4u: goto label_28fdb4;
        case 0x28fdb8u: goto label_28fdb8;
        case 0x28fdbcu: goto label_28fdbc;
        case 0x28fdc0u: goto label_28fdc0;
        case 0x28fdc4u: goto label_28fdc4;
        case 0x28fdc8u: goto label_28fdc8;
        case 0x28fdccu: goto label_28fdcc;
        case 0x28fdd0u: goto label_28fdd0;
        case 0x28fdd4u: goto label_28fdd4;
        case 0x28fdd8u: goto label_28fdd8;
        case 0x28fddcu: goto label_28fddc;
        case 0x28fde0u: goto label_28fde0;
        case 0x28fde4u: goto label_28fde4;
        case 0x28fde8u: goto label_28fde8;
        case 0x28fdecu: goto label_28fdec;
        case 0x28fdf0u: goto label_28fdf0;
        case 0x28fdf4u: goto label_28fdf4;
        case 0x28fdf8u: goto label_28fdf8;
        case 0x28fdfcu: goto label_28fdfc;
        case 0x28fe00u: goto label_28fe00;
        case 0x28fe04u: goto label_28fe04;
        case 0x28fe08u: goto label_28fe08;
        case 0x28fe0cu: goto label_28fe0c;
        case 0x28fe10u: goto label_28fe10;
        case 0x28fe14u: goto label_28fe14;
        case 0x28fe18u: goto label_28fe18;
        case 0x28fe1cu: goto label_28fe1c;
        case 0x28fe20u: goto label_28fe20;
        case 0x28fe24u: goto label_28fe24;
        case 0x28fe28u: goto label_28fe28;
        case 0x28fe2cu: goto label_28fe2c;
        case 0x28fe30u: goto label_28fe30;
        case 0x28fe34u: goto label_28fe34;
        case 0x28fe38u: goto label_28fe38;
        case 0x28fe3cu: goto label_28fe3c;
        case 0x28fe40u: goto label_28fe40;
        case 0x28fe44u: goto label_28fe44;
        case 0x28fe48u: goto label_28fe48;
        case 0x28fe4cu: goto label_28fe4c;
        case 0x28fe50u: goto label_28fe50;
        case 0x28fe54u: goto label_28fe54;
        case 0x28fe58u: goto label_28fe58;
        case 0x28fe5cu: goto label_28fe5c;
        case 0x28fe60u: goto label_28fe60;
        case 0x28fe64u: goto label_28fe64;
        case 0x28fe68u: goto label_28fe68;
        case 0x28fe6cu: goto label_28fe6c;
        case 0x28fe70u: goto label_28fe70;
        case 0x28fe74u: goto label_28fe74;
        case 0x28fe78u: goto label_28fe78;
        case 0x28fe7cu: goto label_28fe7c;
        case 0x28fe80u: goto label_28fe80;
        case 0x28fe84u: goto label_28fe84;
        case 0x28fe88u: goto label_28fe88;
        case 0x28fe8cu: goto label_28fe8c;
        case 0x28fe90u: goto label_28fe90;
        case 0x28fe94u: goto label_28fe94;
        case 0x28fe98u: goto label_28fe98;
        case 0x28fe9cu: goto label_28fe9c;
        case 0x28fea0u: goto label_28fea0;
        case 0x28fea4u: goto label_28fea4;
        case 0x28fea8u: goto label_28fea8;
        case 0x28feacu: goto label_28feac;
        case 0x28feb0u: goto label_28feb0;
        case 0x28feb4u: goto label_28feb4;
        case 0x28feb8u: goto label_28feb8;
        case 0x28febcu: goto label_28febc;
        case 0x28fec0u: goto label_28fec0;
        case 0x28fec4u: goto label_28fec4;
        case 0x28fec8u: goto label_28fec8;
        case 0x28feccu: goto label_28fecc;
        case 0x28fed0u: goto label_28fed0;
        case 0x28fed4u: goto label_28fed4;
        case 0x28fed8u: goto label_28fed8;
        case 0x28fedcu: goto label_28fedc;
        case 0x28fee0u: goto label_28fee0;
        case 0x28fee4u: goto label_28fee4;
        case 0x28fee8u: goto label_28fee8;
        case 0x28feecu: goto label_28feec;
        case 0x28fef0u: goto label_28fef0;
        case 0x28fef4u: goto label_28fef4;
        case 0x28fef8u: goto label_28fef8;
        case 0x28fefcu: goto label_28fefc;
        case 0x28ff00u: goto label_28ff00;
        case 0x28ff04u: goto label_28ff04;
        case 0x28ff08u: goto label_28ff08;
        case 0x28ff0cu: goto label_28ff0c;
        case 0x28ff10u: goto label_28ff10;
        case 0x28ff14u: goto label_28ff14;
        case 0x28ff18u: goto label_28ff18;
        case 0x28ff1cu: goto label_28ff1c;
        case 0x28ff20u: goto label_28ff20;
        case 0x28ff24u: goto label_28ff24;
        case 0x28ff28u: goto label_28ff28;
        case 0x28ff2cu: goto label_28ff2c;
        case 0x28ff30u: goto label_28ff30;
        case 0x28ff34u: goto label_28ff34;
        case 0x28ff38u: goto label_28ff38;
        case 0x28ff3cu: goto label_28ff3c;
        case 0x28ff40u: goto label_28ff40;
        case 0x28ff44u: goto label_28ff44;
        case 0x28ff48u: goto label_28ff48;
        case 0x28ff4cu: goto label_28ff4c;
        case 0x28ff50u: goto label_28ff50;
        case 0x28ff54u: goto label_28ff54;
        case 0x28ff58u: goto label_28ff58;
        case 0x28ff5cu: goto label_28ff5c;
        case 0x28ff60u: goto label_28ff60;
        case 0x28ff64u: goto label_28ff64;
        case 0x28ff68u: goto label_28ff68;
        case 0x28ff6cu: goto label_28ff6c;
        case 0x28ff70u: goto label_28ff70;
        case 0x28ff74u: goto label_28ff74;
        case 0x28ff78u: goto label_28ff78;
        case 0x28ff7cu: goto label_28ff7c;
        case 0x28ff80u: goto label_28ff80;
        case 0x28ff84u: goto label_28ff84;
        case 0x28ff88u: goto label_28ff88;
        case 0x28ff8cu: goto label_28ff8c;
        case 0x28ff90u: goto label_28ff90;
        case 0x28ff94u: goto label_28ff94;
        case 0x28ff98u: goto label_28ff98;
        case 0x28ff9cu: goto label_28ff9c;
        case 0x28ffa0u: goto label_28ffa0;
        case 0x28ffa4u: goto label_28ffa4;
        case 0x28ffa8u: goto label_28ffa8;
        case 0x28ffacu: goto label_28ffac;
        case 0x28ffb0u: goto label_28ffb0;
        case 0x28ffb4u: goto label_28ffb4;
        case 0x28ffb8u: goto label_28ffb8;
        case 0x28ffbcu: goto label_28ffbc;
        case 0x28ffc0u: goto label_28ffc0;
        case 0x28ffc4u: goto label_28ffc4;
        case 0x28ffc8u: goto label_28ffc8;
        case 0x28ffccu: goto label_28ffcc;
        case 0x28ffd0u: goto label_28ffd0;
        case 0x28ffd4u: goto label_28ffd4;
        case 0x28ffd8u: goto label_28ffd8;
        case 0x28ffdcu: goto label_28ffdc;
        case 0x28ffe0u: goto label_28ffe0;
        case 0x28ffe4u: goto label_28ffe4;
        case 0x28ffe8u: goto label_28ffe8;
        case 0x28ffecu: goto label_28ffec;
        case 0x28fff0u: goto label_28fff0;
        case 0x28fff4u: goto label_28fff4;
        case 0x28fff8u: goto label_28fff8;
        case 0x28fffcu: goto label_28fffc;
        case 0x290000u: goto label_290000;
        case 0x290004u: goto label_290004;
        case 0x290008u: goto label_290008;
        case 0x29000cu: goto label_29000c;
        case 0x290010u: goto label_290010;
        case 0x290014u: goto label_290014;
        case 0x290018u: goto label_290018;
        case 0x29001cu: goto label_29001c;
        case 0x290020u: goto label_290020;
        case 0x290024u: goto label_290024;
        case 0x290028u: goto label_290028;
        case 0x29002cu: goto label_29002c;
        case 0x290030u: goto label_290030;
        case 0x290034u: goto label_290034;
        case 0x290038u: goto label_290038;
        case 0x29003cu: goto label_29003c;
        case 0x290040u: goto label_290040;
        case 0x290044u: goto label_290044;
        case 0x290048u: goto label_290048;
        case 0x29004cu: goto label_29004c;
        case 0x290050u: goto label_290050;
        case 0x290054u: goto label_290054;
        case 0x290058u: goto label_290058;
        case 0x29005cu: goto label_29005c;
        case 0x290060u: goto label_290060;
        case 0x290064u: goto label_290064;
        case 0x290068u: goto label_290068;
        case 0x29006cu: goto label_29006c;
        case 0x290070u: goto label_290070;
        case 0x290074u: goto label_290074;
        case 0x290078u: goto label_290078;
        case 0x29007cu: goto label_29007c;
        case 0x290080u: goto label_290080;
        case 0x290084u: goto label_290084;
        case 0x290088u: goto label_290088;
        case 0x29008cu: goto label_29008c;
        case 0x290090u: goto label_290090;
        case 0x290094u: goto label_290094;
        case 0x290098u: goto label_290098;
        case 0x29009cu: goto label_29009c;
        case 0x2900a0u: goto label_2900a0;
        case 0x2900a4u: goto label_2900a4;
        case 0x2900a8u: goto label_2900a8;
        case 0x2900acu: goto label_2900ac;
        case 0x2900b0u: goto label_2900b0;
        case 0x2900b4u: goto label_2900b4;
        case 0x2900b8u: goto label_2900b8;
        case 0x2900bcu: goto label_2900bc;
        case 0x2900c0u: goto label_2900c0;
        case 0x2900c4u: goto label_2900c4;
        case 0x2900c8u: goto label_2900c8;
        case 0x2900ccu: goto label_2900cc;
        case 0x2900d0u: goto label_2900d0;
        case 0x2900d4u: goto label_2900d4;
        case 0x2900d8u: goto label_2900d8;
        case 0x2900dcu: goto label_2900dc;
        case 0x2900e0u: goto label_2900e0;
        case 0x2900e4u: goto label_2900e4;
        case 0x2900e8u: goto label_2900e8;
        case 0x2900ecu: goto label_2900ec;
        case 0x2900f0u: goto label_2900f0;
        case 0x2900f4u: goto label_2900f4;
        case 0x2900f8u: goto label_2900f8;
        case 0x2900fcu: goto label_2900fc;
        case 0x290100u: goto label_290100;
        case 0x290104u: goto label_290104;
        case 0x290108u: goto label_290108;
        case 0x29010cu: goto label_29010c;
        case 0x290110u: goto label_290110;
        case 0x290114u: goto label_290114;
        case 0x290118u: goto label_290118;
        case 0x29011cu: goto label_29011c;
        case 0x290120u: goto label_290120;
        case 0x290124u: goto label_290124;
        case 0x290128u: goto label_290128;
        case 0x29012cu: goto label_29012c;
        case 0x290130u: goto label_290130;
        case 0x290134u: goto label_290134;
        case 0x290138u: goto label_290138;
        case 0x29013cu: goto label_29013c;
        case 0x290140u: goto label_290140;
        case 0x290144u: goto label_290144;
        case 0x290148u: goto label_290148;
        case 0x29014cu: goto label_29014c;
        case 0x290150u: goto label_290150;
        case 0x290154u: goto label_290154;
        case 0x290158u: goto label_290158;
        case 0x29015cu: goto label_29015c;
        case 0x290160u: goto label_290160;
        case 0x290164u: goto label_290164;
        case 0x290168u: goto label_290168;
        case 0x29016cu: goto label_29016c;
        case 0x290170u: goto label_290170;
        case 0x290174u: goto label_290174;
        case 0x290178u: goto label_290178;
        case 0x29017cu: goto label_29017c;
        case 0x290180u: goto label_290180;
        case 0x290184u: goto label_290184;
        case 0x290188u: goto label_290188;
        case 0x29018cu: goto label_29018c;
        case 0x290190u: goto label_290190;
        case 0x290194u: goto label_290194;
        case 0x290198u: goto label_290198;
        case 0x29019cu: goto label_29019c;
        case 0x2901a0u: goto label_2901a0;
        case 0x2901a4u: goto label_2901a4;
        case 0x2901a8u: goto label_2901a8;
        case 0x2901acu: goto label_2901ac;
        case 0x2901b0u: goto label_2901b0;
        case 0x2901b4u: goto label_2901b4;
        case 0x2901b8u: goto label_2901b8;
        case 0x2901bcu: goto label_2901bc;
        case 0x2901c0u: goto label_2901c0;
        case 0x2901c4u: goto label_2901c4;
        case 0x2901c8u: goto label_2901c8;
        case 0x2901ccu: goto label_2901cc;
        case 0x2901d0u: goto label_2901d0;
        case 0x2901d4u: goto label_2901d4;
        case 0x2901d8u: goto label_2901d8;
        case 0x2901dcu: goto label_2901dc;
        case 0x2901e0u: goto label_2901e0;
        case 0x2901e4u: goto label_2901e4;
        case 0x2901e8u: goto label_2901e8;
        case 0x2901ecu: goto label_2901ec;
        case 0x2901f0u: goto label_2901f0;
        case 0x2901f4u: goto label_2901f4;
        case 0x2901f8u: goto label_2901f8;
        case 0x2901fcu: goto label_2901fc;
        case 0x290200u: goto label_290200;
        case 0x290204u: goto label_290204;
        case 0x290208u: goto label_290208;
        case 0x29020cu: goto label_29020c;
        case 0x290210u: goto label_290210;
        case 0x290214u: goto label_290214;
        case 0x290218u: goto label_290218;
        case 0x29021cu: goto label_29021c;
        case 0x290220u: goto label_290220;
        case 0x290224u: goto label_290224;
        case 0x290228u: goto label_290228;
        case 0x29022cu: goto label_29022c;
        case 0x290230u: goto label_290230;
        case 0x290234u: goto label_290234;
        case 0x290238u: goto label_290238;
        case 0x29023cu: goto label_29023c;
        case 0x290240u: goto label_290240;
        case 0x290244u: goto label_290244;
        case 0x290248u: goto label_290248;
        case 0x29024cu: goto label_29024c;
        case 0x290250u: goto label_290250;
        case 0x290254u: goto label_290254;
        case 0x290258u: goto label_290258;
        case 0x29025cu: goto label_29025c;
        default: return;
    }

label_28fa90:
    // 0x28fa90: 0x0  nop
    ctx->pc = 0x28fa90u;
    // NOP
label_28fa94:
    // 0x28fa94: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x28fa94u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28fa98:
    // 0x28fa98: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x28fa98u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28fa9c:
    // 0x28fa9c: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fa9cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FA9C raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28faa0:
    // 0x28faa0: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28faa0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FAA0 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28faa4:
    // 0x28faa4: 0x0  nop
    ctx->pc = 0x28faa4u;
    // NOP
label_28faa8:
    // 0x28faa8: 0x0  nop
    ctx->pc = 0x28faa8u;
    // NOP
label_28faac:
    // 0x28faac: 0x0  nop
    ctx->pc = 0x28faacu;
    // NOP
label_28fab0:
    // 0x28fab0: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x28fab0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28fab4:
    // 0x28fab4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x28fab4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28fab8:
    // 0x28fab8: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x28fab8u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28fabc:
    // 0x28fabc: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fabcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FABC raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fac0:
    // 0x28fac0: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fac0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28fac4:
    // 0x28fac4: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fac4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FAC4 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fac8:
    // 0x28fac8: 0x0  nop
    ctx->pc = 0x28fac8u;
    // NOP
label_28facc:
    // 0x28facc: 0xd  break       0
    ctx->pc = 0x28faccu;
    runtime->handleBreak(rdram, ctx);
label_28fad0:
    // 0x28fad0: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fad0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FAD0 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fad4:
    // 0x28fad4: 0x0  nop
    ctx->pc = 0x28fad4u;
    // NOP
label_28fad8:
    // 0x28fad8: 0x0  nop
    ctx->pc = 0x28fad8u;
    // NOP
label_28fadc:
    // 0x28fadc: 0x0  nop
    ctx->pc = 0x28fadcu;
    // NOP
label_28fae0:
    // 0x28fae0: 0x0  nop
    ctx->pc = 0x28fae0u;
    // NOP
label_28fae4:
    // 0x28fae4: 0x0  nop
    ctx->pc = 0x28fae4u;
    // NOP
label_28fae8:
    // 0x28fae8: 0xd  break       0
    ctx->pc = 0x28fae8u;
    runtime->handleBreak(rdram, ctx);
label_28faec:
    // 0x28faec: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x28faecu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28faf0:
    // 0x28faf0: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x28faf0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28faf4:
    // 0x28faf4: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28faf4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FAF4 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28faf8:
    // 0x28faf8: 0x0  nop
    ctx->pc = 0x28faf8u;
    // NOP
label_28fafc:
    // 0x28fafc: 0x0  nop
    ctx->pc = 0x28fafcu;
    // NOP
label_28fb00:
    // 0x28fb00: 0x0  nop
    ctx->pc = 0x28fb00u;
    // NOP
label_28fb04:
    // 0x28fb04: 0xd  break       0
    ctx->pc = 0x28fb04u;
    runtime->handleBreak(rdram, ctx);
label_28fb08:
    // 0x28fb08: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x28fb08u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28fb0c:
    // 0x28fb0c: 0x8  jr          $zero
label_28fb10:
    if (ctx->pc == 0x28FB10u) {
        ctx->pc = 0x28FB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FB0Cu;
        // 0x28fb10: 0xf  sync (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FB14u;
        goto label_28fb14;
    }
    ctx->pc = 0x28FB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28FB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FB0Cu;
        // 0x28fb10: 0xf  sync (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FB0Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28FB14u;
label_28fb14:
    // 0x28fb14: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x28fb14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28fb18:
    // 0x28fb18: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fb18u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28fb1c:
    // 0x28fb1c: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fb1cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FB1C raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fb20:
    // 0x28fb20: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fb20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28FB20 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fb24:
    // 0x28fb24: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fb24u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FB24 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fb28:
    // 0x28fb28: 0x0  nop
    ctx->pc = 0x28fb28u;
    // NOP
label_28fb2c:
    // 0x28fb2c: 0x0  nop
    ctx->pc = 0x28fb2cu;
    // NOP
label_28fb30:
    // 0x28fb30: 0x0  nop
    ctx->pc = 0x28fb30u;
    // NOP
label_28fb34:
    // 0x28fb34: 0x0  nop
    ctx->pc = 0x28fb34u;
    // NOP
label_28fb38:
    // 0x28fb38: 0x0  nop
    ctx->pc = 0x28fb38u;
    // NOP
label_28fb3c:
    // 0x28fb3c: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fb3cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28FB3C raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fb40:
    // 0x28fb40: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fb40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28FB40 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fb44:
    // 0x28fb44: 0x22  neg         $zero, $zero
    ctx->pc = 0x28fb44u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_28fb48:
    // 0x28fb48: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fb48u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FB48 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fb4c:
    // 0x28fb4c: 0x0  nop
    ctx->pc = 0x28fb4cu;
    // NOP
label_28fb50:
    // 0x28fb50: 0x0  nop
    ctx->pc = 0x28fb50u;
    // NOP
label_28fb54:
    // 0x28fb54: 0x0  nop
    ctx->pc = 0x28fb54u;
    // NOP
label_28fb58:
    // 0x28fb58: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fb58u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28FB58 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fb5c:
    // 0x28fb5c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fb5cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28FB5C raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fb60:
    // 0x28fb60: 0x22  neg         $zero, $zero
    ctx->pc = 0x28fb60u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_28fb64:
    // 0x28fb64: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fb64u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28fb68:
    // 0x28fb68: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fb68u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FB68 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fb6c:
    // 0x28fb6c: 0x0  nop
    ctx->pc = 0x28fb6cu;
    // NOP
label_28fb70:
    // 0x28fb70: 0x0  nop
    ctx->pc = 0x28fb70u;
    // NOP
label_28fb74:
    // 0x28fb74: 0xf  sync
    ctx->pc = 0x28fb74u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_28fb78:
    // 0x28fb78: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fb78u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FB78 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fb7c:
    // 0x28fb7c: 0x0  nop
    ctx->pc = 0x28fb7cu;
    // NOP
label_28fb80:
    // 0x28fb80: 0x0  nop
    ctx->pc = 0x28fb80u;
    // NOP
label_28fb84:
    // 0x28fb84: 0x0  nop
    ctx->pc = 0x28fb84u;
    // NOP
label_28fb88:
    // 0x28fb88: 0x0  nop
    ctx->pc = 0x28fb88u;
    // NOP
label_28fb8c:
    // 0x28fb8c: 0x0  nop
    ctx->pc = 0x28fb8cu;
    // NOP
label_28fb90:
    // 0x28fb90: 0xf  sync
    ctx->pc = 0x28fb90u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_28fb94:
    // 0x28fb94: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x28fb94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28fb98:
    // 0x28fb98: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fb98u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FB98 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fb9c:
    // 0x28fb9c: 0x0  nop
    ctx->pc = 0x28fb9cu;
    // NOP
label_28fba0:
    // 0x28fba0: 0x0  nop
    ctx->pc = 0x28fba0u;
    // NOP
label_28fba4:
    // 0x28fba4: 0x0  nop
    ctx->pc = 0x28fba4u;
    // NOP
label_28fba8:
    // 0x28fba8: 0x0  nop
    ctx->pc = 0x28fba8u;
    // NOP
label_28fbac:
    // 0x28fbac: 0xf  sync
    ctx->pc = 0x28fbacu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_28fbb0:
    // 0x28fbb0: 0x8  jr          $zero
label_28fbb4:
    if (ctx->pc == 0x28FBB4u) {
        ctx->pc = 0x28FBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FBB0u;
        // 0x28fbb4: 0x20  add         $zero, $zero, $zero (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FBB8u;
        goto label_28fbb8;
    }
    ctx->pc = 0x28FBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28FBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FBB0u;
        // 0x28fbb4: 0x20  add         $zero, $zero, $zero (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FBB0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28FBB8u;
label_28fbb8:
    // 0x28fbb8: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x28fbb8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28fbbc:
    // 0x28fbbc: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fbbcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28fbc0:
    // 0x28fbc0: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fbc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FBC0 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fbc4:
    // 0x28fbc4: 0x0  nop
    ctx->pc = 0x28fbc4u;
    // NOP
label_28fbc8:
    // 0x28fbc8: 0x10  mfhi        $zero
    ctx->pc = 0x28fbc8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28fbcc:
    // 0x28fbcc: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fbccu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FBCC raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fbd0:
    // 0x28fbd0: 0x0  nop
    ctx->pc = 0x28fbd0u;
    // NOP
label_28fbd4:
    // 0x28fbd4: 0x0  nop
    ctx->pc = 0x28fbd4u;
    // NOP
label_28fbd8:
    // 0x28fbd8: 0x0  nop
    ctx->pc = 0x28fbd8u;
    // NOP
label_28fbdc:
    // 0x28fbdc: 0x0  nop
    ctx->pc = 0x28fbdcu;
    // NOP
label_28fbe0:
    // 0x28fbe0: 0x0  nop
    ctx->pc = 0x28fbe0u;
    // NOP
label_28fbe4:
    // 0x28fbe4: 0x10  mfhi        $zero
    ctx->pc = 0x28fbe4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28fbe8:
    // 0x28fbe8: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x28fbe8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28fbec:
    // 0x28fbec: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x28fbecu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28fbf0:
    // 0x28fbf0: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fbf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FBF0 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fbf4:
    // 0x28fbf4: 0x0  nop
    ctx->pc = 0x28fbf4u;
    // NOP
label_28fbf8:
    // 0x28fbf8: 0x0  nop
    ctx->pc = 0x28fbf8u;
    // NOP
label_28fbfc:
    // 0x28fbfc: 0x0  nop
    ctx->pc = 0x28fbfcu;
    // NOP
label_28fc00:
    // 0x28fc00: 0x10  mfhi        $zero
    ctx->pc = 0x28fc00u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28fc04:
    // 0x28fc04: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x28fc04u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28fc08:
    // 0x28fc08: 0x8  jr          $zero
label_28fc0c:
    if (ctx->pc == 0x28FC0Cu) {
        ctx->pc = 0x28FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FC08u;
        // 0x28fc0c: 0xf  sync (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FC10u;
        goto label_28fc10;
    }
    ctx->pc = 0x28FC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FC08u;
        // 0x28fc0c: 0xf  sync (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FC08u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28FC10u;
label_28fc10:
    // 0x28fc10: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x28fc10u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28fc14:
    // 0x28fc14: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fc14u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28fc18:
    // 0x28fc18: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fc18u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FC18 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fc1c:
    // 0x28fc1c: 0x13  mtlo        $zero
    ctx->pc = 0x28fc1cu;
    ctx->lo = GPR_U64(ctx, 0);
label_28fc20:
    // 0x28fc20: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fc20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FC20 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fc24:
    // 0x28fc24: 0x0  nop
    ctx->pc = 0x28fc24u;
    // NOP
label_28fc28:
    // 0x28fc28: 0x0  nop
    ctx->pc = 0x28fc28u;
    // NOP
label_28fc2c:
    // 0x28fc2c: 0x0  nop
    ctx->pc = 0x28fc2cu;
    // NOP
label_28fc30:
    // 0x28fc30: 0x0  nop
    ctx->pc = 0x28fc30u;
    // NOP
label_28fc34:
    // 0x28fc34: 0x0  nop
    ctx->pc = 0x28fc34u;
    // NOP
label_28fc38:
    // 0x28fc38: 0x13  mtlo        $zero
    ctx->pc = 0x28fc38u;
    ctx->lo = GPR_U64(ctx, 0);
label_28fc3c:
    // 0x28fc3c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fc3cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28FC3C raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fc40:
    // 0x28fc40: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fc40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28FC40 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fc44:
    // 0x28fc44: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fc44u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FC44 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fc48:
    // 0x28fc48: 0x0  nop
    ctx->pc = 0x28fc48u;
    // NOP
label_28fc4c:
    // 0x28fc4c: 0x0  nop
    ctx->pc = 0x28fc4cu;
    // NOP
label_28fc50:
    // 0x28fc50: 0x0  nop
    ctx->pc = 0x28fc50u;
    // NOP
label_28fc54:
    // 0x28fc54: 0x13  mtlo        $zero
    ctx->pc = 0x28fc54u;
    ctx->lo = GPR_U64(ctx, 0);
label_28fc58:
    // 0x28fc58: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fc58u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28FC58 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fc5c:
    // 0x28fc5c: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fc5cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28FC5C raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fc60:
    // 0x28fc60: 0x22  neg         $zero, $zero
    ctx->pc = 0x28fc60u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_28fc64:
    // 0x28fc64: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fc64u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28fc68:
    // 0x28fc68: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fc68u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FC68 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fc6c:
    // 0x28fc6c: 0x0  nop
    ctx->pc = 0x28fc6cu;
    // NOP
label_28fc70:
    // 0x28fc70: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x28fc70u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28fc74:
    // 0x28fc74: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fc74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FC74 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fc78:
    // 0x28fc78: 0x0  nop
    ctx->pc = 0x28fc78u;
    // NOP
label_28fc7c:
    // 0x28fc7c: 0x0  nop
    ctx->pc = 0x28fc7cu;
    // NOP
label_28fc80:
    // 0x28fc80: 0x0  nop
    ctx->pc = 0x28fc80u;
    // NOP
label_28fc84:
    // 0x28fc84: 0x0  nop
    ctx->pc = 0x28fc84u;
    // NOP
label_28fc88:
    // 0x28fc88: 0x0  nop
    ctx->pc = 0x28fc88u;
    // NOP
label_28fc8c:
    // 0x28fc8c: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x28fc8cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28fc90:
    // 0x28fc90: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fc90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28FC90 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fc94:
    // 0x28fc94: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fc94u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28FC94 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fc98:
    // 0x28fc98: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fc98u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FC98 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fc9c:
    // 0x28fc9c: 0x0  nop
    ctx->pc = 0x28fc9cu;
    // NOP
label_28fca0:
    // 0x28fca0: 0x0  nop
    ctx->pc = 0x28fca0u;
    // NOP
label_28fca4:
    // 0x28fca4: 0x0  nop
    ctx->pc = 0x28fca4u;
    // NOP
label_28fca8:
    // 0x28fca8: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x28fca8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28fcac:
    // 0x28fcac: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fcacu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28FCAC raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fcb0:
    // 0x28fcb0: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fcb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28FCB0 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fcb4:
    // 0x28fcb4: 0x22  neg         $zero, $zero
    ctx->pc = 0x28fcb4u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_28fcb8:
    // 0x28fcb8: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fcb8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28fcbc:
    // 0x28fcbc: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fcbcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FCBC raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fcc0:
    // 0x28fcc0: 0x0  nop
    ctx->pc = 0x28fcc0u;
    // NOP
label_28fcc4:
    // 0x28fcc4: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fcc4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FCC4 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fcc8:
    // 0x28fcc8: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fcc8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FCC8 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fccc:
    // 0x28fccc: 0x0  nop
    ctx->pc = 0x28fcccu;
    // NOP
label_28fcd0:
    // 0x28fcd0: 0x0  nop
    ctx->pc = 0x28fcd0u;
    // NOP
label_28fcd4:
    // 0x28fcd4: 0x0  nop
    ctx->pc = 0x28fcd4u;
    // NOP
label_28fcd8:
    // 0x28fcd8: 0x0  nop
    ctx->pc = 0x28fcd8u;
    // NOP
label_28fcdc:
    // 0x28fcdc: 0x0  nop
    ctx->pc = 0x28fcdcu;
    // NOP
label_28fce0:
    // 0x28fce0: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fce0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FCE0 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fce4:
    // 0x28fce4: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x28fce4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28fce8:
    // 0x28fce8: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fce8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FCE8 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fcec:
    // 0x28fcec: 0x0  nop
    ctx->pc = 0x28fcecu;
    // NOP
label_28fcf0:
    // 0x28fcf0: 0x0  nop
    ctx->pc = 0x28fcf0u;
    // NOP
label_28fcf4:
    // 0x28fcf4: 0x0  nop
    ctx->pc = 0x28fcf4u;
    // NOP
label_28fcf8:
    // 0x28fcf8: 0x0  nop
    ctx->pc = 0x28fcf8u;
    // NOP
label_28fcfc:
    // 0x28fcfc: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fcfcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FCFC raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fd00:
    // 0x28fd00: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x28fd00u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28fd04:
    // 0x28fd04: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x28fd04u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28fd08:
    // 0x28fd08: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fd08u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28fd0c:
    // 0x28fd0c: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fd0cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FD0C raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fd10:
    // 0x28fd10: 0x0  nop
    ctx->pc = 0x28fd10u;
    // NOP
label_28fd14:
    // 0x28fd14: 0x0  nop
    ctx->pc = 0x28fd14u;
    // NOP
label_28fd18:
    // 0x28fd18: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x28fd18u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28fd1c:
    // 0x28fd1c: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fd1cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FD1C raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fd20:
    // 0x28fd20: 0x0  nop
    ctx->pc = 0x28fd20u;
    // NOP
label_28fd24:
    // 0x28fd24: 0x0  nop
    ctx->pc = 0x28fd24u;
    // NOP
label_28fd28:
    // 0x28fd28: 0x0  nop
    ctx->pc = 0x28fd28u;
    // NOP
label_28fd2c:
    // 0x28fd2c: 0x0  nop
    ctx->pc = 0x28fd2cu;
    // NOP
label_28fd30:
    // 0x28fd30: 0x0  nop
    ctx->pc = 0x28fd30u;
    // NOP
label_28fd34:
    // 0x28fd34: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x28fd34u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28fd38:
    // 0x28fd38: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x28fd38u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28fd3c:
    // 0x28fd3c: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fd3cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FD3C raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fd40:
    // 0x28fd40: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fd40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FD40 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fd44:
    // 0x28fd44: 0x0  nop
    ctx->pc = 0x28fd44u;
    // NOP
label_28fd48:
    // 0x28fd48: 0x0  nop
    ctx->pc = 0x28fd48u;
    // NOP
label_28fd4c:
    // 0x28fd4c: 0x0  nop
    ctx->pc = 0x28fd4cu;
    // NOP
label_28fd50:
    // 0x28fd50: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x28fd50u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28fd54:
    // 0x28fd54: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x28fd54u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28fd58:
    // 0x28fd58: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x28fd58u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28fd5c:
    // 0x28fd5c: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fd5cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FD5C raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fd60:
    // 0x28fd60: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fd60u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28fd64:
    // 0x28fd64: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fd64u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FD64 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fd68:
    // 0x28fd68: 0x0  nop
    ctx->pc = 0x28fd68u;
    // NOP
label_28fd6c:
    // 0x28fd6c: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x28fd6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28fd70:
    // 0x28fd70: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fd70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FD70 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fd74:
    // 0x28fd74: 0x0  nop
    ctx->pc = 0x28fd74u;
    // NOP
label_28fd78:
    // 0x28fd78: 0x0  nop
    ctx->pc = 0x28fd78u;
    // NOP
label_28fd7c:
    // 0x28fd7c: 0x0  nop
    ctx->pc = 0x28fd7cu;
    // NOP
label_28fd80:
    // 0x28fd80: 0x0  nop
    ctx->pc = 0x28fd80u;
    // NOP
label_28fd84:
    // 0x28fd84: 0x0  nop
    ctx->pc = 0x28fd84u;
    // NOP
label_28fd88:
    // 0x28fd88: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x28fd88u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28fd8c:
    // 0x28fd8c: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x28fd8cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28fd90:
    // 0x28fd90: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fd90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FD90 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fd94:
    // 0x28fd94: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fd94u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FD94 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fd98:
    // 0x28fd98: 0x0  nop
    ctx->pc = 0x28fd98u;
    // NOP
label_28fd9c:
    // 0x28fd9c: 0x0  nop
    ctx->pc = 0x28fd9cu;
    // NOP
label_28fda0:
    // 0x28fda0: 0x0  nop
    ctx->pc = 0x28fda0u;
    // NOP
label_28fda4:
    // 0x28fda4: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x28fda4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28fda8:
    // 0x28fda8: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x28fda8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28fdac:
    // 0x28fdac: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x28fdacu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28fdb0:
    // 0x28fdb0: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fdb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FDB0 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fdb4:
    // 0x28fdb4: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fdb4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28fdb8:
    // 0x28fdb8: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fdb8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FDB8 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fdbc:
    // 0x28fdbc: 0x0  nop
    ctx->pc = 0x28fdbcu;
    // NOP
label_28fdc0:
    // 0x28fdc0: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x28fdc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28fdc4:
    // 0x28fdc4: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fdc4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FDC4 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fdc8:
    // 0x28fdc8: 0x0  nop
    ctx->pc = 0x28fdc8u;
    // NOP
label_28fdcc:
    // 0x28fdcc: 0x0  nop
    ctx->pc = 0x28fdccu;
    // NOP
label_28fdd0:
    // 0x28fdd0: 0x0  nop
    ctx->pc = 0x28fdd0u;
    // NOP
label_28fdd4:
    // 0x28fdd4: 0x0  nop
    ctx->pc = 0x28fdd4u;
    // NOP
label_28fdd8:
    // 0x28fdd8: 0x0  nop
    ctx->pc = 0x28fdd8u;
    // NOP
label_28fddc:
    // 0x28fddc: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x28fddcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28fde0:
    // 0x28fde0: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x28fde0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28fde4:
    // 0x28fde4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x28fde4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28fde8:
    // 0x28fde8: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fde8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FDE8 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fdec:
    // 0x28fdec: 0x0  nop
    ctx->pc = 0x28fdecu;
    // NOP
label_28fdf0:
    // 0x28fdf0: 0x0  nop
    ctx->pc = 0x28fdf0u;
    // NOP
label_28fdf4:
    // 0x28fdf4: 0x0  nop
    ctx->pc = 0x28fdf4u;
    // NOP
label_28fdf8:
    // 0x28fdf8: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x28fdf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28fdfc:
    // 0x28fdfc: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x28fdfcu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28fe00:
    // 0x28fe00: 0x8  jr          $zero
label_28fe04:
    if (ctx->pc == 0x28FE04u) {
        ctx->pc = 0x28FE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FE00u;
        // 0x28fe04: 0xf  sync (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FE08u;
        goto label_28fe08;
    }
    ctx->pc = 0x28FE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28FE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FE00u;
        // 0x28fe04: 0xf  sync (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FE00u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28FE08u;
label_28fe08:
    // 0x28fe08: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x28fe08u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28fe0c:
    // 0x28fe0c: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fe0cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28fe10:
    // 0x28fe10: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fe10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FE10 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fe14:
    // 0x28fe14: 0x19  multu       $zero, $zero
    ctx->pc = 0x28fe14u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28fe18:
    // 0x28fe18: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fe18u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FE18 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fe1c:
    // 0x28fe1c: 0x0  nop
    ctx->pc = 0x28fe1cu;
    // NOP
label_28fe20:
    // 0x28fe20: 0x0  nop
    ctx->pc = 0x28fe20u;
    // NOP
label_28fe24:
    // 0x28fe24: 0x0  nop
    ctx->pc = 0x28fe24u;
    // NOP
label_28fe28:
    // 0x28fe28: 0x0  nop
    ctx->pc = 0x28fe28u;
    // NOP
label_28fe2c:
    // 0x28fe2c: 0x0  nop
    ctx->pc = 0x28fe2cu;
    // NOP
label_28fe30:
    // 0x28fe30: 0x19  multu       $zero, $zero
    ctx->pc = 0x28fe30u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28fe34:
    // 0x28fe34: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x28fe34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28fe38:
    // 0x28fe38: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x28fe38u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28fe3c:
    // 0x28fe3c: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fe3cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FE3C raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fe40:
    // 0x28fe40: 0x0  nop
    ctx->pc = 0x28fe40u;
    // NOP
label_28fe44:
    // 0x28fe44: 0x0  nop
    ctx->pc = 0x28fe44u;
    // NOP
label_28fe48:
    // 0x28fe48: 0x0  nop
    ctx->pc = 0x28fe48u;
    // NOP
label_28fe4c:
    // 0x28fe4c: 0x19  multu       $zero, $zero
    ctx->pc = 0x28fe4cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28fe50:
    // 0x28fe50: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x28fe50u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28fe54:
    // 0x28fe54: 0x8  jr          $zero
label_28fe58:
    if (ctx->pc == 0x28FE58u) {
        ctx->pc = 0x28FE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FE54u;
        // 0x28fe58: 0xf  sync (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FE5Cu;
        goto label_28fe5c;
    }
    ctx->pc = 0x28FE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28FE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FE54u;
        // 0x28fe58: 0xf  sync (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FE54u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28FE5Cu;
label_28fe5c:
    // 0x28fe5c: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x28fe5cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28fe60:
    // 0x28fe60: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fe60u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28fe64:
    // 0x28fe64: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fe64u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FE64 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fe68:
    // 0x28fe68: 0x1a  div         $zero, $zero, $zero
    ctx->pc = 0x28fe68u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_28fe6c:
    // 0x28fe6c: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fe6cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FE6C raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fe70:
    // 0x28fe70: 0x0  nop
    ctx->pc = 0x28fe70u;
    // NOP
label_28fe74:
    // 0x28fe74: 0x0  nop
    ctx->pc = 0x28fe74u;
    // NOP
label_28fe78:
    // 0x28fe78: 0x0  nop
    ctx->pc = 0x28fe78u;
    // NOP
label_28fe7c:
    // 0x28fe7c: 0x0  nop
    ctx->pc = 0x28fe7cu;
    // NOP
label_28fe80:
    // 0x28fe80: 0x0  nop
    ctx->pc = 0x28fe80u;
    // NOP
label_28fe84:
    // 0x28fe84: 0x1a  div         $zero, $zero, $zero
    ctx->pc = 0x28fe84u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_28fe88:
    // 0x28fe88: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fe88u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28FE88 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fe8c:
    // 0x28fe8c: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fe8cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FE8C raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fe90:
    // 0x28fe90: 0x0  nop
    ctx->pc = 0x28fe90u;
    // NOP
label_28fe94:
    // 0x28fe94: 0x0  nop
    ctx->pc = 0x28fe94u;
    // NOP
label_28fe98:
    // 0x28fe98: 0x0  nop
    ctx->pc = 0x28fe98u;
    // NOP
label_28fe9c:
    // 0x28fe9c: 0x0  nop
    ctx->pc = 0x28fe9cu;
    // NOP
label_28fea0:
    // 0x28fea0: 0x1a  div         $zero, $zero, $zero
    ctx->pc = 0x28fea0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_28fea4:
    // 0x28fea4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fea4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28FEA4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fea8:
    // 0x28fea8: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fea8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28FEA8 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28feac:
    // 0x28feac: 0x22  neg         $zero, $zero
    ctx->pc = 0x28feacu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_28feb0:
    // 0x28feb0: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28feb0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28feb4:
    // 0x28feb4: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28feb4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FEB4 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28feb8:
    // 0x28feb8: 0x0  nop
    ctx->pc = 0x28feb8u;
    // NOP
label_28febc:
    // 0x28febc: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x28febcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x28FEBC raw=0x0000001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fec0:
    // 0x28fec0: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fec0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FEC0 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fec4:
    // 0x28fec4: 0x0  nop
    ctx->pc = 0x28fec4u;
    // NOP
label_28fec8:
    // 0x28fec8: 0x0  nop
    ctx->pc = 0x28fec8u;
    // NOP
label_28fecc:
    // 0x28fecc: 0x0  nop
    ctx->pc = 0x28feccu;
    // NOP
label_28fed0:
    // 0x28fed0: 0x0  nop
    ctx->pc = 0x28fed0u;
    // NOP
label_28fed4:
    // 0x28fed4: 0x0  nop
    ctx->pc = 0x28fed4u;
    // NOP
label_28fed8:
    // 0x28fed8: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x28fed8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x28FED8 raw=0x0000001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fedc:
    // 0x28fedc: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x28fedcu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28fee0:
    // 0x28fee0: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x28fee0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28fee4:
    // 0x28fee4: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fee4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FEE4 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fee8:
    // 0x28fee8: 0x0  nop
    ctx->pc = 0x28fee8u;
    // NOP
label_28feec:
    // 0x28feec: 0x0  nop
    ctx->pc = 0x28feecu;
    // NOP
label_28fef0:
    // 0x28fef0: 0x0  nop
    ctx->pc = 0x28fef0u;
    // NOP
label_28fef4:
    // 0x28fef4: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x28fef4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x28FEF4 raw=0x0000001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fef8:
    // 0x28fef8: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x28fef8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28fefc:
    // 0x28fefc: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x28fefcu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28ff00:
    // 0x28ff00: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ff00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FF00 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ff04:
    // 0x28ff04: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ff04u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28ff08:
    // 0x28ff08: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ff08u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FF08 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ff0c:
    // 0x28ff0c: 0x0  nop
    ctx->pc = 0x28ff0cu;
    // NOP
label_28ff10:
    // 0x28ff10: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28ff10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28FF10 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ff14:
    // 0x28ff14: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ff14u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FF14 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ff18:
    // 0x28ff18: 0x0  nop
    ctx->pc = 0x28ff18u;
    // NOP
label_28ff1c:
    // 0x28ff1c: 0x0  nop
    ctx->pc = 0x28ff1cu;
    // NOP
label_28ff20:
    // 0x28ff20: 0x0  nop
    ctx->pc = 0x28ff20u;
    // NOP
label_28ff24:
    // 0x28ff24: 0x0  nop
    ctx->pc = 0x28ff24u;
    // NOP
label_28ff28:
    // 0x28ff28: 0x0  nop
    ctx->pc = 0x28ff28u;
    // NOP
label_28ff2c:
    // 0x28ff2c: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28ff2cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28FF2C raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ff30:
    // 0x28ff30: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x28ff30u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28ff34:
    // 0x28ff34: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ff34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FF34 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ff38:
    // 0x28ff38: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ff38u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FF38 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ff3c:
    // 0x28ff3c: 0x0  nop
    ctx->pc = 0x28ff3cu;
    // NOP
label_28ff40:
    // 0x28ff40: 0x0  nop
    ctx->pc = 0x28ff40u;
    // NOP
label_28ff44:
    // 0x28ff44: 0x0  nop
    ctx->pc = 0x28ff44u;
    // NOP
label_28ff48:
    // 0x28ff48: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28ff48u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28FF48 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ff4c:
    // 0x28ff4c: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x28ff4cu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28ff50:
    // 0x28ff50: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x28ff50u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28ff54:
    // 0x28ff54: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ff54u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FF54 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ff58:
    // 0x28ff58: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ff58u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28ff5c:
    // 0x28ff5c: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ff5cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FF5C raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ff60:
    // 0x28ff60: 0x0  nop
    ctx->pc = 0x28ff60u;
    // NOP
label_28ff64:
    // 0x28ff64: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x28ff64u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x28FF64 raw=0x0000001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ff68:
    // 0x28ff68: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ff68u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FF68 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ff6c:
    // 0x28ff6c: 0x0  nop
    ctx->pc = 0x28ff6cu;
    // NOP
label_28ff70:
    // 0x28ff70: 0x0  nop
    ctx->pc = 0x28ff70u;
    // NOP
label_28ff74:
    // 0x28ff74: 0x0  nop
    ctx->pc = 0x28ff74u;
    // NOP
label_28ff78:
    // 0x28ff78: 0x0  nop
    ctx->pc = 0x28ff78u;
    // NOP
label_28ff7c:
    // 0x28ff7c: 0x0  nop
    ctx->pc = 0x28ff7cu;
    // NOP
label_28ff80:
    // 0x28ff80: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x28ff80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x28FF80 raw=0x0000001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ff84:
    // 0x28ff84: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x28ff84u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28ff88:
    // 0x28ff88: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ff88u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FF88 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ff8c:
    // 0x28ff8c: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ff8cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FF8C raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ff90:
    // 0x28ff90: 0x0  nop
    ctx->pc = 0x28ff90u;
    // NOP
label_28ff94:
    // 0x28ff94: 0x0  nop
    ctx->pc = 0x28ff94u;
    // NOP
label_28ff98:
    // 0x28ff98: 0x0  nop
    ctx->pc = 0x28ff98u;
    // NOP
label_28ff9c:
    // 0x28ff9c: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x28ff9cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x28FF9C raw=0x0000001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ffa0:
    // 0x28ffa0: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x28ffa0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28ffa4:
    // 0x28ffa4: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x28ffa4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28ffa8:
    // 0x28ffa8: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ffa8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FFA8 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ffac:
    // 0x28ffac: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ffacu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28ffb0:
    // 0x28ffb0: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ffb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FFB0 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ffb4:
    // 0x28ffb4: 0x0  nop
    ctx->pc = 0x28ffb4u;
    // NOP
label_28ffb8:
    // 0x28ffb8: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x28ffb8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x28FFB8 raw=0x0000001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ffbc:
    // 0x28ffbc: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ffbcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FFBC raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ffc0:
    // 0x28ffc0: 0x0  nop
    ctx->pc = 0x28ffc0u;
    // NOP
label_28ffc4:
    // 0x28ffc4: 0x0  nop
    ctx->pc = 0x28ffc4u;
    // NOP
label_28ffc8:
    // 0x28ffc8: 0x0  nop
    ctx->pc = 0x28ffc8u;
    // NOP
label_28ffcc:
    // 0x28ffcc: 0x0  nop
    ctx->pc = 0x28ffccu;
    // NOP
label_28ffd0:
    // 0x28ffd0: 0x0  nop
    ctx->pc = 0x28ffd0u;
    // NOP
label_28ffd4:
    // 0x28ffd4: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x28ffd4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x28FFD4 raw=0x0000001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ffd8:
    // 0x28ffd8: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x28ffd8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28ffdc:
    // 0x28ffdc: 0xf  sync
    ctx->pc = 0x28ffdcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_28ffe0:
    // 0x28ffe0: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x28ffe0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28ffe4:
    // 0x28ffe4: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ffe4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FFE4 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ffe8:
    // 0x28ffe8: 0x0  nop
    ctx->pc = 0x28ffe8u;
    // NOP
label_28ffec:
    // 0x28ffec: 0x0  nop
    ctx->pc = 0x28ffecu;
    // NOP
label_28fff0:
    // 0x28fff0: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x28fff0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x28FFF0 raw=0x0000001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fff4:
    // 0x28fff4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x28fff4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28fff8:
    // 0x28fff8: 0x8  jr          $zero
label_28fffc:
    if (ctx->pc == 0x28FFFCu) {
        ctx->pc = 0x28FFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FFF8u;
        // 0x28fffc: 0xf  sync (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = 0x290000u;
        goto label_290000;
    }
    ctx->pc = 0x28FFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28FFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FFF8u;
        // 0x28fffc: 0xf  sync (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FFF8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x290000u;
label_290000:
    // 0x290000: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x290000u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_290004:
    // 0x290004: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290004u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_290008:
    // 0x290008: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290008u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x290008 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29000c:
    // 0x29000c: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x29000cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_290010:
    // 0x290010: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290010u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x290010 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290014:
    // 0x290014: 0x0  nop
    ctx->pc = 0x290014u;
    // NOP
label_290018:
    // 0x290018: 0x0  nop
    ctx->pc = 0x290018u;
    // NOP
label_29001c:
    // 0x29001c: 0x0  nop
    ctx->pc = 0x29001cu;
    // NOP
label_290020:
    // 0x290020: 0x0  nop
    ctx->pc = 0x290020u;
    // NOP
label_290024:
    // 0x290024: 0x0  nop
    ctx->pc = 0x290024u;
    // NOP
label_290028:
    // 0x290028: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x290028u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29002c:
    // 0x29002c: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29002cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_290030:
    // 0x290030: 0xf  sync
    ctx->pc = 0x290030u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_290034:
    // 0x290034: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290034u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x290034 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290038:
    // 0x290038: 0x0  nop
    ctx->pc = 0x290038u;
    // NOP
label_29003c:
    // 0x29003c: 0x0  nop
    ctx->pc = 0x29003cu;
    // NOP
label_290040:
    // 0x290040: 0x0  nop
    ctx->pc = 0x290040u;
    // NOP
label_290044:
    // 0x290044: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x290044u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_290048:
    // 0x290048: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x290048u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29004c:
    // 0x29004c: 0x8  jr          $zero
label_290050:
    if (ctx->pc == 0x290050u) {
        ctx->pc = 0x290050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29004Cu;
        // 0x290050: 0xf  sync (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = 0x290054u;
        goto label_290054;
    }
    ctx->pc = 0x29004Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x290050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29004Cu;
        // 0x290050: 0xf  sync (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29004Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x290054u;
label_290054:
    // 0x290054: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x290054u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_290058:
    // 0x290058: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290058u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29005c:
    // 0x29005c: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29005cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29005C raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290060:
    // 0x290060: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x290060u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_290064:
    // 0x290064: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290064u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x290064 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290068:
    // 0x290068: 0x0  nop
    ctx->pc = 0x290068u;
    // NOP
label_29006c:
    // 0x29006c: 0x0  nop
    ctx->pc = 0x29006cu;
    // NOP
label_290070:
    // 0x290070: 0x0  nop
    ctx->pc = 0x290070u;
    // NOP
label_290074:
    // 0x290074: 0x0  nop
    ctx->pc = 0x290074u;
    // NOP
label_290078:
    // 0x290078: 0x0  nop
    ctx->pc = 0x290078u;
    // NOP
label_29007c:
    // 0x29007c: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x29007cu;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_290080:
    // 0x290080: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290080u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x290080 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290084:
    // 0x290084: 0x22  neg         $zero, $zero
    ctx->pc = 0x290084u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_290088:
    // 0x290088: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290088u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x290088 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29008c:
    // 0x29008c: 0x0  nop
    ctx->pc = 0x29008cu;
    // NOP
label_290090:
    // 0x290090: 0x0  nop
    ctx->pc = 0x290090u;
    // NOP
label_290094:
    // 0x290094: 0x0  nop
    ctx->pc = 0x290094u;
    // NOP
label_290098:
    // 0x290098: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x290098u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29009c:
    // 0x29009c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29009cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29009C raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2900a0:
    // 0x2900a0: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2900a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2900A0 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2900a4:
    // 0x2900a4: 0x22  neg         $zero, $zero
    ctx->pc = 0x2900a4u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_2900a8:
    // 0x2900a8: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2900a8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2900ac:
    // 0x2900ac: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2900acu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2900AC raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2900b0:
    // 0x2900b0: 0x0  nop
    ctx->pc = 0x2900b0u;
    // NOP
label_2900b4:
    // 0x2900b4: 0x22  neg         $zero, $zero
    ctx->pc = 0x2900b4u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_2900b8:
    // 0x2900b8: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2900b8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2900B8 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2900bc:
    // 0x2900bc: 0x0  nop
    ctx->pc = 0x2900bcu;
    // NOP
label_2900c0:
    // 0x2900c0: 0x0  nop
    ctx->pc = 0x2900c0u;
    // NOP
label_2900c4:
    // 0x2900c4: 0x0  nop
    ctx->pc = 0x2900c4u;
    // NOP
label_2900c8:
    // 0x2900c8: 0x0  nop
    ctx->pc = 0x2900c8u;
    // NOP
label_2900cc:
    // 0x2900cc: 0x0  nop
    ctx->pc = 0x2900ccu;
    // NOP
label_2900d0:
    // 0x2900d0: 0x22  neg         $zero, $zero
    ctx->pc = 0x2900d0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_2900d4:
    // 0x2900d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2900d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2900D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2900d8:
    // 0x2900d8: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2900d8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2900D8 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2900dc:
    // 0x2900dc: 0x0  nop
    ctx->pc = 0x2900dcu;
    // NOP
label_2900e0:
    // 0x2900e0: 0x0  nop
    ctx->pc = 0x2900e0u;
    // NOP
label_2900e4:
    // 0x2900e4: 0x0  nop
    ctx->pc = 0x2900e4u;
    // NOP
label_2900e8:
    // 0x2900e8: 0x0  nop
    ctx->pc = 0x2900e8u;
    // NOP
label_2900ec:
    // 0x2900ec: 0x22  neg         $zero, $zero
    ctx->pc = 0x2900ecu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_2900f0:
    // 0x2900f0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2900f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2900F0 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2900f4:
    // 0x2900f4: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2900f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2900F4 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2900f8:
    // 0x2900f8: 0x22  neg         $zero, $zero
    ctx->pc = 0x2900f8u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_2900fc:
    // 0x2900fc: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2900fcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_290100:
    // 0x290100: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290100u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x290100 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290104:
    // 0x290104: 0x0  nop
    ctx->pc = 0x290104u;
    // NOP
label_290108:
    // 0x290108: 0x25  move        $zero, $zero
    ctx->pc = 0x290108u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_29010c:
    // 0x29010c: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29010cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29010C raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290110:
    // 0x290110: 0x0  nop
    ctx->pc = 0x290110u;
    // NOP
label_290114:
    // 0x290114: 0x0  nop
    ctx->pc = 0x290114u;
    // NOP
label_290118:
    // 0x290118: 0x0  nop
    ctx->pc = 0x290118u;
    // NOP
label_29011c:
    // 0x29011c: 0x0  nop
    ctx->pc = 0x29011cu;
    // NOP
label_290120:
    // 0x290120: 0x0  nop
    ctx->pc = 0x290120u;
    // NOP
label_290124:
    // 0x290124: 0x25  move        $zero, $zero
    ctx->pc = 0x290124u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_290128:
    // 0x290128: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x290128u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29012c:
    // 0x29012c: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x29012cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_290130:
    // 0x290130: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290130u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x290130 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290134:
    // 0x290134: 0x0  nop
    ctx->pc = 0x290134u;
    // NOP
label_290138:
    // 0x290138: 0x0  nop
    ctx->pc = 0x290138u;
    // NOP
label_29013c:
    // 0x29013c: 0x0  nop
    ctx->pc = 0x29013cu;
    // NOP
label_290140:
    // 0x290140: 0x25  move        $zero, $zero
    ctx->pc = 0x290140u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_290144:
    // 0x290144: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x290144u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_290148:
    // 0x290148: 0x8  jr          $zero
label_29014c:
    if (ctx->pc == 0x29014Cu) {
        ctx->pc = 0x29014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290148u;
        // 0x29014c: 0xf  sync (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = 0x290150u;
        goto label_290150;
    }
    ctx->pc = 0x290148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290148u;
        // 0x29014c: 0xf  sync (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290148u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x290150u;
label_290150:
    // 0x290150: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x290150u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_290154:
    // 0x290154: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290154u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_290158:
    // 0x290158: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290158u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x290158 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29015c:
    // 0x29015c: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x29015cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_290160:
    // 0x290160: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290160u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x290160 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290164:
    // 0x290164: 0x0  nop
    ctx->pc = 0x290164u;
    // NOP
label_290168:
    // 0x290168: 0x0  nop
    ctx->pc = 0x290168u;
    // NOP
label_29016c:
    // 0x29016c: 0x0  nop
    ctx->pc = 0x29016cu;
    // NOP
label_290170:
    // 0x290170: 0x0  nop
    ctx->pc = 0x290170u;
    // NOP
label_290174:
    // 0x290174: 0x0  nop
    ctx->pc = 0x290174u;
    // NOP
label_290178:
    // 0x290178: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x290178u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_29017c:
    // 0x29017c: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29017cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_290180:
    // 0x290180: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x290180u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_290184:
    // 0x290184: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290184u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x290184 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290188:
    // 0x290188: 0x0  nop
    ctx->pc = 0x290188u;
    // NOP
label_29018c:
    // 0x29018c: 0x0  nop
    ctx->pc = 0x29018cu;
    // NOP
label_290190:
    // 0x290190: 0x0  nop
    ctx->pc = 0x290190u;
    // NOP
label_290194:
    // 0x290194: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x290194u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_290198:
    // 0x290198: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x290198u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29019c:
    // 0x29019c: 0x8  jr          $zero
label_2901a0:
    if (ctx->pc == 0x2901A0u) {
        ctx->pc = 0x2901A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29019Cu;
        // 0x2901a0: 0xf  sync (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = 0x2901A4u;
        goto label_2901a4;
    }
    ctx->pc = 0x29019Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2901A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29019Cu;
        // 0x2901a0: 0xf  sync (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29019Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2901A4u;
label_2901a4:
    // 0x2901a4: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x2901a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2901a8:
    // 0x2901a8: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2901a8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2901ac:
    // 0x2901ac: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2901acu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2901AC raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2901b0:
    // 0x2901b0: 0xc  syscall     0
    ctx->pc = 0x2901b0u;
    ctx->pc = 0x2901B4u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2901b4:
    // 0x2901b4: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2901b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2901B4 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2901b8:
    // 0x2901b8: 0x0  nop
    ctx->pc = 0x2901b8u;
    // NOP
label_2901bc:
    // 0x2901bc: 0x0  nop
    ctx->pc = 0x2901bcu;
    // NOP
label_2901c0:
    // 0x2901c0: 0x0  nop
    ctx->pc = 0x2901c0u;
    // NOP
label_2901c4:
    // 0x2901c4: 0x0  nop
    ctx->pc = 0x2901c4u;
    // NOP
label_2901c8:
    // 0x2901c8: 0x0  nop
    ctx->pc = 0x2901c8u;
    // NOP
label_2901cc:
    // 0x2901cc: 0xc  syscall     0
    ctx->pc = 0x2901ccu;
    ctx->pc = 0x2901D0u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2901d0:
    // 0x2901d0: 0x9  jalr        $zero, $zero
label_2901d4:
    if (ctx->pc == 0x2901D4u) {
        ctx->pc = 0x2901D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2901D0u;
        // 0x2901d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2901D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2901D8u;
        goto label_2901d8;
    }
    ctx->pc = 0x2901D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2901D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2901D0u;
        // 0x2901d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2901D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2901D0u, 0x2901D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2901D8u;
label_2901d8:
    // 0x2901d8: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2901d8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2901D8 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2901dc:
    // 0x2901dc: 0x0  nop
    ctx->pc = 0x2901dcu;
    // NOP
label_2901e0:
    // 0x2901e0: 0x0  nop
    ctx->pc = 0x2901e0u;
    // NOP
label_2901e4:
    // 0x2901e4: 0x0  nop
    ctx->pc = 0x2901e4u;
    // NOP
label_2901e8:
    // 0x2901e8: 0xc  syscall     0
    ctx->pc = 0x2901e8u;
    ctx->pc = 0x2901ECu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2901ec:
    // 0x2901ec: 0x9  jalr        $zero, $zero
label_2901f0:
    if (ctx->pc == 0x2901F0u) {
        ctx->pc = 0x2901F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2901ECu;
        // 0x2901f0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2901F0 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2901F4u;
        goto label_2901f4;
    }
    ctx->pc = 0x2901ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2901F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2901ECu;
        // 0x2901f0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2901F0 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2901ECu, 0x2901F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2901F4u;
label_2901f4:
    // 0x2901f4: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x2901f4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2901f8:
    // 0x2901f8: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2901f8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2901fc:
    // 0x2901fc: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2901fcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2901FC raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290200:
    // 0x290200: 0x0  nop
    ctx->pc = 0x290200u;
    // NOP
label_290204:
    // 0x290204: 0x9  jalr        $zero, $zero
label_290208:
    if (ctx->pc == 0x290208u) {
        ctx->pc = 0x290208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290204u;
        // 0x290208: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x290208 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x29020Cu;
        goto label_29020c;
    }
    ctx->pc = 0x290204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x290208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290204u;
        // 0x290208: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x290208 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290204u, 0x29020Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29020Cu;
label_29020c:
    // 0x29020c: 0x0  nop
    ctx->pc = 0x29020cu;
    // NOP
label_290210:
    // 0x290210: 0x0  nop
    ctx->pc = 0x290210u;
    // NOP
label_290214:
    // 0x290214: 0x0  nop
    ctx->pc = 0x290214u;
    // NOP
label_290218:
    // 0x290218: 0x0  nop
    ctx->pc = 0x290218u;
    // NOP
label_29021c:
    // 0x29021c: 0x0  nop
    ctx->pc = 0x29021cu;
    // NOP
label_290220:
    // 0x290220: 0x9  jalr        $zero, $zero
label_290224:
    if (ctx->pc == 0x290224u) {
        ctx->pc = 0x290224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290220u;
        // 0x290224: 0xc  syscall     0 (Delay Slot)
        ctx->pc = 0x290228u;
        runtime->handleSyscall(rdram, ctx, 0x0u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x290228u;
        goto label_290228;
    }
    ctx->pc = 0x290220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x290224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290220u;
        // 0x290224: 0xc  syscall     0 (Delay Slot)
        ctx->pc = 0x290228u;
        runtime->handleSyscall(rdram, ctx, 0x0u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290220u, 0x290228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x290228u;
label_290228:
    // 0x290228: 0x11  mthi        $zero
    ctx->pc = 0x290228u;
    ctx->hi = GPR_U64(ctx, 0);
label_29022c:
    // 0x29022c: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29022cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29022C raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290230:
    // 0x290230: 0x0  nop
    ctx->pc = 0x290230u;
    // NOP
label_290234:
    // 0x290234: 0x0  nop
    ctx->pc = 0x290234u;
    // NOP
label_290238:
    // 0x290238: 0x0  nop
    ctx->pc = 0x290238u;
    // NOP
label_29023c:
    // 0x29023c: 0x9  jalr        $zero, $zero
label_290240:
    if (ctx->pc == 0x290240u) {
        ctx->pc = 0x290240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29023Cu;
        // 0x290240: 0xc  syscall     0 (Delay Slot)
        ctx->pc = 0x290244u;
        runtime->handleSyscall(rdram, ctx, 0x0u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x290244u;
        goto label_290244;
    }
    ctx->pc = 0x29023Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x290240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29023Cu;
        // 0x290240: 0xc  syscall     0 (Delay Slot)
        ctx->pc = 0x290244u;
        runtime->handleSyscall(rdram, ctx, 0x0u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29023Cu, 0x290244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x290244u;
label_290244:
    // 0x290244: 0x11  mthi        $zero
    ctx->pc = 0x290244u;
    ctx->hi = GPR_U64(ctx, 0);
label_290248:
    // 0x290248: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x290248u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x290248 raw=0x0000001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29024c:
    // 0x29024c: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29024cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_290250:
    // 0x290250: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290250u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x290250 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_290254:
    // 0x290254: 0x0  nop
    ctx->pc = 0x290254u;
    // NOP
label_290258:
    // 0x290258: 0x11  mthi        $zero
    ctx->pc = 0x290258u;
    ctx->hi = GPR_U64(ctx, 0);
label_29025c:
    // 0x29025c: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29025cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29025C raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->pc = 0x290260u;
    return;
}
