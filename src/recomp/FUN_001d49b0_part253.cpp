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


void FUN_001d49b0_part253(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x24fa70u: goto label_24fa70;
        case 0x24fa74u: goto label_24fa74;
        case 0x24fa78u: goto label_24fa78;
        case 0x24fa7cu: goto label_24fa7c;
        case 0x24fa80u: goto label_24fa80;
        case 0x24fa84u: goto label_24fa84;
        case 0x24fa88u: goto label_24fa88;
        case 0x24fa8cu: goto label_24fa8c;
        case 0x24fa90u: goto label_24fa90;
        case 0x24fa94u: goto label_24fa94;
        case 0x24fa98u: goto label_24fa98;
        case 0x24fa9cu: goto label_24fa9c;
        case 0x24faa0u: goto label_24faa0;
        case 0x24faa4u: goto label_24faa4;
        case 0x24faa8u: goto label_24faa8;
        case 0x24faacu: goto label_24faac;
        case 0x24fab0u: goto label_24fab0;
        case 0x24fab4u: goto label_24fab4;
        case 0x24fab8u: goto label_24fab8;
        case 0x24fabcu: goto label_24fabc;
        case 0x24fac0u: goto label_24fac0;
        case 0x24fac4u: goto label_24fac4;
        case 0x24fac8u: goto label_24fac8;
        case 0x24faccu: goto label_24facc;
        case 0x24fad0u: goto label_24fad0;
        case 0x24fad4u: goto label_24fad4;
        case 0x24fad8u: goto label_24fad8;
        case 0x24fadcu: goto label_24fadc;
        case 0x24fae0u: goto label_24fae0;
        case 0x24fae4u: goto label_24fae4;
        case 0x24fae8u: goto label_24fae8;
        case 0x24faecu: goto label_24faec;
        case 0x24faf0u: goto label_24faf0;
        case 0x24faf4u: goto label_24faf4;
        case 0x24faf8u: goto label_24faf8;
        case 0x24fafcu: goto label_24fafc;
        case 0x24fb00u: goto label_24fb00;
        case 0x24fb04u: goto label_24fb04;
        case 0x24fb08u: goto label_24fb08;
        case 0x24fb0cu: goto label_24fb0c;
        case 0x24fb10u: goto label_24fb10;
        case 0x24fb14u: goto label_24fb14;
        case 0x24fb18u: goto label_24fb18;
        case 0x24fb1cu: goto label_24fb1c;
        case 0x24fb20u: goto label_24fb20;
        case 0x24fb24u: goto label_24fb24;
        case 0x24fb28u: goto label_24fb28;
        case 0x24fb2cu: goto label_24fb2c;
        case 0x24fb30u: goto label_24fb30;
        case 0x24fb34u: goto label_24fb34;
        case 0x24fb38u: goto label_24fb38;
        case 0x24fb3cu: goto label_24fb3c;
        case 0x24fb40u: goto label_24fb40;
        case 0x24fb44u: goto label_24fb44;
        case 0x24fb48u: goto label_24fb48;
        case 0x24fb4cu: goto label_24fb4c;
        case 0x24fb50u: goto label_24fb50;
        case 0x24fb54u: goto label_24fb54;
        case 0x24fb58u: goto label_24fb58;
        case 0x24fb5cu: goto label_24fb5c;
        case 0x24fb60u: goto label_24fb60;
        case 0x24fb64u: goto label_24fb64;
        case 0x24fb68u: goto label_24fb68;
        case 0x24fb6cu: goto label_24fb6c;
        case 0x24fb70u: goto label_24fb70;
        case 0x24fb74u: goto label_24fb74;
        case 0x24fb78u: goto label_24fb78;
        case 0x24fb7cu: goto label_24fb7c;
        case 0x24fb80u: goto label_24fb80;
        case 0x24fb84u: goto label_24fb84;
        case 0x24fb88u: goto label_24fb88;
        case 0x24fb8cu: goto label_24fb8c;
        case 0x24fb90u: goto label_24fb90;
        case 0x24fb94u: goto label_24fb94;
        case 0x24fb98u: goto label_24fb98;
        case 0x24fb9cu: goto label_24fb9c;
        case 0x24fba0u: goto label_24fba0;
        case 0x24fba4u: goto label_24fba4;
        case 0x24fba8u: goto label_24fba8;
        case 0x24fbacu: goto label_24fbac;
        case 0x24fbb0u: goto label_24fbb0;
        case 0x24fbb4u: goto label_24fbb4;
        case 0x24fbb8u: goto label_24fbb8;
        case 0x24fbbcu: goto label_24fbbc;
        case 0x24fbc0u: goto label_24fbc0;
        case 0x24fbc4u: goto label_24fbc4;
        case 0x24fbc8u: goto label_24fbc8;
        case 0x24fbccu: goto label_24fbcc;
        case 0x24fbd0u: goto label_24fbd0;
        case 0x24fbd4u: goto label_24fbd4;
        case 0x24fbd8u: goto label_24fbd8;
        case 0x24fbdcu: goto label_24fbdc;
        case 0x24fbe0u: goto label_24fbe0;
        case 0x24fbe4u: goto label_24fbe4;
        case 0x24fbe8u: goto label_24fbe8;
        case 0x24fbecu: goto label_24fbec;
        case 0x24fbf0u: goto label_24fbf0;
        case 0x24fbf4u: goto label_24fbf4;
        case 0x24fbf8u: goto label_24fbf8;
        case 0x24fbfcu: goto label_24fbfc;
        case 0x24fc00u: goto label_24fc00;
        case 0x24fc04u: goto label_24fc04;
        case 0x24fc08u: goto label_24fc08;
        case 0x24fc0cu: goto label_24fc0c;
        case 0x24fc10u: goto label_24fc10;
        case 0x24fc14u: goto label_24fc14;
        case 0x24fc18u: goto label_24fc18;
        case 0x24fc1cu: goto label_24fc1c;
        case 0x24fc20u: goto label_24fc20;
        case 0x24fc24u: goto label_24fc24;
        case 0x24fc28u: goto label_24fc28;
        case 0x24fc2cu: goto label_24fc2c;
        case 0x24fc30u: goto label_24fc30;
        case 0x24fc34u: goto label_24fc34;
        case 0x24fc38u: goto label_24fc38;
        case 0x24fc3cu: goto label_24fc3c;
        case 0x24fc40u: goto label_24fc40;
        case 0x24fc44u: goto label_24fc44;
        case 0x24fc48u: goto label_24fc48;
        case 0x24fc4cu: goto label_24fc4c;
        case 0x24fc50u: goto label_24fc50;
        case 0x24fc54u: goto label_24fc54;
        case 0x24fc58u: goto label_24fc58;
        case 0x24fc5cu: goto label_24fc5c;
        case 0x24fc60u: goto label_24fc60;
        case 0x24fc64u: goto label_24fc64;
        case 0x24fc68u: goto label_24fc68;
        case 0x24fc6cu: goto label_24fc6c;
        case 0x24fc70u: goto label_24fc70;
        case 0x24fc74u: goto label_24fc74;
        case 0x24fc78u: goto label_24fc78;
        case 0x24fc7cu: goto label_24fc7c;
        case 0x24fc80u: goto label_24fc80;
        case 0x24fc84u: goto label_24fc84;
        case 0x24fc88u: goto label_24fc88;
        case 0x24fc8cu: goto label_24fc8c;
        case 0x24fc90u: goto label_24fc90;
        case 0x24fc94u: goto label_24fc94;
        case 0x24fc98u: goto label_24fc98;
        case 0x24fc9cu: goto label_24fc9c;
        case 0x24fca0u: goto label_24fca0;
        case 0x24fca4u: goto label_24fca4;
        case 0x24fca8u: goto label_24fca8;
        case 0x24fcacu: goto label_24fcac;
        case 0x24fcb0u: goto label_24fcb0;
        case 0x24fcb4u: goto label_24fcb4;
        case 0x24fcb8u: goto label_24fcb8;
        case 0x24fcbcu: goto label_24fcbc;
        case 0x24fcc0u: goto label_24fcc0;
        case 0x24fcc4u: goto label_24fcc4;
        case 0x24fcc8u: goto label_24fcc8;
        case 0x24fcccu: goto label_24fccc;
        case 0x24fcd0u: goto label_24fcd0;
        case 0x24fcd4u: goto label_24fcd4;
        case 0x24fcd8u: goto label_24fcd8;
        case 0x24fcdcu: goto label_24fcdc;
        case 0x24fce0u: goto label_24fce0;
        case 0x24fce4u: goto label_24fce4;
        case 0x24fce8u: goto label_24fce8;
        case 0x24fcecu: goto label_24fcec;
        case 0x24fcf0u: goto label_24fcf0;
        case 0x24fcf4u: goto label_24fcf4;
        case 0x24fcf8u: goto label_24fcf8;
        case 0x24fcfcu: goto label_24fcfc;
        case 0x24fd00u: goto label_24fd00;
        case 0x24fd04u: goto label_24fd04;
        case 0x24fd08u: goto label_24fd08;
        case 0x24fd0cu: goto label_24fd0c;
        case 0x24fd10u: goto label_24fd10;
        case 0x24fd14u: goto label_24fd14;
        case 0x24fd18u: goto label_24fd18;
        case 0x24fd1cu: goto label_24fd1c;
        case 0x24fd20u: goto label_24fd20;
        case 0x24fd24u: goto label_24fd24;
        case 0x24fd28u: goto label_24fd28;
        case 0x24fd2cu: goto label_24fd2c;
        case 0x24fd30u: goto label_24fd30;
        case 0x24fd34u: goto label_24fd34;
        case 0x24fd38u: goto label_24fd38;
        case 0x24fd3cu: goto label_24fd3c;
        case 0x24fd40u: goto label_24fd40;
        case 0x24fd44u: goto label_24fd44;
        case 0x24fd48u: goto label_24fd48;
        case 0x24fd4cu: goto label_24fd4c;
        case 0x24fd50u: goto label_24fd50;
        case 0x24fd54u: goto label_24fd54;
        case 0x24fd58u: goto label_24fd58;
        case 0x24fd5cu: goto label_24fd5c;
        case 0x24fd60u: goto label_24fd60;
        case 0x24fd64u: goto label_24fd64;
        case 0x24fd68u: goto label_24fd68;
        case 0x24fd6cu: goto label_24fd6c;
        case 0x24fd70u: goto label_24fd70;
        case 0x24fd74u: goto label_24fd74;
        case 0x24fd78u: goto label_24fd78;
        case 0x24fd7cu: goto label_24fd7c;
        case 0x24fd80u: goto label_24fd80;
        case 0x24fd84u: goto label_24fd84;
        case 0x24fd88u: goto label_24fd88;
        case 0x24fd8cu: goto label_24fd8c;
        case 0x24fd90u: goto label_24fd90;
        case 0x24fd94u: goto label_24fd94;
        case 0x24fd98u: goto label_24fd98;
        case 0x24fd9cu: goto label_24fd9c;
        case 0x24fda0u: goto label_24fda0;
        case 0x24fda4u: goto label_24fda4;
        case 0x24fda8u: goto label_24fda8;
        case 0x24fdacu: goto label_24fdac;
        case 0x24fdb0u: goto label_24fdb0;
        case 0x24fdb4u: goto label_24fdb4;
        case 0x24fdb8u: goto label_24fdb8;
        case 0x24fdbcu: goto label_24fdbc;
        case 0x24fdc0u: goto label_24fdc0;
        case 0x24fdc4u: goto label_24fdc4;
        case 0x24fdc8u: goto label_24fdc8;
        case 0x24fdccu: goto label_24fdcc;
        case 0x24fdd0u: goto label_24fdd0;
        case 0x24fdd4u: goto label_24fdd4;
        case 0x24fdd8u: goto label_24fdd8;
        case 0x24fddcu: goto label_24fddc;
        case 0x24fde0u: goto label_24fde0;
        case 0x24fde4u: goto label_24fde4;
        case 0x24fde8u: goto label_24fde8;
        case 0x24fdecu: goto label_24fdec;
        case 0x24fdf0u: goto label_24fdf0;
        case 0x24fdf4u: goto label_24fdf4;
        case 0x24fdf8u: goto label_24fdf8;
        case 0x24fdfcu: goto label_24fdfc;
        case 0x24fe00u: goto label_24fe00;
        case 0x24fe04u: goto label_24fe04;
        case 0x24fe08u: goto label_24fe08;
        case 0x24fe0cu: goto label_24fe0c;
        case 0x24fe10u: goto label_24fe10;
        case 0x24fe14u: goto label_24fe14;
        case 0x24fe18u: goto label_24fe18;
        case 0x24fe1cu: goto label_24fe1c;
        case 0x24fe20u: goto label_24fe20;
        case 0x24fe24u: goto label_24fe24;
        case 0x24fe28u: goto label_24fe28;
        case 0x24fe2cu: goto label_24fe2c;
        case 0x24fe30u: goto label_24fe30;
        case 0x24fe34u: goto label_24fe34;
        case 0x24fe38u: goto label_24fe38;
        case 0x24fe3cu: goto label_24fe3c;
        case 0x24fe40u: goto label_24fe40;
        case 0x24fe44u: goto label_24fe44;
        case 0x24fe48u: goto label_24fe48;
        case 0x24fe4cu: goto label_24fe4c;
        case 0x24fe50u: goto label_24fe50;
        case 0x24fe54u: goto label_24fe54;
        case 0x24fe58u: goto label_24fe58;
        case 0x24fe5cu: goto label_24fe5c;
        case 0x24fe60u: goto label_24fe60;
        case 0x24fe64u: goto label_24fe64;
        case 0x24fe68u: goto label_24fe68;
        case 0x24fe6cu: goto label_24fe6c;
        case 0x24fe70u: goto label_24fe70;
        case 0x24fe74u: goto label_24fe74;
        case 0x24fe78u: goto label_24fe78;
        case 0x24fe7cu: goto label_24fe7c;
        case 0x24fe80u: goto label_24fe80;
        case 0x24fe84u: goto label_24fe84;
        case 0x24fe88u: goto label_24fe88;
        case 0x24fe8cu: goto label_24fe8c;
        case 0x24fe90u: goto label_24fe90;
        case 0x24fe94u: goto label_24fe94;
        case 0x24fe98u: goto label_24fe98;
        case 0x24fe9cu: goto label_24fe9c;
        case 0x24fea0u: goto label_24fea0;
        case 0x24fea4u: goto label_24fea4;
        case 0x24fea8u: goto label_24fea8;
        case 0x24feacu: goto label_24feac;
        case 0x24feb0u: goto label_24feb0;
        case 0x24feb4u: goto label_24feb4;
        case 0x24feb8u: goto label_24feb8;
        case 0x24febcu: goto label_24febc;
        case 0x24fec0u: goto label_24fec0;
        case 0x24fec4u: goto label_24fec4;
        case 0x24fec8u: goto label_24fec8;
        case 0x24feccu: goto label_24fecc;
        case 0x24fed0u: goto label_24fed0;
        case 0x24fed4u: goto label_24fed4;
        case 0x24fed8u: goto label_24fed8;
        case 0x24fedcu: goto label_24fedc;
        case 0x24fee0u: goto label_24fee0;
        case 0x24fee4u: goto label_24fee4;
        case 0x24fee8u: goto label_24fee8;
        case 0x24feecu: goto label_24feec;
        case 0x24fef0u: goto label_24fef0;
        case 0x24fef4u: goto label_24fef4;
        case 0x24fef8u: goto label_24fef8;
        case 0x24fefcu: goto label_24fefc;
        case 0x24ff00u: goto label_24ff00;
        case 0x24ff04u: goto label_24ff04;
        case 0x24ff08u: goto label_24ff08;
        case 0x24ff0cu: goto label_24ff0c;
        case 0x24ff10u: goto label_24ff10;
        case 0x24ff14u: goto label_24ff14;
        case 0x24ff18u: goto label_24ff18;
        case 0x24ff1cu: goto label_24ff1c;
        case 0x24ff20u: goto label_24ff20;
        case 0x24ff24u: goto label_24ff24;
        case 0x24ff28u: goto label_24ff28;
        case 0x24ff2cu: goto label_24ff2c;
        case 0x24ff30u: goto label_24ff30;
        case 0x24ff34u: goto label_24ff34;
        case 0x24ff38u: goto label_24ff38;
        case 0x24ff3cu: goto label_24ff3c;
        case 0x24ff40u: goto label_24ff40;
        case 0x24ff44u: goto label_24ff44;
        case 0x24ff48u: goto label_24ff48;
        case 0x24ff4cu: goto label_24ff4c;
        case 0x24ff50u: goto label_24ff50;
        case 0x24ff54u: goto label_24ff54;
        case 0x24ff58u: goto label_24ff58;
        case 0x24ff5cu: goto label_24ff5c;
        case 0x24ff60u: goto label_24ff60;
        case 0x24ff64u: goto label_24ff64;
        case 0x24ff68u: goto label_24ff68;
        case 0x24ff6cu: goto label_24ff6c;
        case 0x24ff70u: goto label_24ff70;
        case 0x24ff74u: goto label_24ff74;
        case 0x24ff78u: goto label_24ff78;
        case 0x24ff7cu: goto label_24ff7c;
        case 0x24ff80u: goto label_24ff80;
        case 0x24ff84u: goto label_24ff84;
        case 0x24ff88u: goto label_24ff88;
        case 0x24ff8cu: goto label_24ff8c;
        case 0x24ff90u: goto label_24ff90;
        case 0x24ff94u: goto label_24ff94;
        case 0x24ff98u: goto label_24ff98;
        case 0x24ff9cu: goto label_24ff9c;
        case 0x24ffa0u: goto label_24ffa0;
        case 0x24ffa4u: goto label_24ffa4;
        case 0x24ffa8u: goto label_24ffa8;
        case 0x24ffacu: goto label_24ffac;
        case 0x24ffb0u: goto label_24ffb0;
        case 0x24ffb4u: goto label_24ffb4;
        case 0x24ffb8u: goto label_24ffb8;
        case 0x24ffbcu: goto label_24ffbc;
        case 0x24ffc0u: goto label_24ffc0;
        case 0x24ffc4u: goto label_24ffc4;
        case 0x24ffc8u: goto label_24ffc8;
        case 0x24ffccu: goto label_24ffcc;
        case 0x24ffd0u: goto label_24ffd0;
        case 0x24ffd4u: goto label_24ffd4;
        case 0x24ffd8u: goto label_24ffd8;
        case 0x24ffdcu: goto label_24ffdc;
        case 0x24ffe0u: goto label_24ffe0;
        case 0x24ffe4u: goto label_24ffe4;
        case 0x24ffe8u: goto label_24ffe8;
        case 0x24ffecu: goto label_24ffec;
        case 0x24fff0u: goto label_24fff0;
        case 0x24fff4u: goto label_24fff4;
        case 0x24fff8u: goto label_24fff8;
        case 0x24fffcu: goto label_24fffc;
        case 0x250000u: goto label_250000;
        case 0x250004u: goto label_250004;
        case 0x250008u: goto label_250008;
        case 0x25000cu: goto label_25000c;
        case 0x250010u: goto label_250010;
        case 0x250014u: goto label_250014;
        case 0x250018u: goto label_250018;
        case 0x25001cu: goto label_25001c;
        case 0x250020u: goto label_250020;
        case 0x250024u: goto label_250024;
        case 0x250028u: goto label_250028;
        case 0x25002cu: goto label_25002c;
        case 0x250030u: goto label_250030;
        case 0x250034u: goto label_250034;
        case 0x250038u: goto label_250038;
        case 0x25003cu: goto label_25003c;
        case 0x250040u: goto label_250040;
        case 0x250044u: goto label_250044;
        case 0x250048u: goto label_250048;
        case 0x25004cu: goto label_25004c;
        case 0x250050u: goto label_250050;
        case 0x250054u: goto label_250054;
        case 0x250058u: goto label_250058;
        case 0x25005cu: goto label_25005c;
        case 0x250060u: goto label_250060;
        case 0x250064u: goto label_250064;
        case 0x250068u: goto label_250068;
        case 0x25006cu: goto label_25006c;
        case 0x250070u: goto label_250070;
        case 0x250074u: goto label_250074;
        case 0x250078u: goto label_250078;
        case 0x25007cu: goto label_25007c;
        case 0x250080u: goto label_250080;
        case 0x250084u: goto label_250084;
        case 0x250088u: goto label_250088;
        case 0x25008cu: goto label_25008c;
        case 0x250090u: goto label_250090;
        case 0x250094u: goto label_250094;
        case 0x250098u: goto label_250098;
        case 0x25009cu: goto label_25009c;
        case 0x2500a0u: goto label_2500a0;
        case 0x2500a4u: goto label_2500a4;
        case 0x2500a8u: goto label_2500a8;
        case 0x2500acu: goto label_2500ac;
        case 0x2500b0u: goto label_2500b0;
        case 0x2500b4u: goto label_2500b4;
        case 0x2500b8u: goto label_2500b8;
        case 0x2500bcu: goto label_2500bc;
        case 0x2500c0u: goto label_2500c0;
        case 0x2500c4u: goto label_2500c4;
        case 0x2500c8u: goto label_2500c8;
        case 0x2500ccu: goto label_2500cc;
        case 0x2500d0u: goto label_2500d0;
        case 0x2500d4u: goto label_2500d4;
        case 0x2500d8u: goto label_2500d8;
        case 0x2500dcu: goto label_2500dc;
        case 0x2500e0u: goto label_2500e0;
        case 0x2500e4u: goto label_2500e4;
        case 0x2500e8u: goto label_2500e8;
        case 0x2500ecu: goto label_2500ec;
        case 0x2500f0u: goto label_2500f0;
        case 0x2500f4u: goto label_2500f4;
        case 0x2500f8u: goto label_2500f8;
        case 0x2500fcu: goto label_2500fc;
        case 0x250100u: goto label_250100;
        case 0x250104u: goto label_250104;
        case 0x250108u: goto label_250108;
        case 0x25010cu: goto label_25010c;
        case 0x250110u: goto label_250110;
        case 0x250114u: goto label_250114;
        case 0x250118u: goto label_250118;
        case 0x25011cu: goto label_25011c;
        case 0x250120u: goto label_250120;
        case 0x250124u: goto label_250124;
        case 0x250128u: goto label_250128;
        case 0x25012cu: goto label_25012c;
        case 0x250130u: goto label_250130;
        case 0x250134u: goto label_250134;
        case 0x250138u: goto label_250138;
        case 0x25013cu: goto label_25013c;
        case 0x250140u: goto label_250140;
        case 0x250144u: goto label_250144;
        case 0x250148u: goto label_250148;
        case 0x25014cu: goto label_25014c;
        case 0x250150u: goto label_250150;
        case 0x250154u: goto label_250154;
        case 0x250158u: goto label_250158;
        case 0x25015cu: goto label_25015c;
        case 0x250160u: goto label_250160;
        case 0x250164u: goto label_250164;
        case 0x250168u: goto label_250168;
        case 0x25016cu: goto label_25016c;
        case 0x250170u: goto label_250170;
        case 0x250174u: goto label_250174;
        case 0x250178u: goto label_250178;
        case 0x25017cu: goto label_25017c;
        case 0x250180u: goto label_250180;
        case 0x250184u: goto label_250184;
        case 0x250188u: goto label_250188;
        case 0x25018cu: goto label_25018c;
        case 0x250190u: goto label_250190;
        case 0x250194u: goto label_250194;
        case 0x250198u: goto label_250198;
        case 0x25019cu: goto label_25019c;
        case 0x2501a0u: goto label_2501a0;
        case 0x2501a4u: goto label_2501a4;
        case 0x2501a8u: goto label_2501a8;
        case 0x2501acu: goto label_2501ac;
        case 0x2501b0u: goto label_2501b0;
        case 0x2501b4u: goto label_2501b4;
        case 0x2501b8u: goto label_2501b8;
        case 0x2501bcu: goto label_2501bc;
        case 0x2501c0u: goto label_2501c0;
        case 0x2501c4u: goto label_2501c4;
        case 0x2501c8u: goto label_2501c8;
        case 0x2501ccu: goto label_2501cc;
        case 0x2501d0u: goto label_2501d0;
        case 0x2501d4u: goto label_2501d4;
        case 0x2501d8u: goto label_2501d8;
        case 0x2501dcu: goto label_2501dc;
        case 0x2501e0u: goto label_2501e0;
        case 0x2501e4u: goto label_2501e4;
        case 0x2501e8u: goto label_2501e8;
        case 0x2501ecu: goto label_2501ec;
        case 0x2501f0u: goto label_2501f0;
        case 0x2501f4u: goto label_2501f4;
        case 0x2501f8u: goto label_2501f8;
        case 0x2501fcu: goto label_2501fc;
        case 0x250200u: goto label_250200;
        case 0x250204u: goto label_250204;
        case 0x250208u: goto label_250208;
        case 0x25020cu: goto label_25020c;
        case 0x250210u: goto label_250210;
        case 0x250214u: goto label_250214;
        case 0x250218u: goto label_250218;
        case 0x25021cu: goto label_25021c;
        case 0x250220u: goto label_250220;
        case 0x250224u: goto label_250224;
        case 0x250228u: goto label_250228;
        case 0x25022cu: goto label_25022c;
        case 0x250230u: goto label_250230;
        case 0x250234u: goto label_250234;
        case 0x250238u: goto label_250238;
        case 0x25023cu: goto label_25023c;
        default: return;
    }

