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

// Function: FUN_00247410
// Address: 0x247410 - 0x2874a4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_00247410_part95(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x275270u: goto label_275270;
        case 0x275274u: goto label_275274;
        case 0x275278u: goto label_275278;
        case 0x27527cu: goto label_27527c;
        case 0x275280u: goto label_275280;
        case 0x275284u: goto label_275284;
        case 0x275288u: goto label_275288;
        case 0x27528cu: goto label_27528c;
        case 0x275290u: goto label_275290;
        case 0x275294u: goto label_275294;
        case 0x275298u: goto label_275298;
        case 0x27529cu: goto label_27529c;
        case 0x2752a0u: goto label_2752a0;
        case 0x2752a4u: goto label_2752a4;
        case 0x2752a8u: goto label_2752a8;
        case 0x2752acu: goto label_2752ac;
        case 0x2752b0u: goto label_2752b0;
        case 0x2752b4u: goto label_2752b4;
        case 0x2752b8u: goto label_2752b8;
        case 0x2752bcu: goto label_2752bc;
        case 0x2752c0u: goto label_2752c0;
        case 0x2752c4u: goto label_2752c4;
        case 0x2752c8u: goto label_2752c8;
        case 0x2752ccu: goto label_2752cc;
        case 0x2752d0u: goto label_2752d0;
        case 0x2752d4u: goto label_2752d4;
        case 0x2752d8u: goto label_2752d8;
        case 0x2752dcu: goto label_2752dc;
        case 0x2752e0u: goto label_2752e0;
        case 0x2752e4u: goto label_2752e4;
        case 0x2752e8u: goto label_2752e8;
        case 0x2752ecu: goto label_2752ec;
        case 0x2752f0u: goto label_2752f0;
        case 0x2752f4u: goto label_2752f4;
        case 0x2752f8u: goto label_2752f8;
        case 0x2752fcu: goto label_2752fc;
        case 0x275300u: goto label_275300;
        case 0x275304u: goto label_275304;
        case 0x275308u: goto label_275308;
        case 0x27530cu: goto label_27530c;
        case 0x275310u: goto label_275310;
        case 0x275314u: goto label_275314;
        case 0x275318u: goto label_275318;
        case 0x27531cu: goto label_27531c;
        case 0x275320u: goto label_275320;
        case 0x275324u: goto label_275324;
        case 0x275328u: goto label_275328;
        case 0x27532cu: goto label_27532c;
        case 0x275330u: goto label_275330;
        case 0x275334u: goto label_275334;
        case 0x275338u: goto label_275338;
        case 0x27533cu: goto label_27533c;
        case 0x275340u: goto label_275340;
        case 0x275344u: goto label_275344;
        case 0x275348u: goto label_275348;
        case 0x27534cu: goto label_27534c;
        case 0x275350u: goto label_275350;
        case 0x275354u: goto label_275354;
        case 0x275358u: goto label_275358;
        case 0x27535cu: goto label_27535c;
        case 0x275360u: goto label_275360;
        case 0x275364u: goto label_275364;
        case 0x275368u: goto label_275368;
        case 0x27536cu: goto label_27536c;
        case 0x275370u: goto label_275370;
        case 0x275374u: goto label_275374;
        case 0x275378u: goto label_275378;
        case 0x27537cu: goto label_27537c;
        case 0x275380u: goto label_275380;
        case 0x275384u: goto label_275384;
        case 0x275388u: goto label_275388;
        case 0x27538cu: goto label_27538c;
        case 0x275390u: goto label_275390;
        case 0x275394u: goto label_275394;
        case 0x275398u: goto label_275398;
        case 0x27539cu: goto label_27539c;
        case 0x2753a0u: goto label_2753a0;
        case 0x2753a4u: goto label_2753a4;
        case 0x2753a8u: goto label_2753a8;
        case 0x2753acu: goto label_2753ac;
        case 0x2753b0u: goto label_2753b0;
        case 0x2753b4u: goto label_2753b4;
        case 0x2753b8u: goto label_2753b8;
        case 0x2753bcu: goto label_2753bc;
        case 0x2753c0u: goto label_2753c0;
        case 0x2753c4u: goto label_2753c4;
        case 0x2753c8u: goto label_2753c8;
        case 0x2753ccu: goto label_2753cc;
        case 0x2753d0u: goto label_2753d0;
        case 0x2753d4u: goto label_2753d4;
        case 0x2753d8u: goto label_2753d8;
        case 0x2753dcu: goto label_2753dc;
        case 0x2753e0u: goto label_2753e0;
        case 0x2753e4u: goto label_2753e4;
        case 0x2753e8u: goto label_2753e8;
        case 0x2753ecu: goto label_2753ec;
        case 0x2753f0u: goto label_2753f0;
        case 0x2753f4u: goto label_2753f4;
        case 0x2753f8u: goto label_2753f8;
        case 0x2753fcu: goto label_2753fc;
        case 0x275400u: goto label_275400;
        case 0x275404u: goto label_275404;
        case 0x275408u: goto label_275408;
        case 0x27540cu: goto label_27540c;
        case 0x275410u: goto label_275410;
        case 0x275414u: goto label_275414;
        case 0x275418u: goto label_275418;
        case 0x27541cu: goto label_27541c;
        case 0x275420u: goto label_275420;
        case 0x275424u: goto label_275424;
        case 0x275428u: goto label_275428;
        case 0x27542cu: goto label_27542c;
        case 0x275430u: goto label_275430;
        case 0x275434u: goto label_275434;
        case 0x275438u: goto label_275438;
        case 0x27543cu: goto label_27543c;
        case 0x275440u: goto label_275440;
        case 0x275444u: goto label_275444;
        case 0x275448u: goto label_275448;
        case 0x27544cu: goto label_27544c;
        case 0x275450u: goto label_275450;
        case 0x275454u: goto label_275454;
        case 0x275458u: goto label_275458;
        case 0x27545cu: goto label_27545c;
        case 0x275460u: goto label_275460;
        case 0x275464u: goto label_275464;
        case 0x275468u: goto label_275468;
        case 0x27546cu: goto label_27546c;
        case 0x275470u: goto label_275470;
        case 0x275474u: goto label_275474;
        case 0x275478u: goto label_275478;
        case 0x27547cu: goto label_27547c;
        case 0x275480u: goto label_275480;
        case 0x275484u: goto label_275484;
        case 0x275488u: goto label_275488;
        case 0x27548cu: goto label_27548c;
        case 0x275490u: goto label_275490;
        case 0x275494u: goto label_275494;
        case 0x275498u: goto label_275498;
        case 0x27549cu: goto label_27549c;
        case 0x2754a0u: goto label_2754a0;
        case 0x2754a4u: goto label_2754a4;
        case 0x2754a8u: goto label_2754a8;
        case 0x2754acu: goto label_2754ac;
        case 0x2754b0u: goto label_2754b0;
        case 0x2754b4u: goto label_2754b4;
        case 0x2754b8u: goto label_2754b8;
        case 0x2754bcu: goto label_2754bc;
        case 0x2754c0u: goto label_2754c0;
        case 0x2754c4u: goto label_2754c4;
        case 0x2754c8u: goto label_2754c8;
        case 0x2754ccu: goto label_2754cc;
        case 0x2754d0u: goto label_2754d0;
        case 0x2754d4u: goto label_2754d4;
        case 0x2754d8u: goto label_2754d8;
        case 0x2754dcu: goto label_2754dc;
        case 0x2754e0u: goto label_2754e0;
        case 0x2754e4u: goto label_2754e4;
        case 0x2754e8u: goto label_2754e8;
        case 0x2754ecu: goto label_2754ec;
        case 0x2754f0u: goto label_2754f0;
        case 0x2754f4u: goto label_2754f4;
        case 0x2754f8u: goto label_2754f8;
        case 0x2754fcu: goto label_2754fc;
        case 0x275500u: goto label_275500;
        case 0x275504u: goto label_275504;
        case 0x275508u: goto label_275508;
        case 0x27550cu: goto label_27550c;
        case 0x275510u: goto label_275510;
        case 0x275514u: goto label_275514;
        case 0x275518u: goto label_275518;
        case 0x27551cu: goto label_27551c;
        case 0x275520u: goto label_275520;
        case 0x275524u: goto label_275524;
        case 0x275528u: goto label_275528;
        case 0x27552cu: goto label_27552c;
        case 0x275530u: goto label_275530;
        case 0x275534u: goto label_275534;
        case 0x275538u: goto label_275538;
        case 0x27553cu: goto label_27553c;
        case 0x275540u: goto label_275540;
        case 0x275544u: goto label_275544;
        case 0x275548u: goto label_275548;
        case 0x27554cu: goto label_27554c;
        case 0x275550u: goto label_275550;
        case 0x275554u: goto label_275554;
        case 0x275558u: goto label_275558;
        case 0x27555cu: goto label_27555c;
        case 0x275560u: goto label_275560;
        case 0x275564u: goto label_275564;
        case 0x275568u: goto label_275568;
        case 0x27556cu: goto label_27556c;
        case 0x275570u: goto label_275570;
        case 0x275574u: goto label_275574;
        case 0x275578u: goto label_275578;
        case 0x27557cu: goto label_27557c;
        case 0x275580u: goto label_275580;
        case 0x275584u: goto label_275584;
        case 0x275588u: goto label_275588;
        case 0x27558cu: goto label_27558c;
        case 0x275590u: goto label_275590;
        case 0x275594u: goto label_275594;
        case 0x275598u: goto label_275598;
        case 0x27559cu: goto label_27559c;
        case 0x2755a0u: goto label_2755a0;
        case 0x2755a4u: goto label_2755a4;
        case 0x2755a8u: goto label_2755a8;
        case 0x2755acu: goto label_2755ac;
        case 0x2755b0u: goto label_2755b0;
        case 0x2755b4u: goto label_2755b4;
        case 0x2755b8u: goto label_2755b8;
        case 0x2755bcu: goto label_2755bc;
        case 0x2755c0u: goto label_2755c0;
        case 0x2755c4u: goto label_2755c4;
        case 0x2755c8u: goto label_2755c8;
        case 0x2755ccu: goto label_2755cc;
        case 0x2755d0u: goto label_2755d0;
        case 0x2755d4u: goto label_2755d4;
        case 0x2755d8u: goto label_2755d8;
        case 0x2755dcu: goto label_2755dc;
        case 0x2755e0u: goto label_2755e0;
        case 0x2755e4u: goto label_2755e4;
        case 0x2755e8u: goto label_2755e8;
        case 0x2755ecu: goto label_2755ec;
        case 0x2755f0u: goto label_2755f0;
        case 0x2755f4u: goto label_2755f4;
        case 0x2755f8u: goto label_2755f8;
        case 0x2755fcu: goto label_2755fc;
        case 0x275600u: goto label_275600;
        case 0x275604u: goto label_275604;
        case 0x275608u: goto label_275608;
        case 0x27560cu: goto label_27560c;
        case 0x275610u: goto label_275610;
        case 0x275614u: goto label_275614;
        case 0x275618u: goto label_275618;
        case 0x27561cu: goto label_27561c;
        case 0x275620u: goto label_275620;
        case 0x275624u: goto label_275624;
        case 0x275628u: goto label_275628;
        case 0x27562cu: goto label_27562c;
        case 0x275630u: goto label_275630;
        case 0x275634u: goto label_275634;
        case 0x275638u: goto label_275638;
        case 0x27563cu: goto label_27563c;
        case 0x275640u: goto label_275640;
        case 0x275644u: goto label_275644;
        case 0x275648u: goto label_275648;
        case 0x27564cu: goto label_27564c;
        case 0x275650u: goto label_275650;
        case 0x275654u: goto label_275654;
        case 0x275658u: goto label_275658;
        case 0x27565cu: goto label_27565c;
        case 0x275660u: goto label_275660;
        case 0x275664u: goto label_275664;
        case 0x275668u: goto label_275668;
        case 0x27566cu: goto label_27566c;
        case 0x275670u: goto label_275670;
        case 0x275674u: goto label_275674;
        case 0x275678u: goto label_275678;
        case 0x27567cu: goto label_27567c;
        case 0x275680u: goto label_275680;
        case 0x275684u: goto label_275684;
        case 0x275688u: goto label_275688;
        case 0x27568cu: goto label_27568c;
        case 0x275690u: goto label_275690;
        case 0x275694u: goto label_275694;
        case 0x275698u: goto label_275698;
        case 0x27569cu: goto label_27569c;
        case 0x2756a0u: goto label_2756a0;
        case 0x2756a4u: goto label_2756a4;
        case 0x2756a8u: goto label_2756a8;
        case 0x2756acu: goto label_2756ac;
        case 0x2756b0u: goto label_2756b0;
        case 0x2756b4u: goto label_2756b4;
        case 0x2756b8u: goto label_2756b8;
        case 0x2756bcu: goto label_2756bc;
        case 0x2756c0u: goto label_2756c0;
        case 0x2756c4u: goto label_2756c4;
        case 0x2756c8u: goto label_2756c8;
        case 0x2756ccu: goto label_2756cc;
        case 0x2756d0u: goto label_2756d0;
        case 0x2756d4u: goto label_2756d4;
        case 0x2756d8u: goto label_2756d8;
        case 0x2756dcu: goto label_2756dc;
        case 0x2756e0u: goto label_2756e0;
        case 0x2756e4u: goto label_2756e4;
        case 0x2756e8u: goto label_2756e8;
        case 0x2756ecu: goto label_2756ec;
        case 0x2756f0u: goto label_2756f0;
        case 0x2756f4u: goto label_2756f4;
        case 0x2756f8u: goto label_2756f8;
        case 0x2756fcu: goto label_2756fc;
        case 0x275700u: goto label_275700;
        case 0x275704u: goto label_275704;
        case 0x275708u: goto label_275708;
        case 0x27570cu: goto label_27570c;
        case 0x275710u: goto label_275710;
        case 0x275714u: goto label_275714;
        case 0x275718u: goto label_275718;
        case 0x27571cu: goto label_27571c;
        case 0x275720u: goto label_275720;
        case 0x275724u: goto label_275724;
        case 0x275728u: goto label_275728;
        case 0x27572cu: goto label_27572c;
        case 0x275730u: goto label_275730;
        case 0x275734u: goto label_275734;
        case 0x275738u: goto label_275738;
        case 0x27573cu: goto label_27573c;
        case 0x275740u: goto label_275740;
        case 0x275744u: goto label_275744;
        case 0x275748u: goto label_275748;
        case 0x27574cu: goto label_27574c;
        case 0x275750u: goto label_275750;
        case 0x275754u: goto label_275754;
        case 0x275758u: goto label_275758;
        case 0x27575cu: goto label_27575c;
        case 0x275760u: goto label_275760;
        case 0x275764u: goto label_275764;
        case 0x275768u: goto label_275768;
        case 0x27576cu: goto label_27576c;
        case 0x275770u: goto label_275770;
        case 0x275774u: goto label_275774;
        case 0x275778u: goto label_275778;
        case 0x27577cu: goto label_27577c;
        case 0x275780u: goto label_275780;
        case 0x275784u: goto label_275784;
        case 0x275788u: goto label_275788;
        case 0x27578cu: goto label_27578c;
        case 0x275790u: goto label_275790;
        case 0x275794u: goto label_275794;
        case 0x275798u: goto label_275798;
        case 0x27579cu: goto label_27579c;
        case 0x2757a0u: goto label_2757a0;
        case 0x2757a4u: goto label_2757a4;
        case 0x2757a8u: goto label_2757a8;
        case 0x2757acu: goto label_2757ac;
        case 0x2757b0u: goto label_2757b0;
        case 0x2757b4u: goto label_2757b4;
        case 0x2757b8u: goto label_2757b8;
        case 0x2757bcu: goto label_2757bc;
        case 0x2757c0u: goto label_2757c0;
        case 0x2757c4u: goto label_2757c4;
        case 0x2757c8u: goto label_2757c8;
        case 0x2757ccu: goto label_2757cc;
        case 0x2757d0u: goto label_2757d0;
        case 0x2757d4u: goto label_2757d4;
        case 0x2757d8u: goto label_2757d8;
        case 0x2757dcu: goto label_2757dc;
        case 0x2757e0u: goto label_2757e0;
        case 0x2757e4u: goto label_2757e4;
        case 0x2757e8u: goto label_2757e8;
        case 0x2757ecu: goto label_2757ec;
        case 0x2757f0u: goto label_2757f0;
        case 0x2757f4u: goto label_2757f4;
        case 0x2757f8u: goto label_2757f8;
        case 0x2757fcu: goto label_2757fc;
        case 0x275800u: goto label_275800;
        case 0x275804u: goto label_275804;
        case 0x275808u: goto label_275808;
        case 0x27580cu: goto label_27580c;
        case 0x275810u: goto label_275810;
        case 0x275814u: goto label_275814;
        case 0x275818u: goto label_275818;
        case 0x27581cu: goto label_27581c;
        case 0x275820u: goto label_275820;
        case 0x275824u: goto label_275824;
        case 0x275828u: goto label_275828;
        case 0x27582cu: goto label_27582c;
        case 0x275830u: goto label_275830;
        case 0x275834u: goto label_275834;
        case 0x275838u: goto label_275838;
        case 0x27583cu: goto label_27583c;
        case 0x275840u: goto label_275840;
        case 0x275844u: goto label_275844;
        case 0x275848u: goto label_275848;
        case 0x27584cu: goto label_27584c;
        case 0x275850u: goto label_275850;
        case 0x275854u: goto label_275854;
        case 0x275858u: goto label_275858;
        case 0x27585cu: goto label_27585c;
        case 0x275860u: goto label_275860;
        case 0x275864u: goto label_275864;
        case 0x275868u: goto label_275868;
        case 0x27586cu: goto label_27586c;
        case 0x275870u: goto label_275870;
        case 0x275874u: goto label_275874;
        case 0x275878u: goto label_275878;
        case 0x27587cu: goto label_27587c;
        case 0x275880u: goto label_275880;
        case 0x275884u: goto label_275884;
        case 0x275888u: goto label_275888;
        case 0x27588cu: goto label_27588c;
        case 0x275890u: goto label_275890;
        case 0x275894u: goto label_275894;
        case 0x275898u: goto label_275898;
        case 0x27589cu: goto label_27589c;
        case 0x2758a0u: goto label_2758a0;
        case 0x2758a4u: goto label_2758a4;
        case 0x2758a8u: goto label_2758a8;
        case 0x2758acu: goto label_2758ac;
        case 0x2758b0u: goto label_2758b0;
        case 0x2758b4u: goto label_2758b4;
        case 0x2758b8u: goto label_2758b8;
        case 0x2758bcu: goto label_2758bc;
        case 0x2758c0u: goto label_2758c0;
        case 0x2758c4u: goto label_2758c4;
        case 0x2758c8u: goto label_2758c8;
        case 0x2758ccu: goto label_2758cc;
        case 0x2758d0u: goto label_2758d0;
        case 0x2758d4u: goto label_2758d4;
        case 0x2758d8u: goto label_2758d8;
        case 0x2758dcu: goto label_2758dc;
        case 0x2758e0u: goto label_2758e0;
        case 0x2758e4u: goto label_2758e4;
        case 0x2758e8u: goto label_2758e8;
        case 0x2758ecu: goto label_2758ec;
        case 0x2758f0u: goto label_2758f0;
        case 0x2758f4u: goto label_2758f4;
        case 0x2758f8u: goto label_2758f8;
        case 0x2758fcu: goto label_2758fc;
        case 0x275900u: goto label_275900;
        case 0x275904u: goto label_275904;
        case 0x275908u: goto label_275908;
        case 0x27590cu: goto label_27590c;
        case 0x275910u: goto label_275910;
        case 0x275914u: goto label_275914;
        case 0x275918u: goto label_275918;
        case 0x27591cu: goto label_27591c;
        case 0x275920u: goto label_275920;
        case 0x275924u: goto label_275924;
        case 0x275928u: goto label_275928;
        case 0x27592cu: goto label_27592c;
        case 0x275930u: goto label_275930;
        case 0x275934u: goto label_275934;
        case 0x275938u: goto label_275938;
        case 0x27593cu: goto label_27593c;
        case 0x275940u: goto label_275940;
        case 0x275944u: goto label_275944;
        case 0x275948u: goto label_275948;
        case 0x27594cu: goto label_27594c;
        case 0x275950u: goto label_275950;
        case 0x275954u: goto label_275954;
        case 0x275958u: goto label_275958;
        case 0x27595cu: goto label_27595c;
        case 0x275960u: goto label_275960;
        case 0x275964u: goto label_275964;
        case 0x275968u: goto label_275968;
        case 0x27596cu: goto label_27596c;
        case 0x275970u: goto label_275970;
        case 0x275974u: goto label_275974;
        case 0x275978u: goto label_275978;
        case 0x27597cu: goto label_27597c;
        case 0x275980u: goto label_275980;
        case 0x275984u: goto label_275984;
        case 0x275988u: goto label_275988;
        case 0x27598cu: goto label_27598c;
        case 0x275990u: goto label_275990;
        case 0x275994u: goto label_275994;
        case 0x275998u: goto label_275998;
        case 0x27599cu: goto label_27599c;
        case 0x2759a0u: goto label_2759a0;
        case 0x2759a4u: goto label_2759a4;
        case 0x2759a8u: goto label_2759a8;
        case 0x2759acu: goto label_2759ac;
        case 0x2759b0u: goto label_2759b0;
        case 0x2759b4u: goto label_2759b4;
        case 0x2759b8u: goto label_2759b8;
        case 0x2759bcu: goto label_2759bc;
        case 0x2759c0u: goto label_2759c0;
        case 0x2759c4u: goto label_2759c4;
        case 0x2759c8u: goto label_2759c8;
        case 0x2759ccu: goto label_2759cc;
        case 0x2759d0u: goto label_2759d0;
        case 0x2759d4u: goto label_2759d4;
        case 0x2759d8u: goto label_2759d8;
        case 0x2759dcu: goto label_2759dc;
        case 0x2759e0u: goto label_2759e0;
        case 0x2759e4u: goto label_2759e4;
        case 0x2759e8u: goto label_2759e8;
        case 0x2759ecu: goto label_2759ec;
        case 0x2759f0u: goto label_2759f0;
        case 0x2759f4u: goto label_2759f4;
        case 0x2759f8u: goto label_2759f8;
        case 0x2759fcu: goto label_2759fc;
        case 0x275a00u: goto label_275a00;
        case 0x275a04u: goto label_275a04;
        case 0x275a08u: goto label_275a08;
        case 0x275a0cu: goto label_275a0c;
        case 0x275a10u: goto label_275a10;
        case 0x275a14u: goto label_275a14;
        case 0x275a18u: goto label_275a18;
        case 0x275a1cu: goto label_275a1c;
        case 0x275a20u: goto label_275a20;
        case 0x275a24u: goto label_275a24;
        case 0x275a28u: goto label_275a28;
        case 0x275a2cu: goto label_275a2c;
        case 0x275a30u: goto label_275a30;
        case 0x275a34u: goto label_275a34;
        case 0x275a38u: goto label_275a38;
        case 0x275a3cu: goto label_275a3c;
        default: return;
    }

