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


void FUN_0014eba0_part149(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x196fe0u: goto label_196fe0;
        case 0x196fe4u: goto label_196fe4;
        case 0x196fe8u: goto label_196fe8;
        case 0x196fecu: goto label_196fec;
        case 0x196ff0u: goto label_196ff0;
        case 0x196ff4u: goto label_196ff4;
        case 0x196ff8u: goto label_196ff8;
        case 0x196ffcu: goto label_196ffc;
        case 0x197000u: goto label_197000;
        case 0x197004u: goto label_197004;
        case 0x197008u: goto label_197008;
        case 0x19700cu: goto label_19700c;
        case 0x197010u: goto label_197010;
        case 0x197014u: goto label_197014;
        case 0x197018u: goto label_197018;
        case 0x19701cu: goto label_19701c;
        case 0x197020u: goto label_197020;
        case 0x197024u: goto label_197024;
        case 0x197028u: goto label_197028;
        case 0x19702cu: goto label_19702c;
        case 0x197030u: goto label_197030;
        case 0x197034u: goto label_197034;
        case 0x197038u: goto label_197038;
        case 0x19703cu: goto label_19703c;
        case 0x197040u: goto label_197040;
        case 0x197044u: goto label_197044;
        case 0x197048u: goto label_197048;
        case 0x19704cu: goto label_19704c;
        case 0x197050u: goto label_197050;
        case 0x197054u: goto label_197054;
        case 0x197058u: goto label_197058;
        case 0x19705cu: goto label_19705c;
        case 0x197060u: goto label_197060;
        case 0x197064u: goto label_197064;
        case 0x197068u: goto label_197068;
        case 0x19706cu: goto label_19706c;
        case 0x197070u: goto label_197070;
        case 0x197074u: goto label_197074;
        case 0x197078u: goto label_197078;
        case 0x19707cu: goto label_19707c;
        case 0x197080u: goto label_197080;
        case 0x197084u: goto label_197084;
        case 0x197088u: goto label_197088;
        case 0x19708cu: goto label_19708c;
        case 0x197090u: goto label_197090;
        case 0x197094u: goto label_197094;
        case 0x197098u: goto label_197098;
        case 0x19709cu: goto label_19709c;
        case 0x1970a0u: goto label_1970a0;
        case 0x1970a4u: goto label_1970a4;
        case 0x1970a8u: goto label_1970a8;
        case 0x1970acu: goto label_1970ac;
        case 0x1970b0u: goto label_1970b0;
        case 0x1970b4u: goto label_1970b4;
        case 0x1970b8u: goto label_1970b8;
        case 0x1970bcu: goto label_1970bc;
        case 0x1970c0u: goto label_1970c0;
        case 0x1970c4u: goto label_1970c4;
        case 0x1970c8u: goto label_1970c8;
        case 0x1970ccu: goto label_1970cc;
        case 0x1970d0u: goto label_1970d0;
        case 0x1970d4u: goto label_1970d4;
        case 0x1970d8u: goto label_1970d8;
        case 0x1970dcu: goto label_1970dc;
        case 0x1970e0u: goto label_1970e0;
        case 0x1970e4u: goto label_1970e4;
        case 0x1970e8u: goto label_1970e8;
        case 0x1970ecu: goto label_1970ec;
        case 0x1970f0u: goto label_1970f0;
        case 0x1970f4u: goto label_1970f4;
        case 0x1970f8u: goto label_1970f8;
        case 0x1970fcu: goto label_1970fc;
        case 0x197100u: goto label_197100;
        case 0x197104u: goto label_197104;
        case 0x197108u: goto label_197108;
        case 0x19710cu: goto label_19710c;
        case 0x197110u: goto label_197110;
        case 0x197114u: goto label_197114;
        case 0x197118u: goto label_197118;
        case 0x19711cu: goto label_19711c;
        case 0x197120u: goto label_197120;
        case 0x197124u: goto label_197124;
        case 0x197128u: goto label_197128;
        case 0x19712cu: goto label_19712c;
        case 0x197130u: goto label_197130;
        case 0x197134u: goto label_197134;
        case 0x197138u: goto label_197138;
        case 0x19713cu: goto label_19713c;
        case 0x197140u: goto label_197140;
        case 0x197144u: goto label_197144;
        case 0x197148u: goto label_197148;
        case 0x19714cu: goto label_19714c;
        case 0x197150u: goto label_197150;
        case 0x197154u: goto label_197154;
        case 0x197158u: goto label_197158;
        case 0x19715cu: goto label_19715c;
        case 0x197160u: goto label_197160;
        case 0x197164u: goto label_197164;
        case 0x197168u: goto label_197168;
        case 0x19716cu: goto label_19716c;
        case 0x197170u: goto label_197170;
        case 0x197174u: goto label_197174;
        case 0x197178u: goto label_197178;
        case 0x19717cu: goto label_19717c;
        case 0x197180u: goto label_197180;
        case 0x197184u: goto label_197184;
        case 0x197188u: goto label_197188;
        case 0x19718cu: goto label_19718c;
        case 0x197190u: goto label_197190;
        case 0x197194u: goto label_197194;
        case 0x197198u: goto label_197198;
        case 0x19719cu: goto label_19719c;
        case 0x1971a0u: goto label_1971a0;
        case 0x1971a4u: goto label_1971a4;
        case 0x1971a8u: goto label_1971a8;
        case 0x1971acu: goto label_1971ac;
        case 0x1971b0u: goto label_1971b0;
        case 0x1971b4u: goto label_1971b4;
        case 0x1971b8u: goto label_1971b8;
        case 0x1971bcu: goto label_1971bc;
        case 0x1971c0u: goto label_1971c0;
        case 0x1971c4u: goto label_1971c4;
        case 0x1971c8u: goto label_1971c8;
        case 0x1971ccu: goto label_1971cc;
        case 0x1971d0u: goto label_1971d0;
        case 0x1971d4u: goto label_1971d4;
        case 0x1971d8u: goto label_1971d8;
        case 0x1971dcu: goto label_1971dc;
        case 0x1971e0u: goto label_1971e0;
        case 0x1971e4u: goto label_1971e4;
        case 0x1971e8u: goto label_1971e8;
        case 0x1971ecu: goto label_1971ec;
        case 0x1971f0u: goto label_1971f0;
        case 0x1971f4u: goto label_1971f4;
        case 0x1971f8u: goto label_1971f8;
        case 0x1971fcu: goto label_1971fc;
        case 0x197200u: goto label_197200;
        case 0x197204u: goto label_197204;
        case 0x197208u: goto label_197208;
        case 0x19720cu: goto label_19720c;
        case 0x197210u: goto label_197210;
        case 0x197214u: goto label_197214;
        case 0x197218u: goto label_197218;
        case 0x19721cu: goto label_19721c;
        case 0x197220u: goto label_197220;
        case 0x197224u: goto label_197224;
        case 0x197228u: goto label_197228;
        case 0x19722cu: goto label_19722c;
        case 0x197230u: goto label_197230;
        case 0x197234u: goto label_197234;
        case 0x197238u: goto label_197238;
        case 0x19723cu: goto label_19723c;
        case 0x197240u: goto label_197240;
        case 0x197244u: goto label_197244;
        case 0x197248u: goto label_197248;
        case 0x19724cu: goto label_19724c;
        case 0x197250u: goto label_197250;
        case 0x197254u: goto label_197254;
        case 0x197258u: goto label_197258;
        case 0x19725cu: goto label_19725c;
        case 0x197260u: goto label_197260;
        case 0x197264u: goto label_197264;
        case 0x197268u: goto label_197268;
        case 0x19726cu: goto label_19726c;
        case 0x197270u: goto label_197270;
        case 0x197274u: goto label_197274;
        case 0x197278u: goto label_197278;
        case 0x19727cu: goto label_19727c;
        case 0x197280u: goto label_197280;
        case 0x197284u: goto label_197284;
        case 0x197288u: goto label_197288;
        case 0x19728cu: goto label_19728c;
        case 0x197290u: goto label_197290;
        case 0x197294u: goto label_197294;
        case 0x197298u: goto label_197298;
        case 0x19729cu: goto label_19729c;
        case 0x1972a0u: goto label_1972a0;
        case 0x1972a4u: goto label_1972a4;
        case 0x1972a8u: goto label_1972a8;
        case 0x1972acu: goto label_1972ac;
        case 0x1972b0u: goto label_1972b0;
        case 0x1972b4u: goto label_1972b4;
        case 0x1972b8u: goto label_1972b8;
        case 0x1972bcu: goto label_1972bc;
        case 0x1972c0u: goto label_1972c0;
        case 0x1972c4u: goto label_1972c4;
        case 0x1972c8u: goto label_1972c8;
        case 0x1972ccu: goto label_1972cc;
        case 0x1972d0u: goto label_1972d0;
        case 0x1972d4u: goto label_1972d4;
        case 0x1972d8u: goto label_1972d8;
        case 0x1972dcu: goto label_1972dc;
        case 0x1972e0u: goto label_1972e0;
        case 0x1972e4u: goto label_1972e4;
        case 0x1972e8u: goto label_1972e8;
        case 0x1972ecu: goto label_1972ec;
        case 0x1972f0u: goto label_1972f0;
        case 0x1972f4u: goto label_1972f4;
        case 0x1972f8u: goto label_1972f8;
        case 0x1972fcu: goto label_1972fc;
        case 0x197300u: goto label_197300;
        case 0x197304u: goto label_197304;
        case 0x197308u: goto label_197308;
        case 0x19730cu: goto label_19730c;
        case 0x197310u: goto label_197310;
        case 0x197314u: goto label_197314;
        case 0x197318u: goto label_197318;
        case 0x19731cu: goto label_19731c;
        case 0x197320u: goto label_197320;
        case 0x197324u: goto label_197324;
        case 0x197328u: goto label_197328;
        case 0x19732cu: goto label_19732c;
        case 0x197330u: goto label_197330;
        case 0x197334u: goto label_197334;
        case 0x197338u: goto label_197338;
        case 0x19733cu: goto label_19733c;
        case 0x197340u: goto label_197340;
        case 0x197344u: goto label_197344;
        case 0x197348u: goto label_197348;
        case 0x19734cu: goto label_19734c;
        case 0x197350u: goto label_197350;
        case 0x197354u: goto label_197354;
        case 0x197358u: goto label_197358;
        case 0x19735cu: goto label_19735c;
        case 0x197360u: goto label_197360;
        case 0x197364u: goto label_197364;
        case 0x197368u: goto label_197368;
        case 0x19736cu: goto label_19736c;
        case 0x197370u: goto label_197370;
        case 0x197374u: goto label_197374;
        case 0x197378u: goto label_197378;
        case 0x19737cu: goto label_19737c;
        case 0x197380u: goto label_197380;
        case 0x197384u: goto label_197384;
        case 0x197388u: goto label_197388;
        case 0x19738cu: goto label_19738c;
        case 0x197390u: goto label_197390;
        case 0x197394u: goto label_197394;
        case 0x197398u: goto label_197398;
        case 0x19739cu: goto label_19739c;
        case 0x1973a0u: goto label_1973a0;
        case 0x1973a4u: goto label_1973a4;
        case 0x1973a8u: goto label_1973a8;
        case 0x1973acu: goto label_1973ac;
        case 0x1973b0u: goto label_1973b0;
        case 0x1973b4u: goto label_1973b4;
        case 0x1973b8u: goto label_1973b8;
        case 0x1973bcu: goto label_1973bc;
        case 0x1973c0u: goto label_1973c0;
        case 0x1973c4u: goto label_1973c4;
        case 0x1973c8u: goto label_1973c8;
        case 0x1973ccu: goto label_1973cc;
        case 0x1973d0u: goto label_1973d0;
        case 0x1973d4u: goto label_1973d4;
        case 0x1973d8u: goto label_1973d8;
        case 0x1973dcu: goto label_1973dc;
        case 0x1973e0u: goto label_1973e0;
        case 0x1973e4u: goto label_1973e4;
        case 0x1973e8u: goto label_1973e8;
        case 0x1973ecu: goto label_1973ec;
        case 0x1973f0u: goto label_1973f0;
        case 0x1973f4u: goto label_1973f4;
        case 0x1973f8u: goto label_1973f8;
        case 0x1973fcu: goto label_1973fc;
        case 0x197400u: goto label_197400;
        case 0x197404u: goto label_197404;
        case 0x197408u: goto label_197408;
        case 0x19740cu: goto label_19740c;
        case 0x197410u: goto label_197410;
        case 0x197414u: goto label_197414;
        case 0x197418u: goto label_197418;
        case 0x19741cu: goto label_19741c;
        case 0x197420u: goto label_197420;
        case 0x197424u: goto label_197424;
        case 0x197428u: goto label_197428;
        case 0x19742cu: goto label_19742c;
        case 0x197430u: goto label_197430;
        case 0x197434u: goto label_197434;
        case 0x197438u: goto label_197438;
        case 0x19743cu: goto label_19743c;
        case 0x197440u: goto label_197440;
        case 0x197444u: goto label_197444;
        case 0x197448u: goto label_197448;
        case 0x19744cu: goto label_19744c;
        case 0x197450u: goto label_197450;
        case 0x197454u: goto label_197454;
        case 0x197458u: goto label_197458;
        case 0x19745cu: goto label_19745c;
        case 0x197460u: goto label_197460;
        case 0x197464u: goto label_197464;
        case 0x197468u: goto label_197468;
        case 0x19746cu: goto label_19746c;
        case 0x197470u: goto label_197470;
        case 0x197474u: goto label_197474;
        case 0x197478u: goto label_197478;
        case 0x19747cu: goto label_19747c;
        case 0x197480u: goto label_197480;
        case 0x197484u: goto label_197484;
        case 0x197488u: goto label_197488;
        case 0x19748cu: goto label_19748c;
        case 0x197490u: goto label_197490;
        case 0x197494u: goto label_197494;
        case 0x197498u: goto label_197498;
        case 0x19749cu: goto label_19749c;
        case 0x1974a0u: goto label_1974a0;
        case 0x1974a4u: goto label_1974a4;
        case 0x1974a8u: goto label_1974a8;
        case 0x1974acu: goto label_1974ac;
        case 0x1974b0u: goto label_1974b0;
        case 0x1974b4u: goto label_1974b4;
        case 0x1974b8u: goto label_1974b8;
        case 0x1974bcu: goto label_1974bc;
        case 0x1974c0u: goto label_1974c0;
        case 0x1974c4u: goto label_1974c4;
        case 0x1974c8u: goto label_1974c8;
        case 0x1974ccu: goto label_1974cc;
        case 0x1974d0u: goto label_1974d0;
        case 0x1974d4u: goto label_1974d4;
        case 0x1974d8u: goto label_1974d8;
        case 0x1974dcu: goto label_1974dc;
        case 0x1974e0u: goto label_1974e0;
        case 0x1974e4u: goto label_1974e4;
        case 0x1974e8u: goto label_1974e8;
        case 0x1974ecu: goto label_1974ec;
        case 0x1974f0u: goto label_1974f0;
        case 0x1974f4u: goto label_1974f4;
        case 0x1974f8u: goto label_1974f8;
        case 0x1974fcu: goto label_1974fc;
        case 0x197500u: goto label_197500;
        case 0x197504u: goto label_197504;
        case 0x197508u: goto label_197508;
        case 0x19750cu: goto label_19750c;
        case 0x197510u: goto label_197510;
        case 0x197514u: goto label_197514;
        case 0x197518u: goto label_197518;
        case 0x19751cu: goto label_19751c;
        case 0x197520u: goto label_197520;
        case 0x197524u: goto label_197524;
        case 0x197528u: goto label_197528;
        case 0x19752cu: goto label_19752c;
        case 0x197530u: goto label_197530;
        case 0x197534u: goto label_197534;
        case 0x197538u: goto label_197538;
        case 0x19753cu: goto label_19753c;
        case 0x197540u: goto label_197540;
        case 0x197544u: goto label_197544;
        case 0x197548u: goto label_197548;
        case 0x19754cu: goto label_19754c;
        case 0x197550u: goto label_197550;
        case 0x197554u: goto label_197554;
        case 0x197558u: goto label_197558;
        case 0x19755cu: goto label_19755c;
        case 0x197560u: goto label_197560;
        case 0x197564u: goto label_197564;
        case 0x197568u: goto label_197568;
        case 0x19756cu: goto label_19756c;
        case 0x197570u: goto label_197570;
        case 0x197574u: goto label_197574;
        case 0x197578u: goto label_197578;
        case 0x19757cu: goto label_19757c;
        case 0x197580u: goto label_197580;
        case 0x197584u: goto label_197584;
        case 0x197588u: goto label_197588;
        case 0x19758cu: goto label_19758c;
        case 0x197590u: goto label_197590;
        case 0x197594u: goto label_197594;
        case 0x197598u: goto label_197598;
        case 0x19759cu: goto label_19759c;
        case 0x1975a0u: goto label_1975a0;
        case 0x1975a4u: goto label_1975a4;
        case 0x1975a8u: goto label_1975a8;
        case 0x1975acu: goto label_1975ac;
        case 0x1975b0u: goto label_1975b0;
        case 0x1975b4u: goto label_1975b4;
        case 0x1975b8u: goto label_1975b8;
        case 0x1975bcu: goto label_1975bc;
        case 0x1975c0u: goto label_1975c0;
        case 0x1975c4u: goto label_1975c4;
        case 0x1975c8u: goto label_1975c8;
        case 0x1975ccu: goto label_1975cc;
        case 0x1975d0u: goto label_1975d0;
        case 0x1975d4u: goto label_1975d4;
        case 0x1975d8u: goto label_1975d8;
        case 0x1975dcu: goto label_1975dc;
        case 0x1975e0u: goto label_1975e0;
        case 0x1975e4u: goto label_1975e4;
        case 0x1975e8u: goto label_1975e8;
        case 0x1975ecu: goto label_1975ec;
        case 0x1975f0u: goto label_1975f0;
        case 0x1975f4u: goto label_1975f4;
        case 0x1975f8u: goto label_1975f8;
        case 0x1975fcu: goto label_1975fc;
        case 0x197600u: goto label_197600;
        case 0x197604u: goto label_197604;
        case 0x197608u: goto label_197608;
        case 0x19760cu: goto label_19760c;
        case 0x197610u: goto label_197610;
        case 0x197614u: goto label_197614;
        case 0x197618u: goto label_197618;
        case 0x19761cu: goto label_19761c;
        case 0x197620u: goto label_197620;
        case 0x197624u: goto label_197624;
        case 0x197628u: goto label_197628;
        case 0x19762cu: goto label_19762c;
        case 0x197630u: goto label_197630;
        case 0x197634u: goto label_197634;
        case 0x197638u: goto label_197638;
        case 0x19763cu: goto label_19763c;
        case 0x197640u: goto label_197640;
        case 0x197644u: goto label_197644;
        case 0x197648u: goto label_197648;
        case 0x19764cu: goto label_19764c;
        case 0x197650u: goto label_197650;
        case 0x197654u: goto label_197654;
        case 0x197658u: goto label_197658;
        case 0x19765cu: goto label_19765c;
        case 0x197660u: goto label_197660;
        case 0x197664u: goto label_197664;
        case 0x197668u: goto label_197668;
        case 0x19766cu: goto label_19766c;
        case 0x197670u: goto label_197670;
        case 0x197674u: goto label_197674;
        case 0x197678u: goto label_197678;
        case 0x19767cu: goto label_19767c;
        case 0x197680u: goto label_197680;
        case 0x197684u: goto label_197684;
        case 0x197688u: goto label_197688;
        case 0x19768cu: goto label_19768c;
        case 0x197690u: goto label_197690;
        case 0x197694u: goto label_197694;
        case 0x197698u: goto label_197698;
        case 0x19769cu: goto label_19769c;
        case 0x1976a0u: goto label_1976a0;
        case 0x1976a4u: goto label_1976a4;
        case 0x1976a8u: goto label_1976a8;
        case 0x1976acu: goto label_1976ac;
        case 0x1976b0u: goto label_1976b0;
        case 0x1976b4u: goto label_1976b4;
        case 0x1976b8u: goto label_1976b8;
        case 0x1976bcu: goto label_1976bc;
        case 0x1976c0u: goto label_1976c0;
        case 0x1976c4u: goto label_1976c4;
        case 0x1976c8u: goto label_1976c8;
        case 0x1976ccu: goto label_1976cc;
        case 0x1976d0u: goto label_1976d0;
        case 0x1976d4u: goto label_1976d4;
        case 0x1976d8u: goto label_1976d8;
        case 0x1976dcu: goto label_1976dc;
        case 0x1976e0u: goto label_1976e0;
        case 0x1976e4u: goto label_1976e4;
        case 0x1976e8u: goto label_1976e8;
        case 0x1976ecu: goto label_1976ec;
        case 0x1976f0u: goto label_1976f0;
        case 0x1976f4u: goto label_1976f4;
        case 0x1976f8u: goto label_1976f8;
        case 0x1976fcu: goto label_1976fc;
        case 0x197700u: goto label_197700;
        case 0x197704u: goto label_197704;
        case 0x197708u: goto label_197708;
        case 0x19770cu: goto label_19770c;
        case 0x197710u: goto label_197710;
        case 0x197714u: goto label_197714;
        case 0x197718u: goto label_197718;
        case 0x19771cu: goto label_19771c;
        case 0x197720u: goto label_197720;
        case 0x197724u: goto label_197724;
        case 0x197728u: goto label_197728;
        case 0x19772cu: goto label_19772c;
        case 0x197730u: goto label_197730;
        case 0x197734u: goto label_197734;
        case 0x197738u: goto label_197738;
        case 0x19773cu: goto label_19773c;
        case 0x197740u: goto label_197740;
        case 0x197744u: goto label_197744;
        case 0x197748u: goto label_197748;
        case 0x19774cu: goto label_19774c;
        case 0x197750u: goto label_197750;
        case 0x197754u: goto label_197754;
        case 0x197758u: goto label_197758;
        case 0x19775cu: goto label_19775c;
        case 0x197760u: goto label_197760;
        case 0x197764u: goto label_197764;
        case 0x197768u: goto label_197768;
        case 0x19776cu: goto label_19776c;
        case 0x197770u: goto label_197770;
        case 0x197774u: goto label_197774;
        case 0x197778u: goto label_197778;
        case 0x19777cu: goto label_19777c;
        case 0x197780u: goto label_197780;
        case 0x197784u: goto label_197784;
        case 0x197788u: goto label_197788;
        case 0x19778cu: goto label_19778c;
        case 0x197790u: goto label_197790;
        case 0x197794u: goto label_197794;
        case 0x197798u: goto label_197798;
        case 0x19779cu: goto label_19779c;
        case 0x1977a0u: goto label_1977a0;
        case 0x1977a4u: goto label_1977a4;
        case 0x1977a8u: goto label_1977a8;
        case 0x1977acu: goto label_1977ac;
        default: return;
    }

