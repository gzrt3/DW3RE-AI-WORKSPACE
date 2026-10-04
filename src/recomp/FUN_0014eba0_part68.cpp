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


void FUN_0014eba0_part68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x16f710u: goto label_16f710;
        case 0x16f714u: goto label_16f714;
        case 0x16f718u: goto label_16f718;
        case 0x16f71cu: goto label_16f71c;
        case 0x16f720u: goto label_16f720;
        case 0x16f724u: goto label_16f724;
        case 0x16f728u: goto label_16f728;
        case 0x16f72cu: goto label_16f72c;
        case 0x16f730u: goto label_16f730;
        case 0x16f734u: goto label_16f734;
        case 0x16f738u: goto label_16f738;
        case 0x16f73cu: goto label_16f73c;
        case 0x16f740u: goto label_16f740;
        case 0x16f744u: goto label_16f744;
        case 0x16f748u: goto label_16f748;
        case 0x16f74cu: goto label_16f74c;
        case 0x16f750u: goto label_16f750;
        case 0x16f754u: goto label_16f754;
        case 0x16f758u: goto label_16f758;
        case 0x16f75cu: goto label_16f75c;
        case 0x16f760u: goto label_16f760;
        case 0x16f764u: goto label_16f764;
        case 0x16f768u: goto label_16f768;
        case 0x16f76cu: goto label_16f76c;
        case 0x16f770u: goto label_16f770;
        case 0x16f774u: goto label_16f774;
        case 0x16f778u: goto label_16f778;
        case 0x16f77cu: goto label_16f77c;
        case 0x16f780u: goto label_16f780;
        case 0x16f784u: goto label_16f784;
        case 0x16f788u: goto label_16f788;
        case 0x16f78cu: goto label_16f78c;
        case 0x16f790u: goto label_16f790;
        case 0x16f794u: goto label_16f794;
        case 0x16f798u: goto label_16f798;
        case 0x16f79cu: goto label_16f79c;
        case 0x16f7a0u: goto label_16f7a0;
        case 0x16f7a4u: goto label_16f7a4;
        case 0x16f7a8u: goto label_16f7a8;
        case 0x16f7acu: goto label_16f7ac;
        case 0x16f7b0u: goto label_16f7b0;
        case 0x16f7b4u: goto label_16f7b4;
        case 0x16f7b8u: goto label_16f7b8;
        case 0x16f7bcu: goto label_16f7bc;
        case 0x16f7c0u: goto label_16f7c0;
        case 0x16f7c4u: goto label_16f7c4;
        case 0x16f7c8u: goto label_16f7c8;
        case 0x16f7ccu: goto label_16f7cc;
        case 0x16f7d0u: goto label_16f7d0;
        case 0x16f7d4u: goto label_16f7d4;
        case 0x16f7d8u: goto label_16f7d8;
        case 0x16f7dcu: goto label_16f7dc;
        case 0x16f7e0u: goto label_16f7e0;
        case 0x16f7e4u: goto label_16f7e4;
        case 0x16f7e8u: goto label_16f7e8;
        case 0x16f7ecu: goto label_16f7ec;
        case 0x16f7f0u: goto label_16f7f0;
        case 0x16f7f4u: goto label_16f7f4;
        case 0x16f7f8u: goto label_16f7f8;
        case 0x16f7fcu: goto label_16f7fc;
        case 0x16f800u: goto label_16f800;
        case 0x16f804u: goto label_16f804;
        case 0x16f808u: goto label_16f808;
        case 0x16f80cu: goto label_16f80c;
        case 0x16f810u: goto label_16f810;
        case 0x16f814u: goto label_16f814;
        case 0x16f818u: goto label_16f818;
        case 0x16f81cu: goto label_16f81c;
        case 0x16f820u: goto label_16f820;
        case 0x16f824u: goto label_16f824;
        case 0x16f828u: goto label_16f828;
        case 0x16f82cu: goto label_16f82c;
        case 0x16f830u: goto label_16f830;
        case 0x16f834u: goto label_16f834;
        case 0x16f838u: goto label_16f838;
        case 0x16f83cu: goto label_16f83c;
        case 0x16f840u: goto label_16f840;
        case 0x16f844u: goto label_16f844;
        case 0x16f848u: goto label_16f848;
        case 0x16f84cu: goto label_16f84c;
        case 0x16f850u: goto label_16f850;
        case 0x16f854u: goto label_16f854;
        case 0x16f858u: goto label_16f858;
        case 0x16f85cu: goto label_16f85c;
        case 0x16f860u: goto label_16f860;
        case 0x16f864u: goto label_16f864;
        case 0x16f868u: goto label_16f868;
        case 0x16f86cu: goto label_16f86c;
        case 0x16f870u: goto label_16f870;
        case 0x16f874u: goto label_16f874;
        case 0x16f878u: goto label_16f878;
        case 0x16f87cu: goto label_16f87c;
        case 0x16f880u: goto label_16f880;
        case 0x16f884u: goto label_16f884;
        case 0x16f888u: goto label_16f888;
        case 0x16f88cu: goto label_16f88c;
        case 0x16f890u: goto label_16f890;
        case 0x16f894u: goto label_16f894;
        case 0x16f898u: goto label_16f898;
        case 0x16f89cu: goto label_16f89c;
        case 0x16f8a0u: goto label_16f8a0;
        case 0x16f8a4u: goto label_16f8a4;
        case 0x16f8a8u: goto label_16f8a8;
        case 0x16f8acu: goto label_16f8ac;
        case 0x16f8b0u: goto label_16f8b0;
        case 0x16f8b4u: goto label_16f8b4;
        case 0x16f8b8u: goto label_16f8b8;
        case 0x16f8bcu: goto label_16f8bc;
        case 0x16f8c0u: goto label_16f8c0;
        case 0x16f8c4u: goto label_16f8c4;
        case 0x16f8c8u: goto label_16f8c8;
        case 0x16f8ccu: goto label_16f8cc;
        case 0x16f8d0u: goto label_16f8d0;
        case 0x16f8d4u: goto label_16f8d4;
        case 0x16f8d8u: goto label_16f8d8;
        case 0x16f8dcu: goto label_16f8dc;
        case 0x16f8e0u: goto label_16f8e0;
        case 0x16f8e4u: goto label_16f8e4;
        case 0x16f8e8u: goto label_16f8e8;
        case 0x16f8ecu: goto label_16f8ec;
        case 0x16f8f0u: goto label_16f8f0;
        case 0x16f8f4u: goto label_16f8f4;
        case 0x16f8f8u: goto label_16f8f8;
        case 0x16f8fcu: goto label_16f8fc;
        case 0x16f900u: goto label_16f900;
        case 0x16f904u: goto label_16f904;
        case 0x16f908u: goto label_16f908;
        case 0x16f90cu: goto label_16f90c;
        case 0x16f910u: goto label_16f910;
        case 0x16f914u: goto label_16f914;
        case 0x16f918u: goto label_16f918;
        case 0x16f91cu: goto label_16f91c;
        case 0x16f920u: goto label_16f920;
        case 0x16f924u: goto label_16f924;
        case 0x16f928u: goto label_16f928;
        case 0x16f92cu: goto label_16f92c;
        case 0x16f930u: goto label_16f930;
        case 0x16f934u: goto label_16f934;
        case 0x16f938u: goto label_16f938;
        case 0x16f93cu: goto label_16f93c;
        case 0x16f940u: goto label_16f940;
        case 0x16f944u: goto label_16f944;
        case 0x16f948u: goto label_16f948;
        case 0x16f94cu: goto label_16f94c;
        case 0x16f950u: goto label_16f950;
        case 0x16f954u: goto label_16f954;
        case 0x16f958u: goto label_16f958;
        case 0x16f95cu: goto label_16f95c;
        case 0x16f960u: goto label_16f960;
        case 0x16f964u: goto label_16f964;
        case 0x16f968u: goto label_16f968;
        case 0x16f96cu: goto label_16f96c;
        case 0x16f970u: goto label_16f970;
        case 0x16f974u: goto label_16f974;
        case 0x16f978u: goto label_16f978;
        case 0x16f97cu: goto label_16f97c;
        case 0x16f980u: goto label_16f980;
        case 0x16f984u: goto label_16f984;
        case 0x16f988u: goto label_16f988;
        case 0x16f98cu: goto label_16f98c;
        case 0x16f990u: goto label_16f990;
        case 0x16f994u: goto label_16f994;
        case 0x16f998u: goto label_16f998;
        case 0x16f99cu: goto label_16f99c;
        case 0x16f9a0u: goto label_16f9a0;
        case 0x16f9a4u: goto label_16f9a4;
        case 0x16f9a8u: goto label_16f9a8;
        case 0x16f9acu: goto label_16f9ac;
        case 0x16f9b0u: goto label_16f9b0;
        case 0x16f9b4u: goto label_16f9b4;
        case 0x16f9b8u: goto label_16f9b8;
        case 0x16f9bcu: goto label_16f9bc;
        case 0x16f9c0u: goto label_16f9c0;
        case 0x16f9c4u: goto label_16f9c4;
        case 0x16f9c8u: goto label_16f9c8;
        case 0x16f9ccu: goto label_16f9cc;
        case 0x16f9d0u: goto label_16f9d0;
        case 0x16f9d4u: goto label_16f9d4;
        case 0x16f9d8u: goto label_16f9d8;
        case 0x16f9dcu: goto label_16f9dc;
        case 0x16f9e0u: goto label_16f9e0;
        case 0x16f9e4u: goto label_16f9e4;
        case 0x16f9e8u: goto label_16f9e8;
        case 0x16f9ecu: goto label_16f9ec;
        case 0x16f9f0u: goto label_16f9f0;
        case 0x16f9f4u: goto label_16f9f4;
        case 0x16f9f8u: goto label_16f9f8;
        case 0x16f9fcu: goto label_16f9fc;
        case 0x16fa00u: goto label_16fa00;
        case 0x16fa04u: goto label_16fa04;
        case 0x16fa08u: goto label_16fa08;
        case 0x16fa0cu: goto label_16fa0c;
        case 0x16fa10u: goto label_16fa10;
        case 0x16fa14u: goto label_16fa14;
        case 0x16fa18u: goto label_16fa18;
        case 0x16fa1cu: goto label_16fa1c;
        case 0x16fa20u: goto label_16fa20;
        case 0x16fa24u: goto label_16fa24;
        case 0x16fa28u: goto label_16fa28;
        case 0x16fa2cu: goto label_16fa2c;
        case 0x16fa30u: goto label_16fa30;
        case 0x16fa34u: goto label_16fa34;
        case 0x16fa38u: goto label_16fa38;
        case 0x16fa3cu: goto label_16fa3c;
        case 0x16fa40u: goto label_16fa40;
        case 0x16fa44u: goto label_16fa44;
        case 0x16fa48u: goto label_16fa48;
        case 0x16fa4cu: goto label_16fa4c;
        case 0x16fa50u: goto label_16fa50;
        case 0x16fa54u: goto label_16fa54;
        case 0x16fa58u: goto label_16fa58;
        case 0x16fa5cu: goto label_16fa5c;
        case 0x16fa60u: goto label_16fa60;
        case 0x16fa64u: goto label_16fa64;
        case 0x16fa68u: goto label_16fa68;
        case 0x16fa6cu: goto label_16fa6c;
        case 0x16fa70u: goto label_16fa70;
        case 0x16fa74u: goto label_16fa74;
        case 0x16fa78u: goto label_16fa78;
        case 0x16fa7cu: goto label_16fa7c;
        case 0x16fa80u: goto label_16fa80;
        case 0x16fa84u: goto label_16fa84;
        case 0x16fa88u: goto label_16fa88;
        case 0x16fa8cu: goto label_16fa8c;
        case 0x16fa90u: goto label_16fa90;
        case 0x16fa94u: goto label_16fa94;
        case 0x16fa98u: goto label_16fa98;
        case 0x16fa9cu: goto label_16fa9c;
        case 0x16faa0u: goto label_16faa0;
        case 0x16faa4u: goto label_16faa4;
        case 0x16faa8u: goto label_16faa8;
        case 0x16faacu: goto label_16faac;
        case 0x16fab0u: goto label_16fab0;
        case 0x16fab4u: goto label_16fab4;
        case 0x16fab8u: goto label_16fab8;
        case 0x16fabcu: goto label_16fabc;
        case 0x16fac0u: goto label_16fac0;
        case 0x16fac4u: goto label_16fac4;
        case 0x16fac8u: goto label_16fac8;
        case 0x16faccu: goto label_16facc;
        case 0x16fad0u: goto label_16fad0;
        case 0x16fad4u: goto label_16fad4;
        case 0x16fad8u: goto label_16fad8;
        case 0x16fadcu: goto label_16fadc;
        case 0x16fae0u: goto label_16fae0;
        case 0x16fae4u: goto label_16fae4;
        case 0x16fae8u: goto label_16fae8;
        case 0x16faecu: goto label_16faec;
        case 0x16faf0u: goto label_16faf0;
        case 0x16faf4u: goto label_16faf4;
        case 0x16faf8u: goto label_16faf8;
        case 0x16fafcu: goto label_16fafc;
        case 0x16fb00u: goto label_16fb00;
        case 0x16fb04u: goto label_16fb04;
        case 0x16fb08u: goto label_16fb08;
        case 0x16fb0cu: goto label_16fb0c;
        case 0x16fb10u: goto label_16fb10;
        case 0x16fb14u: goto label_16fb14;
        case 0x16fb18u: goto label_16fb18;
        case 0x16fb1cu: goto label_16fb1c;
        case 0x16fb20u: goto label_16fb20;
        case 0x16fb24u: goto label_16fb24;
        case 0x16fb28u: goto label_16fb28;
        case 0x16fb2cu: goto label_16fb2c;
        case 0x16fb30u: goto label_16fb30;
        case 0x16fb34u: goto label_16fb34;
        case 0x16fb38u: goto label_16fb38;
        case 0x16fb3cu: goto label_16fb3c;
        case 0x16fb40u: goto label_16fb40;
        case 0x16fb44u: goto label_16fb44;
        case 0x16fb48u: goto label_16fb48;
        case 0x16fb4cu: goto label_16fb4c;
        case 0x16fb50u: goto label_16fb50;
        case 0x16fb54u: goto label_16fb54;
        case 0x16fb58u: goto label_16fb58;
        case 0x16fb5cu: goto label_16fb5c;
        case 0x16fb60u: goto label_16fb60;
        case 0x16fb64u: goto label_16fb64;
        case 0x16fb68u: goto label_16fb68;
        case 0x16fb6cu: goto label_16fb6c;
        case 0x16fb70u: goto label_16fb70;
        case 0x16fb74u: goto label_16fb74;
        case 0x16fb78u: goto label_16fb78;
        case 0x16fb7cu: goto label_16fb7c;
        case 0x16fb80u: goto label_16fb80;
        case 0x16fb84u: goto label_16fb84;
        case 0x16fb88u: goto label_16fb88;
        case 0x16fb8cu: goto label_16fb8c;
        case 0x16fb90u: goto label_16fb90;
        case 0x16fb94u: goto label_16fb94;
        case 0x16fb98u: goto label_16fb98;
        case 0x16fb9cu: goto label_16fb9c;
        case 0x16fba0u: goto label_16fba0;
        case 0x16fba4u: goto label_16fba4;
        case 0x16fba8u: goto label_16fba8;
        case 0x16fbacu: goto label_16fbac;
        case 0x16fbb0u: goto label_16fbb0;
        case 0x16fbb4u: goto label_16fbb4;
        case 0x16fbb8u: goto label_16fbb8;
        case 0x16fbbcu: goto label_16fbbc;
        case 0x16fbc0u: goto label_16fbc0;
        case 0x16fbc4u: goto label_16fbc4;
        case 0x16fbc8u: goto label_16fbc8;
        case 0x16fbccu: goto label_16fbcc;
        case 0x16fbd0u: goto label_16fbd0;
        case 0x16fbd4u: goto label_16fbd4;
        case 0x16fbd8u: goto label_16fbd8;
        case 0x16fbdcu: goto label_16fbdc;
        case 0x16fbe0u: goto label_16fbe0;
        case 0x16fbe4u: goto label_16fbe4;
        case 0x16fbe8u: goto label_16fbe8;
        case 0x16fbecu: goto label_16fbec;
        case 0x16fbf0u: goto label_16fbf0;
        case 0x16fbf4u: goto label_16fbf4;
        case 0x16fbf8u: goto label_16fbf8;
        case 0x16fbfcu: goto label_16fbfc;
        case 0x16fc00u: goto label_16fc00;
        case 0x16fc04u: goto label_16fc04;
        case 0x16fc08u: goto label_16fc08;
        case 0x16fc0cu: goto label_16fc0c;
        case 0x16fc10u: goto label_16fc10;
        case 0x16fc14u: goto label_16fc14;
        case 0x16fc18u: goto label_16fc18;
        case 0x16fc1cu: goto label_16fc1c;
        case 0x16fc20u: goto label_16fc20;
        case 0x16fc24u: goto label_16fc24;
        case 0x16fc28u: goto label_16fc28;
        case 0x16fc2cu: goto label_16fc2c;
        case 0x16fc30u: goto label_16fc30;
        case 0x16fc34u: goto label_16fc34;
        case 0x16fc38u: goto label_16fc38;
        case 0x16fc3cu: goto label_16fc3c;
        case 0x16fc40u: goto label_16fc40;
        case 0x16fc44u: goto label_16fc44;
        case 0x16fc48u: goto label_16fc48;
        case 0x16fc4cu: goto label_16fc4c;
        case 0x16fc50u: goto label_16fc50;
        case 0x16fc54u: goto label_16fc54;
        case 0x16fc58u: goto label_16fc58;
        case 0x16fc5cu: goto label_16fc5c;
        case 0x16fc60u: goto label_16fc60;
        case 0x16fc64u: goto label_16fc64;
        case 0x16fc68u: goto label_16fc68;
        case 0x16fc6cu: goto label_16fc6c;
        case 0x16fc70u: goto label_16fc70;
        case 0x16fc74u: goto label_16fc74;
        case 0x16fc78u: goto label_16fc78;
        case 0x16fc7cu: goto label_16fc7c;
        case 0x16fc80u: goto label_16fc80;
        case 0x16fc84u: goto label_16fc84;
        case 0x16fc88u: goto label_16fc88;
        case 0x16fc8cu: goto label_16fc8c;
        case 0x16fc90u: goto label_16fc90;
        case 0x16fc94u: goto label_16fc94;
        case 0x16fc98u: goto label_16fc98;
        case 0x16fc9cu: goto label_16fc9c;
        case 0x16fca0u: goto label_16fca0;
        case 0x16fca4u: goto label_16fca4;
        case 0x16fca8u: goto label_16fca8;
        case 0x16fcacu: goto label_16fcac;
        case 0x16fcb0u: goto label_16fcb0;
        case 0x16fcb4u: goto label_16fcb4;
        case 0x16fcb8u: goto label_16fcb8;
        case 0x16fcbcu: goto label_16fcbc;
        case 0x16fcc0u: goto label_16fcc0;
        case 0x16fcc4u: goto label_16fcc4;
        case 0x16fcc8u: goto label_16fcc8;
        case 0x16fcccu: goto label_16fccc;
        case 0x16fcd0u: goto label_16fcd0;
        case 0x16fcd4u: goto label_16fcd4;
        case 0x16fcd8u: goto label_16fcd8;
        case 0x16fcdcu: goto label_16fcdc;
        case 0x16fce0u: goto label_16fce0;
        case 0x16fce4u: goto label_16fce4;
        case 0x16fce8u: goto label_16fce8;
        case 0x16fcecu: goto label_16fcec;
        case 0x16fcf0u: goto label_16fcf0;
        case 0x16fcf4u: goto label_16fcf4;
        case 0x16fcf8u: goto label_16fcf8;
        case 0x16fcfcu: goto label_16fcfc;
        case 0x16fd00u: goto label_16fd00;
        case 0x16fd04u: goto label_16fd04;
        case 0x16fd08u: goto label_16fd08;
        case 0x16fd0cu: goto label_16fd0c;
        case 0x16fd10u: goto label_16fd10;
        case 0x16fd14u: goto label_16fd14;
        case 0x16fd18u: goto label_16fd18;
        case 0x16fd1cu: goto label_16fd1c;
        case 0x16fd20u: goto label_16fd20;
        case 0x16fd24u: goto label_16fd24;
        case 0x16fd28u: goto label_16fd28;
        case 0x16fd2cu: goto label_16fd2c;
        case 0x16fd30u: goto label_16fd30;
        case 0x16fd34u: goto label_16fd34;
        case 0x16fd38u: goto label_16fd38;
        case 0x16fd3cu: goto label_16fd3c;
        case 0x16fd40u: goto label_16fd40;
        case 0x16fd44u: goto label_16fd44;
        case 0x16fd48u: goto label_16fd48;
        case 0x16fd4cu: goto label_16fd4c;
        case 0x16fd50u: goto label_16fd50;
        case 0x16fd54u: goto label_16fd54;
        case 0x16fd58u: goto label_16fd58;
        case 0x16fd5cu: goto label_16fd5c;
        case 0x16fd60u: goto label_16fd60;
        case 0x16fd64u: goto label_16fd64;
        case 0x16fd68u: goto label_16fd68;
        case 0x16fd6cu: goto label_16fd6c;
        case 0x16fd70u: goto label_16fd70;
        case 0x16fd74u: goto label_16fd74;
        case 0x16fd78u: goto label_16fd78;
        case 0x16fd7cu: goto label_16fd7c;
        case 0x16fd80u: goto label_16fd80;
        case 0x16fd84u: goto label_16fd84;
        case 0x16fd88u: goto label_16fd88;
        case 0x16fd8cu: goto label_16fd8c;
        case 0x16fd90u: goto label_16fd90;
        case 0x16fd94u: goto label_16fd94;
        case 0x16fd98u: goto label_16fd98;
        case 0x16fd9cu: goto label_16fd9c;
        case 0x16fda0u: goto label_16fda0;
        case 0x16fda4u: goto label_16fda4;
        case 0x16fda8u: goto label_16fda8;
        case 0x16fdacu: goto label_16fdac;
        case 0x16fdb0u: goto label_16fdb0;
        case 0x16fdb4u: goto label_16fdb4;
        case 0x16fdb8u: goto label_16fdb8;
        case 0x16fdbcu: goto label_16fdbc;
        case 0x16fdc0u: goto label_16fdc0;
        case 0x16fdc4u: goto label_16fdc4;
        case 0x16fdc8u: goto label_16fdc8;
        case 0x16fdccu: goto label_16fdcc;
        case 0x16fdd0u: goto label_16fdd0;
        case 0x16fdd4u: goto label_16fdd4;
        case 0x16fdd8u: goto label_16fdd8;
        case 0x16fddcu: goto label_16fddc;
        case 0x16fde0u: goto label_16fde0;
        case 0x16fde4u: goto label_16fde4;
        case 0x16fde8u: goto label_16fde8;
        case 0x16fdecu: goto label_16fdec;
        case 0x16fdf0u: goto label_16fdf0;
        case 0x16fdf4u: goto label_16fdf4;
        case 0x16fdf8u: goto label_16fdf8;
        case 0x16fdfcu: goto label_16fdfc;
        case 0x16fe00u: goto label_16fe00;
        case 0x16fe04u: goto label_16fe04;
        case 0x16fe08u: goto label_16fe08;
        case 0x16fe0cu: goto label_16fe0c;
        case 0x16fe10u: goto label_16fe10;
        case 0x16fe14u: goto label_16fe14;
        case 0x16fe18u: goto label_16fe18;
        case 0x16fe1cu: goto label_16fe1c;
        case 0x16fe20u: goto label_16fe20;
        case 0x16fe24u: goto label_16fe24;
        case 0x16fe28u: goto label_16fe28;
        case 0x16fe2cu: goto label_16fe2c;
        case 0x16fe30u: goto label_16fe30;
        case 0x16fe34u: goto label_16fe34;
        case 0x16fe38u: goto label_16fe38;
        case 0x16fe3cu: goto label_16fe3c;
        case 0x16fe40u: goto label_16fe40;
        case 0x16fe44u: goto label_16fe44;
        case 0x16fe48u: goto label_16fe48;
        case 0x16fe4cu: goto label_16fe4c;
        case 0x16fe50u: goto label_16fe50;
        case 0x16fe54u: goto label_16fe54;
        case 0x16fe58u: goto label_16fe58;
        case 0x16fe5cu: goto label_16fe5c;
        case 0x16fe60u: goto label_16fe60;
        case 0x16fe64u: goto label_16fe64;
        case 0x16fe68u: goto label_16fe68;
        case 0x16fe6cu: goto label_16fe6c;
        case 0x16fe70u: goto label_16fe70;
        case 0x16fe74u: goto label_16fe74;
        case 0x16fe78u: goto label_16fe78;
        case 0x16fe7cu: goto label_16fe7c;
        case 0x16fe80u: goto label_16fe80;
        case 0x16fe84u: goto label_16fe84;
        case 0x16fe88u: goto label_16fe88;
        case 0x16fe8cu: goto label_16fe8c;
        case 0x16fe90u: goto label_16fe90;
        case 0x16fe94u: goto label_16fe94;
        case 0x16fe98u: goto label_16fe98;
        case 0x16fe9cu: goto label_16fe9c;
        case 0x16fea0u: goto label_16fea0;
        case 0x16fea4u: goto label_16fea4;
        case 0x16fea8u: goto label_16fea8;
        case 0x16feacu: goto label_16feac;
        case 0x16feb0u: goto label_16feb0;
        case 0x16feb4u: goto label_16feb4;
        case 0x16feb8u: goto label_16feb8;
        case 0x16febcu: goto label_16febc;
        case 0x16fec0u: goto label_16fec0;
        case 0x16fec4u: goto label_16fec4;
        case 0x16fec8u: goto label_16fec8;
        case 0x16feccu: goto label_16fecc;
        case 0x16fed0u: goto label_16fed0;
        case 0x16fed4u: goto label_16fed4;
        case 0x16fed8u: goto label_16fed8;
        case 0x16fedcu: goto label_16fedc;
        default: return;
    }

