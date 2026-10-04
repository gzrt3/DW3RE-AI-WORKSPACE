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

// Function: FUN_0019b618
// Address: 0x19b618 - 0x29b620
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b618_part436(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x26ff80u: goto label_26ff80;
        case 0x26ff84u: goto label_26ff84;
        case 0x26ff88u: goto label_26ff88;
        case 0x26ff8cu: goto label_26ff8c;
        case 0x26ff90u: goto label_26ff90;
        case 0x26ff94u: goto label_26ff94;
        case 0x26ff98u: goto label_26ff98;
        case 0x26ff9cu: goto label_26ff9c;
        case 0x26ffa0u: goto label_26ffa0;
        case 0x26ffa4u: goto label_26ffa4;
        case 0x26ffa8u: goto label_26ffa8;
        case 0x26ffacu: goto label_26ffac;
        case 0x26ffb0u: goto label_26ffb0;
        case 0x26ffb4u: goto label_26ffb4;
        case 0x26ffb8u: goto label_26ffb8;
        case 0x26ffbcu: goto label_26ffbc;
        case 0x26ffc0u: goto label_26ffc0;
        case 0x26ffc4u: goto label_26ffc4;
        case 0x26ffc8u: goto label_26ffc8;
        case 0x26ffccu: goto label_26ffcc;
        case 0x26ffd0u: goto label_26ffd0;
        case 0x26ffd4u: goto label_26ffd4;
        case 0x26ffd8u: goto label_26ffd8;
        case 0x26ffdcu: goto label_26ffdc;
        case 0x26ffe0u: goto label_26ffe0;
        case 0x26ffe4u: goto label_26ffe4;
        case 0x26ffe8u: goto label_26ffe8;
        case 0x26ffecu: goto label_26ffec;
        case 0x26fff0u: goto label_26fff0;
        case 0x26fff4u: goto label_26fff4;
        case 0x26fff8u: goto label_26fff8;
        case 0x26fffcu: goto label_26fffc;
        case 0x270000u: goto label_270000;
        case 0x270004u: goto label_270004;
        case 0x270008u: goto label_270008;
        case 0x27000cu: goto label_27000c;
        case 0x270010u: goto label_270010;
        case 0x270014u: goto label_270014;
        case 0x270018u: goto label_270018;
        case 0x27001cu: goto label_27001c;
        case 0x270020u: goto label_270020;
        case 0x270024u: goto label_270024;
        case 0x270028u: goto label_270028;
        case 0x27002cu: goto label_27002c;
        case 0x270030u: goto label_270030;
        case 0x270034u: goto label_270034;
        case 0x270038u: goto label_270038;
        case 0x27003cu: goto label_27003c;
        case 0x270040u: goto label_270040;
        case 0x270044u: goto label_270044;
        case 0x270048u: goto label_270048;
        case 0x27004cu: goto label_27004c;
        case 0x270050u: goto label_270050;
        case 0x270054u: goto label_270054;
        case 0x270058u: goto label_270058;
        case 0x27005cu: goto label_27005c;
        case 0x270060u: goto label_270060;
        case 0x270064u: goto label_270064;
        case 0x270068u: goto label_270068;
        case 0x27006cu: goto label_27006c;
        case 0x270070u: goto label_270070;
        case 0x270074u: goto label_270074;
        case 0x270078u: goto label_270078;
        case 0x27007cu: goto label_27007c;
        case 0x270080u: goto label_270080;
        case 0x270084u: goto label_270084;
        case 0x270088u: goto label_270088;
        case 0x27008cu: goto label_27008c;
        case 0x270090u: goto label_270090;
        case 0x270094u: goto label_270094;
        case 0x270098u: goto label_270098;
        case 0x27009cu: goto label_27009c;
        case 0x2700a0u: goto label_2700a0;
        case 0x2700a4u: goto label_2700a4;
        case 0x2700a8u: goto label_2700a8;
        case 0x2700acu: goto label_2700ac;
        case 0x2700b0u: goto label_2700b0;
        case 0x2700b4u: goto label_2700b4;
        case 0x2700b8u: goto label_2700b8;
        case 0x2700bcu: goto label_2700bc;
        case 0x2700c0u: goto label_2700c0;
        case 0x2700c4u: goto label_2700c4;
        case 0x2700c8u: goto label_2700c8;
        case 0x2700ccu: goto label_2700cc;
        case 0x2700d0u: goto label_2700d0;
        case 0x2700d4u: goto label_2700d4;
        case 0x2700d8u: goto label_2700d8;
        case 0x2700dcu: goto label_2700dc;
        case 0x2700e0u: goto label_2700e0;
        case 0x2700e4u: goto label_2700e4;
        case 0x2700e8u: goto label_2700e8;
        case 0x2700ecu: goto label_2700ec;
        case 0x2700f0u: goto label_2700f0;
        case 0x2700f4u: goto label_2700f4;
        case 0x2700f8u: goto label_2700f8;
        case 0x2700fcu: goto label_2700fc;
        case 0x270100u: goto label_270100;
        case 0x270104u: goto label_270104;
        case 0x270108u: goto label_270108;
        case 0x27010cu: goto label_27010c;
        case 0x270110u: goto label_270110;
        case 0x270114u: goto label_270114;
        case 0x270118u: goto label_270118;
        case 0x27011cu: goto label_27011c;
        case 0x270120u: goto label_270120;
        case 0x270124u: goto label_270124;
        case 0x270128u: goto label_270128;
        case 0x27012cu: goto label_27012c;
        case 0x270130u: goto label_270130;
        case 0x270134u: goto label_270134;
        case 0x270138u: goto label_270138;
        case 0x27013cu: goto label_27013c;
        case 0x270140u: goto label_270140;
        case 0x270144u: goto label_270144;
        case 0x270148u: goto label_270148;
        case 0x27014cu: goto label_27014c;
        case 0x270150u: goto label_270150;
        case 0x270154u: goto label_270154;
        case 0x270158u: goto label_270158;
        case 0x27015cu: goto label_27015c;
        case 0x270160u: goto label_270160;
        case 0x270164u: goto label_270164;
        case 0x270168u: goto label_270168;
        case 0x27016cu: goto label_27016c;
        case 0x270170u: goto label_270170;
        case 0x270174u: goto label_270174;
        case 0x270178u: goto label_270178;
        case 0x27017cu: goto label_27017c;
        case 0x270180u: goto label_270180;
        case 0x270184u: goto label_270184;
        case 0x270188u: goto label_270188;
        case 0x27018cu: goto label_27018c;
        case 0x270190u: goto label_270190;
        case 0x270194u: goto label_270194;
        case 0x270198u: goto label_270198;
        case 0x27019cu: goto label_27019c;
        case 0x2701a0u: goto label_2701a0;
        case 0x2701a4u: goto label_2701a4;
        case 0x2701a8u: goto label_2701a8;
        case 0x2701acu: goto label_2701ac;
        case 0x2701b0u: goto label_2701b0;
        case 0x2701b4u: goto label_2701b4;
        case 0x2701b8u: goto label_2701b8;
        case 0x2701bcu: goto label_2701bc;
        case 0x2701c0u: goto label_2701c0;
        case 0x2701c4u: goto label_2701c4;
        case 0x2701c8u: goto label_2701c8;
        case 0x2701ccu: goto label_2701cc;
        case 0x2701d0u: goto label_2701d0;
        case 0x2701d4u: goto label_2701d4;
        case 0x2701d8u: goto label_2701d8;
        case 0x2701dcu: goto label_2701dc;
        case 0x2701e0u: goto label_2701e0;
        case 0x2701e4u: goto label_2701e4;
        case 0x2701e8u: goto label_2701e8;
        case 0x2701ecu: goto label_2701ec;
        case 0x2701f0u: goto label_2701f0;
        case 0x2701f4u: goto label_2701f4;
        case 0x2701f8u: goto label_2701f8;
        case 0x2701fcu: goto label_2701fc;
        case 0x270200u: goto label_270200;
        case 0x270204u: goto label_270204;
        case 0x270208u: goto label_270208;
        case 0x27020cu: goto label_27020c;
        case 0x270210u: goto label_270210;
        case 0x270214u: goto label_270214;
        case 0x270218u: goto label_270218;
        case 0x27021cu: goto label_27021c;
        case 0x270220u: goto label_270220;
        case 0x270224u: goto label_270224;
        case 0x270228u: goto label_270228;
        case 0x27022cu: goto label_27022c;
        case 0x270230u: goto label_270230;
        case 0x270234u: goto label_270234;
        case 0x270238u: goto label_270238;
        case 0x27023cu: goto label_27023c;
        case 0x270240u: goto label_270240;
        case 0x270244u: goto label_270244;
        case 0x270248u: goto label_270248;
        case 0x27024cu: goto label_27024c;
        case 0x270250u: goto label_270250;
        case 0x270254u: goto label_270254;
        case 0x270258u: goto label_270258;
        case 0x27025cu: goto label_27025c;
        case 0x270260u: goto label_270260;
        case 0x270264u: goto label_270264;
        case 0x270268u: goto label_270268;
        case 0x27026cu: goto label_27026c;
        case 0x270270u: goto label_270270;
        case 0x270274u: goto label_270274;
        case 0x270278u: goto label_270278;
        case 0x27027cu: goto label_27027c;
        case 0x270280u: goto label_270280;
        case 0x270284u: goto label_270284;
        case 0x270288u: goto label_270288;
        case 0x27028cu: goto label_27028c;
        case 0x270290u: goto label_270290;
        case 0x270294u: goto label_270294;
        case 0x270298u: goto label_270298;
        case 0x27029cu: goto label_27029c;
        case 0x2702a0u: goto label_2702a0;
        case 0x2702a4u: goto label_2702a4;
        case 0x2702a8u: goto label_2702a8;
        case 0x2702acu: goto label_2702ac;
        case 0x2702b0u: goto label_2702b0;
        case 0x2702b4u: goto label_2702b4;
        case 0x2702b8u: goto label_2702b8;
        case 0x2702bcu: goto label_2702bc;
        case 0x2702c0u: goto label_2702c0;
        case 0x2702c4u: goto label_2702c4;
        case 0x2702c8u: goto label_2702c8;
        case 0x2702ccu: goto label_2702cc;
        case 0x2702d0u: goto label_2702d0;
        case 0x2702d4u: goto label_2702d4;
        case 0x2702d8u: goto label_2702d8;
        case 0x2702dcu: goto label_2702dc;
        case 0x2702e0u: goto label_2702e0;
        case 0x2702e4u: goto label_2702e4;
        case 0x2702e8u: goto label_2702e8;
        case 0x2702ecu: goto label_2702ec;
        case 0x2702f0u: goto label_2702f0;
        case 0x2702f4u: goto label_2702f4;
        case 0x2702f8u: goto label_2702f8;
        case 0x2702fcu: goto label_2702fc;
        case 0x270300u: goto label_270300;
        case 0x270304u: goto label_270304;
        case 0x270308u: goto label_270308;
        case 0x27030cu: goto label_27030c;
        case 0x270310u: goto label_270310;
        case 0x270314u: goto label_270314;
        case 0x270318u: goto label_270318;
        case 0x27031cu: goto label_27031c;
        case 0x270320u: goto label_270320;
        case 0x270324u: goto label_270324;
        case 0x270328u: goto label_270328;
        case 0x27032cu: goto label_27032c;
        case 0x270330u: goto label_270330;
        case 0x270334u: goto label_270334;
        case 0x270338u: goto label_270338;
        case 0x27033cu: goto label_27033c;
        case 0x270340u: goto label_270340;
        case 0x270344u: goto label_270344;
        case 0x270348u: goto label_270348;
        case 0x27034cu: goto label_27034c;
        case 0x270350u: goto label_270350;
        case 0x270354u: goto label_270354;
        case 0x270358u: goto label_270358;
        case 0x27035cu: goto label_27035c;
        case 0x270360u: goto label_270360;
        case 0x270364u: goto label_270364;
        case 0x270368u: goto label_270368;
        case 0x27036cu: goto label_27036c;
        case 0x270370u: goto label_270370;
        case 0x270374u: goto label_270374;
        case 0x270378u: goto label_270378;
        case 0x27037cu: goto label_27037c;
        case 0x270380u: goto label_270380;
        case 0x270384u: goto label_270384;
        case 0x270388u: goto label_270388;
        case 0x27038cu: goto label_27038c;
        case 0x270390u: goto label_270390;
        case 0x270394u: goto label_270394;
        case 0x270398u: goto label_270398;
        case 0x27039cu: goto label_27039c;
        case 0x2703a0u: goto label_2703a0;
        case 0x2703a4u: goto label_2703a4;
        case 0x2703a8u: goto label_2703a8;
        case 0x2703acu: goto label_2703ac;
        case 0x2703b0u: goto label_2703b0;
        case 0x2703b4u: goto label_2703b4;
        case 0x2703b8u: goto label_2703b8;
        case 0x2703bcu: goto label_2703bc;
        case 0x2703c0u: goto label_2703c0;
        case 0x2703c4u: goto label_2703c4;
        case 0x2703c8u: goto label_2703c8;
        case 0x2703ccu: goto label_2703cc;
        case 0x2703d0u: goto label_2703d0;
        case 0x2703d4u: goto label_2703d4;
        case 0x2703d8u: goto label_2703d8;
        case 0x2703dcu: goto label_2703dc;
        case 0x2703e0u: goto label_2703e0;
        case 0x2703e4u: goto label_2703e4;
        case 0x2703e8u: goto label_2703e8;
        case 0x2703ecu: goto label_2703ec;
        case 0x2703f0u: goto label_2703f0;
        case 0x2703f4u: goto label_2703f4;
        case 0x2703f8u: goto label_2703f8;
        case 0x2703fcu: goto label_2703fc;
        case 0x270400u: goto label_270400;
        case 0x270404u: goto label_270404;
        case 0x270408u: goto label_270408;
        case 0x27040cu: goto label_27040c;
        case 0x270410u: goto label_270410;
        case 0x270414u: goto label_270414;
        case 0x270418u: goto label_270418;
        case 0x27041cu: goto label_27041c;
        case 0x270420u: goto label_270420;
        case 0x270424u: goto label_270424;
        case 0x270428u: goto label_270428;
        case 0x27042cu: goto label_27042c;
        case 0x270430u: goto label_270430;
        case 0x270434u: goto label_270434;
        case 0x270438u: goto label_270438;
        case 0x27043cu: goto label_27043c;
        case 0x270440u: goto label_270440;
        case 0x270444u: goto label_270444;
        case 0x270448u: goto label_270448;
        case 0x27044cu: goto label_27044c;
        case 0x270450u: goto label_270450;
        case 0x270454u: goto label_270454;
        default: return;
    }

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
label_26ff80:
    // 0x26ff80: 0x5b01  .word       0x00005B01                   # INVALID     $zero, $zero, 0x5B01 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ff80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26FF80 raw=0x00005B01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26ff84:
    // 0x26ff84: 0xd2c0  sll         $k0, $zero, 11
    ctx->pc = 0x26ff84u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_26ff88:
    // 0x26ff88: 0x0  nop
    ctx->pc = 0x26ff88u;
    // NOP
