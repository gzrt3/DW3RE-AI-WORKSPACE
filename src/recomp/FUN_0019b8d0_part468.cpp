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

// Function: FUN_0019b8d0
// Address: 0x19b8d0 - 0x29b8d8
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b8d0_part468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x27f940u: goto label_27f940;
        case 0x27f944u: goto label_27f944;
        case 0x27f948u: goto label_27f948;
        case 0x27f94cu: goto label_27f94c;
        case 0x27f950u: goto label_27f950;
        case 0x27f954u: goto label_27f954;
        case 0x27f958u: goto label_27f958;
        case 0x27f95cu: goto label_27f95c;
        case 0x27f960u: goto label_27f960;
        case 0x27f964u: goto label_27f964;
        case 0x27f968u: goto label_27f968;
        case 0x27f96cu: goto label_27f96c;
        case 0x27f970u: goto label_27f970;
        case 0x27f974u: goto label_27f974;
        case 0x27f978u: goto label_27f978;
        case 0x27f97cu: goto label_27f97c;
        case 0x27f980u: goto label_27f980;
        case 0x27f984u: goto label_27f984;
        case 0x27f988u: goto label_27f988;
        case 0x27f98cu: goto label_27f98c;
        case 0x27f990u: goto label_27f990;
        case 0x27f994u: goto label_27f994;
        case 0x27f998u: goto label_27f998;
        case 0x27f99cu: goto label_27f99c;
        case 0x27f9a0u: goto label_27f9a0;
        case 0x27f9a4u: goto label_27f9a4;
        case 0x27f9a8u: goto label_27f9a8;
        case 0x27f9acu: goto label_27f9ac;
        case 0x27f9b0u: goto label_27f9b0;
        case 0x27f9b4u: goto label_27f9b4;
        case 0x27f9b8u: goto label_27f9b8;
        case 0x27f9bcu: goto label_27f9bc;
        case 0x27f9c0u: goto label_27f9c0;
        case 0x27f9c4u: goto label_27f9c4;
        case 0x27f9c8u: goto label_27f9c8;
        case 0x27f9ccu: goto label_27f9cc;
        case 0x27f9d0u: goto label_27f9d0;
        case 0x27f9d4u: goto label_27f9d4;
        case 0x27f9d8u: goto label_27f9d8;
        case 0x27f9dcu: goto label_27f9dc;
        case 0x27f9e0u: goto label_27f9e0;
        case 0x27f9e4u: goto label_27f9e4;
        case 0x27f9e8u: goto label_27f9e8;
        case 0x27f9ecu: goto label_27f9ec;
        case 0x27f9f0u: goto label_27f9f0;
        case 0x27f9f4u: goto label_27f9f4;
        case 0x27f9f8u: goto label_27f9f8;
        case 0x27f9fcu: goto label_27f9fc;
        case 0x27fa00u: goto label_27fa00;
        case 0x27fa04u: goto label_27fa04;
        case 0x27fa08u: goto label_27fa08;
        case 0x27fa0cu: goto label_27fa0c;
        case 0x27fa10u: goto label_27fa10;
        case 0x27fa14u: goto label_27fa14;
        case 0x27fa18u: goto label_27fa18;
        case 0x27fa1cu: goto label_27fa1c;
        case 0x27fa20u: goto label_27fa20;
        case 0x27fa24u: goto label_27fa24;
        case 0x27fa28u: goto label_27fa28;
        case 0x27fa2cu: goto label_27fa2c;
        case 0x27fa30u: goto label_27fa30;
        case 0x27fa34u: goto label_27fa34;
        case 0x27fa38u: goto label_27fa38;
        case 0x27fa3cu: goto label_27fa3c;
        case 0x27fa40u: goto label_27fa40;
        case 0x27fa44u: goto label_27fa44;
        case 0x27fa48u: goto label_27fa48;
        case 0x27fa4cu: goto label_27fa4c;
        case 0x27fa50u: goto label_27fa50;
        case 0x27fa54u: goto label_27fa54;
        case 0x27fa58u: goto label_27fa58;
        case 0x27fa5cu: goto label_27fa5c;
        case 0x27fa60u: goto label_27fa60;
        case 0x27fa64u: goto label_27fa64;
        case 0x27fa68u: goto label_27fa68;
        case 0x27fa6cu: goto label_27fa6c;
        case 0x27fa70u: goto label_27fa70;
        case 0x27fa74u: goto label_27fa74;
        case 0x27fa78u: goto label_27fa78;
        case 0x27fa7cu: goto label_27fa7c;
        case 0x27fa80u: goto label_27fa80;
        case 0x27fa84u: goto label_27fa84;
        case 0x27fa88u: goto label_27fa88;
        case 0x27fa8cu: goto label_27fa8c;
        case 0x27fa90u: goto label_27fa90;
        case 0x27fa94u: goto label_27fa94;
        case 0x27fa98u: goto label_27fa98;
        case 0x27fa9cu: goto label_27fa9c;
        case 0x27faa0u: goto label_27faa0;
        case 0x27faa4u: goto label_27faa4;
        case 0x27faa8u: goto label_27faa8;
        case 0x27faacu: goto label_27faac;
        case 0x27fab0u: goto label_27fab0;
        case 0x27fab4u: goto label_27fab4;
        case 0x27fab8u: goto label_27fab8;
        case 0x27fabcu: goto label_27fabc;
        case 0x27fac0u: goto label_27fac0;
        case 0x27fac4u: goto label_27fac4;
        case 0x27fac8u: goto label_27fac8;
        case 0x27faccu: goto label_27facc;
        case 0x27fad0u: goto label_27fad0;
        case 0x27fad4u: goto label_27fad4;
        case 0x27fad8u: goto label_27fad8;
        case 0x27fadcu: goto label_27fadc;
        case 0x27fae0u: goto label_27fae0;
        case 0x27fae4u: goto label_27fae4;
        case 0x27fae8u: goto label_27fae8;
        case 0x27faecu: goto label_27faec;
        case 0x27faf0u: goto label_27faf0;
        case 0x27faf4u: goto label_27faf4;
        case 0x27faf8u: goto label_27faf8;
        case 0x27fafcu: goto label_27fafc;
        case 0x27fb00u: goto label_27fb00;
        case 0x27fb04u: goto label_27fb04;
        case 0x27fb08u: goto label_27fb08;
        case 0x27fb0cu: goto label_27fb0c;
        case 0x27fb10u: goto label_27fb10;
        case 0x27fb14u: goto label_27fb14;
        case 0x27fb18u: goto label_27fb18;
        case 0x27fb1cu: goto label_27fb1c;
        case 0x27fb20u: goto label_27fb20;
        case 0x27fb24u: goto label_27fb24;
        case 0x27fb28u: goto label_27fb28;
        case 0x27fb2cu: goto label_27fb2c;
        case 0x27fb30u: goto label_27fb30;
        case 0x27fb34u: goto label_27fb34;
        case 0x27fb38u: goto label_27fb38;
        case 0x27fb3cu: goto label_27fb3c;
        case 0x27fb40u: goto label_27fb40;
        case 0x27fb44u: goto label_27fb44;
        case 0x27fb48u: goto label_27fb48;
        case 0x27fb4cu: goto label_27fb4c;
        case 0x27fb50u: goto label_27fb50;
        case 0x27fb54u: goto label_27fb54;
        case 0x27fb58u: goto label_27fb58;
        case 0x27fb5cu: goto label_27fb5c;
        case 0x27fb60u: goto label_27fb60;
        case 0x27fb64u: goto label_27fb64;
        case 0x27fb68u: goto label_27fb68;
        case 0x27fb6cu: goto label_27fb6c;
        case 0x27fb70u: goto label_27fb70;
        case 0x27fb74u: goto label_27fb74;
        case 0x27fb78u: goto label_27fb78;
        case 0x27fb7cu: goto label_27fb7c;
        case 0x27fb80u: goto label_27fb80;
        case 0x27fb84u: goto label_27fb84;
        case 0x27fb88u: goto label_27fb88;
        case 0x27fb8cu: goto label_27fb8c;
        case 0x27fb90u: goto label_27fb90;
        case 0x27fb94u: goto label_27fb94;
        case 0x27fb98u: goto label_27fb98;
        case 0x27fb9cu: goto label_27fb9c;
        case 0x27fba0u: goto label_27fba0;
        case 0x27fba4u: goto label_27fba4;
        case 0x27fba8u: goto label_27fba8;
        case 0x27fbacu: goto label_27fbac;
        case 0x27fbb0u: goto label_27fbb0;
        case 0x27fbb4u: goto label_27fbb4;
        case 0x27fbb8u: goto label_27fbb8;
        case 0x27fbbcu: goto label_27fbbc;
        case 0x27fbc0u: goto label_27fbc0;
        case 0x27fbc4u: goto label_27fbc4;
        case 0x27fbc8u: goto label_27fbc8;
        case 0x27fbccu: goto label_27fbcc;
        case 0x27fbd0u: goto label_27fbd0;
        case 0x27fbd4u: goto label_27fbd4;
        case 0x27fbd8u: goto label_27fbd8;
        case 0x27fbdcu: goto label_27fbdc;
        case 0x27fbe0u: goto label_27fbe0;
        case 0x27fbe4u: goto label_27fbe4;
        case 0x27fbe8u: goto label_27fbe8;
        case 0x27fbecu: goto label_27fbec;
        case 0x27fbf0u: goto label_27fbf0;
        case 0x27fbf4u: goto label_27fbf4;
        case 0x27fbf8u: goto label_27fbf8;
        case 0x27fbfcu: goto label_27fbfc;
        case 0x27fc00u: goto label_27fc00;
        case 0x27fc04u: goto label_27fc04;
        case 0x27fc08u: goto label_27fc08;
        case 0x27fc0cu: goto label_27fc0c;
        case 0x27fc10u: goto label_27fc10;
        case 0x27fc14u: goto label_27fc14;
        case 0x27fc18u: goto label_27fc18;
        case 0x27fc1cu: goto label_27fc1c;
        case 0x27fc20u: goto label_27fc20;
        case 0x27fc24u: goto label_27fc24;
        case 0x27fc28u: goto label_27fc28;
        case 0x27fc2cu: goto label_27fc2c;
        case 0x27fc30u: goto label_27fc30;
        case 0x27fc34u: goto label_27fc34;
        case 0x27fc38u: goto label_27fc38;
        case 0x27fc3cu: goto label_27fc3c;
        case 0x27fc40u: goto label_27fc40;
        case 0x27fc44u: goto label_27fc44;
        case 0x27fc48u: goto label_27fc48;
        case 0x27fc4cu: goto label_27fc4c;
        case 0x27fc50u: goto label_27fc50;
        case 0x27fc54u: goto label_27fc54;
        case 0x27fc58u: goto label_27fc58;
        case 0x27fc5cu: goto label_27fc5c;
        case 0x27fc60u: goto label_27fc60;
        case 0x27fc64u: goto label_27fc64;
        case 0x27fc68u: goto label_27fc68;
        case 0x27fc6cu: goto label_27fc6c;
        case 0x27fc70u: goto label_27fc70;
        case 0x27fc74u: goto label_27fc74;
        case 0x27fc78u: goto label_27fc78;
        case 0x27fc7cu: goto label_27fc7c;
        case 0x27fc80u: goto label_27fc80;
        case 0x27fc84u: goto label_27fc84;
        case 0x27fc88u: goto label_27fc88;
        case 0x27fc8cu: goto label_27fc8c;
        case 0x27fc90u: goto label_27fc90;
        case 0x27fc94u: goto label_27fc94;
        case 0x27fc98u: goto label_27fc98;
        case 0x27fc9cu: goto label_27fc9c;
        case 0x27fca0u: goto label_27fca0;
        case 0x27fca4u: goto label_27fca4;
        case 0x27fca8u: goto label_27fca8;
        case 0x27fcacu: goto label_27fcac;
        case 0x27fcb0u: goto label_27fcb0;
        case 0x27fcb4u: goto label_27fcb4;
        case 0x27fcb8u: goto label_27fcb8;
        case 0x27fcbcu: goto label_27fcbc;
        case 0x27fcc0u: goto label_27fcc0;
        case 0x27fcc4u: goto label_27fcc4;
        case 0x27fcc8u: goto label_27fcc8;
        case 0x27fcccu: goto label_27fccc;
        case 0x27fcd0u: goto label_27fcd0;
        case 0x27fcd4u: goto label_27fcd4;
        case 0x27fcd8u: goto label_27fcd8;
        case 0x27fcdcu: goto label_27fcdc;
        case 0x27fce0u: goto label_27fce0;
        case 0x27fce4u: goto label_27fce4;
        case 0x27fce8u: goto label_27fce8;
        case 0x27fcecu: goto label_27fcec;
        case 0x27fcf0u: goto label_27fcf0;
        case 0x27fcf4u: goto label_27fcf4;
        case 0x27fcf8u: goto label_27fcf8;
        case 0x27fcfcu: goto label_27fcfc;
        case 0x27fd00u: goto label_27fd00;
        case 0x27fd04u: goto label_27fd04;
        case 0x27fd08u: goto label_27fd08;
        case 0x27fd0cu: goto label_27fd0c;
        case 0x27fd10u: goto label_27fd10;
        case 0x27fd14u: goto label_27fd14;
        case 0x27fd18u: goto label_27fd18;
        case 0x27fd1cu: goto label_27fd1c;
        case 0x27fd20u: goto label_27fd20;
        case 0x27fd24u: goto label_27fd24;
        case 0x27fd28u: goto label_27fd28;
        case 0x27fd2cu: goto label_27fd2c;
        case 0x27fd30u: goto label_27fd30;
        case 0x27fd34u: goto label_27fd34;
        case 0x27fd38u: goto label_27fd38;
        case 0x27fd3cu: goto label_27fd3c;
        case 0x27fd40u: goto label_27fd40;
        case 0x27fd44u: goto label_27fd44;
        case 0x27fd48u: goto label_27fd48;
        case 0x27fd4cu: goto label_27fd4c;
        case 0x27fd50u: goto label_27fd50;
        case 0x27fd54u: goto label_27fd54;
        case 0x27fd58u: goto label_27fd58;
        case 0x27fd5cu: goto label_27fd5c;
        case 0x27fd60u: goto label_27fd60;
        case 0x27fd64u: goto label_27fd64;
        case 0x27fd68u: goto label_27fd68;
        case 0x27fd6cu: goto label_27fd6c;
        case 0x27fd70u: goto label_27fd70;
        case 0x27fd74u: goto label_27fd74;
        case 0x27fd78u: goto label_27fd78;
        case 0x27fd7cu: goto label_27fd7c;
        case 0x27fd80u: goto label_27fd80;
        case 0x27fd84u: goto label_27fd84;
        case 0x27fd88u: goto label_27fd88;
        case 0x27fd8cu: goto label_27fd8c;
        case 0x27fd90u: goto label_27fd90;
        case 0x27fd94u: goto label_27fd94;
        case 0x27fd98u: goto label_27fd98;
        case 0x27fd9cu: goto label_27fd9c;
        case 0x27fda0u: goto label_27fda0;
        case 0x27fda4u: goto label_27fda4;
        case 0x27fda8u: goto label_27fda8;
        case 0x27fdacu: goto label_27fdac;
        case 0x27fdb0u: goto label_27fdb0;
        case 0x27fdb4u: goto label_27fdb4;
        case 0x27fdb8u: goto label_27fdb8;
        case 0x27fdbcu: goto label_27fdbc;
        case 0x27fdc0u: goto label_27fdc0;
        case 0x27fdc4u: goto label_27fdc4;
        case 0x27fdc8u: goto label_27fdc8;
        case 0x27fdccu: goto label_27fdcc;
        case 0x27fdd0u: goto label_27fdd0;
        case 0x27fdd4u: goto label_27fdd4;
        case 0x27fdd8u: goto label_27fdd8;
        case 0x27fddcu: goto label_27fddc;
        case 0x27fde0u: goto label_27fde0;
        case 0x27fde4u: goto label_27fde4;
        case 0x27fde8u: goto label_27fde8;
        case 0x27fdecu: goto label_27fdec;
        case 0x27fdf0u: goto label_27fdf0;
        case 0x27fdf4u: goto label_27fdf4;
        case 0x27fdf8u: goto label_27fdf8;
        case 0x27fdfcu: goto label_27fdfc;
        case 0x27fe00u: goto label_27fe00;
        case 0x27fe04u: goto label_27fe04;
        case 0x27fe08u: goto label_27fe08;
        case 0x27fe0cu: goto label_27fe0c;
        case 0x27fe10u: goto label_27fe10;
        case 0x27fe14u: goto label_27fe14;
        case 0x27fe18u: goto label_27fe18;
        case 0x27fe1cu: goto label_27fe1c;
        case 0x27fe20u: goto label_27fe20;
        case 0x27fe24u: goto label_27fe24;
        case 0x27fe28u: goto label_27fe28;
        case 0x27fe2cu: goto label_27fe2c;
        case 0x27fe30u: goto label_27fe30;
        case 0x27fe34u: goto label_27fe34;
        case 0x27fe38u: goto label_27fe38;
        case 0x27fe3cu: goto label_27fe3c;
        case 0x27fe40u: goto label_27fe40;
        case 0x27fe44u: goto label_27fe44;
        case 0x27fe48u: goto label_27fe48;
        case 0x27fe4cu: goto label_27fe4c;
        case 0x27fe50u: goto label_27fe50;
        case 0x27fe54u: goto label_27fe54;
        case 0x27fe58u: goto label_27fe58;
        case 0x27fe5cu: goto label_27fe5c;
        case 0x27fe60u: goto label_27fe60;
        case 0x27fe64u: goto label_27fe64;
        case 0x27fe68u: goto label_27fe68;
        case 0x27fe6cu: goto label_27fe6c;
        case 0x27fe70u: goto label_27fe70;
        case 0x27fe74u: goto label_27fe74;
        case 0x27fe78u: goto label_27fe78;
        case 0x27fe7cu: goto label_27fe7c;
        case 0x27fe80u: goto label_27fe80;
        case 0x27fe84u: goto label_27fe84;
        case 0x27fe88u: goto label_27fe88;
        case 0x27fe8cu: goto label_27fe8c;
        case 0x27fe90u: goto label_27fe90;
        case 0x27fe94u: goto label_27fe94;
        case 0x27fe98u: goto label_27fe98;
        case 0x27fe9cu: goto label_27fe9c;
        case 0x27fea0u: goto label_27fea0;
        case 0x27fea4u: goto label_27fea4;
        case 0x27fea8u: goto label_27fea8;
        case 0x27feacu: goto label_27feac;
        case 0x27feb0u: goto label_27feb0;
        case 0x27feb4u: goto label_27feb4;
        case 0x27feb8u: goto label_27feb8;
        case 0x27febcu: goto label_27febc;
        case 0x27fec0u: goto label_27fec0;
        case 0x27fec4u: goto label_27fec4;
        case 0x27fec8u: goto label_27fec8;
        case 0x27feccu: goto label_27fecc;
        case 0x27fed0u: goto label_27fed0;
        case 0x27fed4u: goto label_27fed4;
        case 0x27fed8u: goto label_27fed8;
        case 0x27fedcu: goto label_27fedc;
        case 0x27fee0u: goto label_27fee0;
        case 0x27fee4u: goto label_27fee4;
        case 0x27fee8u: goto label_27fee8;
        case 0x27feecu: goto label_27feec;
        case 0x27fef0u: goto label_27fef0;
        case 0x27fef4u: goto label_27fef4;
        case 0x27fef8u: goto label_27fef8;
        case 0x27fefcu: goto label_27fefc;
        case 0x27ff00u: goto label_27ff00;
        case 0x27ff04u: goto label_27ff04;
        case 0x27ff08u: goto label_27ff08;
        case 0x27ff0cu: goto label_27ff0c;
        case 0x27ff10u: goto label_27ff10;
        case 0x27ff14u: goto label_27ff14;
        case 0x27ff18u: goto label_27ff18;
        case 0x27ff1cu: goto label_27ff1c;
        case 0x27ff20u: goto label_27ff20;
        case 0x27ff24u: goto label_27ff24;
        case 0x27ff28u: goto label_27ff28;
        case 0x27ff2cu: goto label_27ff2c;
        case 0x27ff30u: goto label_27ff30;
        case 0x27ff34u: goto label_27ff34;
        case 0x27ff38u: goto label_27ff38;
        case 0x27ff3cu: goto label_27ff3c;
        case 0x27ff40u: goto label_27ff40;
        case 0x27ff44u: goto label_27ff44;
        case 0x27ff48u: goto label_27ff48;
        case 0x27ff4cu: goto label_27ff4c;
        case 0x27ff50u: goto label_27ff50;
        case 0x27ff54u: goto label_27ff54;
        case 0x27ff58u: goto label_27ff58;
        case 0x27ff5cu: goto label_27ff5c;
        case 0x27ff60u: goto label_27ff60;
        case 0x27ff64u: goto label_27ff64;
        case 0x27ff68u: goto label_27ff68;
        case 0x27ff6cu: goto label_27ff6c;
        case 0x27ff70u: goto label_27ff70;
        case 0x27ff74u: goto label_27ff74;
        case 0x27ff78u: goto label_27ff78;
        case 0x27ff7cu: goto label_27ff7c;
        case 0x27ff80u: goto label_27ff80;
        case 0x27ff84u: goto label_27ff84;
        case 0x27ff88u: goto label_27ff88;
        case 0x27ff8cu: goto label_27ff8c;
        case 0x27ff90u: goto label_27ff90;
        case 0x27ff94u: goto label_27ff94;
        case 0x27ff98u: goto label_27ff98;
        case 0x27ff9cu: goto label_27ff9c;
        case 0x27ffa0u: goto label_27ffa0;
        case 0x27ffa4u: goto label_27ffa4;
        case 0x27ffa8u: goto label_27ffa8;
        case 0x27ffacu: goto label_27ffac;
        case 0x27ffb0u: goto label_27ffb0;
        case 0x27ffb4u: goto label_27ffb4;
        case 0x27ffb8u: goto label_27ffb8;
        case 0x27ffbcu: goto label_27ffbc;
        case 0x27ffc0u: goto label_27ffc0;
        case 0x27ffc4u: goto label_27ffc4;
        case 0x27ffc8u: goto label_27ffc8;
        case 0x27ffccu: goto label_27ffcc;
        case 0x27ffd0u: goto label_27ffd0;
        case 0x27ffd4u: goto label_27ffd4;
        case 0x27ffd8u: goto label_27ffd8;
        case 0x27ffdcu: goto label_27ffdc;
        case 0x27ffe0u: goto label_27ffe0;
        case 0x27ffe4u: goto label_27ffe4;
        case 0x27ffe8u: goto label_27ffe8;
        case 0x27ffecu: goto label_27ffec;
        case 0x27fff0u: goto label_27fff0;
        case 0x27fff4u: goto label_27fff4;
        case 0x27fff8u: goto label_27fff8;
        case 0x27fffcu: goto label_27fffc;
        case 0x280000u: goto label_280000;
        case 0x280004u: goto label_280004;
        case 0x280008u: goto label_280008;
        case 0x28000cu: goto label_28000c;
        case 0x280010u: goto label_280010;
        case 0x280014u: goto label_280014;
        case 0x280018u: goto label_280018;
        case 0x28001cu: goto label_28001c;
        case 0x280020u: goto label_280020;
        case 0x280024u: goto label_280024;
        case 0x280028u: goto label_280028;
        case 0x28002cu: goto label_28002c;
        case 0x280030u: goto label_280030;
        case 0x280034u: goto label_280034;
        case 0x280038u: goto label_280038;
        case 0x28003cu: goto label_28003c;
        case 0x280040u: goto label_280040;
        case 0x280044u: goto label_280044;
        case 0x280048u: goto label_280048;
        case 0x28004cu: goto label_28004c;
        case 0x280050u: goto label_280050;
        case 0x280054u: goto label_280054;
        case 0x280058u: goto label_280058;
        case 0x28005cu: goto label_28005c;
        case 0x280060u: goto label_280060;
        case 0x280064u: goto label_280064;
        case 0x280068u: goto label_280068;
        case 0x28006cu: goto label_28006c;
        case 0x280070u: goto label_280070;
        case 0x280074u: goto label_280074;
        case 0x280078u: goto label_280078;
        case 0x28007cu: goto label_28007c;
        case 0x280080u: goto label_280080;
        case 0x280084u: goto label_280084;
        case 0x280088u: goto label_280088;
        case 0x28008cu: goto label_28008c;
        case 0x280090u: goto label_280090;
        case 0x280094u: goto label_280094;
        case 0x280098u: goto label_280098;
        case 0x28009cu: goto label_28009c;
        case 0x2800a0u: goto label_2800a0;
        case 0x2800a4u: goto label_2800a4;
        case 0x2800a8u: goto label_2800a8;
        case 0x2800acu: goto label_2800ac;
        case 0x2800b0u: goto label_2800b0;
        case 0x2800b4u: goto label_2800b4;
        case 0x2800b8u: goto label_2800b8;
        case 0x2800bcu: goto label_2800bc;
        case 0x2800c0u: goto label_2800c0;
        case 0x2800c4u: goto label_2800c4;
        case 0x2800c8u: goto label_2800c8;
        case 0x2800ccu: goto label_2800cc;
        case 0x2800d0u: goto label_2800d0;
        case 0x2800d4u: goto label_2800d4;
        case 0x2800d8u: goto label_2800d8;
        case 0x2800dcu: goto label_2800dc;
        case 0x2800e0u: goto label_2800e0;
        case 0x2800e4u: goto label_2800e4;
        case 0x2800e8u: goto label_2800e8;
        case 0x2800ecu: goto label_2800ec;
        case 0x2800f0u: goto label_2800f0;
        case 0x2800f4u: goto label_2800f4;
        case 0x2800f8u: goto label_2800f8;
        case 0x2800fcu: goto label_2800fc;
        case 0x280100u: goto label_280100;
        case 0x280104u: goto label_280104;
        case 0x280108u: goto label_280108;
        case 0x28010cu: goto label_28010c;
        default: return;
    }