label_196fe0:
    // 0x196fe0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x196fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_196fe4:
    // 0x196fe4: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x196fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_196fe8:
    // 0x196fe8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x196fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_196fec:
    // 0x196fec: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x196fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_196ff0:
    // 0x196ff0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x196ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_196ff4:
    // 0x196ff4: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x196ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_196ff8:
    // 0x196ff8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x196ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_196ffc:
    // 0x196ffc: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x196ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_197000:
    // 0x197000: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x197000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_197004:
    // 0x197004: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x197004u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_197008:
    // 0x197008: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x197008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_19700c:
    // 0x19700c: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x19700cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_197010:
    // 0x197010: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x197010u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_197014:
    // 0x197014: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x197014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_197018:
    // 0x197018: 0x79020010  lq          $v0, 0x10($t0)
    ctx->pc = 0x197018u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 16)));
label_19701c:
    // 0x19701c: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x19701cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
label_197020:
    // 0x197020: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x197020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
label_197024:
    // 0x197024: 0x7ce20010  sq          $v0, 0x10($a3)
    ctx->pc = 0x197024u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
label_197028:
    // 0x197028: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_19702c:
    if (ctx->pc == 0x19702Cu) {
        ctx->pc = 0x19702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197028u;
        // 0x19702c: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197030u;
        goto label_197030;
    }
    ctx->pc = 0x197028u;
    {
        const bool branch_taken_0x197028 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x19702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197028u;
        // 0x19702c: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197028) {
            ctx->pc = 0x197010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197010;
        }
    }
    ctx->pc = 0x197030u;