label_26ff8c:
    // 0x26ff8c: 0x0  nop
    ctx->pc = 0x26ff8cu;
    // NOP
label_26ff90:
    // 0x26ff90: 0x5b1c  .word       0x00005B1C                   # dmult       $zero, $zero # 00005B00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ff90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x26FF90 raw=0x00005B1C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26ff94:
    // 0x26ff94: 0xccd0  .word       0x0000CCD0                   # mfhi        $t9 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ff94u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_26ff98:
    // 0x26ff98: 0x0  nop
    ctx->pc = 0x26ff98u;
    // NOP
label_26ff9c:
    // 0x26ff9c: 0x0  nop
    ctx->pc = 0x26ff9cu;
    // NOP
label_26ffa0:
    // 0x26ffa0: 0x5b36  tne         $zero, $zero, 364
    ctx->pc = 0x26ffa0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ffa4:
    // 0x26ffa4: 0x9b10  .word       0x00009B10                   # mfhi        $s3 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ffa4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_26ffa8:
    // 0x26ffa8: 0x0  nop
    ctx->pc = 0x26ffa8u;
    // NOP
label_26ffac:
    // 0x26ffac: 0x0  nop
    ctx->pc = 0x26ffacu;
    // NOP
label_26ffb0:
    // 0x26ffb0: 0x5b4a  .word       0x00005B4A                   # movz        $t3, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ffb0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
