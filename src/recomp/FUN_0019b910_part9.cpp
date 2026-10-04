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


void FUN_0019b910_part9(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x19f790u: goto label_19f790;
        case 0x19f794u: goto label_19f794;
        case 0x19f798u: goto label_19f798;
        case 0x19f79cu: goto label_19f79c;
        case 0x19f7a0u: goto label_19f7a0;
        case 0x19f7a4u: goto label_19f7a4;
        case 0x19f7a8u: goto label_19f7a8;
        case 0x19f7acu: goto label_19f7ac;
        case 0x19f7b0u: goto label_19f7b0;
        case 0x19f7b4u: goto label_19f7b4;
        case 0x19f7b8u: goto label_19f7b8;
        case 0x19f7bcu: goto label_19f7bc;
        case 0x19f7c0u: goto label_19f7c0;
        case 0x19f7c4u: goto label_19f7c4;
        case 0x19f7c8u: goto label_19f7c8;
        case 0x19f7ccu: goto label_19f7cc;
        case 0x19f7d0u: goto label_19f7d0;
        case 0x19f7d4u: goto label_19f7d4;
        case 0x19f7d8u: goto label_19f7d8;
        case 0x19f7dcu: goto label_19f7dc;
        case 0x19f7e0u: goto label_19f7e0;
        case 0x19f7e4u: goto label_19f7e4;
        case 0x19f7e8u: goto label_19f7e8;
        case 0x19f7ecu: goto label_19f7ec;
        case 0x19f7f0u: goto label_19f7f0;
        case 0x19f7f4u: goto label_19f7f4;
        case 0x19f7f8u: goto label_19f7f8;
        case 0x19f7fcu: goto label_19f7fc;
        case 0x19f800u: goto label_19f800;
        case 0x19f804u: goto label_19f804;
        case 0x19f808u: goto label_19f808;
        case 0x19f80cu: goto label_19f80c;
        case 0x19f810u: goto label_19f810;
        case 0x19f814u: goto label_19f814;
        case 0x19f818u: goto label_19f818;
        case 0x19f81cu: goto label_19f81c;
        case 0x19f820u: goto label_19f820;
        case 0x19f824u: goto label_19f824;
        case 0x19f828u: goto label_19f828;
        case 0x19f82cu: goto label_19f82c;
        case 0x19f830u: goto label_19f830;
        case 0x19f834u: goto label_19f834;
        case 0x19f838u: goto label_19f838;
        case 0x19f83cu: goto label_19f83c;
        case 0x19f840u: goto label_19f840;
        case 0x19f844u: goto label_19f844;
        case 0x19f848u: goto label_19f848;
        case 0x19f84cu: goto label_19f84c;
        case 0x19f850u: goto label_19f850;
        case 0x19f854u: goto label_19f854;
        case 0x19f858u: goto label_19f858;
        case 0x19f85cu: goto label_19f85c;
        case 0x19f860u: goto label_19f860;
        case 0x19f864u: goto label_19f864;
        case 0x19f868u: goto label_19f868;
        case 0x19f86cu: goto label_19f86c;
        case 0x19f870u: goto label_19f870;
        case 0x19f874u: goto label_19f874;
        case 0x19f878u: goto label_19f878;
        case 0x19f87cu: goto label_19f87c;
        case 0x19f880u: goto label_19f880;
        case 0x19f884u: goto label_19f884;
        case 0x19f888u: goto label_19f888;
        case 0x19f88cu: goto label_19f88c;
        case 0x19f890u: goto label_19f890;
        case 0x19f894u: goto label_19f894;
        case 0x19f898u: goto label_19f898;
        case 0x19f89cu: goto label_19f89c;
        case 0x19f8a0u: goto label_19f8a0;
        case 0x19f8a4u: goto label_19f8a4;
        case 0x19f8a8u: goto label_19f8a8;
        case 0x19f8acu: goto label_19f8ac;
        case 0x19f8b0u: goto label_19f8b0;
        case 0x19f8b4u: goto label_19f8b4;
        case 0x19f8b8u: goto label_19f8b8;
        case 0x19f8bcu: goto label_19f8bc;
        case 0x19f8c0u: goto label_19f8c0;
        case 0x19f8c4u: goto label_19f8c4;
        case 0x19f8c8u: goto label_19f8c8;
        case 0x19f8ccu: goto label_19f8cc;
        case 0x19f8d0u: goto label_19f8d0;
        case 0x19f8d4u: goto label_19f8d4;
        case 0x19f8d8u: goto label_19f8d8;
        case 0x19f8dcu: goto label_19f8dc;
        case 0x19f8e0u: goto label_19f8e0;
        case 0x19f8e4u: goto label_19f8e4;
        case 0x19f8e8u: goto label_19f8e8;
        case 0x19f8ecu: goto label_19f8ec;
        case 0x19f8f0u: goto label_19f8f0;
        case 0x19f8f4u: goto label_19f8f4;
        case 0x19f8f8u: goto label_19f8f8;
        case 0x19f8fcu: goto label_19f8fc;
        case 0x19f900u: goto label_19f900;
        case 0x19f904u: goto label_19f904;
        case 0x19f908u: goto label_19f908;
        case 0x19f90cu: goto label_19f90c;
        case 0x19f910u: goto label_19f910;
        case 0x19f914u: goto label_19f914;
        case 0x19f918u: goto label_19f918;
        case 0x19f91cu: goto label_19f91c;
        case 0x19f920u: goto label_19f920;
        case 0x19f924u: goto label_19f924;
        case 0x19f928u: goto label_19f928;
        case 0x19f92cu: goto label_19f92c;
        case 0x19f930u: goto label_19f930;
        case 0x19f934u: goto label_19f934;
        case 0x19f938u: goto label_19f938;
        case 0x19f93cu: goto label_19f93c;
        case 0x19f940u: goto label_19f940;
        case 0x19f944u: goto label_19f944;
        case 0x19f948u: goto label_19f948;
        case 0x19f94cu: goto label_19f94c;
        case 0x19f950u: goto label_19f950;
        case 0x19f954u: goto label_19f954;
        case 0x19f958u: goto label_19f958;
        case 0x19f95cu: goto label_19f95c;
        case 0x19f960u: goto label_19f960;
        case 0x19f964u: goto label_19f964;
        case 0x19f968u: goto label_19f968;
        case 0x19f96cu: goto label_19f96c;
        case 0x19f970u: goto label_19f970;
        case 0x19f974u: goto label_19f974;
        case 0x19f978u: goto label_19f978;
        case 0x19f97cu: goto label_19f97c;
        case 0x19f980u: goto label_19f980;
        case 0x19f984u: goto label_19f984;
        case 0x19f988u: goto label_19f988;
        case 0x19f98cu: goto label_19f98c;
        case 0x19f990u: goto label_19f990;
        case 0x19f994u: goto label_19f994;
        case 0x19f998u: goto label_19f998;
        case 0x19f99cu: goto label_19f99c;
        case 0x19f9a0u: goto label_19f9a0;
        case 0x19f9a4u: goto label_19f9a4;
        case 0x19f9a8u: goto label_19f9a8;
        case 0x19f9acu: goto label_19f9ac;
        case 0x19f9b0u: goto label_19f9b0;
        case 0x19f9b4u: goto label_19f9b4;
        case 0x19f9b8u: goto label_19f9b8;
        case 0x19f9bcu: goto label_19f9bc;
        case 0x19f9c0u: goto label_19f9c0;
        case 0x19f9c4u: goto label_19f9c4;
        case 0x19f9c8u: goto label_19f9c8;
        case 0x19f9ccu: goto label_19f9cc;
        case 0x19f9d0u: goto label_19f9d0;
        case 0x19f9d4u: goto label_19f9d4;
        case 0x19f9d8u: goto label_19f9d8;
        case 0x19f9dcu: goto label_19f9dc;
        case 0x19f9e0u: goto label_19f9e0;
        case 0x19f9e4u: goto label_19f9e4;
        case 0x19f9e8u: goto label_19f9e8;
        case 0x19f9ecu: goto label_19f9ec;
        case 0x19f9f0u: goto label_19f9f0;
        case 0x19f9f4u: goto label_19f9f4;
        case 0x19f9f8u: goto label_19f9f8;
        case 0x19f9fcu: goto label_19f9fc;
        case 0x19fa00u: goto label_19fa00;
        case 0x19fa04u: goto label_19fa04;
        case 0x19fa08u: goto label_19fa08;
        case 0x19fa0cu: goto label_19fa0c;
        case 0x19fa10u: goto label_19fa10;
        case 0x19fa14u: goto label_19fa14;
        case 0x19fa18u: goto label_19fa18;
        case 0x19fa1cu: goto label_19fa1c;
        case 0x19fa20u: goto label_19fa20;
        case 0x19fa24u: goto label_19fa24;
        case 0x19fa28u: goto label_19fa28;
        case 0x19fa2cu: goto label_19fa2c;
        case 0x19fa30u: goto label_19fa30;
        case 0x19fa34u: goto label_19fa34;
        case 0x19fa38u: goto label_19fa38;
        case 0x19fa3cu: goto label_19fa3c;
        case 0x19fa40u: goto label_19fa40;
        case 0x19fa44u: goto label_19fa44;
        case 0x19fa48u: goto label_19fa48;
        case 0x19fa4cu: goto label_19fa4c;
        case 0x19fa50u: goto label_19fa50;
        case 0x19fa54u: goto label_19fa54;
        case 0x19fa58u: goto label_19fa58;
        case 0x19fa5cu: goto label_19fa5c;
        case 0x19fa60u: goto label_19fa60;
        case 0x19fa64u: goto label_19fa64;
        case 0x19fa68u: goto label_19fa68;
        case 0x19fa6cu: goto label_19fa6c;
        case 0x19fa70u: goto label_19fa70;
        case 0x19fa74u: goto label_19fa74;
        case 0x19fa78u: goto label_19fa78;
        case 0x19fa7cu: goto label_19fa7c;
        case 0x19fa80u: goto label_19fa80;
        case 0x19fa84u: goto label_19fa84;
        case 0x19fa88u: goto label_19fa88;
        case 0x19fa8cu: goto label_19fa8c;
        case 0x19fa90u: goto label_19fa90;
        case 0x19fa94u: goto label_19fa94;
        case 0x19fa98u: goto label_19fa98;
        case 0x19fa9cu: goto label_19fa9c;
        case 0x19faa0u: goto label_19faa0;
        case 0x19faa4u: goto label_19faa4;
        case 0x19faa8u: goto label_19faa8;
        case 0x19faacu: goto label_19faac;
        case 0x19fab0u: goto label_19fab0;
        case 0x19fab4u: goto label_19fab4;
        case 0x19fab8u: goto label_19fab8;
        case 0x19fabcu: goto label_19fabc;
        case 0x19fac0u: goto label_19fac0;
        case 0x19fac4u: goto label_19fac4;
        case 0x19fac8u: goto label_19fac8;
        case 0x19faccu: goto label_19facc;
        case 0x19fad0u: goto label_19fad0;
        case 0x19fad4u: goto label_19fad4;
        case 0x19fad8u: goto label_19fad8;
        case 0x19fadcu: goto label_19fadc;
        case 0x19fae0u: goto label_19fae0;
        case 0x19fae4u: goto label_19fae4;
        case 0x19fae8u: goto label_19fae8;
        case 0x19faecu: goto label_19faec;
        case 0x19faf0u: goto label_19faf0;
        case 0x19faf4u: goto label_19faf4;
        case 0x19faf8u: goto label_19faf8;
        case 0x19fafcu: goto label_19fafc;
        case 0x19fb00u: goto label_19fb00;
        case 0x19fb04u: goto label_19fb04;
        case 0x19fb08u: goto label_19fb08;
        case 0x19fb0cu: goto label_19fb0c;
        case 0x19fb10u: goto label_19fb10;
        case 0x19fb14u: goto label_19fb14;
        case 0x19fb18u: goto label_19fb18;
        case 0x19fb1cu: goto label_19fb1c;
        case 0x19fb20u: goto label_19fb20;
        case 0x19fb24u: goto label_19fb24;
        case 0x19fb28u: goto label_19fb28;
        case 0x19fb2cu: goto label_19fb2c;
        case 0x19fb30u: goto label_19fb30;
        case 0x19fb34u: goto label_19fb34;
        case 0x19fb38u: goto label_19fb38;
        case 0x19fb3cu: goto label_19fb3c;
        case 0x19fb40u: goto label_19fb40;
        case 0x19fb44u: goto label_19fb44;
        case 0x19fb48u: goto label_19fb48;
        case 0x19fb4cu: goto label_19fb4c;
        case 0x19fb50u: goto label_19fb50;
        case 0x19fb54u: goto label_19fb54;
        case 0x19fb58u: goto label_19fb58;
        case 0x19fb5cu: goto label_19fb5c;
        case 0x19fb60u: goto label_19fb60;
        case 0x19fb64u: goto label_19fb64;
        case 0x19fb68u: goto label_19fb68;
        case 0x19fb6cu: goto label_19fb6c;
        case 0x19fb70u: goto label_19fb70;
        case 0x19fb74u: goto label_19fb74;
        case 0x19fb78u: goto label_19fb78;
        case 0x19fb7cu: goto label_19fb7c;
        case 0x19fb80u: goto label_19fb80;
        case 0x19fb84u: goto label_19fb84;
        case 0x19fb88u: goto label_19fb88;
        case 0x19fb8cu: goto label_19fb8c;
        case 0x19fb90u: goto label_19fb90;
        case 0x19fb94u: goto label_19fb94;
        case 0x19fb98u: goto label_19fb98;
        case 0x19fb9cu: goto label_19fb9c;
        case 0x19fba0u: goto label_19fba0;
        case 0x19fba4u: goto label_19fba4;
        case 0x19fba8u: goto label_19fba8;
        case 0x19fbacu: goto label_19fbac;
        case 0x19fbb0u: goto label_19fbb0;
        case 0x19fbb4u: goto label_19fbb4;
        case 0x19fbb8u: goto label_19fbb8;
        case 0x19fbbcu: goto label_19fbbc;
        case 0x19fbc0u: goto label_19fbc0;
        case 0x19fbc4u: goto label_19fbc4;
        case 0x19fbc8u: goto label_19fbc8;
        case 0x19fbccu: goto label_19fbcc;
        case 0x19fbd0u: goto label_19fbd0;
        case 0x19fbd4u: goto label_19fbd4;
        case 0x19fbd8u: goto label_19fbd8;
        case 0x19fbdcu: goto label_19fbdc;
        case 0x19fbe0u: goto label_19fbe0;
        case 0x19fbe4u: goto label_19fbe4;
        case 0x19fbe8u: goto label_19fbe8;
        case 0x19fbecu: goto label_19fbec;
        case 0x19fbf0u: goto label_19fbf0;
        case 0x19fbf4u: goto label_19fbf4;
        case 0x19fbf8u: goto label_19fbf8;
        case 0x19fbfcu: goto label_19fbfc;
        case 0x19fc00u: goto label_19fc00;
        case 0x19fc04u: goto label_19fc04;
        case 0x19fc08u: goto label_19fc08;
        case 0x19fc0cu: goto label_19fc0c;
        case 0x19fc10u: goto label_19fc10;
        case 0x19fc14u: goto label_19fc14;
        case 0x19fc18u: goto label_19fc18;
        case 0x19fc1cu: goto label_19fc1c;
        case 0x19fc20u: goto label_19fc20;
        case 0x19fc24u: goto label_19fc24;
        case 0x19fc28u: goto label_19fc28;
        case 0x19fc2cu: goto label_19fc2c;
        case 0x19fc30u: goto label_19fc30;
        case 0x19fc34u: goto label_19fc34;
        case 0x19fc38u: goto label_19fc38;
        case 0x19fc3cu: goto label_19fc3c;
        case 0x19fc40u: goto label_19fc40;
        case 0x19fc44u: goto label_19fc44;
        case 0x19fc48u: goto label_19fc48;
        case 0x19fc4cu: goto label_19fc4c;
        case 0x19fc50u: goto label_19fc50;
        case 0x19fc54u: goto label_19fc54;
        case 0x19fc58u: goto label_19fc58;
        case 0x19fc5cu: goto label_19fc5c;
        case 0x19fc60u: goto label_19fc60;
        case 0x19fc64u: goto label_19fc64;
        case 0x19fc68u: goto label_19fc68;
        case 0x19fc6cu: goto label_19fc6c;
        case 0x19fc70u: goto label_19fc70;
        case 0x19fc74u: goto label_19fc74;
        case 0x19fc78u: goto label_19fc78;
        case 0x19fc7cu: goto label_19fc7c;
        case 0x19fc80u: goto label_19fc80;
        case 0x19fc84u: goto label_19fc84;
        case 0x19fc88u: goto label_19fc88;
        case 0x19fc8cu: goto label_19fc8c;
        case 0x19fc90u: goto label_19fc90;
        case 0x19fc94u: goto label_19fc94;
        case 0x19fc98u: goto label_19fc98;
        case 0x19fc9cu: goto label_19fc9c;
        case 0x19fca0u: goto label_19fca0;
        case 0x19fca4u: goto label_19fca4;
        case 0x19fca8u: goto label_19fca8;
        case 0x19fcacu: goto label_19fcac;
        case 0x19fcb0u: goto label_19fcb0;
        case 0x19fcb4u: goto label_19fcb4;
        case 0x19fcb8u: goto label_19fcb8;
        case 0x19fcbcu: goto label_19fcbc;
        case 0x19fcc0u: goto label_19fcc0;
        case 0x19fcc4u: goto label_19fcc4;
        case 0x19fcc8u: goto label_19fcc8;
        case 0x19fcccu: goto label_19fccc;
        case 0x19fcd0u: goto label_19fcd0;
        case 0x19fcd4u: goto label_19fcd4;
        case 0x19fcd8u: goto label_19fcd8;
        case 0x19fcdcu: goto label_19fcdc;
        case 0x19fce0u: goto label_19fce0;
        case 0x19fce4u: goto label_19fce4;
        case 0x19fce8u: goto label_19fce8;
        case 0x19fcecu: goto label_19fcec;
        case 0x19fcf0u: goto label_19fcf0;
        case 0x19fcf4u: goto label_19fcf4;
        case 0x19fcf8u: goto label_19fcf8;
        case 0x19fcfcu: goto label_19fcfc;
        case 0x19fd00u: goto label_19fd00;
        case 0x19fd04u: goto label_19fd04;
        case 0x19fd08u: goto label_19fd08;
        case 0x19fd0cu: goto label_19fd0c;
        case 0x19fd10u: goto label_19fd10;
        case 0x19fd14u: goto label_19fd14;
        case 0x19fd18u: goto label_19fd18;
        case 0x19fd1cu: goto label_19fd1c;
        case 0x19fd20u: goto label_19fd20;
        case 0x19fd24u: goto label_19fd24;
        case 0x19fd28u: goto label_19fd28;
        case 0x19fd2cu: goto label_19fd2c;
        case 0x19fd30u: goto label_19fd30;
        case 0x19fd34u: goto label_19fd34;
        case 0x19fd38u: goto label_19fd38;
        case 0x19fd3cu: goto label_19fd3c;
        case 0x19fd40u: goto label_19fd40;
        case 0x19fd44u: goto label_19fd44;
        case 0x19fd48u: goto label_19fd48;
        case 0x19fd4cu: goto label_19fd4c;
        case 0x19fd50u: goto label_19fd50;
        case 0x19fd54u: goto label_19fd54;
        case 0x19fd58u: goto label_19fd58;
        case 0x19fd5cu: goto label_19fd5c;
        case 0x19fd60u: goto label_19fd60;
        case 0x19fd64u: goto label_19fd64;
        case 0x19fd68u: goto label_19fd68;
        case 0x19fd6cu: goto label_19fd6c;
        case 0x19fd70u: goto label_19fd70;
        case 0x19fd74u: goto label_19fd74;
        case 0x19fd78u: goto label_19fd78;
        case 0x19fd7cu: goto label_19fd7c;
        case 0x19fd80u: goto label_19fd80;
        case 0x19fd84u: goto label_19fd84;
        case 0x19fd88u: goto label_19fd88;
        case 0x19fd8cu: goto label_19fd8c;
        case 0x19fd90u: goto label_19fd90;
        case 0x19fd94u: goto label_19fd94;
        case 0x19fd98u: goto label_19fd98;
        case 0x19fd9cu: goto label_19fd9c;
        case 0x19fda0u: goto label_19fda0;
        case 0x19fda4u: goto label_19fda4;
        case 0x19fda8u: goto label_19fda8;
        case 0x19fdacu: goto label_19fdac;
        case 0x19fdb0u: goto label_19fdb0;
        case 0x19fdb4u: goto label_19fdb4;
        case 0x19fdb8u: goto label_19fdb8;
        case 0x19fdbcu: goto label_19fdbc;
        case 0x19fdc0u: goto label_19fdc0;
        case 0x19fdc4u: goto label_19fdc4;
        case 0x19fdc8u: goto label_19fdc8;
        case 0x19fdccu: goto label_19fdcc;
        case 0x19fdd0u: goto label_19fdd0;
        case 0x19fdd4u: goto label_19fdd4;
        case 0x19fdd8u: goto label_19fdd8;
        case 0x19fddcu: goto label_19fddc;
        case 0x19fde0u: goto label_19fde0;
        case 0x19fde4u: goto label_19fde4;
        case 0x19fde8u: goto label_19fde8;
        case 0x19fdecu: goto label_19fdec;
        case 0x19fdf0u: goto label_19fdf0;
        case 0x19fdf4u: goto label_19fdf4;
        case 0x19fdf8u: goto label_19fdf8;
        case 0x19fdfcu: goto label_19fdfc;
        case 0x19fe00u: goto label_19fe00;
        case 0x19fe04u: goto label_19fe04;
        case 0x19fe08u: goto label_19fe08;
        case 0x19fe0cu: goto label_19fe0c;
        case 0x19fe10u: goto label_19fe10;
        case 0x19fe14u: goto label_19fe14;
        case 0x19fe18u: goto label_19fe18;
        case 0x19fe1cu: goto label_19fe1c;
        case 0x19fe20u: goto label_19fe20;
        case 0x19fe24u: goto label_19fe24;
        case 0x19fe28u: goto label_19fe28;
        case 0x19fe2cu: goto label_19fe2c;
        case 0x19fe30u: goto label_19fe30;
        case 0x19fe34u: goto label_19fe34;
        case 0x19fe38u: goto label_19fe38;
        case 0x19fe3cu: goto label_19fe3c;
        case 0x19fe40u: goto label_19fe40;
        case 0x19fe44u: goto label_19fe44;
        case 0x19fe48u: goto label_19fe48;
        case 0x19fe4cu: goto label_19fe4c;
        case 0x19fe50u: goto label_19fe50;
        case 0x19fe54u: goto label_19fe54;
        case 0x19fe58u: goto label_19fe58;
        case 0x19fe5cu: goto label_19fe5c;
        case 0x19fe60u: goto label_19fe60;
        case 0x19fe64u: goto label_19fe64;
        case 0x19fe68u: goto label_19fe68;
        case 0x19fe6cu: goto label_19fe6c;
        case 0x19fe70u: goto label_19fe70;
        case 0x19fe74u: goto label_19fe74;
        case 0x19fe78u: goto label_19fe78;
        case 0x19fe7cu: goto label_19fe7c;
        case 0x19fe80u: goto label_19fe80;
        case 0x19fe84u: goto label_19fe84;
        case 0x19fe88u: goto label_19fe88;
        case 0x19fe8cu: goto label_19fe8c;
        case 0x19fe90u: goto label_19fe90;
        case 0x19fe94u: goto label_19fe94;
        case 0x19fe98u: goto label_19fe98;
        case 0x19fe9cu: goto label_19fe9c;
        case 0x19fea0u: goto label_19fea0;
        case 0x19fea4u: goto label_19fea4;
        case 0x19fea8u: goto label_19fea8;
        case 0x19feacu: goto label_19feac;
        case 0x19feb0u: goto label_19feb0;
        case 0x19feb4u: goto label_19feb4;
        case 0x19feb8u: goto label_19feb8;
        case 0x19febcu: goto label_19febc;
        case 0x19fec0u: goto label_19fec0;
        case 0x19fec4u: goto label_19fec4;
        case 0x19fec8u: goto label_19fec8;
        case 0x19feccu: goto label_19fecc;
        case 0x19fed0u: goto label_19fed0;
        case 0x19fed4u: goto label_19fed4;
        case 0x19fed8u: goto label_19fed8;
        case 0x19fedcu: goto label_19fedc;
        case 0x19fee0u: goto label_19fee0;
        case 0x19fee4u: goto label_19fee4;
        case 0x19fee8u: goto label_19fee8;
        case 0x19feecu: goto label_19feec;
        case 0x19fef0u: goto label_19fef0;
        case 0x19fef4u: goto label_19fef4;
        case 0x19fef8u: goto label_19fef8;
        case 0x19fefcu: goto label_19fefc;
        case 0x19ff00u: goto label_19ff00;
        case 0x19ff04u: goto label_19ff04;
        case 0x19ff08u: goto label_19ff08;
        case 0x19ff0cu: goto label_19ff0c;
        case 0x19ff10u: goto label_19ff10;
        case 0x19ff14u: goto label_19ff14;
        case 0x19ff18u: goto label_19ff18;
        case 0x19ff1cu: goto label_19ff1c;
        case 0x19ff20u: goto label_19ff20;
        case 0x19ff24u: goto label_19ff24;
        case 0x19ff28u: goto label_19ff28;
        case 0x19ff2cu: goto label_19ff2c;
        case 0x19ff30u: goto label_19ff30;
        case 0x19ff34u: goto label_19ff34;
        case 0x19ff38u: goto label_19ff38;
        case 0x19ff3cu: goto label_19ff3c;
        case 0x19ff40u: goto label_19ff40;
        case 0x19ff44u: goto label_19ff44;
        case 0x19ff48u: goto label_19ff48;
        case 0x19ff4cu: goto label_19ff4c;
        case 0x19ff50u: goto label_19ff50;
        case 0x19ff54u: goto label_19ff54;
        case 0x19ff58u: goto label_19ff58;
        case 0x19ff5cu: goto label_19ff5c;
        default: return;
    }