label_197030:
    // 0x197030: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x197030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_197034:
    // 0x197034: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_197038:
    if (ctx->pc == 0x197038u) {
        ctx->pc = 0x19703Cu;
        goto label_19703c;
    }
    ctx->pc = 0x197034u;
    {
        const bool branch_taken_0x197034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x197034) {
            ctx->pc = 0x197048u;
            goto label_197048;
        }
    }
    ctx->pc = 0x19703Cu;
label_19703c:
    // 0x19703c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x19703cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_197040:
    // 0x197040: 0x10000002  b           . + 4 + (0x2 << 2)
label_197044:
    if (ctx->pc == 0x197044u) {
        ctx->pc = 0x197044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197040u;
        // 0x197044: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        ctx->pc = 0x197048u;
        goto label_197048;
    }
    ctx->pc = 0x197040u;
    {
        const bool branch_taken_0x197040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197040u;
        // 0x197044: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x197040) {
            ctx->pc = 0x19704Cu;
            goto label_19704c;
        }
    }
    ctx->pc = 0x197048u;
label_197048:
    // 0x197048: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x197048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19704c:
    // 0x19704c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19704cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_197050:
    // 0x197050: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x197050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_197054:
    // 0x197054: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x197054u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_197058:
    // 0x197058: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_19705c:
    if (ctx->pc == 0x19705Cu) {
        ctx->pc = 0x19705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197058u;
        // 0x19705c: 0x3c03002d  lui         $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197060u;
        goto label_197060;
    }
    ctx->pc = 0x197058u;
    {
        const bool branch_taken_0x197058 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197058u;
        // 0x19705c: 0x3c03002d  lui         $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197058) {
            ctx->pc = 0x197078u;
            goto label_197078;
        }
    }
    ctx->pc = 0x197060u;
label_197060:
    // 0x197060: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x197060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_197064:
    // 0x197064: 0x24639950  addiu       $v1, $v1, -0x66B0
    ctx->pc = 0x197064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941008));
label_197068:
    // 0x197068: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x197068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19706c:
    // 0x19706c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19706cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_197070:
    // 0x197070: 0x400008  jr          $v0
label_197074:
    if (ctx->pc == 0x197074u) {
        ctx->pc = 0x197078u;
        goto label_197078;
    }
    ctx->pc = 0x197070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197078u: goto label_197078;
            case 0x197088u: goto label_197088;
            case 0x197098u: goto label_197098;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197070u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x197078u;
label_197078:
    // 0x197078: 0xc065988  jal         func_196620
label_19707c:
    if (ctx->pc == 0x19707Cu) {
        ctx->pc = 0x197080u;
        goto label_197080;
    }
    ctx->pc = 0x197078u;
    SET_GPR_U32(ctx, 31, 0x197080u);
    ctx->pc = 0x196620u;
    { ctx->pc = 0x196620; return; }
    ctx->pc = 0x197080u;
label_197080:
    // 0x197080: 0x10000005  b           . + 4 + (0x5 << 2)
label_197084:
    if (ctx->pc == 0x197084u) {
        ctx->pc = 0x197088u;
        goto label_197088;
    }
    ctx->pc = 0x197080u;
    {
        const bool branch_taken_0x197080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197080) {
            ctx->pc = 0x197098u;
            goto label_197098;
        }
    }
    ctx->pc = 0x197088u;
label_197088:
    // 0x197088: 0xc065e58  jal         func_197960
label_19708c:
    if (ctx->pc == 0x19708Cu) {
        ctx->pc = 0x19708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197088u;
        // 0x19708c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197090u;
        goto label_197090;
    }
    ctx->pc = 0x197088u;
    SET_GPR_U32(ctx, 31, 0x197090u);
    ctx->pc = 0x19708Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197088u;
    // 0x19708c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197960u;
    { ctx->pc = 0x197960; return; }
    ctx->pc = 0x197090u;
label_197090:
    // 0x197090: 0x1000ffef  b           . + 4 + (-0x11 << 2)
label_197094:
    if (ctx->pc == 0x197094u) {
        ctx->pc = 0x197094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197090u;
        // 0x197094: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x197098u;
        goto label_197098;
    }
    ctx->pc = 0x197090u;
    {
        const bool branch_taken_0x197090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197090u;
        // 0x197094: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x197090) {
            ctx->pc = 0x197050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197050;
        }
    }
    ctx->pc = 0x197098u;
label_197098:
    // 0x197098: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x197098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19709c:
    // 0x19709c: 0x27a5032c  addiu       $a1, $sp, 0x32C
    ctx->pc = 0x19709cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 812));
label_1970a0:
    // 0x1970a0: 0xc0659e8  jal         func_1967A0
label_1970a4:
    if (ctx->pc == 0x1970A4u) {
        ctx->pc = 0x1970A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1970A0u;
        // 0x1970a4: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1970A8u;
        goto label_1970a8;
    }
    ctx->pc = 0x1970A0u;
    SET_GPR_U32(ctx, 31, 0x1970A8u);
    ctx->pc = 0x1970A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1970A0u;
    // 0x1970a4: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x1970A8u;
label_1970a8:
    // 0x1970a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1970a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1970ac:
    // 0x1970ac: 0x8fa2032c  lw          $v0, 0x32C($sp)
    ctx->pc = 0x1970acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 812)));
label_1970b0:
    // 0x1970b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1970b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1970b4:
    // 0x1970b4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1970b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1970b8:
    // 0x1970b8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1970b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1970bc:
    // 0x1970bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1970bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1970c0:
    // 0x1970c0: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1970c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_1970c4:
    // 0x1970c4: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1970c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_1970c8:
    // 0x1970c8: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1970c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_1970cc:
    // 0x1970cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1970ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1970d0:
    // 0x1970d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1970d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1970d4:
    // 0x1970d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1970d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1970d8:
    // 0x1970d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1970d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1970dc:
    // 0x1970dc: 0x3e00008  jr          $ra
label_1970e0:
    if (ctx->pc == 0x1970E0u) {
        ctx->pc = 0x1970E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1970DCu;
        // 0x1970e0: 0x27bd0330  addiu       $sp, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1970E4u;
        goto label_1970e4;
    }
    ctx->pc = 0x1970DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1970E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1970DCu;
        // 0x1970e0: 0x27bd0330  addiu       $sp, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1970DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1970E4u;
label_1970e4:
    // 0x1970e4: 0x0  nop
    ctx->pc = 0x1970e4u;
    // NOP
label_1970e8:
    // 0x1970e8: 0x0  nop
    ctx->pc = 0x1970e8u;
    // NOP
label_1970ec:
    // 0x1970ec: 0x0  nop
    ctx->pc = 0x1970ecu;
    // NOP
label_1970f0:
    // 0x1970f0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1970f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_1970f4:
    // 0x1970f4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1970f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1970f8:
    // 0x1970f8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1970f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1970fc:
    // 0x1970fc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1970fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_197100:
    // 0x197100: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x197100u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_197104:
    // 0x197104: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x197104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_197108:
    // 0x197108: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x197108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_19710c:
    // 0x19710c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19710cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_197110:
    // 0x197110: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x197110u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_197114:
    // 0x197114: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x197114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_197118:
    // 0x197118: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x197118u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19711c:
    // 0x19711c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19711cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_197120:
    // 0x197120: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x197120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_197124:
    // 0x197124: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x197124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_197128:
    // 0x197128: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_19712c:
    if (ctx->pc == 0x19712Cu) {
        ctx->pc = 0x19712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197128u;
        // 0x19712c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197130u;
        goto label_197130;
    }
    ctx->pc = 0x197128u;
    {
        const bool branch_taken_0x197128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197128u;
        // 0x19712c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197128) {
            ctx->pc = 0x197170u;
            goto label_197170;
        }
    }
    ctx->pc = 0x197130u;
label_197130:
    // 0x197130: 0xc066018  jal         func_198060
