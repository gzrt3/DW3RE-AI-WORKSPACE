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

// Function: FUN_0019b850
// Address: 0x19b850 - 0x29b858
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b850_part436(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x270458u: goto label_270458;
        case 0x27045cu: goto label_27045c;
        case 0x270460u: goto label_270460;
        case 0x270464u: goto label_270464;
        case 0x270468u: goto label_270468;
        case 0x27046cu: goto label_27046c;
        case 0x270470u: goto label_270470;
        case 0x270474u: goto label_270474;
        case 0x270478u: goto label_270478;
        case 0x27047cu: goto label_27047c;
        case 0x270480u: goto label_270480;
        case 0x270484u: goto label_270484;
        case 0x270488u: goto label_270488;
        case 0x27048cu: goto label_27048c;
        case 0x270490u: goto label_270490;
        case 0x270494u: goto label_270494;
        case 0x270498u: goto label_270498;
        case 0x27049cu: goto label_27049c;
        case 0x2704a0u: goto label_2704a0;
        case 0x2704a4u: goto label_2704a4;
        case 0x2704a8u: goto label_2704a8;
        case 0x2704acu: goto label_2704ac;
        case 0x2704b0u: goto label_2704b0;
        case 0x2704b4u: goto label_2704b4;
        case 0x2704b8u: goto label_2704b8;
        case 0x2704bcu: goto label_2704bc;
        case 0x2704c0u: goto label_2704c0;
        case 0x2704c4u: goto label_2704c4;
        case 0x2704c8u: goto label_2704c8;
        case 0x2704ccu: goto label_2704cc;
        case 0x2704d0u: goto label_2704d0;
        case 0x2704d4u: goto label_2704d4;
        case 0x2704d8u: goto label_2704d8;
        case 0x2704dcu: goto label_2704dc;
        case 0x2704e0u: goto label_2704e0;
        case 0x2704e4u: goto label_2704e4;
        case 0x2704e8u: goto label_2704e8;
        case 0x2704ecu: goto label_2704ec;
        case 0x2704f0u: goto label_2704f0;
        case 0x2704f4u: goto label_2704f4;
        case 0x2704f8u: goto label_2704f8;
        case 0x2704fcu: goto label_2704fc;
        case 0x270500u: goto label_270500;
        case 0x270504u: goto label_270504;
        case 0x270508u: goto label_270508;
        case 0x27050cu: goto label_27050c;
        case 0x270510u: goto label_270510;
        case 0x270514u: goto label_270514;
        case 0x270518u: goto label_270518;
        case 0x27051cu: goto label_27051c;
        case 0x270520u: goto label_270520;
        case 0x270524u: goto label_270524;
        case 0x270528u: goto label_270528;
        case 0x27052cu: goto label_27052c;
        case 0x270530u: goto label_270530;
        case 0x270534u: goto label_270534;
        case 0x270538u: goto label_270538;
        case 0x27053cu: goto label_27053c;
        case 0x270540u: goto label_270540;
        case 0x270544u: goto label_270544;
        case 0x270548u: goto label_270548;
        case 0x27054cu: goto label_27054c;
        case 0x270550u: goto label_270550;
        case 0x270554u: goto label_270554;
        case 0x270558u: goto label_270558;
        case 0x27055cu: goto label_27055c;
        case 0x270560u: goto label_270560;
        case 0x270564u: goto label_270564;
        case 0x270568u: goto label_270568;
        case 0x27056cu: goto label_27056c;
        case 0x270570u: goto label_270570;
        case 0x270574u: goto label_270574;
        case 0x270578u: goto label_270578;
        case 0x27057cu: goto label_27057c;
        case 0x270580u: goto label_270580;
        case 0x270584u: goto label_270584;
        case 0x270588u: goto label_270588;
        case 0x27058cu: goto label_27058c;
        case 0x270590u: goto label_270590;
        case 0x270594u: goto label_270594;
        case 0x270598u: goto label_270598;
        case 0x27059cu: goto label_27059c;
        case 0x2705a0u: goto label_2705a0;
        case 0x2705a4u: goto label_2705a4;
        case 0x2705a8u: goto label_2705a8;
        case 0x2705acu: goto label_2705ac;
        case 0x2705b0u: goto label_2705b0;
        case 0x2705b4u: goto label_2705b4;
        case 0x2705b8u: goto label_2705b8;
        case 0x2705bcu: goto label_2705bc;
        case 0x2705c0u: goto label_2705c0;
        case 0x2705c4u: goto label_2705c4;
        case 0x2705c8u: goto label_2705c8;
        case 0x2705ccu: goto label_2705cc;
        case 0x2705d0u: goto label_2705d0;
        case 0x2705d4u: goto label_2705d4;
        case 0x2705d8u: goto label_2705d8;
        case 0x2705dcu: goto label_2705dc;
        case 0x2705e0u: goto label_2705e0;
        case 0x2705e4u: goto label_2705e4;
        case 0x2705e8u: goto label_2705e8;
        case 0x2705ecu: goto label_2705ec;
        case 0x2705f0u: goto label_2705f0;
        case 0x2705f4u: goto label_2705f4;
        case 0x2705f8u: goto label_2705f8;
        case 0x2705fcu: goto label_2705fc;
        case 0x270600u: goto label_270600;
        case 0x270604u: goto label_270604;
        case 0x270608u: goto label_270608;
        case 0x27060cu: goto label_27060c;
        case 0x270610u: goto label_270610;
        case 0x270614u: goto label_270614;
        case 0x270618u: goto label_270618;
        case 0x27061cu: goto label_27061c;
        case 0x270620u: goto label_270620;
        case 0x270624u: goto label_270624;
        case 0x270628u: goto label_270628;
        case 0x27062cu: goto label_27062c;
        case 0x270630u: goto label_270630;
        case 0x270634u: goto label_270634;
        case 0x270638u: goto label_270638;
        case 0x27063cu: goto label_27063c;
        case 0x270640u: goto label_270640;
        case 0x270644u: goto label_270644;
        case 0x270648u: goto label_270648;
        case 0x27064cu: goto label_27064c;
        case 0x270650u: goto label_270650;
        case 0x270654u: goto label_270654;
        case 0x270658u: goto label_270658;
        case 0x27065cu: goto label_27065c;
        case 0x270660u: goto label_270660;
        case 0x270664u: goto label_270664;
        case 0x270668u: goto label_270668;
        case 0x27066cu: goto label_27066c;
        case 0x270670u: goto label_270670;
        case 0x270674u: goto label_270674;
        case 0x270678u: goto label_270678;
        case 0x27067cu: goto label_27067c;
        case 0x270680u: goto label_270680;
        case 0x270684u: goto label_270684;
        case 0x270688u: goto label_270688;
        case 0x27068cu: goto label_27068c;
        default: return;
    }

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
label_270458:
    // 0x270458: 0x0  nop
    ctx->pc = 0x270458u;
    // NOP