label_27f940:
    // 0x27f940: 0x15a09  .word       0x00015A09                   # jalr        $t3, $zero # 00010200 <InstrIdType: CPU_SPECIAL>
label_27f944:
    if (ctx->pc == 0x27F944u) {
        ctx->pc = 0x27F944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F940u;
        // 0x27f944: 0x37d50  .word       0x00037D50                   # mfhi        $t7 # 00030540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 15, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F948u;
        goto label_27f948;
    }
    ctx->pc = 0x27F940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 11, 0x27F948u);
        ctx->pc = 0x27F944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F940u;
        // 0x27f944: 0x37d50  .word       0x00037D50                   # mfhi        $t7 # 00030540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 15, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F940u, 0x27F948u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27F948u;
label_27f948:
    // 0x27f948: 0x0  nop
    ctx->pc = 0x27f948u;
    // NOP
label_27f94c:
    // 0x27f94c: 0x0  nop
    ctx->pc = 0x27f94cu;
    // NOP
label_27f950:
    // 0x27f950: 0x15a79  .word       0x00015A79                   # INVALID     $zero, $at, 0x5A79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f950u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27F950 raw=0x00015A79"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27f954:
    // 0x27f954: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x27f954u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_27f958:
    // 0x27f958: 0x0  nop
    ctx->pc = 0x27f958u;
    // NOP
