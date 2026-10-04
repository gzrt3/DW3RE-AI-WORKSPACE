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


void FUN_001d49b0_part220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x23f8a0u: goto label_23f8a0;
        case 0x23f8a4u: goto label_23f8a4;
        case 0x23f8a8u: goto label_23f8a8;
        case 0x23f8acu: goto label_23f8ac;
        case 0x23f8b0u: goto label_23f8b0;
        case 0x23f8b4u: goto label_23f8b4;
        case 0x23f8b8u: goto label_23f8b8;
        case 0x23f8bcu: goto label_23f8bc;
        case 0x23f8c0u: goto label_23f8c0;
        case 0x23f8c4u: goto label_23f8c4;
        case 0x23f8c8u: goto label_23f8c8;
        case 0x23f8ccu: goto label_23f8cc;
        case 0x23f8d0u: goto label_23f8d0;
        case 0x23f8d4u: goto label_23f8d4;
        case 0x23f8d8u: goto label_23f8d8;
        case 0x23f8dcu: goto label_23f8dc;
        case 0x23f8e0u: goto label_23f8e0;
        case 0x23f8e4u: goto label_23f8e4;
        case 0x23f8e8u: goto label_23f8e8;
        case 0x23f8ecu: goto label_23f8ec;
        case 0x23f8f0u: goto label_23f8f0;
        case 0x23f8f4u: goto label_23f8f4;
        case 0x23f8f8u: goto label_23f8f8;
        case 0x23f8fcu: goto label_23f8fc;
        case 0x23f900u: goto label_23f900;
        case 0x23f904u: goto label_23f904;
        case 0x23f908u: goto label_23f908;
        case 0x23f90cu: goto label_23f90c;
        case 0x23f910u: goto label_23f910;
        case 0x23f914u: goto label_23f914;
        case 0x23f918u: goto label_23f918;
        case 0x23f91cu: goto label_23f91c;
        case 0x23f920u: goto label_23f920;
        case 0x23f924u: goto label_23f924;
        case 0x23f928u: goto label_23f928;
        case 0x23f92cu: goto label_23f92c;
        case 0x23f930u: goto label_23f930;
        case 0x23f934u: goto label_23f934;
        case 0x23f938u: goto label_23f938;
        case 0x23f93cu: goto label_23f93c;
        case 0x23f940u: goto label_23f940;
        case 0x23f944u: goto label_23f944;
        case 0x23f948u: goto label_23f948;
        case 0x23f94cu: goto label_23f94c;
        case 0x23f950u: goto label_23f950;
        case 0x23f954u: goto label_23f954;
        case 0x23f958u: goto label_23f958;
        case 0x23f95cu: goto label_23f95c;
        case 0x23f960u: goto label_23f960;
        case 0x23f964u: goto label_23f964;
        case 0x23f968u: goto label_23f968;
        case 0x23f96cu: goto label_23f96c;
        case 0x23f970u: goto label_23f970;
        case 0x23f974u: goto label_23f974;
        case 0x23f978u: goto label_23f978;
        case 0x23f97cu: goto label_23f97c;
        case 0x23f980u: goto label_23f980;
        case 0x23f984u: goto label_23f984;
        case 0x23f988u: goto label_23f988;
        case 0x23f98cu: goto label_23f98c;
        case 0x23f990u: goto label_23f990;
        case 0x23f994u: goto label_23f994;
        case 0x23f998u: goto label_23f998;
        case 0x23f99cu: goto label_23f99c;
        case 0x23f9a0u: goto label_23f9a0;
        case 0x23f9a4u: goto label_23f9a4;
        case 0x23f9a8u: goto label_23f9a8;
        case 0x23f9acu: goto label_23f9ac;
        case 0x23f9b0u: goto label_23f9b0;
        case 0x23f9b4u: goto label_23f9b4;
        case 0x23f9b8u: goto label_23f9b8;
        case 0x23f9bcu: goto label_23f9bc;
        case 0x23f9c0u: goto label_23f9c0;
        case 0x23f9c4u: goto label_23f9c4;
        case 0x23f9c8u: goto label_23f9c8;
        case 0x23f9ccu: goto label_23f9cc;
        case 0x23f9d0u: goto label_23f9d0;
        case 0x23f9d4u: goto label_23f9d4;
        case 0x23f9d8u: goto label_23f9d8;
        case 0x23f9dcu: goto label_23f9dc;
        case 0x23f9e0u: goto label_23f9e0;
        case 0x23f9e4u: goto label_23f9e4;
        case 0x23f9e8u: goto label_23f9e8;
        case 0x23f9ecu: goto label_23f9ec;
        case 0x23f9f0u: goto label_23f9f0;
        case 0x23f9f4u: goto label_23f9f4;
        case 0x23f9f8u: goto label_23f9f8;
        case 0x23f9fcu: goto label_23f9fc;
        case 0x23fa00u: goto label_23fa00;
        case 0x23fa04u: goto label_23fa04;
        case 0x23fa08u: goto label_23fa08;
        case 0x23fa0cu: goto label_23fa0c;
        case 0x23fa10u: goto label_23fa10;
        case 0x23fa14u: goto label_23fa14;
        case 0x23fa18u: goto label_23fa18;
        case 0x23fa1cu: goto label_23fa1c;
        case 0x23fa20u: goto label_23fa20;
        case 0x23fa24u: goto label_23fa24;
        case 0x23fa28u: goto label_23fa28;
        case 0x23fa2cu: goto label_23fa2c;
        case 0x23fa30u: goto label_23fa30;
        case 0x23fa34u: goto label_23fa34;
        case 0x23fa38u: goto label_23fa38;
        case 0x23fa3cu: goto label_23fa3c;
        case 0x23fa40u: goto label_23fa40;
        case 0x23fa44u: goto label_23fa44;
        case 0x23fa48u: goto label_23fa48;
        case 0x23fa4cu: goto label_23fa4c;
        case 0x23fa50u: goto label_23fa50;
        case 0x23fa54u: goto label_23fa54;
        case 0x23fa58u: goto label_23fa58;
        case 0x23fa5cu: goto label_23fa5c;
        case 0x23fa60u: goto label_23fa60;
        case 0x23fa64u: goto label_23fa64;
        case 0x23fa68u: goto label_23fa68;
        case 0x23fa6cu: goto label_23fa6c;
        case 0x23fa70u: goto label_23fa70;
        case 0x23fa74u: goto label_23fa74;
        case 0x23fa78u: goto label_23fa78;
        case 0x23fa7cu: goto label_23fa7c;
        case 0x23fa80u: goto label_23fa80;
        case 0x23fa84u: goto label_23fa84;
        case 0x23fa88u: goto label_23fa88;
        case 0x23fa8cu: goto label_23fa8c;
        case 0x23fa90u: goto label_23fa90;
        case 0x23fa94u: goto label_23fa94;
        case 0x23fa98u: goto label_23fa98;
        case 0x23fa9cu: goto label_23fa9c;
        case 0x23faa0u: goto label_23faa0;
        case 0x23faa4u: goto label_23faa4;
        case 0x23faa8u: goto label_23faa8;
        case 0x23faacu: goto label_23faac;
        case 0x23fab0u: goto label_23fab0;
        case 0x23fab4u: goto label_23fab4;
        case 0x23fab8u: goto label_23fab8;
        case 0x23fabcu: goto label_23fabc;
        case 0x23fac0u: goto label_23fac0;
        case 0x23fac4u: goto label_23fac4;
        case 0x23fac8u: goto label_23fac8;
        case 0x23faccu: goto label_23facc;
        case 0x23fad0u: goto label_23fad0;
        case 0x23fad4u: goto label_23fad4;
        case 0x23fad8u: goto label_23fad8;
        case 0x23fadcu: goto label_23fadc;
        case 0x23fae0u: goto label_23fae0;
        case 0x23fae4u: goto label_23fae4;
        case 0x23fae8u: goto label_23fae8;
        case 0x23faecu: goto label_23faec;
        case 0x23faf0u: goto label_23faf0;
        case 0x23faf4u: goto label_23faf4;
        case 0x23faf8u: goto label_23faf8;
        case 0x23fafcu: goto label_23fafc;
        case 0x23fb00u: goto label_23fb00;
        case 0x23fb04u: goto label_23fb04;
        case 0x23fb08u: goto label_23fb08;
        case 0x23fb0cu: goto label_23fb0c;
        case 0x23fb10u: goto label_23fb10;
        case 0x23fb14u: goto label_23fb14;
        case 0x23fb18u: goto label_23fb18;
        case 0x23fb1cu: goto label_23fb1c;
        case 0x23fb20u: goto label_23fb20;
        case 0x23fb24u: goto label_23fb24;
        case 0x23fb28u: goto label_23fb28;
        case 0x23fb2cu: goto label_23fb2c;
        case 0x23fb30u: goto label_23fb30;
        case 0x23fb34u: goto label_23fb34;
        case 0x23fb38u: goto label_23fb38;
        case 0x23fb3cu: goto label_23fb3c;
        case 0x23fb40u: goto label_23fb40;
        case 0x23fb44u: goto label_23fb44;
        case 0x23fb48u: goto label_23fb48;
        case 0x23fb4cu: goto label_23fb4c;
        case 0x23fb50u: goto label_23fb50;
        case 0x23fb54u: goto label_23fb54;
        case 0x23fb58u: goto label_23fb58;
        case 0x23fb5cu: goto label_23fb5c;
        case 0x23fb60u: goto label_23fb60;
        case 0x23fb64u: goto label_23fb64;
        case 0x23fb68u: goto label_23fb68;
        case 0x23fb6cu: goto label_23fb6c;
        case 0x23fb70u: goto label_23fb70;
        case 0x23fb74u: goto label_23fb74;
        case 0x23fb78u: goto label_23fb78;
        case 0x23fb7cu: goto label_23fb7c;
        case 0x23fb80u: goto label_23fb80;
        case 0x23fb84u: goto label_23fb84;
        case 0x23fb88u: goto label_23fb88;
        case 0x23fb8cu: goto label_23fb8c;
        case 0x23fb90u: goto label_23fb90;
        case 0x23fb94u: goto label_23fb94;
        case 0x23fb98u: goto label_23fb98;
        case 0x23fb9cu: goto label_23fb9c;
        case 0x23fba0u: goto label_23fba0;
        case 0x23fba4u: goto label_23fba4;
        case 0x23fba8u: goto label_23fba8;
        case 0x23fbacu: goto label_23fbac;
        case 0x23fbb0u: goto label_23fbb0;
        case 0x23fbb4u: goto label_23fbb4;
        case 0x23fbb8u: goto label_23fbb8;
        case 0x23fbbcu: goto label_23fbbc;
        case 0x23fbc0u: goto label_23fbc0;
        case 0x23fbc4u: goto label_23fbc4;
        case 0x23fbc8u: goto label_23fbc8;
        case 0x23fbccu: goto label_23fbcc;
        case 0x23fbd0u: goto label_23fbd0;
        case 0x23fbd4u: goto label_23fbd4;
        case 0x23fbd8u: goto label_23fbd8;
        case 0x23fbdcu: goto label_23fbdc;
        case 0x23fbe0u: goto label_23fbe0;
        case 0x23fbe4u: goto label_23fbe4;
        case 0x23fbe8u: goto label_23fbe8;
        case 0x23fbecu: goto label_23fbec;
        case 0x23fbf0u: goto label_23fbf0;
        case 0x23fbf4u: goto label_23fbf4;
        case 0x23fbf8u: goto label_23fbf8;
        case 0x23fbfcu: goto label_23fbfc;
        case 0x23fc00u: goto label_23fc00;
        case 0x23fc04u: goto label_23fc04;
        case 0x23fc08u: goto label_23fc08;
        case 0x23fc0cu: goto label_23fc0c;
        case 0x23fc10u: goto label_23fc10;
        case 0x23fc14u: goto label_23fc14;
        case 0x23fc18u: goto label_23fc18;
        case 0x23fc1cu: goto label_23fc1c;
        case 0x23fc20u: goto label_23fc20;
        case 0x23fc24u: goto label_23fc24;
        case 0x23fc28u: goto label_23fc28;
        case 0x23fc2cu: goto label_23fc2c;
        case 0x23fc30u: goto label_23fc30;
        case 0x23fc34u: goto label_23fc34;
        case 0x23fc38u: goto label_23fc38;
        case 0x23fc3cu: goto label_23fc3c;
        case 0x23fc40u: goto label_23fc40;
        case 0x23fc44u: goto label_23fc44;
        case 0x23fc48u: goto label_23fc48;
        case 0x23fc4cu: goto label_23fc4c;
        case 0x23fc50u: goto label_23fc50;
        case 0x23fc54u: goto label_23fc54;
        case 0x23fc58u: goto label_23fc58;
        case 0x23fc5cu: goto label_23fc5c;
        case 0x23fc60u: goto label_23fc60;
        case 0x23fc64u: goto label_23fc64;
        case 0x23fc68u: goto label_23fc68;
        case 0x23fc6cu: goto label_23fc6c;
        case 0x23fc70u: goto label_23fc70;
        case 0x23fc74u: goto label_23fc74;
        case 0x23fc78u: goto label_23fc78;
        case 0x23fc7cu: goto label_23fc7c;
        case 0x23fc80u: goto label_23fc80;
        case 0x23fc84u: goto label_23fc84;
        case 0x23fc88u: goto label_23fc88;
        case 0x23fc8cu: goto label_23fc8c;
        case 0x23fc90u: goto label_23fc90;
        case 0x23fc94u: goto label_23fc94;
        case 0x23fc98u: goto label_23fc98;
        case 0x23fc9cu: goto label_23fc9c;
        case 0x23fca0u: goto label_23fca0;
        case 0x23fca4u: goto label_23fca4;
        case 0x23fca8u: goto label_23fca8;
        case 0x23fcacu: goto label_23fcac;
        case 0x23fcb0u: goto label_23fcb0;
        case 0x23fcb4u: goto label_23fcb4;
        case 0x23fcb8u: goto label_23fcb8;
        case 0x23fcbcu: goto label_23fcbc;
        case 0x23fcc0u: goto label_23fcc0;
        case 0x23fcc4u: goto label_23fcc4;
        case 0x23fcc8u: goto label_23fcc8;
        case 0x23fcccu: goto label_23fccc;
        case 0x23fcd0u: goto label_23fcd0;
        case 0x23fcd4u: goto label_23fcd4;
        case 0x23fcd8u: goto label_23fcd8;
        case 0x23fcdcu: goto label_23fcdc;
        case 0x23fce0u: goto label_23fce0;
        case 0x23fce4u: goto label_23fce4;
        case 0x23fce8u: goto label_23fce8;
        case 0x23fcecu: goto label_23fcec;
        case 0x23fcf0u: goto label_23fcf0;
        case 0x23fcf4u: goto label_23fcf4;
        case 0x23fcf8u: goto label_23fcf8;
        case 0x23fcfcu: goto label_23fcfc;
        case 0x23fd00u: goto label_23fd00;
        case 0x23fd04u: goto label_23fd04;
        case 0x23fd08u: goto label_23fd08;
        case 0x23fd0cu: goto label_23fd0c;
        case 0x23fd10u: goto label_23fd10;
        case 0x23fd14u: goto label_23fd14;
        case 0x23fd18u: goto label_23fd18;
        case 0x23fd1cu: goto label_23fd1c;
        case 0x23fd20u: goto label_23fd20;
        case 0x23fd24u: goto label_23fd24;
        case 0x23fd28u: goto label_23fd28;
        case 0x23fd2cu: goto label_23fd2c;
        case 0x23fd30u: goto label_23fd30;
        case 0x23fd34u: goto label_23fd34;
        case 0x23fd38u: goto label_23fd38;
        case 0x23fd3cu: goto label_23fd3c;
        case 0x23fd40u: goto label_23fd40;
        case 0x23fd44u: goto label_23fd44;
        case 0x23fd48u: goto label_23fd48;
        case 0x23fd4cu: goto label_23fd4c;
        case 0x23fd50u: goto label_23fd50;
        case 0x23fd54u: goto label_23fd54;
        case 0x23fd58u: goto label_23fd58;
        case 0x23fd5cu: goto label_23fd5c;
        case 0x23fd60u: goto label_23fd60;
        case 0x23fd64u: goto label_23fd64;
        case 0x23fd68u: goto label_23fd68;
        case 0x23fd6cu: goto label_23fd6c;
        case 0x23fd70u: goto label_23fd70;
        case 0x23fd74u: goto label_23fd74;
        case 0x23fd78u: goto label_23fd78;
        case 0x23fd7cu: goto label_23fd7c;
        case 0x23fd80u: goto label_23fd80;
        case 0x23fd84u: goto label_23fd84;
        case 0x23fd88u: goto label_23fd88;
        case 0x23fd8cu: goto label_23fd8c;
        case 0x23fd90u: goto label_23fd90;
        case 0x23fd94u: goto label_23fd94;
        case 0x23fd98u: goto label_23fd98;
        case 0x23fd9cu: goto label_23fd9c;
        case 0x23fda0u: goto label_23fda0;
        case 0x23fda4u: goto label_23fda4;
        case 0x23fda8u: goto label_23fda8;
        case 0x23fdacu: goto label_23fdac;
        case 0x23fdb0u: goto label_23fdb0;
        case 0x23fdb4u: goto label_23fdb4;
        case 0x23fdb8u: goto label_23fdb8;
        case 0x23fdbcu: goto label_23fdbc;
        case 0x23fdc0u: goto label_23fdc0;
        case 0x23fdc4u: goto label_23fdc4;
        case 0x23fdc8u: goto label_23fdc8;
        case 0x23fdccu: goto label_23fdcc;
        case 0x23fdd0u: goto label_23fdd0;
        case 0x23fdd4u: goto label_23fdd4;
        case 0x23fdd8u: goto label_23fdd8;
        case 0x23fddcu: goto label_23fddc;
        case 0x23fde0u: goto label_23fde0;
        case 0x23fde4u: goto label_23fde4;
        case 0x23fde8u: goto label_23fde8;
        case 0x23fdecu: goto label_23fdec;
        case 0x23fdf0u: goto label_23fdf0;
        case 0x23fdf4u: goto label_23fdf4;
        case 0x23fdf8u: goto label_23fdf8;
        case 0x23fdfcu: goto label_23fdfc;
        case 0x23fe00u: goto label_23fe00;
        case 0x23fe04u: goto label_23fe04;
        case 0x23fe08u: goto label_23fe08;
        case 0x23fe0cu: goto label_23fe0c;
        case 0x23fe10u: goto label_23fe10;
        case 0x23fe14u: goto label_23fe14;
        case 0x23fe18u: goto label_23fe18;
        case 0x23fe1cu: goto label_23fe1c;
        case 0x23fe20u: goto label_23fe20;
        case 0x23fe24u: goto label_23fe24;
        case 0x23fe28u: goto label_23fe28;
        case 0x23fe2cu: goto label_23fe2c;
        case 0x23fe30u: goto label_23fe30;
        case 0x23fe34u: goto label_23fe34;
        case 0x23fe38u: goto label_23fe38;
        case 0x23fe3cu: goto label_23fe3c;
        case 0x23fe40u: goto label_23fe40;
        case 0x23fe44u: goto label_23fe44;
        case 0x23fe48u: goto label_23fe48;
        case 0x23fe4cu: goto label_23fe4c;
        case 0x23fe50u: goto label_23fe50;
        case 0x23fe54u: goto label_23fe54;
        case 0x23fe58u: goto label_23fe58;
        case 0x23fe5cu: goto label_23fe5c;
        case 0x23fe60u: goto label_23fe60;
        case 0x23fe64u: goto label_23fe64;
        case 0x23fe68u: goto label_23fe68;
        case 0x23fe6cu: goto label_23fe6c;
        case 0x23fe70u: goto label_23fe70;
        case 0x23fe74u: goto label_23fe74;
        case 0x23fe78u: goto label_23fe78;
        case 0x23fe7cu: goto label_23fe7c;
        case 0x23fe80u: goto label_23fe80;
        case 0x23fe84u: goto label_23fe84;
        case 0x23fe88u: goto label_23fe88;
        case 0x23fe8cu: goto label_23fe8c;
        case 0x23fe90u: goto label_23fe90;
        case 0x23fe94u: goto label_23fe94;
        case 0x23fe98u: goto label_23fe98;
        case 0x23fe9cu: goto label_23fe9c;
        case 0x23fea0u: goto label_23fea0;
        case 0x23fea4u: goto label_23fea4;
        case 0x23fea8u: goto label_23fea8;
        case 0x23feacu: goto label_23feac;
        case 0x23feb0u: goto label_23feb0;
        case 0x23feb4u: goto label_23feb4;
        case 0x23feb8u: goto label_23feb8;
        case 0x23febcu: goto label_23febc;
        case 0x23fec0u: goto label_23fec0;
        case 0x23fec4u: goto label_23fec4;
        case 0x23fec8u: goto label_23fec8;
        case 0x23feccu: goto label_23fecc;
        case 0x23fed0u: goto label_23fed0;
        case 0x23fed4u: goto label_23fed4;
        case 0x23fed8u: goto label_23fed8;
        case 0x23fedcu: goto label_23fedc;
        case 0x23fee0u: goto label_23fee0;
        case 0x23fee4u: goto label_23fee4;
        case 0x23fee8u: goto label_23fee8;
        case 0x23feecu: goto label_23feec;
        case 0x23fef0u: goto label_23fef0;
        case 0x23fef4u: goto label_23fef4;
        case 0x23fef8u: goto label_23fef8;
        case 0x23fefcu: goto label_23fefc;
        case 0x23ff00u: goto label_23ff00;
        case 0x23ff04u: goto label_23ff04;
        case 0x23ff08u: goto label_23ff08;
        case 0x23ff0cu: goto label_23ff0c;
        case 0x23ff10u: goto label_23ff10;
        case 0x23ff14u: goto label_23ff14;
        case 0x23ff18u: goto label_23ff18;
        case 0x23ff1cu: goto label_23ff1c;
        case 0x23ff20u: goto label_23ff20;
        case 0x23ff24u: goto label_23ff24;
        case 0x23ff28u: goto label_23ff28;
        case 0x23ff2cu: goto label_23ff2c;
        case 0x23ff30u: goto label_23ff30;
        case 0x23ff34u: goto label_23ff34;
        case 0x23ff38u: goto label_23ff38;
        case 0x23ff3cu: goto label_23ff3c;
        case 0x23ff40u: goto label_23ff40;
        case 0x23ff44u: goto label_23ff44;
        case 0x23ff48u: goto label_23ff48;
        case 0x23ff4cu: goto label_23ff4c;
        case 0x23ff50u: goto label_23ff50;
        case 0x23ff54u: goto label_23ff54;
        case 0x23ff58u: goto label_23ff58;
        case 0x23ff5cu: goto label_23ff5c;
        case 0x23ff60u: goto label_23ff60;
        case 0x23ff64u: goto label_23ff64;
        case 0x23ff68u: goto label_23ff68;
        case 0x23ff6cu: goto label_23ff6c;
        case 0x23ff70u: goto label_23ff70;
        case 0x23ff74u: goto label_23ff74;
        case 0x23ff78u: goto label_23ff78;
        case 0x23ff7cu: goto label_23ff7c;
        case 0x23ff80u: goto label_23ff80;
        case 0x23ff84u: goto label_23ff84;
        case 0x23ff88u: goto label_23ff88;
        case 0x23ff8cu: goto label_23ff8c;
        case 0x23ff90u: goto label_23ff90;
        case 0x23ff94u: goto label_23ff94;
        case 0x23ff98u: goto label_23ff98;
        case 0x23ff9cu: goto label_23ff9c;
        case 0x23ffa0u: goto label_23ffa0;
        case 0x23ffa4u: goto label_23ffa4;
        case 0x23ffa8u: goto label_23ffa8;
        case 0x23ffacu: goto label_23ffac;
        case 0x23ffb0u: goto label_23ffb0;
        case 0x23ffb4u: goto label_23ffb4;
        case 0x23ffb8u: goto label_23ffb8;
        case 0x23ffbcu: goto label_23ffbc;
        case 0x23ffc0u: goto label_23ffc0;
        case 0x23ffc4u: goto label_23ffc4;
        case 0x23ffc8u: goto label_23ffc8;
        case 0x23ffccu: goto label_23ffcc;
        case 0x23ffd0u: goto label_23ffd0;
        case 0x23ffd4u: goto label_23ffd4;
        case 0x23ffd8u: goto label_23ffd8;
        case 0x23ffdcu: goto label_23ffdc;
        case 0x23ffe0u: goto label_23ffe0;
        case 0x23ffe4u: goto label_23ffe4;
        case 0x23ffe8u: goto label_23ffe8;
        case 0x23ffecu: goto label_23ffec;
        case 0x23fff0u: goto label_23fff0;
        case 0x23fff4u: goto label_23fff4;
        case 0x23fff8u: goto label_23fff8;
        case 0x23fffcu: goto label_23fffc;
        case 0x240000u: goto label_240000;
        case 0x240004u: goto label_240004;
        case 0x240008u: goto label_240008;
        case 0x24000cu: goto label_24000c;
        case 0x240010u: goto label_240010;
        case 0x240014u: goto label_240014;
        case 0x240018u: goto label_240018;
        case 0x24001cu: goto label_24001c;
        case 0x240020u: goto label_240020;
        case 0x240024u: goto label_240024;
        case 0x240028u: goto label_240028;
        case 0x24002cu: goto label_24002c;
        case 0x240030u: goto label_240030;
        case 0x240034u: goto label_240034;
        case 0x240038u: goto label_240038;
        case 0x24003cu: goto label_24003c;
        case 0x240040u: goto label_240040;
        case 0x240044u: goto label_240044;
        case 0x240048u: goto label_240048;
        case 0x24004cu: goto label_24004c;
        case 0x240050u: goto label_240050;
        case 0x240054u: goto label_240054;
        case 0x240058u: goto label_240058;
        case 0x24005cu: goto label_24005c;
        case 0x240060u: goto label_240060;
        case 0x240064u: goto label_240064;
        case 0x240068u: goto label_240068;
        case 0x24006cu: goto label_24006c;
        default: return;
    }

