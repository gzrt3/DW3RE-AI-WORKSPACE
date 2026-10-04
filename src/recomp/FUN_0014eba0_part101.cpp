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


void FUN_0014eba0_part101(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x17f8e0u: goto label_17f8e0;
        case 0x17f8e4u: goto label_17f8e4;
        case 0x17f8e8u: goto label_17f8e8;
        case 0x17f8ecu: goto label_17f8ec;
        case 0x17f8f0u: goto label_17f8f0;
        case 0x17f8f4u: goto label_17f8f4;
        case 0x17f8f8u: goto label_17f8f8;
        case 0x17f8fcu: goto label_17f8fc;
        case 0x17f900u: goto label_17f900;
        case 0x17f904u: goto label_17f904;
        case 0x17f908u: goto label_17f908;
        case 0x17f90cu: goto label_17f90c;
        case 0x17f910u: goto label_17f910;
        case 0x17f914u: goto label_17f914;
        case 0x17f918u: goto label_17f918;
        case 0x17f91cu: goto label_17f91c;
        case 0x17f920u: goto label_17f920;
        case 0x17f924u: goto label_17f924;
        case 0x17f928u: goto label_17f928;
        case 0x17f92cu: goto label_17f92c;
        case 0x17f930u: goto label_17f930;
        case 0x17f934u: goto label_17f934;
        case 0x17f938u: goto label_17f938;
        case 0x17f93cu: goto label_17f93c;
        case 0x17f940u: goto label_17f940;
        case 0x17f944u: goto label_17f944;
        case 0x17f948u: goto label_17f948;
        case 0x17f94cu: goto label_17f94c;
        case 0x17f950u: goto label_17f950;
        case 0x17f954u: goto label_17f954;
        case 0x17f958u: goto label_17f958;
        case 0x17f95cu: goto label_17f95c;
        case 0x17f960u: goto label_17f960;
        case 0x17f964u: goto label_17f964;
        case 0x17f968u: goto label_17f968;
        case 0x17f96cu: goto label_17f96c;
        case 0x17f970u: goto label_17f970;
        case 0x17f974u: goto label_17f974;
        case 0x17f978u: goto label_17f978;
        case 0x17f97cu: goto label_17f97c;
        case 0x17f980u: goto label_17f980;
        case 0x17f984u: goto label_17f984;
        case 0x17f988u: goto label_17f988;
        case 0x17f98cu: goto label_17f98c;
        case 0x17f990u: goto label_17f990;
        case 0x17f994u: goto label_17f994;
        case 0x17f998u: goto label_17f998;
        case 0x17f99cu: goto label_17f99c;
        case 0x17f9a0u: goto label_17f9a0;
        case 0x17f9a4u: goto label_17f9a4;
        case 0x17f9a8u: goto label_17f9a8;
        case 0x17f9acu: goto label_17f9ac;
        case 0x17f9b0u: goto label_17f9b0;
        case 0x17f9b4u: goto label_17f9b4;
        case 0x17f9b8u: goto label_17f9b8;
        case 0x17f9bcu: goto label_17f9bc;
        case 0x17f9c0u: goto label_17f9c0;
        case 0x17f9c4u: goto label_17f9c4;
        case 0x17f9c8u: goto label_17f9c8;
        case 0x17f9ccu: goto label_17f9cc;
        case 0x17f9d0u: goto label_17f9d0;
        case 0x17f9d4u: goto label_17f9d4;
        case 0x17f9d8u: goto label_17f9d8;
        case 0x17f9dcu: goto label_17f9dc;
        case 0x17f9e0u: goto label_17f9e0;
        case 0x17f9e4u: goto label_17f9e4;
        case 0x17f9e8u: goto label_17f9e8;
        case 0x17f9ecu: goto label_17f9ec;
        case 0x17f9f0u: goto label_17f9f0;
        case 0x17f9f4u: goto label_17f9f4;
        case 0x17f9f8u: goto label_17f9f8;
        case 0x17f9fcu: goto label_17f9fc;
        case 0x17fa00u: goto label_17fa00;
        case 0x17fa04u: goto label_17fa04;
        case 0x17fa08u: goto label_17fa08;
        case 0x17fa0cu: goto label_17fa0c;
        case 0x17fa10u: goto label_17fa10;
        case 0x17fa14u: goto label_17fa14;
        case 0x17fa18u: goto label_17fa18;
        case 0x17fa1cu: goto label_17fa1c;
        case 0x17fa20u: goto label_17fa20;
        case 0x17fa24u: goto label_17fa24;
        case 0x17fa28u: goto label_17fa28;
        case 0x17fa2cu: goto label_17fa2c;
        case 0x17fa30u: goto label_17fa30;
        case 0x17fa34u: goto label_17fa34;
        case 0x17fa38u: goto label_17fa38;
        case 0x17fa3cu: goto label_17fa3c;
        case 0x17fa40u: goto label_17fa40;
        case 0x17fa44u: goto label_17fa44;
        case 0x17fa48u: goto label_17fa48;
        case 0x17fa4cu: goto label_17fa4c;
        case 0x17fa50u: goto label_17fa50;
        case 0x17fa54u: goto label_17fa54;
        case 0x17fa58u: goto label_17fa58;
        case 0x17fa5cu: goto label_17fa5c;
        case 0x17fa60u: goto label_17fa60;
        case 0x17fa64u: goto label_17fa64;
        case 0x17fa68u: goto label_17fa68;
        case 0x17fa6cu: goto label_17fa6c;
        case 0x17fa70u: goto label_17fa70;
        case 0x17fa74u: goto label_17fa74;
        case 0x17fa78u: goto label_17fa78;
        case 0x17fa7cu: goto label_17fa7c;
        case 0x17fa80u: goto label_17fa80;
        case 0x17fa84u: goto label_17fa84;
        case 0x17fa88u: goto label_17fa88;
        case 0x17fa8cu: goto label_17fa8c;
        case 0x17fa90u: goto label_17fa90;
        case 0x17fa94u: goto label_17fa94;
        case 0x17fa98u: goto label_17fa98;
        case 0x17fa9cu: goto label_17fa9c;
        case 0x17faa0u: goto label_17faa0;
        case 0x17faa4u: goto label_17faa4;
        case 0x17faa8u: goto label_17faa8;
        case 0x17faacu: goto label_17faac;
        case 0x17fab0u: goto label_17fab0;
        case 0x17fab4u: goto label_17fab4;
        case 0x17fab8u: goto label_17fab8;
        case 0x17fabcu: goto label_17fabc;
        case 0x17fac0u: goto label_17fac0;
        case 0x17fac4u: goto label_17fac4;
        case 0x17fac8u: goto label_17fac8;
        case 0x17faccu: goto label_17facc;
        case 0x17fad0u: goto label_17fad0;
        case 0x17fad4u: goto label_17fad4;
        case 0x17fad8u: goto label_17fad8;
        case 0x17fadcu: goto label_17fadc;
        case 0x17fae0u: goto label_17fae0;
        case 0x17fae4u: goto label_17fae4;
        case 0x17fae8u: goto label_17fae8;
        case 0x17faecu: goto label_17faec;
        case 0x17faf0u: goto label_17faf0;
        case 0x17faf4u: goto label_17faf4;
        case 0x17faf8u: goto label_17faf8;
        case 0x17fafcu: goto label_17fafc;
        case 0x17fb00u: goto label_17fb00;
        case 0x17fb04u: goto label_17fb04;
        case 0x17fb08u: goto label_17fb08;
        case 0x17fb0cu: goto label_17fb0c;
        case 0x17fb10u: goto label_17fb10;
        case 0x17fb14u: goto label_17fb14;
        case 0x17fb18u: goto label_17fb18;
        case 0x17fb1cu: goto label_17fb1c;
        case 0x17fb20u: goto label_17fb20;
        case 0x17fb24u: goto label_17fb24;
        case 0x17fb28u: goto label_17fb28;
        case 0x17fb2cu: goto label_17fb2c;
        case 0x17fb30u: goto label_17fb30;
        case 0x17fb34u: goto label_17fb34;
        case 0x17fb38u: goto label_17fb38;
        case 0x17fb3cu: goto label_17fb3c;
        case 0x17fb40u: goto label_17fb40;
        case 0x17fb44u: goto label_17fb44;
        case 0x17fb48u: goto label_17fb48;
        case 0x17fb4cu: goto label_17fb4c;
        case 0x17fb50u: goto label_17fb50;
        case 0x17fb54u: goto label_17fb54;
        case 0x17fb58u: goto label_17fb58;
        case 0x17fb5cu: goto label_17fb5c;
        case 0x17fb60u: goto label_17fb60;
        case 0x17fb64u: goto label_17fb64;
        case 0x17fb68u: goto label_17fb68;
        case 0x17fb6cu: goto label_17fb6c;
        case 0x17fb70u: goto label_17fb70;
        case 0x17fb74u: goto label_17fb74;
        case 0x17fb78u: goto label_17fb78;
        case 0x17fb7cu: goto label_17fb7c;
        case 0x17fb80u: goto label_17fb80;
        case 0x17fb84u: goto label_17fb84;
        case 0x17fb88u: goto label_17fb88;
        case 0x17fb8cu: goto label_17fb8c;
        case 0x17fb90u: goto label_17fb90;
        case 0x17fb94u: goto label_17fb94;
        case 0x17fb98u: goto label_17fb98;
        case 0x17fb9cu: goto label_17fb9c;
        case 0x17fba0u: goto label_17fba0;
        case 0x17fba4u: goto label_17fba4;
        case 0x17fba8u: goto label_17fba8;
        case 0x17fbacu: goto label_17fbac;
        case 0x17fbb0u: goto label_17fbb0;
        case 0x17fbb4u: goto label_17fbb4;
        case 0x17fbb8u: goto label_17fbb8;
        case 0x17fbbcu: goto label_17fbbc;
        case 0x17fbc0u: goto label_17fbc0;
        case 0x17fbc4u: goto label_17fbc4;
        case 0x17fbc8u: goto label_17fbc8;
        case 0x17fbccu: goto label_17fbcc;
        case 0x17fbd0u: goto label_17fbd0;
        case 0x17fbd4u: goto label_17fbd4;
        case 0x17fbd8u: goto label_17fbd8;
        case 0x17fbdcu: goto label_17fbdc;
        case 0x17fbe0u: goto label_17fbe0;
        case 0x17fbe4u: goto label_17fbe4;
        case 0x17fbe8u: goto label_17fbe8;
        case 0x17fbecu: goto label_17fbec;
        case 0x17fbf0u: goto label_17fbf0;
        case 0x17fbf4u: goto label_17fbf4;
        case 0x17fbf8u: goto label_17fbf8;
        case 0x17fbfcu: goto label_17fbfc;
        case 0x17fc00u: goto label_17fc00;
        case 0x17fc04u: goto label_17fc04;
        case 0x17fc08u: goto label_17fc08;
        case 0x17fc0cu: goto label_17fc0c;
        case 0x17fc10u: goto label_17fc10;
        case 0x17fc14u: goto label_17fc14;
        case 0x17fc18u: goto label_17fc18;
        case 0x17fc1cu: goto label_17fc1c;
        case 0x17fc20u: goto label_17fc20;
        case 0x17fc24u: goto label_17fc24;
        case 0x17fc28u: goto label_17fc28;
        case 0x17fc2cu: goto label_17fc2c;
        case 0x17fc30u: goto label_17fc30;
        case 0x17fc34u: goto label_17fc34;
        case 0x17fc38u: goto label_17fc38;
        case 0x17fc3cu: goto label_17fc3c;
        case 0x17fc40u: goto label_17fc40;
        case 0x17fc44u: goto label_17fc44;
        case 0x17fc48u: goto label_17fc48;
        case 0x17fc4cu: goto label_17fc4c;
        case 0x17fc50u: goto label_17fc50;
        case 0x17fc54u: goto label_17fc54;
        case 0x17fc58u: goto label_17fc58;
        case 0x17fc5cu: goto label_17fc5c;
        case 0x17fc60u: goto label_17fc60;
        case 0x17fc64u: goto label_17fc64;
        case 0x17fc68u: goto label_17fc68;
        case 0x17fc6cu: goto label_17fc6c;
        case 0x17fc70u: goto label_17fc70;
        case 0x17fc74u: goto label_17fc74;
        case 0x17fc78u: goto label_17fc78;
        case 0x17fc7cu: goto label_17fc7c;
        case 0x17fc80u: goto label_17fc80;
        case 0x17fc84u: goto label_17fc84;
        case 0x17fc88u: goto label_17fc88;
        case 0x17fc8cu: goto label_17fc8c;
        case 0x17fc90u: goto label_17fc90;
        case 0x17fc94u: goto label_17fc94;
        case 0x17fc98u: goto label_17fc98;
        case 0x17fc9cu: goto label_17fc9c;
        case 0x17fca0u: goto label_17fca0;
        case 0x17fca4u: goto label_17fca4;
        case 0x17fca8u: goto label_17fca8;
        case 0x17fcacu: goto label_17fcac;
        case 0x17fcb0u: goto label_17fcb0;
        case 0x17fcb4u: goto label_17fcb4;
        case 0x17fcb8u: goto label_17fcb8;
        case 0x17fcbcu: goto label_17fcbc;
        case 0x17fcc0u: goto label_17fcc0;
        case 0x17fcc4u: goto label_17fcc4;
        case 0x17fcc8u: goto label_17fcc8;
        case 0x17fcccu: goto label_17fccc;
        case 0x17fcd0u: goto label_17fcd0;
        case 0x17fcd4u: goto label_17fcd4;
        case 0x17fcd8u: goto label_17fcd8;
        case 0x17fcdcu: goto label_17fcdc;
        case 0x17fce0u: goto label_17fce0;
        case 0x17fce4u: goto label_17fce4;
        case 0x17fce8u: goto label_17fce8;
        case 0x17fcecu: goto label_17fcec;
        case 0x17fcf0u: goto label_17fcf0;
        case 0x17fcf4u: goto label_17fcf4;
        case 0x17fcf8u: goto label_17fcf8;
        case 0x17fcfcu: goto label_17fcfc;
        case 0x17fd00u: goto label_17fd00;
        case 0x17fd04u: goto label_17fd04;
        case 0x17fd08u: goto label_17fd08;
        case 0x17fd0cu: goto label_17fd0c;
        case 0x17fd10u: goto label_17fd10;
        case 0x17fd14u: goto label_17fd14;
        case 0x17fd18u: goto label_17fd18;
        case 0x17fd1cu: goto label_17fd1c;
        case 0x17fd20u: goto label_17fd20;
        case 0x17fd24u: goto label_17fd24;
        case 0x17fd28u: goto label_17fd28;
        case 0x17fd2cu: goto label_17fd2c;
        case 0x17fd30u: goto label_17fd30;
        case 0x17fd34u: goto label_17fd34;
        case 0x17fd38u: goto label_17fd38;
        case 0x17fd3cu: goto label_17fd3c;
        case 0x17fd40u: goto label_17fd40;
        case 0x17fd44u: goto label_17fd44;
        case 0x17fd48u: goto label_17fd48;
        case 0x17fd4cu: goto label_17fd4c;
        case 0x17fd50u: goto label_17fd50;
        case 0x17fd54u: goto label_17fd54;
        case 0x17fd58u: goto label_17fd58;
        case 0x17fd5cu: goto label_17fd5c;
        case 0x17fd60u: goto label_17fd60;
        case 0x17fd64u: goto label_17fd64;
        case 0x17fd68u: goto label_17fd68;
        case 0x17fd6cu: goto label_17fd6c;
        case 0x17fd70u: goto label_17fd70;
        case 0x17fd74u: goto label_17fd74;
        case 0x17fd78u: goto label_17fd78;
        case 0x17fd7cu: goto label_17fd7c;
        case 0x17fd80u: goto label_17fd80;
        case 0x17fd84u: goto label_17fd84;
        case 0x17fd88u: goto label_17fd88;
        case 0x17fd8cu: goto label_17fd8c;
        case 0x17fd90u: goto label_17fd90;
        case 0x17fd94u: goto label_17fd94;
        case 0x17fd98u: goto label_17fd98;
        case 0x17fd9cu: goto label_17fd9c;
        case 0x17fda0u: goto label_17fda0;
        case 0x17fda4u: goto label_17fda4;
        case 0x17fda8u: goto label_17fda8;
        case 0x17fdacu: goto label_17fdac;
        case 0x17fdb0u: goto label_17fdb0;
        case 0x17fdb4u: goto label_17fdb4;
        case 0x17fdb8u: goto label_17fdb8;
        case 0x17fdbcu: goto label_17fdbc;
        case 0x17fdc0u: goto label_17fdc0;
        case 0x17fdc4u: goto label_17fdc4;
        case 0x17fdc8u: goto label_17fdc8;
        case 0x17fdccu: goto label_17fdcc;
        case 0x17fdd0u: goto label_17fdd0;
        case 0x17fdd4u: goto label_17fdd4;
        case 0x17fdd8u: goto label_17fdd8;
        case 0x17fddcu: goto label_17fddc;
        case 0x17fde0u: goto label_17fde0;
        case 0x17fde4u: goto label_17fde4;
        case 0x17fde8u: goto label_17fde8;
        case 0x17fdecu: goto label_17fdec;
        case 0x17fdf0u: goto label_17fdf0;
        case 0x17fdf4u: goto label_17fdf4;
        case 0x17fdf8u: goto label_17fdf8;
        case 0x17fdfcu: goto label_17fdfc;
        case 0x17fe00u: goto label_17fe00;
        case 0x17fe04u: goto label_17fe04;
        case 0x17fe08u: goto label_17fe08;
        case 0x17fe0cu: goto label_17fe0c;
        case 0x17fe10u: goto label_17fe10;
        case 0x17fe14u: goto label_17fe14;
        case 0x17fe18u: goto label_17fe18;
        case 0x17fe1cu: goto label_17fe1c;
        case 0x17fe20u: goto label_17fe20;
        case 0x17fe24u: goto label_17fe24;
        case 0x17fe28u: goto label_17fe28;
        case 0x17fe2cu: goto label_17fe2c;
        case 0x17fe30u: goto label_17fe30;
        case 0x17fe34u: goto label_17fe34;
        case 0x17fe38u: goto label_17fe38;
        case 0x17fe3cu: goto label_17fe3c;
        case 0x17fe40u: goto label_17fe40;
        case 0x17fe44u: goto label_17fe44;
        case 0x17fe48u: goto label_17fe48;
        case 0x17fe4cu: goto label_17fe4c;
        case 0x17fe50u: goto label_17fe50;
        case 0x17fe54u: goto label_17fe54;
        case 0x17fe58u: goto label_17fe58;
        case 0x17fe5cu: goto label_17fe5c;
        case 0x17fe60u: goto label_17fe60;
        case 0x17fe64u: goto label_17fe64;
        case 0x17fe68u: goto label_17fe68;
        case 0x17fe6cu: goto label_17fe6c;
        case 0x17fe70u: goto label_17fe70;
        case 0x17fe74u: goto label_17fe74;
        case 0x17fe78u: goto label_17fe78;
        case 0x17fe7cu: goto label_17fe7c;
        case 0x17fe80u: goto label_17fe80;
        case 0x17fe84u: goto label_17fe84;
        case 0x17fe88u: goto label_17fe88;
        case 0x17fe8cu: goto label_17fe8c;
        case 0x17fe90u: goto label_17fe90;
        case 0x17fe94u: goto label_17fe94;
        case 0x17fe98u: goto label_17fe98;
        case 0x17fe9cu: goto label_17fe9c;
        case 0x17fea0u: goto label_17fea0;
        case 0x17fea4u: goto label_17fea4;
        case 0x17fea8u: goto label_17fea8;
        case 0x17feacu: goto label_17feac;
        case 0x17feb0u: goto label_17feb0;
        case 0x17feb4u: goto label_17feb4;
        case 0x17feb8u: goto label_17feb8;
        case 0x17febcu: goto label_17febc;
        case 0x17fec0u: goto label_17fec0;
        case 0x17fec4u: goto label_17fec4;
        case 0x17fec8u: goto label_17fec8;
        case 0x17feccu: goto label_17fecc;
        case 0x17fed0u: goto label_17fed0;
        case 0x17fed4u: goto label_17fed4;
        case 0x17fed8u: goto label_17fed8;
        case 0x17fedcu: goto label_17fedc;
        case 0x17fee0u: goto label_17fee0;
        case 0x17fee4u: goto label_17fee4;
        case 0x17fee8u: goto label_17fee8;
        case 0x17feecu: goto label_17feec;
        case 0x17fef0u: goto label_17fef0;
        case 0x17fef4u: goto label_17fef4;
        case 0x17fef8u: goto label_17fef8;
        case 0x17fefcu: goto label_17fefc;
        case 0x17ff00u: goto label_17ff00;
        case 0x17ff04u: goto label_17ff04;
        case 0x17ff08u: goto label_17ff08;
        case 0x17ff0cu: goto label_17ff0c;
        case 0x17ff10u: goto label_17ff10;
        case 0x17ff14u: goto label_17ff14;
        case 0x17ff18u: goto label_17ff18;
        case 0x17ff1cu: goto label_17ff1c;
        case 0x17ff20u: goto label_17ff20;
        case 0x17ff24u: goto label_17ff24;
        case 0x17ff28u: goto label_17ff28;
        case 0x17ff2cu: goto label_17ff2c;
        case 0x17ff30u: goto label_17ff30;
        case 0x17ff34u: goto label_17ff34;
        case 0x17ff38u: goto label_17ff38;
        case 0x17ff3cu: goto label_17ff3c;
        case 0x17ff40u: goto label_17ff40;
        case 0x17ff44u: goto label_17ff44;
        case 0x17ff48u: goto label_17ff48;
        case 0x17ff4cu: goto label_17ff4c;
        case 0x17ff50u: goto label_17ff50;
        case 0x17ff54u: goto label_17ff54;
        case 0x17ff58u: goto label_17ff58;
        case 0x17ff5cu: goto label_17ff5c;
        case 0x17ff60u: goto label_17ff60;
        case 0x17ff64u: goto label_17ff64;
        case 0x17ff68u: goto label_17ff68;
        case 0x17ff6cu: goto label_17ff6c;
        case 0x17ff70u: goto label_17ff70;
        case 0x17ff74u: goto label_17ff74;
        case 0x17ff78u: goto label_17ff78;
        case 0x17ff7cu: goto label_17ff7c;
        case 0x17ff80u: goto label_17ff80;
        case 0x17ff84u: goto label_17ff84;
        case 0x17ff88u: goto label_17ff88;
        case 0x17ff8cu: goto label_17ff8c;
        case 0x17ff90u: goto label_17ff90;
        case 0x17ff94u: goto label_17ff94;
        case 0x17ff98u: goto label_17ff98;
        case 0x17ff9cu: goto label_17ff9c;
        case 0x17ffa0u: goto label_17ffa0;
        case 0x17ffa4u: goto label_17ffa4;
        case 0x17ffa8u: goto label_17ffa8;
        case 0x17ffacu: goto label_17ffac;
        case 0x17ffb0u: goto label_17ffb0;
        case 0x17ffb4u: goto label_17ffb4;
        case 0x17ffb8u: goto label_17ffb8;
        case 0x17ffbcu: goto label_17ffbc;
        case 0x17ffc0u: goto label_17ffc0;
        case 0x17ffc4u: goto label_17ffc4;
        case 0x17ffc8u: goto label_17ffc8;
        case 0x17ffccu: goto label_17ffcc;
        case 0x17ffd0u: goto label_17ffd0;
        case 0x17ffd4u: goto label_17ffd4;
        case 0x17ffd8u: goto label_17ffd8;
        case 0x17ffdcu: goto label_17ffdc;
        case 0x17ffe0u: goto label_17ffe0;
        case 0x17ffe4u: goto label_17ffe4;
        case 0x17ffe8u: goto label_17ffe8;
        case 0x17ffecu: goto label_17ffec;
        case 0x17fff0u: goto label_17fff0;
        case 0x17fff4u: goto label_17fff4;
        case 0x17fff8u: goto label_17fff8;
        case 0x17fffcu: goto label_17fffc;
        case 0x180000u: goto label_180000;
        case 0x180004u: goto label_180004;
        case 0x180008u: goto label_180008;
        case 0x18000cu: goto label_18000c;
        case 0x180010u: goto label_180010;
        case 0x180014u: goto label_180014;
        case 0x180018u: goto label_180018;
        case 0x18001cu: goto label_18001c;
        case 0x180020u: goto label_180020;
        case 0x180024u: goto label_180024;
        case 0x180028u: goto label_180028;
        case 0x18002cu: goto label_18002c;
        case 0x180030u: goto label_180030;
        case 0x180034u: goto label_180034;
        case 0x180038u: goto label_180038;
        case 0x18003cu: goto label_18003c;
        case 0x180040u: goto label_180040;
        case 0x180044u: goto label_180044;
        case 0x180048u: goto label_180048;
        case 0x18004cu: goto label_18004c;
        case 0x180050u: goto label_180050;
        case 0x180054u: goto label_180054;
        case 0x180058u: goto label_180058;
        case 0x18005cu: goto label_18005c;
        case 0x180060u: goto label_180060;
        case 0x180064u: goto label_180064;
        case 0x180068u: goto label_180068;
        case 0x18006cu: goto label_18006c;
        case 0x180070u: goto label_180070;
        case 0x180074u: goto label_180074;
        case 0x180078u: goto label_180078;
        case 0x18007cu: goto label_18007c;
        case 0x180080u: goto label_180080;
        case 0x180084u: goto label_180084;
        case 0x180088u: goto label_180088;
        case 0x18008cu: goto label_18008c;
        case 0x180090u: goto label_180090;
        case 0x180094u: goto label_180094;
        case 0x180098u: goto label_180098;
        case 0x18009cu: goto label_18009c;
        case 0x1800a0u: goto label_1800a0;
        case 0x1800a4u: goto label_1800a4;
        case 0x1800a8u: goto label_1800a8;
        case 0x1800acu: goto label_1800ac;
        default: return;
    }