label_275270:
    // 0x275270: 0xc4b4  teq         $zero, $zero, 786
    ctx->pc = 0x275270u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275274:
    // 0x275274: 0xba20  .word       0x0000BA20                   # add         $s7, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275274u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_275278:
    // 0x275278: 0x0  nop
    ctx->pc = 0x275278u;
    // NOP
label_27527c:
    // 0x27527c: 0x0  nop
    ctx->pc = 0x27527cu;
    // NOP
label_275280:
    // 0x275280: 0xc4cc  syscall     787
    ctx->pc = 0x275280u;
    ctx->pc = 0x275284u;
runtime->handleSyscall(rdram, ctx, 0x313u);
label_275284:
    // 0x275284: 0xfff0  tge         $zero, $zero, 1023
    ctx->pc = 0x275284u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275288:
    // 0x275288: 0x0  nop
    ctx->pc = 0x275288u;
    // NOP
label_27528c:
    // 0x27528c: 0x0  nop
    ctx->pc = 0x27528cu;
    // NOP
label_275290:
    // 0x275290: 0xc4ec  .word       0x0000C4EC                   # dadd        $t8, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275290u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 24, r); }
label_275294:
    // 0x275294: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275294u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_275298:
    // 0x275298: 0x0  nop
    ctx->pc = 0x275298u;
    // NOP