label_16f710:
    // 0x16f710: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x16f710u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_16f714:
    // 0x16f714: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_16f718:
    if (ctx->pc == 0x16F718u) {
        ctx->pc = 0x16F718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F714u;
        // 0x16f718: 0x3c060028  lui         $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F71Cu;
        goto label_16f71c;
    }
    ctx->pc = 0x16F714u;
    {
        const bool branch_taken_0x16f714 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F714u;
        // 0x16f718: 0x3c060028  lui         $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f714) {
            ctx->pc = 0x16F6ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x16f6ec; return; }
        }
    }
    ctx->pc = 0x16F71Cu;
label_16f71c:
    // 0x16f71c: 0x10000038  b           . + 4 + (0x38 << 2)
label_16f720:
    if (ctx->pc == 0x16F720u) {
        ctx->pc = 0x16F724u;
        goto label_16f724;
    }
    ctx->pc = 0x16F71Cu;
    {
        const bool branch_taken_0x16f71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f71c) {
            ctx->pc = 0x16F800u;
            goto label_16f800;
        }
    }
    ctx->pc = 0x16F724u;
label_16f724:
    // 0x16f724: 0x16600011  bnez        $s3, . + 4 + (0x11 << 2)
label_16f728:
    if (ctx->pc == 0x16F728u) {
        ctx->pc = 0x16F728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F724u;
        // 0x16f728: 0x3c050028  lui         $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F72Cu;
        goto label_16f72c;
    }
    ctx->pc = 0x16F724u;
    {
        const bool branch_taken_0x16f724 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F724u;
        // 0x16f728: 0x3c050028  lui         $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f724) {
            ctx->pc = 0x16F76Cu;
            goto label_16f76c;
        }
    }
    ctx->pc = 0x16F72Cu;
