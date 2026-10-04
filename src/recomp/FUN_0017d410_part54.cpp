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

// Function: FUN_0017d410
// Address: 0x17d410 - 0x27d534
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017d410_part54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x1977b0u: goto label_1977b0;
        case 0x1977b4u: goto label_1977b4;
        case 0x1977b8u: goto label_1977b8;
        case 0x1977bcu: goto label_1977bc;
        case 0x1977c0u: goto label_1977c0;
        case 0x1977c4u: goto label_1977c4;
        case 0x1977c8u: goto label_1977c8;
        case 0x1977ccu: goto label_1977cc;
        case 0x1977d0u: goto label_1977d0;
        case 0x1977d4u: goto label_1977d4;
        case 0x1977d8u: goto label_1977d8;
        case 0x1977dcu: goto label_1977dc;
        case 0x1977e0u: goto label_1977e0;
        case 0x1977e4u: goto label_1977e4;
        case 0x1977e8u: goto label_1977e8;
        case 0x1977ecu: goto label_1977ec;
        case 0x1977f0u: goto label_1977f0;
        case 0x1977f4u: goto label_1977f4;
        case 0x1977f8u: goto label_1977f8;
        case 0x1977fcu: goto label_1977fc;
        case 0x197800u: goto label_197800;
        case 0x197804u: goto label_197804;
        case 0x197808u: goto label_197808;
        case 0x19780cu: goto label_19780c;
        case 0x197810u: goto label_197810;
        case 0x197814u: goto label_197814;
        case 0x197818u: goto label_197818;
        case 0x19781cu: goto label_19781c;
        case 0x197820u: goto label_197820;
        case 0x197824u: goto label_197824;
        case 0x197828u: goto label_197828;
        case 0x19782cu: goto label_19782c;
        case 0x197830u: goto label_197830;
        case 0x197834u: goto label_197834;
        case 0x197838u: goto label_197838;
        case 0x19783cu: goto label_19783c;
        case 0x197840u: goto label_197840;
        case 0x197844u: goto label_197844;
        case 0x197848u: goto label_197848;
        case 0x19784cu: goto label_19784c;
        case 0x197850u: goto label_197850;
        case 0x197854u: goto label_197854;
        case 0x197858u: goto label_197858;
        case 0x19785cu: goto label_19785c;
        case 0x197860u: goto label_197860;
        case 0x197864u: goto label_197864;
        case 0x197868u: goto label_197868;
        case 0x19786cu: goto label_19786c;
        case 0x197870u: goto label_197870;
        case 0x197874u: goto label_197874;
        case 0x197878u: goto label_197878;
        case 0x19787cu: goto label_19787c;
        case 0x197880u: goto label_197880;
        case 0x197884u: goto label_197884;
        case 0x197888u: goto label_197888;
        case 0x19788cu: goto label_19788c;
        case 0x197890u: goto label_197890;
        case 0x197894u: goto label_197894;
        case 0x197898u: goto label_197898;
        case 0x19789cu: goto label_19789c;
        case 0x1978a0u: goto label_1978a0;
        case 0x1978a4u: goto label_1978a4;
        case 0x1978a8u: goto label_1978a8;
        case 0x1978acu: goto label_1978ac;
        case 0x1978b0u: goto label_1978b0;
        case 0x1978b4u: goto label_1978b4;
        case 0x1978b8u: goto label_1978b8;
        case 0x1978bcu: goto label_1978bc;
        case 0x1978c0u: goto label_1978c0;
        case 0x1978c4u: goto label_1978c4;
        case 0x1978c8u: goto label_1978c8;
        case 0x1978ccu: goto label_1978cc;
        case 0x1978d0u: goto label_1978d0;
        case 0x1978d4u: goto label_1978d4;
        case 0x1978d8u: goto label_1978d8;
        case 0x1978dcu: goto label_1978dc;
        case 0x1978e0u: goto label_1978e0;
        case 0x1978e4u: goto label_1978e4;
        case 0x1978e8u: goto label_1978e8;
        case 0x1978ecu: goto label_1978ec;
        case 0x1978f0u: goto label_1978f0;
        case 0x1978f4u: goto label_1978f4;
        case 0x1978f8u: goto label_1978f8;
        case 0x1978fcu: goto label_1978fc;
        case 0x197900u: goto label_197900;
        case 0x197904u: goto label_197904;
        case 0x197908u: goto label_197908;
        case 0x19790cu: goto label_19790c;
        case 0x197910u: goto label_197910;
        case 0x197914u: goto label_197914;
        case 0x197918u: goto label_197918;
        case 0x19791cu: goto label_19791c;
        case 0x197920u: goto label_197920;
        case 0x197924u: goto label_197924;
        case 0x197928u: goto label_197928;
        case 0x19792cu: goto label_19792c;
        case 0x197930u: goto label_197930;
        case 0x197934u: goto label_197934;
        case 0x197938u: goto label_197938;
        case 0x19793cu: goto label_19793c;
        case 0x197940u: goto label_197940;
        case 0x197944u: goto label_197944;
        case 0x197948u: goto label_197948;
        case 0x19794cu: goto label_19794c;
        case 0x197950u: goto label_197950;
        case 0x197954u: goto label_197954;
        case 0x197958u: goto label_197958;
        case 0x19795cu: goto label_19795c;
        case 0x197960u: goto label_197960;
        case 0x197964u: goto label_197964;
        case 0x197968u: goto label_197968;
        case 0x19796cu: goto label_19796c;
        case 0x197970u: goto label_197970;
        case 0x197974u: goto label_197974;
        case 0x197978u: goto label_197978;
        case 0x19797cu: goto label_19797c;
        case 0x197980u: goto label_197980;
        case 0x197984u: goto label_197984;
        case 0x197988u: goto label_197988;
        case 0x19798cu: goto label_19798c;
        case 0x197990u: goto label_197990;
        case 0x197994u: goto label_197994;
        case 0x197998u: goto label_197998;
        case 0x19799cu: goto label_19799c;
        case 0x1979a0u: goto label_1979a0;
        case 0x1979a4u: goto label_1979a4;
        case 0x1979a8u: goto label_1979a8;
        case 0x1979acu: goto label_1979ac;
        case 0x1979b0u: goto label_1979b0;
        case 0x1979b4u: goto label_1979b4;
        case 0x1979b8u: goto label_1979b8;
        case 0x1979bcu: goto label_1979bc;
        case 0x1979c0u: goto label_1979c0;
        case 0x1979c4u: goto label_1979c4;
        case 0x1979c8u: goto label_1979c8;
        case 0x1979ccu: goto label_1979cc;
        case 0x1979d0u: goto label_1979d0;
        case 0x1979d4u: goto label_1979d4;
        case 0x1979d8u: goto label_1979d8;
        case 0x1979dcu: goto label_1979dc;
        case 0x1979e0u: goto label_1979e0;
        case 0x1979e4u: goto label_1979e4;
        case 0x1979e8u: goto label_1979e8;
        case 0x1979ecu: goto label_1979ec;
        default: return;
    }

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
            goto label_197910;
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
            goto label_197910;
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
            goto label_197910;
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
            goto label_197910;
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
            goto label_197910;
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
            goto label_197910;
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
            goto label_197910;
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
            goto label_197910;
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
            goto label_1977bc;
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
label_1977b0:
    // 0x1977b0: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x1977b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
