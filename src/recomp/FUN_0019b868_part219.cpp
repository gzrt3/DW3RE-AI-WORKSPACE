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

// Function: FUN_0019b868
// Address: 0x19b868 - 0x29b870
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b868_part219(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x205f88u: goto label_205f88;
        case 0x205f8cu: goto label_205f8c;
        case 0x205f90u: goto label_205f90;
        case 0x205f94u: goto label_205f94;
        case 0x205f98u: goto label_205f98;
        case 0x205f9cu: goto label_205f9c;
        case 0x205fa0u: goto label_205fa0;
        case 0x205fa4u: goto label_205fa4;
        case 0x205fa8u: goto label_205fa8;
        case 0x205facu: goto label_205fac;
        case 0x205fb0u: goto label_205fb0;
        case 0x205fb4u: goto label_205fb4;
        case 0x205fb8u: goto label_205fb8;
        case 0x205fbcu: goto label_205fbc;
        case 0x205fc0u: goto label_205fc0;
        case 0x205fc4u: goto label_205fc4;
        case 0x205fc8u: goto label_205fc8;
        case 0x205fccu: goto label_205fcc;
        case 0x205fd0u: goto label_205fd0;
        case 0x205fd4u: goto label_205fd4;
        case 0x205fd8u: goto label_205fd8;
        case 0x205fdcu: goto label_205fdc;
        case 0x205fe0u: goto label_205fe0;
        case 0x205fe4u: goto label_205fe4;
        case 0x205fe8u: goto label_205fe8;
        case 0x205fecu: goto label_205fec;
        case 0x205ff0u: goto label_205ff0;
        case 0x205ff4u: goto label_205ff4;
        case 0x205ff8u: goto label_205ff8;
        case 0x205ffcu: goto label_205ffc;
        case 0x206000u: goto label_206000;
        case 0x206004u: goto label_206004;
        case 0x206008u: goto label_206008;
        case 0x20600cu: goto label_20600c;
        case 0x206010u: goto label_206010;
        case 0x206014u: goto label_206014;
        case 0x206018u: goto label_206018;
        case 0x20601cu: goto label_20601c;
        case 0x206020u: goto label_206020;
        case 0x206024u: goto label_206024;
        case 0x206028u: goto label_206028;
        case 0x20602cu: goto label_20602c;
        case 0x206030u: goto label_206030;
        case 0x206034u: goto label_206034;
        case 0x206038u: goto label_206038;
        case 0x20603cu: goto label_20603c;
        case 0x206040u: goto label_206040;
        case 0x206044u: goto label_206044;
        case 0x206048u: goto label_206048;
        case 0x20604cu: goto label_20604c;
        case 0x206050u: goto label_206050;
        case 0x206054u: goto label_206054;
        case 0x206058u: goto label_206058;
        case 0x20605cu: goto label_20605c;
        case 0x206060u: goto label_206060;
        case 0x206064u: goto label_206064;
        case 0x206068u: goto label_206068;
        case 0x20606cu: goto label_20606c;
        case 0x206070u: goto label_206070;
        case 0x206074u: goto label_206074;
        case 0x206078u: goto label_206078;
        case 0x20607cu: goto label_20607c;
        case 0x206080u: goto label_206080;
        case 0x206084u: goto label_206084;
        case 0x206088u: goto label_206088;
        case 0x20608cu: goto label_20608c;
        case 0x206090u: goto label_206090;
        case 0x206094u: goto label_206094;
        case 0x206098u: goto label_206098;
        case 0x20609cu: goto label_20609c;
        case 0x2060a0u: goto label_2060a0;
        case 0x2060a4u: goto label_2060a4;
        case 0x2060a8u: goto label_2060a8;
        case 0x2060acu: goto label_2060ac;
        case 0x2060b0u: goto label_2060b0;
        case 0x2060b4u: goto label_2060b4;
        case 0x2060b8u: goto label_2060b8;
        case 0x2060bcu: goto label_2060bc;
        case 0x2060c0u: goto label_2060c0;
        case 0x2060c4u: goto label_2060c4;
        case 0x2060c8u: goto label_2060c8;
        case 0x2060ccu: goto label_2060cc;
        case 0x2060d0u: goto label_2060d0;
        case 0x2060d4u: goto label_2060d4;
        case 0x2060d8u: goto label_2060d8;
        case 0x2060dcu: goto label_2060dc;
        case 0x2060e0u: goto label_2060e0;
        case 0x2060e4u: goto label_2060e4;
        case 0x2060e8u: goto label_2060e8;
        case 0x2060ecu: goto label_2060ec;
        case 0x2060f0u: goto label_2060f0;
        case 0x2060f4u: goto label_2060f4;
        case 0x2060f8u: goto label_2060f8;
        case 0x2060fcu: goto label_2060fc;
        case 0x206100u: goto label_206100;
        case 0x206104u: goto label_206104;
        case 0x206108u: goto label_206108;
        case 0x20610cu: goto label_20610c;
        case 0x206110u: goto label_206110;
        case 0x206114u: goto label_206114;
        case 0x206118u: goto label_206118;
        case 0x20611cu: goto label_20611c;
        case 0x206120u: goto label_206120;
        case 0x206124u: goto label_206124;
        case 0x206128u: goto label_206128;
        case 0x20612cu: goto label_20612c;
        case 0x206130u: goto label_206130;
        case 0x206134u: goto label_206134;
        case 0x206138u: goto label_206138;
        case 0x20613cu: goto label_20613c;
        case 0x206140u: goto label_206140;
        case 0x206144u: goto label_206144;
        case 0x206148u: goto label_206148;
        case 0x20614cu: goto label_20614c;
        case 0x206150u: goto label_206150;
        case 0x206154u: goto label_206154;
        case 0x206158u: goto label_206158;
        case 0x20615cu: goto label_20615c;
        case 0x206160u: goto label_206160;
        case 0x206164u: goto label_206164;
        case 0x206168u: goto label_206168;
        case 0x20616cu: goto label_20616c;
        case 0x206170u: goto label_206170;
        case 0x206174u: goto label_206174;
        case 0x206178u: goto label_206178;
        case 0x20617cu: goto label_20617c;
        case 0x206180u: goto label_206180;
        case 0x206184u: goto label_206184;
        case 0x206188u: goto label_206188;
        case 0x20618cu: goto label_20618c;
        case 0x206190u: goto label_206190;
        case 0x206194u: goto label_206194;
        case 0x206198u: goto label_206198;
        case 0x20619cu: goto label_20619c;
        case 0x2061a0u: goto label_2061a0;
        case 0x2061a4u: goto label_2061a4;
        case 0x2061a8u: goto label_2061a8;
        case 0x2061acu: goto label_2061ac;
        case 0x2061b0u: goto label_2061b0;
        case 0x2061b4u: goto label_2061b4;
        case 0x2061b8u: goto label_2061b8;
        case 0x2061bcu: goto label_2061bc;
        case 0x2061c0u: goto label_2061c0;
        case 0x2061c4u: goto label_2061c4;
        case 0x2061c8u: goto label_2061c8;
        case 0x2061ccu: goto label_2061cc;
        case 0x2061d0u: goto label_2061d0;
        case 0x2061d4u: goto label_2061d4;
        case 0x2061d8u: goto label_2061d8;
        case 0x2061dcu: goto label_2061dc;
        case 0x2061e0u: goto label_2061e0;
        case 0x2061e4u: goto label_2061e4;
        case 0x2061e8u: goto label_2061e8;
        case 0x2061ecu: goto label_2061ec;
        case 0x2061f0u: goto label_2061f0;
        case 0x2061f4u: goto label_2061f4;
        case 0x2061f8u: goto label_2061f8;
        case 0x2061fcu: goto label_2061fc;
        case 0x206200u: goto label_206200;
        case 0x206204u: goto label_206204;
        case 0x206208u: goto label_206208;
        case 0x20620cu: goto label_20620c;
        case 0x206210u: goto label_206210;
        case 0x206214u: goto label_206214;
        case 0x206218u: goto label_206218;
        case 0x20621cu: goto label_20621c;
        case 0x206220u: goto label_206220;
        case 0x206224u: goto label_206224;
        case 0x206228u: goto label_206228;
        case 0x20622cu: goto label_20622c;
        case 0x206230u: goto label_206230;
        case 0x206234u: goto label_206234;
        case 0x206238u: goto label_206238;
        case 0x20623cu: goto label_20623c;
        case 0x206240u: goto label_206240;
        case 0x206244u: goto label_206244;
        case 0x206248u: goto label_206248;
        case 0x20624cu: goto label_20624c;
        case 0x206250u: goto label_206250;
        case 0x206254u: goto label_206254;
        case 0x206258u: goto label_206258;
        case 0x20625cu: goto label_20625c;
        case 0x206260u: goto label_206260;
        case 0x206264u: goto label_206264;
        case 0x206268u: goto label_206268;
        case 0x20626cu: goto label_20626c;
        case 0x206270u: goto label_206270;
        case 0x206274u: goto label_206274;
        case 0x206278u: goto label_206278;
        case 0x20627cu: goto label_20627c;
        case 0x206280u: goto label_206280;
        case 0x206284u: goto label_206284;
        case 0x206288u: goto label_206288;
        case 0x20628cu: goto label_20628c;
        case 0x206290u: goto label_206290;
        case 0x206294u: goto label_206294;
        case 0x206298u: goto label_206298;
        case 0x20629cu: goto label_20629c;
        case 0x2062a0u: goto label_2062a0;
        case 0x2062a4u: goto label_2062a4;
        case 0x2062a8u: goto label_2062a8;
        case 0x2062acu: goto label_2062ac;
        case 0x2062b0u: goto label_2062b0;
        case 0x2062b4u: goto label_2062b4;
        case 0x2062b8u: goto label_2062b8;
        case 0x2062bcu: goto label_2062bc;
        case 0x2062c0u: goto label_2062c0;
        case 0x2062c4u: goto label_2062c4;
        case 0x2062c8u: goto label_2062c8;
        case 0x2062ccu: goto label_2062cc;
        case 0x2062d0u: goto label_2062d0;
        case 0x2062d4u: goto label_2062d4;
        case 0x2062d8u: goto label_2062d8;
        case 0x2062dcu: goto label_2062dc;
        case 0x2062e0u: goto label_2062e0;
        case 0x2062e4u: goto label_2062e4;
        case 0x2062e8u: goto label_2062e8;
        case 0x2062ecu: goto label_2062ec;
        case 0x2062f0u: goto label_2062f0;
        case 0x2062f4u: goto label_2062f4;
        case 0x2062f8u: goto label_2062f8;
        case 0x2062fcu: goto label_2062fc;
        case 0x206300u: goto label_206300;
        case 0x206304u: goto label_206304;
        case 0x206308u: goto label_206308;
        case 0x20630cu: goto label_20630c;
        case 0x206310u: goto label_206310;
        case 0x206314u: goto label_206314;
        case 0x206318u: goto label_206318;
        case 0x20631cu: goto label_20631c;
        case 0x206320u: goto label_206320;
        case 0x206324u: goto label_206324;
        case 0x206328u: goto label_206328;
        case 0x20632cu: goto label_20632c;
        case 0x206330u: goto label_206330;
        case 0x206334u: goto label_206334;
        case 0x206338u: goto label_206338;
        case 0x20633cu: goto label_20633c;
        case 0x206340u: goto label_206340;
        case 0x206344u: goto label_206344;
        case 0x206348u: goto label_206348;
        case 0x20634cu: goto label_20634c;
        case 0x206350u: goto label_206350;
        case 0x206354u: goto label_206354;
        case 0x206358u: goto label_206358;
        case 0x20635cu: goto label_20635c;
        case 0x206360u: goto label_206360;
        case 0x206364u: goto label_206364;
        case 0x206368u: goto label_206368;
        case 0x20636cu: goto label_20636c;
        case 0x206370u: goto label_206370;
        case 0x206374u: goto label_206374;
        case 0x206378u: goto label_206378;
        case 0x20637cu: goto label_20637c;
        case 0x206380u: goto label_206380;
        case 0x206384u: goto label_206384;
        case 0x206388u: goto label_206388;
        case 0x20638cu: goto label_20638c;
        case 0x206390u: goto label_206390;
        case 0x206394u: goto label_206394;
        case 0x206398u: goto label_206398;
        case 0x20639cu: goto label_20639c;
        case 0x2063a0u: goto label_2063a0;
        case 0x2063a4u: goto label_2063a4;
        case 0x2063a8u: goto label_2063a8;
        case 0x2063acu: goto label_2063ac;
        case 0x2063b0u: goto label_2063b0;
        case 0x2063b4u: goto label_2063b4;
        case 0x2063b8u: goto label_2063b8;
        case 0x2063bcu: goto label_2063bc;
        case 0x2063c0u: goto label_2063c0;
        case 0x2063c4u: goto label_2063c4;
        case 0x2063c8u: goto label_2063c8;
        case 0x2063ccu: goto label_2063cc;
        case 0x2063d0u: goto label_2063d0;
        case 0x2063d4u: goto label_2063d4;
        case 0x2063d8u: goto label_2063d8;
        case 0x2063dcu: goto label_2063dc;
        case 0x2063e0u: goto label_2063e0;
        case 0x2063e4u: goto label_2063e4;
        case 0x2063e8u: goto label_2063e8;
        case 0x2063ecu: goto label_2063ec;
        case 0x2063f0u: goto label_2063f0;
        case 0x2063f4u: goto label_2063f4;
        case 0x2063f8u: goto label_2063f8;
        case 0x2063fcu: goto label_2063fc;
        case 0x206400u: goto label_206400;
        case 0x206404u: goto label_206404;
        case 0x206408u: goto label_206408;
        case 0x20640cu: goto label_20640c;
        case 0x206410u: goto label_206410;
        case 0x206414u: goto label_206414;
        case 0x206418u: goto label_206418;
        case 0x20641cu: goto label_20641c;
        case 0x206420u: goto label_206420;
        case 0x206424u: goto label_206424;
        case 0x206428u: goto label_206428;
        case 0x20642cu: goto label_20642c;
        case 0x206430u: goto label_206430;
        case 0x206434u: goto label_206434;
        case 0x206438u: goto label_206438;
        case 0x20643cu: goto label_20643c;
        case 0x206440u: goto label_206440;
        case 0x206444u: goto label_206444;
        case 0x206448u: goto label_206448;
        case 0x20644cu: goto label_20644c;
        case 0x206450u: goto label_206450;
        case 0x206454u: goto label_206454;
        case 0x206458u: goto label_206458;
        case 0x20645cu: goto label_20645c;
        case 0x206460u: goto label_206460;
        case 0x206464u: goto label_206464;
        case 0x206468u: goto label_206468;
        case 0x20646cu: goto label_20646c;
        case 0x206470u: goto label_206470;
        case 0x206474u: goto label_206474;
        case 0x206478u: goto label_206478;
        case 0x20647cu: goto label_20647c;
        case 0x206480u: goto label_206480;
        case 0x206484u: goto label_206484;
        case 0x206488u: goto label_206488;
        case 0x20648cu: goto label_20648c;
        case 0x206490u: goto label_206490;
        case 0x206494u: goto label_206494;
        case 0x206498u: goto label_206498;
        case 0x20649cu: goto label_20649c;
        case 0x2064a0u: goto label_2064a0;
        case 0x2064a4u: goto label_2064a4;
        case 0x2064a8u: goto label_2064a8;
        case 0x2064acu: goto label_2064ac;
        case 0x2064b0u: goto label_2064b0;
        case 0x2064b4u: goto label_2064b4;
        case 0x2064b8u: goto label_2064b8;
        case 0x2064bcu: goto label_2064bc;
        case 0x2064c0u: goto label_2064c0;
        case 0x2064c4u: goto label_2064c4;
        case 0x2064c8u: goto label_2064c8;
        case 0x2064ccu: goto label_2064cc;
        case 0x2064d0u: goto label_2064d0;
        case 0x2064d4u: goto label_2064d4;
        case 0x2064d8u: goto label_2064d8;
        case 0x2064dcu: goto label_2064dc;
        case 0x2064e0u: goto label_2064e0;
        case 0x2064e4u: goto label_2064e4;
        case 0x2064e8u: goto label_2064e8;
        case 0x2064ecu: goto label_2064ec;
        case 0x2064f0u: goto label_2064f0;
        case 0x2064f4u: goto label_2064f4;
        case 0x2064f8u: goto label_2064f8;
        case 0x2064fcu: goto label_2064fc;
        case 0x206500u: goto label_206500;
        case 0x206504u: goto label_206504;
        case 0x206508u: goto label_206508;
        case 0x20650cu: goto label_20650c;
        case 0x206510u: goto label_206510;
        case 0x206514u: goto label_206514;
        case 0x206518u: goto label_206518;
        case 0x20651cu: goto label_20651c;
        case 0x206520u: goto label_206520;
        case 0x206524u: goto label_206524;
        case 0x206528u: goto label_206528;
        case 0x20652cu: goto label_20652c;
        case 0x206530u: goto label_206530;
        case 0x206534u: goto label_206534;
        case 0x206538u: goto label_206538;
        case 0x20653cu: goto label_20653c;
        case 0x206540u: goto label_206540;
        case 0x206544u: goto label_206544;
        case 0x206548u: goto label_206548;
        case 0x20654cu: goto label_20654c;
        case 0x206550u: goto label_206550;
        case 0x206554u: goto label_206554;
        case 0x206558u: goto label_206558;
        case 0x20655cu: goto label_20655c;
        case 0x206560u: goto label_206560;
        case 0x206564u: goto label_206564;
        case 0x206568u: goto label_206568;
        case 0x20656cu: goto label_20656c;
        case 0x206570u: goto label_206570;
        case 0x206574u: goto label_206574;
        case 0x206578u: goto label_206578;
        case 0x20657cu: goto label_20657c;
        case 0x206580u: goto label_206580;
        case 0x206584u: goto label_206584;
        case 0x206588u: goto label_206588;
        case 0x20658cu: goto label_20658c;
        case 0x206590u: goto label_206590;
        case 0x206594u: goto label_206594;
        case 0x206598u: goto label_206598;
        case 0x20659cu: goto label_20659c;
        case 0x2065a0u: goto label_2065a0;
        case 0x2065a4u: goto label_2065a4;
        case 0x2065a8u: goto label_2065a8;
        case 0x2065acu: goto label_2065ac;
        case 0x2065b0u: goto label_2065b0;
        case 0x2065b4u: goto label_2065b4;
        case 0x2065b8u: goto label_2065b8;
        case 0x2065bcu: goto label_2065bc;
        case 0x2065c0u: goto label_2065c0;
        case 0x2065c4u: goto label_2065c4;
        case 0x2065c8u: goto label_2065c8;
        case 0x2065ccu: goto label_2065cc;
        case 0x2065d0u: goto label_2065d0;
        case 0x2065d4u: goto label_2065d4;
        case 0x2065d8u: goto label_2065d8;
        case 0x2065dcu: goto label_2065dc;
        case 0x2065e0u: goto label_2065e0;
        case 0x2065e4u: goto label_2065e4;
        case 0x2065e8u: goto label_2065e8;
        case 0x2065ecu: goto label_2065ec;
        case 0x2065f0u: goto label_2065f0;
        case 0x2065f4u: goto label_2065f4;
        case 0x2065f8u: goto label_2065f8;
        case 0x2065fcu: goto label_2065fc;
        case 0x206600u: goto label_206600;
        case 0x206604u: goto label_206604;
        case 0x206608u: goto label_206608;
        case 0x20660cu: goto label_20660c;
        case 0x206610u: goto label_206610;
        case 0x206614u: goto label_206614;
        case 0x206618u: goto label_206618;
        case 0x20661cu: goto label_20661c;
        case 0x206620u: goto label_206620;
        case 0x206624u: goto label_206624;
        case 0x206628u: goto label_206628;
        case 0x20662cu: goto label_20662c;
        case 0x206630u: goto label_206630;
        case 0x206634u: goto label_206634;
        case 0x206638u: goto label_206638;
        case 0x20663cu: goto label_20663c;
        case 0x206640u: goto label_206640;
        case 0x206644u: goto label_206644;
        case 0x206648u: goto label_206648;
        case 0x20664cu: goto label_20664c;
        case 0x206650u: goto label_206650;
        case 0x206654u: goto label_206654;
        case 0x206658u: goto label_206658;
        case 0x20665cu: goto label_20665c;
        case 0x206660u: goto label_206660;
        case 0x206664u: goto label_206664;
        case 0x206668u: goto label_206668;
        case 0x20666cu: goto label_20666c;
        case 0x206670u: goto label_206670;
        case 0x206674u: goto label_206674;
        case 0x206678u: goto label_206678;
        case 0x20667cu: goto label_20667c;
        case 0x206680u: goto label_206680;
        case 0x206684u: goto label_206684;
        case 0x206688u: goto label_206688;
        case 0x20668cu: goto label_20668c;
        case 0x206690u: goto label_206690;
        case 0x206694u: goto label_206694;
        case 0x206698u: goto label_206698;
        case 0x20669cu: goto label_20669c;
        case 0x2066a0u: goto label_2066a0;
        case 0x2066a4u: goto label_2066a4;
        case 0x2066a8u: goto label_2066a8;
        case 0x2066acu: goto label_2066ac;
        case 0x2066b0u: goto label_2066b0;
        case 0x2066b4u: goto label_2066b4;
        case 0x2066b8u: goto label_2066b8;
        case 0x2066bcu: goto label_2066bc;
        case 0x2066c0u: goto label_2066c0;
        case 0x2066c4u: goto label_2066c4;
        case 0x2066c8u: goto label_2066c8;
        case 0x2066ccu: goto label_2066cc;
        case 0x2066d0u: goto label_2066d0;
        case 0x2066d4u: goto label_2066d4;
        case 0x2066d8u: goto label_2066d8;
        case 0x2066dcu: goto label_2066dc;
        case 0x2066e0u: goto label_2066e0;
        case 0x2066e4u: goto label_2066e4;
        case 0x2066e8u: goto label_2066e8;
        case 0x2066ecu: goto label_2066ec;
        case 0x2066f0u: goto label_2066f0;
        case 0x2066f4u: goto label_2066f4;
        case 0x2066f8u: goto label_2066f8;
        case 0x2066fcu: goto label_2066fc;
        case 0x206700u: goto label_206700;
        case 0x206704u: goto label_206704;
        case 0x206708u: goto label_206708;
        case 0x20670cu: goto label_20670c;
        case 0x206710u: goto label_206710;
        case 0x206714u: goto label_206714;
        case 0x206718u: goto label_206718;
        case 0x20671cu: goto label_20671c;
        case 0x206720u: goto label_206720;
        case 0x206724u: goto label_206724;
        case 0x206728u: goto label_206728;
        case 0x20672cu: goto label_20672c;
        case 0x206730u: goto label_206730;
        case 0x206734u: goto label_206734;
        case 0x206738u: goto label_206738;
        case 0x20673cu: goto label_20673c;
        case 0x206740u: goto label_206740;
        case 0x206744u: goto label_206744;
        case 0x206748u: goto label_206748;
        case 0x20674cu: goto label_20674c;
        case 0x206750u: goto label_206750;
        case 0x206754u: goto label_206754;
        default: return;
    }

