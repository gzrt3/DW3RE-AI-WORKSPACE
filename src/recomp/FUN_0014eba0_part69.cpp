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


void FUN_0014eba0_part69(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x16fee0u: goto label_16fee0;
        case 0x16fee4u: goto label_16fee4;
        case 0x16fee8u: goto label_16fee8;
        case 0x16feecu: goto label_16feec;
        case 0x16fef0u: goto label_16fef0;
        case 0x16fef4u: goto label_16fef4;
        case 0x16fef8u: goto label_16fef8;
        case 0x16fefcu: goto label_16fefc;
        case 0x16ff00u: goto label_16ff00;
        case 0x16ff04u: goto label_16ff04;
        case 0x16ff08u: goto label_16ff08;
        case 0x16ff0cu: goto label_16ff0c;
        case 0x16ff10u: goto label_16ff10;
        case 0x16ff14u: goto label_16ff14;
        case 0x16ff18u: goto label_16ff18;
        case 0x16ff1cu: goto label_16ff1c;
        case 0x16ff20u: goto label_16ff20;
        case 0x16ff24u: goto label_16ff24;
        case 0x16ff28u: goto label_16ff28;
        case 0x16ff2cu: goto label_16ff2c;
        case 0x16ff30u: goto label_16ff30;
        case 0x16ff34u: goto label_16ff34;
        case 0x16ff38u: goto label_16ff38;
        case 0x16ff3cu: goto label_16ff3c;
        case 0x16ff40u: goto label_16ff40;
        case 0x16ff44u: goto label_16ff44;
        case 0x16ff48u: goto label_16ff48;
        case 0x16ff4cu: goto label_16ff4c;
        case 0x16ff50u: goto label_16ff50;
        case 0x16ff54u: goto label_16ff54;
        case 0x16ff58u: goto label_16ff58;
        case 0x16ff5cu: goto label_16ff5c;
        case 0x16ff60u: goto label_16ff60;
        case 0x16ff64u: goto label_16ff64;
        case 0x16ff68u: goto label_16ff68;
        case 0x16ff6cu: goto label_16ff6c;
        case 0x16ff70u: goto label_16ff70;
        case 0x16ff74u: goto label_16ff74;
        case 0x16ff78u: goto label_16ff78;
        case 0x16ff7cu: goto label_16ff7c;
        case 0x16ff80u: goto label_16ff80;
        case 0x16ff84u: goto label_16ff84;
        case 0x16ff88u: goto label_16ff88;
        case 0x16ff8cu: goto label_16ff8c;
        case 0x16ff90u: goto label_16ff90;
        case 0x16ff94u: goto label_16ff94;
        case 0x16ff98u: goto label_16ff98;
        case 0x16ff9cu: goto label_16ff9c;
        case 0x16ffa0u: goto label_16ffa0;
        case 0x16ffa4u: goto label_16ffa4;
        case 0x16ffa8u: goto label_16ffa8;
        case 0x16ffacu: goto label_16ffac;
        case 0x16ffb0u: goto label_16ffb0;
        case 0x16ffb4u: goto label_16ffb4;
        case 0x16ffb8u: goto label_16ffb8;
        case 0x16ffbcu: goto label_16ffbc;
        case 0x16ffc0u: goto label_16ffc0;
        case 0x16ffc4u: goto label_16ffc4;
        case 0x16ffc8u: goto label_16ffc8;
        case 0x16ffccu: goto label_16ffcc;
        case 0x16ffd0u: goto label_16ffd0;
        case 0x16ffd4u: goto label_16ffd4;
        case 0x16ffd8u: goto label_16ffd8;
        case 0x16ffdcu: goto label_16ffdc;
        case 0x16ffe0u: goto label_16ffe0;
        case 0x16ffe4u: goto label_16ffe4;
        case 0x16ffe8u: goto label_16ffe8;
        case 0x16ffecu: goto label_16ffec;
        case 0x16fff0u: goto label_16fff0;
        case 0x16fff4u: goto label_16fff4;
        case 0x16fff8u: goto label_16fff8;
        case 0x16fffcu: goto label_16fffc;
        case 0x170000u: goto label_170000;
        case 0x170004u: goto label_170004;
        case 0x170008u: goto label_170008;
        case 0x17000cu: goto label_17000c;
        case 0x170010u: goto label_170010;
        case 0x170014u: goto label_170014;
        case 0x170018u: goto label_170018;
        case 0x17001cu: goto label_17001c;
        case 0x170020u: goto label_170020;
        case 0x170024u: goto label_170024;
        case 0x170028u: goto label_170028;
        case 0x17002cu: goto label_17002c;
        case 0x170030u: goto label_170030;
        case 0x170034u: goto label_170034;
        case 0x170038u: goto label_170038;
        case 0x17003cu: goto label_17003c;
        case 0x170040u: goto label_170040;
        case 0x170044u: goto label_170044;
        case 0x170048u: goto label_170048;
        case 0x17004cu: goto label_17004c;
        case 0x170050u: goto label_170050;
        case 0x170054u: goto label_170054;
        case 0x170058u: goto label_170058;
        case 0x17005cu: goto label_17005c;
        case 0x170060u: goto label_170060;
        case 0x170064u: goto label_170064;
        case 0x170068u: goto label_170068;
        case 0x17006cu: goto label_17006c;
        case 0x170070u: goto label_170070;
        case 0x170074u: goto label_170074;
        case 0x170078u: goto label_170078;
        case 0x17007cu: goto label_17007c;
        case 0x170080u: goto label_170080;
        case 0x170084u: goto label_170084;
        case 0x170088u: goto label_170088;
        case 0x17008cu: goto label_17008c;
        case 0x170090u: goto label_170090;
        case 0x170094u: goto label_170094;
        case 0x170098u: goto label_170098;
        case 0x17009cu: goto label_17009c;
        case 0x1700a0u: goto label_1700a0;
        case 0x1700a4u: goto label_1700a4;
        case 0x1700a8u: goto label_1700a8;
        case 0x1700acu: goto label_1700ac;
        case 0x1700b0u: goto label_1700b0;
        case 0x1700b4u: goto label_1700b4;
        case 0x1700b8u: goto label_1700b8;
        case 0x1700bcu: goto label_1700bc;
        case 0x1700c0u: goto label_1700c0;
        case 0x1700c4u: goto label_1700c4;
        case 0x1700c8u: goto label_1700c8;
        case 0x1700ccu: goto label_1700cc;
        case 0x1700d0u: goto label_1700d0;
        case 0x1700d4u: goto label_1700d4;
        case 0x1700d8u: goto label_1700d8;
        case 0x1700dcu: goto label_1700dc;
        case 0x1700e0u: goto label_1700e0;
        case 0x1700e4u: goto label_1700e4;
        case 0x1700e8u: goto label_1700e8;
        case 0x1700ecu: goto label_1700ec;
        case 0x1700f0u: goto label_1700f0;
        case 0x1700f4u: goto label_1700f4;
        case 0x1700f8u: goto label_1700f8;
        case 0x1700fcu: goto label_1700fc;
        case 0x170100u: goto label_170100;
        case 0x170104u: goto label_170104;
        case 0x170108u: goto label_170108;
        case 0x17010cu: goto label_17010c;
        case 0x170110u: goto label_170110;
        case 0x170114u: goto label_170114;
        case 0x170118u: goto label_170118;
        case 0x17011cu: goto label_17011c;
        case 0x170120u: goto label_170120;
        case 0x170124u: goto label_170124;
        case 0x170128u: goto label_170128;
        case 0x17012cu: goto label_17012c;
        case 0x170130u: goto label_170130;
        case 0x170134u: goto label_170134;
        case 0x170138u: goto label_170138;
        case 0x17013cu: goto label_17013c;
        case 0x170140u: goto label_170140;
        case 0x170144u: goto label_170144;
        case 0x170148u: goto label_170148;
        case 0x17014cu: goto label_17014c;
        case 0x170150u: goto label_170150;
        case 0x170154u: goto label_170154;
        case 0x170158u: goto label_170158;
        case 0x17015cu: goto label_17015c;
        case 0x170160u: goto label_170160;
        case 0x170164u: goto label_170164;
        case 0x170168u: goto label_170168;
        case 0x17016cu: goto label_17016c;
        case 0x170170u: goto label_170170;
        case 0x170174u: goto label_170174;
        case 0x170178u: goto label_170178;
        case 0x17017cu: goto label_17017c;
        case 0x170180u: goto label_170180;
        case 0x170184u: goto label_170184;
        case 0x170188u: goto label_170188;
        case 0x17018cu: goto label_17018c;
        case 0x170190u: goto label_170190;
        case 0x170194u: goto label_170194;
        case 0x170198u: goto label_170198;
        case 0x17019cu: goto label_17019c;
        case 0x1701a0u: goto label_1701a0;
        case 0x1701a4u: goto label_1701a4;
        case 0x1701a8u: goto label_1701a8;
        case 0x1701acu: goto label_1701ac;
        case 0x1701b0u: goto label_1701b0;
        case 0x1701b4u: goto label_1701b4;
        case 0x1701b8u: goto label_1701b8;
        case 0x1701bcu: goto label_1701bc;
        case 0x1701c0u: goto label_1701c0;
        case 0x1701c4u: goto label_1701c4;
        case 0x1701c8u: goto label_1701c8;
        case 0x1701ccu: goto label_1701cc;
        case 0x1701d0u: goto label_1701d0;
        case 0x1701d4u: goto label_1701d4;
        case 0x1701d8u: goto label_1701d8;
        case 0x1701dcu: goto label_1701dc;
        case 0x1701e0u: goto label_1701e0;
        case 0x1701e4u: goto label_1701e4;
        case 0x1701e8u: goto label_1701e8;
        case 0x1701ecu: goto label_1701ec;
        case 0x1701f0u: goto label_1701f0;
        case 0x1701f4u: goto label_1701f4;
        case 0x1701f8u: goto label_1701f8;
        case 0x1701fcu: goto label_1701fc;
        case 0x170200u: goto label_170200;
        case 0x170204u: goto label_170204;
        case 0x170208u: goto label_170208;
        case 0x17020cu: goto label_17020c;
        case 0x170210u: goto label_170210;
        case 0x170214u: goto label_170214;
        case 0x170218u: goto label_170218;
        case 0x17021cu: goto label_17021c;
        case 0x170220u: goto label_170220;
        case 0x170224u: goto label_170224;
        case 0x170228u: goto label_170228;
        case 0x17022cu: goto label_17022c;
        case 0x170230u: goto label_170230;
        case 0x170234u: goto label_170234;
        case 0x170238u: goto label_170238;
        case 0x17023cu: goto label_17023c;
        case 0x170240u: goto label_170240;
        case 0x170244u: goto label_170244;
        case 0x170248u: goto label_170248;
        case 0x17024cu: goto label_17024c;
        case 0x170250u: goto label_170250;
        case 0x170254u: goto label_170254;
        case 0x170258u: goto label_170258;
        case 0x17025cu: goto label_17025c;
        case 0x170260u: goto label_170260;
        case 0x170264u: goto label_170264;
        case 0x170268u: goto label_170268;
        case 0x17026cu: goto label_17026c;
        case 0x170270u: goto label_170270;
        case 0x170274u: goto label_170274;
        case 0x170278u: goto label_170278;
        case 0x17027cu: goto label_17027c;
        case 0x170280u: goto label_170280;
        case 0x170284u: goto label_170284;
        case 0x170288u: goto label_170288;
        case 0x17028cu: goto label_17028c;
        case 0x170290u: goto label_170290;
        case 0x170294u: goto label_170294;
        case 0x170298u: goto label_170298;
        case 0x17029cu: goto label_17029c;
        case 0x1702a0u: goto label_1702a0;
        case 0x1702a4u: goto label_1702a4;
        case 0x1702a8u: goto label_1702a8;
        case 0x1702acu: goto label_1702ac;
        case 0x1702b0u: goto label_1702b0;
        case 0x1702b4u: goto label_1702b4;
        case 0x1702b8u: goto label_1702b8;
        case 0x1702bcu: goto label_1702bc;
        case 0x1702c0u: goto label_1702c0;
        case 0x1702c4u: goto label_1702c4;
        case 0x1702c8u: goto label_1702c8;
        case 0x1702ccu: goto label_1702cc;
        case 0x1702d0u: goto label_1702d0;
        case 0x1702d4u: goto label_1702d4;
        case 0x1702d8u: goto label_1702d8;
        case 0x1702dcu: goto label_1702dc;
        case 0x1702e0u: goto label_1702e0;
        case 0x1702e4u: goto label_1702e4;
        case 0x1702e8u: goto label_1702e8;
        case 0x1702ecu: goto label_1702ec;
        case 0x1702f0u: goto label_1702f0;
        case 0x1702f4u: goto label_1702f4;
        case 0x1702f8u: goto label_1702f8;
        case 0x1702fcu: goto label_1702fc;
        case 0x170300u: goto label_170300;
        case 0x170304u: goto label_170304;
        case 0x170308u: goto label_170308;
        case 0x17030cu: goto label_17030c;
        case 0x170310u: goto label_170310;
        case 0x170314u: goto label_170314;
        case 0x170318u: goto label_170318;
        case 0x17031cu: goto label_17031c;
        case 0x170320u: goto label_170320;
        case 0x170324u: goto label_170324;
        case 0x170328u: goto label_170328;
        case 0x17032cu: goto label_17032c;
        case 0x170330u: goto label_170330;
        case 0x170334u: goto label_170334;
        case 0x170338u: goto label_170338;
        case 0x17033cu: goto label_17033c;
        case 0x170340u: goto label_170340;
        case 0x170344u: goto label_170344;
        case 0x170348u: goto label_170348;
        case 0x17034cu: goto label_17034c;
        case 0x170350u: goto label_170350;
        case 0x170354u: goto label_170354;
        case 0x170358u: goto label_170358;
        case 0x17035cu: goto label_17035c;
        case 0x170360u: goto label_170360;
        case 0x170364u: goto label_170364;
        case 0x170368u: goto label_170368;
        case 0x17036cu: goto label_17036c;
        case 0x170370u: goto label_170370;
        case 0x170374u: goto label_170374;
        case 0x170378u: goto label_170378;
        case 0x17037cu: goto label_17037c;
        case 0x170380u: goto label_170380;
        case 0x170384u: goto label_170384;
        case 0x170388u: goto label_170388;
        case 0x17038cu: goto label_17038c;
        case 0x170390u: goto label_170390;
        case 0x170394u: goto label_170394;
        case 0x170398u: goto label_170398;
        case 0x17039cu: goto label_17039c;
        case 0x1703a0u: goto label_1703a0;
        case 0x1703a4u: goto label_1703a4;
        case 0x1703a8u: goto label_1703a8;
        case 0x1703acu: goto label_1703ac;
        case 0x1703b0u: goto label_1703b0;
        case 0x1703b4u: goto label_1703b4;
        case 0x1703b8u: goto label_1703b8;
        case 0x1703bcu: goto label_1703bc;
        case 0x1703c0u: goto label_1703c0;
        case 0x1703c4u: goto label_1703c4;
        case 0x1703c8u: goto label_1703c8;
        case 0x1703ccu: goto label_1703cc;
        case 0x1703d0u: goto label_1703d0;
        case 0x1703d4u: goto label_1703d4;
        case 0x1703d8u: goto label_1703d8;
        case 0x1703dcu: goto label_1703dc;
        case 0x1703e0u: goto label_1703e0;
        case 0x1703e4u: goto label_1703e4;
        case 0x1703e8u: goto label_1703e8;
        case 0x1703ecu: goto label_1703ec;
        case 0x1703f0u: goto label_1703f0;
        case 0x1703f4u: goto label_1703f4;
        case 0x1703f8u: goto label_1703f8;
        case 0x1703fcu: goto label_1703fc;
        case 0x170400u: goto label_170400;
        case 0x170404u: goto label_170404;
        case 0x170408u: goto label_170408;
        case 0x17040cu: goto label_17040c;
        case 0x170410u: goto label_170410;
        case 0x170414u: goto label_170414;
        case 0x170418u: goto label_170418;
        case 0x17041cu: goto label_17041c;
        case 0x170420u: goto label_170420;
        case 0x170424u: goto label_170424;
        case 0x170428u: goto label_170428;
        case 0x17042cu: goto label_17042c;
        case 0x170430u: goto label_170430;
        case 0x170434u: goto label_170434;
        case 0x170438u: goto label_170438;
        case 0x17043cu: goto label_17043c;
        case 0x170440u: goto label_170440;
        case 0x170444u: goto label_170444;
        case 0x170448u: goto label_170448;
        case 0x17044cu: goto label_17044c;
        case 0x170450u: goto label_170450;
        case 0x170454u: goto label_170454;
        case 0x170458u: goto label_170458;
        case 0x17045cu: goto label_17045c;
        case 0x170460u: goto label_170460;
        case 0x170464u: goto label_170464;
        case 0x170468u: goto label_170468;
        case 0x17046cu: goto label_17046c;
        case 0x170470u: goto label_170470;
        case 0x170474u: goto label_170474;
        case 0x170478u: goto label_170478;
        case 0x17047cu: goto label_17047c;
        case 0x170480u: goto label_170480;
        case 0x170484u: goto label_170484;
        case 0x170488u: goto label_170488;
        case 0x17048cu: goto label_17048c;
        case 0x170490u: goto label_170490;
        case 0x170494u: goto label_170494;
        case 0x170498u: goto label_170498;
        case 0x17049cu: goto label_17049c;
        case 0x1704a0u: goto label_1704a0;
        case 0x1704a4u: goto label_1704a4;
        case 0x1704a8u: goto label_1704a8;
        case 0x1704acu: goto label_1704ac;
        case 0x1704b0u: goto label_1704b0;
        case 0x1704b4u: goto label_1704b4;
        case 0x1704b8u: goto label_1704b8;
        case 0x1704bcu: goto label_1704bc;
        case 0x1704c0u: goto label_1704c0;
        case 0x1704c4u: goto label_1704c4;
        case 0x1704c8u: goto label_1704c8;
        case 0x1704ccu: goto label_1704cc;
        case 0x1704d0u: goto label_1704d0;
        case 0x1704d4u: goto label_1704d4;
        case 0x1704d8u: goto label_1704d8;
        case 0x1704dcu: goto label_1704dc;
        case 0x1704e0u: goto label_1704e0;
        case 0x1704e4u: goto label_1704e4;
        case 0x1704e8u: goto label_1704e8;
        case 0x1704ecu: goto label_1704ec;
        case 0x1704f0u: goto label_1704f0;
        case 0x1704f4u: goto label_1704f4;
        case 0x1704f8u: goto label_1704f8;
        case 0x1704fcu: goto label_1704fc;
        case 0x170500u: goto label_170500;
        case 0x170504u: goto label_170504;
        case 0x170508u: goto label_170508;
        case 0x17050cu: goto label_17050c;
        case 0x170510u: goto label_170510;
        case 0x170514u: goto label_170514;
        case 0x170518u: goto label_170518;
        case 0x17051cu: goto label_17051c;
        case 0x170520u: goto label_170520;
        case 0x170524u: goto label_170524;
        case 0x170528u: goto label_170528;
        case 0x17052cu: goto label_17052c;
        case 0x170530u: goto label_170530;
        case 0x170534u: goto label_170534;
        case 0x170538u: goto label_170538;
        case 0x17053cu: goto label_17053c;
        case 0x170540u: goto label_170540;
        case 0x170544u: goto label_170544;
        case 0x170548u: goto label_170548;
        case 0x17054cu: goto label_17054c;
        case 0x170550u: goto label_170550;
        case 0x170554u: goto label_170554;
        case 0x170558u: goto label_170558;
        case 0x17055cu: goto label_17055c;
        case 0x170560u: goto label_170560;
        case 0x170564u: goto label_170564;
        case 0x170568u: goto label_170568;
        case 0x17056cu: goto label_17056c;
        case 0x170570u: goto label_170570;
        case 0x170574u: goto label_170574;
        case 0x170578u: goto label_170578;
        case 0x17057cu: goto label_17057c;
        case 0x170580u: goto label_170580;
        case 0x170584u: goto label_170584;
        case 0x170588u: goto label_170588;
        case 0x17058cu: goto label_17058c;
        case 0x170590u: goto label_170590;
        case 0x170594u: goto label_170594;
        case 0x170598u: goto label_170598;
        case 0x17059cu: goto label_17059c;
        case 0x1705a0u: goto label_1705a0;
        case 0x1705a4u: goto label_1705a4;
        case 0x1705a8u: goto label_1705a8;
        case 0x1705acu: goto label_1705ac;
        case 0x1705b0u: goto label_1705b0;
        case 0x1705b4u: goto label_1705b4;
        case 0x1705b8u: goto label_1705b8;
        case 0x1705bcu: goto label_1705bc;
        case 0x1705c0u: goto label_1705c0;
        case 0x1705c4u: goto label_1705c4;
        case 0x1705c8u: goto label_1705c8;
        case 0x1705ccu: goto label_1705cc;
        case 0x1705d0u: goto label_1705d0;
        case 0x1705d4u: goto label_1705d4;
        case 0x1705d8u: goto label_1705d8;
        case 0x1705dcu: goto label_1705dc;
        case 0x1705e0u: goto label_1705e0;
        case 0x1705e4u: goto label_1705e4;
        case 0x1705e8u: goto label_1705e8;
        case 0x1705ecu: goto label_1705ec;
        case 0x1705f0u: goto label_1705f0;
        case 0x1705f4u: goto label_1705f4;
        case 0x1705f8u: goto label_1705f8;
        case 0x1705fcu: goto label_1705fc;
        case 0x170600u: goto label_170600;
        case 0x170604u: goto label_170604;
        case 0x170608u: goto label_170608;
        case 0x17060cu: goto label_17060c;
        case 0x170610u: goto label_170610;
        case 0x170614u: goto label_170614;
        case 0x170618u: goto label_170618;
        case 0x17061cu: goto label_17061c;
        case 0x170620u: goto label_170620;
        case 0x170624u: goto label_170624;
        case 0x170628u: goto label_170628;
        case 0x17062cu: goto label_17062c;
        case 0x170630u: goto label_170630;
        case 0x170634u: goto label_170634;
        case 0x170638u: goto label_170638;
        case 0x17063cu: goto label_17063c;
        case 0x170640u: goto label_170640;
        case 0x170644u: goto label_170644;
        case 0x170648u: goto label_170648;
        case 0x17064cu: goto label_17064c;
        case 0x170650u: goto label_170650;
        case 0x170654u: goto label_170654;
        case 0x170658u: goto label_170658;
        case 0x17065cu: goto label_17065c;
        case 0x170660u: goto label_170660;
        case 0x170664u: goto label_170664;
        case 0x170668u: goto label_170668;
        case 0x17066cu: goto label_17066c;
        case 0x170670u: goto label_170670;
        case 0x170674u: goto label_170674;
        case 0x170678u: goto label_170678;
        case 0x17067cu: goto label_17067c;
        case 0x170680u: goto label_170680;
        case 0x170684u: goto label_170684;
        case 0x170688u: goto label_170688;
        case 0x17068cu: goto label_17068c;
        case 0x170690u: goto label_170690;
        case 0x170694u: goto label_170694;
        case 0x170698u: goto label_170698;
        case 0x17069cu: goto label_17069c;
        case 0x1706a0u: goto label_1706a0;
        case 0x1706a4u: goto label_1706a4;
        case 0x1706a8u: goto label_1706a8;
        case 0x1706acu: goto label_1706ac;
        default: return;
    }

