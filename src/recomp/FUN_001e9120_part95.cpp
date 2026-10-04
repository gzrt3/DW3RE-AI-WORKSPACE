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

// Function: FUN_001e9120
// Address: 0x1e9120 - 0x2291f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_001e9120_part95(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x216f80u: goto label_216f80;
        case 0x216f84u: goto label_216f84;
        case 0x216f88u: goto label_216f88;
        case 0x216f8cu: goto label_216f8c;
        case 0x216f90u: goto label_216f90;
        case 0x216f94u: goto label_216f94;
        case 0x216f98u: goto label_216f98;
        case 0x216f9cu: goto label_216f9c;
        case 0x216fa0u: goto label_216fa0;
        case 0x216fa4u: goto label_216fa4;
        case 0x216fa8u: goto label_216fa8;
        case 0x216facu: goto label_216fac;
        case 0x216fb0u: goto label_216fb0;
        case 0x216fb4u: goto label_216fb4;
        case 0x216fb8u: goto label_216fb8;
        case 0x216fbcu: goto label_216fbc;
        case 0x216fc0u: goto label_216fc0;
        case 0x216fc4u: goto label_216fc4;
        case 0x216fc8u: goto label_216fc8;
        case 0x216fccu: goto label_216fcc;
        case 0x216fd0u: goto label_216fd0;
        case 0x216fd4u: goto label_216fd4;
        case 0x216fd8u: goto label_216fd8;
        case 0x216fdcu: goto label_216fdc;
        case 0x216fe0u: goto label_216fe0;
        case 0x216fe4u: goto label_216fe4;
        case 0x216fe8u: goto label_216fe8;
        case 0x216fecu: goto label_216fec;
        case 0x216ff0u: goto label_216ff0;
        case 0x216ff4u: goto label_216ff4;
        case 0x216ff8u: goto label_216ff8;
        case 0x216ffcu: goto label_216ffc;
        case 0x217000u: goto label_217000;
        case 0x217004u: goto label_217004;
        case 0x217008u: goto label_217008;
        case 0x21700cu: goto label_21700c;
        case 0x217010u: goto label_217010;
        case 0x217014u: goto label_217014;
        case 0x217018u: goto label_217018;
        case 0x21701cu: goto label_21701c;
        case 0x217020u: goto label_217020;
        case 0x217024u: goto label_217024;
        case 0x217028u: goto label_217028;
        case 0x21702cu: goto label_21702c;
        case 0x217030u: goto label_217030;
        case 0x217034u: goto label_217034;
        case 0x217038u: goto label_217038;
        case 0x21703cu: goto label_21703c;
        case 0x217040u: goto label_217040;
        case 0x217044u: goto label_217044;
        case 0x217048u: goto label_217048;
        case 0x21704cu: goto label_21704c;
        case 0x217050u: goto label_217050;
        case 0x217054u: goto label_217054;
        case 0x217058u: goto label_217058;
        case 0x21705cu: goto label_21705c;
        case 0x217060u: goto label_217060;
        case 0x217064u: goto label_217064;
        case 0x217068u: goto label_217068;
        case 0x21706cu: goto label_21706c;
        case 0x217070u: goto label_217070;
        case 0x217074u: goto label_217074;
        case 0x217078u: goto label_217078;
        case 0x21707cu: goto label_21707c;
        case 0x217080u: goto label_217080;
        case 0x217084u: goto label_217084;
        case 0x217088u: goto label_217088;
        case 0x21708cu: goto label_21708c;
        case 0x217090u: goto label_217090;
        case 0x217094u: goto label_217094;
        case 0x217098u: goto label_217098;
        case 0x21709cu: goto label_21709c;
        case 0x2170a0u: goto label_2170a0;
        case 0x2170a4u: goto label_2170a4;
        case 0x2170a8u: goto label_2170a8;
        case 0x2170acu: goto label_2170ac;
        case 0x2170b0u: goto label_2170b0;
        case 0x2170b4u: goto label_2170b4;
        case 0x2170b8u: goto label_2170b8;
        case 0x2170bcu: goto label_2170bc;
        case 0x2170c0u: goto label_2170c0;
        case 0x2170c4u: goto label_2170c4;
        case 0x2170c8u: goto label_2170c8;
        case 0x2170ccu: goto label_2170cc;
        case 0x2170d0u: goto label_2170d0;
        case 0x2170d4u: goto label_2170d4;
        case 0x2170d8u: goto label_2170d8;
        case 0x2170dcu: goto label_2170dc;
        case 0x2170e0u: goto label_2170e0;
        case 0x2170e4u: goto label_2170e4;
        case 0x2170e8u: goto label_2170e8;
        case 0x2170ecu: goto label_2170ec;
        case 0x2170f0u: goto label_2170f0;
        case 0x2170f4u: goto label_2170f4;
        case 0x2170f8u: goto label_2170f8;
        case 0x2170fcu: goto label_2170fc;
        case 0x217100u: goto label_217100;
        case 0x217104u: goto label_217104;
        case 0x217108u: goto label_217108;
        case 0x21710cu: goto label_21710c;
        case 0x217110u: goto label_217110;
        case 0x217114u: goto label_217114;
        case 0x217118u: goto label_217118;
        case 0x21711cu: goto label_21711c;
        case 0x217120u: goto label_217120;
        case 0x217124u: goto label_217124;
        case 0x217128u: goto label_217128;
        case 0x21712cu: goto label_21712c;
        case 0x217130u: goto label_217130;
        case 0x217134u: goto label_217134;
        case 0x217138u: goto label_217138;
        case 0x21713cu: goto label_21713c;
        case 0x217140u: goto label_217140;
        case 0x217144u: goto label_217144;
        case 0x217148u: goto label_217148;
        case 0x21714cu: goto label_21714c;
        case 0x217150u: goto label_217150;
        case 0x217154u: goto label_217154;
        case 0x217158u: goto label_217158;
        case 0x21715cu: goto label_21715c;
        case 0x217160u: goto label_217160;
        case 0x217164u: goto label_217164;
        case 0x217168u: goto label_217168;
        case 0x21716cu: goto label_21716c;
        case 0x217170u: goto label_217170;
        case 0x217174u: goto label_217174;
        case 0x217178u: goto label_217178;
        case 0x21717cu: goto label_21717c;
        case 0x217180u: goto label_217180;
        case 0x217184u: goto label_217184;
        case 0x217188u: goto label_217188;
        case 0x21718cu: goto label_21718c;
        case 0x217190u: goto label_217190;
        case 0x217194u: goto label_217194;
        case 0x217198u: goto label_217198;
        case 0x21719cu: goto label_21719c;
        case 0x2171a0u: goto label_2171a0;
        case 0x2171a4u: goto label_2171a4;
        case 0x2171a8u: goto label_2171a8;
        case 0x2171acu: goto label_2171ac;
        case 0x2171b0u: goto label_2171b0;
        case 0x2171b4u: goto label_2171b4;
        case 0x2171b8u: goto label_2171b8;
        case 0x2171bcu: goto label_2171bc;
        case 0x2171c0u: goto label_2171c0;
        case 0x2171c4u: goto label_2171c4;
        case 0x2171c8u: goto label_2171c8;
        case 0x2171ccu: goto label_2171cc;
        case 0x2171d0u: goto label_2171d0;
        case 0x2171d4u: goto label_2171d4;
        case 0x2171d8u: goto label_2171d8;
        case 0x2171dcu: goto label_2171dc;
        case 0x2171e0u: goto label_2171e0;
        case 0x2171e4u: goto label_2171e4;
        case 0x2171e8u: goto label_2171e8;
        case 0x2171ecu: goto label_2171ec;
        case 0x2171f0u: goto label_2171f0;
        case 0x2171f4u: goto label_2171f4;
        case 0x2171f8u: goto label_2171f8;
        case 0x2171fcu: goto label_2171fc;
        case 0x217200u: goto label_217200;
        case 0x217204u: goto label_217204;
        case 0x217208u: goto label_217208;
        case 0x21720cu: goto label_21720c;
        case 0x217210u: goto label_217210;
        case 0x217214u: goto label_217214;
        case 0x217218u: goto label_217218;
        case 0x21721cu: goto label_21721c;
        case 0x217220u: goto label_217220;
        case 0x217224u: goto label_217224;
        case 0x217228u: goto label_217228;
        case 0x21722cu: goto label_21722c;
        case 0x217230u: goto label_217230;
        case 0x217234u: goto label_217234;
        case 0x217238u: goto label_217238;
        case 0x21723cu: goto label_21723c;
        case 0x217240u: goto label_217240;
        case 0x217244u: goto label_217244;
        case 0x217248u: goto label_217248;
        case 0x21724cu: goto label_21724c;
        case 0x217250u: goto label_217250;
        case 0x217254u: goto label_217254;
        case 0x217258u: goto label_217258;
        case 0x21725cu: goto label_21725c;
        case 0x217260u: goto label_217260;
        case 0x217264u: goto label_217264;
        case 0x217268u: goto label_217268;
        case 0x21726cu: goto label_21726c;
        case 0x217270u: goto label_217270;
        case 0x217274u: goto label_217274;
        case 0x217278u: goto label_217278;
        case 0x21727cu: goto label_21727c;
        case 0x217280u: goto label_217280;
        case 0x217284u: goto label_217284;
        case 0x217288u: goto label_217288;
        case 0x21728cu: goto label_21728c;
        case 0x217290u: goto label_217290;
        case 0x217294u: goto label_217294;
        case 0x217298u: goto label_217298;
        case 0x21729cu: goto label_21729c;
        case 0x2172a0u: goto label_2172a0;
        case 0x2172a4u: goto label_2172a4;
        case 0x2172a8u: goto label_2172a8;
        case 0x2172acu: goto label_2172ac;
        case 0x2172b0u: goto label_2172b0;
        case 0x2172b4u: goto label_2172b4;
        case 0x2172b8u: goto label_2172b8;
        case 0x2172bcu: goto label_2172bc;
        case 0x2172c0u: goto label_2172c0;
        case 0x2172c4u: goto label_2172c4;
        case 0x2172c8u: goto label_2172c8;
        case 0x2172ccu: goto label_2172cc;
        case 0x2172d0u: goto label_2172d0;
        case 0x2172d4u: goto label_2172d4;
        case 0x2172d8u: goto label_2172d8;
        case 0x2172dcu: goto label_2172dc;
        case 0x2172e0u: goto label_2172e0;
        case 0x2172e4u: goto label_2172e4;
        case 0x2172e8u: goto label_2172e8;
        case 0x2172ecu: goto label_2172ec;
        case 0x2172f0u: goto label_2172f0;
        case 0x2172f4u: goto label_2172f4;
        case 0x2172f8u: goto label_2172f8;
        case 0x2172fcu: goto label_2172fc;
        case 0x217300u: goto label_217300;
        case 0x217304u: goto label_217304;
        case 0x217308u: goto label_217308;
        case 0x21730cu: goto label_21730c;
        case 0x217310u: goto label_217310;
        case 0x217314u: goto label_217314;
        case 0x217318u: goto label_217318;
        case 0x21731cu: goto label_21731c;
        case 0x217320u: goto label_217320;
        case 0x217324u: goto label_217324;
        case 0x217328u: goto label_217328;
        case 0x21732cu: goto label_21732c;
        case 0x217330u: goto label_217330;
        case 0x217334u: goto label_217334;
        case 0x217338u: goto label_217338;
        case 0x21733cu: goto label_21733c;
        case 0x217340u: goto label_217340;
        case 0x217344u: goto label_217344;
        case 0x217348u: goto label_217348;
        case 0x21734cu: goto label_21734c;
        case 0x217350u: goto label_217350;
        case 0x217354u: goto label_217354;
        case 0x217358u: goto label_217358;
        case 0x21735cu: goto label_21735c;
        case 0x217360u: goto label_217360;
        case 0x217364u: goto label_217364;
        case 0x217368u: goto label_217368;
        case 0x21736cu: goto label_21736c;
        case 0x217370u: goto label_217370;
        case 0x217374u: goto label_217374;
        case 0x217378u: goto label_217378;
        case 0x21737cu: goto label_21737c;
        case 0x217380u: goto label_217380;
        case 0x217384u: goto label_217384;
        case 0x217388u: goto label_217388;
        case 0x21738cu: goto label_21738c;
        case 0x217390u: goto label_217390;
        case 0x217394u: goto label_217394;
        case 0x217398u: goto label_217398;
        case 0x21739cu: goto label_21739c;
        case 0x2173a0u: goto label_2173a0;
        case 0x2173a4u: goto label_2173a4;
        case 0x2173a8u: goto label_2173a8;
        case 0x2173acu: goto label_2173ac;
        case 0x2173b0u: goto label_2173b0;
        case 0x2173b4u: goto label_2173b4;
        case 0x2173b8u: goto label_2173b8;
        case 0x2173bcu: goto label_2173bc;
        case 0x2173c0u: goto label_2173c0;
        case 0x2173c4u: goto label_2173c4;
        case 0x2173c8u: goto label_2173c8;
        case 0x2173ccu: goto label_2173cc;
        case 0x2173d0u: goto label_2173d0;
        case 0x2173d4u: goto label_2173d4;
        case 0x2173d8u: goto label_2173d8;
        case 0x2173dcu: goto label_2173dc;
        case 0x2173e0u: goto label_2173e0;
        case 0x2173e4u: goto label_2173e4;
        case 0x2173e8u: goto label_2173e8;
        case 0x2173ecu: goto label_2173ec;
        case 0x2173f0u: goto label_2173f0;
        case 0x2173f4u: goto label_2173f4;
        case 0x2173f8u: goto label_2173f8;
        case 0x2173fcu: goto label_2173fc;
        case 0x217400u: goto label_217400;
        case 0x217404u: goto label_217404;
        case 0x217408u: goto label_217408;
        case 0x21740cu: goto label_21740c;
        case 0x217410u: goto label_217410;
        case 0x217414u: goto label_217414;
        case 0x217418u: goto label_217418;
        case 0x21741cu: goto label_21741c;
        case 0x217420u: goto label_217420;
        case 0x217424u: goto label_217424;
        case 0x217428u: goto label_217428;
        case 0x21742cu: goto label_21742c;
        case 0x217430u: goto label_217430;
        case 0x217434u: goto label_217434;
        case 0x217438u: goto label_217438;
        case 0x21743cu: goto label_21743c;
        case 0x217440u: goto label_217440;
        case 0x217444u: goto label_217444;
        case 0x217448u: goto label_217448;
        case 0x21744cu: goto label_21744c;
        case 0x217450u: goto label_217450;
        case 0x217454u: goto label_217454;
        case 0x217458u: goto label_217458;
        case 0x21745cu: goto label_21745c;
        case 0x217460u: goto label_217460;
        case 0x217464u: goto label_217464;
        case 0x217468u: goto label_217468;
        case 0x21746cu: goto label_21746c;
        case 0x217470u: goto label_217470;
        case 0x217474u: goto label_217474;
        case 0x217478u: goto label_217478;
        case 0x21747cu: goto label_21747c;
        case 0x217480u: goto label_217480;
        case 0x217484u: goto label_217484;
        case 0x217488u: goto label_217488;
        case 0x21748cu: goto label_21748c;
        case 0x217490u: goto label_217490;
        case 0x217494u: goto label_217494;
        case 0x217498u: goto label_217498;
        case 0x21749cu: goto label_21749c;
        case 0x2174a0u: goto label_2174a0;
        case 0x2174a4u: goto label_2174a4;
        case 0x2174a8u: goto label_2174a8;
        case 0x2174acu: goto label_2174ac;
        case 0x2174b0u: goto label_2174b0;
        case 0x2174b4u: goto label_2174b4;
        case 0x2174b8u: goto label_2174b8;
        case 0x2174bcu: goto label_2174bc;
        case 0x2174c0u: goto label_2174c0;
        case 0x2174c4u: goto label_2174c4;
        case 0x2174c8u: goto label_2174c8;
        case 0x2174ccu: goto label_2174cc;
        case 0x2174d0u: goto label_2174d0;
        case 0x2174d4u: goto label_2174d4;
        case 0x2174d8u: goto label_2174d8;
        case 0x2174dcu: goto label_2174dc;
        case 0x2174e0u: goto label_2174e0;
        case 0x2174e4u: goto label_2174e4;
        case 0x2174e8u: goto label_2174e8;
        case 0x2174ecu: goto label_2174ec;
        case 0x2174f0u: goto label_2174f0;
        case 0x2174f4u: goto label_2174f4;
        case 0x2174f8u: goto label_2174f8;
        case 0x2174fcu: goto label_2174fc;
        case 0x217500u: goto label_217500;
        case 0x217504u: goto label_217504;
        case 0x217508u: goto label_217508;
        case 0x21750cu: goto label_21750c;
        case 0x217510u: goto label_217510;
        case 0x217514u: goto label_217514;
        case 0x217518u: goto label_217518;
        case 0x21751cu: goto label_21751c;
        case 0x217520u: goto label_217520;
        case 0x217524u: goto label_217524;
        case 0x217528u: goto label_217528;
        case 0x21752cu: goto label_21752c;
        case 0x217530u: goto label_217530;
        case 0x217534u: goto label_217534;
        case 0x217538u: goto label_217538;
        case 0x21753cu: goto label_21753c;
        case 0x217540u: goto label_217540;
        case 0x217544u: goto label_217544;
        case 0x217548u: goto label_217548;
        case 0x21754cu: goto label_21754c;
        case 0x217550u: goto label_217550;
        case 0x217554u: goto label_217554;
        case 0x217558u: goto label_217558;
        case 0x21755cu: goto label_21755c;
        case 0x217560u: goto label_217560;
        case 0x217564u: goto label_217564;
        case 0x217568u: goto label_217568;
        case 0x21756cu: goto label_21756c;
        case 0x217570u: goto label_217570;
        case 0x217574u: goto label_217574;
        case 0x217578u: goto label_217578;
        case 0x21757cu: goto label_21757c;
        case 0x217580u: goto label_217580;
        case 0x217584u: goto label_217584;
        case 0x217588u: goto label_217588;
        case 0x21758cu: goto label_21758c;
        case 0x217590u: goto label_217590;
        case 0x217594u: goto label_217594;
        case 0x217598u: goto label_217598;
        case 0x21759cu: goto label_21759c;
        case 0x2175a0u: goto label_2175a0;
        case 0x2175a4u: goto label_2175a4;
        case 0x2175a8u: goto label_2175a8;
        case 0x2175acu: goto label_2175ac;
        case 0x2175b0u: goto label_2175b0;
        case 0x2175b4u: goto label_2175b4;
        case 0x2175b8u: goto label_2175b8;
        case 0x2175bcu: goto label_2175bc;
        case 0x2175c0u: goto label_2175c0;
        case 0x2175c4u: goto label_2175c4;
        case 0x2175c8u: goto label_2175c8;
        case 0x2175ccu: goto label_2175cc;
        case 0x2175d0u: goto label_2175d0;
        case 0x2175d4u: goto label_2175d4;
        case 0x2175d8u: goto label_2175d8;
        case 0x2175dcu: goto label_2175dc;
        case 0x2175e0u: goto label_2175e0;
        case 0x2175e4u: goto label_2175e4;
        case 0x2175e8u: goto label_2175e8;
        case 0x2175ecu: goto label_2175ec;
        case 0x2175f0u: goto label_2175f0;
        case 0x2175f4u: goto label_2175f4;
        case 0x2175f8u: goto label_2175f8;
        case 0x2175fcu: goto label_2175fc;
        case 0x217600u: goto label_217600;
        case 0x217604u: goto label_217604;
        case 0x217608u: goto label_217608;
        case 0x21760cu: goto label_21760c;
        case 0x217610u: goto label_217610;
        case 0x217614u: goto label_217614;
        case 0x217618u: goto label_217618;
        case 0x21761cu: goto label_21761c;
        case 0x217620u: goto label_217620;
        case 0x217624u: goto label_217624;
        case 0x217628u: goto label_217628;
        case 0x21762cu: goto label_21762c;
        case 0x217630u: goto label_217630;
        case 0x217634u: goto label_217634;
        case 0x217638u: goto label_217638;
        case 0x21763cu: goto label_21763c;
        case 0x217640u: goto label_217640;
        case 0x217644u: goto label_217644;
        case 0x217648u: goto label_217648;
        case 0x21764cu: goto label_21764c;
        case 0x217650u: goto label_217650;
        case 0x217654u: goto label_217654;
        case 0x217658u: goto label_217658;
        case 0x21765cu: goto label_21765c;
        case 0x217660u: goto label_217660;
        case 0x217664u: goto label_217664;
        case 0x217668u: goto label_217668;
        case 0x21766cu: goto label_21766c;
        case 0x217670u: goto label_217670;
        case 0x217674u: goto label_217674;
        case 0x217678u: goto label_217678;
        case 0x21767cu: goto label_21767c;
        case 0x217680u: goto label_217680;
        case 0x217684u: goto label_217684;
        case 0x217688u: goto label_217688;
        case 0x21768cu: goto label_21768c;
        case 0x217690u: goto label_217690;
        case 0x217694u: goto label_217694;
        case 0x217698u: goto label_217698;
        case 0x21769cu: goto label_21769c;
        case 0x2176a0u: goto label_2176a0;
        case 0x2176a4u: goto label_2176a4;
        case 0x2176a8u: goto label_2176a8;
        case 0x2176acu: goto label_2176ac;
        case 0x2176b0u: goto label_2176b0;
        case 0x2176b4u: goto label_2176b4;
        case 0x2176b8u: goto label_2176b8;
        case 0x2176bcu: goto label_2176bc;
        case 0x2176c0u: goto label_2176c0;
        case 0x2176c4u: goto label_2176c4;
        case 0x2176c8u: goto label_2176c8;
        case 0x2176ccu: goto label_2176cc;
        case 0x2176d0u: goto label_2176d0;
        case 0x2176d4u: goto label_2176d4;
        case 0x2176d8u: goto label_2176d8;
        case 0x2176dcu: goto label_2176dc;
        case 0x2176e0u: goto label_2176e0;
        case 0x2176e4u: goto label_2176e4;
        case 0x2176e8u: goto label_2176e8;
        case 0x2176ecu: goto label_2176ec;
        case 0x2176f0u: goto label_2176f0;
        case 0x2176f4u: goto label_2176f4;
        case 0x2176f8u: goto label_2176f8;
        case 0x2176fcu: goto label_2176fc;
        case 0x217700u: goto label_217700;
        case 0x217704u: goto label_217704;
        case 0x217708u: goto label_217708;
        case 0x21770cu: goto label_21770c;
        case 0x217710u: goto label_217710;
        case 0x217714u: goto label_217714;
        case 0x217718u: goto label_217718;
        case 0x21771cu: goto label_21771c;
        case 0x217720u: goto label_217720;
        case 0x217724u: goto label_217724;
        case 0x217728u: goto label_217728;
        case 0x21772cu: goto label_21772c;
        case 0x217730u: goto label_217730;
        case 0x217734u: goto label_217734;
        case 0x217738u: goto label_217738;
        case 0x21773cu: goto label_21773c;
        case 0x217740u: goto label_217740;
        case 0x217744u: goto label_217744;
        case 0x217748u: goto label_217748;
        case 0x21774cu: goto label_21774c;
        default: return;
    }

