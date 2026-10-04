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


void FUN_0014eba0_part3(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x14fb40u: goto label_14fb40;
        case 0x14fb44u: goto label_14fb44;
        case 0x14fb48u: goto label_14fb48;
        case 0x14fb4cu: goto label_14fb4c;
        case 0x14fb50u: goto label_14fb50;
        case 0x14fb54u: goto label_14fb54;
        case 0x14fb58u: goto label_14fb58;
        case 0x14fb5cu: goto label_14fb5c;
        case 0x14fb60u: goto label_14fb60;
        case 0x14fb64u: goto label_14fb64;
        case 0x14fb68u: goto label_14fb68;
        case 0x14fb6cu: goto label_14fb6c;
        case 0x14fb70u: goto label_14fb70;
        case 0x14fb74u: goto label_14fb74;
        case 0x14fb78u: goto label_14fb78;
        case 0x14fb7cu: goto label_14fb7c;
        case 0x14fb80u: goto label_14fb80;
        case 0x14fb84u: goto label_14fb84;
        case 0x14fb88u: goto label_14fb88;
        case 0x14fb8cu: goto label_14fb8c;
        case 0x14fb90u: goto label_14fb90;
        case 0x14fb94u: goto label_14fb94;
        case 0x14fb98u: goto label_14fb98;
        case 0x14fb9cu: goto label_14fb9c;
        case 0x14fba0u: goto label_14fba0;
        case 0x14fba4u: goto label_14fba4;
        case 0x14fba8u: goto label_14fba8;
        case 0x14fbacu: goto label_14fbac;
        case 0x14fbb0u: goto label_14fbb0;
        case 0x14fbb4u: goto label_14fbb4;
        case 0x14fbb8u: goto label_14fbb8;
        case 0x14fbbcu: goto label_14fbbc;
        case 0x14fbc0u: goto label_14fbc0;
        case 0x14fbc4u: goto label_14fbc4;
        case 0x14fbc8u: goto label_14fbc8;
        case 0x14fbccu: goto label_14fbcc;
        case 0x14fbd0u: goto label_14fbd0;
        case 0x14fbd4u: goto label_14fbd4;
        case 0x14fbd8u: goto label_14fbd8;
        case 0x14fbdcu: goto label_14fbdc;
        case 0x14fbe0u: goto label_14fbe0;
        case 0x14fbe4u: goto label_14fbe4;
        case 0x14fbe8u: goto label_14fbe8;
        case 0x14fbecu: goto label_14fbec;
        case 0x14fbf0u: goto label_14fbf0;
        case 0x14fbf4u: goto label_14fbf4;
        case 0x14fbf8u: goto label_14fbf8;
        case 0x14fbfcu: goto label_14fbfc;
        case 0x14fc00u: goto label_14fc00;
        case 0x14fc04u: goto label_14fc04;
        case 0x14fc08u: goto label_14fc08;
        case 0x14fc0cu: goto label_14fc0c;
        case 0x14fc10u: goto label_14fc10;
        case 0x14fc14u: goto label_14fc14;
        case 0x14fc18u: goto label_14fc18;
        case 0x14fc1cu: goto label_14fc1c;
        case 0x14fc20u: goto label_14fc20;
        case 0x14fc24u: goto label_14fc24;
        case 0x14fc28u: goto label_14fc28;
        case 0x14fc2cu: goto label_14fc2c;
        case 0x14fc30u: goto label_14fc30;
        case 0x14fc34u: goto label_14fc34;
        case 0x14fc38u: goto label_14fc38;
        case 0x14fc3cu: goto label_14fc3c;
        case 0x14fc40u: goto label_14fc40;
        case 0x14fc44u: goto label_14fc44;
        case 0x14fc48u: goto label_14fc48;
        case 0x14fc4cu: goto label_14fc4c;
        case 0x14fc50u: goto label_14fc50;
        case 0x14fc54u: goto label_14fc54;
        case 0x14fc58u: goto label_14fc58;
        case 0x14fc5cu: goto label_14fc5c;
        case 0x14fc60u: goto label_14fc60;
        case 0x14fc64u: goto label_14fc64;
        case 0x14fc68u: goto label_14fc68;
        case 0x14fc6cu: goto label_14fc6c;
        case 0x14fc70u: goto label_14fc70;
        case 0x14fc74u: goto label_14fc74;
        case 0x14fc78u: goto label_14fc78;
        case 0x14fc7cu: goto label_14fc7c;
        case 0x14fc80u: goto label_14fc80;
        case 0x14fc84u: goto label_14fc84;
        case 0x14fc88u: goto label_14fc88;
        case 0x14fc8cu: goto label_14fc8c;
        case 0x14fc90u: goto label_14fc90;
        case 0x14fc94u: goto label_14fc94;
        case 0x14fc98u: goto label_14fc98;
        case 0x14fc9cu: goto label_14fc9c;
        case 0x14fca0u: goto label_14fca0;
        case 0x14fca4u: goto label_14fca4;
        case 0x14fca8u: goto label_14fca8;
        case 0x14fcacu: goto label_14fcac;
        case 0x14fcb0u: goto label_14fcb0;
        case 0x14fcb4u: goto label_14fcb4;
        case 0x14fcb8u: goto label_14fcb8;
        case 0x14fcbcu: goto label_14fcbc;
        case 0x14fcc0u: goto label_14fcc0;
        case 0x14fcc4u: goto label_14fcc4;
        case 0x14fcc8u: goto label_14fcc8;
        case 0x14fcccu: goto label_14fccc;
        case 0x14fcd0u: goto label_14fcd0;
        case 0x14fcd4u: goto label_14fcd4;
        case 0x14fcd8u: goto label_14fcd8;
        case 0x14fcdcu: goto label_14fcdc;
        case 0x14fce0u: goto label_14fce0;
        case 0x14fce4u: goto label_14fce4;
        case 0x14fce8u: goto label_14fce8;
        case 0x14fcecu: goto label_14fcec;
        case 0x14fcf0u: goto label_14fcf0;
        case 0x14fcf4u: goto label_14fcf4;
        case 0x14fcf8u: goto label_14fcf8;
        case 0x14fcfcu: goto label_14fcfc;
        case 0x14fd00u: goto label_14fd00;
        case 0x14fd04u: goto label_14fd04;
        case 0x14fd08u: goto label_14fd08;
        case 0x14fd0cu: goto label_14fd0c;
        case 0x14fd10u: goto label_14fd10;
        case 0x14fd14u: goto label_14fd14;
        case 0x14fd18u: goto label_14fd18;
        case 0x14fd1cu: goto label_14fd1c;
        case 0x14fd20u: goto label_14fd20;
        case 0x14fd24u: goto label_14fd24;
        case 0x14fd28u: goto label_14fd28;
        case 0x14fd2cu: goto label_14fd2c;
        case 0x14fd30u: goto label_14fd30;
        case 0x14fd34u: goto label_14fd34;
        case 0x14fd38u: goto label_14fd38;
        case 0x14fd3cu: goto label_14fd3c;
        case 0x14fd40u: goto label_14fd40;
        case 0x14fd44u: goto label_14fd44;
        case 0x14fd48u: goto label_14fd48;
        case 0x14fd4cu: goto label_14fd4c;
        case 0x14fd50u: goto label_14fd50;
        case 0x14fd54u: goto label_14fd54;
        case 0x14fd58u: goto label_14fd58;
        case 0x14fd5cu: goto label_14fd5c;
        case 0x14fd60u: goto label_14fd60;
        case 0x14fd64u: goto label_14fd64;
        case 0x14fd68u: goto label_14fd68;
        case 0x14fd6cu: goto label_14fd6c;
        case 0x14fd70u: goto label_14fd70;
        case 0x14fd74u: goto label_14fd74;
        case 0x14fd78u: goto label_14fd78;
        case 0x14fd7cu: goto label_14fd7c;
        case 0x14fd80u: goto label_14fd80;
        case 0x14fd84u: goto label_14fd84;
        case 0x14fd88u: goto label_14fd88;
        case 0x14fd8cu: goto label_14fd8c;
        case 0x14fd90u: goto label_14fd90;
        case 0x14fd94u: goto label_14fd94;
        case 0x14fd98u: goto label_14fd98;
        case 0x14fd9cu: goto label_14fd9c;
        case 0x14fda0u: goto label_14fda0;
        case 0x14fda4u: goto label_14fda4;
        case 0x14fda8u: goto label_14fda8;
        case 0x14fdacu: goto label_14fdac;
        case 0x14fdb0u: goto label_14fdb0;
        case 0x14fdb4u: goto label_14fdb4;
        case 0x14fdb8u: goto label_14fdb8;
        case 0x14fdbcu: goto label_14fdbc;
        case 0x14fdc0u: goto label_14fdc0;
        case 0x14fdc4u: goto label_14fdc4;
        case 0x14fdc8u: goto label_14fdc8;
        case 0x14fdccu: goto label_14fdcc;
        case 0x14fdd0u: goto label_14fdd0;
        case 0x14fdd4u: goto label_14fdd4;
        case 0x14fdd8u: goto label_14fdd8;
        case 0x14fddcu: goto label_14fddc;
        case 0x14fde0u: goto label_14fde0;
        case 0x14fde4u: goto label_14fde4;
        case 0x14fde8u: goto label_14fde8;
        case 0x14fdecu: goto label_14fdec;
        case 0x14fdf0u: goto label_14fdf0;
        case 0x14fdf4u: goto label_14fdf4;
        case 0x14fdf8u: goto label_14fdf8;
        case 0x14fdfcu: goto label_14fdfc;
        case 0x14fe00u: goto label_14fe00;
        case 0x14fe04u: goto label_14fe04;
        case 0x14fe08u: goto label_14fe08;
        case 0x14fe0cu: goto label_14fe0c;
        case 0x14fe10u: goto label_14fe10;
        case 0x14fe14u: goto label_14fe14;
        case 0x14fe18u: goto label_14fe18;
        case 0x14fe1cu: goto label_14fe1c;
        case 0x14fe20u: goto label_14fe20;
        case 0x14fe24u: goto label_14fe24;
        case 0x14fe28u: goto label_14fe28;
        case 0x14fe2cu: goto label_14fe2c;
        case 0x14fe30u: goto label_14fe30;
        case 0x14fe34u: goto label_14fe34;
        case 0x14fe38u: goto label_14fe38;
        case 0x14fe3cu: goto label_14fe3c;
        case 0x14fe40u: goto label_14fe40;
        case 0x14fe44u: goto label_14fe44;
        case 0x14fe48u: goto label_14fe48;
        case 0x14fe4cu: goto label_14fe4c;
        case 0x14fe50u: goto label_14fe50;
        case 0x14fe54u: goto label_14fe54;
        case 0x14fe58u: goto label_14fe58;
        case 0x14fe5cu: goto label_14fe5c;
        case 0x14fe60u: goto label_14fe60;
        case 0x14fe64u: goto label_14fe64;
        case 0x14fe68u: goto label_14fe68;
        case 0x14fe6cu: goto label_14fe6c;
        case 0x14fe70u: goto label_14fe70;
        case 0x14fe74u: goto label_14fe74;
        case 0x14fe78u: goto label_14fe78;
        case 0x14fe7cu: goto label_14fe7c;
        case 0x14fe80u: goto label_14fe80;
        case 0x14fe84u: goto label_14fe84;
        case 0x14fe88u: goto label_14fe88;
        case 0x14fe8cu: goto label_14fe8c;
        case 0x14fe90u: goto label_14fe90;
        case 0x14fe94u: goto label_14fe94;
        case 0x14fe98u: goto label_14fe98;
        case 0x14fe9cu: goto label_14fe9c;
        case 0x14fea0u: goto label_14fea0;
        case 0x14fea4u: goto label_14fea4;
        case 0x14fea8u: goto label_14fea8;
        case 0x14feacu: goto label_14feac;
        case 0x14feb0u: goto label_14feb0;
        case 0x14feb4u: goto label_14feb4;
        case 0x14feb8u: goto label_14feb8;
        case 0x14febcu: goto label_14febc;
        case 0x14fec0u: goto label_14fec0;
        case 0x14fec4u: goto label_14fec4;
        case 0x14fec8u: goto label_14fec8;
        case 0x14feccu: goto label_14fecc;
        case 0x14fed0u: goto label_14fed0;
        case 0x14fed4u: goto label_14fed4;
        case 0x14fed8u: goto label_14fed8;
        case 0x14fedcu: goto label_14fedc;
        case 0x14fee0u: goto label_14fee0;
        case 0x14fee4u: goto label_14fee4;
        case 0x14fee8u: goto label_14fee8;
        case 0x14feecu: goto label_14feec;
        case 0x14fef0u: goto label_14fef0;
        case 0x14fef4u: goto label_14fef4;
        case 0x14fef8u: goto label_14fef8;
        case 0x14fefcu: goto label_14fefc;
        case 0x14ff00u: goto label_14ff00;
        case 0x14ff04u: goto label_14ff04;
        case 0x14ff08u: goto label_14ff08;
        case 0x14ff0cu: goto label_14ff0c;
        case 0x14ff10u: goto label_14ff10;
        case 0x14ff14u: goto label_14ff14;
        case 0x14ff18u: goto label_14ff18;
        case 0x14ff1cu: goto label_14ff1c;
        case 0x14ff20u: goto label_14ff20;
        case 0x14ff24u: goto label_14ff24;
        case 0x14ff28u: goto label_14ff28;
        case 0x14ff2cu: goto label_14ff2c;
        case 0x14ff30u: goto label_14ff30;
        case 0x14ff34u: goto label_14ff34;
        case 0x14ff38u: goto label_14ff38;
        case 0x14ff3cu: goto label_14ff3c;
        case 0x14ff40u: goto label_14ff40;
        case 0x14ff44u: goto label_14ff44;
        case 0x14ff48u: goto label_14ff48;
        case 0x14ff4cu: goto label_14ff4c;
        case 0x14ff50u: goto label_14ff50;
        case 0x14ff54u: goto label_14ff54;
        case 0x14ff58u: goto label_14ff58;
        case 0x14ff5cu: goto label_14ff5c;
        case 0x14ff60u: goto label_14ff60;
        case 0x14ff64u: goto label_14ff64;
        case 0x14ff68u: goto label_14ff68;
        case 0x14ff6cu: goto label_14ff6c;
        case 0x14ff70u: goto label_14ff70;
        case 0x14ff74u: goto label_14ff74;
        case 0x14ff78u: goto label_14ff78;
        case 0x14ff7cu: goto label_14ff7c;
        case 0x14ff80u: goto label_14ff80;
        case 0x14ff84u: goto label_14ff84;
        case 0x14ff88u: goto label_14ff88;
        case 0x14ff8cu: goto label_14ff8c;
        case 0x14ff90u: goto label_14ff90;
        case 0x14ff94u: goto label_14ff94;
        case 0x14ff98u: goto label_14ff98;
        case 0x14ff9cu: goto label_14ff9c;
        case 0x14ffa0u: goto label_14ffa0;
        case 0x14ffa4u: goto label_14ffa4;
        case 0x14ffa8u: goto label_14ffa8;
        case 0x14ffacu: goto label_14ffac;
        case 0x14ffb0u: goto label_14ffb0;
        case 0x14ffb4u: goto label_14ffb4;
        case 0x14ffb8u: goto label_14ffb8;
        case 0x14ffbcu: goto label_14ffbc;
        case 0x14ffc0u: goto label_14ffc0;
        case 0x14ffc4u: goto label_14ffc4;
        case 0x14ffc8u: goto label_14ffc8;
        case 0x14ffccu: goto label_14ffcc;
        case 0x14ffd0u: goto label_14ffd0;
        case 0x14ffd4u: goto label_14ffd4;
        case 0x14ffd8u: goto label_14ffd8;
        case 0x14ffdcu: goto label_14ffdc;
        case 0x14ffe0u: goto label_14ffe0;
        case 0x14ffe4u: goto label_14ffe4;
        case 0x14ffe8u: goto label_14ffe8;
        case 0x14ffecu: goto label_14ffec;
        case 0x14fff0u: goto label_14fff0;
        case 0x14fff4u: goto label_14fff4;
        case 0x14fff8u: goto label_14fff8;
        case 0x14fffcu: goto label_14fffc;
        case 0x150000u: goto label_150000;
        case 0x150004u: goto label_150004;
        case 0x150008u: goto label_150008;
        case 0x15000cu: goto label_15000c;
        case 0x150010u: goto label_150010;
        case 0x150014u: goto label_150014;
        case 0x150018u: goto label_150018;
        case 0x15001cu: goto label_15001c;
        case 0x150020u: goto label_150020;
        case 0x150024u: goto label_150024;
        case 0x150028u: goto label_150028;
        case 0x15002cu: goto label_15002c;
        case 0x150030u: goto label_150030;
        case 0x150034u: goto label_150034;
        case 0x150038u: goto label_150038;
        case 0x15003cu: goto label_15003c;
        case 0x150040u: goto label_150040;
        case 0x150044u: goto label_150044;
        case 0x150048u: goto label_150048;
        case 0x15004cu: goto label_15004c;
        case 0x150050u: goto label_150050;
        case 0x150054u: goto label_150054;
        case 0x150058u: goto label_150058;
        case 0x15005cu: goto label_15005c;
        case 0x150060u: goto label_150060;
        case 0x150064u: goto label_150064;
        case 0x150068u: goto label_150068;
        case 0x15006cu: goto label_15006c;
        case 0x150070u: goto label_150070;
        case 0x150074u: goto label_150074;
        case 0x150078u: goto label_150078;
        case 0x15007cu: goto label_15007c;
        case 0x150080u: goto label_150080;
        case 0x150084u: goto label_150084;
        case 0x150088u: goto label_150088;
        case 0x15008cu: goto label_15008c;
        case 0x150090u: goto label_150090;
        case 0x150094u: goto label_150094;
        case 0x150098u: goto label_150098;
        case 0x15009cu: goto label_15009c;
        case 0x1500a0u: goto label_1500a0;
        case 0x1500a4u: goto label_1500a4;
        case 0x1500a8u: goto label_1500a8;
        case 0x1500acu: goto label_1500ac;
        case 0x1500b0u: goto label_1500b0;
        case 0x1500b4u: goto label_1500b4;
        case 0x1500b8u: goto label_1500b8;
        case 0x1500bcu: goto label_1500bc;
        case 0x1500c0u: goto label_1500c0;
        case 0x1500c4u: goto label_1500c4;
        case 0x1500c8u: goto label_1500c8;
        case 0x1500ccu: goto label_1500cc;
        case 0x1500d0u: goto label_1500d0;
        case 0x1500d4u: goto label_1500d4;
        case 0x1500d8u: goto label_1500d8;
        case 0x1500dcu: goto label_1500dc;
        case 0x1500e0u: goto label_1500e0;
        case 0x1500e4u: goto label_1500e4;
        case 0x1500e8u: goto label_1500e8;
        case 0x1500ecu: goto label_1500ec;
        case 0x1500f0u: goto label_1500f0;
        case 0x1500f4u: goto label_1500f4;
        case 0x1500f8u: goto label_1500f8;
        case 0x1500fcu: goto label_1500fc;
        case 0x150100u: goto label_150100;
        case 0x150104u: goto label_150104;
        case 0x150108u: goto label_150108;
        case 0x15010cu: goto label_15010c;
        case 0x150110u: goto label_150110;
        case 0x150114u: goto label_150114;
        case 0x150118u: goto label_150118;
        case 0x15011cu: goto label_15011c;
        case 0x150120u: goto label_150120;
        case 0x150124u: goto label_150124;
        case 0x150128u: goto label_150128;
        case 0x15012cu: goto label_15012c;
        case 0x150130u: goto label_150130;
        case 0x150134u: goto label_150134;
        case 0x150138u: goto label_150138;
        case 0x15013cu: goto label_15013c;
        case 0x150140u: goto label_150140;
        case 0x150144u: goto label_150144;
        case 0x150148u: goto label_150148;
        case 0x15014cu: goto label_15014c;
        case 0x150150u: goto label_150150;
        case 0x150154u: goto label_150154;
        case 0x150158u: goto label_150158;
        case 0x15015cu: goto label_15015c;
        case 0x150160u: goto label_150160;
        case 0x150164u: goto label_150164;
        case 0x150168u: goto label_150168;
        case 0x15016cu: goto label_15016c;
        case 0x150170u: goto label_150170;
        case 0x150174u: goto label_150174;
        case 0x150178u: goto label_150178;
        case 0x15017cu: goto label_15017c;
        case 0x150180u: goto label_150180;
        case 0x150184u: goto label_150184;
        case 0x150188u: goto label_150188;
        case 0x15018cu: goto label_15018c;
        case 0x150190u: goto label_150190;
        case 0x150194u: goto label_150194;
        case 0x150198u: goto label_150198;
        case 0x15019cu: goto label_15019c;
        case 0x1501a0u: goto label_1501a0;
        case 0x1501a4u: goto label_1501a4;
        case 0x1501a8u: goto label_1501a8;
        case 0x1501acu: goto label_1501ac;
        case 0x1501b0u: goto label_1501b0;
        case 0x1501b4u: goto label_1501b4;
        case 0x1501b8u: goto label_1501b8;
        case 0x1501bcu: goto label_1501bc;
        case 0x1501c0u: goto label_1501c0;
        case 0x1501c4u: goto label_1501c4;
        case 0x1501c8u: goto label_1501c8;
        case 0x1501ccu: goto label_1501cc;
        case 0x1501d0u: goto label_1501d0;
        case 0x1501d4u: goto label_1501d4;
        case 0x1501d8u: goto label_1501d8;
        case 0x1501dcu: goto label_1501dc;
        case 0x1501e0u: goto label_1501e0;
        case 0x1501e4u: goto label_1501e4;
        case 0x1501e8u: goto label_1501e8;
        case 0x1501ecu: goto label_1501ec;
        case 0x1501f0u: goto label_1501f0;
        case 0x1501f4u: goto label_1501f4;
        case 0x1501f8u: goto label_1501f8;
        case 0x1501fcu: goto label_1501fc;
        case 0x150200u: goto label_150200;
        case 0x150204u: goto label_150204;
        case 0x150208u: goto label_150208;
        case 0x15020cu: goto label_15020c;
        case 0x150210u: goto label_150210;
        case 0x150214u: goto label_150214;
        case 0x150218u: goto label_150218;
        case 0x15021cu: goto label_15021c;
        case 0x150220u: goto label_150220;
        case 0x150224u: goto label_150224;
        case 0x150228u: goto label_150228;
        case 0x15022cu: goto label_15022c;
        case 0x150230u: goto label_150230;
        case 0x150234u: goto label_150234;
        case 0x150238u: goto label_150238;
        case 0x15023cu: goto label_15023c;
        case 0x150240u: goto label_150240;
        case 0x150244u: goto label_150244;
        case 0x150248u: goto label_150248;
        case 0x15024cu: goto label_15024c;
        case 0x150250u: goto label_150250;
        case 0x150254u: goto label_150254;
        case 0x150258u: goto label_150258;
        case 0x15025cu: goto label_15025c;
        case 0x150260u: goto label_150260;
        case 0x150264u: goto label_150264;
        case 0x150268u: goto label_150268;
        case 0x15026cu: goto label_15026c;
        case 0x150270u: goto label_150270;
        case 0x150274u: goto label_150274;
        case 0x150278u: goto label_150278;
        case 0x15027cu: goto label_15027c;
        case 0x150280u: goto label_150280;
        case 0x150284u: goto label_150284;
        case 0x150288u: goto label_150288;
        case 0x15028cu: goto label_15028c;
        case 0x150290u: goto label_150290;
        case 0x150294u: goto label_150294;
        case 0x150298u: goto label_150298;
        case 0x15029cu: goto label_15029c;
        case 0x1502a0u: goto label_1502a0;
        case 0x1502a4u: goto label_1502a4;
        case 0x1502a8u: goto label_1502a8;
        case 0x1502acu: goto label_1502ac;
        case 0x1502b0u: goto label_1502b0;
        case 0x1502b4u: goto label_1502b4;
        case 0x1502b8u: goto label_1502b8;
        case 0x1502bcu: goto label_1502bc;
        case 0x1502c0u: goto label_1502c0;
        case 0x1502c4u: goto label_1502c4;
        case 0x1502c8u: goto label_1502c8;
        case 0x1502ccu: goto label_1502cc;
        case 0x1502d0u: goto label_1502d0;
        case 0x1502d4u: goto label_1502d4;
        case 0x1502d8u: goto label_1502d8;
        case 0x1502dcu: goto label_1502dc;
        case 0x1502e0u: goto label_1502e0;
        case 0x1502e4u: goto label_1502e4;
        case 0x1502e8u: goto label_1502e8;
        case 0x1502ecu: goto label_1502ec;
        case 0x1502f0u: goto label_1502f0;
        case 0x1502f4u: goto label_1502f4;
        case 0x1502f8u: goto label_1502f8;
        case 0x1502fcu: goto label_1502fc;
        case 0x150300u: goto label_150300;
        case 0x150304u: goto label_150304;
        case 0x150308u: goto label_150308;
        case 0x15030cu: goto label_15030c;
        default: return;
    }