label_17f8e0:
    // 0x17f8e0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17f8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_17f8e4:
    // 0x17f8e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_17f8e8:
    if (ctx->pc == 0x17F8E8u) {
        ctx->pc = 0x17F8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F8E4u;
        // 0x17f8e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F8ECu;
        goto label_17f8ec;
    }
    ctx->pc = 0x17F8E4u;
    {
        const bool branch_taken_0x17f8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F8E4u;
        // 0x17f8e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f8e4) {
            ctx->pc = 0x17F8F4u;
            goto label_17f8f4;
        }
    }
    ctx->pc = 0x17F8ECu;
label_17f8ec:
    // 0x17f8ec: 0x10000001  b           . + 4 + (0x1 << 2)
label_17f8f0:
    if (ctx->pc == 0x17F8F0u) {
        ctx->pc = 0x17F8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F8ECu;
        // 0x17f8f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F8F4u;
        goto label_17f8f4;
    }
    ctx->pc = 0x17F8ECu;
    {
        const bool branch_taken_0x17f8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F8ECu;
        // 0x17f8f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f8ec) {
            ctx->pc = 0x17F8F4u;
            goto label_17f8f4;
        }
    }
    ctx->pc = 0x17F8F4u;
label_17f8f4:
    // 0x17f8f4: 0x3e00008  jr          $ra
