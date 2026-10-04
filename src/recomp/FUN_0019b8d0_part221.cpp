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

// Function: FUN_0019b8d0
// Address: 0x19b8d0 - 0x29b8d8
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b8d0_part221(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x206f90u: goto label_206f90;
        case 0x206f94u: goto label_206f94;
        case 0x206f98u: goto label_206f98;
        case 0x206f9cu: goto label_206f9c;
        case 0x206fa0u: goto label_206fa0;
        case 0x206fa4u: goto label_206fa4;
        case 0x206fa8u: goto label_206fa8;
        case 0x206facu: goto label_206fac;
        case 0x206fb0u: goto label_206fb0;
        case 0x206fb4u: goto label_206fb4;
        case 0x206fb8u: goto label_206fb8;
        case 0x206fbcu: goto label_206fbc;
        case 0x206fc0u: goto label_206fc0;
        case 0x206fc4u: goto label_206fc4;
        case 0x206fc8u: goto label_206fc8;
        case 0x206fccu: goto label_206fcc;
        case 0x206fd0u: goto label_206fd0;
        case 0x206fd4u: goto label_206fd4;
        case 0x206fd8u: goto label_206fd8;
        case 0x206fdcu: goto label_206fdc;
        case 0x206fe0u: goto label_206fe0;
        case 0x206fe4u: goto label_206fe4;
        case 0x206fe8u: goto label_206fe8;
        case 0x206fecu: goto label_206fec;
        case 0x206ff0u: goto label_206ff0;
        case 0x206ff4u: goto label_206ff4;
        case 0x206ff8u: goto label_206ff8;
        case 0x206ffcu: goto label_206ffc;
        case 0x207000u: goto label_207000;
        case 0x207004u: goto label_207004;
        case 0x207008u: goto label_207008;
        case 0x20700cu: goto label_20700c;
        case 0x207010u: goto label_207010;
        case 0x207014u: goto label_207014;
        case 0x207018u: goto label_207018;
        case 0x20701cu: goto label_20701c;
        case 0x207020u: goto label_207020;
        case 0x207024u: goto label_207024;
        case 0x207028u: goto label_207028;
        case 0x20702cu: goto label_20702c;
        case 0x207030u: goto label_207030;
        case 0x207034u: goto label_207034;
        case 0x207038u: goto label_207038;
        case 0x20703cu: goto label_20703c;
        case 0x207040u: goto label_207040;
        case 0x207044u: goto label_207044;
        case 0x207048u: goto label_207048;
        case 0x20704cu: goto label_20704c;
        case 0x207050u: goto label_207050;
        case 0x207054u: goto label_207054;
        case 0x207058u: goto label_207058;
        case 0x20705cu: goto label_20705c;
        case 0x207060u: goto label_207060;
        case 0x207064u: goto label_207064;
        case 0x207068u: goto label_207068;
        case 0x20706cu: goto label_20706c;
        case 0x207070u: goto label_207070;
        case 0x207074u: goto label_207074;
        case 0x207078u: goto label_207078;
        case 0x20707cu: goto label_20707c;
        case 0x207080u: goto label_207080;
        case 0x207084u: goto label_207084;
        case 0x207088u: goto label_207088;
        case 0x20708cu: goto label_20708c;
        case 0x207090u: goto label_207090;
        case 0x207094u: goto label_207094;
        case 0x207098u: goto label_207098;
        case 0x20709cu: goto label_20709c;
        case 0x2070a0u: goto label_2070a0;
        case 0x2070a4u: goto label_2070a4;
        case 0x2070a8u: goto label_2070a8;
        case 0x2070acu: goto label_2070ac;
        case 0x2070b0u: goto label_2070b0;
        case 0x2070b4u: goto label_2070b4;
        case 0x2070b8u: goto label_2070b8;
        case 0x2070bcu: goto label_2070bc;
        case 0x2070c0u: goto label_2070c0;
        case 0x2070c4u: goto label_2070c4;
        case 0x2070c8u: goto label_2070c8;
        case 0x2070ccu: goto label_2070cc;
        case 0x2070d0u: goto label_2070d0;
        case 0x2070d4u: goto label_2070d4;
        case 0x2070d8u: goto label_2070d8;
        case 0x2070dcu: goto label_2070dc;
        case 0x2070e0u: goto label_2070e0;
        case 0x2070e4u: goto label_2070e4;
        case 0x2070e8u: goto label_2070e8;
        case 0x2070ecu: goto label_2070ec;
        case 0x2070f0u: goto label_2070f0;
        case 0x2070f4u: goto label_2070f4;
        case 0x2070f8u: goto label_2070f8;
        case 0x2070fcu: goto label_2070fc;
        case 0x207100u: goto label_207100;
        case 0x207104u: goto label_207104;
        case 0x207108u: goto label_207108;
        case 0x20710cu: goto label_20710c;
        case 0x207110u: goto label_207110;
        case 0x207114u: goto label_207114;
        case 0x207118u: goto label_207118;
        case 0x20711cu: goto label_20711c;
        case 0x207120u: goto label_207120;
        case 0x207124u: goto label_207124;
        case 0x207128u: goto label_207128;
        case 0x20712cu: goto label_20712c;
        case 0x207130u: goto label_207130;
        case 0x207134u: goto label_207134;
        case 0x207138u: goto label_207138;
        case 0x20713cu: goto label_20713c;
        case 0x207140u: goto label_207140;
        case 0x207144u: goto label_207144;
        case 0x207148u: goto label_207148;
        case 0x20714cu: goto label_20714c;
        case 0x207150u: goto label_207150;
        case 0x207154u: goto label_207154;
        case 0x207158u: goto label_207158;
        case 0x20715cu: goto label_20715c;
        case 0x207160u: goto label_207160;
        case 0x207164u: goto label_207164;
        case 0x207168u: goto label_207168;
        case 0x20716cu: goto label_20716c;
        case 0x207170u: goto label_207170;
        case 0x207174u: goto label_207174;
        case 0x207178u: goto label_207178;
        case 0x20717cu: goto label_20717c;
        case 0x207180u: goto label_207180;
        case 0x207184u: goto label_207184;
        case 0x207188u: goto label_207188;
        case 0x20718cu: goto label_20718c;
        case 0x207190u: goto label_207190;
        case 0x207194u: goto label_207194;
        case 0x207198u: goto label_207198;
        case 0x20719cu: goto label_20719c;
        case 0x2071a0u: goto label_2071a0;
        case 0x2071a4u: goto label_2071a4;
        case 0x2071a8u: goto label_2071a8;
        case 0x2071acu: goto label_2071ac;
        case 0x2071b0u: goto label_2071b0;
        case 0x2071b4u: goto label_2071b4;
        case 0x2071b8u: goto label_2071b8;
        case 0x2071bcu: goto label_2071bc;
        case 0x2071c0u: goto label_2071c0;
        case 0x2071c4u: goto label_2071c4;
        case 0x2071c8u: goto label_2071c8;
        case 0x2071ccu: goto label_2071cc;
        case 0x2071d0u: goto label_2071d0;
        case 0x2071d4u: goto label_2071d4;
        case 0x2071d8u: goto label_2071d8;
        case 0x2071dcu: goto label_2071dc;
        case 0x2071e0u: goto label_2071e0;
        case 0x2071e4u: goto label_2071e4;
        case 0x2071e8u: goto label_2071e8;
        case 0x2071ecu: goto label_2071ec;
        case 0x2071f0u: goto label_2071f0;
        case 0x2071f4u: goto label_2071f4;
        case 0x2071f8u: goto label_2071f8;
        case 0x2071fcu: goto label_2071fc;
        case 0x207200u: goto label_207200;
        case 0x207204u: goto label_207204;
        case 0x207208u: goto label_207208;
        case 0x20720cu: goto label_20720c;
        case 0x207210u: goto label_207210;
        case 0x207214u: goto label_207214;
        case 0x207218u: goto label_207218;
        case 0x20721cu: goto label_20721c;
        case 0x207220u: goto label_207220;
        case 0x207224u: goto label_207224;
        case 0x207228u: goto label_207228;
        case 0x20722cu: goto label_20722c;
        case 0x207230u: goto label_207230;
        case 0x207234u: goto label_207234;
        case 0x207238u: goto label_207238;
        case 0x20723cu: goto label_20723c;
        case 0x207240u: goto label_207240;
        case 0x207244u: goto label_207244;
        case 0x207248u: goto label_207248;
        case 0x20724cu: goto label_20724c;
        case 0x207250u: goto label_207250;
        case 0x207254u: goto label_207254;
        case 0x207258u: goto label_207258;
        case 0x20725cu: goto label_20725c;
        case 0x207260u: goto label_207260;
        case 0x207264u: goto label_207264;
        case 0x207268u: goto label_207268;
        case 0x20726cu: goto label_20726c;
        case 0x207270u: goto label_207270;
        case 0x207274u: goto label_207274;
        case 0x207278u: goto label_207278;
        case 0x20727cu: goto label_20727c;
        case 0x207280u: goto label_207280;
        case 0x207284u: goto label_207284;
        case 0x207288u: goto label_207288;
        case 0x20728cu: goto label_20728c;
        case 0x207290u: goto label_207290;
        case 0x207294u: goto label_207294;
        case 0x207298u: goto label_207298;
        case 0x20729cu: goto label_20729c;
        case 0x2072a0u: goto label_2072a0;
        case 0x2072a4u: goto label_2072a4;
        case 0x2072a8u: goto label_2072a8;
        case 0x2072acu: goto label_2072ac;
        case 0x2072b0u: goto label_2072b0;
        case 0x2072b4u: goto label_2072b4;
        case 0x2072b8u: goto label_2072b8;
        case 0x2072bcu: goto label_2072bc;
        case 0x2072c0u: goto label_2072c0;
        case 0x2072c4u: goto label_2072c4;
        case 0x2072c8u: goto label_2072c8;
        case 0x2072ccu: goto label_2072cc;
        case 0x2072d0u: goto label_2072d0;
        case 0x2072d4u: goto label_2072d4;
        case 0x2072d8u: goto label_2072d8;
        case 0x2072dcu: goto label_2072dc;
        case 0x2072e0u: goto label_2072e0;
        case 0x2072e4u: goto label_2072e4;
        case 0x2072e8u: goto label_2072e8;
        case 0x2072ecu: goto label_2072ec;
        case 0x2072f0u: goto label_2072f0;
        case 0x2072f4u: goto label_2072f4;
        case 0x2072f8u: goto label_2072f8;
        case 0x2072fcu: goto label_2072fc;
        case 0x207300u: goto label_207300;
        case 0x207304u: goto label_207304;
        case 0x207308u: goto label_207308;
        case 0x20730cu: goto label_20730c;
        case 0x207310u: goto label_207310;
        case 0x207314u: goto label_207314;
        case 0x207318u: goto label_207318;
        case 0x20731cu: goto label_20731c;
        case 0x207320u: goto label_207320;
        case 0x207324u: goto label_207324;
        case 0x207328u: goto label_207328;
        case 0x20732cu: goto label_20732c;
        case 0x207330u: goto label_207330;
        case 0x207334u: goto label_207334;
        case 0x207338u: goto label_207338;
        case 0x20733cu: goto label_20733c;
        case 0x207340u: goto label_207340;
        case 0x207344u: goto label_207344;
        case 0x207348u: goto label_207348;
        case 0x20734cu: goto label_20734c;
        case 0x207350u: goto label_207350;
        case 0x207354u: goto label_207354;
        case 0x207358u: goto label_207358;
        case 0x20735cu: goto label_20735c;
        case 0x207360u: goto label_207360;
        case 0x207364u: goto label_207364;
        case 0x207368u: goto label_207368;
        case 0x20736cu: goto label_20736c;
        case 0x207370u: goto label_207370;
        case 0x207374u: goto label_207374;
        case 0x207378u: goto label_207378;
        case 0x20737cu: goto label_20737c;
        case 0x207380u: goto label_207380;
        case 0x207384u: goto label_207384;
        case 0x207388u: goto label_207388;
        case 0x20738cu: goto label_20738c;
        case 0x207390u: goto label_207390;
        case 0x207394u: goto label_207394;
        case 0x207398u: goto label_207398;
        case 0x20739cu: goto label_20739c;
        case 0x2073a0u: goto label_2073a0;
        case 0x2073a4u: goto label_2073a4;
        case 0x2073a8u: goto label_2073a8;
        case 0x2073acu: goto label_2073ac;
        case 0x2073b0u: goto label_2073b0;
        case 0x2073b4u: goto label_2073b4;
        case 0x2073b8u: goto label_2073b8;
        case 0x2073bcu: goto label_2073bc;
        case 0x2073c0u: goto label_2073c0;
        case 0x2073c4u: goto label_2073c4;
        case 0x2073c8u: goto label_2073c8;
        case 0x2073ccu: goto label_2073cc;
        case 0x2073d0u: goto label_2073d0;
        case 0x2073d4u: goto label_2073d4;
        case 0x2073d8u: goto label_2073d8;
        case 0x2073dcu: goto label_2073dc;
        case 0x2073e0u: goto label_2073e0;
        case 0x2073e4u: goto label_2073e4;
        case 0x2073e8u: goto label_2073e8;
        case 0x2073ecu: goto label_2073ec;
        case 0x2073f0u: goto label_2073f0;
        case 0x2073f4u: goto label_2073f4;
        case 0x2073f8u: goto label_2073f8;
        case 0x2073fcu: goto label_2073fc;
        case 0x207400u: goto label_207400;
        case 0x207404u: goto label_207404;
        case 0x207408u: goto label_207408;
        case 0x20740cu: goto label_20740c;
        case 0x207410u: goto label_207410;
        case 0x207414u: goto label_207414;
        case 0x207418u: goto label_207418;
        case 0x20741cu: goto label_20741c;
        case 0x207420u: goto label_207420;
        case 0x207424u: goto label_207424;
        case 0x207428u: goto label_207428;
        case 0x20742cu: goto label_20742c;
        case 0x207430u: goto label_207430;
        case 0x207434u: goto label_207434;
        case 0x207438u: goto label_207438;
        case 0x20743cu: goto label_20743c;
        case 0x207440u: goto label_207440;
        case 0x207444u: goto label_207444;
        case 0x207448u: goto label_207448;
        case 0x20744cu: goto label_20744c;
        case 0x207450u: goto label_207450;
        case 0x207454u: goto label_207454;
        case 0x207458u: goto label_207458;
        case 0x20745cu: goto label_20745c;
        case 0x207460u: goto label_207460;
        case 0x207464u: goto label_207464;
        case 0x207468u: goto label_207468;
        case 0x20746cu: goto label_20746c;
        case 0x207470u: goto label_207470;
        case 0x207474u: goto label_207474;
        case 0x207478u: goto label_207478;
        case 0x20747cu: goto label_20747c;
        case 0x207480u: goto label_207480;
        case 0x207484u: goto label_207484;
        case 0x207488u: goto label_207488;
        case 0x20748cu: goto label_20748c;
        case 0x207490u: goto label_207490;
        case 0x207494u: goto label_207494;
        case 0x207498u: goto label_207498;
        case 0x20749cu: goto label_20749c;
        case 0x2074a0u: goto label_2074a0;
        case 0x2074a4u: goto label_2074a4;
        case 0x2074a8u: goto label_2074a8;
        case 0x2074acu: goto label_2074ac;
        case 0x2074b0u: goto label_2074b0;
        case 0x2074b4u: goto label_2074b4;
        case 0x2074b8u: goto label_2074b8;
        case 0x2074bcu: goto label_2074bc;
        case 0x2074c0u: goto label_2074c0;
        case 0x2074c4u: goto label_2074c4;
        case 0x2074c8u: goto label_2074c8;
        case 0x2074ccu: goto label_2074cc;
        case 0x2074d0u: goto label_2074d0;
        case 0x2074d4u: goto label_2074d4;
        case 0x2074d8u: goto label_2074d8;
        case 0x2074dcu: goto label_2074dc;
        case 0x2074e0u: goto label_2074e0;
        case 0x2074e4u: goto label_2074e4;
        case 0x2074e8u: goto label_2074e8;
        case 0x2074ecu: goto label_2074ec;
        case 0x2074f0u: goto label_2074f0;
        case 0x2074f4u: goto label_2074f4;
        case 0x2074f8u: goto label_2074f8;
        case 0x2074fcu: goto label_2074fc;
        case 0x207500u: goto label_207500;
        case 0x207504u: goto label_207504;
        case 0x207508u: goto label_207508;
        case 0x20750cu: goto label_20750c;
        case 0x207510u: goto label_207510;
        case 0x207514u: goto label_207514;
        case 0x207518u: goto label_207518;
        case 0x20751cu: goto label_20751c;
        case 0x207520u: goto label_207520;
        case 0x207524u: goto label_207524;
        case 0x207528u: goto label_207528;
        case 0x20752cu: goto label_20752c;
        case 0x207530u: goto label_207530;
        case 0x207534u: goto label_207534;
        case 0x207538u: goto label_207538;
        case 0x20753cu: goto label_20753c;
        case 0x207540u: goto label_207540;
        case 0x207544u: goto label_207544;
        case 0x207548u: goto label_207548;
        case 0x20754cu: goto label_20754c;
        case 0x207550u: goto label_207550;
        case 0x207554u: goto label_207554;
        case 0x207558u: goto label_207558;
        case 0x20755cu: goto label_20755c;
        case 0x207560u: goto label_207560;
        case 0x207564u: goto label_207564;
        case 0x207568u: goto label_207568;
        case 0x20756cu: goto label_20756c;
        case 0x207570u: goto label_207570;
        case 0x207574u: goto label_207574;
        case 0x207578u: goto label_207578;
        case 0x20757cu: goto label_20757c;
        case 0x207580u: goto label_207580;
        case 0x207584u: goto label_207584;
        case 0x207588u: goto label_207588;
        case 0x20758cu: goto label_20758c;
        case 0x207590u: goto label_207590;
        case 0x207594u: goto label_207594;
        case 0x207598u: goto label_207598;
        case 0x20759cu: goto label_20759c;
        case 0x2075a0u: goto label_2075a0;
        case 0x2075a4u: goto label_2075a4;
        case 0x2075a8u: goto label_2075a8;
        case 0x2075acu: goto label_2075ac;
        case 0x2075b0u: goto label_2075b0;
        case 0x2075b4u: goto label_2075b4;
        case 0x2075b8u: goto label_2075b8;
        case 0x2075bcu: goto label_2075bc;
        case 0x2075c0u: goto label_2075c0;
        case 0x2075c4u: goto label_2075c4;
        case 0x2075c8u: goto label_2075c8;
        case 0x2075ccu: goto label_2075cc;
        case 0x2075d0u: goto label_2075d0;
        case 0x2075d4u: goto label_2075d4;
        case 0x2075d8u: goto label_2075d8;
        case 0x2075dcu: goto label_2075dc;
        case 0x2075e0u: goto label_2075e0;
        case 0x2075e4u: goto label_2075e4;
        case 0x2075e8u: goto label_2075e8;
        case 0x2075ecu: goto label_2075ec;
        case 0x2075f0u: goto label_2075f0;
        case 0x2075f4u: goto label_2075f4;
        case 0x2075f8u: goto label_2075f8;
        case 0x2075fcu: goto label_2075fc;
        case 0x207600u: goto label_207600;
        case 0x207604u: goto label_207604;
        case 0x207608u: goto label_207608;
        case 0x20760cu: goto label_20760c;
        case 0x207610u: goto label_207610;
        case 0x207614u: goto label_207614;
        case 0x207618u: goto label_207618;
        case 0x20761cu: goto label_20761c;
        case 0x207620u: goto label_207620;
        case 0x207624u: goto label_207624;
        case 0x207628u: goto label_207628;
        case 0x20762cu: goto label_20762c;
        case 0x207630u: goto label_207630;
        case 0x207634u: goto label_207634;
        case 0x207638u: goto label_207638;
        case 0x20763cu: goto label_20763c;
        case 0x207640u: goto label_207640;
        case 0x207644u: goto label_207644;
        case 0x207648u: goto label_207648;
        case 0x20764cu: goto label_20764c;
        case 0x207650u: goto label_207650;
        case 0x207654u: goto label_207654;
        case 0x207658u: goto label_207658;
        case 0x20765cu: goto label_20765c;
        case 0x207660u: goto label_207660;
        case 0x207664u: goto label_207664;
        case 0x207668u: goto label_207668;
        case 0x20766cu: goto label_20766c;
        case 0x207670u: goto label_207670;
        case 0x207674u: goto label_207674;
        case 0x207678u: goto label_207678;
        case 0x20767cu: goto label_20767c;
        case 0x207680u: goto label_207680;
        case 0x207684u: goto label_207684;
        case 0x207688u: goto label_207688;
        case 0x20768cu: goto label_20768c;
        case 0x207690u: goto label_207690;
        case 0x207694u: goto label_207694;
        case 0x207698u: goto label_207698;
        case 0x20769cu: goto label_20769c;
        case 0x2076a0u: goto label_2076a0;
        case 0x2076a4u: goto label_2076a4;
        case 0x2076a8u: goto label_2076a8;
        case 0x2076acu: goto label_2076ac;
        case 0x2076b0u: goto label_2076b0;
        case 0x2076b4u: goto label_2076b4;
        case 0x2076b8u: goto label_2076b8;
        case 0x2076bcu: goto label_2076bc;
        case 0x2076c0u: goto label_2076c0;
        case 0x2076c4u: goto label_2076c4;
        case 0x2076c8u: goto label_2076c8;
        case 0x2076ccu: goto label_2076cc;
        case 0x2076d0u: goto label_2076d0;
        case 0x2076d4u: goto label_2076d4;
        case 0x2076d8u: goto label_2076d8;
        case 0x2076dcu: goto label_2076dc;
        case 0x2076e0u: goto label_2076e0;
        case 0x2076e4u: goto label_2076e4;
        case 0x2076e8u: goto label_2076e8;
        case 0x2076ecu: goto label_2076ec;
        case 0x2076f0u: goto label_2076f0;
        case 0x2076f4u: goto label_2076f4;
        case 0x2076f8u: goto label_2076f8;
        case 0x2076fcu: goto label_2076fc;
        case 0x207700u: goto label_207700;
        case 0x207704u: goto label_207704;
        case 0x207708u: goto label_207708;
        case 0x20770cu: goto label_20770c;
        case 0x207710u: goto label_207710;
        case 0x207714u: goto label_207714;
        case 0x207718u: goto label_207718;
        case 0x20771cu: goto label_20771c;
        case 0x207720u: goto label_207720;
        case 0x207724u: goto label_207724;
        case 0x207728u: goto label_207728;
        case 0x20772cu: goto label_20772c;
        case 0x207730u: goto label_207730;
        case 0x207734u: goto label_207734;
        case 0x207738u: goto label_207738;
        case 0x20773cu: goto label_20773c;
        case 0x207740u: goto label_207740;
        case 0x207744u: goto label_207744;
        case 0x207748u: goto label_207748;
        case 0x20774cu: goto label_20774c;
        case 0x207750u: goto label_207750;
        case 0x207754u: goto label_207754;
        case 0x207758u: goto label_207758;
        case 0x20775cu: goto label_20775c;
        default: return;
    }