label_197134:
    if (ctx->pc == 0x197134u) {
        ctx->pc = 0x197134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197130u;
        // 0x197134: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197138u;
        goto label_197138;
    }
    ctx->pc = 0x197130u;
    SET_GPR_U32(ctx, 31, 0x197138u);
    ctx->pc = 0x197134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197130u;
    // 0x197134: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198060u;
    { ctx->pc = 0x198060; return; }
    ctx->pc = 0x197138u;
label_197138:
    // 0x197138: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19713c:
    // 0x19713c: 0xc065f20  jal         func_197C80
label_197140:
    if (ctx->pc == 0x197140u) {
        ctx->pc = 0x197140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19713Cu;
        // 0x197140: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197144u;
        goto label_197144;
    }
    ctx->pc = 0x19713Cu;
    SET_GPR_U32(ctx, 31, 0x197144u);
    ctx->pc = 0x197140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19713Cu;
    // 0x197140: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197C80u;
    { ctx->pc = 0x197c80; return; }
    ctx->pc = 0x197144u;
label_197144:
    // 0x197144: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x197144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_197148:
    // 0x197148: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_19714c:
    if (ctx->pc == 0x19714Cu) {
        ctx->pc = 0x197150u;
        goto label_197150;
    }
    ctx->pc = 0x197148u;
    {
        const bool branch_taken_0x197148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197148) {
            ctx->pc = 0x197158u;
            goto label_197158;
        }
    }
    ctx->pc = 0x197150u;
label_197150:
    // 0x197150: 0xc065988  jal         func_196620
label_197154:
    if (ctx->pc == 0x197154u) {
        ctx->pc = 0x197158u;
        goto label_197158;
    }
    ctx->pc = 0x197150u;
    SET_GPR_U32(ctx, 31, 0x197158u);
    ctx->pc = 0x196620u;
    { ctx->pc = 0x196620; return; }
    ctx->pc = 0x197158u;
label_197158:
    // 0x197158: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x197158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19715c:
    // 0x19715c: 0xc065fec  jal         func_197FB0
label_197160:
    if (ctx->pc == 0x197160u) {
        ctx->pc = 0x197160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19715Cu;
        // 0x197160: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197164u;
        goto label_197164;
    }
    ctx->pc = 0x19715Cu;
    SET_GPR_U32(ctx, 31, 0x197164u);
    ctx->pc = 0x197160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19715Cu;
    // 0x197160: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197FB0u;
    { ctx->pc = 0x197fb0; return; }
    ctx->pc = 0x197164u;
label_197164:
    // 0x197164: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x197164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_197168:
    // 0x197168: 0x1060ffee  beqz        $v1, . + 4 + (-0x12 << 2)
label_19716c:
    if (ctx->pc == 0x19716Cu) {
        ctx->pc = 0x197170u;
        goto label_197170;
    }
    ctx->pc = 0x197168u;
    {
        const bool branch_taken_0x197168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x197168) {
            ctx->pc = 0x197124u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197124;
        }
    }
    ctx->pc = 0x197170u;
label_197170:
    // 0x197170: 0x8e680008  lw          $t0, 0x8($s3)
    ctx->pc = 0x197170u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_197174:
    // 0x197174: 0x91120000  lbu         $s2, 0x0($t0)
    ctx->pc = 0x197174u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_197178:
    // 0x197178: 0x3243001f  andi        $v1, $s2, 0x1F
    ctx->pc = 0x197178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)31);
label_19717c:
    // 0x19717c: 0x2c610010  sltiu       $at, $v1, 0x10
    ctx->pc = 0x19717cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_197180:
    // 0x197180: 0x102001e0  beqz        $at, . + 4 + (0x1E0 << 2)
label_197184:
    if (ctx->pc == 0x197184u) {
        ctx->pc = 0x197184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197180u;
        // 0x197184: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197188u;
        goto label_197188;
    }
    ctx->pc = 0x197180u;
    {
        const bool branch_taken_0x197180 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x197184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197180u;
        // 0x197184: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197180) {
            ctx->pc = 0x197904u;
            { ctx->pc = 0x197904; return; }
        }
    }
    ctx->pc = 0x197188u;
label_197188:
    // 0x197188: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x197188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19718c:
    // 0x19718c: 0x24849990  addiu       $a0, $a0, -0x6670
    ctx->pc = 0x19718cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941072));
label_197190:
    // 0x197190: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x197190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_197194:
    // 0x197194: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x197194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_197198:
    // 0x197198: 0x600008  jr          $v1
label_19719c:
    if (ctx->pc == 0x19719Cu) {
        ctx->pc = 0x1971A0u;
        goto label_1971a0;
    }
    ctx->pc = 0x197198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1971A0u: goto label_1971a0;
            case 0x1971C0u: goto label_1971c0;
            case 0x197218u: goto label_197218;
            case 0x1972B8u: goto label_1972b8;
            case 0x197340u: goto label_197340;
            case 0x1973D8u: goto label_1973d8;
            case 0x19746Cu: goto label_19746c;
            case 0x197504u: goto label_197504;
            case 0x1975F0u: goto label_1975f0;
            case 0x1976D0u: goto label_1976d0;
            case 0x197750u: goto label_197750;
            case 0x197820u: { ctx->pc = 0x197820; return; }
            case 0x197874u: { ctx->pc = 0x197874; return; }
            case 0x1978C8u: { ctx->pc = 0x1978c8; return; }
            case 0x197904u: { ctx->pc = 0x197904; return; }
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197198u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1971A0u;
label_1971a0:
    // 0x1971a0: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1971a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1971a4:
    // 0x1971a4: 0xc0659e8  jal         func_1967A0
label_1971a8:
    if (ctx->pc == 0x1971A8u) {
        ctx->pc = 0x1971A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971A4u;
        // 0x1971a8: 0x27a5009c  addiu       $a1, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1971ACu;
        goto label_1971ac;
    }
    ctx->pc = 0x1971A4u;
    SET_GPR_U32(ctx, 31, 0x1971ACu);
    ctx->pc = 0x1971A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1971A4u;
    // 0x1971a8: 0x27a5009c  addiu       $a1, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x1971ACu;
label_1971ac:
    // 0x1971ac: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x1971acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1971b0:
    // 0x1971b0: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x1971b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_1971b4:
    // 0x1971b4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1971b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1971b8:
    // 0x1971b8: 0x100001d5  b           . + 4 + (0x1D5 << 2)
label_1971bc:
    if (ctx->pc == 0x1971BCu) {
        ctx->pc = 0x1971BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971B8u;
        // 0x1971bc: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1971C0u;
        goto label_1971c0;
    }
    ctx->pc = 0x1971B8u;
    {
        const bool branch_taken_0x1971b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1971BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971B8u;
        // 0x1971bc: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1971b8) {
            ctx->pc = 0x197910u;
            { ctx->pc = 0x197910; return; }
        }
    }
    ctx->pc = 0x1971C0u;
label_1971c0:
    // 0x1971c0: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1971c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1971c4:
    // 0x1971c4: 0xc0659e8  jal         func_1967A0
label_1971c8:
    if (ctx->pc == 0x1971C8u) {
        ctx->pc = 0x1971C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971C4u;
        // 0x1971c8: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1971CCu;
        goto label_1971cc;
    }
    ctx->pc = 0x1971C4u;
    SET_GPR_U32(ctx, 31, 0x1971CCu);
    ctx->pc = 0x1971C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1971C4u;
    // 0x1971c8: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x1971CCu;
label_1971cc:
    // 0x1971cc: 0x90470001  lbu         $a3, 0x1($v0)
    ctx->pc = 0x1971ccu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1971d0:
    // 0x1971d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1971d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1971d4:
    // 0x1971d4: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x1971d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1971d8:
    // 0x1971d8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1971d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1971dc:
    // 0x1971dc: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x1971dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1971e0:
    // 0x1971e0: 0x8e880018  lw          $t0, 0x18($s4)
    ctx->pc = 0x1971e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_1971e4:
    // 0x1971e4: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1971e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1971e8:
    // 0x1971e8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1971e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1971ec:
    // 0x1971ec: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1971ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1971f0:
    // 0x1971f0: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1971f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1971f4:
    // 0x1971f4: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1971f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_1971f8:
    // 0x1971f8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1971f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_1971fc:
    // 0x1971fc: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1971fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_197200:
    // 0x197200: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x197200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_197204:
    // 0x197204: 0x40f809  jalr        $v0
label_197208:
    if (ctx->pc == 0x197208u) {
        ctx->pc = 0x197208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197204u;
        // 0x197208: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19720Cu;
        goto label_19720c;
    }
    ctx->pc = 0x197204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19720Cu);
        ctx->pc = 0x197208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197204u;
        // 0x197208: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197204u, 0x19720Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19720Cu;
label_19720c:
    // 0x19720c: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x19720cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_197210:
    // 0x197210: 0x100001bf  b           . + 4 + (0x1BF << 2)
label_197214:
    if (ctx->pc == 0x197214u) {
        ctx->pc = 0x197214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197210u;
        // 0x197214: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197218u;
        goto label_197218;
    }
    ctx->pc = 0x197210u;
    {
        const bool branch_taken_0x197210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197210u;
        // 0x197214: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197210) {
            ctx->pc = 0x197910u;
            { ctx->pc = 0x197910; return; }
        }
    }
    ctx->pc = 0x197218u;
label_197218:
    // 0x197218: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x197218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_19721c:
    // 0x19721c: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x19721cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_197220:
    // 0x197220: 0xc0659e8  jal         func_1967A0
label_197224:
    if (ctx->pc == 0x197224u) {
        ctx->pc = 0x197224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197220u;
        // 0x197224: 0x32500040  andi        $s0, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x197228u;
        goto label_197228;
    }
    ctx->pc = 0x197220u;
    SET_GPR_U32(ctx, 31, 0x197228u);
    ctx->pc = 0x197224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197220u;
    // 0x197224: 0x32500040  andi        $s0, $s2, 0x40 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x197228u;
label_197228:
    // 0x197228: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19722c:
    // 0x19722c: 0xc0659e8  jal         func_1967A0
label_197230:
    if (ctx->pc == 0x197230u) {
        ctx->pc = 0x197230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19722Cu;
        // 0x197230: 0x27a500a4  addiu       $a1, $sp, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197234u;
        goto label_197234;
    }
    ctx->pc = 0x19722Cu;
    SET_GPR_U32(ctx, 31, 0x197234u);
    ctx->pc = 0x197230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19722Cu;
    // 0x197230: 0x27a500a4  addiu       $a1, $sp, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x197234u;
label_197234:
    // 0x197234: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x197234u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_197238:
    // 0x197238: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x197238u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_19723c:
    // 0x19723c: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x19723cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_197240:
    // 0x197240: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x197240u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_197244:
    // 0x197244: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x197244u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_197248:
    // 0x197248: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x197248u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_19724c:
    // 0x19724c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x19724cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_197250:
    // 0x197250: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x197250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_197254:
    // 0x197254: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x197254u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_197258:
    // 0x197258: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x197258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_19725c:
    // 0x19725c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_197260:
    if (ctx->pc == 0x197260u) {
        ctx->pc = 0x197260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19725Cu;
        // 0x197260: 0x643025  or          $a2, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197264u;
        goto label_197264;
    }
    ctx->pc = 0x19725Cu;
    {
        const bool branch_taken_0x19725c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x197260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19725Cu;
        // 0x197260: 0x643025  or          $a2, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19725c) {
            ctx->pc = 0x197280u;
            goto label_197280;
        }
    }
    ctx->pc = 0x197264u;