label_16fee0:
    // 0x16fee0: 0xaf828184  sw          $v0, -0x7E7C($gp)
    ctx->pc = 0x16fee0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934916), GPR_U32(ctx, 2));
label_16fee4:
    // 0x16fee4: 0xac201edc  sw          $zero, 0x1EDC($at)
    ctx->pc = 0x16fee4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7900), GPR_U32(ctx, 0));
label_16fee8:
    // 0x16fee8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x16fee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_16feec:
    // 0x16feec: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16feecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16fef0:
    // 0x16fef0: 0xa38281c8  sb          $v0, -0x7E38($gp)
    ctx->pc = 0x16fef0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934984), (uint8_t)GPR_U32(ctx, 2));
label_16fef4:
    // 0x16fef4: 0xac201ee0  sw          $zero, 0x1EE0($at)
    ctx->pc = 0x16fef4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7904), GPR_U32(ctx, 0));
label_16fef8:
    // 0x16fef8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x16fef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_16fefc:
    // 0x16fefc: 0xa38281c9  sb          $v0, -0x7E37($gp)
    ctx->pc = 0x16fefcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934985), (uint8_t)GPR_U32(ctx, 2));
label_16ff00:
    // 0x16ff00: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x16ff00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_16ff04:
    // 0x16ff04: 0xaf808728  sw          $zero, -0x78D8($gp)
    ctx->pc = 0x16ff04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936360), GPR_U32(ctx, 0));