label_206f90:
    // 0x206f90: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x206f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_206f94:
    // 0x206f94: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x206f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_206f98:
    // 0x206f98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x206f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_206f9c:
    // 0x206f9c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x206f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_206fa0:
    // 0x206fa0: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x206fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_206fa4:
    // 0x206fa4: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x206fa4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_206fa8:
    // 0x206fa8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x206fa8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206fac:
    // 0x206fac: 0xc05de30  jal         func_1778C0
label_206fb0:
    if (ctx->pc == 0x206FB0u) {
        ctx->pc = 0x206FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206FACu;
        // 0x206fb0: 0x240b0060  addiu       $t3, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206FB4u;
        goto label_206fb4;
    }
    ctx->pc = 0x206FACu;
    SET_GPR_U32(ctx, 31, 0x206FB4u);
    ctx->pc = 0x206FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206FACu;
    // 0x206fb0: 0x240b0060  addiu       $t3, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x206FACu, 0x206FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206FB4u;
label_206fb4:
    // 0x206fb4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x206fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_206fb8:
    // 0x206fb8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x206fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_206fbc:
    // 0x206fbc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x206fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_206fc0:
    // 0x206fc0: 0x26043720  addiu       $a0, $s0, 0x3720
    ctx->pc = 0x206fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 14112));