label_205f88:
    // 0x205f88: 0x1242000a  beq         $s2, $v0, . + 4 + (0xA << 2)
label_205f8c:
    if (ctx->pc == 0x205F8Cu) {
        ctx->pc = 0x205F90u;
        goto label_205f90;
    }
    ctx->pc = 0x205F88u;
    {
        const bool branch_taken_0x205f88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x205f88) {
            ctx->pc = 0x205FB4u;
            goto label_205fb4;
        }
    }
    ctx->pc = 0x205F90u;
label_205f90:
    // 0x205f90: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x205f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_205f94:
    // 0x205f94: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x205f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_205f98:
    // 0x205f98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x205f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205f9c:
    // 0x205f9c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x205f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_205fa0:
    // 0x205fa0: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x205fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_205fa4:
    // 0x205fa4: 0xc078050  jal         func_1E0140
label_205fa8:
    if (ctx->pc == 0x205FA8u) {
        ctx->pc = 0x205FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205FA4u;
        // 0x205fa8: 0xac23e324  sw          $v1, -0x1CDC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294959908), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205FACu;
        goto label_205fac;
    }
    ctx->pc = 0x205FA4u;
    SET_GPR_U32(ctx, 31, 0x205FACu);
    ctx->pc = 0x205FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205FA4u;
    // 0x205fa8: 0xac23e324  sw          $v1, -0x1CDC($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959908), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x205FACu;
label_205fac:
    // 0x205fac: 0x100000d0  b           . + 4 + (0xD0 << 2)
label_205fb0:
    if (ctx->pc == 0x205FB0u) {
        ctx->pc = 0x205FB4u;
        goto label_205fb4;
    }
    ctx->pc = 0x205FACu;
    {
        const bool branch_taken_0x205fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x205fac) {
            ctx->pc = 0x2062F0u;
            goto label_2062f0;
        }
    }
    ctx->pc = 0x205FB4u;
label_205fb4:
    // 0x205fb4: 0x0  nop
    ctx->pc = 0x205fb4u;
    // NOP
label_205fb8:
    // 0x205fb8: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x205fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_205fbc:
    // 0x205fbc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x205fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_205fc0:
    // 0x205fc0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x205fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_205fc4:
    // 0x205fc4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x205fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_205fc8:
    // 0x205fc8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x205fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_205fcc:
    // 0x205fcc: 0xac24e30c  sw          $a0, -0x1CF4($at)
    ctx->pc = 0x205fccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959884), GPR_U32(ctx, 4));