label_27529c:
    // 0x27529c: 0x0  nop
    ctx->pc = 0x27529cu;
    // NOP
label_2752a0:
    // 0x2752a0: 0xc507  .word       0x0000C507                   # srav        $t8, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2752a0u;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2752a4:
    // 0x2752a4: 0x6510  .word       0x00006510                   # mfhi        $t4 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2752a4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_2752a8:
    // 0x2752a8: 0x0  nop
    ctx->pc = 0x2752a8u;
    // NOP
label_2752ac:
    // 0x2752ac: 0x0  nop
    ctx->pc = 0x2752acu;
    // NOP
label_2752b0:
    // 0x2752b0: 0xc514  .word       0x0000C514                   # dsllv       $t8, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2752b0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2752b4:
    // 0x2752b4: 0x68c0  sll         $t5, $zero, 3
    ctx->pc = 0x2752b4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_2752b8:
    // 0x2752b8: 0x0  nop
    ctx->pc = 0x2752b8u;
    // NOP
label_2752bc:
    // 0x2752bc: 0x0  nop
    ctx->pc = 0x2752bcu;
    // NOP
label_2752c0:
    // 0x2752c0: 0xc522  .word       0x0000C522                   # neg         $t8, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2752c0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
label_2752c4:
    // 0x2752c4: 0x10630  tge         $zero, $at, 24
    ctx->pc = 0x2752c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2752c8:
    // 0x2752c8: 0x0  nop
    ctx->pc = 0x2752c8u;
    // NOP
label_2752cc:
    // 0x2752cc: 0x0  nop
    ctx->pc = 0x2752ccu;
    // NOP
label_2752d0:
    // 0x2752d0: 0xc543  sra         $t8, $zero, 21
    ctx->pc = 0x2752d0u;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 0), 21));
label_2752d4:
    // 0x2752d4: 0x12080  sll         $a0, $at, 2
    ctx->pc = 0x2752d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 2));
label_2752d8:
    // 0x2752d8: 0x0  nop
    ctx->pc = 0x2752d8u;
    // NOP
label_2752dc:
    // 0x2752dc: 0x0  nop
    ctx->pc = 0x2752dcu;
    // NOP
label_2752e0:
    // 0x2752e0: 0xc568  .word       0x0000C568                   # mfsa        $t8 # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2752e0u;
    SET_GPR_U32(ctx, 24, ctx->sa);
label_2752e4:
    // 0x2752e4: 0x2050  .word       0x00002050                   # mfhi        $a0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2752e4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2752e8:
    // 0x2752e8: 0x0  nop
    ctx->pc = 0x2752e8u;
    // NOP
label_2752ec:
    // 0x2752ec: 0x0  nop
    ctx->pc = 0x2752ecu;
    // NOP
label_2752f0:
    // 0x2752f0: 0xc56d  .word       0x0000C56D                   # daddu       $t8, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2752f0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2752f4:
    // 0x2752f4: 0xc670  tge         $zero, $zero, 793
    ctx->pc = 0x2752f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2752f8:
    // 0x2752f8: 0x0  nop
    ctx->pc = 0x2752f8u;
    // NOP
label_2752fc:
    // 0x2752fc: 0x0  nop
    ctx->pc = 0x2752fcu;
    // NOP
label_275300:
    // 0x275300: 0xc586  .word       0x0000C586                   # srlv        $t8, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275300u;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_275304:
    // 0x275304: 0xe5f0  tge         $zero, $zero, 919
    ctx->pc = 0x275304u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275308:
    // 0x275308: 0x0  nop
    ctx->pc = 0x275308u;
    // NOP
label_27530c:
    // 0x27530c: 0x0  nop
    ctx->pc = 0x27530cu;
    // NOP
label_275310:
    // 0x275310: 0xc5a3  .word       0x0000C5A3                   # negu        $t8, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275310u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_275314:
    // 0x275314: 0x8a80  sll         $s1, $zero, 10
    ctx->pc = 0x275314u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_275318:
    // 0x275318: 0x0  nop
    ctx->pc = 0x275318u;
    // NOP
label_27531c:
    // 0x27531c: 0x0  nop
    ctx->pc = 0x27531cu;
    // NOP
label_275320:
    // 0x275320: 0xc5b5  .word       0x0000C5B5                   # INVALID     $zero, $zero, -0x3A4B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275320u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x275320 raw=0x0000C5B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_275324:
    // 0x275324: 0x12a60  .word       0x00012A60                   # add         $a1, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275324u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_275328:
    // 0x275328: 0x0  nop
    ctx->pc = 0x275328u;
    // NOP
label_27532c:
    // 0x27532c: 0x0  nop
    ctx->pc = 0x27532cu;
    // NOP
label_275330:
    // 0x275330: 0xc5db  .word       0x0000C5DB                   # divu        $t8, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275330u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_275334:
    // 0x275334: 0x28d0  .word       0x000028D0                   # mfhi        $a1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275334u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_275338:
    // 0x275338: 0x0  nop
    ctx->pc = 0x275338u;
    // NOP
label_27533c:
    // 0x27533c: 0x0  nop
    ctx->pc = 0x27533cu;
    // NOP
label_275340:
    // 0x275340: 0xc5e1  .word       0x0000C5E1                   # addu        $t8, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275340u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_275344:
    // 0x275344: 0x6950  .word       0x00006950                   # mfhi        $t5 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275344u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_275348:
    // 0x275348: 0x0  nop
    ctx->pc = 0x275348u;
    // NOP
label_27534c:
    // 0x27534c: 0x0  nop
    ctx->pc = 0x27534cu;
    // NOP
label_275350:
    // 0x275350: 0xc5ef  .word       0x0000C5EF                   # dsubu       $t8, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275350u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_275354:
    // 0x275354: 0xec60  .word       0x0000EC60                   # add         $sp, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275354u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_275358:
    // 0x275358: 0x0  nop
    ctx->pc = 0x275358u;
    // NOP
label_27535c:
    // 0x27535c: 0x0  nop
    ctx->pc = 0x27535cu;
    // NOP
label_275360:
    // 0x275360: 0xc60d  break       0, 792
    ctx->pc = 0x275360u;
    runtime->handleBreak(rdram, ctx);
label_275364:
    // 0x275364: 0x46c0  sll         $t0, $zero, 27
    ctx->pc = 0x275364u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_275368:
    // 0x275368: 0x0  nop
    ctx->pc = 0x275368u;
    // NOP
label_27536c:
    // 0x27536c: 0x0  nop
    ctx->pc = 0x27536cu;
    // NOP
label_275370:
    // 0x275370: 0xc616  .word       0x0000C616                   # dsrlv       $t8, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275370u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_275374:
    // 0x275374: 0x10020  add         $zero, $zero, $at
    ctx->pc = 0x275374u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_275378:
    // 0x275378: 0x0  nop
    ctx->pc = 0x275378u;
    // NOP
label_27537c:
    // 0x27537c: 0x0  nop
    ctx->pc = 0x27537cu;
    // NOP
label_275380:
    // 0x275380: 0xc637  .word       0x0000C637                   # INVALID     $zero, $zero, -0x39C9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275380u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x275380 raw=0x0000C637"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_275384:
    // 0x275384: 0x96c0  sll         $s2, $zero, 27
    ctx->pc = 0x275384u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_275388:
    // 0x275388: 0x0  nop
    ctx->pc = 0x275388u;
    // NOP
label_27538c:
    // 0x27538c: 0x0  nop
    ctx->pc = 0x27538cu;
    // NOP
label_275390:
    // 0x275390: 0xc64a  .word       0x0000C64A                   # movz        $t8, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275390u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 0));
label_275394:
    // 0x275394: 0xc5e0  .word       0x0000C5E0                   # add         $t8, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275394u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_275398:
    // 0x275398: 0x0  nop
    ctx->pc = 0x275398u;
    // NOP
label_27539c:
    // 0x27539c: 0x0  nop
    ctx->pc = 0x27539cu;
    // NOP
label_2753a0:
    // 0x2753a0: 0xc663  .word       0x0000C663                   # negu        $t8, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2753a0u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2753a4:
    // 0x2753a4: 0x8c70  tge         $zero, $zero, 561
    ctx->pc = 0x2753a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2753a8:
    // 0x2753a8: 0x0  nop
    ctx->pc = 0x2753a8u;
    // NOP