label_16ff08:
    // 0x16ff08: 0xaf8086fc  sw          $zero, -0x7904($gp)
    ctx->pc = 0x16ff08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
label_16ff0c:
    // 0x16ff0c: 0xaf808700  sw          $zero, -0x7900($gp)
    ctx->pc = 0x16ff0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936320), GPR_U32(ctx, 0));
label_16ff10:
    // 0x16ff10: 0xaf808704  sw          $zero, -0x78FC($gp)
    ctx->pc = 0x16ff10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936324), GPR_U32(ctx, 0));
label_16ff14:
    // 0x16ff14: 0xaf808708  sw          $zero, -0x78F8($gp)
    ctx->pc = 0x16ff14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936328), GPR_U32(ctx, 0));
label_16ff18:
    // 0x16ff18: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x16ff18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_16ff1c:
    // 0x16ff1c: 0xaf848714  sw          $a0, -0x78EC($gp)
    ctx->pc = 0x16ff1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936340), GPR_U32(ctx, 4));
label_16ff20:
    // 0x16ff20: 0x8c234970  lw          $v1, 0x4970($at)
    ctx->pc = 0x16ff20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
label_16ff24:
    // 0x16ff24: 0xaf80870c  sw          $zero, -0x78F4($gp)
    ctx->pc = 0x16ff24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936332), GPR_U32(ctx, 0));
label_16ff28:
    // 0x16ff28: 0xa3808188  sb          $zero, -0x7E78($gp)
    ctx->pc = 0x16ff28u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934920), (uint8_t)GPR_U32(ctx, 0));
label_16ff2c:
    // 0x16ff2c: 0xaf808190  sw          $zero, -0x7E70($gp)
    ctx->pc = 0x16ff2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934928), GPR_U32(ctx, 0));
label_16ff30:
    // 0x16ff30: 0xaf808198  sw          $zero, -0x7E68($gp)
    ctx->pc = 0x16ff30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934936), GPR_U32(ctx, 0));
label_16ff34:
    // 0x16ff34: 0xaf8081a0  sw          $zero, -0x7E60($gp)
    ctx->pc = 0x16ff34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934944), GPR_U32(ctx, 0));
label_16ff38:
    // 0x16ff38: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x16ff38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_16ff3c:
    // 0x16ff3c: 0xaf8381c0  sw          $v1, -0x7E40($gp)
    ctx->pc = 0x16ff3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934976), GPR_U32(ctx, 3));
label_16ff40:
    // 0x16ff40: 0x8c224a00  lw          $v0, 0x4A00($at)
    ctx->pc = 0x16ff40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18944)));
label_16ff44:
    // 0x16ff44: 0xa3808189  sb          $zero, -0x7E77($gp)
    ctx->pc = 0x16ff44u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934921), (uint8_t)GPR_U32(ctx, 0));
label_16ff48:
    // 0x16ff48: 0xaf808194  sw          $zero, -0x7E6C($gp)
    ctx->pc = 0x16ff48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934932), GPR_U32(ctx, 0));
label_16ff4c:
    // 0x16ff4c: 0xaf80819c  sw          $zero, -0x7E64($gp)
    ctx->pc = 0x16ff4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934940), GPR_U32(ctx, 0));
label_16ff50:
    // 0x16ff50: 0xaf8081a4  sw          $zero, -0x7E5C($gp)
    ctx->pc = 0x16ff50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934948), GPR_U32(ctx, 0));
label_16ff54:
    // 0x16ff54: 0xc05be08  jal         func_16F820
label_16ff58:
    if (ctx->pc == 0x16FF58u) {
        ctx->pc = 0x16FF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FF54u;
        // 0x16ff58: 0xaf8281c4  sw          $v0, -0x7E3C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FF5Cu;
        goto label_16ff5c;
    }
    ctx->pc = 0x16FF54u;
    SET_GPR_U32(ctx, 31, 0x16FF5Cu);
    ctx->pc = 0x16FF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF54u;
    // 0x16ff58: 0xaf8281c4  sw          $v0, -0x7E3C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934980), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F820u;
    { ctx->pc = 0x16f820; return; }
    ctx->pc = 0x16FF5Cu;
label_16ff5c:
    // 0x16ff5c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_16ff60:
    if (ctx->pc == 0x16FF60u) {
        ctx->pc = 0x16FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FF5Cu;
        // 0x16ff60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FF64u;
        goto label_16ff64;
    }
    ctx->pc = 0x16FF5Cu;
    {
        const bool branch_taken_0x16ff5c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x16FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FF5Cu;
        // 0x16ff60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ff5c) {
            ctx->pc = 0x16FF6Cu;
            goto label_16ff6c;
        }
    }
    ctx->pc = 0x16FF64u;
label_16ff64:
    // 0x16ff64: 0x10000004  b           . + 4 + (0x4 << 2)
label_16ff68:
    if (ctx->pc == 0x16FF68u) {
        ctx->pc = 0x16FF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FF64u;
        // 0x16ff68: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FF6Cu;
        goto label_16ff6c;
    }
    ctx->pc = 0x16FF64u;
    {
        const bool branch_taken_0x16ff64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FF64u;
        // 0x16ff68: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ff64) {
            ctx->pc = 0x16FF78u;
            goto label_16ff78;
        }
    }
    ctx->pc = 0x16FF6Cu;
label_16ff6c:
    // 0x16ff6c: 0xc05bd78  jal         func_16F5E0
label_16ff70:
    if (ctx->pc == 0x16FF70u) {
        ctx->pc = 0x16FF74u;
        goto label_16ff74;
    }
    ctx->pc = 0x16FF6Cu;
    SET_GPR_U32(ctx, 31, 0x16FF74u);
    ctx->pc = 0x16F5E0u;
    { ctx->pc = 0x16f5e0; return; }
    ctx->pc = 0x16FF74u;
label_16ff74:
    // 0x16ff74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16ff74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ff78:
    // 0x16ff78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16ff78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16ff7c:
    // 0x16ff7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16ff7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16ff80:
    // 0x16ff80: 0x3e00008  jr          $ra
label_16ff84:
    if (ctx->pc == 0x16FF84u) {
        ctx->pc = 0x16FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FF80u;
        // 0x16ff84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FF88u;
        goto label_16ff88;
    }
    ctx->pc = 0x16FF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FF80u;
        // 0x16ff84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FF80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FF88u;
label_16ff88:
    // 0x16ff88: 0x0  nop
    ctx->pc = 0x16ff88u;
    // NOP
label_16ff8c:
    // 0x16ff8c: 0x0  nop
    ctx->pc = 0x16ff8cu;
    // NOP
label_16ff90:
    // 0x16ff90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x16ff90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_16ff94:
    // 0x16ff94: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x16ff94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_16ff98:
    // 0x16ff98: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x16ff98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_16ff9c:
    // 0x16ff9c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16ff9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_16ffa0:
    // 0x16ffa0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16ffa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_16ffa4:
    // 0x16ffa4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16ffa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_16ffa8:
    // 0x16ffa8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16ffa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16ffac:
    // 0x16ffac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16ffacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16ffb0:
    // 0x16ffb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16ffb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16ffb4:
    // 0x16ffb4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16ffb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ffb8:
    // 0x16ffb8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16ffb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ffbc:
    // 0x16ffbc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x16ffbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_16ffc0:
    // 0x16ffc0: 0x24424530  addiu       $v0, $v0, 0x4530
    ctx->pc = 0x16ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17712));
label_16ffc4:
    // 0x16ffc4: 0xc05c478  jal         func_1711E0
label_16ffc8:
    if (ctx->pc == 0x16FFC8u) {
        ctx->pc = 0x16FFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FFC4u;
        // 0x16ffc8: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FFCCu;
        goto label_16ffcc;
    }
    ctx->pc = 0x16FFC4u;
    SET_GPR_U32(ctx, 31, 0x16FFCCu);
    ctx->pc = 0x16FFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FFC4u;
    // 0x16ffc8: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1711E0u;
    { ctx->pc = 0x1711e0; return; }
    ctx->pc = 0x16FFCCu;
label_16ffcc:
    // 0x16ffcc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16ffccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16ffd0:
    // 0x16ffd0: 0x2e030002  sltiu       $v1, $s0, 0x2
    ctx->pc = 0x16ffd0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_16ffd4:
    // 0x16ffd4: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_16ffd8:
    if (ctx->pc == 0x16FFD8u) {
        ctx->pc = 0x16FFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FFD4u;
        // 0x16ffd8: 0x26310022  addiu       $s1, $s1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FFDCu;
        goto label_16ffdc;
    }
    ctx->pc = 0x16FFD4u;
    {
        const bool branch_taken_0x16ffd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16FFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FFD4u;
        // 0x16ffd8: 0x26310022  addiu       $s1, $s1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ffd4) {
            ctx->pc = 0x16FFBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ffbc;
        }
    }
    ctx->pc = 0x16FFDCu;
label_16ffdc:
    // 0x16ffdc: 0x8f838734  lw          $v1, -0x78CC($gp)
    ctx->pc = 0x16ffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936372)));
label_16ffe0:
    // 0x16ffe0: 0xaf808730  sw          $zero, -0x78D0($gp)
    ctx->pc = 0x16ffe0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936368), GPR_U32(ctx, 0));
label_16ffe4:
    // 0x16ffe4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16ffe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16ffe8:
    // 0x16ffe8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_16ffec:
    if (ctx->pc == 0x16FFECu) {
        ctx->pc = 0x16FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FFE8u;
        // 0x16ffec: 0x30700001  andi        $s0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FFF0u;
        goto label_16fff0;
    }
    ctx->pc = 0x16FFE8u;
    {
        const bool branch_taken_0x16ffe8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x16FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FFE8u;
        // 0x16ffec: 0x30700001  andi        $s0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ffe8) {
            ctx->pc = 0x16FFFCu;
            goto label_16fffc;
        }
    }
    ctx->pc = 0x16FFF0u;
label_16fff0:
    // 0x16fff0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_16fff4:
    if (ctx->pc == 0x16FFF4u) {
        ctx->pc = 0x16FFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FFF0u;
        // 0x16fff4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FFF8u;
        goto label_16fff8;
    }
    ctx->pc = 0x16FFF0u;
    {
        const bool branch_taken_0x16fff0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FFF0u;
        // 0x16fff4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fff0) {
            ctx->pc = 0x170000u;
            goto label_170000;
        }
    }
    ctx->pc = 0x16FFF8u;
label_16fff8:
    // 0x16fff8: 0x2610fffe  addiu       $s0, $s0, -0x2
    ctx->pc = 0x16fff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
label_16fffc:
    // 0x16fffc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16fffcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170000:
    // 0x170000: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x170000u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170004:
    // 0x170004: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x170004u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170008:
    // 0x170008: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x170008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_17000c:
    // 0x17000c: 0x26070001  addiu       $a3, $s0, 0x1
    ctx->pc = 0x17000cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_170010:
    // 0x170010: 0x24634100  addiu       $v1, $v1, 0x4100
    ctx->pc = 0x170010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16640));
label_170014:
    // 0x170014: 0xe0082a  slt         $at, $a3, $zero
    ctx->pc = 0x170014u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_170018:
    // 0x170018: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x170018u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17001c:
    // 0x17001c: 0x14200036  bnez        $at, . + 4 + (0x36 << 2)