label_27f95c:
    // 0x27f95c: 0x0  nop
    ctx->pc = 0x27f95cu;
    // NOP
label_27f960:
    // 0x27f960: 0x15adf  .word       0x00015ADF                   # ddivu       $t3, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f960u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x27F960 raw=0x00015ADF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27f964:
    // 0x27f964: 0x30430  tge         $zero, $v1, 16
    ctx->pc = 0x27f964u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27f968:
    // 0x27f968: 0x0  nop
    ctx->pc = 0x27f968u;
    // NOP
label_27f96c:
    // 0x27f96c: 0x0  nop
    ctx->pc = 0x27f96cu;
    // NOP
label_27f970:
    // 0x27f970: 0x15b40  sll         $t3, $at, 13
    ctx->pc = 0x27f970u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 1), 13));
label_27f974:
    // 0x27f974: 0x34b80  sll         $t1, $v1, 14
    ctx->pc = 0x27f974u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 14));
label_27f978:
    // 0x27f978: 0x0  nop
    ctx->pc = 0x27f978u;
    // NOP
label_27f97c:
    // 0x27f97c: 0x0  nop
    ctx->pc = 0x27f97cu;
    // NOP
label_27f980:
    // 0x27f980: 0x15baa  .word       0x00015BAA                   # slt         $t3, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f980u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_27f984:
    // 0x27f984: 0x2fe90  .word       0x0002FE90                   # mfhi        $ra # 00020680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f984u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_27f988:
    // 0x27f988: 0x0  nop
    ctx->pc = 0x27f988u;
    // NOP
label_27f98c:
    // 0x27f98c: 0x0  nop
    ctx->pc = 0x27f98cu;
    // NOP
label_27f990:
    // 0x27f990: 0x15c0a  .word       0x00015C0A                   # movz        $t3, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f990u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
label_27f994:
    // 0x27f994: 0x2d880  sll         $k1, $v0, 2
    ctx->pc = 0x27f994u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_27f998:
    // 0x27f998: 0x0  nop
    ctx->pc = 0x27f998u;
    // NOP
label_27f99c:
    // 0x27f99c: 0x0  nop
    ctx->pc = 0x27f99cu;
    // NOP
label_27f9a0:
    // 0x27f9a0: 0x15c66  .word       0x00015C66                   # xor         $t3, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f9a0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27f9a4:
    // 0x27f9a4: 0x321e0  .word       0x000321E0                   # add         $a0, $zero, $v1 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f9a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_27f9a8:
    // 0x27f9a8: 0x0  nop
    ctx->pc = 0x27f9a8u;
    // NOP
label_27f9ac:
    // 0x27f9ac: 0x0  nop
    ctx->pc = 0x27f9acu;
    // NOP
label_27f9b0:
    // 0x27f9b0: 0x15ccb  .word       0x00015CCB                   # movn        $t3, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f9b0u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
label_27f9b4:
    // 0x27f9b4: 0x2d640  sll         $k0, $v0, 25
    ctx->pc = 0x27f9b4u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 25));
label_27f9b8:
    // 0x27f9b8: 0x0  nop
    ctx->pc = 0x27f9b8u;
    // NOP
label_27f9bc:
    // 0x27f9bc: 0x0  nop
    ctx->pc = 0x27f9bcu;
    // NOP
label_27f9c0:
    // 0x27f9c0: 0x15d26  .word       0x00015D26                   # xor         $t3, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f9c0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27f9c4:
    // 0x27f9c4: 0x30530  tge         $zero, $v1, 20
    ctx->pc = 0x27f9c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27f9c8:
    // 0x27f9c8: 0x0  nop
    ctx->pc = 0x27f9c8u;
    // NOP
label_27f9cc:
    // 0x27f9cc: 0x0  nop
    ctx->pc = 0x27f9ccu;
    // NOP
label_27f9d0:
    // 0x27f9d0: 0x15d87  .word       0x00015D87                   # srav        $t3, $at, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f9d0u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27f9d4:
    // 0x27f9d4: 0x31b70  tge         $zero, $v1, 109
    ctx->pc = 0x27f9d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27f9d8:
    // 0x27f9d8: 0x0  nop
    ctx->pc = 0x27f9d8u;
    // NOP
label_27f9dc:
    // 0x27f9dc: 0x0  nop
    ctx->pc = 0x27f9dcu;
    // NOP
label_27f9e0:
    // 0x27f9e0: 0x15deb  .word       0x00015DEB                   # sltu        $t3, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f9e0u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_27f9e4:
    // 0x27f9e4: 0x30100  sll         $zero, $v1, 4
    ctx->pc = 0x27f9e4u;
    
label_27f9e8:
    // 0x27f9e8: 0x0  nop
    ctx->pc = 0x27f9e8u;
    // NOP
label_27f9ec:
    // 0x27f9ec: 0x0  nop
    ctx->pc = 0x27f9ecu;
    // NOP
label_27f9f0:
    // 0x27f9f0: 0x15e4c  .word       0x00015E4C                   # syscall     377 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f9f0u;
    ctx->pc = 0x27F9F4u;
runtime->handleSyscall(rdram, ctx, 0x579u);
label_27f9f4:
    // 0x27f9f4: 0x29610  .word       0x00029610                   # mfhi        $s2 # 00020600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f9f4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_27f9f8:
    // 0x27f9f8: 0x0  nop
    ctx->pc = 0x27f9f8u;
    // NOP
label_27f9fc:
    // 0x27f9fc: 0x0  nop
    ctx->pc = 0x27f9fcu;
    // NOP
label_27fa00:
    // 0x27fa00: 0x15e9f  .word       0x00015E9F                   # ddivu       $t3, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fa00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x27FA00 raw=0x00015E9F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27fa04:
    // 0x27fa04: 0x30350  .word       0x00030350                   # mfhi        $zero # 00030340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fa04u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_27fa08:
    // 0x27fa08: 0x0  nop
    ctx->pc = 0x27fa08u;
    // NOP
label_27fa0c:
    // 0x27fa0c: 0x0  nop
    ctx->pc = 0x27fa0cu;
    // NOP
label_27fa10:
    // 0x27fa10: 0x15f00  sll         $t3, $at, 28
    ctx->pc = 0x27fa10u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 1), 28));
label_27fa14:
    // 0x27fa14: 0x35020  add         $t2, $zero, $v1
    ctx->pc = 0x27fa14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_27fa18:
    // 0x27fa18: 0x0  nop
    ctx->pc = 0x27fa18u;
    // NOP
label_27fa1c:
    // 0x27fa1c: 0x0  nop
    ctx->pc = 0x27fa1cu;
    // NOP
label_27fa20:
    // 0x27fa20: 0x15f6b  .word       0x00015F6B                   # sltu        $t3, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fa20u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_27fa24:
    // 0x27fa24: 0x34110  .word       0x00034110                   # mfhi        $t0 # 00030100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fa24u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_27fa28:
    // 0x27fa28: 0x0  nop
    ctx->pc = 0x27fa28u;
    // NOP
label_27fa2c:
    // 0x27fa2c: 0x0  nop
    ctx->pc = 0x27fa2cu;
    // NOP
label_27fa30:
    // 0x27fa30: 0x15fd4  .word       0x00015FD4                   # dsllv       $t3, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fa30u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_27fa34:
    // 0x27fa34: 0x370d0  .word       0x000370D0                   # mfhi        $t6 # 000300C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fa34u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_27fa38:
    // 0x27fa38: 0x0  nop
    ctx->pc = 0x27fa38u;
    // NOP
label_27fa3c:
    // 0x27fa3c: 0x0  nop
    ctx->pc = 0x27fa3cu;
    // NOP