label_2753ac:
    // 0x2753ac: 0x0  nop
    ctx->pc = 0x2753acu;
    // NOP
label_2753b0:
    // 0x2753b0: 0xc675  .word       0x0000C675                   # INVALID     $zero, $zero, -0x398B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2753b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2753B0 raw=0x0000C675"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2753b4:
    // 0x2753b4: 0x4f50  .word       0x00004F50                   # mfhi        $t1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2753b4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_2753b8:
    // 0x2753b8: 0x0  nop
    ctx->pc = 0x2753b8u;
    // NOP
label_2753bc:
    // 0x2753bc: 0x0  nop
    ctx->pc = 0x2753bcu;
    // NOP
label_2753c0:
    // 0x2753c0: 0xc67f  dsra32      $t8, $zero, 25
    ctx->pc = 0x2753c0u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 0) >> (32 + 25));
label_2753c4:
    // 0x2753c4: 0xdcc0  sll         $k1, $zero, 19
    ctx->pc = 0x2753c4u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_2753c8:
    // 0x2753c8: 0x0  nop
    ctx->pc = 0x2753c8u;
    // NOP
label_2753cc:
    // 0x2753cc: 0x0  nop
    ctx->pc = 0x2753ccu;
    // NOP
label_2753d0:
    // 0x2753d0: 0xc69b  .word       0x0000C69B                   # divu        $t8, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2753d0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2753d4:
    // 0x2753d4: 0x7d60  .word       0x00007D60                   # add         $t7, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2753d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2753d8:
    // 0x2753d8: 0x0  nop
    ctx->pc = 0x2753d8u;
    // NOP
label_2753dc:
    // 0x2753dc: 0x0  nop
    ctx->pc = 0x2753dcu;
    // NOP
label_2753e0:
    // 0x2753e0: 0xc6ab  .word       0x0000C6AB                   # sltu        $t8, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2753e0u;
    SET_GPR_U64(ctx, 24, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2753e4:
    // 0x2753e4: 0x5480  sll         $t2, $zero, 18
    ctx->pc = 0x2753e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_2753e8:
    // 0x2753e8: 0x0  nop
    ctx->pc = 0x2753e8u;
    // NOP
label_2753ec:
    // 0x2753ec: 0x0  nop
    ctx->pc = 0x2753ecu;
    // NOP
label_2753f0:
    // 0x2753f0: 0xc6b6  tne         $zero, $zero, 794
    ctx->pc = 0x2753f0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2753f4:
    // 0x2753f4: 0x33e0  .word       0x000033E0                   # add         $a2, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2753f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_2753f8:
    // 0x2753f8: 0x0  nop
    ctx->pc = 0x2753f8u;
    // NOP
label_2753fc:
    // 0x2753fc: 0x0  nop
    ctx->pc = 0x2753fcu;
    // NOP
label_275400:
    // 0x275400: 0xc6bd  .word       0x0000C6BD                   # INVALID     $zero, $zero, -0x3943 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275400u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x275400 raw=0x0000C6BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_275404:
    // 0x275404: 0xbcc0  sll         $s7, $zero, 19
    ctx->pc = 0x275404u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_275408:
    // 0x275408: 0x0  nop
    ctx->pc = 0x275408u;
    // NOP
label_27540c:
    // 0x27540c: 0x0  nop
    ctx->pc = 0x27540cu;
    // NOP
label_275410:
    // 0x275410: 0xc6d5  .word       0x0000C6D5                   # INVALID     $zero, $zero, -0x392B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275410u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x275410 raw=0x0000C6D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_275414:
    // 0x275414: 0x8f00  sll         $s1, $zero, 28
    ctx->pc = 0x275414u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_275418:
    // 0x275418: 0x0  nop
    ctx->pc = 0x275418u;
    // NOP
label_27541c:
    // 0x27541c: 0x0  nop
    ctx->pc = 0x27541cu;
    // NOP
label_275420:
    // 0x275420: 0xc6e7  .word       0x0000C6E7                   # not         $t8, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275420u;
    SET_GPR_U64(ctx, 24, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_275424:
    // 0x275424: 0x4af0  tge         $zero, $zero, 299
    ctx->pc = 0x275424u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275428:
    // 0x275428: 0x0  nop
    ctx->pc = 0x275428u;
    // NOP
label_27542c:
    // 0x27542c: 0x0  nop
    ctx->pc = 0x27542cu;
    // NOP
label_275430:
    // 0x275430: 0xc6f1  tgeu        $zero, $zero, 795
    ctx->pc = 0x275430u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275434:
    // 0x275434: 0x35e0  .word       0x000035E0                   # add         $a2, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275434u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_275438:
    // 0x275438: 0x0  nop
    ctx->pc = 0x275438u;
    // NOP
label_27543c:
    // 0x27543c: 0x0  nop
    ctx->pc = 0x27543cu;
    // NOP
label_275440:
    // 0x275440: 0xc6f8  dsll        $t8, $zero, 27
    ctx->pc = 0x275440u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) << 27);
label_275444:
    // 0x275444: 0x14620  .word       0x00014620                   # add         $t0, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275444u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_275448:
    // 0x275448: 0x0  nop
    ctx->pc = 0x275448u;
    // NOP
label_27544c:
    // 0x27544c: 0x0  nop
    ctx->pc = 0x27544cu;
    // NOP
label_275450:
    // 0x275450: 0xc721  .word       0x0000C721                   # addu        $t8, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275450u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_275454:
    // 0x275454: 0x4a80  sll         $t1, $zero, 10
    ctx->pc = 0x275454u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_275458:
    // 0x275458: 0x0  nop
    ctx->pc = 0x275458u;
    // NOP
label_27545c:
    // 0x27545c: 0x0  nop
    ctx->pc = 0x27545cu;
    // NOP
label_275460:
    // 0x275460: 0xc72b  .word       0x0000C72B                   # sltu        $t8, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275460u;
    SET_GPR_U64(ctx, 24, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_275464:
    // 0x275464: 0xd880  sll         $k1, $zero, 2
    ctx->pc = 0x275464u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_275468:
    // 0x275468: 0x0  nop
    ctx->pc = 0x275468u;
    // NOP
label_27546c:
    // 0x27546c: 0x0  nop
    ctx->pc = 0x27546cu;
    // NOP
label_275470:
    // 0x275470: 0xc747  .word       0x0000C747                   # srav        $t8, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275470u;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_275474:
    // 0x275474: 0x9ea0  .word       0x00009EA0                   # add         $s3, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275474u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_275478:
    // 0x275478: 0x0  nop
    ctx->pc = 0x275478u;
    // NOP
label_27547c:
    // 0x27547c: 0x0  nop
    ctx->pc = 0x27547cu;
    // NOP
label_275480:
    // 0x275480: 0xc75b  .word       0x0000C75B                   # divu        $t8, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275480u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_275484:
    // 0x275484: 0x7750  .word       0x00007750                   # mfhi        $t6 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275484u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_275488:
    // 0x275488: 0x0  nop
    ctx->pc = 0x275488u;
    // NOP
label_27548c:
    // 0x27548c: 0x0  nop
    ctx->pc = 0x27548cu;
    // NOP
label_275490:
    // 0x275490: 0xc76a  .word       0x0000C76A                   # slt         $t8, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275490u;
    SET_GPR_U64(ctx, 24, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_275494:
    // 0x275494: 0x3c90  .word       0x00003C90                   # mfhi        $a3 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275494u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_275498:
    // 0x275498: 0x0  nop
    ctx->pc = 0x275498u;
    // NOP
label_27549c:
    // 0x27549c: 0x0  nop
    ctx->pc = 0x27549cu;
    // NOP
label_2754a0:
    // 0x2754a0: 0xc772  tlt         $zero, $zero, 797
    ctx->pc = 0x2754a0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2754a4:
    // 0x2754a4: 0x8ec0  sll         $s1, $zero, 27
    ctx->pc = 0x2754a4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_2754a8:
    // 0x2754a8: 0x0  nop
    ctx->pc = 0x2754a8u;
    // NOP
label_2754ac:
    // 0x2754ac: 0x0  nop
    ctx->pc = 0x2754acu;
    // NOP
label_2754b0:
    // 0x2754b0: 0xc784  .word       0x0000C784                   # sllv        $t8, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2754b0u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2754b4:
    // 0x2754b4: 0x89a0  .word       0x000089A0                   # add         $s1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2754b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2754b8:
    // 0x2754b8: 0x0  nop
    ctx->pc = 0x2754b8u;
    // NOP
label_2754bc:
    // 0x2754bc: 0x0  nop
    ctx->pc = 0x2754bcu;
    // NOP
label_2754c0:
    // 0x2754c0: 0xc796  .word       0x0000C796                   # dsrlv       $t8, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2754c0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2754c4:
    // 0x2754c4: 0x5900  sll         $t3, $zero, 4
    ctx->pc = 0x2754c4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_2754c8:
    // 0x2754c8: 0x0  nop
    ctx->pc = 0x2754c8u;
    // NOP
label_2754cc:
    // 0x2754cc: 0x0  nop
    ctx->pc = 0x2754ccu;
    // NOP
label_2754d0:
    // 0x2754d0: 0xc7a2  .word       0x0000C7A2                   # neg         $t8, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2754d0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
label_2754d4:
    // 0x2754d4: 0x61e0  .word       0x000061E0                   # add         $t4, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2754d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2754d8:
    // 0x2754d8: 0x0  nop
    ctx->pc = 0x2754d8u;
    // NOP
label_2754dc:
    // 0x2754dc: 0x0  nop
    ctx->pc = 0x2754dcu;
    // NOP
label_2754e0:
    // 0x2754e0: 0xc7af  .word       0x0000C7AF                   # dsubu       $t8, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2754e0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2754e4:
    // 0x2754e4: 0x8c70  tge         $zero, $zero, 561
    ctx->pc = 0x2754e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2754e8:
    // 0x2754e8: 0x0  nop
    ctx->pc = 0x2754e8u;
    // NOP
label_2754ec:
    // 0x2754ec: 0x0  nop
    ctx->pc = 0x2754ecu;
    // NOP
label_2754f0:
    // 0x2754f0: 0xc7c1  .word       0x0000C7C1                   # INVALID     $zero, $zero, -0x383F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2754f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2754F0 raw=0x0000C7C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2754f4:
    // 0x2754f4: 0x9950  .word       0x00009950                   # mfhi        $s3 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2754f4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_2754f8:
    // 0x2754f8: 0x0  nop
    ctx->pc = 0x2754f8u;
    // NOP
label_2754fc:
    // 0x2754fc: 0x0  nop
    ctx->pc = 0x2754fcu;
    // NOP
label_275500:
    // 0x275500: 0xc7d5  .word       0x0000C7D5                   # INVALID     $zero, $zero, -0x382B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275500u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x275500 raw=0x0000C7D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_275504:
    // 0x275504: 0x7b00  sll         $t7, $zero, 12
    ctx->pc = 0x275504u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_275508:
    // 0x275508: 0x0  nop
    ctx->pc = 0x275508u;
    // NOP
label_27550c:
    // 0x27550c: 0x0  nop
    ctx->pc = 0x27550cu;
    // NOP
label_275510:
    // 0x275510: 0xc7e5  .word       0x0000C7E5                   # move        $t8, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275510u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_275514:
    // 0x275514: 0x11020  add         $v0, $zero, $at
    ctx->pc = 0x275514u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_275518:
    // 0x275518: 0x0  nop
    ctx->pc = 0x275518u;
    // NOP
label_27551c:
    // 0x27551c: 0x0  nop
    ctx->pc = 0x27551cu;
    // NOP
label_275520:
    // 0x275520: 0xc808  .word       0x0000C808                   # jr          $zero # 0000C800 <InstrIdType: CPU_SPECIAL>
label_275524:
    if (ctx->pc == 0x275524u) {
        ctx->pc = 0x275524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275520u;
        // 0x275524: 0x9190  .word       0x00009190                   # mfhi        $s2 # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 18, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x275528u;
        goto label_275528;
    }
    ctx->pc = 0x275520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x275524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275520u;
        // 0x275524: 0x9190  .word       0x00009190                   # mfhi        $s2 # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 18, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275520u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x275528u;
label_275528:
    // 0x275528: 0x0  nop
    ctx->pc = 0x275528u;
    // NOP
label_27552c:
    // 0x27552c: 0x0  nop
    ctx->pc = 0x27552cu;
    // NOP
label_275530:
    // 0x275530: 0xc81b  divu        $t9, $zero, $zero
    ctx->pc = 0x275530u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_275534:
    // 0x275534: 0x6a70  tge         $zero, $zero, 425
    ctx->pc = 0x275534u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275538:
    // 0x275538: 0x0  nop
    ctx->pc = 0x275538u;
    // NOP
label_27553c:
    // 0x27553c: 0x0  nop
    ctx->pc = 0x27553cu;
    // NOP
label_275540:
    // 0x275540: 0xc829  .word       0x0000C829                   # mtsa        $zero # 0000C800 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x275540u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_275544:
    // 0x275544: 0x80c0  sll         $s0, $zero, 3
    ctx->pc = 0x275544u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_275548:
    // 0x275548: 0x0  nop
    ctx->pc = 0x275548u;
    // NOP
label_27554c:
    // 0x27554c: 0x0  nop
    ctx->pc = 0x27554cu;
    // NOP
label_275550:
    // 0x275550: 0xc83a  dsrl        $t9, $zero, 0
    ctx->pc = 0x275550u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) >> 0);
