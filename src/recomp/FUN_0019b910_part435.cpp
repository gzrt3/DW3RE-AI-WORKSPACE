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

// Function: FUN_0019b910
// Address: 0x19b910 - 0x29b9f0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b910_part435(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x26f7b0u: goto label_26f7b0;
        case 0x26f7b4u: goto label_26f7b4;
        case 0x26f7b8u: goto label_26f7b8;
        case 0x26f7bcu: goto label_26f7bc;
        case 0x26f7c0u: goto label_26f7c0;
        case 0x26f7c4u: goto label_26f7c4;
        case 0x26f7c8u: goto label_26f7c8;
        case 0x26f7ccu: goto label_26f7cc;
        case 0x26f7d0u: goto label_26f7d0;
        case 0x26f7d4u: goto label_26f7d4;
        case 0x26f7d8u: goto label_26f7d8;
        case 0x26f7dcu: goto label_26f7dc;
        case 0x26f7e0u: goto label_26f7e0;
        case 0x26f7e4u: goto label_26f7e4;
        case 0x26f7e8u: goto label_26f7e8;
        case 0x26f7ecu: goto label_26f7ec;
        case 0x26f7f0u: goto label_26f7f0;
        case 0x26f7f4u: goto label_26f7f4;
        case 0x26f7f8u: goto label_26f7f8;
        case 0x26f7fcu: goto label_26f7fc;
        case 0x26f800u: goto label_26f800;
        case 0x26f804u: goto label_26f804;
        case 0x26f808u: goto label_26f808;
        case 0x26f80cu: goto label_26f80c;
        case 0x26f810u: goto label_26f810;
        case 0x26f814u: goto label_26f814;
        case 0x26f818u: goto label_26f818;
        case 0x26f81cu: goto label_26f81c;
        case 0x26f820u: goto label_26f820;
        case 0x26f824u: goto label_26f824;
        case 0x26f828u: goto label_26f828;
        case 0x26f82cu: goto label_26f82c;
        case 0x26f830u: goto label_26f830;
        case 0x26f834u: goto label_26f834;
        case 0x26f838u: goto label_26f838;
        case 0x26f83cu: goto label_26f83c;
        case 0x26f840u: goto label_26f840;
        case 0x26f844u: goto label_26f844;
        case 0x26f848u: goto label_26f848;
        case 0x26f84cu: goto label_26f84c;
        case 0x26f850u: goto label_26f850;
        case 0x26f854u: goto label_26f854;
        case 0x26f858u: goto label_26f858;
        case 0x26f85cu: goto label_26f85c;
        case 0x26f860u: goto label_26f860;
        case 0x26f864u: goto label_26f864;
        case 0x26f868u: goto label_26f868;
        case 0x26f86cu: goto label_26f86c;
        case 0x26f870u: goto label_26f870;
        case 0x26f874u: goto label_26f874;
        case 0x26f878u: goto label_26f878;
        case 0x26f87cu: goto label_26f87c;
        case 0x26f880u: goto label_26f880;
        case 0x26f884u: goto label_26f884;
        case 0x26f888u: goto label_26f888;
        case 0x26f88cu: goto label_26f88c;
        case 0x26f890u: goto label_26f890;
        case 0x26f894u: goto label_26f894;
        case 0x26f898u: goto label_26f898;
        case 0x26f89cu: goto label_26f89c;
        case 0x26f8a0u: goto label_26f8a0;
        case 0x26f8a4u: goto label_26f8a4;
        case 0x26f8a8u: goto label_26f8a8;
        case 0x26f8acu: goto label_26f8ac;
        case 0x26f8b0u: goto label_26f8b0;
        case 0x26f8b4u: goto label_26f8b4;
        case 0x26f8b8u: goto label_26f8b8;
        case 0x26f8bcu: goto label_26f8bc;
        case 0x26f8c0u: goto label_26f8c0;
        case 0x26f8c4u: goto label_26f8c4;
        case 0x26f8c8u: goto label_26f8c8;
        case 0x26f8ccu: goto label_26f8cc;
        case 0x26f8d0u: goto label_26f8d0;
        case 0x26f8d4u: goto label_26f8d4;
        case 0x26f8d8u: goto label_26f8d8;
        case 0x26f8dcu: goto label_26f8dc;
        case 0x26f8e0u: goto label_26f8e0;
        case 0x26f8e4u: goto label_26f8e4;
        case 0x26f8e8u: goto label_26f8e8;
        case 0x26f8ecu: goto label_26f8ec;
        case 0x26f8f0u: goto label_26f8f0;
        case 0x26f8f4u: goto label_26f8f4;
        case 0x26f8f8u: goto label_26f8f8;
        case 0x26f8fcu: goto label_26f8fc;
        case 0x26f900u: goto label_26f900;
        case 0x26f904u: goto label_26f904;
        case 0x26f908u: goto label_26f908;
        case 0x26f90cu: goto label_26f90c;
        case 0x26f910u: goto label_26f910;
        case 0x26f914u: goto label_26f914;
        case 0x26f918u: goto label_26f918;
        case 0x26f91cu: goto label_26f91c;
        case 0x26f920u: goto label_26f920;
        case 0x26f924u: goto label_26f924;
        case 0x26f928u: goto label_26f928;
        case 0x26f92cu: goto label_26f92c;
        case 0x26f930u: goto label_26f930;
        case 0x26f934u: goto label_26f934;
        case 0x26f938u: goto label_26f938;
        case 0x26f93cu: goto label_26f93c;
        case 0x26f940u: goto label_26f940;
        case 0x26f944u: goto label_26f944;
        case 0x26f948u: goto label_26f948;
        case 0x26f94cu: goto label_26f94c;
        case 0x26f950u: goto label_26f950;
        case 0x26f954u: goto label_26f954;
        case 0x26f958u: goto label_26f958;
        case 0x26f95cu: goto label_26f95c;
        case 0x26f960u: goto label_26f960;
        case 0x26f964u: goto label_26f964;
        case 0x26f968u: goto label_26f968;
        case 0x26f96cu: goto label_26f96c;
        case 0x26f970u: goto label_26f970;
        case 0x26f974u: goto label_26f974;
        case 0x26f978u: goto label_26f978;
        case 0x26f97cu: goto label_26f97c;
        case 0x26f980u: goto label_26f980;
        case 0x26f984u: goto label_26f984;
        case 0x26f988u: goto label_26f988;
        case 0x26f98cu: goto label_26f98c;
        case 0x26f990u: goto label_26f990;
        case 0x26f994u: goto label_26f994;
        case 0x26f998u: goto label_26f998;
        case 0x26f99cu: goto label_26f99c;
        case 0x26f9a0u: goto label_26f9a0;
        case 0x26f9a4u: goto label_26f9a4;
        case 0x26f9a8u: goto label_26f9a8;
        case 0x26f9acu: goto label_26f9ac;
        case 0x26f9b0u: goto label_26f9b0;
        case 0x26f9b4u: goto label_26f9b4;
        case 0x26f9b8u: goto label_26f9b8;
        case 0x26f9bcu: goto label_26f9bc;
        case 0x26f9c0u: goto label_26f9c0;
        case 0x26f9c4u: goto label_26f9c4;
        case 0x26f9c8u: goto label_26f9c8;
        case 0x26f9ccu: goto label_26f9cc;
        case 0x26f9d0u: goto label_26f9d0;
        case 0x26f9d4u: goto label_26f9d4;
        case 0x26f9d8u: goto label_26f9d8;
        case 0x26f9dcu: goto label_26f9dc;
        case 0x26f9e0u: goto label_26f9e0;
        case 0x26f9e4u: goto label_26f9e4;
        case 0x26f9e8u: goto label_26f9e8;
        case 0x26f9ecu: goto label_26f9ec;
        case 0x26f9f0u: goto label_26f9f0;
        case 0x26f9f4u: goto label_26f9f4;
        case 0x26f9f8u: goto label_26f9f8;
        case 0x26f9fcu: goto label_26f9fc;
        case 0x26fa00u: goto label_26fa00;
        case 0x26fa04u: goto label_26fa04;
        case 0x26fa08u: goto label_26fa08;
        case 0x26fa0cu: goto label_26fa0c;
        case 0x26fa10u: goto label_26fa10;
        case 0x26fa14u: goto label_26fa14;
        case 0x26fa18u: goto label_26fa18;
        case 0x26fa1cu: goto label_26fa1c;
        case 0x26fa20u: goto label_26fa20;
        case 0x26fa24u: goto label_26fa24;
        case 0x26fa28u: goto label_26fa28;
        case 0x26fa2cu: goto label_26fa2c;
        case 0x26fa30u: goto label_26fa30;
        case 0x26fa34u: goto label_26fa34;
        case 0x26fa38u: goto label_26fa38;
        case 0x26fa3cu: goto label_26fa3c;
        case 0x26fa40u: goto label_26fa40;
        case 0x26fa44u: goto label_26fa44;
        case 0x26fa48u: goto label_26fa48;
        case 0x26fa4cu: goto label_26fa4c;
        case 0x26fa50u: goto label_26fa50;
        case 0x26fa54u: goto label_26fa54;
        case 0x26fa58u: goto label_26fa58;
        case 0x26fa5cu: goto label_26fa5c;
        case 0x26fa60u: goto label_26fa60;
        case 0x26fa64u: goto label_26fa64;
        case 0x26fa68u: goto label_26fa68;
        case 0x26fa6cu: goto label_26fa6c;
        case 0x26fa70u: goto label_26fa70;
        case 0x26fa74u: goto label_26fa74;
        case 0x26fa78u: goto label_26fa78;
        case 0x26fa7cu: goto label_26fa7c;
        case 0x26fa80u: goto label_26fa80;
        case 0x26fa84u: goto label_26fa84;
        case 0x26fa88u: goto label_26fa88;
        case 0x26fa8cu: goto label_26fa8c;
        case 0x26fa90u: goto label_26fa90;
        case 0x26fa94u: goto label_26fa94;
        case 0x26fa98u: goto label_26fa98;
        case 0x26fa9cu: goto label_26fa9c;
        case 0x26faa0u: goto label_26faa0;
        case 0x26faa4u: goto label_26faa4;
        case 0x26faa8u: goto label_26faa8;
        case 0x26faacu: goto label_26faac;
        case 0x26fab0u: goto label_26fab0;
        case 0x26fab4u: goto label_26fab4;
        case 0x26fab8u: goto label_26fab8;
        case 0x26fabcu: goto label_26fabc;
        case 0x26fac0u: goto label_26fac0;
        case 0x26fac4u: goto label_26fac4;
        case 0x26fac8u: goto label_26fac8;
        case 0x26faccu: goto label_26facc;
        case 0x26fad0u: goto label_26fad0;
        case 0x26fad4u: goto label_26fad4;
        case 0x26fad8u: goto label_26fad8;
        case 0x26fadcu: goto label_26fadc;
        case 0x26fae0u: goto label_26fae0;
        case 0x26fae4u: goto label_26fae4;
        case 0x26fae8u: goto label_26fae8;
        case 0x26faecu: goto label_26faec;
        case 0x26faf0u: goto label_26faf0;
        case 0x26faf4u: goto label_26faf4;
        case 0x26faf8u: goto label_26faf8;
        case 0x26fafcu: goto label_26fafc;
        case 0x26fb00u: goto label_26fb00;
        case 0x26fb04u: goto label_26fb04;
        case 0x26fb08u: goto label_26fb08;
        case 0x26fb0cu: goto label_26fb0c;
        case 0x26fb10u: goto label_26fb10;
        case 0x26fb14u: goto label_26fb14;
        case 0x26fb18u: goto label_26fb18;
        case 0x26fb1cu: goto label_26fb1c;
        case 0x26fb20u: goto label_26fb20;
        case 0x26fb24u: goto label_26fb24;
        case 0x26fb28u: goto label_26fb28;
        case 0x26fb2cu: goto label_26fb2c;
        case 0x26fb30u: goto label_26fb30;
        case 0x26fb34u: goto label_26fb34;
        case 0x26fb38u: goto label_26fb38;
        case 0x26fb3cu: goto label_26fb3c;
        case 0x26fb40u: goto label_26fb40;
        case 0x26fb44u: goto label_26fb44;
        case 0x26fb48u: goto label_26fb48;
        case 0x26fb4cu: goto label_26fb4c;
        case 0x26fb50u: goto label_26fb50;
        case 0x26fb54u: goto label_26fb54;
        case 0x26fb58u: goto label_26fb58;
        case 0x26fb5cu: goto label_26fb5c;
        case 0x26fb60u: goto label_26fb60;
        case 0x26fb64u: goto label_26fb64;
        case 0x26fb68u: goto label_26fb68;
        case 0x26fb6cu: goto label_26fb6c;
        case 0x26fb70u: goto label_26fb70;
        case 0x26fb74u: goto label_26fb74;
        case 0x26fb78u: goto label_26fb78;
        case 0x26fb7cu: goto label_26fb7c;
        case 0x26fb80u: goto label_26fb80;
        case 0x26fb84u: goto label_26fb84;
        case 0x26fb88u: goto label_26fb88;
        case 0x26fb8cu: goto label_26fb8c;
        case 0x26fb90u: goto label_26fb90;
        case 0x26fb94u: goto label_26fb94;
        case 0x26fb98u: goto label_26fb98;
        case 0x26fb9cu: goto label_26fb9c;
        case 0x26fba0u: goto label_26fba0;
        case 0x26fba4u: goto label_26fba4;
        case 0x26fba8u: goto label_26fba8;
        case 0x26fbacu: goto label_26fbac;
        case 0x26fbb0u: goto label_26fbb0;
        case 0x26fbb4u: goto label_26fbb4;
        case 0x26fbb8u: goto label_26fbb8;
        case 0x26fbbcu: goto label_26fbbc;
        case 0x26fbc0u: goto label_26fbc0;
        case 0x26fbc4u: goto label_26fbc4;
        case 0x26fbc8u: goto label_26fbc8;
        case 0x26fbccu: goto label_26fbcc;
        case 0x26fbd0u: goto label_26fbd0;
        case 0x26fbd4u: goto label_26fbd4;
        case 0x26fbd8u: goto label_26fbd8;
        case 0x26fbdcu: goto label_26fbdc;
        case 0x26fbe0u: goto label_26fbe0;
        case 0x26fbe4u: goto label_26fbe4;
        case 0x26fbe8u: goto label_26fbe8;
        case 0x26fbecu: goto label_26fbec;
        case 0x26fbf0u: goto label_26fbf0;
        case 0x26fbf4u: goto label_26fbf4;
        case 0x26fbf8u: goto label_26fbf8;
        case 0x26fbfcu: goto label_26fbfc;
        case 0x26fc00u: goto label_26fc00;
        case 0x26fc04u: goto label_26fc04;
        case 0x26fc08u: goto label_26fc08;
        case 0x26fc0cu: goto label_26fc0c;
        case 0x26fc10u: goto label_26fc10;
        case 0x26fc14u: goto label_26fc14;
        case 0x26fc18u: goto label_26fc18;
        case 0x26fc1cu: goto label_26fc1c;
        case 0x26fc20u: goto label_26fc20;
        case 0x26fc24u: goto label_26fc24;
        case 0x26fc28u: goto label_26fc28;
        case 0x26fc2cu: goto label_26fc2c;
        case 0x26fc30u: goto label_26fc30;
        case 0x26fc34u: goto label_26fc34;
        case 0x26fc38u: goto label_26fc38;
        case 0x26fc3cu: goto label_26fc3c;
        case 0x26fc40u: goto label_26fc40;
        case 0x26fc44u: goto label_26fc44;
        case 0x26fc48u: goto label_26fc48;
        case 0x26fc4cu: goto label_26fc4c;
        case 0x26fc50u: goto label_26fc50;
        case 0x26fc54u: goto label_26fc54;
        case 0x26fc58u: goto label_26fc58;
        case 0x26fc5cu: goto label_26fc5c;
        case 0x26fc60u: goto label_26fc60;
        case 0x26fc64u: goto label_26fc64;
        case 0x26fc68u: goto label_26fc68;
        case 0x26fc6cu: goto label_26fc6c;
        case 0x26fc70u: goto label_26fc70;
        case 0x26fc74u: goto label_26fc74;
        case 0x26fc78u: goto label_26fc78;
        case 0x26fc7cu: goto label_26fc7c;
        case 0x26fc80u: goto label_26fc80;
        case 0x26fc84u: goto label_26fc84;
        case 0x26fc88u: goto label_26fc88;
        case 0x26fc8cu: goto label_26fc8c;
        case 0x26fc90u: goto label_26fc90;
        case 0x26fc94u: goto label_26fc94;
        case 0x26fc98u: goto label_26fc98;
        case 0x26fc9cu: goto label_26fc9c;
        case 0x26fca0u: goto label_26fca0;
        case 0x26fca4u: goto label_26fca4;
        case 0x26fca8u: goto label_26fca8;
        case 0x26fcacu: goto label_26fcac;
        case 0x26fcb0u: goto label_26fcb0;
        case 0x26fcb4u: goto label_26fcb4;
        case 0x26fcb8u: goto label_26fcb8;
        case 0x26fcbcu: goto label_26fcbc;
        case 0x26fcc0u: goto label_26fcc0;
        case 0x26fcc4u: goto label_26fcc4;
        case 0x26fcc8u: goto label_26fcc8;
        case 0x26fcccu: goto label_26fccc;
        case 0x26fcd0u: goto label_26fcd0;
        case 0x26fcd4u: goto label_26fcd4;
        case 0x26fcd8u: goto label_26fcd8;
        case 0x26fcdcu: goto label_26fcdc;
        case 0x26fce0u: goto label_26fce0;
        case 0x26fce4u: goto label_26fce4;
        case 0x26fce8u: goto label_26fce8;
        case 0x26fcecu: goto label_26fcec;
        case 0x26fcf0u: goto label_26fcf0;
        case 0x26fcf4u: goto label_26fcf4;
        case 0x26fcf8u: goto label_26fcf8;
        case 0x26fcfcu: goto label_26fcfc;
        case 0x26fd00u: goto label_26fd00;
        case 0x26fd04u: goto label_26fd04;
        case 0x26fd08u: goto label_26fd08;
        case 0x26fd0cu: goto label_26fd0c;
        case 0x26fd10u: goto label_26fd10;
        case 0x26fd14u: goto label_26fd14;
        case 0x26fd18u: goto label_26fd18;
        case 0x26fd1cu: goto label_26fd1c;
        case 0x26fd20u: goto label_26fd20;
        case 0x26fd24u: goto label_26fd24;
        case 0x26fd28u: goto label_26fd28;
        case 0x26fd2cu: goto label_26fd2c;
        case 0x26fd30u: goto label_26fd30;
        case 0x26fd34u: goto label_26fd34;
        case 0x26fd38u: goto label_26fd38;
        case 0x26fd3cu: goto label_26fd3c;
        case 0x26fd40u: goto label_26fd40;
        case 0x26fd44u: goto label_26fd44;
        case 0x26fd48u: goto label_26fd48;
        case 0x26fd4cu: goto label_26fd4c;
        case 0x26fd50u: goto label_26fd50;
        case 0x26fd54u: goto label_26fd54;
        case 0x26fd58u: goto label_26fd58;
        case 0x26fd5cu: goto label_26fd5c;
        case 0x26fd60u: goto label_26fd60;
        case 0x26fd64u: goto label_26fd64;
        case 0x26fd68u: goto label_26fd68;
        case 0x26fd6cu: goto label_26fd6c;
        case 0x26fd70u: goto label_26fd70;
        case 0x26fd74u: goto label_26fd74;
        case 0x26fd78u: goto label_26fd78;
        case 0x26fd7cu: goto label_26fd7c;
        case 0x26fd80u: goto label_26fd80;
        case 0x26fd84u: goto label_26fd84;
        case 0x26fd88u: goto label_26fd88;
        case 0x26fd8cu: goto label_26fd8c;
        case 0x26fd90u: goto label_26fd90;
        case 0x26fd94u: goto label_26fd94;
        case 0x26fd98u: goto label_26fd98;
        case 0x26fd9cu: goto label_26fd9c;
        case 0x26fda0u: goto label_26fda0;
        case 0x26fda4u: goto label_26fda4;
        case 0x26fda8u: goto label_26fda8;
        case 0x26fdacu: goto label_26fdac;
        case 0x26fdb0u: goto label_26fdb0;
        case 0x26fdb4u: goto label_26fdb4;
        case 0x26fdb8u: goto label_26fdb8;
        case 0x26fdbcu: goto label_26fdbc;
        case 0x26fdc0u: goto label_26fdc0;
        case 0x26fdc4u: goto label_26fdc4;
        case 0x26fdc8u: goto label_26fdc8;
        case 0x26fdccu: goto label_26fdcc;
        case 0x26fdd0u: goto label_26fdd0;
        case 0x26fdd4u: goto label_26fdd4;
        case 0x26fdd8u: goto label_26fdd8;
        case 0x26fddcu: goto label_26fddc;
        case 0x26fde0u: goto label_26fde0;
        case 0x26fde4u: goto label_26fde4;
        case 0x26fde8u: goto label_26fde8;
        case 0x26fdecu: goto label_26fdec;
        case 0x26fdf0u: goto label_26fdf0;
        case 0x26fdf4u: goto label_26fdf4;
        case 0x26fdf8u: goto label_26fdf8;
        case 0x26fdfcu: goto label_26fdfc;
        case 0x26fe00u: goto label_26fe00;
        case 0x26fe04u: goto label_26fe04;
        case 0x26fe08u: goto label_26fe08;
        case 0x26fe0cu: goto label_26fe0c;
        case 0x26fe10u: goto label_26fe10;
        case 0x26fe14u: goto label_26fe14;
        case 0x26fe18u: goto label_26fe18;
        case 0x26fe1cu: goto label_26fe1c;
        case 0x26fe20u: goto label_26fe20;
        case 0x26fe24u: goto label_26fe24;
        case 0x26fe28u: goto label_26fe28;
        case 0x26fe2cu: goto label_26fe2c;
        case 0x26fe30u: goto label_26fe30;
        case 0x26fe34u: goto label_26fe34;
        case 0x26fe38u: goto label_26fe38;
        case 0x26fe3cu: goto label_26fe3c;
        case 0x26fe40u: goto label_26fe40;
        case 0x26fe44u: goto label_26fe44;
        case 0x26fe48u: goto label_26fe48;
        case 0x26fe4cu: goto label_26fe4c;
        case 0x26fe50u: goto label_26fe50;
        case 0x26fe54u: goto label_26fe54;
        case 0x26fe58u: goto label_26fe58;
        case 0x26fe5cu: goto label_26fe5c;
        case 0x26fe60u: goto label_26fe60;
        case 0x26fe64u: goto label_26fe64;
        case 0x26fe68u: goto label_26fe68;
        case 0x26fe6cu: goto label_26fe6c;
        case 0x26fe70u: goto label_26fe70;
        case 0x26fe74u: goto label_26fe74;
        case 0x26fe78u: goto label_26fe78;
        case 0x26fe7cu: goto label_26fe7c;
        case 0x26fe80u: goto label_26fe80;
        case 0x26fe84u: goto label_26fe84;
        case 0x26fe88u: goto label_26fe88;
        case 0x26fe8cu: goto label_26fe8c;
        case 0x26fe90u: goto label_26fe90;
        case 0x26fe94u: goto label_26fe94;
        case 0x26fe98u: goto label_26fe98;
        case 0x26fe9cu: goto label_26fe9c;
        case 0x26fea0u: goto label_26fea0;
        case 0x26fea4u: goto label_26fea4;
        case 0x26fea8u: goto label_26fea8;
        case 0x26feacu: goto label_26feac;
        case 0x26feb0u: goto label_26feb0;
        case 0x26feb4u: goto label_26feb4;
        case 0x26feb8u: goto label_26feb8;
        case 0x26febcu: goto label_26febc;
        case 0x26fec0u: goto label_26fec0;
        case 0x26fec4u: goto label_26fec4;
        case 0x26fec8u: goto label_26fec8;
        case 0x26feccu: goto label_26fecc;
        case 0x26fed0u: goto label_26fed0;
        case 0x26fed4u: goto label_26fed4;
        case 0x26fed8u: goto label_26fed8;
        case 0x26fedcu: goto label_26fedc;
        case 0x26fee0u: goto label_26fee0;
        case 0x26fee4u: goto label_26fee4;
        case 0x26fee8u: goto label_26fee8;
        case 0x26feecu: goto label_26feec;
        case 0x26fef0u: goto label_26fef0;
        case 0x26fef4u: goto label_26fef4;
        case 0x26fef8u: goto label_26fef8;
        case 0x26fefcu: goto label_26fefc;
        case 0x26ff00u: goto label_26ff00;
        case 0x26ff04u: goto label_26ff04;
        case 0x26ff08u: goto label_26ff08;
        case 0x26ff0cu: goto label_26ff0c;
        case 0x26ff10u: goto label_26ff10;
        case 0x26ff14u: goto label_26ff14;
        case 0x26ff18u: goto label_26ff18;
        case 0x26ff1cu: goto label_26ff1c;
        case 0x26ff20u: goto label_26ff20;
        case 0x26ff24u: goto label_26ff24;
        case 0x26ff28u: goto label_26ff28;
        case 0x26ff2cu: goto label_26ff2c;
        case 0x26ff30u: goto label_26ff30;
        case 0x26ff34u: goto label_26ff34;
        case 0x26ff38u: goto label_26ff38;
        case 0x26ff3cu: goto label_26ff3c;
        case 0x26ff40u: goto label_26ff40;
        case 0x26ff44u: goto label_26ff44;
        case 0x26ff48u: goto label_26ff48;
        case 0x26ff4cu: goto label_26ff4c;
        case 0x26ff50u: goto label_26ff50;
        case 0x26ff54u: goto label_26ff54;
        case 0x26ff58u: goto label_26ff58;
        case 0x26ff5cu: goto label_26ff5c;
        case 0x26ff60u: goto label_26ff60;
        case 0x26ff64u: goto label_26ff64;
        case 0x26ff68u: goto label_26ff68;
        case 0x26ff6cu: goto label_26ff6c;
        case 0x26ff70u: goto label_26ff70;
        case 0x26ff74u: goto label_26ff74;
        case 0x26ff78u: goto label_26ff78;
        case 0x26ff7cu: goto label_26ff7c;
        default: return;
    }