label_206fc4:
    // 0x206fc4: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x206fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_206fc8:
    // 0x206fc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206fcc:
    // 0x206fcc: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x206fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_206fd0:
    // 0x206fd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x206fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_206fd4:
    // 0x206fd4: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x206fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_206fd8:
    // 0x206fd8: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x206fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_206fdc:
    // 0x206fdc: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x206fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_206fe0:
    // 0x206fe0: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x206fe0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_206fe4:
    // 0x206fe4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x206fe4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206fe8:
    // 0x206fe8: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x206fe8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_206fec:
    // 0x206fec: 0xc05de30  jal         func_1778C0
label_206ff0:
    if (ctx->pc == 0x206FF0u) {
        ctx->pc = 0x206FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206FECu;
        // 0x206ff0: 0x240b0060  addiu       $t3, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206FF4u;
        goto label_206ff4;
    }
    ctx->pc = 0x206FECu;
    SET_GPR_U32(ctx, 31, 0x206FF4u);
    ctx->pc = 0x206FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206FECu;
    // 0x206ff0: 0x240b0060  addiu       $t3, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x206FECu, 0x206FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206FF4u;
label_206ff4:
    // 0x206ff4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x206ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_206ff8:
    // 0x206ff8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x206ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_206ffc:
    // 0x206ffc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x206ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_207000:
    // 0x207000: 0x260437c0  addiu       $a0, $s0, 0x37C0
    ctx->pc = 0x207000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 14272));
label_207004:
    // 0x207004: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x207004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_207008:
    // 0x207008: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x207008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20700c:
    // 0x20700c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x20700cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_207010:
    // 0x207010: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x207010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_207014:
    // 0x207014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x207014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207018:
    // 0x207018: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x207018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_20701c:
    // 0x20701c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x20701cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_207020:
    // 0x207020: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x207020u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_207024:
    // 0x207024: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x207024u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207028:
    // 0x207028: 0x240a0048  addiu       $t2, $zero, 0x48
    ctx->pc = 0x207028u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_20702c:
    // 0x20702c: 0xc05de30  jal         func_1778C0
label_207030:
    if (ctx->pc == 0x207030u) {
        ctx->pc = 0x207030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20702Cu;
        // 0x207030: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207034u;
        goto label_207034;
    }
    ctx->pc = 0x20702Cu;
    SET_GPR_U32(ctx, 31, 0x207034u);
    ctx->pc = 0x207030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20702Cu;
    // 0x207030: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x20702Cu, 0x207034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207034u;
label_207034:
    // 0x207034: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x207034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_207038:
    // 0x207038: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x207038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20703c:
    // 0x20703c: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x20703cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_207040:
    // 0x207040: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x207040u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_207044:
    // 0x207044: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x207044u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_207048:
    // 0x207048: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x207048u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20704c:
    // 0x20704c: 0xc054e5c  jal         func_153970