label_24fa70:
    // 0x24fa70: 0x3d8f5c29  .word       0x3D8F5C29                   # lui         $t7, 0x5C29 # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fa70u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_24fa74:
    // 0x24fa74: 0x3d8f5c29  .word       0x3D8F5C29                   # lui         $t7, 0x5C29 # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fa74u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_24fa78:
    // 0x24fa78: 0x3d8f5c29  .word       0x3D8F5C29                   # lui         $t7, 0x5C29 # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fa78u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_24fa7c:
    // 0x24fa7c: 0x0  nop
    ctx->pc = 0x24fa7cu;
    // NOP
label_24fa80:
    // 0x24fa80: 0x0  nop
    ctx->pc = 0x24fa80u;
    // NOP
label_24fa84:
    // 0x24fa84: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fa84u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24fa88:
    // 0x24fa88: 0x0  nop
    ctx->pc = 0x24fa88u;
    // NOP
label_24fa8c:
    // 0x24fa8c: 0x0  nop
    ctx->pc = 0x24fa8cu;
    // NOP
label_24fa90:
    // 0x24fa90: 0x3d8f5c29  .word       0x3D8F5C29                   # lui         $t7, 0x5C29 # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fa90u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_24fa94:
    // 0x24fa94: 0x3d8f5c29  .word       0x3D8F5C29                   # lui         $t7, 0x5C29 # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fa94u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_24fa98:
    // 0x24fa98: 0x3d8f5c29  .word       0x3D8F5C29                   # lui         $t7, 0x5C29 # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fa98u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_24fa9c:
    // 0x24fa9c: 0x0  nop
    ctx->pc = 0x24fa9cu;
    // NOP
label_24faa0:
    // 0x24faa0: 0x0  nop
    ctx->pc = 0x24faa0u;
    // NOP
label_24faa4:
    // 0x24faa4: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24faa4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24faa8:
    // 0x24faa8: 0x0  nop
    ctx->pc = 0x24faa8u;
    // NOP
label_24faac:
    // 0x24faac: 0x0  nop
    ctx->pc = 0x24faacu;
    // NOP
label_24fab0:
    // 0x24fab0: 0x3d8f5c29  .word       0x3D8F5C29                   # lui         $t7, 0x5C29 # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fab0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_24fab4:
    // 0x24fab4: 0x3d8f5c29  .word       0x3D8F5C29                   # lui         $t7, 0x5C29 # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fab4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_24fab8:
    // 0x24fab8: 0x3d8f5c29  .word       0x3D8F5C29                   # lui         $t7, 0x5C29 # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fab8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_24fabc:
    // 0x24fabc: 0x0  nop
    ctx->pc = 0x24fabcu;
    // NOP
label_24fac0:
    // 0x24fac0: 0x3d8f5c29  .word       0x3D8F5C29                   # lui         $t7, 0x5C29 # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fac0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_24fac4:
    // 0x24fac4: 0x3d8f5c29  .word       0x3D8F5C29                   # lui         $t7, 0x5C29 # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fac4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_24fac8:
    // 0x24fac8: 0x3d8f5c29  .word       0x3D8F5C29                   # lui         $t7, 0x5C29 # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fac8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_24facc:
    // 0x24facc: 0x0  nop
    ctx->pc = 0x24faccu;
    // NOP
label_24fad0:
    // 0x24fad0: 0x3d23d70a  .word       0x3D23D70A                   # lui         $v1, 0xD70A # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_24fad4:
    // 0x24fad4: 0x3d23d70a  .word       0x3D23D70A                   # lui         $v1, 0xD70A # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_24fad8:
    // 0x24fad8: 0x3d23d70a  .word       0x3D23D70A                   # lui         $v1, 0xD70A # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_24fadc:
    // 0x24fadc: 0x0  nop
    ctx->pc = 0x24fadcu;
    // NOP
label_24fae0:
    // 0x24fae0: 0x3e29fbe7  .word       0x3E29FBE7                   # lui         $t1, 0xFBE7 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fae0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64487 << 16));
label_24fae4:
    // 0x24fae4: 0x3e29fbe7  .word       0x3E29FBE7                   # lui         $t1, 0xFBE7 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fae4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64487 << 16));
label_24fae8:
    // 0x24fae8: 0x0  nop
    ctx->pc = 0x24fae8u;
    // NOP
label_24faec:
    // 0x24faec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24faecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24faf0:
    // 0x24faf0: 0x3df5c28f  .word       0x3DF5C28F                   # lui         $s5, 0xC28F # 01E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24faf0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49807 << 16));
label_24faf4:
    // 0x24faf4: 0x3df5c28f  .word       0x3DF5C28F                   # lui         $s5, 0xC28F # 01E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24faf4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49807 << 16));
label_24faf8:
    // 0x24faf8: 0x3df5c28f  .word       0x3DF5C28F                   # lui         $s5, 0xC28F # 01E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24faf8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49807 << 16));
label_24fafc:
    // 0x24fafc: 0x0  nop
    ctx->pc = 0x24fafcu;
    // NOP
label_24fb00:
    // 0x24fb00: 0x3ca3d70a  .word       0x3CA3D70A                   # lui         $v1, 0xD70A # 00A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_24fb04:
    // 0x24fb04: 0x3ca3d70a  .word       0x3CA3D70A                   # lui         $v1, 0xD70A # 00A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_24fb08:
    // 0x24fb08: 0x0  nop
    ctx->pc = 0x24fb08u;
    // NOP
label_24fb0c:
    // 0x24fb0c: 0x0  nop
    ctx->pc = 0x24fb0cu;
    // NOP
label_24fb10:
    // 0x24fb10: 0x3d00adfd  .word       0x3D00ADFD                   # lui         $zero, 0xADFD # 01000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb10u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)44541 << 16));
label_24fb14:
    // 0x24fb14: 0x3d00adfd  .word       0x3D00ADFD                   # lui         $zero, 0xADFD # 01000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb14u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)44541 << 16));
label_24fb18:
    // 0x24fb18: 0x0  nop
    ctx->pc = 0x24fb18u;
    // NOP
label_24fb1c:
    // 0x24fb1c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb1cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24fb20:
    // 0x24fb20: 0x3e883127  .word       0x3E883127                   # lui         $t0, 0x3127 # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb20u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)12583 << 16));
label_24fb24:
    // 0x24fb24: 0x3e883127  .word       0x3E883127                   # lui         $t0, 0x3127 # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)12583 << 16));
label_24fb28:
    // 0x24fb28: 0x0  nop
    ctx->pc = 0x24fb28u;
    // NOP
label_24fb2c:
    // 0x24fb2c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb2cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24fb30:
    // 0x24fb30: 0x3cac0831  .word       0x3CAC0831                   # lui         $t4, 0x831 # 00A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb30u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)2097 << 16));
label_24fb34:
    // 0x24fb34: 0x3cac0831  .word       0x3CAC0831                   # lui         $t4, 0x831 # 00A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb34u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)2097 << 16));
label_24fb38:
    // 0x24fb38: 0x0  nop
    ctx->pc = 0x24fb38u;
    // NOP
label_24fb3c:
    // 0x24fb3c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb3cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24fb40:
    // 0x24fb40: 0x3fc90fdb  .word       0x3FC90FDB                   # lui         $t1, 0xFDB # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb40u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4059 << 16));
label_24fb44:
    // 0x24fb44: 0x0  nop
    ctx->pc = 0x24fb44u;
    // NOP
label_24fb48:
    // 0x24fb48: 0x0  nop
    ctx->pc = 0x24fb48u;
    // NOP
label_24fb4c:
    // 0x24fb4c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb4cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24fb50:
    // 0x24fb50: 0x3dcccccd  .word       0x3DCCCCCD                   # lui         $t4, 0xCCCD # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb50u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_24fb54:
    // 0x24fb54: 0x3dcccccd  .word       0x3DCCCCCD                   # lui         $t4, 0xCCCD # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb54u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_24fb58:
    // 0x24fb58: 0x0  nop
    ctx->pc = 0x24fb58u;
    // NOP
label_24fb5c:
    // 0x24fb5c: 0x0  nop
    ctx->pc = 0x24fb5cu;
    // NOP