label_197264:
    // 0x197264: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x197264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_197268:
    // 0x197268: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x197268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_19726c:
    // 0x19726c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x19726cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_197270:
    // 0x197270: 0x78630020  lq          $v1, 0x20($v1)
    ctx->pc = 0x197270u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_197274:
    // 0x197274: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x197274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_197278:
    // 0x197278: 0x10000006  b           . + 4 + (0x6 << 2)
label_19727c:
    if (ctx->pc == 0x19727Cu) {
        ctx->pc = 0x19727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197278u;
        // 0x19727c: 0x31e3f  dsra32      $v1, $v1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197280u;
        goto label_197280;
    }
    ctx->pc = 0x197278u;
    {
        const bool branch_taken_0x197278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197278u;
        // 0x19727c: 0x31e3f  dsra32      $v1, $v1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197278) {
            ctx->pc = 0x197294u;
            goto label_197294;
        }
    }
    ctx->pc = 0x197280u;
label_197280:
    // 0x197280: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x197280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_197284:
    // 0x197284: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x197284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_197288:
    // 0x197288: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x197288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_19728c:
    // 0x19728c: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x19728cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_197290:
    // 0x197290: 0x0  nop
    ctx->pc = 0x197290u;
    // NOP
label_197294:
    // 0x197294: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_197298:
    if (ctx->pc == 0x197298u) {
        ctx->pc = 0x19729Cu;
        goto label_19729c;
    }
    ctx->pc = 0x197294u;
    {
        const bool branch_taken_0x197294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x197294) {
            ctx->pc = 0x1972B0u;
            goto label_1972b0;
        }
    }
    ctx->pc = 0x19729Cu;
label_19729c:
    // 0x19729c: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x19729cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_1972a0:
    // 0x1972a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1972a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1972a4:
    // 0x1972a4: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x1972a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_1972a8:
    // 0x1972a8: 0xc0f809  jalr        $a2
label_1972ac:
    if (ctx->pc == 0x1972ACu) {
        ctx->pc = 0x1972ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972A8u;
        // 0x1972ac: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1972B0u;
        goto label_1972b0;
    }
    ctx->pc = 0x1972A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1972B0u);
        ctx->pc = 0x1972ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972A8u;
        // 0x1972ac: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1972A8u, 0x1972B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1972B0u;
label_1972b0:
    // 0x1972b0: 0x10000197  b           . + 4 + (0x197 << 2)
label_1972b4:
    if (ctx->pc == 0x1972B4u) {
        ctx->pc = 0x1972B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972B0u;
        // 0x1972b4: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1972B8u;
        goto label_1972b8;
    }
    ctx->pc = 0x1972B0u;
    {
        const bool branch_taken_0x1972b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1972B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972B0u;
        // 0x1972b4: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1972b0) {
            ctx->pc = 0x197910u;
            { ctx->pc = 0x197910; return; }
        }
    }
    ctx->pc = 0x1972B8u;
label_1972b8:
    // 0x1972b8: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1972b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1972bc:
    // 0x1972bc: 0x27a500ac  addiu       $a1, $sp, 0xAC
    ctx->pc = 0x1972bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_1972c0:
    // 0x1972c0: 0xc0659e8  jal         func_1967A0
label_1972c4:
    if (ctx->pc == 0x1972C4u) {
        ctx->pc = 0x1972C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972C0u;
        // 0x1972c4: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1972C8u;
        goto label_1972c8;
    }
    ctx->pc = 0x1972C0u;
    SET_GPR_U32(ctx, 31, 0x1972C8u);
    ctx->pc = 0x1972C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1972C0u;
    // 0x1972c4: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x1972C8u;
label_1972c8:
    // 0x1972c8: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x1972c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1972cc:
    // 0x1972cc: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x1972ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1972d0:
    // 0x1972d0: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x1972d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1972d4:
    // 0x1972d4: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1972d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1972d8:
    // 0x1972d8: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1972d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1972dc:
    // 0x1972dc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1972dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1972e0:
    // 0x1972e0: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1972e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1972e4:
    // 0x1972e4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1972e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1972e8:
    // 0x1972e8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1972e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1972ec:
    // 0x1972ec: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1972ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1972f0:
    // 0x1972f0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1972f4:
    if (ctx->pc == 0x1972F4u) {
        ctx->pc = 0x1972F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972F0u;
        // 0x1972f4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1972F8u;
        goto label_1972f8;
    }
    ctx->pc = 0x1972F0u;
    {
        const bool branch_taken_0x1972f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1972F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972F0u;
        // 0x1972f4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1972f0) {
            ctx->pc = 0x197314u;
            goto label_197314;
        }
    }
    ctx->pc = 0x1972F8u;
label_1972f8:
    // 0x1972f8: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1972f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1972fc:
    // 0x1972fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1972fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_197300:
    // 0x197300: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x197300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_197304:
    // 0x197304: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x197304u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_197308:
    // 0x197308: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x197308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_19730c:
    // 0x19730c: 0x10000007  b           . + 4 + (0x7 << 2)
label_197310:
    if (ctx->pc == 0x197310u) {
        ctx->pc = 0x197310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19730Cu;
        // 0x197310: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197314u;
        goto label_197314;
    }
    ctx->pc = 0x19730Cu;
    {
        const bool branch_taken_0x19730c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19730Cu;
        // 0x197310: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19730c) {
            ctx->pc = 0x19732Cu;
            goto label_19732c;
        }
    }
    ctx->pc = 0x197314u;
label_197314:
    // 0x197314: 0x0  nop
    ctx->pc = 0x197314u;
    // NOP
label_197318:
    // 0x197318: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x197318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_19731c:
    // 0x19731c: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x19731cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_197320:
    // 0x197320: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x197320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_197324:
    // 0x197324: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x197324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_197328:
    // 0x197328: 0x0  nop
    ctx->pc = 0x197328u;
    // NOP
label_19732c:
    // 0x19732c: 0x0  nop
    ctx->pc = 0x19732cu;
    // NOP
label_197330:
    // 0x197330: 0xc0f809  jalr        $a2
label_197334:
    if (ctx->pc == 0x197334u) {
        ctx->pc = 0x197334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197330u;
        // 0x197334: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197338u;
        goto label_197338;
    }
    ctx->pc = 0x197330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x197338u);
        ctx->pc = 0x197334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197330u;
        // 0x197334: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197330u, 0x197338u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197338u;
label_197338:
    // 0x197338: 0x10000175  b           . + 4 + (0x175 << 2)
label_19733c:
    if (ctx->pc == 0x19733Cu) {
        ctx->pc = 0x19733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197338u;
        // 0x19733c: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197340u;
        goto label_197340;
    }
    ctx->pc = 0x197338u;
    {
        const bool branch_taken_0x197338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197338u;
        // 0x19733c: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197338) {
            ctx->pc = 0x197910u;
            { ctx->pc = 0x197910; return; }
        }
    }
    ctx->pc = 0x197340u;
label_197340:
    // 0x197340: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x197340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_197344:
    // 0x197344: 0xc0659e8  jal         func_1967A0
label_197348:
    if (ctx->pc == 0x197348u) {
        ctx->pc = 0x197348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197344u;
        // 0x197348: 0x27a500b8  addiu       $a1, $sp, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19734Cu;
        goto label_19734c;
    }
    ctx->pc = 0x197344u;
    SET_GPR_U32(ctx, 31, 0x19734Cu);
    ctx->pc = 0x197348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197344u;
    // 0x197348: 0x27a500b8  addiu       $a1, $sp, 0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x19734Cu;
label_19734c:
    // 0x19734c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19734cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197350:
    // 0x197350: 0xc0659c0  jal         func_196700
label_197354:
    if (ctx->pc == 0x197354u) {
        ctx->pc = 0x197354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197350u;
        // 0x197354: 0x27a500b4  addiu       $a1, $sp, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197358u;
        goto label_197358;
    }
    ctx->pc = 0x197350u;
    SET_GPR_U32(ctx, 31, 0x197358u);
    ctx->pc = 0x197354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197350u;
    // 0x197354: 0x27a500b4  addiu       $a1, $sp, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    { ctx->pc = 0x196700; return; }
    ctx->pc = 0x197358u;
label_197358:
    // 0x197358: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19735c:
    // 0x19735c: 0xc0659c0  jal         func_196700
label_197360:
    if (ctx->pc == 0x197360u) {
        ctx->pc = 0x197360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19735Cu;
        // 0x197360: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197364u;
        goto label_197364;
    }
    ctx->pc = 0x19735Cu;
    SET_GPR_U32(ctx, 31, 0x197364u);
    ctx->pc = 0x197360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19735Cu;
    // 0x197360: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    { ctx->pc = 0x196700; return; }
    ctx->pc = 0x197364u;
label_197364:
    // 0x197364: 0x90480001  lbu         $t0, 0x1($v0)
    ctx->pc = 0x197364u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_197368:
    // 0x197368: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x197368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_19736c:
    // 0x19736c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x19736cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_197370:
    // 0x197370: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x197370u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_197374:
    // 0x197374: 0x90460003  lbu         $a2, 0x3($v0)
    ctx->pc = 0x197374u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_197378:
    // 0x197378: 0x8fb100b4  lw          $s1, 0xB4($sp)
    ctx->pc = 0x197378u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_19737c:
    // 0x19737c: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x19737cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_197380:
    // 0x197380: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x197380u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_197384:
    // 0x197384: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x197384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_197388:
    // 0x197388: 0x684025  or          $t0, $v1, $t0
    ctx->pc = 0x197388u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
label_19738c:
    // 0x19738c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x19738cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_197390:
    // 0x197390: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x197390u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_197394:
    // 0x197394: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x197394u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_197398:
    // 0x197398: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x197398u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
label_19739c:
    // 0x19739c: 0xc7b025  or          $s6, $a2, $a3
    ctx->pc = 0x19739cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_1973a0:
    // 0x1973a0: 0xa4a821  addu        $s5, $a1, $a0
    ctx->pc = 0x1973a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1973a4:
    // 0x1973a4: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x1973a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1973a8:
    // 0x1973a8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_1973ac:
    if (ctx->pc == 0x1973ACu) {
        ctx->pc = 0x1973ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1973A8u;
        // 0x1973ac: 0x2a3a821  addu        $s5, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1973B0u;
        goto label_1973b0;
    }
    ctx->pc = 0x1973A8u;
    {
        const bool branch_taken_0x1973a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1973ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1973A8u;
        // 0x1973ac: 0x2a3a821  addu        $s5, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1973a8) {
            ctx->pc = 0x1973D0u;
            goto label_1973d0;
        }
    }
    ctx->pc = 0x1973B0u;