label_16f72c:
    // 0x16f72c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16f72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f730:
    // 0x16f730: 0xc05bbb4  jal         func_16EED0
label_16f734:
    if (ctx->pc == 0x16F734u) {
        ctx->pc = 0x16F734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F730u;
        // 0x16f734: 0x24a51c70  addiu       $a1, $a1, 0x1C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F738u;
        goto label_16f738;
    }
    ctx->pc = 0x16F730u;
    SET_GPR_U32(ctx, 31, 0x16F738u);
    ctx->pc = 0x16F734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F730u;
    // 0x16f734: 0x24a51c70  addiu       $a1, $a1, 0x1C70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16EED0u;
    { ctx->pc = 0x16eed0; return; }
    ctx->pc = 0x16F738u;
label_16f738:
    // 0x16f738: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16f738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f73c:
    // 0x16f73c: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x16f73cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
label_16f740:
    // 0x16f740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16f744:
    // 0x16f744: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16f744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f748:
    // 0x16f748: 0x24c61c70  addiu       $a2, $a2, 0x1C70
    ctx->pc = 0x16f748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7280));
label_16f74c:
    // 0x16f74c: 0xc05b8b4  jal         func_16E2D0
label_16f750:
    if (ctx->pc == 0x16F750u) {
        ctx->pc = 0x16F750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F74Cu;
        // 0x16f750: 0x278781a8  addiu       $a3, $gp, -0x7E58 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F754u;
        goto label_16f754;
    }
    ctx->pc = 0x16F74Cu;
    SET_GPR_U32(ctx, 31, 0x16F754u);
    ctx->pc = 0x16F750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F74Cu;
    // 0x16f750: 0x278781a8  addiu       $a3, $gp, -0x7E58 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E2D0u;
    { ctx->pc = 0x16e2d0; return; }
    ctx->pc = 0x16F754u;
label_16f754:
    // 0x16f754: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16f754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16f758:
    // 0x16f758: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x16f758u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_16f75c:
    // 0x16f75c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_16f760:
    if (ctx->pc == 0x16F760u) {
        ctx->pc = 0x16F764u;
        goto label_16f764;
    }
    ctx->pc = 0x16F75Cu;
    {
        const bool branch_taken_0x16f75c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f75c) {
            ctx->pc = 0x16F73Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f73c;
        }
    }
    ctx->pc = 0x16F764u;
label_16f764:
    // 0x16f764: 0x10000026  b           . + 4 + (0x26 << 2)
label_16f768:
    if (ctx->pc == 0x16F768u) {
        ctx->pc = 0x16F76Cu;
        goto label_16f76c;
    }
    ctx->pc = 0x16F764u;
    {
        const bool branch_taken_0x16f764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f764) {
            ctx->pc = 0x16F800u;
            goto label_16f800;
        }
    }
    ctx->pc = 0x16F76Cu;
label_16f76c:
    // 0x16f76c: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x16f76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_16f770:
    // 0x16f770: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x16f770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_16f774:
    // 0x16f774: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_16f778:
    if (ctx->pc == 0x16F778u) {
        ctx->pc = 0x16F778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F774u;
        // 0x16f778: 0x3c050028  lui         $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F77Cu;
        goto label_16f77c;
    }
    ctx->pc = 0x16F774u;
    {
        const bool branch_taken_0x16f774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F774u;
        // 0x16f778: 0x3c050028  lui         $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f774) {
            ctx->pc = 0x16F7C4u;
            goto label_16f7c4;
        }
    }
    ctx->pc = 0x16F77Cu;
label_16f77c:
    // 0x16f77c: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x16f77cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_16f780:
    // 0x16f780: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16f780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16f784:
    // 0x16f784: 0xc05bbb4  jal         func_16EED0
label_16f788:
    if (ctx->pc == 0x16F788u) {
        ctx->pc = 0x16F788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F784u;
        // 0x16f788: 0x24a51ab0  addiu       $a1, $a1, 0x1AB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F78Cu;
        goto label_16f78c;
    }
    ctx->pc = 0x16F784u;
    SET_GPR_U32(ctx, 31, 0x16F78Cu);
    ctx->pc = 0x16F788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F784u;
    // 0x16f788: 0x24a51ab0  addiu       $a1, $a1, 0x1AB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16EED0u;
    { ctx->pc = 0x16eed0; return; }
    ctx->pc = 0x16F78Cu;
label_16f78c:
    // 0x16f78c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16f78cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f790:
    // 0x16f790: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x16f790u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
label_16f794:
    // 0x16f794: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x16f794u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
label_16f798:
    // 0x16f798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16f79c:
    // 0x16f79c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16f79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16f7a0:
    // 0x16f7a0: 0x24c61ab0  addiu       $a2, $a2, 0x1AB0
    ctx->pc = 0x16f7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6832));
label_16f7a4:
    // 0x16f7a4: 0xc05b8b4  jal         func_16E2D0
label_16f7a8:
    if (ctx->pc == 0x16F7A8u) {
        ctx->pc = 0x16F7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F7A4u;
        // 0x16f7a8: 0x24e71a60  addiu       $a3, $a3, 0x1A60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F7ACu;
        goto label_16f7ac;
    }
    ctx->pc = 0x16F7A4u;
    SET_GPR_U32(ctx, 31, 0x16F7ACu);
    ctx->pc = 0x16F7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F7A4u;
    // 0x16f7a8: 0x24e71a60  addiu       $a3, $a3, 0x1A60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E2D0u;
    { ctx->pc = 0x16e2d0; return; }
    ctx->pc = 0x16F7ACu;
label_16f7ac:
    // 0x16f7ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16f7acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16f7b0:
    // 0x16f7b0: 0x2a030007  slti        $v1, $s0, 0x7
    ctx->pc = 0x16f7b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
label_16f7b4:
    // 0x16f7b4: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_16f7b8:
    if (ctx->pc == 0x16F7B8u) {
        ctx->pc = 0x16F7BCu;
        goto label_16f7bc;
    }
    ctx->pc = 0x16F7B4u;
    {
        const bool branch_taken_0x16f7b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f7b4) {
            ctx->pc = 0x16F790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f790;
        }
    }
    ctx->pc = 0x16F7BCu;
label_16f7bc:
    // 0x16f7bc: 0x10000010  b           . + 4 + (0x10 << 2)
label_16f7c0:
    if (ctx->pc == 0x16F7C0u) {
        ctx->pc = 0x16F7C4u;
        goto label_16f7c4;
    }
    ctx->pc = 0x16F7BCu;
    {
        const bool branch_taken_0x16f7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f7bc) {
            ctx->pc = 0x16F800u;
            goto label_16f800;
        }
    }
    ctx->pc = 0x16F7C4u;
label_16f7c4:
    // 0x16f7c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16f7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16f7c8:
    // 0x16f7c8: 0xc05bbb4  jal         func_16EED0
label_16f7cc:
    if (ctx->pc == 0x16F7CCu) {
        ctx->pc = 0x16F7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F7C8u;
        // 0x16f7cc: 0x24a51b90  addiu       $a1, $a1, 0x1B90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F7D0u;
        goto label_16f7d0;
    }
    ctx->pc = 0x16F7C8u;
    SET_GPR_U32(ctx, 31, 0x16F7D0u);
    ctx->pc = 0x16F7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F7C8u;
    // 0x16f7cc: 0x24a51b90  addiu       $a1, $a1, 0x1B90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16EED0u;
    { ctx->pc = 0x16eed0; return; }
    ctx->pc = 0x16F7D0u;
label_16f7d0:
    // 0x16f7d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16f7d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f7d4:
    // 0x16f7d4: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x16f7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
label_16f7d8:
    // 0x16f7d8: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x16f7d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
label_16f7dc:
    // 0x16f7dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16f7e0:
    // 0x16f7e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16f7e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16f7e4:
    // 0x16f7e4: 0x24c61b90  addiu       $a2, $a2, 0x1B90
    ctx->pc = 0x16f7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7056));
label_16f7e8:
    // 0x16f7e8: 0xc05b8b4  jal         func_16E2D0
label_16f7ec:
    if (ctx->pc == 0x16F7ECu) {
        ctx->pc = 0x16F7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F7E8u;
        // 0x16f7ec: 0x24e71a90  addiu       $a3, $a3, 0x1A90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F7F0u;
        goto label_16f7f0;
    }
    ctx->pc = 0x16F7E8u;
    SET_GPR_U32(ctx, 31, 0x16F7F0u);
    ctx->pc = 0x16F7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F7E8u;
    // 0x16f7ec: 0x24e71a90  addiu       $a3, $a3, 0x1A90 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E2D0u;
    { ctx->pc = 0x16e2d0; return; }
    ctx->pc = 0x16F7F0u;
label_16f7f0:
    // 0x16f7f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16f7f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16f7f4:
    // 0x16f7f4: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x16f7f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
label_16f7f8:
    // 0x16f7f8: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_16f7fc:
    if (ctx->pc == 0x16F7FCu) {
        ctx->pc = 0x16F800u;
        goto label_16f800;
    }
    ctx->pc = 0x16F7F8u;
    {
        const bool branch_taken_0x16f7f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f7f8) {
            ctx->pc = 0x16F7D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f7d4;
        }
    }
    ctx->pc = 0x16F800u;
label_16f800:
    // 0x16f800: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16f800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16f804:
    // 0x16f804: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16f804u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16f808:
    // 0x16f808: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16f808u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16f80c:
    // 0x16f80c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16f80cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16f810:
    // 0x16f810: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16f810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16f814:
    // 0x16f814: 0x3e00008  jr          $ra
label_16f818:
    if (ctx->pc == 0x16F818u) {
        ctx->pc = 0x16F818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F814u;
        // 0x16f818: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F81Cu;
        goto label_16f81c;
    }
    ctx->pc = 0x16F814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F814u;
        // 0x16f818: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F81Cu;
label_16f81c:
    // 0x16f81c: 0x0  nop
    ctx->pc = 0x16f81cu;
    // NOP
label_16f820:
    // 0x16f820: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x16f820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_16f824:
    // 0x16f824: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x16f824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_16f828:
    // 0x16f828: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16f828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_16f82c:
    // 0x16f82c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16f82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_16f830:
    // 0x16f830: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16f830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16f834:
    // 0x16f834: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16f834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16f838:
    // 0x16f838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16f838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16f83c:
    // 0x16f83c: 0x8f8286f0  lw          $v0, -0x7910($gp)
    ctx->pc = 0x16f83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936304)));
label_16f840:
    // 0x16f840: 0x1440009b  bnez        $v0, . + 4 + (0x9B << 2)
label_16f844:
    if (ctx->pc == 0x16F844u) {
        ctx->pc = 0x16F844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F840u;
        // 0x16f844: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F848u;
        goto label_16f848;
    }
    ctx->pc = 0x16F840u;
    {
        const bool branch_taken_0x16f840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F840u;
        // 0x16f844: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f840) {
            ctx->pc = 0x16FAB0u;
            goto label_16fab0;
        }
    }
    ctx->pc = 0x16F848u;
label_16f848:
    // 0x16f848: 0xc08dc22  jal         func_237088
label_16f84c:
    if (ctx->pc == 0x16F84Cu) {
        ctx->pc = 0x16F84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F848u;
        // 0x16f84c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F850u;
        goto label_16f850;
    }
    ctx->pc = 0x16F848u;
    SET_GPR_U32(ctx, 31, 0x16F850u);
    ctx->pc = 0x16F84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F848u;
    // 0x16f84c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237088u;
    { ctx->pc = 0x237088; return; }
    ctx->pc = 0x16F850u;
label_16f850:
    // 0x16f850: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_16f854:
    if (ctx->pc == 0x16F854u) {
        ctx->pc = 0x16F854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F850u;
        // 0x16f854: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F858u;
        goto label_16f858;
    }
    ctx->pc = 0x16F850u;
    {
        const bool branch_taken_0x16f850 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x16F854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F850u;
        // 0x16f854: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f850) {
            ctx->pc = 0x16F860u;
            goto label_16f860;
        }
    }
    ctx->pc = 0x16F858u;