label_216f80:
    // 0x216f80: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x216f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_216f84:
    // 0x216f84: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x216f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_216f88:
    // 0x216f88: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x216f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_216f8c:
    // 0x216f8c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216f90:
    // 0x216f90: 0xc4238a98  lwc1        $f3, -0x7568($at)
    ctx->pc = 0x216f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_216f94:
    // 0x216f94: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216f98:
    // 0x216f98: 0xc4228a9c  lwc1        $f2, -0x7564($at)
    ctx->pc = 0x216f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_216f9c:
    // 0x216f9c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216fa0:
    // 0x216fa0: 0xc4218a80  lwc1        $f1, -0x7580($at)
    ctx->pc = 0x216fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_216fa4:
    // 0x216fa4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216fa8:
    // 0x216fa8: 0xc4208a84  lwc1        $f0, -0x757C($at)
    ctx->pc = 0x216fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_216fac:
    // 0x216fac: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216fb0:
    // 0x216fb0: 0xe4258a70  swc1        $f5, -0x7590($at)
    ctx->pc = 0x216fb0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937200), bits); }
label_216fb4:
    // 0x216fb4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216fb8:
    // 0x216fb8: 0xe4248a74  swc1        $f4, -0x758C($at)
    ctx->pc = 0x216fb8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937204), bits); }