label_23f8a0:
    // 0x23f8a0: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x23f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_23f8a4:
    // 0x23f8a4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x23f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_23f8a8:
    // 0x23f8a8: 0xafa20198  sw          $v0, 0x198($sp)
    ctx->pc = 0x23f8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
label_23f8ac:
    // 0x23f8ac: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x23f8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_23f8b0:
    // 0x23f8b0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x23f8b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23f8b4:
    // 0x23f8b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_23f8b8:
    if (ctx->pc == 0x23F8B8u) {
        ctx->pc = 0x23F8BCu;
        goto label_23f8bc;
    }
    ctx->pc = 0x23F8B4u;
    {
        const bool branch_taken_0x23f8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f8b4) {
            ctx->pc = 0x23F8A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f8a0;
        }
    }
    ctx->pc = 0x23F8BCu;
label_23f8bc:
    // 0x23f8bc: 0x0  nop
    ctx->pc = 0x23f8bcu;
    // NOP
label_23f8c0:
    // 0x23f8c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23f8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23f8c4:
    // 0x23f8c4: 0xc06c274  jal         func_1B09D0
label_23f8c8:
    if (ctx->pc == 0x23F8C8u) {
        ctx->pc = 0x23F8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F8C4u;
        // 0x23f8c8: 0x27a50194  addiu       $a1, $sp, 0x194 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F8CCu;
        goto label_23f8cc;
    }
    ctx->pc = 0x23F8C4u;
    SET_GPR_U32(ctx, 31, 0x23F8CCu);
    ctx->pc = 0x23F8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F8C4u;
    // 0x23f8c8: 0x27a50194  addiu       $a1, $sp, 0x194 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B09D0u, 0x23F8C4u, 0x23F8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F8CCu;