label_26ffb4:
    // 0x26ffb4: 0xba30  tge         $zero, $zero, 744
    ctx->pc = 0x26ffb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ffb8:
    // 0x26ffb8: 0x0  nop
    ctx->pc = 0x26ffb8u;
    // NOP
label_26ffbc:
    // 0x26ffbc: 0x0  nop
    ctx->pc = 0x26ffbcu;
    // NOP
label_26ffc0:
    // 0x26ffc0: 0x5b62  .word       0x00005B62                   # neg         $t3, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ffc0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 11, (int32_t)tmp); }
label_26ffc4:
    // 0x26ffc4: 0xe710  .word       0x0000E710                   # mfhi        $gp # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ffc4u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_26ffc8:
    // 0x26ffc8: 0x0  nop
    ctx->pc = 0x26ffc8u;
    // NOP
label_26ffcc:
    // 0x26ffcc: 0x0  nop
    ctx->pc = 0x26ffccu;
    // NOP
label_26ffd0:
    // 0x26ffd0: 0x5b7f  dsra32      $t3, $zero, 13
    ctx->pc = 0x26ffd0u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 0) >> (32 + 13));
label_26ffd4:
    // 0x26ffd4: 0x10920  .word       0x00010920                   # add         $at, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ffd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_26ffd8:
    // 0x26ffd8: 0x0  nop
    ctx->pc = 0x26ffd8u;
    // NOP
label_26ffdc:
    // 0x26ffdc: 0x0  nop
    ctx->pc = 0x26ffdcu;
    // NOP
label_26ffe0:
    // 0x26ffe0: 0x5ba1  .word       0x00005BA1                   # addu        $t3, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ffe0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26ffe4:
    // 0x26ffe4: 0xede0  .word       0x0000EDE0                   # add         $sp, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ffe4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_26ffe8:
    // 0x26ffe8: 0x0  nop
    ctx->pc = 0x26ffe8u;
    // NOP
label_26ffec:
    // 0x26ffec: 0x0  nop
    ctx->pc = 0x26ffecu;
    // NOP
label_26fff0:
    // 0x26fff0: 0x5bbf  dsra32      $t3, $zero, 14
    ctx->pc = 0x26fff0u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 0) >> (32 + 14));
label_26fff4:
    // 0x26fff4: 0xbe20  .word       0x0000BE20                   # add         $s7, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fff4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_26fff8:
    // 0x26fff8: 0x0  nop
    ctx->pc = 0x26fff8u;
    // NOP
label_26fffc:
    // 0x26fffc: 0x0  nop
    ctx->pc = 0x26fffcu;
    // NOP
label_270000:
    // 0x270000: 0x5bd7  .word       0x00005BD7                   # dsrav       $t3, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270000u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_270004:
    // 0x270004: 0xd9e0  .word       0x0000D9E0                   # add         $k1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270004u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_270008:
    // 0x270008: 0x0  nop
    ctx->pc = 0x270008u;
    // NOP
label_27000c:
    // 0x27000c: 0x0  nop
    ctx->pc = 0x27000cu;
    // NOP
label_270010:
    // 0x270010: 0x5bf3  tltu        $zero, $zero, 367
    ctx->pc = 0x270010u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270014:
    // 0x270014: 0xb040  sll         $s6, $zero, 1
    ctx->pc = 0x270014u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_270018:
    // 0x270018: 0x0  nop
    ctx->pc = 0x270018u;
    // NOP
label_27001c:
    // 0x27001c: 0x0  nop
    ctx->pc = 0x27001cu;
    // NOP
label_270020:
    // 0x270020: 0x5c0a  .word       0x00005C0A                   # movz        $t3, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270020u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
label_270024:
    // 0x270024: 0x4610  .word       0x00004610                   # mfhi        $t0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270024u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_270028:
    // 0x270028: 0x0  nop
    ctx->pc = 0x270028u;
    // NOP
label_27002c:
    // 0x27002c: 0x0  nop
    ctx->pc = 0x27002cu;
    // NOP