label_26f7b0:
    // 0x26f7b0: 0x51ac  .word       0x000051AC                   # dadd        $t2, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f7b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 10, r); }
label_26f7b4:
    // 0x26f7b4: 0x1bb0  tge         $zero, $zero, 110
    ctx->pc = 0x26f7b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f7b8:
    // 0x26f7b8: 0x0  nop
    ctx->pc = 0x26f7b8u;
    // NOP
label_26f7bc:
    // 0x26f7bc: 0x0  nop
    ctx->pc = 0x26f7bcu;
    // NOP
label_26f7c0:
    // 0x26f7c0: 0x51b0  tge         $zero, $zero, 326
    ctx->pc = 0x26f7c0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f7c4:
    // 0x26f7c4: 0xfa0  .word       0x00000FA0                   # add         $at, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f7c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_26f7c8:
    // 0x26f7c8: 0x0  nop
    ctx->pc = 0x26f7c8u;
    // NOP
label_26f7cc:
    // 0x26f7cc: 0x0  nop
    ctx->pc = 0x26f7ccu;
    // NOP
label_26f7d0:
    // 0x26f7d0: 0x51b2  tlt         $zero, $zero, 326
    ctx->pc = 0x26f7d0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f7d4:
    // 0x26f7d4: 0x2a20  .word       0x00002A20                   # add         $a1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f7d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_26f7d8:
    // 0x26f7d8: 0x0  nop
    ctx->pc = 0x26f7d8u;
    // NOP