label_14fb40:
    // 0x14fb40: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x14fb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14fb44:
    // 0x14fb44: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x14fb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14fb48:
    // 0x14fb48: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x14fb48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_14fb4c:
    // 0x14fb4c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x14fb4cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14fb50:
    // 0x14fb50: 0x0  nop
    ctx->pc = 0x14fb50u;
    // NOP
label_14fb54:
    // 0x14fb54: 0x450001b2  bc1f        . + 4 + (0x1B2 << 2)
label_14fb58:
    if (ctx->pc == 0x14FB58u) {
        ctx->pc = 0x14FB5Cu;
        goto label_14fb5c;
    }
    ctx->pc = 0x14FB54u;
    {
        const bool branch_taken_0x14fb54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fb54) {
            ctx->pc = 0x150220u;
            goto label_150220;
        }
    }
    ctx->pc = 0x14FB5Cu;
label_14fb5c:
    // 0x14fb5c: 0x8663003c  lh          $v1, 0x3C($s3)
    ctx->pc = 0x14fb5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
label_14fb60:
    // 0x14fb60: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14fb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14fb64:
    // 0x14fb64: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_14fb68:
    if (ctx->pc == 0x14FB68u) {
        ctx->pc = 0x14FB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB64u;
        // 0x14fb68: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FB6Cu;
        goto label_14fb6c;
    }
    ctx->pc = 0x14FB64u;
    {
        const bool branch_taken_0x14fb64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14FB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB64u;
        // 0x14fb68: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fb64) {
            ctx->pc = 0x14FB80u;
            goto label_14fb80;
        }
    }
    ctx->pc = 0x14FB6Cu;