label_19f790:
    // 0x19f790: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x19f790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19f794:
    // 0x19f794: 0x0  nop
    ctx->pc = 0x19f794u;
    // NOP
label_19f798:
    // 0x19f798: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x19f798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
label_19f79c:
    // 0x19f79c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_19f7a0:
    if (ctx->pc == 0x19F7A0u) {
        ctx->pc = 0x19F7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F79Cu;
        // 0x19f7a0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F7A4u;
        goto label_19f7a4;
    }
    ctx->pc = 0x19F79Cu;
    {
        const bool branch_taken_0x19f79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F79Cu;
        // 0x19f7a0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f79c) {
            ctx->pc = 0x19F7B0u;
            goto label_19f7b0;
        }
    }
    ctx->pc = 0x19F7A4u;
label_19f7a4:
    // 0x19f7a4: 0xc068b26  jal         func_1A2C98
label_19f7a8:
    if (ctx->pc == 0x19F7A8u) {
        ctx->pc = 0x19F7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7A4u;
        // 0x19f7a8: 0x8e240858  lw          $a0, 0x858($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F7ACu;
        goto label_19f7ac;
    }
    ctx->pc = 0x19F7A4u;
    SET_GPR_U32(ctx, 31, 0x19F7ACu);
    ctx->pc = 0x19F7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F7A4u;
    // 0x19f7a8: 0x8e240858  lw          $a0, 0x858($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C98u;
    { ctx->pc = 0x1a2c98; return; }
    ctx->pc = 0x19F7ACu;