label_1977b4:
    // 0x1977b4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1977b8:
    if (ctx->pc == 0x1977B8u) {
        ctx->pc = 0x1977B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1977B4u;
        // 0x1977b8: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1977BCu;
        goto label_1977bc;
    }
    ctx->pc = 0x1977B4u;
    {
        const bool branch_taken_0x1977b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1977B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1977B4u;
        // 0x1977b8: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1977b4) {
            ctx->pc = 0x1977D0u;
            goto label_1977d0;
        }
    }
    ctx->pc = 0x1977BCu;
label_1977bc:
    // 0x1977bc: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x1977bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_1977c0:
    // 0x1977c0: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1977c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1977c4:
    // 0x1977c4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1977c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1977c8:
    // 0x1977c8: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x1977c8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1977cc:
    // 0x1977cc: 0x0  nop
    ctx->pc = 0x1977ccu;
    // NOP
label_1977d0:
    // 0x1977d0: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_1977d4:
    if (ctx->pc == 0x1977D4u) {
        ctx->pc = 0x1977D8u;
        goto label_1977d8;
    }
    ctx->pc = 0x1977D0u;
    {
        const bool branch_taken_0x1977d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1977d0) {
            ctx->pc = 0x197818u;
            goto label_197818;
        }
    }
    ctx->pc = 0x1977D8u;