label_14fb6c:
    // 0x14fb6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14fb70:
    // 0x14fb70: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_14fb74:
    if (ctx->pc == 0x14FB74u) {
        ctx->pc = 0x14FB78u;
        goto label_14fb78;
    }
    ctx->pc = 0x14FB70u;
    {
        const bool branch_taken_0x14fb70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14fb70) {
            ctx->pc = 0x14FB80u;
            goto label_14fb80;
        }
    }
    ctx->pc = 0x14FB78u;
label_14fb78:
    // 0x14fb78: 0x10000003  b           . + 4 + (0x3 << 2)
label_14fb7c:
    if (ctx->pc == 0x14FB7Cu) {
        ctx->pc = 0x14FB80u;
        goto label_14fb80;
    }
    ctx->pc = 0x14FB78u;
    {
        const bool branch_taken_0x14fb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fb78) {
            ctx->pc = 0x14FB88u;
            goto label_14fb88;
        }
    }
    ctx->pc = 0x14FB80u;
label_14fb80:
    // 0x14fb80: 0x100001a7  b           . + 4 + (0x1A7 << 2)
label_14fb84:
    if (ctx->pc == 0x14FB84u) {
        ctx->pc = 0x14FB88u;
        goto label_14fb88;
    }
    ctx->pc = 0x14FB80u;
    {
        const bool branch_taken_0x14fb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fb80) {
            ctx->pc = 0x150220u;
            goto label_150220;
        }
    }
    ctx->pc = 0x14FB88u;
label_14fb88:
    // 0x14fb88: 0xc08f0cc  jal         func_23C330
label_14fb8c:
    if (ctx->pc == 0x14FB8Cu) {
        ctx->pc = 0x14FB90u;
        goto label_14fb90;
    }
    ctx->pc = 0x14FB88u;
    SET_GPR_U32(ctx, 31, 0x14FB90u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x14FB90u;
label_14fb90:
    // 0x14fb90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14fb90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14fb94:
    // 0x14fb94: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x14fb94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_14fb98:
    // 0x14fb98: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14fb98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_14fb9c:
    // 0x14fb9c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x14fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_14fba0:
    // 0x14fba0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14fba4:
    // 0x14fba4: 0x0  nop
    ctx->pc = 0x14fba4u;
    // NOP
label_14fba8:
    // 0x14fba8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x14fba8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_14fbac:
    // 0x14fbac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x14fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_14fbb0:
    // 0x14fbb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14fbb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14fbb4:
    // 0x14fbb4: 0x0  nop
    ctx->pc = 0x14fbb4u;
    // NOP
label_14fbb8:
    // 0x14fbb8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x14fbb8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_14fbbc:
    // 0x14fbbc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14fbbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_14fbc0:
    // 0x14fbc0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14fbc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_14fbc4:
    // 0x14fbc4: 0x0  nop
    ctx->pc = 0x14fbc4u;
    // NOP
label_14fbc8:
    // 0x14fbc8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x14fbc8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_14fbcc:
    // 0x14fbcc: 0x0  nop
    ctx->pc = 0x14fbccu;
    // NOP
label_14fbd0:
    // 0x14fbd0: 0x0  nop
    ctx->pc = 0x14fbd0u;
    // NOP
label_14fbd4:
    // 0x14fbd4: 0x9010  mfhi        $s2
    ctx->pc = 0x14fbd4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_14fbd8:
    // 0x14fbd8: 0x10000191  b           . + 4 + (0x191 << 2)
label_14fbdc:
    if (ctx->pc == 0x14FBDCu) {
        ctx->pc = 0x14FBE0u;
        goto label_14fbe0;
    }
    ctx->pc = 0x14FBD8u;
    {
        const bool branch_taken_0x14fbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fbd8) {
            ctx->pc = 0x150220u;
            goto label_150220;
        }
    }
    ctx->pc = 0x14FBE0u;
label_14fbe0:
    // 0x14fbe0: 0x8e620200  lw          $v0, 0x200($s3)
    ctx->pc = 0x14fbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 512)));
label_14fbe4:
    // 0x14fbe4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_14fbe8:
    if (ctx->pc == 0x14FBE8u) {
        ctx->pc = 0x14FBECu;
        goto label_14fbec;
    }
    ctx->pc = 0x14FBE4u;
    {
        const bool branch_taken_0x14fbe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fbe4) {
            ctx->pc = 0x14FC0Cu;
            goto label_14fc0c;
        }
    }
    ctx->pc = 0x14FBECu;
label_14fbec:
    // 0x14fbec: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x14fbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_14fbf0:
    // 0x14fbf0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14fbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14fbf4:
    // 0x14fbf4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x14fbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_14fbf8:
    // 0x14fbf8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14fbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_14fbfc:
    // 0x14fbfc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_14fc00:
    if (ctx->pc == 0x14FC00u) {
        ctx->pc = 0x14FC04u;
        goto label_14fc04;
    }
    ctx->pc = 0x14FBFCu;
    {
        const bool branch_taken_0x14fbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fbfc) {
            ctx->pc = 0x14FC0Cu;
            goto label_14fc0c;
        }
    }
    ctx->pc = 0x14FC04u;
label_14fc04:
    // 0x14fc04: 0x10000186  b           . + 4 + (0x186 << 2)
label_14fc08:
    if (ctx->pc == 0x14FC08u) {
        ctx->pc = 0x14FC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC04u;
        // 0x14fc08: 0x24120012  addiu       $s2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FC0Cu;
        goto label_14fc0c;
    }
    ctx->pc = 0x14FC04u;
    {
        const bool branch_taken_0x14fc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC04u;
        // 0x14fc08: 0x24120012  addiu       $s2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc04) {
            ctx->pc = 0x150220u;
            goto label_150220;
        }
    }
    ctx->pc = 0x14FC0Cu;
label_14fc0c:
    // 0x14fc0c: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x14fc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_14fc10:
    // 0x14fc10: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x14fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14fc14:
    // 0x14fc14: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_14fc18:
    if (ctx->pc == 0x14FC18u) {
        ctx->pc = 0x14FC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC14u;
        // 0x14fc18: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FC1Cu;
        goto label_14fc1c;
    }
    ctx->pc = 0x14FC14u;
    {
        const bool branch_taken_0x14fc14 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x14FC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC14u;
        // 0x14fc18: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc14) {
            ctx->pc = 0x14FC28u;
            goto label_14fc28;
        }
    }
    ctx->pc = 0x14FC1Cu;
label_14fc1c:
    // 0x14fc1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fc1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14fc20:
    // 0x14fc20: 0x10000007  b           . + 4 + (0x7 << 2)
label_14fc24:
    if (ctx->pc == 0x14FC24u) {
        ctx->pc = 0x14FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC20u;
        // 0x14fc24: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FC28u;
        goto label_14fc28;
    }
    ctx->pc = 0x14FC20u;
    {
        const bool branch_taken_0x14fc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC20u;
        // 0x14fc24: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc20) {
            ctx->pc = 0x14FC40u;
            goto label_14fc40;
        }
    }
    ctx->pc = 0x14FC28u;
label_14fc28:
    // 0x14fc28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14fc28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_14fc2c:
    // 0x14fc2c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14fc2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_14fc30:
    // 0x14fc30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14fc30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14fc34:
    // 0x14fc34: 0x0  nop
    ctx->pc = 0x14fc34u;
    // NOP
label_14fc38:
    // 0x14fc38: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x14fc38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_14fc3c:
    // 0x14fc3c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x14fc3cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_14fc40:
    // 0x14fc40: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x14fc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14fc44:
    // 0x14fc44: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x14fc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14fc48:
    // 0x14fc48: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x14fc48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_14fc4c:
    // 0x14fc4c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x14fc4cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14fc50:
    // 0x14fc50: 0x0  nop
    ctx->pc = 0x14fc50u;
    // NOP
label_14fc54:
    // 0x14fc54: 0x45000172  bc1f        . + 4 + (0x172 << 2)
label_14fc58:
    if (ctx->pc == 0x14FC58u) {
        ctx->pc = 0x14FC5Cu;
        goto label_14fc5c;
    }
    ctx->pc = 0x14FC54u;
    {
        const bool branch_taken_0x14fc54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fc54) {
            ctx->pc = 0x150220u;
            goto label_150220;
        }
    }
    ctx->pc = 0x14FC5Cu;
label_14fc5c:
    // 0x14fc5c: 0x8663003c  lh          $v1, 0x3C($s3)
    ctx->pc = 0x14fc5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
label_14fc60:
    // 0x14fc60: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x14fc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_14fc64:
    // 0x14fc64: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_14fc68:
    if (ctx->pc == 0x14FC68u) {
        ctx->pc = 0x14FC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC64u;
        // 0x14fc68: 0x2412000f  addiu       $s2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FC6Cu;
        goto label_14fc6c;
    }
    ctx->pc = 0x14FC64u;
    {
        const bool branch_taken_0x14fc64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14FC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC64u;
        // 0x14fc68: 0x2412000f  addiu       $s2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc64) {
            ctx->pc = 0x14FC80u;
            goto label_14fc80;
        }
    }
    ctx->pc = 0x14FC6Cu;
label_14fc6c:
    // 0x14fc6c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x14fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_14fc70:
    // 0x14fc70: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_14fc74:
    if (ctx->pc == 0x14FC74u) {
        ctx->pc = 0x14FC78u;
        goto label_14fc78;
    }
    ctx->pc = 0x14FC70u;
    {
        const bool branch_taken_0x14fc70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14fc70) {
            ctx->pc = 0x14FC80u;
            goto label_14fc80;
        }
    }
    ctx->pc = 0x14FC78u;
