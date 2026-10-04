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

// Function: entry_00254d38
// Address: 0x254d38 - 0x27d478
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_00254d38_part23(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x25f918u: goto label_25f918;
        case 0x25f91cu: goto label_25f91c;
        case 0x25f920u: goto label_25f920;
        case 0x25f924u: goto label_25f924;
        case 0x25f928u: goto label_25f928;
        case 0x25f92cu: goto label_25f92c;
        case 0x25f930u: goto label_25f930;
        case 0x25f934u: goto label_25f934;
        case 0x25f938u: goto label_25f938;
        case 0x25f93cu: goto label_25f93c;
        case 0x25f940u: goto label_25f940;
        case 0x25f944u: goto label_25f944;
        case 0x25f948u: goto label_25f948;
        case 0x25f94cu: goto label_25f94c;
        case 0x25f950u: goto label_25f950;
        case 0x25f954u: goto label_25f954;
        case 0x25f958u: goto label_25f958;
        case 0x25f95cu: goto label_25f95c;
        case 0x25f960u: goto label_25f960;
        case 0x25f964u: goto label_25f964;
        case 0x25f968u: goto label_25f968;
        case 0x25f96cu: goto label_25f96c;
        case 0x25f970u: goto label_25f970;
        case 0x25f974u: goto label_25f974;
        case 0x25f978u: goto label_25f978;
        case 0x25f97cu: goto label_25f97c;
        case 0x25f980u: goto label_25f980;
        case 0x25f984u: goto label_25f984;
        case 0x25f988u: goto label_25f988;
        case 0x25f98cu: goto label_25f98c;
        case 0x25f990u: goto label_25f990;
        case 0x25f994u: goto label_25f994;
        case 0x25f998u: goto label_25f998;
        case 0x25f99cu: goto label_25f99c;
        case 0x25f9a0u: goto label_25f9a0;
        case 0x25f9a4u: goto label_25f9a4;
        case 0x25f9a8u: goto label_25f9a8;
        case 0x25f9acu: goto label_25f9ac;
        case 0x25f9b0u: goto label_25f9b0;
        case 0x25f9b4u: goto label_25f9b4;
        case 0x25f9b8u: goto label_25f9b8;
        case 0x25f9bcu: goto label_25f9bc;
        case 0x25f9c0u: goto label_25f9c0;
        case 0x25f9c4u: goto label_25f9c4;
        case 0x25f9c8u: goto label_25f9c8;
        case 0x25f9ccu: goto label_25f9cc;
        case 0x25f9d0u: goto label_25f9d0;
        case 0x25f9d4u: goto label_25f9d4;
        case 0x25f9d8u: goto label_25f9d8;
        case 0x25f9dcu: goto label_25f9dc;
        case 0x25f9e0u: goto label_25f9e0;
        case 0x25f9e4u: goto label_25f9e4;
        case 0x25f9e8u: goto label_25f9e8;
        case 0x25f9ecu: goto label_25f9ec;
        case 0x25f9f0u: goto label_25f9f0;
        case 0x25f9f4u: goto label_25f9f4;
        case 0x25f9f8u: goto label_25f9f8;
        case 0x25f9fcu: goto label_25f9fc;
        case 0x25fa00u: goto label_25fa00;
        case 0x25fa04u: goto label_25fa04;
        case 0x25fa08u: goto label_25fa08;
        case 0x25fa0cu: goto label_25fa0c;
        case 0x25fa10u: goto label_25fa10;
        case 0x25fa14u: goto label_25fa14;
        case 0x25fa18u: goto label_25fa18;
        case 0x25fa1cu: goto label_25fa1c;
        case 0x25fa20u: goto label_25fa20;
        case 0x25fa24u: goto label_25fa24;
        case 0x25fa28u: goto label_25fa28;
        case 0x25fa2cu: goto label_25fa2c;
        case 0x25fa30u: goto label_25fa30;
        case 0x25fa34u: goto label_25fa34;
        case 0x25fa38u: goto label_25fa38;
        case 0x25fa3cu: goto label_25fa3c;
        case 0x25fa40u: goto label_25fa40;
        case 0x25fa44u: goto label_25fa44;
        case 0x25fa48u: goto label_25fa48;
        case 0x25fa4cu: goto label_25fa4c;
        case 0x25fa50u: goto label_25fa50;
        case 0x25fa54u: goto label_25fa54;
        case 0x25fa58u: goto label_25fa58;
        case 0x25fa5cu: goto label_25fa5c;
        case 0x25fa60u: goto label_25fa60;
        case 0x25fa64u: goto label_25fa64;
        case 0x25fa68u: goto label_25fa68;
        case 0x25fa6cu: goto label_25fa6c;
        case 0x25fa70u: goto label_25fa70;
        case 0x25fa74u: goto label_25fa74;
        case 0x25fa78u: goto label_25fa78;
        case 0x25fa7cu: goto label_25fa7c;
        case 0x25fa80u: goto label_25fa80;
        case 0x25fa84u: goto label_25fa84;
        case 0x25fa88u: goto label_25fa88;
        case 0x25fa8cu: goto label_25fa8c;
        case 0x25fa90u: goto label_25fa90;
        case 0x25fa94u: goto label_25fa94;
        case 0x25fa98u: goto label_25fa98;
        case 0x25fa9cu: goto label_25fa9c;
        case 0x25faa0u: goto label_25faa0;
        case 0x25faa4u: goto label_25faa4;
        case 0x25faa8u: goto label_25faa8;
        case 0x25faacu: goto label_25faac;
        case 0x25fab0u: goto label_25fab0;
        case 0x25fab4u: goto label_25fab4;
        case 0x25fab8u: goto label_25fab8;
        case 0x25fabcu: goto label_25fabc;
        case 0x25fac0u: goto label_25fac0;
        case 0x25fac4u: goto label_25fac4;
        case 0x25fac8u: goto label_25fac8;
        case 0x25faccu: goto label_25facc;
        case 0x25fad0u: goto label_25fad0;
        case 0x25fad4u: goto label_25fad4;
        case 0x25fad8u: goto label_25fad8;
        case 0x25fadcu: goto label_25fadc;
        case 0x25fae0u: goto label_25fae0;
        case 0x25fae4u: goto label_25fae4;
        case 0x25fae8u: goto label_25fae8;
        case 0x25faecu: goto label_25faec;
        case 0x25faf0u: goto label_25faf0;
        case 0x25faf4u: goto label_25faf4;
        case 0x25faf8u: goto label_25faf8;
        case 0x25fafcu: goto label_25fafc;
        case 0x25fb00u: goto label_25fb00;
        case 0x25fb04u: goto label_25fb04;
        case 0x25fb08u: goto label_25fb08;
        case 0x25fb0cu: goto label_25fb0c;
        case 0x25fb10u: goto label_25fb10;
        case 0x25fb14u: goto label_25fb14;
        case 0x25fb18u: goto label_25fb18;
        case 0x25fb1cu: goto label_25fb1c;
        case 0x25fb20u: goto label_25fb20;
        case 0x25fb24u: goto label_25fb24;
        case 0x25fb28u: goto label_25fb28;
        case 0x25fb2cu: goto label_25fb2c;
        case 0x25fb30u: goto label_25fb30;
        case 0x25fb34u: goto label_25fb34;
        case 0x25fb38u: goto label_25fb38;
        case 0x25fb3cu: goto label_25fb3c;
        case 0x25fb40u: goto label_25fb40;
        case 0x25fb44u: goto label_25fb44;
        case 0x25fb48u: goto label_25fb48;
        case 0x25fb4cu: goto label_25fb4c;
        case 0x25fb50u: goto label_25fb50;
        case 0x25fb54u: goto label_25fb54;
        case 0x25fb58u: goto label_25fb58;
        case 0x25fb5cu: goto label_25fb5c;
        case 0x25fb60u: goto label_25fb60;
        case 0x25fb64u: goto label_25fb64;
        case 0x25fb68u: goto label_25fb68;
        case 0x25fb6cu: goto label_25fb6c;
        case 0x25fb70u: goto label_25fb70;
        case 0x25fb74u: goto label_25fb74;
        case 0x25fb78u: goto label_25fb78;
        case 0x25fb7cu: goto label_25fb7c;
        case 0x25fb80u: goto label_25fb80;
        case 0x25fb84u: goto label_25fb84;
        case 0x25fb88u: goto label_25fb88;
        case 0x25fb8cu: goto label_25fb8c;
        case 0x25fb90u: goto label_25fb90;
        case 0x25fb94u: goto label_25fb94;
        case 0x25fb98u: goto label_25fb98;
        case 0x25fb9cu: goto label_25fb9c;
        case 0x25fba0u: goto label_25fba0;
        case 0x25fba4u: goto label_25fba4;
        case 0x25fba8u: goto label_25fba8;
        case 0x25fbacu: goto label_25fbac;
        case 0x25fbb0u: goto label_25fbb0;
        case 0x25fbb4u: goto label_25fbb4;
        case 0x25fbb8u: goto label_25fbb8;
        case 0x25fbbcu: goto label_25fbbc;
        case 0x25fbc0u: goto label_25fbc0;
        case 0x25fbc4u: goto label_25fbc4;
        case 0x25fbc8u: goto label_25fbc8;
        case 0x25fbccu: goto label_25fbcc;
        case 0x25fbd0u: goto label_25fbd0;
        case 0x25fbd4u: goto label_25fbd4;
        case 0x25fbd8u: goto label_25fbd8;
        case 0x25fbdcu: goto label_25fbdc;
        case 0x25fbe0u: goto label_25fbe0;
        case 0x25fbe4u: goto label_25fbe4;
        case 0x25fbe8u: goto label_25fbe8;
        case 0x25fbecu: goto label_25fbec;
        case 0x25fbf0u: goto label_25fbf0;
        case 0x25fbf4u: goto label_25fbf4;
        case 0x25fbf8u: goto label_25fbf8;
        case 0x25fbfcu: goto label_25fbfc;
        case 0x25fc00u: goto label_25fc00;
        case 0x25fc04u: goto label_25fc04;
        case 0x25fc08u: goto label_25fc08;
        case 0x25fc0cu: goto label_25fc0c;
        case 0x25fc10u: goto label_25fc10;
        case 0x25fc14u: goto label_25fc14;
        case 0x25fc18u: goto label_25fc18;
        case 0x25fc1cu: goto label_25fc1c;
        case 0x25fc20u: goto label_25fc20;
        case 0x25fc24u: goto label_25fc24;
        case 0x25fc28u: goto label_25fc28;
        case 0x25fc2cu: goto label_25fc2c;
        case 0x25fc30u: goto label_25fc30;
        case 0x25fc34u: goto label_25fc34;
        case 0x25fc38u: goto label_25fc38;
        case 0x25fc3cu: goto label_25fc3c;
        case 0x25fc40u: goto label_25fc40;
        case 0x25fc44u: goto label_25fc44;
        case 0x25fc48u: goto label_25fc48;
        case 0x25fc4cu: goto label_25fc4c;
        case 0x25fc50u: goto label_25fc50;
        case 0x25fc54u: goto label_25fc54;
        case 0x25fc58u: goto label_25fc58;
        case 0x25fc5cu: goto label_25fc5c;
        case 0x25fc60u: goto label_25fc60;
        case 0x25fc64u: goto label_25fc64;
        case 0x25fc68u: goto label_25fc68;
        case 0x25fc6cu: goto label_25fc6c;
        case 0x25fc70u: goto label_25fc70;
        case 0x25fc74u: goto label_25fc74;
        case 0x25fc78u: goto label_25fc78;
        case 0x25fc7cu: goto label_25fc7c;
        case 0x25fc80u: goto label_25fc80;
        case 0x25fc84u: goto label_25fc84;
        case 0x25fc88u: goto label_25fc88;
        case 0x25fc8cu: goto label_25fc8c;
        case 0x25fc90u: goto label_25fc90;
        case 0x25fc94u: goto label_25fc94;
        case 0x25fc98u: goto label_25fc98;
        case 0x25fc9cu: goto label_25fc9c;
        case 0x25fca0u: goto label_25fca0;
        case 0x25fca4u: goto label_25fca4;
        case 0x25fca8u: goto label_25fca8;
        case 0x25fcacu: goto label_25fcac;
        case 0x25fcb0u: goto label_25fcb0;
        case 0x25fcb4u: goto label_25fcb4;
        case 0x25fcb8u: goto label_25fcb8;
        case 0x25fcbcu: goto label_25fcbc;
        case 0x25fcc0u: goto label_25fcc0;
        case 0x25fcc4u: goto label_25fcc4;
        case 0x25fcc8u: goto label_25fcc8;
        case 0x25fcccu: goto label_25fccc;
        case 0x25fcd0u: goto label_25fcd0;
        case 0x25fcd4u: goto label_25fcd4;
        case 0x25fcd8u: goto label_25fcd8;
        case 0x25fcdcu: goto label_25fcdc;
        case 0x25fce0u: goto label_25fce0;
        case 0x25fce4u: goto label_25fce4;
        case 0x25fce8u: goto label_25fce8;
        case 0x25fcecu: goto label_25fcec;
        case 0x25fcf0u: goto label_25fcf0;
        case 0x25fcf4u: goto label_25fcf4;
        case 0x25fcf8u: goto label_25fcf8;
        case 0x25fcfcu: goto label_25fcfc;
        case 0x25fd00u: goto label_25fd00;
        case 0x25fd04u: goto label_25fd04;
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
        default: return;
    }