label_216fbc:
    // 0x216fbc: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216fc0:
    // 0x216fc0: 0xe4238a78  swc1        $f3, -0x7588($at)
    ctx->pc = 0x216fc0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937208), bits); }
label_216fc4:
    // 0x216fc4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216fc8:
    // 0x216fc8: 0xe4228a7c  swc1        $f2, -0x7584($at)
    ctx->pc = 0x216fc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937212), bits); }
label_216fcc:
    // 0x216fcc: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216fd0:
    // 0x216fd0: 0xe4218a60  swc1        $f1, -0x75A0($at)
    ctx->pc = 0x216fd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937184), bits); }
label_216fd4:
    // 0x216fd4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216fd8:
    // 0x216fd8: 0xe4208a64  swc1        $f0, -0x759C($at)
    ctx->pc = 0x216fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937188), bits); }
label_216fdc:
    // 0x216fdc: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216fdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216fe0:
    // 0x216fe0: 0xc4218a88  lwc1        $f1, -0x7578($at)
    ctx->pc = 0x216fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_216fe4:
    // 0x216fe4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216fe8:
    // 0x216fe8: 0xc4208a8c  lwc1        $f0, -0x7574($at)
    ctx->pc = 0x216fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_216fec:
    // 0x216fec: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216ff0:
    // 0x216ff0: 0xe4218a68  swc1        $f1, -0x7598($at)
    ctx->pc = 0x216ff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937192), bits); }
label_216ff4:
    // 0x216ff4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216ff8:
    // 0x216ff8: 0xe4208a6c  swc1        $f0, -0x7594($at)
    ctx->pc = 0x216ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937196), bits); }
label_216ffc:
    // 0x216ffc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x216ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_217000:
    // 0x217000: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_217004:
    // 0x217004: 0xe4208a90  swc1        $f0, -0x7570($at)
    ctx->pc = 0x217004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937232), bits); }
label_217008:
    // 0x217008: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21700c:
    // 0x21700c: 0xc4208a90  lwc1        $f0, -0x7570($at)
    ctx->pc = 0x21700cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_217010:
    // 0x217010: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x217010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_217014:
    // 0x217014: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_217018:
    // 0x217018: 0xe4218a94  swc1        $f1, -0x756C($at)
    ctx->pc = 0x217018u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937236), bits); }
label_21701c:
    // 0x21701c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21701cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_217020:
    // 0x217020: 0xac238a8c  sw          $v1, -0x7574($at)
    ctx->pc = 0x217020u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937228), GPR_U32(ctx, 3));
label_217024:
    // 0x217024: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_217028:
    // 0x217028: 0xe4208a50  swc1        $f0, -0x75B0($at)
    ctx->pc = 0x217028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937168), bits); }
label_21702c:
    // 0x21702c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21702cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_217030:
    // 0x217030: 0xac208a98  sw          $zero, -0x7568($at)
    ctx->pc = 0x217030u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937240), GPR_U32(ctx, 0));
label_217034:
    // 0x217034: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_217038:
    // 0x217038: 0xac208a9c  sw          $zero, -0x7564($at)
    ctx->pc = 0x217038u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937244), GPR_U32(ctx, 0));
label_21703c:
    // 0x21703c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21703cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_217040:
    // 0x217040: 0xac208a80  sw          $zero, -0x7580($at)
    ctx->pc = 0x217040u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937216), GPR_U32(ctx, 0));
label_217044:
    // 0x217044: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_217048:
    // 0x217048: 0xac208a84  sw          $zero, -0x757C($at)
    ctx->pc = 0x217048u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937220), GPR_U32(ctx, 0));
label_21704c:
    // 0x21704c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21704cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_217050:
    // 0x217050: 0xac208a88  sw          $zero, -0x7578($at)
    ctx->pc = 0x217050u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937224), GPR_U32(ctx, 0));
label_217054:
    // 0x217054: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_217058:
    // 0x217058: 0xc4258a94  lwc1        $f5, -0x756C($at)
    ctx->pc = 0x217058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_21705c:
    // 0x21705c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21705cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_217060:
    // 0x217060: 0xc4248a98  lwc1        $f4, -0x7568($at)
    ctx->pc = 0x217060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_217064:
    // 0x217064: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_217068:
    // 0x217068: 0xc4238a9c  lwc1        $f3, -0x7564($at)
    ctx->pc = 0x217068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_21706c:
    // 0x21706c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21706cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_217070:
    // 0x217070: 0xc4228a80  lwc1        $f2, -0x7580($at)
    ctx->pc = 0x217070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_217074:
    // 0x217074: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_217078:
    // 0x217078: 0xc4218a84  lwc1        $f1, -0x757C($at)
    ctx->pc = 0x217078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21707c:
    // 0x21707c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21707cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_217080:
    // 0x217080: 0xc4208a88  lwc1        $f0, -0x7578($at)
    ctx->pc = 0x217080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_217084:
    // 0x217084: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_217088:
    // 0x217088: 0xe4258a54  swc1        $f5, -0x75AC($at)
    ctx->pc = 0x217088u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937172), bits); }
label_21708c:
    // 0x21708c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21708cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_217090:
    // 0x217090: 0xe4248a58  swc1        $f4, -0x75A8($at)
    ctx->pc = 0x217090u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937176), bits); }
label_217094:
    // 0x217094: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_217098:
    // 0x217098: 0xe4238a5c  swc1        $f3, -0x75A4($at)
    ctx->pc = 0x217098u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937180), bits); }
label_21709c:
    // 0x21709c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21709cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2170a0:
    // 0x2170a0: 0xe4228a40  swc1        $f2, -0x75C0($at)
    ctx->pc = 0x2170a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937152), bits); }
label_2170a4:
    // 0x2170a4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2170a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2170a8:
    // 0x2170a8: 0xe4218a44  swc1        $f1, -0x75BC($at)
    ctx->pc = 0x2170a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937156), bits); }
label_2170ac:
    // 0x2170ac: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2170acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2170b0:
    // 0x2170b0: 0xe4208a48  swc1        $f0, -0x75B8($at)
    ctx->pc = 0x2170b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937160), bits); }
label_2170b4:
    // 0x2170b4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2170b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2170b8:
    // 0x2170b8: 0xc4208a8c  lwc1        $f0, -0x7574($at)
    ctx->pc = 0x2170b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2170bc:
    // 0x2170bc: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2170bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2170c0:
    // 0x2170c0: 0x3e00008  jr          $ra
label_2170c4:
    if (ctx->pc == 0x2170C4u) {
        ctx->pc = 0x2170C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2170C0u;
        // 0x2170c4: 0xe4208a4c  swc1        $f0, -0x75B4($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937164), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2170C8u;
        goto label_2170c8;
    }
    ctx->pc = 0x2170C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2170C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2170C0u;
        // 0x2170c4: 0xe4208a4c  swc1        $f0, -0x75B4($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937164), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2170C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2170C8u;
label_2170c8:
    // 0x2170c8: 0x0  nop
    ctx->pc = 0x2170c8u;
    // NOP
label_2170cc:
    // 0x2170cc: 0x0  nop
    ctx->pc = 0x2170ccu;
    // NOP
label_2170d0:
    // 0x2170d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2170d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2170d4:
    // 0x2170d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2170d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2170d8:
    // 0x2170d8: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
label_2170dc:
    if (ctx->pc == 0x2170DCu) {
        ctx->pc = 0x2170DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2170D8u;
        // 0x2170dc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2170E0u;
        goto label_2170e0;
    }
    ctx->pc = 0x2170D8u;
    {
        const bool branch_taken_0x2170d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2170DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2170D8u;
        // 0x2170dc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2170d8) {
            ctx->pc = 0x2170FCu;
            goto label_2170fc;
        }
    }
    ctx->pc = 0x2170E0u;