label_170020:
    if (ctx->pc == 0x170020u) {
        ctx->pc = 0x170020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17001Cu;
        // 0x170020: 0x73b021  addu        $s6, $v1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170024u;
        goto label_170024;
    }
    ctx->pc = 0x17001Cu;
    {
        const bool branch_taken_0x17001c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x170020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17001Cu;
        // 0x170020: 0x73b021  addu        $s6, $v1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17001c) {
            ctx->pc = 0x1700F8u;
            goto label_1700f8;
        }
    }
    ctx->pc = 0x170024u;
label_170024:
    // 0x170024: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x170024u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170028:
    // 0x170028: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x170028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_17002c:
    // 0x17002c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x17002cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_170030:
    // 0x170030: 0x2cb1821  addu        $v1, $s6, $t3
    ctx->pc = 0x170030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 11)));
label_170034:
    // 0x170034: 0x246a0130  addiu       $t2, $v1, 0x130
    ctx->pc = 0x170034u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
label_170038:
    // 0x170038: 0x90630131  lbu         $v1, 0x131($v1)
    ctx->pc = 0x170038u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 305)));
label_17003c:
    // 0x17003c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x17003cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_170040:
    // 0x170040: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x170040u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_170044:
    // 0x170044: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_170048:
    if (ctx->pc == 0x170048u) {
        ctx->pc = 0x17004Cu;
        goto label_17004c;
    }
    ctx->pc = 0x170044u;
    {
        const bool branch_taken_0x170044 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x170044) {
            ctx->pc = 0x17005Cu;
            goto label_17005c;
        }
    }
    ctx->pc = 0x17004Cu;
label_17004c:
    // 0x17004c: 0xa1460004  sb          $a2, 0x4($t2)
    ctx->pc = 0x17004cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 4), (uint8_t)GPR_U32(ctx, 6));
label_170050:
    // 0x170050: 0xa1460005  sb          $a2, 0x5($t2)
    ctx->pc = 0x170050u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 5), (uint8_t)GPR_U32(ctx, 6));
label_170054:
    // 0x170054: 0xa1460006  sb          $a2, 0x6($t2)
    ctx->pc = 0x170054u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 6), (uint8_t)GPR_U32(ctx, 6));
label_170058:
    // 0x170058: 0xa1460007  sb          $a2, 0x7($t2)
    ctx->pc = 0x170058u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 7), (uint8_t)GPR_U32(ctx, 6));
label_17005c:
    // 0x17005c: 0x0  nop
    ctx->pc = 0x17005cu;
    // NOP
label_170060:
    // 0x170060: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x170060u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_170064:
    // 0x170064: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_170068:
    if (ctx->pc == 0x170068u) {
        ctx->pc = 0x17006Cu;
        goto label_17006c;
    }
    ctx->pc = 0x170064u;
    {
        const bool branch_taken_0x170064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x170064) {
            ctx->pc = 0x1700E4u;
            goto label_1700e4;
        }
    }
    ctx->pc = 0x17006Cu;
label_17006c:
    // 0x17006c: 0xa5450002  sh          $a1, 0x2($t2)
    ctx->pc = 0x17006cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
label_170070:
    // 0x170070: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x170070u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170074:
    // 0x170074: 0xa1460004  sb          $a2, 0x4($t2)
    ctx->pc = 0x170074u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 4), (uint8_t)GPR_U32(ctx, 6));
label_170078:
    // 0x170078: 0xa1460005  sb          $a2, 0x5($t2)
    ctx->pc = 0x170078u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 5), (uint8_t)GPR_U32(ctx, 6));
label_17007c:
    // 0x17007c: 0xa1460006  sb          $a2, 0x6($t2)
    ctx->pc = 0x17007cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 6), (uint8_t)GPR_U32(ctx, 6));
label_170080:
    // 0x170080: 0xa1460007  sb          $a2, 0x7($t2)
    ctx->pc = 0x170080u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 7), (uint8_t)GPR_U32(ctx, 6));
label_170084:
    // 0x170084: 0x0  nop
    ctx->pc = 0x170084u;
    // NOP
label_170088:
    // 0x170088: 0x1492021  addu        $a0, $t2, $t1
    ctx->pc = 0x170088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_17008c:
    // 0x17008c: 0xa0800008  sb          $zero, 0x8($a0)
    ctx->pc = 0x17008cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
label_170090:
    // 0x170090: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x170090u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_170094:
    // 0x170094: 0xa0800009  sb          $zero, 0x9($a0)
    ctx->pc = 0x170094u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 0));
label_170098:
    // 0x170098: 0x29230004  slti        $v1, $t1, 0x4
    ctx->pc = 0x170098u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4) ? 1 : 0);
label_17009c:
    // 0x17009c: 0xa080000a  sb          $zero, 0xA($a0)
    ctx->pc = 0x17009cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 0));
label_1700a0:
    // 0x1700a0: 0xa080000b  sb          $zero, 0xB($a0)
    ctx->pc = 0x1700a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 0));
label_1700a4:
    // 0x1700a4: 0xa080000c  sb          $zero, 0xC($a0)
    ctx->pc = 0x1700a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 0));
label_1700a8:
    // 0x1700a8: 0xa080000d  sb          $zero, 0xD($a0)
    ctx->pc = 0x1700a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 0));
label_1700ac:
    // 0x1700ac: 0xa080000e  sb          $zero, 0xE($a0)
    ctx->pc = 0x1700acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 0));
label_1700b0:
    // 0x1700b0: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_1700b4:
    if (ctx->pc == 0x1700B4u) {
        ctx->pc = 0x1700B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1700B0u;
        // 0x1700b4: 0xa080000f  sb          $zero, 0xF($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1700B8u;
        goto label_1700b8;
    }
    ctx->pc = 0x1700B0u;
    {
        const bool branch_taken_0x1700b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1700B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1700B0u;
        // 0x1700b4: 0xa080000f  sb          $zero, 0xF($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1700b0) {
            ctx->pc = 0x170084u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170084;
        }
    }
    ctx->pc = 0x1700B8u;
label_1700b8:
    // 0x1700b8: 0x2921000c  slti        $at, $t1, 0xC
    ctx->pc = 0x1700b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)12) ? 1 : 0);
label_1700bc:
    // 0x1700bc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1700c0:
    if (ctx->pc == 0x1700C0u) {
        ctx->pc = 0x1700C4u;
        goto label_1700c4;
    }
    ctx->pc = 0x1700BCu;
    {
        const bool branch_taken_0x1700bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1700bc) {
            ctx->pc = 0x1700E4u;
            goto label_1700e4;
        }
    }
    ctx->pc = 0x1700C4u;
label_1700c4:
    // 0x1700c4: 0x0  nop
    ctx->pc = 0x1700c4u;
    // NOP
label_1700c8:
    // 0x1700c8: 0x1491821  addu        $v1, $t2, $t1
    ctx->pc = 0x1700c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_1700cc:
    // 0x1700cc: 0xa0600008  sb          $zero, 0x8($v1)
    ctx->pc = 0x1700ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 0));
label_1700d0:
    // 0x1700d0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1700d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1700d4:
    // 0x1700d4: 0x2923000c  slti        $v1, $t1, 0xC
    ctx->pc = 0x1700d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)12) ? 1 : 0);
label_1700d8:
    // 0x1700d8: 0x0  nop
    ctx->pc = 0x1700d8u;
    // NOP
label_1700dc:
    // 0x1700dc: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_1700e0:
    if (ctx->pc == 0x1700E0u) {
        ctx->pc = 0x1700E4u;
        goto label_1700e4;
    }
    ctx->pc = 0x1700DCu;
    {
        const bool branch_taken_0x1700dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1700dc) {
            ctx->pc = 0x1700C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1700c4;
        }
    }
    ctx->pc = 0x1700E4u;
label_1700e4:
    // 0x1700e4: 0x0  nop
    ctx->pc = 0x1700e4u;
    // NOP
label_1700e8:
    // 0x1700e8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1700e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1700ec:
    // 0x1700ec: 0xe8082a  slt         $at, $a3, $t0
    ctx->pc = 0x1700ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1700f0:
    // 0x1700f0: 0x1020ffcf  beqz        $at, . + 4 + (-0x31 << 2)
label_1700f4:
    if (ctx->pc == 0x1700F4u) {
        ctx->pc = 0x1700F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1700F0u;
        // 0x1700f4: 0x256b0020  addiu       $t3, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1700F8u;
        goto label_1700f8;
    }
    ctx->pc = 0x1700F0u;
    {
        const bool branch_taken_0x1700f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1700F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1700F0u;
        // 0x1700f4: 0x256b0020  addiu       $t3, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1700f0) {
            ctx->pc = 0x170030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170030;
        }
    }
    ctx->pc = 0x1700F8u;
label_1700f8:
    // 0x1700f8: 0x200082a  slt         $at, $s0, $zero
    ctx->pc = 0x1700f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1700fc:
    // 0x1700fc: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
label_170100:
    if (ctx->pc == 0x170100u) {
        ctx->pc = 0x170100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1700FCu;
        // 0x170100: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170104u;
        goto label_170104;
    }
    ctx->pc = 0x1700FCu;
    {
        const bool branch_taken_0x1700fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x170100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1700FCu;
        // 0x170100: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1700fc) {
            ctx->pc = 0x170144u;
            goto label_170144;
        }
    }
    ctx->pc = 0x170104u;
label_170104:
    // 0x170104: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x170104u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170108:
    // 0x170108: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x170108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_17010c:
    // 0x17010c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17010cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_170110:
    // 0x170110: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x170110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_170114:
    // 0x170114: 0x2d21021  addu        $v0, $s6, $s2
    ctx->pc = 0x170114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_170118:
    // 0x170118: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x170118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_17011c:
    // 0x17011c: 0x24450130  addiu       $a1, $v0, 0x130
    ctx->pc = 0x17011cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
label_170120:
    // 0x170120: 0x24640130  addiu       $a0, $v1, 0x130
    ctx->pc = 0x170120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
label_170124:
    // 0x170124: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x170124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_170128:
    // 0x170128: 0x24424530  addiu       $v0, $v0, 0x4530
    ctx->pc = 0x170128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17712));
label_17012c:
    // 0x17012c: 0xc05c064  jal         func_170190
label_170130:
    if (ctx->pc == 0x170130u) {
        ctx->pc = 0x170130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17012Cu;
        // 0x170130: 0x543821  addu        $a3, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170134u;
        goto label_170134;
    }
    ctx->pc = 0x17012Cu;
    SET_GPR_U32(ctx, 31, 0x170134u);
    ctx->pc = 0x170130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17012Cu;
    // 0x170130: 0x543821  addu        $a3, $v0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170190u;
    goto label_170190;
    ctx->pc = 0x170134u;
label_170134:
    // 0x170134: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x170134u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_170138:
    // 0x170138: 0x215082a  slt         $at, $s0, $s5
    ctx->pc = 0x170138u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_17013c:
    // 0x17013c: 0x1020fff2  beqz        $at, . + 4 + (-0xE << 2)
label_170140:
    if (ctx->pc == 0x170140u) {
        ctx->pc = 0x170140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17013Cu;
        // 0x170140: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170144u;
        goto label_170144;
    }
    ctx->pc = 0x17013Cu;
    {
        const bool branch_taken_0x17013c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x170140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17013Cu;
        // 0x170140: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17013c) {
            ctx->pc = 0x170108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170108;
        }
    }
    ctx->pc = 0x170144u;
label_170144:
    // 0x170144: 0x0  nop
    ctx->pc = 0x170144u;
    // NOP
label_170148:
    // 0x170148: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x170148u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_17014c:
    // 0x17014c: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x17014cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_170150:
    // 0x170150: 0x267301c0  addiu       $s3, $s3, 0x1C0
    ctx->pc = 0x170150u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 448));
label_170154:
    // 0x170154: 0x1460ffac  bnez        $v1, . + 4 + (-0x54 << 2)
label_170158:
    if (ctx->pc == 0x170158u) {
        ctx->pc = 0x170158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170154u;
        // 0x170158: 0x26940022  addiu       $s4, $s4, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17015Cu;
        goto label_17015c;
    }
    ctx->pc = 0x170154u;
    {
        const bool branch_taken_0x170154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x170158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170154u;
        // 0x170158: 0x26940022  addiu       $s4, $s4, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170154) {
            ctx->pc = 0x170008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170008;
        }
    }
    ctx->pc = 0x17015Cu;