label_205fd0:
    // 0x205fd0: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x205fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_205fd4:
    // 0x205fd4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x205fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_205fd8:
    // 0x205fd8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x205fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_205fdc:
    // 0x205fdc: 0xc078078  jal         func_1E01E0
label_205fe0:
    if (ctx->pc == 0x205FE0u) {
        ctx->pc = 0x205FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205FDCu;
        // 0x205fe0: 0xac23e2e0  sw          $v1, -0x1D20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294959840), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205FE4u;
        goto label_205fe4;
    }
    ctx->pc = 0x205FDCu;
    SET_GPR_U32(ctx, 31, 0x205FE4u);
    ctx->pc = 0x205FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205FDCu;
    // 0x205fe0: 0xac23e2e0  sw          $v1, -0x1D20($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959840), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E01E0u;
    { ctx->pc = 0x1e01e0; return; }
    ctx->pc = 0x205FE4u;
label_205fe4:
    // 0x205fe4: 0x10000004  b           . + 4 + (0x4 << 2)
label_205fe8:
    if (ctx->pc == 0x205FE8u) {
        ctx->pc = 0x205FECu;
        goto label_205fec;
    }
    ctx->pc = 0x205FE4u;
    {
        const bool branch_taken_0x205fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x205fe4) {
            ctx->pc = 0x205FF8u;
            goto label_205ff8;
        }
    }
    ctx->pc = 0x205FECu;
label_205fec:
    // 0x205fec: 0x0  nop
    ctx->pc = 0x205fecu;
    // NOP
label_205ff0:
    // 0x205ff0: 0xc07b48c  jal         func_1ED230
label_205ff4:
    if (ctx->pc == 0x205FF4u) {
        ctx->pc = 0x205FF8u;
        goto label_205ff8;
    }
    ctx->pc = 0x205FF0u;
    SET_GPR_U32(ctx, 31, 0x205FF8u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x205FF8u;
label_205ff8:
    // 0x205ff8: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x205ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_205ffc:
    // 0x205ffc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x205ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_206000:
    // 0x206000: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x206000u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_206004:
    // 0x206004: 0x8c22e2e0  lw          $v0, -0x1D20($at)
    ctx->pc = 0x206004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959840)));
label_206008:
    // 0x206008: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_20600c:
    if (ctx->pc == 0x20600Cu) {
        ctx->pc = 0x20600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206008u;
        // 0x20600c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206010u;
        goto label_206010;
    }
    ctx->pc = 0x206008u;
    {
        const bool branch_taken_0x206008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206008u;
        // 0x20600c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206008) {
            ctx->pc = 0x205FECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205fec;
        }
    }
    ctx->pc = 0x206010u;
label_206010:
    // 0x206010: 0xc090314  jal         func_240C50
label_206014:
    if (ctx->pc == 0x206014u) {
        ctx->pc = 0x206018u;
        goto label_206018;
    }
    ctx->pc = 0x206010u;
    SET_GPR_U32(ctx, 31, 0x206018u);
    ctx->pc = 0x240C50u;
    { ctx->pc = 0x240c50; return; }
    ctx->pc = 0x206018u;
label_206018:
    // 0x206018: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x206018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20601c:
    // 0x20601c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x20601cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_206020:
    // 0x206020: 0x160200b7  bne         $s0, $v0, . + 4 + (0xB7 << 2)
label_206024:
    if (ctx->pc == 0x206024u) {
        ctx->pc = 0x206024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206020u;
        // 0x206024: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206028u;
        goto label_206028;
    }
    ctx->pc = 0x206020u;
    {
        const bool branch_taken_0x206020 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x206024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206020u;
        // 0x206024: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206020) {
            ctx->pc = 0x206300u;
            goto label_206300;
        }
    }
    ctx->pc = 0x206028u;
label_206028:
    // 0x206028: 0xc05680c  jal         func_15A030
label_20602c:
    if (ctx->pc == 0x20602Cu) {
        ctx->pc = 0x206030u;
        goto label_206030;
    }
    ctx->pc = 0x206028u;
    SET_GPR_U32(ctx, 31, 0x206030u);
    ctx->pc = 0x15A030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A030u, 0x206028u, 0x206030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206030u;
label_206030:
    // 0x206030: 0xc078050  jal         func_1E0140
label_206034:
    if (ctx->pc == 0x206034u) {
        ctx->pc = 0x206034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206030u;
        // 0x206034: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206038u;
        goto label_206038;
    }
    ctx->pc = 0x206030u;
    SET_GPR_U32(ctx, 31, 0x206038u);
    ctx->pc = 0x206034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206030u;
    // 0x206034: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x206038u;
label_206038:
    // 0x206038: 0xc078070  jal         func_1E01C0
label_20603c:
    if (ctx->pc == 0x20603Cu) {
        ctx->pc = 0x206040u;
        goto label_206040;
    }
    ctx->pc = 0x206038u;
    SET_GPR_U32(ctx, 31, 0x206040u);
    ctx->pc = 0x1E01C0u;
    { ctx->pc = 0x1e01c0; return; }
    ctx->pc = 0x206040u;
label_206040:
    // 0x206040: 0xc081d14  jal         func_207450
label_206044:
    if (ctx->pc == 0x206044u) {
        ctx->pc = 0x206044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206040u;
        // 0x206044: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206048u;
        goto label_206048;
    }
    ctx->pc = 0x206040u;
    SET_GPR_U32(ctx, 31, 0x206048u);
    ctx->pc = 0x206044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206040u;
    // 0x206044: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207450u;
    { ctx->pc = 0x207450; return; }
    ctx->pc = 0x206048u;
label_206048:
    // 0x206048: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x206048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_20604c:
    // 0x20604c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x20604cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_206050:
    // 0x206050: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x206050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206054:
    // 0x206054: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x206054u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_206058:
    // 0x206058: 0x10000003  b           . + 4 + (0x3 << 2)
label_20605c:
    if (ctx->pc == 0x20605Cu) {
        ctx->pc = 0x20605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206058u;
        // 0x20605c: 0xac23e2e0  sw          $v1, -0x1D20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294959840), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206060u;
        goto label_206060;
    }
    ctx->pc = 0x206058u;
    {
        const bool branch_taken_0x206058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206058u;
        // 0x20605c: 0xac23e2e0  sw          $v1, -0x1D20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294959840), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206058) {
            ctx->pc = 0x206068u;
            goto label_206068;
        }
    }
    ctx->pc = 0x206060u;
label_206060:
    // 0x206060: 0xc07b48c  jal         func_1ED230
label_206064:
    if (ctx->pc == 0x206064u) {
        ctx->pc = 0x206068u;
        goto label_206068;
    }
    ctx->pc = 0x206060u;
    SET_GPR_U32(ctx, 31, 0x206068u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x206068u;
label_206068:
    // 0x206068: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x206068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_20606c:
    // 0x20606c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x20606cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_206070:
    // 0x206070: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x206070u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_206074:
    // 0x206074: 0x8c22e2e0  lw          $v0, -0x1D20($at)
    ctx->pc = 0x206074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959840)));
label_206078:
    // 0x206078: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_20607c:
    if (ctx->pc == 0x20607Cu) {
        ctx->pc = 0x20607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206078u;
        // 0x20607c: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206080u;
        goto label_206080;
    }
    ctx->pc = 0x206078u;
    {
        const bool branch_taken_0x206078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206078u;
        // 0x20607c: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206078) {
            ctx->pc = 0x206060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_206060;
        }
    }
    ctx->pc = 0x206080u;
label_206080:
    // 0x206080: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x206080u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_206084:
    // 0x206084: 0x1000009a  b           . + 4 + (0x9A << 2)
label_206088:
    if (ctx->pc == 0x206088u) {
        ctx->pc = 0x206088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206084u;
        // 0x206088: 0xac32e30c  sw          $s2, -0x1CF4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294959884), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20608Cu;
        goto label_20608c;
    }
    ctx->pc = 0x206084u;
    {
        const bool branch_taken_0x206084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206084u;
        // 0x206088: 0xac32e30c  sw          $s2, -0x1CF4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294959884), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206084) {
            ctx->pc = 0x2062F0u;
            goto label_2062f0;
        }
    }
    ctx->pc = 0x20608Cu;
label_20608c:
    // 0x20608c: 0x0  nop
    ctx->pc = 0x20608cu;
    // NOP
label_206090:
    // 0x206090: 0x152100  sll         $a0, $s5, 4
    ctx->pc = 0x206090u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
label_206094:
    // 0x206094: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x206094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_206098:
    // 0x206098: 0x821804  sllv        $v1, $v0, $a0
    ctx->pc = 0x206098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_20609c:
    // 0x20609c: 0xdf8287c0  ld          $v0, -0x7840($gp)
    ctx->pc = 0x20609cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_2060a0:
    // 0x2060a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2060a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2060a4:
    // 0x2060a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2060a8:
    if (ctx->pc == 0x2060A8u) {
        ctx->pc = 0x2060A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2060A4u;
        // 0x2060a8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2060ACu;
        goto label_2060ac;
    }
    ctx->pc = 0x2060A4u;
    {
        const bool branch_taken_0x2060a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2060A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2060A4u;
        // 0x2060a8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2060a4) {
            ctx->pc = 0x2060D8u;
            goto label_2060d8;
        }
    }
    ctx->pc = 0x2060ACu;
label_2060ac:
    // 0x2060ac: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2060acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2060b0:
    // 0x2060b0: 0xc05b420  jal         func_16D080
label_2060b4:
    if (ctx->pc == 0x2060B4u) {
        ctx->pc = 0x2060B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2060B0u;
        // 0x2060b4: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2060B8u;
        goto label_2060b8;
    }
    ctx->pc = 0x2060B0u;
    SET_GPR_U32(ctx, 31, 0x2060B8u);
    ctx->pc = 0x2060B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2060B0u;
    // 0x2060b4: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x2060B0u, 0x2060B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2060B8u;
label_2060b8:
    // 0x2060b8: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x2060b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_2060bc:
    // 0x2060bc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2060bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2060c0:
    // 0x2060c0: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2060c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2060c4:
    // 0x2060c4: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2060c4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2060c8:
    // 0x2060c8: 0xc078050  jal         func_1E0140
label_2060cc:
    if (ctx->pc == 0x2060CCu) {
        ctx->pc = 0x2060CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2060C8u;
        // 0x2060cc: 0xac20e324  sw          $zero, -0x1CDC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294959908), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2060D0u;
        goto label_2060d0;
    }
    ctx->pc = 0x2060C8u;
    SET_GPR_U32(ctx, 31, 0x2060D0u);
    ctx->pc = 0x2060CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2060C8u;
    // 0x2060cc: 0xac20e324  sw          $zero, -0x1CDC($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959908), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x2060D0u;
label_2060d0:
    // 0x2060d0: 0x10000013  b           . + 4 + (0x13 << 2)
label_2060d4:
    if (ctx->pc == 0x2060D4u) {
        ctx->pc = 0x2060D8u;
        goto label_2060d8;
    }
    ctx->pc = 0x2060D0u;
    {
        const bool branch_taken_0x2060d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2060d0) {
            ctx->pc = 0x206120u;
            goto label_206120;
        }
    }
    ctx->pc = 0x2060D8u;
label_2060d8:
    // 0x2060d8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2060d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2060dc:
    // 0x2060dc: 0x821804  sllv        $v1, $v0, $a0
    ctx->pc = 0x2060dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_2060e0:
    // 0x2060e0: 0xdf8287c0  ld          $v0, -0x7840($gp)
    ctx->pc = 0x2060e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_2060e4:
    // 0x2060e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2060e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2060e8:
    // 0x2060e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2060ec:
    if (ctx->pc == 0x2060ECu) {
        ctx->pc = 0x2060F0u;
        goto label_2060f0;
    }
    ctx->pc = 0x2060E8u;
    {
        const bool branch_taken_0x2060e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2060e8) {
            ctx->pc = 0x2060FCu;
            goto label_2060fc;
        }
    }
    ctx->pc = 0x2060F0u;
label_2060f0:
    // 0x2060f0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2060f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2060f4:
    // 0x2060f4: 0x1000000a  b           . + 4 + (0xA << 2)
label_2060f8:
    if (ctx->pc == 0x2060F8u) {
        ctx->pc = 0x2060F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2060F4u;
        // 0x2060f8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2060FCu;
        goto label_2060fc;
    }
    ctx->pc = 0x2060F4u;
    {
        const bool branch_taken_0x2060f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2060F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2060F4u;
        // 0x2060f8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2060f4) {
            ctx->pc = 0x206120u;
            goto label_206120;
        }
    }
    ctx->pc = 0x2060FCu;
label_2060fc:
    // 0x2060fc: 0x0  nop
    ctx->pc = 0x2060fcu;
    // NOP