label_17f8f8:
    if (ctx->pc == 0x17F8F8u) {
        ctx->pc = 0x17F8FCu;
        goto label_17f8fc;
    }
    ctx->pc = 0x17F8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F8F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F8FCu;
label_17f8fc:
    // 0x17f8fc: 0x0  nop
    ctx->pc = 0x17f8fcu;
    // NOP
label_17f900:
    // 0x17f900: 0xd8890000  lqc2        $vf9, 0x0($a0)
    ctx->pc = 0x17f900u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_17f904:
    // 0x17f904: 0x4be909bc  vmulax.xyzw $ACC, $vf1, $vf9x
    ctx->pc = 0x17f904u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17f908:
    // 0x17f908: 0x4be910bd  vmadday.xyzw $ACC, $vf2, $vf9y
    ctx->pc = 0x17f908u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17f90c:
    // 0x17f90c: 0x4be918be  vmaddaz.xyzw $ACC, $vf3, $vf9z
    ctx->pc = 0x17f90cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17f910:
    // 0x17f910: 0x4be9230b  vmaddw.xyzw $vf12, $vf4, $vf9w
    ctx->pc = 0x17f910u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_17f914:
    // 0x17f914: 0x4bcc61ff  .word       0x4BCC61FF                   # vclipw.xyz  $vf12, $vf12w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x17f914u;
    { __m128 fs = ctx->vu0_vf[12]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
label_17f918:
    // 0x17f918: 0x4be929bc  vmulax.xyzw $ACC, $vf5, $vf9x
    ctx->pc = 0x17f918u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17f91c:
    // 0x17f91c: 0x4be930bd  vmadday.xyzw $ACC, $vf6, $vf9y
    ctx->pc = 0x17f91cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17f920:
    // 0x17f920: 0x4be938be  vmaddaz.xyzw $ACC, $vf7, $vf9z
    ctx->pc = 0x17f920u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17f924:
    // 0x17f924: 0x4be9430b  vmaddw.xyzw $vf12, $vf8, $vf9w
    ctx->pc = 0x17f924u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_17f928:
    // 0x17f928: 0x4a0002ff  vnop
    ctx->pc = 0x17f928u;
    // NOP operation, no action needed for VU0
label_17f92c:
    // 0x17f92c: 0x48439000  cfc2.ni     $v1, $vi18
    ctx->pc = 0x17f92cu;
    SET_GPR_U32(ctx, 3, ctx->vu0_clip_flags & 0x00FFFFFFu);
label_17f930:
    // 0x17f930: 0x4bcc61ff  .word       0x4BCC61FF                   # vclipw.xyz  $vf12, $vf12w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x17f930u;
    { __m128 fs = ctx->vu0_vf[12]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
label_17f934:
    // 0x17f934: 0x4a0002ff  vnop
    ctx->pc = 0x17f934u;
    // NOP operation, no action needed for VU0
label_17f938:
    // 0x17f938: 0x4a0002ff  vnop
    ctx->pc = 0x17f938u;
    // NOP operation, no action needed for VU0
label_17f93c:
    // 0x17f93c: 0x4a0002ff  vnop
    ctx->pc = 0x17f93cu;
    // NOP operation, no action needed for VU0
label_17f940:
    // 0x17f940: 0x4a0002ff  vnop
    ctx->pc = 0x17f940u;
    // NOP operation, no action needed for VU0
label_17f944:
    // 0x17f944: 0x4a0002ff  vnop
    ctx->pc = 0x17f944u;
    // NOP operation, no action needed for VU0
label_17f948:
    // 0x17f948: 0x48449000  cfc2.ni     $a0, $vi18
    ctx->pc = 0x17f948u;
    SET_GPR_U32(ctx, 4, ctx->vu0_clip_flags & 0x00FFFFFFu);
label_17f94c:
    // 0x17f94c: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x17f94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_17f950:
    // 0x17f950: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x17f950u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_17f954:
    // 0x17f954: 0x3083003f  andi        $v1, $a0, 0x3F
    ctx->pc = 0x17f954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
label_17f958:
    // 0x17f958: 0x3e00008  jr          $ra
label_17f95c:
    if (ctx->pc == 0x17F95Cu) {
        ctx->pc = 0x17F95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F958u;
        // 0x17f95c: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F960u;
        goto label_17f960;
    }
    ctx->pc = 0x17F958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F958u;
        // 0x17f95c: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F960u;
label_17f960:
    // 0x17f960: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x17f960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_17f964:
    // 0x17f964: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17f964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_17f968:
    // 0x17f968: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17f968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_17f96c:
    // 0x17f96c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17f96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_17f970:
    // 0x17f970: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17f970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_17f974:
    // 0x17f974: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17f974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17f978:
    // 0x17f978: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x17f978u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_17f97c:
    // 0x17f97c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17f97cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17f980:
    // 0x17f980: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x17f980u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_17f984:
    // 0x17f984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17f984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17f988:
    // 0x17f988: 0xc0646c0  jal         func_191B00
label_17f98c:
    if (ctx->pc == 0x17F98Cu) {
        ctx->pc = 0x17F98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F988u;
        // 0x17f98c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F990u;
        goto label_17f990;
    }
    ctx->pc = 0x17F988u;
    SET_GPR_U32(ctx, 31, 0x17F990u);
    ctx->pc = 0x17F98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F988u;
    // 0x17f98c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x191B00u;
    { ctx->pc = 0x191b00; return; }
    ctx->pc = 0x17F990u;
label_17f990:
    // 0x17f990: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x17f990u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_17f994:
    // 0x17f994: 0xc07f1a0  jal         func_1FC680
label_17f998:
    if (ctx->pc == 0x17F998u) {
        ctx->pc = 0x17F998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F994u;
        // 0x17f998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F99Cu;
        goto label_17f99c;
    }
    ctx->pc = 0x17F994u;
    SET_GPR_U32(ctx, 31, 0x17F99Cu);
    ctx->pc = 0x17F998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F994u;
    // 0x17f998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC680u;
    { ctx->pc = 0x1fc680; return; }
    ctx->pc = 0x17F99Cu;
label_17f99c:
    // 0x17f99c: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x17f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_17f9a0:
    // 0x17f9a0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x17f9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_17f9a4:
    // 0x17f9a4: 0x24420a00  addiu       $v0, $v0, 0xA00
    ctx->pc = 0x17f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2560));
label_17f9a8:
    // 0x17f9a8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x17f9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17f9ac:
    // 0x17f9ac: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x17f9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17f9b0:
    // 0x17f9b0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x17f9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_17f9b4:
    // 0x17f9b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17f9b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17f9b8:
    // 0x17f9b8: 0x0  nop
    ctx->pc = 0x17f9b8u;
    // NOP
label_17f9bc:
    // 0x17f9bc: 0x46140b02  mul.s       $f12, $f1, $f20
    ctx->pc = 0x17f9bcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_17f9c0:
    // 0x17f9c0: 0xc06d4fa  jal         func_1B53E8
label_17f9c4:
    if (ctx->pc == 0x17F9C4u) {
        ctx->pc = 0x17F9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F9C0u;
        // 0x17f9c4: 0x46001580  add.s       $f22, $f2, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F9C8u;
        goto label_17f9c8;
    }
    ctx->pc = 0x17F9C0u;
    SET_GPR_U32(ctx, 31, 0x17F9C8u);
    ctx->pc = 0x17F9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F9C0u;
    // 0x17f9c4: 0x46001580  add.s       $f22, $f2, $f0 (Delay Slot)
    ctx->f[22] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B53E8u;
    { ctx->pc = 0x1b53e8; return; }
    ctx->pc = 0x17F9C8u;
label_17f9c8:
    // 0x17f9c8: 0x4600b542  mul.s       $f21, $f22, $f0
    ctx->pc = 0x17f9c8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_17f9cc:
    // 0x17f9cc: 0xc064654  jal         func_191950
label_17f9d0:
    if (ctx->pc == 0x17F9D0u) {
        ctx->pc = 0x17F9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F9CCu;
        // 0x17f9d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F9D4u;
        goto label_17f9d4;
    }
    ctx->pc = 0x17F9CCu;
    SET_GPR_U32(ctx, 31, 0x17F9D4u);
    ctx->pc = 0x17F9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F9CCu;
    // 0x17f9d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191950u;
    { ctx->pc = 0x191950; return; }
    ctx->pc = 0x17F9D4u;
label_17f9d4:
    // 0x17f9d4: 0x0  nop
    ctx->pc = 0x17f9d4u;
    // NOP
label_17f9d8:
    // 0x17f9d8: 0x0  nop
    ctx->pc = 0x17f9d8u;
    // NOP
label_17f9dc:
    // 0x17f9dc: 0x4600b043  div.s       $f1, $f22, $f0
    ctx->pc = 0x17f9dcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[1] = ctx->f[22] / ctx->f[0];
label_17f9e0:
    // 0x17f9e0: 0x8f8287f8  lw          $v0, -0x7808($gp)
    ctx->pc = 0x17f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936568)));
label_17f9e4:
    // 0x17f9e4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x17f9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_17f9e8:
    // 0x17f9e8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x17f9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_17f9ec:
    // 0x17f9ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17f9ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17f9f0:
    // 0x17f9f0: 0x0  nop
    ctx->pc = 0x17f9f0u;
    // NOP
label_17f9f4:
    // 0x17f9f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17f9f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17f9f8:
    // 0x17f9f8: 0xc066e44  jal         func_19B910
label_17f9fc:
    if (ctx->pc == 0x17F9FCu) {
        ctx->pc = 0x17F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F9F8u;
        // 0x17f9fc: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FA00u;
        goto label_17fa00;
    }
    ctx->pc = 0x17F9F8u;
    SET_GPR_U32(ctx, 31, 0x17FA00u);
    ctx->pc = 0x17F9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F9F8u;
    // 0x17f9fc: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x17FA00u;
label_17fa00:
    // 0x17fa00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17fa00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_17fa04:
    // 0x17fa04: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x17fa04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_17fa08:
    // 0x17fa08: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x17fa08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_17fa0c:
    // 0x17fa0c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x17fa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_17fa10:
    // 0x17fa10: 0xe7b40054  swc1        $f20, 0x54($sp)
    ctx->pc = 0x17fa10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_17fa14:
    // 0x17fa14: 0xe7b60058  swc1        $f22, 0x58($sp)
    ctx->pc = 0x17fa14u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_17fa18:
    // 0x17fa18: 0xc066e26  jal         func_19B898
label_17fa1c:
    if (ctx->pc == 0x17FA1Cu) {
        ctx->pc = 0x17FA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA18u;
        // 0x17fa1c: 0xe7b50050  swc1        $f21, 0x50($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FA20u;
        goto label_17fa20;
    }
    ctx->pc = 0x17FA18u;
    SET_GPR_U32(ctx, 31, 0x17FA20u);
    ctx->pc = 0x17FA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FA18u;
    // 0x17fa1c: 0xe7b50050  swc1        $f21, 0x50($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x17FA20u;
label_17fa20:
    // 0x17fa20: 0x4600ad07  neg.s       $f20, $f21
    ctx->pc = 0x17fa20u;
    ctx->f[20] = FPU_NEG_S(ctx->f[21]);
label_17fa24:
    // 0x17fa24: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17fa24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_17fa28:
    // 0x17fa28: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x17fa28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_17fa2c:
    // 0x17fa2c: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x17fa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_17fa30:
    // 0x17fa30: 0xc066e26  jal         func_19B898
label_17fa34:
    if (ctx->pc == 0x17FA34u) {
        ctx->pc = 0x17FA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA30u;
        // 0x17fa34: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FA38u;
        goto label_17fa38;
    }
    ctx->pc = 0x17FA30u;
    SET_GPR_U32(ctx, 31, 0x17FA38u);
    ctx->pc = 0x17FA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FA30u;
    // 0x17fa34: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x17FA38u;
label_17fa38:
    // 0x17fa38: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x17fa38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_17fa3c:
    // 0x17fa3c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x17fa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_17fa40:
    // 0x17fa40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17fa40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17fa44:
    // 0x17fa44: 0xc066e26  jal         func_19B898