label_23f8cc:
    // 0x23f8cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23f8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23f8d0:
    // 0x23f8d0: 0x1443ffed  bne         $v0, $v1, . + 4 + (-0x13 << 2)
label_23f8d4:
    if (ctx->pc == 0x23F8D4u) {
        ctx->pc = 0x23F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F8D0u;
        // 0x23f8d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F8D8u;
        goto label_23f8d8;
    }
    ctx->pc = 0x23F8D0u;
    {
        const bool branch_taken_0x23f8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F8D0u;
        // 0x23f8d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f8d0) {
            ctx->pc = 0x23F888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x23f888; return; }
        }
    }
    ctx->pc = 0x23F8D8u;
label_23f8d8:
    // 0x23f8d8: 0xc07aaa8  jal         func_1EAAA0
label_23f8dc:
    if (ctx->pc == 0x23F8DCu) {
        ctx->pc = 0x23F8E0u;
        goto label_23f8e0;
    }
    ctx->pc = 0x23F8D8u;
    SET_GPR_U32(ctx, 31, 0x23F8E0u);
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x23F8E0u;
label_23f8e0:
    // 0x23f8e0: 0x1000007b  b           . + 4 + (0x7B << 2)
label_23f8e4:
    if (ctx->pc == 0x23F8E4u) {
        ctx->pc = 0x23F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F8E0u;
        // 0x23f8e4: 0x24140005  addiu       $s4, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F8E8u;
        goto label_23f8e8;
    }
    ctx->pc = 0x23F8E0u;
    {
        const bool branch_taken_0x23f8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F8E0u;
        // 0x23f8e4: 0x24140005  addiu       $s4, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f8e0) {
            ctx->pc = 0x23FAD0u;
            goto label_23fad0;
        }
    }
    ctx->pc = 0x23F8E8u;
label_23f8e8:
    // 0x23f8e8: 0xc06c1da  jal         func_1B0768
label_23f8ec:
    if (ctx->pc == 0x23F8ECu) {
        ctx->pc = 0x23F8F0u;
        goto label_23f8f0;
    }
    ctx->pc = 0x23F8E8u;
    SET_GPR_U32(ctx, 31, 0x23F8F0u);
    ctx->pc = 0x1B0768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0768u, 0x23F8E8u, 0x23F8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F8F0u;
label_23f8f0:
    // 0x23f8f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23f8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23f8f4:
    // 0x23f8f4: 0x10430076  beq         $v0, $v1, . + 4 + (0x76 << 2)
label_23f8f8:
    if (ctx->pc == 0x23F8F8u) {
        ctx->pc = 0x23F8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F8F4u;
        // 0x23f8f8: 0x3c01002a  lui         $at, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F8FCu;
        goto label_23f8fc;
    }
    ctx->pc = 0x23F8F4u;
    {
        const bool branch_taken_0x23f8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x23F8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F8F4u;
        // 0x23f8f8: 0x3c01002a  lui         $at, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f8f4) {
            ctx->pc = 0x23FAD0u;
            goto label_23fad0;
        }
    }
    ctx->pc = 0x23F8FCu;
label_23f8fc:
    // 0x23f8fc: 0xc07aaa8  jal         func_1EAAA0
label_23f900:
    if (ctx->pc == 0x23F900u) {
        ctx->pc = 0x23F900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F8FCu;
        // 0x23f900: 0x8c24c978  lw          $a0, -0x3688($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F904u;
        goto label_23f904;
    }
    ctx->pc = 0x23F8FCu;
    SET_GPR_U32(ctx, 31, 0x23F904u);
    ctx->pc = 0x23F900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F8FCu;
    // 0x23f900: 0x8c24c978  lw          $a0, -0x3688($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x23F904u;
label_23f904:
    // 0x23f904: 0x10000072  b           . + 4 + (0x72 << 2)
label_23f908:
    if (ctx->pc == 0x23F908u) {
        ctx->pc = 0x23F908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F904u;
        // 0x23f908: 0x24140006  addiu       $s4, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F90Cu;
        goto label_23f90c;
    }
    ctx->pc = 0x23F904u;
    {
        const bool branch_taken_0x23f904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F904u;
        // 0x23f908: 0x24140006  addiu       $s4, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f904) {
            ctx->pc = 0x23FAD0u;
            goto label_23fad0;
        }
    }
    ctx->pc = 0x23F90Cu;
label_23f90c:
    // 0x23f90c: 0x0  nop
    ctx->pc = 0x23f90cu;
    // NOP
label_23f910:
    // 0x23f910: 0xc06c03a  jal         func_1B00E8
label_23f914:
    if (ctx->pc == 0x23F914u) {
        ctx->pc = 0x23F914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F910u;
        // 0x23f914: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F918u;
        goto label_23f918;
    }
    ctx->pc = 0x23F910u;
    SET_GPR_U32(ctx, 31, 0x23F918u);
    ctx->pc = 0x23F914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F910u;
    // 0x23f914: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B00E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B00E8u, 0x23F910u, 0x23F918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F918u;
label_23f918:
    // 0x23f918: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23f918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23f91c:
    // 0x23f91c: 0x1443006c  bne         $v0, $v1, . + 4 + (0x6C << 2)
label_23f920:
    if (ctx->pc == 0x23F920u) {
        ctx->pc = 0x23F924u;
        goto label_23f924;
    }
    ctx->pc = 0x23F91Cu;
    {
        const bool branch_taken_0x23f91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23f91c) {
            ctx->pc = 0x23FAD0u;
            goto label_23fad0;
        }
    }
    ctx->pc = 0x23F924u;
label_23f924:
    // 0x23f924: 0x1000006a  b           . + 4 + (0x6A << 2)
label_23f928:
    if (ctx->pc == 0x23F928u) {
        ctx->pc = 0x23F928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F924u;
        // 0x23f928: 0x24140007  addiu       $s4, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F92Cu;
        goto label_23f92c;
    }
    ctx->pc = 0x23F924u;
    {
        const bool branch_taken_0x23f924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F924u;
        // 0x23f928: 0x24140007  addiu       $s4, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f924) {
            ctx->pc = 0x23FAD0u;
            goto label_23fad0;
        }
    }
    ctx->pc = 0x23F92Cu;
label_23f92c:
    // 0x23f92c: 0x0  nop
    ctx->pc = 0x23f92cu;
    // NOP
label_23f930:
    // 0x23f930: 0xc06c03a  jal         func_1B00E8
label_23f934:
    if (ctx->pc == 0x23F934u) {
        ctx->pc = 0x23F934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F930u;
        // 0x23f934: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F938u;
        goto label_23f938;
    }
    ctx->pc = 0x23F930u;
    SET_GPR_U32(ctx, 31, 0x23F938u);
    ctx->pc = 0x23F934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F930u;
    // 0x23f934: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B00E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B00E8u, 0x23F930u, 0x23F938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F938u;
label_23f938:
    // 0x23f938: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23f938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23f93c:
    // 0x23f93c: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_23f940:
    if (ctx->pc == 0x23F940u) {
        ctx->pc = 0x23F940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F93Cu;
        // 0x23f940: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F944u;
        goto label_23f944;
    }
    ctx->pc = 0x23F93Cu;
    {
        const bool branch_taken_0x23f93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x23F940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F93Cu;
        // 0x23f940: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f93c) {
            ctx->pc = 0x23F954u;
            goto label_23f954;
        }
    }
    ctx->pc = 0x23F944u;
label_23f944:
    // 0x23f944: 0xc07aaa8  jal         func_1EAAA0
label_23f948:
    if (ctx->pc == 0x23F948u) {
        ctx->pc = 0x23F94Cu;
        goto label_23f94c;
    }
    ctx->pc = 0x23F944u;
    SET_GPR_U32(ctx, 31, 0x23F94Cu);
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x23F94Cu;
label_23f94c:
    // 0x23f94c: 0x10000060  b           . + 4 + (0x60 << 2)
label_23f950:
    if (ctx->pc == 0x23F950u) {
        ctx->pc = 0x23F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F94Cu;
        // 0x23f950: 0x24140005  addiu       $s4, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F954u;
        goto label_23f954;
    }
    ctx->pc = 0x23F94Cu;
    {
        const bool branch_taken_0x23f94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F94Cu;
        // 0x23f950: 0x24140005  addiu       $s4, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f94c) {
            ctx->pc = 0x23FAD0u;
            goto label_23fad0;
        }
    }
    ctx->pc = 0x23F954u;
label_23f954:
    // 0x23f954: 0x0  nop
    ctx->pc = 0x23f954u;
    // NOP
label_23f958:
    // 0x23f958: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x23f958u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23f95c:
    // 0x23f95c: 0x0  nop
    ctx->pc = 0x23f95cu;
    // NOP
label_23f960:
    // 0x23f960: 0xafa0019c  sw          $zero, 0x19C($sp)
    ctx->pc = 0x23f960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 0));
label_23f964:
    // 0x23f964: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x23f964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
label_23f968:
    // 0x23f968: 0x3c010010  lui         $at, 0x10
    ctx->pc = 0x23f968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16 << 16));
label_23f96c:
    // 0x23f96c: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x23f96cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_23f970:
    // 0x23f970: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_23f974:
    if (ctx->pc == 0x23F974u) {
        ctx->pc = 0x23F974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F970u;
        // 0x23f974: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F978u;
        goto label_23f978;
    }
    ctx->pc = 0x23F970u;
    {
        const bool branch_taken_0x23f970 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F970u;
        // 0x23f974: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f970) {
            ctx->pc = 0x23F994u;
            goto label_23f994;
        }
    }
    ctx->pc = 0x23F978u;
label_23f978:
    // 0x23f978: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x23f978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
label_23f97c:
    // 0x23f97c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x23f97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_23f980:
    // 0x23f980: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x23f980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
label_23f984:
    // 0x23f984: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x23f984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
label_23f988:
    // 0x23f988: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x23f988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23f98c:
    // 0x23f98c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_23f990:
    if (ctx->pc == 0x23F990u) {
        ctx->pc = 0x23F994u;
        goto label_23f994;
    }
    ctx->pc = 0x23F98Cu;
    {
        const bool branch_taken_0x23f98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f98c) {
            ctx->pc = 0x23F978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f978;
        }
    }
    ctx->pc = 0x23F994u;
label_23f994:
    // 0x23f994: 0x0  nop
    ctx->pc = 0x23f994u;
    // NOP
label_23f998:
    // 0x23f998: 0xc06c18e  jal         func_1B0638
label_23f99c:
    if (ctx->pc == 0x23F99Cu) {
        ctx->pc = 0x23F9A0u;
        goto label_23f9a0;
    }
    ctx->pc = 0x23F998u;
    SET_GPR_U32(ctx, 31, 0x23F9A0u);
    ctx->pc = 0x1B0638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0638u, 0x23F998u, 0x23F9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F9A0u;
label_23f9a0:
    // 0x23f9a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_23f9a4:
    if (ctx->pc == 0x23F9A4u) {
        ctx->pc = 0x23F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9A0u;
        // 0x23f9a4: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F9A8u;
        goto label_23f9a8;
    }
    ctx->pc = 0x23F9A0u;
    {
        const bool branch_taken_0x23f9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9A0u;
        // 0x23f9a4: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f9a0) {
            ctx->pc = 0x23F9D0u;
            goto label_23f9d0;
        }
    }
    ctx->pc = 0x23F9A8u;
label_23f9a8:
    // 0x23f9a8: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_23f9ac:
    if (ctx->pc == 0x23F9ACu) {
        ctx->pc = 0x23F9B0u;
        goto label_23f9b0;
    }
    ctx->pc = 0x23F9A8u;
    {
        const bool branch_taken_0x23f9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x23f9a8) {
            ctx->pc = 0x23F9C4u;
            goto label_23f9c4;
        }
    }
    ctx->pc = 0x23F9B0u;
label_23f9b0:
    // 0x23f9b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23f9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23f9b4:
    // 0x23f9b4: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
label_23f9b8:
    if (ctx->pc == 0x23F9B8u) {
        ctx->pc = 0x23F9BCu;
        goto label_23f9bc;
    }
    ctx->pc = 0x23F9B4u;
    {
        const bool branch_taken_0x23f9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x23f9b4) {
            ctx->pc = 0x23F9DCu;
            goto label_23f9dc;
        }
    }
    ctx->pc = 0x23F9BCu;
label_23f9bc:
    // 0x23f9bc: 0x10000006  b           . + 4 + (0x6 << 2)
label_23f9c0:
    if (ctx->pc == 0x23F9C0u) {
        ctx->pc = 0x23F9C4u;
        goto label_23f9c4;
    }
    ctx->pc = 0x23F9BCu;
    {
        const bool branch_taken_0x23f9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f9bc) {
            ctx->pc = 0x23F9D8u;
            goto label_23f9d8;
        }
    }
    ctx->pc = 0x23F9C4u;
label_23f9c4:
    // 0x23f9c4: 0x0  nop
    ctx->pc = 0x23f9c4u;
    // NOP
label_23f9c8:
    // 0x23f9c8: 0x10000004  b           . + 4 + (0x4 << 2)
label_23f9cc:
    if (ctx->pc == 0x23F9CCu) {
        ctx->pc = 0x23F9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9C8u;
        // 0x23f9cc: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F9D0u;
        goto label_23f9d0;
    }
    ctx->pc = 0x23F9C8u;
    {
        const bool branch_taken_0x23f9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9C8u;
        // 0x23f9cc: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f9c8) {
            ctx->pc = 0x23F9DCu;
            goto label_23f9dc;
        }
    }
    ctx->pc = 0x23F9D0u;
label_23f9d0:
    // 0x23f9d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_23f9d4:
    if (ctx->pc == 0x23F9D4u) {
        ctx->pc = 0x23F9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9D0u;
        // 0x23f9d4: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F9D8u;
        goto label_23f9d8;
    }
    ctx->pc = 0x23F9D0u;
    {
        const bool branch_taken_0x23f9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9D0u;
        // 0x23f9d4: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f9d0) {
            ctx->pc = 0x23F9DCu;
            goto label_23f9dc;
        }
    }
    ctx->pc = 0x23F9D8u;