label_2170e0:
    // 0x2170e0: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x2170e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_2170e4:
    // 0x2170e4: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x2170e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_2170e8:
    // 0x2170e8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2170e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2170ec:
    // 0x2170ec: 0x24638680  addiu       $v1, $v1, -0x7980
    ctx->pc = 0x2170ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936192));
label_2170f0:
    // 0x2170f0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2170f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2170f4:
    // 0x2170f4: 0x10000020  b           . + 4 + (0x20 << 2)
label_2170f8:
    if (ctx->pc == 0x2170F8u) {
        ctx->pc = 0x2170F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2170F4u;
        // 0x2170f8: 0x658021  addu        $s0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2170FCu;
        goto label_2170fc;
    }
    ctx->pc = 0x2170F4u;
    {
        const bool branch_taken_0x2170f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2170F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2170F4u;
        // 0x2170f8: 0x658021  addu        $s0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2170f4) {
            ctx->pc = 0x217178u;
            goto label_217178;
        }
    }
    ctx->pc = 0x2170FCu;
label_2170fc:
    // 0x2170fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2170fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_217100:
    // 0x217100: 0x14a30009  bne         $a1, $v1, . + 4 + (0x9 << 2)
label_217104:
    if (ctx->pc == 0x217104u) {
        ctx->pc = 0x217104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217100u;
        // 0x217104: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217108u;
        goto label_217108;
    }
    ctx->pc = 0x217100u;
    {
        const bool branch_taken_0x217100 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x217104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217100u;
        // 0x217104: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217100) {
            ctx->pc = 0x217128u;
            goto label_217128;
        }
    }
    ctx->pc = 0x217108u;
label_217108:
    // 0x217108: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x217108u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_21710c:
    // 0x21710c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x21710cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_217110:
    // 0x217110: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x217110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_217114:
    // 0x217114: 0x24638680  addiu       $v1, $v1, -0x7980
    ctx->pc = 0x217114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936192));
label_217118:
    // 0x217118: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x217118u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_21711c:
    // 0x21711c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x21711cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_217120:
    // 0x217120: 0x10000015  b           . + 4 + (0x15 << 2)
label_217124:
    if (ctx->pc == 0x217124u) {
        ctx->pc = 0x217124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217120u;
        // 0x217124: 0x247001e0  addiu       $s0, $v1, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217128u;
        goto label_217128;
    }
    ctx->pc = 0x217120u;
    {
        const bool branch_taken_0x217120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217120u;
        // 0x217124: 0x247001e0  addiu       $s0, $v1, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217120) {
            ctx->pc = 0x217178u;
            goto label_217178;
        }
    }
    ctx->pc = 0x217128u;
label_217128:
    // 0x217128: 0x14a30008  bne         $a1, $v1, . + 4 + (0x8 << 2)
label_21712c:
    if (ctx->pc == 0x21712Cu) {
        ctx->pc = 0x217130u;
        goto label_217130;
    }
    ctx->pc = 0x217128u;
    {
        const bool branch_taken_0x217128 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x217128) {
            ctx->pc = 0x21714Cu;
            goto label_21714c;
        }
    }
    ctx->pc = 0x217130u;
label_217130:
    // 0x217130: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x217130u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_217134:
    // 0x217134: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x217134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_217138:
    // 0x217138: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x217138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_21713c:
    // 0x21713c: 0x24638620  addiu       $v1, $v1, -0x79E0
    ctx->pc = 0x21713cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936096));
label_217140:
    // 0x217140: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x217140u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_217144:
    // 0x217144: 0x1000000c  b           . + 4 + (0xC << 2)
label_217148:
    if (ctx->pc == 0x217148u) {
        ctx->pc = 0x217148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217144u;
        // 0x217148: 0x658021  addu        $s0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21714Cu;
        goto label_21714c;
    }
    ctx->pc = 0x217144u;
    {
        const bool branch_taken_0x217144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217144u;
        // 0x217148: 0x658021  addu        $s0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217144) {
            ctx->pc = 0x217178u;
            goto label_217178;
        }
    }
    ctx->pc = 0x21714Cu;
label_21714c:
    // 0x21714c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21714cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_217150:
    // 0x217150: 0x14a30008  bne         $a1, $v1, . + 4 + (0x8 << 2)
label_217154:
    if (ctx->pc == 0x217154u) {
        ctx->pc = 0x217154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217150u;
        // 0x217154: 0x3c100059  lui         $s0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217158u;
        goto label_217158;
    }
    ctx->pc = 0x217150u;
    {
        const bool branch_taken_0x217150 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x217154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217150u;
        // 0x217154: 0x3c100059  lui         $s0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217150) {
            ctx->pc = 0x217174u;
            goto label_217174;
        }
    }
    ctx->pc = 0x217158u;
label_217158:
    // 0x217158: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x217158u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_21715c:
    // 0x21715c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x21715cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_217160:
    // 0x217160: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x217160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_217164:
    // 0x217164: 0x24638320  addiu       $v1, $v1, -0x7CE0
    ctx->pc = 0x217164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935328));
label_217168:
    // 0x217168: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x217168u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_21716c:
    // 0x21716c: 0x10000002  b           . + 4 + (0x2 << 2)
label_217170:
    if (ctx->pc == 0x217170u) {
        ctx->pc = 0x217170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21716Cu;
        // 0x217170: 0x658021  addu        $s0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217174u;
        goto label_217174;
    }
    ctx->pc = 0x21716Cu;
    {
        const bool branch_taken_0x21716c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21716Cu;
        // 0x217170: 0x658021  addu        $s0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21716c) {
            ctx->pc = 0x217178u;
            goto label_217178;
        }
    }
    ctx->pc = 0x217174u;
label_217174:
    // 0x217174: 0x261082f0  addiu       $s0, $s0, -0x7D10
    ctx->pc = 0x217174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935280));
label_217178:
    // 0x217178: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x217178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_21717c:
    // 0x21717c: 0x10600055  beqz        $v1, . + 4 + (0x55 << 2)
label_217180:
    if (ctx->pc == 0x217180u) {
        ctx->pc = 0x217184u;
        goto label_217184;
    }
    ctx->pc = 0x21717Cu;
    {
        const bool branch_taken_0x21717c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21717c) {
            ctx->pc = 0x2172D4u;
            goto label_2172d4;
        }
    }
    ctx->pc = 0x217184u;
label_217184:
    // 0x217184: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x217184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_217188:
    // 0x217188: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21718c:
    // 0x21718c: 0xac228a50  sw          $v0, -0x75B0($at)
    ctx->pc = 0x21718cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937168), GPR_U32(ctx, 2));
label_217190:
    // 0x217190: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x217190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_217194:
    // 0x217194: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x217194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
label_217198:
    // 0x217198: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21719c:
    // 0x21719c: 0xac228a54  sw          $v0, -0x75AC($at)
    ctx->pc = 0x21719cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937172), GPR_U32(ctx, 2));
label_2171a0:
    // 0x2171a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2171a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2171a4:
    // 0x2171a4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2171a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2171a8:
    // 0x2171a8: 0xac228a5c  sw          $v0, -0x75A4($at)
    ctx->pc = 0x2171a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937180), GPR_U32(ctx, 2));
label_2171ac:
    // 0x2171ac: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2171acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2171b0:
    // 0x2171b0: 0xaf84923c  sw          $a0, -0x6DC4($gp)
    ctx->pc = 0x2171b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939196), GPR_U32(ctx, 4));
label_2171b4:
    // 0x2171b4: 0xac208a58  sw          $zero, -0x75A8($at)
    ctx->pc = 0x2171b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937176), GPR_U32(ctx, 0));
label_2171b8:
    // 0x2171b8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2171b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2171bc:
    // 0x2171bc: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2171bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2171c0:
    // 0x2171c0: 0x8f859248  lw          $a1, -0x6DB8($gp)
    ctx->pc = 0x2171c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939208)));
label_2171c4:
    // 0x2171c4: 0xc4258a90  lwc1        $f5, -0x7570($at)
    ctx->pc = 0x2171c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2171c8:
    // 0x2171c8: 0xaf839240  sw          $v1, -0x6DC0($gp)
    ctx->pc = 0x2171c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939200), GPR_U32(ctx, 3));
label_2171cc:
    // 0x2171cc: 0xaf839234  sw          $v1, -0x6DCC($gp)
    ctx->pc = 0x2171ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939188), GPR_U32(ctx, 3));
label_2171d0:
    // 0x2171d0: 0xaf839230  sw          $v1, -0x6DD0($gp)
    ctx->pc = 0x2171d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939184), GPR_U32(ctx, 3));
label_2171d4:
    // 0x2171d4: 0xaf809238  sw          $zero, -0x6DC8($gp)
    ctx->pc = 0x2171d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939192), GPR_U32(ctx, 0));
label_2171d8:
    // 0x2171d8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2171d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2171dc:
    // 0x2171dc: 0xc4248a94  lwc1        $f4, -0x756C($at)
    ctx->pc = 0x2171dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2171e0:
    // 0x2171e0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2171e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2171e4:
    // 0x2171e4: 0xc4238a98  lwc1        $f3, -0x7568($at)
    ctx->pc = 0x2171e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2171e8:
    // 0x2171e8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2171e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2171ec:
    // 0x2171ec: 0xc4228a9c  lwc1        $f2, -0x7564($at)
    ctx->pc = 0x2171ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2171f0:
    // 0x2171f0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2171f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2171f4:
    // 0x2171f4: 0xc4218a80  lwc1        $f1, -0x7580($at)
    ctx->pc = 0x2171f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2171f8:
    // 0x2171f8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2171f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2171fc:
    // 0x2171fc: 0xc4208a84  lwc1        $f0, -0x757C($at)
    ctx->pc = 0x2171fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_217200:
    // 0x217200: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_217204:
    // 0x217204: 0xe4258a70  swc1        $f5, -0x7590($at)
    ctx->pc = 0x217204u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937200), bits); }
label_217208:
    // 0x217208: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21720c:
    // 0x21720c: 0xe4248a74  swc1        $f4, -0x758C($at)
    ctx->pc = 0x21720cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937204), bits); }
label_217210:
    // 0x217210: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_217214:
    // 0x217214: 0xe4238a78  swc1        $f3, -0x7588($at)
    ctx->pc = 0x217214u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937208), bits); }
label_217218:
    // 0x217218: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21721c:
    // 0x21721c: 0xe4228a7c  swc1        $f2, -0x7584($at)
    ctx->pc = 0x21721cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937212), bits); }
label_217220:
    // 0x217220: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_217224:
    // 0x217224: 0xe4218a60  swc1        $f1, -0x75A0($at)
    ctx->pc = 0x217224u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937184), bits); }