label_19f7ac:
    // 0x19f7ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19f7acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f7b0:
    // 0x19f7b0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19f7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_19f7b4:
    // 0x19f7b4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x19f7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_19f7b8:
    // 0x19f7b8: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x19f7b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_19f7bc:
    // 0x19f7bc: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x19f7bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
label_19f7c0:
    // 0x19f7c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19f7c4:
    // 0x19f7c4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x19f7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_19f7c8:
    // 0x19f7c8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x19f7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_19f7cc:
    // 0x19f7cc: 0x1045fff2  beq         $v0, $a1, . + 4 + (-0xE << 2)
label_19f7d0:
    if (ctx->pc == 0x19F7D0u) {
        ctx->pc = 0x19F7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7CCu;
        // 0x19f7d0: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F7D4u;
        goto label_19f7d4;
    }
    ctx->pc = 0x19F7CCu;
    {
        const bool branch_taken_0x19f7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x19F7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7CCu;
        // 0x19f7d0: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f7cc) {
            ctx->pc = 0x19F798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f798;
        }
    }
    ctx->pc = 0x19F7D4u;
label_19f7d4:
    // 0x19f7d4: 0x10000002  b           . + 4 + (0x2 << 2)
label_19f7d8:
    if (ctx->pc == 0x19F7D8u) {
        ctx->pc = 0x19F7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7D4u;
        // 0x19f7d8: 0x8e220818  lw          $v0, 0x818($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F7DCu;
        goto label_19f7dc;
    }
    ctx->pc = 0x19F7D4u;
    {
        const bool branch_taken_0x19f7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7D4u;
        // 0x19f7d8: 0x8e220818  lw          $v0, 0x818($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f7d4) {
            ctx->pc = 0x19F7E0u;
            goto label_19f7e0;
        }
    }
    ctx->pc = 0x19F7DCu;
label_19f7dc:
    // 0x19f7dc: 0x8e220818  lw          $v0, 0x818($s1)
    ctx->pc = 0x19f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2072)));
label_19f7e0:
    // 0x19f7e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_19f7e4:
    if (ctx->pc == 0x19F7E4u) {
        ctx->pc = 0x19F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7E0u;
        // 0x19f7e4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F7E8u;
        goto label_19f7e8;
    }
    ctx->pc = 0x19F7E0u;
    {
        const bool branch_taken_0x19f7e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7E0u;
        // 0x19f7e4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f7e0) {
            ctx->pc = 0x19F7F8u;
            goto label_19f7f8;
        }
    }
    ctx->pc = 0x19F7E8u;
label_19f7e8:
    // 0x19f7e8: 0x8e22083c  lw          $v0, 0x83C($s1)
    ctx->pc = 0x19f7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2108)));
label_19f7ec:
    // 0x19f7ec: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x19f7ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_19f7f0:
    // 0x19f7f0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_19f7f4:
    if (ctx->pc == 0x19F7F4u) {
        ctx->pc = 0x19F7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7F0u;
        // 0x19f7f4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F7F8u;
        goto label_19f7f8;
    }
    ctx->pc = 0x19F7F0u;
    {
        const bool branch_taken_0x19f7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7F0u;
        // 0x19f7f4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f7f0) {
            ctx->pc = 0x19F824u;
            goto label_19f824;
        }
    }
    ctx->pc = 0x19F7F8u;
label_19f7f8:
    // 0x19f7f8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x19f7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_19f7fc:
    // 0x19f7fc: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x19f7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_19f800:
    // 0x19f800: 0x26655910  addiu       $a1, $s3, 0x5910
    ctx->pc = 0x19f800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 22800));
label_19f804:
    // 0x19f804: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x19f804u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_19f808:
    // 0x19f808: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19f808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19f80c:
    // 0x19f80c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x19f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_19f810:
    // 0x19f810: 0xc067cca  jal         func_19F328
label_19f814:
    if (ctx->pc == 0x19F814u) {
        ctx->pc = 0x19F814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F810u;
        // 0x19f814: 0xae220818  sw          $v0, 0x818($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F818u;
        goto label_19f818;
    }
    ctx->pc = 0x19F810u;
    SET_GPR_U32(ctx, 31, 0x19F818u);
    ctx->pc = 0x19F814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F810u;
    // 0x19f814: 0xae220818  sw          $v0, 0x818($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F328u;
    { ctx->pc = 0x19f328; return; }
    ctx->pc = 0x19F818u;
label_19f818:
    // 0x19f818: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x19f818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_19f81c:
    // 0x19f81c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x19f81cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_19f820:
    // 0x19f820: 0xae220838  sw          $v0, 0x838($s1)
    ctx->pc = 0x19f820u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2104), GPR_U32(ctx, 2));
label_19f824:
    // 0x19f824: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x19f824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_19f828:
    // 0x19f828: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x19f828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_19f82c:
    // 0x19f82c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19f82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_19f830:
    // 0x19f830: 0x2442025  or          $a0, $s2, $a0
    ctx->pc = 0x19f830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
label_19f834:
    // 0x19f834: 0xae25083c  sw          $a1, 0x83C($s1)
    ctx->pc = 0x19f834u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2108), GPR_U32(ctx, 5));
label_19f838:
    // 0x19f838: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x19f838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_19f83c:
    // 0x19f83c: 0x8e300838  lw          $s0, 0x838($s1)
    ctx->pc = 0x19f83cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2104)));
label_19f840:
    // 0x19f840: 0x41f02  srl         $v1, $a0, 28
    ctx->pc = 0x19f840u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 28));
label_19f844:
    // 0x19f844: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x19f844u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_19f848:
    // 0x19f848: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19f848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19f84c:
    // 0x19f84c: 0x26625910  addiu       $v0, $s3, 0x5910
    ctx->pc = 0x19f84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 22800));
label_19f850:
    // 0x19f850: 0xb22823  subu        $a1, $a1, $s2
    ctx->pc = 0x19f850u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_19f854:
    // 0x19f854: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19f854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19f858:
    // 0x19f858: 0xb08006  srlv        $s0, $s0, $a1
    ctx->pc = 0x19f858u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 5) & 0x1F));
label_19f85c:
    // 0x19f85c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19f85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19f860:
    // 0x19f860: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19f860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19f864:
    // 0x19f864: 0xc067cca  jal         func_19F328
label_19f868:
    if (ctx->pc == 0x19F868u) {
        ctx->pc = 0x19F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F864u;
        // 0x19f868: 0xae220818  sw          $v0, 0x818($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F86Cu;
        goto label_19f86c;
    }
    ctx->pc = 0x19F864u;
    SET_GPR_U32(ctx, 31, 0x19F86Cu);
    ctx->pc = 0x19F868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F864u;
    // 0x19f868: 0xae220818  sw          $v0, 0x818($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F328u;
    { ctx->pc = 0x19f328; return; }
    ctx->pc = 0x19F86Cu;
label_19f86c:
    // 0x19f86c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x19f86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_19f870:
    // 0x19f870: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x19f870u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_19f874:
    // 0x19f874: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19f874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19f878:
    // 0x19f878: 0xae220838  sw          $v0, 0x838($s1)
    ctx->pc = 0x19f878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2104), GPR_U32(ctx, 2));
label_19f87c:
    // 0x19f87c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19f87cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19f880:
    // 0x19f880: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x19f880u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19f884:
    // 0x19f884: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19f884u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19f888:
    // 0x19f888: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19f888u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19f88c:
    // 0x19f88c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f88cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19f890:
    // 0x19f890: 0x3e00008  jr          $ra
label_19f894:
    if (ctx->pc == 0x19F894u) {
        ctx->pc = 0x19F894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F890u;
        // 0x19f894: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F898u;
        goto label_19f898;
    }
    ctx->pc = 0x19F890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F890u;
        // 0x19f894: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F898u;
label_19f898:
    // 0x19f898: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19f898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_19f89c:
    // 0x19f89c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19f8a0:
    // 0x19f8a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19f8a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19f8a4:
    // 0x19f8a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19f8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_19f8a8:
    // 0x19f8a8: 0xc067ca0  jal         func_19F280
label_19f8ac:
    if (ctx->pc == 0x19F8ACu) {
        ctx->pc = 0x19F8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F8A8u;
        // 0x19f8ac: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F8B0u;
        goto label_19f8b0;
    }
    ctx->pc = 0x19F8A8u;
    SET_GPR_U32(ctx, 31, 0x19F8B0u);
    ctx->pc = 0x19F8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F8A8u;
    // 0x19f8ac: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    { ctx->pc = 0x19f280; return; }
    ctx->pc = 0x19F8B0u;
label_19f8b0:
    // 0x19f8b0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_19f8b4:
    // 0x19f8b4: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x19f8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
label_19f8b8:
    // 0x19f8b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19f8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19f8bc:
    // 0x19f8bc: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x19f8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_19f8c0:
    // 0x19f8c0: 0x31823  negu        $v1, $v1
    ctx->pc = 0x19f8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_19f8c4:
    // 0x19f8c4: 0x30650007  andi        $a1, $v1, 0x7
    ctx->pc = 0x19f8c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_19f8c8:
    // 0x19f8c8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_19f8cc:
    if (ctx->pc == 0x19F8CCu) {
        ctx->pc = 0x19F8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F8C8u;
        // 0x19f8cc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F8D0u;
        goto label_19f8d0;
    }
    ctx->pc = 0x19F8C8u;
    {
        const bool branch_taken_0x19f8c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F8C8u;
        // 0x19f8cc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f8c8) {
            ctx->pc = 0x19F8E8u;
            goto label_19f8e8;
        }
    }
    ctx->pc = 0x19F8D0u;
label_19f8d0:
    // 0x19f8d0: 0xc067d96  jal         func_19F658
label_19f8d4:
    if (ctx->pc == 0x19F8D4u) {
        ctx->pc = 0x19F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F8D0u;
        // 0x19f8d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F8D8u;
        goto label_19f8d8;
    }
    ctx->pc = 0x19F8D0u;
    SET_GPR_U32(ctx, 31, 0x19F8D8u);
    ctx->pc = 0x19F8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F8D0u;
    // 0x19f8d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F658u;
    { ctx->pc = 0x19f658; return; }
    ctx->pc = 0x19F8D8u;
label_19f8d8:
    // 0x19f8d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_19f8dc:
    if (ctx->pc == 0x19F8DCu) {
        ctx->pc = 0x19F8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F8D8u;
        // 0x19f8dc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F8E0u;
        goto label_19f8e0;
    }
    ctx->pc = 0x19F8D8u;
    {
        const bool branch_taken_0x19f8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F8D8u;
        // 0x19f8dc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f8d8) {
            ctx->pc = 0x19F8E8u;
            goto label_19f8e8;
        }
    }
    ctx->pc = 0x19F8E0u;
label_19f8e0:
    // 0x19f8e0: 0xc067d96  jal         func_19F658