label_27fa40:
    // 0x27fa40: 0x16043  sra         $t4, $at, 1
    ctx->pc = 0x27fa40u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 1), 1));
label_27fa44:
    // 0x27fa44: 0x2fcc0  sll         $ra, $v0, 19
    ctx->pc = 0x27fa44u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
label_27fa48:
    // 0x27fa48: 0x0  nop
    ctx->pc = 0x27fa48u;
    // NOP
label_27fa4c:
    // 0x27fa4c: 0x0  nop
    ctx->pc = 0x27fa4cu;
    // NOP
label_27fa50:
    // 0x27fa50: 0x160a3  .word       0x000160A3                   # negu        $t4, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fa50u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27fa54:
    // 0x27fa54: 0x34660  .word       0x00034660                   # add         $t0, $zero, $v1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fa54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_27fa58:
    // 0x27fa58: 0x0  nop
    ctx->pc = 0x27fa58u;
    // NOP
label_27fa5c:
    // 0x27fa5c: 0x0  nop
    ctx->pc = 0x27fa5cu;
    // NOP
label_27fa60:
    // 0x27fa60: 0x1610c  .word       0x0001610C                   # syscall     388 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fa60u;
    ctx->pc = 0x27FA64u;
runtime->handleSyscall(rdram, ctx, 0x584u);
label_27fa64:
    // 0x27fa64: 0x31b20  .word       0x00031B20                   # add         $v1, $zero, $v1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fa64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_27fa68:
    // 0x27fa68: 0x0  nop
    ctx->pc = 0x27fa68u;
    // NOP
label_27fa6c:
    // 0x27fa6c: 0x0  nop
    ctx->pc = 0x27fa6cu;
    // NOP
label_27fa70:
    // 0x27fa70: 0x16170  tge         $zero, $at, 389
    ctx->pc = 0x27fa70u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27fa74:
    // 0x27fa74: 0x30820  add         $at, $zero, $v1
    ctx->pc = 0x27fa74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_27fa78:
    // 0x27fa78: 0x0  nop
    ctx->pc = 0x27fa78u;
    // NOP
label_27fa7c:
    // 0x27fa7c: 0x0  nop
    ctx->pc = 0x27fa7cu;
    // NOP
label_27fa80:
    // 0x27fa80: 0x161d2  .word       0x000161D2                   # mflo        $t4 # 000101C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fa80u;
    SET_GPR_U64(ctx, 12, ctx->lo);
label_27fa84:
    // 0x27fa84: 0x2da70  tge         $zero, $v0, 873
    ctx->pc = 0x27fa84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27fa88:
    // 0x27fa88: 0x0  nop
    ctx->pc = 0x27fa88u;
    // NOP
label_27fa8c:
    // 0x27fa8c: 0x0  nop
    ctx->pc = 0x27fa8cu;
    // NOP
label_27fa90:
    // 0x27fa90: 0x1622e  .word       0x0001622E                   # dsub        $t4, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fa90u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_27fa94:
    // 0x27fa94: 0x2fb40  sll         $ra, $v0, 13
    ctx->pc = 0x27fa94u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
label_27fa98:
    // 0x27fa98: 0x0  nop
    ctx->pc = 0x27fa98u;
    // NOP
label_27fa9c:
    // 0x27fa9c: 0x0  nop
    ctx->pc = 0x27fa9cu;
    // NOP
label_27faa0:
    // 0x27faa0: 0x1628e  .word       0x0001628E                   # INVALID     $zero, $at, 0x628E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27faa0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x27FAA0 raw=0x0001628E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27faa4:
    // 0x27faa4: 0x30920  .word       0x00030920                   # add         $at, $zero, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27faa4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_27faa8:
    // 0x27faa8: 0x0  nop
    ctx->pc = 0x27faa8u;
    // NOP
label_27faac:
    // 0x27faac: 0x0  nop
    ctx->pc = 0x27faacu;
    // NOP
label_27fab0:
    // 0x27fab0: 0x162f0  tge         $zero, $at, 395
    ctx->pc = 0x27fab0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27fab4:
    // 0x27fab4: 0x338b0  tge         $zero, $v1, 226
    ctx->pc = 0x27fab4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27fab8:
    // 0x27fab8: 0x0  nop
    ctx->pc = 0x27fab8u;
    // NOP
label_27fabc:
    // 0x27fabc: 0x0  nop
    ctx->pc = 0x27fabcu;
    // NOP
label_27fac0:
    // 0x27fac0: 0x16358  .word       0x00016358                   # mult        $t4, $zero, $at # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27fac0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_27fac4:
    // 0x27fac4: 0x300b0  tge         $zero, $v1, 2
    ctx->pc = 0x27fac4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27fac8:
    // 0x27fac8: 0x0  nop
    ctx->pc = 0x27fac8u;
    // NOP
label_27facc:
    // 0x27facc: 0x0  nop
    ctx->pc = 0x27faccu;
    // NOP
label_27fad0:
    // 0x27fad0: 0x163b9  .word       0x000163B9                   # INVALID     $zero, $at, 0x63B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fad0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27FAD0 raw=0x000163B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27fad4:
    // 0x27fad4: 0x2d2c0  sll         $k0, $v0, 11
    ctx->pc = 0x27fad4u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_27fad8:
    // 0x27fad8: 0x0  nop
    ctx->pc = 0x27fad8u;
    // NOP
label_27fadc:
    // 0x27fadc: 0x0  nop
    ctx->pc = 0x27fadcu;
    // NOP
label_27fae0:
    // 0x27fae0: 0x16414  .word       0x00016414                   # dsllv       $t4, $at, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fae0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_27fae4:
    // 0x27fae4: 0x2dd90  .word       0x0002DD90                   # mfhi        $k1 # 00020580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fae4u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_27fae8:
    // 0x27fae8: 0x0  nop
    ctx->pc = 0x27fae8u;
    // NOP
label_27faec:
    // 0x27faec: 0x0  nop
    ctx->pc = 0x27faecu;
    // NOP
label_27faf0:
    // 0x27faf0: 0x16470  tge         $zero, $at, 401
    ctx->pc = 0x27faf0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27faf4:
    // 0x27faf4: 0x33020  add         $a2, $zero, $v1
    ctx->pc = 0x27faf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_27faf8:
    // 0x27faf8: 0x0  nop
    ctx->pc = 0x27faf8u;
    // NOP
label_27fafc:
    // 0x27fafc: 0x0  nop
    ctx->pc = 0x27fafcu;
    // NOP
label_27fb00:
    // 0x27fb00: 0x164d7  .word       0x000164D7                   # dsrav       $t4, $at, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fb00u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27fb04:
    // 0x27fb04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27fb04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_27fb08:
    // 0x27fb08: 0x0  nop
    ctx->pc = 0x27fb08u;
    // NOP
label_27fb0c:
    // 0x27fb0c: 0x0  nop
    ctx->pc = 0x27fb0cu;
    // NOP
label_27fb10:
    // 0x27fb10: 0x1653b  dsra        $t4, $at, 20
    ctx->pc = 0x27fb10u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 1) >> 20);
label_27fb14:
    // 0x27fb14: 0x32520  .word       0x00032520                   # add         $a0, $zero, $v1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fb14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_27fb18:
    // 0x27fb18: 0x0  nop
    ctx->pc = 0x27fb18u;
    // NOP
label_27fb1c:
    // 0x27fb1c: 0x0  nop
    ctx->pc = 0x27fb1cu;
    // NOP
label_27fb20:
    // 0x27fb20: 0x165a0  .word       0x000165A0                   # add         $t4, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fb20u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_27fb24:
    // 0x27fb24: 0x32dd0  .word       0x00032DD0                   # mfhi        $a1 # 000305C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fb24u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_27fb28:
    // 0x27fb28: 0x0  nop
    ctx->pc = 0x27fb28u;
    // NOP
label_27fb2c:
    // 0x27fb2c: 0x0  nop
    ctx->pc = 0x27fb2cu;
    // NOP
label_27fb30:
    // 0x27fb30: 0x16606  .word       0x00016606                   # srlv        $t4, $at, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fb30u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27fb34:
    // 0x27fb34: 0x389a0  .word       0x000389A0                   # add         $s1, $zero, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fb34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_27fb38:
    // 0x27fb38: 0x0  nop
    ctx->pc = 0x27fb38u;
    // NOP
label_27fb3c:
    // 0x27fb3c: 0x0  nop
    ctx->pc = 0x27fb3cu;
    // NOP
label_27fb40:
    // 0x27fb40: 0x16678  dsll        $t4, $at, 25
    ctx->pc = 0x27fb40u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 1) << 25);
label_27fb44:
    // 0x27fb44: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x27fb44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_27fb48:
    // 0x27fb48: 0x0  nop
    ctx->pc = 0x27fb48u;
    // NOP
label_27fb4c:
    // 0x27fb4c: 0x0  nop
    ctx->pc = 0x27fb4cu;
    // NOP
label_27fb50:
    // 0x27fb50: 0x166de  .word       0x000166DE                   # ddiv        $t4, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fb50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x27FB50 raw=0x000166DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27fb54:
    // 0x27fb54: 0x33eb0  tge         $zero, $v1, 250
    ctx->pc = 0x27fb54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27fb58:
    // 0x27fb58: 0x0  nop
    ctx->pc = 0x27fb58u;
    // NOP
label_27fb5c:
    // 0x27fb5c: 0x0  nop
    ctx->pc = 0x27fb5cu;
    // NOP
label_27fb60:
    // 0x27fb60: 0x16746  .word       0x00016746                   # srlv        $t4, $at, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fb60u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27fb64:
    // 0x27fb64: 0x2fa30  tge         $zero, $v0, 1000
    ctx->pc = 0x27fb64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27fb68:
    // 0x27fb68: 0x0  nop
    ctx->pc = 0x27fb68u;
    // NOP
label_27fb6c:
    // 0x27fb6c: 0x0  nop
    ctx->pc = 0x27fb6cu;
    // NOP
label_27fb70:
    // 0x27fb70: 0x167a6  .word       0x000167A6                   # xor         $t4, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fb70u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27fb74:
    // 0x27fb74: 0x33ee0  .word       0x00033EE0                   # add         $a3, $zero, $v1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fb74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_27fb78:
    // 0x27fb78: 0x0  nop
    ctx->pc = 0x27fb78u;
    // NOP
label_27fb7c:
    // 0x27fb7c: 0x0  nop
    ctx->pc = 0x27fb7cu;
    // NOP
label_27fb80:
    // 0x27fb80: 0x1680e  .word       0x0001680E                   # INVALID     $zero, $at, 0x680E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fb80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x27FB80 raw=0x0001680E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27fb84:
    // 0x27fb84: 0x32ad0  .word       0x00032AD0                   # mfhi        $a1 # 000302C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fb84u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_27fb88:
    // 0x27fb88: 0x0  nop
    ctx->pc = 0x27fb88u;
    // NOP
label_27fb8c:
    // 0x27fb8c: 0x0  nop
    ctx->pc = 0x27fb8cu;
    // NOP
label_27fb90:
    // 0x27fb90: 0x16874  teq         $zero, $at, 417
    ctx->pc = 0x27fb90u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27fb94:
    // 0x27fb94: 0x359f0  tge         $zero, $v1, 359
    ctx->pc = 0x27fb94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27fb98:
    // 0x27fb98: 0x0  nop
    ctx->pc = 0x27fb98u;
    // NOP
label_27fb9c:
    // 0x27fb9c: 0x0  nop
    ctx->pc = 0x27fb9cu;
    // NOP
label_27fba0:
    // 0x27fba0: 0x168e0  .word       0x000168E0                   # add         $t5, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fba0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_27fba4:
    // 0x27fba4: 0x340f0  tge         $zero, $v1, 259
    ctx->pc = 0x27fba4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27fba8:
    // 0x27fba8: 0x0  nop
    ctx->pc = 0x27fba8u;
    // NOP