label_275554:
    // 0x275554: 0x11970  tge         $zero, $at, 101
    ctx->pc = 0x275554u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_275558:
    // 0x275558: 0x0  nop
    ctx->pc = 0x275558u;
    // NOP
label_27555c:
    // 0x27555c: 0x0  nop
    ctx->pc = 0x27555cu;
    // NOP
label_275560:
    // 0x275560: 0xc85e  .word       0x0000C85E                   # ddiv        $t9, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275560u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x275560 raw=0x0000C85E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_275564:
    // 0x275564: 0xddc0  sll         $k1, $zero, 23
    ctx->pc = 0x275564u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_275568:
    // 0x275568: 0x0  nop
    ctx->pc = 0x275568u;
    // NOP
label_27556c:
    // 0x27556c: 0x0  nop
    ctx->pc = 0x27556cu;
    // NOP
label_275570:
    // 0x275570: 0xc87a  dsrl        $t9, $zero, 1
    ctx->pc = 0x275570u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) >> 1);
label_275574:
    // 0x275574: 0xca80  sll         $t9, $zero, 10
    ctx->pc = 0x275574u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_275578:
    // 0x275578: 0x0  nop
    ctx->pc = 0x275578u;
    // NOP
label_27557c:
    // 0x27557c: 0x0  nop
    ctx->pc = 0x27557cu;
    // NOP
label_275580:
    // 0x275580: 0xc894  .word       0x0000C894                   # dsllv       $t9, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275580u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_275584:
    // 0x275584: 0x6fe0  .word       0x00006FE0                   # add         $t5, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275584u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_275588:
    // 0x275588: 0x0  nop
    ctx->pc = 0x275588u;
    // NOP
label_27558c:
    // 0x27558c: 0x0  nop
    ctx->pc = 0x27558cu;
    // NOP
label_275590:
    // 0x275590: 0xc8a2  .word       0x0000C8A2                   # neg         $t9, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275590u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
label_275594:
    // 0x275594: 0xbe30  tge         $zero, $zero, 760
    ctx->pc = 0x275594u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275598:
    // 0x275598: 0x0  nop
    ctx->pc = 0x275598u;
    // NOP
label_27559c:
    // 0x27559c: 0x0  nop
    ctx->pc = 0x27559cu;
    // NOP
label_2755a0:
    // 0x2755a0: 0xc8ba  dsrl        $t9, $zero, 2
    ctx->pc = 0x2755a0u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) >> 2);
label_2755a4:
    // 0x2755a4: 0x20ac0  sll         $at, $v0, 11
    ctx->pc = 0x2755a4u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_2755a8:
    // 0x2755a8: 0x0  nop
    ctx->pc = 0x2755a8u;
    // NOP
label_2755ac:
    // 0x2755ac: 0x0  nop
    ctx->pc = 0x2755acu;
    // NOP
label_2755b0:
    // 0x2755b0: 0xc8fc  dsll32      $t9, $zero, 3
    ctx->pc = 0x2755b0u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) << (32 + 3));
label_2755b4:
    // 0x2755b4: 0xb070  tge         $zero, $zero, 705
    ctx->pc = 0x2755b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2755b8:
    // 0x2755b8: 0x0  nop
    ctx->pc = 0x2755b8u;
    // NOP
label_2755bc:
    // 0x2755bc: 0x0  nop
    ctx->pc = 0x2755bcu;
    // NOP
label_2755c0:
    // 0x2755c0: 0xc913  .word       0x0000C913                   # mtlo        $zero # 0000C900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2755c0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2755c4:
    // 0x2755c4: 0x13ec0  sll         $a3, $at, 27
    ctx->pc = 0x2755c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 27));
label_2755c8:
    // 0x2755c8: 0x0  nop
    ctx->pc = 0x2755c8u;
    // NOP
label_2755cc:
    // 0x2755cc: 0x0  nop
    ctx->pc = 0x2755ccu;
    // NOP
label_2755d0:
    // 0x2755d0: 0xc93b  dsra        $t9, $zero, 4
    ctx->pc = 0x2755d0u;
    SET_GPR_S64(ctx, 25, GPR_S64(ctx, 0) >> 4);
label_2755d4:
    // 0x2755d4: 0x6160  .word       0x00006160                   # add         $t4, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2755d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2755d8:
    // 0x2755d8: 0x0  nop
    ctx->pc = 0x2755d8u;
    // NOP
label_2755dc:
    // 0x2755dc: 0x0  nop
    ctx->pc = 0x2755dcu;
    // NOP
label_2755e0:
    // 0x2755e0: 0xc948  .word       0x0000C948                   # jr          $zero # 0000C940 <InstrIdType: CPU_SPECIAL>
label_2755e4:
    if (ctx->pc == 0x2755E4u) {
        ctx->pc = 0x2755E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2755E0u;
        // 0x2755e4: 0x2cc0  sll         $a1, $zero, 19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2755E8u;
        goto label_2755e8;
    }
    ctx->pc = 0x2755E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2755E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2755E0u;
        // 0x2755e4: 0x2cc0  sll         $a1, $zero, 19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2755E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2755E8u;
label_2755e8:
    // 0x2755e8: 0x0  nop
    ctx->pc = 0x2755e8u;
    // NOP
label_2755ec:
    // 0x2755ec: 0x0  nop
    ctx->pc = 0x2755ecu;
    // NOP
label_2755f0:
    // 0x2755f0: 0xc94e  .word       0x0000C94E                   # INVALID     $zero, $zero, -0x36B2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2755f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2755F0 raw=0x0000C94E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2755f4:
    // 0x2755f4: 0x3870  tge         $zero, $zero, 225
    ctx->pc = 0x2755f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2755f8:
    // 0x2755f8: 0x0  nop
    ctx->pc = 0x2755f8u;
    // NOP
label_2755fc:
    // 0x2755fc: 0x0  nop
    ctx->pc = 0x2755fcu;
    // NOP
label_275600:
    // 0x275600: 0xc956  .word       0x0000C956                   # dsrlv       $t9, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275600u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_275604:
    // 0x275604: 0x6170  tge         $zero, $zero, 389
    ctx->pc = 0x275604u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275608:
    // 0x275608: 0x0  nop
    ctx->pc = 0x275608u;
    // NOP
label_27560c:
    // 0x27560c: 0x0  nop
    ctx->pc = 0x27560cu;
    // NOP
label_275610:
    // 0x275610: 0xc963  .word       0x0000C963                   # negu        $t9, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275610u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_275614:
    // 0x275614: 0x5720  .word       0x00005720                   # add         $t2, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275614u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_275618:
    // 0x275618: 0x0  nop
    ctx->pc = 0x275618u;
    // NOP
label_27561c:
    // 0x27561c: 0x0  nop
    ctx->pc = 0x27561cu;
    // NOP
label_275620:
    // 0x275620: 0xc96e  .word       0x0000C96E                   # dsub        $t9, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275620u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 25, r); }
label_275624:
    // 0x275624: 0xce30  tge         $zero, $zero, 824
    ctx->pc = 0x275624u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275628:
    // 0x275628: 0x0  nop
    ctx->pc = 0x275628u;
    // NOP
label_27562c:
    // 0x27562c: 0x0  nop
    ctx->pc = 0x27562cu;
    // NOP
label_275630:
    // 0x275630: 0xc988  .word       0x0000C988                   # jr          $zero # 0000C980 <InstrIdType: CPU_SPECIAL>
label_275634:
    if (ctx->pc == 0x275634u) {
        ctx->pc = 0x275634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275630u;
        // 0x275634: 0xbb70  tge         $zero, $zero, 749 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x275638u;
        goto label_275638;
    }
    ctx->pc = 0x275630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x275634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275630u;
        // 0x275634: 0xbb70  tge         $zero, $zero, 749 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275630u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x275638u;
label_275638:
    // 0x275638: 0x0  nop
    ctx->pc = 0x275638u;
    // NOP
label_27563c:
    // 0x27563c: 0x0  nop
    ctx->pc = 0x27563cu;
    // NOP
label_275640:
    // 0x275640: 0xc9a0  .word       0x0000C9A0                   # add         $t9, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275640u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_275644:
    // 0x275644: 0x2c20  .word       0x00002C20                   # add         $a1, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275644u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_275648:
    // 0x275648: 0x0  nop
    ctx->pc = 0x275648u;
    // NOP
label_27564c:
    // 0x27564c: 0x0  nop
    ctx->pc = 0x27564cu;
    // NOP