label_270030:
    // 0x270030: 0x5c13  .word       0x00005C13                   # mtlo        $zero # 00005C00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270030u;
    ctx->lo = GPR_U64(ctx, 0);
label_270034:
    // 0x270034: 0xdb00  sll         $k1, $zero, 12
    ctx->pc = 0x270034u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_270038:
    // 0x270038: 0x0  nop
    ctx->pc = 0x270038u;
    // NOP
label_27003c:
    // 0x27003c: 0x0  nop
    ctx->pc = 0x27003cu;
    // NOP
label_270040:
    // 0x270040: 0x5c2f  .word       0x00005C2F                   # dsubu       $t3, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270040u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_270044:
    // 0x270044: 0xc420  .word       0x0000C420                   # add         $t8, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270044u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_270048:
    // 0x270048: 0x0  nop
    ctx->pc = 0x270048u;
    // NOP
label_27004c:
    // 0x27004c: 0x0  nop
    ctx->pc = 0x27004cu;
    // NOP
label_270050:
    // 0x270050: 0x5c48  .word       0x00005C48                   # jr          $zero # 00005C40 <InstrIdType: CPU_SPECIAL>
label_270054:
    if (ctx->pc == 0x270054u) {
        ctx->pc = 0x270054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270050u;
        // 0x270054: 0xb680  sll         $s6, $zero, 26 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270058u;
        goto label_270058;
    }
    ctx->pc = 0x270050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x270054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270050u;
        // 0x270054: 0xb680  sll         $s6, $zero, 26 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270050u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x270058u;
label_270058:
    // 0x270058: 0x0  nop
    ctx->pc = 0x270058u;
    // NOP
label_27005c:
    // 0x27005c: 0x0  nop
    ctx->pc = 0x27005cu;
    // NOP
label_270060:
    // 0x270060: 0x5c5f  .word       0x00005C5F                   # ddivu       $t3, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270060u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x270060 raw=0x00005C5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270064:
    // 0x270064: 0xbda0  .word       0x0000BDA0                   # add         $s7, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270064u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_270068:
    // 0x270068: 0x0  nop
    ctx->pc = 0x270068u;
    // NOP
label_27006c:
    // 0x27006c: 0x0  nop
    ctx->pc = 0x27006cu;
    // NOP
label_270070:
    // 0x270070: 0x5c77  .word       0x00005C77                   # INVALID     $zero, $zero, 0x5C77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270070u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x270070 raw=0x00005C77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270074:
    // 0x270074: 0x9700  sll         $s2, $zero, 28
    ctx->pc = 0x270074u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_270078:
    // 0x270078: 0x0  nop
    ctx->pc = 0x270078u;
    // NOP
label_27007c:
    // 0x27007c: 0x0  nop
    ctx->pc = 0x27007cu;
    // NOP
label_270080:
    // 0x270080: 0x5c8a  .word       0x00005C8A                   # movz        $t3, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270080u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
label_270084:
    // 0x270084: 0xc790  .word       0x0000C790                   # mfhi        $t8 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270084u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_270088:
    // 0x270088: 0x0  nop
    ctx->pc = 0x270088u;
    // NOP
label_27008c:
    // 0x27008c: 0x0  nop
    ctx->pc = 0x27008cu;
    // NOP
label_270090:
    // 0x270090: 0x5ca3  .word       0x00005CA3                   # negu        $t3, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270090u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_270094:
    // 0x270094: 0xd9e0  .word       0x0000D9E0                   # add         $k1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270094u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_270098:
    // 0x270098: 0x0  nop
    ctx->pc = 0x270098u;
    // NOP
label_27009c:
    // 0x27009c: 0x0  nop
    ctx->pc = 0x27009cu;
    // NOP
label_2700a0:
    // 0x2700a0: 0x5cbf  dsra32      $t3, $zero, 18
    ctx->pc = 0x2700a0u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 0) >> (32 + 18));
label_2700a4:
    // 0x2700a4: 0xa900  sll         $s5, $zero, 4
    ctx->pc = 0x2700a4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_2700a8:
    // 0x2700a8: 0x0  nop
    ctx->pc = 0x2700a8u;
    // NOP
label_2700ac:
    // 0x2700ac: 0x0  nop
    ctx->pc = 0x2700acu;
    // NOP
label_2700b0:
    // 0x2700b0: 0x5cd5  .word       0x00005CD5                   # INVALID     $zero, $zero, 0x5CD5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2700b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2700B0 raw=0x00005CD5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2700b4:
    // 0x2700b4: 0xbba0  .word       0x0000BBA0                   # add         $s7, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2700b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_2700b8:
    // 0x2700b8: 0x0  nop
    ctx->pc = 0x2700b8u;
    // NOP
label_2700bc:
    // 0x2700bc: 0x0  nop
    ctx->pc = 0x2700bcu;
    // NOP
label_2700c0:
    // 0x2700c0: 0x5ced  .word       0x00005CED                   # daddu       $t3, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2700c0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2700c4:
    // 0x2700c4: 0x44c0  sll         $t0, $zero, 19
    ctx->pc = 0x2700c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_2700c8:
    // 0x2700c8: 0x0  nop
    ctx->pc = 0x2700c8u;
    // NOP
label_2700cc:
    // 0x2700cc: 0x0  nop
    ctx->pc = 0x2700ccu;
    // NOP
label_2700d0:
    // 0x2700d0: 0x5cf6  tne         $zero, $zero, 371
    ctx->pc = 0x2700d0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2700d4:
    // 0x2700d4: 0xa010  mfhi        $s4
    ctx->pc = 0x2700d4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_2700d8:
    // 0x2700d8: 0x0  nop
    ctx->pc = 0x2700d8u;
    // NOP
label_2700dc:
    // 0x2700dc: 0x0  nop
    ctx->pc = 0x2700dcu;
    // NOP
label_2700e0:
    // 0x2700e0: 0x5d0b  .word       0x00005D0B                   # movn        $t3, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2700e0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
label_2700e4:
    // 0x2700e4: 0xa050  .word       0x0000A050                   # mfhi        $s4 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2700e4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_2700e8:
    // 0x2700e8: 0x0  nop
    ctx->pc = 0x2700e8u;
    // NOP
label_2700ec:
    // 0x2700ec: 0x0  nop
    ctx->pc = 0x2700ecu;
    // NOP
label_2700f0:
    // 0x2700f0: 0x5d20  .word       0x00005D20                   # add         $t3, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2700f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2700f4:
    // 0x2700f4: 0xb3e0  .word       0x0000B3E0                   # add         $s6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2700f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_2700f8:
    // 0x2700f8: 0x0  nop
    ctx->pc = 0x2700f8u;
    // NOP
label_2700fc:
    // 0x2700fc: 0x0  nop
    ctx->pc = 0x2700fcu;
    // NOP