label_27fbac:
    // 0x27fbac: 0x0  nop
    ctx->pc = 0x27fbacu;
    // NOP
label_27fbb0:
    // 0x27fbb0: 0x16949  .word       0x00016949                   # jalr        $t5, $zero # 00010140 <InstrIdType: CPU_SPECIAL>
label_27fbb4:
    if (ctx->pc == 0x27FBB4u) {
        ctx->pc = 0x27FBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FBB0u;
        // 0x27fbb4: 0x33b70  tge         $zero, $v1, 237 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FBB8u;
        goto label_27fbb8;
    }
    ctx->pc = 0x27FBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 13, 0x27FBB8u);
        ctx->pc = 0x27FBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FBB0u;
        // 0x27fbb4: 0x33b70  tge         $zero, $v1, 237 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FBB0u, 0x27FBB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27FBB8u;
label_27fbb8:
    // 0x27fbb8: 0x0  nop
    ctx->pc = 0x27fbb8u;
    // NOP
label_27fbbc:
    // 0x27fbbc: 0x0  nop
    ctx->pc = 0x27fbbcu;
    // NOP
label_27fbc0:
    // 0x27fbc0: 0x169b1  tgeu        $zero, $at, 422
    ctx->pc = 0x27fbc0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27fbc4:
    // 0x27fbc4: 0x2ffc0  sll         $ra, $v0, 31
    ctx->pc = 0x27fbc4u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 2), 31));
label_27fbc8:
    // 0x27fbc8: 0x0  nop
    ctx->pc = 0x27fbc8u;
    // NOP
label_27fbcc:
    // 0x27fbcc: 0x0  nop
    ctx->pc = 0x27fbccu;
    // NOP
label_27fbd0:
    // 0x27fbd0: 0x16a11  .word       0x00016A11                   # mthi        $zero # 00016A00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fbd0u;
    ctx->hi = GPR_U64(ctx, 0);
label_27fbd4:
    // 0x27fbd4: 0x2f160  .word       0x0002F160                   # add         $fp, $zero, $v0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fbd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_27fbd8:
    // 0x27fbd8: 0x0  nop
    ctx->pc = 0x27fbd8u;
    // NOP
label_27fbdc:
    // 0x27fbdc: 0x0  nop
    ctx->pc = 0x27fbdcu;
    // NOP
label_27fbe0:
    // 0x27fbe0: 0x16a70  tge         $zero, $at, 425
    ctx->pc = 0x27fbe0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27fbe4:
    // 0x27fbe4: 0x2da40  sll         $k1, $v0, 9
    ctx->pc = 0x27fbe4u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
label_27fbe8:
    // 0x27fbe8: 0x0  nop
    ctx->pc = 0x27fbe8u;
    // NOP
label_27fbec:
    // 0x27fbec: 0x0  nop
    ctx->pc = 0x27fbecu;
    // NOP
label_27fbf0:
    // 0x27fbf0: 0x16acc  .word       0x00016ACC                   # syscall     427 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fbf0u;
    ctx->pc = 0x27FBF4u;
runtime->handleSyscall(rdram, ctx, 0x5ABu);
label_27fbf4:
    // 0x27fbf4: 0x36570  tge         $zero, $v1, 405
    ctx->pc = 0x27fbf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27fbf8:
    // 0x27fbf8: 0x0  nop
    ctx->pc = 0x27fbf8u;
    // NOP
label_27fbfc:
    // 0x27fbfc: 0x0  nop
    ctx->pc = 0x27fbfcu;
    // NOP
label_27fc00:
    // 0x27fc00: 0x16b39  .word       0x00016B39                   # INVALID     $zero, $at, 0x6B39 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fc00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27FC00 raw=0x00016B39"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27fc04:
    // 0x27fc04: 0x2d130  tge         $zero, $v0, 836
    ctx->pc = 0x27fc04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27fc08:
    // 0x27fc08: 0x0  nop
    ctx->pc = 0x27fc08u;
    // NOP
label_27fc0c:
    // 0x27fc0c: 0x0  nop
    ctx->pc = 0x27fc0cu;
    // NOP
label_27fc10:
    // 0x27fc10: 0x16b94  .word       0x00016B94                   # dsllv       $t5, $at, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fc10u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_27fc14:
    // 0x27fc14: 0x366a0  .word       0x000366A0                   # add         $t4, $zero, $v1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fc14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_27fc18:
    // 0x27fc18: 0x0  nop
    ctx->pc = 0x27fc18u;
    // NOP
label_27fc1c:
    // 0x27fc1c: 0x0  nop
    ctx->pc = 0x27fc1cu;
    // NOP
label_27fc20:
    // 0x27fc20: 0x16c01  .word       0x00016C01                   # INVALID     $zero, $at, 0x6C01 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fc20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x27FC20 raw=0x00016C01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27fc24:
    // 0x27fc24: 0x34950  .word       0x00034950                   # mfhi        $t1 # 00030140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fc24u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_27fc28:
    // 0x27fc28: 0x0  nop
    ctx->pc = 0x27fc28u;
    // NOP
label_27fc2c:
    // 0x27fc2c: 0x0  nop
    ctx->pc = 0x27fc2cu;
    // NOP
label_27fc30:
    // 0x27fc30: 0x16c6b  .word       0x00016C6B                   # sltu        $t5, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fc30u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_27fc34:
    // 0x27fc34: 0x306a0  .word       0x000306A0                   # add         $zero, $zero, $v1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fc34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_27fc38:
    // 0x27fc38: 0x0  nop
    ctx->pc = 0x27fc38u;
    // NOP
label_27fc3c:
    // 0x27fc3c: 0x0  nop
    ctx->pc = 0x27fc3cu;
    // NOP
label_27fc40:
    // 0x27fc40: 0x16ccc  .word       0x00016CCC                   # syscall     435 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fc40u;
    ctx->pc = 0x27FC44u;
runtime->handleSyscall(rdram, ctx, 0x5B3u);
label_27fc44:
    // 0x27fc44: 0x33820  add         $a3, $zero, $v1
    ctx->pc = 0x27fc44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_27fc48:
    // 0x27fc48: 0x0  nop
    ctx->pc = 0x27fc48u;
    // NOP
label_27fc4c:
    // 0x27fc4c: 0x0  nop
    ctx->pc = 0x27fc4cu;
    // NOP
label_27fc50:
    // 0x27fc50: 0x16d34  teq         $zero, $at, 436
    ctx->pc = 0x27fc50u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27fc54:
    // 0x27fc54: 0x331b0  tge         $zero, $v1, 198
    ctx->pc = 0x27fc54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27fc58:
    // 0x27fc58: 0x0  nop
    ctx->pc = 0x27fc58u;
    // NOP
label_27fc5c:
    // 0x27fc5c: 0x0  nop
    ctx->pc = 0x27fc5cu;
    // NOP
label_27fc60:
    // 0x27fc60: 0x16d9b  .word       0x00016D9B                   # divu        $t5, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fc60u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_27fc64:
    // 0x27fc64: 0x34ef0  tge         $zero, $v1, 315
    ctx->pc = 0x27fc64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27fc68:
    // 0x27fc68: 0x0  nop
    ctx->pc = 0x27fc68u;
    // NOP
label_27fc6c:
    // 0x27fc6c: 0x0  nop
    ctx->pc = 0x27fc6cu;
    // NOP
label_27fc70:
    // 0x27fc70: 0x16e05  .word       0x00016E05                   # INVALID     $zero, $at, 0x6E05 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fc70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x27FC70 raw=0x00016E05"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27fc74:
    // 0x27fc74: 0x333a0  .word       0x000333A0                   # add         $a2, $zero, $v1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fc74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_27fc78:
    // 0x27fc78: 0x0  nop
    ctx->pc = 0x27fc78u;
    // NOP
label_27fc7c:
    // 0x27fc7c: 0x0  nop
    ctx->pc = 0x27fc7cu;
    // NOP
label_27fc80:
    // 0x27fc80: 0x16e6c  .word       0x00016E6C                   # dadd        $t5, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fc80u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_27fc84:
    // 0x27fc84: 0x33de0  .word       0x00033DE0                   # add         $a3, $zero, $v1 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fc84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_27fc88:
    // 0x27fc88: 0x0  nop
    ctx->pc = 0x27fc88u;
    // NOP
label_27fc8c:
    // 0x27fc8c: 0x0  nop
    ctx->pc = 0x27fc8cu;
    // NOP
label_27fc90:
    // 0x27fc90: 0x16ed4  .word       0x00016ED4                   # dsllv       $t5, $at, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fc90u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_27fc94:
    // 0x27fc94: 0x34910  .word       0x00034910                   # mfhi        $t1 # 00030100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fc94u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_27fc98:
    // 0x27fc98: 0x0  nop
    ctx->pc = 0x27fc98u;
    // NOP
label_27fc9c:
    // 0x27fc9c: 0x0  nop
    ctx->pc = 0x27fc9cu;
    // NOP
label_27fca0:
    // 0x27fca0: 0x16f3e  dsrl32      $t5, $at, 28
    ctx->pc = 0x27fca0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 1) >> (32 + 28));
label_27fca4:
    // 0x27fca4: 0x31920  .word       0x00031920                   # add         $v1, $zero, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fca4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_27fca8:
    // 0x27fca8: 0x0  nop
    ctx->pc = 0x27fca8u;
    // NOP
label_27fcac:
    // 0x27fcac: 0x0  nop
    ctx->pc = 0x27fcacu;
    // NOP
label_27fcb0:
    // 0x27fcb0: 0x16fa2  .word       0x00016FA2                   # neg         $t5, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fcb0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
label_27fcb4:
    // 0x27fcb4: 0x32730  tge         $zero, $v1, 156
    ctx->pc = 0x27fcb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27fcb8:
    // 0x27fcb8: 0x0  nop
    ctx->pc = 0x27fcb8u;
    // NOP
label_27fcbc:
    // 0x27fcbc: 0x0  nop
    ctx->pc = 0x27fcbcu;
    // NOP
label_27fcc0:
    // 0x27fcc0: 0x17007  srav        $t6, $at, $zero
    ctx->pc = 0x27fcc0u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27fcc4:
    // 0x27fcc4: 0x317a0  .word       0x000317A0                   # add         $v0, $zero, $v1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fcc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_27fcc8:
    // 0x27fcc8: 0x0  nop
    ctx->pc = 0x27fcc8u;
    // NOP
label_27fccc:
    // 0x27fccc: 0x0  nop
    ctx->pc = 0x27fcccu;
    // NOP
label_27fcd0:
    // 0x27fcd0: 0x1706a  .word       0x0001706A                   # slt         $t6, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fcd0u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_27fcd4:
    // 0x27fcd4: 0x34ba0  .word       0x00034BA0                   # add         $t1, $zero, $v1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fcd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_27fcd8:
    // 0x27fcd8: 0x0  nop
    ctx->pc = 0x27fcd8u;
    // NOP
label_27fcdc:
    // 0x27fcdc: 0x0  nop
    ctx->pc = 0x27fcdcu;
    // NOP
label_27fce0:
    // 0x27fce0: 0x170d4  .word       0x000170D4                   # dsllv       $t6, $at, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fce0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_27fce4:
    // 0x27fce4: 0x2e130  tge         $zero, $v0, 900
    ctx->pc = 0x27fce4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27fce8:
    // 0x27fce8: 0x0  nop
    ctx->pc = 0x27fce8u;
    // NOP
label_27fcec:
    // 0x27fcec: 0x0  nop
    ctx->pc = 0x27fcecu;
    // NOP