label_24fb60:
    // 0x24fb60: 0x3e19999a  .word       0x3E19999A                   # lui         $t9, 0x999A # 02000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb60u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_24fb64:
    // 0x24fb64: 0x3e19999a  .word       0x3E19999A                   # lui         $t9, 0x999A # 02000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb64u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_24fb68:
    // 0x24fb68: 0x0  nop
    ctx->pc = 0x24fb68u;
    // NOP
label_24fb6c:
    // 0x24fb6c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb6cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24fb70:
    // 0x24fb70: 0x0  nop
    ctx->pc = 0x24fb70u;
    // NOP
label_24fb74:
    // 0x24fb74: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb74u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24fb78:
    // 0x24fb78: 0x0  nop
    ctx->pc = 0x24fb78u;
    // NOP
label_24fb7c:
    // 0x24fb7c: 0x0  nop
    ctx->pc = 0x24fb7cu;
    // NOP
label_24fb80:
    // 0x24fb80: 0x3d4ccccd  .word       0x3D4CCCCD                   # lui         $t4, 0xCCCD # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb80u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_24fb84:
    // 0x24fb84: 0x3d4ccccd  .word       0x3D4CCCCD                   # lui         $t4, 0xCCCD # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb84u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_24fb88:
    // 0x24fb88: 0x0  nop
    ctx->pc = 0x24fb88u;
    // NOP
label_24fb8c:
    // 0x24fb8c: 0x0  nop
    ctx->pc = 0x24fb8cu;
    // NOP
label_24fb90:
    // 0x24fb90: 0x0  nop
    ctx->pc = 0x24fb90u;
    // NOP
label_24fb94:
    // 0x24fb94: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb94u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24fb98:
    // 0x24fb98: 0x0  nop
    ctx->pc = 0x24fb98u;
    // NOP
label_24fb9c:
    // 0x24fb9c: 0x0  nop
    ctx->pc = 0x24fb9cu;
    // NOP
label_24fba0:
    // 0x24fba0: 0x3fc90fdb  .word       0x3FC90FDB                   # lui         $t1, 0xFDB # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fba0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4059 << 16));
label_24fba4:
    // 0x24fba4: 0x0  nop
    ctx->pc = 0x24fba4u;
    // NOP
label_24fba8:
    // 0x24fba8: 0x0  nop
    ctx->pc = 0x24fba8u;
    // NOP
label_24fbac:
    // 0x24fbac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fbacu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24fbb0:
    // 0x24fbb0: 0x0  nop
    ctx->pc = 0x24fbb0u;
    // NOP
label_24fbb4:
    // 0x24fbb4: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fbb4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24fbb8:
    // 0x24fbb8: 0x0  nop
    ctx->pc = 0x24fbb8u;
    // NOP
label_24fbbc:
    // 0x24fbbc: 0x0  nop
    ctx->pc = 0x24fbbcu;
    // NOP
label_24fbc0:
    // 0x24fbc0: 0x3fc90fdb  .word       0x3FC90FDB                   # lui         $t1, 0xFDB # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fbc0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4059 << 16));
label_24fbc4:
    // 0x24fbc4: 0x0  nop
    ctx->pc = 0x24fbc4u;
    // NOP
label_24fbc8:
    // 0x24fbc8: 0x0  nop
    ctx->pc = 0x24fbc8u;
    // NOP
label_24fbcc:
    // 0x24fbcc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fbccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24fbd0:
    // 0x24fbd0: 0x3fc90fdb  .word       0x3FC90FDB                   # lui         $t1, 0xFDB # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fbd0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4059 << 16));
label_24fbd4:
    // 0x24fbd4: 0x0  nop
    ctx->pc = 0x24fbd4u;
    // NOP
label_24fbd8:
    // 0x24fbd8: 0x0  nop
    ctx->pc = 0x24fbd8u;
    // NOP
label_24fbdc:
    // 0x24fbdc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fbdcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24fbe0:
    // 0x24fbe0: 0x3d4ccccd  .word       0x3D4CCCCD                   # lui         $t4, 0xCCCD # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fbe0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_24fbe4:
    // 0x24fbe4: 0x3d4ccccd  .word       0x3D4CCCCD                   # lui         $t4, 0xCCCD # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fbe4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_24fbe8:
    // 0x24fbe8: 0x0  nop
    ctx->pc = 0x24fbe8u;
    // NOP
label_24fbec:
    // 0x24fbec: 0x0  nop
    ctx->pc = 0x24fbecu;
    // NOP
label_24fbf0:
    // 0x24fbf0: 0x3d4ccccd  .word       0x3D4CCCCD                   # lui         $t4, 0xCCCD # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fbf0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_24fbf4:
    // 0x24fbf4: 0x3d4ccccd  .word       0x3D4CCCCD                   # lui         $t4, 0xCCCD # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fbf4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_24fbf8:
    // 0x24fbf8: 0x0  nop
    ctx->pc = 0x24fbf8u;
    // NOP
label_24fbfc:
    // 0x24fbfc: 0x0  nop
    ctx->pc = 0x24fbfcu;
    // NOP
label_24fc00:
    // 0x24fc00: 0x9081312  j           func_4204C48
label_24fc04:
    if (ctx->pc == 0x24FC04u) {
        ctx->pc = 0x24FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FC00u;
        // 0x24fc04: 0x200a0001  addi        $t2, $zero, 0x1 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FC08u;
        goto label_24fc08;
    }
    ctx->pc = 0x24FC00u;
    ctx->pc = 0x24FC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FC00u;
    // 0x24fc04: 0x200a0001  addi        $t2, $zero, 0x1 (Delay Slot)
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4204C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4204C48u, 0x24FC00u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24FC08u;
label_24fc08:
    // 0x24fc08: 0xff0a0821  sd          $t2, 0x821($t8)
    ctx->pc = 0x24fc08u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 2081), GPR_U64(ctx, 10));
label_24fc0c:
    // 0x24fc0c: 0x0  nop
    ctx->pc = 0x24fc0cu;
    // NOP
label_24fc10:
    // 0x24fc10: 0x3dcccccd  .word       0x3DCCCCCD                   # lui         $t4, 0xCCCD # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fc10u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_24fc14:
    // 0x24fc14: 0x3dcccccd  .word       0x3DCCCCCD                   # lui         $t4, 0xCCCD # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fc14u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_24fc18:
    // 0x24fc18: 0x0  nop
    ctx->pc = 0x24fc18u;
    // NOP
label_24fc1c:
    // 0x24fc1c: 0x0  nop
    ctx->pc = 0x24fc1cu;
    // NOP
label_24fc20:
    // 0x24fc20: 0x0  nop
    ctx->pc = 0x24fc20u;
    // NOP
label_24fc24:
    // 0x24fc24: 0x0  nop
    ctx->pc = 0x24fc24u;
    // NOP
label_24fc28:
    // 0x24fc28: 0x0  nop
    ctx->pc = 0x24fc28u;
    // NOP
label_24fc2c:
    // 0x24fc2c: 0x0  nop
    ctx->pc = 0x24fc2cu;
    // NOP
label_24fc30:
    // 0x24fc30: 0x0  nop
    ctx->pc = 0x24fc30u;
    // NOP
label_24fc34:
    // 0x24fc34: 0x0  nop
    ctx->pc = 0x24fc34u;
    // NOP
label_24fc38:
    // 0x24fc38: 0x0  nop
    ctx->pc = 0x24fc38u;
    // NOP
label_24fc3c:
    // 0x24fc3c: 0x0  nop
    ctx->pc = 0x24fc3cu;
    // NOP
label_24fc40:
    // 0x24fc40: 0x0  nop
    ctx->pc = 0x24fc40u;
    // NOP
label_24fc44:
    // 0x24fc44: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x24fc44u;
    // CACHE instruction (ignored)
label_24fc48:
    // 0x24fc48: 0x0  nop
    ctx->pc = 0x24fc48u;
    // NOP
label_24fc4c:
    // 0x24fc4c: 0x0  nop
    ctx->pc = 0x24fc4cu;
    // NOP
label_24fc50:
    // 0x24fc50: 0x0  nop
    ctx->pc = 0x24fc50u;
    // NOP
label_24fc54:
    // 0x24fc54: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fc54u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24fc58:
    // 0x24fc58: 0x0  nop
    ctx->pc = 0x24fc58u;
    // NOP
label_24fc5c:
    // 0x24fc5c: 0x0  nop
    ctx->pc = 0x24fc5cu;
    // NOP
label_24fc60:
    // 0x24fc60: 0x0  nop
    ctx->pc = 0x24fc60u;
    // NOP
label_24fc64:
    // 0x24fc64: 0x0  nop
    ctx->pc = 0x24fc64u;
    // NOP
label_24fc68:
    // 0x24fc68: 0x0  nop
    ctx->pc = 0x24fc68u;
    // NOP
label_24fc6c:
    // 0x24fc6c: 0x0  nop
    ctx->pc = 0x24fc6cu;
    // NOP
label_24fc70:
    // 0x24fc70: 0x608699a6  daddi       $a2, $a0, -0x665A
    ctx->pc = 0x24fc70u;
    { int64_t src = (int64_t)GPR_S64(ctx, 4); int64_t imm = (int64_t)(int32_t)4294941094; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
label_24fc74:
    // 0x24fc74: 0x308699a6  andi        $a2, $a0, 0x99A6
    ctx->pc = 0x24fc74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)39334);
label_24fc78:
    // 0x24fc78: 0x40308080  .word       0x40308080                   # dmfc0       $s0, Config # 00000080 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24fc78u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x24FC78 raw=0x40308080"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24fc7c:
    // 0x24fc7c: 0x40803030  .word       0x40803030                   # mtc0        $zero, Wired # 00000030 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24fc7cu;
    ctx->cop0_wired = GPR_U32(ctx, 0) & 0x3F; ctx->cop0_random = 47;
label_24fc80:
    // 0x24fc80: 0x30504040  andi        $s0, $v0, 0x4040
    ctx->pc = 0x24fc80u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16448);
label_24fc84:
    // 0x24fc84: 0x0  nop
    ctx->pc = 0x24fc84u;
    // NOP
label_24fc88:
    // 0x24fc88: 0x0  nop
    ctx->pc = 0x24fc88u;
    // NOP
label_24fc8c:
    // 0x24fc8c: 0x0  nop
    ctx->pc = 0x24fc8cu;
    // NOP
label_24fc90:
    // 0x24fc90: 0x3ca3d70a  .word       0x3CA3D70A                   # lui         $v1, 0xD70A # 00A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fc90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_24fc94:
    // 0x24fc94: 0x3ca3d70a  .word       0x3CA3D70A                   # lui         $v1, 0xD70A # 00A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fc94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_24fc98:
    // 0x24fc98: 0x0  nop
    ctx->pc = 0x24fc98u;
    // NOP
label_24fc9c:
    // 0x24fc9c: 0x0  nop
    ctx->pc = 0x24fc9cu;
    // NOP
label_24fca0:
    // 0x24fca0: 0x3d4ccccd  .word       0x3D4CCCCD                   # lui         $t4, 0xCCCD # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fca0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_24fca4:
    // 0x24fca4: 0x3d4ccccd  .word       0x3D4CCCCD                   # lui         $t4, 0xCCCD # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fca4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_24fca8:
    // 0x24fca8: 0x0  nop
    ctx->pc = 0x24fca8u;
    // NOP
label_24fcac:
    // 0x24fcac: 0x0  nop
    ctx->pc = 0x24fcacu;
    // NOP
label_24fcb0:
    // 0x24fcb0: 0x3da3d70a  .word       0x3DA3D70A                   # lui         $v1, 0xD70A # 01A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_24fcb4:
    // 0x24fcb4: 0x3d8f5c29  .word       0x3D8F5C29                   # lui         $t7, 0x5C29 # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fcb4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_24fcb8:
    // 0x24fcb8: 0x0  nop
    ctx->pc = 0x24fcb8u;
    // NOP
label_24fcbc:
    // 0x24fcbc: 0x0  nop
    ctx->pc = 0x24fcbcu;
    // NOP
label_24fcc0:
    // 0x24fcc0: 0x3dcccccd  .word       0x3DCCCCCD                   # lui         $t4, 0xCCCD # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fcc0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_24fcc4:
    // 0x24fcc4: 0x3dcccccd  .word       0x3DCCCCCD                   # lui         $t4, 0xCCCD # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fcc4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_24fcc8:
    // 0x24fcc8: 0x0  nop
    ctx->pc = 0x24fcc8u;
    // NOP
label_24fccc:
    // 0x24fccc: 0x0  nop
    ctx->pc = 0x24fcccu;
    // NOP
label_24fcd0:
    // 0x24fcd0: 0x3d23d70a  .word       0x3D23D70A                   # lui         $v1, 0xD70A # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_24fcd4:
    // 0x24fcd4: 0x3d23d70a  .word       0x3D23D70A                   # lui         $v1, 0xD70A # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_24fcd8:
    // 0x24fcd8: 0x0  nop
    ctx->pc = 0x24fcd8u;
    // NOP
label_24fcdc:
    // 0x24fcdc: 0x0  nop
    ctx->pc = 0x24fcdcu;
    // NOP
label_24fce0:
    // 0x24fce0: 0x0  nop
    ctx->pc = 0x24fce0u;
    // NOP
label_24fce4:
    // 0x24fce4: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x24fce4u;
    // CACHE instruction (ignored)
label_24fce8:
    // 0x24fce8: 0x0  nop
    ctx->pc = 0x24fce8u;
    // NOP
label_24fcec:
    // 0x24fcec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fcecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24fcf0:
    // 0x24fcf0: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fcf0u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24fcf4:
    // 0x24fcf4: 0x0  nop
    ctx->pc = 0x24fcf4u;
    // NOP
label_24fcf8:
    // 0x24fcf8: 0x0  nop
    ctx->pc = 0x24fcf8u;
    // NOP
label_24fcfc:
    // 0x24fcfc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fcfcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24fd00:
    // 0x24fd00: 0x10101  .word       0x00010101                   # INVALID     $zero, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24fd00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x24FD00 raw=0x00010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24fd04:
    // 0x24fd04: 0x2000000  .word       0x02000000                   # sll         $zero, $zero, 0 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24fd04u;
    // NOP
label_24fd08:
    // 0x24fd08: 0x202  srl         $zero, $zero, 8
    ctx->pc = 0x24fd08u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_24fd0c:
    // 0x24fd0c: 0x3030201  .word       0x03030201                   # INVALID     $t8, $v1, 0x201 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24fd0cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x24FD0C raw=0x03030201"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24fd10:
    // 0x24fd10: 0x0  nop
    ctx->pc = 0x24fd10u;
    // NOP
label_24fd14:
    // 0x24fd14: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24fd14u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x24FD14 raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24fd18:
    // 0x24fd18: 0x2010303  .word       0x02010303                   # sra         $zero, $at, 12 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24fd18u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 1), 12));
label_24fd1c:
    // 0x24fd1c: 0x1020000  .word       0x01020000                   # sll         $zero, $v0, 0 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24fd1cu;
    
label_24fd20:
    // 0x24fd20: 0x2000200  .word       0x02000200                   # sll         $zero, $zero, 8 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24fd20u;
    
label_24fd24:
    // 0x24fd24: 0x3030000  .word       0x03030000                   # sll         $zero, $v1, 0 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24fd24u;
    
label_24fd28:
    // 0x24fd28: 0x0  nop
    ctx->pc = 0x24fd28u;
    // NOP
label_24fd2c:
    // 0x24fd2c: 0x0  nop
    ctx->pc = 0x24fd2cu;
    // NOP
label_24fd30:
    // 0x24fd30: 0x5e5c5c5a  .word       0x5E5C5C5A                   # bgtzl       $s2, . + 4 + (0x5C5A << 2) # 001C0000 <InstrIdType: CPU_NORMAL>
label_24fd34:
    if (ctx->pc == 0x24FD34u) {
        ctx->pc = 0x24FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FD30u;
        // 0x24fd34: 0x64646260  daddiu      $a0, $v1, 0x6260 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25184);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FD38u;
        goto label_24fd38;
    }
    ctx->pc = 0x24FD30u;
    {
        const bool branch_taken_0x24fd30 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x24fd30) {
            ctx->pc = 0x24FD34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FD30u;
            // 0x24fd34: 0x64646260  daddiu      $a0, $v1, 0x6260 (Delay Slot)
            SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25184);
            ctx->in_delay_slot = false;
            ctx->pc = 0x266E9Cu;
            return;
        }
    }
    ctx->pc = 0x24FD38u;
label_24fd38:
    // 0x24fd38: 0x646a7466  daddiu      $t2, $v1, 0x7466
    ctx->pc = 0x24fd38u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29798);