label_206100:
    // 0x206100: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x206100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_206104:
    // 0x206104: 0x821804  sllv        $v1, $v0, $a0
    ctx->pc = 0x206104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_206108:
    // 0x206108: 0xdf8287c0  ld          $v0, -0x7840($gp)
    ctx->pc = 0x206108u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_20610c:
    // 0x20610c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20610cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_206110:
    // 0x206110: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_206114:
    if (ctx->pc == 0x206114u) {
        ctx->pc = 0x206118u;
        goto label_206118;
    }
    ctx->pc = 0x206110u;
    {
        const bool branch_taken_0x206110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206110) {
            ctx->pc = 0x206120u;
            goto label_206120;
        }
    }
    ctx->pc = 0x206118u;
label_206118:
    // 0x206118: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x206118u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20611c:
    // 0x20611c: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x20611cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_206120:
    // 0x206120: 0x12800073  beqz        $s4, . + 4 + (0x73 << 2)
label_206124:
    if (ctx->pc == 0x206124u) {
        ctx->pc = 0x206124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206120u;
        // 0x206124: 0x2e410006  sltiu       $at, $s2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x206128u;
        goto label_206128;
    }
    ctx->pc = 0x206120u;
    {
        const bool branch_taken_0x206120 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x206124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206120u;
        // 0x206124: 0x2e410006  sltiu       $at, $s2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x206120) {
            ctx->pc = 0x2062F0u;
            goto label_2062f0;
        }
    }
    ctx->pc = 0x206128u;
label_206128:
    // 0x206128: 0x10200071  beqz        $at, . + 4 + (0x71 << 2)
label_20612c:
    if (ctx->pc == 0x20612Cu) {
        ctx->pc = 0x20612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206128u;
        // 0x20612c: 0x3c03002d  lui         $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206130u;
        goto label_206130;
    }
    ctx->pc = 0x206128u;
    {
        const bool branch_taken_0x206128 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206128u;
        // 0x20612c: 0x3c03002d  lui         $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206128) {
            ctx->pc = 0x2062F0u;
            goto label_2062f0;
        }
    }
    ctx->pc = 0x206130u;
label_206130:
    // 0x206130: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x206130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_206134:
    // 0x206134: 0x2463e010  addiu       $v1, $v1, -0x1FF0
    ctx->pc = 0x206134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959120));
label_206138:
    // 0x206138: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x206138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20613c:
    // 0x20613c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20613cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_206140:
    // 0x206140: 0x400008  jr          $v0
label_206144:
    if (ctx->pc == 0x206144u) {
        ctx->pc = 0x206148u;
        goto label_206148;
    }
    ctx->pc = 0x206140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206148u: goto label_206148;
            case 0x206170u: goto label_206170;
            case 0x20619Cu: goto label_20619c;
            case 0x206244u: goto label_206244;
            case 0x2062A8u: goto label_2062a8;
            case 0x2062D0u: goto label_2062d0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206140u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x206148u;
label_206148:
    // 0x206148: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x206148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20614c:
    // 0x20614c: 0xc05b420  jal         func_16D080
label_206150:
    if (ctx->pc == 0x206150u) {
        ctx->pc = 0x206150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20614Cu;
        // 0x206150: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206154u;
        goto label_206154;
    }
    ctx->pc = 0x20614Cu;
    SET_GPR_U32(ctx, 31, 0x206154u);
    ctx->pc = 0x206150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20614Cu;
    // 0x206150: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x20614Cu, 0x206154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206154u;
label_206154:
    // 0x206154: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x206154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_206158:
    // 0x206158: 0xc081994  jal         func_206650
label_20615c:
    if (ctx->pc == 0x20615Cu) {
        ctx->pc = 0x20615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206158u;
        // 0x20615c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206160u;
        goto label_206160;
    }
    ctx->pc = 0x206158u;
    SET_GPR_U32(ctx, 31, 0x206160u);
    ctx->pc = 0x20615Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206158u;
    // 0x20615c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206650u;
    goto label_206650;
    ctx->pc = 0x206160u;
label_206160:
    // 0x206160: 0xc081d14  jal         func_207450
label_206164:
    if (ctx->pc == 0x206164u) {
        ctx->pc = 0x206164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206160u;
        // 0x206164: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206168u;
        goto label_206168;
    }
    ctx->pc = 0x206160u;
    SET_GPR_U32(ctx, 31, 0x206168u);
    ctx->pc = 0x206164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206160u;
    // 0x206164: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207450u;
    { ctx->pc = 0x207450; return; }
    ctx->pc = 0x206168u;
label_206168:
    // 0x206168: 0x10000061  b           . + 4 + (0x61 << 2)
label_20616c:
    if (ctx->pc == 0x20616Cu) {
        ctx->pc = 0x206170u;
        goto label_206170;
    }
    ctx->pc = 0x206168u;
    {
        const bool branch_taken_0x206168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206168) {
            ctx->pc = 0x2062F0u;
            goto label_2062f0;
        }
    }
    ctx->pc = 0x206170u;
label_206170:
    // 0x206170: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x206170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_206174:
    // 0x206174: 0xc081970  jal         func_2065C0
label_206178:
    if (ctx->pc == 0x206178u) {
        ctx->pc = 0x206178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206174u;
        // 0x206178: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20617Cu;
        goto label_20617c;
    }
    ctx->pc = 0x206174u;
    SET_GPR_U32(ctx, 31, 0x20617Cu);
    ctx->pc = 0x206178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206174u;
    // 0x206178: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2065C0u;
    goto label_2065c0;
    ctx->pc = 0x20617Cu;
label_20617c:
    // 0x20617c: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
label_206180:
    if (ctx->pc == 0x206180u) {
        ctx->pc = 0x206180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20617Cu;
        // 0x206180: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206184u;
        goto label_206184;
    }
    ctx->pc = 0x20617Cu;
    {
        const bool branch_taken_0x20617c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20617Cu;
        // 0x206180: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20617c) {
            ctx->pc = 0x2062F0u;
            goto label_2062f0;
        }
    }
    ctx->pc = 0x206184u;
label_206184:
    // 0x206184: 0xc05b420  jal         func_16D080
label_206188:
    if (ctx->pc == 0x206188u) {
        ctx->pc = 0x206188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206184u;
        // 0x206188: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20618Cu;
        goto label_20618c;
    }
    ctx->pc = 0x206184u;
    SET_GPR_U32(ctx, 31, 0x20618Cu);
    ctx->pc = 0x206188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206184u;
    // 0x206188: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x206184u, 0x20618Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20618Cu;
label_20618c:
    // 0x20618c: 0xc081d14  jal         func_207450
label_206190:
    if (ctx->pc == 0x206190u) {
        ctx->pc = 0x206190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20618Cu;
        // 0x206190: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206194u;
        goto label_206194;
    }
    ctx->pc = 0x20618Cu;
    SET_GPR_U32(ctx, 31, 0x206194u);
    ctx->pc = 0x206190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20618Cu;
    // 0x206190: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207450u;
    { ctx->pc = 0x207450; return; }
    ctx->pc = 0x206194u;
label_206194:
    // 0x206194: 0x10000056  b           . + 4 + (0x56 << 2)
label_206198:
    if (ctx->pc == 0x206198u) {
        ctx->pc = 0x20619Cu;
        goto label_20619c;
    }
    ctx->pc = 0x206194u;
    {
        const bool branch_taken_0x206194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206194) {
            ctx->pc = 0x2062F0u;
            goto label_2062f0;
        }
    }
    ctx->pc = 0x20619Cu;
label_20619c:
    // 0x20619c: 0x0  nop
    ctx->pc = 0x20619cu;
    // NOP
label_2061a0:
    // 0x2061a0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2061a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2061a4:
    // 0x2061a4: 0xc05b420  jal         func_16D080
label_2061a8:
    if (ctx->pc == 0x2061A8u) {
        ctx->pc = 0x2061A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2061A4u;
        // 0x2061a8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2061ACu;
        goto label_2061ac;
    }
    ctx->pc = 0x2061A4u;
    SET_GPR_U32(ctx, 31, 0x2061ACu);
    ctx->pc = 0x2061A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2061A4u;
    // 0x2061a8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x2061A4u, 0x2061ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2061ACu;
label_2061ac:
    // 0x2061ac: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_2061b0:
    if (ctx->pc == 0x2061B0u) {
        ctx->pc = 0x2061B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2061ACu;
        // 0x2061b0: 0x92630069  lbu         $v1, 0x69($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 105)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2061B4u;
        goto label_2061b4;
    }
    ctx->pc = 0x2061ACu;
    {
        const bool branch_taken_0x2061ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2061B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2061ACu;
        // 0x2061b0: 0x92630069  lbu         $v1, 0x69($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 105)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2061ac) {
            ctx->pc = 0x2061CCu;
            goto label_2061cc;
        }
    }
    ctx->pc = 0x2061B4u;
label_2061b4:
    // 0x2061b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2061b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2061b8:
    // 0x2061b8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2061bc:
    if (ctx->pc == 0x2061BCu) {
        ctx->pc = 0x2061BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2061B8u;
        // 0x2061bc: 0x24740001  addiu       $s4, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2061C0u;
        goto label_2061c0;
    }
    ctx->pc = 0x2061B8u;
    {
        const bool branch_taken_0x2061b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2061BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2061B8u;
        // 0x2061bc: 0x24740001  addiu       $s4, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2061b8) {
            ctx->pc = 0x2061C4u;
            goto label_2061c4;
        }
    }
    ctx->pc = 0x2061C0u;
label_2061c0:
    // 0x2061c0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2061c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2061c4:
    // 0x2061c4: 0x10000006  b           . + 4 + (0x6 << 2)
label_2061c8:
    if (ctx->pc == 0x2061C8u) {
        ctx->pc = 0x2061C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2061C4u;
        // 0x2061c8: 0x92680070  lbu         $t0, 0x70($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2061CCu;
        goto label_2061cc;
    }
    ctx->pc = 0x2061C4u;
    {
        const bool branch_taken_0x2061c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2061C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2061C4u;
        // 0x2061c8: 0x92680070  lbu         $t0, 0x70($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2061c4) {
            ctx->pc = 0x2061E0u;
            goto label_2061e0;
        }
    }
    ctx->pc = 0x2061CCu;
label_2061cc:
    // 0x2061cc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2061d0:
    if (ctx->pc == 0x2061D0u) {
        ctx->pc = 0x2061D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2061CCu;
        // 0x2061d0: 0x2474ffff  addiu       $s4, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2061D4u;
        goto label_2061d4;
    }
    ctx->pc = 0x2061CCu;
    {
        const bool branch_taken_0x2061cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2061D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2061CCu;
        // 0x2061d0: 0x2474ffff  addiu       $s4, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2061cc) {
            ctx->pc = 0x2061DCu;
            goto label_2061dc;
        }
    }
    ctx->pc = 0x2061D4u;
label_2061d4:
    // 0x2061d4: 0x10000001  b           . + 4 + (0x1 << 2)
label_2061d8:
    if (ctx->pc == 0x2061D8u) {
        ctx->pc = 0x2061D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2061D4u;
        // 0x2061d8: 0x24140004  addiu       $s4, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2061DCu;
        goto label_2061dc;
    }
    ctx->pc = 0x2061D4u;
    {
        const bool branch_taken_0x2061d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2061D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2061D4u;
        // 0x2061d8: 0x24140004  addiu       $s4, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2061d4) {
            ctx->pc = 0x2061DCu;
            goto label_2061dc;
        }
    }
    ctx->pc = 0x2061DCu;
label_2061dc:
    // 0x2061dc: 0x92680070  lbu         $t0, 0x70($s3)
    ctx->pc = 0x2061dcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 112)));
label_2061e0:
    // 0x2061e0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2061e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2061e4:
    // 0x2061e4: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x2061e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
label_2061e8:
    // 0x2061e8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2061e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2061ec:
    // 0x2061ec: 0x92630074  lbu         $v1, 0x74($s3)
    ctx->pc = 0x2061ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 116)));
label_2061f0:
    // 0x2061f0: 0x24c6c990  addiu       $a2, $a2, -0x3670
    ctx->pc = 0x2061f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953360));
label_2061f4:
    // 0x2061f4: 0x34214b98  ori         $at, $at, 0x4B98
    ctx->pc = 0x2061f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19352);
label_2061f8:
    // 0x2061f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2061f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2061fc:
    // 0x2061fc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2061fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_206200:
    // 0x206200: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x206200u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_206204:
    // 0x206204: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x206204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_206208:
    // 0x206208: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x206208u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_20620c:
    // 0x20620c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x20620cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_206210:
    // 0x206210: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x206210u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_206214:
    // 0x206214: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x206214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_206218:
    // 0x206218: 0xc1b021  addu        $s6, $a2, $at
    ctx->pc = 0x206218u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_20621c:
    // 0x20621c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x20621cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_206220:
    // 0x206220: 0xc05698c  jal         func_15A630