label_14fc78:
    // 0x14fc78: 0x10000003  b           . + 4 + (0x3 << 2)
label_14fc7c:
    if (ctx->pc == 0x14FC7Cu) {
        ctx->pc = 0x14FC80u;
        goto label_14fc80;
    }
    ctx->pc = 0x14FC78u;
    {
        const bool branch_taken_0x14fc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fc78) {
            ctx->pc = 0x14FC88u;
            goto label_14fc88;
        }
    }
    ctx->pc = 0x14FC80u;
label_14fc80:
    // 0x14fc80: 0x10000167  b           . + 4 + (0x167 << 2)
label_14fc84:
    if (ctx->pc == 0x14FC84u) {
        ctx->pc = 0x14FC88u;
        goto label_14fc88;
    }
    ctx->pc = 0x14FC80u;
    {
        const bool branch_taken_0x14fc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fc80) {
            ctx->pc = 0x150220u;
            goto label_150220;
        }
    }
    ctx->pc = 0x14FC88u;
label_14fc88:
    // 0x14fc88: 0xc08f0cc  jal         func_23C330
label_14fc8c:
    if (ctx->pc == 0x14FC8Cu) {
        ctx->pc = 0x14FC90u;
        goto label_14fc90;
    }
    ctx->pc = 0x14FC88u;
    SET_GPR_U32(ctx, 31, 0x14FC90u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x14FC90u;
label_14fc90:
    // 0x14fc90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14fc90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14fc94:
    // 0x14fc94: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x14fc94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_14fc98:
    // 0x14fc98: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14fc98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_14fc9c:
    // 0x14fc9c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x14fc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_14fca0:
    // 0x14fca0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14fca4:
    // 0x14fca4: 0x0  nop
    ctx->pc = 0x14fca4u;
    // NOP
label_14fca8:
    // 0x14fca8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x14fca8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_14fcac:
    // 0x14fcac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x14fcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_14fcb0:
    // 0x14fcb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14fcb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14fcb4:
    // 0x14fcb4: 0x0  nop
    ctx->pc = 0x14fcb4u;
    // NOP
label_14fcb8:
    // 0x14fcb8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x14fcb8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_14fcbc:
    // 0x14fcbc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14fcbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_14fcc0:
    // 0x14fcc0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14fcc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_14fcc4:
    // 0x14fcc4: 0x0  nop
    ctx->pc = 0x14fcc4u;
    // NOP
label_14fcc8:
    // 0x14fcc8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x14fcc8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_14fccc:
    // 0x14fccc: 0x0  nop
    ctx->pc = 0x14fcccu;
    // NOP
label_14fcd0:
    // 0x14fcd0: 0x0  nop
    ctx->pc = 0x14fcd0u;
    // NOP
label_14fcd4:
    // 0x14fcd4: 0x1010  mfhi        $v0
    ctx->pc = 0x14fcd4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_14fcd8:
    // 0x14fcd8: 0x10000151  b           . + 4 + (0x151 << 2)
label_14fcdc:
    if (ctx->pc == 0x14FCDCu) {
        ctx->pc = 0x14FCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FCD8u;
        // 0x14fcdc: 0x2452000f  addiu       $s2, $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FCE0u;
        goto label_14fce0;
    }
    ctx->pc = 0x14FCD8u;
    {
        const bool branch_taken_0x14fcd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FCD8u;
        // 0x14fcdc: 0x2452000f  addiu       $s2, $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fcd8) {
            ctx->pc = 0x150220u;
            goto label_150220;
        }
    }
    ctx->pc = 0x14FCE0u;
label_14fce0:
    // 0x14fce0: 0x8e620194  lw          $v0, 0x194($s3)
    ctx->pc = 0x14fce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 404)));
label_14fce4:
    // 0x14fce4: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x14fce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_14fce8:
    // 0x14fce8: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
label_14fcec:
    if (ctx->pc == 0x14FCECu) {
        ctx->pc = 0x14FCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FCE8u;
        // 0x14fcec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FCF0u;
        goto label_14fcf0;
    }
    ctx->pc = 0x14FCE8u;
    {
        const bool branch_taken_0x14fce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FCE8u;
        // 0x14fcec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fce8) {
            ctx->pc = 0x14FEECu;
            goto label_14feec;
        }
    }
    ctx->pc = 0x14FCF0u;
label_14fcf0:
    // 0x14fcf0: 0x1220007e  beqz        $s1, . + 4 + (0x7E << 2)
label_14fcf4:
    if (ctx->pc == 0x14FCF4u) {
        ctx->pc = 0x14FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FCF0u;
        // 0x14fcf4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FCF8u;
        goto label_14fcf8;
    }
    ctx->pc = 0x14FCF0u;
    {
        const bool branch_taken_0x14fcf0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FCF0u;
        // 0x14fcf4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fcf0) {
            ctx->pc = 0x14FEECu;
            goto label_14feec;
        }
    }
    ctx->pc = 0x14FCF8u;
label_14fcf8:
    // 0x14fcf8: 0xc06d448  jal         func_1B5120
label_14fcfc:
    if (ctx->pc == 0x14FCFCu) {
        ctx->pc = 0x14FD00u;
        goto label_14fd00;
    }
    ctx->pc = 0x14FCF8u;
    SET_GPR_U32(ctx, 31, 0x14FD00u);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x14FD00u;
label_14fd00:
    // 0x14fd00: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x14fd00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
label_14fd04:
    // 0x14fd04: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14fd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14fd08:
    // 0x14fd08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14fd08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14fd0c:
    // 0x14fd0c: 0x0  nop
    ctx->pc = 0x14fd0cu;
    // NOP
label_14fd10:
    // 0x14fd10: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14fd10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14fd14:
    // 0x14fd14: 0x0  nop
    ctx->pc = 0x14fd14u;
    // NOP
label_14fd18:
    // 0x14fd18: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_14fd1c:
    if (ctx->pc == 0x14FD1Cu) {
        ctx->pc = 0x14FD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD18u;
        // 0x14fd1c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FD20u;
        goto label_14fd20;
    }
    ctx->pc = 0x14FD18u;
    {
        const bool branch_taken_0x14fd18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14FD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD18u;
        // 0x14fd1c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fd18) {
            ctx->pc = 0x14FD28u;
            goto label_14fd28;
        }
    }
    ctx->pc = 0x14FD20u;
label_14fd20:
    // 0x14fd20: 0x10000016  b           . + 4 + (0x16 << 2)
label_14fd24:
    if (ctx->pc == 0x14FD24u) {
        ctx->pc = 0x14FD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD20u;
        // 0x14fd24: 0x2412000a  addiu       $s2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FD28u;
        goto label_14fd28;
    }
    ctx->pc = 0x14FD20u;
    {
        const bool branch_taken_0x14fd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD20u;
        // 0x14fd24: 0x2412000a  addiu       $s2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fd20) {
            ctx->pc = 0x14FD7Cu;
            goto label_14fd7c;
        }
    }
    ctx->pc = 0x14FD28u;
label_14fd28:
    // 0x14fd28: 0xc06d448  jal         func_1B5120
label_14fd2c:
    if (ctx->pc == 0x14FD2Cu) {
        ctx->pc = 0x14FD30u;
        goto label_14fd30;
    }
    ctx->pc = 0x14FD28u;
    SET_GPR_U32(ctx, 31, 0x14FD30u);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x14FD30u;
label_14fd30:
    // 0x14fd30: 0x3c024016  lui         $v0, 0x4016
    ctx->pc = 0x14fd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16406 << 16));
label_14fd34:
    // 0x14fd34: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x14fd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
label_14fd38:
    // 0x14fd38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14fd38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14fd3c:
    // 0x14fd3c: 0x0  nop
    ctx->pc = 0x14fd3cu;
    // NOP
label_14fd40:
    // 0x14fd40: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x14fd40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14fd44:
    // 0x14fd44: 0x0  nop
    ctx->pc = 0x14fd44u;
    // NOP
label_14fd48:
    // 0x14fd48: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_14fd4c:
    if (ctx->pc == 0x14FD4Cu) {
        ctx->pc = 0x14FD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD48u;
        // 0x14fd4c: 0x3c023f49  lui         $v0, 0x3F49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FD50u;
        goto label_14fd50;
    }
    ctx->pc = 0x14FD48u;
    {
        const bool branch_taken_0x14fd48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14FD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD48u;
        // 0x14fd4c: 0x3c023f49  lui         $v0, 0x3F49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fd48) {
            ctx->pc = 0x14FD58u;
            goto label_14fd58;
        }
    }
    ctx->pc = 0x14FD50u;
label_14fd50:
    // 0x14fd50: 0x1000000a  b           . + 4 + (0xA << 2)
label_14fd54:
    if (ctx->pc == 0x14FD54u) {
        ctx->pc = 0x14FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD50u;
        // 0x14fd54: 0x2412000b  addiu       $s2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FD58u;
        goto label_14fd58;
    }
    ctx->pc = 0x14FD50u;
    {
        const bool branch_taken_0x14fd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD50u;
        // 0x14fd54: 0x2412000b  addiu       $s2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fd50) {
            ctx->pc = 0x14FD7Cu;
            goto label_14fd7c;
        }
    }
    ctx->pc = 0x14FD58u;
label_14fd58:
    // 0x14fd58: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14fd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14fd5c:
    // 0x14fd5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fd5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14fd60:
    // 0x14fd60: 0x0  nop
    ctx->pc = 0x14fd60u;
    // NOP
label_14fd64:
    // 0x14fd64: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x14fd64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14fd68:
    // 0x14fd68: 0x0  nop
    ctx->pc = 0x14fd68u;
    // NOP
label_14fd6c:
    // 0x14fd6c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_14fd70:
    if (ctx->pc == 0x14FD70u) {
        ctx->pc = 0x14FD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD6Cu;
        // 0x14fd70: 0x2412000c  addiu       $s2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FD74u;
        goto label_14fd74;
    }
    ctx->pc = 0x14FD6Cu;
    {
        const bool branch_taken_0x14fd6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14FD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD6Cu;
        // 0x14fd70: 0x2412000c  addiu       $s2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fd6c) {
            ctx->pc = 0x14FD7Cu;
            goto label_14fd7c;
        }
    }
    ctx->pc = 0x14FD74u;
label_14fd74:
    // 0x14fd74: 0x10000001  b           . + 4 + (0x1 << 2)
label_14fd78:
    if (ctx->pc == 0x14FD78u) {
        ctx->pc = 0x14FD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD74u;
        // 0x14fd78: 0x2412000d  addiu       $s2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FD7Cu;
        goto label_14fd7c;
    }
    ctx->pc = 0x14FD74u;
    {
        const bool branch_taken_0x14fd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD74u;
        // 0x14fd78: 0x2412000d  addiu       $s2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fd74) {
            ctx->pc = 0x14FD7Cu;
            goto label_14fd7c;
        }
    }
    ctx->pc = 0x14FD7Cu;
label_14fd7c:
    // 0x14fd7c: 0x8662003c  lh          $v0, 0x3C($s3)
    ctx->pc = 0x14fd7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
label_14fd80:
    // 0x14fd80: 0x16420002  bne         $s2, $v0, . + 4 + (0x2 << 2)
label_14fd84:
    if (ctx->pc == 0x14FD84u) {
        ctx->pc = 0x14FD88u;
        goto label_14fd88;
    }
    ctx->pc = 0x14FD80u;
    {
        const bool branch_taken_0x14fd80 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x14fd80) {
            ctx->pc = 0x14FD8Cu;
            goto label_14fd8c;
        }
    }
    ctx->pc = 0x14FD88u;
label_14fd88:
    // 0x14fd88: 0x241201ff  addiu       $s2, $zero, 0x1FF
    ctx->pc = 0x14fd88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
label_14fd8c:
    // 0x14fd8c: 0x8663020a  lh          $v1, 0x20A($s3)
    ctx->pc = 0x14fd8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 522)));
label_14fd90:
    // 0x14fd90: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x14fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_14fd94:
    // 0x14fd94: 0x14620122  bne         $v1, $v0, . + 4 + (0x122 << 2)