label_16f858:
    // 0x16f858: 0x10000192  b           . + 4 + (0x192 << 2)
label_16f85c:
    if (ctx->pc == 0x16F85Cu) {
        ctx->pc = 0x16F85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F858u;
        // 0x16f85c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F860u;
        goto label_16f860;
    }
    ctx->pc = 0x16F858u;
    {
        const bool branch_taken_0x16f858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F858u;
        // 0x16f85c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f858) {
            ctx->pc = 0x16FEA4u;
            goto label_16fea4;
        }
    }
    ctx->pc = 0x16F860u;
label_16f860:
    // 0x16f860: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x16f860u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_16f864:
    // 0x16f864: 0xac201f7c  sw          $zero, 0x1F7C($at)
    ctx->pc = 0x16f864u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8060), GPR_U32(ctx, 0));
label_16f868:
    // 0x16f868: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16f868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f86c:
    // 0x16f86c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16f86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16f870:
    // 0x16f870: 0x24a51f60  addiu       $a1, $a1, 0x1F60
    ctx->pc = 0x16f870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8032));
label_16f874:
    // 0x16f874: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16f874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f878:
    // 0x16f878: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x16f878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_16f87c:
    // 0x16f87c: 0xc08d590  jal         func_235640
label_16f880:
    if (ctx->pc == 0x16F880u) {
        ctx->pc = 0x16F880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F87Cu;
        // 0x16f880: 0xac201f74  sw          $zero, 0x1F74($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8052), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F884u;
        goto label_16f884;
    }
    ctx->pc = 0x16F87Cu;
    SET_GPR_U32(ctx, 31, 0x16F884u);
    ctx->pc = 0x16F880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F87Cu;
    // 0x16f880: 0xac201f74  sw          $zero, 0x1F74($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8052), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235640u;
    { ctx->pc = 0x235640; return; }
    ctx->pc = 0x16F884u;
label_16f884:
    // 0x16f884: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16f884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f888:
    // 0x16f888: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16f888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f88c:
    // 0x16f88c: 0xc08d398  jal         func_234E60
label_16f890:
    if (ctx->pc == 0x16F890u) {
        ctx->pc = 0x16F890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F88Cu;
        // 0x16f890: 0x3c0600c0  lui         $a2, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F894u;
        goto label_16f894;
    }
    ctx->pc = 0x16F88Cu;
    SET_GPR_U32(ctx, 31, 0x16F894u);
    ctx->pc = 0x16F890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F88Cu;
    // 0x16f890: 0x3c0600c0  lui         $a2, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234E60u;
    { ctx->pc = 0x234e60; return; }
    ctx->pc = 0x16F894u;
label_16f894:
    // 0x16f894: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_16f898:
    if (ctx->pc == 0x16F898u) {
        ctx->pc = 0x16F89Cu;
        goto label_16f89c;
    }
    ctx->pc = 0x16F894u;
    {
        const bool branch_taken_0x16f894 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16f894) {
            ctx->pc = 0x16F8A4u;
            goto label_16f8a4;
        }
    }
    ctx->pc = 0x16F89Cu;
label_16f89c:
    // 0x16f89c: 0x10000180  b           . + 4 + (0x180 << 2)
label_16f8a0:
    if (ctx->pc == 0x16F8A0u) {
        ctx->pc = 0x16F8A4u;
        goto label_16f8a4;
    }
    ctx->pc = 0x16F89Cu;
    {
        const bool branch_taken_0x16f89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f89c) {
            ctx->pc = 0x16FEA0u;
            goto label_16fea0;
        }
    }
    ctx->pc = 0x16F8A4u;
label_16f8a4:
    // 0x16f8a4: 0xc06ad9c  jal         func_1AB670
label_16f8a8:
    if (ctx->pc == 0x16F8A8u) {
        ctx->pc = 0x16F8ACu;
        goto label_16f8ac;
    }
    ctx->pc = 0x16F8A4u;
    SET_GPR_U32(ctx, 31, 0x16F8ACu);
    ctx->pc = 0x1AB670u;
    { ctx->pc = 0x1ab670; return; }
    ctx->pc = 0x16F8ACu;
label_16f8ac:
    // 0x16f8ac: 0xc06adbe  jal         func_1AB6F8
label_16f8b0:
    if (ctx->pc == 0x16F8B0u) {
        ctx->pc = 0x16F8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F8ACu;
        // 0x16f8b0: 0x3c040002  lui         $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F8B4u;
        goto label_16f8b4;
    }
    ctx->pc = 0x16F8ACu;
    SET_GPR_U32(ctx, 31, 0x16F8B4u);
    ctx->pc = 0x16F8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F8ACu;
    // 0x16f8b0: 0x3c040002  lui         $a0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB6F8u;
    { ctx->pc = 0x1ab6f8; return; }
    ctx->pc = 0x16F8B4u;
label_16f8b4:
    // 0x16f8b4: 0xaf82872c  sw          $v0, -0x78D4($gp)
    ctx->pc = 0x16f8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936364), GPR_U32(ctx, 2));
label_16f8b8:
    // 0x16f8b8: 0x8f82872c  lw          $v0, -0x78D4($gp)
    ctx->pc = 0x16f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936364)));
label_16f8bc:
    // 0x16f8bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_16f8c0:
    if (ctx->pc == 0x16F8C0u) {
        ctx->pc = 0x16F8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F8BCu;
        // 0x16f8c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F8C4u;
        goto label_16f8c4;
    }
    ctx->pc = 0x16F8BCu;
    {
        const bool branch_taken_0x16f8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F8BCu;
        // 0x16f8c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f8bc) {
            ctx->pc = 0x16F8CCu;
            goto label_16f8cc;
        }
    }
    ctx->pc = 0x16F8C4u;
label_16f8c4:
    // 0x16f8c4: 0x10000176  b           . + 4 + (0x176 << 2)
label_16f8c8:
    if (ctx->pc == 0x16F8C8u) {
        ctx->pc = 0x16F8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F8C4u;
        // 0x16f8c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F8CCu;
        goto label_16f8cc;
    }
    ctx->pc = 0x16F8C4u;
    {
        const bool branch_taken_0x16f8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F8C4u;
        // 0x16f8c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f8c4) {
            ctx->pc = 0x16FEA0u;
            goto label_16fea0;
        }
    }
    ctx->pc = 0x16F8CCu;
label_16f8cc:
    // 0x16f8cc: 0x24055010  addiu       $a1, $zero, 0x5010
    ctx->pc = 0x16f8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20496));
label_16f8d0:
    // 0x16f8d0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x16f8d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16f8d4:
    // 0x16f8d4: 0xc08d80e  jal         func_236038
label_16f8d8:
    if (ctx->pc == 0x16F8D8u) {
        ctx->pc = 0x16F8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F8D4u;
        // 0x16f8d8: 0x2407010c  addiu       $a3, $zero, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F8DCu;
        goto label_16f8dc;
    }
    ctx->pc = 0x16F8D4u;
    SET_GPR_U32(ctx, 31, 0x16F8DCu);
    ctx->pc = 0x16F8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F8D4u;
    // 0x16f8d8: 0x2407010c  addiu       $a3, $zero, 0x10C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236038u;
    { ctx->pc = 0x236038; return; }
    ctx->pc = 0x16F8DCu;
label_16f8dc:
    // 0x16f8dc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_16f8e0:
    if (ctx->pc == 0x16F8E0u) {
        ctx->pc = 0x16F8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F8DCu;
        // 0x16f8e0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F8E4u;
        goto label_16f8e4;
    }
    ctx->pc = 0x16F8DCu;
    {
        const bool branch_taken_0x16f8dc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x16F8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F8DCu;
        // 0x16f8e0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f8dc) {
            ctx->pc = 0x16F8ECu;
            goto label_16f8ec;
        }
    }
    ctx->pc = 0x16F8E4u;
label_16f8e4:
    // 0x16f8e4: 0x1000016e  b           . + 4 + (0x16E << 2)
label_16f8e8:
    if (ctx->pc == 0x16F8E8u) {
        ctx->pc = 0x16F8ECu;
        goto label_16f8ec;
    }
    ctx->pc = 0x16F8E4u;
    {
        const bool branch_taken_0x16f8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f8e4) {
            ctx->pc = 0x16FEA0u;
            goto label_16fea0;
        }
    }
    ctx->pc = 0x16F8ECu;
label_16f8ec:
    // 0x16f8ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16f8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16f8f0:
    // 0x16f8f0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x16f8f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16f8f4:
    // 0x16f8f4: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x16f8f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_16f8f8:
    // 0x16f8f8: 0x24080017  addiu       $t0, $zero, 0x17
    ctx->pc = 0x16f8f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_16f8fc:
    // 0x16f8fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16f8fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f900:
    // 0x16f900: 0xc08d84e  jal         func_236138
label_16f904:
    if (ctx->pc == 0x16F904u) {
        ctx->pc = 0x16F904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F900u;
        // 0x16f904: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F908u;
        goto label_16f908;
    }
    ctx->pc = 0x16F900u;
    SET_GPR_U32(ctx, 31, 0x16F908u);
    ctx->pc = 0x16F904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F900u;
    // 0x16f904: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236138u;
    { ctx->pc = 0x236138; return; }
    ctx->pc = 0x16F908u;
label_16f908:
    // 0x16f908: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_16f90c:
    if (ctx->pc == 0x16F90Cu) {
        ctx->pc = 0x16F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F908u;
        // 0x16f90c: 0x3c050028  lui         $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F910u;
        goto label_16f910;
    }
    ctx->pc = 0x16F908u;
    {
        const bool branch_taken_0x16f908 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x16F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F908u;
        // 0x16f90c: 0x3c050028  lui         $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f908) {
            ctx->pc = 0x16F918u;
            goto label_16f918;
        }
    }
    ctx->pc = 0x16F910u;
label_16f910:
    // 0x16f910: 0x10000163  b           . + 4 + (0x163 << 2)
label_16f914:
    if (ctx->pc == 0x16F914u) {
        ctx->pc = 0x16F918u;
        goto label_16f918;
    }
    ctx->pc = 0x16F910u;
    {
        const bool branch_taken_0x16f910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f910) {
            ctx->pc = 0x16FEA0u;
            goto label_16fea0;
        }
    }
    ctx->pc = 0x16F918u;
label_16f918:
    // 0x16f918: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16f918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f91c:
    // 0x16f91c: 0x24a51ef0  addiu       $a1, $a1, 0x1EF0
    ctx->pc = 0x16f91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7920));
label_16f920:
    // 0x16f920: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16f920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f924:
    // 0x16f924: 0xc08d590  jal         func_235640
label_16f928:
    if (ctx->pc == 0x16F928u) {
        ctx->pc = 0x16F928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F924u;
        // 0x16f928: 0x2407000d  addiu       $a3, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F92Cu;
        goto label_16f92c;
    }
    ctx->pc = 0x16F924u;
    SET_GPR_U32(ctx, 31, 0x16F92Cu);
    ctx->pc = 0x16F928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F924u;
    // 0x16f928: 0x2407000d  addiu       $a3, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235640u;
    { ctx->pc = 0x235640; return; }
    ctx->pc = 0x16F92Cu;
label_16f92c:
    // 0x16f92c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x16f92cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_16f930:
    // 0x16f930: 0x24020103  addiu       $v0, $zero, 0x103
    ctx->pc = 0x16f930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
label_16f934:
    // 0x16f934: 0x27b00064  addiu       $s0, $sp, 0x64
    ctx->pc = 0x16f934u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_16f938:
    // 0x16f938: 0x24034e20  addiu       $v1, $zero, 0x4E20
    ctx->pc = 0x16f938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
label_16f93c:
    // 0x16f93c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x16f93cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_16f940:
    // 0x16f940: 0x27b1006a  addiu       $s1, $sp, 0x6A
    ctx->pc = 0x16f940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 106));
label_16f944:
    // 0x16f944: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x16f944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_16f948:
    // 0x16f948: 0x27b20068  addiu       $s2, $sp, 0x68
    ctx->pc = 0x16f948u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_16f94c:
    // 0x16f94c: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x16f94cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_16f950:
    // 0x16f950: 0x24020fff  addiu       $v0, $zero, 0xFFF
    ctx->pc = 0x16f950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
label_16f954:
    // 0x16f954: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x16f954u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
label_16f958:
    // 0x16f958: 0x27b30076  addiu       $s3, $sp, 0x76
    ctx->pc = 0x16f958u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 118));
label_16f95c:
    // 0x16f95c: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x16f95cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
label_16f960:
    // 0x16f960: 0x27b40074  addiu       $s4, $sp, 0x74
    ctx->pc = 0x16f960u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_16f964:
    // 0x16f964: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x16f964u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
label_16f968:
    // 0x16f968: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16f968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f96c:
    // 0x16f96c: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x16f96cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
label_16f970:
    // 0x16f970: 0xc08d36c  jal         func_234DB0
label_16f974:
    if (ctx->pc == 0x16F974u) {
        ctx->pc = 0x16F974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F970u;
        // 0x16f974: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F978u;
        goto label_16f978;
    }
    ctx->pc = 0x16F970u;
    SET_GPR_U32(ctx, 31, 0x16F978u);
    ctx->pc = 0x16F974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F970u;
    // 0x16f974: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234DB0u;
    { ctx->pc = 0x234db0; return; }
    ctx->pc = 0x16F978u;