label_275650:
    // 0x275650: 0xc9a6  .word       0x0000C9A6                   # xor         $t9, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275650u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_275654:
    // 0x275654: 0xa610  .word       0x0000A610                   # mfhi        $s4 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275654u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_275658:
    // 0x275658: 0x0  nop
    ctx->pc = 0x275658u;
    // NOP
label_27565c:
    // 0x27565c: 0x0  nop
    ctx->pc = 0x27565cu;
    // NOP
label_275660:
    // 0x275660: 0xc9bb  dsra        $t9, $zero, 6
    ctx->pc = 0x275660u;
    SET_GPR_S64(ctx, 25, GPR_S64(ctx, 0) >> 6);
label_275664:
    // 0x275664: 0x11b90  .word       0x00011B90                   # mfhi        $v1 # 00010380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275664u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_275668:
    // 0x275668: 0x0  nop
    ctx->pc = 0x275668u;
    // NOP
label_27566c:
    // 0x27566c: 0x0  nop
    ctx->pc = 0x27566cu;
    // NOP
label_275670:
    // 0x275670: 0xc9df  .word       0x0000C9DF                   # ddivu       $t9, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275670u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x275670 raw=0x0000C9DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_275674:
    // 0x275674: 0xd350  .word       0x0000D350                   # mfhi        $k0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275674u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_275678:
    // 0x275678: 0x0  nop
    ctx->pc = 0x275678u;
    // NOP
label_27567c:
    // 0x27567c: 0x0  nop
    ctx->pc = 0x27567cu;
    // NOP
label_275680:
    // 0x275680: 0xc9fa  dsrl        $t9, $zero, 7
    ctx->pc = 0x275680u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) >> 7);
label_275684:
    // 0x275684: 0x9110  .word       0x00009110                   # mfhi        $s2 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275684u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_275688:
    // 0x275688: 0x0  nop
    ctx->pc = 0x275688u;
    // NOP
label_27568c:
    // 0x27568c: 0x0  nop
    ctx->pc = 0x27568cu;
    // NOP
label_275690:
    // 0x275690: 0xca0d  break       0, 808
    ctx->pc = 0x275690u;
    runtime->handleBreak(rdram, ctx);
label_275694:
    // 0x275694: 0xaa10  .word       0x0000AA10                   # mfhi        $s5 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275694u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_275698:
    // 0x275698: 0x0  nop
    ctx->pc = 0x275698u;
    // NOP
label_27569c:
    // 0x27569c: 0x0  nop
    ctx->pc = 0x27569cu;
    // NOP
label_2756a0:
    // 0x2756a0: 0xca23  .word       0x0000CA23                   # negu        $t9, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2756a0u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2756a4:
    // 0x2756a4: 0x5120  .word       0x00005120                   # add         $t2, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2756a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_2756a8:
    // 0x2756a8: 0x0  nop
    ctx->pc = 0x2756a8u;
    // NOP
label_2756ac:
    // 0x2756ac: 0x0  nop
    ctx->pc = 0x2756acu;
    // NOP
label_2756b0:
    // 0x2756b0: 0xca2e  .word       0x0000CA2E                   # dsub        $t9, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2756b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 25, r); }
label_2756b4:
    // 0x2756b4: 0xb6d0  .word       0x0000B6D0                   # mfhi        $s6 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2756b4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_2756b8:
    // 0x2756b8: 0x0  nop
    ctx->pc = 0x2756b8u;
    // NOP
label_2756bc:
    // 0x2756bc: 0x0  nop
    ctx->pc = 0x2756bcu;
    // NOP
label_2756c0:
    // 0x2756c0: 0xca45  .word       0x0000CA45                   # INVALID     $zero, $zero, -0x35BB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2756c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2756C0 raw=0x0000CA45"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2756c4:
    // 0x2756c4: 0x1f90  .word       0x00001F90                   # mfhi        $v1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2756c4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2756c8:
    // 0x2756c8: 0x0  nop
    ctx->pc = 0x2756c8u;
    // NOP
label_2756cc:
    // 0x2756cc: 0x0  nop
    ctx->pc = 0x2756ccu;
    // NOP
label_2756d0:
    // 0x2756d0: 0xca49  .word       0x0000CA49                   # jalr        $t9, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
label_2756d4:
    if (ctx->pc == 0x2756D4u) {
        ctx->pc = 0x2756D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2756D0u;
        // 0x2756d4: 0x4590  .word       0x00004590                   # mfhi        $t0 # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 8, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2756D8u;
        goto label_2756d8;
    }
    ctx->pc = 0x2756D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 25, 0x2756D8u);
        ctx->pc = 0x2756D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2756D0u;
        // 0x2756d4: 0x4590  .word       0x00004590                   # mfhi        $t0 # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 8, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2756D0u, 0x2756D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2756D8u;
label_2756d8:
    // 0x2756d8: 0x0  nop
    ctx->pc = 0x2756d8u;
    // NOP
label_2756dc:
    // 0x2756dc: 0x0  nop
    ctx->pc = 0x2756dcu;
    // NOP
label_2756e0:
    // 0x2756e0: 0xca52  .word       0x0000CA52                   # mflo        $t9 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2756e0u;
    SET_GPR_U64(ctx, 25, ctx->lo);
label_2756e4:
    // 0x2756e4: 0x1cc0  sll         $v1, $zero, 19
    ctx->pc = 0x2756e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_2756e8:
    // 0x2756e8: 0x0  nop
    ctx->pc = 0x2756e8u;
    // NOP
label_2756ec:
    // 0x2756ec: 0x0  nop
    ctx->pc = 0x2756ecu;
    // NOP
label_2756f0:
    // 0x2756f0: 0xca56  .word       0x0000CA56                   # dsrlv       $t9, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2756f0u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2756f4:
    // 0x2756f4: 0x2710  .word       0x00002710                   # mfhi        $a0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2756f4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2756f8:
    // 0x2756f8: 0x0  nop
    ctx->pc = 0x2756f8u;
    // NOP
label_2756fc:
    // 0x2756fc: 0x0  nop
    ctx->pc = 0x2756fcu;
    // NOP
label_275700:
    // 0x275700: 0xca5b  .word       0x0000CA5B                   # divu        $t9, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275700u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_275704:
    // 0x275704: 0xc8c0  sll         $t9, $zero, 3
    ctx->pc = 0x275704u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_275708:
    // 0x275708: 0x0  nop
    ctx->pc = 0x275708u;
    // NOP
label_27570c:
    // 0x27570c: 0x0  nop
    ctx->pc = 0x27570cu;
    // NOP
label_275710:
    // 0x275710: 0xca75  .word       0x0000CA75                   # INVALID     $zero, $zero, -0x358B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275710u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x275710 raw=0x0000CA75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_275714:
    // 0x275714: 0x8770  tge         $zero, $zero, 541
    ctx->pc = 0x275714u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275718:
    // 0x275718: 0x0  nop
    ctx->pc = 0x275718u;
    // NOP
label_27571c:
    // 0x27571c: 0x0  nop
    ctx->pc = 0x27571cu;
    // NOP
label_275720:
    // 0x275720: 0xca86  .word       0x0000CA86                   # srlv        $t9, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275720u;
    SET_GPR_S32(ctx, 25, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_275724:
    // 0x275724: 0x7e40  sll         $t7, $zero, 25
    ctx->pc = 0x275724u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_275728:
    // 0x275728: 0x0  nop
    ctx->pc = 0x275728u;
    // NOP
label_27572c:
    // 0x27572c: 0x0  nop
    ctx->pc = 0x27572cu;
    // NOP
label_275730:
    // 0x275730: 0xca96  .word       0x0000CA96                   # dsrlv       $t9, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275730u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_275734:
    // 0x275734: 0x5fd0  .word       0x00005FD0                   # mfhi        $t3 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275734u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_275738:
    // 0x275738: 0x0  nop
    ctx->pc = 0x275738u;
    // NOP
label_27573c:
    // 0x27573c: 0x0  nop
    ctx->pc = 0x27573cu;
    // NOP
label_275740:
    // 0x275740: 0xcaa2  .word       0x0000CAA2                   # neg         $t9, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275740u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
label_275744:
    // 0x275744: 0xb8f0  tge         $zero, $zero, 739
    ctx->pc = 0x275744u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275748:
    // 0x275748: 0x0  nop
    ctx->pc = 0x275748u;
    // NOP
label_27574c:
    // 0x27574c: 0x0  nop
    ctx->pc = 0x27574cu;
    // NOP
label_275750:
    // 0x275750: 0xcaba  dsrl        $t9, $zero, 10
    ctx->pc = 0x275750u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) >> 10);
label_275754:
    // 0x275754: 0x78a0  .word       0x000078A0                   # add         $t7, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275754u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_275758:
    // 0x275758: 0x0  nop
    ctx->pc = 0x275758u;
    // NOP
label_27575c:
    // 0x27575c: 0x0  nop
    ctx->pc = 0x27575cu;
    // NOP
label_275760:
    // 0x275760: 0xcaca  .word       0x0000CACA                   # movz        $t9, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275760u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 0));
label_275764:
    // 0x275764: 0xe270  tge         $zero, $zero, 905
    ctx->pc = 0x275764u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275768:
    // 0x275768: 0x0  nop
    ctx->pc = 0x275768u;
    // NOP
label_27576c:
    // 0x27576c: 0x0  nop
    ctx->pc = 0x27576cu;
    // NOP
label_275770:
    // 0x275770: 0xcae7  .word       0x0000CAE7                   # not         $t9, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275770u;
    SET_GPR_U64(ctx, 25, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_275774:
    // 0x275774: 0x7b90  .word       0x00007B90                   # mfhi        $t7 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275774u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_275778:
    // 0x275778: 0x0  nop
    ctx->pc = 0x275778u;
    // NOP
label_27577c:
    // 0x27577c: 0x0  nop
    ctx->pc = 0x27577cu;
    // NOP
label_275780:
    // 0x275780: 0xcaf7  .word       0x0000CAF7                   # INVALID     $zero, $zero, -0x3509 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275780u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x275780 raw=0x0000CAF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_275784:
    // 0x275784: 0x11f00  sll         $v1, $at, 28
    ctx->pc = 0x275784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 28));
label_275788:
    // 0x275788: 0x0  nop
    ctx->pc = 0x275788u;
    // NOP
label_27578c:
    // 0x27578c: 0x0  nop
    ctx->pc = 0x27578cu;
    // NOP
label_275790:
    // 0x275790: 0xcb1b  .word       0x0000CB1B                   # divu        $t9, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275790u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_275794:
    // 0x275794: 0x7880  sll         $t7, $zero, 2
    ctx->pc = 0x275794u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_275798:
    // 0x275798: 0x0  nop
    ctx->pc = 0x275798u;
    // NOP
label_27579c:
    // 0x27579c: 0x0  nop
    ctx->pc = 0x27579cu;
    // NOP