label_14fd98:
    if (ctx->pc == 0x14FD98u) {
        ctx->pc = 0x14FD9Cu;
        goto label_14fd9c;
    }
    ctx->pc = 0x14FD94u;
    {
        const bool branch_taken_0x14fd94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14fd94) {
            ctx->pc = 0x150220u;
            goto label_150220;
        }
    }
    ctx->pc = 0x14FD9Cu;
label_14fd9c:
    // 0x14fd9c: 0x8263021f  lb          $v1, 0x21F($s3)
    ctx->pc = 0x14fd9cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 543)));
label_14fda0:
    // 0x14fda0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x14fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_14fda4:
    // 0x14fda4: 0x24420f28  addiu       $v0, $v0, 0xF28
    ctx->pc = 0x14fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3880));
label_14fda8:
    // 0x14fda8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x14fda8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_14fdac:
    // 0x14fdac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14fdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14fdb0:
    // 0x14fdb0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14fdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14fdb4:
    // 0x14fdb4: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x14fdb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14fdb8:
    // 0x14fdb8: 0x0  nop
    ctx->pc = 0x14fdb8u;
    // NOP
label_14fdbc:
    // 0x14fdbc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_14fdc0:
    if (ctx->pc == 0x14FDC0u) {
        ctx->pc = 0x14FDC4u;
        goto label_14fdc4;
    }
    ctx->pc = 0x14FDBCu;
    {
        const bool branch_taken_0x14fdbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fdbc) {
            ctx->pc = 0x14FDCCu;
            goto label_14fdcc;
        }
    }
    ctx->pc = 0x14FDC4u;
label_14fdc4:
    // 0x14fdc4: 0x10000008  b           . + 4 + (0x8 << 2)
label_14fdc8:
    if (ctx->pc == 0x14FDC8u) {
        ctx->pc = 0x14FDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FDC4u;
        // 0x14fdc8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FDCCu;
        goto label_14fdcc;
    }
    ctx->pc = 0x14FDC4u;
    {
        const bool branch_taken_0x14fdc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FDC4u;
        // 0x14fdc8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fdc4) {
            ctx->pc = 0x14FDE8u;
            goto label_14fde8;
        }
    }
    ctx->pc = 0x14FDCCu;
label_14fdcc:
    // 0x14fdcc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14fdccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_14fdd0:
    // 0x14fdd0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x14fdd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14fdd4:
    // 0x14fdd4: 0x0  nop
    ctx->pc = 0x14fdd4u;
    // NOP
label_14fdd8:
    // 0x14fdd8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_14fddc:
    if (ctx->pc == 0x14FDDCu) {
        ctx->pc = 0x14FDE0u;
        goto label_14fde0;
    }
    ctx->pc = 0x14FDD8u;
    {
        const bool branch_taken_0x14fdd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fdd8) {
            ctx->pc = 0x14FDE8u;
            goto label_14fde8;
        }
    }
    ctx->pc = 0x14FDE0u;
label_14fde0:
    // 0x14fde0: 0x10000001  b           . + 4 + (0x1 << 2)
label_14fde4:
    if (ctx->pc == 0x14FDE4u) {
        ctx->pc = 0x14FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FDE0u;
        // 0x14fde4: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FDE8u;
        goto label_14fde8;
    }
    ctx->pc = 0x14FDE0u;
    {
        const bool branch_taken_0x14fde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FDE0u;
        // 0x14fde4: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fde0) {
            ctx->pc = 0x14FDE8u;
            goto label_14fde8;
        }
    }
    ctx->pc = 0x14FDE8u;
label_14fde8:
    // 0x14fde8: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x14fde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14fdec:
    // 0x14fdec: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x14fdecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_14fdf0:
    // 0x14fdf0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14fdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14fdf4:
    // 0x14fdf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fdf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14fdf8:
    // 0x14fdf8: 0x0  nop
    ctx->pc = 0x14fdf8u;
    // NOP
label_14fdfc:
    // 0x14fdfc: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x14fdfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
label_14fe00:
    // 0x14fe00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14fe00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14fe04:
    // 0x14fe04: 0x0  nop
    ctx->pc = 0x14fe04u;
    // NOP
label_14fe08:
    // 0x14fe08: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_14fe0c:
    if (ctx->pc == 0x14FE0Cu) {
        ctx->pc = 0x14FE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FE08u;
        // 0x14fe0c: 0xe6610044  swc1        $f1, 0x44($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FE10u;
        goto label_14fe10;
    }
    ctx->pc = 0x14FE08u;
    {
        const bool branch_taken_0x14fe08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14FE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FE08u;
        // 0x14fe0c: 0xe6610044  swc1        $f1, 0x44($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fe08) {
            ctx->pc = 0x14FE24u;
            goto label_14fe24;
        }
    }
    ctx->pc = 0x14FE10u;
label_14fe10:
    // 0x14fe10: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x14fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_14fe14:
    // 0x14fe14: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14fe14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14fe18:
    // 0x14fe18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fe18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14fe1c:
    // 0x14fe1c: 0x1000000d  b           . + 4 + (0xD << 2)
label_14fe20:
    if (ctx->pc == 0x14FE20u) {
        ctx->pc = 0x14FE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FE1Cu;
        // 0x14fe20: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FE24u;
        goto label_14fe24;
    }
    ctx->pc = 0x14FE1Cu;
    {
        const bool branch_taken_0x14fe1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FE1Cu;
        // 0x14fe20: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fe1c) {
            ctx->pc = 0x14FE54u;
            goto label_14fe54;
        }
    }
    ctx->pc = 0x14FE24u;
label_14fe24:
    // 0x14fe24: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x14fe24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_14fe28:
    // 0x14fe28: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14fe28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14fe2c:
    // 0x14fe2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fe2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14fe30:
    // 0x14fe30: 0x0  nop
    ctx->pc = 0x14fe30u;
    // NOP
label_14fe34:
    // 0x14fe34: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14fe34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14fe38:
    // 0x14fe38: 0x0  nop
    ctx->pc = 0x14fe38u;
    // NOP
label_14fe3c:
    // 0x14fe3c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_14fe40:
    if (ctx->pc == 0x14FE40u) {
        ctx->pc = 0x14FE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FE3Cu;
        // 0x14fe40: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FE44u;
        goto label_14fe44;
    }
    ctx->pc = 0x14FE3Cu;
    {
        const bool branch_taken_0x14fe3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14FE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FE3Cu;
        // 0x14fe40: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fe3c) {
            ctx->pc = 0x14FE54u;
            goto label_14fe54;
        }
    }
    ctx->pc = 0x14FE44u;
label_14fe44:
    // 0x14fe44: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14fe44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14fe48:
    // 0x14fe48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fe48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14fe4c:
    // 0x14fe4c: 0x10000001  b           . + 4 + (0x1 << 2)
label_14fe50:
    if (ctx->pc == 0x14FE50u) {
        ctx->pc = 0x14FE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FE4Cu;
        // 0x14fe50: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FE54u;
        goto label_14fe54;
    }
    ctx->pc = 0x14FE4Cu;
    {
        const bool branch_taken_0x14fe4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FE4Cu;
        // 0x14fe50: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fe4c) {
            ctx->pc = 0x14FE54u;
            goto label_14fe54;
        }
    }
    ctx->pc = 0x14FE54u;
label_14fe54:
    // 0x14fe54: 0xe6610044  swc1        $f1, 0x44($s3)
    ctx->pc = 0x14fe54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
label_14fe58:
    // 0x14fe58: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x14fe58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_14fe5c:
    // 0x14fe5c: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x14fe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_14fe60:
    // 0x14fe60: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14fe60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14fe64:
    // 0x14fe64: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14fe64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_14fe68:
    // 0x14fe68: 0x144000ed  bnez        $v0, . + 4 + (0xED << 2)
label_14fe6c:
    if (ctx->pc == 0x14FE6Cu) {
        ctx->pc = 0x14FE70u;
        goto label_14fe70;
    }
    ctx->pc = 0x14FE68u;
    {
        const bool branch_taken_0x14fe68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14fe68) {
            ctx->pc = 0x150220u;
            goto label_150220;
        }
    }
    ctx->pc = 0x14FE70u;
label_14fe70:
    // 0x14fe70: 0xc6610050  lwc1        $f1, 0x50($s3)
    ctx->pc = 0x14fe70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14fe74:
    // 0x14fe74: 0xc6600150  lwc1        $f0, 0x150($s3)
    ctx->pc = 0x14fe74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14fe78:
    // 0x14fe78: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14fe78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_14fe7c:
    // 0x14fe7c: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x14fe7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_14fe80:
    // 0x14fe80: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x14fe80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_14fe84:
    // 0x14fe84: 0xc6610058  lwc1        $f1, 0x58($s3)
    ctx->pc = 0x14fe84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14fe88:
    // 0x14fe88: 0xc6600158  lwc1        $f0, 0x158($s3)
    ctx->pc = 0x14fe88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14fe8c:
    // 0x14fe8c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14fe8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_14fe90:
    // 0x14fe90: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x14fe90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_14fe94:
    // 0x14fe94: 0x4409a800  mfc1        $t1, $f21
    ctx->pc = 0x14fe94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_14fe98:
    // 0x14fe98: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x14fe98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_14fe9c:
    // 0x14fe9c: 0x4a000138  vcallms     0x20
    ctx->pc = 0x14fe9cu;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
label_14fea0:
    // 0x14fea0: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x14fea0u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_14fea4:
    // 0x14fea4: 0x44892000  mtc1        $t1, $f4
    ctx->pc = 0x14fea4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_14fea8:
    // 0x14fea8: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x14fea8u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
label_14feac:
    // 0x14feac: 0x44891800  mtc1        $t1, $f3
    ctx->pc = 0x14feacu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_14feb0:
    // 0x14feb0: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x14feb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14feb4:
    // 0x14feb4: 0xc6620150  lwc1        $f2, 0x150($s3)
    ctx->pc = 0x14feb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14feb8:
    // 0x14feb8: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x14feb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14febc:
    // 0x14febc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x14febcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_14fec0:
    // 0x14fec0: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x14fec0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[1]));
label_14fec4:
    // 0x14fec4: 0x4604001c  madd.s      $f0, $f0, $f4
    ctx->pc = 0x14fec4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[4]));
label_14fec8:
    // 0x14fec8: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x14fec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
label_14fecc:
    // 0x14fecc: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x14feccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14fed0:
    // 0x14fed0: 0xc6620158  lwc1        $f2, 0x158($s3)
    ctx->pc = 0x14fed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14fed4:
    // 0x14fed4: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x14fed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14fed8:
    // 0x14fed8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x14fed8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_14fedc:
    // 0x14fedc: 0x46011019  suba.s      $f2, $f1
    ctx->pc = 0x14fedcu;
    FPU_SET_ACC(ctx, FPU_SUB_S(ctx->f[2], ctx->f[1]));
label_14fee0:
    // 0x14fee0: 0x4603001c  madd.s      $f0, $f0, $f3
    ctx->pc = 0x14fee0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[3]));
label_14fee4:
    // 0x14fee4: 0x100000ce  b           . + 4 + (0xCE << 2)
label_14fee8:
    if (ctx->pc == 0x14FEE8u) {
        ctx->pc = 0x14FEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FEE4u;
        // 0x14fee8: 0xe6600058  swc1        $f0, 0x58($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FEECu;
        goto label_14feec;
    }
    ctx->pc = 0x14FEE4u;
    {
        const bool branch_taken_0x14fee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FEE4u;
        // 0x14fee8: 0xe6600058  swc1        $f0, 0x58($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fee4) {
            ctx->pc = 0x150220u;
            goto label_150220;
        }
    }
    ctx->pc = 0x14FEECu;
label_14feec:
    // 0x14feec: 0x100000cc  b           . + 4 + (0xCC << 2)
label_14fef0:
    if (ctx->pc == 0x14FEF0u) {
        ctx->pc = 0x14FEF4u;
        goto label_14fef4;
    }
    ctx->pc = 0x14FEECu;
    {
        const bool branch_taken_0x14feec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14feec) {
            ctx->pc = 0x150220u;
            goto label_150220;
        }
    }
    ctx->pc = 0x14FEF4u;