label_24fd3c:
    // 0x24fd3c: 0x6464685c  daddiu      $a0, $v1, 0x685C
    ctx->pc = 0x24fd3cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26716);
label_24fd40:
    // 0x24fd40: 0x5a646464  .word       0x5A646464                   # blezl       $s3, . + 4 + (0x6464 << 2) # 00040000 <InstrIdType: CPU_NORMAL>
label_24fd44:
    if (ctx->pc == 0x24FD44u) {
        ctx->pc = 0x24FD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FD40u;
        // 0x24fd44: 0x6a5c6464  ldl         $gp, 0x6464($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 25700); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 28, (GPR_U64(ctx, 28) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FD48u;
        goto label_24fd48;
    }
    ctx->pc = 0x24FD40u;
    {
        const bool branch_taken_0x24fd40 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x24fd40) {
            ctx->pc = 0x24FD44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FD40u;
            // 0x24fd44: 0x6a5c6464  ldl         $gp, 0x6464($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 25700); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 28, (GPR_U64(ctx, 28) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x268ED4u;
            return;
        }
    }
    ctx->pc = 0x24FD48u;
label_24fd48:
    // 0x24fd48: 0x6a5a645c  ldl         $k0, 0x645C($s2)
    ctx->pc = 0x24fd48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 25692); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 26, (GPR_U64(ctx, 26) & keepMask) | (mem << shift)); }
label_24fd4c:
    // 0x24fd4c: 0x60746c5c  daddi       $s4, $v1, 0x6C5C
    ctx->pc = 0x24fd4cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 3); int64_t imm = (int64_t)(int32_t)27740; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_24fd50:
    // 0x24fd50: 0x706a5c6e  .word       0x706A5C6E                   # INVALID     $v1, $t2, 0x5C6E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x24fd50u;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x24FD50 raw=0x706A5C6E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24fd54:
    // 0x24fd54: 0xff686872  sd          $t0, 0x6872($k1)
    ctx->pc = 0x24fd54u;
    WRITE64(ADD32(GPR_U32(ctx, 27), 26738), GPR_U64(ctx, 8));
label_24fd58:
    // 0x24fd58: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x24fd58u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_24fd5c:
    // 0x24fd5c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x24fd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_24fd60:
    // 0x24fd60: 0x645a5cff  daddiu      $k0, $v0, 0x5CFF
    ctx->pc = 0x24fd60u;
    SET_GPR_S64(ctx, 26, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)23807);
label_24fd64:
    // 0x24fd64: 0x0  nop
    ctx->pc = 0x24fd64u;
    // NOP
label_24fd68:
    // 0x24fd68: 0x0  nop
    ctx->pc = 0x24fd68u;
    // NOP
label_24fd6c:
    // 0x24fd6c: 0x0  nop
    ctx->pc = 0x24fd6cu;
    // NOP
label_24fd70:
    // 0x24fd70: 0x51505050  beql        $t2, $s0, . + 4 + (0x5050 << 2)
label_24fd74:
    if (ctx->pc == 0x24FD74u) {
        ctx->pc = 0x24FD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FD70u;
        // 0x24fd74: 0x51515151  beql        $t2, $s1, . + 4 + (0x5151 << 2) (Delay Slot)
        // Likely branch instruction at 0x24FD74 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FD78u;
        goto label_24fd78;
    }
    ctx->pc = 0x24FD70u;
    {
        const bool branch_taken_0x24fd70 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 16));
        if (branch_taken_0x24fd70) {
            ctx->pc = 0x24FD74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FD70u;
            // 0x24fd74: 0x51515151  beql        $t2, $s1, . + 4 + (0x5151 << 2) (Delay Slot)
            // Likely branch instruction at 0x24FD74 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x263EB4u;
            return;
        }
    }
    ctx->pc = 0x24FD78u;
label_24fd78:
    // 0x24fd78: 0x51515151  beql        $t2, $s1, . + 4 + (0x5151 << 2)
label_24fd7c:
    if (ctx->pc == 0x24FD7Cu) {
        ctx->pc = 0x24FD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FD78u;
        // 0x24fd7c: 0x51515150  beql        $t2, $s1, . + 4 + (0x5150 << 2) (Delay Slot)
        // Likely branch instruction at 0x24FD7C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FD80u;
        goto label_24fd80;
    }
    ctx->pc = 0x24FD78u;
    {
        const bool branch_taken_0x24fd78 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 17));
        if (branch_taken_0x24fd78) {
            ctx->pc = 0x24FD7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FD78u;
            // 0x24fd7c: 0x51515150  beql        $t2, $s1, . + 4 + (0x5150 << 2) (Delay Slot)
            // Likely branch instruction at 0x24FD7C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2642C0u;
            return;
        }
    }
    ctx->pc = 0x24FD80u;
label_24fd80:
    // 0x24fd80: 0x50515151  beql        $v0, $s1, . + 4 + (0x5151 << 2)
label_24fd84:
    if (ctx->pc == 0x24FD84u) {
        ctx->pc = 0x24FD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FD80u;
        // 0x24fd84: 0x51505151  beql        $t2, $s0, . + 4 + (0x5151 << 2) (Delay Slot)
        // Likely branch instruction at 0x24FD84 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FD88u;
        goto label_24fd88;
    }
    ctx->pc = 0x24FD80u;
    {
        const bool branch_taken_0x24fd80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x24fd80) {
            ctx->pc = 0x24FD84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FD80u;
            // 0x24fd84: 0x51505151  beql        $t2, $s0, . + 4 + (0x5151 << 2) (Delay Slot)
            // Likely branch instruction at 0x24FD84 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2642C8u;
            return;
        }
    }
    ctx->pc = 0x24FD88u;
label_24fd88:
    // 0x24fd88: 0x51505150  beql        $t2, $s0, . + 4 + (0x5150 << 2)
label_24fd8c:
    if (ctx->pc == 0x24FD8Cu) {
        ctx->pc = 0x24FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FD88u;
        // 0x24fd8c: 0x51515250  beql        $t2, $s1, . + 4 + (0x5250 << 2) (Delay Slot)
        // Likely branch instruction at 0x24FD8C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FD90u;
        goto label_24fd90;
    }
    ctx->pc = 0x24FD88u;
    {
        const bool branch_taken_0x24fd88 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 16));
        if (branch_taken_0x24fd88) {
            ctx->pc = 0x24FD8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FD88u;
            // 0x24fd8c: 0x51515250  beql        $t2, $s1, . + 4 + (0x5250 << 2) (Delay Slot)
            // Likely branch instruction at 0x24FD8C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2642CCu;
            return;
        }
    }
    ctx->pc = 0x24FD90u;
label_24fd90:
    // 0x24fd90: 0x54515053  bnel        $v0, $s1, . + 4 + (0x5053 << 2)
label_24fd94:
    if (ctx->pc == 0x24FD94u) {
        ctx->pc = 0x24FD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FD90u;
        // 0x24fd94: 0xff5151ff  sd          $s1, 0x51FF($k0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 26), 20991), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FD98u;
        goto label_24fd98;
    }
    ctx->pc = 0x24FD90u;
    {
        const bool branch_taken_0x24fd90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x24fd90) {
            ctx->pc = 0x24FD94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FD90u;
            // 0x24fd94: 0xff5151ff  sd          $s1, 0x51FF($k0) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 26), 20991), GPR_U64(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263EE0u;
            return;
        }
    }
    ctx->pc = 0x24FD98u;
label_24fd98:
    // 0x24fd98: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x24fd98u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_24fd9c:
    // 0x24fd9c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x24fd9cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_24fda0:
    // 0x24fda0: 0x515050ff  beql        $t2, $s0, . + 4 + (0x50FF << 2)
label_24fda4:
    if (ctx->pc == 0x24FDA4u) {
        ctx->pc = 0x24FDA8u;
        goto label_24fda8;
    }
    ctx->pc = 0x24FDA0u;
    {
        const bool branch_taken_0x24fda0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 16));
        if (branch_taken_0x24fda0) {
            ctx->pc = 0x2641A0u;
            return;
        }
    }
    ctx->pc = 0x24FDA8u;
label_24fda8:
    // 0x24fda8: 0x0  nop
    ctx->pc = 0x24fda8u;
    // NOP
label_24fdac:
    // 0x24fdac: 0x0  nop
    ctx->pc = 0x24fdacu;
    // NOP
label_24fdb0:
    // 0x24fdb0: 0x55565555  bnel        $t2, $s6, . + 4 + (0x5555 << 2)
label_24fdb4:
    if (ctx->pc == 0x24FDB4u) {
        ctx->pc = 0x24FDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FDB0u;
        // 0x24fdb4: 0x55555556  bnel        $t2, $s5, . + 4 + (0x5556 << 2) (Delay Slot)
        // Likely branch instruction at 0x24FDB4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FDB8u;
        goto label_24fdb8;
    }
    ctx->pc = 0x24FDB0u;
    {
        const bool branch_taken_0x24fdb0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 22));
        if (branch_taken_0x24fdb0) {
            ctx->pc = 0x24FDB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FDB0u;
            // 0x24fdb4: 0x55555556  bnel        $t2, $s5, . + 4 + (0x5556 << 2) (Delay Slot)
            // Likely branch instruction at 0x24FDB4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x265308u;
            return;
        }
    }
    ctx->pc = 0x24FDB8u;
label_24fdb8:
    // 0x24fdb8: 0x55555755  bnel        $t2, $s5, . + 4 + (0x5755 << 2)
label_24fdbc:
    if (ctx->pc == 0x24FDBCu) {
        ctx->pc = 0x24FDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FDB8u;
        // 0x24fdbc: 0x55555756  bnel        $t2, $s5, . + 4 + (0x5756 << 2) (Delay Slot)
        // Likely branch instruction at 0x24FDBC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FDC0u;
        goto label_24fdc0;
    }
    ctx->pc = 0x24FDB8u;
    {
        const bool branch_taken_0x24fdb8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x24fdb8) {
            ctx->pc = 0x24FDBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FDB8u;
            // 0x24fdbc: 0x55555756  bnel        $t2, $s5, . + 4 + (0x5756 << 2) (Delay Slot)
            // Likely branch instruction at 0x24FDBC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x265B10u;
            return;
        }
    }
    ctx->pc = 0x24FDC0u;
label_24fdc0:
    // 0x24fdc0: 0x56565656  bnel        $s2, $s6, . + 4 + (0x5656 << 2)
label_24fdc4:
    if (ctx->pc == 0x24FDC4u) {
        ctx->pc = 0x24FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FDC0u;
        // 0x24fdc4: 0x55555655  bnel        $t2, $s5, . + 4 + (0x5655 << 2) (Delay Slot)
        // Likely branch instruction at 0x24FDC4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FDC8u;
        goto label_24fdc8;
    }
    ctx->pc = 0x24FDC0u;
    {
        const bool branch_taken_0x24fdc0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        if (branch_taken_0x24fdc0) {
            ctx->pc = 0x24FDC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FDC0u;
            // 0x24fdc4: 0x55555655  bnel        $t2, $s5, . + 4 + (0x5655 << 2) (Delay Slot)
            // Likely branch instruction at 0x24FDC4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x26571Cu;
            return;
        }
    }
    ctx->pc = 0x24FDC8u;
label_24fdc8:
    // 0x24fdc8: 0x55555655  bnel        $t2, $s5, . + 4 + (0x5655 << 2)
label_24fdcc:
    if (ctx->pc == 0x24FDCCu) {
        ctx->pc = 0x24FDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FDC8u;
        // 0x24fdcc: 0x56575555  bnel        $s2, $s7, . + 4 + (0x5555 << 2) (Delay Slot)
        // Likely branch instruction at 0x24FDCC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FDD0u;
        goto label_24fdd0;
    }
    ctx->pc = 0x24FDC8u;
    {
        const bool branch_taken_0x24fdc8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x24fdc8) {
            ctx->pc = 0x24FDCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FDC8u;
            // 0x24fdcc: 0x56575555  bnel        $s2, $s7, . + 4 + (0x5555 << 2) (Delay Slot)
            // Likely branch instruction at 0x24FDCC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x265720u;
            return;
        }
    }
    ctx->pc = 0x24FDD0u;
label_24fdd0:
    // 0x24fdd0: 0x56555556  bnel        $s2, $s5, . + 4 + (0x5556 << 2)
label_24fdd4:
    if (ctx->pc == 0x24FDD4u) {
        ctx->pc = 0x24FDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FDD0u;
        // 0x24fdd4: 0xff575756  sd          $s7, 0x5756($k0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 26), 22358), GPR_U64(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FDD8u;
        goto label_24fdd8;
    }
    ctx->pc = 0x24FDD0u;
    {
        const bool branch_taken_0x24fdd0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        if (branch_taken_0x24fdd0) {
            ctx->pc = 0x24FDD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FDD0u;
            // 0x24fdd4: 0xff575756  sd          $s7, 0x5756($k0) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 26), 22358), GPR_U64(ctx, 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26532Cu;
            return;
        }
    }
    ctx->pc = 0x24FDD8u;
label_24fdd8:
    // 0x24fdd8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x24fdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_24fddc:
    // 0x24fddc: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x24fddcu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_24fde0:
    // 0x24fde0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x24fde0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_24fde4:
    // 0x24fde4: 0x0  nop
    ctx->pc = 0x24fde4u;
    // NOP
label_24fde8:
    // 0x24fde8: 0x0  nop
    ctx->pc = 0x24fde8u;
    // NOP
label_24fdec:
    // 0x24fdec: 0x0  nop
    ctx->pc = 0x24fdecu;
    // NOP
label_24fdf0:
    // 0x24fdf0: 0x58585858  .word       0x58585858                   # blezl       $v0, . + 4 + (0x5858 << 2) # 00180000 <InstrIdType: CPU_NORMAL>
label_24fdf4:
    if (ctx->pc == 0x24FDF4u) {
        ctx->pc = 0x24FDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FDF0u;
        // 0x24fdf4: 0x58585858  .word       0x58585858                   # blezl       $v0, . + 4 + (0x5858 << 2) # 00180000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x24FDF4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FDF8u;
        goto label_24fdf8;
    }
    ctx->pc = 0x24FDF0u;
    {
        const bool branch_taken_0x24fdf0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x24fdf0) {
            ctx->pc = 0x24FDF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FDF0u;
            // 0x24fdf4: 0x58585858  .word       0x58585858                   # blezl       $v0, . + 4 + (0x5858 << 2) # 00180000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x24FDF4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x265F54u;
            return;
        }
    }
    ctx->pc = 0x24FDF8u;
label_24fdf8:
    // 0x24fdf8: 0x58585958  .word       0x58585958                   # blezl       $v0, . + 4 + (0x5958 << 2) # 00180000 <InstrIdType: CPU_NORMAL>
label_24fdfc:
    if (ctx->pc == 0x24FDFCu) {
        ctx->pc = 0x24FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FDF8u;
        // 0x24fdfc: 0x58585958  .word       0x58585958                   # blezl       $v0, . + 4 + (0x5958 << 2) # 00180000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x24FDFC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FE00u;
        goto label_24fe00;
    }
    ctx->pc = 0x24FDF8u;
    {
        const bool branch_taken_0x24fdf8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x24fdf8) {
            ctx->pc = 0x24FDFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FDF8u;
            // 0x24fdfc: 0x58585958  .word       0x58585958                   # blezl       $v0, . + 4 + (0x5958 << 2) # 00180000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x24FDFC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x26635Cu;
            return;
        }
    }
    ctx->pc = 0x24FE00u;
label_24fe00:
    // 0x24fe00: 0x58585858  .word       0x58585858                   # blezl       $v0, . + 4 + (0x5858 << 2) # 00180000 <InstrIdType: CPU_NORMAL>
label_24fe04:
    if (ctx->pc == 0x24FE04u) {
        ctx->pc = 0x24FE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FE00u;
        // 0x24fe04: 0x58585858  .word       0x58585858                   # blezl       $v0, . + 4 + (0x5858 << 2) # 00180000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x24FE04 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FE08u;
        goto label_24fe08;
    }
    ctx->pc = 0x24FE00u;
    {
        const bool branch_taken_0x24fe00 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x24fe00) {
            ctx->pc = 0x24FE04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FE00u;
            // 0x24fe04: 0x58585858  .word       0x58585858                   # blezl       $v0, . + 4 + (0x5858 << 2) # 00180000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x24FE04 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x265F64u;
            return;
        }
    }
    ctx->pc = 0x24FE08u;
label_24fe08:
    // 0x24fe08: 0x58585858  .word       0x58585858                   # blezl       $v0, . + 4 + (0x5858 << 2) # 00180000 <InstrIdType: CPU_NORMAL>