label_2757a0:
    // 0x2757a0: 0xcb2b  .word       0x0000CB2B                   # sltu        $t9, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2757a0u;
    SET_GPR_U64(ctx, 25, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2757a4:
    // 0x2757a4: 0x75e0  .word       0x000075E0                   # add         $t6, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2757a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2757a8:
    // 0x2757a8: 0x0  nop
    ctx->pc = 0x2757a8u;
    // NOP
label_2757ac:
    // 0x2757ac: 0x0  nop
    ctx->pc = 0x2757acu;
    // NOP
label_2757b0:
    // 0x2757b0: 0xcb3a  dsrl        $t9, $zero, 12
    ctx->pc = 0x2757b0u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) >> 12);
label_2757b4:
    // 0x2757b4: 0x4d60  .word       0x00004D60                   # add         $t1, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2757b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2757b8:
    // 0x2757b8: 0x0  nop
    ctx->pc = 0x2757b8u;
    // NOP
label_2757bc:
    // 0x2757bc: 0x0  nop
    ctx->pc = 0x2757bcu;
    // NOP
label_2757c0:
    // 0x2757c0: 0xcb44  .word       0x0000CB44                   # sllv        $t9, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2757c0u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2757c4:
    // 0x2757c4: 0x3640  sll         $a2, $zero, 25
    ctx->pc = 0x2757c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_2757c8:
    // 0x2757c8: 0x0  nop
    ctx->pc = 0x2757c8u;
    // NOP
label_2757cc:
    // 0x2757cc: 0x0  nop
    ctx->pc = 0x2757ccu;
    // NOP
label_2757d0:
    // 0x2757d0: 0xcb4b  .word       0x0000CB4B                   # movn        $t9, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2757d0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 0));
label_2757d4:
    // 0x2757d4: 0x1ecc0  sll         $sp, $at, 19
    ctx->pc = 0x2757d4u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 1), 19));
label_2757d8:
    // 0x2757d8: 0x0  nop
    ctx->pc = 0x2757d8u;
    // NOP
label_2757dc:
    // 0x2757dc: 0x0  nop
    ctx->pc = 0x2757dcu;
    // NOP
label_2757e0:
    // 0x2757e0: 0xcb89  .word       0x0000CB89                   # jalr        $t9, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
label_2757e4:
    if (ctx->pc == 0x2757E4u) {
        ctx->pc = 0x2757E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2757E0u;
        // 0x2757e4: 0xc230  tge         $zero, $zero, 776 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2757E8u;
        goto label_2757e8;
    }
    ctx->pc = 0x2757E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 25, 0x2757E8u);
        ctx->pc = 0x2757E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2757E0u;
        // 0x2757e4: 0xc230  tge         $zero, $zero, 776 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2757E0u, 0x2757E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2757E8u;
label_2757e8:
    // 0x2757e8: 0x0  nop
    ctx->pc = 0x2757e8u;
    // NOP
label_2757ec:
    // 0x2757ec: 0x0  nop
    ctx->pc = 0x2757ecu;
    // NOP
label_2757f0:
    // 0x2757f0: 0xcba2  .word       0x0000CBA2                   # neg         $t9, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2757f0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
label_2757f4:
    // 0x2757f4: 0xf990  .word       0x0000F990                   # mfhi        $ra # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2757f4u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_2757f8:
    // 0x2757f8: 0x0  nop
    ctx->pc = 0x2757f8u;
    // NOP
label_2757fc:
    // 0x2757fc: 0x0  nop
    ctx->pc = 0x2757fcu;
    // NOP
label_275800:
    // 0x275800: 0xcbc2  srl         $t9, $zero, 15
    ctx->pc = 0x275800u;
    SET_GPR_S32(ctx, 25, (int32_t)SRL32(GPR_U32(ctx, 0), 15));
label_275804:
    // 0x275804: 0x26cc0  sll         $t5, $v0, 19
    ctx->pc = 0x275804u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
label_275808:
    // 0x275808: 0x0  nop
    ctx->pc = 0x275808u;
    // NOP
label_27580c:
    // 0x27580c: 0x0  nop
    ctx->pc = 0x27580cu;
    // NOP
label_275810:
    // 0x275810: 0xcc10  .word       0x0000CC10                   # mfhi        $t9 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275810u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_275814:
    // 0x275814: 0xc330  tge         $zero, $zero, 780
    ctx->pc = 0x275814u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275818:
    // 0x275818: 0x0  nop
    ctx->pc = 0x275818u;
    // NOP
label_27581c:
    // 0x27581c: 0x0  nop
    ctx->pc = 0x27581cu;
    // NOP
label_275820:
    // 0x275820: 0xcc29  .word       0x0000CC29                   # mtsa        $zero # 0000CC00 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x275820u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_275824:
    // 0x275824: 0xba70  tge         $zero, $zero, 745
    ctx->pc = 0x275824u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275828:
    // 0x275828: 0x0  nop
    ctx->pc = 0x275828u;
    // NOP
label_27582c:
    // 0x27582c: 0x0  nop
    ctx->pc = 0x27582cu;
    // NOP
label_275830:
    // 0x275830: 0xcc41  .word       0x0000CC41                   # INVALID     $zero, $zero, -0x33BF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275830u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x275830 raw=0x0000CC41"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_275834:
    // 0x275834: 0x114c0  sll         $v0, $at, 19
    ctx->pc = 0x275834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), 19));
label_275838:
    // 0x275838: 0x0  nop
    ctx->pc = 0x275838u;
    // NOP
label_27583c:
    // 0x27583c: 0x0  nop
    ctx->pc = 0x27583cu;
    // NOP
label_275840:
    // 0x275840: 0xcc64  .word       0x0000CC64                   # and         $t9, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275840u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_275844:
    // 0x275844: 0x88d0  .word       0x000088D0                   # mfhi        $s1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275844u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_275848:
    // 0x275848: 0x0  nop
    ctx->pc = 0x275848u;
    // NOP
label_27584c:
    // 0x27584c: 0x0  nop
    ctx->pc = 0x27584cu;
    // NOP
label_275850:
    // 0x275850: 0xcc76  tne         $zero, $zero, 817
    ctx->pc = 0x275850u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275854:
    // 0x275854: 0x9230  tge         $zero, $zero, 584
    ctx->pc = 0x275854u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275858:
    // 0x275858: 0x0  nop
    ctx->pc = 0x275858u;
    // NOP
label_27585c:
    // 0x27585c: 0x0  nop
    ctx->pc = 0x27585cu;
    // NOP
label_275860:
    // 0x275860: 0xcc89  .word       0x0000CC89                   # jalr        $t9, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
label_275864:
    if (ctx->pc == 0x275864u) {
        ctx->pc = 0x275864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275860u;
        // 0x275864: 0xe370  tge         $zero, $zero, 909 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x275868u;
        goto label_275868;
    }
    ctx->pc = 0x275860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 25, 0x275868u);
        ctx->pc = 0x275864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275860u;
        // 0x275864: 0xe370  tge         $zero, $zero, 909 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275860u, 0x275868u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x275868u;
label_275868:
    // 0x275868: 0x0  nop
    ctx->pc = 0x275868u;
    // NOP
label_27586c:
    // 0x27586c: 0x0  nop
    ctx->pc = 0x27586cu;
    // NOP
label_275870:
    // 0x275870: 0xcca6  .word       0x0000CCA6                   # xor         $t9, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275870u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_275874:
    // 0x275874: 0xd470  tge         $zero, $zero, 849
    ctx->pc = 0x275874u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275878:
    // 0x275878: 0x0  nop
    ctx->pc = 0x275878u;
    // NOP
label_27587c:
    // 0x27587c: 0x0  nop
    ctx->pc = 0x27587cu;
    // NOP
label_275880:
    // 0x275880: 0xccc1  .word       0x0000CCC1                   # INVALID     $zero, $zero, -0x333F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275880u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x275880 raw=0x0000CCC1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_275884:
    // 0x275884: 0xdbd0  .word       0x0000DBD0                   # mfhi        $k1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275884u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_275888:
    // 0x275888: 0x0  nop
    ctx->pc = 0x275888u;
    // NOP
label_27588c:
    // 0x27588c: 0x0  nop
    ctx->pc = 0x27588cu;
    // NOP
label_275890:
    // 0x275890: 0xccdd  .word       0x0000CCDD                   # dmultu      $zero, $zero # 0000CCC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275890u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x275890 raw=0x0000CCDD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_275894:
    // 0x275894: 0x6ff0  tge         $zero, $zero, 447
    ctx->pc = 0x275894u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275898:
    // 0x275898: 0x0  nop
    ctx->pc = 0x275898u;
    // NOP
label_27589c:
    // 0x27589c: 0x0  nop
    ctx->pc = 0x27589cu;
    // NOP
label_2758a0:
    // 0x2758a0: 0xcceb  .word       0x0000CCEB                   # sltu        $t9, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2758a0u;
    SET_GPR_U64(ctx, 25, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2758a4:
    // 0x2758a4: 0x5d90  .word       0x00005D90                   # mfhi        $t3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2758a4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2758a8:
    // 0x2758a8: 0x0  nop
    ctx->pc = 0x2758a8u;
    // NOP
label_2758ac:
    // 0x2758ac: 0x0  nop
    ctx->pc = 0x2758acu;
    // NOP
label_2758b0:
    // 0x2758b0: 0xccf7  .word       0x0000CCF7                   # INVALID     $zero, $zero, -0x3309 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2758b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2758B0 raw=0x0000CCF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2758b4:
    // 0x2758b4: 0xcfa0  .word       0x0000CFA0                   # add         $t9, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2758b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_2758b8:
    // 0x2758b8: 0x0  nop
    ctx->pc = 0x2758b8u;
    // NOP
label_2758bc:
    // 0x2758bc: 0x0  nop
    ctx->pc = 0x2758bcu;
    // NOP
label_2758c0:
    // 0x2758c0: 0xcd11  .word       0x0000CD11                   # mthi        $zero # 0000CD00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2758c0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2758c4:
    // 0x2758c4: 0x74e0  .word       0x000074E0                   # add         $t6, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2758c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2758c8:
    // 0x2758c8: 0x0  nop
    ctx->pc = 0x2758c8u;
    // NOP
label_2758cc:
    // 0x2758cc: 0x0  nop
    ctx->pc = 0x2758ccu;
    // NOP
label_2758d0:
    // 0x2758d0: 0xcd20  .word       0x0000CD20                   # add         $t9, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2758d0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_2758d4:
    // 0x2758d4: 0xfdf0  tge         $zero, $zero, 1015
    ctx->pc = 0x2758d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2758d8:
    // 0x2758d8: 0x0  nop
    ctx->pc = 0x2758d8u;
    // NOP
label_2758dc:
    // 0x2758dc: 0x0  nop
    ctx->pc = 0x2758dcu;
    // NOP
label_2758e0:
    // 0x2758e0: 0xcd40  sll         $t9, $zero, 21
    ctx->pc = 0x2758e0u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_2758e4:
    // 0x2758e4: 0xbc30  tge         $zero, $zero, 752
    ctx->pc = 0x2758e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2758e8:
    // 0x2758e8: 0x0  nop
    ctx->pc = 0x2758e8u;
    // NOP
label_2758ec:
    // 0x2758ec: 0x0  nop
    ctx->pc = 0x2758ecu;
    // NOP
label_2758f0:
    // 0x2758f0: 0xcd58  .word       0x0000CD58                   # mult        $t9, $zero, $zero # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2758f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_2758f4:
    // 0x2758f4: 0x10a70  tge         $zero, $at, 41
    ctx->pc = 0x2758f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2758f8:
    // 0x2758f8: 0x0  nop
    ctx->pc = 0x2758f8u;
    // NOP
label_2758fc:
    // 0x2758fc: 0x0  nop
    ctx->pc = 0x2758fcu;
    // NOP
label_275900:
    // 0x275900: 0xcd7a  dsrl        $t9, $zero, 21
    ctx->pc = 0x275900u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) >> 21);