label_217228:
    // 0x217228: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21722c:
    // 0x21722c: 0xe4208a64  swc1        $f0, -0x759C($at)
    ctx->pc = 0x21722cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937188), bits); }
label_217230:
    // 0x217230: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_217234:
    // 0x217234: 0xc4218a88  lwc1        $f1, -0x7578($at)
    ctx->pc = 0x217234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_217238:
    // 0x217238: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21723c:
    // 0x21723c: 0xc4208a8c  lwc1        $f0, -0x7574($at)
    ctx->pc = 0x21723cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_217240:
    // 0x217240: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_217244:
    // 0x217244: 0xe4218a68  swc1        $f1, -0x7598($at)
    ctx->pc = 0x217244u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937192), bits); }
label_217248:
    // 0x217248: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21724c:
    // 0x21724c: 0xc05eff8  jal         func_17BFE0
label_217250:
    if (ctx->pc == 0x217250u) {
        ctx->pc = 0x217250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21724Cu;
        // 0x217250: 0xe4208a6c  swc1        $f0, -0x7594($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937196), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x217254u;
        goto label_217254;
    }
    ctx->pc = 0x21724Cu;
    SET_GPR_U32(ctx, 31, 0x217254u);
    ctx->pc = 0x217250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21724Cu;
    // 0x217250: 0xe4208a6c  swc1        $f0, -0x7594($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937196), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BFE0u, 0x21724Cu, 0x217254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217254u;
label_217254:
    // 0x217254: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x217254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_217258:
    // 0x217258: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x217258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
label_21725c:
    // 0x21725c: 0x8f86924c  lw          $a2, -0x6DB4($gp)
    ctx->pc = 0x21725cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939212)));
label_217260:
    // 0x217260: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x217260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_217264:
    // 0x217264: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x217264u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_217268:
    // 0x217268: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x217268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_21726c:
    // 0x21726c: 0x24a5d670  addiu       $a1, $a1, -0x2990
    ctx->pc = 0x21726cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956656));
label_217270:
    // 0x217270: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x217270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_217274:
    // 0x217274: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x217274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_217278:
    // 0x217278: 0x2484d674  addiu       $a0, $a0, -0x298C
    ctx->pc = 0x217278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956660));
label_21727c:
    // 0x21727c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21727cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_217280:
    // 0x217280: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x217280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_217284:
    // 0x217284: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x217284u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_217288:
    // 0x217288: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x217288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_21728c:
    // 0x21728c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x21728cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_217290:
    // 0x217290: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x217290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_217294:
    // 0x217294: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x217294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_217298:
    // 0x217298: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x217298u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
label_21729c:
    // 0x21729c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x21729cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_2172a0:
    // 0x2172a0: 0xe4218a40  swc1        $f1, -0x75C0($at)
    ctx->pc = 0x2172a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937152), bits); }
label_2172a4:
    // 0x2172a4: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2172a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2172a8:
    // 0x2172a8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2172a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2172ac:
    // 0x2172ac: 0xe4218a44  swc1        $f1, -0x75BC($at)
    ctx->pc = 0x2172acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937156), bits); }
label_2172b0:
    // 0x2172b0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2172b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2172b4:
    // 0x2172b4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2172b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2172b8:
    // 0x2172b8: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x2172b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2172bc:
    // 0x2172bc: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2172bcu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
label_2172c0:
    // 0x2172c0: 0xac238a4c  sw          $v1, -0x75B4($at)
    ctx->pc = 0x2172c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937164), GPR_U32(ctx, 3));
label_2172c4:
    // 0x2172c4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2172c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2172c8:
    // 0x2172c8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2172c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_2172cc:
    // 0x2172cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2172ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2172d0:
    // 0x2172d0: 0xe4208a48  swc1        $f0, -0x75B8($at)
    ctx->pc = 0x2172d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937160), bits); }
label_2172d4:
    // 0x2172d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2172d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2172d8:
    // 0x2172d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2172d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2172dc:
    // 0x2172dc: 0x3e00008  jr          $ra
label_2172e0:
    if (ctx->pc == 0x2172E0u) {
        ctx->pc = 0x2172E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2172DCu;
        // 0x2172e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2172E4u;
        goto label_2172e4;
    }
    ctx->pc = 0x2172DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2172E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2172DCu;
        // 0x2172e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2172DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2172E4u;
label_2172e4:
    // 0x2172e4: 0x0  nop
    ctx->pc = 0x2172e4u;
    // NOP
label_2172e8:
    // 0x2172e8: 0x0  nop
    ctx->pc = 0x2172e8u;
    // NOP
label_2172ec:
    // 0x2172ec: 0x0  nop
    ctx->pc = 0x2172ecu;
    // NOP
label_2172f0:
    // 0x2172f0: 0xe78c921c  swc1        $f12, -0x6DE4($gp)
    ctx->pc = 0x2172f0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939164), bits); }
label_2172f4:
    // 0x2172f4: 0x3e00008  jr          $ra
label_2172f8:
    if (ctx->pc == 0x2172F8u) {
        ctx->pc = 0x2172F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2172F4u;
        // 0x2172f8: 0xe78d9218  swc1        $f13, -0x6DE8($gp) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939160), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2172FCu;
        goto label_2172fc;
    }
    ctx->pc = 0x2172F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2172F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2172F4u;
        // 0x2172f8: 0xe78d9218  swc1        $f13, -0x6DE8($gp) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939160), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2172F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2172FCu;
label_2172fc:
    // 0x2172fc: 0x0  nop
    ctx->pc = 0x2172fcu;
    // NOP
label_217300:
    // 0x217300: 0xe78c9228  swc1        $f12, -0x6DD8($gp)
    ctx->pc = 0x217300u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939176), bits); }
label_217304:
    // 0x217304: 0x3e00008  jr          $ra
label_217308:
    if (ctx->pc == 0x217308u) {
        ctx->pc = 0x217308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217304u;
        // 0x217308: 0xe78d9224  swc1        $f13, -0x6DDC($gp) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939172), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21730Cu;
        goto label_21730c;
    }
    ctx->pc = 0x217304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217304u;
        // 0x217308: 0xe78d9224  swc1        $f13, -0x6DDC($gp) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939172), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21730Cu;
label_21730c:
    // 0x21730c: 0x0  nop
    ctx->pc = 0x21730cu;
    // NOP
label_217310:
    // 0x217310: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
label_217314:
    if (ctx->pc == 0x217314u) {
        ctx->pc = 0x217314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217310u;
        // 0x217314: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217318u;
        goto label_217318;
    }
    ctx->pc = 0x217310u;
    {
        const bool branch_taken_0x217310 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x217314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217310u;
        // 0x217314: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217310) {
            ctx->pc = 0x217334u;
            goto label_217334;
        }
    }
    ctx->pc = 0x217318u;
label_217318:
    // 0x217318: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x217318u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_21731c:
    // 0x21731c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x21731cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_217320:
    // 0x217320: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x217320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_217324:
    // 0x217324: 0x24638680  addiu       $v1, $v1, -0x7980
    ctx->pc = 0x217324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936192));
label_217328:
    // 0x217328: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x217328u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_21732c:
    // 0x21732c: 0x10000020  b           . + 4 + (0x20 << 2)
label_217330:
    if (ctx->pc == 0x217330u) {
        ctx->pc = 0x217330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21732Cu;
        // 0x217330: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217334u;
        goto label_217334;
    }
    ctx->pc = 0x21732Cu;
    {
        const bool branch_taken_0x21732c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21732Cu;
        // 0x217330: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21732c) {
            ctx->pc = 0x2173B0u;
            goto label_2173b0;
        }
    }
    ctx->pc = 0x217334u;
label_217334:
    // 0x217334: 0x14a30009  bne         $a1, $v1, . + 4 + (0x9 << 2)
label_217338:
    if (ctx->pc == 0x217338u) {
        ctx->pc = 0x21733Cu;
        goto label_21733c;
    }
    ctx->pc = 0x217334u;
    {
        const bool branch_taken_0x217334 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x217334) {
            ctx->pc = 0x21735Cu;
            goto label_21735c;
        }
    }
    ctx->pc = 0x21733Cu;
label_21733c:
    // 0x21733c: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x21733cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_217340:
    // 0x217340: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x217340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_217344:
    // 0x217344: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x217344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_217348:
    // 0x217348: 0x24638680  addiu       $v1, $v1, -0x7980
    ctx->pc = 0x217348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936192));
label_21734c:
    // 0x21734c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x21734cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_217350:
    // 0x217350: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x217350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_217354:
    // 0x217354: 0x10000016  b           . + 4 + (0x16 << 2)
label_217358:
    if (ctx->pc == 0x217358u) {
        ctx->pc = 0x217358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217354u;
        // 0x217358: 0x246501e0  addiu       $a1, $v1, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21735Cu;
        goto label_21735c;
    }
    ctx->pc = 0x217354u;
    {
        const bool branch_taken_0x217354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217354u;
        // 0x217358: 0x246501e0  addiu       $a1, $v1, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217354) {
            ctx->pc = 0x2173B0u;
            goto label_2173b0;
        }
    }
    ctx->pc = 0x21735Cu;
label_21735c:
    // 0x21735c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21735cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_217360:
    // 0x217360: 0x14a30008  bne         $a1, $v1, . + 4 + (0x8 << 2)
label_217364:
    if (ctx->pc == 0x217364u) {
        ctx->pc = 0x217364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217360u;
        // 0x217364: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217368u;
        goto label_217368;
    }
    ctx->pc = 0x217360u;
    {
        const bool branch_taken_0x217360 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x217364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217360u;
        // 0x217364: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217360) {
            ctx->pc = 0x217384u;
            goto label_217384;
        }
    }
    ctx->pc = 0x217368u;
label_217368:
    // 0x217368: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x217368u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_21736c:
    // 0x21736c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x21736cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_217370:
    // 0x217370: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x217370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_217374:
    // 0x217374: 0x24638620  addiu       $v1, $v1, -0x79E0
    ctx->pc = 0x217374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936096));
label_217378:
    // 0x217378: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x217378u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_21737c:
    // 0x21737c: 0x1000000c  b           . + 4 + (0xC << 2)
label_217380:
    if (ctx->pc == 0x217380u) {
        ctx->pc = 0x217380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21737Cu;
        // 0x217380: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217384u;
        goto label_217384;
    }
    ctx->pc = 0x21737Cu;
    {
        const bool branch_taken_0x21737c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21737Cu;
        // 0x217380: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21737c) {
            ctx->pc = 0x2173B0u;
            goto label_2173b0;
        }
    }
    ctx->pc = 0x217384u;
label_217384:
    // 0x217384: 0x14a30008  bne         $a1, $v1, . + 4 + (0x8 << 2)