label_16f978:
    // 0x16f978: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16f978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f97c:
    // 0x16f97c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x16f97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_16f980:
    // 0x16f980: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x16f980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_16f984:
    // 0x16f984: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x16f984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_16f988:
    // 0x16f988: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x16f988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_16f98c:
    // 0x16f98c: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x16f98cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
label_16f990:
    // 0x16f990: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x16f990u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
label_16f994:
    // 0x16f994: 0xa6600000  sh          $zero, 0x0($s3)
    ctx->pc = 0x16f994u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
label_16f998:
    // 0x16f998: 0xc08d36c  jal         func_234DB0
label_16f99c:
    if (ctx->pc == 0x16F99Cu) {
        ctx->pc = 0x16F99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F998u;
        // 0x16f99c: 0xa6800000  sh          $zero, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F9A0u;
        goto label_16f9a0;
    }
    ctx->pc = 0x16F998u;
    SET_GPR_U32(ctx, 31, 0x16F9A0u);
    ctx->pc = 0x16F99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F998u;
    // 0x16f99c: 0xa6800000  sh          $zero, 0x0($s4) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234DB0u;
    { ctx->pc = 0x234db0; return; }
    ctx->pc = 0x16F9A0u;
label_16f9a0:
    // 0x16f9a0: 0xc06c0b8  jal         func_1B02E0
label_16f9a4:
    if (ctx->pc == 0x16F9A4u) {
        ctx->pc = 0x16F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F9A0u;
        // 0x16f9a4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F9A8u;
        goto label_16f9a8;
    }
    ctx->pc = 0x16F9A0u;
    SET_GPR_U32(ctx, 31, 0x16F9A8u);
    ctx->pc = 0x16F9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F9A0u;
    // 0x16f9a4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B02E0u;
    { ctx->pc = 0x1b02e0; return; }
    ctx->pc = 0x16F9A8u;
label_16f9a8:
    // 0x16f9a8: 0x0  nop
    ctx->pc = 0x16f9a8u;
    // NOP
label_16f9ac:
    // 0x16f9ac: 0x0  nop
    ctx->pc = 0x16f9acu;
    // NOP
label_16f9b0:
    // 0x16f9b0: 0x0  nop
    ctx->pc = 0x16f9b0u;
    // NOP
label_16f9b4:
    // 0x16f9b4: 0x0  nop
    ctx->pc = 0x16f9b4u;
    // NOP
label_16f9b8:
    // 0x16f9b8: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_16f9bc:
    if (ctx->pc == 0x16F9BCu) {
        ctx->pc = 0x16F9C0u;
        goto label_16f9c0;
    }
    ctx->pc = 0x16F9B8u;
    {
        const bool branch_taken_0x16f9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f9b8) {
            ctx->pc = 0x16F9A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f9a0;
        }
    }
    ctx->pc = 0x16F9C0u;
label_16f9c0:
    // 0x16f9c0: 0x8f858158  lw          $a1, -0x7EA8($gp)
    ctx->pc = 0x16f9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934872)));
label_16f9c4:
    // 0x16f9c4: 0xc06be58  jal         func_1AF960
label_16f9c8:
    if (ctx->pc == 0x16F9C8u) {
        ctx->pc = 0x16F9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F9C4u;
        // 0x16f9c8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F9CCu;
        goto label_16f9cc;
    }
    ctx->pc = 0x16F9C4u;
    SET_GPR_U32(ctx, 31, 0x16F9CCu);
    ctx->pc = 0x16F9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F9C4u;
    // 0x16f9c8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF960u;
    { ctx->pc = 0x1af960; return; }
    ctx->pc = 0x16F9CCu;
label_16f9cc:
    // 0x16f9cc: 0x0  nop
    ctx->pc = 0x16f9ccu;
    // NOP
label_16f9d0:
    // 0x16f9d0: 0x0  nop
    ctx->pc = 0x16f9d0u;
    // NOP
label_16f9d4:
    // 0x16f9d4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_16f9d8:
    if (ctx->pc == 0x16F9D8u) {
        ctx->pc = 0x16F9DCu;
        goto label_16f9dc;
    }
    ctx->pc = 0x16F9D4u;
    {
        const bool branch_taken_0x16f9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f9d4) {
            ctx->pc = 0x16F9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f9c0;
        }
    }
    ctx->pc = 0x16F9DCu;
label_16f9dc:
    // 0x16f9dc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x16f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_16f9e0:
    // 0x16f9e0: 0xaf82816c  sw          $v0, -0x7E94($gp)
    ctx->pc = 0x16f9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934892), GPR_U32(ctx, 2));
label_16f9e4:
    // 0x16f9e4: 0x8f85815c  lw          $a1, -0x7EA4($gp)
    ctx->pc = 0x16f9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934876)));
label_16f9e8:
    // 0x16f9e8: 0xc06be58  jal         func_1AF960
label_16f9ec:
    if (ctx->pc == 0x16F9ECu) {
        ctx->pc = 0x16F9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F9E8u;
        // 0x16f9ec: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F9F0u;
        goto label_16f9f0;
    }
    ctx->pc = 0x16F9E8u;
    SET_GPR_U32(ctx, 31, 0x16F9F0u);
    ctx->pc = 0x16F9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F9E8u;
    // 0x16f9ec: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF960u;
    { ctx->pc = 0x1af960; return; }
    ctx->pc = 0x16F9F0u;
label_16f9f0:
    // 0x16f9f0: 0x0  nop
    ctx->pc = 0x16f9f0u;
    // NOP
label_16f9f4:
    // 0x16f9f4: 0x0  nop
    ctx->pc = 0x16f9f4u;
    // NOP
label_16f9f8:
    // 0x16f9f8: 0x0  nop
    ctx->pc = 0x16f9f8u;
    // NOP
label_16f9fc:
    // 0x16f9fc: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_16fa00:
    if (ctx->pc == 0x16FA00u) {
        ctx->pc = 0x16FA04u;
        goto label_16fa04;
    }
    ctx->pc = 0x16F9FCu;
    {
        const bool branch_taken_0x16f9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f9fc) {
            ctx->pc = 0x16F9E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f9e4;
        }
    }
    ctx->pc = 0x16FA04u;
label_16fa04:
    // 0x16fa04: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x16fa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_16fa08:
    // 0x16fa08: 0xaf828168  sw          $v0, -0x7E98($gp)
    ctx->pc = 0x16fa08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934888), GPR_U32(ctx, 2));
label_16fa0c:
    // 0x16fa0c: 0x8f858160  lw          $a1, -0x7EA0($gp)
    ctx->pc = 0x16fa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934880)));
label_16fa10:
    // 0x16fa10: 0xc06be58  jal         func_1AF960
label_16fa14:
    if (ctx->pc == 0x16FA14u) {
        ctx->pc = 0x16FA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FA10u;
        // 0x16fa14: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FA18u;
        goto label_16fa18;
    }
    ctx->pc = 0x16FA10u;
    SET_GPR_U32(ctx, 31, 0x16FA18u);
    ctx->pc = 0x16FA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FA10u;
    // 0x16fa14: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF960u;
    { ctx->pc = 0x1af960; return; }
    ctx->pc = 0x16FA18u;
label_16fa18:
    // 0x16fa18: 0x0  nop
    ctx->pc = 0x16fa18u;
    // NOP
label_16fa1c:
    // 0x16fa1c: 0x0  nop
    ctx->pc = 0x16fa1cu;
    // NOP
label_16fa20:
    // 0x16fa20: 0x0  nop
    ctx->pc = 0x16fa20u;
    // NOP
label_16fa24:
    // 0x16fa24: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_16fa28:
    if (ctx->pc == 0x16FA28u) {
        ctx->pc = 0x16FA2Cu;
        goto label_16fa2c;
    }
    ctx->pc = 0x16FA24u;
    {
        const bool branch_taken_0x16fa24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16fa24) {
            ctx->pc = 0x16FA0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16fa0c;
        }
    }
    ctx->pc = 0x16FA2Cu;
label_16fa2c:
    // 0x16fa2c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x16fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_16fa30:
    // 0x16fa30: 0xaf828170  sw          $v0, -0x7E90($gp)
    ctx->pc = 0x16fa30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934896), GPR_U32(ctx, 2));
label_16fa34:
    // 0x16fa34: 0x8f858164  lw          $a1, -0x7E9C($gp)
    ctx->pc = 0x16fa34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934884)));
label_16fa38:
    // 0x16fa38: 0xc06be58  jal         func_1AF960
label_16fa3c:
    if (ctx->pc == 0x16FA3Cu) {
        ctx->pc = 0x16FA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FA38u;
        // 0x16fa3c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FA40u;
        goto label_16fa40;
    }
    ctx->pc = 0x16FA38u;
    SET_GPR_U32(ctx, 31, 0x16FA40u);
    ctx->pc = 0x16FA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FA38u;
    // 0x16fa3c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF960u;
    { ctx->pc = 0x1af960; return; }
    ctx->pc = 0x16FA40u;
label_16fa40:
    // 0x16fa40: 0x0  nop
    ctx->pc = 0x16fa40u;
    // NOP
label_16fa44:
    // 0x16fa44: 0x0  nop
    ctx->pc = 0x16fa44u;
    // NOP
label_16fa48:
    // 0x16fa48: 0x0  nop
    ctx->pc = 0x16fa48u;
    // NOP
label_16fa4c:
    // 0x16fa4c: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_16fa50:
    if (ctx->pc == 0x16FA50u) {
        ctx->pc = 0x16FA54u;
        goto label_16fa54;
    }
    ctx->pc = 0x16FA4Cu;
    {
        const bool branch_taken_0x16fa4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16fa4c) {
            ctx->pc = 0x16FA34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16fa34;
        }
    }
    ctx->pc = 0x16FA54u;
label_16fa54:
    // 0x16fa54: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x16fa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_16fa58:
    // 0x16fa58: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16fa58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16fa5c:
    // 0x16fa5c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16fa5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16fa60:
    // 0x16fa60: 0xaf828174  sw          $v0, -0x7E8C($gp)
    ctx->pc = 0x16fa60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934900), GPR_U32(ctx, 2));
label_16fa64:
    // 0x16fa64: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x16fa64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_16fa68:
    // 0x16fa68: 0x24426290  addiu       $v0, $v0, 0x6290
    ctx->pc = 0x16fa68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25232));
label_16fa6c:
    // 0x16fa6c: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x16fa6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_16fa70:
    // 0x16fa70: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x16fa70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16fa74:
    // 0x16fa74: 0xc06be58  jal         func_1AF960
label_16fa78:
    if (ctx->pc == 0x16FA78u) {
        ctx->pc = 0x16FA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FA74u;
        // 0x16fa78: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FA7Cu;
        goto label_16fa7c;
    }
    ctx->pc = 0x16FA74u;
    SET_GPR_U32(ctx, 31, 0x16FA7Cu);
    ctx->pc = 0x16FA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FA74u;
    // 0x16fa78: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF960u;
    { ctx->pc = 0x1af960; return; }
    ctx->pc = 0x16FA7Cu;
label_16fa7c:
    // 0x16fa7c: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_16fa80:
    if (ctx->pc == 0x16FA80u) {
        ctx->pc = 0x16FA84u;
        goto label_16fa84;
    }
    ctx->pc = 0x16FA7Cu;
    {
        const bool branch_taken_0x16fa7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16fa7c) {
            ctx->pc = 0x16FA64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16fa64;
        }
    }
    ctx->pc = 0x16FA84u;
label_16fa84:
    // 0x16fa84: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x16fa84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_16fa88:
    // 0x16fa88: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16fa88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16fa8c:
    // 0x16fa8c: 0x2a020068  slti        $v0, $s0, 0x68
    ctx->pc = 0x16fa8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)104) ? 1 : 0);
label_16fa90:
    // 0x16fa90: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x16fa90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_16fa94:
    // 0x16fa94: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x16fa94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_16fa98:
    // 0x16fa98: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x16fa98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_16fa9c:
    // 0x16fa9c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_16faa0:
    if (ctx->pc == 0x16FAA0u) {
        ctx->pc = 0x16FAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FA9Cu;
        // 0x16faa0: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FAA4u;
        goto label_16faa4;
    }
    ctx->pc = 0x16FA9Cu;
    {
        const bool branch_taken_0x16fa9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16FAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FA9Cu;
        // 0x16faa0: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fa9c) {
            ctx->pc = 0x16FA64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16fa64;
        }
    }
    ctx->pc = 0x16FAA4u;
label_16faa4:
    // 0x16faa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16faa8:
    // 0x16faa8: 0x1000004b  b           . + 4 + (0x4B << 2)
label_16faac:
    if (ctx->pc == 0x16FAACu) {
        ctx->pc = 0x16FAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FAA8u;
        // 0x16faac: 0xaf8286f0  sw          $v0, -0x7910($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FAB0u;
        goto label_16fab0;
    }
    ctx->pc = 0x16FAA8u;
    {
        const bool branch_taken_0x16faa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FAA8u;
        // 0x16faac: 0xaf8286f0  sw          $v0, -0x7910($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16faa8) {
            ctx->pc = 0x16FBD8u;
            goto label_16fbd8;
        }
    }
    ctx->pc = 0x16FAB0u;
label_16fab0:
    // 0x16fab0: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x16fab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_16fab4:
    // 0x16fab4: 0xac201f7c  sw          $zero, 0x1F7C($at)
    ctx->pc = 0x16fab4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8060), GPR_U32(ctx, 0));