label_26f7dc:
    // 0x26f7dc: 0x0  nop
    ctx->pc = 0x26f7dcu;
    // NOP
label_26f7e0:
    // 0x26f7e0: 0x51b8  dsll        $t2, $zero, 6
    ctx->pc = 0x26f7e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) << 6);
label_26f7e4:
    // 0x26f7e4: 0x1200  sll         $v0, $zero, 8
    ctx->pc = 0x26f7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_26f7e8:
    // 0x26f7e8: 0x0  nop
    ctx->pc = 0x26f7e8u;
    // NOP
label_26f7ec:
    // 0x26f7ec: 0x0  nop
    ctx->pc = 0x26f7ecu;
    // NOP
label_26f7f0:
    // 0x26f7f0: 0x51bb  dsra        $t2, $zero, 6
    ctx->pc = 0x26f7f0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 0) >> 6);
label_26f7f4:
    // 0x26f7f4: 0x1710  .word       0x00001710                   # mfhi        $v0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f7f4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_26f7f8:
    // 0x26f7f8: 0x0  nop
    ctx->pc = 0x26f7f8u;
    // NOP
label_26f7fc:
    // 0x26f7fc: 0x0  nop
    ctx->pc = 0x26f7fcu;
    // NOP
label_26f800:
    // 0x26f800: 0x51be  dsrl32      $t2, $zero, 6
    ctx->pc = 0x26f800u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) >> (32 + 6));
label_26f804:
    // 0x26f804: 0x13b0  tge         $zero, $zero, 78
    ctx->pc = 0x26f804u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f808:
    // 0x26f808: 0x0  nop
    ctx->pc = 0x26f808u;
    // NOP
label_26f80c:
    // 0x26f80c: 0x0  nop
    ctx->pc = 0x26f80cu;
    // NOP
label_26f810:
    // 0x26f810: 0x51c1  .word       0x000051C1                   # INVALID     $zero, $zero, 0x51C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f810u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26F810 raw=0x000051C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f814:
    // 0x26f814: 0x1c30  tge         $zero, $zero, 112
    ctx->pc = 0x26f814u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f818:
    // 0x26f818: 0x0  nop
    ctx->pc = 0x26f818u;
    // NOP
label_26f81c:
    // 0x26f81c: 0x0  nop
    ctx->pc = 0x26f81cu;
    // NOP
label_26f820:
    // 0x26f820: 0x51c5  .word       0x000051C5                   # INVALID     $zero, $zero, 0x51C5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f820u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26F820 raw=0x000051C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f824:
    // 0x26f824: 0x1220  .word       0x00001220                   # add         $v0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f824u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_26f828:
    // 0x26f828: 0x0  nop
    ctx->pc = 0x26f828u;
    // NOP
label_26f82c:
    // 0x26f82c: 0x0  nop
    ctx->pc = 0x26f82cu;
    // NOP
label_26f830:
    // 0x26f830: 0x51c8  .word       0x000051C8                   # jr          $zero # 000051C0 <InstrIdType: CPU_SPECIAL>
label_26f834:
    if (ctx->pc == 0x26F834u) {
        ctx->pc = 0x26F834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F830u;
        // 0x26f834: 0x3270  tge         $zero, $zero, 201 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F838u;
        goto label_26f838;
    }
    ctx->pc = 0x26F830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26F834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F830u;
        // 0x26f834: 0x3270  tge         $zero, $zero, 201 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F830u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26F838u;
label_26f838:
    // 0x26f838: 0x0  nop
    ctx->pc = 0x26f838u;
    // NOP
label_26f83c:
    // 0x26f83c: 0x0  nop
    ctx->pc = 0x26f83cu;
    // NOP
label_26f840:
    // 0x26f840: 0x51cf  .word       0x000051CF                   # sync # 00005000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f840u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26f844:
    // 0x26f844: 0xd30  tge         $zero, $zero, 52
    ctx->pc = 0x26f844u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f848:
    // 0x26f848: 0x0  nop
    ctx->pc = 0x26f848u;
    // NOP
label_26f84c:
    // 0x26f84c: 0x0  nop
    ctx->pc = 0x26f84cu;
    // NOP
label_26f850:
    // 0x26f850: 0x51d1  .word       0x000051D1                   # mthi        $zero # 000051C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f850u;
    ctx->hi = GPR_U64(ctx, 0);
label_26f854:
    // 0x26f854: 0x10c0  sll         $v0, $zero, 3
    ctx->pc = 0x26f854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26f858:
    // 0x26f858: 0x0  nop
    ctx->pc = 0x26f858u;
    // NOP
label_26f85c:
    // 0x26f85c: 0x0  nop
    ctx->pc = 0x26f85cu;
    // NOP
label_26f860:
    // 0x26f860: 0x51d4  .word       0x000051D4                   # dsllv       $t2, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f860u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26f864:
    // 0x26f864: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x26f864u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26f868:
    // 0x26f868: 0x0  nop
    ctx->pc = 0x26f868u;
    // NOP
label_26f86c:
    // 0x26f86c: 0x0  nop
    ctx->pc = 0x26f86cu;
    // NOP
label_26f870:
    // 0x26f870: 0x51e5  .word       0x000051E5                   # move        $t2, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f870u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_26f874:
    // 0x26f874: 0x3e40  sll         $a3, $zero, 25
    ctx->pc = 0x26f874u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_26f878:
    // 0x26f878: 0x0  nop
    ctx->pc = 0x26f878u;
    // NOP
label_26f87c:
    // 0x26f87c: 0x0  nop
    ctx->pc = 0x26f87cu;
    // NOP
label_26f880:
    // 0x26f880: 0x51ed  .word       0x000051ED                   # daddu       $t2, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f880u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f884:
    // 0x26f884: 0x7b50  .word       0x00007B50                   # mfhi        $t7 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f884u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_26f888:
    // 0x26f888: 0x0  nop
    ctx->pc = 0x26f888u;
    // NOP
label_26f88c:
    // 0x26f88c: 0x0  nop
    ctx->pc = 0x26f88cu;
    // NOP
label_26f890:
    // 0x26f890: 0x51fd  .word       0x000051FD                   # INVALID     $zero, $zero, 0x51FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f890u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26F890 raw=0x000051FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f894:
    // 0x26f894: 0x1f00  sll         $v1, $zero, 28
    ctx->pc = 0x26f894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_26f898:
    // 0x26f898: 0x0  nop
    ctx->pc = 0x26f898u;
    // NOP
label_26f89c:
    // 0x26f89c: 0x0  nop
    ctx->pc = 0x26f89cu;
    // NOP
label_26f8a0:
    // 0x26f8a0: 0x5201  .word       0x00005201                   # INVALID     $zero, $zero, 0x5201 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f8a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26F8A0 raw=0x00005201"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f8a4:
    // 0x26f8a4: 0x1da0  .word       0x00001DA0                   # add         $v1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f8a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_26f8a8:
    // 0x26f8a8: 0x0  nop
    ctx->pc = 0x26f8a8u;
    // NOP