label_19f8e4:
    if (ctx->pc == 0x19F8E4u) {
        ctx->pc = 0x19F8E8u;
        goto label_19f8e8;
    }
    ctx->pc = 0x19F8E0u;
    SET_GPR_U32(ctx, 31, 0x19F8E8u);
    ctx->pc = 0x19F658u;
    { ctx->pc = 0x19f658; return; }
    ctx->pc = 0x19F8E8u;
label_19f8e8:
    // 0x19f8e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19f8ec:
    // 0x19f8ec: 0xc067d54  jal         func_19F550
label_19f8f0:
    if (ctx->pc == 0x19F8F0u) {
        ctx->pc = 0x19F8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F8ECu;
        // 0x19f8f0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F8F4u;
        goto label_19f8f4;
    }
    ctx->pc = 0x19F8ECu;
    SET_GPR_U32(ctx, 31, 0x19F8F4u);
    ctx->pc = 0x19F8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F8ECu;
    // 0x19f8f0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F550u;
    { ctx->pc = 0x19f550; return; }
    ctx->pc = 0x19F8F4u;
label_19f8f4:
    // 0x19f8f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19f8f8:
    // 0x19f8f8: 0x1451fff9  bne         $v0, $s1, . + 4 + (-0x7 << 2)
label_19f8fc:
    if (ctx->pc == 0x19F8FCu) {
        ctx->pc = 0x19F8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F8F8u;
        // 0x19f8fc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F900u;
        goto label_19f900;
    }
    ctx->pc = 0x19F8F8u;
    {
        const bool branch_taken_0x19f8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x19F8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F8F8u;
        // 0x19f8fc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f8f8) {
            ctx->pc = 0x19F8E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f8e0;
        }
    }
    ctx->pc = 0x19F900u;
label_19f900:
    // 0x19f900: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19f900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19f904:
    // 0x19f904: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19f904u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19f908:
    // 0x19f908: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19f90c:
    // 0x19f90c: 0x3e00008  jr          $ra
label_19f910:
    if (ctx->pc == 0x19F910u) {
        ctx->pc = 0x19F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F90Cu;
        // 0x19f910: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F914u;
        goto label_19f914;
    }
    ctx->pc = 0x19F90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F90Cu;
        // 0x19f910: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F914u;
label_19f914:
    // 0x19f914: 0x0  nop
    ctx->pc = 0x19f914u;
    // NOP
label_19f918:
    // 0x19f918: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19f918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_19f91c:
    // 0x19f91c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x19f91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_19f920:
    // 0x19f920: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19f924:
    // 0x19f924: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19f924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19f928:
    // 0x19f928: 0xc067dd2  jal         func_19F748
label_19f92c:
    if (ctx->pc == 0x19F92Cu) {
        ctx->pc = 0x19F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F928u;
        // 0x19f92c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F930u;
        goto label_19f930;
    }
    ctx->pc = 0x19F928u;
    SET_GPR_U32(ctx, 31, 0x19F930u);
    ctx->pc = 0x19F92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F928u;
    // 0x19f92c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19F930u;
label_19f930:
    // 0x19f930: 0xae0201b4  sw          $v0, 0x1B4($s0)
    ctx->pc = 0x19f930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
label_19f934:
    // 0x19f934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19f938:
    // 0x19f938: 0xc067dd2  jal         func_19F748
label_19f93c:
    if (ctx->pc == 0x19F93Cu) {
        ctx->pc = 0x19F93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F938u;
        // 0x19f93c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F940u;
        goto label_19f940;
    }
    ctx->pc = 0x19F938u;
    SET_GPR_U32(ctx, 31, 0x19F940u);
    ctx->pc = 0x19F93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F938u;
    // 0x19f93c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19F940u;
label_19f940:
    // 0x19f940: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_19f944:
    if (ctx->pc == 0x19F944u) {
        ctx->pc = 0x19F944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F940u;
        // 0x19f944: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F948u;
        goto label_19f948;
    }
    ctx->pc = 0x19F940u;
    {
        const bool branch_taken_0x19f940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F940u;
        // 0x19f944: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f940) {
            ctx->pc = 0x19F96Cu;
            goto label_19f96c;
        }
    }
    ctx->pc = 0x19F948u;
label_19f948:
    // 0x19f948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19f94c:
    // 0x19f94c: 0xc067dd2  jal         func_19F748
label_19f950:
    if (ctx->pc == 0x19F950u) {
        ctx->pc = 0x19F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F94Cu;
        // 0x19f950: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F954u;
        goto label_19f954;
    }
    ctx->pc = 0x19F94Cu;
    SET_GPR_U32(ctx, 31, 0x19F954u);
    ctx->pc = 0x19F950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F94Cu;
    // 0x19f950: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19F954u;
label_19f954:
    // 0x19f954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19f958:
    // 0x19f958: 0xc067d96  jal         func_19F658
label_19f95c:
    if (ctx->pc == 0x19F95Cu) {
        ctx->pc = 0x19F95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F958u;
        // 0x19f95c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F960u;
        goto label_19f960;
    }
    ctx->pc = 0x19F958u;
    SET_GPR_U32(ctx, 31, 0x19F960u);
    ctx->pc = 0x19F95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F958u;
    // 0x19f95c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F658u;
    { ctx->pc = 0x19f658; return; }
    ctx->pc = 0x19F960u;
label_19f960:
    // 0x19f960: 0xc067f9c  jal         func_19FE70
label_19f964:
    if (ctx->pc == 0x19F964u) {
        ctx->pc = 0x19F964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F960u;
        // 0x19f964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F968u;
        goto label_19f968;
    }
    ctx->pc = 0x19F960u;
    SET_GPR_U32(ctx, 31, 0x19F968u);
    ctx->pc = 0x19F964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F960u;
    // 0x19f964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FE70u;
    goto label_19fe70;
    ctx->pc = 0x19F968u;
label_19f968:
    // 0x19f968: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19f968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19f96c:
    // 0x19f96c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19f96cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f970:
    // 0x19f970: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19f974:
    // 0x19f974: 0x3e00008  jr          $ra
label_19f978:
    if (ctx->pc == 0x19F978u) {
        ctx->pc = 0x19F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F974u;
        // 0x19f978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F97Cu;
        goto label_19f97c;
    }
    ctx->pc = 0x19F974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F974u;
        // 0x19f978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F97Cu;
label_19f97c:
    // 0x19f97c: 0x0  nop
    ctx->pc = 0x19f97cu;
    // NOP
label_19f980:
    // 0x19f980: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x19f980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_19f984:
    // 0x19f984: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x19f984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_19f988:
    // 0x19f988: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x19f988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_19f98c:
    // 0x19f98c: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x19f98cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_19f990:
    // 0x19f990: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x19f990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_19f994:
    // 0x19f994: 0x241501b3  addiu       $s5, $zero, 0x1B3
    ctx->pc = 0x19f994u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 435));
label_19f998:
    // 0x19f998: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x19f998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_19f99c:
    // 0x19f99c: 0x24140100  addiu       $s4, $zero, 0x100
    ctx->pc = 0x19f99cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_19f9a0:
    // 0x19f9a0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x19f9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_19f9a4:
    // 0x19f9a4: 0x241301b7  addiu       $s3, $zero, 0x1B7
    ctx->pc = 0x19f9a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
label_19f9a8:
    // 0x19f9a8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x19f9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_19f9ac:
    // 0x19f9ac: 0x241201b8  addiu       $s2, $zero, 0x1B8
    ctx->pc = 0x19f9acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 440));
label_19f9b0:
    // 0x19f9b0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x19f9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_19f9b4:
    // 0x19f9b4: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x19f9b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19f9b8:
    // 0x19f9b8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x19f9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_19f9bc:
    // 0x19f9bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19f9bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19f9c0:
    // 0x19f9c0: 0xc067e26  jal         func_19F898
label_19f9c4:
    if (ctx->pc == 0x19F9C4u) {
        ctx->pc = 0x19F9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9C0u;
        // 0x19f9c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F9C8u;
        goto label_19f9c8;
    }
    ctx->pc = 0x19F9C0u;
    SET_GPR_U32(ctx, 31, 0x19F9C8u);
    ctx->pc = 0x19F9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F9C0u;
    // 0x19f9c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F898u;
    goto label_19f898;
    ctx->pc = 0x19F9C8u;
label_19f9c8:
    // 0x19f9c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19f9cc:
    // 0x19f9cc: 0xc067dd2  jal         func_19F748
label_19f9d0:
    if (ctx->pc == 0x19F9D0u) {
        ctx->pc = 0x19F9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9CCu;
        // 0x19f9d0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F9D4u;
        goto label_19f9d4;
    }
    ctx->pc = 0x19F9CCu;
    SET_GPR_U32(ctx, 31, 0x19F9D4u);
    ctx->pc = 0x19F9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F9CCu;
    // 0x19f9d0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19F9D4u;
label_19f9d4:
    // 0x19f9d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19f9d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19f9d8:
    // 0x19f9d8: 0x1075000d  beq         $v1, $s5, . + 4 + (0xD << 2)
label_19f9dc:
    if (ctx->pc == 0x19F9DCu) {
        ctx->pc = 0x19F9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9D8u;
        // 0x19f9dc: 0x2c6201b4  sltiu       $v0, $v1, 0x1B4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)436) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F9E0u;
        goto label_19f9e0;
    }
    ctx->pc = 0x19F9D8u;
    {
        const bool branch_taken_0x19f9d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x19F9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9D8u;
        // 0x19f9dc: 0x2c6201b4  sltiu       $v0, $v1, 0x1B4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)436) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f9d8) {
            ctx->pc = 0x19FA10u;
            goto label_19fa10;
        }
    }
    ctx->pc = 0x19F9E0u;
label_19f9e0:
    // 0x19f9e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19f9e4:
    if (ctx->pc == 0x19F9E4u) {
        ctx->pc = 0x19F9E8u;
        goto label_19f9e8;
    }
    ctx->pc = 0x19F9E0u;
    {
        const bool branch_taken_0x19f9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f9e0) {
            ctx->pc = 0x19F9F8u;
            goto label_19f9f8;
        }
    }
    ctx->pc = 0x19F9E8u;
label_19f9e8:
    // 0x19f9e8: 0x10740011  beq         $v1, $s4, . + 4 + (0x11 << 2)
label_19f9ec:
    if (ctx->pc == 0x19F9ECu) {
        ctx->pc = 0x19F9F0u;
        goto label_19f9f0;
    }
    ctx->pc = 0x19F9E8u;
    {
        const bool branch_taken_0x19f9e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x19f9e8) {
            ctx->pc = 0x19FA30u;
            goto label_19fa30;
        }
    }
    ctx->pc = 0x19F9F0u;
label_19f9f0:
    // 0x19f9f0: 0x1000fff3  b           . + 4 + (-0xD << 2)
label_19f9f4:
    if (ctx->pc == 0x19F9F4u) {
        ctx->pc = 0x19F9F8u;
        goto label_19f9f8;
    }
    ctx->pc = 0x19F9F0u;
    {
        const bool branch_taken_0x19f9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f9f0) {
            ctx->pc = 0x19F9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f9c0;
        }
    }
    ctx->pc = 0x19F9F8u;
label_19f9f8:
    // 0x19f9f8: 0x1073001a  beq         $v1, $s3, . + 4 + (0x1A << 2)
label_19f9fc:
    if (ctx->pc == 0x19F9FCu) {
        ctx->pc = 0x19F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9F8u;
        // 0x19f9fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FA00u;
        goto label_19fa00;
    }
    ctx->pc = 0x19F9F8u;
    {
        const bool branch_taken_0x19f9f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x19F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9F8u;
        // 0x19f9fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f9f8) {
            ctx->pc = 0x19FA64u;
            goto label_19fa64;
        }
    }
    ctx->pc = 0x19FA00u;
label_19fa00:
    // 0x19fa00: 0x10720007  beq         $v1, $s2, . + 4 + (0x7 << 2)
label_19fa04:
    if (ctx->pc == 0x19FA04u) {
        ctx->pc = 0x19FA08u;
        goto label_19fa08;
    }
    ctx->pc = 0x19FA00u;
    {
        const bool branch_taken_0x19fa00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x19fa00) {
            ctx->pc = 0x19FA20u;
            goto label_19fa20;
        }
    }
    ctx->pc = 0x19FA08u;
label_19fa08:
    // 0x19fa08: 0x1000ffed  b           . + 4 + (-0x13 << 2)
label_19fa0c:
    if (ctx->pc == 0x19FA0Cu) {
        ctx->pc = 0x19FA10u;
        goto label_19fa10;
    }
    ctx->pc = 0x19FA08u;
    {
        const bool branch_taken_0x19fa08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fa08) {
            ctx->pc = 0x19F9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f9c0;
        }
    }
    ctx->pc = 0x19FA10u;
label_19fa10:
    // 0x19fa10: 0xc068d86  jal         func_1A3618