label_275904:
    // 0x275904: 0xb6a0  .word       0x0000B6A0                   # add         $s6, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275904u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_275908:
    // 0x275908: 0x0  nop
    ctx->pc = 0x275908u;
    // NOP
label_27590c:
    // 0x27590c: 0x0  nop
    ctx->pc = 0x27590cu;
    // NOP
label_275910:
    // 0x275910: 0xcd91  .word       0x0000CD91                   # mthi        $zero # 0000CD80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275910u;
    ctx->hi = GPR_U64(ctx, 0);
label_275914:
    // 0x275914: 0x3ed0  .word       0x00003ED0                   # mfhi        $a3 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275914u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_275918:
    // 0x275918: 0x0  nop
    ctx->pc = 0x275918u;
    // NOP
label_27591c:
    // 0x27591c: 0x0  nop
    ctx->pc = 0x27591cu;
    // NOP
label_275920:
    // 0x275920: 0xcd99  .word       0x0000CD99                   # multu       $zero, $zero # 0000CD80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275920u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_275924:
    // 0x275924: 0x2040  sll         $a0, $zero, 1
    ctx->pc = 0x275924u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_275928:
    // 0x275928: 0x0  nop
    ctx->pc = 0x275928u;
    // NOP
label_27592c:
    // 0x27592c: 0x0  nop
    ctx->pc = 0x27592cu;
    // NOP
label_275930:
    // 0x275930: 0xcd9e  .word       0x0000CD9E                   # ddiv        $t9, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275930u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x275930 raw=0x0000CD9E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_275934:
    // 0x275934: 0xe910  .word       0x0000E910                   # mfhi        $sp # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275934u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_275938:
    // 0x275938: 0x0  nop
    ctx->pc = 0x275938u;
    // NOP
label_27593c:
    // 0x27593c: 0x0  nop
    ctx->pc = 0x27593cu;
    // NOP
label_275940:
    // 0x275940: 0xcdbc  dsll32      $t9, $zero, 22
    ctx->pc = 0x275940u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) << (32 + 22));
label_275944:
    // 0x275944: 0x11460  .word       0x00011460                   # add         $v0, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275944u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_275948:
    // 0x275948: 0x0  nop
    ctx->pc = 0x275948u;
    // NOP
label_27594c:
    // 0x27594c: 0x0  nop
    ctx->pc = 0x27594cu;
    // NOP
label_275950:
    // 0x275950: 0xcddf  .word       0x0000CDDF                   # ddivu       $t9, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275950u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x275950 raw=0x0000CDDF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_275954:
    // 0x275954: 0x87d0  .word       0x000087D0                   # mfhi        $s0 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275954u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_275958:
    // 0x275958: 0x0  nop
    ctx->pc = 0x275958u;
    // NOP
label_27595c:
    // 0x27595c: 0x0  nop
    ctx->pc = 0x27595cu;
    // NOP
label_275960:
    // 0x275960: 0xcdf0  tge         $zero, $zero, 823
    ctx->pc = 0x275960u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275964:
    // 0x275964: 0xf360  .word       0x0000F360                   # add         $fp, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275964u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_275968:
    // 0x275968: 0x0  nop
    ctx->pc = 0x275968u;
    // NOP
label_27596c:
    // 0x27596c: 0x0  nop
    ctx->pc = 0x27596cu;
    // NOP
label_275970:
    // 0x275970: 0xce0f  .word       0x0000CE0F                   # sync.p # 0000C800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275970u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_275974:
    // 0x275974: 0x57e0  .word       0x000057E0                   # add         $t2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275974u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_275978:
    // 0x275978: 0x0  nop
    ctx->pc = 0x275978u;
    // NOP
label_27597c:
    // 0x27597c: 0x0  nop
    ctx->pc = 0x27597cu;
    // NOP
label_275980:
    // 0x275980: 0xce1a  .word       0x0000CE1A                   # div         $t9, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275980u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_275984:
    // 0x275984: 0xc2a0  .word       0x0000C2A0                   # add         $t8, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275984u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_275988:
    // 0x275988: 0x0  nop
    ctx->pc = 0x275988u;
    // NOP
label_27598c:
    // 0x27598c: 0x0  nop
    ctx->pc = 0x27598cu;
    // NOP
label_275990:
    // 0x275990: 0xce33  tltu        $zero, $zero, 824
    ctx->pc = 0x275990u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275994:
    // 0x275994: 0x6350  .word       0x00006350                   # mfhi        $t4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275994u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_275998:
    // 0x275998: 0x0  nop
    ctx->pc = 0x275998u;
    // NOP
label_27599c:
    // 0x27599c: 0x0  nop
    ctx->pc = 0x27599cu;
    // NOP
label_2759a0:
    // 0x2759a0: 0xce40  sll         $t9, $zero, 25
    ctx->pc = 0x2759a0u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_2759a4:
    // 0x2759a4: 0x99a0  .word       0x000099A0                   # add         $s3, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2759a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_2759a8:
    // 0x2759a8: 0x0  nop
    ctx->pc = 0x2759a8u;
    // NOP
label_2759ac:
    // 0x2759ac: 0x0  nop
    ctx->pc = 0x2759acu;
    // NOP
label_2759b0:
    // 0x2759b0: 0xce54  .word       0x0000CE54                   # dsllv       $t9, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2759b0u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2759b4:
    // 0x2759b4: 0x34c0  sll         $a2, $zero, 19
    ctx->pc = 0x2759b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_2759b8:
    // 0x2759b8: 0x0  nop
    ctx->pc = 0x2759b8u;
    // NOP
label_2759bc:
    // 0x2759bc: 0x0  nop
    ctx->pc = 0x2759bcu;
    // NOP
label_2759c0:
    // 0x2759c0: 0xce5b  .word       0x0000CE5B                   # divu        $t9, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2759c0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2759c4:
    // 0x2759c4: 0xc9b0  tge         $zero, $zero, 806
    ctx->pc = 0x2759c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2759c8:
    // 0x2759c8: 0x0  nop
    ctx->pc = 0x2759c8u;
    // NOP
label_2759cc:
    // 0x2759cc: 0x0  nop
    ctx->pc = 0x2759ccu;
    // NOP
label_2759d0:
    // 0x2759d0: 0xce75  .word       0x0000CE75                   # INVALID     $zero, $zero, -0x318B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2759d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2759D0 raw=0x0000CE75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2759d4:
    // 0x2759d4: 0xe520  .word       0x0000E520                   # add         $gp, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2759d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_2759d8:
    // 0x2759d8: 0x0  nop
    ctx->pc = 0x2759d8u;
    // NOP
label_2759dc:
    // 0x2759dc: 0x0  nop
    ctx->pc = 0x2759dcu;
    // NOP
label_2759e0:
    // 0x2759e0: 0xce92  .word       0x0000CE92                   # mflo        $t9 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2759e0u;
    SET_GPR_U64(ctx, 25, ctx->lo);
label_2759e4:
    // 0x2759e4: 0x7a90  .word       0x00007A90                   # mfhi        $t7 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2759e4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_2759e8:
    // 0x2759e8: 0x0  nop
    ctx->pc = 0x2759e8u;
    // NOP
label_2759ec:
    // 0x2759ec: 0x0  nop
    ctx->pc = 0x2759ecu;
    // NOP
label_2759f0:
    // 0x2759f0: 0xcea2  .word       0x0000CEA2                   # neg         $t9, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2759f0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
label_2759f4:
    // 0x2759f4: 0x8d70  tge         $zero, $zero, 565
    ctx->pc = 0x2759f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2759f8:
    // 0x2759f8: 0x0  nop
    ctx->pc = 0x2759f8u;
    // NOP
label_2759fc:
    // 0x2759fc: 0x0  nop
    ctx->pc = 0x2759fcu;
    // NOP
label_275a00:
    // 0x275a00: 0xceb4  teq         $zero, $zero, 826
    ctx->pc = 0x275a00u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275a04:
    // 0x275a04: 0x11ba0  .word       0x00011BA0                   # add         $v1, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275a04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_275a08:
    // 0x275a08: 0x0  nop
    ctx->pc = 0x275a08u;
    // NOP
label_275a0c:
    // 0x275a0c: 0x0  nop
    ctx->pc = 0x275a0cu;
    // NOP
label_275a10:
    // 0x275a10: 0xced8  .word       0x0000CED8                   # mult        $t9, $zero, $zero # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x275a10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_275a14:
    // 0x275a14: 0xc430  tge         $zero, $zero, 784
    ctx->pc = 0x275a14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275a18:
    // 0x275a18: 0x0  nop
    ctx->pc = 0x275a18u;
    // NOP
label_275a1c:
    // 0x275a1c: 0x0  nop
    ctx->pc = 0x275a1cu;
    // NOP
label_275a20:
    // 0x275a20: 0xcef1  tgeu        $zero, $zero, 827
    ctx->pc = 0x275a20u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275a24:
    // 0x275a24: 0xb010  mfhi        $s6
    ctx->pc = 0x275a24u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_275a28:
    // 0x275a28: 0x0  nop
    ctx->pc = 0x275a28u;
    // NOP
label_275a2c:
    // 0x275a2c: 0x0  nop
    ctx->pc = 0x275a2cu;
    // NOP
label_275a30:
    // 0x275a30: 0xcf08  .word       0x0000CF08                   # jr          $zero # 0000CF00 <InstrIdType: CPU_SPECIAL>
label_275a34:
    if (ctx->pc == 0x275A34u) {
        ctx->pc = 0x275A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275A30u;
        // 0x275a34: 0xc280  sll         $t8, $zero, 10 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275A38u;
        goto label_275a38;
    }
    ctx->pc = 0x275A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x275A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275A30u;
        // 0x275a34: 0xc280  sll         $t8, $zero, 10 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275A30u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x275A38u;
label_275a38:
    // 0x275a38: 0x0  nop
    ctx->pc = 0x275a38u;
    // NOP
label_275a3c:
    // 0x275a3c: 0x0  nop
    ctx->pc = 0x275a3cu;
    // NOP
    ctx->pc = 0x275a40u;
    return;
}