label_14fef4:
    // 0x14fef4: 0x8e630200  lw          $v1, 0x200($s3)
    ctx->pc = 0x14fef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 512)));
label_14fef8:
    // 0x14fef8: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_14fefc:
    if (ctx->pc == 0x14FEFCu) {
        ctx->pc = 0x14FF00u;
        goto label_14ff00;
    }
    ctx->pc = 0x14FEF8u;
    {
        const bool branch_taken_0x14fef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fef8) {
            ctx->pc = 0x14FF68u;
            goto label_14ff68;
        }
    }
    ctx->pc = 0x14FF00u;
label_14ff00:
    // 0x14ff00: 0x8e620194  lw          $v0, 0x194($s3)
    ctx->pc = 0x14ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 404)));
label_14ff04:
    // 0x14ff04: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x14ff04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_14ff08:
    // 0x14ff08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_14ff0c:
    if (ctx->pc == 0x14FF0Cu) {
        ctx->pc = 0x14FF10u;
        goto label_14ff10;
    }
    ctx->pc = 0x14FF08u;
    {
        const bool branch_taken_0x14ff08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ff08) {
            ctx->pc = 0x14FF1Cu;
            goto label_14ff1c;
        }
    }
    ctx->pc = 0x14FF10u;
label_14ff10:
    // 0x14ff10: 0x84620222  lh          $v0, 0x222($v1)
    ctx->pc = 0x14ff10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 546)));
label_14ff14:
    // 0x14ff14: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_14ff18:
    if (ctx->pc == 0x14FF18u) {
        ctx->pc = 0x14FF1Cu;
        goto label_14ff1c;
    }
    ctx->pc = 0x14FF14u;
    {
        const bool branch_taken_0x14ff14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ff14) {
            ctx->pc = 0x14FF5Cu;
            goto label_14ff5c;
        }
    }
    ctx->pc = 0x14FF1Cu;
label_14ff1c:
    // 0x14ff1c: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x14ff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_14ff20:
    // 0x14ff20: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x14ff20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14ff24:
    // 0x14ff24: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_14ff28:
    if (ctx->pc == 0x14FF28u) {
        ctx->pc = 0x14FF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FF24u;
        // 0x14ff28: 0x24120015  addiu       $s2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FF2Cu;
        goto label_14ff2c;
    }
    ctx->pc = 0x14FF24u;
    {
        const bool branch_taken_0x14ff24 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x14FF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FF24u;
        // 0x14ff28: 0x24120015  addiu       $s2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ff24) {
            ctx->pc = 0x14FF38u;
            goto label_14ff38;
        }
    }
    ctx->pc = 0x14FF2Cu;
label_14ff2c:
    // 0x14ff2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14ff2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14ff30:
    // 0x14ff30: 0x10000008  b           . + 4 + (0x8 << 2)
label_14ff34:
    if (ctx->pc == 0x14FF34u) {
        ctx->pc = 0x14FF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FF30u;
        // 0x14ff34: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FF38u;
        goto label_14ff38;
    }
    ctx->pc = 0x14FF30u;
    {
        const bool branch_taken_0x14ff30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FF30u;
        // 0x14ff34: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ff30) {
            ctx->pc = 0x14FF54u;
            goto label_14ff54;
        }
    }
    ctx->pc = 0x14FF38u;
label_14ff38:
    // 0x14ff38: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x14ff38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_14ff3c:
    // 0x14ff3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14ff3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_14ff40:
    // 0x14ff40: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14ff40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_14ff44:
    // 0x14ff44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14ff44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14ff48:
    // 0x14ff48: 0x0  nop
    ctx->pc = 0x14ff48u;
    // NOP
label_14ff4c:
    // 0x14ff4c: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x14ff4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_14ff50:
    // 0x14ff50: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x14ff50u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_14ff54:
    // 0x14ff54: 0x10000006  b           . + 4 + (0x6 << 2)
label_14ff58:
    if (ctx->pc == 0x14FF58u) {
        ctx->pc = 0x14FF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FF54u;
        // 0x14ff58: 0x8663003c  lh          $v1, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FF5Cu;
        goto label_14ff5c;
    }
    ctx->pc = 0x14FF54u;
    {
        const bool branch_taken_0x14ff54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FF54u;
        // 0x14ff58: 0x8663003c  lh          $v1, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ff54) {
            ctx->pc = 0x14FF70u;
            goto label_14ff70;
        }
    }
    ctx->pc = 0x14FF5Cu;
label_14ff5c:
    // 0x14ff5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14ff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_14ff60:
    // 0x14ff60: 0x10000002  b           . + 4 + (0x2 << 2)
label_14ff64:
    if (ctx->pc == 0x14FF64u) {
        ctx->pc = 0x14FF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FF60u;
        // 0x14ff64: 0xa4620222  sh          $v0, 0x222($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 546), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FF68u;
        goto label_14ff68;
    }
    ctx->pc = 0x14FF60u;
    {
        const bool branch_taken_0x14ff60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FF60u;
        // 0x14ff64: 0xa4620222  sh          $v0, 0x222($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 546), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ff60) {
            ctx->pc = 0x14FF6Cu;
            goto label_14ff6c;
        }
    }
    ctx->pc = 0x14FF68u;
label_14ff68:
    // 0x14ff68: 0x24120009  addiu       $s2, $zero, 0x9
    ctx->pc = 0x14ff68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_14ff6c:
    // 0x14ff6c: 0x8663003c  lh          $v1, 0x3C($s3)
    ctx->pc = 0x14ff6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
label_14ff70:
    // 0x14ff70: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x14ff70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_14ff74:
    // 0x14ff74: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_14ff78:
    if (ctx->pc == 0x14FF78u) {
        ctx->pc = 0x14FF7Cu;
        goto label_14ff7c;
    }
    ctx->pc = 0x14FF74u;
    {
        const bool branch_taken_0x14ff74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14ff74) {
            ctx->pc = 0x14FFB0u;
            goto label_14ffb0;
        }
    }
    ctx->pc = 0x14FF7Cu;
label_14ff7c:
    // 0x14ff7c: 0x8e620194  lw          $v0, 0x194($s3)
    ctx->pc = 0x14ff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 404)));
label_14ff80:
    // 0x14ff80: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x14ff80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_14ff84:
    // 0x14ff84: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_14ff88:
    if (ctx->pc == 0x14FF88u) {
        ctx->pc = 0x14FF8Cu;
        goto label_14ff8c;
    }
    ctx->pc = 0x14FF84u;
    {
        const bool branch_taken_0x14ff84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ff84) {
            ctx->pc = 0x14FF94u;
            goto label_14ff94;
        }
    }
    ctx->pc = 0x14FF8Cu;
label_14ff8c:
    // 0x14ff8c: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
label_14ff90:
    if (ctx->pc == 0x14FF90u) {
        ctx->pc = 0x14FF94u;
        goto label_14ff94;
    }
    ctx->pc = 0x14FF8Cu;
    {
        const bool branch_taken_0x14ff8c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ff8c) {
            ctx->pc = 0x14FFB0u;
            goto label_14ffb0;
        }
    }
    ctx->pc = 0x14FF94u;
label_14ff94:
    // 0x14ff94: 0x8663003c  lh          $v1, 0x3C($s3)
    ctx->pc = 0x14ff94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
label_14ff98:
    // 0x14ff98: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x14ff98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_14ff9c:
    // 0x14ff9c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_14ffa0:
    if (ctx->pc == 0x14FFA0u) {
        ctx->pc = 0x14FFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FF9Cu;
        // 0x14ffa0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FFA4u;
        goto label_14ffa4;
    }
    ctx->pc = 0x14FF9Cu;
    {
        const bool branch_taken_0x14ff9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14FFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FF9Cu;
        // 0x14ffa0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ff9c) {
            ctx->pc = 0x14FFA8u;
            goto label_14ffa8;
        }
    }
    ctx->pc = 0x14FFA4u;
label_14ffa4:
    // 0x14ffa4: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x14ffa4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_14ffa8:
    // 0x14ffa8: 0x1000009d  b           . + 4 + (0x9D << 2)
label_14ffac:
    if (ctx->pc == 0x14FFACu) {
        ctx->pc = 0x14FFB0u;
        goto label_14ffb0;
    }
    ctx->pc = 0x14FFA8u;
    {
        const bool branch_taken_0x14ffa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ffa8) {
            ctx->pc = 0x150220u;
            goto label_150220;
        }
    }
    ctx->pc = 0x14FFB0u;
label_14ffb0:
    // 0x14ffb0: 0x1220009b  beqz        $s1, . + 4 + (0x9B << 2)
label_14ffb4:
    if (ctx->pc == 0x14FFB4u) {
        ctx->pc = 0x14FFB8u;
        goto label_14ffb8;
    }
    ctx->pc = 0x14FFB0u;
    {
        const bool branch_taken_0x14ffb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ffb0) {
            ctx->pc = 0x150220u;
            goto label_150220;
        }
    }
    ctx->pc = 0x14FFB8u;
label_14ffb8:
    // 0x14ffb8: 0x8263021f  lb          $v1, 0x21F($s3)
    ctx->pc = 0x14ffb8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 543)));
label_14ffbc:
    // 0x14ffbc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x14ffbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_14ffc0:
    // 0x14ffc0: 0x24420f28  addiu       $v0, $v0, 0xF28
    ctx->pc = 0x14ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3880));
label_14ffc4:
    // 0x14ffc4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x14ffc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_14ffc8:
    // 0x14ffc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14ffc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14ffcc:
    // 0x14ffcc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14ffccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14ffd0:
    // 0x14ffd0: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x14ffd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14ffd4:
    // 0x14ffd4: 0x0  nop
    ctx->pc = 0x14ffd4u;
    // NOP
label_14ffd8:
    // 0x14ffd8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_14ffdc:
    if (ctx->pc == 0x14FFDCu) {
        ctx->pc = 0x14FFE0u;
        goto label_14ffe0;
    }
    ctx->pc = 0x14FFD8u;
    {
        const bool branch_taken_0x14ffd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14ffd8) {
            ctx->pc = 0x14FFE8u;
            goto label_14ffe8;
        }
    }
    ctx->pc = 0x14FFE0u;
label_14ffe0:
    // 0x14ffe0: 0x10000008  b           . + 4 + (0x8 << 2)
label_14ffe4:
    if (ctx->pc == 0x14FFE4u) {
        ctx->pc = 0x14FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FFE0u;
        // 0x14ffe4: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FFE8u;
        goto label_14ffe8;
    }
    ctx->pc = 0x14FFE0u;
    {
        const bool branch_taken_0x14ffe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FFE0u;
        // 0x14ffe4: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ffe0) {
            ctx->pc = 0x150004u;
            goto label_150004;
        }
    }
    ctx->pc = 0x14FFE8u;
label_14ffe8:
    // 0x14ffe8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14ffe8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_14ffec:
    // 0x14ffec: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x14ffecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14fff0:
    // 0x14fff0: 0x0  nop
    ctx->pc = 0x14fff0u;
    // NOP
label_14fff4:
    // 0x14fff4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_14fff8:
    if (ctx->pc == 0x14FFF8u) {
        ctx->pc = 0x14FFFCu;
        goto label_14fffc;
    }
    ctx->pc = 0x14FFF4u;
    {
        const bool branch_taken_0x14fff4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fff4) {
            ctx->pc = 0x150004u;
            goto label_150004;
        }
    }
    ctx->pc = 0x14FFFCu;
label_14fffc:
    // 0x14fffc: 0x10000001  b           . + 4 + (0x1 << 2)
label_150000:
    if (ctx->pc == 0x150000u) {
        ctx->pc = 0x150000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FFFCu;
        // 0x150000: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x150004u;
        goto label_150004;
    }
    ctx->pc = 0x14FFFCu;
    {
        const bool branch_taken_0x14fffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FFFCu;
        // 0x150000: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fffc) {
            ctx->pc = 0x150004u;
            goto label_150004;
        }
    }
    ctx->pc = 0x150004u;
label_150004:
    // 0x150004: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x150004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_150008:
    // 0x150008: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x150008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_15000c:
    // 0x15000c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x15000cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_150010:
    // 0x150010: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_150014:
    // 0x150014: 0x0  nop
    ctx->pc = 0x150014u;
    // NOP