label_25f918:
    // 0x25f918: 0x0  nop
    ctx->pc = 0x25f918u;
    // NOP
label_25f91c:
    // 0x25f91c: 0x0  nop
    ctx->pc = 0x25f91cu;
    // NOP
label_25f920:
    // 0x25f920: 0x9bbb  dsra        $s3, $zero, 14
    ctx->pc = 0x25f920u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 0) >> 14);
label_25f924:
    // 0x25f924: 0xe330  tge         $zero, $zero, 908
    ctx->pc = 0x25f924u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25f928:
    // 0x25f928: 0x0  nop
    ctx->pc = 0x25f928u;
    // NOP
label_25f92c:
    // 0x25f92c: 0x0  nop
    ctx->pc = 0x25f92cu;
    // NOP
label_25f930:
    // 0x25f930: 0x9bd8  .word       0x00009BD8                   # mult        $s3, $zero, $zero # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25f930u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_25f934:
    // 0x25f934: 0xe470  tge         $zero, $zero, 913
    ctx->pc = 0x25f934u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25f938:
    // 0x25f938: 0x0  nop
    ctx->pc = 0x25f938u;
    // NOP
label_25f93c:
    // 0x25f93c: 0x0  nop
    ctx->pc = 0x25f93cu;
    // NOP