label_217388:
    if (ctx->pc == 0x217388u) {
        ctx->pc = 0x21738Cu;
        goto label_21738c;
    }
    ctx->pc = 0x217384u;
    {
        const bool branch_taken_0x217384 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x217384) {
            ctx->pc = 0x2173A8u;
            goto label_2173a8;
        }
    }
    ctx->pc = 0x21738Cu;
label_21738c:
    // 0x21738c: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x21738cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_217390:
    // 0x217390: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x217390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_217394:
    // 0x217394: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x217394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_217398:
    // 0x217398: 0x24638320  addiu       $v1, $v1, -0x7CE0
    ctx->pc = 0x217398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935328));
label_21739c:
    // 0x21739c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x21739cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2173a0:
    // 0x2173a0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2173a4:
    if (ctx->pc == 0x2173A4u) {
        ctx->pc = 0x2173A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2173A0u;
        // 0x2173a4: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2173A8u;
        goto label_2173a8;
    }
    ctx->pc = 0x2173A0u;
    {
        const bool branch_taken_0x2173a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2173A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2173A0u;
        // 0x2173a4: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2173a0) {
            ctx->pc = 0x2173B0u;
            goto label_2173b0;
        }
    }
    ctx->pc = 0x2173A8u;
label_2173a8:
    // 0x2173a8: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x2173a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_2173ac:
    // 0x2173ac: 0x24a582f0  addiu       $a1, $a1, -0x7D10
    ctx->pc = 0x2173acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935280));
label_2173b0:
    // 0x2173b0: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x2173b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_2173b4:
    // 0x2173b4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_2173b8:
    if (ctx->pc == 0x2173B8u) {
        ctx->pc = 0x2173BCu;
        goto label_2173bc;
    }
    ctx->pc = 0x2173B4u;
    {
        const bool branch_taken_0x2173b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2173b4) {
            ctx->pc = 0x2173C0u;
            goto label_2173c0;
        }
    }
    ctx->pc = 0x2173BCu;
label_2173bc:
    // 0x2173bc: 0xaca4002c  sw          $a0, 0x2C($a1)
    ctx->pc = 0x2173bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 4));
label_2173c0:
    // 0x2173c0: 0x3e00008  jr          $ra
label_2173c4:
    if (ctx->pc == 0x2173C4u) {
        ctx->pc = 0x2173C8u;
        goto label_2173c8;
    }
    ctx->pc = 0x2173C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2173C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2173C8u;
label_2173c8:
    // 0x2173c8: 0x0  nop
    ctx->pc = 0x2173c8u;
    // NOP
label_2173cc:
    // 0x2173cc: 0x0  nop
    ctx->pc = 0x2173ccu;
    // NOP
label_2173d0:
    // 0x2173d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2173d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2173d4:
    // 0x2173d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2173d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2173d8:
    // 0x2173d8: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_2173dc:
    if (ctx->pc == 0x2173DCu) {
        ctx->pc = 0x2173DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2173D8u;
        // 0x2173dc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2173E0u;
        goto label_2173e0;
    }
    ctx->pc = 0x2173D8u;
    {
        const bool branch_taken_0x2173d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2173DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2173D8u;
        // 0x2173dc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2173d8) {
            ctx->pc = 0x2173FCu;
            goto label_2173fc;
        }
    }
    ctx->pc = 0x2173E0u;
label_2173e0:
    // 0x2173e0: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2173e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_2173e4:
    // 0x2173e4: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x2173e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_2173e8:
    // 0x2173e8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2173e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2173ec:
    // 0x2173ec: 0x24638680  addiu       $v1, $v1, -0x7980
    ctx->pc = 0x2173ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936192));
label_2173f0:
    // 0x2173f0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2173f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2173f4:
    // 0x2173f4: 0x10000020  b           . + 4 + (0x20 << 2)
label_2173f8:
    if (ctx->pc == 0x2173F8u) {
        ctx->pc = 0x2173F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2173F4u;
        // 0x2173f8: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2173FCu;
        goto label_2173fc;
    }
    ctx->pc = 0x2173F4u;
    {
        const bool branch_taken_0x2173f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2173F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2173F4u;
        // 0x2173f8: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2173f4) {
            ctx->pc = 0x217478u;
            goto label_217478;
        }
    }
    ctx->pc = 0x2173FCu;
label_2173fc:
    // 0x2173fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2173fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_217400:
    // 0x217400: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
label_217404:
    if (ctx->pc == 0x217404u) {
        ctx->pc = 0x217404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217400u;
        // 0x217404: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217408u;
        goto label_217408;
    }
    ctx->pc = 0x217400u;
    {
        const bool branch_taken_0x217400 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x217404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217400u;
        // 0x217404: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217400) {
            ctx->pc = 0x217428u;
            goto label_217428;
        }
    }
    ctx->pc = 0x217408u;
label_217408:
    // 0x217408: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x217408u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_21740c:
    // 0x21740c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x21740cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_217410:
    // 0x217410: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x217410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_217414:
    // 0x217414: 0x24638680  addiu       $v1, $v1, -0x7980
    ctx->pc = 0x217414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936192));
label_217418:
    // 0x217418: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x217418u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_21741c:
    // 0x21741c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21741cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_217420:
    // 0x217420: 0x10000015  b           . + 4 + (0x15 << 2)
label_217424:
    if (ctx->pc == 0x217424u) {
        ctx->pc = 0x217424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217420u;
        // 0x217424: 0x247001e0  addiu       $s0, $v1, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217428u;
        goto label_217428;
    }
    ctx->pc = 0x217420u;
    {
        const bool branch_taken_0x217420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217420u;
        // 0x217424: 0x247001e0  addiu       $s0, $v1, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217420) {
            ctx->pc = 0x217478u;
            goto label_217478;
        }
    }
    ctx->pc = 0x217428u;
label_217428:
    // 0x217428: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
label_21742c:
    if (ctx->pc == 0x21742Cu) {
        ctx->pc = 0x217430u;
        goto label_217430;
    }
    ctx->pc = 0x217428u;
    {
        const bool branch_taken_0x217428 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x217428) {
            ctx->pc = 0x21744Cu;
            goto label_21744c;
        }
    }
    ctx->pc = 0x217430u;
label_217430:
    // 0x217430: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x217430u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_217434:
    // 0x217434: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x217434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_217438:
    // 0x217438: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x217438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_21743c:
    // 0x21743c: 0x24638620  addiu       $v1, $v1, -0x79E0
    ctx->pc = 0x21743cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936096));
label_217440:
    // 0x217440: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x217440u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_217444:
    // 0x217444: 0x1000000c  b           . + 4 + (0xC << 2)
label_217448:
    if (ctx->pc == 0x217448u) {
        ctx->pc = 0x217448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217444u;
        // 0x217448: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21744Cu;
        goto label_21744c;
    }
    ctx->pc = 0x217444u;
    {
        const bool branch_taken_0x217444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217444u;
        // 0x217448: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217444) {
            ctx->pc = 0x217478u;
            goto label_217478;
        }
    }
    ctx->pc = 0x21744Cu;
label_21744c:
    // 0x21744c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21744cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_217450:
    // 0x217450: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
label_217454:
    if (ctx->pc == 0x217454u) {
        ctx->pc = 0x217454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217450u;
        // 0x217454: 0x3c100059  lui         $s0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217458u;
        goto label_217458;
    }
    ctx->pc = 0x217450u;
    {
        const bool branch_taken_0x217450 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x217454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217450u;
        // 0x217454: 0x3c100059  lui         $s0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217450) {
            ctx->pc = 0x217474u;
            goto label_217474;
        }
    }
    ctx->pc = 0x217458u;
label_217458:
    // 0x217458: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x217458u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_21745c:
    // 0x21745c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x21745cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_217460:
    // 0x217460: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x217460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_217464:
    // 0x217464: 0x24638320  addiu       $v1, $v1, -0x7CE0
    ctx->pc = 0x217464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935328));
label_217468:
    // 0x217468: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x217468u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_21746c:
    // 0x21746c: 0x10000002  b           . + 4 + (0x2 << 2)
label_217470:
    if (ctx->pc == 0x217470u) {
        ctx->pc = 0x217470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21746Cu;
        // 0x217470: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217474u;
        goto label_217474;
    }
    ctx->pc = 0x21746Cu;
    {
        const bool branch_taken_0x21746c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21746Cu;
        // 0x217470: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21746c) {
            ctx->pc = 0x217478u;
            goto label_217478;
        }
    }
    ctx->pc = 0x217474u;
label_217474:
    // 0x217474: 0x261082f0  addiu       $s0, $s0, -0x7D10
    ctx->pc = 0x217474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935280));
label_217478:
    // 0x217478: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x217478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_21747c:
    // 0x21747c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_217480:
    if (ctx->pc == 0x217480u) {
        ctx->pc = 0x217484u;
        goto label_217484;
    }
    ctx->pc = 0x21747Cu;
    {
        const bool branch_taken_0x21747c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21747c) {
            ctx->pc = 0x2174B8u;
            goto label_2174b8;
        }
    }
    ctx->pc = 0x217484u;
label_217484:
    // 0x217484: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x217484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_217488:
    // 0x217488: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x217488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_21748c:
    // 0x21748c: 0xe60c0004  swc1        $f12, 0x4($s0)
    ctx->pc = 0x21748cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_217490:
    // 0x217490: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x217490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_217494:
    // 0x217494: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x217494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_217498:
    // 0x217498: 0xe60d0010  swc1        $f13, 0x10($s0)
    ctx->pc = 0x217498u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_21749c:
    // 0x21749c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x21749cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_2174a0:
    // 0x2174a0: 0xe60e0018  swc1        $f14, 0x18($s0)
    ctx->pc = 0x2174a0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_2174a4:
    // 0x2174a4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2174a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_2174a8:
    // 0x2174a8: 0x8f859248  lw          $a1, -0x6DB8($gp)
    ctx->pc = 0x2174a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939208)));
label_2174ac:
    // 0x2174ac: 0xc05eff8  jal         func_17BFE0
label_2174b0:
    if (ctx->pc == 0x2174B0u) {
        ctx->pc = 0x2174B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2174ACu;
        // 0x2174b0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2174B4u;
        goto label_2174b4;
    }
    ctx->pc = 0x2174ACu;
    SET_GPR_U32(ctx, 31, 0x2174B4u);
    ctx->pc = 0x2174B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2174ACu;
    // 0x2174b0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BFE0u, 0x2174ACu, 0x2174B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2174B4u;
label_2174b4:
    // 0x2174b4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2174b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_2174b8:
    // 0x2174b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2174b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2174bc:
    // 0x2174bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2174bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2174c0:
    // 0x2174c0: 0x3e00008  jr          $ra
label_2174c4:
    if (ctx->pc == 0x2174C4u) {
        ctx->pc = 0x2174C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2174C0u;
        // 0x2174c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2174C8u;
        goto label_2174c8;
    }
    ctx->pc = 0x2174C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2174C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2174C0u;
        // 0x2174c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2174C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2174C8u;