label_270100:
    // 0x270100: 0x5d37  .word       0x00005D37                   # INVALID     $zero, $zero, 0x5D37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270100u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x270100 raw=0x00005D37"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270104:
    // 0x270104: 0x5570  tge         $zero, $zero, 341
    ctx->pc = 0x270104u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270108:
    // 0x270108: 0x0  nop
    ctx->pc = 0x270108u;
    // NOP
label_27010c:
    // 0x27010c: 0x0  nop
    ctx->pc = 0x27010cu;
    // NOP
label_270110:
    // 0x270110: 0x5d42  srl         $t3, $zero, 21
    ctx->pc = 0x270110u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 0), 21));
label_270114:
    // 0x270114: 0xc3a0  .word       0x0000C3A0                   # add         $t8, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270114u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_270118:
    // 0x270118: 0x0  nop
    ctx->pc = 0x270118u;
    // NOP
label_27011c:
    // 0x27011c: 0x0  nop
    ctx->pc = 0x27011cu;
    // NOP
label_270120:
    // 0x270120: 0x5d5b  .word       0x00005D5B                   # divu        $t3, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270120u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_270124:
    // 0x270124: 0x9c60  .word       0x00009C60                   # add         $s3, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270124u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_270128:
    // 0x270128: 0x0  nop
    ctx->pc = 0x270128u;
    // NOP
label_27012c:
    // 0x27012c: 0x0  nop
    ctx->pc = 0x27012cu;
    // NOP
label_270130:
    // 0x270130: 0x5d6f  .word       0x00005D6F                   # dsubu       $t3, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270130u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_270134:
    // 0x270134: 0xbd10  .word       0x0000BD10                   # mfhi        $s7 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270134u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_270138:
    // 0x270138: 0x0  nop
    ctx->pc = 0x270138u;
    // NOP
label_27013c:
    // 0x27013c: 0x0  nop
    ctx->pc = 0x27013cu;
    // NOP
label_270140:
    // 0x270140: 0x5d87  .word       0x00005D87                   # srav        $t3, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270140u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_270144:
    // 0x270144: 0xa190  .word       0x0000A190                   # mfhi        $s4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270144u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_270148:
    // 0x270148: 0x0  nop
    ctx->pc = 0x270148u;
    // NOP
label_27014c:
    // 0x27014c: 0x0  nop
    ctx->pc = 0x27014cu;
    // NOP
label_270150:
    // 0x270150: 0x5d9c  .word       0x00005D9C                   # dmult       $zero, $zero # 00005D80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270150u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x270150 raw=0x00005D9C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270154:
    // 0x270154: 0x7950  .word       0x00007950                   # mfhi        $t7 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270154u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_270158:
    // 0x270158: 0x0  nop
    ctx->pc = 0x270158u;
    // NOP
label_27015c:
    // 0x27015c: 0x0  nop
    ctx->pc = 0x27015cu;
    // NOP
label_270160:
    // 0x270160: 0x5dac  .word       0x00005DAC                   # dadd        $t3, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270160u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 11, r); }
label_270164:
    // 0x270164: 0x67f0  tge         $zero, $zero, 415
    ctx->pc = 0x270164u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270168:
    // 0x270168: 0x0  nop
    ctx->pc = 0x270168u;
    // NOP
label_27016c:
    // 0x27016c: 0x0  nop
    ctx->pc = 0x27016cu;
    // NOP
label_270170:
    // 0x270170: 0x5db9  .word       0x00005DB9                   # INVALID     $zero, $zero, 0x5DB9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270170u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x270170 raw=0x00005DB9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270174:
    // 0x270174: 0x56e0  .word       0x000056E0                   # add         $t2, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270174u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_270178:
    // 0x270178: 0x0  nop
    ctx->pc = 0x270178u;
    // NOP
label_27017c:
    // 0x27017c: 0x0  nop
    ctx->pc = 0x27017cu;
    // NOP
label_270180:
    // 0x270180: 0x5dc4  .word       0x00005DC4                   # sllv        $t3, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270180u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_270184:
    // 0x270184: 0x8810  mfhi        $s1
    ctx->pc = 0x270184u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_270188:
    // 0x270188: 0x0  nop
    ctx->pc = 0x270188u;
    // NOP
label_27018c:
    // 0x27018c: 0x0  nop
    ctx->pc = 0x27018cu;
    // NOP
label_270190:
    // 0x270190: 0x5dd6  .word       0x00005DD6                   # dsrlv       $t3, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270190u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_270194:
    // 0x270194: 0x93a0  .word       0x000093A0                   # add         $s2, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270194u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_270198:
    // 0x270198: 0x0  nop
    ctx->pc = 0x270198u;
    // NOP
label_27019c:
    // 0x27019c: 0x0  nop
    ctx->pc = 0x27019cu;
    // NOP
label_2701a0:
    // 0x2701a0: 0x5de9  .word       0x00005DE9                   # mtsa        $zero # 00005DC0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2701a0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2701a4:
    // 0x2701a4: 0xa030  tge         $zero, $zero, 640
    ctx->pc = 0x2701a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2701a8:
    // 0x2701a8: 0x0  nop
    ctx->pc = 0x2701a8u;
    // NOP
label_2701ac:
    // 0x2701ac: 0x0  nop
    ctx->pc = 0x2701acu;
    // NOP
label_2701b0:
    // 0x2701b0: 0x5dfe  dsrl32      $t3, $zero, 23
    ctx->pc = 0x2701b0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) >> (32 + 23));
label_2701b4:
    // 0x2701b4: 0x98c0  sll         $s3, $zero, 3
    ctx->pc = 0x2701b4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_2701b8:
    // 0x2701b8: 0x0  nop
    ctx->pc = 0x2701b8u;
    // NOP
label_2701bc:
    // 0x2701bc: 0x0  nop
    ctx->pc = 0x2701bcu;
    // NOP
label_2701c0:
    // 0x2701c0: 0x5e12  .word       0x00005E12                   # mflo        $t3 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2701c0u;
    SET_GPR_U64(ctx, 11, ctx->lo);
label_2701c4:
    // 0x2701c4: 0x82c0  sll         $s0, $zero, 11
    ctx->pc = 0x2701c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_2701c8:
    // 0x2701c8: 0x0  nop
    ctx->pc = 0x2701c8u;
    // NOP
label_2701cc:
    // 0x2701cc: 0x0  nop
    ctx->pc = 0x2701ccu;
    // NOP
label_2701d0:
    // 0x2701d0: 0x5e23  .word       0x00005E23                   # negu        $t3, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2701d0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2701d4:
    // 0x2701d4: 0x7e20  .word       0x00007E20                   # add         $t7, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2701d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2701d8:
    // 0x2701d8: 0x0  nop
    ctx->pc = 0x2701d8u;
    // NOP
label_2701dc:
    // 0x2701dc: 0x0  nop
    ctx->pc = 0x2701dcu;
    // NOP