label_25f940:
    // 0x25f940: 0x9bf5  .word       0x00009BF5                   # INVALID     $zero, $zero, -0x640B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f940u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25F940 raw=0x00009BF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25f944:
    // 0x25f944: 0xb920  .word       0x0000B920                   # add         $s7, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f944u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_25f948:
    // 0x25f948: 0x0  nop
    ctx->pc = 0x25f948u;
    // NOP
label_25f94c:
    // 0x25f94c: 0x0  nop
    ctx->pc = 0x25f94cu;
    // NOP
label_25f950:
    // 0x25f950: 0x9c0d  break       0, 624
    ctx->pc = 0x25f950u;
    runtime->handleBreak(rdram, ctx);
label_25f954:
    // 0x25f954: 0xf470  tge         $zero, $zero, 977
    ctx->pc = 0x25f954u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25f958:
    // 0x25f958: 0x0  nop
    ctx->pc = 0x25f958u;
    // NOP
label_25f95c:
    // 0x25f95c: 0x0  nop
    ctx->pc = 0x25f95cu;
    // NOP
label_25f960:
    // 0x25f960: 0x9c2c  .word       0x00009C2C                   # dadd        $s3, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f960u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, r); }
label_25f964:
    // 0x25f964: 0xd690  .word       0x0000D690                   # mfhi        $k0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f964u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_25f968:
    // 0x25f968: 0x0  nop
    ctx->pc = 0x25f968u;
    // NOP
label_25f96c:
    // 0x25f96c: 0x0  nop
    ctx->pc = 0x25f96cu;
    // NOP
label_25f970:
    // 0x25f970: 0x9c47  .word       0x00009C47                   # srav        $s3, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f970u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25f974:
    // 0x25f974: 0xccc0  sll         $t9, $zero, 19
    ctx->pc = 0x25f974u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25f978:
    // 0x25f978: 0x0  nop
    ctx->pc = 0x25f978u;
    // NOP
label_25f97c:
    // 0x25f97c: 0x0  nop
    ctx->pc = 0x25f97cu;
    // NOP
label_25f980:
    // 0x25f980: 0x9c61  .word       0x00009C61                   # addu        $s3, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f980u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25f984:
    // 0x25f984: 0xbee0  .word       0x0000BEE0                   # add         $s7, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f984u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_25f988:
    // 0x25f988: 0x0  nop
    ctx->pc = 0x25f988u;
    // NOP
label_25f98c:
    // 0x25f98c: 0x0  nop
    ctx->pc = 0x25f98cu;
    // NOP
label_25f990:
    // 0x25f990: 0x9c79  .word       0x00009C79                   # INVALID     $zero, $zero, -0x6387 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f990u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x25F990 raw=0x00009C79"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25f994:
    // 0x25f994: 0xe7c0  sll         $gp, $zero, 31
    ctx->pc = 0x25f994u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_25f998:
    // 0x25f998: 0x0  nop
    ctx->pc = 0x25f998u;
    // NOP
label_25f99c:
    // 0x25f99c: 0x0  nop
    ctx->pc = 0x25f99cu;
    // NOP