label_1977d8:
    // 0x1977d8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1977dc:
    if (ctx->pc == 0x1977DCu) {
        ctx->pc = 0x1977E0u;
        goto label_1977e0;
    }
    ctx->pc = 0x1977D8u;
    {
        const bool branch_taken_0x1977d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1977d8) {
            ctx->pc = 0x1977FCu;
            goto label_1977fc;
        }
    }
    ctx->pc = 0x1977E0u;
label_1977e0:
    // 0x1977e0: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x1977e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_1977e4:
    // 0x1977e4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1977e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1977e8:
    // 0x1977e8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1977e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1977ec:
    // 0x1977ec: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x1977ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_1977f0:
    // 0x1977f0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1977f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_1977f4:
    // 0x1977f4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1977f8:
    if (ctx->pc == 0x1977F8u) {
        ctx->pc = 0x1977F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1977F4u;
        // 0x1977f8: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1977FCu;
        goto label_1977fc;
    }
    ctx->pc = 0x1977F4u;
    {
        const bool branch_taken_0x1977f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1977F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1977F4u;
        // 0x1977f8: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1977f4) {
            ctx->pc = 0x197810u;
            goto label_197810;
        }
    }
    ctx->pc = 0x1977FCu;
label_1977fc:
    // 0x1977fc: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x1977fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_197800:
    // 0x197800: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x197800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_197804:
    // 0x197804: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x197804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_197808:
    // 0x197808: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x197808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19780c:
    // 0x19780c: 0x0  nop
    ctx->pc = 0x19780cu;
    // NOP
label_197810:
    // 0x197810: 0x60f809  jalr        $v1
label_197814:
    if (ctx->pc == 0x197814u) {
        ctx->pc = 0x197818u;
        goto label_197818;
    }
    ctx->pc = 0x197810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x197818u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197810u, 0x197818u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197818u;
label_197818:
    // 0x197818: 0x1000003d  b           . + 4 + (0x3D << 2)
label_19781c:
    if (ctx->pc == 0x19781Cu) {
        ctx->pc = 0x19781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197818u;
        // 0x19781c: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197820u;
        goto label_197820;
    }
    ctx->pc = 0x197818u;
    {
        const bool branch_taken_0x197818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197818u;
        // 0x19781c: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197818) {
            ctx->pc = 0x197910u;
            goto label_197910;
        }
    }
    ctx->pc = 0x197820u;
label_197820:
    // 0x197820: 0x12e80040  beq         $s7, $t0, . + 4 + (0x40 << 2)
label_197824:
    if (ctx->pc == 0x197824u) {
        ctx->pc = 0x197828u;
        goto label_197828;
    }
    ctx->pc = 0x197820u;
    {
        const bool branch_taken_0x197820 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 8));
        if (branch_taken_0x197820) {
            ctx->pc = 0x197924u;
            goto label_197924;
        }
    }
    ctx->pc = 0x197828u;
label_197828:
    // 0x197828: 0x91070002  lbu         $a3, 0x2($t0)
    ctx->pc = 0x197828u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
label_19782c:
    // 0x19782c: 0x25040005  addiu       $a0, $t0, 0x5
    ctx->pc = 0x19782cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
label_197830:
    // 0x197830: 0x91030003  lbu         $v1, 0x3($t0)
    ctx->pc = 0x197830u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
label_197834:
    // 0x197834: 0x27a500f8  addiu       $a1, $sp, 0xF8
    ctx->pc = 0x197834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_197838:
    // 0x197838: 0x91020004  lbu         $v0, 0x4($t0)
    ctx->pc = 0x197838u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
label_19783c:
    // 0x19783c: 0x91060001  lbu         $a2, 0x1($t0)
    ctx->pc = 0x19783cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
label_197840:
    // 0x197840: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x197840u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_197844:
    // 0x197844: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x197844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_197848:
    // 0x197848: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x197848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_19784c:
    // 0x19784c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x19784cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_197850:
    // 0x197850: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x197850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_197854:
    // 0x197854: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x197854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_197858:
    // 0x197858: 0xc0659c0  jal         func_196700
label_19785c:
    if (ctx->pc == 0x19785Cu) {
        ctx->pc = 0x19785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197858u;
        // 0x19785c: 0xafa200fc  sw          $v0, 0xFC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197860u;
        goto label_197860;
    }
    ctx->pc = 0x197858u;
    SET_GPR_U32(ctx, 31, 0x197860u);
    ctx->pc = 0x19785Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197858u;
    // 0x19785c: 0xafa200fc  sw          $v0, 0xFC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    { ctx->pc = 0x196700; return; }
    ctx->pc = 0x197860u;