label_17fa48:
    if (ctx->pc == 0x17FA48u) {
        ctx->pc = 0x17FA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA44u;
        // 0x17fa48: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FA4Cu;
        goto label_17fa4c;
    }
    ctx->pc = 0x17FA44u;
    SET_GPR_U32(ctx, 31, 0x17FA4Cu);
    ctx->pc = 0x17FA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FA44u;
    // 0x17fa48: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x17FA4Cu;
label_17fa4c:
    // 0x17fa4c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x17fa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_17fa50:
    // 0x17fa50: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x17fa50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_17fa54:
    // 0x17fa54: 0xc066e26  jal         func_19B898
label_17fa58:
    if (ctx->pc == 0x17FA58u) {
        ctx->pc = 0x17FA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA54u;
        // 0x17fa58: 0xe6540000  swc1        $f20, 0x0($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FA5Cu;
        goto label_17fa5c;
    }
    ctx->pc = 0x17FA54u;
    SET_GPR_U32(ctx, 31, 0x17FA5Cu);
    ctx->pc = 0x17FA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FA54u;
    // 0x17fa58: 0xe6540000  swc1        $f20, 0x0($s2) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x17FA5Cu;
label_17fa5c:
    // 0x17fa5c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x17fa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_17fa60:
    // 0x17fa60: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x17fa60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_17fa64:
    // 0x17fa64: 0x24429a40  addiu       $v0, $v0, -0x65C0
    ctx->pc = 0x17fa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941248));
label_17fa68:
    // 0x17fa68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17fa68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17fa6c:
    // 0x17fa6c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x17fa6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_17fa70:
    // 0x17fa70: 0xc066d86  jal         func_19B618
label_17fa74:
    if (ctx->pc == 0x17FA74u) {
        ctx->pc = 0x17FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA70u;
        // 0x17fa74: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FA78u;
        goto label_17fa78;
    }
    ctx->pc = 0x17FA70u;
    SET_GPR_U32(ctx, 31, 0x17FA78u);
    ctx->pc = 0x17FA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FA70u;
    // 0x17fa74: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    { ctx->pc = 0x19b618; return; }
    ctx->pc = 0x17FA78u;
label_17fa78:
    // 0x17fa78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17fa78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_17fa7c:
    // 0x17fa7c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x17fa7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_17fa80:
    // 0x17fa80: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17fa80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17fa84:
    // 0x17fa84: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x17fa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_17fa88:
    // 0x17fa88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17fa88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17fa8c:
    // 0x17fa8c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17fa8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_17fa90:
    // 0x17fa90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17fa90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17fa94:
    // 0x17fa94: 0x3e00008  jr          $ra
label_17fa98:
    if (ctx->pc == 0x17FA98u) {
        ctx->pc = 0x17FA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA94u;
        // 0x17fa98: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FA9Cu;
        goto label_17fa9c;
    }
    ctx->pc = 0x17FA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA94u;
        // 0x17fa98: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FA94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FA9Cu;
label_17fa9c:
    // 0x17fa9c: 0x0  nop
    ctx->pc = 0x17fa9cu;
    // NOP
label_17faa0:
    // 0x17faa0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x17faa0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_17faa4:
    // 0x17faa4: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x17faa4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_17faa8:
    // 0x17faa8: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x17faa8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_17faac:
    // 0x17faac: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x17faacu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_17fab0:
    // 0x17fab0: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x17fab0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_17fab4:
    // 0x17fab4: 0xd8a60010  lqc2        $vf6, 0x10($a1)
    ctx->pc = 0x17fab4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_17fab8:
    // 0x17fab8: 0xd8a70020  lqc2        $vf7, 0x20($a1)
    ctx->pc = 0x17fab8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_17fabc:
    // 0x17fabc: 0x3e00008  jr          $ra
label_17fac0:
    if (ctx->pc == 0x17FAC0u) {
        ctx->pc = 0x17FAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FABCu;
        // 0x17fac0: 0xd8a80030  lqc2        $vf8, 0x30($a1) (Delay Slot)
        ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FAC4u;
        goto label_17fac4;
    }
    ctx->pc = 0x17FABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FABCu;
        // 0x17fac0: 0xd8a80030  lqc2        $vf8, 0x30($a1) (Delay Slot)
        ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FAC4u;
label_17fac4:
    // 0x17fac4: 0x0  nop
    ctx->pc = 0x17fac4u;
    // NOP
label_17fac8:
    // 0x17fac8: 0x0  nop
    ctx->pc = 0x17fac8u;
    // NOP
label_17facc:
    // 0x17facc: 0x0  nop
    ctx->pc = 0x17faccu;
    // NOP
label_17fad0:
    // 0x17fad0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x17fad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_17fad4:
    // 0x17fad4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x17fad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_17fad8:
    // 0x17fad8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x17fad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_17fadc:
    // 0x17fadc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17fadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_17fae0:
    // 0x17fae0: 0xe7ba0038  swc1        $f26, 0x38($sp)
    ctx->pc = 0x17fae0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_17fae4:
    // 0x17fae4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17fae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17fae8:
    // 0x17fae8: 0xe7b90034  swc1        $f25, 0x34($sp)
    ctx->pc = 0x17fae8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_17faec:
    // 0x17faec: 0xe7b80030  swc1        $f24, 0x30($sp)
    ctx->pc = 0x17faecu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_17faf0:
    // 0x17faf0: 0xe7b7002c  swc1        $f23, 0x2C($sp)
    ctx->pc = 0x17faf0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_17faf4:
    // 0x17faf4: 0xe7b60028  swc1        $f22, 0x28($sp)
    ctx->pc = 0x17faf4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_17faf8:
    // 0x17faf8: 0xe7b50024  swc1        $f21, 0x24($sp)
    ctx->pc = 0x17faf8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_17fafc:
    // 0x17fafc: 0xc07f1a0  jal         func_1FC680
label_17fb00:
    if (ctx->pc == 0x17FB00u) {
        ctx->pc = 0x17FB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FAFCu;
        // 0x17fb00: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FB04u;
        goto label_17fb04;
    }
    ctx->pc = 0x17FAFCu;
    SET_GPR_U32(ctx, 31, 0x17FB04u);
    ctx->pc = 0x17FB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FAFCu;
    // 0x17fb00: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC680u;
    { ctx->pc = 0x1fc680; return; }
    ctx->pc = 0x17FB04u;
label_17fb04:
    // 0x17fb04: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x17fb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_17fb08:
    // 0x17fb08: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x17fb08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_17fb0c:
    // 0x17fb0c: 0x24420a00  addiu       $v0, $v0, 0xA00
    ctx->pc = 0x17fb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2560));
label_17fb10:
    // 0x17fb10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17fb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17fb14:
    // 0x17fb14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17fb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17fb18:
    // 0x17fb18: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x17fb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17fb1c:
    // 0x17fb1c: 0xc064634  jal         func_1918D0
label_17fb20:
    if (ctx->pc == 0x17FB20u) {
        ctx->pc = 0x17FB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FB1Cu;
        // 0x17fb20: 0x46000d80  add.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FB24u;
        goto label_17fb24;
    }
    ctx->pc = 0x17FB1Cu;
    SET_GPR_U32(ctx, 31, 0x17FB24u);
    ctx->pc = 0x17FB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FB1Cu;
    // 0x17fb20: 0x46000d80  add.s       $f22, $f1, $f0 (Delay Slot)
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1918D0u;
    { ctx->pc = 0x1918d0; return; }
    ctx->pc = 0x17FB24u;
label_17fb24:
    // 0x17fb24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17fb24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17fb28:
    // 0x17fb28: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x17fb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_17fb2c:
    // 0x17fb2c: 0x3c0244ff  lui         $v0, 0x44FF
    ctx->pc = 0x17fb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17663 << 16));
label_17fb30:
    // 0x17fb30: 0x4482b800  mtc1        $v0, $f23
    ctx->pc = 0x17fb30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_17fb34:
    // 0x17fb34: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x17fb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_17fb38:
    // 0x17fb38: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_17fb3c:
    if (ctx->pc == 0x17FB3Cu) {
        ctx->pc = 0x17FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FB38u;
        // 0x17fb3c: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FB40u;
        goto label_17fb40;
    }
    ctx->pc = 0x17FB38u;
    {
        const bool branch_taken_0x17fb38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FB38u;
        // 0x17fb3c: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fb38) {
            ctx->pc = 0x17FB50u;
            goto label_17fb50;
        }
    }
    ctx->pc = 0x17FB40u;
label_17fb40:
    // 0x17fb40: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x17fb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_17fb44:
    // 0x17fb44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_17fb48:
    if (ctx->pc == 0x17FB48u) {
        ctx->pc = 0x17FB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FB44u;
        // 0x17fb48: 0x3c0241c0  lui         $v0, 0x41C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FB4Cu;
        goto label_17fb4c;
    }
    ctx->pc = 0x17FB44u;
    {
        const bool branch_taken_0x17fb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FB44u;
        // 0x17fb48: 0x3c0241c0  lui         $v0, 0x41C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fb44) {
            ctx->pc = 0x17FB54u;
            goto label_17fb54;
        }
    }
    ctx->pc = 0x17FB4Cu;
label_17fb4c:
    // 0x17fb4c: 0x4615bdc1  sub.s       $f23, $f23, $f21
    ctx->pc = 0x17fb4cu;
    ctx->f[23] = FPU_SUB_S(ctx->f[23], ctx->f[21]);
label_17fb50:
    // 0x17fb50: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x17fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
label_17fb54:
    // 0x17fb54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17fb54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17fb58:
    // 0x17fb58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17fb58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17fb5c:
    // 0x17fb5c: 0xc064654  jal         func_191950
label_17fb60:
    if (ctx->pc == 0x17FB60u) {
        ctx->pc = 0x17FB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FB5Cu;
        // 0x17fb60: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FB64u;
        goto label_17fb64;
    }
    ctx->pc = 0x17FB5Cu;
    SET_GPR_U32(ctx, 31, 0x17FB64u);
    ctx->pc = 0x17FB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FB5Cu;
    // 0x17fb60: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x191950u;
    { ctx->pc = 0x191950; return; }
    ctx->pc = 0x17FB64u;
label_17fb64:
    // 0x17fb64: 0xc78187fc  lwc1        $f1, -0x7804($gp)
    ctx->pc = 0x17fb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17fb68:
    // 0x17fb68: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x17fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
label_17fb6c:
    // 0x17fb6c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x17fb6cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_17fb70:
    // 0x17fb70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17fb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17fb74:
    // 0x17fb74: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x17fb74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_17fb78:
    // 0x17fb78: 0xc78087f8  lwc1        $f0, -0x7808($gp)
    ctx->pc = 0x17fb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17fb7c:
    // 0x17fb7c: 0x3c0243f0  lui         $v0, 0x43F0
    ctx->pc = 0x17fb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17392 << 16));
label_17fb80:
    // 0x17fb80: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x17fb80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_17fb84:
    // 0x17fb84: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17fb84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_17fb88:
    // 0x17fb88: 0x46030e83  div.s       $f26, $f1, $f3
    ctx->pc = 0x17fb88u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[26] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[26] = ctx->f[1] / ctx->f[3];
label_17fb8c:
    // 0x17fb8c: 0x0  nop
    ctx->pc = 0x17fb8cu;
    // NOP
label_17fb90:
    // 0x17fb90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17fb90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17fb94:
    // 0x17fb94: 0x46020643  div.s       $f25, $f0, $f2
    ctx->pc = 0x17fb94u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[25] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[25] = ctx->f[0] / ctx->f[2];
label_17fb98:
    // 0x17fb98: 0x0  nop
    ctx->pc = 0x17fb98u;
    // NOP
label_17fb9c:
    // 0x17fb9c: 0x0  nop
    ctx->pc = 0x17fb9cu;
    // NOP
label_17fba0:
    // 0x17fba0: 0xc06462c  jal         func_1918B0
label_17fba4:
    if (ctx->pc == 0x17FBA4u) {
        ctx->pc = 0x17FBA8u;
        goto label_17fba8;
    }
    ctx->pc = 0x17FBA0u;
    SET_GPR_U32(ctx, 31, 0x17FBA8u);
    ctx->pc = 0x1918B0u;
    { ctx->pc = 0x1918b0; return; }
    ctx->pc = 0x17FBA8u;
label_17fba8:
    // 0x17fba8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17fba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17fbac:
    // 0x17fbac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17fbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17fbb0:
    // 0x17fbb0: 0xc064624  jal         func_191890
label_17fbb4:
    if (ctx->pc == 0x17FBB4u) {
        ctx->pc = 0x17FBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FBB0u;
        // 0x17fbb4: 0x46800620  cvt.s.w     $f24, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FBB8u;
        goto label_17fbb8;
    }
    ctx->pc = 0x17FBB0u;
    SET_GPR_U32(ctx, 31, 0x17FBB8u);
    ctx->pc = 0x17FBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FBB0u;
    // 0x17fbb4: 0x46800620  cvt.s.w     $f24, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x191890u;
    { ctx->pc = 0x191890; return; }
    ctx->pc = 0x17FBB8u;
label_17fbb8:
    // 0x17fbb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17fbb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17fbbc:
    // 0x17fbbc: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x17fbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