label_27045c:
    // 0x27045c: 0x0  nop
    ctx->pc = 0x27045cu;
    // NOP
label_270460:
    // 0x270460: 0x611b  .word       0x0000611B                   # divu        $t4, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270460u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_270464:
    // 0x270464: 0x6350  .word       0x00006350                   # mfhi        $t4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270464u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_270468:
    // 0x270468: 0x0  nop
    ctx->pc = 0x270468u;
    // NOP
label_27046c:
    // 0x27046c: 0x0  nop
    ctx->pc = 0x27046cu;
    // NOP
label_270470:
    // 0x270470: 0x6128  .word       0x00006128                   # mfsa        $t4 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x270470u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_270474:
    // 0x270474: 0xe430  tge         $zero, $zero, 912
    ctx->pc = 0x270474u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270478:
    // 0x270478: 0x0  nop
    ctx->pc = 0x270478u;
    // NOP
label_27047c:
    // 0x27047c: 0x0  nop
    ctx->pc = 0x27047cu;
    // NOP
label_270480:
    // 0x270480: 0x6145  .word       0x00006145                   # INVALID     $zero, $zero, 0x6145 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270480u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x270480 raw=0x00006145"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270484:
    // 0x270484: 0x5c80  sll         $t3, $zero, 18
    ctx->pc = 0x270484u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_270488:
    // 0x270488: 0x0  nop
    ctx->pc = 0x270488u;
    // NOP