label_197860:
    // 0x197860: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197864:
    // 0x197864: 0xc0659e8  jal         func_1967A0
label_197868:
    if (ctx->pc == 0x197868u) {
        ctx->pc = 0x197868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197864u;
        // 0x197868: 0x27a500f4  addiu       $a1, $sp, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19786Cu;
        goto label_19786c;
    }
    ctx->pc = 0x197864u;
    SET_GPR_U32(ctx, 31, 0x19786Cu);
    ctx->pc = 0x197868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197864u;
    // 0x197868: 0x27a500f4  addiu       $a1, $sp, 0xF4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x19786Cu;
label_19786c:
    // 0x19786c: 0x10000028  b           . + 4 + (0x28 << 2)
label_197870:
    if (ctx->pc == 0x197870u) {
        ctx->pc = 0x197870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19786Cu;
        // 0x197870: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197874u;
        goto label_197874;
    }
    ctx->pc = 0x19786Cu;
    {
        const bool branch_taken_0x19786c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19786Cu;
        // 0x197870: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19786c) {
            ctx->pc = 0x197910u;
            goto label_197910;
        }
    }
    ctx->pc = 0x197874u;
label_197874:
    // 0x197874: 0x0  nop
    ctx->pc = 0x197874u;
    // NOP
label_197878:
    // 0x197878: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x197878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_19787c:
    // 0x19787c: 0xc0659e8  jal         func_1967A0
label_197880:
    if (ctx->pc == 0x197880u) {
        ctx->pc = 0x197880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19787Cu;
        // 0x197880: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197884u;
        goto label_197884;
    }
    ctx->pc = 0x19787Cu;
    SET_GPR_U32(ctx, 31, 0x197884u);
    ctx->pc = 0x197880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19787Cu;
    // 0x197880: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x197884u;
label_197884:
    // 0x197884: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x197884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_197888:
    // 0x197888: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x197888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_19788c:
    // 0x19788c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19788cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_197890:
    // 0x197890: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x197890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_197894:
    // 0x197894: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_197898:
    if (ctx->pc == 0x197898u) {
        ctx->pc = 0x197898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197894u;
        // 0x197898: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19789Cu;
        goto label_19789c;
    }
    ctx->pc = 0x197894u;
    {
        const bool branch_taken_0x197894 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x197898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197894u;
        // 0x197898: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197894) {
            ctx->pc = 0x1978C0u;
            goto label_1978c0;
        }
    }
    ctx->pc = 0x19789Cu;
label_19789c:
    // 0x19789c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19789cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1978a0:
    // 0x1978a0: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1978a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1978a4:
    // 0x1978a4: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_1978a8:
    if (ctx->pc == 0x1978A8u) {
        ctx->pc = 0x1978ACu;
        goto label_1978ac;
    }
    ctx->pc = 0x1978A4u;
    {
        const bool branch_taken_0x1978a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1978a4) {
            ctx->pc = 0x1978B4u;
            goto label_1978b4;
        }
    }
    ctx->pc = 0x1978ACu;
label_1978ac:
    // 0x1978ac: 0x10000004  b           . + 4 + (0x4 << 2)
label_1978b0:
    if (ctx->pc == 0x1978B0u) {
        ctx->pc = 0x1978B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1978ACu;
        // 0x1978b0: 0xae860008  sw          $a2, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1978B4u;
        goto label_1978b4;
    }
    ctx->pc = 0x1978ACu;
    {
        const bool branch_taken_0x1978ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1978B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1978ACu;
        // 0x1978b0: 0xae860008  sw          $a2, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1978ac) {
            ctx->pc = 0x1978C0u;
            goto label_1978c0;
        }
    }
    ctx->pc = 0x1978B4u;
label_1978b4:
    // 0x1978b4: 0x0  nop
    ctx->pc = 0x1978b4u;
    // NOP
label_1978b8:
    // 0x1978b8: 0xc0f809  jalr        $a2
label_1978bc:
    if (ctx->pc == 0x1978BCu) {
        ctx->pc = 0x1978BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1978B8u;
        // 0x1978bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1978C0u;
        goto label_1978c0;
    }
    ctx->pc = 0x1978B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1978C0u);
        ctx->pc = 0x1978BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1978B8u;
        // 0x1978bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1978B8u, 0x1978C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1978C0u;