label_17fbc0:
    // 0x17fbc0: 0x44809800  mtc1        $zero, $f19
    ctx->pc = 0x17fbc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
label_17fbc4:
    // 0x17fbc4: 0x468004a0  cvt.s.w     $f18, $f0
    ctx->pc = 0x17fbc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[18] = FPU_CVT_S_W(tmp); }
label_17fbc8:
    // 0x17fbc8: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x17fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
label_17fbcc:
    // 0x17fbcc: 0x3444df00  ori         $a0, $v0, 0xDF00
    ctx->pc = 0x17fbccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57088);
label_17fbd0:
    // 0x17fbd0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x17fbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_17fbd4:
    // 0x17fbd4: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x17fbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
label_17fbd8:
    // 0x17fbd8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x17fbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_17fbdc:
    // 0x17fbdc: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x17fbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_17fbe0:
    // 0x17fbe0: 0x24849480  addiu       $a0, $a0, -0x6B80
    ctx->pc = 0x17fbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939776));
label_17fbe4:
    // 0x17fbe4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17fbe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_17fbe8:
    // 0x17fbe8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x17fbe8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_17fbec:
    // 0x17fbec: 0x4600d3c6  mov.s       $f15, $f26
    ctx->pc = 0x17fbecu;
    ctx->f[15] = FPU_MOV_S(ctx->f[26]);
label_17fbf0:
    // 0x17fbf0: 0x4600cc06  mov.s       $f16, $f25
    ctx->pc = 0x17fbf0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[25]);
label_17fbf4:
    // 0x17fbf4: 0x4600c446  mov.s       $f17, $f24
    ctx->pc = 0x17fbf4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[24]);
label_17fbf8:
    // 0x17fbf8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x17fbf8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_17fbfc:
    // 0x17fbfc: 0xc06490c  jal         func_192430
label_17fc00:
    if (ctx->pc == 0x17FC00u) {
        ctx->pc = 0x17FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FBFCu;
        // 0x17fc00: 0xe7b60010  swc1        $f22, 0x10($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FC04u;
        goto label_17fc04;
    }
    ctx->pc = 0x17FBFCu;
    SET_GPR_U32(ctx, 31, 0x17FC04u);
    ctx->pc = 0x17FC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FBFCu;
    // 0x17fc00: 0xe7b60010  swc1        $f22, 0x10($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x192430u;
    { ctx->pc = 0x192430; return; }
    ctx->pc = 0x17FC04u;
label_17fc04:
    // 0x17fc04: 0xc064654  jal         func_191950
label_17fc08:
    if (ctx->pc == 0x17FC08u) {
        ctx->pc = 0x17FC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FC04u;
        // 0x17fc08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FC0Cu;
        goto label_17fc0c;
    }
    ctx->pc = 0x17FC04u;
    SET_GPR_U32(ctx, 31, 0x17FC0Cu);
    ctx->pc = 0x17FC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FC04u;
    // 0x17fc08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191950u;
    { ctx->pc = 0x191950; return; }
    ctx->pc = 0x17FC0Cu;
label_17fc0c:
    // 0x17fc0c: 0xc78387fc  lwc1        $f3, -0x7804($gp)
    ctx->pc = 0x17fc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_17fc10:
    // 0x17fc10: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x17fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
label_17fc14:
    // 0x17fc14: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x17fc14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_17fc18:
    // 0x17fc18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17fc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17fc1c:
    // 0x17fc1c: 0xc78187f8  lwc1        $f1, -0x7808($gp)
    ctx->pc = 0x17fc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17fc20:
    // 0x17fc20: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x17fc20u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_17fc24:
    // 0x17fc24: 0x3c0243f0  lui         $v0, 0x43F0
    ctx->pc = 0x17fc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17392 << 16));
label_17fc28:
    // 0x17fc28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17fc28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17fc2c:
    // 0x17fc2c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x17fc2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_17fc30:
    // 0x17fc30: 0x46021e83  div.s       $f26, $f3, $f2
    ctx->pc = 0x17fc30u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[26] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[26] = ctx->f[3] / ctx->f[2];
label_17fc34:
    // 0x17fc34: 0x0  nop
    ctx->pc = 0x17fc34u;
    // NOP
label_17fc38:
    // 0x17fc38: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17fc38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_17fc3c:
    // 0x17fc3c: 0x46000e43  div.s       $f25, $f1, $f0
    ctx->pc = 0x17fc3cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[25] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[25] = ctx->f[1] / ctx->f[0];
label_17fc40:
    // 0x17fc40: 0x0  nop
    ctx->pc = 0x17fc40u;
    // NOP
label_17fc44:
    // 0x17fc44: 0x0  nop
    ctx->pc = 0x17fc44u;
    // NOP
label_17fc48:
    // 0x17fc48: 0xc06462c  jal         func_1918B0
label_17fc4c:
    if (ctx->pc == 0x17FC4Cu) {
        ctx->pc = 0x17FC50u;
        goto label_17fc50;
    }
    ctx->pc = 0x17FC48u;
    SET_GPR_U32(ctx, 31, 0x17FC50u);
    ctx->pc = 0x1918B0u;
    { ctx->pc = 0x1918b0; return; }
    ctx->pc = 0x17FC50u;
label_17fc50:
    // 0x17fc50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17fc50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17fc54:
    // 0x17fc54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17fc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17fc58:
    // 0x17fc58: 0xc064624  jal         func_191890
label_17fc5c:
    if (ctx->pc == 0x17FC5Cu) {
        ctx->pc = 0x17FC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FC58u;
        // 0x17fc5c: 0x46800620  cvt.s.w     $f24, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FC60u;
        goto label_17fc60;
    }
    ctx->pc = 0x17FC58u;
    SET_GPR_U32(ctx, 31, 0x17FC60u);
    ctx->pc = 0x17FC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FC58u;
    // 0x17fc5c: 0x46800620  cvt.s.w     $f24, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x191890u;
    { ctx->pc = 0x191890; return; }
    ctx->pc = 0x17FC60u;
label_17fc60:
    // 0x17fc60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17fc60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17fc64:
    // 0x17fc64: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x17fc64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
label_17fc68:
    // 0x17fc68: 0x44809800  mtc1        $zero, $f19
    ctx->pc = 0x17fc68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
label_17fc6c:
    // 0x17fc6c: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x17fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
label_17fc70:
    // 0x17fc70: 0x3444df00  ori         $a0, $v0, 0xDF00
    ctx->pc = 0x17fc70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57088);
label_17fc74:
    // 0x17fc74: 0x3c0244ff  lui         $v0, 0x44FF
    ctx->pc = 0x17fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17663 << 16));
label_17fc78:
    // 0x17fc78: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x17fc78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_17fc7c:
    // 0x17fc7c: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x17fc7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
label_17fc80:
    // 0x17fc80: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x17fc80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_17fc84:
    // 0x17fc84: 0x468004a0  cvt.s.w     $f18, $f0
    ctx->pc = 0x17fc84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[18] = FPU_CVT_S_W(tmp); }
label_17fc88:
    // 0x17fc88: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x17fc88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_17fc8c:
    // 0x17fc8c: 0x24849440  addiu       $a0, $a0, -0x6BC0
    ctx->pc = 0x17fc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939712));
label_17fc90:
    // 0x17fc90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17fc90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_17fc94:
    // 0x17fc94: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x17fc94u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_17fc98:
    // 0x17fc98: 0x4600d3c6  mov.s       $f15, $f26
    ctx->pc = 0x17fc98u;
    ctx->f[15] = FPU_MOV_S(ctx->f[26]);
label_17fc9c:
    // 0x17fc9c: 0x4600cc06  mov.s       $f16, $f25
    ctx->pc = 0x17fc9cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[25]);
label_17fca0:
    // 0x17fca0: 0x4600c446  mov.s       $f17, $f24
    ctx->pc = 0x17fca0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[24]);
label_17fca4:
    // 0x17fca4: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x17fca4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_17fca8:
    // 0x17fca8: 0xc06490c  jal         func_192430
label_17fcac:
    if (ctx->pc == 0x17FCACu) {
        ctx->pc = 0x17FCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FCA8u;
        // 0x17fcac: 0xe7b60010  swc1        $f22, 0x10($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FCB0u;
        goto label_17fcb0;
    }
    ctx->pc = 0x17FCA8u;
    SET_GPR_U32(ctx, 31, 0x17FCB0u);
    ctx->pc = 0x17FCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FCA8u;
    // 0x17fcac: 0xe7b60010  swc1        $f22, 0x10($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x192430u;
    { ctx->pc = 0x192430; return; }
    ctx->pc = 0x17FCB0u;
label_17fcb0:
    // 0x17fcb0: 0xc064654  jal         func_191950
label_17fcb4:
    if (ctx->pc == 0x17FCB4u) {
        ctx->pc = 0x17FCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FCB0u;
        // 0x17fcb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FCB8u;
        goto label_17fcb8;
    }
    ctx->pc = 0x17FCB0u;
    SET_GPR_U32(ctx, 31, 0x17FCB8u);
    ctx->pc = 0x17FCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FCB0u;
    // 0x17fcb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191950u;
    { ctx->pc = 0x191950; return; }
    ctx->pc = 0x17FCB8u;
label_17fcb8:
    // 0x17fcb8: 0x3c0343a0  lui         $v1, 0x43A0
    ctx->pc = 0x17fcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
label_17fcbc:
    // 0x17fcbc: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x17fcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
label_17fcc0:
    // 0x17fcc0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x17fcc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_17fcc4:
    // 0x17fcc4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17fcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_17fcc8:
    // 0x17fcc8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x17fcc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_17fccc:
    // 0x17fccc: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x17fcccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_17fcd0:
    // 0x17fcd0: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x17fcd0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_17fcd4:
    // 0x17fcd4: 0xc06494c  jal         func_192530
label_17fcd8:
    if (ctx->pc == 0x17FCD8u) {
        ctx->pc = 0x17FCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FCD4u;
        // 0x17fcd8: 0x4600b406  mov.s       $f16, $f22 (Delay Slot)
        ctx->f[16] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FCDCu;
        goto label_17fcdc;
    }
    ctx->pc = 0x17FCD4u;
    SET_GPR_U32(ctx, 31, 0x17FCDCu);
    ctx->pc = 0x17FCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FCD4u;
    // 0x17fcd8: 0x4600b406  mov.s       $f16, $f22 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x192530u;
    { ctx->pc = 0x192530; return; }
    ctx->pc = 0x17FCDCu;
label_17fcdc:
    // 0x17fcdc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x17fcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_17fce0:
    // 0x17fce0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x17fce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_17fce4:
    // 0x17fce4: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x17fce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_17fce8:
    // 0x17fce8: 0x24429c40  addiu       $v0, $v0, -0x63C0
    ctx->pc = 0x17fce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941760));
label_17fcec:
    // 0x17fcec: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x17fcecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17fcf0:
    // 0x17fcf0: 0x24849400  addiu       $a0, $a0, -0x6C00
    ctx->pc = 0x17fcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939648));
label_17fcf4:
    // 0x17fcf4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x17fcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_17fcf8:
    // 0x17fcf8: 0xc066d86  jal         func_19B618
label_17fcfc:
    if (ctx->pc == 0x17FCFCu) {
        ctx->pc = 0x17FCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FCF8u;
        // 0x17fcfc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FD00u;
        goto label_17fd00;
    }
    ctx->pc = 0x17FCF8u;
    SET_GPR_U32(ctx, 31, 0x17FD00u);
    ctx->pc = 0x17FCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FCF8u;
    // 0x17fcfc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    { ctx->pc = 0x19b618; return; }
    ctx->pc = 0x17FD00u;
label_17fd00:
    // 0x17fd00: 0xc064654  jal         func_191950
label_17fd04:
    if (ctx->pc == 0x17FD04u) {
        ctx->pc = 0x17FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD00u;
        // 0x17fd04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FD08u;
        goto label_17fd08;
    }
    ctx->pc = 0x17FD00u;
    SET_GPR_U32(ctx, 31, 0x17FD08u);
    ctx->pc = 0x17FD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FD00u;
    // 0x17fd04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191950u;
    { ctx->pc = 0x191950; return; }
    ctx->pc = 0x17FD08u;
label_17fd08:
    // 0x17fd08: 0x3c0244ff  lui         $v0, 0x44FF
    ctx->pc = 0x17fd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17663 << 16));
label_17fd0c:
    // 0x17fd0c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17fd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_17fd10:
    // 0x17fd10: 0x34436000  ori         $v1, $v0, 0x6000
    ctx->pc = 0x17fd10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
label_17fd14:
    // 0x17fd14: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x17fd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
label_17fd18:
    // 0x17fd18: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x17fd18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_17fd1c:
    // 0x17fd1c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x17fd1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_17fd20:
    // 0x17fd20: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x17fd20u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_17fd24:
    // 0x17fd24: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x17fd24u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_17fd28:
    // 0x17fd28: 0xc06494c  jal         func_192530
label_17fd2c:
    if (ctx->pc == 0x17FD2Cu) {
        ctx->pc = 0x17FD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD28u;
        // 0x17fd2c: 0x4600b406  mov.s       $f16, $f22 (Delay Slot)
        ctx->f[16] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FD30u;
        goto label_17fd30;
    }
    ctx->pc = 0x17FD28u;
    SET_GPR_U32(ctx, 31, 0x17FD30u);
    ctx->pc = 0x17FD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FD28u;
    // 0x17fd2c: 0x4600b406  mov.s       $f16, $f22 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x192530u;
    { ctx->pc = 0x192530; return; }
    ctx->pc = 0x17FD30u;