label_26f8ac:
    // 0x26f8ac: 0x0  nop
    ctx->pc = 0x26f8acu;
    // NOP
label_26f8b0:
    // 0x26f8b0: 0x5205  .word       0x00005205                   # INVALID     $zero, $zero, 0x5205 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f8b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26F8B0 raw=0x00005205"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f8b4:
    // 0x26f8b4: 0x1950  .word       0x00001950                   # mfhi        $v1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f8b4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_26f8b8:
    // 0x26f8b8: 0x0  nop
    ctx->pc = 0x26f8b8u;
    // NOP
label_26f8bc:
    // 0x26f8bc: 0x0  nop
    ctx->pc = 0x26f8bcu;
    // NOP
label_26f8c0:
    // 0x26f8c0: 0x5209  .word       0x00005209                   # jalr        $t2, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
label_26f8c4:
    if (ctx->pc == 0x26F8C4u) {
        ctx->pc = 0x26F8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8C0u;
        // 0x26f8c4: 0x2500  sll         $a0, $zero, 20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F8C8u;
        goto label_26f8c8;
    }
    ctx->pc = 0x26F8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 10, 0x26F8C8u);
        ctx->pc = 0x26F8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8C0u;
        // 0x26f8c4: 0x2500  sll         $a0, $zero, 20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F8C0u, 0x26F8C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26F8C8u;
label_26f8c8:
    // 0x26f8c8: 0x0  nop
    ctx->pc = 0x26f8c8u;
    // NOP
label_26f8cc:
    // 0x26f8cc: 0x0  nop
    ctx->pc = 0x26f8ccu;
    // NOP
label_26f8d0:
    // 0x26f8d0: 0x520e  .word       0x0000520E                   # INVALID     $zero, $zero, 0x520E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f8d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26F8D0 raw=0x0000520E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f8d4:
    // 0x26f8d4: 0xec0  sll         $at, $zero, 27
    ctx->pc = 0x26f8d4u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_26f8d8:
    // 0x26f8d8: 0x0  nop
    ctx->pc = 0x26f8d8u;
    // NOP
label_26f8dc:
    // 0x26f8dc: 0x0  nop
    ctx->pc = 0x26f8dcu;
    // NOP
label_26f8e0:
    // 0x26f8e0: 0x5210  .word       0x00005210                   # mfhi        $t2 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f8e0u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26f8e4:
    // 0x26f8e4: 0x1030  tge         $zero, $zero, 64
    ctx->pc = 0x26f8e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f8e8:
    // 0x26f8e8: 0x0  nop
    ctx->pc = 0x26f8e8u;
    // NOP
label_26f8ec:
    // 0x26f8ec: 0x0  nop
    ctx->pc = 0x26f8ecu;
    // NOP
label_26f8f0:
    // 0x26f8f0: 0x5213  .word       0x00005213                   # mtlo        $zero # 00005200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f8f0u;
    ctx->lo = GPR_U64(ctx, 0);
label_26f8f4:
    // 0x26f8f4: 0xbfe0  .word       0x0000BFE0                   # add         $s7, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f8f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_26f8f8:
    // 0x26f8f8: 0x0  nop
    ctx->pc = 0x26f8f8u;
    // NOP
label_26f8fc:
    // 0x26f8fc: 0x0  nop
    ctx->pc = 0x26f8fcu;
    // NOP
label_26f900:
    // 0x26f900: 0x522b  .word       0x0000522B                   # sltu        $t2, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f900u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_26f904:
    // 0x26f904: 0xd380  sll         $k0, $zero, 14
    ctx->pc = 0x26f904u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_26f908:
    // 0x26f908: 0x0  nop
    ctx->pc = 0x26f908u;
    // NOP
label_26f90c:
    // 0x26f90c: 0x0  nop
    ctx->pc = 0x26f90cu;
    // NOP
label_26f910:
    // 0x26f910: 0x5246  .word       0x00005246                   # srlv        $t2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f910u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26f914:
    // 0x26f914: 0x12280  sll         $a0, $at, 10
    ctx->pc = 0x26f914u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 10));
label_26f918:
    // 0x26f918: 0x0  nop
    ctx->pc = 0x26f918u;
    // NOP
label_26f91c:
    // 0x26f91c: 0x0  nop
    ctx->pc = 0x26f91cu;
    // NOP
label_26f920:
    // 0x26f920: 0x526b  .word       0x0000526B                   # sltu        $t2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f920u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_26f924:
    // 0x26f924: 0x116e0  .word       0x000116E0                   # add         $v0, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f924u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_26f928:
    // 0x26f928: 0x0  nop
    ctx->pc = 0x26f928u;
    // NOP
label_26f92c:
    // 0x26f92c: 0x0  nop
    ctx->pc = 0x26f92cu;
    // NOP
label_26f930:
    // 0x26f930: 0x528e  .word       0x0000528E                   # INVALID     $zero, $zero, 0x528E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f930u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26F930 raw=0x0000528E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f934:
    // 0x26f934: 0xe4d0  .word       0x0000E4D0                   # mfhi        $gp # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f934u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_26f938:
    // 0x26f938: 0x0  nop
    ctx->pc = 0x26f938u;
    // NOP
label_26f93c:
    // 0x26f93c: 0x0  nop
    ctx->pc = 0x26f93cu;
    // NOP
label_26f940:
    // 0x26f940: 0x52ab  .word       0x000052AB                   # sltu        $t2, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f940u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_26f944:
    // 0x26f944: 0xf950  .word       0x0000F950                   # mfhi        $ra # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f944u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_26f948:
    // 0x26f948: 0x0  nop
    ctx->pc = 0x26f948u;
    // NOP
label_26f94c:
    // 0x26f94c: 0x0  nop
    ctx->pc = 0x26f94cu;
    // NOP
label_26f950:
    // 0x26f950: 0x52cb  .word       0x000052CB                   # movn        $t2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f950u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
label_26f954:
    // 0x26f954: 0x10d00  sll         $at, $at, 20
    ctx->pc = 0x26f954u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 20));
label_26f958:
    // 0x26f958: 0x0  nop
    ctx->pc = 0x26f958u;
    // NOP
label_26f95c:
    // 0x26f95c: 0x0  nop
    ctx->pc = 0x26f95cu;
    // NOP
label_26f960:
    // 0x26f960: 0x52ed  .word       0x000052ED                   # daddu       $t2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f960u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f964:
    // 0x26f964: 0xc4c0  sll         $t8, $zero, 19
    ctx->pc = 0x26f964u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26f968:
    // 0x26f968: 0x0  nop
    ctx->pc = 0x26f968u;
    // NOP
label_26f96c:
    // 0x26f96c: 0x0  nop
    ctx->pc = 0x26f96cu;
    // NOP
label_26f970:
    // 0x26f970: 0x5306  .word       0x00005306                   # srlv        $t2, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f970u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26f974:
    // 0x26f974: 0xfbc0  sll         $ra, $zero, 15
    ctx->pc = 0x26f974u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_26f978:
    // 0x26f978: 0x0  nop
    ctx->pc = 0x26f978u;
    // NOP
label_26f97c:
    // 0x26f97c: 0x0  nop
    ctx->pc = 0x26f97cu;
    // NOP
label_26f980:
    // 0x26f980: 0x5326  .word       0x00005326                   # xor         $t2, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f980u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_26f984:
    // 0x26f984: 0xf750  .word       0x0000F750                   # mfhi        $fp # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f984u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_26f988:
    // 0x26f988: 0x0  nop
    ctx->pc = 0x26f988u;
    // NOP
label_26f98c:
    // 0x26f98c: 0x0  nop
    ctx->pc = 0x26f98cu;
    // NOP
label_26f990:
    // 0x26f990: 0x5345  .word       0x00005345                   # INVALID     $zero, $zero, 0x5345 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f990u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26F990 raw=0x00005345"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f994:
    // 0x26f994: 0xe1e0  .word       0x0000E1E0                   # add         $gp, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f994u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_26f998:
    // 0x26f998: 0x0  nop
    ctx->pc = 0x26f998u;
    // NOP
label_26f99c:
    // 0x26f99c: 0x0  nop
    ctx->pc = 0x26f99cu;
    // NOP
label_26f9a0:
    // 0x26f9a0: 0x5362  .word       0x00005362                   # neg         $t2, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f9a0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
label_26f9a4:
    // 0x26f9a4: 0x17190  .word       0x00017190                   # mfhi        $t6 # 00010180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f9a4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_26f9a8:
    // 0x26f9a8: 0x0  nop
    ctx->pc = 0x26f9a8u;
    // NOP
label_26f9ac:
    // 0x26f9ac: 0x0  nop
    ctx->pc = 0x26f9acu;
    // NOP
label_26f9b0:
    // 0x26f9b0: 0x5391  .word       0x00005391                   # mthi        $zero # 00005380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f9b0u;
    ctx->hi = GPR_U64(ctx, 0);
label_26f9b4:
    // 0x26f9b4: 0x10dd0  .word       0x00010DD0                   # mfhi        $at # 000105C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f9b4u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_26f9b8:
    // 0x26f9b8: 0x0  nop
    ctx->pc = 0x26f9b8u;
    // NOP
label_26f9bc:
    // 0x26f9bc: 0x0  nop
    ctx->pc = 0x26f9bcu;
    // NOP
label_26f9c0:
    // 0x26f9c0: 0x53b3  tltu        $zero, $zero, 334
    ctx->pc = 0x26f9c0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f9c4:
    // 0x26f9c4: 0x7b20  .word       0x00007B20                   # add         $t7, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f9c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_26f9c8:
    // 0x26f9c8: 0x0  nop
    ctx->pc = 0x26f9c8u;
    // NOP
label_26f9cc:
    // 0x26f9cc: 0x0  nop
    ctx->pc = 0x26f9ccu;
    // NOP
label_26f9d0:
    // 0x26f9d0: 0x53c3  sra         $t2, $zero, 15
    ctx->pc = 0x26f9d0u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 0), 15));
label_26f9d4:
    // 0x26f9d4: 0xe640  sll         $gp, $zero, 25
    ctx->pc = 0x26f9d4u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_26f9d8:
    // 0x26f9d8: 0x0  nop
    ctx->pc = 0x26f9d8u;
    // NOP
label_26f9dc:
    // 0x26f9dc: 0x0  nop
    ctx->pc = 0x26f9dcu;
    // NOP
label_26f9e0:
    // 0x26f9e0: 0x53e0  .word       0x000053E0                   # add         $t2, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f9e0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26f9e4:
    // 0x26f9e4: 0x10310  .word       0x00010310                   # mfhi        $zero # 00010300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f9e4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_26f9e8:
    // 0x26f9e8: 0x0  nop
    ctx->pc = 0x26f9e8u;
    // NOP
label_26f9ec:
    // 0x26f9ec: 0x0  nop
    ctx->pc = 0x26f9ecu;
    // NOP
label_26f9f0:
    // 0x26f9f0: 0x5401  .word       0x00005401                   # INVALID     $zero, $zero, 0x5401 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f9f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26F9F0 raw=0x00005401"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f9f4:
    // 0x26f9f4: 0xad70  tge         $zero, $zero, 693
    ctx->pc = 0x26f9f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f9f8:
    // 0x26f9f8: 0x0  nop
    ctx->pc = 0x26f9f8u;
    // NOP
label_26f9fc:
    // 0x26f9fc: 0x0  nop
    ctx->pc = 0x26f9fcu;
    // NOP
label_26fa00:
    // 0x26fa00: 0x5417  .word       0x00005417                   # dsrav       $t2, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fa00u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26fa04:
    // 0x26fa04: 0xf500  sll         $fp, $zero, 20
    ctx->pc = 0x26fa04u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_26fa08:
    // 0x26fa08: 0x0  nop
    ctx->pc = 0x26fa08u;
    // NOP