label_23f9d8:
    // 0x23f9d8: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x23f9d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23f9dc:
    // 0x23f9dc: 0x0  nop
    ctx->pc = 0x23f9dcu;
    // NOP
label_23f9e0:
    // 0x23f9e0: 0x1280ffde  beqz        $s4, . + 4 + (-0x22 << 2)
label_23f9e4:
    if (ctx->pc == 0x23F9E4u) {
        ctx->pc = 0x23F9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9E0u;
        // 0x23f9e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F9E8u;
        goto label_23f9e8;
    }
    ctx->pc = 0x23F9E0u;
    {
        const bool branch_taken_0x23f9e0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9E0u;
        // 0x23f9e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f9e0) {
            ctx->pc = 0x23F95Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f95c;
        }
    }
    ctx->pc = 0x23F9E8u;
label_23f9e8:
    // 0x23f9e8: 0x16820021  bne         $s4, $v0, . + 4 + (0x21 << 2)
label_23f9ec:
    if (ctx->pc == 0x23F9ECu) {
        ctx->pc = 0x23F9F0u;
        goto label_23f9f0;
    }
    ctx->pc = 0x23F9E8u;
    {
        const bool branch_taken_0x23f9e8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x23f9e8) {
            ctx->pc = 0x23FA70u;
            goto label_23fa70;
        }
    }
    ctx->pc = 0x23F9F0u;
label_23f9f0:
    // 0x23f9f0: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_23f9f4:
    if (ctx->pc == 0x23F9F4u) {
        ctx->pc = 0x23F9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9F0u;
        // 0x23f9f4: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F9F8u;
        goto label_23f9f8;
    }
    ctx->pc = 0x23F9F0u;
    {
        const bool branch_taken_0x23f9f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9F0u;
        // 0x23f9f4: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f9f0) {
            ctx->pc = 0x23FA04u;
            goto label_23fa04;
        }
    }
    ctx->pc = 0x23F9F8u;
label_23f9f8:
    // 0x23f9f8: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x23f9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_23f9fc:
    // 0x23f9fc: 0x10000002  b           . + 4 + (0x2 << 2)
label_23fa00:
    if (ctx->pc == 0x23FA00u) {
        ctx->pc = 0x23FA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9FCu;
        // 0x23fa00: 0x24a5ea08  addiu       $a1, $a1, -0x15F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FA04u;
        goto label_23fa04;
    }
    ctx->pc = 0x23F9FCu;
    {
        const bool branch_taken_0x23f9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9FCu;
        // 0x23fa00: 0x24a5ea08  addiu       $a1, $a1, -0x15F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f9fc) {
            ctx->pc = 0x23FA08u;
            goto label_23fa08;
        }
    }
    ctx->pc = 0x23FA04u;
label_23fa04:
    // 0x23fa04: 0x24a5ea18  addiu       $a1, $a1, -0x15E8
    ctx->pc = 0x23fa04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961688));
label_23fa08:
    // 0x23fa08: 0xc06be58  jal         func_1AF960
label_23fa0c:
    if (ctx->pc == 0x23FA0Cu) {
        ctx->pc = 0x23FA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA08u;
        // 0x23fa0c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FA10u;
        goto label_23fa10;
    }
    ctx->pc = 0x23FA08u;
    SET_GPR_U32(ctx, 31, 0x23FA10u);
    ctx->pc = 0x23FA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FA08u;
    // 0x23fa0c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF960u, 0x23FA08u, 0x23FA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FA10u;
label_23fa10:
    // 0x23fa10: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_23fa14:
    if (ctx->pc == 0x23FA14u) {
        ctx->pc = 0x23FA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA10u;
        // 0x23fa14: 0x3c01002a  lui         $at, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FA18u;
        goto label_23fa18;
    }
    ctx->pc = 0x23FA10u;
    {
        const bool branch_taken_0x23fa10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA10u;
        // 0x23fa14: 0x3c01002a  lui         $at, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fa10) {
            ctx->pc = 0x23FA44u;
            goto label_23fa44;
        }
    }
    ctx->pc = 0x23FA18u;
label_23fa18:
    // 0x23fa18: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x23fa18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_23fa1c:
    // 0x23fa1c: 0x8c26c96c  lw          $a2, -0x3694($at)
    ctx->pc = 0x23fa1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953324)));
label_23fa20:
    // 0x23fa20: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x23fa20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_23fa24:
    // 0x23fa24: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x23fa24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_23fa28:
    // 0x23fa28: 0x8c27c97c  lw          $a3, -0x3684($at)
    ctx->pc = 0x23fa28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953340)));
label_23fa2c:
    // 0x23fa2c: 0xc08f20e  jal         func_23C838
label_23fa30:
    if (ctx->pc == 0x23FA30u) {
        ctx->pc = 0x23FA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA2Cu;
        // 0x23fa30: 0x24a5ea28  addiu       $a1, $a1, -0x15D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FA34u;
        goto label_23fa34;
    }
    ctx->pc = 0x23FA2Cu;
    SET_GPR_U32(ctx, 31, 0x23FA34u);
    ctx->pc = 0x23FA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FA2Cu;
    // 0x23fa30: 0x24a5ea28  addiu       $a1, $a1, -0x15D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x23FA34u;
label_23fa34:
    // 0x23fa34: 0xc07aaa8  jal         func_1EAAA0
label_23fa38:
    if (ctx->pc == 0x23FA38u) {
        ctx->pc = 0x23FA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA34u;
        // 0x23fa38: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FA3Cu;
        goto label_23fa3c;
    }
    ctx->pc = 0x23FA34u;
    SET_GPR_U32(ctx, 31, 0x23FA3Cu);
    ctx->pc = 0x23FA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FA34u;
    // 0x23fa38: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x23FA3Cu;
label_23fa3c:
    // 0x23fa3c: 0x10000024  b           . + 4 + (0x24 << 2)
label_23fa40:
    if (ctx->pc == 0x23FA40u) {
        ctx->pc = 0x23FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA3Cu;
        // 0x23fa40: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FA44u;
        goto label_23fa44;
    }
    ctx->pc = 0x23FA3Cu;
    {
        const bool branch_taken_0x23fa3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA3Cu;
        // 0x23fa40: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fa3c) {
            ctx->pc = 0x23FAD0u;
            goto label_23fad0;
        }
    }
    ctx->pc = 0x23FA44u;
label_23fa44:
    // 0x23fa44: 0x0  nop
    ctx->pc = 0x23fa44u;
    // NOP
label_23fa48:
    // 0x23fa48: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_23fa4c:
    if (ctx->pc == 0x23FA4Cu) {
        ctx->pc = 0x23FA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA48u;
        // 0x23fa4c: 0x24140009  addiu       $s4, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FA50u;
        goto label_23fa50;
    }
    ctx->pc = 0x23FA48u;
    {
        const bool branch_taken_0x23fa48 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA48u;
        // 0x23fa4c: 0x24140009  addiu       $s4, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fa48) {
            ctx->pc = 0x23FA58u;
            goto label_23fa58;
        }
    }
    ctx->pc = 0x23FA50u;
label_23fa50:
    // 0x23fa50: 0x1000001f  b           . + 4 + (0x1F << 2)
label_23fa54:
    if (ctx->pc == 0x23FA54u) {
        ctx->pc = 0x23FA58u;
        goto label_23fa58;
    }
    ctx->pc = 0x23FA50u;
    {
        const bool branch_taken_0x23fa50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fa50) {
            ctx->pc = 0x23FAD0u;
            goto label_23fad0;
        }
    }
    ctx->pc = 0x23FA58u;
label_23fa58:
    // 0x23fa58: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x23fa58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_23fa5c:
    // 0x23fa5c: 0xc07aaa8  jal         func_1EAAA0
label_23fa60:
    if (ctx->pc == 0x23FA60u) {
        ctx->pc = 0x23FA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA5Cu;
        // 0x23fa60: 0x8c24c974  lw          $a0, -0x368C($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953332)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FA64u;
        goto label_23fa64;
    }
    ctx->pc = 0x23FA5Cu;
    SET_GPR_U32(ctx, 31, 0x23FA64u);
    ctx->pc = 0x23FA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FA5Cu;
    // 0x23fa60: 0x8c24c974  lw          $a0, -0x368C($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x23FA64u;
label_23fa64:
    // 0x23fa64: 0x24110078  addiu       $s1, $zero, 0x78
    ctx->pc = 0x23fa64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_23fa68:
    // 0x23fa68: 0x10000019  b           . + 4 + (0x19 << 2)
label_23fa6c:
    if (ctx->pc == 0x23FA6Cu) {
        ctx->pc = 0x23FA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA68u;
        // 0x23fa6c: 0x24140008  addiu       $s4, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FA70u;
        goto label_23fa70;
    }
    ctx->pc = 0x23FA68u;
    {
        const bool branch_taken_0x23fa68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA68u;
        // 0x23fa6c: 0x24140008  addiu       $s4, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fa68) {
            ctx->pc = 0x23FAD0u;
            goto label_23fad0;
        }
    }
    ctx->pc = 0x23FA70u;
label_23fa70:
    // 0x23fa70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23fa74:
    // 0x23fa74: 0x16820002  bne         $s4, $v0, . + 4 + (0x2 << 2)
label_23fa78:
    if (ctx->pc == 0x23FA78u) {
        ctx->pc = 0x23FA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA74u;
        // 0x23fa78: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FA7Cu;
        goto label_23fa7c;
    }
    ctx->pc = 0x23FA74u;
    {
        const bool branch_taken_0x23fa74 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x23FA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA74u;
        // 0x23fa78: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fa74) {
            ctx->pc = 0x23FA80u;
            goto label_23fa80;
        }
    }
    ctx->pc = 0x23FA7Cu;
label_23fa7c:
    // 0x23fa7c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23fa80:
    // 0x23fa80: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x23fa80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23fa84:
    // 0x23fa84: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x23fa84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_23fa88:
    // 0x23fa88: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x23fa88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_23fa8c:
    // 0x23fa8c: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x23fa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_23fa90:
    // 0x23fa90: 0x2442c960  addiu       $v0, $v0, -0x36A0
    ctx->pc = 0x23fa90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953312));
label_23fa94:
    // 0x23fa94: 0x8c27c97c  lw          $a3, -0x3684($at)
    ctx->pc = 0x23fa94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953340)));
label_23fa98:
    // 0x23fa98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23fa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23fa9c:
    // 0x23fa9c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x23fa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_23faa0:
    // 0x23faa0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x23faa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23faa4:
    // 0x23faa4: 0xc08f20e  jal         func_23C838
label_23faa8:
    if (ctx->pc == 0x23FAA8u) {
        ctx->pc = 0x23FAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FAA4u;
        // 0x23faa8: 0x24a5ea28  addiu       $a1, $a1, -0x15D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FAACu;
        goto label_23faac;
    }
    ctx->pc = 0x23FAA4u;
    SET_GPR_U32(ctx, 31, 0x23FAACu);
    ctx->pc = 0x23FAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FAA4u;
    // 0x23faa8: 0x24a5ea28  addiu       $a1, $a1, -0x15D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x23FAACu;
label_23faac:
    // 0x23faac: 0xc07aaa8  jal         func_1EAAA0
label_23fab0:
    if (ctx->pc == 0x23FAB0u) {
        ctx->pc = 0x23FAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FAACu;
        // 0x23fab0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FAB4u;
        goto label_23fab4;
    }
    ctx->pc = 0x23FAACu;
    SET_GPR_U32(ctx, 31, 0x23FAB4u);
    ctx->pc = 0x23FAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FAACu;
    // 0x23fab0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x23FAB4u;
label_23fab4:
    // 0x23fab4: 0x10000006  b           . + 4 + (0x6 << 2)
label_23fab8:
    if (ctx->pc == 0x23FAB8u) {
        ctx->pc = 0x23FAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FAB4u;
        // 0x23fab8: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FABCu;
        goto label_23fabc;
    }
    ctx->pc = 0x23FAB4u;
    {
        const bool branch_taken_0x23fab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FAB4u;
        // 0x23fab8: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fab4) {
            ctx->pc = 0x23FAD0u;
            goto label_23fad0;
        }
    }
    ctx->pc = 0x23FABCu;
label_23fabc:
    // 0x23fabc: 0x0  nop
    ctx->pc = 0x23fabcu;
    // NOP
label_23fac0:
    // 0x23fac0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x23fac0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_23fac4:
    // 0x23fac4: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
label_23fac8:
    if (ctx->pc == 0x23FAC8u) {
        ctx->pc = 0x23FACCu;
        goto label_23facc;
    }
    ctx->pc = 0x23FAC4u;
    {
        const bool branch_taken_0x23fac4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x23fac4) {
            ctx->pc = 0x23FAD0u;
            goto label_23fad0;
        }
    }
    ctx->pc = 0x23FACCu;
label_23facc:
    // 0x23facc: 0x24140009  addiu       $s4, $zero, 0x9
    ctx->pc = 0x23faccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_23fad0:
    // 0x23fad0: 0xc07a9d8  jal         func_1EA760