label_27048c:
    // 0x27048c: 0x0  nop
    ctx->pc = 0x27048cu;
    // NOP
label_270490:
    // 0x270490: 0x6151  .word       0x00006151                   # mthi        $zero # 00006140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270490u;
    ctx->hi = GPR_U64(ctx, 0);
label_270494:
    // 0x270494: 0x6cc0  sll         $t5, $zero, 19
    ctx->pc = 0x270494u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_270498:
    // 0x270498: 0x0  nop
    ctx->pc = 0x270498u;
    // NOP
label_27049c:
    // 0x27049c: 0x0  nop
    ctx->pc = 0x27049cu;
    // NOP
label_2704a0:
    // 0x2704a0: 0x615f  .word       0x0000615F                   # ddivu       $t4, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2704a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2704A0 raw=0x0000615F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2704a4:
    // 0x2704a4: 0x5030  tge         $zero, $zero, 320
    ctx->pc = 0x2704a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2704a8:
    // 0x2704a8: 0x0  nop
    ctx->pc = 0x2704a8u;
    // NOP
label_2704ac:
    // 0x2704ac: 0x0  nop
    ctx->pc = 0x2704acu;
    // NOP
label_2704b0:
    // 0x2704b0: 0x616a  .word       0x0000616A                   # slt         $t4, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2704b0u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2704b4:
    // 0x2704b4: 0xb4e0  .word       0x0000B4E0                   # add         $s6, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2704b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_2704b8:
    // 0x2704b8: 0x0  nop
    ctx->pc = 0x2704b8u;
    // NOP
label_2704bc:
    // 0x2704bc: 0x0  nop
    ctx->pc = 0x2704bcu;
    // NOP
label_2704c0:
    // 0x2704c0: 0x6181  .word       0x00006181                   # INVALID     $zero, $zero, 0x6181 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2704c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2704C0 raw=0x00006181"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2704c4:
    // 0x2704c4: 0x7690  .word       0x00007690                   # mfhi        $t6 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2704c4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2704c8:
    // 0x2704c8: 0x0  nop
    ctx->pc = 0x2704c8u;
    // NOP
label_2704cc:
    // 0x2704cc: 0x0  nop
    ctx->pc = 0x2704ccu;
    // NOP
label_2704d0:
    // 0x2704d0: 0x6190  .word       0x00006190                   # mfhi        $t4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2704d0u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_2704d4:
    // 0x2704d4: 0xbf10  .word       0x0000BF10                   # mfhi        $s7 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2704d4u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_2704d8:
    // 0x2704d8: 0x0  nop
    ctx->pc = 0x2704d8u;
    // NOP
label_2704dc:
    // 0x2704dc: 0x0  nop
    ctx->pc = 0x2704dcu;
    // NOP
label_2704e0:
    // 0x2704e0: 0x61a8  .word       0x000061A8                   # mfsa        $t4 # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2704e0u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_2704e4:
    // 0x2704e4: 0x91a0  .word       0x000091A0                   # add         $s2, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2704e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2704e8:
    // 0x2704e8: 0x0  nop
    ctx->pc = 0x2704e8u;
    // NOP
label_2704ec:
    // 0x2704ec: 0x0  nop
    ctx->pc = 0x2704ecu;
    // NOP
label_2704f0:
    // 0x2704f0: 0x61bb  dsra        $t4, $zero, 6
    ctx->pc = 0x2704f0u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 0) >> 6);
label_2704f4:
    // 0x2704f4: 0x86b0  tge         $zero, $zero, 538
    ctx->pc = 0x2704f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2704f8:
    // 0x2704f8: 0x0  nop
    ctx->pc = 0x2704f8u;
    // NOP
label_2704fc:
    // 0x2704fc: 0x0  nop
    ctx->pc = 0x2704fcu;
    // NOP
label_270500:
    // 0x270500: 0x61cc  syscall     391
    ctx->pc = 0x270500u;
    ctx->pc = 0x270504u;