label_27fcf0:
    // 0x27fcf0: 0x17131  tgeu        $zero, $at, 452
    ctx->pc = 0x27fcf0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27fcf4:
    // 0x27fcf4: 0x34aa0  .word       0x00034AA0                   # add         $t1, $zero, $v1 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fcf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_27fcf8:
    // 0x27fcf8: 0x0  nop
    ctx->pc = 0x27fcf8u;
    // NOP
label_27fcfc:
    // 0x27fcfc: 0x0  nop
    ctx->pc = 0x27fcfcu;
    // NOP
label_27fd00:
    // 0x27fd00: 0x1719b  .word       0x0001719B                   # divu        $t6, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fd00u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_27fd04:
    // 0x27fd04: 0x31130  tge         $zero, $v1, 68
    ctx->pc = 0x27fd04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27fd08:
    // 0x27fd08: 0x0  nop
    ctx->pc = 0x27fd08u;
    // NOP
label_27fd0c:
    // 0x27fd0c: 0x0  nop
    ctx->pc = 0x27fd0cu;
    // NOP
label_27fd10:
    // 0x27fd10: 0x171fe  dsrl32      $t6, $at, 7
    ctx->pc = 0x27fd10u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) >> (32 + 7));
label_27fd14:
    // 0x27fd14: 0x30a10  .word       0x00030A10                   # mfhi        $at # 00030200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fd14u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_27fd18:
    // 0x27fd18: 0x0  nop
    ctx->pc = 0x27fd18u;
    // NOP
label_27fd1c:
    // 0x27fd1c: 0x0  nop
    ctx->pc = 0x27fd1cu;
    // NOP
label_27fd20:
    // 0x27fd20: 0x17260  .word       0x00017260                   # add         $t6, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fd20u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_27fd24:
    // 0x27fd24: 0x2c5e0  .word       0x0002C5E0                   # add         $t8, $zero, $v0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fd24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_27fd28:
    // 0x27fd28: 0x0  nop
    ctx->pc = 0x27fd28u;
    // NOP
label_27fd2c:
    // 0x27fd2c: 0x0  nop
    ctx->pc = 0x27fd2cu;
    // NOP
label_27fd30:
    // 0x27fd30: 0x172b9  .word       0x000172B9                   # INVALID     $zero, $at, 0x72B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fd30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27FD30 raw=0x000172B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27fd34:
    // 0x27fd34: 0x34610  .word       0x00034610                   # mfhi        $t0 # 00030600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fd34u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_27fd38:
    // 0x27fd38: 0x0  nop
    ctx->pc = 0x27fd38u;
    // NOP
label_27fd3c:
    // 0x27fd3c: 0x0  nop
    ctx->pc = 0x27fd3cu;
    // NOP
label_27fd40:
    // 0x27fd40: 0x17322  .word       0x00017322                   # neg         $t6, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fd40u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_27fd44:
    // 0x27fd44: 0x2d8f0  tge         $zero, $v0, 867
    ctx->pc = 0x27fd44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27fd48:
    // 0x27fd48: 0x0  nop
    ctx->pc = 0x27fd48u;
    // NOP
label_27fd4c:
    // 0x27fd4c: 0x0  nop
    ctx->pc = 0x27fd4cu;
    // NOP
label_27fd50:
    // 0x27fd50: 0x1737e  dsrl32      $t6, $at, 13
    ctx->pc = 0x27fd50u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) >> (32 + 13));
label_27fd54:
    // 0x27fd54: 0x2d0f0  tge         $zero, $v0, 835
    ctx->pc = 0x27fd54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27fd58:
    // 0x27fd58: 0x0  nop
    ctx->pc = 0x27fd58u;
    // NOP
label_27fd5c:
    // 0x27fd5c: 0x0  nop
    ctx->pc = 0x27fd5cu;
    // NOP
label_27fd60:
    // 0x27fd60: 0x173d9  .word       0x000173D9                   # multu       $zero, $at # 000073C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fd60u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_27fd64:
    // 0x27fd64: 0x31a30  tge         $zero, $v1, 104
    ctx->pc = 0x27fd64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27fd68:
    // 0x27fd68: 0x0  nop
    ctx->pc = 0x27fd68u;
    // NOP
label_27fd6c:
    // 0x27fd6c: 0x0  nop
    ctx->pc = 0x27fd6cu;
    // NOP
label_27fd70:
    // 0x27fd70: 0x1743d  .word       0x0001743D                   # INVALID     $zero, $at, 0x743D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fd70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x27FD70 raw=0x0001743D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27fd74:
    // 0x27fd74: 0x32a10  .word       0x00032A10                   # mfhi        $a1 # 00030200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fd74u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_27fd78:
    // 0x27fd78: 0x0  nop
    ctx->pc = 0x27fd78u;
    // NOP
label_27fd7c:
    // 0x27fd7c: 0x0  nop
    ctx->pc = 0x27fd7cu;
    // NOP
label_27fd80:
    // 0x27fd80: 0x174a3  .word       0x000174A3                   # negu        $t6, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fd80u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27fd84:
    // 0x27fd84: 0x340a0  .word       0x000340A0                   # add         $t0, $zero, $v1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fd84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_27fd88:
    // 0x27fd88: 0x0  nop
    ctx->pc = 0x27fd88u;
    // NOP
label_27fd8c:
    // 0x27fd8c: 0x0  nop
    ctx->pc = 0x27fd8cu;
    // NOP
label_27fd90:
    // 0x27fd90: 0x1750c  .word       0x0001750C                   # syscall     468 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fd90u;
    ctx->pc = 0x27FD94u;
runtime->handleSyscall(rdram, ctx, 0x5D4u);
label_27fd94:
    // 0x27fd94: 0x32970  tge         $zero, $v1, 165
    ctx->pc = 0x27fd94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27fd98:
    // 0x27fd98: 0x0  nop
    ctx->pc = 0x27fd98u;
    // NOP
label_27fd9c:
    // 0x27fd9c: 0x0  nop
    ctx->pc = 0x27fd9cu;
    // NOP
label_27fda0:
    // 0x27fda0: 0x17572  tlt         $zero, $at, 469
    ctx->pc = 0x27fda0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27fda4:
    // 0x27fda4: 0x2f720  .word       0x0002F720                   # add         $fp, $zero, $v0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fda4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_27fda8:
    // 0x27fda8: 0x0  nop
    ctx->pc = 0x27fda8u;
    // NOP
label_27fdac:
    // 0x27fdac: 0x0  nop
    ctx->pc = 0x27fdacu;
    // NOP
label_27fdb0:
    // 0x27fdb0: 0x175d1  .word       0x000175D1                   # mthi        $zero # 000175C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fdb0u;
    ctx->hi = GPR_U64(ctx, 0);
label_27fdb4:
    // 0x27fdb4: 0x2dae0  .word       0x0002DAE0                   # add         $k1, $zero, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fdb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_27fdb8:
    // 0x27fdb8: 0x0  nop
    ctx->pc = 0x27fdb8u;
    // NOP
label_27fdbc:
    // 0x27fdbc: 0x0  nop
    ctx->pc = 0x27fdbcu;
    // NOP
label_27fdc0:
    // 0x27fdc0: 0x1762d  .word       0x0001762D                   # daddu       $t6, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fdc0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_27fdc4:
    // 0x27fdc4: 0x332b0  tge         $zero, $v1, 202
    ctx->pc = 0x27fdc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27fdc8:
    // 0x27fdc8: 0x0  nop
    ctx->pc = 0x27fdc8u;
    // NOP
label_27fdcc:
    // 0x27fdcc: 0x0  nop
    ctx->pc = 0x27fdccu;
    // NOP
label_27fdd0:
    // 0x27fdd0: 0x17694  .word       0x00017694                   # dsllv       $t6, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fdd0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_27fdd4:
    // 0x27fdd4: 0x2be90  .word       0x0002BE90                   # mfhi        $s7 # 00020680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fdd4u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_27fdd8:
    // 0x27fdd8: 0x0  nop
    ctx->pc = 0x27fdd8u;
    // NOP
label_27fddc:
    // 0x27fddc: 0x0  nop
    ctx->pc = 0x27fddcu;
    // NOP
label_27fde0:
    // 0x27fde0: 0x176ec  .word       0x000176EC                   # dadd        $t6, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fde0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_27fde4:
    // 0x27fde4: 0x32340  sll         $a0, $v1, 13
    ctx->pc = 0x27fde4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
label_27fde8:
    // 0x27fde8: 0x0  nop
    ctx->pc = 0x27fde8u;
    // NOP
label_27fdec:
    // 0x27fdec: 0x0  nop
    ctx->pc = 0x27fdecu;
    // NOP
label_27fdf0:
    // 0x27fdf0: 0x17751  .word       0x00017751                   # mthi        $zero # 00017740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fdf0u;
    ctx->hi = GPR_U64(ctx, 0);
label_27fdf4:
    // 0x27fdf4: 0x33920  .word       0x00033920                   # add         $a3, $zero, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fdf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_27fdf8:
    // 0x27fdf8: 0x0  nop
    ctx->pc = 0x27fdf8u;
    // NOP
label_27fdfc:
    // 0x27fdfc: 0x0  nop
    ctx->pc = 0x27fdfcu;
    // NOP
label_27fe00:
    // 0x27fe00: 0x177b9  .word       0x000177B9                   # INVALID     $zero, $at, 0x77B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fe00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27FE00 raw=0x000177B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27fe04:
    // 0x27fe04: 0x30d30  tge         $zero, $v1, 52
    ctx->pc = 0x27fe04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27fe08:
    // 0x27fe08: 0x0  nop
    ctx->pc = 0x27fe08u;
    // NOP
label_27fe0c:
    // 0x27fe0c: 0x0  nop
    ctx->pc = 0x27fe0cu;
    // NOP
label_27fe10:
    // 0x27fe10: 0x1781b  divu        $t7, $zero, $at
    ctx->pc = 0x27fe10u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_27fe14:
    // 0x27fe14: 0x2fa50  .word       0x0002FA50                   # mfhi        $ra # 00020240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fe14u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_27fe18:
    // 0x27fe18: 0x0  nop
    ctx->pc = 0x27fe18u;
    // NOP
label_27fe1c:
    // 0x27fe1c: 0x0  nop
    ctx->pc = 0x27fe1cu;
    // NOP
label_27fe20:
    // 0x27fe20: 0x1787b  dsra        $t7, $at, 1
    ctx->pc = 0x27fe20u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 1) >> 1);
label_27fe24:
    // 0x27fe24: 0x33320  .word       0x00033320                   # add         $a2, $zero, $v1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fe24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_27fe28:
    // 0x27fe28: 0x0  nop
    ctx->pc = 0x27fe28u;
    // NOP
label_27fe2c:
    // 0x27fe2c: 0x0  nop
    ctx->pc = 0x27fe2cu;
    // NOP
label_27fe30:
    // 0x27fe30: 0x178e2  .word       0x000178E2                   # neg         $t7, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fe30u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_27fe34:
    // 0x27fe34: 0x36180  sll         $t4, $v1, 6
    ctx->pc = 0x27fe34u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_27fe38:
    // 0x27fe38: 0x0  nop
    ctx->pc = 0x27fe38u;
    // NOP
label_27fe3c:
    // 0x27fe3c: 0x0  nop
    ctx->pc = 0x27fe3cu;
    // NOP
label_27fe40:
    // 0x27fe40: 0x1794f  .word       0x0001794F                   # sync # 00017800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fe40u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27fe44:
    // 0x27fe44: 0x32690  .word       0x00032690                   # mfhi        $a0 # 00030680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fe44u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_27fe48:
    // 0x27fe48: 0x0  nop
    ctx->pc = 0x27fe48u;
    // NOP
label_27fe4c:
    // 0x27fe4c: 0x0  nop
    ctx->pc = 0x27fe4cu;
    // NOP