label_23fad4:
    if (ctx->pc == 0x23FAD4u) {
        ctx->pc = 0x23FAD8u;
        goto label_23fad8;
    }
    ctx->pc = 0x23FAD0u;
    SET_GPR_U32(ctx, 31, 0x23FAD8u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x23FAD8u;
label_23fad8:
    // 0x23fad8: 0xc07a86c  jal         func_1EA1B0
label_23fadc:
    if (ctx->pc == 0x23FADCu) {
        ctx->pc = 0x23FAE0u;
        goto label_23fae0;
    }
    ctx->pc = 0x23FAD8u;
    SET_GPR_U32(ctx, 31, 0x23FAE0u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x23FAE0u;
label_23fae0:
    // 0x23fae0: 0xc060258  jal         func_180960
label_23fae4:
    if (ctx->pc == 0x23FAE4u) {
        ctx->pc = 0x23FAE8u;
        goto label_23fae8;
    }
    ctx->pc = 0x23FAE0u;
    SET_GPR_U32(ctx, 31, 0x23FAE8u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x23FAE0u, 0x23FAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FAE8u;
label_23fae8:
    // 0x23fae8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x23fae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_23faec:
    // 0x23faec: 0x1682ff38  bne         $s4, $v0, . + 4 + (-0xC8 << 2)
label_23faf0:
    if (ctx->pc == 0x23FAF0u) {
        ctx->pc = 0x23FAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FAECu;
        // 0x23faf0: 0x2e810009  sltiu       $at, $s4, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FAF4u;
        goto label_23faf4;
    }
    ctx->pc = 0x23FAECu;
    {
        const bool branch_taken_0x23faec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x23FAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FAECu;
        // 0x23faf0: 0x2e810009  sltiu       $at, $s4, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23faec) {
            ctx->pc = 0x23F7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x23f7d0; return; }
        }
    }
    ctx->pc = 0x23FAF4u;
label_23faf4:
    // 0x23faf4: 0x0  nop
    ctx->pc = 0x23faf4u;
    // NOP
label_23faf8:
    // 0x23faf8: 0xc041790  jal         func_105E40
label_23fafc:
    if (ctx->pc == 0x23FAFCu) {
        ctx->pc = 0x23FB00u;
        goto label_23fb00;
    }
    ctx->pc = 0x23FAF8u;
    SET_GPR_U32(ctx, 31, 0x23FB00u);
    ctx->pc = 0x105E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105E40u, 0x23FAF8u, 0x23FB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FB00u;
label_23fb00:
    // 0x23fb00: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23fb00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23fb04:
    // 0x23fb04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23fb04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23fb08:
    // 0x23fb08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23fb08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23fb0c:
    // 0x23fb0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23fb0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23fb10:
    // 0x23fb10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23fb10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23fb14:
    // 0x23fb14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23fb14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23fb18:
    // 0x23fb18: 0x3e00008  jr          $ra
label_23fb1c:
    if (ctx->pc == 0x23FB1Cu) {
        ctx->pc = 0x23FB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB18u;
        // 0x23fb1c: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FB20u;
        goto label_23fb20;
    }
    ctx->pc = 0x23FB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB18u;
        // 0x23fb1c: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FB20u;
label_23fb20:
    // 0x23fb20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23fb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23fb24:
    // 0x23fb24: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x23fb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_23fb28:
    // 0x23fb28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23fb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23fb2c:
    // 0x23fb2c: 0x24060088  addiu       $a2, $zero, 0x88
    ctx->pc = 0x23fb2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_23fb30:
    // 0x23fb30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23fb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23fb34:
    // 0x23fb34: 0x3407fff0  ori         $a3, $zero, 0xFFF0
    ctx->pc = 0x23fb34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
label_23fb38:
    // 0x23fb38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23fb38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23fb3c:
    // 0x23fb3c: 0x240801e0  addiu       $t0, $zero, 0x1E0
    ctx->pc = 0x23fb3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
label_23fb40:
    // 0x23fb40: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x23fb40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_23fb44:
    // 0x23fb44: 0xc07aa5c  jal         func_1EA970
label_23fb48:
    if (ctx->pc == 0x23FB48u) {
        ctx->pc = 0x23FB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB44u;
        // 0x23fb48: 0x240900b0  addiu       $t1, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FB4Cu;
        goto label_23fb4c;
    }
    ctx->pc = 0x23FB44u;
    SET_GPR_U32(ctx, 31, 0x23FB4Cu);
    ctx->pc = 0x23FB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FB44u;
    // 0x23fb48: 0x240900b0  addiu       $t1, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA970u;
    { ctx->pc = 0x1ea970; return; }
    ctx->pc = 0x23FB4Cu;
label_23fb4c:
    // 0x23fb4c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x23fb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_23fb50:
    // 0x23fb50: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x23fb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23fb54:
    // 0x23fb54: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x23fb54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_23fb58:
    // 0x23fb58: 0xc07aa7c  jal         func_1EA9F0
label_23fb5c:
    if (ctx->pc == 0x23FB5Cu) {
        ctx->pc = 0x23FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB58u;
        // 0x23fb5c: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FB60u;
        goto label_23fb60;
    }
    ctx->pc = 0x23FB58u;
    SET_GPR_U32(ctx, 31, 0x23FB60u);
    ctx->pc = 0x23FB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FB58u;
    // 0x23fb5c: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA9F0u;
    { ctx->pc = 0x1ea9f0; return; }
    ctx->pc = 0x23FB60u;
label_23fb60:
    // 0x23fb60: 0xc07ab08  jal         func_1EAC20
label_23fb64:
    if (ctx->pc == 0x23FB64u) {
        ctx->pc = 0x23FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB60u;
        // 0x23fb64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FB68u;
        goto label_23fb68;
    }
    ctx->pc = 0x23FB60u;
    SET_GPR_U32(ctx, 31, 0x23FB68u);
    ctx->pc = 0x23FB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FB60u;
    // 0x23fb64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC20u;
    { ctx->pc = 0x1eac20; return; }
    ctx->pc = 0x23FB68u;
label_23fb68:
    // 0x23fb68: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x23fb68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_23fb6c:
    // 0x23fb6c: 0x27828310  addiu       $v0, $gp, -0x7CF0
    ctx->pc = 0x23fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935312));
label_23fb70:
    // 0x23fb70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23fb74:
    // 0x23fb74: 0xc07aaa8  jal         func_1EAAA0
label_23fb78:
    if (ctx->pc == 0x23FB78u) {
        ctx->pc = 0x23FB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB74u;
        // 0x23fb78: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FB7Cu;
        goto label_23fb7c;
    }
    ctx->pc = 0x23FB74u;
    SET_GPR_U32(ctx, 31, 0x23FB7Cu);
    ctx->pc = 0x23FB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FB74u;
    // 0x23fb78: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x23FB7Cu;
label_23fb7c:
    // 0x23fb7c: 0xc07aa84  jal         func_1EAA10
label_23fb80:
    if (ctx->pc == 0x23FB80u) {
        ctx->pc = 0x23FB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB7Cu;
        // 0x23fb80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FB84u;
        goto label_23fb84;
    }
    ctx->pc = 0x23FB7Cu;
    SET_GPR_U32(ctx, 31, 0x23FB84u);
    ctx->pc = 0x23FB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FB7Cu;
    // 0x23fb80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x23FB84u;
label_23fb84:
    // 0x23fb84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23fb84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23fb88:
    // 0x23fb88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23fb88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23fb8c:
    // 0x23fb8c: 0x3e00008  jr          $ra
label_23fb90:
    if (ctx->pc == 0x23FB90u) {
        ctx->pc = 0x23FB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB8Cu;
        // 0x23fb90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FB94u;
        goto label_23fb94;
    }
    ctx->pc = 0x23FB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB8Cu;
        // 0x23fb90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FB8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FB94u;
label_23fb94:
    // 0x23fb94: 0x0  nop
    ctx->pc = 0x23fb94u;
    // NOP
label_23fb98:
    // 0x23fb98: 0x0  nop
    ctx->pc = 0x23fb98u;
    // NOP
label_23fb9c:
    // 0x23fb9c: 0x0  nop
    ctx->pc = 0x23fb9cu;
    // NOP
label_23fba0:
    // 0x23fba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23fba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23fba4:
    // 0x23fba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23fba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23fba8:
    // 0x23fba8: 0xc07aa90  jal         func_1EAA40
label_23fbac:
    if (ctx->pc == 0x23FBACu) {
        ctx->pc = 0x23FBB0u;
        goto label_23fbb0;
    }
    ctx->pc = 0x23FBA8u;
    SET_GPR_U32(ctx, 31, 0x23FBB0u);
    ctx->pc = 0x1EAA40u;
    { ctx->pc = 0x1eaa40; return; }
    ctx->pc = 0x23FBB0u;
label_23fbb0:
    // 0x23fbb0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x23fbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23fbb4:
    // 0x23fbb4: 0x14440009  bne         $v0, $a0, . + 4 + (0x9 << 2)
label_23fbb8:
    if (ctx->pc == 0x23FBB8u) {
        ctx->pc = 0x23FBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FBB4u;
        // 0x23fbb8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FBBCu;
        goto label_23fbbc;
    }
    ctx->pc = 0x23FBB4u;
    {
        const bool branch_taken_0x23fbb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x23FBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FBB4u;
        // 0x23fbb8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fbb4) {
            ctx->pc = 0x23FBDCu;
            goto label_23fbdc;
        }
    }
    ctx->pc = 0x23FBBCu;
label_23fbbc:
    // 0x23fbbc: 0xc05b420  jal         func_16D080
label_23fbc0:
    if (ctx->pc == 0x23FBC0u) {
        ctx->pc = 0x23FBC4u;
        goto label_23fbc4;
    }
    ctx->pc = 0x23FBBCu;
    SET_GPR_U32(ctx, 31, 0x23FBC4u);
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x23FBBCu, 0x23FBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FBC4u;
label_23fbc4:
    // 0x23fbc4: 0xc07aa8c  jal         func_1EAA30
label_23fbc8:
    if (ctx->pc == 0x23FBC8u) {
        ctx->pc = 0x23FBCCu;
        goto label_23fbcc;
    }
    ctx->pc = 0x23FBC4u;
    SET_GPR_U32(ctx, 31, 0x23FBCCu);
    ctx->pc = 0x1EAA30u;
    { ctx->pc = 0x1eaa30; return; }
    ctx->pc = 0x23FBCCu;
label_23fbcc:
    // 0x23fbcc: 0xc07ab18  jal         func_1EAC60
label_23fbd0:
    if (ctx->pc == 0x23FBD0u) {
        ctx->pc = 0x23FBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FBCCu;
        // 0x23fbd0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FBD4u;
        goto label_23fbd4;
    }
    ctx->pc = 0x23FBCCu;
    SET_GPR_U32(ctx, 31, 0x23FBD4u);
    ctx->pc = 0x23FBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FBCCu;
    // 0x23fbd0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC60u;
    { ctx->pc = 0x1eac60; return; }
    ctx->pc = 0x23FBD4u;
label_23fbd4:
    // 0x23fbd4: 0x10000002  b           . + 4 + (0x2 << 2)
label_23fbd8:
    if (ctx->pc == 0x23FBD8u) {
        ctx->pc = 0x23FBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FBD4u;
        // 0x23fbd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FBDCu;
        goto label_23fbdc;
    }
    ctx->pc = 0x23FBD4u;
    {
        const bool branch_taken_0x23fbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FBD4u;
        // 0x23fbd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fbd4) {
            ctx->pc = 0x23FBE0u;
            goto label_23fbe0;
        }
    }
    ctx->pc = 0x23FBDCu;
label_23fbdc:
    // 0x23fbdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23fbdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23fbe0:
    // 0x23fbe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23fbe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23fbe4:
    // 0x23fbe4: 0x3e00008  jr          $ra
label_23fbe8:
    if (ctx->pc == 0x23FBE8u) {
        ctx->pc = 0x23FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FBE4u;
        // 0x23fbe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FBECu;
        goto label_23fbec;
    }
    ctx->pc = 0x23FBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FBE4u;
        // 0x23fbe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FBE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FBECu;
label_23fbec:
    // 0x23fbec: 0x0  nop
    ctx->pc = 0x23fbecu;
    // NOP
label_23fbf0:
    // 0x23fbf0: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x23fbf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_23fbf4:
    // 0x23fbf4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23fbf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23fbf8:
    // 0x23fbf8: 0x24c63420  addiu       $a2, $a2, 0x3420
    ctx->pc = 0x23fbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13344));
label_23fbfc:
    // 0x23fbfc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23fbfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23fc00:
    // 0x23fc00: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x23fc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_23fc04:
    // 0x23fc04: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23fc04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23fc08:
    // 0x23fc08: 0x90680000  lbu         $t0, 0x0($v1)
    ctx->pc = 0x23fc08u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_23fc0c:
    // 0x23fc0c: 0x0  nop
    ctx->pc = 0x23fc0cu;
    // NOP
label_23fc10:
    // 0x23fc10: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x23fc10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_23fc14:
    // 0x23fc14: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x23fc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_23fc18:
    // 0x23fc18: 0x24a5c990  addiu       $a1, $a1, -0x3670
    ctx->pc = 0x23fc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953360));
label_23fc1c:
    // 0x23fc1c: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x23fc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_23fc20:
    // 0x23fc20: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x23fc20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_23fc24:
    // 0x23fc24: 0x15030008  bne         $t0, $v1, . + 4 + (0x8 << 2)
label_23fc28:
    if (ctx->pc == 0x23FC28u) {
        ctx->pc = 0x23FC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC24u;
        // 0x23fc28: 0xa91821  addu        $v1, $a1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FC2Cu;
        goto label_23fc2c;
    }
    ctx->pc = 0x23FC24u;
    {
        const bool branch_taken_0x23fc24 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        ctx->pc = 0x23FC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC24u;
        // 0x23fc28: 0xa91821  addu        $v1, $a1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc24) {
            ctx->pc = 0x23FC48u;
            goto label_23fc48;
        }
    }
    ctx->pc = 0x23FC2Cu;
label_23fc2c:
    // 0x23fc2c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x23fc2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_23fc30:
    // 0x23fc30: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x23fc30u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_23fc34:
    // 0x23fc34: 0x8c2335fc  lw          $v1, 0x35FC($at)
    ctx->pc = 0x23fc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13820)));
label_23fc38:
    // 0x23fc38: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_23fc3c:
    if (ctx->pc == 0x23FC3Cu) {
        ctx->pc = 0x23FC40u;
        goto label_23fc40;
    }
    ctx->pc = 0x23FC38u;
    {
        const bool branch_taken_0x23fc38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x23fc38) {
            ctx->pc = 0x23FC48u;
            goto label_23fc48;
        }
    }
    ctx->pc = 0x23FC40u;