runtime->handleSyscall(rdram, ctx, 0x187u);
label_270504:
    // 0x270504: 0xa070  tge         $zero, $zero, 641
    ctx->pc = 0x270504u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270508:
    // 0x270508: 0x0  nop
    ctx->pc = 0x270508u;
    // NOP
label_27050c:
    // 0x27050c: 0x0  nop
    ctx->pc = 0x27050cu;
    // NOP
label_270510:
    // 0x270510: 0x61e1  .word       0x000061E1                   # addu        $t4, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270510u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_270514:
    // 0x270514: 0x6e80  sll         $t5, $zero, 26
    ctx->pc = 0x270514u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_270518:
    // 0x270518: 0x0  nop
    ctx->pc = 0x270518u;
    // NOP
label_27051c:
    // 0x27051c: 0x0  nop
    ctx->pc = 0x27051cu;
    // NOP
label_270520:
    // 0x270520: 0x61ef  .word       0x000061EF                   # dsubu       $t4, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270520u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_270524:
    // 0x270524: 0xcfe0  .word       0x0000CFE0                   # add         $t9, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270524u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_270528:
    // 0x270528: 0x0  nop
    ctx->pc = 0x270528u;
    // NOP
label_27052c:
    // 0x27052c: 0x0  nop
    ctx->pc = 0x27052cu;
    // NOP
label_270530:
    // 0x270530: 0x6209  .word       0x00006209                   # jalr        $t4, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
label_270534:
    if (ctx->pc == 0x270534u) {
        ctx->pc = 0x270534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270530u;
        // 0x270534: 0xd240  sll         $k0, $zero, 9 (Delay Slot)
        SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270538u;
        goto label_270538;
    }
    ctx->pc = 0x270530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 12, 0x270538u);
        ctx->pc = 0x270534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270530u;
        // 0x270534: 0xd240  sll         $k0, $zero, 9 (Delay Slot)
        SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270530u, 0x270538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x270538u;
label_270538:
    // 0x270538: 0x0  nop
    ctx->pc = 0x270538u;
    // NOP
label_27053c:
    // 0x27053c: 0x0  nop
    ctx->pc = 0x27053cu;
    // NOP
label_270540:
    // 0x270540: 0x6224  .word       0x00006224                   # and         $t4, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270540u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_270544:
    // 0x270544: 0x5150  .word       0x00005150                   # mfhi        $t2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270544u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_270548:
    // 0x270548: 0x0  nop
    ctx->pc = 0x270548u;
    // NOP
label_27054c:
    // 0x27054c: 0x0  nop
    ctx->pc = 0x27054cu;
    // NOP
label_270550:
    // 0x270550: 0x622f  .word       0x0000622F                   # dsubu       $t4, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270550u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_270554:
    // 0x270554: 0xa970  tge         $zero, $zero, 677
    ctx->pc = 0x270554u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270558:
    // 0x270558: 0x0  nop
    ctx->pc = 0x270558u;
    // NOP
label_27055c:
    // 0x27055c: 0x0  nop
    ctx->pc = 0x27055cu;
    // NOP
label_270560:
    // 0x270560: 0x6245  .word       0x00006245                   # INVALID     $zero, $zero, 0x6245 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270560u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x270560 raw=0x00006245"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270564:
    // 0x270564: 0x7c10  .word       0x00007C10                   # mfhi        $t7 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270564u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_270568:
    // 0x270568: 0x0  nop
    ctx->pc = 0x270568u;
    // NOP
label_27056c:
    // 0x27056c: 0x0  nop
    ctx->pc = 0x27056cu;
    // NOP
label_270570:
    // 0x270570: 0x6255  .word       0x00006255                   # INVALID     $zero, $zero, 0x6255 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270570u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x270570 raw=0x00006255"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270574:
    // 0x270574: 0xb1b0  tge         $zero, $zero, 710
    ctx->pc = 0x270574u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270578:
    // 0x270578: 0x0  nop
    ctx->pc = 0x270578u;
    // NOP
label_27057c:
    // 0x27057c: 0x0  nop
    ctx->pc = 0x27057cu;
    // NOP