label_27fe50:
    // 0x27fe50: 0x179b4  teq         $zero, $at, 486
    ctx->pc = 0x27fe50u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27fe54:
    // 0x27fe54: 0x33cf0  tge         $zero, $v1, 243
    ctx->pc = 0x27fe54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27fe58:
    // 0x27fe58: 0x0  nop
    ctx->pc = 0x27fe58u;
    // NOP
label_27fe5c:
    // 0x27fe5c: 0x0  nop
    ctx->pc = 0x27fe5cu;
    // NOP
label_27fe60:
    // 0x27fe60: 0x17a1c  .word       0x00017A1C                   # dmult       $zero, $at # 00007A00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fe60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x27FE60 raw=0x00017A1C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27fe64:
    // 0x27fe64: 0x2c4c0  sll         $t8, $v0, 19
    ctx->pc = 0x27fe64u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
label_27fe68:
    // 0x27fe68: 0x0  nop
    ctx->pc = 0x27fe68u;
    // NOP
label_27fe6c:
    // 0x27fe6c: 0x0  nop
    ctx->pc = 0x27fe6cu;
    // NOP
label_27fe70:
    // 0x27fe70: 0x17a75  .word       0x00017A75                   # INVALID     $zero, $at, 0x7A75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fe70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27FE70 raw=0x00017A75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27fe74:
    // 0x27fe74: 0x33820  add         $a3, $zero, $v1
    ctx->pc = 0x27fe74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_27fe78:
    // 0x27fe78: 0x0  nop
    ctx->pc = 0x27fe78u;
    // NOP
label_27fe7c:
    // 0x27fe7c: 0x0  nop
    ctx->pc = 0x27fe7cu;
    // NOP
label_27fe80:
    // 0x27fe80: 0x17add  .word       0x00017ADD                   # dmultu      $zero, $at # 00007AC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fe80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27FE80 raw=0x00017ADD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27fe84:
    // 0x27fe84: 0x35180  sll         $t2, $v1, 6
    ctx->pc = 0x27fe84u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_27fe88:
    // 0x27fe88: 0x0  nop
    ctx->pc = 0x27fe88u;
    // NOP
label_27fe8c:
    // 0x27fe8c: 0x0  nop
    ctx->pc = 0x27fe8cu;
    // NOP
label_27fe90:
    // 0x27fe90: 0x17b48  .word       0x00017B48                   # jr          $zero # 00017B40 <InstrIdType: CPU_SPECIAL>
label_27fe94:
    if (ctx->pc == 0x27FE94u) {
        ctx->pc = 0x27FE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE90u;
        // 0x27fe94: 0x31720  .word       0x00031720                   # add         $v0, $zero, $v1 # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FE98u;
        goto label_27fe98;
    }
    ctx->pc = 0x27FE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x27FE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE90u;
        // 0x27fe94: 0x31720  .word       0x00031720                   # add         $v0, $zero, $v1 # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FE90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27FE98u;
label_27fe98:
    // 0x27fe98: 0x0  nop
    ctx->pc = 0x27fe98u;
    // NOP
label_27fe9c:
    // 0x27fe9c: 0x0  nop
    ctx->pc = 0x27fe9cu;
    // NOP
label_27fea0:
    // 0x27fea0: 0x17bab  .word       0x00017BAB                   # sltu        $t7, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fea0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_27fea4:
    // 0x27fea4: 0x325e0  .word       0x000325E0                   # add         $a0, $zero, $v1 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fea4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_27fea8:
    // 0x27fea8: 0x0  nop
    ctx->pc = 0x27fea8u;
    // NOP
label_27feac:
    // 0x27feac: 0x0  nop
    ctx->pc = 0x27feacu;
    // NOP
label_27feb0:
    // 0x27feb0: 0x17c10  .word       0x00017C10                   # mfhi        $t7 # 00010400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27feb0u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_27feb4:
    // 0x27feb4: 0x34330  tge         $zero, $v1, 268
    ctx->pc = 0x27feb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27feb8:
    // 0x27feb8: 0x0  nop
    ctx->pc = 0x27feb8u;
    // NOP
label_27febc:
    // 0x27febc: 0x0  nop
    ctx->pc = 0x27febcu;
    // NOP
label_27fec0:
    // 0x27fec0: 0x17c79  .word       0x00017C79                   # INVALID     $zero, $at, 0x7C79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fec0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27FEC0 raw=0x00017C79"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27fec4:
    // 0x27fec4: 0x2f740  sll         $fp, $v0, 29
    ctx->pc = 0x27fec4u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
label_27fec8:
    // 0x27fec8: 0x0  nop
    ctx->pc = 0x27fec8u;
    // NOP
label_27fecc:
    // 0x27fecc: 0x0  nop
    ctx->pc = 0x27feccu;
    // NOP
label_27fed0:
    // 0x27fed0: 0x17cd8  .word       0x00017CD8                   # mult        $t7, $zero, $at # 000004C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27fed0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_27fed4:
    // 0x27fed4: 0x33b70  tge         $zero, $v1, 237
    ctx->pc = 0x27fed4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27fed8:
    // 0x27fed8: 0x0  nop
    ctx->pc = 0x27fed8u;
    // NOP
label_27fedc:
    // 0x27fedc: 0x0  nop
    ctx->pc = 0x27fedcu;
    // NOP
label_27fee0:
    // 0x27fee0: 0x17d40  sll         $t7, $at, 21
    ctx->pc = 0x27fee0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 1), 21));
label_27fee4:
    // 0x27fee4: 0x2fc30  tge         $zero, $v0, 1008
    ctx->pc = 0x27fee4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27fee8:
    // 0x27fee8: 0x0  nop
    ctx->pc = 0x27fee8u;
    // NOP
label_27feec:
    // 0x27feec: 0x0  nop
    ctx->pc = 0x27feecu;
    // NOP
label_27fef0:
    // 0x27fef0: 0x17da0  .word       0x00017DA0                   # add         $t7, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fef0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_27fef4:
    // 0x27fef4: 0x32250  .word       0x00032250                   # mfhi        $a0 # 00030240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fef4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_27fef8:
    // 0x27fef8: 0x0  nop
    ctx->pc = 0x27fef8u;
    // NOP
label_27fefc:
    // 0x27fefc: 0x0  nop
    ctx->pc = 0x27fefcu;
    // NOP
label_27ff00:
    // 0x27ff00: 0x17e05  .word       0x00017E05                   # INVALID     $zero, $at, 0x7E05 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ff00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x27FF00 raw=0x00017E05"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27ff04:
    // 0x27ff04: 0x35440  sll         $t2, $v1, 17
    ctx->pc = 0x27ff04u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 17));
label_27ff08:
    // 0x27ff08: 0x0  nop
    ctx->pc = 0x27ff08u;
    // NOP
label_27ff0c:
    // 0x27ff0c: 0x0  nop
    ctx->pc = 0x27ff0cu;
    // NOP
label_27ff10:
    // 0x27ff10: 0x17e70  tge         $zero, $at, 505
    ctx->pc = 0x27ff10u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27ff14:
    // 0x27ff14: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x27ff14u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_27ff18:
    // 0x27ff18: 0x0  nop
    ctx->pc = 0x27ff18u;
    // NOP
label_27ff1c:
    // 0x27ff1c: 0x0  nop
    ctx->pc = 0x27ff1cu;
    // NOP
label_27ff20:
    // 0x27ff20: 0x17ed8  .word       0x00017ED8                   # mult        $t7, $zero, $at # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27ff20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_27ff24:
    // 0x27ff24: 0x30d10  .word       0x00030D10                   # mfhi        $at # 00030500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ff24u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_27ff28:
    // 0x27ff28: 0x0  nop
    ctx->pc = 0x27ff28u;
    // NOP
label_27ff2c:
    // 0x27ff2c: 0x0  nop
    ctx->pc = 0x27ff2cu;
    // NOP
label_27ff30:
    // 0x27ff30: 0x17f3a  dsrl        $t7, $at, 28
    ctx->pc = 0x27ff30u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 1) >> 28);
label_27ff34:
    // 0x27ff34: 0x30e20  .word       0x00030E20                   # add         $at, $zero, $v1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ff34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_27ff38:
    // 0x27ff38: 0x0  nop
    ctx->pc = 0x27ff38u;
    // NOP
label_27ff3c:
    // 0x27ff3c: 0x0  nop
    ctx->pc = 0x27ff3cu;
    // NOP
label_27ff40:
    // 0x27ff40: 0x17f9c  .word       0x00017F9C                   # dmult       $zero, $at # 00007F80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ff40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x27FF40 raw=0x00017F9C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27ff44:
    // 0x27ff44: 0x2de80  sll         $k1, $v0, 26
    ctx->pc = 0x27ff44u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 2), 26));
label_27ff48:
    // 0x27ff48: 0x0  nop
    ctx->pc = 0x27ff48u;
    // NOP
label_27ff4c:
    // 0x27ff4c: 0x0  nop
    ctx->pc = 0x27ff4cu;
    // NOP
label_27ff50:
    // 0x27ff50: 0x17ff8  dsll        $t7, $at, 31
    ctx->pc = 0x27ff50u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 1) << 31);
label_27ff54:
    // 0x27ff54: 0x30b10  .word       0x00030B10                   # mfhi        $at # 00030300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ff54u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_27ff58:
    // 0x27ff58: 0x0  nop
    ctx->pc = 0x27ff58u;
    // NOP
label_27ff5c:
    // 0x27ff5c: 0x0  nop
    ctx->pc = 0x27ff5cu;
    // NOP
label_27ff60:
    // 0x27ff60: 0x1805a  .word       0x0001805A                   # div         $s0, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ff60u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_27ff64:
    // 0x27ff64: 0x30e30  tge         $zero, $v1, 56
    ctx->pc = 0x27ff64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27ff68:
    // 0x27ff68: 0x0  nop
    ctx->pc = 0x27ff68u;
    // NOP
label_27ff6c:
    // 0x27ff6c: 0x0  nop
    ctx->pc = 0x27ff6cu;
    // NOP
label_27ff70:
    // 0x27ff70: 0x180bc  dsll32      $s0, $at, 2
    ctx->pc = 0x27ff70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) << (32 + 2));
label_27ff74:
    // 0x27ff74: 0x331f0  tge         $zero, $v1, 199
    ctx->pc = 0x27ff74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27ff78:
    // 0x27ff78: 0x0  nop
    ctx->pc = 0x27ff78u;
    // NOP
label_27ff7c:
    // 0x27ff7c: 0x0  nop
    ctx->pc = 0x27ff7cu;
    // NOP
label_27ff80:
    // 0x27ff80: 0x18123  .word       0x00018123                   # negu        $s0, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ff80u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27ff84:
    // 0x27ff84: 0x372d0  .word       0x000372D0                   # mfhi        $t6 # 000302C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ff84u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_27ff88:
    // 0x27ff88: 0x0  nop
    ctx->pc = 0x27ff88u;
    // NOP
label_27ff8c:
    // 0x27ff8c: 0x0  nop
    ctx->pc = 0x27ff8cu;
    // NOP
label_27ff90:
    // 0x27ff90: 0x18192  .word       0x00018192                   # mflo        $s0 # 00010180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ff90u;
    SET_GPR_U64(ctx, 16, ctx->lo);
label_27ff94:
    // 0x27ff94: 0x2b8d0  .word       0x0002B8D0                   # mfhi        $s7 # 000200C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ff94u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_27ff98:
    // 0x27ff98: 0x0  nop
    ctx->pc = 0x27ff98u;
    // NOP
label_27ff9c:
    // 0x27ff9c: 0x0  nop
    ctx->pc = 0x27ff9cu;
    // NOP
label_27ffa0:
    // 0x27ffa0: 0x181ea  .word       0x000181EA                   # slt         $s0, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ffa0u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_27ffa4:
    // 0x27ffa4: 0x336c0  sll         $a2, $v1, 27
    ctx->pc = 0x27ffa4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 27));