label_206224:
    if (ctx->pc == 0x206224u) {
        ctx->pc = 0x206224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206220u;
        // 0x206224: 0xa04300a3  sb          $v1, 0xA3($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 163), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206228u;
        goto label_206228;
    }
    ctx->pc = 0x206220u;
    SET_GPR_U32(ctx, 31, 0x206228u);
    ctx->pc = 0x206224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206220u;
    // 0x206224: 0xa04300a3  sb          $v1, 0xA3($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 163), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A630u, 0x206220u, 0x206228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206228u;
label_206228:
    // 0x206228: 0x2d41021  addu        $v0, $s6, $s4
    ctx->pc = 0x206228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
label_20622c:
    // 0x20622c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x20622cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_206230:
    // 0x206230: 0x904200a3  lbu         $v0, 0xA3($v0)
    ctx->pc = 0x206230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 163)));
label_206234:
    // 0x206234: 0xc081d14  jal         func_207450
label_206238:
    if (ctx->pc == 0x206238u) {
        ctx->pc = 0x206238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206234u;
        // 0x206238: 0xa2620074  sb          $v0, 0x74($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20623Cu;
        goto label_20623c;
    }
    ctx->pc = 0x206234u;
    SET_GPR_U32(ctx, 31, 0x20623Cu);
    ctx->pc = 0x206238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206234u;
    // 0x206238: 0xa2620074  sb          $v0, 0x74($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 116), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207450u;
    { ctx->pc = 0x207450; return; }
    ctx->pc = 0x20623Cu;
label_20623c:
    // 0x20623c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_206240:
    if (ctx->pc == 0x206240u) {
        ctx->pc = 0x206244u;
        goto label_206244;
    }
    ctx->pc = 0x20623Cu;
    {
        const bool branch_taken_0x20623c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20623c) {
            ctx->pc = 0x2062F0u;
            goto label_2062f0;
        }
    }
    ctx->pc = 0x206244u;
label_206244:
    // 0x206244: 0x0  nop
    ctx->pc = 0x206244u;
    // NOP
label_206248:
    // 0x206248: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x206248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20624c:
    // 0x20624c: 0xc05b420  jal         func_16D080
label_206250:
    if (ctx->pc == 0x206250u) {
        ctx->pc = 0x206250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20624Cu;
        // 0x206250: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206254u;
        goto label_206254;
    }
    ctx->pc = 0x20624Cu;
    SET_GPR_U32(ctx, 31, 0x206254u);
    ctx->pc = 0x206250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20624Cu;
    // 0x206250: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x20624Cu, 0x206254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206254u;
label_206254:
    // 0x206254: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_206258:
    if (ctx->pc == 0x206258u) {
        ctx->pc = 0x206258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206254u;
        // 0x206258: 0x92e5368b  lbu         $a1, 0x368B($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 13963)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20625Cu;
        goto label_20625c;
    }
    ctx->pc = 0x206254u;
    {
        const bool branch_taken_0x206254 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x206258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206254u;
        // 0x206258: 0x92e5368b  lbu         $a1, 0x368B($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 13963)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206254) {
            ctx->pc = 0x206274u;
            goto label_206274;
        }
    }
    ctx->pc = 0x20625Cu;
label_20625c:
    // 0x20625c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x20625cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_206260:
    // 0x206260: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x206260u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_206264:
    // 0x206264: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_206268:
    if (ctx->pc == 0x206268u) {
        ctx->pc = 0x20626Cu;
        goto label_20626c;
    }
    ctx->pc = 0x206264u;
    {
        const bool branch_taken_0x206264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206264) {
            ctx->pc = 0x20628Cu;
            goto label_20628c;
        }
    }
    ctx->pc = 0x20626Cu;
label_20626c:
    // 0x20626c: 0x10000007  b           . + 4 + (0x7 << 2)
label_206270:
    if (ctx->pc == 0x206270u) {
        ctx->pc = 0x206270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20626Cu;
        // 0x206270: 0x24a5fffc  addiu       $a1, $a1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206274u;
        goto label_206274;
    }
    ctx->pc = 0x20626Cu;
    {
        const bool branch_taken_0x20626c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20626Cu;
        // 0x206270: 0x24a5fffc  addiu       $a1, $a1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20626c) {
            ctx->pc = 0x20628Cu;
            goto label_20628c;
        }
    }
    ctx->pc = 0x206274u;
label_206274:
    // 0x206274: 0x0  nop
    ctx->pc = 0x206274u;
    // NOP
label_206278:
    // 0x206278: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x206278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_20627c:
    // 0x20627c: 0xa0082a  slt         $at, $a1, $zero
    ctx->pc = 0x20627cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_206280:
    // 0x206280: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_206284:
    if (ctx->pc == 0x206284u) {
        ctx->pc = 0x206288u;
        goto label_206288;
    }
    ctx->pc = 0x206280u;
    {
        const bool branch_taken_0x206280 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x206280) {
            ctx->pc = 0x20628Cu;
            goto label_20628c;
        }
    }
    ctx->pc = 0x206288u;
label_206288:
    // 0x206288: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x206288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_20628c:
    // 0x20628c: 0x0  nop
    ctx->pc = 0x20628cu;
    // NOP
label_206290:
    // 0x206290: 0xc056960  jal         func_15A580
label_206294:
    if (ctx->pc == 0x206294u) {
        ctx->pc = 0x206294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206290u;
        // 0x206294: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206298u;
        goto label_206298;
    }
    ctx->pc = 0x206290u;
    SET_GPR_U32(ctx, 31, 0x206298u);
    ctx->pc = 0x206294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206290u;
    // 0x206294: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A580u, 0x206290u, 0x206298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206298u;
label_206298:
    // 0x206298: 0xc081d14  jal         func_207450
label_20629c:
    if (ctx->pc == 0x20629Cu) {
        ctx->pc = 0x20629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206298u;
        // 0x20629c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2062A0u;
        goto label_2062a0;
    }
    ctx->pc = 0x206298u;
    SET_GPR_U32(ctx, 31, 0x2062A0u);
    ctx->pc = 0x20629Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206298u;
    // 0x20629c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207450u;
    { ctx->pc = 0x207450; return; }
    ctx->pc = 0x2062A0u;
label_2062a0:
    // 0x2062a0: 0x10000013  b           . + 4 + (0x13 << 2)
label_2062a4:
    if (ctx->pc == 0x2062A4u) {
        ctx->pc = 0x2062A8u;
        goto label_2062a8;
    }
    ctx->pc = 0x2062A0u;
    {
        const bool branch_taken_0x2062a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2062a0) {
            ctx->pc = 0x2062F0u;
            goto label_2062f0;
        }
    }
    ctx->pc = 0x2062A8u;
label_2062a8:
    // 0x2062a8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2062a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2062ac:
    // 0x2062ac: 0xc05b420  jal         func_16D080
label_2062b0:
    if (ctx->pc == 0x2062B0u) {
        ctx->pc = 0x2062B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2062ACu;
        // 0x2062b0: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2062B4u;
        goto label_2062b4;
    }
    ctx->pc = 0x2062ACu;
    SET_GPR_U32(ctx, 31, 0x2062B4u);
    ctx->pc = 0x2062B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2062ACu;
    // 0x2062b0: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x2062ACu, 0x2062B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2062B4u;
label_2062b4:
    // 0x2062b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2062b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2062b8:
    // 0x2062b8: 0xc0818dc  jal         func_206370
label_2062bc:
    if (ctx->pc == 0x2062BCu) {
        ctx->pc = 0x2062BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2062B8u;
        // 0x2062bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2062C0u;
        goto label_2062c0;
    }
    ctx->pc = 0x2062B8u;
    SET_GPR_U32(ctx, 31, 0x2062C0u);
    ctx->pc = 0x2062BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2062B8u;
    // 0x2062bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206370u;
    goto label_206370;
    ctx->pc = 0x2062C0u;
label_2062c0:
    // 0x2062c0: 0xc081d14  jal         func_207450
label_2062c4:
    if (ctx->pc == 0x2062C4u) {
        ctx->pc = 0x2062C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2062C0u;
        // 0x2062c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2062C8u;
        goto label_2062c8;
    }
    ctx->pc = 0x2062C0u;
    SET_GPR_U32(ctx, 31, 0x2062C8u);
    ctx->pc = 0x2062C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2062C0u;
    // 0x2062c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207450u;
    { ctx->pc = 0x207450; return; }
    ctx->pc = 0x2062C8u;
label_2062c8:
    // 0x2062c8: 0x10000009  b           . + 4 + (0x9 << 2)
label_2062cc:
    if (ctx->pc == 0x2062CCu) {
        ctx->pc = 0x2062D0u;
        goto label_2062d0;
    }
    ctx->pc = 0x2062C8u;
    {
        const bool branch_taken_0x2062c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2062c8) {
            ctx->pc = 0x2062F0u;
            goto label_2062f0;
        }
    }
    ctx->pc = 0x2062D0u;
label_2062d0:
    // 0x2062d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2062d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2062d4:
    // 0x2062d4: 0xc05b420  jal         func_16D080
label_2062d8:
    if (ctx->pc == 0x2062D8u) {
        ctx->pc = 0x2062D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2062D4u;
        // 0x2062d8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2062DCu;
        goto label_2062dc;
    }
    ctx->pc = 0x2062D4u;
    SET_GPR_U32(ctx, 31, 0x2062DCu);
    ctx->pc = 0x2062D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2062D4u;
    // 0x2062d8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x2062D4u, 0x2062DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2062DCu;
label_2062dc:
    // 0x2062dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2062dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2062e0:
    // 0x2062e0: 0xc081910  jal         func_206440
label_2062e4:
    if (ctx->pc == 0x2062E4u) {
        ctx->pc = 0x2062E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2062E0u;
        // 0x2062e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2062E8u;
        goto label_2062e8;
    }
    ctx->pc = 0x2062E0u;
    SET_GPR_U32(ctx, 31, 0x2062E8u);
    ctx->pc = 0x2062E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2062E0u;
    // 0x2062e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206440u;
    goto label_206440;
    ctx->pc = 0x2062E8u;
label_2062e8:
    // 0x2062e8: 0xc081d14  jal         func_207450
label_2062ec:
    if (ctx->pc == 0x2062ECu) {
        ctx->pc = 0x2062ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2062E8u;
        // 0x2062ec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2062F0u;
        goto label_2062f0;
    }
    ctx->pc = 0x2062E8u;
    SET_GPR_U32(ctx, 31, 0x2062F0u);
    ctx->pc = 0x2062ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2062E8u;
    // 0x2062ec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207450u;
    { ctx->pc = 0x207450; return; }
    ctx->pc = 0x2062F0u;
label_2062f0:
    // 0x2062f0: 0xc07b48c  jal         func_1ED230
label_2062f4:
    if (ctx->pc == 0x2062F4u) {
        ctx->pc = 0x2062F8u;
        goto label_2062f8;
    }
    ctx->pc = 0x2062F0u;
    SET_GPR_U32(ctx, 31, 0x2062F8u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x2062F8u;
label_2062f8:
    // 0x2062f8: 0x1000fed6  b           . + 4 + (-0x12A << 2)
label_2062fc:
    if (ctx->pc == 0x2062FCu) {
        ctx->pc = 0x2062FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2062F8u;
        // 0x2062fc: 0x8f828f44  lw          $v0, -0x70BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206300u;
        goto label_206300;
    }
    ctx->pc = 0x2062F8u;
    {
        const bool branch_taken_0x2062f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2062FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2062F8u;
        // 0x2062fc: 0x8f828f44  lw          $v0, -0x70BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2062f8) {
            ctx->pc = 0x205E54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x205e54; return; }
        }
    }
    ctx->pc = 0x206300u;
label_206300:
    // 0x206300: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x206300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_206304:
    // 0x206304: 0x1602000f  bne         $s0, $v0, . + 4 + (0xF << 2)
label_206308:
    if (ctx->pc == 0x206308u) {
        ctx->pc = 0x206308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206304u;
        // 0x206308: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20630Cu;
        goto label_20630c;
    }
    ctx->pc = 0x206304u;
    {
        const bool branch_taken_0x206304 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x206308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206304u;
        // 0x206308: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206304) {
            ctx->pc = 0x206344u;
            goto label_206344;
        }
    }
    ctx->pc = 0x20630Cu;
label_20630c:
    // 0x20630c: 0xc05680c  jal         func_15A030
label_206310:
    if (ctx->pc == 0x206310u) {
        ctx->pc = 0x206310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20630Cu;
        // 0x206310: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206314u;
        goto label_206314;
    }
    ctx->pc = 0x20630Cu;
    SET_GPR_U32(ctx, 31, 0x206314u);
    ctx->pc = 0x206310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20630Cu;
    // 0x206310: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A030u, 0x20630Cu, 0x206314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206314u;
label_206314:
    // 0x206314: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x206314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_206318:
    // 0x206318: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x206318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_20631c:
    // 0x20631c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x20631cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_206320:
    // 0x206320: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x206320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_206324:
    // 0x206324: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x206324u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_206328:
    // 0x206328: 0xac24e30c  sw          $a0, -0x1CF4($at)
    ctx->pc = 0x206328u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959884), GPR_U32(ctx, 4));