label_24fe0c:
    if (ctx->pc == 0x24FE0Cu) {
        ctx->pc = 0x24FE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FE08u;
        // 0x24fe0c: 0x58595858  .word       0x58595858                   # blezl       $v0, . + 4 + (0x5858 << 2) # 00190000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x24FE0C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FE10u;
        goto label_24fe10;
    }
    ctx->pc = 0x24FE08u;
    {
        const bool branch_taken_0x24fe08 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x24fe08) {
            ctx->pc = 0x24FE0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FE08u;
            // 0x24fe0c: 0x58595858  .word       0x58595858                   # blezl       $v0, . + 4 + (0x5858 << 2) # 00190000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x24FE0C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x265F6Cu;
            return;
        }
    }
    ctx->pc = 0x24FE10u;
label_24fe10:
    // 0x24fe10: 0x58585858  .word       0x58585858                   # blezl       $v0, . + 4 + (0x5858 << 2) # 00180000 <InstrIdType: CPU_NORMAL>
label_24fe14:
    if (ctx->pc == 0x24FE14u) {
        ctx->pc = 0x24FE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FE10u;
        // 0x24fe14: 0xff595959  sd          $t9, 0x5959($k0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 26), 22873), GPR_U64(ctx, 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FE18u;
        goto label_24fe18;
    }
    ctx->pc = 0x24FE10u;
    {
        const bool branch_taken_0x24fe10 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x24fe10) {
            ctx->pc = 0x24FE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FE10u;
            // 0x24fe14: 0xff595959  sd          $t9, 0x5959($k0) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 26), 22873), GPR_U64(ctx, 25));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265F74u;
            return;
        }
    }
    ctx->pc = 0x24FE18u;
label_24fe18:
    // 0x24fe18: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x24fe18u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_24fe1c:
    // 0x24fe1c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x24fe1cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_24fe20:
    // 0x24fe20: 0x585858ff  .word       0x585858FF                   # blezl       $v0, . + 4 + (0x58FF << 2) # 00180000 <InstrIdType: CPU_NORMAL>
label_24fe24:
    if (ctx->pc == 0x24FE24u) {
        ctx->pc = 0x24FE28u;
        goto label_24fe28;
    }
    ctx->pc = 0x24FE20u;
    {
        const bool branch_taken_0x24fe20 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x24fe20) {
            ctx->pc = 0x266220u;
            return;
        }
    }
    ctx->pc = 0x24FE28u;
label_24fe28:
    // 0x24fe28: 0x0  nop
    ctx->pc = 0x24fe28u;
    // NOP
label_24fe2c:
    // 0x24fe2c: 0x0  nop
    ctx->pc = 0x24fe2cu;
    // NOP
label_24fe30:
    // 0x24fe30: 0x47898780  .word       0x47898780                   # INVALID     $gp, $t1, -0x7880 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x24fe30u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x24FE30 raw=0x47898780"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24fe34:
    // 0x24fe34: 0xc49ec000  lwc1        $f30, -0x4000($a0)
    ctx->pc = 0x24fe34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294950912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_24fe38:
    // 0x24fe38: 0x45826000  .word       0x45826000                   # INVALID     $t4, $v0, 0x6000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x24fe38u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xC, function 0x0 at 0x24FE38 raw=0x45826000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24fe3c:
    // 0x24fe3c: 0x479a2c00  .word       0x479A2C00                   # INVALID     $gp, $k0, 0x2C00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x24fe3cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x24FE3C raw=0x479A2C00"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24fe40:
    // 0x24fe40: 0xc4548000  lwc1        $f20, -0x8000($v0)
    ctx->pc = 0x24fe40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294934528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_24fe44:
    // 0x24fe44: 0x47155000  .word       0x47155000                   # INVALID     $t8, $s5, 0x5000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x24fe44u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x0 at 0x24FE44 raw=0x47155000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24fe48:
    // 0x24fe48: 0x479ab000  .word       0x479AB000                   # INVALID     $gp, $k0, -0x5000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x24fe48u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x24FE48 raw=0x479AB000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24fe4c:
    // 0x24fe4c: 0xc4974000  lwc1        $f23, 0x4000($a0)
    ctx->pc = 0x24fe4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_24fe50:
    // 0x24fe50: 0x4772f800  .word       0x4772F800                   # INVALID     $k1, $s2, -0x800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x24fe50u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x0 at 0x24FE50 raw=0x4772F800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24fe54:
    // 0x24fe54: 0x47415c00  .word       0x47415C00                   # INVALID     $k0, $at, 0x5C00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x24fe54u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x0 at 0x24FE54 raw=0x47415C00"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24fe58:
    // 0x24fe58: 0xc3fa0000  ll          $k0, 0x0($ra)
    ctx->pc = 0x24fe58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 0); SET_GPR_S32(ctx, 26, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24fe5c:
    // 0x24fe5c: 0x4771cc00  .word       0x4771CC00                   # INVALID     $k1, $s1, -0x3400 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x24fe5cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x0 at 0x24FE5C raw=0x4771CC00"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24fe60:
    // 0x24fe60: 0x46e10000  .word       0x46E10000                   # INVALID     $s7, $at, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x24fe60u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x17, function 0x0 at 0x24FE60 raw=0x46E10000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24fe64:
    // 0x24fe64: 0xc4960000  lwc1        $f22, 0x0($a0)
    ctx->pc = 0x24fe64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_24fe68:
    // 0x24fe68: 0x46bf6800  .word       0x46BF6800                   # INVALID     $s5, $ra, 0x6800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x24fe68u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x15, function 0x0 at 0x24FE68 raw=0x46BF6800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24fe6c:
    // 0x24fe6c: 0x47159c00  .word       0x47159C00                   # INVALID     $t8, $s5, -0x6400 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x24fe6cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x0 at 0x24FE6C raw=0x47159C00"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24fe70:
    // 0x24fe70: 0xc42f0000  lwc1        $f15, 0x0($at)
    ctx->pc = 0x24fe70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_24fe74:
    // 0x24fe74: 0x47648400  .word       0x47648400                   # INVALID     $k1, $a0, -0x7C00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x24fe74u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x0 at 0x24FE74 raw=0x47648400"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24fe78:
    // 0x24fe78: 0x4711b400  .word       0x4711B400                   # INVALID     $t8, $s1, -0x4C00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x24fe78u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x0 at 0x24FE78 raw=0x4711B400"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24fe7c:
    // 0x24fe7c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x24fe7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24fe80:
    // 0x24fe80: 0x47a41000  .word       0x47A41000                   # INVALID     $sp, $a0, 0x1000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x24fe80u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1D, function 0x0 at 0x24FE80 raw=0x47A41000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24fe84:
    // 0x24fe84: 0x46241000  .word       0x46241000                   # INVALID     $s1, $a0, 0x1000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x24fe84u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x11, function 0x0 at 0x24FE84 raw=0x46241000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24fe88:
    // 0x24fe88: 0xc3160000  ll          $s6, 0x0($t8)
    ctx->pc = 0x24fe88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 0); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24fe8c:
    // 0x24fe8c: 0x47a0a500  .word       0x47A0A500                   # INVALID     $sp, $zero, -0x5B00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x24fe8cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1D, function 0x0 at 0x24FE8C raw=0x47A0A500"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24fe90:
    // 0x24fe90: 0x131a80  sll         $v1, $s3, 10
    ctx->pc = 0x24fe90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 10));
label_24fe94:
    // 0x24fe94: 0x1319f0  tge         $zero, $s3, 103
    ctx->pc = 0x24fe94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_24fe98:
    // 0x24fe98: 0x1319a0  .word       0x001319A0                   # add         $v1, $zero, $s3 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24fe98u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_24fe9c:
    // 0x24fe9c: 0x131960  .word       0x00131960                   # add         $v1, $zero, $s3 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24fe9cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_24fea0:
    // 0x24fea0: 0x131910  .word       0x00131910                   # mfhi        $v1 # 00130100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24fea0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_24fea4:
    // 0x24fea4: 0x131850  .word       0x00131850                   # mfhi        $v1 # 00130040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24fea4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_24fea8:
    // 0x24fea8: 0x131810  .word       0x00131810                   # mfhi        $v1 # 00130000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24fea8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_24feac:
    // 0x24feac: 0x1317b0  tge         $zero, $s3, 94
    ctx->pc = 0x24feacu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_24feb0:
    // 0x24feb0: 0x131780  sll         $v0, $s3, 30
    ctx->pc = 0x24feb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 30));
label_24feb4:
    // 0x24feb4: 0x131770  tge         $zero, $s3, 93
    ctx->pc = 0x24feb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_24feb8:
    // 0x24feb8: 0x0  nop
    ctx->pc = 0x24feb8u;
    // NOP
label_24febc:
    // 0x24febc: 0x0  nop
    ctx->pc = 0x24febcu;
    // NOP
label_24fec0:
    // 0x24fec0: 0x2c5610  .word       0x002C5610                   # mfhi        $t2 # 002C0600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24fec0u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_24fec4:
    // 0x24fec4: 0x2c5630  tge         $at, $t4, 344
    ctx->pc = 0x24fec4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_24fec8:
    // 0x24fec8: 0x2c5650  .word       0x002C5650                   # mfhi        $t2 # 002C0640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24fec8u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_24fecc:
    // 0x24fecc: 0x2c5670  tge         $at, $t4, 345
    ctx->pc = 0x24feccu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_24fed0:
    // 0x24fed0: 0x2c56a0  .word       0x002C56A0                   # add         $t2, $at, $t4 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24fed0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_24fed4:
    // 0x24fed4: 0x2c56c0  .word       0x002C56C0                   # sll         $t2, $t4, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24fed4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 27));
label_24fed8:
    // 0x24fed8: 0x2c56e0  .word       0x002C56E0                   # add         $t2, $at, $t4 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24fed8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_24fedc:
    // 0x24fedc: 0x2c5700  .word       0x002C5700                   # sll         $t2, $t4, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24fedcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 28));
label_24fee0:
    // 0x24fee0: 0x2c5610  .word       0x002C5610                   # mfhi        $t2 # 002C0600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24fee0u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_24fee4:
    // 0x24fee4: 0x2c5730  tge         $at, $t4, 348
    ctx->pc = 0x24fee4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_24fee8:
    // 0x24fee8: 0x2c5750  .word       0x002C5750                   # mfhi        $t2 # 002C0740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24fee8u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_24feec:
    // 0x24feec: 0x0  nop
    ctx->pc = 0x24feecu;
    // NOP
label_24fef0:
    // 0x24fef0: 0x99b0997  j           func_66C265C
label_24fef4:
    if (ctx->pc == 0x24FEF4u) {
        ctx->pc = 0x24FEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FEF0u;
        // 0x24fef4: 0x9a3099f  j           func_68C267C (Delay Slot)
        // J 0x68C267C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FEF8u;
        goto label_24fef8;
    }
    ctx->pc = 0x24FEF0u;
    ctx->pc = 0x24FEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FEF0u;
    // 0x24fef4: 0x9a3099f  j           func_68C267C (Delay Slot)
    // J 0x68C267C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x66C265Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x66C265Cu, 0x24FEF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24FEF8u;
label_24fef8:
    // 0x24fef8: 0x9ab09a7  j           func_6AC269C
label_24fefc:
    if (ctx->pc == 0x24FEFCu) {
        ctx->pc = 0x24FEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FEF8u;
        // 0x24fefc: 0x9b309af  j           func_6CC26BC (Delay Slot)
        // J 0x6CC26BC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FF00u;
        goto label_24ff00;
    }
    ctx->pc = 0x24FEF8u;
    ctx->pc = 0x24FEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FEF8u;
    // 0x24fefc: 0x9b309af  j           func_6CC26BC (Delay Slot)
    // J 0x6CC26BC - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x6AC269Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x6AC269Cu, 0x24FEF8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24FF00u;
label_24ff00:
    // 0x24ff00: 0x9bb09b7  j           func_6EC26DC
label_24ff04:
    if (ctx->pc == 0x24FF04u) {
        ctx->pc = 0x24FF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF00u;
        // 0x24ff04: 0x9c309bf  j           func_70C26FC (Delay Slot)
        // J 0x70C26FC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FF08u;
        goto label_24ff08;
    }
    ctx->pc = 0x24FF00u;
    ctx->pc = 0x24FF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FF00u;
    // 0x24ff04: 0x9c309bf  j           func_70C26FC (Delay Slot)
    // J 0x70C26FC - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x6EC26DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x6EC26DCu, 0x24FF00u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24FF08u;
label_24ff08:
    // 0x24ff08: 0x9cb09c7  j           func_72C271C
label_24ff0c:
    if (ctx->pc == 0x24FF0Cu) {
        ctx->pc = 0x24FF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF08u;
        // 0x24ff0c: 0x9d309cf  j           func_74C273C (Delay Slot)
        // J 0x74C273C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FF10u;
        goto label_24ff10;
    }
    ctx->pc = 0x24FF08u;
    ctx->pc = 0x24FF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FF08u;
    // 0x24ff0c: 0x9d309cf  j           func_74C273C (Delay Slot)
    // J 0x74C273C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x72C271Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x72C271Cu, 0x24FF08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24FF10u;
label_24ff10:
    // 0x24ff10: 0x9db09d7  j           func_76C275C
label_24ff14:
    if (ctx->pc == 0x24FF14u) {
        ctx->pc = 0x24FF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF10u;
        // 0x24ff14: 0x9e309df  j           func_78C277C (Delay Slot)
        // J 0x78C277C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FF18u;
        goto label_24ff18;
    }
    ctx->pc = 0x24FF10u;
    ctx->pc = 0x24FF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FF10u;
    // 0x24ff14: 0x9e309df  j           func_78C277C (Delay Slot)
    // J 0x78C277C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x76C275Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76C275Cu, 0x24FF10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24FF18u;
label_24ff18:
    // 0x24ff18: 0x9eb09e7  j           func_7AC279C
label_24ff1c:
    if (ctx->pc == 0x24FF1Cu) {
        ctx->pc = 0x24FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF18u;
        // 0x24ff1c: 0x9ef  .word       0x000009EF                   # dsubu       $at, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FF20u;
        goto label_24ff20;
    }
    ctx->pc = 0x24FF18u;
    ctx->pc = 0x24FF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FF18u;
    // 0x24ff1c: 0x9ef  .word       0x000009EF                   # dsubu       $at, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AC279Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AC279Cu, 0x24FF18u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24FF20u;
label_24ff20:
    // 0x24ff20: 0x99d0999  j           func_6742664
label_24ff24:
    if (ctx->pc == 0x24FF24u) {
        ctx->pc = 0x24FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF20u;
        // 0x24ff24: 0x9a509a1  j           func_6942684 (Delay Slot)
        // J 0x6942684 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FF28u;
        goto label_24ff28;
    }
    ctx->pc = 0x24FF20u;
    ctx->pc = 0x24FF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FF20u;
    // 0x24ff24: 0x9a509a1  j           func_6942684 (Delay Slot)
    // J 0x6942684 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x6742664u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x6742664u, 0x24FF20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24FF28u;
label_24ff28:
    // 0x24ff28: 0x9ad09a9  j           func_6B426A4
label_24ff2c:
    if (ctx->pc == 0x24FF2Cu) {
        ctx->pc = 0x24FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF28u;
        // 0x24ff2c: 0x9b509b1  j           func_6D426C4 (Delay Slot)
        // J 0x6D426C4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FF30u;
        goto label_24ff30;
    }
    ctx->pc = 0x24FF28u;
    ctx->pc = 0x24FF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FF28u;
    // 0x24ff2c: 0x9b509b1  j           func_6D426C4 (Delay Slot)
    // J 0x6D426C4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x6B426A4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x6B426A4u, 0x24FF28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24FF30u;
label_24ff30:
    // 0x24ff30: 0x9bd09b9  j           func_6F426E4
label_24ff34:
    if (ctx->pc == 0x24FF34u) {
        ctx->pc = 0x24FF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF30u;
        // 0x24ff34: 0x9c509c1  j           func_7142704 (Delay Slot)
        // J 0x7142704 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FF38u;
        goto label_24ff38;
    }
    ctx->pc = 0x24FF30u;
    ctx->pc = 0x24FF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FF30u;
    // 0x24ff34: 0x9c509c1  j           func_7142704 (Delay Slot)
    // J 0x7142704 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x6F426E4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x6F426E4u, 0x24FF30u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24FF38u;
label_24ff38:
    // 0x24ff38: 0x9cd09c9  j           func_7342724
label_24ff3c:
    if (ctx->pc == 0x24FF3Cu) {
        ctx->pc = 0x24FF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF38u;
        // 0x24ff3c: 0x9d509d1  j           func_7542744 (Delay Slot)
        // J 0x7542744 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FF40u;
        goto label_24ff40;
    }
    ctx->pc = 0x24FF38u;
    ctx->pc = 0x24FF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FF38u;
    // 0x24ff3c: 0x9d509d1  j           func_7542744 (Delay Slot)
    // J 0x7542744 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x7342724u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7342724u, 0x24FF38u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24FF40u;