label_26fa0c:
    // 0x26fa0c: 0x0  nop
    ctx->pc = 0x26fa0cu;
    // NOP
label_26fa10:
    // 0x26fa10: 0x5436  tne         $zero, $zero, 336
    ctx->pc = 0x26fa10u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fa14:
    // 0x26fa14: 0x111e0  .word       0x000111E0                   # add         $v0, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fa14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_26fa18:
    // 0x26fa18: 0x0  nop
    ctx->pc = 0x26fa18u;
    // NOP
label_26fa1c:
    // 0x26fa1c: 0x0  nop
    ctx->pc = 0x26fa1cu;
    // NOP
label_26fa20:
    // 0x26fa20: 0x5459  .word       0x00005459                   # multu       $zero, $zero # 00005440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fa20u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_26fa24:
    // 0x26fa24: 0xa790  .word       0x0000A790                   # mfhi        $s4 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fa24u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_26fa28:
    // 0x26fa28: 0x0  nop
    ctx->pc = 0x26fa28u;
    // NOP
label_26fa2c:
    // 0x26fa2c: 0x0  nop
    ctx->pc = 0x26fa2cu;
    // NOP
label_26fa30:
    // 0x26fa30: 0x546e  .word       0x0000546E                   # dsub        $t2, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fa30u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 10, r); }
label_26fa34:
    // 0x26fa34: 0x124c0  sll         $a0, $at, 19
    ctx->pc = 0x26fa34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 19));
label_26fa38:
    // 0x26fa38: 0x0  nop
    ctx->pc = 0x26fa38u;
    // NOP
label_26fa3c:
    // 0x26fa3c: 0x0  nop
    ctx->pc = 0x26fa3cu;
    // NOP
label_26fa40:
    // 0x26fa40: 0x5493  .word       0x00005493                   # mtlo        $zero # 00005480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fa40u;
    ctx->lo = GPR_U64(ctx, 0);
label_26fa44:
    // 0x26fa44: 0xe720  .word       0x0000E720                   # add         $gp, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fa44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_26fa48:
    // 0x26fa48: 0x0  nop
    ctx->pc = 0x26fa48u;
    // NOP
label_26fa4c:
    // 0x26fa4c: 0x0  nop
    ctx->pc = 0x26fa4cu;
    // NOP
label_26fa50:
    // 0x26fa50: 0x54b0  tge         $zero, $zero, 338
    ctx->pc = 0x26fa50u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fa54:
    // 0x26fa54: 0xd030  tge         $zero, $zero, 832
    ctx->pc = 0x26fa54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fa58:
    // 0x26fa58: 0x0  nop
    ctx->pc = 0x26fa58u;
    // NOP
label_26fa5c:
    // 0x26fa5c: 0x0  nop
    ctx->pc = 0x26fa5cu;
    // NOP
label_26fa60:
    // 0x26fa60: 0x54cb  .word       0x000054CB                   # movn        $t2, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fa60u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
label_26fa64:
    // 0x26fa64: 0xfb60  .word       0x0000FB60                   # add         $ra, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fa64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_26fa68:
    // 0x26fa68: 0x0  nop
    ctx->pc = 0x26fa68u;
    // NOP
label_26fa6c:
    // 0x26fa6c: 0x0  nop
    ctx->pc = 0x26fa6cu;
    // NOP
label_26fa70:
    // 0x26fa70: 0x54eb  .word       0x000054EB                   # sltu        $t2, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fa70u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_26fa74:
    // 0x26fa74: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x26fa74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26fa78:
    // 0x26fa78: 0x0  nop
    ctx->pc = 0x26fa78u;
    // NOP
label_26fa7c:
    // 0x26fa7c: 0x0  nop
    ctx->pc = 0x26fa7cu;
    // NOP
label_26fa80:
    // 0x26fa80: 0x54fc  dsll32      $t2, $zero, 19
    ctx->pc = 0x26fa80u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) << (32 + 19));
label_26fa84:
    // 0x26fa84: 0xbd60  .word       0x0000BD60                   # add         $s7, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fa84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_26fa88:
    // 0x26fa88: 0x0  nop
    ctx->pc = 0x26fa88u;
    // NOP
label_26fa8c:
    // 0x26fa8c: 0x0  nop
    ctx->pc = 0x26fa8cu;
    // NOP
label_26fa90:
    // 0x26fa90: 0x5514  .word       0x00005514                   # dsllv       $t2, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fa90u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26fa94:
    // 0x26fa94: 0x12270  tge         $zero, $at, 137
    ctx->pc = 0x26fa94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_26fa98:
    // 0x26fa98: 0x0  nop
    ctx->pc = 0x26fa98u;
    // NOP
label_26fa9c:
    // 0x26fa9c: 0x0  nop
    ctx->pc = 0x26fa9cu;
    // NOP
label_26faa0:
    // 0x26faa0: 0x5539  .word       0x00005539                   # INVALID     $zero, $zero, 0x5539 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26faa0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x26FAA0 raw=0x00005539"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26faa4:
    // 0x26faa4: 0x14280  sll         $t0, $at, 10
    ctx->pc = 0x26faa4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 1), 10));
label_26faa8:
    // 0x26faa8: 0x0  nop
    ctx->pc = 0x26faa8u;
    // NOP
label_26faac:
    // 0x26faac: 0x0  nop
    ctx->pc = 0x26faacu;
    // NOP
label_26fab0:
    // 0x26fab0: 0x5562  .word       0x00005562                   # neg         $t2, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fab0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
label_26fab4:
    // 0x26fab4: 0x19710  .word       0x00019710                   # mfhi        $s2 # 00010700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fab4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_26fab8:
    // 0x26fab8: 0x0  nop
    ctx->pc = 0x26fab8u;
    // NOP
label_26fabc:
    // 0x26fabc: 0x0  nop
    ctx->pc = 0x26fabcu;
    // NOP
label_26fac0:
    // 0x26fac0: 0x5595  .word       0x00005595                   # INVALID     $zero, $zero, 0x5595 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fac0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26FAC0 raw=0x00005595"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26fac4:
    // 0x26fac4: 0xc390  .word       0x0000C390                   # mfhi        $t8 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fac4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_26fac8:
    // 0x26fac8: 0x0  nop
    ctx->pc = 0x26fac8u;
    // NOP
label_26facc:
    // 0x26facc: 0x0  nop
    ctx->pc = 0x26faccu;
    // NOP
label_26fad0:
    // 0x26fad0: 0x55ae  .word       0x000055AE                   # dsub        $t2, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fad0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 10, r); }
label_26fad4:
    // 0x26fad4: 0xe1b0  tge         $zero, $zero, 902
    ctx->pc = 0x26fad4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fad8:
    // 0x26fad8: 0x0  nop
    ctx->pc = 0x26fad8u;
    // NOP
label_26fadc:
    // 0x26fadc: 0x0  nop
    ctx->pc = 0x26fadcu;
    // NOP
label_26fae0:
    // 0x26fae0: 0x55cb  .word       0x000055CB                   # movn        $t2, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fae0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
label_26fae4:
    // 0x26fae4: 0x15a70  tge         $zero, $at, 361
    ctx->pc = 0x26fae4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_26fae8:
    // 0x26fae8: 0x0  nop
    ctx->pc = 0x26fae8u;
    // NOP
label_26faec:
    // 0x26faec: 0x0  nop
    ctx->pc = 0x26faecu;
    // NOP
label_26faf0:
    // 0x26faf0: 0x55f7  .word       0x000055F7                   # INVALID     $zero, $zero, 0x55F7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26faf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x26FAF0 raw=0x000055F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26faf4:
    // 0x26faf4: 0xa440  sll         $s4, $zero, 17
    ctx->pc = 0x26faf4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_26faf8:
    // 0x26faf8: 0x0  nop
    ctx->pc = 0x26faf8u;
    // NOP
label_26fafc:
    // 0x26fafc: 0x0  nop
    ctx->pc = 0x26fafcu;
    // NOP
label_26fb00:
    // 0x26fb00: 0x560c  syscall     344
    ctx->pc = 0x26fb00u;
    ctx->pc = 0x26FB04u;
runtime->handleSyscall(rdram, ctx, 0x158u);
label_26fb04:
    // 0x26fb04: 0xa2f0  tge         $zero, $zero, 651
    ctx->pc = 0x26fb04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fb08:
    // 0x26fb08: 0x0  nop
    ctx->pc = 0x26fb08u;
    // NOP
label_26fb0c:
    // 0x26fb0c: 0x0  nop
    ctx->pc = 0x26fb0cu;
    // NOP
label_26fb10:
    // 0x26fb10: 0x5621  .word       0x00005621                   # addu        $t2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fb10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26fb14:
    // 0x26fb14: 0x11840  sll         $v1, $at, 1
    ctx->pc = 0x26fb14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_26fb18:
    // 0x26fb18: 0x0  nop
    ctx->pc = 0x26fb18u;
    // NOP
label_26fb1c:
    // 0x26fb1c: 0x0  nop
    ctx->pc = 0x26fb1cu;
    // NOP
label_26fb20:
    // 0x26fb20: 0x5645  .word       0x00005645                   # INVALID     $zero, $zero, 0x5645 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fb20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26FB20 raw=0x00005645"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26fb24:
    // 0x26fb24: 0xab50  .word       0x0000AB50                   # mfhi        $s5 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fb24u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_26fb28:
    // 0x26fb28: 0x0  nop
    ctx->pc = 0x26fb28u;
    // NOP
label_26fb2c:
    // 0x26fb2c: 0x0  nop
    ctx->pc = 0x26fb2cu;
    // NOP
label_26fb30:
    // 0x26fb30: 0x565b  .word       0x0000565B                   # divu        $t2, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fb30u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26fb34:
    // 0x26fb34: 0xb430  tge         $zero, $zero, 720
    ctx->pc = 0x26fb34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fb38:
    // 0x26fb38: 0x0  nop
    ctx->pc = 0x26fb38u;
    // NOP
label_26fb3c:
    // 0x26fb3c: 0x0  nop
    ctx->pc = 0x26fb3cu;
    // NOP
label_26fb40:
    // 0x26fb40: 0x5672  tlt         $zero, $zero, 345
    ctx->pc = 0x26fb40u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fb44:
    // 0x26fb44: 0xae60  .word       0x0000AE60                   # add         $s5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fb44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_26fb48:
    // 0x26fb48: 0x0  nop
    ctx->pc = 0x26fb48u;
    // NOP
label_26fb4c:
    // 0x26fb4c: 0x0  nop
    ctx->pc = 0x26fb4cu;
    // NOP
label_26fb50:
    // 0x26fb50: 0x5688  .word       0x00005688                   # jr          $zero # 00005680 <InstrIdType: CPU_SPECIAL>
label_26fb54:
    if (ctx->pc == 0x26FB54u) {
        ctx->pc = 0x26FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB50u;
        // 0x26fb54: 0x18880  sll         $s1, $at, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 1), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FB58u;
        goto label_26fb58;
    }
    ctx->pc = 0x26FB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB50u;
        // 0x26fb54: 0x18880  sll         $s1, $at, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 1), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FB50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26FB58u;
label_26fb58:
    // 0x26fb58: 0x0  nop
    ctx->pc = 0x26fb58u;
    // NOP
label_26fb5c:
    // 0x26fb5c: 0x0  nop
    ctx->pc = 0x26fb5cu;
    // NOP
label_26fb60:
    // 0x26fb60: 0x56ba  dsrl        $t2, $zero, 26
    ctx->pc = 0x26fb60u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) >> 26);