label_2174c8:
    // 0x2174c8: 0x0  nop
    ctx->pc = 0x2174c8u;
    // NOP
label_2174cc:
    // 0x2174cc: 0x0  nop
    ctx->pc = 0x2174ccu;
    // NOP
label_2174d0:
    // 0x2174d0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2174d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2174d4:
    // 0x2174d4: 0xc4208a98  lwc1        $f0, -0x7568($at)
    ctx->pc = 0x2174d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2174d8:
    // 0x2174d8: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x2174d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_2174dc:
    // 0x2174dc: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2174dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2174e0:
    // 0x2174e0: 0x3e00008  jr          $ra
label_2174e4:
    if (ctx->pc == 0x2174E4u) {
        ctx->pc = 0x2174E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2174E0u;
        // 0x2174e4: 0xe4208a98  swc1        $f0, -0x7568($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937240), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2174E8u;
        goto label_2174e8;
    }
    ctx->pc = 0x2174E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2174E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2174E0u;
        // 0x2174e4: 0xe4208a98  swc1        $f0, -0x7568($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937240), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2174E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2174E8u;
label_2174e8:
    // 0x2174e8: 0x0  nop
    ctx->pc = 0x2174e8u;
    // NOP
label_2174ec:
    // 0x2174ec: 0x0  nop
    ctx->pc = 0x2174ecu;
    // NOP
label_2174f0:
    // 0x2174f0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2174f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2174f4:
    // 0x2174f4: 0x3e00008  jr          $ra
label_2174f8:
    if (ctx->pc == 0x2174F8u) {
        ctx->pc = 0x2174F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2174F4u;
        // 0x2174f8: 0xc4208a98  lwc1        $f0, -0x7568($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2174FCu;
        goto label_2174fc;
    }
    ctx->pc = 0x2174F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2174F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2174F4u;
        // 0x2174f8: 0xc4208a98  lwc1        $f0, -0x7568($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294937240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2174F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2174FCu;
label_2174fc:
    // 0x2174fc: 0x0  nop
    ctx->pc = 0x2174fcu;
    // NOP
label_217500:
    // 0x217500: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x217500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_217504:
    // 0x217504: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x217504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_217508:
    // 0x217508: 0x9025490c  lbu         $a1, 0x490C($at)
    ctx->pc = 0x217508u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_21750c:
    // 0x21750c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_217510:
    if (ctx->pc == 0x217510u) {
        ctx->pc = 0x217510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21750Cu;
        // 0x217510: 0x24030049  addiu       $v1, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217514u;
        goto label_217514;
    }
    ctx->pc = 0x21750Cu;
    {
        const bool branch_taken_0x21750c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x217510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21750Cu;
        // 0x217510: 0x24030049  addiu       $v1, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21750c) {
            ctx->pc = 0x21751Cu;
            goto label_21751c;
        }
    }
    ctx->pc = 0x217514u;
label_217514:
    // 0x217514: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
label_217518:
    if (ctx->pc == 0x217518u) {
        ctx->pc = 0x21751Cu;
        goto label_21751c;
    }
    ctx->pc = 0x217514u;
    {
        const bool branch_taken_0x217514 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x217514) {
            ctx->pc = 0x217530u;
            goto label_217530;
        }
    }
    ctx->pc = 0x21751Cu;
label_21751c:
    // 0x21751c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21751cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217520:
    // 0x217520: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x217520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_217524:
    // 0x217524: 0x64280a  movz        $a1, $v1, $a0
    ctx->pc = 0x217524u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_217528:
    // 0x217528: 0x10000004  b           . + 4 + (0x4 << 2)
label_21752c:
    if (ctx->pc == 0x21752Cu) {
        ctx->pc = 0x21752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217528u;
        // 0x21752c: 0xaf859248  sw          $a1, -0x6DB8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939208), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217530u;
        goto label_217530;
    }
    ctx->pc = 0x217528u;
    {
        const bool branch_taken_0x217528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217528u;
        // 0x21752c: 0xaf859248  sw          $a1, -0x6DB8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939208), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217528) {
            ctx->pc = 0x21753Cu;
            goto label_21753c;
        }
    }
    ctx->pc = 0x217530u;
label_217530:
    // 0x217530: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x217530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_217534:
    // 0x217534: 0x4180a  movz        $v1, $zero, $a0
    ctx->pc = 0x217534u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_217538:
    // 0x217538: 0xaf839248  sw          $v1, -0x6DB8($gp)
    ctx->pc = 0x217538u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939208), GPR_U32(ctx, 3));
label_21753c:
    // 0x21753c: 0x3e00008  jr          $ra
label_217540:
    if (ctx->pc == 0x217540u) {
        ctx->pc = 0x217544u;
        goto label_217544;
    }
    ctx->pc = 0x21753Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21753Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217544u;
label_217544:
    // 0x217544: 0x0  nop
    ctx->pc = 0x217544u;
    // NOP
label_217548:
    // 0x217548: 0x0  nop
    ctx->pc = 0x217548u;
    // NOP
label_21754c:
    // 0x21754c: 0x0  nop
    ctx->pc = 0x21754cu;
    // NOP
label_217550:
    // 0x217550: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x217550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_217554:
    // 0x217554: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x217554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_217558:
    // 0x217558: 0x2442d8b0  addiu       $v0, $v0, -0x2750
    ctx->pc = 0x217558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957232));
label_21755c:
    // 0x21755c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21755cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_217560:
    // 0x217560: 0x3e00008  jr          $ra
label_217564:
    if (ctx->pc == 0x217564u) {
        ctx->pc = 0x217564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217560u;
        // 0x217564: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x217568u;
        goto label_217568;
    }
    ctx->pc = 0x217560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217560u;
        // 0x217564: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217568u;
label_217568:
    // 0x217568: 0x0  nop
    ctx->pc = 0x217568u;
    // NOP
label_21756c:
    // 0x21756c: 0x0  nop
    ctx->pc = 0x21756cu;
    // NOP
label_217570:
    // 0x217570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x217570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_217574:
    // 0x217574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_217578:
    // 0x217578: 0xc085da4  jal         func_217690
label_21757c:
    if (ctx->pc == 0x21757Cu) {
        ctx->pc = 0x217580u;
        goto label_217580;
    }
    ctx->pc = 0x217578u;
    SET_GPR_U32(ctx, 31, 0x217580u);
    ctx->pc = 0x217690u;
    goto label_217690;
    ctx->pc = 0x217580u;
label_217580:
    // 0x217580: 0xc085e24  jal         func_217890
label_217584:
    if (ctx->pc == 0x217584u) {
        ctx->pc = 0x217588u;
        goto label_217588;
    }
    ctx->pc = 0x217580u;
    SET_GPR_U32(ctx, 31, 0x217588u);
    ctx->pc = 0x217890u;
    { ctx->pc = 0x217890; return; }
    ctx->pc = 0x217588u;
label_217588:
    // 0x217588: 0xc060258  jal         func_180960
label_21758c:
    if (ctx->pc == 0x21758Cu) {
        ctx->pc = 0x217590u;
        goto label_217590;
    }
    ctx->pc = 0x217588u;
    SET_GPR_U32(ctx, 31, 0x217590u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x217588u, 0x217590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217590u;
label_217590:
    // 0x217590: 0xc060258  jal         func_180960
label_217594:
    if (ctx->pc == 0x217594u) {
        ctx->pc = 0x217598u;
        goto label_217598;
    }
    ctx->pc = 0x217590u;
    SET_GPR_U32(ctx, 31, 0x217598u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x217590u, 0x217598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217598u;
label_217598:
    // 0x217598: 0xc085d70  jal         func_2175C0
label_21759c:
    if (ctx->pc == 0x21759Cu) {
        ctx->pc = 0x2175A0u;
        goto label_2175a0;
    }
    ctx->pc = 0x217598u;
    SET_GPR_U32(ctx, 31, 0x2175A0u);
    ctx->pc = 0x2175C0u;
    goto label_2175c0;
    ctx->pc = 0x2175A0u;
label_2175a0:
    // 0x2175a0: 0x8f849270  lw          $a0, -0x6D90($gp)
    ctx->pc = 0x2175a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939248)));
label_2175a4:
    // 0x2175a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2175a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2175a8:
    // 0x2175a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2175a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2175ac:
    // 0x2175ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2175acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2175b0:
    // 0x2175b0: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x2175b0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_2175b4:
    // 0x2175b4: 0x3e00008  jr          $ra
label_2175b8:
    if (ctx->pc == 0x2175B8u) {
        ctx->pc = 0x2175B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2175B4u;
        // 0x2175b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2175BCu;
        goto label_2175bc;
    }
    ctx->pc = 0x2175B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2175B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2175B4u;
        // 0x2175b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2175B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2175BCu;
label_2175bc:
    // 0x2175bc: 0x0  nop
    ctx->pc = 0x2175bcu;
    // NOP
label_2175c0:
    // 0x2175c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2175c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2175c4:
    // 0x2175c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2175c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2175c8:
    // 0x2175c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2175c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2175cc:
    // 0x2175cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2175ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2175d0:
    // 0x2175d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2175d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2175d4:
    // 0x2175d4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2175d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2175d8:
    // 0x2175d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2175d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2175dc:
    // 0x2175dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2175dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2175e0:
    // 0x2175e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2175e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2175e4:
    // 0x2175e4: 0x27829260  addiu       $v0, $gp, -0x6DA0
    ctx->pc = 0x2175e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939232));
label_2175e8:
    // 0x2175e8: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x2175e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2175ec:
    // 0x2175ec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2175ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2175f0:
    // 0x2175f0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2175f4:
    if (ctx->pc == 0x2175F4u) {
        ctx->pc = 0x2175F8u;
        goto label_2175f8;
    }
    ctx->pc = 0x2175F0u;
    {
        const bool branch_taken_0x2175f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2175f0) {
            ctx->pc = 0x217604u;
            goto label_217604;
        }
    }
    ctx->pc = 0x2175F8u;
label_2175f8:
    // 0x2175f8: 0xc070038  jal         func_1C00E0
label_2175fc:
    if (ctx->pc == 0x2175FCu) {
        ctx->pc = 0x217600u;
        goto label_217600;
    }
    ctx->pc = 0x2175F8u;
    SET_GPR_U32(ctx, 31, 0x217600u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x2175F8u, 0x217600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217600u;
label_217600:
    // 0x217600: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x217600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_217604:
    // 0x217604: 0x0  nop
    ctx->pc = 0x217604u;
    // NOP
label_217608:
    // 0x217608: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x217608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21760c:
    // 0x21760c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21760cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217610:
    // 0x217610: 0x0  nop
    ctx->pc = 0x217610u;
    // NOP
label_217614:
    // 0x217614: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x217614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_217618:
    // 0x217618: 0x24428c00  addiu       $v0, $v0, -0x7400
    ctx->pc = 0x217618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937600));