label_23fc40:
    // 0x23fc40: 0x10000005  b           . + 4 + (0x5 << 2)
label_23fc44:
    if (ctx->pc == 0x23FC44u) {
        ctx->pc = 0x23FC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC40u;
        // 0x23fc44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FC48u;
        goto label_23fc48;
    }
    ctx->pc = 0x23FC40u;
    {
        const bool branch_taken_0x23fc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC40u;
        // 0x23fc44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc40) {
            ctx->pc = 0x23FC58u;
            goto label_23fc58;
        }
    }
    ctx->pc = 0x23FC48u;
label_23fc48:
    // 0x23fc48: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23fc48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_23fc4c:
    // 0x23fc4c: 0x28e30029  slti        $v1, $a3, 0x29
    ctx->pc = 0x23fc4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)41) ? 1 : 0);
label_23fc50:
    // 0x23fc50: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_23fc54:
    if (ctx->pc == 0x23FC54u) {
        ctx->pc = 0x23FC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC50u;
        // 0x23fc54: 0x25290018  addiu       $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FC58u;
        goto label_23fc58;
    }
    ctx->pc = 0x23FC50u;
    {
        const bool branch_taken_0x23fc50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC50u;
        // 0x23fc54: 0x25290018  addiu       $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc50) {
            ctx->pc = 0x23FC1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fc1c;
        }
    }
    ctx->pc = 0x23FC58u;
label_23fc58:
    // 0x23fc58: 0x3e00008  jr          $ra
label_23fc5c:
    if (ctx->pc == 0x23FC5Cu) {
        ctx->pc = 0x23FC60u;
        goto label_23fc60;
    }
    ctx->pc = 0x23FC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FC60u;
label_23fc60:
    // 0x23fc60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23fc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23fc64:
    // 0x23fc64: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x23fc64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_23fc68:
    // 0x23fc68: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x23fc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_23fc6c:
    // 0x23fc6c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23fc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_23fc70:
    // 0x23fc70: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x23fc70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
label_23fc74:
    // 0x23fc74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23fc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23fc78:
    // 0x23fc78: 0x24a5b668  addiu       $a1, $a1, -0x4998
    ctx->pc = 0x23fc78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948456));
label_23fc7c:
    // 0x23fc7c: 0x24420220  addiu       $v0, $v0, 0x220
    ctx->pc = 0x23fc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_23fc80:
    // 0x23fc80: 0x2484cce8  addiu       $a0, $a0, -0x3318
    ctx->pc = 0x23fc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954216));
label_23fc84:
    // 0x23fc84: 0x453023  subu        $a2, $v0, $a1
    ctx->pc = 0x23fc84u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_23fc88:
    // 0x23fc88: 0xc08e93e  jal         func_23A4F8
label_23fc8c:
    if (ctx->pc == 0x23FC8Cu) {
        ctx->pc = 0x23FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC88u;
        // 0x23fc8c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FC90u;
        goto label_23fc90;
    }
    ctx->pc = 0x23FC88u;
    SET_GPR_U32(ctx, 31, 0x23FC90u);
    ctx->pc = 0x23FC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FC88u;
    // 0x23fc8c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x23FC90u;
label_23fc90:
    // 0x23fc90: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x23fc90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_23fc94:
    // 0x23fc94: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23fc94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23fc98:
    // 0x23fc98: 0x8c23b46c  lw          $v1, -0x4B94($at)
    ctx->pc = 0x23fc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947948)));
label_23fc9c:
    // 0x23fc9c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23fc9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23fca0:
    // 0x23fca0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x23fca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_23fca4:
    // 0x23fca4: 0x8c22b470  lw          $v0, -0x4B90($at)
    ctx->pc = 0x23fca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947952)));
label_23fca8:
    // 0x23fca8: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x23fca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_23fcac:
    // 0x23fcac: 0xac23caec  sw          $v1, -0x3514($at)
    ctx->pc = 0x23fcacu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953708), GPR_U32(ctx, 3));
label_23fcb0:
    // 0x23fcb0: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x23fcb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_23fcb4:
    // 0x23fcb4: 0xac22caf0  sw          $v0, -0x3510($at)
    ctx->pc = 0x23fcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953712), GPR_U32(ctx, 2));
label_23fcb8:
    // 0x23fcb8: 0x938392f4  lbu         $v1, -0x6D0C($gp)
    ctx->pc = 0x23fcb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939380)));
label_23fcbc:
    // 0x23fcbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23fcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23fcc0:
    // 0x23fcc0: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x23fcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
label_23fcc4:
    // 0x23fcc4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23fcc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_23fcc8:
    // 0x23fcc8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_23fccc:
    if (ctx->pc == 0x23FCCCu) {
        ctx->pc = 0x23FCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FCC8u;
        // 0x23fccc: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FCD0u;
        goto label_23fcd0;
    }
    ctx->pc = 0x23FCC8u;
    {
        const bool branch_taken_0x23fcc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FCC8u;
        // 0x23fccc: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fcc8) {
            ctx->pc = 0x23FCE4u;
            goto label_23fce4;
        }
    }
    ctx->pc = 0x23FCD0u;
label_23fcd0:
    // 0x23fcd0: 0x244218b0  addiu       $v0, $v0, 0x18B0
    ctx->pc = 0x23fcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6320));
label_23fcd4:
    // 0x23fcd4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23fcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_23fcd8:
    // 0x23fcd8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23fcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23fcdc:
    // 0x23fcdc: 0x40f809  jalr        $v0
label_23fce0:
    if (ctx->pc == 0x23FCE0u) {
        ctx->pc = 0x23FCE4u;
        goto label_23fce4;
    }
    ctx->pc = 0x23FCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23FCE4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FCDCu, 0x23FCE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23FCE4u;
label_23fce4:
    // 0x23fce4: 0x0  nop
    ctx->pc = 0x23fce4u;
    // NOP
label_23fce8:
    // 0x23fce8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23fce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_23fcec:
    // 0x23fcec: 0x2a020009  slti        $v0, $s0, 0x9
    ctx->pc = 0x23fcecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
label_23fcf0:
    // 0x23fcf0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_23fcf4:
    if (ctx->pc == 0x23FCF4u) {
        ctx->pc = 0x23FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FCF0u;
        // 0x23fcf4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FCF8u;
        goto label_23fcf8;
    }
    ctx->pc = 0x23FCF0u;
    {
        const bool branch_taken_0x23fcf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FCF0u;
        // 0x23fcf4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fcf0) {
            ctx->pc = 0x23FCB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fcb8;
        }
    }
    ctx->pc = 0x23FCF8u;
label_23fcf8:
    // 0x23fcf8: 0xc055da0  jal         func_157680
label_23fcfc:
    if (ctx->pc == 0x23FCFCu) {
        ctx->pc = 0x23FD00u;
        goto label_23fd00;
    }
    ctx->pc = 0x23FCF8u;
    SET_GPR_U32(ctx, 31, 0x23FD00u);
    ctx->pc = 0x157680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157680u, 0x23FCF8u, 0x23FD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FD00u;
label_23fd00:
    // 0x23fd00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23fd00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23fd04:
    // 0x23fd04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23fd04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23fd08:
    // 0x23fd08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23fd08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23fd0c:
    // 0x23fd0c: 0x3e00008  jr          $ra
label_23fd10:
    if (ctx->pc == 0x23FD10u) {
        ctx->pc = 0x23FD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD0Cu;
        // 0x23fd10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FD14u;
        goto label_23fd14;
    }
    ctx->pc = 0x23FD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD0Cu;
        // 0x23fd10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FD0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FD14u;
label_23fd14:
    // 0x23fd14: 0x0  nop
    ctx->pc = 0x23fd14u;
    // NOP
label_23fd18:
    // 0x23fd18: 0x0  nop
    ctx->pc = 0x23fd18u;
    // NOP
label_23fd1c:
    // 0x23fd1c: 0x0  nop
    ctx->pc = 0x23fd1cu;
    // NOP
label_23fd20:
    // 0x23fd20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23fd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_23fd24:
    // 0x23fd24: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x23fd24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_23fd28:
    // 0x23fd28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23fd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_23fd2c:
    // 0x23fd2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23fd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23fd30:
    // 0x23fd30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23fd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23fd34:
    // 0x23fd34: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23fd34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23fd38:
    // 0x23fd38: 0xac20e290  sw          $zero, -0x1D70($at)
    ctx->pc = 0x23fd38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959760), GPR_U32(ctx, 0));
label_23fd3c:
    // 0x23fd3c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23fd3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23fd40:
    // 0x23fd40: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x23fd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_23fd44:
    // 0x23fd44: 0x1202003c  beq         $s0, $v0, . + 4 + (0x3C << 2)