label_26fb64:
    // 0x26fb64: 0x79b0  tge         $zero, $zero, 486
    ctx->pc = 0x26fb64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fb68:
    // 0x26fb68: 0x0  nop
    ctx->pc = 0x26fb68u;
    // NOP
label_26fb6c:
    // 0x26fb6c: 0x0  nop
    ctx->pc = 0x26fb6cu;
    // NOP
label_26fb70:
    // 0x26fb70: 0x56ca  .word       0x000056CA                   # movz        $t2, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fb70u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
label_26fb74:
    // 0x26fb74: 0xa210  .word       0x0000A210                   # mfhi        $s4 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fb74u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_26fb78:
    // 0x26fb78: 0x0  nop
    ctx->pc = 0x26fb78u;
    // NOP
label_26fb7c:
    // 0x26fb7c: 0x0  nop
    ctx->pc = 0x26fb7cu;
    // NOP
label_26fb80:
    // 0x26fb80: 0x56df  .word       0x000056DF                   # ddivu       $t2, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fb80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x26FB80 raw=0x000056DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26fb84:
    // 0x26fb84: 0x57e0  .word       0x000057E0                   # add         $t2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fb84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26fb88:
    // 0x26fb88: 0x0  nop
    ctx->pc = 0x26fb88u;
    // NOP
label_26fb8c:
    // 0x26fb8c: 0x0  nop
    ctx->pc = 0x26fb8cu;
    // NOP
label_26fb90:
    // 0x26fb90: 0x56ea  .word       0x000056EA                   # slt         $t2, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fb90u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_26fb94:
    // 0x26fb94: 0x8520  .word       0x00008520                   # add         $s0, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fb94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26fb98:
    // 0x26fb98: 0x0  nop
    ctx->pc = 0x26fb98u;
    // NOP
label_26fb9c:
    // 0x26fb9c: 0x0  nop
    ctx->pc = 0x26fb9cu;
    // NOP
label_26fba0:
    // 0x26fba0: 0x56fb  dsra        $t2, $zero, 27
    ctx->pc = 0x26fba0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 0) >> 27);
label_26fba4:
    // 0x26fba4: 0x42c0  sll         $t0, $zero, 11
    ctx->pc = 0x26fba4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_26fba8:
    // 0x26fba8: 0x0  nop
    ctx->pc = 0x26fba8u;
    // NOP
label_26fbac:
    // 0x26fbac: 0x0  nop
    ctx->pc = 0x26fbacu;
    // NOP
label_26fbb0:
    // 0x26fbb0: 0x5704  .word       0x00005704                   # sllv        $t2, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fbb0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26fbb4:
    // 0x26fbb4: 0x6640  sll         $t4, $zero, 25
    ctx->pc = 0x26fbb4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_26fbb8:
    // 0x26fbb8: 0x0  nop
    ctx->pc = 0x26fbb8u;
    // NOP
label_26fbbc:
    // 0x26fbbc: 0x0  nop
    ctx->pc = 0x26fbbcu;
    // NOP
label_26fbc0:
    // 0x26fbc0: 0x5711  .word       0x00005711                   # mthi        $zero # 00005700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fbc0u;
    ctx->hi = GPR_U64(ctx, 0);
label_26fbc4:
    // 0x26fbc4: 0x4f20  .word       0x00004F20                   # add         $t1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fbc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26fbc8:
    // 0x26fbc8: 0x0  nop
    ctx->pc = 0x26fbc8u;
    // NOP
label_26fbcc:
    // 0x26fbcc: 0x0  nop
    ctx->pc = 0x26fbccu;
    // NOP
label_26fbd0:
    // 0x26fbd0: 0x571b  .word       0x0000571B                   # divu        $t2, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fbd0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26fbd4:
    // 0x26fbd4: 0xb840  sll         $s7, $zero, 1
    ctx->pc = 0x26fbd4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_26fbd8:
    // 0x26fbd8: 0x0  nop
    ctx->pc = 0x26fbd8u;
    // NOP
label_26fbdc:
    // 0x26fbdc: 0x0  nop
    ctx->pc = 0x26fbdcu;
    // NOP
label_26fbe0:
    // 0x26fbe0: 0x5733  tltu        $zero, $zero, 348
    ctx->pc = 0x26fbe0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fbe4:
    // 0x26fbe4: 0x5290  .word       0x00005290                   # mfhi        $t2 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fbe4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26fbe8:
    // 0x26fbe8: 0x0  nop
    ctx->pc = 0x26fbe8u;
    // NOP
label_26fbec:
    // 0x26fbec: 0x0  nop
    ctx->pc = 0x26fbecu;
    // NOP
label_26fbf0:
    // 0x26fbf0: 0x573e  dsrl32      $t2, $zero, 28
    ctx->pc = 0x26fbf0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) >> (32 + 28));
label_26fbf4:
    // 0x26fbf4: 0x5030  tge         $zero, $zero, 320
    ctx->pc = 0x26fbf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fbf8:
    // 0x26fbf8: 0x0  nop
    ctx->pc = 0x26fbf8u;
    // NOP
label_26fbfc:
    // 0x26fbfc: 0x0  nop
    ctx->pc = 0x26fbfcu;
    // NOP
label_26fc00:
    // 0x26fc00: 0x5749  .word       0x00005749                   # jalr        $t2, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
label_26fc04:
    if (ctx->pc == 0x26FC04u) {
        ctx->pc = 0x26FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC00u;
        // 0x26fc04: 0x5870  tge         $zero, $zero, 353 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FC08u;
        goto label_26fc08;
    }
    ctx->pc = 0x26FC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 10, 0x26FC08u);
        ctx->pc = 0x26FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC00u;
        // 0x26fc04: 0x5870  tge         $zero, $zero, 353 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FC00u, 0x26FC08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26FC08u;
label_26fc08:
    // 0x26fc08: 0x0  nop
    ctx->pc = 0x26fc08u;
    // NOP
label_26fc0c:
    // 0x26fc0c: 0x0  nop
    ctx->pc = 0x26fc0cu;
    // NOP
label_26fc10:
    // 0x26fc10: 0x5755  .word       0x00005755                   # INVALID     $zero, $zero, 0x5755 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fc10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26FC10 raw=0x00005755"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26fc14:
    // 0x26fc14: 0x8c30  tge         $zero, $zero, 560
    ctx->pc = 0x26fc14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fc18:
    // 0x26fc18: 0x0  nop
    ctx->pc = 0x26fc18u;
    // NOP
label_26fc1c:
    // 0x26fc1c: 0x0  nop
    ctx->pc = 0x26fc1cu;
    // NOP
label_26fc20:
    // 0x26fc20: 0x5767  .word       0x00005767                   # not         $t2, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fc20u;
    SET_GPR_U64(ctx, 10, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_26fc24:
    // 0x26fc24: 0x78c0  sll         $t7, $zero, 3
    ctx->pc = 0x26fc24u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26fc28:
    // 0x26fc28: 0x0  nop
    ctx->pc = 0x26fc28u;
    // NOP
label_26fc2c:
    // 0x26fc2c: 0x0  nop
    ctx->pc = 0x26fc2cu;
    // NOP
label_26fc30:
    // 0x26fc30: 0x5777  .word       0x00005777                   # INVALID     $zero, $zero, 0x5777 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fc30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x26FC30 raw=0x00005777"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26fc34:
    // 0x26fc34: 0x6a80  sll         $t5, $zero, 10
    ctx->pc = 0x26fc34u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_26fc38:
    // 0x26fc38: 0x0  nop
    ctx->pc = 0x26fc38u;
    // NOP
label_26fc3c:
    // 0x26fc3c: 0x0  nop
    ctx->pc = 0x26fc3cu;
    // NOP
label_26fc40:
    // 0x26fc40: 0x5785  .word       0x00005785                   # INVALID     $zero, $zero, 0x5785 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fc40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26FC40 raw=0x00005785"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26fc44:
    // 0x26fc44: 0x2a30  tge         $zero, $zero, 168
    ctx->pc = 0x26fc44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fc48:
    // 0x26fc48: 0x0  nop
    ctx->pc = 0x26fc48u;
    // NOP
label_26fc4c:
    // 0x26fc4c: 0x0  nop
    ctx->pc = 0x26fc4cu;
    // NOP
label_26fc50:
    // 0x26fc50: 0x578b  .word       0x0000578B                   # movn        $t2, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fc50u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
label_26fc54:
    // 0x26fc54: 0x5110  .word       0x00005110                   # mfhi        $t2 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fc54u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26fc58:
    // 0x26fc58: 0x0  nop
    ctx->pc = 0x26fc58u;
    // NOP
label_26fc5c:
    // 0x26fc5c: 0x0  nop
    ctx->pc = 0x26fc5cu;
    // NOP
label_26fc60:
    // 0x26fc60: 0x5796  .word       0x00005796                   # dsrlv       $t2, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fc60u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26fc64:
    // 0x26fc64: 0x7dd0  .word       0x00007DD0                   # mfhi        $t7 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fc64u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_26fc68:
    // 0x26fc68: 0x0  nop
    ctx->pc = 0x26fc68u;
    // NOP
label_26fc6c:
    // 0x26fc6c: 0x0  nop
    ctx->pc = 0x26fc6cu;
    // NOP
label_26fc70:
    // 0x26fc70: 0x57a6  .word       0x000057A6                   # xor         $t2, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fc70u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_26fc74:
    // 0x26fc74: 0x5b70  tge         $zero, $zero, 365
    ctx->pc = 0x26fc74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fc78:
    // 0x26fc78: 0x0  nop
    ctx->pc = 0x26fc78u;
    // NOP
label_26fc7c:
    // 0x26fc7c: 0x0  nop
    ctx->pc = 0x26fc7cu;
    // NOP
label_26fc80:
    // 0x26fc80: 0x57b2  tlt         $zero, $zero, 350
    ctx->pc = 0x26fc80u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fc84:
    // 0x26fc84: 0x6180  sll         $t4, $zero, 6
    ctx->pc = 0x26fc84u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_26fc88:
    // 0x26fc88: 0x0  nop
    ctx->pc = 0x26fc88u;
    // NOP
label_26fc8c:
    // 0x26fc8c: 0x0  nop
    ctx->pc = 0x26fc8cu;
    // NOP
label_26fc90:
    // 0x26fc90: 0x57bf  dsra32      $t2, $zero, 30
    ctx->pc = 0x26fc90u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 0) >> (32 + 30));
label_26fc94:
    // 0x26fc94: 0x7960  .word       0x00007960                   # add         $t7, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fc94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_26fc98:
    // 0x26fc98: 0x0  nop
    ctx->pc = 0x26fc98u;
    // NOP
label_26fc9c:
    // 0x26fc9c: 0x0  nop
    ctx->pc = 0x26fc9cu;
    // NOP
label_26fca0:
    // 0x26fca0: 0x57cf  .word       0x000057CF                   # sync.p # 00005000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fca0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26fca4:
    // 0x26fca4: 0x35f0  tge         $zero, $zero, 215
    ctx->pc = 0x26fca4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fca8:
    // 0x26fca8: 0x0  nop
    ctx->pc = 0x26fca8u;
    // NOP
label_26fcac:
    // 0x26fcac: 0x0  nop
    ctx->pc = 0x26fcacu;
    // NOP
label_26fcb0:
    // 0x26fcb0: 0x57d6  .word       0x000057D6                   # dsrlv       $t2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fcb0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26fcb4:
    // 0x26fcb4: 0x5c20  .word       0x00005C20                   # add         $t3, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fcb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_26fcb8:
    // 0x26fcb8: 0x0  nop
    ctx->pc = 0x26fcb8u;
    // NOP