label_19fa14:
    if (ctx->pc == 0x19FA14u) {
        ctx->pc = 0x19FA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA10u;
        // 0x19fa14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FA18u;
        goto label_19fa18;
    }
    ctx->pc = 0x19FA10u;
    SET_GPR_U32(ctx, 31, 0x19FA18u);
    ctx->pc = 0x19FA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FA10u;
    // 0x19fa14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3618u;
    { ctx->pc = 0x1a3618; return; }
    ctx->pc = 0x19FA18u;
label_19fa18:
    // 0x19fa18: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
label_19fa1c:
    if (ctx->pc == 0x19FA1Cu) {
        ctx->pc = 0x19FA20u;
        goto label_19fa20;
    }
    ctx->pc = 0x19FA18u;
    {
        const bool branch_taken_0x19fa18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fa18) {
            ctx->pc = 0x19F9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f9c0;
        }
    }
    ctx->pc = 0x19FA20u;
label_19fa20:
    // 0x19fa20: 0xc067fcc  jal         func_19FF30
label_19fa24:
    if (ctx->pc == 0x19FA24u) {
        ctx->pc = 0x19FA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA20u;
        // 0x19fa24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FA28u;
        goto label_19fa28;
    }
    ctx->pc = 0x19FA20u;
    SET_GPR_U32(ctx, 31, 0x19FA28u);
    ctx->pc = 0x19FA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FA20u;
    // 0x19fa24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF30u;
    goto label_19ff30;
    ctx->pc = 0x19FA28u;
label_19fa28:
    // 0x19fa28: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
label_19fa2c:
    if (ctx->pc == 0x19FA2Cu) {
        ctx->pc = 0x19FA30u;
        goto label_19fa30;
    }
    ctx->pc = 0x19FA28u;
    {
        const bool branch_taken_0x19fa28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fa28) {
            ctx->pc = 0x19F9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f9c0;
        }
    }
    ctx->pc = 0x19FA30u;
label_19fa30:
    // 0x19fa30: 0xc067ea4  jal         func_19FA90
label_19fa34:
    if (ctx->pc == 0x19FA34u) {
        ctx->pc = 0x19FA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA30u;
        // 0x19fa34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FA38u;
        goto label_19fa38;
    }
    ctx->pc = 0x19FA30u;
    SET_GPR_U32(ctx, 31, 0x19FA38u);
    ctx->pc = 0x19FA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FA30u;
    // 0x19fa34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FA90u;
    goto label_19fa90;
    ctx->pc = 0x19FA38u;
label_19fa38:
    // 0x19fa38: 0x8e040858  lw          $a0, 0x858($s0)
    ctx->pc = 0x19fa38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
label_19fa3c:
    // 0x19fa3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19fa3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19fa40:
    // 0x19fa40: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x19fa40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
label_19fa44:
    // 0x19fa44: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19fa44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19fa48:
    // 0x19fa48: 0xc068b12  jal         func_1A2C48
label_19fa4c:
    if (ctx->pc == 0x19FA4Cu) {
        ctx->pc = 0x19FA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA48u;
        // 0x19fa4c: 0xffb10008  sd          $s1, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FA50u;
        goto label_19fa50;
    }
    ctx->pc = 0x19FA48u;
    SET_GPR_U32(ctx, 31, 0x19FA50u);
    ctx->pc = 0x19FA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FA48u;
    // 0x19fa4c: 0xffb10008  sd          $s1, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C48u;
    { ctx->pc = 0x1a2c48; return; }
    ctx->pc = 0x19FA50u;
label_19fa50:
    // 0x19fa50: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x19fa50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19fa54:
    // 0x19fa54: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x19fa54u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19fa58:
    // 0x19fa58: 0xfe020830  sd          $v0, 0x830($s0)
    ctx->pc = 0x19fa58u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2096), GPR_U64(ctx, 2));
label_19fa5c:
    // 0x19fa5c: 0xfe030828  sd          $v1, 0x828($s0)
    ctx->pc = 0x19fa5cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2088), GPR_U64(ctx, 3));
label_19fa60:
    // 0x19fa60: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x19fa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_19fa64:
    // 0x19fa64: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x19fa64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_19fa68:
    // 0x19fa68: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x19fa68u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_19fa6c:
    // 0x19fa6c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x19fa6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_19fa70:
    // 0x19fa70: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x19fa70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_19fa74:
    // 0x19fa74: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x19fa74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19fa78:
    // 0x19fa78: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x19fa78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19fa7c:
    // 0x19fa7c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x19fa7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19fa80:
    // 0x19fa80: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x19fa80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19fa84:
    // 0x19fa84: 0x3e00008  jr          $ra
label_19fa88:
    if (ctx->pc == 0x19FA88u) {
        ctx->pc = 0x19FA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA84u;
        // 0x19fa88: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FA8Cu;
        goto label_19fa8c;
    }
    ctx->pc = 0x19FA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA84u;
        // 0x19fa88: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FA84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FA8Cu;
label_19fa8c:
    // 0x19fa8c: 0x0  nop
    ctx->pc = 0x19fa8cu;
    // NOP
label_19fa90:
    // 0x19fa90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19fa90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_19fa94:
    // 0x19fa94: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x19fa94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_19fa98:
    // 0x19fa98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19fa98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19fa9c:
    // 0x19fa9c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19fa9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19faa0:
    // 0x19faa0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19faa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_19faa4:
    // 0x19faa4: 0xc067dd2  jal         func_19F748
label_19faa8:
    if (ctx->pc == 0x19FAA8u) {
        ctx->pc = 0x19FAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FAA4u;
        // 0x19faa8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FAACu;
        goto label_19faac;
    }
    ctx->pc = 0x19FAA4u;
    SET_GPR_U32(ctx, 31, 0x19FAACu);
    ctx->pc = 0x19FAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FAA4u;
    // 0x19faa8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FAACu;
label_19faac:
    // 0x19faac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19faacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19fab0:
    // 0x19fab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fab4:
    // 0x19fab4: 0xc067dd2  jal         func_19F748
label_19fab8:
    if (ctx->pc == 0x19FAB8u) {
        ctx->pc = 0x19FAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FAB4u;
        // 0x19fab8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FABCu;
        goto label_19fabc;
    }
    ctx->pc = 0x19FAB4u;
    SET_GPR_U32(ctx, 31, 0x19FABCu);
    ctx->pc = 0x19FAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FAB4u;
    // 0x19fab8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FABCu;
label_19fabc:
    // 0x19fabc: 0xae020150  sw          $v0, 0x150($s0)
    ctx->pc = 0x19fabcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
label_19fac0:
    // 0x19fac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fac4:
    // 0x19fac4: 0xc067dd2  jal         func_19F748
label_19fac8:
    if (ctx->pc == 0x19FAC8u) {
        ctx->pc = 0x19FAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FAC4u;
        // 0x19fac8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FACCu;
        goto label_19facc;
    }
    ctx->pc = 0x19FAC4u;
    SET_GPR_U32(ctx, 31, 0x19FACCu);
    ctx->pc = 0x19FAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FAC4u;
    // 0x19fac8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FACCu;
label_19facc:
    // 0x19facc: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x19faccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_19fad0:
    // 0x19fad0: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x19fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_19fad4:
    // 0x19fad4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x19fad4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_19fad8:
    // 0x19fad8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_19fadc:
    if (ctx->pc == 0x19FADCu) {
        ctx->pc = 0x19FADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FAD8u;
        // 0x19fadc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FAE0u;
        goto label_19fae0;
    }
    ctx->pc = 0x19FAD8u;
    {
        const bool branch_taken_0x19fad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FAD8u;
        // 0x19fadc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fad8) {
            ctx->pc = 0x19FB00u;
            goto label_19fb00;
        }
    }
    ctx->pc = 0x19FAE0u;
label_19fae0:
    // 0x19fae0: 0xc067dd2  jal         func_19F748
label_19fae4:
    if (ctx->pc == 0x19FAE4u) {
        ctx->pc = 0x19FAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FAE0u;
        // 0x19fae4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FAE8u;
        goto label_19fae8;
    }
    ctx->pc = 0x19FAE0u;
    SET_GPR_U32(ctx, 31, 0x19FAE8u);
    ctx->pc = 0x19FAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FAE0u;
    // 0x19fae4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FAE8u;
label_19fae8:
    // 0x19fae8: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x19fae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
label_19faec:
    // 0x19faec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19faecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19faf0:
    // 0x19faf0: 0xc067dd2  jal         func_19F748
label_19faf4:
    if (ctx->pc == 0x19FAF4u) {
        ctx->pc = 0x19FAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FAF0u;
        // 0x19faf4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FAF8u;
        goto label_19faf8;
    }
    ctx->pc = 0x19FAF0u;
    SET_GPR_U32(ctx, 31, 0x19FAF8u);
    ctx->pc = 0x19FAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FAF0u;
    // 0x19faf4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FAF8u;
label_19faf8:
    // 0x19faf8: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x19faf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
label_19fafc:
    // 0x19fafc: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x19fafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_19fb00:
    // 0x19fb00: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19fb04:
    // 0x19fb04: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_19fb08:
    if (ctx->pc == 0x19FB08u) {
        ctx->pc = 0x19FB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB04u;
        // 0x19fb08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FB0Cu;
        goto label_19fb0c;
    }
    ctx->pc = 0x19FB04u;
    {
        const bool branch_taken_0x19fb04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19FB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB04u;
        // 0x19fb08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb04) {
            ctx->pc = 0x19FB28u;
            goto label_19fb28;
        }
    }
    ctx->pc = 0x19FB0Cu;
label_19fb0c:
    // 0x19fb0c: 0xc067dd2  jal         func_19F748
label_19fb10:
    if (ctx->pc == 0x19FB10u) {
        ctx->pc = 0x19FB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB0Cu;
        // 0x19fb10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FB14u;
        goto label_19fb14;
    }
    ctx->pc = 0x19FB0Cu;
    SET_GPR_U32(ctx, 31, 0x19FB14u);
    ctx->pc = 0x19FB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FB0Cu;
    // 0x19fb10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FB14u;
label_19fb14:
    // 0x19fb14: 0xae02015c  sw          $v0, 0x15C($s0)
    ctx->pc = 0x19fb14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 2));
label_19fb18:
    // 0x19fb18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fb1c:
    // 0x19fb1c: 0xc067dd2  jal         func_19F748
label_19fb20:
    if (ctx->pc == 0x19FB20u) {
        ctx->pc = 0x19FB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB1Cu;
        // 0x19fb20: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FB24u;
        goto label_19fb24;
    }
    ctx->pc = 0x19FB1Cu;
    SET_GPR_U32(ctx, 31, 0x19FB24u);
    ctx->pc = 0x19FB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FB1Cu;
    // 0x19fb20: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FB24u;
label_19fb24:
    // 0x19fb24: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x19fb24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
label_19fb28:
    // 0x19fb28: 0xc067f9c  jal         func_19FE70
label_19fb2c:
    if (ctx->pc == 0x19FB2Cu) {
        ctx->pc = 0x19FB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB28u;
        // 0x19fb2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FB30u;
        goto label_19fb30;
    }
    ctx->pc = 0x19FB28u;
    SET_GPR_U32(ctx, 31, 0x19FB30u);
    ctx->pc = 0x19FB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FB28u;
    // 0x19fb2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FE70u;
    goto label_19fe70;
    ctx->pc = 0x19FB30u;
label_19fb30:
    // 0x19fb30: 0xc067ed6  jal         func_19FB58
label_19fb34:
    if (ctx->pc == 0x19FB34u) {
        ctx->pc = 0x19FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB30u;
        // 0x19fb34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FB38u;
        goto label_19fb38;
    }
    ctx->pc = 0x19FB30u;
    SET_GPR_U32(ctx, 31, 0x19FB38u);
    ctx->pc = 0x19FB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FB30u;
    // 0x19fb34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FB58u;
    goto label_19fb58;
    ctx->pc = 0x19FB38u;
label_19fb38:
    // 0x19fb38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fb3c:
    // 0x19fb3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19fb3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19fb40:
    // 0x19fb40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19fb40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19fb44:
    // 0x19fb44: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19fb44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19fb48:
    // 0x19fb48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19fb48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19fb4c:
    // 0x19fb4c: 0x8067fae  j           func_19FEB8
label_19fb50:
    if (ctx->pc == 0x19FB50u) {
        ctx->pc = 0x19FB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB4Cu;
        // 0x19fb50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FB54u;
        goto label_19fb54;
    }
    ctx->pc = 0x19FB4Cu;
    ctx->pc = 0x19FB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FB4Cu;
    // 0x19fb50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FEB8u;
    goto label_19feb8;
    ctx->pc = 0x19FB54u;
label_19fb54:
    // 0x19fb54: 0x0  nop
    ctx->pc = 0x19fb54u;
    // NOP