label_207050:
    if (ctx->pc == 0x207050u) {
        ctx->pc = 0x207050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20704Cu;
        // 0x207050: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x207054u;
        goto label_207054;
    }
    ctx->pc = 0x20704Cu;
    SET_GPR_U32(ctx, 31, 0x207054u);
    ctx->pc = 0x207050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20704Cu;
    // 0x207050: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x20704Cu, 0x207054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207054u;
label_207054:
    // 0x207054: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x207054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207058:
    // 0x207058: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x207058u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_20705c:
    // 0x20705c: 0x26043860  addiu       $a0, $s0, 0x3860
    ctx->pc = 0x20705cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 14432));
label_207060:
    // 0x207060: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x207060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_207064:
    // 0x207064: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x207064u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_207068:
    // 0x207068: 0xc054e74  jal         func_1539D0
label_20706c:
    if (ctx->pc == 0x20706Cu) {
        ctx->pc = 0x20706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207068u;
        // 0x20706c: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207070u;
        goto label_207070;
    }
    ctx->pc = 0x207068u;
    SET_GPR_U32(ctx, 31, 0x207070u);
    ctx->pc = 0x20706Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207068u;
    // 0x20706c: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x207068u, 0x207070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207070u;
label_207070:
    // 0x207070: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x207070u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_207074:
    // 0x207074: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x207074u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_207078:
    // 0x207078: 0x26044560  addiu       $a0, $s0, 0x4560
    ctx->pc = 0x207078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17760));
label_20707c:
    // 0x20707c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20707cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207080:
    // 0x207080: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x207080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_207084:
    // 0x207084: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x207084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_207088:
    // 0x207088: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x207088u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20708c:
    // 0x20708c: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x20708cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_207090:
    // 0x207090: 0xc0708ac  jal         func_1C22B0
label_207094:
    if (ctx->pc == 0x207094u) {
        ctx->pc = 0x207094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207090u;
        // 0x207094: 0x256be028  addiu       $t3, $t3, -0x1FD8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207098u;
        goto label_207098;
    }
    ctx->pc = 0x207090u;
    SET_GPR_U32(ctx, 31, 0x207098u);
    ctx->pc = 0x207094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207090u;
    // 0x207094: 0x256be028  addiu       $t3, $t3, -0x1FD8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x207098u;
label_207098:
    // 0x207098: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x207098u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_20709c:
    // 0x20709c: 0x26044600  addiu       $a0, $s0, 0x4600
    ctx->pc = 0x20709cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17920));
label_2070a0:
    // 0x2070a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2070a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2070a4:
    // 0x2070a4: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x2070a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2070a8:
    // 0x2070a8: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x2070a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_2070ac:
    // 0x2070ac: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x2070acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_2070b0:
    // 0x2070b0: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x2070b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2070b4:
    // 0x2070b4: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x2070b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2070b8:
    // 0x2070b8: 0xc0708ac  jal         func_1C22B0
label_2070bc:
    if (ctx->pc == 0x2070BCu) {
        ctx->pc = 0x2070BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2070B8u;
        // 0x2070bc: 0x256be028  addiu       $t3, $t3, -0x1FD8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2070C0u;
        goto label_2070c0;
    }
    ctx->pc = 0x2070B8u;
    SET_GPR_U32(ctx, 31, 0x2070C0u);
    ctx->pc = 0x2070BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2070B8u;
    // 0x2070bc: 0x256be028  addiu       $t3, $t3, -0x1FD8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x2070C0u;
label_2070c0:
    // 0x2070c0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2070c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2070c4:
    // 0x2070c4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2070c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2070c8:
    // 0x2070c8: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x2070c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_2070cc:
    // 0x2070cc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2070ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2070d0:
    // 0x2070d0: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x2070d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2070d4:
    // 0x2070d4: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x2070d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_2070d8:
    // 0x2070d8: 0xc054e5c  jal         func_153970
label_2070dc:
    if (ctx->pc == 0x2070DCu) {
        ctx->pc = 0x2070DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2070D8u;
        // 0x2070dc: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2070E0u;
        goto label_2070e0;
    }
    ctx->pc = 0x2070D8u;
    SET_GPR_U32(ctx, 31, 0x2070E0u);
    ctx->pc = 0x2070DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2070D8u;
    // 0x2070dc: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x2070D8u, 0x2070E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2070E0u;
label_2070e0:
    // 0x2070e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2070e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2070e4:
    // 0x2070e4: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x2070e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_2070e8:
    // 0x2070e8: 0x26044740  addiu       $a0, $s0, 0x4740
    ctx->pc = 0x2070e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 18240));
label_2070ec:
    // 0x2070ec: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2070ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2070f0:
    // 0x2070f0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2070f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2070f4:
    // 0x2070f4: 0xc054e74  jal         func_1539D0
label_2070f8:
    if (ctx->pc == 0x2070F8u) {
        ctx->pc = 0x2070F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2070F4u;
        // 0x2070f8: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2070FCu;
        goto label_2070fc;
    }
    ctx->pc = 0x2070F4u;
    SET_GPR_U32(ctx, 31, 0x2070FCu);
    ctx->pc = 0x2070F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2070F4u;
    // 0x2070f8: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x2070F4u, 0x2070FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2070FCu;
label_2070fc:
    // 0x2070fc: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2070fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_207100:
    // 0x207100: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x207100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_207104:
    // 0x207104: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x207104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_207108:
    // 0x207108: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x207108u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20710c:
    // 0x20710c: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x20710cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_207110:
    // 0x207110: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x207110u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_207114:
    // 0x207114: 0xc054e5c  jal         func_153970
label_207118:
    if (ctx->pc == 0x207118u) {
        ctx->pc = 0x207118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207114u;
        // 0x207118: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20711Cu;
        goto label_20711c;
    }
    ctx->pc = 0x207114u;
    SET_GPR_U32(ctx, 31, 0x20711Cu);
    ctx->pc = 0x207118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207114u;
    // 0x207118: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x207114u, 0x20711Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20711Cu;
label_20711c:
    // 0x20711c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20711cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207120:
    // 0x207120: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x207120u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_207124:
    // 0x207124: 0x26044dc0  addiu       $a0, $s0, 0x4DC0
    ctx->pc = 0x207124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 19904));
label_207128:
    // 0x207128: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x207128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_20712c:
    // 0x20712c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x20712cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_207130:
    // 0x207130: 0xc054e74  jal         func_1539D0
label_207134:
    if (ctx->pc == 0x207134u) {
        ctx->pc = 0x207134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207130u;
        // 0x207134: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207138u;
        goto label_207138;
    }
    ctx->pc = 0x207130u;
    SET_GPR_U32(ctx, 31, 0x207138u);
    ctx->pc = 0x207134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207130u;
    // 0x207134: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x207130u, 0x207138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207138u;
label_207138:
    // 0x207138: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x207138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_20713c:
    // 0x20713c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x20713cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_207140:
    // 0x207140: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x207140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_207144:
    // 0x207144: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x207144u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_207148:
    // 0x207148: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x207148u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20714c:
    // 0x20714c: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x20714cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_207150:
    // 0x207150: 0xc054e5c  jal         func_153970
label_207154:
    if (ctx->pc == 0x207154u) {
        ctx->pc = 0x207154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207150u;
        // 0x207154: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x207158u;
        goto label_207158;
    }
    ctx->pc = 0x207150u;
    SET_GPR_U32(ctx, 31, 0x207158u);
    ctx->pc = 0x207154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207150u;
    // 0x207154: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x207150u, 0x207158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207158u;
label_207158:
    // 0x207158: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x207158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20715c:
    // 0x20715c: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x20715cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_207160:
    // 0x207160: 0x26045370  addiu       $a0, $s0, 0x5370
    ctx->pc = 0x207160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 21360));
label_207164:
    // 0x207164: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x207164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_207168:
    // 0x207168: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x207168u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20716c:
    // 0x20716c: 0xc054e74  jal         func_1539D0
label_207170:
    if (ctx->pc == 0x207170u) {
        ctx->pc = 0x207170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20716Cu;
        // 0x207170: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207174u;
        goto label_207174;
    }
    ctx->pc = 0x20716Cu;
    SET_GPR_U32(ctx, 31, 0x207174u);
    ctx->pc = 0x207170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20716Cu;
    // 0x207170: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x20716Cu, 0x207174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207174u;
label_207174:
    // 0x207174: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x207174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_207178:
    // 0x207178: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x207178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_20717c:
    // 0x20717c: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x20717cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_207180:
    // 0x207180: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x207180u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_207184:
    // 0x207184: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x207184u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_207188:
    // 0x207188: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x207188u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20718c:
    // 0x20718c: 0xc054e5c  jal         func_153970
label_207190:
    if (ctx->pc == 0x207190u) {
        ctx->pc = 0x207190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20718Cu;
        // 0x207190: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x207194u;
        goto label_207194;
    }
    ctx->pc = 0x20718Cu;
    SET_GPR_U32(ctx, 31, 0x207194u);
    ctx->pc = 0x207190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20718Cu;
    // 0x207190: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x20718Cu, 0x207194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207194u;
label_207194:
    // 0x207194: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x207194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207198:
    // 0x207198: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x207198u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_20719c:
    // 0x20719c: 0x26045b90  addiu       $a0, $s0, 0x5B90
    ctx->pc = 0x20719cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 23440));