label_1978c0:
    // 0x1978c0: 0x10000013  b           . + 4 + (0x13 << 2)
label_1978c4:
    if (ctx->pc == 0x1978C4u) {
        ctx->pc = 0x1978C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1978C0u;
        // 0x1978c4: 0xae700008  sw          $s0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1978C8u;
        goto label_1978c8;
    }
    ctx->pc = 0x1978C0u;
    {
        const bool branch_taken_0x1978c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1978C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1978C0u;
        // 0x1978c4: 0xae700008  sw          $s0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1978c0) {
            ctx->pc = 0x197910u;
            goto label_197910;
        }
    }
    ctx->pc = 0x1978C8u;
label_1978c8:
    // 0x1978c8: 0x12e80016  beq         $s7, $t0, . + 4 + (0x16 << 2)
label_1978cc:
    if (ctx->pc == 0x1978CCu) {
        ctx->pc = 0x1978CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1978C8u;
        // 0x1978cc: 0x25040001  addiu       $a0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1978D0u;
        goto label_1978d0;
    }
    ctx->pc = 0x1978C8u;
    {
        const bool branch_taken_0x1978c8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 8));
        ctx->pc = 0x1978CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1978C8u;
        // 0x1978cc: 0x25040001  addiu       $a0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1978c8) {
            ctx->pc = 0x197924u;
            goto label_197924;
        }
    }
    ctx->pc = 0x1978D0u;
label_1978d0:
    // 0x1978d0: 0xc0659c0  jal         func_196700
label_1978d4:
    if (ctx->pc == 0x1978D4u) {
        ctx->pc = 0x1978D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1978D0u;
        // 0x1978d4: 0x27a5010c  addiu       $a1, $sp, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1978D8u;
        goto label_1978d8;
    }
    ctx->pc = 0x1978D0u;
    SET_GPR_U32(ctx, 31, 0x1978D8u);
    ctx->pc = 0x1978D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1978D0u;
    // 0x1978d4: 0x27a5010c  addiu       $a1, $sp, 0x10C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    { ctx->pc = 0x196700; return; }
    ctx->pc = 0x1978D8u;
label_1978d8:
    // 0x1978d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1978d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1978dc:
    // 0x1978dc: 0xc0659c0  jal         func_196700
label_1978e0:
    if (ctx->pc == 0x1978E0u) {
        ctx->pc = 0x1978E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1978DCu;
        // 0x1978e0: 0x27a50108  addiu       $a1, $sp, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1978E4u;
        goto label_1978e4;
    }
    ctx->pc = 0x1978DCu;
    SET_GPR_U32(ctx, 31, 0x1978E4u);
    ctx->pc = 0x1978E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1978DCu;
    // 0x1978e0: 0x27a50108  addiu       $a1, $sp, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    { ctx->pc = 0x196700; return; }
    ctx->pc = 0x1978E4u;
label_1978e4:
    // 0x1978e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1978e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1978e8:
    // 0x1978e8: 0xc0659e8  jal         func_1967A0
label_1978ec:
    if (ctx->pc == 0x1978ECu) {
        ctx->pc = 0x1978ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1978E8u;
        // 0x1978ec: 0x27a50104  addiu       $a1, $sp, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1978F0u;
        goto label_1978f0;
    }
    ctx->pc = 0x1978E8u;
    SET_GPR_U32(ctx, 31, 0x1978F0u);
    ctx->pc = 0x1978ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1978E8u;
    // 0x1978ec: 0x27a50104  addiu       $a1, $sp, 0x104 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    { ctx->pc = 0x1967a0; return; }
    ctx->pc = 0x1978F0u;
label_1978f0:
    // 0x1978f0: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x1978f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_1978f4:
    // 0x1978f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1978f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1978f8:
    // 0x1978f8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1978f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1978fc:
    // 0x1978fc: 0x10000004  b           . + 4 + (0x4 << 2)
label_197900:
    if (ctx->pc == 0x197900u) {
        ctx->pc = 0x197900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1978FCu;
        // 0x197900: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197904u;
        goto label_197904;
    }
    ctx->pc = 0x1978FCu;
    {
        const bool branch_taken_0x1978fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1978FCu;
        // 0x197900: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1978fc) {
            ctx->pc = 0x197910u;
            goto label_197910;
        }
    }
    ctx->pc = 0x197904u;