label_16fab8:
    // 0x16fab8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16fab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16fabc:
    // 0x16fabc: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16fabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16fac0:
    // 0x16fac0: 0x24a51f60  addiu       $a1, $a1, 0x1F60
    ctx->pc = 0x16fac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8032));
label_16fac4:
    // 0x16fac4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16fac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16fac8:
    // 0x16fac8: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x16fac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_16facc:
    // 0x16facc: 0xc08d590  jal         func_235640
label_16fad0:
    if (ctx->pc == 0x16FAD0u) {
        ctx->pc = 0x16FAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FACCu;
        // 0x16fad0: 0xac201f74  sw          $zero, 0x1F74($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8052), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FAD4u;
        goto label_16fad4;
    }
    ctx->pc = 0x16FACCu;
    SET_GPR_U32(ctx, 31, 0x16FAD4u);
    ctx->pc = 0x16FAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FACCu;
    // 0x16fad0: 0xac201f74  sw          $zero, 0x1F74($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8052), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235640u;
    { ctx->pc = 0x235640; return; }
    ctx->pc = 0x16FAD4u;
label_16fad4:
    // 0x16fad4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16fad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16fad8:
    // 0x16fad8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16fad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16fadc:
    // 0x16fadc: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16fadcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16fae0:
    // 0x16fae0: 0xc08d8ee  jal         func_2363B8
label_16fae4:
    if (ctx->pc == 0x16FAE4u) {
        ctx->pc = 0x16FAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FAE0u;
        // 0x16fae4: 0xac201eb0  sw          $zero, 0x1EB0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FAE8u;
        goto label_16fae8;
    }
    ctx->pc = 0x16FAE0u;
    SET_GPR_U32(ctx, 31, 0x16FAE8u);
    ctx->pc = 0x16FAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FAE0u;
    // 0x16fae4: 0xac201eb0  sw          $zero, 0x1EB0($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2363B8u;
    { ctx->pc = 0x2363b8; return; }
    ctx->pc = 0x16FAE8u;
label_16fae8:
    // 0x16fae8: 0x8f82817c  lw          $v0, -0x7E84($gp)
    ctx->pc = 0x16fae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
label_16faec:
    // 0x16faec: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_16faf0:
    if (ctx->pc == 0x16FAF0u) {
        ctx->pc = 0x16FAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FAECu;
        // 0x16faf0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FAF4u;
        goto label_16faf4;
    }
    ctx->pc = 0x16FAECu;
    {
        const bool branch_taken_0x16faec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FAECu;
        // 0x16faf0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16faec) {
            ctx->pc = 0x16FB90u;
            goto label_16fb90;
        }
    }
    ctx->pc = 0x16FAF4u;
label_16faf4:
    // 0x16faf4: 0xc08d30c  jal         func_234C30
label_16faf8:
    if (ctx->pc == 0x16FAF8u) {
        ctx->pc = 0x16FAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FAF4u;
        // 0x16faf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FAFCu;
        goto label_16fafc;
    }
    ctx->pc = 0x16FAF4u;
    SET_GPR_U32(ctx, 31, 0x16FAFCu);
    ctx->pc = 0x16FAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FAF4u;
    // 0x16faf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234C30u;
    { ctx->pc = 0x234c30; return; }
    ctx->pc = 0x16FAFCu;
label_16fafc:
    // 0x16fafc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16fafcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16fb00:
    // 0x16fb00: 0x1000001e  b           . + 4 + (0x1E << 2)
label_16fb04:
    if (ctx->pc == 0x16FB04u) {
        ctx->pc = 0x16FB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB00u;
        // 0x16fb04: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FB08u;
        goto label_16fb08;
    }
    ctx->pc = 0x16FB00u;
    {
        const bool branch_taken_0x16fb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB00u;
        // 0x16fb04: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb00) {
            ctx->pc = 0x16FB7Cu;
            goto label_16fb7c;
        }
    }
    ctx->pc = 0x16FB08u;
label_16fb08:
    // 0x16fb08: 0x8f828710  lw          $v0, -0x78F0($gp)
    ctx->pc = 0x16fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16fb0c:
    // 0x16fb0c: 0x3c032002  lui         $v1, 0x2002
    ctx->pc = 0x16fb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8194 << 16));
label_16fb10:
    // 0x16fb10: 0x2c42007f  sltiu       $v0, $v0, 0x7F
    ctx->pc = 0x16fb10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16fb14:
    // 0x16fb14: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_16fb18:
    if (ctx->pc == 0x16FB18u) {
        ctx->pc = 0x16FB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB14u;
        // 0x16fb18: 0x2438825  or          $s1, $s2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FB1Cu;
        goto label_16fb1c;
    }
    ctx->pc = 0x16FB14u;
    {
        const bool branch_taken_0x16fb14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16FB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB14u;
        // 0x16fb18: 0x2438825  or          $s1, $s2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb14) {
            ctx->pc = 0x16FB44u;
            goto label_16fb44;
        }
    }
    ctx->pc = 0x16FB1Cu;
label_16fb1c:
    // 0x16fb1c: 0x0  nop
    ctx->pc = 0x16fb1cu;
    // NOP
label_16fb20:
    // 0x16fb20: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16fb20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16fb24:
    // 0x16fb24: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16fb24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16fb28:
    // 0x16fb28: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16fb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16fb2c:
    // 0x16fb2c: 0xc08d61c  jal         func_235870
label_16fb30:
    if (ctx->pc == 0x16FB30u) {
        ctx->pc = 0x16FB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB2Cu;
        // 0x16fb30: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FB34u;
        goto label_16fb34;
    }
    ctx->pc = 0x16FB2Cu;
    SET_GPR_U32(ctx, 31, 0x16FB34u);
    ctx->pc = 0x16FB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FB2Cu;
    // 0x16fb30: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16FB34u;
label_16fb34:
    // 0x16fb34: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16fb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16fb38:
    // 0x16fb38: 0x1043fff8  beq         $v0, $v1, . + 4 + (-0x8 << 2)
label_16fb3c:
    if (ctx->pc == 0x16FB3Cu) {
        ctx->pc = 0x16FB40u;
        goto label_16fb40;
    }
    ctx->pc = 0x16FB38u;
    {
        const bool branch_taken_0x16fb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16fb38) {
            ctx->pc = 0x16FB1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16fb1c;
        }
    }
    ctx->pc = 0x16FB40u;
label_16fb40:
    // 0x16fb40: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16fb40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16fb44:
    // 0x16fb44: 0x0  nop
    ctx->pc = 0x16fb44u;
    // NOP
label_16fb48:
    // 0x16fb48: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16fb48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16fb4c:
    // 0x16fb4c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x16fb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_16fb50:
    // 0x16fb50: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16fb50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16fb54:
    // 0x16fb54: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x16fb54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_16fb58:
    // 0x16fb58: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16fb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16fb5c:
    // 0x16fb5c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x16fb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16fb60:
    // 0x16fb60: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x16fb60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16fb64:
    // 0x16fb64: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x16fb64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16fb68:
    // 0x16fb68: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16fb6c:
    // 0x16fb6c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x16fb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_16fb70:
    // 0x16fb70: 0x8f828710  lw          $v0, -0x78F0($gp)
    ctx->pc = 0x16fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16fb74:
    // 0x16fb74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16fb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_16fb78:
    // 0x16fb78: 0xaf828710  sw          $v0, -0x78F0($gp)
    ctx->pc = 0x16fb78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 2));
label_16fb7c:
    // 0x16fb7c: 0x0  nop
    ctx->pc = 0x16fb7cu;
    // NOP
label_16fb80:
    // 0x16fb80: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x16fb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_16fb84:
    // 0x16fb84: 0x2842000f  slti        $v0, $v0, 0xF
    ctx->pc = 0x16fb84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
label_16fb88:
    // 0x16fb88: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_16fb8c:
    if (ctx->pc == 0x16FB8Cu) {
        ctx->pc = 0x16FB90u;
        goto label_16fb90;
    }
    ctx->pc = 0x16FB88u;
    {
        const bool branch_taken_0x16fb88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16fb88) {
            ctx->pc = 0x16FB08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16fb08;
        }
    }
    ctx->pc = 0x16FB90u;
label_16fb90:
    // 0x16fb90: 0x8f828710  lw          $v0, -0x78F0($gp)
    ctx->pc = 0x16fb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16fb94:
    // 0x16fb94: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_16fb98:
    if (ctx->pc == 0x16FB98u) {
        ctx->pc = 0x16FB9Cu;
        goto label_16fb9c;
    }
    ctx->pc = 0x16FB94u;
    {
        const bool branch_taken_0x16fb94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16fb94) {
            ctx->pc = 0x16FBC0u;
            goto label_16fbc0;
        }
    }
    ctx->pc = 0x16FB9Cu;
label_16fb9c:
    // 0x16fb9c: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16fb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16fba0:
    // 0x16fba0: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16fba0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16fba4:
    // 0x16fba4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16fba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16fba8:
    // 0x16fba8: 0xc08d61c  jal         func_235870
label_16fbac:
    if (ctx->pc == 0x16FBACu) {
        ctx->pc = 0x16FBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FBA8u;
        // 0x16fbac: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FBB0u;
        goto label_16fbb0;
    }
    ctx->pc = 0x16FBA8u;
    SET_GPR_U32(ctx, 31, 0x16FBB0u);
    ctx->pc = 0x16FBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FBA8u;
    // 0x16fbac: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16FBB0u;
label_16fbb0:
    // 0x16fbb0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16fbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16fbb4:
    // 0x16fbb4: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16fbb8:
    if (ctx->pc == 0x16FBB8u) {
        ctx->pc = 0x16FBBCu;
        goto label_16fbbc;
    }
    ctx->pc = 0x16FBB4u;
    {
        const bool branch_taken_0x16fbb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16fbb4) {
            ctx->pc = 0x16FB9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16fb9c;
        }
    }
    ctx->pc = 0x16FBBCu;
label_16fbbc:
    // 0x16fbbc: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16fbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16fbc0:
    // 0x16fbc0: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16fbc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16fbc4:
    // 0x16fbc4: 0xac201ed8  sw          $zero, 0x1ED8($at)
    ctx->pc = 0x16fbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7896), GPR_U32(ctx, 0));
label_16fbc8:
    // 0x16fbc8: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16fbc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16fbcc:
    // 0x16fbcc: 0xac201edc  sw          $zero, 0x1EDC($at)
    ctx->pc = 0x16fbccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7900), GPR_U32(ctx, 0));
label_16fbd0:
    // 0x16fbd0: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16fbd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16fbd4:
    // 0x16fbd4: 0xac201ee0  sw          $zero, 0x1EE0($at)
    ctx->pc = 0x16fbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7904), GPR_U32(ctx, 0));
label_16fbd8:
    // 0x16fbd8: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x16fbd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_16fbdc:
    // 0x16fbdc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16fbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16fbe0:
    // 0x16fbe0: 0x8c22c9ac  lw          $v0, -0x3654($at)
    ctx->pc = 0x16fbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953388)));
label_16fbe4:
    // 0x16fbe4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16fbe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16fbe8:
    // 0x16fbe8: 0xaf848178  sw          $a0, -0x7E88($gp)
    ctx->pc = 0x16fbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934904), GPR_U32(ctx, 4));
label_16fbec:
    // 0x16fbec: 0x24063fff  addiu       $a2, $zero, 0x3FFF
    ctx->pc = 0x16fbecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
label_16fbf0:
    // 0x16fbf0: 0xaf84817c  sw          $a0, -0x7E84($gp)
    ctx->pc = 0x16fbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934908), GPR_U32(ctx, 4));
label_16fbf4:
    // 0x16fbf4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16fbf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16fbf8:
    // 0x16fbf8: 0xaf8086f4  sw          $zero, -0x790C($gp)
    ctx->pc = 0x16fbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936308), GPR_U32(ctx, 0));
label_16fbfc:
    // 0x16fbfc: 0xc08d950  jal         func_236540
label_16fc00:
    if (ctx->pc == 0x16FC00u) {
        ctx->pc = 0x16FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FBFCu;
        // 0x16fc00: 0xaf8286f8  sw          $v0, -0x7908($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FC04u;
        goto label_16fc04;
    }
    ctx->pc = 0x16FBFCu;
    SET_GPR_U32(ctx, 31, 0x16FC04u);
    ctx->pc = 0x16FC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FBFCu;
    // 0x16fc00: 0xaf8286f8  sw          $v0, -0x7908($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936312), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236540u;
    { ctx->pc = 0x236540; return; }
    ctx->pc = 0x16FC04u;
label_16fc04:
    // 0x16fc04: 0x8f82817c  lw          $v0, -0x7E84($gp)
    ctx->pc = 0x16fc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
label_16fc08:
    // 0x16fc08: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_16fc0c:
    if (ctx->pc == 0x16FC0Cu) {
        ctx->pc = 0x16FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FC08u;
        // 0x16fc0c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FC10u;
        goto label_16fc10;
    }
    ctx->pc = 0x16FC08u;
    {
        const bool branch_taken_0x16fc08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FC08u;
        // 0x16fc0c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fc08) {
            ctx->pc = 0x16FCB0u;
            goto label_16fcb0;
        }
    }
    ctx->pc = 0x16FC10u;
label_16fc10:
    // 0x16fc10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16fc10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16fc14:
    // 0x16fc14: 0xc08d2c6  jal         func_234B18