label_150018:
    // 0x150018: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x150018u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
label_15001c:
    // 0x15001c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15001cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_150020:
    // 0x150020: 0x0  nop
    ctx->pc = 0x150020u;
    // NOP
label_150024:
    // 0x150024: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_150028:
    if (ctx->pc == 0x150028u) {
        ctx->pc = 0x150028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150024u;
        // 0x150028: 0xe6610044  swc1        $f1, 0x44($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15002Cu;
        goto label_15002c;
    }
    ctx->pc = 0x150024u;
    {
        const bool branch_taken_0x150024 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x150028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150024u;
        // 0x150028: 0xe6610044  swc1        $f1, 0x44($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150024) {
            ctx->pc = 0x150040u;
            goto label_150040;
        }
    }
    ctx->pc = 0x15002Cu;
label_15002c:
    // 0x15002c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x15002cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_150030:
    // 0x150030: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x150030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_150034:
    // 0x150034: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_150038:
    // 0x150038: 0x1000000d  b           . + 4 + (0xD << 2)
label_15003c:
    if (ctx->pc == 0x15003Cu) {
        ctx->pc = 0x15003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150038u;
        // 0x15003c: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x150040u;
        goto label_150040;
    }
    ctx->pc = 0x150038u;
    {
        const bool branch_taken_0x150038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150038u;
        // 0x15003c: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x150038) {
            ctx->pc = 0x150070u;
            goto label_150070;
        }
    }
    ctx->pc = 0x150040u;
label_150040:
    // 0x150040: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x150040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_150044:
    // 0x150044: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x150044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_150048:
    // 0x150048: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15004c:
    // 0x15004c: 0x0  nop
    ctx->pc = 0x15004cu;
    // NOP
label_150050:
    // 0x150050: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x150050u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_150054:
    // 0x150054: 0x0  nop
    ctx->pc = 0x150054u;
    // NOP
label_150058:
    // 0x150058: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_15005c:
    if (ctx->pc == 0x15005Cu) {
        ctx->pc = 0x15005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150058u;
        // 0x15005c: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150060u;
        goto label_150060;
    }
    ctx->pc = 0x150058u;
    {
        const bool branch_taken_0x150058 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150058u;
        // 0x15005c: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150058) {
            ctx->pc = 0x150070u;
            goto label_150070;
        }
    }
    ctx->pc = 0x150060u;
label_150060:
    // 0x150060: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x150060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_150064:
    // 0x150064: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_150068:
    // 0x150068: 0x10000001  b           . + 4 + (0x1 << 2)
label_15006c:
    if (ctx->pc == 0x15006Cu) {
        ctx->pc = 0x15006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150068u;
        // 0x15006c: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x150070u;
        goto label_150070;
    }
    ctx->pc = 0x150068u;
    {
        const bool branch_taken_0x150068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150068u;
        // 0x15006c: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x150068) {
            ctx->pc = 0x150070u;
            goto label_150070;
        }
    }
    ctx->pc = 0x150070u;
label_150070:
    // 0x150070: 0xe6610044  swc1        $f1, 0x44($s3)
    ctx->pc = 0x150070u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
label_150074:
    // 0x150074: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x150074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_150078:
    // 0x150078: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x150078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_15007c:
    // 0x15007c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15007cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_150080:
    // 0x150080: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x150080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_150084:
    // 0x150084: 0x14400066  bnez        $v0, . + 4 + (0x66 << 2)
label_150088:
    if (ctx->pc == 0x150088u) {
        ctx->pc = 0x15008Cu;
        goto label_15008c;
    }
    ctx->pc = 0x150084u;
    {
        const bool branch_taken_0x150084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x150084) {
            ctx->pc = 0x150220u;
            goto label_150220;
        }
    }
    ctx->pc = 0x15008Cu;
label_15008c:
    // 0x15008c: 0xc6610050  lwc1        $f1, 0x50($s3)
    ctx->pc = 0x15008cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_150090:
    // 0x150090: 0xc6600150  lwc1        $f0, 0x150($s3)
    ctx->pc = 0x150090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_150094:
    // 0x150094: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x150094u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_150098:
    // 0x150098: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x150098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_15009c:
    // 0x15009c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x15009cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1500a0:
    // 0x1500a0: 0xc6610058  lwc1        $f1, 0x58($s3)
    ctx->pc = 0x1500a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1500a4:
    // 0x1500a4: 0xc6600158  lwc1        $f0, 0x158($s3)
    ctx->pc = 0x1500a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1500a8:
    // 0x1500a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1500a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1500ac:
    // 0x1500ac: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1500acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1500b0:
    // 0x1500b0: 0x4409a800  mfc1        $t1, $f21
    ctx->pc = 0x1500b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_1500b4:
    // 0x1500b4: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x1500b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_1500b8:
    // 0x1500b8: 0x4a000138  vcallms     0x20
    ctx->pc = 0x1500b8u;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
label_1500bc:
    // 0x1500bc: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x1500bcu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_1500c0:
    // 0x1500c0: 0x44892000  mtc1        $t1, $f4
    ctx->pc = 0x1500c0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1500c4:
    // 0x1500c4: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x1500c4u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
label_1500c8:
    // 0x1500c8: 0x44891800  mtc1        $t1, $f3
    ctx->pc = 0x1500c8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1500cc:
    // 0x1500cc: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x1500ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1500d0:
    // 0x1500d0: 0xc6620150  lwc1        $f2, 0x150($s3)
    ctx->pc = 0x1500d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1500d4:
    // 0x1500d4: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x1500d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1500d8:
    // 0x1500d8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1500d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_1500dc:
    // 0x1500dc: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x1500dcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[1]));
label_1500e0:
    // 0x1500e0: 0x4604001c  madd.s      $f0, $f0, $f4
    ctx->pc = 0x1500e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[4]));
label_1500e4:
    // 0x1500e4: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x1500e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
label_1500e8:
    // 0x1500e8: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x1500e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1500ec:
    // 0x1500ec: 0xc6620158  lwc1        $f2, 0x158($s3)
    ctx->pc = 0x1500ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1500f0:
    // 0x1500f0: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x1500f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1500f4:
    // 0x1500f4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1500f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_1500f8:
    // 0x1500f8: 0x46011019  suba.s      $f2, $f1
    ctx->pc = 0x1500f8u;
    FPU_SET_ACC(ctx, FPU_SUB_S(ctx->f[2], ctx->f[1]));
label_1500fc:
    // 0x1500fc: 0x4603001c  madd.s      $f0, $f0, $f3
    ctx->pc = 0x1500fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[3]));
label_150100:
    // 0x150100: 0x10000047  b           . + 4 + (0x47 << 2)
label_150104:
    if (ctx->pc == 0x150104u) {
        ctx->pc = 0x150104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150100u;
        // 0x150104: 0xe6600058  swc1        $f0, 0x58($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x150108u;
        goto label_150108;
    }
    ctx->pc = 0x150100u;
    {
        const bool branch_taken_0x150100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150100u;
        // 0x150104: 0xe6600058  swc1        $f0, 0x58($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150100) {
            ctx->pc = 0x150220u;
            goto label_150220;
        }
    }
    ctx->pc = 0x150108u;
label_150108:
    // 0x150108: 0x8e700200  lw          $s0, 0x200($s3)
    ctx->pc = 0x150108u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 512)));
label_15010c:
    // 0x15010c: 0x12000044  beqz        $s0, . + 4 + (0x44 << 2)
label_150110:
    if (ctx->pc == 0x150110u) {
        ctx->pc = 0x150114u;
        goto label_150114;
    }
    ctx->pc = 0x15010Cu;
    {
        const bool branch_taken_0x15010c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15010c) {
            ctx->pc = 0x150220u;
            goto label_150220;
        }
    }
    ctx->pc = 0x150114u;
label_150114:
    // 0x150114: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x150114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_150118:
    // 0x150118: 0x8263021f  lb          $v1, 0x21F($s3)
    ctx->pc = 0x150118u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 543)));
label_15011c:
    // 0x15011c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15011cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_150120:
    // 0x150120: 0x24420f20  addiu       $v0, $v0, 0xF20
    ctx->pc = 0x150120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
label_150124:
    // 0x150124: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x150124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_150128:
    // 0x150128: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x150128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15012c:
    // 0x15012c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15012cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_150130:
    // 0x150130: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x150130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_150134:
    // 0x150134: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x150134u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_150138:
    // 0x150138: 0x0  nop
    ctx->pc = 0x150138u;
    // NOP
label_15013c:
    // 0x15013c: 0x14620038  bne         $v1, $v0, . + 4 + (0x38 << 2)
label_150140:
    if (ctx->pc == 0x150140u) {
        ctx->pc = 0x150140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15013Cu;
        // 0x150140: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150144u;
        goto label_150144;
    }
    ctx->pc = 0x15013Cu;
    {
        const bool branch_taken_0x15013c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x150140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15013Cu;
        // 0x150140: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15013c) {
            ctx->pc = 0x150220u;
            goto label_150220;
        }
    }
    ctx->pc = 0x150144u;
label_150144:
    // 0x150144: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x150144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_150148:
    // 0x150148: 0x244210d0  addiu       $v0, $v0, 0x10D0
    ctx->pc = 0x150148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4304));
label_15014c:
    // 0x15014c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x15014cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_150150:
    // 0x150150: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x150150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_150154:
    // 0x150154: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x150154u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_150158:
    // 0x150158: 0xa602003e  sh          $v0, 0x3E($s0)
    ctx->pc = 0x150158u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 62), (uint16_t)GPR_U32(ctx, 2));
label_15015c:
    // 0x15015c: 0xc060ca4  jal         func_183290
label_150160:
    if (ctx->pc == 0x150160u) {
        ctx->pc = 0x150160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15015Cu;
        // 0x150160: 0x8e640200  lw          $a0, 0x200($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150164u;
        goto label_150164;
    }
    ctx->pc = 0x15015Cu;
    SET_GPR_U32(ctx, 31, 0x150164u);
    ctx->pc = 0x150160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15015Cu;
    // 0x150160: 0x8e640200  lw          $a0, 0x200($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 512)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183290u;
    { ctx->pc = 0x183290; return; }
    ctx->pc = 0x150164u;
label_150164:
    // 0x150164: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x150164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_150168:
    // 0x150168: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x150168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_15016c:
    // 0x15016c: 0xc050f08  jal         func_143C20
label_150170:
    if (ctx->pc == 0x150170u) {
        ctx->pc = 0x150170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15016Cu;
        // 0x150170: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150174u;
        goto label_150174;
    }
    ctx->pc = 0x15016Cu;
    SET_GPR_U32(ctx, 31, 0x150174u);
    ctx->pc = 0x150170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15016Cu;
    // 0x150170: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143C20u, 0x15016Cu, 0x150174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150174u;
label_150174:
    // 0x150174: 0xc6600044  lwc1        $f0, 0x44($s3)
    ctx->pc = 0x150174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_150178:
    // 0x150178: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x150178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_15017c:
    // 0x15017c: 0x8262021f  lb          $v0, 0x21F($s3)
    ctx->pc = 0x15017cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 543)));
label_150180:
    // 0x150180: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_150184:
    if (ctx->pc == 0x150184u) {
        ctx->pc = 0x150184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150180u;
        // 0x150184: 0x3c03c0c0  lui         $v1, 0xC0C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49344 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150188u;
        goto label_150188;
    }
    ctx->pc = 0x150180u;
    {
        const bool branch_taken_0x150180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150180u;
        // 0x150184: 0x3c03c0c0  lui         $v1, 0xC0C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49344 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150180) {
            ctx->pc = 0x15019Cu;
            goto label_15019c;
        }
    }
    ctx->pc = 0x150188u;
label_150188:
    // 0x150188: 0x3c03c0c0  lui         $v1, 0xC0C0
    ctx->pc = 0x150188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49344 << 16));
label_15018c:
    // 0x15018c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x15018cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_150190:
    // 0x150190: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x150190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_150194:
    // 0x150194: 0x10000004  b           . + 4 + (0x4 << 2)