label_25f9a0:
    // 0x25f9a0: 0x9c96  .word       0x00009C96                   # dsrlv       $s3, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f9a0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25f9a4:
    // 0x25f9a4: 0xe200  sll         $gp, $zero, 8
    ctx->pc = 0x25f9a4u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_25f9a8:
    // 0x25f9a8: 0x0  nop
    ctx->pc = 0x25f9a8u;
    // NOP
label_25f9ac:
    // 0x25f9ac: 0x0  nop
    ctx->pc = 0x25f9acu;
    // NOP
label_25f9b0:
    // 0x25f9b0: 0x9cb3  tltu        $zero, $zero, 626
    ctx->pc = 0x25f9b0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25f9b4:
    // 0x25f9b4: 0xd400  sll         $k0, $zero, 16
    ctx->pc = 0x25f9b4u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_25f9b8:
    // 0x25f9b8: 0x0  nop
    ctx->pc = 0x25f9b8u;
    // NOP
label_25f9bc:
    // 0x25f9bc: 0x0  nop
    ctx->pc = 0x25f9bcu;
    // NOP
label_25f9c0:
    // 0x25f9c0: 0x9cce  .word       0x00009CCE                   # INVALID     $zero, $zero, -0x6332 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f9c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25F9C0 raw=0x00009CCE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25f9c4:
    // 0x25f9c4: 0xd400  sll         $k0, $zero, 16
    ctx->pc = 0x25f9c4u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_25f9c8:
    // 0x25f9c8: 0x0  nop
    ctx->pc = 0x25f9c8u;
    // NOP
label_25f9cc:
    // 0x25f9cc: 0x0  nop
    ctx->pc = 0x25f9ccu;
    // NOP
label_25f9d0:
    // 0x25f9d0: 0x9ce9  .word       0x00009CE9                   # mtsa        $zero # 00009CC0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25f9d0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25f9d4:
    // 0x25f9d4: 0xddd0  .word       0x0000DDD0                   # mfhi        $k1 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f9d4u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_25f9d8:
    // 0x25f9d8: 0x0  nop
    ctx->pc = 0x25f9d8u;
    // NOP
label_25f9dc:
    // 0x25f9dc: 0x0  nop
    ctx->pc = 0x25f9dcu;
    // NOP
label_25f9e0:
    // 0x25f9e0: 0x9d05  .word       0x00009D05                   # INVALID     $zero, $zero, -0x62FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f9e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25F9E0 raw=0x00009D05"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25f9e4:
    // 0x25f9e4: 0xcbc0  sll         $t9, $zero, 15
    ctx->pc = 0x25f9e4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_25f9e8:
    // 0x25f9e8: 0x0  nop
    ctx->pc = 0x25f9e8u;
    // NOP
label_25f9ec:
    // 0x25f9ec: 0x0  nop
    ctx->pc = 0x25f9ecu;
    // NOP
label_25f9f0:
    // 0x25f9f0: 0x9d1f  .word       0x00009D1F                   # ddivu       $s3, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f9f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25F9F0 raw=0x00009D1F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25f9f4:
    // 0x25f9f4: 0xdb90  .word       0x0000DB90                   # mfhi        $k1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f9f4u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_25f9f8:
    // 0x25f9f8: 0x0  nop
    ctx->pc = 0x25f9f8u;
    // NOP
label_25f9fc:
    // 0x25f9fc: 0x0  nop
    ctx->pc = 0x25f9fcu;
    // NOP
label_25fa00:
    // 0x25fa00: 0x9d3b  dsra        $s3, $zero, 20
    ctx->pc = 0x25fa00u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 0) >> 20);
label_25fa04:
    // 0x25fa04: 0xdf50  .word       0x0000DF50                   # mfhi        $k1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fa04u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_25fa08:
    // 0x25fa08: 0x0  nop
    ctx->pc = 0x25fa08u;
    // NOP
label_25fa0c:
    // 0x25fa0c: 0x0  nop
    ctx->pc = 0x25fa0cu;
    // NOP
label_25fa10:
    // 0x25fa10: 0x9d57  .word       0x00009D57                   # dsrav       $s3, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fa10u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25fa14:
    // 0x25fa14: 0xcb00  sll         $t9, $zero, 12
    ctx->pc = 0x25fa14u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_25fa18:
    // 0x25fa18: 0x0  nop
    ctx->pc = 0x25fa18u;
    // NOP
label_25fa1c:
    // 0x25fa1c: 0x0  nop
    ctx->pc = 0x25fa1cu;
    // NOP
label_25fa20:
    // 0x25fa20: 0x9d71  tgeu        $zero, $zero, 629
    ctx->pc = 0x25fa20u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25fa24:
    // 0x25fa24: 0xe250  .word       0x0000E250                   # mfhi        $gp # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fa24u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_25fa28:
    // 0x25fa28: 0x0  nop
    ctx->pc = 0x25fa28u;
    // NOP
label_25fa2c:
    // 0x25fa2c: 0x0  nop
    ctx->pc = 0x25fa2cu;
    // NOP
label_25fa30:
    // 0x25fa30: 0x9d8e  .word       0x00009D8E                   # INVALID     $zero, $zero, -0x6272 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fa30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25FA30 raw=0x00009D8E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25fa34:
    // 0x25fa34: 0xc550  .word       0x0000C550                   # mfhi        $t8 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fa34u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_25fa38:
    // 0x25fa38: 0x0  nop
    ctx->pc = 0x25fa38u;
    // NOP
label_25fa3c:
    // 0x25fa3c: 0x0  nop
    ctx->pc = 0x25fa3cu;
    // NOP