label_1973b0:
    // 0x1973b0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1973b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1973b4:
    // 0x1973b4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1973b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1973b8:
    // 0x1973b8: 0x2a2a823  subu        $s5, $s5, $v0
    ctx->pc = 0x1973b8u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1973bc:
    // 0x1973bc: 0x2c0f809  jalr        $s6
label_1973c0:
    if (ctx->pc == 0x1973C0u) {
        ctx->pc = 0x1973C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1973BCu;
        // 0x1973c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1973C4u;
        goto label_1973c4;
    }
    ctx->pc = 0x1973BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x1973C4u);
        ctx->pc = 0x1973C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1973BCu;
        // 0x1973c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1973BCu, 0x1973C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1973C4u;
label_1973c4:
    // 0x1973c4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1973c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1973c8:
    // 0x1973c8: 0x1620fff9  bnez        $s1, . + 4 + (-0x7 << 2)
label_1973cc:
    if (ctx->pc == 0x1973CCu) {
        ctx->pc = 0x1973D0u;
        goto label_1973d0;
    }
    ctx->pc = 0x1973C8u;
    {
        const bool branch_taken_0x1973c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1973c8) {
            ctx->pc = 0x1973B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1973b0;
        }
    }
    ctx->pc = 0x1973D0u;
label_1973d0:
    // 0x1973d0: 0x1000014f  b           . + 4 + (0x14F << 2)
label_1973d4:
    if (ctx->pc == 0x1973D4u) {
        ctx->pc = 0x1973D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1973D0u;
        // 0x1973d4: 0xae700008  sw          $s0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1973D8u;
        goto label_1973d8;
    }
    ctx->pc = 0x1973D0u;
    {
        const bool branch_taken_0x1973d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1973D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1973D0u;
        // 0x1973d4: 0xae700008  sw          $s0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1973d0) {
            ctx->pc = 0x197910u;
            { ctx->pc = 0x197910; return; }
        }
    }
    ctx->pc = 0x1973D8u;
label_1973d8:
    // 0x1973d8: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1973d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1973dc:
    // 0x1973dc: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1973dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1973e0:
    // 0x1973e0: 0xc0659e8  jal         func_1967A0
label_1973e4:
    if (ctx->pc == 0x1973E4u) {
        ctx->pc = 0x1973E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1973E0u;
        // 0x1973e4: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1973E8u;
        goto label_1973e8;
    }
    ctx->pc = 0x1973E0u;
    SET_GPR_U32(ctx, 31, 0x1973E8u);
    ctx->pc = 0x1973E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1973E0u;
    // 0x1973e4: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x1973E8u;
label_1973e8:
    // 0x1973e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1973e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1973ec:
    // 0x1973ec: 0xc0659e8  jal         func_1967A0
label_1973f0:
    if (ctx->pc == 0x1973F0u) {
        ctx->pc = 0x1973F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1973ECu;
        // 0x1973f0: 0x27a500bc  addiu       $a1, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1973F4u;
        goto label_1973f4;
    }
    ctx->pc = 0x1973ECu;
    SET_GPR_U32(ctx, 31, 0x1973F4u);
    ctx->pc = 0x1973F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1973ECu;
    // 0x1973f0: 0x27a500bc  addiu       $a1, $sp, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x1973F4u;
label_1973f4:
    // 0x1973f4: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x1973f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1973f8:
    // 0x1973f8: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x1973f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1973fc:
    // 0x1973fc: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x1973fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_197400:
    // 0x197400: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x197400u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_197404:
    // 0x197404: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x197404u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_197408:
    // 0x197408: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x197408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_19740c:
    // 0x19740c: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x19740cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_197410:
    // 0x197410: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x197410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_197414:
    // 0x197414: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x197414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_197418:
    // 0x197418: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x197418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_19741c:
    // 0x19741c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_197420:
    if (ctx->pc == 0x197420u) {
        ctx->pc = 0x197420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19741Cu;
        // 0x197420: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197424u;
        goto label_197424;
    }
    ctx->pc = 0x19741Cu;
    {
        const bool branch_taken_0x19741c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x197420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19741Cu;
        // 0x197420: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19741c) {
            ctx->pc = 0x197440u;
            goto label_197440;
        }
    }
    ctx->pc = 0x197424u;
label_197424:
    // 0x197424: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x197424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_197428:
    // 0x197428: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x197428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_19742c:
    // 0x19742c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x19742cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_197430:
    // 0x197430: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x197430u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_197434:
    // 0x197434: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x197434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_197438:
    // 0x197438: 0x10000006  b           . + 4 + (0x6 << 2)
label_19743c:
    if (ctx->pc == 0x19743Cu) {
        ctx->pc = 0x19743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197438u;
        // 0x19743c: 0x3183f  dsra32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197440u;
        goto label_197440;
    }
    ctx->pc = 0x197438u;
    {
        const bool branch_taken_0x197438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197438u;
        // 0x19743c: 0x3183f  dsra32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197438) {
            ctx->pc = 0x197454u;
            goto label_197454;
        }
    }
    ctx->pc = 0x197440u;
label_197440:
    // 0x197440: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x197440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_197444:
    // 0x197444: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x197444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_197448:
    // 0x197448: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x197448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19744c:
    // 0x19744c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19744cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_197450:
    // 0x197450: 0x0  nop
    ctx->pc = 0x197450u;
    // NOP
label_197454:
    // 0x197454: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x197454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_197458:
    // 0x197458: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x197458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19745c:
    // 0x19745c: 0xc0f809  jalr        $a2
label_197460:
    if (ctx->pc == 0x197460u) {
        ctx->pc = 0x197460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19745Cu;
        // 0x197460: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197464u;
        goto label_197464;
    }
    ctx->pc = 0x19745Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x197464u);
        ctx->pc = 0x197460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19745Cu;
        // 0x197460: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19745Cu, 0x197464u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197464u;
label_197464:
    // 0x197464: 0x1000012a  b           . + 4 + (0x12A << 2)
label_197468:
    if (ctx->pc == 0x197468u) {
        ctx->pc = 0x197468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197464u;
        // 0x197468: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19746Cu;
        goto label_19746c;
    }
    ctx->pc = 0x197464u;
    {
        const bool branch_taken_0x197464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197464u;
        // 0x197468: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197464) {
            ctx->pc = 0x197910u;
            { ctx->pc = 0x197910; return; }
        }
    }
    ctx->pc = 0x19746Cu;
label_19746c:
    // 0x19746c: 0x0  nop
    ctx->pc = 0x19746cu;
    // NOP
label_197470:
    // 0x197470: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x197470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_197474:
    // 0x197474: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x197474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_197478:
    // 0x197478: 0xc0659e8  jal         func_1967A0
label_19747c:
    if (ctx->pc == 0x19747Cu) {
        ctx->pc = 0x19747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197478u;
        // 0x19747c: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x197480u;
        goto label_197480;
    }
    ctx->pc = 0x197478u;
    SET_GPR_U32(ctx, 31, 0x197480u);
    ctx->pc = 0x19747Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197478u;
    // 0x19747c: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x197480u;
label_197480:
    // 0x197480: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197484:
    // 0x197484: 0xc0659e8  jal         func_1967A0
label_197488:
    if (ctx->pc == 0x197488u) {
        ctx->pc = 0x197488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197484u;
        // 0x197488: 0x27a500c4  addiu       $a1, $sp, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19748Cu;
        goto label_19748c;
    }
    ctx->pc = 0x197484u;
    SET_GPR_U32(ctx, 31, 0x19748Cu);
    ctx->pc = 0x197488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197484u;
    // 0x197488: 0x27a500c4  addiu       $a1, $sp, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x19748Cu;
label_19748c:
    // 0x19748c: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x19748cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_197490:
    // 0x197490: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x197490u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_197494:
    // 0x197494: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x197494u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_197498:
    // 0x197498: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x197498u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_19749c:
    // 0x19749c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x19749cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1974a0:
    // 0x1974a0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1974a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1974a4:
    // 0x1974a4: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1974a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1974a8:
    // 0x1974a8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1974a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1974ac:
    // 0x1974ac: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1974acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1974b0:
    // 0x1974b0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1974b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1974b4:
    // 0x1974b4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1974b8:
    if (ctx->pc == 0x1974B8u) {
        ctx->pc = 0x1974B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974B4u;
        // 0x1974b8: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1974BCu;
        goto label_1974bc;
    }
    ctx->pc = 0x1974B4u;
    {
        const bool branch_taken_0x1974b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1974B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974B4u;
        // 0x1974b8: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1974b4) {
            ctx->pc = 0x1974D8u;
            goto label_1974d8;
        }
    }
    ctx->pc = 0x1974BCu;
label_1974bc:
    // 0x1974bc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1974bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1974c0:
    // 0x1974c0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1974c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1974c4:
    // 0x1974c4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1974c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1974c8:
    // 0x1974c8: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x1974c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_1974cc:
    // 0x1974cc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1974ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1974d0:
    // 0x1974d0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1974d4:
    if (ctx->pc == 0x1974D4u) {
        ctx->pc = 0x1974D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974D0u;
        // 0x1974d4: 0x3183f  dsra32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1974D8u;
        goto label_1974d8;
    }
    ctx->pc = 0x1974D0u;
    {
        const bool branch_taken_0x1974d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1974D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974D0u;
        // 0x1974d4: 0x3183f  dsra32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1974d0) {
            ctx->pc = 0x1974ECu;
            goto label_1974ec;
        }
    }
    ctx->pc = 0x1974D8u;
label_1974d8:
    // 0x1974d8: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x1974d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_1974dc:
    // 0x1974dc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1974dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1974e0:
    // 0x1974e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1974e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1974e4:
    // 0x1974e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1974e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1974e8:
    // 0x1974e8: 0x0  nop
    ctx->pc = 0x1974e8u;
    // NOP
label_1974ec:
    // 0x1974ec: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x1974ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_1974f0:
    // 0x1974f0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1974f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1974f4:
    // 0x1974f4: 0xc0f809  jalr        $a2
label_1974f8:
    if (ctx->pc == 0x1974F8u) {
        ctx->pc = 0x1974F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974F4u;
        // 0x1974f8: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1974FCu;
        goto label_1974fc;
    }
    ctx->pc = 0x1974F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1974FCu);
        ctx->pc = 0x1974F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974F4u;
        // 0x1974f8: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1974F4u, 0x1974FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1974FCu;
label_1974fc:
    // 0x1974fc: 0x10000104  b           . + 4 + (0x104 << 2)