label_150198:
    if (ctx->pc == 0x150198u) {
        ctx->pc = 0x150198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150194u;
        // 0x150198: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15019Cu;
        goto label_15019c;
    }
    ctx->pc = 0x150194u;
    {
        const bool branch_taken_0x150194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150194u;
        // 0x150198: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150194) {
            ctx->pc = 0x1501A8u;
            goto label_1501a8;
        }
    }
    ctx->pc = 0x15019Cu;
label_15019c:
    // 0x15019c: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x15019cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_1501a0:
    // 0x1501a0: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1501a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_1501a4:
    // 0x1501a4: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1501a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_1501a8:
    // 0x1501a8: 0xc6610154  lwc1        $f1, 0x154($s3)
    ctx->pc = 0x1501a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1501ac:
    // 0x1501ac: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1501acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1501b0:
    // 0x1501b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1501b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1501b4:
    // 0x1501b4: 0x0  nop
    ctx->pc = 0x1501b4u;
    // NOP
label_1501b8:
    // 0x1501b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1501b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1501bc:
    // 0x1501bc: 0x10000018  b           . + 4 + (0x18 << 2)
label_1501c0:
    if (ctx->pc == 0x1501C0u) {
        ctx->pc = 0x1501C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1501BCu;
        // 0x1501c0: 0xe6000054  swc1        $f0, 0x54($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1501C4u;
        goto label_1501c4;
    }
    ctx->pc = 0x1501BCu;
    {
        const bool branch_taken_0x1501bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1501C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1501BCu;
        // 0x1501c0: 0xe6000054  swc1        $f0, 0x54($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1501bc) {
            ctx->pc = 0x150220u;
            goto label_150220;
        }
    }
    ctx->pc = 0x1501C4u;
label_1501c4:
    // 0x1501c4: 0x8e660200  lw          $a2, 0x200($s3)
    ctx->pc = 0x1501c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 512)));
label_1501c8:
    // 0x1501c8: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
label_1501cc:
    if (ctx->pc == 0x1501CCu) {
        ctx->pc = 0x1501D0u;
        goto label_1501d0;
    }
    ctx->pc = 0x1501C8u;
    {
        const bool branch_taken_0x1501c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1501c8) {
            ctx->pc = 0x150220u;
            goto label_150220;
        }
    }
    ctx->pc = 0x1501D0u;
label_1501d0:
    // 0x1501d0: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1501d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1501d4:
    // 0x1501d4: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x1501d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1501d8:
    // 0x1501d8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1501d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1501dc:
    // 0x1501dc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1501dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1501e0:
    // 0x1501e0: 0x0  nop
    ctx->pc = 0x1501e0u;
    // NOP
label_1501e4:
    // 0x1501e4: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_1501e8:
    if (ctx->pc == 0x1501E8u) {
        ctx->pc = 0x1501ECu;
        goto label_1501ec;
    }
    ctx->pc = 0x1501E4u;
    {
        const bool branch_taken_0x1501e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1501e4) {
            ctx->pc = 0x150220u;
            goto label_150220;
        }
    }
    ctx->pc = 0x1501ECu;
label_1501ec:
    // 0x1501ec: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x1501ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_1501f0:
    // 0x1501f0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1501f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1501f4:
    // 0x1501f4: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x1501f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1501f8:
    // 0x1501f8: 0x26650040  addiu       $a1, $s3, 0x40
    ctx->pc = 0x1501f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_1501fc:
    // 0x1501fc: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x1501fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_150200:
    // 0x150200: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x150200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_150204:
    // 0x150204: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x150204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_150208:
    // 0x150208: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x150208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15020c:
    // 0x15020c: 0x24820860  addiu       $v0, $a0, 0x860
    ctx->pc = 0x15020cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2144));
label_150210:
    // 0x150210: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x150210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_150214:
    // 0x150214: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x150214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_150218:
    // 0x150218: 0xc07a518  jal         func_1E9460
label_15021c:
    if (ctx->pc == 0x15021Cu) {
        ctx->pc = 0x15021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150218u;
        // 0x15021c: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150220u;
        goto label_150220;
    }
    ctx->pc = 0x150218u;
    SET_GPR_U32(ctx, 31, 0x150220u);
    ctx->pc = 0x15021Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150218u;
    // 0x15021c: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9460u;
    { ctx->pc = 0x1e9460; return; }
    ctx->pc = 0x150220u;
label_150220:
    // 0x150220: 0x240201ff  addiu       $v0, $zero, 0x1FF
    ctx->pc = 0x150220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
label_150224:
    // 0x150224: 0x12420006  beq         $s2, $v0, . + 4 + (0x6 << 2)
label_150228:
    if (ctx->pc == 0x150228u) {
        ctx->pc = 0x150228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150224u;
        // 0x150228: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15022Cu;
        goto label_15022c;
    }
    ctx->pc = 0x150224u;
    {
        const bool branch_taken_0x150224 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x150228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150224u;
        // 0x150228: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150224) {
            ctx->pc = 0x150240u;
            goto label_150240;
        }
    }
    ctx->pc = 0x15022Cu;
label_15022c:
    // 0x15022c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15022cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_150230:
    // 0x150230: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x150230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_150234:
    // 0x150234: 0xc050ed0  jal         func_143B40
label_150238:
    if (ctx->pc == 0x150238u) {
        ctx->pc = 0x150238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150234u;
        // 0x150238: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15023Cu;
        goto label_15023c;
    }
    ctx->pc = 0x150234u;
    SET_GPR_U32(ctx, 31, 0x15023Cu);
    ctx->pc = 0x150238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150234u;
    // 0x150238: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B40u, 0x150234u, 0x15023Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15023Cu;
label_15023c:
    // 0x15023c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15023cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_150240:
    // 0x150240: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x150240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_150244:
    // 0x150244: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x150244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_150248:
    // 0x150248: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x150248u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15024c:
    // 0x15024c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x15024cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_150250:
    // 0x150250: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x150250u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_150254:
    // 0x150254: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x150254u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_150258:
    // 0x150258: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x150258u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15025c:
    // 0x15025c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15025cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_150260:
    // 0x150260: 0x3e00008  jr          $ra
label_150264:
    if (ctx->pc == 0x150264u) {
        ctx->pc = 0x150264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150260u;
        // 0x150264: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150268u;
        goto label_150268;
    }
    ctx->pc = 0x150260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150260u;
        // 0x150264: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150268u;
label_150268:
    // 0x150268: 0x0  nop
    ctx->pc = 0x150268u;
    // NOP
label_15026c:
    // 0x15026c: 0x0  nop
    ctx->pc = 0x15026cu;
    // NOP
label_150270:
    // 0x150270: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x150270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_150274:
    // 0x150274: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x150274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_150278:
    // 0x150278: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x150278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15027c:
    // 0x15027c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15027cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_150280:
    // 0x150280: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x150280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_150284:
    // 0x150284: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x150284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_150288:
    // 0x150288: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x150288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15028c:
    // 0x15028c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x15028cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_150290:
    // 0x150290: 0x908301a2  lbu         $v1, 0x1A2($a0)
    ctx->pc = 0x150290u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 418)));
label_150294:
    // 0x150294: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150294u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_150298:
    // 0x150298: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x150298u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_15029c:
    // 0x15029c: 0x1060011d  beqz        $v1, . + 4 + (0x11D << 2)
label_1502a0:
    if (ctx->pc == 0x1502A0u) {
        ctx->pc = 0x1502A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15029Cu;
        // 0x1502a0: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1502A4u;
        goto label_1502a4;
    }
    ctx->pc = 0x15029Cu;
    {
        const bool branch_taken_0x15029c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1502A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15029Cu;
        // 0x1502a0: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15029c) {
            ctx->pc = 0x150714u;
            { ctx->pc = 0x150714; return; }
        }
    }
    ctx->pc = 0x1502A4u;
label_1502a4:
    // 0x1502a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1502a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1502a8:
    // 0x1502a8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1502a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1502ac:
    // 0x1502ac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1502b0:
    if (ctx->pc == 0x1502B0u) {
        ctx->pc = 0x1502B4u;
        goto label_1502b4;
    }
    ctx->pc = 0x1502ACu;
    {
        const bool branch_taken_0x1502ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1502ac) {
            ctx->pc = 0x1502BCu;
            goto label_1502bc;
        }
    }
    ctx->pc = 0x1502B4u;
label_1502b4:
    // 0x1502b4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1502b8:
    if (ctx->pc == 0x1502B8u) {
        ctx->pc = 0x1502B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1502B4u;
        // 0x1502b8: 0x8e9001b0  lw          $s0, 0x1B0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1502BCu;
        goto label_1502bc;
    }
    ctx->pc = 0x1502B4u;
    {
        const bool branch_taken_0x1502b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1502B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1502B4u;
        // 0x1502b8: 0x8e9001b0  lw          $s0, 0x1B0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1502b4) {
            ctx->pc = 0x1502C4u;
            goto label_1502c4;
        }
    }
    ctx->pc = 0x1502BCu;
label_1502bc:
    // 0x1502bc: 0x8e9001b4  lw          $s0, 0x1B4($s4)
    ctx->pc = 0x1502bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
label_1502c0:
    // 0x1502c0: 0x0  nop
    ctx->pc = 0x1502c0u;
    // NOP
label_1502c4:
    // 0x1502c4: 0x8603002c  lh          $v1, 0x2C($s0)
    ctx->pc = 0x1502c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
label_1502c8:
    // 0x1502c8: 0x18600112  blez        $v1, . + 4 + (0x112 << 2)
label_1502cc:
    if (ctx->pc == 0x1502CCu) {
        ctx->pc = 0x1502D0u;
        goto label_1502d0;
    }
    ctx->pc = 0x1502C8u;
    {
        const bool branch_taken_0x1502c8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1502c8) {
            ctx->pc = 0x150714u;
            { ctx->pc = 0x150714; return; }
        }
    }
    ctx->pc = 0x1502D0u;
label_1502d0:
    // 0x1502d0: 0x8e840200  lw          $a0, 0x200($s4)
    ctx->pc = 0x1502d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 512)));
label_1502d4:
    // 0x1502d4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_1502d8:
    if (ctx->pc == 0x1502D8u) {
        ctx->pc = 0x1502D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1502D4u;
        // 0x1502d8: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1502DCu;
        goto label_1502dc;
    }
    ctx->pc = 0x1502D4u;
    {
        const bool branch_taken_0x1502d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1502D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1502D4u;
        // 0x1502d8: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1502d4) {
            ctx->pc = 0x1502FCu;
            goto label_1502fc;
        }
    }
    ctx->pc = 0x1502DCu;
label_1502dc:
    // 0x1502dc: 0x90830232  lbu         $v1, 0x232($a0)
    ctx->pc = 0x1502dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
label_1502e0:
    // 0x1502e0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_1502e4:
    if (ctx->pc == 0x1502E4u) {
        ctx->pc = 0x1502E8u;
        goto label_1502e8;
    }
    ctx->pc = 0x1502E0u;
    {
        const bool branch_taken_0x1502e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1502e0) {
            ctx->pc = 0x1502FCu;
            goto label_1502fc;
        }
    }
    ctx->pc = 0x1502E8u;
label_1502e8:
    // 0x1502e8: 0xc0439cc  jal         func_10E730
label_1502ec:
    if (ctx->pc == 0x1502ECu) {
        ctx->pc = 0x1502F0u;
        goto label_1502f0;
    }
    ctx->pc = 0x1502E8u;
    SET_GPR_U32(ctx, 31, 0x1502F0u);
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x1502E8u, 0x1502F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1502F0u;
label_1502f0:
    // 0x1502f0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1502f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1502f4:
    // 0x1502f4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1502f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1502f8:
    // 0x1502f8: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x1502f8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_1502fc:
    // 0x1502fc: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1502fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_150300:
    // 0x150300: 0x8e850024  lw          $a1, 0x24($s4)
    ctx->pc = 0x150300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_150304:
    // 0x150304: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150304u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_150308:
    // 0x150308: 0x94a3000c  lhu         $v1, 0xC($a1)
    ctx->pc = 0x150308u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
label_15030c:
    // 0x15030c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x15030cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    ctx->pc = 0x150310u;
    return;
}