label_17fd30:
    // 0x17fd30: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x17fd30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_17fd34:
    // 0x17fd34: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17fd34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17fd38:
    // 0x17fd38: 0x248493c0  addiu       $a0, $a0, -0x6C40
    ctx->pc = 0x17fd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939584));
label_17fd3c:
    // 0x17fd3c: 0xc066d86  jal         func_19B618
label_17fd40:
    if (ctx->pc == 0x17FD40u) {
        ctx->pc = 0x17FD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD3Cu;
        // 0x17fd40: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FD44u;
        goto label_17fd44;
    }
    ctx->pc = 0x17FD3Cu;
    SET_GPR_U32(ctx, 31, 0x17FD44u);
    ctx->pc = 0x17FD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FD3Cu;
    // 0x17fd40: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    { ctx->pc = 0x19b618; return; }
    ctx->pc = 0x17FD44u;
label_17fd44:
    // 0x17fd44: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x17fd44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_17fd48:
    // 0x17fd48: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x17fd48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_17fd4c:
    // 0x17fd4c: 0x24849400  addiu       $a0, $a0, -0x6C00
    ctx->pc = 0x17fd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939648));
label_17fd50:
    // 0x17fd50: 0xc05fea8  jal         func_17FAA0
label_17fd54:
    if (ctx->pc == 0x17FD54u) {
        ctx->pc = 0x17FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD50u;
        // 0x17fd54: 0x24a593c0  addiu       $a1, $a1, -0x6C40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FD58u;
        goto label_17fd58;
    }
    ctx->pc = 0x17FD50u;
    SET_GPR_U32(ctx, 31, 0x17FD58u);
    ctx->pc = 0x17FD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FD50u;
    // 0x17fd54: 0x24a593c0  addiu       $a1, $a1, -0x6C40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FAA0u;
    goto label_17faa0;
    ctx->pc = 0x17FD58u;
label_17fd58:
    // 0x17fd58: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x17fd58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_17fd5c:
    // 0x17fd5c: 0xc7ba0038  lwc1        $f26, 0x38($sp)
    ctx->pc = 0x17fd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_17fd60:
    // 0x17fd60: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x17fd60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_17fd64:
    // 0x17fd64: 0xc7b90034  lwc1        $f25, 0x34($sp)
    ctx->pc = 0x17fd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_17fd68:
    // 0x17fd68: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17fd68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17fd6c:
    // 0x17fd6c: 0xc7b80030  lwc1        $f24, 0x30($sp)
    ctx->pc = 0x17fd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_17fd70:
    // 0x17fd70: 0xc7b7002c  lwc1        $f23, 0x2C($sp)
    ctx->pc = 0x17fd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_17fd74:
    // 0x17fd74: 0xc7b60028  lwc1        $f22, 0x28($sp)
    ctx->pc = 0x17fd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_17fd78:
    // 0x17fd78: 0xc7b50024  lwc1        $f21, 0x24($sp)
    ctx->pc = 0x17fd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_17fd7c:
    // 0x17fd7c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x17fd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_17fd80:
    // 0x17fd80: 0x3e00008  jr          $ra
label_17fd84:
    if (ctx->pc == 0x17FD84u) {
        ctx->pc = 0x17FD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD80u;
        // 0x17fd84: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FD88u;
        goto label_17fd88;
    }
    ctx->pc = 0x17FD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD80u;
        // 0x17fd84: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FD80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FD88u;
label_17fd88:
    // 0x17fd88: 0x0  nop
    ctx->pc = 0x17fd88u;
    // NOP
label_17fd8c:
    // 0x17fd8c: 0x0  nop
    ctx->pc = 0x17fd8cu;
    // NOP
label_17fd90:
    // 0x17fd90: 0x8f86879c  lw          $a2, -0x7864($gp)
    ctx->pc = 0x17fd90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
label_17fd94:
    // 0x17fd94: 0x2cc10020  sltiu       $at, $a2, 0x20
    ctx->pc = 0x17fd94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_17fd98:
    // 0x17fd98: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
label_17fd9c:
    if (ctx->pc == 0x17FD9Cu) {
        ctx->pc = 0x17FDA0u;
        goto label_17fda0;
    }
    ctx->pc = 0x17FD98u;
    {
        const bool branch_taken_0x17fd98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fd98) {
            ctx->pc = 0x17FE84u;
            goto label_17fe84;
        }
    }
    ctx->pc = 0x17FDA0u;
label_17fda0:
    // 0x17fda0: 0x8c850090  lw          $a1, 0x90($a0)
    ctx->pc = 0x17fda0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_17fda4:
    // 0x17fda4: 0x3c030c00  lui         $v1, 0xC00
    ctx->pc = 0x17fda4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3072 << 16));
label_17fda8:
    // 0x17fda8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x17fda8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_17fdac:
    // 0x17fdac: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_17fdb0:
    if (ctx->pc == 0x17FDB0u) {
        ctx->pc = 0x17FDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FDACu;
        // 0x17fdb0: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FDB4u;
        goto label_17fdb4;
    }
    ctx->pc = 0x17FDACu;
    {
        const bool branch_taken_0x17fdac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FDACu;
        // 0x17fdb0: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fdac) {
            ctx->pc = 0x17FE4Cu;
            goto label_17fe4c;
        }
    }
    ctx->pc = 0x17FDB4u;
label_17fdb4:
    // 0x17fdb4: 0x8f838798  lw          $v1, -0x7868($gp)
    ctx->pc = 0x17fdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
label_17fdb8:
    // 0x17fdb8: 0x2c610020  sltiu       $at, $v1, 0x20
    ctx->pc = 0x17fdb8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_17fdbc:
    // 0x17fdbc: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
label_17fdc0:
    if (ctx->pc == 0x17FDC0u) {
        ctx->pc = 0x17FDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FDBCu;
        // 0x17fdc0: 0x338c0  sll         $a3, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FDC4u;
        goto label_17fdc4;
    }
    ctx->pc = 0x17FDBCu;
    {
        const bool branch_taken_0x17fdbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FDBCu;
        // 0x17fdc0: 0x338c0  sll         $a3, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fdbc) {
            ctx->pc = 0x17FE3Cu;
            goto label_17fe3c;
        }
    }
    ctx->pc = 0x17FDC4u;
label_17fdc4:
    // 0x17fdc4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x17fdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_17fdc8:
    // 0x17fdc8: 0x246391c0  addiu       $v1, $v1, -0x6E40
    ctx->pc = 0x17fdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939072));
label_17fdcc:
    // 0x17fdcc: 0x672821  addu        $a1, $v1, $a3
    ctx->pc = 0x17fdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_17fdd0:
    // 0x17fdd0: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x17fdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_17fdd4:
    // 0x17fdd4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x17fdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_17fdd8:
    // 0x17fdd8: 0x8c860090  lw          $a2, 0x90($a0)
    ctx->pc = 0x17fdd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_17fddc:
    // 0x17fddc: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x17fddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_17fde0:
    // 0x17fde0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_17fde4:
    if (ctx->pc == 0x17FDE4u) {
        ctx->pc = 0x17FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FDE0u;
        // 0x17fde4: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FDE8u;
        goto label_17fde8;
    }
    ctx->pc = 0x17FDE0u;
    {
        const bool branch_taken_0x17fde0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FDE0u;
        // 0x17fde4: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fde0) {
            ctx->pc = 0x17FE10u;
            goto label_17fe10;
        }
    }
    ctx->pc = 0x17FDE8u;
label_17fde8:
    // 0x17fde8: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x17fde8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_17fdec:
    // 0x17fdec: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x17fdecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_17fdf0:
    // 0x17fdf0: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x17fdf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_17fdf4:
    // 0x17fdf4: 0x246391c4  addiu       $v1, $v1, -0x6E3C
    ctx->pc = 0x17fdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939076));
label_17fdf8:
    // 0x17fdf8: 0xac850090  sw          $a1, 0x90($a0)
    ctx->pc = 0x17fdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 5));
label_17fdfc:
    // 0x17fdfc: 0x8f858798  lw          $a1, -0x7868($gp)
    ctx->pc = 0x17fdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
label_17fe00:
    // 0x17fe00: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x17fe00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_17fe04:
    // 0x17fe04: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17fe04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_17fe08:
    // 0x17fe08: 0x10000009  b           . + 4 + (0x9 << 2)
label_17fe0c:
    if (ctx->pc == 0x17FE0Cu) {
        ctx->pc = 0x17FE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE08u;
        // 0x17fe0c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FE10u;
        goto label_17fe10;
    }
    ctx->pc = 0x17FE08u;
    {
        const bool branch_taken_0x17fe08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE08u;
        // 0x17fe0c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe08) {
            ctx->pc = 0x17FE30u;
            goto label_17fe30;
        }
    }
    ctx->pc = 0x17FE10u;
label_17fe10:
    // 0x17fe10: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17fe10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17fe14:
    // 0x17fe14: 0x246391c4  addiu       $v1, $v1, -0x6E3C
    ctx->pc = 0x17fe14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939076));
label_17fe18:
    // 0x17fe18: 0x672821  addu        $a1, $v1, $a3
    ctx->pc = 0x17fe18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_17fe1c:
    // 0x17fe1c: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x17fe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_17fe20:
    // 0x17fe20: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x17fe20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_17fe24:
    // 0x17fe24: 0x8c850090  lw          $a1, 0x90($a0)
    ctx->pc = 0x17fe24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_17fe28:
    // 0x17fe28: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x17fe28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_17fe2c:
    // 0x17fe2c: 0xac830090  sw          $v1, 0x90($a0)
    ctx->pc = 0x17fe2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 3));
label_17fe30:
    // 0x17fe30: 0x8f838798  lw          $v1, -0x7868($gp)
    ctx->pc = 0x17fe30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
label_17fe34:
    // 0x17fe34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17fe34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_17fe38:
    // 0x17fe38: 0xaf838798  sw          $v1, -0x7868($gp)
    ctx->pc = 0x17fe38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936472), GPR_U32(ctx, 3));
label_17fe3c:
    // 0x17fe3c: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x17fe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_17fe40:
    // 0x17fe40: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x17fe40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_17fe44:
    // 0x17fe44: 0x1000000f  b           . + 4 + (0xF << 2)
label_17fe48:
    if (ctx->pc == 0x17FE48u) {
        ctx->pc = 0x17FE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE44u;
        // 0x17fe48: 0xac830090  sw          $v1, 0x90($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FE4Cu;
        goto label_17fe4c;
    }
    ctx->pc = 0x17FE44u;
    {
        const bool branch_taken_0x17fe44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE44u;
        // 0x17fe48: 0xac830090  sw          $v1, 0x90($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe44) {
            ctx->pc = 0x17FE84u;
            goto label_17fe84;
        }
    }
    ctx->pc = 0x17FE4Cu;
label_17fe4c:
    // 0x17fe4c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x17fe4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_17fe50:
    // 0x17fe50: 0x246392c0  addiu       $v1, $v1, -0x6D40
    ctx->pc = 0x17fe50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939328));
label_17fe54:
    // 0x17fe54: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x17fe54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_17fe58:
    // 0x17fe58: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x17fe58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_17fe5c:
    // 0x17fe5c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x17fe5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_17fe60:
    // 0x17fe60: 0x246392c4  addiu       $v1, $v1, -0x6D3C
    ctx->pc = 0x17fe60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939332));
label_17fe64:
    // 0x17fe64: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x17fe64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_17fe68:
    // 0x17fe68: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x17fe68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_17fe6c:
    // 0x17fe6c: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x17fe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_17fe70:
    // 0x17fe70: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x17fe70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_17fe74:
    // 0x17fe74: 0xac830090  sw          $v1, 0x90($a0)
    ctx->pc = 0x17fe74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 3));
label_17fe78:
    // 0x17fe78: 0x8f83879c  lw          $v1, -0x7864($gp)
    ctx->pc = 0x17fe78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
label_17fe7c:
    // 0x17fe7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17fe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_17fe80:
    // 0x17fe80: 0xaf83879c  sw          $v1, -0x7864($gp)
    ctx->pc = 0x17fe80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936476), GPR_U32(ctx, 3));
label_17fe84:
    // 0x17fe84: 0x3e00008  jr          $ra
label_17fe88:
    if (ctx->pc == 0x17FE88u) {
        ctx->pc = 0x17FE8Cu;
        goto label_17fe8c;
    }
    ctx->pc = 0x17FE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FE84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FE8Cu;
label_17fe8c:
    // 0x17fe8c: 0x0  nop
    ctx->pc = 0x17fe8cu;
    // NOP
label_17fe90:
    // 0x17fe90: 0xaf80879c  sw          $zero, -0x7864($gp)
    ctx->pc = 0x17fe90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936476), GPR_U32(ctx, 0));
label_17fe94:
    // 0x17fe94: 0x3e00008  jr          $ra