label_23fd48:
    if (ctx->pc == 0x23FD48u) {
        ctx->pc = 0x23FD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD44u;
        // 0x23fd48: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FD4Cu;
        goto label_23fd4c;
    }
    ctx->pc = 0x23FD44u;
    {
        const bool branch_taken_0x23fd44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD44u;
        // 0x23fd48: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd44) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FD4Cu;
label_23fd4c:
    // 0x23fd4c: 0x1202003a  beq         $s0, $v0, . + 4 + (0x3A << 2)
label_23fd50:
    if (ctx->pc == 0x23FD50u) {
        ctx->pc = 0x23FD54u;
        goto label_23fd54;
    }
    ctx->pc = 0x23FD4Cu;
    {
        const bool branch_taken_0x23fd4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fd4c) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FD54u;
label_23fd54:
    // 0x23fd54: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x23fd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_23fd58:
    // 0x23fd58: 0x12020037  beq         $s0, $v0, . + 4 + (0x37 << 2)
label_23fd5c:
    if (ctx->pc == 0x23FD5Cu) {
        ctx->pc = 0x23FD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD58u;
        // 0x23fd5c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FD60u;
        goto label_23fd60;
    }
    ctx->pc = 0x23FD58u;
    {
        const bool branch_taken_0x23fd58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD58u;
        // 0x23fd5c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd58) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FD60u;
label_23fd60:
    // 0x23fd60: 0x12020035  beq         $s0, $v0, . + 4 + (0x35 << 2)
label_23fd64:
    if (ctx->pc == 0x23FD64u) {
        ctx->pc = 0x23FD68u;
        goto label_23fd68;
    }
    ctx->pc = 0x23FD60u;
    {
        const bool branch_taken_0x23fd60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fd60) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FD68u;
label_23fd68:
    // 0x23fd68: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x23fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_23fd6c:
    // 0x23fd6c: 0x12020032  beq         $s0, $v0, . + 4 + (0x32 << 2)
label_23fd70:
    if (ctx->pc == 0x23FD70u) {
        ctx->pc = 0x23FD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD6Cu;
        // 0x23fd70: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FD74u;
        goto label_23fd74;
    }
    ctx->pc = 0x23FD6Cu;
    {
        const bool branch_taken_0x23fd6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD6Cu;
        // 0x23fd70: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd6c) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FD74u;
label_23fd74:
    // 0x23fd74: 0x12020030  beq         $s0, $v0, . + 4 + (0x30 << 2)
label_23fd78:
    if (ctx->pc == 0x23FD78u) {
        ctx->pc = 0x23FD7Cu;
        goto label_23fd7c;
    }
    ctx->pc = 0x23FD74u;
    {
        const bool branch_taken_0x23fd74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fd74) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FD7Cu;
label_23fd7c:
    // 0x23fd7c: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x23fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_23fd80:
    // 0x23fd80: 0x1202002d  beq         $s0, $v0, . + 4 + (0x2D << 2)
label_23fd84:
    if (ctx->pc == 0x23FD84u) {
        ctx->pc = 0x23FD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD80u;
        // 0x23fd84: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FD88u;
        goto label_23fd88;
    }
    ctx->pc = 0x23FD80u;
    {
        const bool branch_taken_0x23fd80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD80u;
        // 0x23fd84: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd80) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FD88u;
label_23fd88:
    // 0x23fd88: 0x1202002b  beq         $s0, $v0, . + 4 + (0x2B << 2)
label_23fd8c:
    if (ctx->pc == 0x23FD8Cu) {
        ctx->pc = 0x23FD90u;
        goto label_23fd90;
    }
    ctx->pc = 0x23FD88u;
    {
        const bool branch_taken_0x23fd88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fd88) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FD90u;
label_23fd90:
    // 0x23fd90: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x23fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_23fd94:
    // 0x23fd94: 0x12020028  beq         $s0, $v0, . + 4 + (0x28 << 2)
label_23fd98:
    if (ctx->pc == 0x23FD98u) {
        ctx->pc = 0x23FD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD94u;
        // 0x23fd98: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FD9Cu;
        goto label_23fd9c;
    }
    ctx->pc = 0x23FD94u;
    {
        const bool branch_taken_0x23fd94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD94u;
        // 0x23fd98: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd94) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FD9Cu;
label_23fd9c:
    // 0x23fd9c: 0x12020026  beq         $s0, $v0, . + 4 + (0x26 << 2)
label_23fda0:
    if (ctx->pc == 0x23FDA0u) {
        ctx->pc = 0x23FDA4u;
        goto label_23fda4;
    }
    ctx->pc = 0x23FD9Cu;
    {
        const bool branch_taken_0x23fd9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fd9c) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FDA4u;
label_23fda4:
    // 0x23fda4: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x23fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_23fda8:
    // 0x23fda8: 0x12020023  beq         $s0, $v0, . + 4 + (0x23 << 2)
label_23fdac:
    if (ctx->pc == 0x23FDACu) {
        ctx->pc = 0x23FDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDA8u;
        // 0x23fdac: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FDB0u;
        goto label_23fdb0;
    }
    ctx->pc = 0x23FDA8u;
    {
        const bool branch_taken_0x23fda8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDA8u;
        // 0x23fdac: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fda8) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FDB0u;
label_23fdb0:
    // 0x23fdb0: 0x12020021  beq         $s0, $v0, . + 4 + (0x21 << 2)
label_23fdb4:
    if (ctx->pc == 0x23FDB4u) {
        ctx->pc = 0x23FDB8u;
        goto label_23fdb8;
    }
    ctx->pc = 0x23FDB0u;
    {
        const bool branch_taken_0x23fdb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fdb0) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FDB8u;
label_23fdb8:
    // 0x23fdb8: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x23fdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_23fdbc:
    // 0x23fdbc: 0x1202001e  beq         $s0, $v0, . + 4 + (0x1E << 2)
label_23fdc0:
    if (ctx->pc == 0x23FDC0u) {
        ctx->pc = 0x23FDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDBCu;
        // 0x23fdc0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FDC4u;
        goto label_23fdc4;
    }
    ctx->pc = 0x23FDBCu;
    {
        const bool branch_taken_0x23fdbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDBCu;
        // 0x23fdc0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fdbc) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FDC4u;
label_23fdc4:
    // 0x23fdc4: 0x1202001c  beq         $s0, $v0, . + 4 + (0x1C << 2)
label_23fdc8:
    if (ctx->pc == 0x23FDC8u) {
        ctx->pc = 0x23FDCCu;
        goto label_23fdcc;
    }
    ctx->pc = 0x23FDC4u;
    {
        const bool branch_taken_0x23fdc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fdc4) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FDCCu;
label_23fdcc:
    // 0x23fdcc: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x23fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_23fdd0:
    // 0x23fdd0: 0x12020019  beq         $s0, $v0, . + 4 + (0x19 << 2)
label_23fdd4:
    if (ctx->pc == 0x23FDD4u) {
        ctx->pc = 0x23FDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDD0u;
        // 0x23fdd4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FDD8u;
        goto label_23fdd8;
    }
    ctx->pc = 0x23FDD0u;
    {
        const bool branch_taken_0x23fdd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDD0u;
        // 0x23fdd4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fdd0) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FDD8u;
label_23fdd8:
    // 0x23fdd8: 0x12020017  beq         $s0, $v0, . + 4 + (0x17 << 2)
label_23fddc:
    if (ctx->pc == 0x23FDDCu) {
        ctx->pc = 0x23FDE0u;
        goto label_23fde0;
    }
    ctx->pc = 0x23FDD8u;
    {
        const bool branch_taken_0x23fdd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fdd8) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FDE0u;
label_23fde0:
    // 0x23fde0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x23fde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_23fde4:
    // 0x23fde4: 0x12020014  beq         $s0, $v0, . + 4 + (0x14 << 2)
label_23fde8:
    if (ctx->pc == 0x23FDE8u) {
        ctx->pc = 0x23FDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDE4u;
        // 0x23fde8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FDECu;
        goto label_23fdec;
    }
    ctx->pc = 0x23FDE4u;
    {
        const bool branch_taken_0x23fde4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDE4u;
        // 0x23fde8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fde4) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FDECu;
label_23fdec:
    // 0x23fdec: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
label_23fdf0:
    if (ctx->pc == 0x23FDF0u) {
        ctx->pc = 0x23FDF4u;
        goto label_23fdf4;
    }
    ctx->pc = 0x23FDECu;
    {
        const bool branch_taken_0x23fdec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fdec) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FDF4u;
label_23fdf4:
    // 0x23fdf4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x23fdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_23fdf8:
    // 0x23fdf8: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
label_23fdfc:
    if (ctx->pc == 0x23FDFCu) {
        ctx->pc = 0x23FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDF8u;
        // 0x23fdfc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FE00u;
        goto label_23fe00;
    }
    ctx->pc = 0x23FDF8u;
    {
        const bool branch_taken_0x23fdf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDF8u;
        // 0x23fdfc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fdf8) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FE00u;
label_23fe00:
    // 0x23fe00: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
label_23fe04:
    if (ctx->pc == 0x23FE04u) {
        ctx->pc = 0x23FE08u;
        goto label_23fe08;
    }
    ctx->pc = 0x23FE00u;
    {
        const bool branch_taken_0x23fe00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fe00) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FE08u;
label_23fe08:
    // 0x23fe08: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x23fe08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23fe0c:
    // 0x23fe0c: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
label_23fe10:
    if (ctx->pc == 0x23FE10u) {
        ctx->pc = 0x23FE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE0Cu;
        // 0x23fe10: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FE14u;
        goto label_23fe14;
    }
    ctx->pc = 0x23FE0Cu;
    {
        const bool branch_taken_0x23fe0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE0Cu;
        // 0x23fe10: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe0c) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FE14u;
label_23fe14:
    // 0x23fe14: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_23fe18:
    if (ctx->pc == 0x23FE18u) {
        ctx->pc = 0x23FE1Cu;
        goto label_23fe1c;
    }
    ctx->pc = 0x23FE14u;
    {
        const bool branch_taken_0x23fe14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fe14) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FE1Cu;
label_23fe1c:
    // 0x23fe1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23fe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23fe20:
    // 0x23fe20: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_23fe24:
    if (ctx->pc == 0x23FE24u) {
        ctx->pc = 0x23FE28u;
        goto label_23fe28;
    }
    ctx->pc = 0x23FE20u;
    {
        const bool branch_taken_0x23fe20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fe20) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FE28u;
label_23fe28:
    // 0x23fe28: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_23fe2c:
    if (ctx->pc == 0x23FE2Cu) {
        ctx->pc = 0x23FE30u;
        goto label_23fe30;
    }
    ctx->pc = 0x23FE28u;
    {
        const bool branch_taken_0x23fe28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fe28) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FE30u;
label_23fe30:
    // 0x23fe30: 0x1000000b  b           . + 4 + (0xB << 2)
label_23fe34:
    if (ctx->pc == 0x23FE34u) {
        ctx->pc = 0x23FE38u;
        goto label_23fe38;
    }
    ctx->pc = 0x23FE30u;
    {
        const bool branch_taken_0x23fe30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fe30) {
            ctx->pc = 0x23FE60u;
            goto label_23fe60;
        }
    }
    ctx->pc = 0x23FE38u;
label_23fe38:
    // 0x23fe38: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x23fe38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_23fe3c:
    // 0x23fe3c: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x23fe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
label_23fe40:
    // 0x23fe40: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x23fe40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_23fe44:
    // 0x23fe44: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23fe44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_23fe48:
    // 0x23fe48: 0x34213a10  ori         $at, $at, 0x3A10
    ctx->pc = 0x23fe48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14864);
label_23fe4c:
    // 0x23fe4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23fe4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23fe50:
    // 0x23fe50: 0xc065580  jal         func_195600
label_23fe54:
    if (ctx->pc == 0x23FE54u) {
        ctx->pc = 0x23FE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE50u;
        // 0x23fe54: 0x412021  addu        $a0, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FE58u;
        goto label_23fe58;
    }
    ctx->pc = 0x23FE50u;
    SET_GPR_U32(ctx, 31, 0x23FE58u);
    ctx->pc = 0x23FE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FE50u;
    // 0x23fe54: 0x412021  addu        $a0, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x23FE50u, 0x23FE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FE58u;
label_23fe58:
    // 0x23fe58: 0x10000008  b           . + 4 + (0x8 << 2)
label_23fe5c:
    if (ctx->pc == 0x23FE5Cu) {
        ctx->pc = 0x23FE60u;
        goto label_23fe60;
    }
    ctx->pc = 0x23FE58u;
    {
        const bool branch_taken_0x23fe58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fe58) {
            ctx->pc = 0x23FE7Cu;
            goto label_23fe7c;
        }
    }
    ctx->pc = 0x23FE60u;
label_23fe60:
    // 0x23fe60: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x23fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_23fe64:
    // 0x23fe64: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x23fe64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
label_23fe68:
    // 0x23fe68: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x23fe68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_23fe6c:
    // 0x23fe6c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23fe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_23fe70:
    // 0x23fe70: 0x240300ab  addiu       $v1, $zero, 0xAB
    ctx->pc = 0x23fe70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_23fe74:
    // 0x23fe74: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x23fe74u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_23fe78:
    // 0x23fe78: 0xa0233a1b  sb          $v1, 0x3A1B($at)
    ctx->pc = 0x23fe78u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14875), (uint8_t)GPR_U32(ctx, 3));
label_23fe7c:
    // 0x23fe7c: 0x0  nop
    ctx->pc = 0x23fe7cu;
    // NOP
label_23fe80:
    // 0x23fe80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23fe80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_23fe84:
    // 0x23fe84: 0x2a0200ab  slti        $v0, $s0, 0xAB
    ctx->pc = 0x23fe84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)171) ? 1 : 0);
label_23fe88:
    // 0x23fe88: 0x1440ffad  bnez        $v0, . + 4 + (-0x53 << 2)
label_23fe8c:
    if (ctx->pc == 0x23FE8Cu) {
        ctx->pc = 0x23FE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE88u;
        // 0x23fe8c: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FE90u;
        goto label_23fe90;
    }
    ctx->pc = 0x23FE88u;
    {
        const bool branch_taken_0x23fe88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE88u;
        // 0x23fe8c: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe88) {
            ctx->pc = 0x23FD40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fd40;
        }
    }
    ctx->pc = 0x23FE90u;
label_23fe90:
    // 0x23fe90: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23fe90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23fe94:
    // 0x23fe94: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23fe94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23fe98:
    // 0x23fe98: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x23fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_23fe9c:
    // 0x23fe9c: 0x1222000c  beq         $s1, $v0, . + 4 + (0xC << 2)
label_23fea0:
    if (ctx->pc == 0x23FEA0u) {
        ctx->pc = 0x23FEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE9Cu;
        // 0x23fea0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FEA4u;
        goto label_23fea4;
    }
    ctx->pc = 0x23FE9Cu;
    {
        const bool branch_taken_0x23fe9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE9Cu;
        // 0x23fea0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe9c) {
            ctx->pc = 0x23FED0u;
            goto label_23fed0;
        }
    }
    ctx->pc = 0x23FEA4u;
label_23fea4:
    // 0x23fea4: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
label_23fea8:
    if (ctx->pc == 0x23FEA8u) {
        ctx->pc = 0x23FEACu;
        goto label_23feac;
    }
    ctx->pc = 0x23FEA4u;
    {
        const bool branch_taken_0x23fea4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fea4) {
            ctx->pc = 0x23FED0u;
            goto label_23fed0;
        }
    }
    ctx->pc = 0x23FEACu;
label_23feac:
    // 0x23feac: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x23feacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23feb0:
    // 0x23feb0: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
label_23feb4:
    if (ctx->pc == 0x23FEB4u) {
        ctx->pc = 0x23FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FEB0u;
        // 0x23feb4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FEB8u;
        goto label_23feb8;
    }
    ctx->pc = 0x23FEB0u;
    {
        const bool branch_taken_0x23feb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FEB0u;
        // 0x23feb4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23feb0) {
            ctx->pc = 0x23FED0u;
            goto label_23fed0;
        }
    }
    ctx->pc = 0x23FEB8u;
label_23feb8:
    // 0x23feb8: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
label_23febc:
    if (ctx->pc == 0x23FEBCu) {
        ctx->pc = 0x23FEC0u;
        goto label_23fec0;
    }
    ctx->pc = 0x23FEB8u;
    {
        const bool branch_taken_0x23feb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x23feb8) {
            ctx->pc = 0x23FED0u;
            goto label_23fed0;
        }
    }
    ctx->pc = 0x23FEC0u;
label_23fec0:
    // 0x23fec0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_23fec4:
    if (ctx->pc == 0x23FEC4u) {
        ctx->pc = 0x23FEC8u;
        goto label_23fec8;
    }
    ctx->pc = 0x23FEC0u;
    {
        const bool branch_taken_0x23fec0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fec0) {
            ctx->pc = 0x23FED0u;
            goto label_23fed0;
        }
    }
    ctx->pc = 0x23FEC8u;
label_23fec8:
    // 0x23fec8: 0x1000000b  b           . + 4 + (0xB << 2)
label_23fecc:
    if (ctx->pc == 0x23FECCu) {
        ctx->pc = 0x23FED0u;
        goto label_23fed0;
    }
    ctx->pc = 0x23FEC8u;
    {
        const bool branch_taken_0x23fec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fec8) {
            ctx->pc = 0x23FEF8u;
            goto label_23fef8;
        }
    }
    ctx->pc = 0x23FED0u;
label_23fed0:
    // 0x23fed0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x23fed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_23fed4:
    // 0x23fed4: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x23fed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
label_23fed8:
    // 0x23fed8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x23fed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_23fedc:
    // 0x23fedc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23fedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_23fee0:
    // 0x23fee0: 0x34214a30  ori         $at, $at, 0x4A30
    ctx->pc = 0x23fee0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18992);
label_23fee4:
    // 0x23fee4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23fee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23fee8:
    // 0x23fee8: 0xc065564  jal         func_195590
label_23feec:
    if (ctx->pc == 0x23FEECu) {
        ctx->pc = 0x23FEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FEE8u;
        // 0x23feec: 0x412021  addu        $a0, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FEF0u;
        goto label_23fef0;
    }
    ctx->pc = 0x23FEE8u;
    SET_GPR_U32(ctx, 31, 0x23FEF0u);
    ctx->pc = 0x23FEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FEE8u;
    // 0x23feec: 0x412021  addu        $a0, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195590u, 0x23FEE8u, 0x23FEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FEF0u;
label_23fef0:
    // 0x23fef0: 0x10000008  b           . + 4 + (0x8 << 2)
label_23fef4:
    if (ctx->pc == 0x23FEF4u) {
        ctx->pc = 0x23FEF8u;
        goto label_23fef8;
    }
    ctx->pc = 0x23FEF0u;
    {
        const bool branch_taken_0x23fef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fef0) {
            ctx->pc = 0x23FF14u;
            goto label_23ff14;
        }
    }
    ctx->pc = 0x23FEF8u;
label_23fef8:
    // 0x23fef8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x23fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_23fefc:
    // 0x23fefc: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x23fefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