label_20632c:
    // 0x20632c: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x20632cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_206330:
    // 0x206330: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x206330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_206334:
    // 0x206334: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x206334u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_206338:
    // 0x206338: 0xc078078  jal         func_1E01E0
label_20633c:
    if (ctx->pc == 0x20633Cu) {
        ctx->pc = 0x20633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206338u;
        // 0x20633c: 0xac23e2e0  sw          $v1, -0x1D20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294959840), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206340u;
        goto label_206340;
    }
    ctx->pc = 0x206338u;
    SET_GPR_U32(ctx, 31, 0x206340u);
    ctx->pc = 0x20633Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206338u;
    // 0x20633c: 0xac23e2e0  sw          $v1, -0x1D20($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959840), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E01E0u;
    { ctx->pc = 0x1e01e0; return; }
    ctx->pc = 0x206340u;
label_206340:
    // 0x206340: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x206340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_206344:
    // 0x206344: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x206344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_206348:
    // 0x206348: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x206348u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20634c:
    // 0x20634c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x20634cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_206350:
    // 0x206350: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x206350u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_206354:
    // 0x206354: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x206354u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_206358:
    // 0x206358: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x206358u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20635c:
    // 0x20635c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20635cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_206360:
    // 0x206360: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x206360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_206364:
    // 0x206364: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x206364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_206368:
    // 0x206368: 0x3e00008  jr          $ra
label_20636c:
    if (ctx->pc == 0x20636Cu) {
        ctx->pc = 0x20636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206368u;
        // 0x20636c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206370u;
        goto label_206370;
    }
    ctx->pc = 0x206368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206368u;
        // 0x20636c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206370u;
label_206370:
    // 0x206370: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x206370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_206374:
    // 0x206374: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206374u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_206378:
    // 0x206378: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x206378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_20637c:
    // 0x20637c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20637cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_206380:
    // 0x206380: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x206380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_206384:
    // 0x206384: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x206384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_206388:
    // 0x206388: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x206388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_20638c:
    // 0x20638c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20638cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_206390:
    // 0x206390: 0x90483693  lbu         $t0, 0x3693($v0)
    ctx->pc = 0x206390u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13971)));
label_206394:
    // 0x206394: 0x24493620  addiu       $t1, $v0, 0x3620
    ctx->pc = 0x206394u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 13856));
label_206398:
    // 0x206398: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x206398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20639c:
    // 0x20639c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x20639cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2063a0:
    // 0x2063a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2063a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2063a4:
    // 0x2063a4: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_2063a8:
    if (ctx->pc == 0x2063A8u) {
        ctx->pc = 0x2063ACu;
        goto label_2063ac;
    }
    ctx->pc = 0x2063A4u;
    {
        const bool branch_taken_0x2063a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2063a4) {
            ctx->pc = 0x2063C4u;
            goto label_2063c4;
        }
    }
    ctx->pc = 0x2063ACu;
label_2063ac:
    // 0x2063ac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2063acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2063b0:
    // 0x2063b0: 0x29020005  slti        $v0, $t0, 0x5
    ctx->pc = 0x2063b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)5) ? 1 : 0);
label_2063b4:
    // 0x2063b4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2063b8:
    if (ctx->pc == 0x2063B8u) {
        ctx->pc = 0x2063BCu;
        goto label_2063bc;
    }
    ctx->pc = 0x2063B4u;
    {
        const bool branch_taken_0x2063b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2063b4) {
            ctx->pc = 0x2063DCu;
            goto label_2063dc;
        }
    }
    ctx->pc = 0x2063BCu;
label_2063bc:
    // 0x2063bc: 0x10000007  b           . + 4 + (0x7 << 2)
label_2063c0:
    if (ctx->pc == 0x2063C0u) {
        ctx->pc = 0x2063C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2063BCu;
        // 0x2063c0: 0x2508fffb  addiu       $t0, $t0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2063C4u;
        goto label_2063c4;
    }
    ctx->pc = 0x2063BCu;
    {
        const bool branch_taken_0x2063bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2063C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2063BCu;
        // 0x2063c0: 0x2508fffb  addiu       $t0, $t0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2063bc) {
            ctx->pc = 0x2063DCu;
            goto label_2063dc;
        }
    }
    ctx->pc = 0x2063C4u;
label_2063c4:
    // 0x2063c4: 0x0  nop
    ctx->pc = 0x2063c4u;
    // NOP
label_2063c8:
    // 0x2063c8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x2063c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_2063cc:
    // 0x2063cc: 0x100082a  slt         $at, $t0, $zero
    ctx->pc = 0x2063ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2063d0:
    // 0x2063d0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_2063d4:
    if (ctx->pc == 0x2063D4u) {
        ctx->pc = 0x2063D8u;
        goto label_2063d8;
    }
    ctx->pc = 0x2063D0u;
    {
        const bool branch_taken_0x2063d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2063d0) {
            ctx->pc = 0x2063DCu;
            goto label_2063dc;
        }
    }
    ctx->pc = 0x2063D8u;
label_2063d8:
    // 0x2063d8: 0x25080005  addiu       $t0, $t0, 0x5
    ctx->pc = 0x2063d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
label_2063dc:
    // 0x2063dc: 0x0  nop
    ctx->pc = 0x2063dcu;
    // NOP
label_2063e0:
    // 0x2063e0: 0x15070005  bne         $t0, $a3, . + 4 + (0x5 << 2)
label_2063e4:
    if (ctx->pc == 0x2063E4u) {
        ctx->pc = 0x2063E8u;
        goto label_2063e8;
    }
    ctx->pc = 0x2063E0u;
    {
        const bool branch_taken_0x2063e0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x2063e0) {
            ctx->pc = 0x2063F8u;
            goto label_2063f8;
        }
    }
    ctx->pc = 0x2063E8u;
label_2063e8:
    // 0x2063e8: 0x91220063  lbu         $v0, 0x63($t1)
    ctx->pc = 0x2063e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 99)));
label_2063ec:
    // 0x2063ec: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x2063ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
label_2063f0:
    // 0x2063f0: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
label_2063f4:
    if (ctx->pc == 0x2063F4u) {
        ctx->pc = 0x2063F8u;
        goto label_2063f8;
    }
    ctx->pc = 0x2063F0u;
    {
        const bool branch_taken_0x2063f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2063f0) {
            ctx->pc = 0x2063A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2063a4;
        }
    }
    ctx->pc = 0x2063F8u;
label_2063f8:
    // 0x2063f8: 0x15060005  bne         $t0, $a2, . + 4 + (0x5 << 2)
label_2063fc:
    if (ctx->pc == 0x2063FCu) {
        ctx->pc = 0x206400u;
        goto label_206400;
    }
    ctx->pc = 0x2063F8u;
    {
        const bool branch_taken_0x2063f8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        if (branch_taken_0x2063f8) {
            ctx->pc = 0x206410u;
            goto label_206410;
        }
    }
    ctx->pc = 0x206400u;
label_206400:
    // 0x206400: 0x91220064  lbu         $v0, 0x64($t1)
    ctx->pc = 0x206400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 100)));
label_206404:
    // 0x206404: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x206404u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
label_206408:
    // 0x206408: 0x1020ffe6  beqz        $at, . + 4 + (-0x1A << 2)
label_20640c:
    if (ctx->pc == 0x20640Cu) {
        ctx->pc = 0x206410u;
        goto label_206410;
    }
    ctx->pc = 0x206408u;
    {
        const bool branch_taken_0x206408 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x206408) {
            ctx->pc = 0x2063A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2063a4;
        }
    }
    ctx->pc = 0x206410u;
label_206410:
    // 0x206410: 0x15030005  bne         $t0, $v1, . + 4 + (0x5 << 2)
label_206414:
    if (ctx->pc == 0x206414u) {
        ctx->pc = 0x206418u;
        goto label_206418;
    }
    ctx->pc = 0x206410u;
    {
        const bool branch_taken_0x206410 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x206410) {
            ctx->pc = 0x206428u;
            goto label_206428;
        }
    }
    ctx->pc = 0x206418u;
label_206418:
    // 0x206418: 0x91220065  lbu         $v0, 0x65($t1)
    ctx->pc = 0x206418u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 101)));
label_20641c:
    // 0x20641c: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x20641cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
label_206420:
    // 0x206420: 0x1020ffe0  beqz        $at, . + 4 + (-0x20 << 2)
label_206424:
    if (ctx->pc == 0x206424u) {
        ctx->pc = 0x206428u;
        goto label_206428;
    }
    ctx->pc = 0x206420u;
    {
        const bool branch_taken_0x206420 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x206420) {
            ctx->pc = 0x2063A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2063a4;
        }
    }
    ctx->pc = 0x206428u;
label_206428:
    // 0x206428: 0xc056950  jal         func_15A540
label_20642c:
    if (ctx->pc == 0x20642Cu) {
        ctx->pc = 0x20642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206428u;
        // 0x20642c: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206430u;
        goto label_206430;
    }
    ctx->pc = 0x206428u;
    SET_GPR_U32(ctx, 31, 0x206430u);
    ctx->pc = 0x20642Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206428u;
    // 0x20642c: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A540u, 0x206428u, 0x206430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206430u;
label_206430:
    // 0x206430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_206434:
    // 0x206434: 0x3e00008  jr          $ra
label_206438:
    if (ctx->pc == 0x206438u) {
        ctx->pc = 0x206438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206434u;
        // 0x206438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20643Cu;
        goto label_20643c;
    }
    ctx->pc = 0x206434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206434u;
        // 0x206438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20643Cu;
label_20643c:
    // 0x20643c: 0x0  nop
    ctx->pc = 0x20643cu;
    // NOP
label_206440:
    // 0x206440: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x206440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_206444:
    // 0x206444: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206444u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_206448:
    // 0x206448: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x206448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_20644c:
    // 0x20644c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20644cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_206450:
    // 0x206450: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x206450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_206454:
    // 0x206454: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x206454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_206458:
    // 0x206458: 0x24424991  addiu       $v0, $v0, 0x4991
    ctx->pc = 0x206458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18833));
label_20645c:
    // 0x20645c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20645cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_206460:
    // 0x206460: 0x904e0000  lbu         $t6, 0x0($v0)
    ctx->pc = 0x206460u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_206464:
    // 0x206464: 0x0  nop
    ctx->pc = 0x206464u;
    // NOP
label_206468:
    // 0x206468: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x206468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_20646c:
    // 0x20646c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x20646cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_206470:
    // 0x206470: 0x8c2bccf8  lw          $t3, -0x3308($at)
    ctx->pc = 0x206470u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954232)));
label_206474:
    // 0x206474: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x206474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_206478:
    // 0x206478: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x206478u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20647c:
    // 0x20647c: 0x240c0006  addiu       $t4, $zero, 0x6
    ctx->pc = 0x20647cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_206480:
    // 0x206480: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x206480u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_206484:
    // 0x206484: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x206484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_206488:
    // 0x206488: 0x8c290064  lw          $t1, 0x64($at)
    ctx->pc = 0x206488u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 100)));
label_20648c:
    // 0x20648c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20648cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_206490:
    // 0x206490: 0x8c260214  lw          $a2, 0x214($at)
    ctx->pc = 0x206490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 532)));
label_206494:
    // 0x206494: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x206494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_206498:
    // 0x206498: 0x8c220124  lw          $v0, 0x124($at)
    ctx->pc = 0x206498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 292)));
label_20649c:
    // 0x20649c: 0x0  nop
    ctx->pc = 0x20649cu;
    // NOP
label_2064a0:
    // 0x2064a0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_2064a4:
    if (ctx->pc == 0x2064A4u) {
        ctx->pc = 0x2064A8u;
        goto label_2064a8;
    }
    ctx->pc = 0x2064A0u;
    {
        const bool branch_taken_0x2064a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2064a0) {
            ctx->pc = 0x2064C0u;
            goto label_2064c0;
        }
    }
    ctx->pc = 0x2064A8u;
label_2064a8:
    // 0x2064a8: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x2064a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_2064ac:
    // 0x2064ac: 0x29cd0009  slti        $t5, $t6, 0x9
    ctx->pc = 0x2064acu;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)9) ? 1 : 0);
label_2064b0:
    // 0x2064b0: 0x15a00008  bnez        $t5, . + 4 + (0x8 << 2)
label_2064b4:
    if (ctx->pc == 0x2064B4u) {
        ctx->pc = 0x2064B8u;
        goto label_2064b8;
    }
    ctx->pc = 0x2064B0u;
    {
        const bool branch_taken_0x2064b0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x2064b0) {
            ctx->pc = 0x2064D4u;
            goto label_2064d4;
        }
    }
    ctx->pc = 0x2064B8u;