label_19fb58:
    // 0x19fb58: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x19fb58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_19fb5c:
    // 0x19fb5c: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x19fb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_19fb60:
    // 0x19fb60: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x19fb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_19fb64:
    // 0x19fb64: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x19fb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_19fb68:
    // 0x19fb68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19fb68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19fb6c:
    // 0x19fb6c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x19fb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_19fb70:
    // 0x19fb70: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x19fb70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_19fb74:
    // 0x19fb74: 0x241301b2  addiu       $s3, $zero, 0x1B2
    ctx->pc = 0x19fb74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 434));
label_19fb78:
    // 0x19fb78: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x19fb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_19fb7c:
    // 0x19fb7c: 0x241101b5  addiu       $s1, $zero, 0x1B5
    ctx->pc = 0x19fb7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 437));
label_19fb80:
    // 0x19fb80: 0x2447a178  addiu       $a3, $v0, -0x5E88
    ctx->pc = 0x19fb80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943096));
label_19fb84:
    // 0x19fb84: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x19fb84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_19fb88:
    // 0x19fb88: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x19fb88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_19fb8c:
    // 0x19fb8c: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x19fb8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_19fb90:
    // 0x19fb90: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x19fb90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_19fb94:
    // 0x19fb94: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x19fb94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_19fb98:
    // 0x19fb98: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x19fb98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_19fb9c:
    // 0x19fb9c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x19fb9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19fba0:
    // 0x19fba0: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x19fba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19fba4:
    // 0x19fba4: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x19fba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19fba8:
    // 0x19fba8: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x19fba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19fbac:
    // 0x19fbac: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x19fbacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19fbb0:
    // 0x19fbb0: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x19fbb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19fbb4:
    // 0x19fbb4: 0x68e3001f  ldl         $v1, 0x1F($a3)
    ctx->pc = 0x19fbb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_19fbb8:
    // 0x19fbb8: 0x6ce30018  ldr         $v1, 0x18($a3)
    ctx->pc = 0x19fbb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_19fbbc:
    // 0x19fbbc: 0x68e50027  ldl         $a1, 0x27($a3)
    ctx->pc = 0x19fbbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_19fbc0:
    // 0x19fbc0: 0x6ce50020  ldr         $a1, 0x20($a3)
    ctx->pc = 0x19fbc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_19fbc4:
    // 0x19fbc4: 0x8ce60028  lw          $a2, 0x28($a3)
    ctx->pc = 0x19fbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_19fbc8:
    // 0x19fbc8: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x19fbc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19fbcc:
    // 0x19fbcc: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x19fbccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19fbd0:
    // 0x19fbd0: 0xb3a50027  sdl         $a1, 0x27($sp)
    ctx->pc = 0x19fbd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19fbd4:
    // 0x19fbd4: 0xb7a50020  sdr         $a1, 0x20($sp)
    ctx->pc = 0x19fbd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19fbd8:
    // 0x19fbd8: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x19fbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
label_19fbdc:
    // 0x19fbdc: 0xc067e26  jal         func_19F898
label_19fbe0:
    if (ctx->pc == 0x19FBE0u) {
        ctx->pc = 0x19FBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FBDCu;
        // 0x19fbe0: 0x2412000a  addiu       $s2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FBE4u;
        goto label_19fbe4;
    }
    ctx->pc = 0x19FBDCu;
    SET_GPR_U32(ctx, 31, 0x19FBE4u);
    ctx->pc = 0x19FBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FBDCu;
    // 0x19fbe0: 0x2412000a  addiu       $s2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F898u;
    goto label_19f898;
    ctx->pc = 0x19FBE4u;
label_19fbe4:
    // 0x19fbe4: 0x10000019  b           . + 4 + (0x19 << 2)
label_19fbe8:
    if (ctx->pc == 0x19FBE8u) {
        ctx->pc = 0x19FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FBE4u;
        // 0x19fbe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FBECu;
        goto label_19fbec;
    }
    ctx->pc = 0x19FBE4u;
    {
        const bool branch_taken_0x19fbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FBE4u;
        // 0x19fbe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fbe4) {
            ctx->pc = 0x19FC4Cu;
            goto label_19fc4c;
        }
    }
    ctx->pc = 0x19FBECu;
label_19fbec:
    // 0x19fbec: 0x0  nop
    ctx->pc = 0x19fbecu;
    // NOP
label_19fbf0:
    // 0x19fbf0: 0x54510011  bnel        $v0, $s1, . + 4 + (0x11 << 2)
label_19fbf4:
    if (ctx->pc == 0x19FBF4u) {
        ctx->pc = 0x19FBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FBF0u;
        // 0x19fbf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FBF8u;
        goto label_19fbf8;
    }
    ctx->pc = 0x19FBF0u;
    {
        const bool branch_taken_0x19fbf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x19fbf0) {
            ctx->pc = 0x19FBF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FBF0u;
            // 0x19fbf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FC38u;
            goto label_19fc38;
        }
    }
    ctx->pc = 0x19FBF8u;
label_19fbf8:
    // 0x19fbf8: 0xc067d96  jal         func_19F658
label_19fbfc:
    if (ctx->pc == 0x19FBFCu) {
        ctx->pc = 0x19FC00u;
        goto label_19fc00;
    }
    ctx->pc = 0x19FBF8u;
    SET_GPR_U32(ctx, 31, 0x19FC00u);
    ctx->pc = 0x19F658u;
    { ctx->pc = 0x19f658; return; }
    ctx->pc = 0x19FC00u;
label_19fc00:
    // 0x19fc00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fc04:
    // 0x19fc04: 0xc067dd2  jal         func_19F748
label_19fc08:
    if (ctx->pc == 0x19FC08u) {
        ctx->pc = 0x19FC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC04u;
        // 0x19fc08: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC0Cu;
        goto label_19fc0c;
    }
    ctx->pc = 0x19FC04u;
    SET_GPR_U32(ctx, 31, 0x19FC0Cu);
    ctx->pc = 0x19FC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FC04u;
    // 0x19fc08: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FC0Cu;
label_19fc0c:
    // 0x19fc0c: 0x242182b  sltu        $v1, $s2, $v0
    ctx->pc = 0x19fc0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_19fc10:
    // 0x19fc10: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x19fc10u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_19fc14:
    // 0x19fc14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19fc14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19fc18:
    // 0x19fc18: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x19fc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_19fc1c:
    // 0x19fc1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19fc20:
    // 0x19fc20: 0x40f809  jalr        $v0
label_19fc24:
    if (ctx->pc == 0x19FC24u) {
        ctx->pc = 0x19FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC20u;
        // 0x19fc24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC28u;
        goto label_19fc28;
    }
    ctx->pc = 0x19FC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19FC28u);
        ctx->pc = 0x19FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC20u;
        // 0x19fc24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FC20u, 0x19FC28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19FC28u;
label_19fc28:
    // 0x19fc28: 0xc067e26  jal         func_19F898
label_19fc2c:
    if (ctx->pc == 0x19FC2Cu) {
        ctx->pc = 0x19FC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC28u;
        // 0x19fc2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC30u;
        goto label_19fc30;
    }
    ctx->pc = 0x19FC28u;
    SET_GPR_U32(ctx, 31, 0x19FC30u);
    ctx->pc = 0x19FC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FC28u;
    // 0x19fc2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F898u;
    goto label_19f898;
    ctx->pc = 0x19FC30u;
label_19fc30:
    // 0x19fc30: 0x10000006  b           . + 4 + (0x6 << 2)
label_19fc34:
    if (ctx->pc == 0x19FC34u) {
        ctx->pc = 0x19FC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC30u;
        // 0x19fc34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC38u;
        goto label_19fc38;
    }
    ctx->pc = 0x19FC30u;
    {
        const bool branch_taken_0x19fc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC30u;
        // 0x19fc34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc30) {
            ctx->pc = 0x19FC4Cu;
            goto label_19fc4c;
        }
    }
    ctx->pc = 0x19FC38u;
label_19fc38:
    // 0x19fc38: 0xc067d96  jal         func_19F658
label_19fc3c:
    if (ctx->pc == 0x19FC3Cu) {
        ctx->pc = 0x19FC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC38u;
        // 0x19fc3c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC40u;
        goto label_19fc40;
    }
    ctx->pc = 0x19FC38u;
    SET_GPR_U32(ctx, 31, 0x19FC40u);
    ctx->pc = 0x19FC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FC38u;
    // 0x19fc3c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F658u;
    { ctx->pc = 0x19f658; return; }
    ctx->pc = 0x19FC40u;
label_19fc40:
    // 0x19fc40: 0xc067e26  jal         func_19F898
label_19fc44:
    if (ctx->pc == 0x19FC44u) {
        ctx->pc = 0x19FC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC40u;
        // 0x19fc44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC48u;
        goto label_19fc48;
    }
    ctx->pc = 0x19FC40u;
    SET_GPR_U32(ctx, 31, 0x19FC48u);
    ctx->pc = 0x19FC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FC40u;
    // 0x19fc44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F898u;
    goto label_19f898;
    ctx->pc = 0x19FC48u;
label_19fc48:
    // 0x19fc48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fc4c:
    // 0x19fc4c: 0xc067d54  jal         func_19F550
label_19fc50:
    if (ctx->pc == 0x19FC50u) {
        ctx->pc = 0x19FC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC4Cu;
        // 0x19fc50: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC54u;
        goto label_19fc54;
    }
    ctx->pc = 0x19FC4Cu;
    SET_GPR_U32(ctx, 31, 0x19FC54u);
    ctx->pc = 0x19FC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FC4Cu;
    // 0x19fc50: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F550u;
    { ctx->pc = 0x19f550; return; }
    ctx->pc = 0x19FC54u;
label_19fc54:
    // 0x19fc54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fc58:
    // 0x19fc58: 0x1051ffe7  beq         $v0, $s1, . + 4 + (-0x19 << 2)
label_19fc5c:
    if (ctx->pc == 0x19FC5Cu) {
        ctx->pc = 0x19FC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC58u;
        // 0x19fc5c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC60u;
        goto label_19fc60;
    }
    ctx->pc = 0x19FC58u;
    {
        const bool branch_taken_0x19fc58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x19FC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC58u;
        // 0x19fc5c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc58) {
            ctx->pc = 0x19FBF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19fbf8;
        }
    }
    ctx->pc = 0x19FC60u;
label_19fc60:
    // 0x19fc60: 0x1053ffe3  beq         $v0, $s3, . + 4 + (-0x1D << 2)
label_19fc64:
    if (ctx->pc == 0x19FC64u) {
        ctx->pc = 0x19FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC60u;
        // 0x19fc64: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC68u;
        goto label_19fc68;
    }
    ctx->pc = 0x19FC60u;
    {
        const bool branch_taken_0x19fc60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x19FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC60u;
        // 0x19fc64: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc60) {
            ctx->pc = 0x19FBF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19fbf0;
        }
    }
    ctx->pc = 0x19FC68u;
label_19fc68:
    // 0x19fc68: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x19fc68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_19fc6c:
    // 0x19fc6c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x19fc6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19fc70:
    // 0x19fc70: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x19fc70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19fc74:
    // 0x19fc74: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x19fc74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19fc78:
    // 0x19fc78: 0x3e00008  jr          $ra
label_19fc7c:
    if (ctx->pc == 0x19FC7Cu) {
        ctx->pc = 0x19FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC78u;
        // 0x19fc7c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC80u;
        goto label_19fc80;
    }
    ctx->pc = 0x19FC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC78u;
        // 0x19fc7c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FC80u;
label_19fc80:
    // 0x19fc80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19fc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_19fc84:
    // 0x19fc84: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19fc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19fc88:
    // 0x19fc88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19fc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19fc8c:
    // 0x19fc8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19fc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19fc90:
    // 0x19fc90: 0xc067dd2  jal         func_19F748
label_19fc94:
    if (ctx->pc == 0x19FC94u) {
        ctx->pc = 0x19FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC90u;
        // 0x19fc94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC98u;
        goto label_19fc98;
    }
    ctx->pc = 0x19FC90u;
    SET_GPR_U32(ctx, 31, 0x19FC98u);
    ctx->pc = 0x19FC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FC90u;
    // 0x19fc94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FC98u;
label_19fc98:
    // 0x19fc98: 0xae020164  sw          $v0, 0x164($s0)
    ctx->pc = 0x19fc98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 2));
label_19fc9c:
    // 0x19fc9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fca0:
    // 0x19fca0: 0xc067dd2  jal         func_19F748
label_19fca4:
    if (ctx->pc == 0x19FCA4u) {
        ctx->pc = 0x19FCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCA0u;
        // 0x19fca4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FCA8u;
        goto label_19fca8;
    }
    ctx->pc = 0x19FCA0u;
    SET_GPR_U32(ctx, 31, 0x19FCA8u);
    ctx->pc = 0x19FCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FCA0u;
    // 0x19fca4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FCA8u;
label_19fca8:
    // 0x19fca8: 0xae020168  sw          $v0, 0x168($s0)
    ctx->pc = 0x19fca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 2));
label_19fcac:
    // 0x19fcac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fcacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fcb0:
    // 0x19fcb0: 0xc067dd2  jal         func_19F748