label_24ff40:
    // 0x24ff40: 0x9dd09d9  j           func_7742764
label_24ff44:
    if (ctx->pc == 0x24FF44u) {
        ctx->pc = 0x24FF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF40u;
        // 0x24ff44: 0x9e509e1  j           func_7942784 (Delay Slot)
        // J 0x7942784 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FF48u;
        goto label_24ff48;
    }
    ctx->pc = 0x24FF40u;
    ctx->pc = 0x24FF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FF40u;
    // 0x24ff44: 0x9e509e1  j           func_7942784 (Delay Slot)
    // J 0x7942784 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x7742764u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7742764u, 0x24FF40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24FF48u;
label_24ff48:
    // 0x24ff48: 0x9ed09e9  j           func_7B427A4
label_24ff4c:
    if (ctx->pc == 0x24FF4Cu) {
        ctx->pc = 0x24FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF48u;
        // 0x24ff4c: 0x9f1  tgeu        $zero, $zero, 39 (Delay Slot)
        if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FF50u;
        goto label_24ff50;
    }
    ctx->pc = 0x24FF48u;
    ctx->pc = 0x24FF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FF48u;
    // 0x24ff4c: 0x9f1  tgeu        $zero, $zero, 39 (Delay Slot)
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B427A4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B427A4u, 0x24FF48u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24FF50u;
label_24ff50:
    // 0x24ff50: 0x5f605f2  .word       0x05F605F2                   # INVALID     $t7, $s6, 0x5F2 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x24ff50u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x16 at 0x24FF50 raw=0x05F605F2");
 /* MITIGATED */
label_24ff54:
    // 0x24ff54: 0x5fe05fa  .word       0x05FE05FA                   # INVALID     $t7, $fp, 0x5FA # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x24ff54u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x1E at 0x24FF54 raw=0x05FE05FA");
 /* MITIGATED */
label_24ff58:
    // 0x24ff58: 0x6060602  .word       0x06060602                   # INVALID     $s0, $a2, 0x602 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x24ff58u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x24FF58 raw=0x06060602");
 /* MITIGATED */
label_24ff5c:
    // 0x24ff5c: 0x60e060a  tnei        $s0, 0x60A
    ctx->pc = 0x24ff5cu;
    if (GPR_S64(ctx, 16) != (int64_t)(int32_t)1546) { runtime->handleTrap(rdram, ctx); }
label_24ff60:
    // 0x24ff60: 0x6160612  .word       0x06160612                   # INVALID     $s0, $s6, 0x612 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x24ff60u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x16 at 0x24FF60 raw=0x06160612");
 /* MITIGATED */
label_24ff64:
    // 0x24ff64: 0x61e061a  .word       0x061E061A                   # INVALID     $s0, $fp, 0x61A # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x24ff64u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x1E at 0x24FF64 raw=0x061E061A");
 /* MITIGATED */
label_24ff68:
    // 0x24ff68: 0x6260622  .word       0x06260622                   # INVALID     $s1, $a2, 0x622 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x24ff68u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x24FF68 raw=0x06260622");
 /* MITIGATED */
label_24ff6c:
    // 0x24ff6c: 0x62e062a  tnei        $s1, 0x62A
    ctx->pc = 0x24ff6cu;
    if (GPR_S64(ctx, 17) != (int64_t)(int32_t)1578) { runtime->handleTrap(rdram, ctx); }
label_24ff70:
    // 0x24ff70: 0x6360632  .word       0x06360632                   # INVALID     $s1, $s6, 0x632 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x24ff70u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x16 at 0x24FF70 raw=0x06360632");
 /* MITIGATED */
label_24ff74:
    // 0x24ff74: 0x63e063a  .word       0x063E063A                   # INVALID     $s1, $fp, 0x63A # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x24ff74u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x1E at 0x24FF74 raw=0x063E063A");
 /* MITIGATED */
label_24ff78:
    // 0x24ff78: 0x6460642  .word       0x06460642                   # INVALID     $s2, $a2, 0x642 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x24ff78u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x24FF78 raw=0x06460642");
 /* MITIGATED */
label_24ff7c:
    // 0x24ff7c: 0x64a  .word       0x0000064A                   # movz        $zero, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ff7cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_24ff80:
    // 0x24ff80: 0x5f805f4  mtsab       $t7, 0x5F4
    ctx->pc = 0x24ff80u;
    ctx->sa = ((GPR_U32(ctx, 15) ^ (uint32_t)1524) & 0xF) << 3;
label_24ff84:
    // 0x24ff84: 0x60005fc  bltz        $s0, . + 4 + (0x5FC << 2)
label_24ff88:
    if (ctx->pc == 0x24FF88u) {
        ctx->pc = 0x24FF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF84u;
        // 0x24ff88: 0x6080604  tgei        $s0, 0x604 (Delay Slot)
        if (GPR_S64(ctx, 16) >= (int64_t)(int32_t)1540) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FF8Cu;
        goto label_24ff8c;
    }
    ctx->pc = 0x24FF84u;
    {
        const bool branch_taken_0x24ff84 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x24FF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF84u;
        // 0x24ff88: 0x6080604  tgei        $s0, 0x604 (Delay Slot)
        if (GPR_S64(ctx, 16) >= (int64_t)(int32_t)1540) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ff84) {
            ctx->pc = 0x251778u;
            { ctx->pc = 0x251778; return; }
        }
    }
    ctx->pc = 0x24FF8Cu;
label_24ff8c:
    // 0x24ff8c: 0x610060c  bltzal      $s0, . + 4 + (0x60C << 2)
label_24ff90:
    if (ctx->pc == 0x24FF90u) {
        ctx->pc = 0x24FF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF8Cu;
        // 0x24ff90: 0x6180614  mtsab       $s0, 0x614 (Delay Slot)
        ctx->sa = ((GPR_U32(ctx, 16) ^ (uint32_t)1556) & 0xF) << 3;
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FF94u;
        goto label_24ff94;
    }
    ctx->pc = 0x24FF8Cu;
    {
        const bool branch_taken_0x24ff8c = (GPR_S32(ctx, 16) < 0);
        SET_GPR_U32(ctx, 31, 0x24FF94u);
        ctx->pc = 0x24FF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF8Cu;
        // 0x24ff90: 0x6180614  mtsab       $s0, 0x614 (Delay Slot)
        ctx->sa = ((GPR_U32(ctx, 16) ^ (uint32_t)1556) & 0xF) << 3;
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ff8c) {
            ctx->pc = 0x2517C0u;
            { ctx->pc = 0x2517c0; return; }
        }
    }
    ctx->pc = 0x24FF94u;
label_24ff94:
    // 0x24ff94: 0x620061c  bltz        $s1, . + 4 + (0x61C << 2)
label_24ff98:
    if (ctx->pc == 0x24FF98u) {
        ctx->pc = 0x24FF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF94u;
        // 0x24ff98: 0x6280624  tgei        $s1, 0x624 (Delay Slot)
        if (GPR_S64(ctx, 17) >= (int64_t)(int32_t)1572) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FF9Cu;
        goto label_24ff9c;
    }
    ctx->pc = 0x24FF94u;
    {
        const bool branch_taken_0x24ff94 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x24FF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF94u;
        // 0x24ff98: 0x6280624  tgei        $s1, 0x624 (Delay Slot)
        if (GPR_S64(ctx, 17) >= (int64_t)(int32_t)1572) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ff94) {
            ctx->pc = 0x251808u;
            { ctx->pc = 0x251808; return; }
        }
    }
    ctx->pc = 0x24FF9Cu;
label_24ff9c:
    // 0x24ff9c: 0x630062c  bltzal      $s1, . + 4 + (0x62C << 2)
label_24ffa0:
    if (ctx->pc == 0x24FFA0u) {
        ctx->pc = 0x24FFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF9Cu;
        // 0x24ffa0: 0x6380634  mtsab       $s1, 0x634 (Delay Slot)
        ctx->sa = ((GPR_U32(ctx, 17) ^ (uint32_t)1588) & 0xF) << 3;
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FFA4u;
        goto label_24ffa4;
    }
    ctx->pc = 0x24FF9Cu;
    {
        const bool branch_taken_0x24ff9c = (GPR_S32(ctx, 17) < 0);
        SET_GPR_U32(ctx, 31, 0x24FFA4u);
        ctx->pc = 0x24FFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF9Cu;
        // 0x24ffa0: 0x6380634  mtsab       $s1, 0x634 (Delay Slot)
        ctx->sa = ((GPR_U32(ctx, 17) ^ (uint32_t)1588) & 0xF) << 3;
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ff9c) {
            ctx->pc = 0x251850u;
            { ctx->pc = 0x251850; return; }
        }
    }
    ctx->pc = 0x24FFA4u;
label_24ffa4:
    // 0x24ffa4: 0x640063c  bltz        $s2, . + 4 + (0x63C << 2)
label_24ffa8:
    if (ctx->pc == 0x24FFA8u) {
        ctx->pc = 0x24FFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFA4u;
        // 0x24ffa8: 0x6480644  tgei        $s2, 0x644 (Delay Slot)
        if (GPR_S64(ctx, 18) >= (int64_t)(int32_t)1604) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FFACu;
        goto label_24ffac;
    }
    ctx->pc = 0x24FFA4u;
    {
        const bool branch_taken_0x24ffa4 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x24FFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFA4u;
        // 0x24ffa8: 0x6480644  tgei        $s2, 0x644 (Delay Slot)
        if (GPR_S64(ctx, 18) >= (int64_t)(int32_t)1604) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ffa4) {
            ctx->pc = 0x251898u;
            { ctx->pc = 0x251898; return; }
        }
    }
    ctx->pc = 0x24FFACu;
label_24ffac:
    // 0x24ffac: 0x64c  syscall     25
    ctx->pc = 0x24ffacu;
    ctx->pc = 0x24FFB0u;
runtime->handleSyscall(rdram, ctx, 0x19u);
label_24ffb0:
    // 0x24ffb0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x24ffb0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_24ffb4:
    // 0x24ffb4: 0x251fffff  addiu       $ra, $t0, -0x1
    ctx->pc = 0x24ffb4u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_24ffb8:
    // 0x24ffb8: 0xffffff20  sd          $ra, -0xE0($ra)
    ctx->pc = 0x24ffb8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967072), GPR_U64(ctx, 31));
label_24ffbc:
    // 0x24ffbc: 0xffff2006  sd          $ra, 0x2006($ra)
    ctx->pc = 0x24ffbcu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 8198), GPR_U64(ctx, 31));
label_24ffc0:
    // 0x24ffc0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x24ffc0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_24ffc4:
    // 0x24ffc4: 0xffff02ff  sd          $ra, 0x2FF($ra)
    ctx->pc = 0x24ffc4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 767), GPR_U64(ctx, 31));
label_24ffc8:
    // 0x24ffc8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x24ffc8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_24ffcc:
    // 0x24ffcc: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x24ffccu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_24ffd0:
    // 0x24ffd0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x24ffd0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_24ffd4:
    // 0x24ffd4: 0xffffff07  sd          $ra, -0xF9($ra)
    ctx->pc = 0x24ffd4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967047), GPR_U64(ctx, 31));
label_24ffd8:
    // 0x24ffd8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x24ffd8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_24ffdc:
    // 0x24ffdc: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x24ffdcu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_24ffe0:
    // 0x24ffe0: 0x1effffff  .word       0x1EFFFFFF                   # bgtz        $s7, . + 4 + (-0x1 << 2) # 001F0000 <InstrIdType: CPU_NORMAL>
label_24ffe4:
    if (ctx->pc == 0x24FFE4u) {
        ctx->pc = 0x24FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFE0u;
        // 0x24ffe4: 0xff070d07  sd          $a3, 0xD07($t8) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 24), 3335), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24FFE8u;
        goto label_24ffe8;
    }
    ctx->pc = 0x24FFE0u;
    {
        const bool branch_taken_0x24ffe0 = (GPR_S32(ctx, 23) > 0);
        ctx->pc = 0x24FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FFE0u;
        // 0x24ffe4: 0xff070d07  sd          $a3, 0xD07($t8) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 24), 3335), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ffe0) {
            ctx->pc = 0x24FFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ffe0;
        }
    }
    ctx->pc = 0x24FFE8u;
label_24ffe8:
    // 0x24ffe8: 0xffff0aff  sd          $ra, 0xAFF($ra)
    ctx->pc = 0x24ffe8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 2815), GPR_U64(ctx, 31));
label_24ffec:
    // 0x24ffec: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x24ffecu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_24fff0:
    // 0x24fff0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x24fff0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_24fff4:
    // 0x24fff4: 0xff  dsra32      $zero, $zero, 3
    ctx->pc = 0x24fff4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 3));
label_24fff8:
    // 0x24fff8: 0x0  nop
    ctx->pc = 0x24fff8u;
    // NOP
label_24fffc:
    // 0x24fffc: 0x0  nop
    ctx->pc = 0x24fffcu;
    // NOP
label_250000:
    // 0x250000: 0x20b0100  .word       0x020B0100                   # sll         $zero, $t3, 4 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250000u;
    
label_250004:
    // 0x250004: 0x404030a  .word       0x0404030A                   # INVALID     $zero, $a0, 0x30A # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x250004u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x250004 raw=0x0404030A");
 /* MITIGATED */
label_250008:
    // 0x250008: 0x90e0d15  j           func_4383454
label_25000c:
    if (ctx->pc == 0x25000Cu) {
        ctx->pc = 0x25000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250008u;
        // 0x25000c: 0x909050c  j           func_4241430 (Delay Slot)
        // J 0x4241430 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250010u;
        goto label_250010;
    }
    ctx->pc = 0x250008u;
    ctx->pc = 0x25000Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250008u;
    // 0x25000c: 0x909050c  j           func_4241430 (Delay Slot)
    // J 0x4241430 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x4383454u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4383454u, 0x250008u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x250010u;
label_250010:
    // 0x250010: 0xb090909  j           func_C242424
label_250014:
    if (ctx->pc == 0x250014u) {
        ctx->pc = 0x250014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250010u;
        // 0x250014: 0xe0b0404  jal         func_82C1010 (Delay Slot)
        // JAL 0x82C1010 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250018u;
        goto label_250018;
    }
    ctx->pc = 0x250010u;
    ctx->pc = 0x250014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250010u;
    // 0x250014: 0xe0b0404  jal         func_82C1010 (Delay Slot)
    // JAL 0x82C1010 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC242424u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC242424u, 0x250010u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x250018u;
label_250018:
    // 0x250018: 0xe0b040b  jal         func_82C102C
label_25001c:
    if (ctx->pc == 0x25001Cu) {
        ctx->pc = 0x25001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250018u;
        // 0x25001c: 0xa0d060b  j           func_834182C (Delay Slot)
        // J 0x834182C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250020u;
        goto label_250020;
    }
    ctx->pc = 0x250018u;
    SET_GPR_U32(ctx, 31, 0x250020u);
    ctx->pc = 0x25001Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250018u;
    // 0x25001c: 0xa0d060b  j           func_834182C (Delay Slot)
    // J 0x834182C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x82C102Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x82C102Cu, 0x250018u, 0x250020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250020u;
label_250020:
    // 0x250020: 0x70e0b14  tnei        $t8, 0xB14
    ctx->pc = 0x250020u;
    if (GPR_S64(ctx, 24) != (int64_t)(int32_t)2836) { runtime->handleTrap(rdram, ctx); }
label_250024:
    // 0x250024: 0xff050508  sd          $a1, 0x508($t8)
    ctx->pc = 0x250024u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 1288), GPR_U64(ctx, 5));
label_250028:
    // 0x250028: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x250028u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_25002c:
    // 0x25002c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x25002cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_250030:
    // 0x250030: 0x90b0bff  j           func_42C2FFC
label_250034:
    if (ctx->pc == 0x250034u) {
        ctx->pc = 0x250038u;
        goto label_250038;
    }
    ctx->pc = 0x250030u;
    ctx->pc = 0x42C2FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2FFCu, 0x250030u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x250038u;
label_250038:
    // 0x250038: 0x0  nop
    ctx->pc = 0x250038u;
    // NOP
label_25003c:
    // 0x25003c: 0x0  nop
    ctx->pc = 0x25003cu;
    // NOP
label_250040:
    // 0x250040: 0x11111111  beq         $t0, $s1, . + 4 + (0x1111 << 2)