label_26fcbc:
    // 0x26fcbc: 0x0  nop
    ctx->pc = 0x26fcbcu;
    // NOP
label_26fcc0:
    // 0x26fcc0: 0x57e2  .word       0x000057E2                   # neg         $t2, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fcc0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
label_26fcc4:
    // 0x26fcc4: 0x84d0  .word       0x000084D0                   # mfhi        $s0 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fcc4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_26fcc8:
    // 0x26fcc8: 0x0  nop
    ctx->pc = 0x26fcc8u;
    // NOP
label_26fccc:
    // 0x26fccc: 0x0  nop
    ctx->pc = 0x26fcccu;
    // NOP
label_26fcd0:
    // 0x26fcd0: 0x57f3  tltu        $zero, $zero, 351
    ctx->pc = 0x26fcd0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fcd4:
    // 0x26fcd4: 0x58b0  tge         $zero, $zero, 354
    ctx->pc = 0x26fcd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fcd8:
    // 0x26fcd8: 0x0  nop
    ctx->pc = 0x26fcd8u;
    // NOP
label_26fcdc:
    // 0x26fcdc: 0x0  nop
    ctx->pc = 0x26fcdcu;
    // NOP
label_26fce0:
    // 0x26fce0: 0x57ff  dsra32      $t2, $zero, 31
    ctx->pc = 0x26fce0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 0) >> (32 + 31));
label_26fce4:
    // 0x26fce4: 0x64d0  .word       0x000064D0                   # mfhi        $t4 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fce4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_26fce8:
    // 0x26fce8: 0x0  nop
    ctx->pc = 0x26fce8u;
    // NOP
label_26fcec:
    // 0x26fcec: 0x0  nop
    ctx->pc = 0x26fcecu;
    // NOP
label_26fcf0:
    // 0x26fcf0: 0x580c  syscall     352
    ctx->pc = 0x26fcf0u;
    ctx->pc = 0x26FCF4u;
runtime->handleSyscall(rdram, ctx, 0x160u);
label_26fcf4:
    // 0x26fcf4: 0x5750  .word       0x00005750                   # mfhi        $t2 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fcf4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26fcf8:
    // 0x26fcf8: 0x0  nop
    ctx->pc = 0x26fcf8u;
    // NOP
label_26fcfc:
    // 0x26fcfc: 0x0  nop
    ctx->pc = 0x26fcfcu;
    // NOP
label_26fd00:
    // 0x26fd00: 0x5817  dsrav       $t3, $zero, $zero
    ctx->pc = 0x26fd00u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26fd04:
    // 0x26fd04: 0x63e0  .word       0x000063E0                   # add         $t4, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fd04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_26fd08:
    // 0x26fd08: 0x0  nop
    ctx->pc = 0x26fd08u;
    // NOP
label_26fd0c:
    // 0x26fd0c: 0x0  nop
    ctx->pc = 0x26fd0cu;
    // NOP
label_26fd10:
    // 0x26fd10: 0x5824  and         $t3, $zero, $zero
    ctx->pc = 0x26fd10u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_26fd14:
    // 0x26fd14: 0x51a0  .word       0x000051A0                   # add         $t2, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fd14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26fd18:
    // 0x26fd18: 0x0  nop
    ctx->pc = 0x26fd18u;
    // NOP
label_26fd1c:
    // 0x26fd1c: 0x0  nop
    ctx->pc = 0x26fd1cu;
    // NOP
label_26fd20:
    // 0x26fd20: 0x582f  dsubu       $t3, $zero, $zero
    ctx->pc = 0x26fd20u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26fd24:
    // 0x26fd24: 0x59f0  tge         $zero, $zero, 359
    ctx->pc = 0x26fd24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fd28:
    // 0x26fd28: 0x0  nop
    ctx->pc = 0x26fd28u;
    // NOP
label_26fd2c:
    // 0x26fd2c: 0x0  nop
    ctx->pc = 0x26fd2cu;
    // NOP
label_26fd30:
    // 0x26fd30: 0x583b  dsra        $t3, $zero, 0
    ctx->pc = 0x26fd30u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 0) >> 0);
label_26fd34:
    // 0x26fd34: 0x3980  sll         $a3, $zero, 6
    ctx->pc = 0x26fd34u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_26fd38:
    // 0x26fd38: 0x0  nop
    ctx->pc = 0x26fd38u;
    // NOP
label_26fd3c:
    // 0x26fd3c: 0x0  nop
    ctx->pc = 0x26fd3cu;
    // NOP
label_26fd40:
    // 0x26fd40: 0x5843  sra         $t3, $zero, 1
    ctx->pc = 0x26fd40u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 0), 1));
label_26fd44:
    // 0x26fd44: 0x6560  .word       0x00006560                   # add         $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fd44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_26fd48:
    // 0x26fd48: 0x0  nop
    ctx->pc = 0x26fd48u;
    // NOP
label_26fd4c:
    // 0x26fd4c: 0x0  nop
    ctx->pc = 0x26fd4cu;
    // NOP
label_26fd50:
    // 0x26fd50: 0x5850  .word       0x00005850                   # mfhi        $t3 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fd50u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_26fd54:
    // 0x26fd54: 0x3790  .word       0x00003790                   # mfhi        $a2 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fd54u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_26fd58:
    // 0x26fd58: 0x0  nop
    ctx->pc = 0x26fd58u;
    // NOP
label_26fd5c:
    // 0x26fd5c: 0x0  nop
    ctx->pc = 0x26fd5cu;
    // NOP
label_26fd60:
    // 0x26fd60: 0x5857  .word       0x00005857                   # dsrav       $t3, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fd60u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26fd64:
    // 0x26fd64: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x26fd64u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_26fd68:
    // 0x26fd68: 0x0  nop
    ctx->pc = 0x26fd68u;
    // NOP
label_26fd6c:
    // 0x26fd6c: 0x0  nop
    ctx->pc = 0x26fd6cu;
    // NOP
label_26fd70:
    // 0x26fd70: 0x5864  .word       0x00005864                   # and         $t3, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fd70u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_26fd74:
    // 0x26fd74: 0x83e0  .word       0x000083E0                   # add         $s0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fd74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26fd78:
    // 0x26fd78: 0x0  nop
    ctx->pc = 0x26fd78u;
    // NOP
label_26fd7c:
    // 0x26fd7c: 0x0  nop
    ctx->pc = 0x26fd7cu;
    // NOP
label_26fd80:
    // 0x26fd80: 0x5875  .word       0x00005875                   # INVALID     $zero, $zero, 0x5875 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fd80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x26FD80 raw=0x00005875"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26fd84:
    // 0x26fd84: 0x5be0  .word       0x00005BE0                   # add         $t3, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fd84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_26fd88:
    // 0x26fd88: 0x0  nop
    ctx->pc = 0x26fd88u;
    // NOP
label_26fd8c:
    // 0x26fd8c: 0x0  nop
    ctx->pc = 0x26fd8cu;
    // NOP
label_26fd90:
    // 0x26fd90: 0x5881  .word       0x00005881                   # INVALID     $zero, $zero, 0x5881 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fd90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26FD90 raw=0x00005881"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26fd94:
    // 0x26fd94: 0x4fe0  .word       0x00004FE0                   # add         $t1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fd94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26fd98:
    // 0x26fd98: 0x0  nop
    ctx->pc = 0x26fd98u;
    // NOP
label_26fd9c:
    // 0x26fd9c: 0x0  nop
    ctx->pc = 0x26fd9cu;
    // NOP
label_26fda0:
    // 0x26fda0: 0x588b  .word       0x0000588B                   # movn        $t3, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fda0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
label_26fda4:
    // 0x26fda4: 0x5ec0  sll         $t3, $zero, 27
    ctx->pc = 0x26fda4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_26fda8:
    // 0x26fda8: 0x0  nop
    ctx->pc = 0x26fda8u;
    // NOP
label_26fdac:
    // 0x26fdac: 0x0  nop
    ctx->pc = 0x26fdacu;
    // NOP
label_26fdb0:
    // 0x26fdb0: 0x5897  .word       0x00005897                   # dsrav       $t3, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fdb0u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26fdb4:
    // 0x26fdb4: 0x5750  .word       0x00005750                   # mfhi        $t2 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fdb4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26fdb8:
    // 0x26fdb8: 0x0  nop
    ctx->pc = 0x26fdb8u;
    // NOP
label_26fdbc:
    // 0x26fdbc: 0x0  nop
    ctx->pc = 0x26fdbcu;
    // NOP
label_26fdc0:
    // 0x26fdc0: 0x58a2  .word       0x000058A2                   # neg         $t3, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fdc0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 11, (int32_t)tmp); }
label_26fdc4:
    // 0x26fdc4: 0x2730  tge         $zero, $zero, 156
    ctx->pc = 0x26fdc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fdc8:
    // 0x26fdc8: 0x0  nop
    ctx->pc = 0x26fdc8u;
    // NOP
label_26fdcc:
    // 0x26fdcc: 0x0  nop
    ctx->pc = 0x26fdccu;
    // NOP
label_26fdd0:
    // 0x26fdd0: 0x58a7  .word       0x000058A7                   # not         $t3, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fdd0u;
    SET_GPR_U64(ctx, 11, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_26fdd4:
    // 0x26fdd4: 0x6b00  sll         $t5, $zero, 12
    ctx->pc = 0x26fdd4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_26fdd8:
    // 0x26fdd8: 0x0  nop
    ctx->pc = 0x26fdd8u;
    // NOP
label_26fddc:
    // 0x26fddc: 0x0  nop
    ctx->pc = 0x26fddcu;
    // NOP
label_26fde0:
    // 0x26fde0: 0x58b5  .word       0x000058B5                   # INVALID     $zero, $zero, 0x58B5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fde0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x26FDE0 raw=0x000058B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26fde4:
    // 0x26fde4: 0x65e0  .word       0x000065E0                   # add         $t4, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fde4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_26fde8:
    // 0x26fde8: 0x0  nop
    ctx->pc = 0x26fde8u;
    // NOP
label_26fdec:
    // 0x26fdec: 0x0  nop
    ctx->pc = 0x26fdecu;
    // NOP
label_26fdf0:
    // 0x26fdf0: 0x58c2  srl         $t3, $zero, 3
    ctx->pc = 0x26fdf0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 0), 3));
label_26fdf4:
    // 0x26fdf4: 0x5bb0  tge         $zero, $zero, 366
    ctx->pc = 0x26fdf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fdf8:
    // 0x26fdf8: 0x0  nop
    ctx->pc = 0x26fdf8u;
    // NOP
label_26fdfc:
    // 0x26fdfc: 0x0  nop
    ctx->pc = 0x26fdfcu;
    // NOP
label_26fe00:
    // 0x26fe00: 0x58ce  .word       0x000058CE                   # INVALID     $zero, $zero, 0x58CE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fe00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26FE00 raw=0x000058CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26fe04:
    // 0x26fe04: 0x4f00  sll         $t1, $zero, 28
    ctx->pc = 0x26fe04u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_26fe08:
    // 0x26fe08: 0x0  nop
    ctx->pc = 0x26fe08u;
    // NOP
label_26fe0c:
    // 0x26fe0c: 0x0  nop
    ctx->pc = 0x26fe0cu;
    // NOP
label_26fe10:
    // 0x26fe10: 0x58d8  .word       0x000058D8                   # mult        $t3, $zero, $zero # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26fe10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_26fe14:
    // 0x26fe14: 0xd860  .word       0x0000D860                   # add         $k1, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fe14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_26fe18:
    // 0x26fe18: 0x0  nop
    ctx->pc = 0x26fe18u;
    // NOP
label_26fe1c:
    // 0x26fe1c: 0x0  nop
    ctx->pc = 0x26fe1cu;
    // NOP