label_25fa40:
    // 0x25fa40: 0x9da7  .word       0x00009DA7                   # not         $s3, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fa40u;
    SET_GPR_U64(ctx, 19, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_25fa44:
    // 0x25fa44: 0xfe70  tge         $zero, $zero, 1017
    ctx->pc = 0x25fa44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25fa48:
    // 0x25fa48: 0x0  nop
    ctx->pc = 0x25fa48u;
    // NOP
label_25fa4c:
    // 0x25fa4c: 0x0  nop
    ctx->pc = 0x25fa4cu;
    // NOP
label_25fa50:
    // 0x25fa50: 0x9dc7  .word       0x00009DC7                   # srav        $s3, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fa50u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25fa54:
    // 0x25fa54: 0xce00  sll         $t9, $zero, 24
    ctx->pc = 0x25fa54u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_25fa58:
    // 0x25fa58: 0x0  nop
    ctx->pc = 0x25fa58u;
    // NOP
label_25fa5c:
    // 0x25fa5c: 0x0  nop
    ctx->pc = 0x25fa5cu;
    // NOP
label_25fa60:
    // 0x25fa60: 0x9de1  .word       0x00009DE1                   # addu        $s3, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fa60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25fa64:
    // 0x25fa64: 0xd9c0  sll         $k1, $zero, 7
    ctx->pc = 0x25fa64u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_25fa68:
    // 0x25fa68: 0x0  nop
    ctx->pc = 0x25fa68u;
    // NOP
label_25fa6c:
    // 0x25fa6c: 0x0  nop
    ctx->pc = 0x25fa6cu;
    // NOP
label_25fa70:
    // 0x25fa70: 0x9dfd  .word       0x00009DFD                   # INVALID     $zero, $zero, -0x6203 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fa70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x25FA70 raw=0x00009DFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25fa74:
    // 0x25fa74: 0xd390  .word       0x0000D390                   # mfhi        $k0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fa74u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_25fa78:
    // 0x25fa78: 0x0  nop
    ctx->pc = 0x25fa78u;
    // NOP
label_25fa7c:
    // 0x25fa7c: 0x0  nop
    ctx->pc = 0x25fa7cu;
    // NOP
label_25fa80:
    // 0x25fa80: 0x9e18  .word       0x00009E18                   # mult        $s3, $zero, $zero # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25fa80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_25fa84:
    // 0x25fa84: 0xeaa0  .word       0x0000EAA0                   # add         $sp, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fa84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_25fa88:
    // 0x25fa88: 0x0  nop
    ctx->pc = 0x25fa88u;
    // NOP
label_25fa8c:
    // 0x25fa8c: 0x0  nop
    ctx->pc = 0x25fa8cu;
    // NOP
label_25fa90:
    // 0x25fa90: 0x9e36  tne         $zero, $zero, 632
    ctx->pc = 0x25fa90u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25fa94:
    // 0x25fa94: 0xca90  .word       0x0000CA90                   # mfhi        $t9 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fa94u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_25fa98:
    // 0x25fa98: 0x0  nop
    ctx->pc = 0x25fa98u;
    // NOP
label_25fa9c:
    // 0x25fa9c: 0x0  nop
    ctx->pc = 0x25fa9cu;
    // NOP
label_25faa0:
    // 0x25faa0: 0x9e50  .word       0x00009E50                   # mfhi        $s3 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25faa0u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_25faa4:
    // 0x25faa4: 0x9280  sll         $s2, $zero, 10
    ctx->pc = 0x25faa4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_25faa8:
    // 0x25faa8: 0x0  nop
    ctx->pc = 0x25faa8u;
    // NOP
label_25faac:
    // 0x25faac: 0x0  nop
    ctx->pc = 0x25faacu;
    // NOP
label_25fab0:
    // 0x25fab0: 0x9e63  .word       0x00009E63                   # negu        $s3, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fab0u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25fab4:
    // 0x25fab4: 0x11800  sll         $v1, $at, 0
    ctx->pc = 0x25fab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
label_25fab8:
    // 0x25fab8: 0x0  nop
    ctx->pc = 0x25fab8u;
    // NOP
label_25fabc:
    // 0x25fabc: 0x0  nop
    ctx->pc = 0x25fabcu;
    // NOP
label_25fac0:
    // 0x25fac0: 0x9e86  .word       0x00009E86                   # srlv        $s3, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fac0u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25fac4:
    // 0x25fac4: 0xe9e0  .word       0x0000E9E0                   # add         $sp, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fac4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_25fac8:
    // 0x25fac8: 0x0  nop
    ctx->pc = 0x25fac8u;
    // NOP
label_25facc:
    // 0x25facc: 0x0  nop
    ctx->pc = 0x25faccu;
    // NOP
label_25fad0:
    // 0x25fad0: 0x9ea4  .word       0x00009EA4                   # and         $s3, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fad0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_25fad4:
    // 0x25fad4: 0xfb90  .word       0x0000FB90                   # mfhi        $ra # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fad4u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_25fad8:
    // 0x25fad8: 0x0  nop
    ctx->pc = 0x25fad8u;
    // NOP
label_25fadc:
    // 0x25fadc: 0x0  nop
    ctx->pc = 0x25fadcu;
    // NOP
label_25fae0:
    // 0x25fae0: 0x9ec4  .word       0x00009EC4                   # sllv        $s3, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fae0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25fae4:
    // 0x25fae4: 0xe190  .word       0x0000E190                   # mfhi        $gp # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fae4u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_25fae8:
    // 0x25fae8: 0x0  nop
    ctx->pc = 0x25fae8u;
    // NOP
label_25faec:
    // 0x25faec: 0x0  nop
    ctx->pc = 0x25faecu;
    // NOP
label_25faf0:
    // 0x25faf0: 0x9ee1  .word       0x00009EE1                   # addu        $s3, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25faf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25faf4:
    // 0x25faf4: 0xcbb0  tge         $zero, $zero, 814
    ctx->pc = 0x25faf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25faf8:
    // 0x25faf8: 0x0  nop
    ctx->pc = 0x25faf8u;
    // NOP
label_25fafc:
    // 0x25fafc: 0x0  nop
    ctx->pc = 0x25fafcu;
    // NOP
label_25fb00:
    // 0x25fb00: 0x9efb  dsra        $s3, $zero, 27
    ctx->pc = 0x25fb00u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 0) >> 27);
label_25fb04:
    // 0x25fb04: 0xdc70  tge         $zero, $zero, 881
    ctx->pc = 0x25fb04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25fb08:
    // 0x25fb08: 0x0  nop
    ctx->pc = 0x25fb08u;
    // NOP
label_25fb0c:
    // 0x25fb0c: 0x0  nop
    ctx->pc = 0x25fb0cu;
    // NOP