label_197500:
    if (ctx->pc == 0x197500u) {
        ctx->pc = 0x197500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974FCu;
        // 0x197500: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197504u;
        goto label_197504;
    }
    ctx->pc = 0x1974FCu;
    {
        const bool branch_taken_0x1974fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974FCu;
        // 0x197500: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1974fc) {
            ctx->pc = 0x197910u;
            { ctx->pc = 0x197910; return; }
        }
    }
    ctx->pc = 0x197504u;
label_197504:
    // 0x197504: 0x0  nop
    ctx->pc = 0x197504u;
    // NOP
label_197508:
    // 0x197508: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x197508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_19750c:
    // 0x19750c: 0x27a500d4  addiu       $a1, $sp, 0xD4
    ctx->pc = 0x19750cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_197510:
    // 0x197510: 0x32550040  andi        $s5, $s2, 0x40
    ctx->pc = 0x197510u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
label_197514:
    // 0x197514: 0xc0659e8  jal         func_1967A0
label_197518:
    if (ctx->pc == 0x197518u) {
        ctx->pc = 0x197518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197514u;
        // 0x197518: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19751Cu;
        goto label_19751c;
    }
    ctx->pc = 0x197514u;
    SET_GPR_U32(ctx, 31, 0x19751Cu);
    ctx->pc = 0x197518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197514u;
    // 0x197518: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x19751Cu;
label_19751c:
    // 0x19751c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19751cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197520:
    // 0x197520: 0xc0659e8  jal         func_1967A0
label_197524:
    if (ctx->pc == 0x197524u) {
        ctx->pc = 0x197524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197520u;
        // 0x197524: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197528u;
        goto label_197528;
    }
    ctx->pc = 0x197520u;
    SET_GPR_U32(ctx, 31, 0x197528u);
    ctx->pc = 0x197524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197520u;
    // 0x197524: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x197528u;
label_197528:
    // 0x197528: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19752c:
    // 0x19752c: 0xc0659e8  jal         func_1967A0
label_197530:
    if (ctx->pc == 0x197530u) {
        ctx->pc = 0x197530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19752Cu;
        // 0x197530: 0x27a500cc  addiu       $a1, $sp, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197534u;
        goto label_197534;
    }
    ctx->pc = 0x19752Cu;
    SET_GPR_U32(ctx, 31, 0x197534u);
    ctx->pc = 0x197530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19752Cu;
    // 0x197530: 0x27a500cc  addiu       $a1, $sp, 0xCC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x197534u;
label_197534:
    // 0x197534: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x197534u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_197538:
    // 0x197538: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x197538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_19753c:
    // 0x19753c: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x19753cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_197540:
    // 0x197540: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x197540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_197544:
    // 0x197544: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x197544u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_197548:
    // 0x197548: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x197548u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_19754c:
    // 0x19754c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x19754cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_197550:
    // 0x197550: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x197550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_197554:
    // 0x197554: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x197554u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_197558:
    // 0x197558: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x197558u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_19755c:
    // 0x19755c: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
label_197560:
    if (ctx->pc == 0x197560u) {
        ctx->pc = 0x197560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19755Cu;
        // 0x197560: 0x641825  or          $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197564u;
        goto label_197564;
    }
    ctx->pc = 0x19755Cu;
    {
        const bool branch_taken_0x19755c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x197560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19755Cu;
        // 0x197560: 0x641825  or          $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19755c) {
            ctx->pc = 0x197580u;
            goto label_197580;
        }
    }
    ctx->pc = 0x197564u;
label_197564:
    // 0x197564: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x197564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_197568:
    // 0x197568: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x197568u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_19756c:
    // 0x19756c: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x19756cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_197570:
    // 0x197570: 0x78840020  lq          $a0, 0x20($a0)
    ctx->pc = 0x197570u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_197574:
    // 0x197574: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x197574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
label_197578:
    // 0x197578: 0x10000006  b           . + 4 + (0x6 << 2)
label_19757c:
    if (ctx->pc == 0x19757Cu) {
        ctx->pc = 0x19757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197578u;
        // 0x19757c: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197580u;
        goto label_197580;
    }
    ctx->pc = 0x197578u;
    {
        const bool branch_taken_0x197578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197578u;
        // 0x19757c: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197578) {
            ctx->pc = 0x197594u;
            goto label_197594;
        }
    }
    ctx->pc = 0x197580u;
label_197580:
    // 0x197580: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x197580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_197584:
    // 0x197584: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x197584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_197588:
    // 0x197588: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x197588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_19758c:
    // 0x19758c: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x19758cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_197590:
    // 0x197590: 0x0  nop
    ctx->pc = 0x197590u;
    // NOP
label_197594:
    // 0x197594: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_197598:
    if (ctx->pc == 0x197598u) {
        ctx->pc = 0x19759Cu;
        goto label_19759c;
    }
    ctx->pc = 0x197594u;
    {
        const bool branch_taken_0x197594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x197594) {
            ctx->pc = 0x1975E4u;
            goto label_1975e4;
        }
    }
    ctx->pc = 0x19759Cu;
label_19759c:
    // 0x19759c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1975a0:
    if (ctx->pc == 0x1975A0u) {
        ctx->pc = 0x1975A4u;
        goto label_1975a4;
    }
    ctx->pc = 0x19759Cu;
    {
        const bool branch_taken_0x19759c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19759c) {
            ctx->pc = 0x1975C0u;
            goto label_1975c0;
        }
    }
    ctx->pc = 0x1975A4u;
label_1975a4:
    // 0x1975a4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1975a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1975a8:
    // 0x1975a8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1975a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1975ac:
    // 0x1975ac: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1975acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1975b0:
    // 0x1975b0: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x1975b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_1975b4:
    // 0x1975b4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1975b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_1975b8:
    // 0x1975b8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1975bc:
    if (ctx->pc == 0x1975BCu) {
        ctx->pc = 0x1975BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975B8u;
        // 0x1975bc: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1975C0u;
        goto label_1975c0;
    }
    ctx->pc = 0x1975B8u;
    {
        const bool branch_taken_0x1975b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1975BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975B8u;
        // 0x1975bc: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1975b8) {
            ctx->pc = 0x1975D4u;
            goto label_1975d4;
        }
    }
    ctx->pc = 0x1975C0u;
label_1975c0:
    // 0x1975c0: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x1975c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_1975c4:
    // 0x1975c4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1975c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1975c8:
    // 0x1975c8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1975c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1975cc:
    // 0x1975cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1975ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1975d0:
    // 0x1975d0: 0x0  nop
    ctx->pc = 0x1975d0u;
    // NOP
label_1975d4:
    // 0x1975d4: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x1975d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_1975d8:
    // 0x1975d8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1975d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1975dc:
    // 0x1975dc: 0x60f809  jalr        $v1
label_1975e0:
    if (ctx->pc == 0x1975E0u) {
        ctx->pc = 0x1975E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975DCu;
        // 0x1975e0: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1975E4u;
        goto label_1975e4;
    }
    ctx->pc = 0x1975DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1975E4u);
        ctx->pc = 0x1975E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975DCu;
        // 0x1975e0: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1975DCu, 0x1975E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1975E4u;
label_1975e4:
    // 0x1975e4: 0x0  nop
    ctx->pc = 0x1975e4u;
    // NOP
label_1975e8:
    // 0x1975e8: 0x100000c9  b           . + 4 + (0xC9 << 2)
label_1975ec:
    if (ctx->pc == 0x1975ECu) {
        ctx->pc = 0x1975ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975E8u;
        // 0x1975ec: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1975F0u;
        goto label_1975f0;
    }
    ctx->pc = 0x1975E8u;
    {
        const bool branch_taken_0x1975e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1975ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975E8u;
        // 0x1975ec: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1975e8) {
            ctx->pc = 0x197910u;
            { ctx->pc = 0x197910; return; }
        }
    }
    ctx->pc = 0x1975F0u;
label_1975f0:
    // 0x1975f0: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1975f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1975f4:
    // 0x1975f4: 0x27a500e4  addiu       $a1, $sp, 0xE4
    ctx->pc = 0x1975f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_1975f8:
    // 0x1975f8: 0xc0659e8  jal         func_1967A0
label_1975fc:
    if (ctx->pc == 0x1975FCu) {
        ctx->pc = 0x1975FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975F8u;
        // 0x1975fc: 0x32510020  andi        $s1, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x197600u;
        goto label_197600;
    }
    ctx->pc = 0x1975F8u;
    SET_GPR_U32(ctx, 31, 0x197600u);
    ctx->pc = 0x1975FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1975F8u;
    // 0x1975fc: 0x32510020  andi        $s1, $s2, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x197600u;
label_197600:
    // 0x197600: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197604:
    // 0x197604: 0xc0659e8  jal         func_1967A0
label_197608:
    if (ctx->pc == 0x197608u) {
        ctx->pc = 0x197608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197604u;
        // 0x197608: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19760Cu;
        goto label_19760c;
    }
    ctx->pc = 0x197604u;
    SET_GPR_U32(ctx, 31, 0x19760Cu);
    ctx->pc = 0x197608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197604u;
    // 0x197608: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x19760Cu;
label_19760c:
    // 0x19760c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19760cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197610:
    // 0x197610: 0xc0659c0  jal         func_196700
label_197614:
    if (ctx->pc == 0x197614u) {
        ctx->pc = 0x197614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197610u;
        // 0x197614: 0x27a500dc  addiu       $a1, $sp, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197618u;
        goto label_197618;
    }
    ctx->pc = 0x197610u;
    SET_GPR_U32(ctx, 31, 0x197618u);
    ctx->pc = 0x197614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197610u;
    // 0x197614: 0x27a500dc  addiu       $a1, $sp, 0xDC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    { ctx->pc = 0x196700; return; }
    ctx->pc = 0x197618u;
label_197618:
    // 0x197618: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19761c:
    // 0x19761c: 0xc0659c0  jal         func_196700
label_197620:
    if (ctx->pc == 0x197620u) {
        ctx->pc = 0x197620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19761Cu;
        // 0x197620: 0x27a500d8  addiu       $a1, $sp, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197624u;
        goto label_197624;
    }
    ctx->pc = 0x19761Cu;
    SET_GPR_U32(ctx, 31, 0x197624u);
    ctx->pc = 0x197620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19761Cu;
    // 0x197620: 0x27a500d8  addiu       $a1, $sp, 0xD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    { ctx->pc = 0x196700; return; }
    ctx->pc = 0x197624u;
label_197624:
    // 0x197624: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x197624u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_197628:
    // 0x197628: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x197628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_19762c:
    // 0x19762c: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x19762cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_197630:
    // 0x197630: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x197630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_197634:
    // 0x197634: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x197634u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_197638:
    // 0x197638: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x197638u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_19763c:
    // 0x19763c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x19763cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_197640:
    // 0x197640: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x197640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_197644:
    // 0x197644: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x197644u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_197648:
    // 0x197648: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x197648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_19764c:
    // 0x19764c: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_197650:
    if (ctx->pc == 0x197650u) {
        ctx->pc = 0x197650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19764Cu;
        // 0x197650: 0x64b025  or          $s6, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197654u;
        goto label_197654;
    }
    ctx->pc = 0x19764Cu;
    {
        const bool branch_taken_0x19764c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x197650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19764Cu;
        // 0x197650: 0x64b025  or          $s6, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19764c) {
            ctx->pc = 0x197678u;
            goto label_197678;
        }
    }
    ctx->pc = 0x197654u;