label_2071a0:
    // 0x2071a0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2071a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2071a4:
    // 0x2071a4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2071a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2071a8:
    // 0x2071a8: 0xc054e74  jal         func_1539D0
label_2071ac:
    if (ctx->pc == 0x2071ACu) {
        ctx->pc = 0x2071ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2071A8u;
        // 0x2071ac: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2071B0u;
        goto label_2071b0;
    }
    ctx->pc = 0x2071A8u;
    SET_GPR_U32(ctx, 31, 0x2071B0u);
    ctx->pc = 0x2071ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2071A8u;
    // 0x2071ac: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x2071A8u, 0x2071B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2071B0u;
label_2071b0:
    // 0x2071b0: 0xc070834  jal         func_1C20D0
label_2071b4:
    if (ctx->pc == 0x2071B4u) {
        ctx->pc = 0x2071B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2071B0u;
        // 0x2071b4: 0x2404003b  addiu       $a0, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2071B8u;
        goto label_2071b8;
    }
    ctx->pc = 0x2071B0u;
    SET_GPR_U32(ctx, 31, 0x2071B8u);
    ctx->pc = 0x2071B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2071B0u;
    // 0x2071b4: 0x2404003b  addiu       $a0, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x2071B8u;
label_2071b8:
    // 0x2071b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2071b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2071bc:
    // 0x2071bc: 0x26046210  addiu       $a0, $s0, 0x6210
    ctx->pc = 0x2071bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25104));
label_2071c0:
    // 0x2071c0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2071c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2071c4:
    // 0x2071c4: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x2071c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2071c8:
    // 0x2071c8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2071c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_2071cc:
    // 0x2071cc: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x2071ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_2071d0:
    // 0x2071d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2071d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2071d4:
    // 0x2071d4: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x2071d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_2071d8:
    // 0x2071d8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2071d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_2071dc:
    // 0x2071dc: 0x240902c8  addiu       $t1, $zero, 0x2C8
    ctx->pc = 0x2071dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 712));
label_2071e0:
    // 0x2071e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2071e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2071e4:
    // 0x2071e4: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x2071e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_2071e8:
    // 0x2071e8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x2071e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_2071ec:
    // 0x2071ec: 0x240a00f0  addiu       $t2, $zero, 0xF0
    ctx->pc = 0x2071ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_2071f0:
    // 0x2071f0: 0xc05de30  jal         func_1778C0
label_2071f4:
    if (ctx->pc == 0x2071F4u) {
        ctx->pc = 0x2071F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2071F0u;
        // 0x2071f4: 0x240b0058  addiu       $t3, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2071F8u;
        goto label_2071f8;
    }
    ctx->pc = 0x2071F0u;
    SET_GPR_U32(ctx, 31, 0x2071F8u);
    ctx->pc = 0x2071F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2071F0u;
    // 0x2071f4: 0x240b0058  addiu       $t3, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x2071F0u, 0x2071F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2071F8u;
label_2071f8:
    // 0x2071f8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2071f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2071fc:
    // 0x2071fc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2071fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207200:
    // 0x207200: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x207200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207204:
    // 0x207204: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x207204u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207208:
    // 0x207208: 0x2151021  addu        $v0, $s0, $s5
    ctx->pc = 0x207208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_20720c:
    // 0x20720c: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x20720cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_207210:
    // 0x207210: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x207210u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_207214:
    // 0x207214: 0x24446930  addiu       $a0, $v0, 0x6930
    ctx->pc = 0x207214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26928));
label_207218:
    // 0x207218: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x207218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20721c:
    // 0x20721c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x20721cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_207220:
    // 0x207220: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x207220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_207224:
    // 0x207224: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x207224u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_207228:
    // 0x207228: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x207228u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_20722c:
    // 0x20722c: 0xc0708ac  jal         func_1C22B0
label_207230:
    if (ctx->pc == 0x207230u) {
        ctx->pc = 0x207230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20722Cu;
        // 0x207230: 0x256be028  addiu       $t3, $t3, -0x1FD8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207234u;
        goto label_207234;
    }
    ctx->pc = 0x20722Cu;
    SET_GPR_U32(ctx, 31, 0x207234u);
    ctx->pc = 0x207230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20722Cu;
    // 0x207230: 0x256be028  addiu       $t3, $t3, -0x1FD8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x207234u;
label_207234:
    // 0x207234: 0xc070834  jal         func_1C20D0
label_207238:
    if (ctx->pc == 0x207238u) {
        ctx->pc = 0x207238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207234u;
        // 0x207238: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20723Cu;
        goto label_20723c;
    }
    ctx->pc = 0x207234u;
    SET_GPR_U32(ctx, 31, 0x20723Cu);
    ctx->pc = 0x207238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207234u;
    // 0x207238: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x20723Cu;
label_20723c:
    // 0x20723c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20723cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_207240:
    // 0x207240: 0x2119821  addu        $s3, $s0, $s1
    ctx->pc = 0x207240u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_207244:
    // 0x207244: 0x240200a8  addiu       $v0, $zero, 0xA8
    ctx->pc = 0x207244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_207248:
    // 0x207248: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x207248u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20724c:
    // 0x20724c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20724cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_207250:
    // 0x207250: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x207250u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_207254:
    // 0x207254: 0xffa90008  sd          $t1, 0x8($sp)
    ctx->pc = 0x207254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 9));
label_207258:
    // 0x207258: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x207258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20725c:
    // 0x20725c: 0xffaa0010  sd          $t2, 0x10($sp)
    ctx->pc = 0x20725cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 10));
label_207260:
    // 0x207260: 0x266462b0  addiu       $a0, $s3, 0x62B0
    ctx->pc = 0x207260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 25264));
label_207264:
    // 0x207264: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x207264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_207268:
    // 0x207268: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x207268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20726c:
    // 0x20726c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20726cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207270:
    // 0x207270: 0xffa00020  sd          $zero, 0x20($sp)
    ctx->pc = 0x207270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
label_207274:
    // 0x207274: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x207274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
label_207278:
    // 0x207278: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x207278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20727c:
    // 0x20727c: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x20727cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_207280:
    // 0x207280: 0xc05ded8  jal         func_177B60
label_207284:
    if (ctx->pc == 0x207284u) {
        ctx->pc = 0x207284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207280u;
        // 0x207284: 0x240b0168  addiu       $t3, $zero, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207288u;
        goto label_207288;
    }
    ctx->pc = 0x207280u;
    SET_GPR_U32(ctx, 31, 0x207288u);
    ctx->pc = 0x207284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207280u;
    // 0x207284: 0x240b0168  addiu       $t3, $zero, 0x168 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B60u, 0x207280u, 0x207288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207288u;
label_207288:
    // 0x207288: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x207288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_20728c:
    // 0x20728c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x20728cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_207290:
    // 0x207290: 0xa262636b  sb          $v0, 0x636B($s3)
    ctx->pc = 0x207290u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 25451), (uint8_t)GPR_U32(ctx, 2));
label_207294:
    // 0x207294: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x207294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_207298:
    // 0x207298: 0xa262633b  sb          $v0, 0x633B($s3)
    ctx->pc = 0x207298u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 25403), (uint8_t)GPR_U32(ctx, 2));
label_20729c:
    // 0x20729c: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x20729cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_2072a0:
    // 0x2072a0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2072a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2072a4:
    // 0x2072a4: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x2072a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2072a8:
    // 0x2072a8: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x2072a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_2072ac:
    // 0x2072ac: 0xc054e5c  jal         func_153970
label_2072b0:
    if (ctx->pc == 0x2072B0u) {
        ctx->pc = 0x2072B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2072ACu;
        // 0x2072b0: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2072B4u;
        goto label_2072b4;
    }
    ctx->pc = 0x2072ACu;
    SET_GPR_U32(ctx, 31, 0x2072B4u);
    ctx->pc = 0x2072B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2072ACu;
    // 0x2072b0: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x2072ACu, 0x2072B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2072B4u;
label_2072b4:
    // 0x2072b4: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x2072b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_2072b8:
    // 0x2072b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2072b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2072bc:
    // 0x2072bc: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x2072bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_2072c0:
    // 0x2072c0: 0x24446e30  addiu       $a0, $v0, 0x6E30
    ctx->pc = 0x2072c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28208));
label_2072c4:
    // 0x2072c4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2072c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2072c8:
    // 0x2072c8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2072c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2072cc:
    // 0x2072cc: 0xc054e74  jal         func_1539D0
label_2072d0:
    if (ctx->pc == 0x2072D0u) {
        ctx->pc = 0x2072D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2072CCu;
        // 0x2072d0: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2072D4u;
        goto label_2072d4;
    }
    ctx->pc = 0x2072CCu;
    SET_GPR_U32(ctx, 31, 0x2072D4u);
    ctx->pc = 0x2072D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2072CCu;
    // 0x2072d0: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x2072CCu, 0x2072D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2072D4u;
label_2072d4:
    // 0x2072d4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2072d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2072d8:
    // 0x2072d8: 0x26b500a0  addiu       $s5, $s5, 0xA0
    ctx->pc = 0x2072d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 160));
label_2072dc:
    // 0x2072dc: 0x2a820008  slti        $v0, $s4, 0x8
    ctx->pc = 0x2072dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
label_2072e0:
    // 0x2072e0: 0x263100d0  addiu       $s1, $s1, 0xD0
    ctx->pc = 0x2072e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_2072e4:
    // 0x2072e4: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