label_21761c:
    // 0x21761c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x21761cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_217620:
    // 0x217620: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x217620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_217624:
    // 0x217624: 0x52a021  addu        $s4, $v0, $s2
    ctx->pc = 0x217624u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_217628:
    // 0x217628: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x217628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_21762c:
    // 0x21762c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_217630:
    if (ctx->pc == 0x217630u) {
        ctx->pc = 0x217634u;
        goto label_217634;
    }
    ctx->pc = 0x21762Cu;
    {
        const bool branch_taken_0x21762c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21762c) {
            ctx->pc = 0x217640u;
            goto label_217640;
        }
    }
    ctx->pc = 0x217634u;
label_217634:
    // 0x217634: 0xc070038  jal         func_1C00E0
label_217638:
    if (ctx->pc == 0x217638u) {
        ctx->pc = 0x21763Cu;
        goto label_21763c;
    }
    ctx->pc = 0x217634u;
    SET_GPR_U32(ctx, 31, 0x21763Cu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x217634u, 0x21763Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21763Cu;
label_21763c:
    // 0x21763c: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x21763cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_217640:
    // 0x217640: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x217640u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_217644:
    // 0x217644: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x217644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_217648:
    // 0x217648: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_21764c:
    if (ctx->pc == 0x21764Cu) {
        ctx->pc = 0x21764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217648u;
        // 0x21764c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217650u;
        goto label_217650;
    }
    ctx->pc = 0x217648u;
    {
        const bool branch_taken_0x217648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217648u;
        // 0x21764c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217648) {
            ctx->pc = 0x217610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217610;
        }
    }
    ctx->pc = 0x217650u;
label_217650:
    // 0x217650: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x217650u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_217654:
    // 0x217654: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x217654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_217658:
    // 0x217658: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_21765c:
    if (ctx->pc == 0x21765Cu) {
        ctx->pc = 0x21765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217658u;
        // 0x21765c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217660u;
        goto label_217660;
    }
    ctx->pc = 0x217658u;
    {
        const bool branch_taken_0x217658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217658u;
        // 0x21765c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217658) {
            ctx->pc = 0x2175E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2175e4;
        }
    }
    ctx->pc = 0x217660u;
label_217660:
    // 0x217660: 0xc07ab58  jal         func_1EAD60
label_217664:
    if (ctx->pc == 0x217664u) {
        ctx->pc = 0x217668u;
        goto label_217668;
    }
    ctx->pc = 0x217660u;
    SET_GPR_U32(ctx, 31, 0x217668u);
    ctx->pc = 0x1EAD60u;
    { ctx->pc = 0x1ead60; return; }
    ctx->pc = 0x217668u;
label_217668:
    // 0x217668: 0xc04e19c  jal         func_138670
label_21766c:
    if (ctx->pc == 0x21766Cu) {
        ctx->pc = 0x217670u;
        goto label_217670;
    }
    ctx->pc = 0x217668u;
    SET_GPR_U32(ctx, 31, 0x217670u);
    ctx->pc = 0x138670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138670u, 0x217668u, 0x217670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217670u;
label_217670:
    // 0x217670: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x217670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_217674:
    // 0x217674: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x217674u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_217678:
    // 0x217678: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x217678u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21767c:
    // 0x21767c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21767cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_217680:
    // 0x217680: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x217680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_217684:
    // 0x217684: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x217684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_217688:
    // 0x217688: 0x3e00008  jr          $ra
label_21768c:
    if (ctx->pc == 0x21768Cu) {
        ctx->pc = 0x21768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217688u;
        // 0x21768c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217690u;
        goto label_217690;
    }
    ctx->pc = 0x217688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217688u;
        // 0x21768c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217690u;
label_217690:
    // 0x217690: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x217690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_217694:
    // 0x217694: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x217694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_217698:
    // 0x217698: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x217698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_21769c:
    // 0x21769c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21769cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_2176a0:
    // 0x2176a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2176a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2176a4:
    // 0x2176a4: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x2176a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_2176a8:
    // 0x2176a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2176a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2176ac:
    // 0x2176ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2176acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2176b0:
    // 0x2176b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2176b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2176b4:
    // 0x2176b4: 0xaf849274  sw          $a0, -0x6D8C($gp)
    ctx->pc = 0x2176b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939252), GPR_U32(ctx, 4));
label_2176b8:
    // 0x2176b8: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x2176b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_2176bc:
    // 0x2176bc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2176bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_2176c0:
    // 0x2176c0: 0xaf849268  sw          $a0, -0x6D98($gp)
    ctx->pc = 0x2176c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939240), GPR_U32(ctx, 4));
label_2176c4:
    // 0x2176c4: 0x8c234900  lw          $v1, 0x4900($at)
    ctx->pc = 0x2176c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_2176c8:
    // 0x2176c8: 0x2464001d  addiu       $a0, $v1, 0x1D
    ctx->pc = 0x2176c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 29));
label_2176cc:
    // 0x2176cc: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x2176ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2176d0:
    // 0x2176d0: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x2176d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_2176d4:
    // 0x2176d4: 0x0  nop
    ctx->pc = 0x2176d4u;
    // NOP
label_2176d8:
    // 0x2176d8: 0x1010  mfhi        $v0
    ctx->pc = 0x2176d8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2176dc:
    // 0x2176dc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2176dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2176e0:
    // 0x2176e0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2176e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_2176e4:
    // 0x2176e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2176e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2176e8:
    // 0x2176e8: 0xaf82926c  sw          $v0, -0x6D94($gp)
    ctx->pc = 0x2176e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939244), GPR_U32(ctx, 2));
label_2176ec:
    // 0x2176ec: 0x8f82926c  lw          $v0, -0x6D94($gp)
    ctx->pc = 0x2176ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939244)));
label_2176f0:
    // 0x2176f0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x2176f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_2176f4:
    // 0x2176f4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_2176f8:
    if (ctx->pc == 0x2176F8u) {
        ctx->pc = 0x2176F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2176F4u;
        // 0x2176f8: 0xaf809270  sw          $zero, -0x6D90($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2176FCu;
        goto label_2176fc;
    }
    ctx->pc = 0x2176F4u;
    {
        const bool branch_taken_0x2176f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2176F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2176F4u;
        // 0x2176f8: 0xaf809270  sw          $zero, -0x6D90($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2176f4) {
            ctx->pc = 0x217704u;
            goto label_217704;
        }
    }
    ctx->pc = 0x2176FCu;
label_2176fc:
    // 0x2176fc: 0x10000003  b           . + 4 + (0x3 << 2)
label_217700:
    if (ctx->pc == 0x217700u) {
        ctx->pc = 0x217700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2176FCu;
        // 0x217700: 0x28412a30  slti        $at, $v0, 0x2A30 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10800) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x217704u;
        goto label_217704;
    }
    ctx->pc = 0x2176FCu;
    {
        const bool branch_taken_0x2176fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2176FCu;
        // 0x217700: 0x28412a30  slti        $at, $v0, 0x2A30 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10800) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2176fc) {
            ctx->pc = 0x21770Cu;
            goto label_21770c;
        }
    }
    ctx->pc = 0x217704u;
label_217704:
    // 0x217704: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x217704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_217708:
    // 0x217708: 0x28412a30  slti        $at, $v0, 0x2A30
    ctx->pc = 0x217708u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10800) ? 1 : 0);
label_21770c:
    // 0x21770c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_217710:
    if (ctx->pc == 0x217710u) {
        ctx->pc = 0x217714u;
        goto label_217714;
    }
    ctx->pc = 0x21770Cu;
    {
        const bool branch_taken_0x21770c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21770c) {
            ctx->pc = 0x21771Cu;
            goto label_21771c;
        }
    }
    ctx->pc = 0x217714u;
label_217714:
    // 0x217714: 0x10000003  b           . + 4 + (0x3 << 2)
label_217718:
    if (ctx->pc == 0x217718u) {
        ctx->pc = 0x217718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217714u;
        // 0x217718: 0xaf82926c  sw          $v0, -0x6D94($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21771Cu;
        goto label_21771c;
    }
    ctx->pc = 0x217714u;
    {
        const bool branch_taken_0x217714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217714u;
        // 0x217718: 0xaf82926c  sw          $v0, -0x6D94($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217714) {
            ctx->pc = 0x217724u;
            goto label_217724;
        }
    }
    ctx->pc = 0x21771Cu;
label_21771c:
    // 0x21771c: 0x24022a30  addiu       $v0, $zero, 0x2A30
    ctx->pc = 0x21771cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10800));
label_217720:
    // 0x217720: 0xaf82926c  sw          $v0, -0x6D94($gp)
    ctx->pc = 0x217720u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939244), GPR_U32(ctx, 2));
label_217724:
    // 0x217724: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x217724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217728:
    // 0x217728: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x217728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21772c:
    // 0x21772c: 0xc06dfd4  jal         func_1B7F50
label_217730:
    if (ctx->pc == 0x217730u) {
        ctx->pc = 0x217730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21772Cu;
        // 0x217730: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217734u;
        goto label_217734;
    }
    ctx->pc = 0x21772Cu;
    SET_GPR_U32(ctx, 31, 0x217734u);
    ctx->pc = 0x217730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21772Cu;
    // 0x217730: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F50u, 0x21772Cu, 0x217734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217734u;
label_217734:
    // 0x217734: 0xc041738  jal         func_105CE0
label_217738:
    if (ctx->pc == 0x217738u) {
        ctx->pc = 0x217738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217734u;
        // 0x217738: 0x240407ed  addiu       $a0, $zero, 0x7ED (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2029));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21773Cu;
        goto label_21773c;
    }
    ctx->pc = 0x217734u;
    SET_GPR_U32(ctx, 31, 0x21773Cu);
    ctx->pc = 0x217738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217734u;
    // 0x217738: 0x240407ed  addiu       $a0, $zero, 0x7ED (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2029));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x217734u, 0x21773Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21773Cu;
label_21773c:
    // 0x21773c: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x21773cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_217740:
    // 0x217740: 0xc070080  jal         func_1C0200
label_217744:
    if (ctx->pc == 0x217744u) {
        ctx->pc = 0x217744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217740u;
        // 0x217744: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217748u;
        goto label_217748;
    }
    ctx->pc = 0x217740u;
    SET_GPR_U32(ctx, 31, 0x217748u);
    ctx->pc = 0x217744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217740u;
    // 0x217744: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x217740u, 0x217748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217748u;
label_217748:
    // 0x217748: 0x240407ed  addiu       $a0, $zero, 0x7ED
    ctx->pc = 0x217748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2029));
label_21774c:
    // 0x21774c: 0xc0416e4  jal         func_105B90
    ctx->pc = 0x217750u;
    return;
}