label_19fcb4:
    if (ctx->pc == 0x19FCB4u) {
        ctx->pc = 0x19FCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCB0u;
        // 0x19fcb4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FCB8u;
        goto label_19fcb8;
    }
    ctx->pc = 0x19FCB0u;
    SET_GPR_U32(ctx, 31, 0x19FCB8u);
    ctx->pc = 0x19FCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FCB0u;
    // 0x19fcb4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FCB8u;
label_19fcb8:
    // 0x19fcb8: 0xae02016c  sw          $v0, 0x16C($s0)
    ctx->pc = 0x19fcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 2));
label_19fcbc:
    // 0x19fcbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fcbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fcc0:
    // 0x19fcc0: 0xc067dd2  jal         func_19F748
label_19fcc4:
    if (ctx->pc == 0x19FCC4u) {
        ctx->pc = 0x19FCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCC0u;
        // 0x19fcc4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FCC8u;
        goto label_19fcc8;
    }
    ctx->pc = 0x19FCC0u;
    SET_GPR_U32(ctx, 31, 0x19FCC8u);
    ctx->pc = 0x19FCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FCC0u;
    // 0x19fcc4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FCC8u;
label_19fcc8:
    // 0x19fcc8: 0xae020170  sw          $v0, 0x170($s0)
    ctx->pc = 0x19fcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 2));
label_19fccc:
    // 0x19fccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fcccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fcd0:
    // 0x19fcd0: 0xc067dd2  jal         func_19F748
label_19fcd4:
    if (ctx->pc == 0x19FCD4u) {
        ctx->pc = 0x19FCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCD0u;
        // 0x19fcd4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FCD8u;
        goto label_19fcd8;
    }
    ctx->pc = 0x19FCD0u;
    SET_GPR_U32(ctx, 31, 0x19FCD8u);
    ctx->pc = 0x19FCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FCD0u;
    // 0x19fcd4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FCD8u;
label_19fcd8:
    // 0x19fcd8: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x19fcd8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
label_19fcdc:
    // 0x19fcdc: 0x3c06fffc  lui         $a2, 0xFFFC
    ctx->pc = 0x19fcdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65532 << 16));
label_19fce0:
    // 0x19fce0: 0x34e72010  ori         $a3, $a3, 0x2010
    ctx->pc = 0x19fce0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8208);
label_19fce4:
    // 0x19fce4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x19fce4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_19fce8:
    // 0x19fce8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x19fce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_19fcec:
    // 0x19fcec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x19fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_19fcf0:
    // 0x19fcf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fcf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fcf4:
    // 0x19fcf4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19fcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19fcf8:
    // 0x19fcf8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x19fcf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_19fcfc:
    // 0x19fcfc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x19fcfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_19fd00:
    // 0x19fd00: 0xc067dd2  jal         func_19F748
label_19fd04:
    if (ctx->pc == 0x19FD04u) {
        ctx->pc = 0x19FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD00u;
        // 0x19fd04: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FD08u;
        goto label_19fd08;
    }
    ctx->pc = 0x19FD00u;
    SET_GPR_U32(ctx, 31, 0x19FD08u);
    ctx->pc = 0x19FD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FD00u;
    // 0x19fd04: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FD08u;
label_19fd08:
    // 0x19fd08: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19fd08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19fd0c:
    // 0x19fd0c: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x19fd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_19fd10:
    // 0x19fd10: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_19fd14:
    if (ctx->pc == 0x19FD14u) {
        ctx->pc = 0x19FD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD10u;
        // 0x19fd14: 0xae030174  sw          $v1, 0x174($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FD18u;
        goto label_19fd18;
    }
    ctx->pc = 0x19FD10u;
    {
        const bool branch_taken_0x19fd10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD10u;
        // 0x19fd14: 0xae030174  sw          $v1, 0x174($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd10) {
            ctx->pc = 0x19FD1Cu;
            goto label_19fd1c;
        }
    }
    ctx->pc = 0x19FD18u;
label_19fd18:
    // 0x19fd18: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x19fd18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
label_19fd1c:
    // 0x19fd1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fd1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fd20:
    // 0x19fd20: 0xc067dd2  jal         func_19F748
label_19fd24:
    if (ctx->pc == 0x19FD24u) {
        ctx->pc = 0x19FD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD20u;
        // 0x19fd24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FD28u;
        goto label_19fd28;
    }
    ctx->pc = 0x19FD20u;
    SET_GPR_U32(ctx, 31, 0x19FD28u);
    ctx->pc = 0x19FD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FD20u;
    // 0x19fd24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FD28u;
label_19fd28:
    // 0x19fd28: 0xae020178  sw          $v0, 0x178($s0)
    ctx->pc = 0x19fd28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 2));
label_19fd2c:
    // 0x19fd2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fd2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fd30:
    // 0x19fd30: 0xc067dd2  jal         func_19F748
label_19fd34:
    if (ctx->pc == 0x19FD34u) {
        ctx->pc = 0x19FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD30u;
        // 0x19fd34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FD38u;
        goto label_19fd38;
    }
    ctx->pc = 0x19FD30u;
    SET_GPR_U32(ctx, 31, 0x19FD38u);
    ctx->pc = 0x19FD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FD30u;
    // 0x19fd34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FD38u;
label_19fd38:
    // 0x19fd38: 0xae02017c  sw          $v0, 0x17C($s0)
    ctx->pc = 0x19fd38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 2));
label_19fd3c:
    // 0x19fd3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fd40:
    // 0x19fd40: 0xc067dd2  jal         func_19F748
label_19fd44:
    if (ctx->pc == 0x19FD44u) {
        ctx->pc = 0x19FD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD40u;
        // 0x19fd44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FD48u;
        goto label_19fd48;
    }
    ctx->pc = 0x19FD40u;
    SET_GPR_U32(ctx, 31, 0x19FD48u);
    ctx->pc = 0x19FD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FD40u;
    // 0x19fd44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FD48u;
label_19fd48:
    // 0x19fd48: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x19fd48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
label_19fd4c:
    // 0x19fd4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fd4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fd50:
    // 0x19fd50: 0xc067dd2  jal         func_19F748
label_19fd54:
    if (ctx->pc == 0x19FD54u) {
        ctx->pc = 0x19FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD50u;
        // 0x19fd54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FD58u;
        goto label_19fd58;
    }
    ctx->pc = 0x19FD50u;
    SET_GPR_U32(ctx, 31, 0x19FD58u);
    ctx->pc = 0x19FD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FD50u;
    // 0x19fd54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FD58u;
label_19fd58:
    // 0x19fd58: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x19fd58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_19fd5c:
    // 0x19fd5c: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x19fd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8208)));
label_19fd60:
    // 0x19fd60: 0x3c03ffbf  lui         $v1, 0xFFBF
    ctx->pc = 0x19fd60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65471 << 16));
label_19fd64:
    // 0x19fd64: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x19fd64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_19fd68:
    // 0x19fd68: 0x21580  sll         $v0, $v0, 22
    ctx->pc = 0x19fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 22));
label_19fd6c:
    // 0x19fd6c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x19fd6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_19fd70:
    // 0x19fd70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fd74:
    // 0x19fd74: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x19fd74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_19fd78:
    // 0x19fd78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19fd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19fd7c:
    // 0x19fd7c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x19fd7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
label_19fd80:
    // 0x19fd80: 0xc067dd2  jal         func_19F748
label_19fd84:
    if (ctx->pc == 0x19FD84u) {
        ctx->pc = 0x19FD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD80u;
        // 0x19fd84: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FD88u;
        goto label_19fd88;
    }
    ctx->pc = 0x19FD80u;
    SET_GPR_U32(ctx, 31, 0x19FD88u);
    ctx->pc = 0x19FD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FD80u;
    // 0x19fd84: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FD88u;
label_19fd88:
    // 0x19fd88: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x19fd88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_19fd8c:
    // 0x19fd8c: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x19fd8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8208)));
label_19fd90:
    // 0x19fd90: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x19fd90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
label_19fd94:
    // 0x19fd94: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x19fd94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_19fd98:
    // 0x19fd98: 0x21540  sll         $v0, $v0, 21
    ctx->pc = 0x19fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 21));
label_19fd9c:
    // 0x19fd9c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x19fd9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_19fda0:
    // 0x19fda0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fda4:
    // 0x19fda4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x19fda4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_19fda8:
    // 0x19fda8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19fda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19fdac:
    // 0x19fdac: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x19fdacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
label_19fdb0:
    // 0x19fdb0: 0xc067dd2  jal         func_19F748
label_19fdb4:
    if (ctx->pc == 0x19FDB4u) {
        ctx->pc = 0x19FDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDB0u;
        // 0x19fdb4: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FDB8u;
        goto label_19fdb8;
    }
    ctx->pc = 0x19FDB0u;
    SET_GPR_U32(ctx, 31, 0x19FDB8u);
    ctx->pc = 0x19FDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FDB0u;
    // 0x19fdb4: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FDB8u;
label_19fdb8:
    // 0x19fdb8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x19fdb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_19fdbc:
    // 0x19fdbc: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x19fdbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8208)));
label_19fdc0:
    // 0x19fdc0: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x19fdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
label_19fdc4:
    // 0x19fdc4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x19fdc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_19fdc8:
    // 0x19fdc8: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x19fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
label_19fdcc:
    // 0x19fdcc: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x19fdccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_19fdd0:
    // 0x19fdd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fdd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fdd4:
    // 0x19fdd4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x19fdd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_19fdd8:
    // 0x19fdd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19fdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19fddc:
    // 0x19fddc: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x19fddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
label_19fde0:
    // 0x19fde0: 0xc067dd2  jal         func_19F748
label_19fde4:
    if (ctx->pc == 0x19FDE4u) {
        ctx->pc = 0x19FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDE0u;
        // 0x19fde4: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FDE8u;
        goto label_19fde8;
    }
    ctx->pc = 0x19FDE0u;
    SET_GPR_U32(ctx, 31, 0x19FDE8u);
    ctx->pc = 0x19FDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FDE0u;
    // 0x19fde4: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FDE8u;
label_19fde8:
    // 0x19fde8: 0xae020184  sw          $v0, 0x184($s0)
    ctx->pc = 0x19fde8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
label_19fdec:
    // 0x19fdec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fdf0:
    // 0x19fdf0: 0xc067dd2  jal         func_19F748
label_19fdf4:
    if (ctx->pc == 0x19FDF4u) {
        ctx->pc = 0x19FDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDF0u;
        // 0x19fdf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FDF8u;
        goto label_19fdf8;
    }
    ctx->pc = 0x19FDF0u;
    SET_GPR_U32(ctx, 31, 0x19FDF8u);
    ctx->pc = 0x19FDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FDF0u;
    // 0x19fdf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FDF8u;
label_19fdf8:
    // 0x19fdf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fdf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fdfc:
    // 0x19fdfc: 0xc067dd2  jal         func_19F748
label_19fe00:
    if (ctx->pc == 0x19FE00u) {
        ctx->pc = 0x19FE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDFCu;
        // 0x19fe00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FE04u;
        goto label_19fe04;
    }
    ctx->pc = 0x19FDFCu;
    SET_GPR_U32(ctx, 31, 0x19FE04u);
    ctx->pc = 0x19FE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FDFCu;
    // 0x19fe00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FE04u;
label_19fe04:
    // 0x19fe04: 0xae020188  sw          $v0, 0x188($s0)
    ctx->pc = 0x19fe04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 2));
label_19fe08:
    // 0x19fe08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fe08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fe0c:
    // 0x19fe0c: 0xc067dd2  jal         func_19F748
label_19fe10:
    if (ctx->pc == 0x19FE10u) {
        ctx->pc = 0x19FE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE0Cu;
        // 0x19fe10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FE14u;
        goto label_19fe14;
    }
    ctx->pc = 0x19FE0Cu;
    SET_GPR_U32(ctx, 31, 0x19FE14u);
    ctx->pc = 0x19FE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FE0Cu;
    // 0x19fe10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FE14u;
label_19fe14:
    // 0x19fe14: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_19fe18:
    if (ctx->pc == 0x19FE18u) {
        ctx->pc = 0x19FE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE14u;
        // 0x19fe18: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FE1Cu;
        goto label_19fe1c;
    }
    ctx->pc = 0x19FE14u;
    {
        const bool branch_taken_0x19fe14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE14u;
        // 0x19fe18: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe14) {
            ctx->pc = 0x19FE64u;
            goto label_19fe64;
        }
    }
    ctx->pc = 0x19FE1Cu;
label_19fe1c:
    // 0x19fe1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fe1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fe20:
    // 0x19fe20: 0xc067dd2  jal         func_19F748
label_19fe24:
    if (ctx->pc == 0x19FE24u) {
        ctx->pc = 0x19FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE20u;
        // 0x19fe24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FE28u;
        goto label_19fe28;
    }
    ctx->pc = 0x19FE20u;
    SET_GPR_U32(ctx, 31, 0x19FE28u);
    ctx->pc = 0x19FE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FE20u;
    // 0x19fe24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FE28u;