label_2072e8:
    if (ctx->pc == 0x2072E8u) {
        ctx->pc = 0x2072E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2072E4u;
        // 0x2072e8: 0x26520d00  addiu       $s2, $s2, 0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2072ECu;
        goto label_2072ec;
    }
    ctx->pc = 0x2072E4u;
    {
        const bool branch_taken_0x2072e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2072E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2072E4u;
        // 0x2072e8: 0x26520d00  addiu       $s2, $s2, 0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2072e4) {
            ctx->pc = 0x207208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207208;
        }
    }
    ctx->pc = 0x2072ECu;
label_2072ec:
    // 0x2072ec: 0xc07082c  jal         func_1C20B0
label_2072f0:
    if (ctx->pc == 0x2072F0u) {
        ctx->pc = 0x2072F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2072ECu;
        // 0x2072f0: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2072F4u;
        goto label_2072f4;
    }
    ctx->pc = 0x2072ECu;
    SET_GPR_U32(ctx, 31, 0x2072F4u);
    ctx->pc = 0x2072F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2072ECu;
    // 0x2072f0: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    { ctx->pc = 0x1c20b0; return; }
    ctx->pc = 0x2072F4u;
label_2072f4:
    // 0x2072f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2072f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2072f8:
    // 0x2072f8: 0x3401d630  ori         $at, $zero, 0xD630
    ctx->pc = 0x2072f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54832);
label_2072fc:
    // 0x2072fc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2072fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_207300:
    // 0x207300: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x207300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_207304:
    // 0x207304: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x207304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_207308:
    // 0x207308: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x207308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20730c:
    // 0x20730c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20730cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_207310:
    // 0x207310: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x207310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_207314:
    // 0x207314: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x207314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_207318:
    // 0x207318: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x207318u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20731c:
    // 0x20731c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20731cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207320:
    // 0x207320: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x207320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_207324:
    // 0x207324: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x207324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_207328:
    // 0x207328: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x207328u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20732c:
    // 0x20732c: 0x240a0168  addiu       $t2, $zero, 0x168
    ctx->pc = 0x20732cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_207330:
    // 0x207330: 0xc05de30  jal         func_1778C0
label_207334:
    if (ctx->pc == 0x207334u) {
        ctx->pc = 0x207334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207330u;
        // 0x207334: 0x240b0070  addiu       $t3, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207338u;
        goto label_207338;
    }
    ctx->pc = 0x207330u;
    SET_GPR_U32(ctx, 31, 0x207338u);
    ctx->pc = 0x207334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207330u;
    // 0x207334: 0x240b0070  addiu       $t3, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x207330u, 0x207338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207338u;
label_207338:
    // 0x207338: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x207338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_20733c:
    // 0x20733c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x20733cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_207340:
    // 0x207340: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x207340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_207344:
    // 0x207344: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x207344u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_207348:
    // 0x207348: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x207348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20734c:
    // 0x20734c: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x20734cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_207350:
    // 0x207350: 0xc054e5c  jal         func_153970
label_207354:
    if (ctx->pc == 0x207354u) {
        ctx->pc = 0x207354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207350u;
        // 0x207354: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x207358u;
        goto label_207358;
    }
    ctx->pc = 0x207350u;
    SET_GPR_U32(ctx, 31, 0x207358u);
    ctx->pc = 0x207354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207350u;
    // 0x207354: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x207350u, 0x207358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207358u;
label_207358:
    // 0x207358: 0x3401d6d0  ori         $at, $zero, 0xD6D0
    ctx->pc = 0x207358u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54992);
label_20735c:
    // 0x20735c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20735cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207360:
    // 0x207360: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x207360u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_207364:
    // 0x207364: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x207364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_207368:
    // 0x207368: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x207368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20736c:
    // 0x20736c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x20736cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_207370:
    // 0x207370: 0xc054e74  jal         func_1539D0
label_207374:
    if (ctx->pc == 0x207374u) {
        ctx->pc = 0x207374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207370u;
        // 0x207374: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207378u;
        goto label_207378;
    }
    ctx->pc = 0x207370u;
    SET_GPR_U32(ctx, 31, 0x207378u);
    ctx->pc = 0x207374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207370u;
    // 0x207374: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x207370u, 0x207378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207378u;
label_207378:
    // 0x207378: 0xc07082c  jal         func_1C20B0
label_20737c:
    if (ctx->pc == 0x20737Cu) {
        ctx->pc = 0x20737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207378u;
        // 0x20737c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207380u;
        goto label_207380;
    }
    ctx->pc = 0x207378u;
    SET_GPR_U32(ctx, 31, 0x207380u);
    ctx->pc = 0x20737Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207378u;
    // 0x20737c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    { ctx->pc = 0x1c20b0; return; }
    ctx->pc = 0x207380u;
label_207380:
    // 0x207380: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x207380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_207384:
    // 0x207384: 0x3401e3d0  ori         $at, $zero, 0xE3D0
    ctx->pc = 0x207384u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58320);
label_207388:
    // 0x207388: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x207388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20738c:
    // 0x20738c: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x20738cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_207390:
    // 0x207390: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x207390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_207394:
    // 0x207394: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x207394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_207398:
    // 0x207398: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x207398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20739c:
    // 0x20739c: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x20739cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_2073a0:
    // 0x2073a0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2073a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_2073a4:
    // 0x2073a4: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x2073a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_2073a8:
    // 0x2073a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2073a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2073ac:
    // 0x2073ac: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x2073acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_2073b0:
    // 0x2073b0: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x2073b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_2073b4:
    // 0x2073b4: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x2073b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2073b8:
    // 0x2073b8: 0x240a0178  addiu       $t2, $zero, 0x178
    ctx->pc = 0x2073b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 376));
label_2073bc:
    // 0x2073bc: 0xc05de30  jal         func_1778C0
label_2073c0:
    if (ctx->pc == 0x2073C0u) {
        ctx->pc = 0x2073C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2073BCu;
        // 0x2073c0: 0x240b0070  addiu       $t3, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2073C4u;
        goto label_2073c4;
    }
    ctx->pc = 0x2073BCu;
    SET_GPR_U32(ctx, 31, 0x2073C4u);
    ctx->pc = 0x2073C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2073BCu;
    // 0x2073c0: 0x240b0070  addiu       $t3, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x2073BCu, 0x2073C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2073C4u;
label_2073c4:
    // 0x2073c4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2073c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2073c8:
    // 0x2073c8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2073c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2073cc:
    // 0x2073cc: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x2073ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_2073d0:
    // 0x2073d0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2073d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2073d4:
    // 0x2073d4: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x2073d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2073d8:
    // 0x2073d8: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x2073d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_2073dc:
    // 0x2073dc: 0xc054e5c  jal         func_153970
label_2073e0:
    if (ctx->pc == 0x2073E0u) {
        ctx->pc = 0x2073E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2073DCu;
        // 0x2073e0: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2073E4u;
        goto label_2073e4;
    }
    ctx->pc = 0x2073DCu;
    SET_GPR_U32(ctx, 31, 0x2073E4u);
    ctx->pc = 0x2073E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2073DCu;
    // 0x2073e0: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x2073DCu, 0x2073E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2073E4u;
label_2073e4:
    // 0x2073e4: 0x3401e470  ori         $at, $zero, 0xE470
    ctx->pc = 0x2073e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58480);
label_2073e8:
    // 0x2073e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2073e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2073ec:
    // 0x2073ec: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x2073ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_2073f0:
    // 0x2073f0: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x2073f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_2073f4:
    // 0x2073f4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2073f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2073f8:
    // 0x2073f8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2073f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2073fc:
    // 0x2073fc: 0xc054e74  jal         func_1539D0
label_207400:
    if (ctx->pc == 0x207400u) {
        ctx->pc = 0x207400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2073FCu;
        // 0x207400: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207404u;
        goto label_207404;
    }
    ctx->pc = 0x2073FCu;
    SET_GPR_U32(ctx, 31, 0x207404u);
    ctx->pc = 0x207400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2073FCu;
    // 0x207400: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x2073FCu, 0x207404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207404u;
label_207404:
    // 0x207404: 0x26c37fff  addiu       $v1, $s6, 0x7FFF
    ctx->pc = 0x207404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 32767));
label_207408:
    // 0x207408: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x207408u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_20740c:
    // 0x20740c: 0x24767171  addiu       $s6, $v1, 0x7171
    ctx->pc = 0x20740cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 29041));
label_207410:
    // 0x207410: 0x2ae30002  slti        $v1, $s7, 0x2
    ctx->pc = 0x207410u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
label_207414:
    // 0x207414: 0x1460fd52  bnez        $v1, . + 4 + (-0x2AE << 2)
label_207418:
    if (ctx->pc == 0x207418u) {
        ctx->pc = 0x20741Cu;
        goto label_20741c;
    }
    ctx->pc = 0x207414u;
    {
        const bool branch_taken_0x207414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x207414) {
            ctx->pc = 0x206960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x206960; return; }
        }
    }
    ctx->pc = 0x20741Cu;