label_197904:
    // 0x197904: 0x0  nop
    ctx->pc = 0x197904u;
    // NOP
label_197908:
    // 0x197908: 0xc065988  jal         func_196620
label_19790c:
    if (ctx->pc == 0x19790Cu) {
        ctx->pc = 0x197910u;
        goto label_197910;
    }
    ctx->pc = 0x197908u;
    SET_GPR_U32(ctx, 31, 0x197910u);
    ctx->pc = 0x196620u;
    { ctx->pc = 0x196620; return; }
    ctx->pc = 0x197910u;
label_197910:
    // 0x197910: 0x32430080  andi        $v1, $s2, 0x80
    ctx->pc = 0x197910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)128);
label_197914:
    // 0x197914: 0x1060fe03  beqz        $v1, . + 4 + (-0x1FD << 2)
label_197918:
    if (ctx->pc == 0x197918u) {
        ctx->pc = 0x19791Cu;
        goto label_19791c;
    }
    ctx->pc = 0x197914u;
    {
        const bool branch_taken_0x197914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x197914) {
            ctx->pc = 0x197124u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x197124; return; }
        }
    }
    ctx->pc = 0x19791Cu;
label_19791c:
    // 0x19791c: 0x1000fe01  b           . + 4 + (-0x1FF << 2)
label_197920:
    if (ctx->pc == 0x197920u) {
        ctx->pc = 0x197920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19791Cu;
        // 0x197920: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197924u;
        goto label_197924;
    }
    ctx->pc = 0x19791Cu;
    {
        const bool branch_taken_0x19791c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19791Cu;
        // 0x197920: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19791c) {
            ctx->pc = 0x197124u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x197124; return; }
        }
    }
    ctx->pc = 0x197924u;
label_197924:
    // 0x197924: 0x0  nop
    ctx->pc = 0x197924u;
    // NOP
label_197928:
    // 0x197928: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x197928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_19792c:
    // 0x19792c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x19792cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_197930:
    // 0x197930: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x197930u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_197934:
    // 0x197934: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x197934u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_197938:
    // 0x197938: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x197938u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19793c:
    // 0x19793c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19793cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_197940:
    // 0x197940: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x197940u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_197944:
    // 0x197944: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x197944u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_197948:
    // 0x197948: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x197948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19794c:
    // 0x19794c: 0x3e00008  jr          $ra
label_197950:
    if (ctx->pc == 0x197950u) {
        ctx->pc = 0x197950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19794Cu;
        // 0x197950: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197954u;
        goto label_197954;
    }
    ctx->pc = 0x19794Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19794Cu;
        // 0x197950: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19794Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197954u;
label_197954:
    // 0x197954: 0x0  nop
    ctx->pc = 0x197954u;
    // NOP
label_197958:
    // 0x197958: 0x0  nop
    ctx->pc = 0x197958u;
    // NOP
label_19795c:
    // 0x19795c: 0x0  nop
    ctx->pc = 0x19795cu;
    // NOP
label_197960:
    // 0x197960: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x197960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_197964:
    // 0x197964: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x197964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_197968:
    // 0x197968: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x197968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_19796c:
    // 0x19796c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19796cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_197970:
    // 0x197970: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x197970u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_197974:
    // 0x197974: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x197974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_197978:
    // 0x197978: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x197978u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_19797c:
    // 0x19797c: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
label_197980:
    if (ctx->pc == 0x197980u) {
        ctx->pc = 0x197984u;
        goto label_197984;
    }
    ctx->pc = 0x19797Cu;
    {
        const bool branch_taken_0x19797c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x19797c) {
            ctx->pc = 0x197994u;
            goto label_197994;
        }
    }
    ctx->pc = 0x197984u;
label_197984:
    // 0x197984: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x197984u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_197988:
    // 0x197988: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x197988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_19798c:
    // 0x19798c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_197990:
    if (ctx->pc == 0x197990u) {
        ctx->pc = 0x197990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19798Cu;
        // 0x197990: 0x3062001f  andi        $v0, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        ctx->pc = 0x197994u;
        goto label_197994;
    }
    ctx->pc = 0x19798Cu;
    {
        const bool branch_taken_0x19798c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19798Cu;
        // 0x197990: 0x3062001f  andi        $v0, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19798c) {
            ctx->pc = 0x1979E8u;
            goto label_1979e8;
        }
    }
    ctx->pc = 0x197994u;