label_2701e0:
    // 0x2701e0: 0x5e33  tltu        $zero, $zero, 376
    ctx->pc = 0x2701e0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2701e4:
    // 0x2701e4: 0xaf00  sll         $s5, $zero, 28
    ctx->pc = 0x2701e4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_2701e8:
    // 0x2701e8: 0x0  nop
    ctx->pc = 0x2701e8u;
    // NOP
label_2701ec:
    // 0x2701ec: 0x0  nop
    ctx->pc = 0x2701ecu;
    // NOP
label_2701f0:
    // 0x2701f0: 0x5e49  .word       0x00005E49                   # jalr        $t3, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
label_2701f4:
    if (ctx->pc == 0x2701F4u) {
        ctx->pc = 0x2701F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2701F0u;
        // 0x2701f4: 0xc4c0  sll         $t8, $zero, 19 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2701F8u;
        goto label_2701f8;
    }
    ctx->pc = 0x2701F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 11, 0x2701F8u);
        ctx->pc = 0x2701F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2701F0u;
        // 0x2701f4: 0xc4c0  sll         $t8, $zero, 19 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2701F0u, 0x2701F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2701F8u;
label_2701f8:
    // 0x2701f8: 0x0  nop
    ctx->pc = 0x2701f8u;
    // NOP
label_2701fc:
    // 0x2701fc: 0x0  nop
    ctx->pc = 0x2701fcu;
    // NOP
label_270200:
    // 0x270200: 0x5e62  .word       0x00005E62                   # neg         $t3, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270200u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 11, (int32_t)tmp); }
label_270204:
    // 0x270204: 0xc980  sll         $t9, $zero, 6
    ctx->pc = 0x270204u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_270208:
    // 0x270208: 0x0  nop
    ctx->pc = 0x270208u;
    // NOP
label_27020c:
    // 0x27020c: 0x0  nop
    ctx->pc = 0x27020cu;
    // NOP
label_270210:
    // 0x270210: 0x5e7c  dsll32      $t3, $zero, 25
    ctx->pc = 0x270210u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) << (32 + 25));
label_270214:
    // 0x270214: 0x98c0  sll         $s3, $zero, 3
    ctx->pc = 0x270214u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_270218:
    // 0x270218: 0x0  nop
    ctx->pc = 0x270218u;
    // NOP
label_27021c:
    // 0x27021c: 0x0  nop
    ctx->pc = 0x27021cu;
    // NOP
label_270220:
    // 0x270220: 0x5e90  .word       0x00005E90                   # mfhi        $t3 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270220u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_270224:
    // 0x270224: 0xb5c0  sll         $s6, $zero, 23
    ctx->pc = 0x270224u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_270228:
    // 0x270228: 0x0  nop
    ctx->pc = 0x270228u;
    // NOP
label_27022c:
    // 0x27022c: 0x0  nop
    ctx->pc = 0x27022cu;
    // NOP
label_270230:
    // 0x270230: 0x5ea7  .word       0x00005EA7                   # not         $t3, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270230u;
    SET_GPR_U64(ctx, 11, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_270234:
    // 0x270234: 0x8030  tge         $zero, $zero, 512
    ctx->pc = 0x270234u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270238:
    // 0x270238: 0x0  nop
    ctx->pc = 0x270238u;
    // NOP
label_27023c:
    // 0x27023c: 0x0  nop
    ctx->pc = 0x27023cu;
    // NOP
label_270240:
    // 0x270240: 0x5eb8  dsll        $t3, $zero, 26
    ctx->pc = 0x270240u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) << 26);
label_270244:
    // 0x270244: 0xa6f0  tge         $zero, $zero, 667
    ctx->pc = 0x270244u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270248:
    // 0x270248: 0x0  nop
    ctx->pc = 0x270248u;
    // NOP
label_27024c:
    // 0x27024c: 0x0  nop
    ctx->pc = 0x27024cu;
    // NOP
label_270250:
    // 0x270250: 0x5ecd  break       0, 379
    ctx->pc = 0x270250u;
    runtime->handleBreak(rdram, ctx);
label_270254:
    // 0x270254: 0x9780  sll         $s2, $zero, 30
    ctx->pc = 0x270254u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_270258:
    // 0x270258: 0x0  nop
    ctx->pc = 0x270258u;
    // NOP
label_27025c:
    // 0x27025c: 0x0  nop
    ctx->pc = 0x27025cu;
    // NOP
label_270260:
    // 0x270260: 0x5ee0  .word       0x00005EE0                   # add         $t3, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270260u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_270264:
    // 0x270264: 0xbc30  tge         $zero, $zero, 752
    ctx->pc = 0x270264u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270268:
    // 0x270268: 0x0  nop
    ctx->pc = 0x270268u;
    // NOP
label_27026c:
    // 0x27026c: 0x0  nop
    ctx->pc = 0x27026cu;
    // NOP
label_270270:
    // 0x270270: 0x5ef8  dsll        $t3, $zero, 27
    ctx->pc = 0x270270u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) << 27);
label_270274:
    // 0x270274: 0x7b00  sll         $t7, $zero, 12
    ctx->pc = 0x270274u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_270278:
    // 0x270278: 0x0  nop
    ctx->pc = 0x270278u;
    // NOP
label_27027c:
    // 0x27027c: 0x0  nop
    ctx->pc = 0x27027cu;
    // NOP
label_270280:
    // 0x270280: 0x5f08  .word       0x00005F08                   # jr          $zero # 00005F00 <InstrIdType: CPU_SPECIAL>
label_270284:
    if (ctx->pc == 0x270284u) {
        ctx->pc = 0x270284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270280u;
        // 0x270284: 0x58c0  sll         $t3, $zero, 3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270288u;
        goto label_270288;
    }
    ctx->pc = 0x270280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x270284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270280u;
        // 0x270284: 0x58c0  sll         $t3, $zero, 3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270280u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x270288u;
label_270288:
    // 0x270288: 0x0  nop
    ctx->pc = 0x270288u;
    // NOP
label_27028c:
    // 0x27028c: 0x0  nop
    ctx->pc = 0x27028cu;
    // NOP
label_270290:
    // 0x270290: 0x5f14  .word       0x00005F14                   # dsllv       $t3, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270290u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_270294:
    // 0x270294: 0x67f0  tge         $zero, $zero, 415
    ctx->pc = 0x270294u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270298:
    // 0x270298: 0x0  nop
    ctx->pc = 0x270298u;
    // NOP
label_27029c:
    // 0x27029c: 0x0  nop
    ctx->pc = 0x27029cu;
    // NOP
label_2702a0:
    // 0x2702a0: 0x5f21  .word       0x00005F21                   # addu        $t3, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2702a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2702a4:
    // 0x2702a4: 0x7a30  tge         $zero, $zero, 488
    ctx->pc = 0x2702a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2702a8:
    // 0x2702a8: 0x0  nop
    ctx->pc = 0x2702a8u;
    // NOP