label_250044:
    if (ctx->pc == 0x250044u) {
        ctx->pc = 0x250044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250040u;
        // 0x250044: 0x11111111  beq         $t0, $s1, . + 4 + (0x1111 << 2) (Delay Slot)
        // Likely branch instruction at 0x250044 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250048u;
        goto label_250048;
    }
    ctx->pc = 0x250040u;
    {
        const bool branch_taken_0x250040 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 17));
        ctx->pc = 0x250044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250040u;
        // 0x250044: 0x11111111  beq         $t0, $s1, . + 4 + (0x1111 << 2) (Delay Slot)
        // Likely branch instruction at 0x250044 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x250040) {
            ctx->pc = 0x254488u;
            { ctx->pc = 0x254488; return; }
        }
    }
    ctx->pc = 0x250048u;
label_250048:
    // 0x250048: 0x11111211  beq         $t0, $s1, . + 4 + (0x1211 << 2)
label_25004c:
    if (ctx->pc == 0x25004Cu) {
        ctx->pc = 0x25004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250048u;
        // 0x25004c: 0x11111211  beq         $t0, $s1, . + 4 + (0x1211 << 2) (Delay Slot)
        // Likely branch instruction at 0x25004C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250050u;
        goto label_250050;
    }
    ctx->pc = 0x250048u;
    {
        const bool branch_taken_0x250048 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 17));
        ctx->pc = 0x25004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250048u;
        // 0x25004c: 0x11111211  beq         $t0, $s1, . + 4 + (0x1211 << 2) (Delay Slot)
        // Likely branch instruction at 0x25004C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x250048) {
            ctx->pc = 0x254890u;
            { ctx->pc = 0x254890; return; }
        }
    }
    ctx->pc = 0x250050u;
label_250050:
    // 0x250050: 0x11111111  beq         $t0, $s1, . + 4 + (0x1111 << 2)
label_250054:
    if (ctx->pc == 0x250054u) {
        ctx->pc = 0x250054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250050u;
        // 0x250054: 0x11111111  beq         $t0, $s1, . + 4 + (0x1111 << 2) (Delay Slot)
        // Likely branch instruction at 0x250054 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250058u;
        goto label_250058;
    }
    ctx->pc = 0x250050u;
    {
        const bool branch_taken_0x250050 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 17));
        ctx->pc = 0x250054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250050u;
        // 0x250054: 0x11111111  beq         $t0, $s1, . + 4 + (0x1111 << 2) (Delay Slot)
        // Likely branch instruction at 0x250054 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x250050) {
            ctx->pc = 0x254498u;
            { ctx->pc = 0x254498; return; }
        }
    }
    ctx->pc = 0x250058u;
label_250058:
    // 0x250058: 0x11111111  beq         $t0, $s1, . + 4 + (0x1111 << 2)
label_25005c:
    if (ctx->pc == 0x25005Cu) {
        ctx->pc = 0x25005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250058u;
        // 0x25005c: 0x11121111  beq         $t0, $s2, . + 4 + (0x1111 << 2) (Delay Slot)
        // Likely branch instruction at 0x25005C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250060u;
        goto label_250060;
    }
    ctx->pc = 0x250058u;
    {
        const bool branch_taken_0x250058 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 17));
        ctx->pc = 0x25005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250058u;
        // 0x25005c: 0x11121111  beq         $t0, $s2, . + 4 + (0x1111 << 2) (Delay Slot)
        // Likely branch instruction at 0x25005C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x250058) {
            ctx->pc = 0x2544A0u;
            { ctx->pc = 0x2544a0; return; }
        }
    }
    ctx->pc = 0x250060u;
label_250060:
    // 0x250060: 0x11111111  beq         $t0, $s1, . + 4 + (0x1111 << 2)
label_250064:
    if (ctx->pc == 0x250064u) {
        ctx->pc = 0x250064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250060u;
        // 0x250064: 0xff121211  sd          $s2, 0x1211($t8) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 24), 4625), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250068u;
        goto label_250068;
    }
    ctx->pc = 0x250060u;
    {
        const bool branch_taken_0x250060 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 17));
        ctx->pc = 0x250064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250060u;
        // 0x250064: 0xff121211  sd          $s2, 0x1211($t8) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 24), 4625), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250060) {
            ctx->pc = 0x2544A8u;
            { ctx->pc = 0x2544a8; return; }
        }
    }
    ctx->pc = 0x250068u;
label_250068:
    // 0x250068: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x250068u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_25006c:
    // 0x25006c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x25006cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_250070:
    // 0x250070: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x250070u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_250074:
    // 0x250074: 0x0  nop
    ctx->pc = 0x250074u;
    // NOP
label_250078:
    // 0x250078: 0x0  nop
    ctx->pc = 0x250078u;
    // NOP
label_25007c:
    // 0x25007c: 0x0  nop
    ctx->pc = 0x25007cu;
    // NOP
label_250080:
    // 0x250080: 0x800060  .word       0x00800060                   # add         $zero, $a0, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250080u;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_250084:
    // 0x250084: 0x80008  .word       0x00080008                   # jr          $zero # 00080000 <InstrIdType: CPU_SPECIAL>
label_250088:
    if (ctx->pc == 0x250088u) {
        ctx->pc = 0x250088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250084u;
        // 0x250088: 0x260000  .word       0x00260000                   # sll         $zero, $a2, 0 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->in_delay_slot = false;
        ctx->pc = 0x25008Cu;
        goto label_25008c;
    }
    ctx->pc = 0x250084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x250088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250084u;
        // 0x250088: 0x260000  .word       0x00260000                   # sll         $zero, $a2, 0 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250084u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25008Cu;
label_25008c:
    // 0x25008c: 0x400000  .word       0x00400000                   # sll         $zero, $zero, 0 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25008cu;
    // NOP
label_250090:
    // 0x250090: 0x100010  .word       0x00100010                   # mfhi        $zero # 00100000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250090u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_250094:
    // 0x250094: 0x1100000  .word       0x01100000                   # sll         $zero, $s0, 0 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250094u;
    
label_250098:
    // 0x250098: 0x86  .word       0x00000086                   # srlv        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250098u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25009c:
    // 0x25009c: 0x20800008  addi        $zero, $a0, 0x8
    ctx->pc = 0x25009cu;
    // NOP (addi to $zero)
label_2500a0:
    // 0x2500a0: 0x0  nop
    ctx->pc = 0x2500a0u;
    // NOP
label_2500a4:
    // 0x2500a4: 0x1000000  .word       0x01000000                   # sll         $zero, $zero, 0 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2500a4u;
    // NOP
label_2500a8:
    // 0x2500a8: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2500a8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2500ac:
    // 0x2500ac: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2500acu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2500b0:
    // 0x2500b0: 0x0  nop
    ctx->pc = 0x2500b0u;
    // NOP
label_2500b4:
    // 0x2500b4: 0x0  nop
    ctx->pc = 0x2500b4u;
    // NOP
label_2500b8:
    // 0x2500b8: 0x0  nop
    ctx->pc = 0x2500b8u;
    // NOP
label_2500bc:
    // 0x2500bc: 0x0  nop
    ctx->pc = 0x2500bcu;
    // NOP
label_2500c0:
    // 0x2500c0: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2500c0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2500c4:
    // 0x2500c4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2500c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2500c8:
    // 0x2500c8: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x2500c8u;
    
label_2500cc:
    // 0x2500cc: 0x0  nop
    ctx->pc = 0x2500ccu;
    // NOP
label_2500d0:
    // 0x2500d0: 0x3c020  add         $t8, $zero, $v1
    ctx->pc = 0x2500d0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_2500d4:
    // 0x2500d4: 0x0  nop
    ctx->pc = 0x2500d4u;
    // NOP
label_2500d8:
    // 0x2500d8: 0x0  nop
    ctx->pc = 0x2500d8u;
    // NOP
label_2500dc:
    // 0x2500dc: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2500dcu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2500e0:
    // 0x2500e0: 0x10  mfhi        $zero
    ctx->pc = 0x2500e0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2500e4:
    // 0x2500e4: 0x0  nop
    ctx->pc = 0x2500e4u;
    // NOP
label_2500e8:
    // 0x2500e8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2500e8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2500ec:
    // 0x2500ec: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x2500ecu;
    
label_2500f0:
    // 0x2500f0: 0x0  nop
    ctx->pc = 0x2500f0u;
    // NOP
label_2500f4:
    // 0x2500f4: 0x0  nop
    ctx->pc = 0x2500f4u;
    // NOP
label_2500f8:
    // 0x2500f8: 0x0  nop
    ctx->pc = 0x2500f8u;
    // NOP
label_2500fc:
    // 0x2500fc: 0x1540  sll         $v0, $zero, 21
    ctx->pc = 0x2500fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_250100:
    // 0x250100: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x250100u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_250104:
    // 0x250104: 0x0  nop
    ctx->pc = 0x250104u;
    // NOP
label_250108:
    // 0x250108: 0x0  nop
    ctx->pc = 0x250108u;
    // NOP
label_25010c:
    // 0x25010c: 0x0  nop
    ctx->pc = 0x25010cu;
    // NOP
label_250110:
    // 0x250110: 0x650064e  bltzal      $s2, . + 4 + (0x64E << 2)
label_250114:
    if (ctx->pc == 0x250114u) {
        ctx->pc = 0x250114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250110u;
        // 0x250114: 0x6520c2d  bltzall     $s2, . + 4 + (0xC2D << 2) (Delay Slot)
        // REGIMM branch instruction to 0x2531CC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250118u;
        goto label_250118;
    }
    ctx->pc = 0x250110u;
    {
        const bool branch_taken_0x250110 = (GPR_S32(ctx, 18) < 0);
        SET_GPR_U32(ctx, 31, 0x250118u);
        ctx->pc = 0x250114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250110u;
        // 0x250114: 0x6520c2d  bltzall     $s2, . + 4 + (0xC2D << 2) (Delay Slot)
        // REGIMM branch instruction to 0x2531CC - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x250110) {
            ctx->pc = 0x251A4Cu;
            { ctx->pc = 0x251a4c; return; }
        }
    }
    ctx->pc = 0x250118u;
label_250118:
    // 0x250118: 0xc2d0654  jal         func_B41950
label_25011c:
    if (ctx->pc == 0x25011Cu) {
        ctx->pc = 0x25011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250118u;
        // 0x25011c: 0x6580656  mtsab       $s2, 0x656 (Delay Slot)
        ctx->sa = ((GPR_U32(ctx, 18) ^ (uint32_t)1622) & 0xF) << 3;
        ctx->in_delay_slot = false;
        ctx->pc = 0x250120u;
        goto label_250120;
    }
    ctx->pc = 0x250118u;
    SET_GPR_U32(ctx, 31, 0x250120u);
    ctx->pc = 0x25011Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250118u;
    // 0x25011c: 0x6580656  mtsab       $s2, 0x656 (Delay Slot)
    ctx->sa = ((GPR_U32(ctx, 18) ^ (uint32_t)1622) & 0xF) << 3;
    ctx->in_delay_slot = false;
    ctx->pc = 0xB41950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB41950u, 0x250118u, 0x250120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250120u;
label_250120:
    // 0x250120: 0x65a0c2d  .word       0x065A0C2D                   # INVALID     $s2, $k0, 0xC2D # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x250120u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x1A at 0x250120 raw=0x065A0C2D");
 /* MITIGATED */
label_250124:
    // 0x250124: 0xc2d065c  jal         func_B41970
label_250128:
    if (ctx->pc == 0x250128u) {
        ctx->pc = 0x250128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250124u;
        // 0x250128: 0x660065e  bltz        $s3, . + 4 + (0x65E << 2) (Delay Slot)
        // REGIMM branch instruction to 0x251AA4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x25012Cu;
        goto label_25012c;
    }
    ctx->pc = 0x250124u;
    SET_GPR_U32(ctx, 31, 0x25012Cu);
    ctx->pc = 0x250128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250124u;
    // 0x250128: 0x660065e  bltz        $s3, . + 4 + (0x65E << 2) (Delay Slot)
    // REGIMM branch instruction to 0x251AA4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB41970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB41970u, 0x250124u, 0x25012Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25012Cu;
label_25012c:
    // 0x25012c: 0x6620c2d  bltzl       $s3, . + 4 + (0xC2D << 2)
label_250130:
    if (ctx->pc == 0x250130u) {
        ctx->pc = 0x250130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25012Cu;
        // 0x250130: 0xc2d0664  jal         func_B41990 (Delay Slot)
        // JAL 0xB41990 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250134u;
        goto label_250134;
    }
    ctx->pc = 0x25012Cu;
    {
        const bool branch_taken_0x25012c = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x25012c) {
            ctx->pc = 0x250130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25012Cu;
            // 0x250130: 0xc2d0664  jal         func_B41990 (Delay Slot)
            // JAL 0xB41990 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2531E4u;
            { ctx->pc = 0x2531e4; return; }
        }
    }
    ctx->pc = 0x250134u;
label_250134:
    // 0x250134: 0x6680666  tgei        $s3, 0x666
    ctx->pc = 0x250134u;
    if (GPR_S64(ctx, 19) >= (int64_t)(int32_t)1638) { runtime->handleTrap(rdram, ctx); }
label_250138:
    // 0x250138: 0x66a0c2d  tlti        $s3, 0xC2D
    ctx->pc = 0x250138u;
    if (GPR_S64(ctx, 19) < (int64_t)(int32_t)3117) { runtime->handleTrap(rdram, ctx); }
label_25013c:
    // 0x25013c: 0xc2d066c  jal         func_B419B0
label_250140:
    if (ctx->pc == 0x250140u) {
        ctx->pc = 0x250140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25013Cu;
        // 0x250140: 0x670066e  bltzal      $s3, . + 4 + (0x66E << 2) (Delay Slot)
        // REGIMM branch instruction to 0x251AFC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250144u;
        goto label_250144;
    }
    ctx->pc = 0x25013Cu;
    SET_GPR_U32(ctx, 31, 0x250144u);
    ctx->pc = 0x250140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25013Cu;
    // 0x250140: 0x670066e  bltzal      $s3, . + 4 + (0x66E << 2) (Delay Slot)
    // REGIMM branch instruction to 0x251AFC - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB419B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB419B0u, 0x25013Cu, 0x250144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250144u;
label_250144:
    // 0x250144: 0x6740672  .word       0x06740672                   # INVALID     $s3, $s4, 0x672 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x250144u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x14 at 0x250144 raw=0x06740672");
 /* MITIGATED */
label_250148:
    // 0x250148: 0xc2d0676  jal         func_B419D8
label_25014c:
    if (ctx->pc == 0x25014Cu) {
        ctx->pc = 0x25014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250148u;
        // 0x25014c: 0x67a0678  .word       0x067A0678                   # INVALID     $s3, $k0, 0x678 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//         throw std::runtime_error("Unhandled REGIMM instruction: 0x1A at 0x25014C raw=0x067A0678");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x250150u;
        goto label_250150;
    }
    ctx->pc = 0x250148u;
    SET_GPR_U32(ctx, 31, 0x250150u);
    ctx->pc = 0x25014Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250148u;
    // 0x25014c: 0x67a0678  .word       0x067A0678                   # INVALID     $s3, $k0, 0x678 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x1A at 0x25014C raw=0x067A0678");
 /* MITIGATED */
    ctx->in_delay_slot = false;
    ctx->pc = 0xB419D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB419D8u, 0x250148u, 0x250150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250150u;
label_250150:
    // 0x250150: 0x67c0c2d  .word       0x067C0C2D                   # INVALID     $s3, $gp, 0xC2D # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x250150u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x1C at 0x250150 raw=0x067C0C2D");
 /* MITIGATED */
label_250154:
    // 0x250154: 0xc2d067e  jal         func_B419F8
label_250158:
    if (ctx->pc == 0x250158u) {
        ctx->pc = 0x250158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250154u;
        // 0x250158: 0x6820680  bltzl       $s4, . + 4 + (0x680 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x251B5C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x25015Cu;
        goto label_25015c;
    }
    ctx->pc = 0x250154u;
    SET_GPR_U32(ctx, 31, 0x25015Cu);
    ctx->pc = 0x250158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250154u;
    // 0x250158: 0x6820680  bltzl       $s4, . + 4 + (0x680 << 2) (Delay Slot)
    // REGIMM branch instruction to 0x251B5C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB419F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB419F8u, 0x250154u, 0x25015Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25015Cu;
label_25015c:
    // 0x25015c: 0x6860684  .word       0x06860684                   # INVALID     $s4, $a2, 0x684 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x25015cu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x25015C raw=0x06860684");
 /* MITIGATED */
label_250160:
    // 0x250160: 0xc2d0688  jal         func_B41A20
label_250164:
    if (ctx->pc == 0x250164u) {
        ctx->pc = 0x250164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250160u;
        // 0x250164: 0x68c068a  teqi        $s4, 0x68A (Delay Slot)
        if (GPR_S64(ctx, 20) == (int64_t)(int32_t)1674) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x250168u;
        goto label_250168;
    }
    ctx->pc = 0x250160u;
    SET_GPR_U32(ctx, 31, 0x250168u);
    ctx->pc = 0x250164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250160u;
    // 0x250164: 0x68c068a  teqi        $s4, 0x68A (Delay Slot)
    if (GPR_S64(ctx, 20) == (int64_t)(int32_t)1674) { runtime->handleTrap(rdram, ctx); }
    ctx->in_delay_slot = false;
    ctx->pc = 0xB41A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB41A20u, 0x250160u, 0x250168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250168u;