label_25fb10:
    // 0x25fb10: 0x9f17  .word       0x00009F17                   # dsrav       $s3, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fb10u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25fb14:
    // 0x25fb14: 0xe780  sll         $gp, $zero, 30
    ctx->pc = 0x25fb14u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_25fb18:
    // 0x25fb18: 0x0  nop
    ctx->pc = 0x25fb18u;
    // NOP
label_25fb1c:
    // 0x25fb1c: 0x0  nop
    ctx->pc = 0x25fb1cu;
    // NOP
label_25fb20:
    // 0x25fb20: 0x9f34  teq         $zero, $zero, 636
    ctx->pc = 0x25fb20u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25fb24:
    // 0x25fb24: 0x64f0  tge         $zero, $zero, 403
    ctx->pc = 0x25fb24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25fb28:
    // 0x25fb28: 0x0  nop
    ctx->pc = 0x25fb28u;
    // NOP
label_25fb2c:
    // 0x25fb2c: 0x0  nop
    ctx->pc = 0x25fb2cu;
    // NOP
label_25fb30:
    // 0x25fb30: 0x9f41  .word       0x00009F41                   # INVALID     $zero, $zero, -0x60BF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fb30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25FB30 raw=0x00009F41"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25fb34:
    // 0x25fb34: 0x5580  sll         $t2, $zero, 22
    ctx->pc = 0x25fb34u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_25fb38:
    // 0x25fb38: 0x0  nop
    ctx->pc = 0x25fb38u;
    // NOP
label_25fb3c:
    // 0x25fb3c: 0x0  nop
    ctx->pc = 0x25fb3cu;
    // NOP
label_25fb40:
    // 0x25fb40: 0x9f4c  syscall     637
    ctx->pc = 0x25fb40u;
    ctx->pc = 0x25FB44u;
runtime->handleSyscall(rdram, ctx, 0x27Du);
label_25fb44:
    // 0x25fb44: 0x3910  .word       0x00003910                   # mfhi        $a3 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fb44u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_25fb48:
    // 0x25fb48: 0x0  nop
    ctx->pc = 0x25fb48u;
    // NOP
label_25fb4c:
    // 0x25fb4c: 0x0  nop
    ctx->pc = 0x25fb4cu;
    // NOP
label_25fb50:
    // 0x25fb50: 0x9f54  .word       0x00009F54                   # dsllv       $s3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fb50u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_25fb54:
    // 0x25fb54: 0x2ae0  .word       0x00002AE0                   # add         $a1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fb54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_25fb58:
    // 0x25fb58: 0x0  nop
    ctx->pc = 0x25fb58u;
    // NOP
label_25fb5c:
    // 0x25fb5c: 0x0  nop
    ctx->pc = 0x25fb5cu;
    // NOP
label_25fb60:
    // 0x25fb60: 0x9f5a  .word       0x00009F5A                   # div         $s3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fb60u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25fb64:
    // 0x25fb64: 0x3400  sll         $a2, $zero, 16
    ctx->pc = 0x25fb64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_25fb68:
    // 0x25fb68: 0x0  nop
    ctx->pc = 0x25fb68u;
    // NOP
label_25fb6c:
    // 0x25fb6c: 0x0  nop
    ctx->pc = 0x25fb6cu;
    // NOP
label_25fb70:
    // 0x25fb70: 0x9f61  .word       0x00009F61                   # addu        $s3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fb70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25fb74:
    // 0x25fb74: 0x3fc0  sll         $a3, $zero, 31
    ctx->pc = 0x25fb74u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_25fb78:
    // 0x25fb78: 0x0  nop
    ctx->pc = 0x25fb78u;
    // NOP
label_25fb7c:
    // 0x25fb7c: 0x0  nop
    ctx->pc = 0x25fb7cu;
    // NOP
label_25fb80:
    // 0x25fb80: 0x9f69  .word       0x00009F69                   # mtsa        $zero # 00009F40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25fb80u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25fb84:
    // 0x25fb84: 0x5060  .word       0x00005060                   # add         $t2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fb84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_25fb88:
    // 0x25fb88: 0x0  nop
    ctx->pc = 0x25fb88u;
    // NOP
label_25fb8c:
    // 0x25fb8c: 0x0  nop
    ctx->pc = 0x25fb8cu;
    // NOP
label_25fb90:
    // 0x25fb90: 0x9f74  teq         $zero, $zero, 637
    ctx->pc = 0x25fb90u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25fb94:
    // 0x25fb94: 0x7b20  .word       0x00007B20                   # add         $t7, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fb94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25fb98:
    // 0x25fb98: 0x0  nop
    ctx->pc = 0x25fb98u;
    // NOP
label_25fb9c:
    // 0x25fb9c: 0x0  nop
    ctx->pc = 0x25fb9cu;
    // NOP
label_25fba0:
    // 0x25fba0: 0x9f84  .word       0x00009F84                   # sllv        $s3, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fba0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25fba4:
    // 0x25fba4: 0x9470  tge         $zero, $zero, 593
    ctx->pc = 0x25fba4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25fba8:
    // 0x25fba8: 0x0  nop
    ctx->pc = 0x25fba8u;
    // NOP
label_25fbac:
    // 0x25fbac: 0x0  nop
    ctx->pc = 0x25fbacu;
    // NOP
label_25fbb0:
    // 0x25fbb0: 0x9f97  .word       0x00009F97                   # dsrav       $s3, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fbb0u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25fbb4:
    // 0x25fbb4: 0x74a0  .word       0x000074A0                   # add         $t6, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fbb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25fbb8:
    // 0x25fbb8: 0x0  nop
    ctx->pc = 0x25fbb8u;
    // NOP
label_25fbbc:
    // 0x25fbbc: 0x0  nop
    ctx->pc = 0x25fbbcu;
    // NOP
label_25fbc0:
    // 0x25fbc0: 0x9fa6  .word       0x00009FA6                   # xor         $s3, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fbc0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25fbc4:
    // 0x25fbc4: 0x7300  sll         $t6, $zero, 12
    ctx->pc = 0x25fbc4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_25fbc8:
    // 0x25fbc8: 0x0  nop
    ctx->pc = 0x25fbc8u;
    // NOP