label_17015c:
    // 0x17015c: 0xaf808734  sw          $zero, -0x78CC($gp)
    ctx->pc = 0x17015cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936372), GPR_U32(ctx, 0));
label_170160:
    // 0x170160: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x170160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_170164:
    // 0x170164: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x170164u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_170168:
    // 0x170168: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x170168u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_17016c:
    // 0x17016c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17016cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_170170:
    // 0x170170: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x170170u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_170174:
    // 0x170174: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x170174u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_170178:
    // 0x170178: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x170178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17017c:
    // 0x17017c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17017cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_170180:
    // 0x170180: 0x3e00008  jr          $ra
label_170184:
    if (ctx->pc == 0x170184u) {
        ctx->pc = 0x170184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170180u;
        // 0x170184: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170188u;
        goto label_170188;
    }
    ctx->pc = 0x170180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170180u;
        // 0x170184: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170188u;
label_170188:
    // 0x170188: 0x0  nop
    ctx->pc = 0x170188u;
    // NOP
label_17018c:
    // 0x17018c: 0x0  nop
    ctx->pc = 0x17018cu;
    // NOP
label_170190:
    // 0x170190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x170190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_170194:
    // 0x170194: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x170194u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170198:
    // 0x170198: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x170198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17019c:
    // 0x17019c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17019cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1701a0:
    // 0x1701a0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1701a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1701a4:
    // 0x1701a4: 0x894021  addu        $t0, $a0, $t1
    ctx->pc = 0x1701a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_1701a8:
    // 0x1701a8: 0x2093821  addu        $a3, $s0, $t1
    ctx->pc = 0x1701a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
label_1701ac:
    // 0x1701ac: 0x91030008  lbu         $v1, 0x8($t0)
    ctx->pc = 0x1701acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 8)));
label_1701b0:
    // 0x1701b0: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x1701b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_1701b4:
    // 0x1701b4: 0x29220004  slti        $v0, $t1, 0x4
    ctx->pc = 0x1701b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4) ? 1 : 0);
label_1701b8:
    // 0x1701b8: 0xa0e30015  sb          $v1, 0x15($a3)
    ctx->pc = 0x1701b8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 21), (uint8_t)GPR_U32(ctx, 3));
label_1701bc:
    // 0x1701bc: 0x91030009  lbu         $v1, 0x9($t0)
    ctx->pc = 0x1701bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 9)));
label_1701c0:
    // 0x1701c0: 0xa0e30016  sb          $v1, 0x16($a3)
    ctx->pc = 0x1701c0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 22), (uint8_t)GPR_U32(ctx, 3));
label_1701c4:
    // 0x1701c4: 0x9103000a  lbu         $v1, 0xA($t0)
    ctx->pc = 0x1701c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 10)));
label_1701c8:
    // 0x1701c8: 0xa0e30017  sb          $v1, 0x17($a3)
    ctx->pc = 0x1701c8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 23), (uint8_t)GPR_U32(ctx, 3));
label_1701cc:
    // 0x1701cc: 0x9103000b  lbu         $v1, 0xB($t0)
    ctx->pc = 0x1701ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 11)));
label_1701d0:
    // 0x1701d0: 0xa0e30018  sb          $v1, 0x18($a3)
    ctx->pc = 0x1701d0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 24), (uint8_t)GPR_U32(ctx, 3));
label_1701d4:
    // 0x1701d4: 0x9103000c  lbu         $v1, 0xC($t0)
    ctx->pc = 0x1701d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 12)));
label_1701d8:
    // 0x1701d8: 0xa0e30019  sb          $v1, 0x19($a3)
    ctx->pc = 0x1701d8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 25), (uint8_t)GPR_U32(ctx, 3));
label_1701dc:
    // 0x1701dc: 0x9103000d  lbu         $v1, 0xD($t0)
    ctx->pc = 0x1701dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 13)));
label_1701e0:
    // 0x1701e0: 0xa0e3001a  sb          $v1, 0x1A($a3)
    ctx->pc = 0x1701e0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 26), (uint8_t)GPR_U32(ctx, 3));
label_1701e4:
    // 0x1701e4: 0x9103000e  lbu         $v1, 0xE($t0)
    ctx->pc = 0x1701e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 14)));
label_1701e8:
    // 0x1701e8: 0xa0e3001b  sb          $v1, 0x1B($a3)
    ctx->pc = 0x1701e8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 27), (uint8_t)GPR_U32(ctx, 3));
label_1701ec:
    // 0x1701ec: 0x9103000f  lbu         $v1, 0xF($t0)
    ctx->pc = 0x1701ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 15)));
label_1701f0:
    // 0x1701f0: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_1701f4:
    if (ctx->pc == 0x1701F4u) {
        ctx->pc = 0x1701F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1701F0u;
        // 0x1701f4: 0xa0e3001c  sb          $v1, 0x1C($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 28), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1701F8u;
        goto label_1701f8;
    }
    ctx->pc = 0x1701F0u;
    {
        const bool branch_taken_0x1701f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1701F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1701F0u;
        // 0x1701f4: 0xa0e3001c  sb          $v1, 0x1C($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 28), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1701f0) {
            ctx->pc = 0x1701A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1701a4;
        }
    }
    ctx->pc = 0x1701F8u;
label_1701f8:
    // 0x1701f8: 0x2921000c  slti        $at, $t1, 0xC
    ctx->pc = 0x1701f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)12) ? 1 : 0);
label_1701fc:
    // 0x1701fc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_170200:
    if (ctx->pc == 0x170200u) {
        ctx->pc = 0x170204u;
        goto label_170204;
    }
    ctx->pc = 0x1701FCu;
    {
        const bool branch_taken_0x1701fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1701fc) {
            ctx->pc = 0x170224u;
            goto label_170224;
        }
    }
    ctx->pc = 0x170204u;
label_170204:
    // 0x170204: 0x891021  addu        $v0, $a0, $t1
    ctx->pc = 0x170204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_170208:
    // 0x170208: 0x2091821  addu        $v1, $s0, $t1
    ctx->pc = 0x170208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
label_17020c:
    // 0x17020c: 0x90470008  lbu         $a3, 0x8($v0)
    ctx->pc = 0x17020cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_170210:
    // 0x170210: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x170210u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_170214:
    // 0x170214: 0x2922000c  slti        $v0, $t1, 0xC
    ctx->pc = 0x170214u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)12) ? 1 : 0);
label_170218:
    // 0x170218: 0xa0670015  sb          $a3, 0x15($v1)
    ctx->pc = 0x170218u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 21), (uint8_t)GPR_U32(ctx, 7));
label_17021c:
    // 0x17021c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_170220:
    if (ctx->pc == 0x170220u) {
        ctx->pc = 0x170224u;
        goto label_170224;
    }
    ctx->pc = 0x17021Cu;
    {
        const bool branch_taken_0x17021c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17021c) {
            ctx->pc = 0x170204u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170204;
        }
    }
    ctx->pc = 0x170224u;
label_170224:
    // 0x170224: 0x0  nop
    ctx->pc = 0x170224u;
    // NOP
label_170228:
    // 0x170228: 0x94870002  lhu         $a3, 0x2($a0)
    ctx->pc = 0x170228u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_17022c:
    // 0x17022c: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x17022cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_170230:
    // 0x170230: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x170230u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_170234:
    // 0x170234: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x170234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
label_170238:
    // 0x170238: 0xe83826  xor         $a3, $a3, $t0
    ctx->pc = 0x170238u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 8));
label_17023c:
    // 0x17023c: 0x30eaffff  andi        $t2, $a3, 0xFFFF
    ctx->pc = 0x17023cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_170240:
    // 0x170240: 0x3863ffff  xori        $v1, $v1, 0xFFFF
    ctx->pc = 0x170240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65535);
label_170244:
    // 0x170244: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x170244u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_170248:
    // 0x170248: 0x38e3ffff  xori        $v1, $a3, 0xFFFF
    ctx->pc = 0x170248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)65535);
label_17024c:
    // 0x17024c: 0x1431824  and         $v1, $t2, $v1
    ctx->pc = 0x17024cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
label_170250:
    // 0x170250: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_170254:
    if (ctx->pc == 0x170254u) {
        ctx->pc = 0x170254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170250u;
        // 0x170254: 0x3068ffff  andi        $t0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x170258u;
        goto label_170258;
    }
    ctx->pc = 0x170250u;
    {
        const bool branch_taken_0x170250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170250u;
        // 0x170254: 0x3068ffff  andi        $t0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170250) {
            ctx->pc = 0x17029Cu;
            goto label_17029c;
        }
    }
    ctx->pc = 0x170258u;
label_170258:
    // 0x170258: 0x31420001  andi        $v0, $t2, 0x1
    ctx->pc = 0x170258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
label_17025c:
    // 0x17025c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17025cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_170260:
    // 0x170260: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_170264:
    if (ctx->pc == 0x170264u) {
        ctx->pc = 0x170268u;
        goto label_170268;
    }
    ctx->pc = 0x170260u;
    {
        const bool branch_taken_0x170260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170260) {
            ctx->pc = 0x170274u;
            goto label_170274;
        }
    }
    ctx->pc = 0x170268u;
label_170268:
    // 0x170268: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x170268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_17026c:
    // 0x17026c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x17026cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_170270:
    // 0x170270: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x170270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_170274:
    // 0x170274: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_170278:
    if (ctx->pc == 0x170278u) {
        ctx->pc = 0x17027Cu;
        goto label_17027c;
    }
    ctx->pc = 0x170274u;
    {
        const bool branch_taken_0x170274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170274) {
            ctx->pc = 0x170298u;
            goto label_170298;
        }
    }
    ctx->pc = 0x17027Cu;
label_17027c:
    // 0x17027c: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x17027cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_170280:
    // 0x170280: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x170280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_170284:
    // 0x170284: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x170284u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_170288:
    // 0x170288: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_17028c:
    if (ctx->pc == 0x17028Cu) {
        ctx->pc = 0x170290u;
        goto label_170290;
    }
    ctx->pc = 0x170288u;
    {
        const bool branch_taken_0x170288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170288) {
            ctx->pc = 0x170298u;
            goto label_170298;
        }
    }
    ctx->pc = 0x170290u;
label_170290:
    // 0x170290: 0x31420008  andi        $v0, $t2, 0x8
    ctx->pc = 0x170290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)8);
label_170294:
    // 0x170294: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x170294u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_170298:
    // 0x170298: 0xaf828730  sw          $v0, -0x78D0($gp)
    ctx->pc = 0x170298u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936368), GPR_U32(ctx, 2));
label_17029c:
    // 0x17029c: 0x1471024  and         $v0, $t2, $a3
    ctx->pc = 0x17029cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
label_1702a0:
    // 0x1702a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1702a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1702a4:
    // 0x1702a4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1702a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1702a8:
    // 0x1702a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1702a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1702ac:
    // 0x1702ac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1702acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1702b0:
    // 0x1702b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1702b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1702b4:
    // 0x1702b4: 0xe37004  sllv        $t6, $v1, $a3
    ctx->pc = 0x1702b4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
label_1702b8:
    // 0x1702b8: 0x4e5824  and         $t3, $v0, $t6
    ctx->pc = 0x1702b8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
label_1702bc:
    // 0x1702bc: 0x1160001d  beqz        $t3, . + 4 + (0x1D << 2)
label_1702c0:
    if (ctx->pc == 0x1702C0u) {
        ctx->pc = 0x1702C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1702BCu;
        // 0x1702c0: 0xc77821  addu        $t7, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1702C4u;
        goto label_1702c4;
    }
    ctx->pc = 0x1702BCu;
    {
        const bool branch_taken_0x1702bc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x1702C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1702BCu;
        // 0x1702c0: 0xc77821  addu        $t7, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1702bc) {
            ctx->pc = 0x170334u;
            goto label_170334;
        }
    }
    ctx->pc = 0x1702C4u;
label_1702c4:
    // 0x1702c4: 0x8f8c8740  lw          $t4, -0x78C0($gp)
    ctx->pc = 0x1702c4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936384)));