label_250168:
    // 0x250168: 0x68e0c2d  tnei        $s4, 0xC2D
    ctx->pc = 0x250168u;
    if (GPR_S64(ctx, 20) != (int64_t)(int32_t)3117) { runtime->handleTrap(rdram, ctx); }
label_25016c:
    // 0x25016c: 0x6920690  bltzall     $s4, . + 4 + (0x690 << 2)
label_250170:
    if (ctx->pc == 0x250170u) {
        ctx->pc = 0x250170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25016Cu;
        // 0x250170: 0x6960694  .word       0x06960694                   # INVALID     $s4, $s6, 0x694 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//         throw std::runtime_error("Unhandled REGIMM instruction: 0x16 at 0x250170 raw=0x06960694");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x250174u;
        goto label_250174;
    }
    ctx->pc = 0x25016Cu;
    {
        const bool branch_taken_0x25016c = (GPR_S32(ctx, 20) < 0);
        if (branch_taken_0x25016c) {
            SET_GPR_U32(ctx, 31, 0x250174u);
            ctx->pc = 0x250170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25016Cu;
            // 0x250170: 0x6960694  .word       0x06960694                   # INVALID     $s4, $s6, 0x694 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//             throw std::runtime_error("Unhandled REGIMM instruction: 0x16 at 0x250170 raw=0x06960694");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x251BB0u;
            { ctx->pc = 0x251bb0; return; }
        }
    }
    ctx->pc = 0x250174u;
label_250174:
    // 0x250174: 0x6980c2d  mtsab       $s4, 0xC2D
    ctx->pc = 0x250174u;
    ctx->sa = ((GPR_U32(ctx, 20) ^ (uint32_t)3117) & 0xF) << 3;
label_250178:
    // 0x250178: 0xc2d069a  jal         func_B41A68
label_25017c:
    if (ctx->pc == 0x25017Cu) {
        ctx->pc = 0x25017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250178u;
        // 0x25017c: 0x69e069c  .word       0x069E069C                   # INVALID     $s4, $fp, 0x69C # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//         throw std::runtime_error("Unhandled REGIMM instruction: 0x1E at 0x25017C raw=0x069E069C");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x250180u;
        goto label_250180;
    }
    ctx->pc = 0x250178u;
    SET_GPR_U32(ctx, 31, 0x250180u);
    ctx->pc = 0x25017Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250178u;
    // 0x25017c: 0x69e069c  .word       0x069E069C                   # INVALID     $s4, $fp, 0x69C # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x1E at 0x25017C raw=0x069E069C");
 /* MITIGATED */
    ctx->in_delay_slot = false;
    ctx->pc = 0xB41A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB41A68u, 0x250178u, 0x250180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250180u;
label_250180:
    // 0x250180: 0x6a00c2d  bltz        $s5, . + 4 + (0xC2D << 2)
label_250184:
    if (ctx->pc == 0x250184u) {
        ctx->pc = 0x250184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250180u;
        // 0x250184: 0xc2d06a2  jal         func_B41A88 (Delay Slot)
        // JAL 0xB41A88 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250188u;
        goto label_250188;
    }
    ctx->pc = 0x250180u;
    {
        const bool branch_taken_0x250180 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x250184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250180u;
        // 0x250184: 0xc2d06a2  jal         func_B41A88 (Delay Slot)
        // JAL 0xB41A88 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x250180) {
            ctx->pc = 0x253238u;
            { ctx->pc = 0x253238; return; }
        }
    }
    ctx->pc = 0x250188u;
label_250188:
    // 0x250188: 0xc2d06a4  jal         func_B41A90
label_25018c:
    if (ctx->pc == 0x25018Cu) {
        ctx->pc = 0x25018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250188u;
        // 0x25018c: 0x6a60c2d  .word       0x06A60C2D                   # INVALID     $s5, $a2, 0xC2D # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//         throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x25018C raw=0x06A60C2D");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x250190u;
        goto label_250190;
    }
    ctx->pc = 0x250188u;
    SET_GPR_U32(ctx, 31, 0x250190u);
    ctx->pc = 0x25018Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250188u;
    // 0x25018c: 0x6a60c2d  .word       0x06A60C2D                   # INVALID     $s5, $a2, 0xC2D # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x25018C raw=0x06A60C2D");
 /* MITIGATED */
    ctx->in_delay_slot = false;
    ctx->pc = 0xB41A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB41A90u, 0x250188u, 0x250190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250190u;
label_250190:
    // 0x250190: 0xc2d0c2d  jal         func_B430B4
label_250194:
    if (ctx->pc == 0x250194u) {
        ctx->pc = 0x250194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250190u;
        // 0x250194: 0xc2d06a8  jal         func_B41AA0 (Delay Slot)
        // JAL 0xB41AA0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250198u;
        goto label_250198;
    }
    ctx->pc = 0x250190u;
    SET_GPR_U32(ctx, 31, 0x250198u);
    ctx->pc = 0x250194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250190u;
    // 0x250194: 0xc2d06a8  jal         func_B41AA0 (Delay Slot)
    // JAL 0xB41AA0 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB430B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB430B4u, 0x250190u, 0x250198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250198u;
label_250198:
    // 0x250198: 0xc2d  .word       0x00000C2D                   # daddu       $at, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250198u;
    SET_GPR_U64(ctx, 1, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25019c:
    // 0x25019c: 0x0  nop
    ctx->pc = 0x25019cu;
    // NOP
label_2501a0:
    // 0x2501a0: 0x9f509f3  j           func_7D427CC
label_2501a4:
    if (ctx->pc == 0x2501A4u) {
        ctx->pc = 0x2501A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501A0u;
        // 0x2501a4: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2501A8u;
        goto label_2501a8;
    }
    ctx->pc = 0x2501A0u;
    ctx->pc = 0x2501A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2501A0u;
    // 0x2501a4: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x7D427CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7D427CCu, 0x2501A0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2501A8u;
label_2501a8:
    // 0x2501a8: 0x9f909f7  j           func_7E427DC
label_2501ac:
    if (ctx->pc == 0x2501ACu) {
        ctx->pc = 0x2501ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501A8u;
        // 0x2501ac: 0xc2d09fb  jal         func_B427EC (Delay Slot)
        // JAL 0xB427EC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2501B0u;
        goto label_2501b0;
    }
    ctx->pc = 0x2501A8u;
    ctx->pc = 0x2501ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2501A8u;
    // 0x2501ac: 0xc2d09fb  jal         func_B427EC (Delay Slot)
    // JAL 0xB427EC - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x7E427DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7E427DCu, 0x2501A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2501B0u;
label_2501b0:
    // 0x2501b0: 0xc2d09fd  jal         func_B427F4
label_2501b4:
    if (ctx->pc == 0x2501B4u) {
        ctx->pc = 0x2501B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501B0u;
        // 0x2501b4: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2501B8u;
        goto label_2501b8;
    }
    ctx->pc = 0x2501B0u;
    SET_GPR_U32(ctx, 31, 0x2501B8u);
    ctx->pc = 0x2501B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2501B0u;
    // 0x2501b4: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB427F4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB427F4u, 0x2501B0u, 0x2501B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2501B8u;
label_2501b8:
    // 0x2501b8: 0xc2d09ff  jal         func_B427FC
label_2501bc:
    if (ctx->pc == 0x2501BCu) {
        ctx->pc = 0x2501BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501B8u;
        // 0x2501bc: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2501C0u;
        goto label_2501c0;
    }
    ctx->pc = 0x2501B8u;
    SET_GPR_U32(ctx, 31, 0x2501C0u);
    ctx->pc = 0x2501BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2501B8u;
    // 0x2501bc: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB427FCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB427FCu, 0x2501B8u, 0x2501C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2501C0u;
label_2501c0:
    // 0x2501c0: 0xc2d0a01  jal         func_B42804
label_2501c4:
    if (ctx->pc == 0x2501C4u) {
        ctx->pc = 0x2501C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501C0u;
        // 0x2501c4: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2501C8u;
        goto label_2501c8;
    }
    ctx->pc = 0x2501C0u;
    SET_GPR_U32(ctx, 31, 0x2501C8u);
    ctx->pc = 0x2501C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2501C0u;
    // 0x2501c4: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB42804u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB42804u, 0x2501C0u, 0x2501C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2501C8u;
label_2501c8:
    // 0x2501c8: 0xa050a03  j           func_814280C
label_2501cc:
    if (ctx->pc == 0x2501CCu) {
        ctx->pc = 0x2501CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501C8u;
        // 0x2501cc: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2501D0u;
        goto label_2501d0;
    }
    ctx->pc = 0x2501C8u;
    ctx->pc = 0x2501CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2501C8u;
    // 0x2501cc: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x814280Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x814280Cu, 0x2501C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2501D0u;
label_2501d0:
    // 0x2501d0: 0xa090a07  j           func_824281C
label_2501d4:
    if (ctx->pc == 0x2501D4u) {
        ctx->pc = 0x2501D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501D0u;
        // 0x2501d4: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2501D8u;
        goto label_2501d8;
    }
    ctx->pc = 0x2501D0u;
    ctx->pc = 0x2501D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2501D0u;
    // 0x2501d4: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x824281Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x824281Cu, 0x2501D0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2501D8u;
label_2501d8:
    // 0x2501d8: 0xa0d0a0b  j           func_834282C
label_2501dc:
    if (ctx->pc == 0x2501DCu) {
        ctx->pc = 0x2501DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501D8u;
        // 0x2501dc: 0xa110a0f  j           func_844283C (Delay Slot)
        // J 0x844283C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2501E0u;
        goto label_2501e0;
    }
    ctx->pc = 0x2501D8u;
    ctx->pc = 0x2501DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2501D8u;
    // 0x2501dc: 0xa110a0f  j           func_844283C (Delay Slot)
    // J 0x844283C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x834282Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x834282Cu, 0x2501D8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2501E0u;
label_2501e0:
    // 0x2501e0: 0xa150a13  j           func_854284C
label_2501e4:
    if (ctx->pc == 0x2501E4u) {
        ctx->pc = 0x2501E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501E0u;
        // 0x2501e4: 0xa190a17  j           func_864285C (Delay Slot)
        // J 0x864285C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2501E8u;
        goto label_2501e8;
    }
    ctx->pc = 0x2501E0u;
    ctx->pc = 0x2501E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2501E0u;
    // 0x2501e4: 0xa190a17  j           func_864285C (Delay Slot)
    // J 0x864285C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x854284Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x854284Cu, 0x2501E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2501E8u;
label_2501e8:
    // 0x2501e8: 0xc2d0a1b  jal         func_B4286C
label_2501ec:
    if (ctx->pc == 0x2501ECu) {
        ctx->pc = 0x2501ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501E8u;
        // 0x2501ec: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2501F0u;
        goto label_2501f0;
    }
    ctx->pc = 0x2501E8u;
    SET_GPR_U32(ctx, 31, 0x2501F0u);
    ctx->pc = 0x2501ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2501E8u;
    // 0x2501ec: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB4286Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB4286Cu, 0x2501E8u, 0x2501F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2501F0u;
label_2501f0:
    // 0x2501f0: 0xc2d0a1d  jal         func_B42874
label_2501f4:
    if (ctx->pc == 0x2501F4u) {
        ctx->pc = 0x2501F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501F0u;
        // 0x2501f4: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2501F8u;
        goto label_2501f8;
    }
    ctx->pc = 0x2501F0u;
    SET_GPR_U32(ctx, 31, 0x2501F8u);
    ctx->pc = 0x2501F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2501F0u;
    // 0x2501f4: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB42874u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB42874u, 0x2501F0u, 0x2501F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2501F8u;
label_2501f8:
    // 0x2501f8: 0xa210a1f  j           func_884287C
label_2501fc:
    if (ctx->pc == 0x2501FCu) {
        ctx->pc = 0x2501FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501F8u;
        // 0x2501fc: 0xc2d0a23  jal         func_B4288C (Delay Slot)
        // JAL 0xB4288C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250200u;
        goto label_250200;
    }
    ctx->pc = 0x2501F8u;
    ctx->pc = 0x2501FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2501F8u;
    // 0x2501fc: 0xc2d0a23  jal         func_B4288C (Delay Slot)
    // JAL 0xB4288C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x884287Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x884287Cu, 0x2501F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x250200u;
label_250200:
    // 0x250200: 0xc2d0a25  jal         func_B42894
label_250204:
    if (ctx->pc == 0x250204u) {
        ctx->pc = 0x250204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250200u;
        // 0x250204: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250208u;
        goto label_250208;
    }
    ctx->pc = 0x250200u;
    SET_GPR_U32(ctx, 31, 0x250208u);
    ctx->pc = 0x250204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250200u;
    // 0x250204: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB42894u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB42894u, 0x250200u, 0x250208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250208u;
label_250208:
    // 0x250208: 0xc2d0a27  jal         func_B4289C
label_25020c:
    if (ctx->pc == 0x25020Cu) {
        ctx->pc = 0x25020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250208u;
        // 0x25020c: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250210u;
        goto label_250210;
    }
    ctx->pc = 0x250208u;
    SET_GPR_U32(ctx, 31, 0x250210u);
    ctx->pc = 0x25020Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250208u;
    // 0x25020c: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB4289Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB4289Cu, 0x250208u, 0x250210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250210u;
label_250210:
    // 0x250210: 0xa2b0a29  j           func_8AC28A4
label_250214:
    if (ctx->pc == 0x250214u) {
        ctx->pc = 0x250214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250210u;
        // 0x250214: 0xc2d0a2d  jal         func_B428B4 (Delay Slot)
        // JAL 0xB428B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250218u;
        goto label_250218;
    }
    ctx->pc = 0x250210u;
    ctx->pc = 0x250214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250210u;
    // 0x250214: 0xc2d0a2d  jal         func_B428B4 (Delay Slot)
    // JAL 0xB428B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x8AC28A4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8AC28A4u, 0x250210u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x250218u;
label_250218:
    // 0x250218: 0xa310a2f  j           func_8C428BC
label_25021c:
    if (ctx->pc == 0x25021Cu) {
        ctx->pc = 0x25021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250218u;
        // 0x25021c: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250220u;
        goto label_250220;
    }
    ctx->pc = 0x250218u;
    ctx->pc = 0x25021Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250218u;
    // 0x25021c: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x8C428BCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8C428BCu, 0x250218u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x250220u;
label_250220:
    // 0x250220: 0xc2d0a33  jal         func_B428CC
label_250224:
    if (ctx->pc == 0x250224u) {
        ctx->pc = 0x250224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250220u;
        // 0x250224: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250228u;
        goto label_250228;
    }
    ctx->pc = 0x250220u;
    SET_GPR_U32(ctx, 31, 0x250228u);
    ctx->pc = 0x250224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250220u;
    // 0x250224: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB428CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB428CCu, 0x250220u, 0x250228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250228u;
label_250228:
    // 0x250228: 0xc2d0a35  jal         func_B428D4
label_25022c:
    if (ctx->pc == 0x25022Cu) {
        ctx->pc = 0x25022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250228u;
        // 0x25022c: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250230u;
        goto label_250230;
    }
    ctx->pc = 0x250228u;
    SET_GPR_U32(ctx, 31, 0x250230u);
    ctx->pc = 0x25022Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250228u;
    // 0x25022c: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB428D4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB428D4u, 0x250228u, 0x250230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250230u;
label_250230:
    // 0x250230: 0xa390a37  j           func_8E428DC
label_250234:
    if (ctx->pc == 0x250234u) {
        ctx->pc = 0x250234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250230u;
        // 0x250234: 0xc2d0a3b  jal         func_B428EC (Delay Slot)
        // JAL 0xB428EC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250238u;
        goto label_250238;
    }
    ctx->pc = 0x250230u;
    ctx->pc = 0x250234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250230u;
    // 0x250234: 0xc2d0a3b  jal         func_B428EC (Delay Slot)
    // JAL 0xB428EC - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x8E428DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8E428DCu, 0x250230u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x250238u;
label_250238:
    // 0x250238: 0xa3f0a3d  j           func_8FC28F4
label_25023c:
    if (ctx->pc == 0x25023Cu) {
        ctx->pc = 0x25023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250238u;
        // 0x25023c: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250240u;
        { ctx->pc = 0x250240; return; }
    }
    ctx->pc = 0x250238u;
    ctx->pc = 0x25023Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250238u;
    // 0x25023c: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x8FC28F4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8FC28F4u, 0x250238u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x250240u;
    ctx->pc = 0x250240u;
    return;
}