label_197654:
    // 0x197654: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x197654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_197658:
    // 0x197658: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x197658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_19765c:
    // 0x19765c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x19765cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_197660:
    // 0x197660: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x197660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_197664:
    // 0x197664: 0x78840020  lq          $a0, 0x20($a0)
    ctx->pc = 0x197664u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_197668:
    // 0x197668: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x197668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_19766c:
    // 0x19766c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x19766cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_197670:
    // 0x197670: 0x10000007  b           . + 4 + (0x7 << 2)
label_197674:
    if (ctx->pc == 0x197674u) {
        ctx->pc = 0x197674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197670u;
        // 0x197674: 0x83a821  addu        $s5, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197678u;
        goto label_197678;
    }
    ctx->pc = 0x197670u;
    {
        const bool branch_taken_0x197670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197670u;
        // 0x197674: 0x83a821  addu        $s5, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197670) {
            ctx->pc = 0x197690u;
            goto label_197690;
        }
    }
    ctx->pc = 0x197678u;
label_197678:
    // 0x197678: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x197678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_19767c:
    // 0x19767c: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x19767cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_197680:
    // 0x197680: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x197680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_197684:
    // 0x197684: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x197684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_197688:
    // 0x197688: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x197688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19768c:
    // 0x19768c: 0x83a821  addu        $s5, $a0, $v1
    ctx->pc = 0x19768cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_197690:
    // 0x197690: 0x8fb100dc  lw          $s1, 0xDC($sp)
    ctx->pc = 0x197690u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_197694:
    // 0x197694: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x197694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_197698:
    // 0x197698: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x197698u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_19769c:
    // 0x19769c: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_1976a0:
    if (ctx->pc == 0x1976A0u) {
        ctx->pc = 0x1976A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19769Cu;
        // 0x1976a0: 0x2a3a821  addu        $s5, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1976A4u;
        goto label_1976a4;
    }
    ctx->pc = 0x19769Cu;
    {
        const bool branch_taken_0x19769c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1976A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19769Cu;
        // 0x1976a0: 0x2a3a821  addu        $s5, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19769c) {
            ctx->pc = 0x1976C8u;
            goto label_1976c8;
        }
    }
    ctx->pc = 0x1976A4u;
label_1976a4:
    // 0x1976a4: 0x0  nop
    ctx->pc = 0x1976a4u;
    // NOP
label_1976a8:
    // 0x1976a8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1976a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1976ac:
    // 0x1976ac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1976acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1976b0:
    // 0x1976b0: 0x2a2a823  subu        $s5, $s5, $v0
    ctx->pc = 0x1976b0u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1976b4:
    // 0x1976b4: 0x2c0f809  jalr        $s6
label_1976b8:
    if (ctx->pc == 0x1976B8u) {
        ctx->pc = 0x1976B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1976B4u;
        // 0x1976b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1976BCu;
        goto label_1976bc;
    }
    ctx->pc = 0x1976B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x1976BCu);
        ctx->pc = 0x1976B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1976B4u;
        // 0x1976b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1976B4u, 0x1976BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1976BCu;
label_1976bc:
    // 0x1976bc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1976bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1976c0:
    // 0x1976c0: 0x1620fff8  bnez        $s1, . + 4 + (-0x8 << 2)
label_1976c4:
    if (ctx->pc == 0x1976C4u) {
        ctx->pc = 0x1976C8u;
        goto label_1976c8;
    }
    ctx->pc = 0x1976C0u;
    {
        const bool branch_taken_0x1976c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1976c0) {
            ctx->pc = 0x1976A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1976a4;
        }
    }
    ctx->pc = 0x1976C8u;
label_1976c8:
    // 0x1976c8: 0x10000091  b           . + 4 + (0x91 << 2)
label_1976cc:
    if (ctx->pc == 0x1976CCu) {
        ctx->pc = 0x1976CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1976C8u;
        // 0x1976cc: 0xae700008  sw          $s0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1976D0u;
        goto label_1976d0;
    }
    ctx->pc = 0x1976C8u;
    {
        const bool branch_taken_0x1976c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1976CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1976C8u;
        // 0x1976cc: 0xae700008  sw          $s0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1976c8) {
            ctx->pc = 0x197910u;
            { ctx->pc = 0x197910; return; }
        }
    }
    ctx->pc = 0x1976D0u;
label_1976d0:
    // 0x1976d0: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1976d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1976d4:
    // 0x1976d4: 0x27a500e8  addiu       $a1, $sp, 0xE8
    ctx->pc = 0x1976d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_1976d8:
    // 0x1976d8: 0xc0659e8  jal         func_1967A0
label_1976dc:
    if (ctx->pc == 0x1976DCu) {
        ctx->pc = 0x1976DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1976D8u;
        // 0x1976dc: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1976E0u;
        goto label_1976e0;
    }
    ctx->pc = 0x1976D8u;
    SET_GPR_U32(ctx, 31, 0x1976E0u);
    ctx->pc = 0x1976DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1976D8u;
    // 0x1976dc: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x1976E0u;
label_1976e0:
    // 0x1976e0: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x1976e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1976e4:
    // 0x1976e4: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x1976e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1976e8:
    // 0x1976e8: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x1976e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1976ec:
    // 0x1976ec: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1976ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1976f0:
    // 0x1976f0: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1976f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1976f4:
    // 0x1976f4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1976f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1976f8:
    // 0x1976f8: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1976f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1976fc:
    // 0x1976fc: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1976fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_197700:
    // 0x197700: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x197700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_197704:
    // 0x197704: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x197704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_197708:
    // 0x197708: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_19770c:
    if (ctx->pc == 0x19770Cu) {
        ctx->pc = 0x19770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197708u;
        // 0x19770c: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197710u;
        goto label_197710;
    }
    ctx->pc = 0x197708u;
    {
        const bool branch_taken_0x197708 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197708u;
        // 0x19770c: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197708) {
            ctx->pc = 0x19772Cu;
            goto label_19772c;
        }
    }
    ctx->pc = 0x197710u;
label_197710:
    // 0x197710: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x197710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_197714:
    // 0x197714: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x197714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_197718:
    // 0x197718: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x197718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_19771c:
    // 0x19771c: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x19771cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_197720:
    // 0x197720: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x197720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_197724:
    // 0x197724: 0x10000006  b           . + 4 + (0x6 << 2)
label_197728:
    if (ctx->pc == 0x197728u) {
        ctx->pc = 0x197728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197724u;
        // 0x197728: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19772Cu;
        goto label_19772c;
    }
    ctx->pc = 0x197724u;
    {
        const bool branch_taken_0x197724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197724u;
        // 0x197728: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197724) {
            ctx->pc = 0x197740u;
            goto label_197740;
        }
    }
    ctx->pc = 0x19772Cu;
label_19772c:
    // 0x19772c: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x19772cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_197730:
    // 0x197730: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x197730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_197734:
    // 0x197734: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x197734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_197738:
    // 0x197738: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x197738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19773c:
    // 0x19773c: 0x0  nop
    ctx->pc = 0x19773cu;
    // NOP
label_197740:
    // 0x197740: 0xa0f809  jalr        $a1
label_197744:
    if (ctx->pc == 0x197744u) {
        ctx->pc = 0x197748u;
        goto label_197748;
    }
    ctx->pc = 0x197740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x197748u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197740u, 0x197748u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197748u;
label_197748:
    // 0x197748: 0x10000071  b           . + 4 + (0x71 << 2)
label_19774c:
    if (ctx->pc == 0x19774Cu) {
        ctx->pc = 0x19774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197748u;
        // 0x19774c: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197750u;
        goto label_197750;
    }
    ctx->pc = 0x197748u;
    {
        const bool branch_taken_0x197748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197748u;
        // 0x19774c: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197748) {
            ctx->pc = 0x197910u;
            { ctx->pc = 0x197910; return; }
        }
    }
    ctx->pc = 0x197750u;
label_197750:
    // 0x197750: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x197750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_197754:
    // 0x197754: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x197754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_197758:
    // 0x197758: 0x32550040  andi        $s5, $s2, 0x40
    ctx->pc = 0x197758u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
label_19775c:
    // 0x19775c: 0xc0659e8  jal         func_1967A0
label_197760:
    if (ctx->pc == 0x197760u) {
        ctx->pc = 0x197760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19775Cu;
        // 0x197760: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x197764u;
        goto label_197764;
    }
    ctx->pc = 0x19775Cu;
    SET_GPR_U32(ctx, 31, 0x197764u);
    ctx->pc = 0x197760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19775Cu;
    // 0x197760: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x197764u;
label_197764:
    // 0x197764: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197768:
    // 0x197768: 0xc0659e8  jal         func_1967A0
label_19776c:
    if (ctx->pc == 0x19776Cu) {
        ctx->pc = 0x19776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197768u;
        // 0x19776c: 0x27a500ec  addiu       $a1, $sp, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197770u;
        goto label_197770;
    }
    ctx->pc = 0x197768u;
    SET_GPR_U32(ctx, 31, 0x197770u);
    ctx->pc = 0x19776Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197768u;
    // 0x19776c: 0x27a500ec  addiu       $a1, $sp, 0xEC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x197770u;
label_197770:
    // 0x197770: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x197770u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_197774:
    // 0x197774: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x197774u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_197778:
    // 0x197778: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x197778u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_19777c:
    // 0x19777c: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x19777cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_197780:
    // 0x197780: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x197780u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_197784:
    // 0x197784: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x197784u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_197788:
    // 0x197788: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x197788u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_19778c:
    // 0x19778c: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x19778cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_197790:
    // 0x197790: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x197790u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_197794:
    // 0x197794: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x197794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_197798:
    // 0x197798: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
label_19779c:
    if (ctx->pc == 0x19779Cu) {
        ctx->pc = 0x19779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197798u;
        // 0x19779c: 0x641825  or          $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1977A0u;
        goto label_1977a0;
    }
    ctx->pc = 0x197798u;
    {
        const bool branch_taken_0x197798 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x19779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197798u;
        // 0x19779c: 0x641825  or          $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197798) {
            ctx->pc = 0x1977BCu;
            { ctx->pc = 0x1977bc; return; }
        }
    }
    ctx->pc = 0x1977A0u;
label_1977a0:
    // 0x1977a0: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1977a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1977a4:
    // 0x1977a4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1977a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1977a8:
    // 0x1977a8: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x1977a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_1977ac:
    // 0x1977ac: 0x78840020  lq          $a0, 0x20($a0)
    ctx->pc = 0x1977acu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    ctx->pc = 0x1977b0u;
    return;
}