label_1702c8:
    // 0x1702c8: 0x91eb0100  lbu         $t3, 0x100($t7)
    ctx->pc = 0x1702c8u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 256)));
label_1702cc:
    // 0x1702cc: 0x16c082b  sltu        $at, $t3, $t4
    ctx->pc = 0x1702ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
label_1702d0:
    // 0x1702d0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_1702d4:
    if (ctx->pc == 0x1702D4u) {
        ctx->pc = 0x1702D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1702D0u;
        // 0x1702d4: 0x25ed0100  addiu       $t5, $t7, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1702D8u;
        goto label_1702d8;
    }
    ctx->pc = 0x1702D0u;
    {
        const bool branch_taken_0x1702d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1702D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1702D0u;
        // 0x1702d4: 0x25ed0100  addiu       $t5, $t7, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1702d0) {
            ctx->pc = 0x170300u;
            goto label_170300;
        }
    }
    ctx->pc = 0x1702D8u;
label_1702d8:
    // 0x1702d8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1702d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1702dc:
    // 0x1702dc: 0xa1ab0000  sb          $t3, 0x0($t5)
    ctx->pc = 0x1702dcu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 11));
label_1702e0:
    // 0x1702e0: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x1702e0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
label_1702e4:
    // 0x1702e4: 0x16c582b  sltu        $t3, $t3, $t4
    ctx->pc = 0x1702e4u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
label_1702e8:
    // 0x1702e8: 0x15600016  bnez        $t3, . + 4 + (0x16 << 2)
label_1702ec:
    if (ctx->pc == 0x1702ECu) {
        ctx->pc = 0x1702F0u;
        goto label_1702f0;
    }
    ctx->pc = 0x1702E8u;
    {
        const bool branch_taken_0x1702e8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x1702e8) {
            ctx->pc = 0x170344u;
            goto label_170344;
        }
    }
    ctx->pc = 0x1702F0u;
label_1702f0:
    // 0x1702f0: 0x31cbffff  andi        $t3, $t6, 0xFFFF
    ctx->pc = 0x1702f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65535);
label_1702f4:
    // 0x1702f4: 0x12b4825  or          $t1, $t1, $t3
    ctx->pc = 0x1702f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
label_1702f8:
    // 0x1702f8: 0x10000012  b           . + 4 + (0x12 << 2)
label_1702fc:
    if (ctx->pc == 0x1702FCu) {
        ctx->pc = 0x1702FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1702F8u;
        // 0x1702fc: 0x3129ffff  andi        $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x170300u;
        goto label_170300;
    }
    ctx->pc = 0x1702F8u;
    {
        const bool branch_taken_0x1702f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1702FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1702F8u;
        // 0x1702fc: 0x3129ffff  andi        $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1702f8) {
            ctx->pc = 0x170344u;
            goto label_170344;
        }
    }
    ctx->pc = 0x170300u;
label_170300:
    // 0x170300: 0x91eb0110  lbu         $t3, 0x110($t7)
    ctx->pc = 0x170300u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 272)));
label_170304:
    // 0x170304: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x170304u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_170308:
    // 0x170308: 0xa1eb0110  sb          $t3, 0x110($t7)
    ctx->pc = 0x170308u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 272), (uint8_t)GPR_U32(ctx, 11));
label_17030c:
    // 0x17030c: 0x316c00ff  andi        $t4, $t3, 0xFF
    ctx->pc = 0x17030cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
label_170310:
    // 0x170310: 0x8f8b873c  lw          $t3, -0x78C4($gp)
    ctx->pc = 0x170310u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936380)));
label_170314:
    // 0x170314: 0x18b582b  sltu        $t3, $t4, $t3
    ctx->pc = 0x170314u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
label_170318:
    // 0x170318: 0x1560000a  bnez        $t3, . + 4 + (0xA << 2)
label_17031c:
    if (ctx->pc == 0x17031Cu) {
        ctx->pc = 0x17031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170318u;
        // 0x17031c: 0x25ed0110  addiu       $t5, $t7, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170320u;
        goto label_170320;
    }
    ctx->pc = 0x170318u;
    {
        const bool branch_taken_0x170318 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x17031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170318u;
        // 0x17031c: 0x25ed0110  addiu       $t5, $t7, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170318) {
            ctx->pc = 0x170344u;
            goto label_170344;
        }
    }
    ctx->pc = 0x170320u;
label_170320:
    // 0x170320: 0x31cbffff  andi        $t3, $t6, 0xFFFF
    ctx->pc = 0x170320u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65535);
label_170324:
    // 0x170324: 0xa1a00000  sb          $zero, 0x0($t5)
    ctx->pc = 0x170324u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 0));
label_170328:
    // 0x170328: 0x12b4825  or          $t1, $t1, $t3
    ctx->pc = 0x170328u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
label_17032c:
    // 0x17032c: 0x10000005  b           . + 4 + (0x5 << 2)
label_170330:
    if (ctx->pc == 0x170330u) {
        ctx->pc = 0x170330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17032Cu;
        // 0x170330: 0x3129ffff  andi        $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x170334u;
        goto label_170334;
    }
    ctx->pc = 0x17032Cu;
    {
        const bool branch_taken_0x17032c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17032Cu;
        // 0x170330: 0x3129ffff  andi        $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17032c) {
            ctx->pc = 0x170344u;
            goto label_170344;
        }
    }
    ctx->pc = 0x170334u;
label_170334:
    // 0x170334: 0x0  nop
    ctx->pc = 0x170334u;
    // NOP
label_170338:
    // 0x170338: 0xc75821  addu        $t3, $a2, $a3
    ctx->pc = 0x170338u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_17033c:
    // 0x17033c: 0xa1600100  sb          $zero, 0x100($t3)
    ctx->pc = 0x17033cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 256), (uint8_t)GPR_U32(ctx, 0));
label_170340:
    // 0x170340: 0xa1600110  sb          $zero, 0x110($t3)
    ctx->pc = 0x170340u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 272), (uint8_t)GPR_U32(ctx, 0));
label_170344:
    // 0x170344: 0x0  nop
    ctx->pc = 0x170344u;
    // NOP
label_170348:
    // 0x170348: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x170348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_17034c:
    // 0x17034c: 0x28eb0010  slti        $t3, $a3, 0x10
    ctx->pc = 0x17034cu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
label_170350:
    // 0x170350: 0x1560ffd9  bnez        $t3, . + 4 + (-0x27 << 2)
label_170354:
    if (ctx->pc == 0x170354u) {
        ctx->pc = 0x170354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170350u;
        // 0x170354: 0xe37004  sllv        $t6, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170358u;
        goto label_170358;
    }
    ctx->pc = 0x170350u;
    {
        const bool branch_taken_0x170350 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x170354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170350u;
        // 0x170354: 0xe37004  sllv        $t6, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170350) {
            ctx->pc = 0x1702B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1702b8;
        }
    }
    ctx->pc = 0x170358u;
label_170358:
    // 0x170358: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x170358u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_17035c:
    // 0x17035c: 0x1281825  or          $v1, $t1, $t0
    ctx->pc = 0x17035cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
label_170360:
    // 0x170360: 0x3069ffff  andi        $t1, $v1, 0xFFFF
    ctx->pc = 0x170360u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_170364:
    // 0x170364: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x170364u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170368:
    // 0x170368: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x170368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_17036c:
    // 0x17036c: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x17036cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_170370:
    // 0x170370: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x170370u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_170374:
    // 0x170374: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x170374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
label_170378:
    // 0x170378: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x170378u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
label_17037c:
    // 0x17037c: 0xc05c100  jal         func_170400
label_170380:
    if (ctx->pc == 0x170380u) {
        ctx->pc = 0x170380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17037Cu;
        // 0x170380: 0xa60a0000  sh          $t2, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170384u;
        goto label_170384;
    }
    ctx->pc = 0x17037Cu;
    SET_GPR_U32(ctx, 31, 0x170384u);
    ctx->pc = 0x170380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17037Cu;
    // 0x170380: 0xa60a0000  sh          $t2, 0x0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170400u;
    goto label_170400;
    ctx->pc = 0x170384u;
label_170384:
    // 0x170384: 0x92030007  lbu         $v1, 0x7($s0)
    ctx->pc = 0x170384u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
label_170388:
    // 0x170388: 0x92050006  lbu         $a1, 0x6($s0)
    ctx->pc = 0x170388u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
label_17038c:
    // 0x17038c: 0x92070008  lbu         $a3, 0x8($s0)
    ctx->pc = 0x17038cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_170390:
    // 0x170390: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x170390u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_170394:
    // 0x170394: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x170394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_170398:
    // 0x170398: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x170398u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_17039c:
    // 0x17039c: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x17039cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
label_1703a0:
    // 0x1703a0: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x1703a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_1703a4:
    // 0x1703a4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1703a4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_1703a8:
    // 0x1703a8: 0x71c3c  dsll32      $v1, $a3, 16
    ctx->pc = 0x1703a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 16));
label_1703ac:
    // 0x1703ac: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1703acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1703b0:
    // 0x1703b0: 0x30a7000f  andi        $a3, $a1, 0xF
    ctx->pc = 0x1703b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
label_1703b4:
    // 0x1703b4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1703b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1703b8:
    // 0x1703b8: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x1703b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1703bc:
    // 0x1703bc: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1703bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_1703c0:
    // 0x1703c0: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x1703c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1703c4:
    // 0x1703c4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1703c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1703c8:
    // 0x1703c8: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x1703c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1703cc:
    // 0x1703cc: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x1703ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_1703d0:
    // 0x1703d0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1703d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1703d4:
    // 0x1703d4: 0xa6060000  sh          $a2, 0x0($s0)
    ctx->pc = 0x1703d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 6));
label_1703d8:
    // 0x1703d8: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x1703d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_1703dc:
    // 0x1703dc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1703dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_1703e0:
    // 0x1703e0: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x1703e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
label_1703e4:
    // 0x1703e4: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x1703e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_1703e8:
    // 0x1703e8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1703e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1703ec:
    // 0x1703ec: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x1703ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
label_1703f0:
    // 0x1703f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1703f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1703f4:
    // 0x1703f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1703f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1703f8:
    // 0x1703f8: 0x3e00008  jr          $ra
label_1703fc:
    if (ctx->pc == 0x1703FCu) {
        ctx->pc = 0x1703FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1703F8u;
        // 0x1703fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170400u;
        goto label_170400;
    }
    ctx->pc = 0x1703F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1703FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1703F8u;
        // 0x1703fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1703F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170400u;
label_170400:
    // 0x170400: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x170400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_170404:
    // 0x170404: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x170404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_170408:
    // 0x170408: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x170408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17040c:
    // 0x17040c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17040cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_170410:
    // 0x170410: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x170410u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_170414:
    // 0x170414: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x170414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_170418:
    // 0x170418: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x170418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17041c:
    // 0x17041c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x17041cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_170420:
    // 0x170420: 0x26050009  addiu       $a1, $s0, 0x9
    ctx->pc = 0x170420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
label_170424:
    // 0x170424: 0xc05c16c  jal         func_1705B0
label_170428:
    if (ctx->pc == 0x170428u) {
        ctx->pc = 0x170428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170424u;
        // 0x170428: 0x26060011  addiu       $a2, $s0, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17042Cu;
        goto label_17042c;
    }
    ctx->pc = 0x170424u;
    SET_GPR_U32(ctx, 31, 0x17042Cu);
    ctx->pc = 0x170428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170424u;
    // 0x170428: 0x26060011  addiu       $a2, $s0, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1705B0u;
    goto label_1705b0;
    ctx->pc = 0x17042Cu;
label_17042c:
    // 0x17042c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17042cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_170430:
    // 0x170430: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x170430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_170434:
    // 0x170434: 0xc05c16c  jal         func_1705B0
label_170438:
    if (ctx->pc == 0x170438u) {
        ctx->pc = 0x170438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170434u;
        // 0x170438: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17043Cu;
        goto label_17043c;
    }
    ctx->pc = 0x170434u;
    SET_GPR_U32(ctx, 31, 0x17043Cu);
    ctx->pc = 0x170438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170434u;
    // 0x170438: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1705B0u;
    goto label_1705b0;
    ctx->pc = 0x17043Cu;