label_20741c:
    // 0x20741c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x20741cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_207420:
    // 0x207420: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x207420u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_207424:
    // 0x207424: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x207424u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_207428:
    // 0x207428: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x207428u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_20742c:
    // 0x20742c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x20742cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_207430:
    // 0x207430: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x207430u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_207434:
    // 0x207434: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x207434u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_207438:
    // 0x207438: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x207438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20743c:
    // 0x20743c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x20743cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_207440:
    // 0x207440: 0x3e00008  jr          $ra
label_207444:
    if (ctx->pc == 0x207444u) {
        ctx->pc = 0x207444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207440u;
        // 0x207444: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207448u;
        goto label_207448;
    }
    ctx->pc = 0x207440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207440u;
        // 0x207444: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207448u;
label_207448:
    // 0x207448: 0x0  nop
    ctx->pc = 0x207448u;
    // NOP
label_20744c:
    // 0x20744c: 0x0  nop
    ctx->pc = 0x20744cu;
    // NOP
label_207450:
    // 0x207450: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x207450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_207454:
    // 0x207454: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x207454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_207458:
    // 0x207458: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x207458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_20745c:
    // 0x20745c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x20745cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_207460:
    // 0x207460: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x207460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_207464:
    // 0x207464: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x207464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_207468:
    // 0x207468: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x207468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20746c:
    // 0x20746c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20746cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_207470:
    // 0x207470: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x207470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_207474:
    // 0x207474: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_207478:
    // 0x207478: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x207478u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_20747c:
    // 0x20747c: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x20747cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_207480:
    // 0x207480: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x207480u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_207484:
    // 0x207484: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x207484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_207488:
    // 0x207488: 0x91233690  lbu         $v1, 0x3690($t1)
    ctx->pc = 0x207488u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 13968)));
label_20748c:
    // 0x20748c: 0x25303620  addiu       $s0, $t1, 0x3620
    ctx->pc = 0x20748cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 13856));
label_207490:
    // 0x207490: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x207490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207494:
    // 0x207494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x207494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_207498:
    // 0x207498: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x207498u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_20749c:
    // 0x20749c: 0xac23e310  sw          $v1, -0x1CF0($at)
    ctx->pc = 0x20749cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959888), GPR_U32(ctx, 3));
label_2074a0:
    // 0x2074a0: 0x91273694  lbu         $a3, 0x3694($t1)
    ctx->pc = 0x2074a0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 13972)));
label_2074a4:
    // 0x2074a4: 0x91293695  lbu         $t1, 0x3695($t1)
    ctx->pc = 0x2074a4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 13973)));
label_2074a8:
    // 0x2074a8: 0xc0804a0  jal         func_201280
label_2074ac:
    if (ctx->pc == 0x2074ACu) {
        ctx->pc = 0x2074ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2074A8u;
        // 0x2074ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2074B0u;
        goto label_2074b0;
    }
    ctx->pc = 0x2074A8u;
    SET_GPR_U32(ctx, 31, 0x2074B0u);
    ctx->pc = 0x2074ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2074A8u;
    // 0x2074ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201280u;
    { ctx->pc = 0x201280; return; }
    ctx->pc = 0x2074B0u;
label_2074b0:
    // 0x2074b0: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x2074b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_2074b4:
    // 0x2074b4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2074b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_2074b8:
    // 0x2074b8: 0x3463e2ec  ori         $v1, $v1, 0xE2EC
    ctx->pc = 0x2074b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)58092);
label_2074bc:
    // 0x2074bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2074bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2074c0:
    // 0x2074c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2074c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2074c4:
    // 0x2074c4: 0xc06f1d4  jal         func_1BC750
label_2074c8:
    if (ctx->pc == 0x2074C8u) {
        ctx->pc = 0x2074C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2074C4u;
        // 0x2074c8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2074CCu;
        goto label_2074cc;
    }
    ctx->pc = 0x2074C4u;
    SET_GPR_U32(ctx, 31, 0x2074CCu);
    ctx->pc = 0x2074C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2074C4u;
    // 0x2074c8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC750u;
    { ctx->pc = 0x1bc750; return; }
    ctx->pc = 0x2074CCu;
label_2074cc:
    // 0x2074cc: 0x8f8490fc  lw          $a0, -0x6F04($gp)
    ctx->pc = 0x2074ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_2074d0:
    // 0x2074d0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2074d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2074d4:
    // 0x2074d4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2074d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2074d8:
    // 0x2074d8: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2074d8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_2074dc:
    // 0x2074dc: 0x8c23e2ec  lw          $v1, -0x1D14($at)
    ctx->pc = 0x2074dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959852)));
label_2074e0:
    // 0x2074e0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2074e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2074e4:
    // 0x2074e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2074e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2074e8:
    // 0x2074e8: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2074e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_2074ec:
    // 0x2074ec: 0xac22e2ec  sw          $v0, -0x1D14($at)
    ctx->pc = 0x2074ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959852), GPR_U32(ctx, 2));
label_2074f0:
    // 0x2074f0: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x2074f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_2074f4:
    // 0x2074f4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2074f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2074f8:
    // 0x2074f8: 0x3421e2ec  ori         $at, $at, 0xE2EC
    ctx->pc = 0x2074f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58092);
label_2074fc:
    // 0x2074fc: 0x411821  addu        $v1, $v0, $at
    ctx->pc = 0x2074fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_207500:
    // 0x207500: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x207500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_207504:
    // 0x207504: 0x28410191  slti        $at, $v0, 0x191
    ctx->pc = 0x207504u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)401) ? 1 : 0);
label_207508:
    // 0x207508: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_20750c:
    if (ctx->pc == 0x20750Cu) {
        ctx->pc = 0x207510u;
        goto label_207510;
    }
    ctx->pc = 0x207508u;
    {
        const bool branch_taken_0x207508 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x207508) {
            ctx->pc = 0x207514u;
            goto label_207514;
        }
    }
    ctx->pc = 0x207510u;
label_207510:
    // 0x207510: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x207510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_207514:
    // 0x207514: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x207514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_207518:
    // 0x207518: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x207518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_20751c:
    // 0x20751c: 0x8f8490fc  lw          $a0, -0x6F04($gp)
    ctx->pc = 0x20751cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_207520:
    // 0x207520: 0x3421e2ec  ori         $at, $at, 0xE2EC
    ctx->pc = 0x207520u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58092);
label_207524:
    // 0x207524: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x207524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_207528:
    // 0x207528: 0x3443851f  ori         $v1, $v0, 0x851F
    ctx->pc = 0x207528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_20752c:
    // 0x20752c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x20752cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_207530:
    // 0x207530: 0x3447e2f0  ori         $a3, $v0, 0xE2F0
    ctx->pc = 0x207530u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58096);
label_207534:
    // 0x207534: 0x813021  addu        $a2, $a0, $at
    ctx->pc = 0x207534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_207538:
    // 0x207538: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x207538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_20753c:
    // 0x20753c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20753cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_207540:
    // 0x207540: 0x3421e2f0  ori         $at, $at, 0xE2F0
    ctx->pc = 0x207540u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58096);
label_207544:
    // 0x207544: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x207544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_207548:
    // 0x207548: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x207548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_20754c:
    // 0x20754c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x20754cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_207550:
    // 0x207550: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x207550u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_207554:
    // 0x207554: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x207554u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_207558:
    // 0x207558: 0x0  nop
    ctx->pc = 0x207558u;
    // NOP
label_20755c:
    // 0x20755c: 0x1010  mfhi        $v0
    ctx->pc = 0x20755cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_207560:
    // 0x207560: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x207560u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_207564:
    // 0x207564: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x207564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_207568:
    // 0x207568: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x207568u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_20756c:
    // 0x20756c: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x20756cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_207570:
    // 0x207570: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x207570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_207574:
    // 0x207574: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x207574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_207578:
    // 0x207578: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x207578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20757c:
    // 0x20757c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x20757cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_207580:
    // 0x207580: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x207580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_207584:
    // 0x207584: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x207584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_207588:
    // 0x207588: 0x411821  addu        $v1, $v0, $at
    ctx->pc = 0x207588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_20758c:
    // 0x20758c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20758cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_207590:
    // 0x207590: 0x28410191  slti        $at, $v0, 0x191
    ctx->pc = 0x207590u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)401) ? 1 : 0);
label_207594:
    // 0x207594: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_207598:
    if (ctx->pc == 0x207598u) {
        ctx->pc = 0x207598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207594u;
        // 0x207598: 0x24050190  addiu       $a1, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20759Cu;
        goto label_20759c;
    }
    ctx->pc = 0x207594u;
    {
        const bool branch_taken_0x207594 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x207598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207594u;
        // 0x207598: 0x24050190  addiu       $a1, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207594) {
            ctx->pc = 0x2075A0u;
            goto label_2075a0;
        }
    }
    ctx->pc = 0x20759Cu;
label_20759c:
    // 0x20759c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x20759cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2075a0:
    // 0x2075a0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2075a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2075a4:
    // 0x2075a4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2075a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2075a8:
    // 0x2075a8: 0x8f8490fc  lw          $a0, -0x6F04($gp)
    ctx->pc = 0x2075a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_2075ac:
    // 0x2075ac: 0x3421e2f0  ori         $at, $at, 0xE2F0
    ctx->pc = 0x2075acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58096);