label_25fbcc:
    // 0x25fbcc: 0x0  nop
    ctx->pc = 0x25fbccu;
    // NOP
label_25fbd0:
    // 0x25fbd0: 0x9fb5  .word       0x00009FB5                   # INVALID     $zero, $zero, -0x604B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fbd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25FBD0 raw=0x00009FB5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25fbd4:
    // 0x25fbd4: 0x40e0  .word       0x000040E0                   # add         $t0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fbd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_25fbd8:
    // 0x25fbd8: 0x0  nop
    ctx->pc = 0x25fbd8u;
    // NOP
label_25fbdc:
    // 0x25fbdc: 0x0  nop
    ctx->pc = 0x25fbdcu;
    // NOP
label_25fbe0:
    // 0x25fbe0: 0x9fbe  dsrl32      $s3, $zero, 30
    ctx->pc = 0x25fbe0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) >> (32 + 30));
label_25fbe4:
    // 0x25fbe4: 0x52f0  tge         $zero, $zero, 331
    ctx->pc = 0x25fbe4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25fbe8:
    // 0x25fbe8: 0x0  nop
    ctx->pc = 0x25fbe8u;
    // NOP
label_25fbec:
    // 0x25fbec: 0x0  nop
    ctx->pc = 0x25fbecu;
    // NOP
label_25fbf0:
    // 0x25fbf0: 0x9fc9  .word       0x00009FC9                   # jalr        $s3, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
label_25fbf4:
    if (ctx->pc == 0x25FBF4u) {
        ctx->pc = 0x25FBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FBF0u;
        // 0x25fbf4: 0x7f70  tge         $zero, $zero, 509 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FBF8u;
        goto label_25fbf8;
    }
    ctx->pc = 0x25FBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 19, 0x25FBF8u);
        ctx->pc = 0x25FBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FBF0u;
        // 0x25fbf4: 0x7f70  tge         $zero, $zero, 509 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FBF0u, 0x25FBF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25FBF8u;
label_25fbf8:
    // 0x25fbf8: 0x0  nop
    ctx->pc = 0x25fbf8u;
    // NOP
label_25fbfc:
    // 0x25fbfc: 0x0  nop
    ctx->pc = 0x25fbfcu;
    // NOP
label_25fc00:
    // 0x25fc00: 0x9fd9  .word       0x00009FD9                   # multu       $zero, $zero # 00009FC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fc00u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_25fc04:
    // 0x25fc04: 0x4670  tge         $zero, $zero, 281
    ctx->pc = 0x25fc04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25fc08:
    // 0x25fc08: 0x0  nop
    ctx->pc = 0x25fc08u;
    // NOP
label_25fc0c:
    // 0x25fc0c: 0x0  nop
    ctx->pc = 0x25fc0cu;
    // NOP
label_25fc10:
    // 0x25fc10: 0x9fe2  .word       0x00009FE2                   # neg         $s3, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fc10u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_25fc14:
    // 0x25fc14: 0x5590  .word       0x00005590                   # mfhi        $t2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fc14u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_25fc18:
    // 0x25fc18: 0x0  nop
    ctx->pc = 0x25fc18u;
    // NOP
label_25fc1c:
    // 0x25fc1c: 0x0  nop
    ctx->pc = 0x25fc1cu;
    // NOP
label_25fc20:
    // 0x25fc20: 0x9fed  .word       0x00009FED                   # daddu       $s3, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fc20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25fc24:
    // 0x25fc24: 0x5e00  sll         $t3, $zero, 24
    ctx->pc = 0x25fc24u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_25fc28:
    // 0x25fc28: 0x0  nop
    ctx->pc = 0x25fc28u;
    // NOP
label_25fc2c:
    // 0x25fc2c: 0x0  nop
    ctx->pc = 0x25fc2cu;
    // NOP
label_25fc30:
    // 0x25fc30: 0x9ff9  .word       0x00009FF9                   # INVALID     $zero, $zero, -0x6007 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fc30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x25FC30 raw=0x00009FF9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25fc34:
    // 0x25fc34: 0x37c0  sll         $a2, $zero, 31
    ctx->pc = 0x25fc34u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_25fc38:
    // 0x25fc38: 0x0  nop
    ctx->pc = 0x25fc38u;
    // NOP
label_25fc3c:
    // 0x25fc3c: 0x0  nop
    ctx->pc = 0x25fc3cu;
    // NOP
label_25fc40:
    // 0x25fc40: 0xa000  sll         $s4, $zero, 0
    ctx->pc = 0x25fc40u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_25fc44:
    // 0x25fc44: 0x6cf0  tge         $zero, $zero, 435
    ctx->pc = 0x25fc44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25fc48:
    // 0x25fc48: 0x0  nop
    ctx->pc = 0x25fc48u;
    // NOP
label_25fc4c:
    // 0x25fc4c: 0x0  nop
    ctx->pc = 0x25fc4cu;
    // NOP
label_25fc50:
    // 0x25fc50: 0xa00e  .word       0x0000A00E                   # INVALID     $zero, $zero, -0x5FF2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fc50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25FC50 raw=0x0000A00E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25fc54:
    // 0x25fc54: 0x85f0  tge         $zero, $zero, 535
    ctx->pc = 0x25fc54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25fc58:
    // 0x25fc58: 0x0  nop
    ctx->pc = 0x25fc58u;
    // NOP
label_25fc5c:
    // 0x25fc5c: 0x0  nop
    ctx->pc = 0x25fc5cu;
    // NOP
label_25fc60:
    // 0x25fc60: 0xa01f  ddivu       $s4, $zero, $zero
    ctx->pc = 0x25fc60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25FC60 raw=0x0000A01F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25fc64:
    // 0x25fc64: 0x6be0  .word       0x00006BE0                   # add         $t5, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fc64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_25fc68:
    // 0x25fc68: 0x0  nop
    ctx->pc = 0x25fc68u;
    // NOP