label_17043c:
    // 0x17043c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17043cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170440:
    // 0x170440: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x170440u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170444:
    // 0x170444: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x170444u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170448:
    // 0x170448: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x170448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17044c:
    // 0x17044c: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x17044cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_170450:
    // 0x170450: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x170450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_170454:
    // 0x170454: 0x90630009  lbu         $v1, 0x9($v1)
    ctx->pc = 0x170454u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 9)));
label_170458:
    // 0x170458: 0x28610041  slti        $at, $v1, 0x41
    ctx->pc = 0x170458u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)65) ? 1 : 0);
label_17045c:
    // 0x17045c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_170460:
    if (ctx->pc == 0x170460u) {
        ctx->pc = 0x170460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17045Cu;
        // 0x170460: 0xe61804  sllv        $v1, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170464u;
        goto label_170464;
    }
    ctx->pc = 0x17045Cu;
    {
        const bool branch_taken_0x17045c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x170460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17045Cu;
        // 0x170460: 0xe61804  sllv        $v1, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17045c) {
            ctx->pc = 0x170470u;
            goto label_170470;
        }
    }
    ctx->pc = 0x170464u;
label_170464:
    // 0x170464: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x170464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_170468:
    // 0x170468: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x170468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_17046c:
    // 0x17046c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x17046cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_170470:
    // 0x170470: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x170470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_170474:
    // 0x170474: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x170474u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_170478:
    // 0x170478: 0x28610041  slti        $at, $v1, 0x41
    ctx->pc = 0x170478u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)65) ? 1 : 0);
label_17047c:
    // 0x17047c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_170480:
    if (ctx->pc == 0x170480u) {
        ctx->pc = 0x170480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17047Cu;
        // 0x170480: 0xe61804  sllv        $v1, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170484u;
        goto label_170484;
    }
    ctx->pc = 0x17047Cu;
    {
        const bool branch_taken_0x17047c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x170480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17047Cu;
        // 0x170480: 0xe61804  sllv        $v1, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17047c) {
            ctx->pc = 0x170490u;
            goto label_170490;
        }
    }
    ctx->pc = 0x170484u;
label_170484:
    // 0x170484: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x170484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_170488:
    // 0x170488: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x170488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
label_17048c:
    // 0x17048c: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x17048cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_170490:
    // 0x170490: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x170490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_170494:
    // 0x170494: 0x2ce30008  sltiu       $v1, $a3, 0x8
    ctx->pc = 0x170494u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_170498:
    // 0x170498: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
label_17049c:
    if (ctx->pc == 0x17049Cu) {
        ctx->pc = 0x17049Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170498u;
        // 0x17049c: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1704A0u;
        goto label_1704a0;
    }
    ctx->pc = 0x170498u;
    {
        const bool branch_taken_0x170498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17049Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170498u;
        // 0x17049c: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170498) {
            ctx->pc = 0x170454u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170454;
        }
    }
    ctx->pc = 0x1704A0u;
label_1704a0:
    // 0x1704a0: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x1704a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_1704a4:
    // 0x1704a4: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x1704a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1704a8:
    // 0x1704a8: 0x386400ff  xori        $a0, $v1, 0xFF
    ctx->pc = 0x1704a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)255);
label_1704ac:
    // 0x1704ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1704acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1704b0:
    // 0x1704b0: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1704b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_1704b4:
    // 0x1704b4: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x1704b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_1704b8:
    // 0x1704b8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1704b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1704bc:
    // 0x1704bc: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x1704bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1704c0:
    // 0x1704c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1704c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1704c4:
    // 0x1704c4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1704c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1704c8:
    // 0x1704c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1704c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1704cc:
    // 0x1704cc: 0x1046004  sllv        $t4, $a0, $t0
    ctx->pc = 0x1704ccu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 8) & 0x1F));
label_1704d0:
    // 0x1704d0: 0x6c4824  and         $t1, $v1, $t4
    ctx->pc = 0x1704d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & GPR_U64(ctx, 12));
label_1704d4:
    // 0x1704d4: 0x1120001d  beqz        $t1, . + 4 + (0x1D << 2)
label_1704d8:
    if (ctx->pc == 0x1704D8u) {
        ctx->pc = 0x1704D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1704D4u;
        // 0x1704d8: 0x2286821  addu        $t5, $s1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1704DCu;
        goto label_1704dc;
    }
    ctx->pc = 0x1704D4u;
    {
        const bool branch_taken_0x1704d4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1704D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1704D4u;
        // 0x1704d8: 0x2286821  addu        $t5, $s1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1704d4) {
            ctx->pc = 0x17054Cu;
            goto label_17054c;
        }
    }
    ctx->pc = 0x1704DCu;
label_1704dc:
    // 0x1704dc: 0x8f8a8740  lw          $t2, -0x78C0($gp)
    ctx->pc = 0x1704dcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936384)));
label_1704e0:
    // 0x1704e0: 0x91a90120  lbu         $t1, 0x120($t5)
    ctx->pc = 0x1704e0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 288)));
label_1704e4:
    // 0x1704e4: 0x12a082b  sltu        $at, $t1, $t2
    ctx->pc = 0x1704e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_1704e8:
    // 0x1704e8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_1704ec:
    if (ctx->pc == 0x1704ECu) {
        ctx->pc = 0x1704ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1704E8u;
        // 0x1704ec: 0x25ab0120  addiu       $t3, $t5, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1704F0u;
        goto label_1704f0;
    }
    ctx->pc = 0x1704E8u;
    {
        const bool branch_taken_0x1704e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1704ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1704E8u;
        // 0x1704ec: 0x25ab0120  addiu       $t3, $t5, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1704e8) {
            ctx->pc = 0x170518u;
            goto label_170518;
        }
    }
    ctx->pc = 0x1704F0u;
label_1704f0:
    // 0x1704f0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1704f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1704f4:
    // 0x1704f4: 0xa1690000  sb          $t1, 0x0($t3)
    ctx->pc = 0x1704f4u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 9));
label_1704f8:
    // 0x1704f8: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x1704f8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
label_1704fc:
    // 0x1704fc: 0x12a482b  sltu        $t1, $t1, $t2
    ctx->pc = 0x1704fcu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_170500:
    // 0x170500: 0x15200016  bnez        $t1, . + 4 + (0x16 << 2)
label_170504:
    if (ctx->pc == 0x170504u) {
        ctx->pc = 0x170508u;
        goto label_170508;
    }
    ctx->pc = 0x170500u;
    {
        const bool branch_taken_0x170500 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x170500) {
            ctx->pc = 0x17055Cu;
            goto label_17055c;
        }
    }
    ctx->pc = 0x170508u;
label_170508:
    // 0x170508: 0x318900ff  andi        $t1, $t4, 0xFF
    ctx->pc = 0x170508u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
label_17050c:
    // 0x17050c: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x17050cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
label_170510:
    // 0x170510: 0x10000012  b           . + 4 + (0x12 << 2)
label_170514:
    if (ctx->pc == 0x170514u) {
        ctx->pc = 0x170514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170510u;
        // 0x170514: 0x30e700ff  andi        $a3, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x170518u;
        goto label_170518;
    }
    ctx->pc = 0x170510u;
    {
        const bool branch_taken_0x170510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170510u;
        // 0x170514: 0x30e700ff  andi        $a3, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170510) {
            ctx->pc = 0x17055Cu;
            goto label_17055c;
        }
    }
    ctx->pc = 0x170518u;
label_170518:
    // 0x170518: 0x91a90128  lbu         $t1, 0x128($t5)
    ctx->pc = 0x170518u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 296)));
label_17051c:
    // 0x17051c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x17051cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_170520:
    // 0x170520: 0xa1a90128  sb          $t1, 0x128($t5)
    ctx->pc = 0x170520u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 296), (uint8_t)GPR_U32(ctx, 9));
label_170524:
    // 0x170524: 0x312a00ff  andi        $t2, $t1, 0xFF
    ctx->pc = 0x170524u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
label_170528:
    // 0x170528: 0x8f89873c  lw          $t1, -0x78C4($gp)
    ctx->pc = 0x170528u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936380)));
label_17052c:
    // 0x17052c: 0x149482b  sltu        $t1, $t2, $t1
    ctx->pc = 0x17052cu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_170530:
    // 0x170530: 0x1520000a  bnez        $t1, . + 4 + (0xA << 2)
label_170534:
    if (ctx->pc == 0x170534u) {
        ctx->pc = 0x170534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170530u;
        // 0x170534: 0x25ab0128  addiu       $t3, $t5, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170538u;
        goto label_170538;
    }
    ctx->pc = 0x170530u;
    {
        const bool branch_taken_0x170530 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x170534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170530u;
        // 0x170534: 0x25ab0128  addiu       $t3, $t5, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170530) {
            ctx->pc = 0x17055Cu;
            goto label_17055c;
        }
    }
    ctx->pc = 0x170538u;
label_170538:
    // 0x170538: 0x318900ff  andi        $t1, $t4, 0xFF
    ctx->pc = 0x170538u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
label_17053c:
    // 0x17053c: 0xa1600000  sb          $zero, 0x0($t3)
    ctx->pc = 0x17053cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 0));
label_170540:
    // 0x170540: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x170540u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
label_170544:
    // 0x170544: 0x10000005  b           . + 4 + (0x5 << 2)
label_170548:
    if (ctx->pc == 0x170548u) {
        ctx->pc = 0x170548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170544u;
        // 0x170548: 0x30e700ff  andi        $a3, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17054Cu;
        goto label_17054c;
    }
    ctx->pc = 0x170544u;
    {
        const bool branch_taken_0x170544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170544u;
        // 0x170548: 0x30e700ff  andi        $a3, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170544) {
            ctx->pc = 0x17055Cu;
            goto label_17055c;
        }
    }
    ctx->pc = 0x17054Cu;
label_17054c:
    // 0x17054c: 0x0  nop
    ctx->pc = 0x17054cu;
    // NOP
label_170550:
    // 0x170550: 0x2284821  addu        $t1, $s1, $t0
    ctx->pc = 0x170550u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
label_170554:
    // 0x170554: 0xa1200120  sb          $zero, 0x120($t1)
    ctx->pc = 0x170554u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 288), (uint8_t)GPR_U32(ctx, 0));
label_170558:
    // 0x170558: 0xa1200128  sb          $zero, 0x128($t1)
    ctx->pc = 0x170558u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 296), (uint8_t)GPR_U32(ctx, 0));
label_17055c:
    // 0x17055c: 0x0  nop
    ctx->pc = 0x17055cu;
    // NOP
label_170560:
    // 0x170560: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x170560u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_170564:
    // 0x170564: 0x2d090008  sltiu       $t1, $t0, 0x8
    ctx->pc = 0x170564u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_170568:
    // 0x170568: 0x1520ffd9  bnez        $t1, . + 4 + (-0x27 << 2)
label_17056c:
    if (ctx->pc == 0x17056Cu) {
        ctx->pc = 0x17056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170568u;
        // 0x17056c: 0x1046004  sllv        $t4, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 8) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170570u;
        goto label_170570;
    }
    ctx->pc = 0x170568u;
    {
        const bool branch_taken_0x170568 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x17056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170568u;
        // 0x17056c: 0x1046004  sllv        $t4, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 8) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170568) {
            ctx->pc = 0x1704D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1704d0;
        }
    }
    ctx->pc = 0x170570u;
label_170570:
    // 0x170570: 0x92030007  lbu         $v1, 0x7($s0)
    ctx->pc = 0x170570u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
label_170574:
    // 0x170574: 0xe62025  or          $a0, $a3, $a2
    ctx->pc = 0x170574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
label_170578:
    // 0x170578: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x170578u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_17057c:
    // 0x17057c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x17057cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_170580:
    // 0x170580: 0xa2030007  sb          $v1, 0x7($s0)
    ctx->pc = 0x170580u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 3));
label_170584:
    // 0x170584: 0x92030008  lbu         $v1, 0x8($s0)
    ctx->pc = 0x170584u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_170588:
    // 0x170588: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x170588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_17058c:
    // 0x17058c: 0xa2030008  sb          $v1, 0x8($s0)
    ctx->pc = 0x17058cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 3));