label_197994:
    // 0x197994: 0x0  nop
    ctx->pc = 0x197994u;
    // NOP
label_197998:
    // 0x197998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19799c:
    // 0x19799c: 0xc066018  jal         func_198060
label_1979a0:
    if (ctx->pc == 0x1979A0u) {
        ctx->pc = 0x1979A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19799Cu;
        // 0x1979a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1979A4u;
        goto label_1979a4;
    }
    ctx->pc = 0x19799Cu;
    SET_GPR_U32(ctx, 31, 0x1979A4u);
    ctx->pc = 0x1979A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19799Cu;
    // 0x1979a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198060u;
    { ctx->pc = 0x198060; return; }
    ctx->pc = 0x1979A4u;
label_1979a4:
    // 0x1979a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1979a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1979a8:
    // 0x1979a8: 0xc065f20  jal         func_197C80
label_1979ac:
    if (ctx->pc == 0x1979ACu) {
        ctx->pc = 0x1979ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1979A8u;
        // 0x1979ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1979B0u;
        goto label_1979b0;
    }
    ctx->pc = 0x1979A8u;
    SET_GPR_U32(ctx, 31, 0x1979B0u);
    ctx->pc = 0x1979ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1979A8u;
    // 0x1979ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197C80u;
    { ctx->pc = 0x197c80; return; }
    ctx->pc = 0x1979B0u;
label_1979b0:
    // 0x1979b0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1979b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1979b4:
    // 0x1979b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1979b8:
    if (ctx->pc == 0x1979B8u) {
        ctx->pc = 0x1979BCu;
        goto label_1979bc;
    }
    ctx->pc = 0x1979B4u;
    {
        const bool branch_taken_0x1979b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1979b4) {
            ctx->pc = 0x1979C4u;
            goto label_1979c4;
        }
    }
    ctx->pc = 0x1979BCu;
label_1979bc:
    // 0x1979bc: 0xc065988  jal         func_196620
label_1979c0:
    if (ctx->pc == 0x1979C0u) {
        ctx->pc = 0x1979C4u;
        goto label_1979c4;
    }
    ctx->pc = 0x1979BCu;
    SET_GPR_U32(ctx, 31, 0x1979C4u);
    ctx->pc = 0x196620u;
    { ctx->pc = 0x196620; return; }
    ctx->pc = 0x1979C4u;
label_1979c4:
    // 0x1979c4: 0x0  nop
    ctx->pc = 0x1979c4u;
    // NOP
label_1979c8:
    // 0x1979c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1979c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1979cc:
    // 0x1979cc: 0xc065fec  jal         func_197FB0
label_1979d0:
    if (ctx->pc == 0x1979D0u) {
        ctx->pc = 0x1979D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1979CCu;
        // 0x1979d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1979D4u;
        goto label_1979d4;
    }
    ctx->pc = 0x1979CCu;
    SET_GPR_U32(ctx, 31, 0x1979D4u);
    ctx->pc = 0x1979D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1979CCu;
    // 0x1979d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197FB0u;
    { ctx->pc = 0x197fb0; return; }
    ctx->pc = 0x1979D4u;
label_1979d4:
    // 0x1979d4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1979d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1979d8:
    // 0x1979d8: 0x1040ffe7  beqz        $v0, . + 4 + (-0x19 << 2)
label_1979dc:
    if (ctx->pc == 0x1979DCu) {
        ctx->pc = 0x1979E0u;
        goto label_1979e0;
    }
    ctx->pc = 0x1979D8u;
    {
        const bool branch_taken_0x1979d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1979d8) {
            ctx->pc = 0x197978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197978;
        }
    }
    ctx->pc = 0x1979E0u;
label_1979e0:
    // 0x1979e0: 0x10000098  b           . + 4 + (0x98 << 2)
label_1979e4:
    if (ctx->pc == 0x1979E4u) {
        ctx->pc = 0x1979E8u;
        goto label_1979e8;
    }
    ctx->pc = 0x1979E0u;
    {
        const bool branch_taken_0x1979e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1979e0) {
            ctx->pc = 0x197C44u;
            { ctx->pc = 0x197c44; return; }
        }
    }
    ctx->pc = 0x1979E8u;
label_1979e8:
    // 0x1979e8: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x1979e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_1979ec:
    // 0x1979ec: 0x1020008a  beqz        $at, . + 4 + (0x8A << 2)
    ctx->pc = 0x1979f0u;
    return;
}