label_17fe98:
    if (ctx->pc == 0x17FE98u) {
        ctx->pc = 0x17FE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE94u;
        // 0x17fe98: 0xaf808798  sw          $zero, -0x7868($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936472), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FE9Cu;
        goto label_17fe9c;
    }
    ctx->pc = 0x17FE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE94u;
        // 0x17fe98: 0xaf808798  sw          $zero, -0x7868($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936472), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FE9Cu;
label_17fe9c:
    // 0x17fe9c: 0x0  nop
    ctx->pc = 0x17fe9cu;
    // NOP
label_17fea0:
    // 0x17fea0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x17fea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_17fea4:
    // 0x17fea4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17fea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17fea8:
    // 0x17fea8: 0xc06fff8  jal         func_1BFFE0
label_17feac:
    if (ctx->pc == 0x17FEACu) {
        ctx->pc = 0x17FEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FEA8u;
        // 0x17feac: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FEB0u;
        goto label_17feb0;
    }
    ctx->pc = 0x17FEA8u;
    SET_GPR_U32(ctx, 31, 0x17FEB0u);
    ctx->pc = 0x17FEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FEA8u;
    // 0x17feac: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFFE0u;
    { ctx->pc = 0x1bffe0; return; }
    ctx->pc = 0x17FEB0u;
label_17feb0:
    // 0x17feb0: 0xc069c1a  jal         func_1A7068
label_17feb4:
    if (ctx->pc == 0x17FEB4u) {
        ctx->pc = 0x17FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FEB0u;
        // 0x17feb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FEB8u;
        goto label_17feb8;
    }
    ctx->pc = 0x17FEB0u;
    SET_GPR_U32(ctx, 31, 0x17FEB8u);
    ctx->pc = 0x17FEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FEB0u;
    // 0x17feb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7068u;
    { ctx->pc = 0x1a7068; return; }
    ctx->pc = 0x17FEB8u;
label_17feb8:
    // 0x17feb8: 0xc06bf82  jal         func_1AFE08
label_17febc:
    if (ctx->pc == 0x17FEBCu) {
        ctx->pc = 0x17FEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FEB8u;
        // 0x17febc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FEC0u;
        goto label_17fec0;
    }
    ctx->pc = 0x17FEB8u;
    SET_GPR_U32(ctx, 31, 0x17FEC0u);
    ctx->pc = 0x17FEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FEB8u;
    // 0x17febc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFE08u;
    { ctx->pc = 0x1afe08; return; }
    ctx->pc = 0x17FEC0u;
label_17fec0:
    // 0x17fec0: 0x0  nop
    ctx->pc = 0x17fec0u;
    // NOP
label_17fec4:
    // 0x17fec4: 0x0  nop
    ctx->pc = 0x17fec4u;
    // NOP
label_17fec8:
    // 0x17fec8: 0x0  nop
    ctx->pc = 0x17fec8u;
    // NOP
label_17fecc:
    // 0x17fecc: 0x0  nop
    ctx->pc = 0x17feccu;
    // NOP
label_17fed0:
    // 0x17fed0: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_17fed4:
    if (ctx->pc == 0x17FED4u) {
        ctx->pc = 0x17FED8u;
        goto label_17fed8;
    }
    ctx->pc = 0x17FED0u;
    {
        const bool branch_taken_0x17fed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fed0) {
            ctx->pc = 0x17FEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17feb8;
        }
    }
    ctx->pc = 0x17FED8u;
label_17fed8:
    // 0x17fed8: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x17fed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_17fedc:
    // 0x17fedc: 0xc06b2b0  jal         func_1ACAC0
label_17fee0:
    if (ctx->pc == 0x17FEE0u) {
        ctx->pc = 0x17FEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FEDCu;
        // 0x17fee0: 0x24849810  addiu       $a0, $a0, -0x67F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FEE4u;
        goto label_17fee4;
    }
    ctx->pc = 0x17FEDCu;
    SET_GPR_U32(ctx, 31, 0x17FEE4u);
    ctx->pc = 0x17FEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FEDCu;
    // 0x17fee0: 0x24849810  addiu       $a0, $a0, -0x67F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACAC0u;
    { ctx->pc = 0x1acac0; return; }
    ctx->pc = 0x17FEE4u;
label_17fee4:
    // 0x17fee4: 0x0  nop
    ctx->pc = 0x17fee4u;
    // NOP
label_17fee8:
    // 0x17fee8: 0x0  nop
    ctx->pc = 0x17fee8u;
    // NOP
label_17feec:
    // 0x17feec: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_17fef0:
    if (ctx->pc == 0x17FEF0u) {
        ctx->pc = 0x17FEF4u;
        goto label_17fef4;
    }
    ctx->pc = 0x17FEECu;
    {
        const bool branch_taken_0x17feec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17feec) {
            ctx->pc = 0x17FED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fed8;
        }
    }
    ctx->pc = 0x17FEF4u;
label_17fef4:
    // 0x17fef4: 0x0  nop
    ctx->pc = 0x17fef4u;
    // NOP
label_17fef8:
    // 0x17fef8: 0xc06b2a2  jal         func_1ACA88
label_17fefc:
    if (ctx->pc == 0x17FEFCu) {
        ctx->pc = 0x17FF00u;
        goto label_17ff00;
    }
    ctx->pc = 0x17FEF8u;
    SET_GPR_U32(ctx, 31, 0x17FF00u);
    ctx->pc = 0x1ACA88u;
    { ctx->pc = 0x1aca88; return; }
    ctx->pc = 0x17FF00u;
label_17ff00:
    // 0x17ff00: 0x0  nop
    ctx->pc = 0x17ff00u;
    // NOP
label_17ff04:
    // 0x17ff04: 0x0  nop
    ctx->pc = 0x17ff04u;
    // NOP
label_17ff08:
    // 0x17ff08: 0x0  nop
    ctx->pc = 0x17ff08u;
    // NOP
label_17ff0c:
    // 0x17ff0c: 0x0  nop
    ctx->pc = 0x17ff0cu;
    // NOP
label_17ff10:
    // 0x17ff10: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
label_17ff14:
    if (ctx->pc == 0x17FF14u) {
        ctx->pc = 0x17FF18u;
        goto label_17ff18;
    }
    ctx->pc = 0x17FF10u;
    {
        const bool branch_taken_0x17ff10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ff10) {
            ctx->pc = 0x17FEF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fef4;
        }
    }
    ctx->pc = 0x17FF18u;
label_17ff18:
    // 0x17ff18: 0xc069c1a  jal         func_1A7068
label_17ff1c:
    if (ctx->pc == 0x17FF1Cu) {
        ctx->pc = 0x17FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF18u;
        // 0x17ff1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FF20u;
        goto label_17ff20;
    }
    ctx->pc = 0x17FF18u;
    SET_GPR_U32(ctx, 31, 0x17FF20u);
    ctx->pc = 0x17FF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FF18u;
    // 0x17ff1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7068u;
    { ctx->pc = 0x1a7068; return; }
    ctx->pc = 0x17FF20u;
label_17ff20:
    // 0x17ff20: 0xc06af54  jal         func_1ABD50
label_17ff24:
    if (ctx->pc == 0x17FF24u) {
        ctx->pc = 0x17FF28u;
        goto label_17ff28;
    }
    ctx->pc = 0x17FF20u;
    SET_GPR_U32(ctx, 31, 0x17FF28u);
    ctx->pc = 0x1ABD50u;
    { ctx->pc = 0x1abd50; return; }
    ctx->pc = 0x17FF28u;
label_17ff28:
    // 0x17ff28: 0xc06a226  jal         func_1A8898
label_17ff2c:
    if (ctx->pc == 0x17FF2Cu) {
        ctx->pc = 0x17FF30u;
        goto label_17ff30;
    }
    ctx->pc = 0x17FF28u;
    SET_GPR_U32(ctx, 31, 0x17FF30u);
    ctx->pc = 0x1A8898u;
    { ctx->pc = 0x1a8898; return; }
    ctx->pc = 0x17FF30u;
label_17ff30:
    // 0x17ff30: 0xc06bf82  jal         func_1AFE08
label_17ff34:
    if (ctx->pc == 0x17FF34u) {
        ctx->pc = 0x17FF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF30u;
        // 0x17ff34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FF38u;
        goto label_17ff38;
    }
    ctx->pc = 0x17FF30u;
    SET_GPR_U32(ctx, 31, 0x17FF38u);
    ctx->pc = 0x17FF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FF30u;
    // 0x17ff34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFE08u;
    { ctx->pc = 0x1afe08; return; }
    ctx->pc = 0x17FF38u;
label_17ff38:
    // 0x17ff38: 0x0  nop
    ctx->pc = 0x17ff38u;
    // NOP
label_17ff3c:
    // 0x17ff3c: 0x0  nop
    ctx->pc = 0x17ff3cu;
    // NOP
label_17ff40:
    // 0x17ff40: 0x0  nop
    ctx->pc = 0x17ff40u;
    // NOP
label_17ff44:
    // 0x17ff44: 0x0  nop
    ctx->pc = 0x17ff44u;
    // NOP
label_17ff48:
    // 0x17ff48: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_17ff4c:
    if (ctx->pc == 0x17FF4Cu) {
        ctx->pc = 0x17FF50u;
        goto label_17ff50;
    }
    ctx->pc = 0x17FF48u;
    {
        const bool branch_taken_0x17ff48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ff48) {
            ctx->pc = 0x17FF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ff30;
        }
    }
    ctx->pc = 0x17FF50u;
label_17ff50:
    // 0x17ff50: 0xc06c0b8  jal         func_1B02E0
label_17ff54:
    if (ctx->pc == 0x17FF54u) {
        ctx->pc = 0x17FF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF50u;
        // 0x17ff54: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FF58u;
        goto label_17ff58;
    }
    ctx->pc = 0x17FF50u;
    SET_GPR_U32(ctx, 31, 0x17FF58u);
    ctx->pc = 0x17FF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FF50u;
    // 0x17ff54: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B02E0u;
    { ctx->pc = 0x1b02e0; return; }
    ctx->pc = 0x17FF58u;
label_17ff58:
    // 0x17ff58: 0x0  nop
    ctx->pc = 0x17ff58u;
    // NOP
label_17ff5c:
    // 0x17ff5c: 0x0  nop
    ctx->pc = 0x17ff5cu;
    // NOP
label_17ff60:
    // 0x17ff60: 0x0  nop
    ctx->pc = 0x17ff60u;
    // NOP
label_17ff64:
    // 0x17ff64: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_17ff68:
    if (ctx->pc == 0x17FF68u) {
        ctx->pc = 0x17FF6Cu;
        goto label_17ff6c;
    }
    ctx->pc = 0x17FF64u;
    {
        const bool branch_taken_0x17ff64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ff64) {
            ctx->pc = 0x17FF50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ff50;
        }
    }
    ctx->pc = 0x17FF6Cu;
label_17ff6c:
    // 0x17ff6c: 0x10000014  b           . + 4 + (0x14 << 2)
label_17ff70:
    if (ctx->pc == 0x17FF70u) {
        ctx->pc = 0x17FF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF6Cu;
        // 0x17ff70: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FF74u;
        goto label_17ff74;
    }
    ctx->pc = 0x17FF6Cu;
    {
        const bool branch_taken_0x17ff6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF6Cu;
        // 0x17ff70: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff6c) {
            ctx->pc = 0x17FFC0u;
            goto label_17ffc0;
        }
    }
    ctx->pc = 0x17FF74u;
label_17ff74:
    // 0x17ff74: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x17ff74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_17ff78:
    // 0x17ff78: 0x24429830  addiu       $v0, $v0, -0x67D0
    ctx->pc = 0x17ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940720));
label_17ff7c:
    // 0x17ff7c: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x17ff7cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_17ff80:
    // 0x17ff80: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x17ff80u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_17ff84:
    // 0x17ff84: 0xc08f28e  jal         func_23CA38
label_17ff88:
    if (ctx->pc == 0x17FF88u) {
        ctx->pc = 0x17FF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF84u;
        // 0x17ff88: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FF8Cu;
        goto label_17ff8c;
    }
    ctx->pc = 0x17FF84u;
    SET_GPR_U32(ctx, 31, 0x17FF8Cu);
    ctx->pc = 0x17FF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FF84u;
    // 0x17ff88: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CA38u;
    { ctx->pc = 0x23ca38; return; }
    ctx->pc = 0x17FF8Cu;
label_17ff8c:
    // 0x17ff8c: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x17ff8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_17ff90:
    // 0x17ff90: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x17ff90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_17ff94:
    // 0x17ff94: 0xc08f28e  jal         func_23CA38
label_17ff98:
    if (ctx->pc == 0x17FF98u) {
        ctx->pc = 0x17FF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF94u;
        // 0x17ff98: 0x24a59838  addiu       $a1, $a1, -0x67C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FF9Cu;
        goto label_17ff9c;
    }
    ctx->pc = 0x17FF94u;
    SET_GPR_U32(ctx, 31, 0x17FF9Cu);
    ctx->pc = 0x17FF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FF94u;
    // 0x17ff98: 0x24a59838  addiu       $a1, $a1, -0x67C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CA38u;
    { ctx->pc = 0x23ca38; return; }
    ctx->pc = 0x17FF9Cu;
label_17ff9c:
    // 0x17ff9c: 0x0  nop
    ctx->pc = 0x17ff9cu;
    // NOP