label_270580:
    // 0x270580: 0x626c  .word       0x0000626C                   # dadd        $t4, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270580u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_270584:
    // 0x270584: 0x6300  sll         $t4, $zero, 12
    ctx->pc = 0x270584u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_270588:
    // 0x270588: 0x0  nop
    ctx->pc = 0x270588u;
    // NOP
label_27058c:
    // 0x27058c: 0x0  nop
    ctx->pc = 0x27058cu;
    // NOP
label_270590:
    // 0x270590: 0x6279  .word       0x00006279                   # INVALID     $zero, $zero, 0x6279 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270590u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x270590 raw=0x00006279"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270594:
    // 0x270594: 0x8070  tge         $zero, $zero, 513
    ctx->pc = 0x270594u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270598:
    // 0x270598: 0x0  nop
    ctx->pc = 0x270598u;
    // NOP
label_27059c:
    // 0x27059c: 0x0  nop
    ctx->pc = 0x27059cu;
    // NOP
label_2705a0:
    // 0x2705a0: 0x628a  .word       0x0000628A                   # movz        $t4, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2705a0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_2705a4:
    // 0x2705a4: 0xf7e0  .word       0x0000F7E0                   # add         $fp, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2705a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_2705a8:
    // 0x2705a8: 0x0  nop
    ctx->pc = 0x2705a8u;
    // NOP
label_2705ac:
    // 0x2705ac: 0x0  nop
    ctx->pc = 0x2705acu;
    // NOP
label_2705b0:
    // 0x2705b0: 0x62a9  .word       0x000062A9                   # mtsa        $zero # 00006280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2705b0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2705b4:
    // 0x2705b4: 0xed50  .word       0x0000ED50                   # mfhi        $sp # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2705b4u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_2705b8:
    // 0x2705b8: 0x0  nop
    ctx->pc = 0x2705b8u;
    // NOP
label_2705bc:
    // 0x2705bc: 0x0  nop
    ctx->pc = 0x2705bcu;
    // NOP
label_2705c0:
    // 0x2705c0: 0x62c7  .word       0x000062C7                   # srav        $t4, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2705c0u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2705c4:
    // 0x2705c4: 0xc020  add         $t8, $zero, $zero
    ctx->pc = 0x2705c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_2705c8:
    // 0x2705c8: 0x0  nop
    ctx->pc = 0x2705c8u;
    // NOP
label_2705cc:
    // 0x2705cc: 0x0  nop
    ctx->pc = 0x2705ccu;
    // NOP
label_2705d0:
    // 0x2705d0: 0x62e0  .word       0x000062E0                   # add         $t4, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2705d0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2705d4:
    // 0x2705d4: 0xd920  .word       0x0000D920                   # add         $k1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2705d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_2705d8:
    // 0x2705d8: 0x0  nop
    ctx->pc = 0x2705d8u;
    // NOP
label_2705dc:
    // 0x2705dc: 0x0  nop
    ctx->pc = 0x2705dcu;
    // NOP
label_2705e0:
    // 0x2705e0: 0x62fc  dsll32      $t4, $zero, 11
    ctx->pc = 0x2705e0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) << (32 + 11));
label_2705e4:
    // 0x2705e4: 0x9550  .word       0x00009550                   # mfhi        $s2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2705e4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2705e8:
    // 0x2705e8: 0x0  nop
    ctx->pc = 0x2705e8u;
    // NOP
label_2705ec:
    // 0x2705ec: 0x0  nop
    ctx->pc = 0x2705ecu;
    // NOP
label_2705f0:
    // 0x2705f0: 0x630f  .word       0x0000630F                   # sync # 00006000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2705f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2705f4:
    // 0x2705f4: 0x6bb0  tge         $zero, $zero, 430
    ctx->pc = 0x2705f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2705f8:
    // 0x2705f8: 0x0  nop
    ctx->pc = 0x2705f8u;
    // NOP
label_2705fc:
    // 0x2705fc: 0x0  nop
    ctx->pc = 0x2705fcu;
    // NOP
label_270600:
    // 0x270600: 0x631d  .word       0x0000631D                   # dmultu      $zero, $zero # 00006300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270600u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x270600 raw=0x0000631D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270604:
    // 0x270604: 0x9f10  .word       0x00009F10                   # mfhi        $s3 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270604u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_270608:
    // 0x270608: 0x0  nop
    ctx->pc = 0x270608u;
    // NOP