label_19fe28:
    // 0x19fe28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fe28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fe2c:
    // 0x19fe2c: 0xc067dd2  jal         func_19F748
label_19fe30:
    if (ctx->pc == 0x19FE30u) {
        ctx->pc = 0x19FE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE2Cu;
        // 0x19fe30: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FE34u;
        goto label_19fe34;
    }
    ctx->pc = 0x19FE2Cu;
    SET_GPR_U32(ctx, 31, 0x19FE34u);
    ctx->pc = 0x19FE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FE2Cu;
    // 0x19fe30: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FE34u;
label_19fe34:
    // 0x19fe34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fe34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fe38:
    // 0x19fe38: 0xc067dd2  jal         func_19F748
label_19fe3c:
    if (ctx->pc == 0x19FE3Cu) {
        ctx->pc = 0x19FE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE38u;
        // 0x19fe3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FE40u;
        goto label_19fe40;
    }
    ctx->pc = 0x19FE38u;
    SET_GPR_U32(ctx, 31, 0x19FE40u);
    ctx->pc = 0x19FE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FE38u;
    // 0x19fe3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FE40u;
label_19fe40:
    // 0x19fe40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fe40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fe44:
    // 0x19fe44: 0xc067dd2  jal         func_19F748
label_19fe48:
    if (ctx->pc == 0x19FE48u) {
        ctx->pc = 0x19FE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE44u;
        // 0x19fe48: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FE4Cu;
        goto label_19fe4c;
    }
    ctx->pc = 0x19FE44u;
    SET_GPR_U32(ctx, 31, 0x19FE4Cu);
    ctx->pc = 0x19FE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FE44u;
    // 0x19fe48: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FE4Cu;
label_19fe4c:
    // 0x19fe4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fe4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fe50:
    // 0x19fe50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19fe50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19fe54:
    // 0x19fe54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19fe54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19fe58:
    // 0x19fe58: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x19fe58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_19fe5c:
    // 0x19fe5c: 0x8067dd2  j           func_19F748
label_19fe60:
    if (ctx->pc == 0x19FE60u) {
        ctx->pc = 0x19FE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE5Cu;
        // 0x19fe60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FE64u;
        goto label_19fe64;
    }
    ctx->pc = 0x19FE5Cu;
    ctx->pc = 0x19FE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FE5Cu;
    // 0x19fe60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FE64u;
label_19fe64:
    // 0x19fe64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19fe64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19fe68:
    // 0x19fe68: 0x3e00008  jr          $ra
label_19fe6c:
    if (ctx->pc == 0x19FE6Cu) {
        ctx->pc = 0x19FE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE68u;
        // 0x19fe6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FE70u;
        goto label_19fe70;
    }
    ctx->pc = 0x19FE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE68u;
        // 0x19fe6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FE70u;
label_19fe70:
    // 0x19fe70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19fe70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_19fe74:
    // 0x19fe74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19fe74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19fe78:
    // 0x19fe78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19fe78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19fe7c:
    // 0x19fe7c: 0x10000004  b           . + 4 + (0x4 << 2)
label_19fe80:
    if (ctx->pc == 0x19FE80u) {
        ctx->pc = 0x19FE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE7Cu;
        // 0x19fe80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FE84u;
        goto label_19fe84;
    }
    ctx->pc = 0x19FE7Cu;
    {
        const bool branch_taken_0x19fe7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE7Cu;
        // 0x19fe80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe7c) {
            ctx->pc = 0x19FE90u;
            goto label_19fe90;
        }
    }
    ctx->pc = 0x19FE84u;
label_19fe84:
    // 0x19fe84: 0x0  nop
    ctx->pc = 0x19fe84u;
    // NOP
label_19fe88:
    // 0x19fe88: 0xc067d96  jal         func_19F658
label_19fe8c:
    if (ctx->pc == 0x19FE8Cu) {
        ctx->pc = 0x19FE90u;
        goto label_19fe90;
    }
    ctx->pc = 0x19FE88u;
    SET_GPR_U32(ctx, 31, 0x19FE90u);
    ctx->pc = 0x19F658u;
    { ctx->pc = 0x19f658; return; }
    ctx->pc = 0x19FE90u;
label_19fe90:
    // 0x19fe90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fe90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fe94:
    // 0x19fe94: 0xc067dd2  jal         func_19F748
label_19fe98:
    if (ctx->pc == 0x19FE98u) {
        ctx->pc = 0x19FE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE94u;
        // 0x19fe98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FE9Cu;
        goto label_19fe9c;
    }
    ctx->pc = 0x19FE94u;
    SET_GPR_U32(ctx, 31, 0x19FE9Cu);
    ctx->pc = 0x19FE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FE94u;
    // 0x19fe98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FE9Cu;
label_19fe9c:
    // 0x19fe9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fe9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fea0:
    // 0x19fea0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_19fea4:
    if (ctx->pc == 0x19FEA4u) {
        ctx->pc = 0x19FEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FEA0u;
        // 0x19fea4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FEA8u;
        goto label_19fea8;
    }
    ctx->pc = 0x19FEA0u;
    {
        const bool branch_taken_0x19fea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FEA0u;
        // 0x19fea4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fea0) {
            ctx->pc = 0x19FE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19fe88;
        }
    }
    ctx->pc = 0x19FEA8u;
label_19fea8:
    // 0x19fea8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19fea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19feac:
    // 0x19feac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19feacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19feb0:
    // 0x19feb0: 0x3e00008  jr          $ra
label_19feb4:
    if (ctx->pc == 0x19FEB4u) {
        ctx->pc = 0x19FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FEB0u;
        // 0x19feb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FEB8u;
        goto label_19feb8;
    }
    ctx->pc = 0x19FEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FEB0u;
        // 0x19feb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FEB8u;
label_19feb8:
    // 0x19feb8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x19feb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19febc:
    // 0x19febc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19febcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19fec0:
    // 0x19fec0: 0x8cc30150  lw          $v1, 0x150($a2)
    ctx->pc = 0x19fec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 336)));
label_19fec4:
    // 0x19fec4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19fec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19fec8:
    // 0x19fec8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_19fecc:
    if (ctx->pc == 0x19FECCu) {
        ctx->pc = 0x19FECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FEC8u;
        // 0x19fecc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FED0u;
        goto label_19fed0;
    }
    ctx->pc = 0x19FEC8u;
    {
        const bool branch_taken_0x19fec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19FECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FEC8u;
        // 0x19fecc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fec8) {
            ctx->pc = 0x19FEF0u;
            goto label_19fef0;
        }
    }
    ctx->pc = 0x19FED0u;
label_19fed0:
    // 0x19fed0: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
label_19fed4:
    if (ctx->pc == 0x19FED4u) {
        ctx->pc = 0x19FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FED0u;
        // 0x19fed4: 0x8cc2084c  lw          $v0, 0x84C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FED8u;
        goto label_19fed8;
    }
    ctx->pc = 0x19FED0u;
    {
        const bool branch_taken_0x19fed0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fed0) {
            ctx->pc = 0x19FED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FED0u;
            // 0x19fed4: 0x8cc2084c  lw          $v0, 0x84C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FEF4u;
            goto label_19fef4;
        }
    }
    ctx->pc = 0x19FED8u;
label_19fed8:
    // 0x19fed8: 0x4a30004  bgezl       $a1, . + 4 + (0x4 << 2)
label_19fedc:
    if (ctx->pc == 0x19FEDCu) {
        ctx->pc = 0x19FEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FED8u;
        // 0x19fedc: 0xacc00854  sw          $zero, 0x854($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 2132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FEE0u;
        goto label_19fee0;
    }
    ctx->pc = 0x19FED8u;
    {
        const bool branch_taken_0x19fed8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x19fed8) {
            ctx->pc = 0x19FEDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FED8u;
            // 0x19fedc: 0xacc00854  sw          $zero, 0x854($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 2132), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FEECu;
            goto label_19feec;
        }
    }
    ctx->pc = 0x19FEE0u;
label_19fee0:
    // 0x19fee0: 0x8cc20854  lw          $v0, 0x854($a2)
    ctx->pc = 0x19fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2132)));
label_19fee4:
    // 0x19fee4: 0x2c470001  sltiu       $a3, $v0, 0x1
    ctx->pc = 0x19fee4u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_19fee8:
    // 0x19fee8: 0xacc00854  sw          $zero, 0x854($a2)
    ctx->pc = 0x19fee8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2132), GPR_U32(ctx, 0));
label_19feec:
    // 0x19feec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19feecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19fef0:
    // 0x19fef0: 0x8cc2084c  lw          $v0, 0x84C($a2)
    ctx->pc = 0x19fef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2124)));
label_19fef4:
    // 0x19fef4: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x19fef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_19fef8:
    // 0x19fef8: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
label_19fefc:
    if (ctx->pc == 0x19FEFCu) {
        ctx->pc = 0x19FEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FEF8u;
        // 0x19fefc: 0xacc301ac  sw          $v1, 0x1AC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FF00u;
        goto label_19ff00;
    }
    ctx->pc = 0x19FEF8u;
    {
        const bool branch_taken_0x19fef8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FEF8u;
        // 0x19fefc: 0xacc301ac  sw          $v1, 0x1AC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fef8) {
            ctx->pc = 0x19FF14u;
            goto label_19ff14;
        }
    }
    ctx->pc = 0x19FF00u;
label_19ff00:
    // 0x19ff00: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x19ff00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_19ff04:
    // 0x19ff04: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_19ff08:
    if (ctx->pc == 0x19FF08u) {
        ctx->pc = 0x19FF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FF04u;
        // 0x19ff08: 0x8cc20850  lw          $v0, 0x850($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FF0Cu;
        goto label_19ff0c;
    }
    ctx->pc = 0x19FF04u;
    {
        const bool branch_taken_0x19ff04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ff04) {
            ctx->pc = 0x19FF08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FF04u;
            // 0x19ff08: 0x8cc20850  lw          $v0, 0x850($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FF18u;
            goto label_19ff18;
        }
    }
    ctx->pc = 0x19FF0Cu;
label_19ff0c:
    // 0x19ff0c: 0x24620400  addiu       $v0, $v1, 0x400
    ctx->pc = 0x19ff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
label_19ff10:
    // 0x19ff10: 0xacc201ac  sw          $v0, 0x1AC($a2)
    ctx->pc = 0x19ff10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 428), GPR_U32(ctx, 2));
label_19ff14:
    // 0x19ff14: 0x8cc20850  lw          $v0, 0x850($a2)
    ctx->pc = 0x19ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2128)));
label_19ff18:
    // 0x19ff18: 0x8cc401ac  lw          $a0, 0x1AC($a2)
    ctx->pc = 0x19ff18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 428)));
label_19ff1c:
    // 0x19ff1c: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x19ff1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_19ff20:
    // 0x19ff20: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x19ff20u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_19ff24:
    // 0x19ff24: 0x3e00008  jr          $ra
label_19ff28:
    if (ctx->pc == 0x19FF28u) {
        ctx->pc = 0x19FF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FF24u;
        // 0x19ff28: 0xacc20850  sw          $v0, 0x850($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 2128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FF2Cu;
        goto label_19ff2c;
    }
    ctx->pc = 0x19FF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FF24u;
        // 0x19ff28: 0xacc20850  sw          $v0, 0x850($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 2128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FF24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FF2Cu;
label_19ff2c:
    // 0x19ff2c: 0x0  nop
    ctx->pc = 0x19ff2cu;
    // NOP
label_19ff30:
    // 0x19ff30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19ff30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_19ff34:
    // 0x19ff34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19ff34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19ff38:
    // 0x19ff38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19ff38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19ff3c:
    // 0x19ff3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19ff3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19ff40:
    // 0x19ff40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19ff40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19ff44:
    // 0x19ff44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19ff44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19ff48:
    // 0x19ff48: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x19ff48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
label_19ff4c:
    // 0x19ff4c: 0x8e020850  lw          $v0, 0x850($s0)
    ctx->pc = 0x19ff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2128)));
label_19ff50:
    // 0x19ff50: 0xae030854  sw          $v1, 0x854($s0)
    ctx->pc = 0x19ff50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2132), GPR_U32(ctx, 3));
label_19ff54:
    // 0x19ff54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19ff58:
    // 0x19ff58: 0xc067dd2  jal         func_19F748
label_19ff5c:
    if (ctx->pc == 0x19FF5Cu) {
        ctx->pc = 0x19FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FF58u;
        // 0x19ff5c: 0xae02084c  sw          $v0, 0x84C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FF60u;
        { ctx->pc = 0x19ff60; return; }
    }
    ctx->pc = 0x19FF58u;
    SET_GPR_U32(ctx, 31, 0x19FF60u);
    ctx->pc = 0x19FF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FF58u;
    // 0x19ff5c: 0xae02084c  sw          $v0, 0x84C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19FF60u;
    ctx->pc = 0x19ff60u;
    return;
}