label_16fc18:
    if (ctx->pc == 0x16FC18u) {
        ctx->pc = 0x16FC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FC14u;
        // 0x16fc18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FC1Cu;
        goto label_16fc1c;
    }
    ctx->pc = 0x16FC14u;
    SET_GPR_U32(ctx, 31, 0x16FC1Cu);
    ctx->pc = 0x16FC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FC14u;
    // 0x16fc18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234B18u;
    { ctx->pc = 0x234b18; return; }
    ctx->pc = 0x16FC1Cu;
label_16fc1c:
    // 0x16fc1c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16fc1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16fc20:
    // 0x16fc20: 0x1000001e  b           . + 4 + (0x1E << 2)
label_16fc24:
    if (ctx->pc == 0x16FC24u) {
        ctx->pc = 0x16FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FC20u;
        // 0x16fc24: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FC28u;
        goto label_16fc28;
    }
    ctx->pc = 0x16FC20u;
    {
        const bool branch_taken_0x16fc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FC20u;
        // 0x16fc24: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fc20) {
            ctx->pc = 0x16FC9Cu;
            goto label_16fc9c;
        }
    }
    ctx->pc = 0x16FC28u;
label_16fc28:
    // 0x16fc28: 0x8f828710  lw          $v0, -0x78F0($gp)
    ctx->pc = 0x16fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16fc2c:
    // 0x16fc2c: 0x3c032008  lui         $v1, 0x2008
    ctx->pc = 0x16fc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8200 << 16));
label_16fc30:
    // 0x16fc30: 0x2c42007f  sltiu       $v0, $v0, 0x7F
    ctx->pc = 0x16fc30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16fc34:
    // 0x16fc34: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_16fc38:
    if (ctx->pc == 0x16FC38u) {
        ctx->pc = 0x16FC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FC34u;
        // 0x16fc38: 0x2438825  or          $s1, $s2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FC3Cu;
        goto label_16fc3c;
    }
    ctx->pc = 0x16FC34u;
    {
        const bool branch_taken_0x16fc34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16FC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FC34u;
        // 0x16fc38: 0x2438825  or          $s1, $s2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fc34) {
            ctx->pc = 0x16FC64u;
            goto label_16fc64;
        }
    }
    ctx->pc = 0x16FC3Cu;
label_16fc3c:
    // 0x16fc3c: 0x0  nop
    ctx->pc = 0x16fc3cu;
    // NOP
label_16fc40:
    // 0x16fc40: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16fc40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16fc44:
    // 0x16fc44: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16fc44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16fc48:
    // 0x16fc48: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16fc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16fc4c:
    // 0x16fc4c: 0xc08d61c  jal         func_235870
label_16fc50:
    if (ctx->pc == 0x16FC50u) {
        ctx->pc = 0x16FC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FC4Cu;
        // 0x16fc50: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FC54u;
        goto label_16fc54;
    }
    ctx->pc = 0x16FC4Cu;
    SET_GPR_U32(ctx, 31, 0x16FC54u);
    ctx->pc = 0x16FC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FC4Cu;
    // 0x16fc50: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16FC54u;
label_16fc54:
    // 0x16fc54: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16fc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16fc58:
    // 0x16fc58: 0x1043fff8  beq         $v0, $v1, . + 4 + (-0x8 << 2)
label_16fc5c:
    if (ctx->pc == 0x16FC5Cu) {
        ctx->pc = 0x16FC60u;
        goto label_16fc60;
    }
    ctx->pc = 0x16FC58u;
    {
        const bool branch_taken_0x16fc58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16fc58) {
            ctx->pc = 0x16FC3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16fc3c;
        }
    }
    ctx->pc = 0x16FC60u;
label_16fc60:
    // 0x16fc60: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16fc60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16fc64:
    // 0x16fc64: 0x0  nop
    ctx->pc = 0x16fc64u;
    // NOP
label_16fc68:
    // 0x16fc68: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16fc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16fc6c:
    // 0x16fc6c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x16fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_16fc70:
    // 0x16fc70: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16fc70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16fc74:
    // 0x16fc74: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x16fc74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_16fc78:
    // 0x16fc78: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16fc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16fc7c:
    // 0x16fc7c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x16fc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16fc80:
    // 0x16fc80: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x16fc80u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16fc84:
    // 0x16fc84: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x16fc84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16fc88:
    // 0x16fc88: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16fc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16fc8c:
    // 0x16fc8c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x16fc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_16fc90:
    // 0x16fc90: 0x8f828710  lw          $v0, -0x78F0($gp)
    ctx->pc = 0x16fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16fc94:
    // 0x16fc94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_16fc98:
    // 0x16fc98: 0xaf828710  sw          $v0, -0x78F0($gp)
    ctx->pc = 0x16fc98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 2));
label_16fc9c:
    // 0x16fc9c: 0x0  nop
    ctx->pc = 0x16fc9cu;
    // NOP
label_16fca0:
    // 0x16fca0: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x16fca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_16fca4:
    // 0x16fca4: 0x2842000f  slti        $v0, $v0, 0xF
    ctx->pc = 0x16fca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
label_16fca8:
    // 0x16fca8: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_16fcac:
    if (ctx->pc == 0x16FCACu) {
        ctx->pc = 0x16FCB0u;
        goto label_16fcb0;
    }
    ctx->pc = 0x16FCA8u;
    {
        const bool branch_taken_0x16fca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16fca8) {
            ctx->pc = 0x16FC28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16fc28;
        }
    }
    ctx->pc = 0x16FCB0u;
label_16fcb0:
    // 0x16fcb0: 0x24023fff  addiu       $v0, $zero, 0x3FFF
    ctx->pc = 0x16fcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
label_16fcb4:
    // 0x16fcb4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16fcb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16fcb8:
    // 0x16fcb8: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x16fcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_16fcbc:
    // 0x16fcbc: 0xac221f7c  sw          $v0, 0x1F7C($at)
    ctx->pc = 0x16fcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8060), GPR_U32(ctx, 2));
label_16fcc0:
    // 0x16fcc0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16fcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16fcc4:
    // 0x16fcc4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16fcc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16fcc8:
    // 0x16fcc8: 0x24a51f60  addiu       $a1, $a1, 0x1F60
    ctx->pc = 0x16fcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8032));
label_16fccc:
    // 0x16fccc: 0xac221f74  sw          $v0, 0x1F74($at)
    ctx->pc = 0x16fcccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8052), GPR_U32(ctx, 2));
label_16fcd0:
    // 0x16fcd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16fcd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16fcd4:
    // 0x16fcd4: 0xc08d590  jal         func_235640
label_16fcd8:
    if (ctx->pc == 0x16FCD8u) {
        ctx->pc = 0x16FCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FCD4u;
        // 0x16fcd8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FCDCu;
        goto label_16fcdc;
    }
    ctx->pc = 0x16FCD4u;
    SET_GPR_U32(ctx, 31, 0x16FCDCu);
    ctx->pc = 0x16FCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FCD4u;
    // 0x16fcd8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235640u;
    { ctx->pc = 0x235640; return; }
    ctx->pc = 0x16FCDCu;
label_16fcdc:
    // 0x16fcdc: 0xc055e64  jal         func_157990
label_16fce0:
    if (ctx->pc == 0x16FCE0u) {
        ctx->pc = 0x16FCE4u;
        goto label_16fce4;
    }
    ctx->pc = 0x16FCDCu;
    SET_GPR_U32(ctx, 31, 0x16FCE4u);
    ctx->pc = 0x157990u;
    { ctx->pc = 0x157990; return; }
    ctx->pc = 0x16FCE4u;
label_16fce4:
    // 0x16fce4: 0x30433fff  andi        $v1, $v0, 0x3FFF
    ctx->pc = 0x16fce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_16fce8:
    // 0x16fce8: 0x8f828178  lw          $v0, -0x7E88($gp)
    ctx->pc = 0x16fce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
label_16fcec:
    // 0x16fcec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_16fcf0:
    if (ctx->pc == 0x16FCF0u) {
        ctx->pc = 0x16FCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FCECu;
        // 0x16fcf0: 0xaf8386f4  sw          $v1, -0x790C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FCF4u;
        goto label_16fcf4;
    }
    ctx->pc = 0x16FCECu;
    {
        const bool branch_taken_0x16fcec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FCECu;
        // 0x16fcf0: 0xaf8386f4  sw          $v1, -0x790C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fcec) {
            ctx->pc = 0x16FD10u;
            goto label_16fd10;
        }
    }
    ctx->pc = 0x16FCF4u;
label_16fcf4:
    // 0x16fcf4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16fcf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16fcf8:
    // 0x16fcf8: 0xac231ebc  sw          $v1, 0x1EBC($at)
    ctx->pc = 0x16fcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7868), GPR_U32(ctx, 3));
label_16fcfc:
    // 0x16fcfc: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16fcfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16fd00:
    // 0x16fd00: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16fd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16fd04:
    // 0x16fd04: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x16fd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_16fd08:
    // 0x16fd08: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16fd08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16fd0c:
    // 0x16fd0c: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16fd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
label_16fd10:
    // 0x16fd10: 0xc055e14  jal         func_157850
label_16fd14:
    if (ctx->pc == 0x16FD14u) {
        ctx->pc = 0x16FD18u;
        goto label_16fd18;
    }
    ctx->pc = 0x16FD10u;
    SET_GPR_U32(ctx, 31, 0x16FD18u);
    ctx->pc = 0x157850u;
    { ctx->pc = 0x157850; return; }
    ctx->pc = 0x16FD18u;
label_16fd18:
    // 0x16fd18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16fd18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16fd1c:
    // 0x16fd1c: 0x8f82817c  lw          $v0, -0x7E84($gp)
    ctx->pc = 0x16fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
label_16fd20:
    // 0x16fd20: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_16fd24:
    if (ctx->pc == 0x16FD24u) {
        ctx->pc = 0x16FD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FD20u;
        // 0x16fd24: 0x322600ff  andi        $a2, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FD28u;
        goto label_16fd28;
    }
    ctx->pc = 0x16FD20u;
    {
        const bool branch_taken_0x16fd20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FD20u;
        // 0x16fd24: 0x322600ff  andi        $a2, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fd20) {
            ctx->pc = 0x16FDD0u;
            goto label_16fdd0;
        }
    }
    ctx->pc = 0x16FD28u;
label_16fd28:
    // 0x16fd28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16fd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16fd2c:
    // 0x16fd2c: 0xc08d2c6  jal         func_234B18
label_16fd30:
    if (ctx->pc == 0x16FD30u) {
        ctx->pc = 0x16FD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FD2Cu;
        // 0x16fd30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FD34u;
        goto label_16fd34;
    }
    ctx->pc = 0x16FD2Cu;
    SET_GPR_U32(ctx, 31, 0x16FD34u);
    ctx->pc = 0x16FD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FD2Cu;
    // 0x16fd30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234B18u;
    { ctx->pc = 0x234b18; return; }
    ctx->pc = 0x16FD34u;
label_16fd34:
    // 0x16fd34: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16fd34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16fd38:
    // 0x16fd38: 0x10000020  b           . + 4 + (0x20 << 2)
label_16fd3c:
    if (ctx->pc == 0x16FD3Cu) {
        ctx->pc = 0x16FD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FD38u;
        // 0x16fd3c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FD40u;
        goto label_16fd40;
    }
    ctx->pc = 0x16FD38u;
    {
        const bool branch_taken_0x16fd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FD38u;
        // 0x16fd3c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fd38) {
            ctx->pc = 0x16FDBCu;
            goto label_16fdbc;
        }
    }
    ctx->pc = 0x16FD40u;
label_16fd40:
    // 0x16fd40: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x16fd40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_16fd44:
    // 0x16fd44: 0x2631825  or          $v1, $s3, $v1
    ctx->pc = 0x16fd44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
label_16fd48:
    // 0x16fd48: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x16fd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_16fd4c:
    // 0x16fd4c: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x16fd4cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_16fd50:
    // 0x16fd50: 0x8f828710  lw          $v0, -0x78F0($gp)
    ctx->pc = 0x16fd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16fd54:
    // 0x16fd54: 0x2c42007f  sltiu       $v0, $v0, 0x7F
    ctx->pc = 0x16fd54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16fd58:
    // 0x16fd58: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_16fd5c:
    if (ctx->pc == 0x16FD5Cu) {
        ctx->pc = 0x16FD60u;
        goto label_16fd60;
    }
    ctx->pc = 0x16FD58u;
    {
        const bool branch_taken_0x16fd58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16fd58) {
            ctx->pc = 0x16FD84u;
            goto label_16fd84;
        }
    }
    ctx->pc = 0x16FD60u;
label_16fd60:
    // 0x16fd60: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16fd60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16fd64:
    // 0x16fd64: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16fd64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16fd68:
    // 0x16fd68: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16fd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16fd6c:
    // 0x16fd6c: 0xc08d61c  jal         func_235870
label_16fd70:
    if (ctx->pc == 0x16FD70u) {
        ctx->pc = 0x16FD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FD6Cu;
        // 0x16fd70: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FD74u;
        goto label_16fd74;
    }
    ctx->pc = 0x16FD6Cu;
    SET_GPR_U32(ctx, 31, 0x16FD74u);
    ctx->pc = 0x16FD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FD6Cu;
    // 0x16fd70: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16FD74u;