label_170590:
    // 0x170590: 0xa2050006  sb          $a1, 0x6($s0)
    ctx->pc = 0x170590u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 5));
label_170594:
    // 0x170594: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x170594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_170598:
    // 0x170598: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x170598u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17059c:
    // 0x17059c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17059cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1705a0:
    // 0x1705a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1705a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1705a4:
    // 0x1705a4: 0x3e00008  jr          $ra
label_1705a8:
    if (ctx->pc == 0x1705A8u) {
        ctx->pc = 0x1705A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1705A4u;
        // 0x1705a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1705ACu;
        goto label_1705ac;
    }
    ctx->pc = 0x1705A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1705A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1705A4u;
        // 0x1705a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1705A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1705ACu;
label_1705ac:
    // 0x1705ac: 0x0  nop
    ctx->pc = 0x1705acu;
    // NOP
label_1705b0:
    // 0x1705b0: 0x90880006  lbu         $t0, 0x6($a0)
    ctx->pc = 0x1705b0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
label_1705b4:
    // 0x1705b4: 0x90890007  lbu         $t1, 0x7($a0)
    ctx->pc = 0x1705b4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
label_1705b8:
    // 0x1705b8: 0x2503ff81  addiu       $v1, $t0, -0x7F
    ctx->pc = 0x1705b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967169));
label_1705bc:
    // 0x1705bc: 0x633818  mult        $a3, $v1, $v1
    ctx->pc = 0x1705bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_1705c0:
    // 0x1705c0: 0x2523ff81  addiu       $v1, $t1, -0x7F
    ctx->pc = 0x1705c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967169));
label_1705c4:
    // 0x1705c4: 0x70631818  mult1       $v1, $v1, $v1
    ctx->pc = 0x1705c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1705c8:
    // 0x1705c8: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1705c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_1705cc:
    // 0x1705cc: 0x28611000  slti        $at, $v1, 0x1000
    ctx->pc = 0x1705ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4096) ? 1 : 0);
label_1705d0:
    // 0x1705d0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1705d4:
    if (ctx->pc == 0x1705D4u) {
        ctx->pc = 0x1705D8u;
        goto label_1705d8;
    }
    ctx->pc = 0x1705D0u;
    {
        const bool branch_taken_0x1705d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1705d0) {
            ctx->pc = 0x1705E0u;
            goto label_1705e0;
        }
    }
    ctx->pc = 0x1705D8u;
label_1705d8:
    // 0x1705d8: 0x2408007f  addiu       $t0, $zero, 0x7F
    ctx->pc = 0x1705d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1705dc:
    // 0x1705dc: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1705dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1705e0:
    // 0x1705e0: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_1705e4:
    if (ctx->pc == 0x1705E4u) {
        ctx->pc = 0x1705E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1705E0u;
        // 0x1705e4: 0x2d01007f  sltiu       $at, $t0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1705E8u;
        goto label_1705e8;
    }
    ctx->pc = 0x1705E0u;
    {
        const bool branch_taken_0x1705e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1705E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1705E0u;
        // 0x1705e4: 0x2d01007f  sltiu       $at, $t0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1705e0) {
            ctx->pc = 0x1705F0u;
            goto label_1705f0;
        }
    }
    ctx->pc = 0x1705E8u;
label_1705e8:
    // 0x1705e8: 0xa0c80002  sb          $t0, 0x2($a2)
    ctx->pc = 0x1705e8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 8));
label_1705ec:
    // 0x1705ec: 0xa0c90003  sb          $t1, 0x3($a2)
    ctx->pc = 0x1705ecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 9));
label_1705f0:
    // 0x1705f0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1705f4:
    if (ctx->pc == 0x1705F4u) {
        ctx->pc = 0x1705F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1705F0u;
        // 0x1705f4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1705F8u;
        goto label_1705f8;
    }
    ctx->pc = 0x1705F0u;
    {
        const bool branch_taken_0x1705f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1705F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1705F0u;
        // 0x1705f4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1705f0) {
            ctx->pc = 0x170600u;
            goto label_170600;
        }
    }
    ctx->pc = 0x1705F8u;
label_1705f8:
    // 0x1705f8: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x1705f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1705fc:
    // 0x1705fc: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x1705fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_170600:
    // 0x170600: 0x2d010081  sltiu       $at, $t0, 0x81
    ctx->pc = 0x170600u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
label_170604:
    // 0x170604: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_170608:
    if (ctx->pc == 0x170608u) {
        ctx->pc = 0x170608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170604u;
        // 0x170608: 0xa0a30003  sb          $v1, 0x3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17060Cu;
        goto label_17060c;
    }
    ctx->pc = 0x170604u;
    {
        const bool branch_taken_0x170604 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x170608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170604u;
        // 0x170608: 0xa0a30003  sb          $v1, 0x3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170604) {
            ctx->pc = 0x170614u;
            goto label_170614;
        }
    }
    ctx->pc = 0x17060Cu;
label_17060c:
    // 0x17060c: 0x10000002  b           . + 4 + (0x2 << 2)
label_170610:
    if (ctx->pc == 0x170610u) {
        ctx->pc = 0x170610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17060Cu;
        // 0x170610: 0x2503ff80  addiu       $v1, $t0, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170614u;
        goto label_170614;
    }
    ctx->pc = 0x17060Cu;
    {
        const bool branch_taken_0x17060c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17060Cu;
        // 0x170610: 0x2503ff80  addiu       $v1, $t0, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17060c) {
            ctx->pc = 0x170618u;
            goto label_170618;
        }
    }
    ctx->pc = 0x170614u;
label_170614:
    // 0x170614: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x170614u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170618:
    // 0x170618: 0x2d21007f  sltiu       $at, $t1, 0x7F
    ctx->pc = 0x170618u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_17061c:
    // 0x17061c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_170620:
    if (ctx->pc == 0x170620u) {
        ctx->pc = 0x170620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17061Cu;
        // 0x170620: 0xa0a30001  sb          $v1, 0x1($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170624u;
        goto label_170624;
    }
    ctx->pc = 0x17061Cu;
    {
        const bool branch_taken_0x17061c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x170620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17061Cu;
        // 0x170620: 0xa0a30001  sb          $v1, 0x1($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17061c) {
            ctx->pc = 0x170630u;
            goto label_170630;
        }
    }
    ctx->pc = 0x170624u;
label_170624:
    // 0x170624: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x170624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_170628:
    // 0x170628: 0x10000002  b           . + 4 + (0x2 << 2)
label_17062c:
    if (ctx->pc == 0x17062Cu) {
        ctx->pc = 0x17062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170628u;
        // 0x17062c: 0x691823  subu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170630u;
        goto label_170630;
    }
    ctx->pc = 0x170628u;
    {
        const bool branch_taken_0x170628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170628u;
        // 0x17062c: 0x691823  subu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170628) {
            ctx->pc = 0x170634u;
            goto label_170634;
        }
    }
    ctx->pc = 0x170630u;
label_170630:
    // 0x170630: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x170630u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170634:
    // 0x170634: 0x2d210081  sltiu       $at, $t1, 0x81
    ctx->pc = 0x170634u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
label_170638:
    // 0x170638: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_17063c:
    if (ctx->pc == 0x17063Cu) {
        ctx->pc = 0x17063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170638u;
        // 0x17063c: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170640u;
        goto label_170640;
    }
    ctx->pc = 0x170638u;
    {
        const bool branch_taken_0x170638 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x17063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170638u;
        // 0x17063c: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170638) {
            ctx->pc = 0x170648u;
            goto label_170648;
        }
    }
    ctx->pc = 0x170640u;
label_170640:
    // 0x170640: 0x10000002  b           . + 4 + (0x2 << 2)
label_170644:
    if (ctx->pc == 0x170644u) {
        ctx->pc = 0x170644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170640u;
        // 0x170644: 0x2523ff80  addiu       $v1, $t1, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170648u;
        goto label_170648;
    }
    ctx->pc = 0x170640u;
    {
        const bool branch_taken_0x170640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170640u;
        // 0x170644: 0x2523ff80  addiu       $v1, $t1, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170640) {
            ctx->pc = 0x17064Cu;
            goto label_17064c;
        }
    }
    ctx->pc = 0x170648u;
label_170648:
    // 0x170648: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x170648u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17064c:
    // 0x17064c: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x17064cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_170650:
    // 0x170650: 0x90870004  lbu         $a3, 0x4($a0)
    ctx->pc = 0x170650u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_170654:
    // 0x170654: 0x90880005  lbu         $t0, 0x5($a0)
    ctx->pc = 0x170654u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
label_170658:
    // 0x170658: 0x24e3ff81  addiu       $v1, $a3, -0x7F
    ctx->pc = 0x170658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967169));
label_17065c:
    // 0x17065c: 0x632018  mult        $a0, $v1, $v1
    ctx->pc = 0x17065cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_170660:
    // 0x170660: 0x2503ff81  addiu       $v1, $t0, -0x7F
    ctx->pc = 0x170660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967169));
label_170664:
    // 0x170664: 0x70631818  mult1       $v1, $v1, $v1
    ctx->pc = 0x170664u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_170668:
    // 0x170668: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x170668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_17066c:
    // 0x17066c: 0x28611000  slti        $at, $v1, 0x1000
    ctx->pc = 0x17066cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4096) ? 1 : 0);
label_170670:
    // 0x170670: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_170674:
    if (ctx->pc == 0x170674u) {
        ctx->pc = 0x170678u;
        goto label_170678;
    }
    ctx->pc = 0x170670u;
    {
        const bool branch_taken_0x170670 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x170670) {
            ctx->pc = 0x170680u;
            goto label_170680;
        }
    }
    ctx->pc = 0x170678u;
label_170678:
    // 0x170678: 0x2407007f  addiu       $a3, $zero, 0x7F
    ctx->pc = 0x170678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_17067c:
    // 0x17067c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x17067cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_170680:
    // 0x170680: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_170684:
    if (ctx->pc == 0x170684u) {
        ctx->pc = 0x170684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170680u;
        // 0x170684: 0x2ce1007f  sltiu       $at, $a3, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x170688u;
        goto label_170688;
    }
    ctx->pc = 0x170680u;
    {
        const bool branch_taken_0x170680 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x170684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170680u;
        // 0x170684: 0x2ce1007f  sltiu       $at, $a3, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170680) {
            ctx->pc = 0x170690u;
            goto label_170690;
        }
    }
    ctx->pc = 0x170688u;
label_170688:
    // 0x170688: 0xa0c70000  sb          $a3, 0x0($a2)
    ctx->pc = 0x170688u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 7));
label_17068c:
    // 0x17068c: 0xa0c80001  sb          $t0, 0x1($a2)
    ctx->pc = 0x17068cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 8));
label_170690:
    // 0x170690: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_170694:
    if (ctx->pc == 0x170694u) {
        ctx->pc = 0x170694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170690u;
        // 0x170694: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170698u;
        goto label_170698;
    }
    ctx->pc = 0x170690u;
    {
        const bool branch_taken_0x170690 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x170694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170690u;
        // 0x170694: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170690) {
            ctx->pc = 0x1706A0u;
            goto label_1706a0;
        }
    }
    ctx->pc = 0x170698u;
label_170698:
    // 0x170698: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x170698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_17069c:
    // 0x17069c: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x17069cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1706a0:
    // 0x1706a0: 0x2ce10081  sltiu       $at, $a3, 0x81
    ctx->pc = 0x1706a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
label_1706a4:
    // 0x1706a4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1706a8:
    if (ctx->pc == 0x1706A8u) {
        ctx->pc = 0x1706A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1706A4u;
        // 0x1706a8: 0xa0a30007  sb          $v1, 0x7($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1706ACu;
        goto label_1706ac;
    }
    ctx->pc = 0x1706A4u;
    {
        const bool branch_taken_0x1706a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1706A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1706A4u;
        // 0x1706a8: 0xa0a30007  sb          $v1, 0x7($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1706a4) {
            ctx->pc = 0x1706B4u;
            { ctx->pc = 0x1706b4; return; }
        }
    }
    ctx->pc = 0x1706ACu;
label_1706ac:
    // 0x1706ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1706b0u;
    return;
}