label_2064b8:
    // 0x2064b8: 0x10000006  b           . + 4 + (0x6 << 2)
label_2064bc:
    if (ctx->pc == 0x2064BCu) {
        ctx->pc = 0x2064BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2064B8u;
        // 0x2064bc: 0x25cefff7  addiu       $t6, $t6, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967287));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2064C0u;
        goto label_2064c0;
    }
    ctx->pc = 0x2064B8u;
    {
        const bool branch_taken_0x2064b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2064BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2064B8u;
        // 0x2064bc: 0x25cefff7  addiu       $t6, $t6, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2064b8) {
            ctx->pc = 0x2064D4u;
            goto label_2064d4;
        }
    }
    ctx->pc = 0x2064C0u;
label_2064c0:
    // 0x2064c0: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x2064c0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_2064c4:
    // 0x2064c4: 0x1c0082a  slt         $at, $t6, $zero
    ctx->pc = 0x2064c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2064c8:
    // 0x2064c8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_2064cc:
    if (ctx->pc == 0x2064CCu) {
        ctx->pc = 0x2064D0u;
        goto label_2064d0;
    }
    ctx->pc = 0x2064C8u;
    {
        const bool branch_taken_0x2064c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2064c8) {
            ctx->pc = 0x2064D4u;
            goto label_2064d4;
        }
    }
    ctx->pc = 0x2064D0u;
label_2064d0:
    // 0x2064d0: 0x25ce0009  addiu       $t6, $t6, 0x9
    ctx->pc = 0x2064d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 9));
label_2064d4:
    // 0x2064d4: 0x0  nop
    ctx->pc = 0x2064d4u;
    // NOP
label_2064d8:
    // 0x2064d8: 0x15cc0005  bne         $t6, $t4, . + 4 + (0x5 << 2)
label_2064dc:
    if (ctx->pc == 0x2064DCu) {
        ctx->pc = 0x2064E0u;
        goto label_2064e0;
    }
    ctx->pc = 0x2064D8u;
    {
        const bool branch_taken_0x2064d8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 12));
        if (branch_taken_0x2064d8) {
            ctx->pc = 0x2064F0u;
            goto label_2064f0;
        }
    }
    ctx->pc = 0x2064E0u;
label_2064e0:
    // 0x2064e0: 0x1160ffef  beqz        $t3, . + 4 + (-0x11 << 2)
label_2064e4:
    if (ctx->pc == 0x2064E4u) {
        ctx->pc = 0x2064E8u;
        goto label_2064e8;
    }
    ctx->pc = 0x2064E0u;
    {
        const bool branch_taken_0x2064e0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x2064e0) {
            ctx->pc = 0x2064A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2064a0;
        }
    }
    ctx->pc = 0x2064E8u;
label_2064e8:
    // 0x2064e8: 0x10000011  b           . + 4 + (0x11 << 2)
label_2064ec:
    if (ctx->pc == 0x2064ECu) {
        ctx->pc = 0x2064F0u;
        goto label_2064f0;
    }
    ctx->pc = 0x2064E8u;
    {
        const bool branch_taken_0x2064e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2064e8) {
            ctx->pc = 0x206530u;
            goto label_206530;
        }
    }
    ctx->pc = 0x2064F0u;
label_2064f0:
    // 0x2064f0: 0x15ca0005  bne         $t6, $t2, . + 4 + (0x5 << 2)
label_2064f4:
    if (ctx->pc == 0x2064F4u) {
        ctx->pc = 0x2064F8u;
        goto label_2064f8;
    }
    ctx->pc = 0x2064F0u;
    {
        const bool branch_taken_0x2064f0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 10));
        if (branch_taken_0x2064f0) {
            ctx->pc = 0x206508u;
            goto label_206508;
        }
    }
    ctx->pc = 0x2064F8u;
label_2064f8:
    // 0x2064f8: 0x1528ffe9  bne         $t1, $t0, . + 4 + (-0x17 << 2)
label_2064fc:
    if (ctx->pc == 0x2064FCu) {
        ctx->pc = 0x206500u;
        goto label_206500;
    }
    ctx->pc = 0x2064F8u;
    {
        const bool branch_taken_0x2064f8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 8));
        if (branch_taken_0x2064f8) {
            ctx->pc = 0x2064A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2064a0;
        }
    }
    ctx->pc = 0x206500u;
label_206500:
    // 0x206500: 0x1000000b  b           . + 4 + (0xB << 2)
label_206504:
    if (ctx->pc == 0x206504u) {
        ctx->pc = 0x206508u;
        goto label_206508;
    }
    ctx->pc = 0x206500u;
    {
        const bool branch_taken_0x206500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206500) {
            ctx->pc = 0x206530u;
            goto label_206530;
        }
    }
    ctx->pc = 0x206508u;
label_206508:
    // 0x206508: 0x15c70005  bne         $t6, $a3, . + 4 + (0x5 << 2)
label_20650c:
    if (ctx->pc == 0x20650Cu) {
        ctx->pc = 0x206510u;
        goto label_206510;
    }
    ctx->pc = 0x206508u;
    {
        const bool branch_taken_0x206508 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 7));
        if (branch_taken_0x206508) {
            ctx->pc = 0x206520u;
            goto label_206520;
        }
    }
    ctx->pc = 0x206510u;
label_206510:
    // 0x206510: 0x14c8ffe3  bne         $a2, $t0, . + 4 + (-0x1D << 2)
label_206514:
    if (ctx->pc == 0x206514u) {
        ctx->pc = 0x206518u;
        goto label_206518;
    }
    ctx->pc = 0x206510u;
    {
        const bool branch_taken_0x206510 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        if (branch_taken_0x206510) {
            ctx->pc = 0x2064A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2064a0;
        }
    }
    ctx->pc = 0x206518u;
label_206518:
    // 0x206518: 0x10000005  b           . + 4 + (0x5 << 2)
label_20651c:
    if (ctx->pc == 0x20651Cu) {
        ctx->pc = 0x206520u;
        goto label_206520;
    }
    ctx->pc = 0x206518u;
    {
        const bool branch_taken_0x206518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206518) {
            ctx->pc = 0x206530u;
            goto label_206530;
        }
    }
    ctx->pc = 0x206520u;
label_206520:
    // 0x206520: 0x15c30003  bne         $t6, $v1, . + 4 + (0x3 << 2)
label_206524:
    if (ctx->pc == 0x206524u) {
        ctx->pc = 0x206528u;
        goto label_206528;
    }
    ctx->pc = 0x206520u;
    {
        const bool branch_taken_0x206520 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 3));
        if (branch_taken_0x206520) {
            ctx->pc = 0x206530u;
            goto label_206530;
        }
    }
    ctx->pc = 0x206528u;
label_206528:
    // 0x206528: 0x1448ffdd  bne         $v0, $t0, . + 4 + (-0x23 << 2)
label_20652c:
    if (ctx->pc == 0x20652Cu) {
        ctx->pc = 0x206530u;
        goto label_206530;
    }
    ctx->pc = 0x206528u;
    {
        const bool branch_taken_0x206528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x206528) {
            ctx->pc = 0x2064A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2064a0;
        }
    }
    ctx->pc = 0x206530u;
label_206530:
    // 0x206530: 0xc056958  jal         func_15A560
label_206534:
    if (ctx->pc == 0x206534u) {
        ctx->pc = 0x206534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206530u;
        // 0x206534: 0x1c0282d  daddu       $a1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206538u;
        goto label_206538;
    }
    ctx->pc = 0x206530u;
    SET_GPR_U32(ctx, 31, 0x206538u);
    ctx->pc = 0x206534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206530u;
    // 0x206534: 0x1c0282d  daddu       $a1, $t6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A560u, 0x206530u, 0x206538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206538u;
label_206538:
    // 0x206538: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20653c:
    // 0x20653c: 0x3e00008  jr          $ra
label_206540:
    if (ctx->pc == 0x206540u) {
        ctx->pc = 0x206540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20653Cu;
        // 0x206540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206544u;
        goto label_206544;
    }
    ctx->pc = 0x20653Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20653Cu;
        // 0x206540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20653Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206544u;
label_206544:
    // 0x206544: 0x0  nop
    ctx->pc = 0x206544u;
    // NOP
label_206548:
    // 0x206548: 0x0  nop
    ctx->pc = 0x206548u;
    // NOP
label_20654c:
    // 0x20654c: 0x0  nop
    ctx->pc = 0x20654cu;
    // NOP
label_206550:
    // 0x206550: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x206550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_206554:
    // 0x206554: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206554u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_206558:
    // 0x206558: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x206558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_20655c:
    // 0x20655c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20655cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_206560:
    // 0x206560: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x206560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_206564:
    // 0x206564: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x206564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_206568:
    // 0x206568: 0x2442498b  addiu       $v0, $v0, 0x498B
    ctx->pc = 0x206568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18827));
label_20656c:
    // 0x20656c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20656cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_206570:
    // 0x206570: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_206574:
    if (ctx->pc == 0x206574u) {
        ctx->pc = 0x206574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206570u;
        // 0x206574: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206578u;
        goto label_206578;
    }
    ctx->pc = 0x206570u;
    {
        const bool branch_taken_0x206570 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x206574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206570u;
        // 0x206574: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206570) {
            ctx->pc = 0x206590u;
            goto label_206590;
        }
    }
    ctx->pc = 0x206578u;
label_206578:
    // 0x206578: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x206578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20657c:
    // 0x20657c: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x20657cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_206580:
    // 0x206580: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_206584:
    if (ctx->pc == 0x206584u) {
        ctx->pc = 0x206588u;
        goto label_206588;
    }
    ctx->pc = 0x206580u;
    {
        const bool branch_taken_0x206580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206580) {
            ctx->pc = 0x2065A4u;
            goto label_2065a4;
        }
    }
    ctx->pc = 0x206588u;
label_206588:
    // 0x206588: 0x10000006  b           . + 4 + (0x6 << 2)
label_20658c:
    if (ctx->pc == 0x20658Cu) {
        ctx->pc = 0x20658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206588u;
        // 0x20658c: 0x24a5fffc  addiu       $a1, $a1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206590u;
        goto label_206590;
    }
    ctx->pc = 0x206588u;
    {
        const bool branch_taken_0x206588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206588u;
        // 0x20658c: 0x24a5fffc  addiu       $a1, $a1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206588) {
            ctx->pc = 0x2065A4u;
            goto label_2065a4;
        }
    }
    ctx->pc = 0x206590u;
label_206590:
    // 0x206590: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x206590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_206594:
    // 0x206594: 0xa0082a  slt         $at, $a1, $zero
    ctx->pc = 0x206594u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_206598:
    // 0x206598: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_20659c:
    if (ctx->pc == 0x20659Cu) {
        ctx->pc = 0x2065A0u;
        goto label_2065a0;
    }
    ctx->pc = 0x206598u;
    {
        const bool branch_taken_0x206598 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x206598) {
            ctx->pc = 0x2065A4u;
            goto label_2065a4;
        }
    }
    ctx->pc = 0x2065A0u;
label_2065a0:
    // 0x2065a0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2065a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2065a4:
    // 0x2065a4: 0xc056960  jal         func_15A580
label_2065a8:
    if (ctx->pc == 0x2065A8u) {
        ctx->pc = 0x2065ACu;
        goto label_2065ac;
    }
    ctx->pc = 0x2065A4u;
    SET_GPR_U32(ctx, 31, 0x2065ACu);
    ctx->pc = 0x15A580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A580u, 0x2065A4u, 0x2065ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2065ACu;
label_2065ac:
    // 0x2065ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2065acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2065b0:
    // 0x2065b0: 0x3e00008  jr          $ra
label_2065b4:
    if (ctx->pc == 0x2065B4u) {
        ctx->pc = 0x2065B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2065B0u;
        // 0x2065b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2065B8u;
        goto label_2065b8;
    }
    ctx->pc = 0x2065B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2065B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2065B0u;
        // 0x2065b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2065B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2065B8u;
label_2065b8:
    // 0x2065b8: 0x0  nop
    ctx->pc = 0x2065b8u;
    // NOP
label_2065bc:
    // 0x2065bc: 0x0  nop
    ctx->pc = 0x2065bcu;
    // NOP
label_2065c0:
    // 0x2065c0: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x2065c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2065c4:
    // 0x2065c4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2065c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_2065c8:
    // 0x2065c8: 0xc43821  addu        $a3, $a2, $a0
    ctx->pc = 0x2065c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_2065cc:
    // 0x2065cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2065ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2065d0:
    // 0x2065d0: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x2065d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_2065d4:
    // 0x2065d4: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x2065d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_2065d8:
    // 0x2065d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2065d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2065dc:
    // 0x2065dc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2065dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2065e0:
    // 0x2065e0: 0x90673686  lbu         $a3, 0x3686($v1)
    ctx->pc = 0x2065e0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13958)));
label_2065e4:
    // 0x2065e4: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x2065e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_2065e8:
    // 0x2065e8: 0x24c65370  addiu       $a2, $a2, 0x5370
    ctx->pc = 0x2065e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21360));