label_2075b0:
    // 0x2075b0: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x2075b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_2075b4:
    // 0x2075b4: 0x3443851f  ori         $v1, $v0, 0x851F
    ctx->pc = 0x2075b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_2075b8:
    // 0x2075b8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2075b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2075bc:
    // 0x2075bc: 0x3446e2f4  ori         $a2, $v0, 0xE2F4
    ctx->pc = 0x2075bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58100);
label_2075c0:
    // 0x2075c0: 0x812821  addu        $a1, $a0, $at
    ctx->pc = 0x2075c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_2075c4:
    // 0x2075c4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2075c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2075c8:
    // 0x2075c8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2075c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2075cc:
    // 0x2075cc: 0x3421e2f4  ori         $at, $at, 0xE2F4
    ctx->pc = 0x2075ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58100);
label_2075d0:
    // 0x2075d0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x2075d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2075d4:
    // 0x2075d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2075d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2075d8:
    // 0x2075d8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2075d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2075dc:
    // 0x2075dc: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x2075dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2075e0:
    // 0x2075e0: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2075e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_2075e4:
    // 0x2075e4: 0x0  nop
    ctx->pc = 0x2075e4u;
    // NOP
label_2075e8:
    // 0x2075e8: 0x1010  mfhi        $v0
    ctx->pc = 0x2075e8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2075ec:
    // 0x2075ec: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x2075ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_2075f0:
    // 0x2075f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2075f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2075f4:
    // 0x2075f4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2075f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_2075f8:
    // 0x2075f8: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x2075f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_2075fc:
    // 0x2075fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2075fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_207600:
    // 0x207600: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x207600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_207604:
    // 0x207604: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x207604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_207608:
    // 0x207608: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x207608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20760c:
    // 0x20760c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x20760cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_207610:
    // 0x207610: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x207610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_207614:
    // 0x207614: 0x411821  addu        $v1, $v0, $at
    ctx->pc = 0x207614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_207618:
    // 0x207618: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x207618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20761c:
    // 0x20761c: 0x284100fb  slti        $at, $v0, 0xFB
    ctx->pc = 0x20761cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)251) ? 1 : 0);
label_207620:
    // 0x207620: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_207624:
    if (ctx->pc == 0x207624u) {
        ctx->pc = 0x207628u;
        goto label_207628;
    }
    ctx->pc = 0x207620u;
    {
        const bool branch_taken_0x207620 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x207620) {
            ctx->pc = 0x20762Cu;
            goto label_20762c;
        }
    }
    ctx->pc = 0x207628u;
label_207628:
    // 0x207628: 0x240200fa  addiu       $v0, $zero, 0xFA
    ctx->pc = 0x207628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_20762c:
    // 0x20762c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x20762cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_207630:
    // 0x207630: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x207630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_207634:
    // 0x207634: 0x8f8490fc  lw          $a0, -0x6F04($gp)
    ctx->pc = 0x207634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_207638:
    // 0x207638: 0x3421e2f4  ori         $at, $at, 0xE2F4
    ctx->pc = 0x207638u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58100);
label_20763c:
    // 0x20763c: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x20763cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
label_207640:
    // 0x207640: 0x34434dd3  ori         $v1, $v0, 0x4DD3
    ctx->pc = 0x207640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
label_207644:
    // 0x207644: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x207644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_207648:
    // 0x207648: 0x3447e2f8  ori         $a3, $v0, 0xE2F8
    ctx->pc = 0x207648u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58104);
label_20764c:
    // 0x20764c: 0x813021  addu        $a2, $a0, $at
    ctx->pc = 0x20764cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_207650:
    // 0x207650: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x207650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_207654:
    // 0x207654: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x207654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_207658:
    // 0x207658: 0x3421e2f8  ori         $at, $at, 0xE2F8
    ctx->pc = 0x207658u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58104);
label_20765c:
    // 0x20765c: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x20765cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_207660:
    // 0x207660: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x207660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_207664:
    // 0x207664: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x207664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_207668:
    // 0x207668: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x207668u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_20766c:
    // 0x20766c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x20766cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_207670:
    // 0x207670: 0x0  nop
    ctx->pc = 0x207670u;
    // NOP
label_207674:
    // 0x207674: 0x1010  mfhi        $v0
    ctx->pc = 0x207674u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_207678:
    // 0x207678: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x207678u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_20767c:
    // 0x20767c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20767cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_207680:
    // 0x207680: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x207680u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_207684:
    // 0x207684: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x207684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_207688:
    // 0x207688: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x207688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_20768c:
    // 0x20768c: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x20768cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_207690:
    // 0x207690: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x207690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_207694:
    // 0x207694: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x207694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_207698:
    // 0x207698: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x207698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_20769c:
    // 0x20769c: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x20769cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_2076a0:
    // 0x2076a0: 0x411821  addu        $v1, $v0, $at
    ctx->pc = 0x2076a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2076a4:
    // 0x2076a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2076a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2076a8:
    // 0x2076a8: 0x284100fb  slti        $at, $v0, 0xFB
    ctx->pc = 0x2076a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)251) ? 1 : 0);
label_2076ac:
    // 0x2076ac: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_2076b0:
    if (ctx->pc == 0x2076B0u) {
        ctx->pc = 0x2076B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2076ACu;
        // 0x2076b0: 0x240500fa  addiu       $a1, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2076B4u;
        goto label_2076b4;
    }
    ctx->pc = 0x2076ACu;
    {
        const bool branch_taken_0x2076ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2076B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2076ACu;
        // 0x2076b0: 0x240500fa  addiu       $a1, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2076ac) {
            ctx->pc = 0x2076B8u;
            goto label_2076b8;
        }
    }
    ctx->pc = 0x2076B4u;
label_2076b4:
    // 0x2076b4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2076b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2076b8:
    // 0x2076b8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2076b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2076bc:
    // 0x2076bc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2076bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2076c0:
    // 0x2076c0: 0x8f8690fc  lw          $a2, -0x6F04($gp)
    ctx->pc = 0x2076c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_2076c4:
    // 0x2076c4: 0x3421e2f8  ori         $at, $at, 0xE2F8
    ctx->pc = 0x2076c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58104);
label_2076c8:
    // 0x2076c8: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x2076c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
label_2076cc:
    // 0x2076cc: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x2076ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_2076d0:
    // 0x2076d0: 0x34454dd3  ori         $a1, $v0, 0x4DD3
    ctx->pc = 0x2076d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
label_2076d4:
    // 0x2076d4: 0x24635370  addiu       $v1, $v1, 0x5370
    ctx->pc = 0x2076d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21360));
label_2076d8:
    // 0x2076d8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2076d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2076dc:
    // 0x2076dc: 0x3448e300  ori         $t0, $v0, 0xE300
    ctx->pc = 0x2076dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58112);
label_2076e0:
    // 0x2076e0: 0xc13821  addu        $a3, $a2, $at
    ctx->pc = 0x2076e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_2076e4:
    // 0x2076e4: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x2076e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2076e8:
    // 0x2076e8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2076e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2076ec:
    // 0x2076ec: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x2076ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_2076f0:
    // 0x2076f0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2076f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2076f4:
    // 0x2076f4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2076f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2076f8:
    // 0x2076f8: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x2076f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2076fc:
    // 0x2076fc: 0x22fc2  srl         $a1, $v0, 31
    ctx->pc = 0x2076fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_207700:
    // 0x207700: 0x0  nop
    ctx->pc = 0x207700u;
    // NOP
label_207704:
    // 0x207704: 0x1010  mfhi        $v0
    ctx->pc = 0x207704u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_207708:
    // 0x207708: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x207708u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_20770c:
    // 0x20770c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20770cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_207710:
    // 0x207710: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x207710u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_207714:
    // 0x207714: 0x92050066  lbu         $a1, 0x66($s0)
    ctx->pc = 0x207714u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 102)));
label_207718:
    // 0x207718: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x207718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_20771c:
    // 0x20771c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20771cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_207720:
    // 0x207720: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x207720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_207724:
    // 0x207724: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x207724u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_207728:
    // 0x207728: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x207728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_20772c:
    // 0x20772c: 0xac23e2fc  sw          $v1, -0x1D04($at)
    ctx->pc = 0x20772cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959868), GPR_U32(ctx, 3));
label_207730:
    // 0x207730: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x207730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_207734:
    // 0x207734: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_207738:
    // 0x207738: 0x92030077  lbu         $v1, 0x77($s0)
    ctx->pc = 0x207738u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 119)));
label_20773c:
    // 0x20773c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x20773cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_207740:
    // 0x207740: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x207740u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_207744:
    // 0x207744: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x207744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_207748:
    // 0x207748: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x207748u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_20774c:
    // 0x20774c: 0x8c25e300  lw          $a1, -0x1D00($at)
    ctx->pc = 0x20774cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959872)));
label_207750:
    // 0x207750: 0xc056968  jal         func_15A5A0
label_207754:
    if (ctx->pc == 0x207754u) {
        ctx->pc = 0x207754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207750u;
        // 0x207754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207758u;
        goto label_207758;
    }
    ctx->pc = 0x207750u;
    SET_GPR_U32(ctx, 31, 0x207758u);
    ctx->pc = 0x207754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207750u;
    // 0x207754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A5A0u, 0x207750u, 0x207758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207758u;
label_207758:
    // 0x207758: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x207758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_20775c:
    // 0x20775c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x20775cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    ctx->pc = 0x207760u;
    return;
}