label_16fd74:
    // 0x16fd74: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16fd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16fd78:
    // 0x16fd78: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16fd7c:
    if (ctx->pc == 0x16FD7Cu) {
        ctx->pc = 0x16FD80u;
        goto label_16fd80;
    }
    ctx->pc = 0x16FD78u;
    {
        const bool branch_taken_0x16fd78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16fd78) {
            ctx->pc = 0x16FD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16fd60;
        }
    }
    ctx->pc = 0x16FD80u;
label_16fd80:
    // 0x16fd80: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16fd80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16fd84:
    // 0x16fd84: 0x0  nop
    ctx->pc = 0x16fd84u;
    // NOP
label_16fd88:
    // 0x16fd88: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16fd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16fd8c:
    // 0x16fd8c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x16fd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_16fd90:
    // 0x16fd90: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16fd90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16fd94:
    // 0x16fd94: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x16fd94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_16fd98:
    // 0x16fd98: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16fd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16fd9c:
    // 0x16fd9c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x16fd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16fda0:
    // 0x16fda0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x16fda0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16fda4:
    // 0x16fda4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x16fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16fda8:
    // 0x16fda8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16fda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16fdac:
    // 0x16fdac: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x16fdacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
label_16fdb0:
    // 0x16fdb0: 0x8f828710  lw          $v0, -0x78F0($gp)
    ctx->pc = 0x16fdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16fdb4:
    // 0x16fdb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16fdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_16fdb8:
    // 0x16fdb8: 0xaf828710  sw          $v0, -0x78F0($gp)
    ctx->pc = 0x16fdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 2));
label_16fdbc:
    // 0x16fdbc: 0x0  nop
    ctx->pc = 0x16fdbcu;
    // NOP
label_16fdc0:
    // 0x16fdc0: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x16fdc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_16fdc4:
    // 0x16fdc4: 0x2842000f  slti        $v0, $v0, 0xF
    ctx->pc = 0x16fdc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
label_16fdc8:
    // 0x16fdc8: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_16fdcc:
    if (ctx->pc == 0x16FDCCu) {
        ctx->pc = 0x16FDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FDC8u;
        // 0x16fdcc: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FDD0u;
        goto label_16fdd0;
    }
    ctx->pc = 0x16FDC8u;
    {
        const bool branch_taken_0x16fdc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16FDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FDC8u;
        // 0x16fdcc: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fdc8) {
            ctx->pc = 0x16FD40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16fd40;
        }
    }
    ctx->pc = 0x16FDD0u;
label_16fdd0:
    // 0x16fdd0: 0xc055e64  jal         func_157990
label_16fdd4:
    if (ctx->pc == 0x16FDD4u) {
        ctx->pc = 0x16FDD8u;
        goto label_16fdd8;
    }
    ctx->pc = 0x16FDD0u;
    SET_GPR_U32(ctx, 31, 0x16FDD8u);
    ctx->pc = 0x157990u;
    { ctx->pc = 0x157990; return; }
    ctx->pc = 0x16FDD8u;
label_16fdd8:
    // 0x16fdd8: 0x8f838700  lw          $v1, -0x7900($gp)
    ctx->pc = 0x16fdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
label_16fddc:
    // 0x16fddc: 0xaf828708  sw          $v0, -0x78F8($gp)
    ctx->pc = 0x16fddcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936328), GPR_U32(ctx, 2));
label_16fde0:
    // 0x16fde0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16fde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16fde4:
    // 0x16fde4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_16fde8:
    if (ctx->pc == 0x16FDE8u) {
        ctx->pc = 0x16FDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FDE4u;
        // 0x16fde8: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FDECu;
        goto label_16fdec;
    }
    ctx->pc = 0x16FDE4u;
    {
        const bool branch_taken_0x16fde4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16FDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FDE4u;
        // 0x16fde8: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fde4) {
            ctx->pc = 0x16FDF8u;
            goto label_16fdf8;
        }
    }
    ctx->pc = 0x16FDECu;
label_16fdec:
    // 0x16fdec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16fdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16fdf0:
    // 0x16fdf0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_16fdf4:
    if (ctx->pc == 0x16FDF4u) {
        ctx->pc = 0x16FDF8u;
        goto label_16fdf8;
    }
    ctx->pc = 0x16FDF0u;
    {
        const bool branch_taken_0x16fdf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16fdf0) {
            ctx->pc = 0x16FE20u;
            goto label_16fe20;
        }
    }
    ctx->pc = 0x16FDF8u;
label_16fdf8:
    // 0x16fdf8: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16fdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16fdfc:
    // 0x16fdfc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x16fdfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_16fe00:
    // 0x16fe00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_16fe04:
    if (ctx->pc == 0x16FE04u) {
        ctx->pc = 0x16FE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FE00u;
        // 0x16fe04: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FE08u;
        goto label_16fe08;
    }
    ctx->pc = 0x16FE00u;
    {
        const bool branch_taken_0x16fe00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FE00u;
        // 0x16fe04: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fe00) {
            ctx->pc = 0x16FE10u;
            goto label_16fe10;
        }
    }
    ctx->pc = 0x16FE08u;
label_16fe08:
    // 0x16fe08: 0xc05b5ac  jal         func_16D6B0
label_16fe0c:
    if (ctx->pc == 0x16FE0Cu) {
        ctx->pc = 0x16FE10u;
        goto label_16fe10;
    }
    ctx->pc = 0x16FE08u;
    SET_GPR_U32(ctx, 31, 0x16FE10u);
    ctx->pc = 0x16D6B0u;
    { ctx->pc = 0x16d6b0; return; }
    ctx->pc = 0x16FE10u;
label_16fe10:
    // 0x16fe10: 0xc05b6ec  jal         func_16DBB0
label_16fe14:
    if (ctx->pc == 0x16FE14u) {
        ctx->pc = 0x16FE18u;
        goto label_16fe18;
    }
    ctx->pc = 0x16FE10u;
    SET_GPR_U32(ctx, 31, 0x16FE18u);
    ctx->pc = 0x16DBB0u;
    { ctx->pc = 0x16dbb0; return; }
    ctx->pc = 0x16FE18u;
label_16fe18:
    // 0x16fe18: 0x10000012  b           . + 4 + (0x12 << 2)
label_16fe1c:
    if (ctx->pc == 0x16FE1Cu) {
        ctx->pc = 0x16FE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FE18u;
        // 0x16fe1c: 0xaf828700  sw          $v0, -0x7900($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FE20u;
        goto label_16fe20;
    }
    ctx->pc = 0x16FE18u;
    {
        const bool branch_taken_0x16fe18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FE18u;
        // 0x16fe1c: 0xaf828700  sw          $v0, -0x7900($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fe18) {
            ctx->pc = 0x16FE64u;
            goto label_16fe64;
        }
    }
    ctx->pc = 0x16FE20u;
label_16fe20:
    // 0x16fe20: 0xc05ae90  jal         func_16BA40
label_16fe24:
    if (ctx->pc == 0x16FE24u) {
        ctx->pc = 0x16FE28u;
        goto label_16fe28;
    }
    ctx->pc = 0x16FE20u;
    SET_GPR_U32(ctx, 31, 0x16FE28u);
    ctx->pc = 0x16BA40u;
    { ctx->pc = 0x16ba40; return; }
    ctx->pc = 0x16FE28u;
label_16fe28:
    // 0x16fe28: 0x8f828710  lw          $v0, -0x78F0($gp)
    ctx->pc = 0x16fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16fe2c:
    // 0x16fe2c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_16fe30:
    if (ctx->pc == 0x16FE30u) {
        ctx->pc = 0x16FE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FE2Cu;
        // 0x16fe30: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FE34u;
        goto label_16fe34;
    }
    ctx->pc = 0x16FE2Cu;
    {
        const bool branch_taken_0x16fe2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FE2Cu;
        // 0x16fe30: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fe2c) {
            ctx->pc = 0x16FE5Cu;
            goto label_16fe5c;
        }
    }
    ctx->pc = 0x16FE34u;
label_16fe34:
    // 0x16fe34: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16fe34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16fe38:
    // 0x16fe38: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16fe38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16fe3c:
    // 0x16fe3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16fe3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16fe40:
    // 0x16fe40: 0xc08d61c  jal         func_235870
label_16fe44:
    if (ctx->pc == 0x16FE44u) {
        ctx->pc = 0x16FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FE40u;
        // 0x16fe44: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FE48u;
        goto label_16fe48;
    }
    ctx->pc = 0x16FE40u;
    SET_GPR_U32(ctx, 31, 0x16FE48u);
    ctx->pc = 0x16FE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FE40u;
    // 0x16fe44: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16FE48u;
label_16fe48:
    // 0x16fe48: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16fe48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16fe4c:
    // 0x16fe4c: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16fe50:
    if (ctx->pc == 0x16FE50u) {
        ctx->pc = 0x16FE54u;
        goto label_16fe54;
    }
    ctx->pc = 0x16FE4Cu;
    {
        const bool branch_taken_0x16fe4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16fe4c) {
            ctx->pc = 0x16FE34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16fe34;
        }
    }
    ctx->pc = 0x16FE54u;
label_16fe54:
    // 0x16fe54: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16fe54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16fe58:
    // 0x16fe58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16fe58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16fe5c:
    // 0x16fe5c: 0xc05b5ac  jal         func_16D6B0
label_16fe60:
    if (ctx->pc == 0x16FE60u) {
        ctx->pc = 0x16FE64u;
        goto label_16fe64;
    }
    ctx->pc = 0x16FE5Cu;
    SET_GPR_U32(ctx, 31, 0x16FE64u);
    ctx->pc = 0x16D6B0u;
    { ctx->pc = 0x16d6b0; return; }
    ctx->pc = 0x16FE64u;
label_16fe64:
    // 0x16fe64: 0xc08d9c6  jal         func_236718
label_16fe68:
    if (ctx->pc == 0x16FE68u) {
        ctx->pc = 0x16FE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FE64u;
        // 0x16fe68: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FE6Cu;
        goto label_16fe6c;
    }
    ctx->pc = 0x16FE64u;
    SET_GPR_U32(ctx, 31, 0x16FE6Cu);
    ctx->pc = 0x16FE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FE64u;
    // 0x16fe68: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236718u;
    { ctx->pc = 0x236718; return; }
    ctx->pc = 0x16FE6Cu;
label_16fe6c:
    // 0x16fe6c: 0x8f828710  lw          $v0, -0x78F0($gp)
    ctx->pc = 0x16fe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16fe70:
    // 0x16fe70: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_16fe74:
    if (ctx->pc == 0x16FE74u) {
        ctx->pc = 0x16FE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FE70u;
        // 0x16fe74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FE78u;
        goto label_16fe78;
    }
    ctx->pc = 0x16FE70u;
    {
        const bool branch_taken_0x16fe70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FE70u;
        // 0x16fe74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fe70) {
            ctx->pc = 0x16FEA0u;
            goto label_16fea0;
        }
    }
    ctx->pc = 0x16FE78u;
label_16fe78:
    // 0x16fe78: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16fe78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16fe7c:
    // 0x16fe7c: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16fe7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16fe80:
    // 0x16fe80: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16fe80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16fe84:
    // 0x16fe84: 0xc08d61c  jal         func_235870
label_16fe88:
    if (ctx->pc == 0x16FE88u) {
        ctx->pc = 0x16FE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FE84u;
        // 0x16fe88: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FE8Cu;
        goto label_16fe8c;
    }
    ctx->pc = 0x16FE84u;
    SET_GPR_U32(ctx, 31, 0x16FE8Cu);
    ctx->pc = 0x16FE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FE84u;
    // 0x16fe88: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16FE8Cu;
label_16fe8c:
    // 0x16fe8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16fe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16fe90:
    // 0x16fe90: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16fe94:
    if (ctx->pc == 0x16FE94u) {
        ctx->pc = 0x16FE98u;
        goto label_16fe98;
    }
    ctx->pc = 0x16FE90u;
    {
        const bool branch_taken_0x16fe90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16fe90) {
            ctx->pc = 0x16FE78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16fe78;
        }
    }
    ctx->pc = 0x16FE98u;
label_16fe98:
    // 0x16fe98: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16fe98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16fe9c:
    // 0x16fe9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16fe9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16fea0:
    // 0x16fea0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x16fea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_16fea4:
    // 0x16fea4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16fea4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16fea8:
    // 0x16fea8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16fea8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16feac:
    // 0x16feac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16feacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16feb0:
    // 0x16feb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16feb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16feb4:
    // 0x16feb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16feb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16feb8:
    // 0x16feb8: 0x3e00008  jr          $ra
label_16febc:
    if (ctx->pc == 0x16FEBCu) {
        ctx->pc = 0x16FEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FEB8u;
        // 0x16febc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FEC0u;
        goto label_16fec0;
    }
    ctx->pc = 0x16FEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FEB8u;
        // 0x16febc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FEC0u;
label_16fec0:
    // 0x16fec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16fec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16fec4:
    // 0x16fec4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16fec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16fec8:
    // 0x16fec8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16fec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16fecc:
    // 0x16fecc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16feccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16fed0:
    // 0x16fed0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16fed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16fed4:
    // 0x16fed4: 0xac201ed8  sw          $zero, 0x1ED8($at)
    ctx->pc = 0x16fed4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7896), GPR_U32(ctx, 0));
label_16fed8:
    // 0x16fed8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16fed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16fedc:
    // 0x16fedc: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16fedcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    ctx->pc = 0x16fee0u;
    return;
}