label_17ffa0:
    // 0x17ffa0: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x17ffa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
label_17ffa4:
    // 0x17ffa4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x17ffa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_17ffa8:
    // 0x17ffa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17ffa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17ffac:
    // 0x17ffac: 0xc06b170  jal         func_1AC5C0
label_17ffb0:
    if (ctx->pc == 0x17FFB0u) {
        ctx->pc = 0x17FFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FFACu;
        // 0x17ffb0: 0x24c69840  addiu       $a2, $a2, -0x67C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FFB4u;
        goto label_17ffb4;
    }
    ctx->pc = 0x17FFACu;
    SET_GPR_U32(ctx, 31, 0x17FFB4u);
    ctx->pc = 0x17FFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FFACu;
    // 0x17ffb0: 0x24c69840  addiu       $a2, $a2, -0x67C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC5C0u;
    { ctx->pc = 0x1ac5c0; return; }
    ctx->pc = 0x17FFB4u;
label_17ffb4:
    // 0x17ffb4: 0x440fff9  bltz        $v0, . + 4 + (-0x7 << 2)
label_17ffb8:
    if (ctx->pc == 0x17FFB8u) {
        ctx->pc = 0x17FFBCu;
        goto label_17ffbc;
    }
    ctx->pc = 0x17FFB4u;
    {
        const bool branch_taken_0x17ffb4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17ffb4) {
            ctx->pc = 0x17FF9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ff9c;
        }
    }
    ctx->pc = 0x17FFBCu;
label_17ffbc:
    // 0x17ffbc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x17ffbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_17ffc0:
    // 0x17ffc0: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x17ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_17ffc4:
    // 0x17ffc4: 0x24422a00  addiu       $v0, $v0, 0x2A00
    ctx->pc = 0x17ffc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10752));
label_17ffc8:
    // 0x17ffc8: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x17ffc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_17ffcc:
    // 0x17ffcc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17ffccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17ffd0:
    // 0x17ffd0: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_17ffd4:
    if (ctx->pc == 0x17FFD4u) {
        ctx->pc = 0x17FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FFD0u;
        // 0x17ffd4: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FFD8u;
        goto label_17ffd8;
    }
    ctx->pc = 0x17FFD0u;
    {
        const bool branch_taken_0x17ffd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FFD0u;
        // 0x17ffd4: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ffd0) {
            ctx->pc = 0x17FF74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ff74;
        }
    }
    ctx->pc = 0x17FFD8u;
label_17ffd8:
    // 0x17ffd8: 0xc0669a2  jal         func_19A688
label_17ffdc:
    if (ctx->pc == 0x17FFDCu) {
        ctx->pc = 0x17FFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FFD8u;
        // 0x17ffdc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FFE0u;
        goto label_17ffe0;
    }
    ctx->pc = 0x17FFD8u;
    SET_GPR_U32(ctx, 31, 0x17FFE0u);
    ctx->pc = 0x17FFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FFD8u;
    // 0x17ffdc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A688u;
    { ctx->pc = 0x19a688; return; }
    ctx->pc = 0x17FFE0u;
label_17ffe0:
    // 0x17ffe0: 0xc06614e  jal         func_198538
label_17ffe4:
    if (ctx->pc == 0x17FFE4u) {
        ctx->pc = 0x17FFE8u;
        goto label_17ffe8;
    }
    ctx->pc = 0x17FFE0u;
    SET_GPR_U32(ctx, 31, 0x17FFE8u);
    ctx->pc = 0x198538u;
    { ctx->pc = 0x198538; return; }
    ctx->pc = 0x17FFE8u;
label_17ffe8:
    // 0x17ffe8: 0xc066998  jal         func_19A660
label_17ffec:
    if (ctx->pc == 0x17FFECu) {
        ctx->pc = 0x17FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FFE8u;
        // 0x17ffec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FFF0u;
        goto label_17fff0;
    }
    ctx->pc = 0x17FFE8u;
    SET_GPR_U32(ctx, 31, 0x17FFF0u);
    ctx->pc = 0x17FFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FFE8u;
    // 0x17ffec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A660u;
    { ctx->pc = 0x19a660; return; }
    ctx->pc = 0x17FFF0u;
label_17fff0:
    // 0x17fff0: 0xaf8287a4  sw          $v0, -0x785C($gp)
    ctx->pc = 0x17fff0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936484), GPR_U32(ctx, 2));
label_17fff4:
    // 0x17fff4: 0x64030040  daddiu      $v1, $zero, 0x40
    ctx->pc = 0x17fff4u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
label_17fff8:
    // 0x17fff8: 0x8f8587a4  lw          $a1, -0x785C($gp)
    ctx->pc = 0x17fff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936484)));
label_17fffc:
    // 0x17fffc: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x17fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_180000:
    // 0x180000: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x180000u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_180004:
    // 0x180004: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x180004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_180008:
    // 0x180008: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x180008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_18000c:
    // 0x18000c: 0xc06005c  jal         func_180170
label_180010:
    if (ctx->pc == 0x180010u) {
        ctx->pc = 0x180010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18000Cu;
        // 0x180010: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180014u;
        goto label_180014;
    }
    ctx->pc = 0x18000Cu;
    SET_GPR_U32(ctx, 31, 0x180014u);
    ctx->pc = 0x180010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18000Cu;
    // 0x180010: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180170u;
    { ctx->pc = 0x180170; return; }
    ctx->pc = 0x180014u;
label_180014:
    // 0x180014: 0xc0810ac  jal         func_2042B0
label_180018:
    if (ctx->pc == 0x180018u) {
        ctx->pc = 0x18001Cu;
        goto label_18001c;
    }
    ctx->pc = 0x180014u;
    SET_GPR_U32(ctx, 31, 0x18001Cu);
    ctx->pc = 0x2042B0u;
    { ctx->pc = 0x2042b0; return; }
    ctx->pc = 0x18001Cu;
label_18001c:
    // 0x18001c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x18001cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_180020:
    // 0x180020: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x180020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_180024:
    // 0x180024: 0xff8087b8  sd          $zero, -0x7848($gp)
    ctx->pc = 0x180024u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936504), GPR_U64(ctx, 0));
label_180028:
    // 0x180028: 0xff8087d0  sd          $zero, -0x7830($gp)
    ctx->pc = 0x180028u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936528), GPR_U64(ctx, 0));
label_18002c:
    // 0x18002c: 0xff8087c8  sd          $zero, -0x7838($gp)
    ctx->pc = 0x18002cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936520), GPR_U64(ctx, 0));
label_180030:
    // 0x180030: 0xc05c2c4  jal         func_170B10
label_180034:
    if (ctx->pc == 0x180034u) {
        ctx->pc = 0x180034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180030u;
        // 0x180034: 0xff8087c0  sd          $zero, -0x7840($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294936512), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180038u;
        goto label_180038;
    }
    ctx->pc = 0x180030u;
    SET_GPR_U32(ctx, 31, 0x180038u);
    ctx->pc = 0x180034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180030u;
    // 0x180034: 0xff8087c0  sd          $zero, -0x7840($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936512), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170B10u;
    { ctx->pc = 0x170b10; return; }
    ctx->pc = 0x180038u;
label_180038:
    // 0x180038: 0xc08fd64  jal         func_23F590
label_18003c:
    if (ctx->pc == 0x18003Cu) {
        ctx->pc = 0x180040u;
        goto label_180040;
    }
    ctx->pc = 0x180038u;
    SET_GPR_U32(ctx, 31, 0x180040u);
    ctx->pc = 0x23F590u;
    { ctx->pc = 0x23f590; return; }
    ctx->pc = 0x180040u;
label_180040:
    // 0x180040: 0xc05bfb0  jal         func_16FEC0
label_180044:
    if (ctx->pc == 0x180044u) {
        ctx->pc = 0x180044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180040u;
        // 0x180044: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180048u;
        goto label_180048;
    }
    ctx->pc = 0x180040u;
    SET_GPR_U32(ctx, 31, 0x180048u);
    ctx->pc = 0x180044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180040u;
    // 0x180044: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FEC0u;
    { ctx->pc = 0x16fec0; return; }
    ctx->pc = 0x180048u;
label_180048:
    // 0x180048: 0xc08d108  jal         func_234420
label_18004c:
    if (ctx->pc == 0x18004Cu) {
        ctx->pc = 0x180050u;
        goto label_180050;
    }
    ctx->pc = 0x180048u;
    SET_GPR_U32(ctx, 31, 0x180050u);
    ctx->pc = 0x234420u;
    { ctx->pc = 0x234420; return; }
    ctx->pc = 0x180050u;
label_180050:
    // 0x180050: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x180050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180054:
    // 0x180054: 0xc06641a  jal         func_199068
label_180058:
    if (ctx->pc == 0x180058u) {
        ctx->pc = 0x180058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180054u;
        // 0x180058: 0xaf8087d8  sw          $zero, -0x7828($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936536), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18005Cu;
        goto label_18005c;
    }
    ctx->pc = 0x180054u;
    SET_GPR_U32(ctx, 31, 0x18005Cu);
    ctx->pc = 0x180058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180054u;
    // 0x180058: 0xaf8087d8  sw          $zero, -0x7828($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936536), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199068u;
    { ctx->pc = 0x199068; return; }
    ctx->pc = 0x18005Cu;
label_18005c:
    // 0x18005c: 0xc06641a  jal         func_199068
label_180060:
    if (ctx->pc == 0x180060u) {
        ctx->pc = 0x180060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18005Cu;
        // 0x180060: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180064u;
        goto label_180064;
    }
    ctx->pc = 0x18005Cu;
    SET_GPR_U32(ctx, 31, 0x180064u);
    ctx->pc = 0x180060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18005Cu;
    // 0x180060: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199068u;
    { ctx->pc = 0x199068; return; }
    ctx->pc = 0x180064u;
label_180064:
    // 0x180064: 0xc0694c0  jal         func_1A5300
label_180068:
    if (ctx->pc == 0x180068u) {
        ctx->pc = 0x180068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180064u;
        // 0x180068: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18006Cu;
        goto label_18006c;
    }
    ctx->pc = 0x180064u;
    SET_GPR_U32(ctx, 31, 0x18006Cu);
    ctx->pc = 0x180068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180064u;
    // 0x180068: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5300u;
    { ctx->pc = 0x1a5300; return; }
    ctx->pc = 0x18006Cu;
label_18006c:
    // 0x18006c: 0xc06e068  jal         func_1B81A0
label_180070:
    if (ctx->pc == 0x180070u) {
        ctx->pc = 0x180074u;
        goto label_180074;
    }
    ctx->pc = 0x18006Cu;
    SET_GPR_U32(ctx, 31, 0x180074u);
    ctx->pc = 0x1B81A0u;
    { ctx->pc = 0x1b81a0; return; }
    ctx->pc = 0x180074u;
label_180074:
    // 0x180074: 0xc0692a8  jal         func_1A4AA0
label_180078:
    if (ctx->pc == 0x180078u) {
        ctx->pc = 0x180078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180074u;
        // 0x180078: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18007Cu;
        goto label_18007c;
    }
    ctx->pc = 0x180074u;
    SET_GPR_U32(ctx, 31, 0x18007Cu);
    ctx->pc = 0x180078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180074u;
    // 0x180078: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    { ctx->pc = 0x1a4aa0; return; }
    ctx->pc = 0x18007Cu;
label_18007c:
    // 0x18007c: 0xc06641a  jal         func_199068
label_180080:
    if (ctx->pc == 0x180080u) {
        ctx->pc = 0x180080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18007Cu;
        // 0x180080: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180084u;
        goto label_180084;
    }
    ctx->pc = 0x18007Cu;
    SET_GPR_U32(ctx, 31, 0x180084u);
    ctx->pc = 0x180080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18007Cu;
    // 0x180080: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199068u;
    { ctx->pc = 0x199068; return; }
    ctx->pc = 0x180084u;
label_180084:
    // 0x180084: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x180084u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_180088:
    // 0x180088: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x180088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
label_18008c:
    // 0x18008c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x18008cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_180090:
    // 0x180090: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x180090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_180094:
    // 0x180094: 0xac233ffc  sw          $v1, 0x3FFC($at)
    ctx->pc = 0x180094u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16380), GPR_U32(ctx, 3));
label_180098:
    // 0x180098: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18009c:
    // 0x18009c: 0xaf808808  sw          $zero, -0x77F8($gp)
    ctx->pc = 0x18009cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936584), GPR_U32(ctx, 0));
label_1800a0:
    // 0x1800a0: 0x3c011200  lui         $at, 0x1200
    ctx->pc = 0x1800a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
label_1800a4:
    // 0x1800a4: 0xaf8287e4  sw          $v0, -0x781C($gp)
    ctx->pc = 0x1800a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936548), GPR_U32(ctx, 2));
label_1800a8:
    // 0x1800a8: 0x24840610  addiu       $a0, $a0, 0x610
    ctx->pc = 0x1800a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1552));
label_1800ac:
    // 0x1800ac: 0xaf808800  sw          $zero, -0x7800($gp)
    ctx->pc = 0x1800acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936576), GPR_U32(ctx, 0));
    ctx->pc = 0x1800b0u;
    return;
}