label_2702ac:
    // 0x2702ac: 0x0  nop
    ctx->pc = 0x2702acu;
    // NOP
label_2702b0:
    // 0x2702b0: 0x5f31  tgeu        $zero, $zero, 380
    ctx->pc = 0x2702b0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2702b4:
    // 0x2702b4: 0x5f10  .word       0x00005F10                   # mfhi        $t3 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2702b4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2702b8:
    // 0x2702b8: 0x0  nop
    ctx->pc = 0x2702b8u;
    // NOP
label_2702bc:
    // 0x2702bc: 0x0  nop
    ctx->pc = 0x2702bcu;
    // NOP
label_2702c0:
    // 0x2702c0: 0x5f3d  .word       0x00005F3D                   # INVALID     $zero, $zero, 0x5F3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2702c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2702C0 raw=0x00005F3D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2702c4:
    // 0x2702c4: 0xd920  .word       0x0000D920                   # add         $k1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2702c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_2702c8:
    // 0x2702c8: 0x0  nop
    ctx->pc = 0x2702c8u;
    // NOP
label_2702cc:
    // 0x2702cc: 0x0  nop
    ctx->pc = 0x2702ccu;
    // NOP
label_2702d0:
    // 0x2702d0: 0x5f59  .word       0x00005F59                   # multu       $zero, $zero # 00005F40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2702d0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_2702d4:
    // 0x2702d4: 0x7a70  tge         $zero, $zero, 489
    ctx->pc = 0x2702d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2702d8:
    // 0x2702d8: 0x0  nop
    ctx->pc = 0x2702d8u;
    // NOP
label_2702dc:
    // 0x2702dc: 0x0  nop
    ctx->pc = 0x2702dcu;
    // NOP
label_2702e0:
    // 0x2702e0: 0x5f69  .word       0x00005F69                   # mtsa        $zero # 00005F40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2702e0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2702e4:
    // 0x2702e4: 0x9150  .word       0x00009150                   # mfhi        $s2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2702e4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2702e8:
    // 0x2702e8: 0x0  nop
    ctx->pc = 0x2702e8u;
    // NOP
label_2702ec:
    // 0x2702ec: 0x0  nop
    ctx->pc = 0x2702ecu;
    // NOP
label_2702f0:
    // 0x2702f0: 0x5f7c  dsll32      $t3, $zero, 29
    ctx->pc = 0x2702f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) << (32 + 29));
label_2702f4:
    // 0x2702f4: 0x3ec0  sll         $a3, $zero, 27
    ctx->pc = 0x2702f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_2702f8:
    // 0x2702f8: 0x0  nop
    ctx->pc = 0x2702f8u;
    // NOP
label_2702fc:
    // 0x2702fc: 0x0  nop
    ctx->pc = 0x2702fcu;
    // NOP
label_270300:
    // 0x270300: 0x5f84  .word       0x00005F84                   # sllv        $t3, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270300u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_270304:
    // 0x270304: 0x8480  sll         $s0, $zero, 18
    ctx->pc = 0x270304u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_270308:
    // 0x270308: 0x0  nop
    ctx->pc = 0x270308u;
    // NOP
label_27030c:
    // 0x27030c: 0x0  nop
    ctx->pc = 0x27030cu;
    // NOP
label_270310:
    // 0x270310: 0x5f95  .word       0x00005F95                   # INVALID     $zero, $zero, 0x5F95 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270310u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x270310 raw=0x00005F95"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270314:
    // 0x270314: 0xbf50  .word       0x0000BF50                   # mfhi        $s7 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270314u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_270318:
    // 0x270318: 0x0  nop
    ctx->pc = 0x270318u;
    // NOP
label_27031c:
    // 0x27031c: 0x0  nop
    ctx->pc = 0x27031cu;
    // NOP
label_270320:
    // 0x270320: 0x5fad  .word       0x00005FAD                   # daddu       $t3, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270320u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270324:
    // 0x270324: 0xca40  sll         $t9, $zero, 9
    ctx->pc = 0x270324u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_270328:
    // 0x270328: 0x0  nop
    ctx->pc = 0x270328u;
    // NOP
label_27032c:
    // 0x27032c: 0x0  nop
    ctx->pc = 0x27032cu;
    // NOP
label_270330:
    // 0x270330: 0x5fc7  .word       0x00005FC7                   # srav        $t3, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270330u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_270334:
    // 0x270334: 0x6fe0  .word       0x00006FE0                   # add         $t5, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270334u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_270338:
    // 0x270338: 0x0  nop
    ctx->pc = 0x270338u;
    // NOP
label_27033c:
    // 0x27033c: 0x0  nop
    ctx->pc = 0x27033cu;
    // NOP
label_270340:
    // 0x270340: 0x5fd5  .word       0x00005FD5                   # INVALID     $zero, $zero, 0x5FD5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270340u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x270340 raw=0x00005FD5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270344:
    // 0x270344: 0x9870  tge         $zero, $zero, 609
    ctx->pc = 0x270344u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270348:
    // 0x270348: 0x0  nop
    ctx->pc = 0x270348u;
    // NOP
label_27034c:
    // 0x27034c: 0x0  nop
    ctx->pc = 0x27034cu;
    // NOP
label_270350:
    // 0x270350: 0x5fe9  .word       0x00005FE9                   # mtsa        $zero # 00005FC0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x270350u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_270354:
    // 0x270354: 0x4800  sll         $t1, $zero, 0
    ctx->pc = 0x270354u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_270358:
    // 0x270358: 0x0  nop
    ctx->pc = 0x270358u;
    // NOP
label_27035c:
    // 0x27035c: 0x0  nop
    ctx->pc = 0x27035cu;
    // NOP
label_270360:
    // 0x270360: 0x5ff2  tlt         $zero, $zero, 383
    ctx->pc = 0x270360u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270364:
    // 0x270364: 0x8430  tge         $zero, $zero, 528
    ctx->pc = 0x270364u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270368:
    // 0x270368: 0x0  nop
    ctx->pc = 0x270368u;
    // NOP
label_27036c:
    // 0x27036c: 0x0  nop
    ctx->pc = 0x27036cu;
    // NOP
label_270370:
    // 0x270370: 0x6003  sra         $t4, $zero, 0
    ctx->pc = 0x270370u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 0), 0));
label_270374:
    // 0x270374: 0x6850  .word       0x00006850                   # mfhi        $t5 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270374u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_270378:
    // 0x270378: 0x0  nop
    ctx->pc = 0x270378u;
    // NOP
label_27037c:
    // 0x27037c: 0x0  nop
    ctx->pc = 0x27037cu;
    // NOP
label_270380:
    // 0x270380: 0x6011  .word       0x00006011                   # mthi        $zero # 00006000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270380u;
    ctx->hi = GPR_U64(ctx, 0);