label_25fc6c:
    // 0x25fc6c: 0x0  nop
    ctx->pc = 0x25fc6cu;
    // NOP
label_25fc70:
    // 0x25fc70: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x25fc70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25fc74:
    // 0x25fc74: 0x3ae0  .word       0x00003AE0                   # add         $a3, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fc74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_25fc78:
    // 0x25fc78: 0x0  nop
    ctx->pc = 0x25fc78u;
    // NOP
label_25fc7c:
    // 0x25fc7c: 0x0  nop
    ctx->pc = 0x25fc7cu;
    // NOP
label_25fc80:
    // 0x25fc80: 0xa035  .word       0x0000A035                   # INVALID     $zero, $zero, -0x5FCB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fc80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25FC80 raw=0x0000A035"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25fc84:
    // 0x25fc84: 0x3f90  .word       0x00003F90                   # mfhi        $a3 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fc84u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_25fc88:
    // 0x25fc88: 0x0  nop
    ctx->pc = 0x25fc88u;
    // NOP
label_25fc8c:
    // 0x25fc8c: 0x0  nop
    ctx->pc = 0x25fc8cu;
    // NOP
label_25fc90:
    // 0x25fc90: 0xa03d  .word       0x0000A03D                   # INVALID     $zero, $zero, -0x5FC3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fc90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x25FC90 raw=0x0000A03D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25fc94:
    // 0x25fc94: 0x55e0  .word       0x000055E0                   # add         $t2, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fc94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_25fc98:
    // 0x25fc98: 0x0  nop
    ctx->pc = 0x25fc98u;
    // NOP
label_25fc9c:
    // 0x25fc9c: 0x0  nop
    ctx->pc = 0x25fc9cu;
    // NOP
label_25fca0:
    // 0x25fca0: 0xa048  .word       0x0000A048                   # jr          $zero # 0000A040 <InstrIdType: CPU_SPECIAL>
label_25fca4:
    if (ctx->pc == 0x25FCA4u) {
        ctx->pc = 0x25FCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FCA0u;
        // 0x25fca4: 0x4670  tge         $zero, $zero, 281 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FCA8u;
        goto label_25fca8;
    }
    ctx->pc = 0x25FCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x25FCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FCA0u;
        // 0x25fca4: 0x4670  tge         $zero, $zero, 281 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FCA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25FCA8u;
label_25fca8:
    // 0x25fca8: 0x0  nop
    ctx->pc = 0x25fca8u;
    // NOP
label_25fcac:
    // 0x25fcac: 0x0  nop
    ctx->pc = 0x25fcacu;
    // NOP
label_25fcb0:
    // 0x25fcb0: 0xa051  .word       0x0000A051                   # mthi        $zero # 0000A040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fcb0u;
    ctx->hi = GPR_U64(ctx, 0);
label_25fcb4:
    // 0x25fcb4: 0x3850  .word       0x00003850                   # mfhi        $a3 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fcb4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_25fcb8:
    // 0x25fcb8: 0x0  nop
    ctx->pc = 0x25fcb8u;
    // NOP
label_25fcbc:
    // 0x25fcbc: 0x0  nop
    ctx->pc = 0x25fcbcu;
    // NOP
label_25fcc0:
    // 0x25fcc0: 0xa059  .word       0x0000A059                   # multu       $zero, $zero # 0000A040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fcc0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
label_25fcc4:
    // 0x25fcc4: 0x77e0  .word       0x000077E0                   # add         $t6, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fcc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25fcc8:
    // 0x25fcc8: 0x0  nop
    ctx->pc = 0x25fcc8u;
    // NOP
label_25fccc:
    // 0x25fccc: 0x0  nop
    ctx->pc = 0x25fcccu;
    // NOP
label_25fcd0:
    // 0x25fcd0: 0xa068  .word       0x0000A068                   # mfsa        $s4 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25fcd0u;
    SET_GPR_U32(ctx, 20, ctx->sa);
label_25fcd4:
    // 0x25fcd4: 0x6170  tge         $zero, $zero, 389
    ctx->pc = 0x25fcd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25fcd8:
    // 0x25fcd8: 0x0  nop
    ctx->pc = 0x25fcd8u;
    // NOP
label_25fcdc:
    // 0x25fcdc: 0x0  nop
    ctx->pc = 0x25fcdcu;
    // NOP
label_25fce0:
    // 0x25fce0: 0xa075  .word       0x0000A075                   # INVALID     $zero, $zero, -0x5F8B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fce0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25FCE0 raw=0x0000A075"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25fce4:
    // 0x25fce4: 0x6370  tge         $zero, $zero, 397
    ctx->pc = 0x25fce4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25fce8:
    // 0x25fce8: 0x0  nop
    ctx->pc = 0x25fce8u;
    // NOP
label_25fcec:
    // 0x25fcec: 0x0  nop
    ctx->pc = 0x25fcecu;
    // NOP
label_25fcf0:
    // 0x25fcf0: 0xa082  srl         $s4, $zero, 2
    ctx->pc = 0x25fcf0u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
label_25fcf4:
    // 0x25fcf4: 0x2ce0  .word       0x00002CE0                   # add         $a1, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fcf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_25fcf8:
    // 0x25fcf8: 0x0  nop
    ctx->pc = 0x25fcf8u;
    // NOP
label_25fcfc:
    // 0x25fcfc: 0x0  nop
    ctx->pc = 0x25fcfcu;
    // NOP
label_25fd00:
    // 0x25fd00: 0xa088  .word       0x0000A088                   # jr          $zero # 0000A080 <InstrIdType: CPU_SPECIAL>
label_25fd04:
    if (ctx->pc == 0x25FD04u) {
        ctx->pc = 0x25FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD00u;
        // 0x25fd04: 0x64e0  .word       0x000064E0                   # add         $t4, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FD08u;
        goto label_25fd08;
    }
    ctx->pc = 0x25FD00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x25FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD00u;
        // 0x25fd04: 0x64e0  .word       0x000064E0                   # add         $t4, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FD00u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25FD08u;
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
    ctx->pc = 0x2600e8u;
    return;
}