label_26fe20:
    // 0x26fe20: 0x58f4  teq         $zero, $zero, 355
    ctx->pc = 0x26fe20u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fe24:
    // 0x26fe24: 0xa080  sll         $s4, $zero, 2
    ctx->pc = 0x26fe24u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_26fe28:
    // 0x26fe28: 0x0  nop
    ctx->pc = 0x26fe28u;
    // NOP
label_26fe2c:
    // 0x26fe2c: 0x0  nop
    ctx->pc = 0x26fe2cu;
    // NOP
label_26fe30:
    // 0x26fe30: 0x5909  .word       0x00005909                   # jalr        $t3, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
label_26fe34:
    if (ctx->pc == 0x26FE34u) {
        ctx->pc = 0x26FE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE30u;
        // 0x26fe34: 0x8700  sll         $s0, $zero, 28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FE38u;
        goto label_26fe38;
    }
    ctx->pc = 0x26FE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 11, 0x26FE38u);
        ctx->pc = 0x26FE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE30u;
        // 0x26fe34: 0x8700  sll         $s0, $zero, 28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FE30u, 0x26FE38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26FE38u;
label_26fe38:
    // 0x26fe38: 0x0  nop
    ctx->pc = 0x26fe38u;
    // NOP
label_26fe3c:
    // 0x26fe3c: 0x0  nop
    ctx->pc = 0x26fe3cu;
    // NOP
label_26fe40:
    // 0x26fe40: 0x591a  .word       0x0000591A                   # div         $t3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fe40u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26fe44:
    // 0x26fe44: 0x87a0  .word       0x000087A0                   # add         $s0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fe44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26fe48:
    // 0x26fe48: 0x0  nop
    ctx->pc = 0x26fe48u;
    // NOP
label_26fe4c:
    // 0x26fe4c: 0x0  nop
    ctx->pc = 0x26fe4cu;
    // NOP
label_26fe50:
    // 0x26fe50: 0x592b  .word       0x0000592B                   # sltu        $t3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fe50u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_26fe54:
    // 0x26fe54: 0x9440  sll         $s2, $zero, 17
    ctx->pc = 0x26fe54u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_26fe58:
    // 0x26fe58: 0x0  nop
    ctx->pc = 0x26fe58u;
    // NOP
label_26fe5c:
    // 0x26fe5c: 0x0  nop
    ctx->pc = 0x26fe5cu;
    // NOP
label_26fe60:
    // 0x26fe60: 0x593e  dsrl32      $t3, $zero, 4
    ctx->pc = 0x26fe60u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) >> (32 + 4));
label_26fe64:
    // 0x26fe64: 0x8310  .word       0x00008310                   # mfhi        $s0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fe64u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_26fe68:
    // 0x26fe68: 0x0  nop
    ctx->pc = 0x26fe68u;
    // NOP
label_26fe6c:
    // 0x26fe6c: 0x0  nop
    ctx->pc = 0x26fe6cu;
    // NOP
label_26fe70:
    // 0x26fe70: 0x594f  .word       0x0000594F                   # sync # 00005800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fe70u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26fe74:
    // 0x26fe74: 0xba70  tge         $zero, $zero, 745
    ctx->pc = 0x26fe74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fe78:
    // 0x26fe78: 0x0  nop
    ctx->pc = 0x26fe78u;
    // NOP
label_26fe7c:
    // 0x26fe7c: 0x0  nop
    ctx->pc = 0x26fe7cu;
    // NOP
label_26fe80:
    // 0x26fe80: 0x5967  .word       0x00005967                   # not         $t3, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fe80u;
    SET_GPR_U64(ctx, 11, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_26fe84:
    // 0x26fe84: 0xcd70  tge         $zero, $zero, 821
    ctx->pc = 0x26fe84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fe88:
    // 0x26fe88: 0x0  nop
    ctx->pc = 0x26fe88u;
    // NOP
label_26fe8c:
    // 0x26fe8c: 0x0  nop
    ctx->pc = 0x26fe8cu;
    // NOP
label_26fe90:
    // 0x26fe90: 0x5981  .word       0x00005981                   # INVALID     $zero, $zero, 0x5981 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fe90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26FE90 raw=0x00005981"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26fe94:
    // 0x26fe94: 0xacf0  tge         $zero, $zero, 691
    ctx->pc = 0x26fe94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fe98:
    // 0x26fe98: 0x0  nop
    ctx->pc = 0x26fe98u;
    // NOP
label_26fe9c:
    // 0x26fe9c: 0x0  nop
    ctx->pc = 0x26fe9cu;
    // NOP
label_26fea0:
    // 0x26fea0: 0x5997  .word       0x00005997                   # dsrav       $t3, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fea0u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26fea4:
    // 0x26fea4: 0x15fb0  tge         $zero, $at, 382
    ctx->pc = 0x26fea4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_26fea8:
    // 0x26fea8: 0x0  nop
    ctx->pc = 0x26fea8u;
    // NOP
label_26feac:
    // 0x26feac: 0x0  nop
    ctx->pc = 0x26feacu;
    // NOP
label_26feb0:
    // 0x26feb0: 0x59c3  sra         $t3, $zero, 7
    ctx->pc = 0x26feb0u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 0), 7));
label_26feb4:
    // 0x26feb4: 0xa3a0  .word       0x0000A3A0                   # add         $s4, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26feb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_26feb8:
    // 0x26feb8: 0x0  nop
    ctx->pc = 0x26feb8u;
    // NOP
label_26febc:
    // 0x26febc: 0x0  nop
    ctx->pc = 0x26febcu;
    // NOP
label_26fec0:
    // 0x26fec0: 0x59d8  .word       0x000059D8                   # mult        $t3, $zero, $zero # 000001C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26fec0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_26fec4:
    // 0x26fec4: 0x8ea0  .word       0x00008EA0                   # add         $s1, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fec4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_26fec8:
    // 0x26fec8: 0x0  nop
    ctx->pc = 0x26fec8u;
    // NOP
label_26fecc:
    // 0x26fecc: 0x0  nop
    ctx->pc = 0x26feccu;
    // NOP
label_26fed0:
    // 0x26fed0: 0x59ea  .word       0x000059EA                   # slt         $t3, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fed0u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_26fed4:
    // 0x26fed4: 0xcfe0  .word       0x0000CFE0                   # add         $t9, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fed4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_26fed8:
    // 0x26fed8: 0x0  nop
    ctx->pc = 0x26fed8u;
    // NOP
label_26fedc:
    // 0x26fedc: 0x0  nop
    ctx->pc = 0x26fedcu;
    // NOP
label_26fee0:
    // 0x26fee0: 0x5a04  .word       0x00005A04                   # sllv        $t3, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fee0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26fee4:
    // 0x26fee4: 0xa170  tge         $zero, $zero, 645
    ctx->pc = 0x26fee4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fee8:
    // 0x26fee8: 0x0  nop
    ctx->pc = 0x26fee8u;
    // NOP
label_26feec:
    // 0x26feec: 0x0  nop
    ctx->pc = 0x26feecu;
    // NOP
label_26fef0:
    // 0x26fef0: 0x5a19  .word       0x00005A19                   # multu       $zero, $zero # 00005A00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fef0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_26fef4:
    // 0x26fef4: 0xf670  tge         $zero, $zero, 985
    ctx->pc = 0x26fef4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fef8:
    // 0x26fef8: 0x0  nop
    ctx->pc = 0x26fef8u;
    // NOP
label_26fefc:
    // 0x26fefc: 0x0  nop
    ctx->pc = 0x26fefcu;
    // NOP
label_26ff00:
    // 0x26ff00: 0x5a38  dsll        $t3, $zero, 8
    ctx->pc = 0x26ff00u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) << 8);
label_26ff04:
    // 0x26ff04: 0xb3b0  tge         $zero, $zero, 718
    ctx->pc = 0x26ff04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ff08:
    // 0x26ff08: 0x0  nop
    ctx->pc = 0x26ff08u;
    // NOP
label_26ff0c:
    // 0x26ff0c: 0x0  nop
    ctx->pc = 0x26ff0cu;
    // NOP
label_26ff10:
    // 0x26ff10: 0x5a4f  .word       0x00005A4F                   # sync # 00005800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ff10u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26ff14:
    // 0x26ff14: 0xb4d0  .word       0x0000B4D0                   # mfhi        $s6 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ff14u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_26ff18:
    // 0x26ff18: 0x0  nop
    ctx->pc = 0x26ff18u;
    // NOP
label_26ff1c:
    // 0x26ff1c: 0x0  nop
    ctx->pc = 0x26ff1cu;
    // NOP
label_26ff20:
    // 0x26ff20: 0x5a66  .word       0x00005A66                   # xor         $t3, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ff20u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_26ff24:
    // 0x26ff24: 0xff60  .word       0x0000FF60                   # add         $ra, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ff24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_26ff28:
    // 0x26ff28: 0x0  nop
    ctx->pc = 0x26ff28u;
    // NOP
label_26ff2c:
    // 0x26ff2c: 0x0  nop
    ctx->pc = 0x26ff2cu;
    // NOP
label_26ff30:
    // 0x26ff30: 0x5a86  .word       0x00005A86                   # srlv        $t3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ff30u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26ff34:
    // 0x26ff34: 0x9490  .word       0x00009490                   # mfhi        $s2 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ff34u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_26ff38:
    // 0x26ff38: 0x0  nop
    ctx->pc = 0x26ff38u;
    // NOP
label_26ff3c:
    // 0x26ff3c: 0x0  nop
    ctx->pc = 0x26ff3cu;
    // NOP
label_26ff40:
    // 0x26ff40: 0x5a99  .word       0x00005A99                   # multu       $zero, $zero # 00005A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ff40u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_26ff44:
    // 0x26ff44: 0xafe0  .word       0x0000AFE0                   # add         $s5, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ff44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_26ff48:
    // 0x26ff48: 0x0  nop
    ctx->pc = 0x26ff48u;
    // NOP
label_26ff4c:
    // 0x26ff4c: 0x0  nop
    ctx->pc = 0x26ff4cu;
    // NOP
label_26ff50:
    // 0x26ff50: 0x5aaf  .word       0x00005AAF                   # dsubu       $t3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ff50u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26ff54:
    // 0x26ff54: 0x134c0  sll         $a2, $at, 19
    ctx->pc = 0x26ff54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 19));
label_26ff58:
    // 0x26ff58: 0x0  nop
    ctx->pc = 0x26ff58u;
    // NOP
label_26ff5c:
    // 0x26ff5c: 0x0  nop
    ctx->pc = 0x26ff5cu;
    // NOP
label_26ff60:
    // 0x26ff60: 0x5ad6  .word       0x00005AD6                   # dsrlv       $t3, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ff60u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26ff64:
    // 0x26ff64: 0xa0a0  .word       0x0000A0A0                   # add         $s4, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ff64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_26ff68:
    // 0x26ff68: 0x0  nop
    ctx->pc = 0x26ff68u;
    // NOP
label_26ff6c:
    // 0x26ff6c: 0x0  nop
    ctx->pc = 0x26ff6cu;
    // NOP
label_26ff70:
    // 0x26ff70: 0x5aeb  .word       0x00005AEB                   # sltu        $t3, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ff70u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_26ff74:
    // 0x26ff74: 0xa920  .word       0x0000A920                   # add         $s5, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ff74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_26ff78:
    // 0x26ff78: 0x0  nop
    ctx->pc = 0x26ff78u;
    // NOP
label_26ff7c:
    // 0x26ff7c: 0x0  nop
    ctx->pc = 0x26ff7cu;
    // NOP
    ctx->pc = 0x26ff80u;
    return;
}