label_27ffa8:
    // 0x27ffa8: 0x0  nop
    ctx->pc = 0x27ffa8u;
    // NOP
label_27ffac:
    // 0x27ffac: 0x0  nop
    ctx->pc = 0x27ffacu;
    // NOP
label_27ffb0:
    // 0x27ffb0: 0x18251  .word       0x00018251                   # mthi        $zero # 00018240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ffb0u;
    ctx->hi = GPR_U64(ctx, 0);
label_27ffb4:
    // 0x27ffb4: 0x2fab0  tge         $zero, $v0, 1002
    ctx->pc = 0x27ffb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27ffb8:
    // 0x27ffb8: 0x0  nop
    ctx->pc = 0x27ffb8u;
    // NOP
label_27ffbc:
    // 0x27ffbc: 0x0  nop
    ctx->pc = 0x27ffbcu;
    // NOP
label_27ffc0:
    // 0x27ffc0: 0x182b1  tgeu        $zero, $at, 522
    ctx->pc = 0x27ffc0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27ffc4:
    // 0x27ffc4: 0x2fcc0  sll         $ra, $v0, 19
    ctx->pc = 0x27ffc4u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
label_27ffc8:
    // 0x27ffc8: 0x0  nop
    ctx->pc = 0x27ffc8u;
    // NOP
label_27ffcc:
    // 0x27ffcc: 0x0  nop
    ctx->pc = 0x27ffccu;
    // NOP
label_27ffd0:
    // 0x27ffd0: 0x18311  .word       0x00018311                   # mthi        $zero # 00018300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ffd0u;
    ctx->hi = GPR_U64(ctx, 0);
label_27ffd4:
    // 0x27ffd4: 0x3aa80  sll         $s5, $v1, 10
    ctx->pc = 0x27ffd4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
label_27ffd8:
    // 0x27ffd8: 0x0  nop
    ctx->pc = 0x27ffd8u;
    // NOP
label_27ffdc:
    // 0x27ffdc: 0x0  nop
    ctx->pc = 0x27ffdcu;
    // NOP
label_27ffe0:
    // 0x27ffe0: 0x18387  .word       0x00018387                   # srav        $s0, $at, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ffe0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27ffe4:
    // 0x27ffe4: 0x31450  .word       0x00031450                   # mfhi        $v0 # 00030440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ffe4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_27ffe8:
    // 0x27ffe8: 0x0  nop
    ctx->pc = 0x27ffe8u;
    // NOP
label_27ffec:
    // 0x27ffec: 0x0  nop
    ctx->pc = 0x27ffecu;
    // NOP
label_27fff0:
    // 0x27fff0: 0x183ea  .word       0x000183EA                   # slt         $s0, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fff0u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_27fff4:
    // 0x27fff4: 0x344d0  .word       0x000344D0                   # mfhi        $t0 # 000304C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27fff4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_27fff8:
    // 0x27fff8: 0x0  nop
    ctx->pc = 0x27fff8u;
    // NOP
label_27fffc:
    // 0x27fffc: 0x0  nop
    ctx->pc = 0x27fffcu;
    // NOP
label_280000:
    // 0x280000: 0x18453  .word       0x00018453                   # mtlo        $zero # 00018440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280000u;
    ctx->lo = GPR_U64(ctx, 0);
label_280004:
    // 0x280004: 0x35e70  tge         $zero, $v1, 377
    ctx->pc = 0x280004u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280008:
    // 0x280008: 0x0  nop
    ctx->pc = 0x280008u;
    // NOP
label_28000c:
    // 0x28000c: 0x0  nop
    ctx->pc = 0x28000cu;
    // NOP
label_280010:
    // 0x280010: 0x184bf  dsra32      $s0, $at, 18
    ctx->pc = 0x280010u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 1) >> (32 + 18));
label_280014:
    // 0x280014: 0x332e0  .word       0x000332E0                   # add         $a2, $zero, $v1 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280014u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_280018:
    // 0x280018: 0x0  nop
    ctx->pc = 0x280018u;
    // NOP
label_28001c:
    // 0x28001c: 0x0  nop
    ctx->pc = 0x28001cu;
    // NOP
label_280020:
    // 0x280020: 0x18526  .word       0x00018526                   # xor         $s0, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280020u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_280024:
    // 0x280024: 0x30870  tge         $zero, $v1, 33
    ctx->pc = 0x280024u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280028:
    // 0x280028: 0x0  nop
    ctx->pc = 0x280028u;
    // NOP
label_28002c:
    // 0x28002c: 0x0  nop
    ctx->pc = 0x28002cu;
    // NOP
label_280030:
    // 0x280030: 0x18588  .word       0x00018588                   # jr          $zero # 00018580 <InstrIdType: CPU_SPECIAL>
label_280034:
    if (ctx->pc == 0x280034u) {
        ctx->pc = 0x280034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280030u;
        // 0x280034: 0x350b0  tge         $zero, $v1, 322 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x280038u;
        goto label_280038;
    }
    ctx->pc = 0x280030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x280034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280030u;
        // 0x280034: 0x350b0  tge         $zero, $v1, 322 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280030u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x280038u;
label_280038:
    // 0x280038: 0x0  nop
    ctx->pc = 0x280038u;
    // NOP
label_28003c:
    // 0x28003c: 0x0  nop
    ctx->pc = 0x28003cu;
    // NOP
label_280040:
    // 0x280040: 0x185f3  tltu        $zero, $at, 535
    ctx->pc = 0x280040u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_280044:
    // 0x280044: 0x32240  sll         $a0, $v1, 9
    ctx->pc = 0x280044u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
label_280048:
    // 0x280048: 0x0  nop
    ctx->pc = 0x280048u;
    // NOP
label_28004c:
    // 0x28004c: 0x0  nop
    ctx->pc = 0x28004cu;
    // NOP
label_280050:
    // 0x280050: 0x18658  .word       0x00018658                   # mult        $s0, $zero, $at # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x280050u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_280054:
    // 0x280054: 0x31330  tge         $zero, $v1, 76
    ctx->pc = 0x280054u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280058:
    // 0x280058: 0x0  nop
    ctx->pc = 0x280058u;
    // NOP
label_28005c:
    // 0x28005c: 0x0  nop
    ctx->pc = 0x28005cu;
    // NOP
label_280060:
    // 0x280060: 0x186bb  dsra        $s0, $at, 26
    ctx->pc = 0x280060u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 1) >> 26);
label_280064:
    // 0x280064: 0x35f10  .word       0x00035F10                   # mfhi        $t3 # 00030700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280064u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_280068:
    // 0x280068: 0x0  nop
    ctx->pc = 0x280068u;
    // NOP
label_28006c:
    // 0x28006c: 0x0  nop
    ctx->pc = 0x28006cu;
    // NOP
label_280070:
    // 0x280070: 0x18727  .word       0x00018727                   # nor         $s0, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280070u;
    SET_GPR_U64(ctx, 16, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_280074:
    // 0x280074: 0x31850  .word       0x00031850                   # mfhi        $v1 # 00030040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280074u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_280078:
    // 0x280078: 0x0  nop
    ctx->pc = 0x280078u;
    // NOP
label_28007c:
    // 0x28007c: 0x0  nop
    ctx->pc = 0x28007cu;
    // NOP
label_280080:
    // 0x280080: 0x1878b  .word       0x0001878B                   # movn        $s0, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280080u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_280084:
    // 0x280084: 0x32420  .word       0x00032420                   # add         $a0, $zero, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280084u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_280088:
    // 0x280088: 0x0  nop
    ctx->pc = 0x280088u;
    // NOP
label_28008c:
    // 0x28008c: 0x0  nop
    ctx->pc = 0x28008cu;
    // NOP
label_280090:
    // 0x280090: 0x187f0  tge         $zero, $at, 543
    ctx->pc = 0x280090u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_280094:
    // 0x280094: 0x2fe80  sll         $ra, $v0, 26
    ctx->pc = 0x280094u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 2), 26));
label_280098:
    // 0x280098: 0x0  nop
    ctx->pc = 0x280098u;
    // NOP
label_28009c:
    // 0x28009c: 0x0  nop
    ctx->pc = 0x28009cu;
    // NOP
label_2800a0:
    // 0x2800a0: 0x18850  .word       0x00018850                   # mfhi        $s1 # 00010040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2800a0u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2800a4:
    // 0x2800a4: 0x33f50  .word       0x00033F50                   # mfhi        $a3 # 00030740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2800a4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_2800a8:
    // 0x2800a8: 0x0  nop
    ctx->pc = 0x2800a8u;
    // NOP
label_2800ac:
    // 0x2800ac: 0x0  nop
    ctx->pc = 0x2800acu;
    // NOP
label_2800b0:
    // 0x2800b0: 0x188b8  dsll        $s1, $at, 2
    ctx->pc = 0x2800b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 1) << 2);
label_2800b4:
    // 0x2800b4: 0x2e800  sll         $sp, $v0, 0
    ctx->pc = 0x2800b4u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2800b8:
    // 0x2800b8: 0x0  nop
    ctx->pc = 0x2800b8u;
    // NOP
label_2800bc:
    // 0x2800bc: 0x0  nop
    ctx->pc = 0x2800bcu;
    // NOP
label_2800c0:
    // 0x2800c0: 0x18915  .word       0x00018915                   # INVALID     $zero, $at, -0x76EB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2800c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2800C0 raw=0x00018915"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2800c4:
    // 0x2800c4: 0x374a0  .word       0x000374A0                   # add         $t6, $zero, $v1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2800c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2800c8:
    // 0x2800c8: 0x0  nop
    ctx->pc = 0x2800c8u;
    // NOP
label_2800cc:
    // 0x2800cc: 0x0  nop
    ctx->pc = 0x2800ccu;
    // NOP
label_2800d0:
    // 0x2800d0: 0x18984  .word       0x00018984                   # sllv        $s1, $at, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2800d0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2800d4:
    // 0x2800d4: 0x357b0  tge         $zero, $v1, 350
    ctx->pc = 0x2800d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2800d8:
    // 0x2800d8: 0x0  nop
    ctx->pc = 0x2800d8u;
    // NOP
label_2800dc:
    // 0x2800dc: 0x0  nop
    ctx->pc = 0x2800dcu;
    // NOP
label_2800e0:
    // 0x2800e0: 0x189ef  .word       0x000189EF                   # dsubu       $s1, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2800e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_2800e4:
    // 0x2800e4: 0x39890  .word       0x00039890                   # mfhi        $s3 # 00030080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2800e4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_2800e8:
    // 0x2800e8: 0x0  nop
    ctx->pc = 0x2800e8u;
    // NOP
label_2800ec:
    // 0x2800ec: 0x0  nop
    ctx->pc = 0x2800ecu;
    // NOP
label_2800f0:
    // 0x2800f0: 0x18a63  .word       0x00018A63                   # negu        $s1, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2800f0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2800f4:
    // 0x2800f4: 0x36180  sll         $t4, $v1, 6
    ctx->pc = 0x2800f4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_2800f8:
    // 0x2800f8: 0x0  nop
    ctx->pc = 0x2800f8u;
    // NOP
label_2800fc:
    // 0x2800fc: 0x0  nop
    ctx->pc = 0x2800fcu;
    // NOP
label_280100:
    // 0x280100: 0x18ad0  .word       0x00018AD0                   # mfhi        $s1 # 000102C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280100u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_280104:
    // 0x280104: 0x34060  .word       0x00034060                   # add         $t0, $zero, $v1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280104u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_280108:
    // 0x280108: 0x0  nop
    ctx->pc = 0x280108u;
    // NOP
label_28010c:
    // 0x28010c: 0x0  nop
    ctx->pc = 0x28010cu;
    // NOP
    ctx->pc = 0x280110u;
    return;
}