label_27060c:
    // 0x27060c: 0x0  nop
    ctx->pc = 0x27060cu;
    // NOP
label_270610:
    // 0x270610: 0x6331  tgeu        $zero, $zero, 396
    ctx->pc = 0x270610u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270614:
    // 0x270614: 0x5e30  tge         $zero, $zero, 376
    ctx->pc = 0x270614u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270618:
    // 0x270618: 0x0  nop
    ctx->pc = 0x270618u;
    // NOP
label_27061c:
    // 0x27061c: 0x0  nop
    ctx->pc = 0x27061cu;
    // NOP
label_270620:
    // 0x270620: 0x633d  .word       0x0000633D                   # INVALID     $zero, $zero, 0x633D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270620u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x270620 raw=0x0000633D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270624:
    // 0x270624: 0xeaf0  tge         $zero, $zero, 939
    ctx->pc = 0x270624u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270628:
    // 0x270628: 0x0  nop
    ctx->pc = 0x270628u;
    // NOP
label_27062c:
    // 0x27062c: 0x0  nop
    ctx->pc = 0x27062cu;
    // NOP
label_270630:
    // 0x270630: 0x635b  .word       0x0000635B                   # divu        $t4, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270630u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_270634:
    // 0x270634: 0x11fe0  .word       0x00011FE0                   # add         $v1, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270634u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_270638:
    // 0x270638: 0x0  nop
    ctx->pc = 0x270638u;
    // NOP
label_27063c:
    // 0x27063c: 0x0  nop
    ctx->pc = 0x27063cu;
    // NOP
label_270640:
    // 0x270640: 0x637f  dsra32      $t4, $zero, 13
    ctx->pc = 0x270640u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 0) >> (32 + 13));
label_270644:
    // 0x270644: 0xfb90  .word       0x0000FB90                   # mfhi        $ra # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270644u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_270648:
    // 0x270648: 0x0  nop
    ctx->pc = 0x270648u;
    // NOP
label_27064c:
    // 0x27064c: 0x0  nop
    ctx->pc = 0x27064cu;
    // NOP
label_270650:
    // 0x270650: 0x639f  .word       0x0000639F                   # ddivu       $t4, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270650u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x270650 raw=0x0000639F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270654:
    // 0x270654: 0xe7e0  .word       0x0000E7E0                   # add         $gp, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270654u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_270658:
    // 0x270658: 0x0  nop
    ctx->pc = 0x270658u;
    // NOP
label_27065c:
    // 0x27065c: 0x0  nop
    ctx->pc = 0x27065cu;
    // NOP
label_270660:
    // 0x270660: 0x63bc  dsll32      $t4, $zero, 14
    ctx->pc = 0x270660u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) << (32 + 14));
label_270664:
    // 0x270664: 0xd670  tge         $zero, $zero, 857
    ctx->pc = 0x270664u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270668:
    // 0x270668: 0x0  nop
    ctx->pc = 0x270668u;
    // NOP
label_27066c:
    // 0x27066c: 0x0  nop
    ctx->pc = 0x27066cu;
    // NOP
label_270670:
    // 0x270670: 0x63d7  .word       0x000063D7                   # dsrav       $t4, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270670u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_270674:
    // 0x270674: 0xe5e0  .word       0x0000E5E0                   # add         $gp, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270674u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_270678:
    // 0x270678: 0x0  nop
    ctx->pc = 0x270678u;
    // NOP
label_27067c:
    // 0x27067c: 0x0  nop
    ctx->pc = 0x27067cu;
    // NOP
label_270680:
    // 0x270680: 0x63f4  teq         $zero, $zero, 399
    ctx->pc = 0x270680u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270684:
    // 0x270684: 0x9cc0  sll         $s3, $zero, 19
    ctx->pc = 0x270684u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_270688:
    // 0x270688: 0x0  nop
    ctx->pc = 0x270688u;
    // NOP
label_27068c:
    // 0x27068c: 0x0  nop
    ctx->pc = 0x27068cu;
    // NOP
    ctx->pc = 0x270690u;
    return;
}