label_23ff00:
    // 0x23ff00: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x23ff00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_23ff04:
    // 0x23ff04: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_23ff08:
    // 0x23ff08: 0x240300ab  addiu       $v1, $zero, 0xAB
    ctx->pc = 0x23ff08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_23ff0c:
    // 0x23ff0c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x23ff0cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_23ff10:
    // 0x23ff10: 0xa0234a3b  sb          $v1, 0x4A3B($at)
    ctx->pc = 0x23ff10u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19003), (uint8_t)GPR_U32(ctx, 3));
label_23ff14:
    // 0x23ff14: 0x0  nop
    ctx->pc = 0x23ff14u;
    // NOP
label_23ff18:
    // 0x23ff18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23ff18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_23ff1c:
    // 0x23ff1c: 0x2a22000f  slti        $v0, $s1, 0xF
    ctx->pc = 0x23ff1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)15) ? 1 : 0);
label_23ff20:
    // 0x23ff20: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_23ff24:
    if (ctx->pc == 0x23FF24u) {
        ctx->pc = 0x23FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF20u;
        // 0x23ff24: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF28u;
        goto label_23ff28;
    }
    ctx->pc = 0x23FF20u;
    {
        const bool branch_taken_0x23ff20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF20u;
        // 0x23ff24: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff20) {
            ctx->pc = 0x23FE98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fe98;
        }
    }
    ctx->pc = 0x23FF28u;
label_23ff28:
    // 0x23ff28: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23ff28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23ff2c:
    // 0x23ff2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23ff2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23ff30:
    // 0x23ff30: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x23ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_23ff34:
    // 0x23ff34: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x23ff34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_23ff38:
    // 0x23ff38: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x23ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
label_23ff3c:
    // 0x23ff3c: 0x342130f0  ori         $at, $at, 0x30F0
    ctx->pc = 0x23ff3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12528);
label_23ff40:
    // 0x23ff40: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23ff40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_23ff44:
    // 0x23ff44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23ff44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23ff48:
    // 0x23ff48: 0x240601a8  addiu       $a2, $zero, 0x1A8
    ctx->pc = 0x23ff48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
label_23ff4c:
    // 0x23ff4c: 0xc08e9ac  jal         func_23A6B0
label_23ff50:
    if (ctx->pc == 0x23FF50u) {
        ctx->pc = 0x23FF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF4Cu;
        // 0x23ff50: 0x412021  addu        $a0, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF54u;
        goto label_23ff54;
    }
    ctx->pc = 0x23FF4Cu;
    SET_GPR_U32(ctx, 31, 0x23FF54u);
    ctx->pc = 0x23FF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FF4Cu;
    // 0x23ff50: 0x412021  addu        $a0, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    { ctx->pc = 0x23a6b0; return; }
    ctx->pc = 0x23FF54u;
label_23ff54:
    // 0x23ff54: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23ff54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_23ff58:
    // 0x23ff58: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x23ff58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_23ff5c:
    // 0x23ff5c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_23ff60:
    if (ctx->pc == 0x23FF60u) {
        ctx->pc = 0x23FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF5Cu;
        // 0x23ff60: 0x261001a8  addiu       $s0, $s0, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF64u;
        goto label_23ff64;
    }
    ctx->pc = 0x23FF5Cu;
    {
        const bool branch_taken_0x23ff5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF5Cu;
        // 0x23ff60: 0x261001a8  addiu       $s0, $s0, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff5c) {
            ctx->pc = 0x23FF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ff30;
        }
    }
    ctx->pc = 0x23FF64u;
label_23ff64:
    // 0x23ff64: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x23ff64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
label_23ff68:
    // 0x23ff68: 0xc0902f0  jal         func_240BC0
label_23ff6c:
    if (ctx->pc == 0x23FF6Cu) {
        ctx->pc = 0x23FF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF68u;
        // 0x23ff6c: 0x2484ff78  addiu       $a0, $a0, -0x88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF70u;
        goto label_23ff70;
    }
    ctx->pc = 0x23FF68u;
    SET_GPR_U32(ctx, 31, 0x23FF70u);
    ctx->pc = 0x23FF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FF68u;
    // 0x23ff6c: 0x2484ff78  addiu       $a0, $a0, -0x88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240BC0u;
    { ctx->pc = 0x240bc0; return; }
    ctx->pc = 0x23FF70u;
label_23ff70:
    // 0x23ff70: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23ff70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23ff74:
    // 0x23ff74: 0x0  nop
    ctx->pc = 0x23ff74u;
    // NOP
label_23ff78:
    // 0x23ff78: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x23ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_23ff7c:
    // 0x23ff7c: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x23ff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
label_23ff80:
    // 0x23ff80: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x23ff80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_23ff84:
    // 0x23ff84: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_23ff88:
    // 0x23ff88: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x23ff88u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_23ff8c:
    // 0x23ff8c: 0x90224ec5  lbu         $v0, 0x4EC5($at)
    ctx->pc = 0x23ff8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 20165)));
label_23ff90:
    // 0x23ff90: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_23ff94:
    if (ctx->pc == 0x23FF94u) {
        ctx->pc = 0x23FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF90u;
        // 0x23ff94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF98u;
        goto label_23ff98;
    }
    ctx->pc = 0x23FF90u;
    {
        const bool branch_taken_0x23ff90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF90u;
        // 0x23ff94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff90) {
            ctx->pc = 0x23FFF0u;
            goto label_23fff0;
        }
    }
    ctx->pc = 0x23FF98u;
label_23ff98:
    // 0x23ff98: 0xc056a20  jal         func_15A880
label_23ff9c:
    if (ctx->pc == 0x23FF9Cu) {
        ctx->pc = 0x23FFA0u;
        goto label_23ffa0;
    }
    ctx->pc = 0x23FF98u;
    SET_GPR_U32(ctx, 31, 0x23FFA0u);
    ctx->pc = 0x15A880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A880u, 0x23FF98u, 0x23FFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FFA0u;
label_23ffa0:
    // 0x23ffa0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23ffa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ffa4:
    // 0x23ffa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23ffa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23ffa8:
    // 0x23ffa8: 0x27a6003c  addiu       $a2, $sp, 0x3C
    ctx->pc = 0x23ffa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_23ffac:
    // 0x23ffac: 0xc056a04  jal         func_15A810
label_23ffb0:
    if (ctx->pc == 0x23FFB0u) {
        ctx->pc = 0x23FFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FFACu;
        // 0x23ffb0: 0x27a70038  addiu       $a3, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FFB4u;
        goto label_23ffb4;
    }
    ctx->pc = 0x23FFACu;
    SET_GPR_U32(ctx, 31, 0x23FFB4u);
    ctx->pc = 0x23FFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FFACu;
    // 0x23ffb0: 0x27a70038  addiu       $a3, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A810u, 0x23FFACu, 0x23FFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FFB4u;
label_23ffb4:
    // 0x23ffb4: 0xc057138  jal         func_15C4E0
label_23ffb8:
    if (ctx->pc == 0x23FFB8u) {
        ctx->pc = 0x23FFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FFB4u;
        // 0x23ffb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FFBCu;
        goto label_23ffbc;
    }
    ctx->pc = 0x23FFB4u;
    SET_GPR_U32(ctx, 31, 0x23FFBCu);
    ctx->pc = 0x23FFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FFB4u;
    // 0x23ffb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C4E0u, 0x23FFB4u, 0x23FFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FFBCu;
label_23ffbc:
    // 0x23ffbc: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x23ffbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_23ffc0:
    // 0x23ffc0: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x23ffc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_23ffc4:
    // 0x23ffc4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x23ffc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_23ffc8:
    // 0x23ffc8: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x23ffc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_23ffcc:
    // 0x23ffcc: 0xc056fc8  jal         func_15BF20
label_23ffd0:
    if (ctx->pc == 0x23FFD0u) {
        ctx->pc = 0x23FFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FFCCu;
        // 0x23ffd0: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FFD4u;
        goto label_23ffd4;
    }
    ctx->pc = 0x23FFCCu;
    SET_GPR_U32(ctx, 31, 0x23FFD4u);
    ctx->pc = 0x23FFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FFCCu;
    // 0x23ffd0: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BF20u, 0x23FFCCu, 0x23FFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FFD4u;
label_23ffd4:
    // 0x23ffd4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x23ffd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_23ffd8:
    // 0x23ffd8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x23ffd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_23ffdc:
    // 0x23ffdc: 0x2463c990  addiu       $v1, $v1, -0x3670
    ctx->pc = 0x23ffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953360));
label_23ffe0:
    // 0x23ffe0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23ffe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23ffe4:
    // 0x23ffe4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23ffe8:
    // 0x23ffe8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x23ffe8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_23ffec:
    // 0x23ffec: 0xa0244e60  sb          $a0, 0x4E60($at)
    ctx->pc = 0x23ffecu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20064), (uint8_t)GPR_U32(ctx, 4));
label_23fff0:
    // 0x23fff0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23fff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_23fff4:
    // 0x23fff4: 0x2a020029  slti        $v0, $s0, 0x29
    ctx->pc = 0x23fff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)41) ? 1 : 0);
label_23fff8:
    // 0x23fff8: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
label_23fffc:
    if (ctx->pc == 0x23FFFCu) {
        ctx->pc = 0x23FFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FFF8u;
        // 0x23fffc: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240000u;
        goto label_240000;
    }
    ctx->pc = 0x23FFF8u;
    {
        const bool branch_taken_0x23fff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FFF8u;
        // 0x23fffc: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fff8) {
            ctx->pc = 0x23FF74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ff74;
        }
    }
    ctx->pc = 0x240000u;
label_240000:
    // 0x240000: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x240000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_240004:
    // 0x240004: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x240004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_240008:
    // 0x240008: 0x2484b310  addiu       $a0, $a0, -0x4CF0
    ctx->pc = 0x240008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947600));
label_24000c:
    // 0x24000c: 0x24a5c990  addiu       $a1, $a1, -0x3670
    ctx->pc = 0x24000cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953360));
label_240010:
    // 0x240010: 0xc08e93e  jal         func_23A4F8
label_240014:
    if (ctx->pc == 0x240014u) {
        ctx->pc = 0x240014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240010u;
        // 0x240014: 0x34464f20  ori         $a2, $v0, 0x4F20 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x240018u;
        goto label_240018;
    }
    ctx->pc = 0x240010u;
    SET_GPR_U32(ctx, 31, 0x240018u);
    ctx->pc = 0x240014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240010u;
    // 0x240014: 0x34464f20  ori         $a2, $v0, 0x4F20 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20256);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x240018u;
label_240018:
    // 0x240018: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x240018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24001c:
    // 0x24001c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24001cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_240020:
    // 0x240020: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x240020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_240024:
    // 0x240024: 0x3e00008  jr          $ra
label_240028:
    if (ctx->pc == 0x240028u) {
        ctx->pc = 0x240028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240024u;
        // 0x240028: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24002Cu;
        goto label_24002c;
    }
    ctx->pc = 0x240024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240024u;
        // 0x240028: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24002Cu;
label_24002c:
    // 0x24002c: 0x0  nop
    ctx->pc = 0x24002cu;
    // NOP
label_240030:
    // 0x240030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_240034:
    // 0x240034: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x240034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
label_240038:
    // 0x240038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x240038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24003c:
    // 0x24003c: 0xc059334  jal         func_164CD0
label_240040:
    if (ctx->pc == 0x240040u) {
        ctx->pc = 0x240040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24003Cu;
        // 0x240040: 0x2484e2a0  addiu       $a0, $a0, -0x1D60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240044u;
        goto label_240044;
    }
    ctx->pc = 0x24003Cu;
    SET_GPR_U32(ctx, 31, 0x240044u);
    ctx->pc = 0x240040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24003Cu;
    // 0x240040: 0x2484e2a0  addiu       $a0, $a0, -0x1D60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164CD0u, 0x24003Cu, 0x240044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240044u;
label_240044:
    // 0x240044: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x240044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
label_240048:
    // 0x240048: 0xc059e6c  jal         func_1679B0
label_24004c:
    if (ctx->pc == 0x24004Cu) {
        ctx->pc = 0x24004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240048u;
        // 0x24004c: 0x2484e29c  addiu       $a0, $a0, -0x1D64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959772));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240050u;
        goto label_240050;
    }
    ctx->pc = 0x240048u;
    SET_GPR_U32(ctx, 31, 0x240050u);
    ctx->pc = 0x24004Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240048u;
    // 0x24004c: 0x2484e29c  addiu       $a0, $a0, -0x1D64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959772));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1679B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1679B0u, 0x240048u, 0x240050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240050u;
label_240050:
    // 0x240050: 0xc059e0c  jal         func_167830
label_240054:
    if (ctx->pc == 0x240054u) {
        ctx->pc = 0x240058u;
        goto label_240058;
    }
    ctx->pc = 0x240050u;
    SET_GPR_U32(ctx, 31, 0x240058u);
    ctx->pc = 0x167830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167830u, 0x240050u, 0x240058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240058u;
label_240058:
    // 0x240058: 0xc059290  jal         func_164A40
label_24005c:
    if (ctx->pc == 0x24005Cu) {
        ctx->pc = 0x240060u;
        goto label_240060;
    }
    ctx->pc = 0x240058u;
    SET_GPR_U32(ctx, 31, 0x240060u);
    ctx->pc = 0x164A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164A40u, 0x240058u, 0x240060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240060u;
label_240060:
    // 0x240060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x240060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_240064:
    // 0x240064: 0x3e00008  jr          $ra
label_240068:
    if (ctx->pc == 0x240068u) {
        ctx->pc = 0x240068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240064u;
        // 0x240068: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24006Cu;
        goto label_24006c;
    }
    ctx->pc = 0x240064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240064u;
        // 0x240068: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24006Cu;
label_24006c:
    // 0x24006c: 0x0  nop
    ctx->pc = 0x24006cu;
    // NOP
    ctx->pc = 0x240070u;
    return;
}