label_270384:
    // 0x270384: 0x7a40  sll         $t7, $zero, 9
    ctx->pc = 0x270384u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_270388:
    // 0x270388: 0x0  nop
    ctx->pc = 0x270388u;
    // NOP
label_27038c:
    // 0x27038c: 0x0  nop
    ctx->pc = 0x27038cu;
    // NOP
label_270390:
    // 0x270390: 0x6021  addu        $t4, $zero, $zero
    ctx->pc = 0x270390u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_270394:
    // 0x270394: 0x7da0  .word       0x00007DA0                   # add         $t7, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270394u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_270398:
    // 0x270398: 0x0  nop
    ctx->pc = 0x270398u;
    // NOP
label_27039c:
    // 0x27039c: 0x0  nop
    ctx->pc = 0x27039cu;
    // NOP
label_2703a0:
    // 0x2703a0: 0x6031  tgeu        $zero, $zero, 384
    ctx->pc = 0x2703a0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2703a4:
    // 0x2703a4: 0x11160  .word       0x00011160                   # add         $v0, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2703a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_2703a8:
    // 0x2703a8: 0x0  nop
    ctx->pc = 0x2703a8u;
    // NOP
label_2703ac:
    // 0x2703ac: 0x0  nop
    ctx->pc = 0x2703acu;
    // NOP
label_2703b0:
    // 0x2703b0: 0x6054  .word       0x00006054                   # dsllv       $t4, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2703b0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2703b4:
    // 0x2703b4: 0x96a0  .word       0x000096A0                   # add         $s2, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2703b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2703b8:
    // 0x2703b8: 0x0  nop
    ctx->pc = 0x2703b8u;
    // NOP
label_2703bc:
    // 0x2703bc: 0x0  nop
    ctx->pc = 0x2703bcu;
    // NOP
label_2703c0:
    // 0x2703c0: 0x6067  .word       0x00006067                   # not         $t4, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2703c0u;
    SET_GPR_U64(ctx, 12, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2703c4:
    // 0x2703c4: 0x41f0  tge         $zero, $zero, 263
    ctx->pc = 0x2703c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2703c8:
    // 0x2703c8: 0x0  nop
    ctx->pc = 0x2703c8u;
    // NOP
label_2703cc:
    // 0x2703cc: 0x0  nop
    ctx->pc = 0x2703ccu;
    // NOP
label_2703d0:
    // 0x2703d0: 0x6070  tge         $zero, $zero, 385
    ctx->pc = 0x2703d0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2703d4:
    // 0x2703d4: 0xcbe0  .word       0x0000CBE0                   # add         $t9, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2703d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_2703d8:
    // 0x2703d8: 0x0  nop
    ctx->pc = 0x2703d8u;
    // NOP
label_2703dc:
    // 0x2703dc: 0x0  nop
    ctx->pc = 0x2703dcu;
    // NOP
label_2703e0:
    // 0x2703e0: 0x608a  .word       0x0000608A                   # movz        $t4, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2703e0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_2703e4:
    // 0x2703e4: 0x9a00  sll         $s3, $zero, 8
    ctx->pc = 0x2703e4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_2703e8:
    // 0x2703e8: 0x0  nop
    ctx->pc = 0x2703e8u;
    // NOP
label_2703ec:
    // 0x2703ec: 0x0  nop
    ctx->pc = 0x2703ecu;
    // NOP
label_2703f0:
    // 0x2703f0: 0x609e  .word       0x0000609E                   # ddiv        $t4, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2703f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2703F0 raw=0x0000609E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2703f4:
    // 0x2703f4: 0x71b0  tge         $zero, $zero, 454
    ctx->pc = 0x2703f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2703f8:
    // 0x2703f8: 0x0  nop
    ctx->pc = 0x2703f8u;
    // NOP
label_2703fc:
    // 0x2703fc: 0x0  nop
    ctx->pc = 0x2703fcu;
    // NOP
label_270400:
    // 0x270400: 0x60ad  .word       0x000060AD                   # daddu       $t4, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270400u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270404:
    // 0x270404: 0x56c0  sll         $t2, $zero, 27
    ctx->pc = 0x270404u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_270408:
    // 0x270408: 0x0  nop
    ctx->pc = 0x270408u;
    // NOP
label_27040c:
    // 0x27040c: 0x0  nop
    ctx->pc = 0x27040cu;
    // NOP
label_270410:
    // 0x270410: 0x60b8  dsll        $t4, $zero, 2
    ctx->pc = 0x270410u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) << 2);
label_270414:
    // 0x270414: 0x79a0  .word       0x000079A0                   # add         $t7, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270414u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_270418:
    // 0x270418: 0x0  nop
    ctx->pc = 0x270418u;
    // NOP
label_27041c:
    // 0x27041c: 0x0  nop
    ctx->pc = 0x27041cu;
    // NOP
label_270420:
    // 0x270420: 0x60c8  .word       0x000060C8                   # jr          $zero # 000060C0 <InstrIdType: CPU_SPECIAL>
label_270424:
    if (ctx->pc == 0x270424u) {
        ctx->pc = 0x270424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270420u;
        // 0x270424: 0xa510  .word       0x0000A510                   # mfhi        $s4 # 00000500 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 20, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x270428u;
        goto label_270428;
    }
    ctx->pc = 0x270420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x270424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270420u;
        // 0x270424: 0xa510  .word       0x0000A510                   # mfhi        $s4 # 00000500 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 20, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270420u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x270428u;
label_270428:
    // 0x270428: 0x0  nop
    ctx->pc = 0x270428u;
    // NOP
label_27042c:
    // 0x27042c: 0x0  nop
    ctx->pc = 0x27042cu;
    // NOP
label_270430:
    // 0x270430: 0x60dd  .word       0x000060DD                   # dmultu      $zero, $zero # 000060C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270430u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x270430 raw=0x000060DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270434:
    // 0x270434: 0x6f50  .word       0x00006F50                   # mfhi        $t5 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270434u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_270438:
    // 0x270438: 0x0  nop
    ctx->pc = 0x270438u;
    // NOP
label_27043c:
    // 0x27043c: 0x0  nop
    ctx->pc = 0x27043cu;
    // NOP
label_270440:
    // 0x270440: 0x60eb  .word       0x000060EB                   # sltu        $t4, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270440u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_270444:
    // 0x270444: 0x10480  sll         $zero, $at, 18
    ctx->pc = 0x270444u;
    
label_270448:
    // 0x270448: 0x0  nop
    ctx->pc = 0x270448u;
    // NOP
label_27044c:
    // 0x27044c: 0x0  nop
    ctx->pc = 0x27044cu;
    // NOP
label_270450:
    // 0x270450: 0x610c  syscall     388
    ctx->pc = 0x270450u;
    ctx->pc = 0x270454u;
runtime->handleSyscall(rdram, ctx, 0x184u);
label_270454:
    // 0x270454: 0x71a0  .word       0x000071A0                   # add         $t6, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270454u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
    ctx->pc = 0x270458u;
    return;
}