label_2065ec:
    // 0x2065ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2065ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2065f0:
    // 0x2065f0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2065f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2065f4:
    // 0x2065f4: 0x9063368a  lbu         $v1, 0x368A($v1)
    ctx->pc = 0x2065f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13962)));
label_2065f8:
    // 0x2065f8: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x2065f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2065fc:
    // 0x2065fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2065fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_206600:
    // 0x206600: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_206604:
    if (ctx->pc == 0x206604u) {
        ctx->pc = 0x206604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206600u;
        // 0x206604: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206608u;
        goto label_206608;
    }
    ctx->pc = 0x206600u;
    {
        const bool branch_taken_0x206600 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x206604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206600u;
        // 0x206604: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206600) {
            ctx->pc = 0x206624u;
            goto label_206624;
        }
    }
    ctx->pc = 0x206608u;
label_206608:
    // 0x206608: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x206608u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_20660c:
    // 0x20660c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_206610:
    if (ctx->pc == 0x206610u) {
        ctx->pc = 0x206610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20660Cu;
        // 0x206610: 0x24650001  addiu       $a1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206614u;
        goto label_206614;
    }
    ctx->pc = 0x20660Cu;
    {
        const bool branch_taken_0x20660c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x206610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20660Cu;
        // 0x206610: 0x24650001  addiu       $a1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20660c) {
            ctx->pc = 0x206638u;
            goto label_206638;
        }
    }
    ctx->pc = 0x206614u;
label_206614:
    // 0x206614: 0xc056968  jal         func_15A5A0
label_206618:
    if (ctx->pc == 0x206618u) {
        ctx->pc = 0x20661Cu;
        goto label_20661c;
    }
    ctx->pc = 0x206614u;
    SET_GPR_U32(ctx, 31, 0x20661Cu);
    ctx->pc = 0x15A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A5A0u, 0x206614u, 0x20661Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20661Cu;
label_20661c:
    // 0x20661c: 0x10000006  b           . + 4 + (0x6 << 2)
label_206620:
    if (ctx->pc == 0x206620u) {
        ctx->pc = 0x206620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20661Cu;
        // 0x206620: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206624u;
        goto label_206624;
    }
    ctx->pc = 0x20661Cu;
    {
        const bool branch_taken_0x20661c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20661Cu;
        // 0x206620: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20661c) {
            ctx->pc = 0x206638u;
            goto label_206638;
        }
    }
    ctx->pc = 0x206624u;
label_206624:
    // 0x206624: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
label_206628:
    if (ctx->pc == 0x206628u) {
        ctx->pc = 0x206628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206624u;
        // 0x206628: 0x2465ffff  addiu       $a1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20662Cu;
        goto label_20662c;
    }
    ctx->pc = 0x206624u;
    {
        const bool branch_taken_0x206624 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x206628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206624u;
        // 0x206628: 0x2465ffff  addiu       $a1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206624) {
            ctx->pc = 0x206638u;
            goto label_206638;
        }
    }
    ctx->pc = 0x20662Cu;
label_20662c:
    // 0x20662c: 0xc056968  jal         func_15A5A0
label_206630:
    if (ctx->pc == 0x206630u) {
        ctx->pc = 0x206634u;
        goto label_206634;
    }
    ctx->pc = 0x20662Cu;
    SET_GPR_U32(ctx, 31, 0x206634u);
    ctx->pc = 0x15A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A5A0u, 0x20662Cu, 0x206634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206634u;
label_206634:
    // 0x206634: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206638:
    // 0x206638: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20663c:
    // 0x20663c: 0x3e00008  jr          $ra
label_206640:
    if (ctx->pc == 0x206640u) {
        ctx->pc = 0x206640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20663Cu;
        // 0x206640: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206644u;
        goto label_206644;
    }
    ctx->pc = 0x20663Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20663Cu;
        // 0x206640: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20663Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206644u;
label_206644:
    // 0x206644: 0x0  nop
    ctx->pc = 0x206644u;
    // NOP
label_206648:
    // 0x206648: 0x0  nop
    ctx->pc = 0x206648u;
    // NOP
label_20664c:
    // 0x20664c: 0x0  nop
    ctx->pc = 0x20664cu;
    // NOP
label_206650:
    // 0x206650: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x206650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_206654:
    // 0x206654: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x206654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_206658:
    // 0x206658: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x206658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_20665c:
    // 0x20665c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x20665cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_206660:
    // 0x206660: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x206660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_206664:
    // 0x206664: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x206664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_206668:
    // 0x206668: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x206668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20666c:
    // 0x20666c: 0x24424990  addiu       $v0, $v0, 0x4990
    ctx->pc = 0x20666cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18832));
label_206670:
    // 0x206670: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x206670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_206674:
    // 0x206674: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x206674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_206678:
    // 0x206678: 0x38100  sll         $s0, $v1, 4
    ctx->pc = 0x206678u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20667c:
    // 0x20667c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20667cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_206680:
    // 0x206680: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x206680u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_206684:
    // 0x206684: 0x10a0001d  beqz        $a1, . + 4 + (0x1D << 2)
label_206688:
    if (ctx->pc == 0x206688u) {
        ctx->pc = 0x206688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206684u;
        // 0x206688: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20668Cu;
        goto label_20668c;
    }
    ctx->pc = 0x206684u;
    {
        const bool branch_taken_0x206684 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x206688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206684u;
        // 0x206688: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206684) {
            ctx->pc = 0x2066FCu;
            goto label_2066fc;
        }
    }
    ctx->pc = 0x20668Cu;
label_20668c:
    // 0x20668c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20668cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_206690:
    // 0x206690: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_206694:
    if (ctx->pc == 0x206694u) {
        ctx->pc = 0x206694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206690u;
        // 0x206694: 0x24710001  addiu       $s1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206698u;
        goto label_206698;
    }
    ctx->pc = 0x206690u;
    {
        const bool branch_taken_0x206690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x206694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206690u;
        // 0x206694: 0x24710001  addiu       $s1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206690) {
            ctx->pc = 0x20669Cu;
            goto label_20669c;
        }
    }
    ctx->pc = 0x206698u;
label_206698:
    // 0x206698: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x206698u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20669c:
    // 0x20669c: 0x3a440001  xori        $a0, $s2, 0x1
    ctx->pc = 0x20669cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
label_2066a0:
    // 0x2066a0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2066a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_2066a4:
    // 0x2066a4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2066a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2066a8:
    // 0x2066a8: 0x2442497c  addiu       $v0, $v0, 0x497C
    ctx->pc = 0x2066a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18812));
label_2066ac:
    // 0x2066ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2066acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2066b0:
    // 0x2066b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2066b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2066b4:
    // 0x2066b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2066b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2066b8:
    // 0x2066b8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2066b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2066bc:
    // 0x2066bc: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_2066c0:
    if (ctx->pc == 0x2066C0u) {
        ctx->pc = 0x2066C4u;
        goto label_2066c4;
    }
    ctx->pc = 0x2066BCu;
    {
        const bool branch_taken_0x2066bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2066bc) {
            ctx->pc = 0x20675Cu;
            { ctx->pc = 0x20675c; return; }
        }
    }
    ctx->pc = 0x2066C4u;
label_2066c4:
    // 0x2066c4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2066c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_2066c8:
    // 0x2066c8: 0x24424990  addiu       $v0, $v0, 0x4990
    ctx->pc = 0x2066c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18832));
label_2066cc:
    // 0x2066cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2066ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2066d0:
    // 0x2066d0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2066d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2066d4:
    // 0x2066d4: 0x16220021  bne         $s1, $v0, . + 4 + (0x21 << 2)
label_2066d8:
    if (ctx->pc == 0x2066D8u) {
        ctx->pc = 0x2066DCu;
        goto label_2066dc;
    }
    ctx->pc = 0x2066D4u;
    {
        const bool branch_taken_0x2066d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2066d4) {
            ctx->pc = 0x20675Cu;
            { ctx->pc = 0x20675c; return; }
        }
    }
    ctx->pc = 0x2066DCu;
label_2066dc:
    // 0x2066dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2066dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2066e0:
    // 0x2066e0: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
label_2066e4:
    if (ctx->pc == 0x2066E4u) {
        ctx->pc = 0x2066E8u;
        goto label_2066e8;
    }
    ctx->pc = 0x2066E0u;
    {
        const bool branch_taken_0x2066e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2066e0) {
            ctx->pc = 0x2066F0u;
            goto label_2066f0;
        }
    }
    ctx->pc = 0x2066E8u;
label_2066e8:
    // 0x2066e8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2066ec:
    if (ctx->pc == 0x2066ECu) {
        ctx->pc = 0x2066ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2066E8u;
        // 0x2066ec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2066F0u;
        goto label_2066f0;
    }
    ctx->pc = 0x2066E8u;
    {
        const bool branch_taken_0x2066e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2066ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2066E8u;
        // 0x2066ec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2066e8) {
            ctx->pc = 0x2066F4u;
            goto label_2066f4;
        }
    }
    ctx->pc = 0x2066F0u;
label_2066f0:
    // 0x2066f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2066f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2066f4:
    // 0x2066f4: 0x10000019  b           . + 4 + (0x19 << 2)
label_2066f8:
    if (ctx->pc == 0x2066F8u) {
        ctx->pc = 0x2066FCu;
        goto label_2066fc;
    }
    ctx->pc = 0x2066F4u;
    {
        const bool branch_taken_0x2066f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2066f4) {
            ctx->pc = 0x20675Cu;
            { ctx->pc = 0x20675c; return; }
        }
    }
    ctx->pc = 0x2066FCu;
label_2066fc:
    // 0x2066fc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_206700:
    if (ctx->pc == 0x206700u) {
        ctx->pc = 0x206700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2066FCu;
        // 0x206700: 0x2471ffff  addiu       $s1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206704u;
        goto label_206704;
    }
    ctx->pc = 0x2066FCu;
    {
        const bool branch_taken_0x2066fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x206700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2066FCu;
        // 0x206700: 0x2471ffff  addiu       $s1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2066fc) {
            ctx->pc = 0x206708u;
            goto label_206708;
        }
    }
    ctx->pc = 0x206704u;
label_206704:
    // 0x206704: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x206704u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_206708:
    // 0x206708: 0x3a440001  xori        $a0, $s2, 0x1
    ctx->pc = 0x206708u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
label_20670c:
    // 0x20670c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x20670cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_206710:
    // 0x206710: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x206710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_206714:
    // 0x206714: 0x2442497c  addiu       $v0, $v0, 0x497C
    ctx->pc = 0x206714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18812));
label_206718:
    // 0x206718: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x206718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20671c:
    // 0x20671c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20671cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_206720:
    // 0x206720: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x206720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_206724:
    // 0x206724: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x206724u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_206728:
    // 0x206728: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_20672c:
    if (ctx->pc == 0x20672Cu) {
        ctx->pc = 0x206730u;
        goto label_206730;
    }
    ctx->pc = 0x206728u;
    {
        const bool branch_taken_0x206728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206728) {
            ctx->pc = 0x20675Cu;
            { ctx->pc = 0x20675c; return; }
        }
    }
    ctx->pc = 0x206730u;
label_206730:
    // 0x206730: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x206730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_206734:
    // 0x206734: 0x24424990  addiu       $v0, $v0, 0x4990
    ctx->pc = 0x206734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18832));
label_206738:
    // 0x206738: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x206738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20673c:
    // 0x20673c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x20673cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_206740:
    // 0x206740: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
label_206744:
    if (ctx->pc == 0x206744u) {
        ctx->pc = 0x206748u;
        goto label_206748;
    }
    ctx->pc = 0x206740u;
    {
        const bool branch_taken_0x206740 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x206740) {
            ctx->pc = 0x20675Cu;
            { ctx->pc = 0x20675c; return; }
        }
    }
    ctx->pc = 0x206748u;
label_206748:
    // 0x206748: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_20674c:
    if (ctx->pc == 0x20674Cu) {
        ctx->pc = 0x206750u;
        goto label_206750;
    }
    ctx->pc = 0x206748u;
    {
        const bool branch_taken_0x206748 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x206748) {
            ctx->pc = 0x206758u;
            { ctx->pc = 0x206758; return; }
        }
    }
    ctx->pc = 0x206750u;
label_206750:
    // 0x206750: 0x10000002  b           . + 4 + (0x2 << 2)
label_206754:
    if (ctx->pc == 0x206754u) {
        ctx->pc = 0x206754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206750u;
        // 0x206754: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206758u;
        { ctx->pc = 0x206758; return; }
    }
    ctx->pc = 0x206750u;
    {
        const bool branch_taken_0x206750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206750u;
        // 0x206754: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206750) {
            ctx->pc = 0x20675Cu;
            { ctx->pc = 0x20675c; return; }
        }
    }
    ctx->pc = 0x206758u;
    ctx->pc = 0x206758u;
    return;
}
