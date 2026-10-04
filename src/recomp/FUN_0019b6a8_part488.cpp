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

// Function: FUN_0019b6a8
// Address: 0x19b6a8 - 0x29b6b0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b6a8_part488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x289358u: goto label_289358;
        case 0x28935cu: goto label_28935c;
        case 0x289360u: goto label_289360;
        case 0x289364u: goto label_289364;
        case 0x289368u: goto label_289368;
        case 0x28936cu: goto label_28936c;
        case 0x289370u: goto label_289370;
        case 0x289374u: goto label_289374;
        case 0x289378u: goto label_289378;
        case 0x28937cu: goto label_28937c;
        case 0x289380u: goto label_289380;
        case 0x289384u: goto label_289384;
        case 0x289388u: goto label_289388;
        case 0x28938cu: goto label_28938c;
        case 0x289390u: goto label_289390;
        case 0x289394u: goto label_289394;
        case 0x289398u: goto label_289398;
        case 0x28939cu: goto label_28939c;
        case 0x2893a0u: goto label_2893a0;
        case 0x2893a4u: goto label_2893a4;
        case 0x2893a8u: goto label_2893a8;
        case 0x2893acu: goto label_2893ac;
        case 0x2893b0u: goto label_2893b0;
        case 0x2893b4u: goto label_2893b4;
        case 0x2893b8u: goto label_2893b8;
        case 0x2893bcu: goto label_2893bc;
        case 0x2893c0u: goto label_2893c0;
        case 0x2893c4u: goto label_2893c4;
        case 0x2893c8u: goto label_2893c8;
        case 0x2893ccu: goto label_2893cc;
        case 0x2893d0u: goto label_2893d0;
        case 0x2893d4u: goto label_2893d4;
        case 0x2893d8u: goto label_2893d8;
        case 0x2893dcu: goto label_2893dc;
        case 0x2893e0u: goto label_2893e0;
        case 0x2893e4u: goto label_2893e4;
        case 0x2893e8u: goto label_2893e8;
        case 0x2893ecu: goto label_2893ec;
        case 0x2893f0u: goto label_2893f0;
        case 0x2893f4u: goto label_2893f4;
        case 0x2893f8u: goto label_2893f8;
        case 0x2893fcu: goto label_2893fc;
        case 0x289400u: goto label_289400;
        case 0x289404u: goto label_289404;
        case 0x289408u: goto label_289408;
        case 0x28940cu: goto label_28940c;
        case 0x289410u: goto label_289410;
        case 0x289414u: goto label_289414;
        case 0x289418u: goto label_289418;
        case 0x28941cu: goto label_28941c;
        case 0x289420u: goto label_289420;
        case 0x289424u: goto label_289424;
        case 0x289428u: goto label_289428;
        case 0x28942cu: goto label_28942c;
        case 0x289430u: goto label_289430;
        case 0x289434u: goto label_289434;
        case 0x289438u: goto label_289438;
        case 0x28943cu: goto label_28943c;
        case 0x289440u: goto label_289440;
        case 0x289444u: goto label_289444;
        case 0x289448u: goto label_289448;
        case 0x28944cu: goto label_28944c;
        case 0x289450u: goto label_289450;
        case 0x289454u: goto label_289454;
        case 0x289458u: goto label_289458;
        case 0x28945cu: goto label_28945c;
        case 0x289460u: goto label_289460;
        case 0x289464u: goto label_289464;
        case 0x289468u: goto label_289468;
        case 0x28946cu: goto label_28946c;
        case 0x289470u: goto label_289470;
        case 0x289474u: goto label_289474;
        case 0x289478u: goto label_289478;
        case 0x28947cu: goto label_28947c;
        case 0x289480u: goto label_289480;
        case 0x289484u: goto label_289484;
        case 0x289488u: goto label_289488;
        case 0x28948cu: goto label_28948c;
        case 0x289490u: goto label_289490;
        case 0x289494u: goto label_289494;
        case 0x289498u: goto label_289498;
        case 0x28949cu: goto label_28949c;
        case 0x2894a0u: goto label_2894a0;
        case 0x2894a4u: goto label_2894a4;
        case 0x2894a8u: goto label_2894a8;
        case 0x2894acu: goto label_2894ac;
        case 0x2894b0u: goto label_2894b0;
        case 0x2894b4u: goto label_2894b4;
        case 0x2894b8u: goto label_2894b8;
        case 0x2894bcu: goto label_2894bc;
        case 0x2894c0u: goto label_2894c0;
        case 0x2894c4u: goto label_2894c4;
        case 0x2894c8u: goto label_2894c8;
        case 0x2894ccu: goto label_2894cc;
        case 0x2894d0u: goto label_2894d0;
        case 0x2894d4u: goto label_2894d4;
        case 0x2894d8u: goto label_2894d8;
        case 0x2894dcu: goto label_2894dc;
        case 0x2894e0u: goto label_2894e0;
        case 0x2894e4u: goto label_2894e4;
        case 0x2894e8u: goto label_2894e8;
        case 0x2894ecu: goto label_2894ec;
        case 0x2894f0u: goto label_2894f0;
        case 0x2894f4u: goto label_2894f4;
        case 0x2894f8u: goto label_2894f8;
        case 0x2894fcu: goto label_2894fc;
        case 0x289500u: goto label_289500;
        case 0x289504u: goto label_289504;
        case 0x289508u: goto label_289508;
        case 0x28950cu: goto label_28950c;
        case 0x289510u: goto label_289510;
        case 0x289514u: goto label_289514;
        case 0x289518u: goto label_289518;
        case 0x28951cu: goto label_28951c;
        case 0x289520u: goto label_289520;
        case 0x289524u: goto label_289524;
        case 0x289528u: goto label_289528;
        case 0x28952cu: goto label_28952c;
        case 0x289530u: goto label_289530;
        case 0x289534u: goto label_289534;
        case 0x289538u: goto label_289538;
        case 0x28953cu: goto label_28953c;
        case 0x289540u: goto label_289540;
        case 0x289544u: goto label_289544;
        case 0x289548u: goto label_289548;
        case 0x28954cu: goto label_28954c;
        case 0x289550u: goto label_289550;
        case 0x289554u: goto label_289554;
        case 0x289558u: goto label_289558;
        case 0x28955cu: goto label_28955c;
        case 0x289560u: goto label_289560;
        case 0x289564u: goto label_289564;
        case 0x289568u: goto label_289568;
        case 0x28956cu: goto label_28956c;
        case 0x289570u: goto label_289570;
        case 0x289574u: goto label_289574;
        case 0x289578u: goto label_289578;
        case 0x28957cu: goto label_28957c;
        case 0x289580u: goto label_289580;
        case 0x289584u: goto label_289584;
        case 0x289588u: goto label_289588;
        case 0x28958cu: goto label_28958c;
        case 0x289590u: goto label_289590;
        case 0x289594u: goto label_289594;
        case 0x289598u: goto label_289598;
        case 0x28959cu: goto label_28959c;
        case 0x2895a0u: goto label_2895a0;
        case 0x2895a4u: goto label_2895a4;
        case 0x2895a8u: goto label_2895a8;
        case 0x2895acu: goto label_2895ac;
        case 0x2895b0u: goto label_2895b0;
        case 0x2895b4u: goto label_2895b4;
        case 0x2895b8u: goto label_2895b8;
        case 0x2895bcu: goto label_2895bc;
        case 0x2895c0u: goto label_2895c0;
        case 0x2895c4u: goto label_2895c4;
        case 0x2895c8u: goto label_2895c8;
        case 0x2895ccu: goto label_2895cc;
        case 0x2895d0u: goto label_2895d0;
        case 0x2895d4u: goto label_2895d4;
        case 0x2895d8u: goto label_2895d8;
        case 0x2895dcu: goto label_2895dc;
        case 0x2895e0u: goto label_2895e0;
        case 0x2895e4u: goto label_2895e4;
        case 0x2895e8u: goto label_2895e8;
        case 0x2895ecu: goto label_2895ec;
        case 0x2895f0u: goto label_2895f0;
        case 0x2895f4u: goto label_2895f4;
        case 0x2895f8u: goto label_2895f8;
        case 0x2895fcu: goto label_2895fc;
        case 0x289600u: goto label_289600;
        case 0x289604u: goto label_289604;
        case 0x289608u: goto label_289608;
        case 0x28960cu: goto label_28960c;
        case 0x289610u: goto label_289610;
        case 0x289614u: goto label_289614;
        case 0x289618u: goto label_289618;
        case 0x28961cu: goto label_28961c;
        case 0x289620u: goto label_289620;
        case 0x289624u: goto label_289624;
        case 0x289628u: goto label_289628;
        case 0x28962cu: goto label_28962c;
        case 0x289630u: goto label_289630;
        case 0x289634u: goto label_289634;
        case 0x289638u: goto label_289638;
        case 0x28963cu: goto label_28963c;
        case 0x289640u: goto label_289640;
        case 0x289644u: goto label_289644;
        case 0x289648u: goto label_289648;
        case 0x28964cu: goto label_28964c;
        case 0x289650u: goto label_289650;
        case 0x289654u: goto label_289654;
        case 0x289658u: goto label_289658;
        case 0x28965cu: goto label_28965c;
        case 0x289660u: goto label_289660;
        case 0x289664u: goto label_289664;
        case 0x289668u: goto label_289668;
        case 0x28966cu: goto label_28966c;
        case 0x289670u: goto label_289670;
        case 0x289674u: goto label_289674;
        case 0x289678u: goto label_289678;
        case 0x28967cu: goto label_28967c;
        case 0x289680u: goto label_289680;
        case 0x289684u: goto label_289684;
        case 0x289688u: goto label_289688;
        case 0x28968cu: goto label_28968c;
        case 0x289690u: goto label_289690;
        case 0x289694u: goto label_289694;
        case 0x289698u: goto label_289698;
        case 0x28969cu: goto label_28969c;
        case 0x2896a0u: goto label_2896a0;
        case 0x2896a4u: goto label_2896a4;
        case 0x2896a8u: goto label_2896a8;
        case 0x2896acu: goto label_2896ac;
        case 0x2896b0u: goto label_2896b0;
        case 0x2896b4u: goto label_2896b4;
        case 0x2896b8u: goto label_2896b8;
        case 0x2896bcu: goto label_2896bc;
        case 0x2896c0u: goto label_2896c0;
        case 0x2896c4u: goto label_2896c4;
        case 0x2896c8u: goto label_2896c8;
        case 0x2896ccu: goto label_2896cc;
        case 0x2896d0u: goto label_2896d0;
        case 0x2896d4u: goto label_2896d4;
        case 0x2896d8u: goto label_2896d8;
        case 0x2896dcu: goto label_2896dc;
        case 0x2896e0u: goto label_2896e0;
        case 0x2896e4u: goto label_2896e4;
        case 0x2896e8u: goto label_2896e8;
        case 0x2896ecu: goto label_2896ec;
        case 0x2896f0u: goto label_2896f0;
        case 0x2896f4u: goto label_2896f4;
        case 0x2896f8u: goto label_2896f8;
        case 0x2896fcu: goto label_2896fc;
        case 0x289700u: goto label_289700;
        case 0x289704u: goto label_289704;
        case 0x289708u: goto label_289708;
        case 0x28970cu: goto label_28970c;
        case 0x289710u: goto label_289710;
        case 0x289714u: goto label_289714;
        case 0x289718u: goto label_289718;
        case 0x28971cu: goto label_28971c;
        case 0x289720u: goto label_289720;
        case 0x289724u: goto label_289724;
        case 0x289728u: goto label_289728;
        case 0x28972cu: goto label_28972c;
        case 0x289730u: goto label_289730;
        case 0x289734u: goto label_289734;
        case 0x289738u: goto label_289738;
        case 0x28973cu: goto label_28973c;
        case 0x289740u: goto label_289740;
        case 0x289744u: goto label_289744;
        case 0x289748u: goto label_289748;
        case 0x28974cu: goto label_28974c;
        case 0x289750u: goto label_289750;
        case 0x289754u: goto label_289754;
        case 0x289758u: goto label_289758;
        case 0x28975cu: goto label_28975c;
        case 0x289760u: goto label_289760;
        case 0x289764u: goto label_289764;
        case 0x289768u: goto label_289768;
        case 0x28976cu: goto label_28976c;
        case 0x289770u: goto label_289770;
        case 0x289774u: goto label_289774;
        case 0x289778u: goto label_289778;
        case 0x28977cu: goto label_28977c;
        case 0x289780u: goto label_289780;
        case 0x289784u: goto label_289784;
        case 0x289788u: goto label_289788;
        case 0x28978cu: goto label_28978c;
        case 0x289790u: goto label_289790;
        case 0x289794u: goto label_289794;
        case 0x289798u: goto label_289798;
        case 0x28979cu: goto label_28979c;
        case 0x2897a0u: goto label_2897a0;
        case 0x2897a4u: goto label_2897a4;
        case 0x2897a8u: goto label_2897a8;
        case 0x2897acu: goto label_2897ac;
        case 0x2897b0u: goto label_2897b0;
        case 0x2897b4u: goto label_2897b4;
        case 0x2897b8u: goto label_2897b8;
        case 0x2897bcu: goto label_2897bc;
        case 0x2897c0u: goto label_2897c0;
        case 0x2897c4u: goto label_2897c4;
        case 0x2897c8u: goto label_2897c8;
        case 0x2897ccu: goto label_2897cc;
        case 0x2897d0u: goto label_2897d0;
        case 0x2897d4u: goto label_2897d4;
        case 0x2897d8u: goto label_2897d8;
        case 0x2897dcu: goto label_2897dc;
        case 0x2897e0u: goto label_2897e0;
        case 0x2897e4u: goto label_2897e4;
        case 0x2897e8u: goto label_2897e8;
        case 0x2897ecu: goto label_2897ec;
        case 0x2897f0u: goto label_2897f0;
        case 0x2897f4u: goto label_2897f4;
        case 0x2897f8u: goto label_2897f8;
        case 0x2897fcu: goto label_2897fc;
        case 0x289800u: goto label_289800;
        case 0x289804u: goto label_289804;
        case 0x289808u: goto label_289808;
        case 0x28980cu: goto label_28980c;
        case 0x289810u: goto label_289810;
        case 0x289814u: goto label_289814;
        case 0x289818u: goto label_289818;
        case 0x28981cu: goto label_28981c;
        case 0x289820u: goto label_289820;
        case 0x289824u: goto label_289824;
        case 0x289828u: goto label_289828;
        case 0x28982cu: goto label_28982c;
        case 0x289830u: goto label_289830;
        case 0x289834u: goto label_289834;
        case 0x289838u: goto label_289838;
        case 0x28983cu: goto label_28983c;
        case 0x289840u: goto label_289840;
        case 0x289844u: goto label_289844;
        case 0x289848u: goto label_289848;
        case 0x28984cu: goto label_28984c;
        case 0x289850u: goto label_289850;
        case 0x289854u: goto label_289854;
        case 0x289858u: goto label_289858;
        case 0x28985cu: goto label_28985c;
        case 0x289860u: goto label_289860;
        case 0x289864u: goto label_289864;
        case 0x289868u: goto label_289868;
        case 0x28986cu: goto label_28986c;
        case 0x289870u: goto label_289870;
        case 0x289874u: goto label_289874;
        case 0x289878u: goto label_289878;
        case 0x28987cu: goto label_28987c;
        case 0x289880u: goto label_289880;
        case 0x289884u: goto label_289884;
        case 0x289888u: goto label_289888;
        case 0x28988cu: goto label_28988c;
        case 0x289890u: goto label_289890;
        case 0x289894u: goto label_289894;
        case 0x289898u: goto label_289898;
        case 0x28989cu: goto label_28989c;
        case 0x2898a0u: goto label_2898a0;
        case 0x2898a4u: goto label_2898a4;
        case 0x2898a8u: goto label_2898a8;
        case 0x2898acu: goto label_2898ac;
        case 0x2898b0u: goto label_2898b0;
        case 0x2898b4u: goto label_2898b4;
        case 0x2898b8u: goto label_2898b8;
        case 0x2898bcu: goto label_2898bc;
        case 0x2898c0u: goto label_2898c0;
        case 0x2898c4u: goto label_2898c4;
        case 0x2898c8u: goto label_2898c8;
        case 0x2898ccu: goto label_2898cc;
        case 0x2898d0u: goto label_2898d0;
        case 0x2898d4u: goto label_2898d4;
        case 0x2898d8u: goto label_2898d8;
        case 0x2898dcu: goto label_2898dc;
        case 0x2898e0u: goto label_2898e0;
        case 0x2898e4u: goto label_2898e4;
        case 0x2898e8u: goto label_2898e8;
        case 0x2898ecu: goto label_2898ec;
        case 0x2898f0u: goto label_2898f0;
        case 0x2898f4u: goto label_2898f4;
        case 0x2898f8u: goto label_2898f8;
        case 0x2898fcu: goto label_2898fc;
        case 0x289900u: goto label_289900;
        case 0x289904u: goto label_289904;
        case 0x289908u: goto label_289908;
        case 0x28990cu: goto label_28990c;
        case 0x289910u: goto label_289910;
        case 0x289914u: goto label_289914;
        case 0x289918u: goto label_289918;
        case 0x28991cu: goto label_28991c;
        case 0x289920u: goto label_289920;
        case 0x289924u: goto label_289924;
        case 0x289928u: goto label_289928;
        case 0x28992cu: goto label_28992c;
        case 0x289930u: goto label_289930;
        case 0x289934u: goto label_289934;
        case 0x289938u: goto label_289938;
        case 0x28993cu: goto label_28993c;
        case 0x289940u: goto label_289940;
        case 0x289944u: goto label_289944;
        case 0x289948u: goto label_289948;
        case 0x28994cu: goto label_28994c;
        case 0x289950u: goto label_289950;
        case 0x289954u: goto label_289954;
        case 0x289958u: goto label_289958;
        case 0x28995cu: goto label_28995c;
        case 0x289960u: goto label_289960;
        case 0x289964u: goto label_289964;
        case 0x289968u: goto label_289968;
        case 0x28996cu: goto label_28996c;
        case 0x289970u: goto label_289970;
        case 0x289974u: goto label_289974;
        case 0x289978u: goto label_289978;
        case 0x28997cu: goto label_28997c;
        case 0x289980u: goto label_289980;
        case 0x289984u: goto label_289984;
        case 0x289988u: goto label_289988;
        case 0x28998cu: goto label_28998c;
        case 0x289990u: goto label_289990;
        case 0x289994u: goto label_289994;
        case 0x289998u: goto label_289998;
        case 0x28999cu: goto label_28999c;
        case 0x2899a0u: goto label_2899a0;
        case 0x2899a4u: goto label_2899a4;
        case 0x2899a8u: goto label_2899a8;
        case 0x2899acu: goto label_2899ac;
        case 0x2899b0u: goto label_2899b0;
        case 0x2899b4u: goto label_2899b4;
        case 0x2899b8u: goto label_2899b8;
        case 0x2899bcu: goto label_2899bc;
        case 0x2899c0u: goto label_2899c0;
        case 0x2899c4u: goto label_2899c4;
        case 0x2899c8u: goto label_2899c8;
        case 0x2899ccu: goto label_2899cc;
        case 0x2899d0u: goto label_2899d0;
        case 0x2899d4u: goto label_2899d4;
        case 0x2899d8u: goto label_2899d8;
        case 0x2899dcu: goto label_2899dc;
        case 0x2899e0u: goto label_2899e0;
        case 0x2899e4u: goto label_2899e4;
        case 0x2899e8u: goto label_2899e8;
        case 0x2899ecu: goto label_2899ec;
        case 0x2899f0u: goto label_2899f0;
        case 0x2899f4u: goto label_2899f4;
        case 0x2899f8u: goto label_2899f8;
        case 0x2899fcu: goto label_2899fc;
        case 0x289a00u: goto label_289a00;
        case 0x289a04u: goto label_289a04;
        case 0x289a08u: goto label_289a08;
        case 0x289a0cu: goto label_289a0c;
        case 0x289a10u: goto label_289a10;
        case 0x289a14u: goto label_289a14;
        case 0x289a18u: goto label_289a18;
        case 0x289a1cu: goto label_289a1c;
        case 0x289a20u: goto label_289a20;
        case 0x289a24u: goto label_289a24;
        case 0x289a28u: goto label_289a28;
        case 0x289a2cu: goto label_289a2c;
        case 0x289a30u: goto label_289a30;
        case 0x289a34u: goto label_289a34;
        case 0x289a38u: goto label_289a38;
        case 0x289a3cu: goto label_289a3c;
        case 0x289a40u: goto label_289a40;
        case 0x289a44u: goto label_289a44;
        case 0x289a48u: goto label_289a48;
        case 0x289a4cu: goto label_289a4c;
        case 0x289a50u: goto label_289a50;
        case 0x289a54u: goto label_289a54;
        case 0x289a58u: goto label_289a58;
        case 0x289a5cu: goto label_289a5c;
        case 0x289a60u: goto label_289a60;
        case 0x289a64u: goto label_289a64;
        case 0x289a68u: goto label_289a68;
        case 0x289a6cu: goto label_289a6c;
        case 0x289a70u: goto label_289a70;
        case 0x289a74u: goto label_289a74;
        case 0x289a78u: goto label_289a78;
        case 0x289a7cu: goto label_289a7c;
        case 0x289a80u: goto label_289a80;
        case 0x289a84u: goto label_289a84;
        case 0x289a88u: goto label_289a88;
        case 0x289a8cu: goto label_289a8c;
        case 0x289a90u: goto label_289a90;
        case 0x289a94u: goto label_289a94;
        case 0x289a98u: goto label_289a98;
        case 0x289a9cu: goto label_289a9c;
        case 0x289aa0u: goto label_289aa0;
        case 0x289aa4u: goto label_289aa4;
        case 0x289aa8u: goto label_289aa8;
        case 0x289aacu: goto label_289aac;
        case 0x289ab0u: goto label_289ab0;
        case 0x289ab4u: goto label_289ab4;
        case 0x289ab8u: goto label_289ab8;
        case 0x289abcu: goto label_289abc;
        case 0x289ac0u: goto label_289ac0;
        case 0x289ac4u: goto label_289ac4;
        case 0x289ac8u: goto label_289ac8;
        case 0x289accu: goto label_289acc;
        case 0x289ad0u: goto label_289ad0;
        case 0x289ad4u: goto label_289ad4;
        case 0x289ad8u: goto label_289ad8;
        case 0x289adcu: goto label_289adc;
        case 0x289ae0u: goto label_289ae0;
        case 0x289ae4u: goto label_289ae4;
        case 0x289ae8u: goto label_289ae8;
        case 0x289aecu: goto label_289aec;
        case 0x289af0u: goto label_289af0;
        case 0x289af4u: goto label_289af4;
        case 0x289af8u: goto label_289af8;
        case 0x289afcu: goto label_289afc;
        case 0x289b00u: goto label_289b00;
        case 0x289b04u: goto label_289b04;
        case 0x289b08u: goto label_289b08;
        case 0x289b0cu: goto label_289b0c;
        case 0x289b10u: goto label_289b10;
        case 0x289b14u: goto label_289b14;
        case 0x289b18u: goto label_289b18;
        case 0x289b1cu: goto label_289b1c;
        case 0x289b20u: goto label_289b20;
        case 0x289b24u: goto label_289b24;
        default: return;
    }

label_289358:
    // 0x289358: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289358u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28935c:
    // 0x28935c: 0x0  nop
    ctx->pc = 0x28935cu;
    // NOP
label_289360:
    // 0x289360: 0x22d86  .word       0x00022D86                   # srlv        $a1, $v0, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289360u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_289364:
    // 0x289364: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289364u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289364 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289368:
    // 0x289368: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289368u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28936c:
    // 0x28936c: 0x0  nop
    ctx->pc = 0x28936cu;
    // NOP
label_289370:
    // 0x289370: 0x22d87  .word       0x00022D87                   # srav        $a1, $v0, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289370u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_289374:
    // 0x289374: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289374u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289378:
    // 0x289378: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289378u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28937c:
    // 0x28937c: 0x0  nop
    ctx->pc = 0x28937cu;
    // NOP
label_289380:
    // 0x289380: 0x22d8b  .word       0x00022D8B                   # movn        $a1, $zero, $v0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289380u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_289384:
    // 0x289384: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289384u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289388:
    // 0x289388: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289388u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28938c:
    // 0x28938c: 0x0  nop
    ctx->pc = 0x28938cu;
    // NOP
label_289390:
    // 0x289390: 0x22d8f  .word       0x00022D8F                   # sync.p # 00022800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289390u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_289394:
    // 0x289394: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289394u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289394 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289398:
    // 0x289398: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289398u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28939c:
    // 0x28939c: 0x0  nop
    ctx->pc = 0x28939cu;
    // NOP
label_2893a0:
    // 0x2893a0: 0x22d90  .word       0x00022D90                   # mfhi        $a1 # 00020580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2893a0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_2893a4:
    // 0x2893a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2893a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2893A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2893a8:
    // 0x2893a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2893a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2893ac:
    // 0x2893ac: 0x0  nop
    ctx->pc = 0x2893acu;
    // NOP
label_2893b0:
    // 0x2893b0: 0x22d91  .word       0x00022D91                   # mthi        $zero # 00022D80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2893b0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2893b4:
    // 0x2893b4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2893b4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2893b8:
    // 0x2893b8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2893b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2893bc:
    // 0x2893bc: 0x0  nop
    ctx->pc = 0x2893bcu;
    // NOP
label_2893c0:
    // 0x2893c0: 0x22d95  .word       0x00022D95                   # INVALID     $zero, $v0, 0x2D95 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2893c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2893C0 raw=0x00022D95"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2893c4:
    // 0x2893c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2893c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2893c8:
    // 0x2893c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2893c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2893cc:
    // 0x2893cc: 0x0  nop
    ctx->pc = 0x2893ccu;
    // NOP
label_2893d0:
    // 0x2893d0: 0x22d99  .word       0x00022D99                   # multu       $zero, $v0 # 00002D80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2893d0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2893d4:
    // 0x2893d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2893d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2893D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2893d8:
    // 0x2893d8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2893d8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2893dc:
    // 0x2893dc: 0x0  nop
    ctx->pc = 0x2893dcu;
    // NOP
label_2893e0:
    // 0x2893e0: 0x22d9a  .word       0x00022D9A                   # div         $a1, $zero, $v0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2893e0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2893e4:
    // 0x2893e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2893e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2893E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2893e8:
    // 0x2893e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2893e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2893ec:
    // 0x2893ec: 0x0  nop
    ctx->pc = 0x2893ecu;
    // NOP
label_2893f0:
    // 0x2893f0: 0x22d9b  .word       0x00022D9B                   # divu        $a1, $zero, $v0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2893f0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2893f4:
    // 0x2893f4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2893f4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2893f8:
    // 0x2893f8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2893f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2893fc:
    // 0x2893fc: 0x0  nop
    ctx->pc = 0x2893fcu;
    // NOP
label_289400:
    // 0x289400: 0x22d9f  .word       0x00022D9F                   # ddivu       $a1, $zero, $v0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289400u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x289400 raw=0x00022D9F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289404:
    // 0x289404: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289404u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289408:
    // 0x289408: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289408u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28940c:
    // 0x28940c: 0x0  nop
    ctx->pc = 0x28940cu;
    // NOP
label_289410:
    // 0x289410: 0x22da3  .word       0x00022DA3                   # negu        $a1, $v0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289410u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_289414:
    // 0x289414: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289414u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289414 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289418:
    // 0x289418: 0x680  sll         $zero, $zero, 26
    ctx->pc = 0x289418u;
    
label_28941c:
    // 0x28941c: 0x0  nop
    ctx->pc = 0x28941cu;
    // NOP
label_289420:
    // 0x289420: 0x22da4  .word       0x00022DA4                   # and         $a1, $zero, $v0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289420u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & GPR_U64(ctx, 2));
label_289424:
    // 0x289424: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289424u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289424 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289428:
    // 0x289428: 0x680  sll         $zero, $zero, 26
    ctx->pc = 0x289428u;
    
label_28942c:
    // 0x28942c: 0x0  nop
    ctx->pc = 0x28942cu;
    // NOP
label_289430:
    // 0x289430: 0x22da5  .word       0x00022DA5                   # or          $a1, $zero, $v0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289430u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | GPR_U64(ctx, 2));
label_289434:
    // 0x289434: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289434u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289438:
    // 0x289438: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289438u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28943c:
    // 0x28943c: 0x0  nop
    ctx->pc = 0x28943cu;
    // NOP
label_289440:
    // 0x289440: 0x22da9  .word       0x00022DA9                   # mtsa        $zero # 00022D80 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x289440u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_289444:
    // 0x289444: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289444u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289448:
    // 0x289448: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289448u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28944c:
    // 0x28944c: 0x0  nop
    ctx->pc = 0x28944cu;
    // NOP
label_289450:
    // 0x289450: 0x22dad  .word       0x00022DAD                   # daddu       $a1, $zero, $v0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 2));
label_289454:
    // 0x289454: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289454u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289454 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289458:
    // 0x289458: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289458u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28945c:
    // 0x28945c: 0x0  nop
    ctx->pc = 0x28945cu;
    // NOP
label_289460:
    // 0x289460: 0x22dae  .word       0x00022DAE                   # dsub        $a1, $zero, $v0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289460u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_289464:
    // 0x289464: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289464u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289464 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289468:
    // 0x289468: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289468u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28946c:
    // 0x28946c: 0x0  nop
    ctx->pc = 0x28946cu;
    // NOP
label_289470:
    // 0x289470: 0x22daf  .word       0x00022DAF                   # dsubu       $a1, $zero, $v0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289470u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
label_289474:
    // 0x289474: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289474u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289478:
    // 0x289478: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289478u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28947c:
    // 0x28947c: 0x0  nop
    ctx->pc = 0x28947cu;
    // NOP
label_289480:
    // 0x289480: 0x22db3  tltu        $zero, $v0, 182
    ctx->pc = 0x289480u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_289484:
    // 0x289484: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289484u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289488:
    // 0x289488: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289488u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28948c:
    // 0x28948c: 0x0  nop
    ctx->pc = 0x28948cu;
    // NOP
label_289490:
    // 0x289490: 0x22db7  .word       0x00022DB7                   # INVALID     $zero, $v0, 0x2DB7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289490u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x289490 raw=0x00022DB7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289494:
    // 0x289494: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289494u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289494 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289498:
    // 0x289498: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289498u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28949c:
    // 0x28949c: 0x0  nop
    ctx->pc = 0x28949cu;
    // NOP
label_2894a0:
    // 0x2894a0: 0x22db8  dsll        $a1, $v0, 22
    ctx->pc = 0x2894a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 22);
label_2894a4:
    // 0x2894a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2894a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2894A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2894a8:
    // 0x2894a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2894a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2894ac:
    // 0x2894ac: 0x0  nop
    ctx->pc = 0x2894acu;
    // NOP
label_2894b0:
    // 0x2894b0: 0x22db9  .word       0x00022DB9                   # INVALID     $zero, $v0, 0x2DB9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2894b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2894B0 raw=0x00022DB9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2894b4:
    // 0x2894b4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2894b4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2894b8:
    // 0x2894b8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2894b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2894bc:
    // 0x2894bc: 0x0  nop
    ctx->pc = 0x2894bcu;
    // NOP
label_2894c0:
    // 0x2894c0: 0x22dbd  .word       0x00022DBD                   # INVALID     $zero, $v0, 0x2DBD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2894c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2894C0 raw=0x00022DBD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2894c4:
    // 0x2894c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2894c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2894c8:
    // 0x2894c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2894c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2894cc:
    // 0x2894cc: 0x0  nop
    ctx->pc = 0x2894ccu;
    // NOP
label_2894d0:
    // 0x2894d0: 0x22dc1  .word       0x00022DC1                   # INVALID     $zero, $v0, 0x2DC1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2894d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2894D0 raw=0x00022DC1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2894d4:
    // 0x2894d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2894d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2894D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2894d8:
    // 0x2894d8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2894d8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2894dc:
    // 0x2894dc: 0x0  nop
    ctx->pc = 0x2894dcu;
    // NOP
label_2894e0:
    // 0x2894e0: 0x22dc2  srl         $a1, $v0, 23
    ctx->pc = 0x2894e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
label_2894e4:
    // 0x2894e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2894e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2894E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2894e8:
    // 0x2894e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2894e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2894ec:
    // 0x2894ec: 0x0  nop
    ctx->pc = 0x2894ecu;
    // NOP
label_2894f0:
    // 0x2894f0: 0x22dc3  sra         $a1, $v0, 23
    ctx->pc = 0x2894f0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 23));
label_2894f4:
    // 0x2894f4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2894f4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2894f8:
    // 0x2894f8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2894f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2894fc:
    // 0x2894fc: 0x0  nop
    ctx->pc = 0x2894fcu;
    // NOP
label_289500:
    // 0x289500: 0x22dc7  .word       0x00022DC7                   # srav        $a1, $v0, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289500u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_289504:
    // 0x289504: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289504u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289508:
    // 0x289508: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289508u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28950c:
    // 0x28950c: 0x0  nop
    ctx->pc = 0x28950cu;
    // NOP
label_289510:
    // 0x289510: 0x22dcb  .word       0x00022DCB                   # movn        $a1, $zero, $v0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289510u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_289514:
    // 0x289514: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289514u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289514 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289518:
    // 0x289518: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289518u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28951c:
    // 0x28951c: 0x0  nop
    ctx->pc = 0x28951cu;
    // NOP
label_289520:
    // 0x289520: 0x22dcc  .word       0x00022DCC                   # syscall     183 # 00020000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289520u;
    ctx->pc = 0x289524u;
runtime->handleSyscall(rdram, ctx, 0x8B7u);
label_289524:
    // 0x289524: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289524u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289524 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289528:
    // 0x289528: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289528u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28952c:
    // 0x28952c: 0x0  nop
    ctx->pc = 0x28952cu;
    // NOP
label_289530:
    // 0x289530: 0x22dcd  break       2, 183
    ctx->pc = 0x289530u;
    runtime->handleBreak(rdram, ctx);
label_289534:
    // 0x289534: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289534u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289538:
    // 0x289538: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289538u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28953c:
    // 0x28953c: 0x0  nop
    ctx->pc = 0x28953cu;
    // NOP
label_289540:
    // 0x289540: 0x22dd1  .word       0x00022DD1                   # mthi        $zero # 00022DC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289540u;
    ctx->hi = GPR_U64(ctx, 0);
label_289544:
    // 0x289544: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289544u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289548:
    // 0x289548: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289548u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28954c:
    // 0x28954c: 0x0  nop
    ctx->pc = 0x28954cu;
    // NOP
label_289550:
    // 0x289550: 0x22dd5  .word       0x00022DD5                   # INVALID     $zero, $v0, 0x2DD5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289550u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x289550 raw=0x00022DD5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289554:
    // 0x289554: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289554u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289554 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289558:
    // 0x289558: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289558u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28955c:
    // 0x28955c: 0x0  nop
    ctx->pc = 0x28955cu;
    // NOP
label_289560:
    // 0x289560: 0x22dd6  .word       0x00022DD6                   # dsrlv       $a1, $v0, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289560u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_289564:
    // 0x289564: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289564u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289564 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289568:
    // 0x289568: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289568u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28956c:
    // 0x28956c: 0x0  nop
    ctx->pc = 0x28956cu;
    // NOP
label_289570:
    // 0x289570: 0x22dd7  .word       0x00022DD7                   # dsrav       $a1, $v0, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289570u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_289574:
    // 0x289574: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289574u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289578:
    // 0x289578: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289578u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28957c:
    // 0x28957c: 0x0  nop
    ctx->pc = 0x28957cu;
    // NOP
label_289580:
    // 0x289580: 0x22ddb  .word       0x00022DDB                   # divu        $a1, $zero, $v0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289580u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_289584:
    // 0x289584: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289584u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289588:
    // 0x289588: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289588u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28958c:
    // 0x28958c: 0x0  nop
    ctx->pc = 0x28958cu;
    // NOP
label_289590:
    // 0x289590: 0x22ddf  .word       0x00022DDF                   # ddivu       $a1, $zero, $v0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289590u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x289590 raw=0x00022DDF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289594:
    // 0x289594: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289594u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289594 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289598:
    // 0x289598: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289598u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28959c:
    // 0x28959c: 0x0  nop
    ctx->pc = 0x28959cu;
    // NOP
label_2895a0:
    // 0x2895a0: 0x22de0  .word       0x00022DE0                   # add         $a1, $zero, $v0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2895a0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_2895a4:
    // 0x2895a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2895a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2895A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2895a8:
    // 0x2895a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2895a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2895ac:
    // 0x2895ac: 0x0  nop
    ctx->pc = 0x2895acu;
    // NOP
label_2895b0:
    // 0x2895b0: 0x22de1  .word       0x00022DE1                   # addu        $a1, $zero, $v0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2895b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2895b4:
    // 0x2895b4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2895b4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2895b8:
    // 0x2895b8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2895b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2895bc:
    // 0x2895bc: 0x0  nop
    ctx->pc = 0x2895bcu;
    // NOP
label_2895c0:
    // 0x2895c0: 0x22de5  .word       0x00022DE5                   # or          $a1, $zero, $v0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2895c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | GPR_U64(ctx, 2));
label_2895c4:
    // 0x2895c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2895c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2895c8:
    // 0x2895c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2895c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2895cc:
    // 0x2895cc: 0x0  nop
    ctx->pc = 0x2895ccu;
    // NOP
label_2895d0:
    // 0x2895d0: 0x22de9  .word       0x00022DE9                   # mtsa        $zero # 00022DC0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2895d0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2895d4:
    // 0x2895d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2895d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2895D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2895d8:
    // 0x2895d8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2895d8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2895dc:
    // 0x2895dc: 0x0  nop
    ctx->pc = 0x2895dcu;
    // NOP
label_2895e0:
    // 0x2895e0: 0x22dea  .word       0x00022DEA                   # slt         $a1, $zero, $v0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2895e0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2895e4:
    // 0x2895e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2895e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2895E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2895e8:
    // 0x2895e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2895e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2895ec:
    // 0x2895ec: 0x0  nop
    ctx->pc = 0x2895ecu;
    // NOP
label_2895f0:
    // 0x2895f0: 0x22deb  .word       0x00022DEB                   # sltu        $a1, $zero, $v0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2895f0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2895f4:
    // 0x2895f4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2895f4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2895f8:
    // 0x2895f8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2895f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2895fc:
    // 0x2895fc: 0x0  nop
    ctx->pc = 0x2895fcu;
    // NOP
label_289600:
    // 0x289600: 0x22def  .word       0x00022DEF                   # dsubu       $a1, $zero, $v0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289600u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
label_289604:
    // 0x289604: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289604u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289608:
    // 0x289608: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289608u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28960c:
    // 0x28960c: 0x0  nop
    ctx->pc = 0x28960cu;
    // NOP
label_289610:
    // 0x289610: 0x22df3  tltu        $zero, $v0, 183
    ctx->pc = 0x289610u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_289614:
    // 0x289614: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289614u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289614 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289618:
    // 0x289618: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289618u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28961c:
    // 0x28961c: 0x0  nop
    ctx->pc = 0x28961cu;
    // NOP
label_289620:
    // 0x289620: 0x22df4  teq         $zero, $v0, 183
    ctx->pc = 0x289620u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_289624:
    // 0x289624: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289624u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289624 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289628:
    // 0x289628: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289628u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28962c:
    // 0x28962c: 0x0  nop
    ctx->pc = 0x28962cu;
    // NOP
label_289630:
    // 0x289630: 0x22df5  .word       0x00022DF5                   # INVALID     $zero, $v0, 0x2DF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289630u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x289630 raw=0x00022DF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289634:
    // 0x289634: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289634u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289638:
    // 0x289638: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289638u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28963c:
    // 0x28963c: 0x0  nop
    ctx->pc = 0x28963cu;
    // NOP
label_289640:
    // 0x289640: 0x22df9  .word       0x00022DF9                   # INVALID     $zero, $v0, 0x2DF9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289640u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x289640 raw=0x00022DF9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289644:
    // 0x289644: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289644u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289648:
    // 0x289648: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289648u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28964c:
    // 0x28964c: 0x0  nop
    ctx->pc = 0x28964cu;
    // NOP
label_289650:
    // 0x289650: 0x22dfd  .word       0x00022DFD                   # INVALID     $zero, $v0, 0x2DFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289650u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x289650 raw=0x00022DFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289654:
    // 0x289654: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289654u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289654 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289658:
    // 0x289658: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289658u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28965c:
    // 0x28965c: 0x0  nop
    ctx->pc = 0x28965cu;
    // NOP
label_289660:
    // 0x289660: 0x22dfe  dsrl32      $a1, $v0, 23
    ctx->pc = 0x289660u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 23));
label_289664:
    // 0x289664: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289664u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289664 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289668:
    // 0x289668: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289668u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28966c:
    // 0x28966c: 0x0  nop
    ctx->pc = 0x28966cu;
    // NOP
label_289670:
    // 0x289670: 0x22dff  dsra32      $a1, $v0, 23
    ctx->pc = 0x289670u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 2) >> (32 + 23));
label_289674:
    // 0x289674: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289674u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289678:
    // 0x289678: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289678u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28967c:
    // 0x28967c: 0x0  nop
    ctx->pc = 0x28967cu;
    // NOP
label_289680:
    // 0x289680: 0x22e03  sra         $a1, $v0, 24
    ctx->pc = 0x289680u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 24));
label_289684:
    // 0x289684: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289684u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289688:
    // 0x289688: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289688u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28968c:
    // 0x28968c: 0x0  nop
    ctx->pc = 0x28968cu;
    // NOP
label_289690:
    // 0x289690: 0x22e07  .word       0x00022E07                   # srav        $a1, $v0, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289690u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_289694:
    // 0x289694: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289694u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289694 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289698:
    // 0x289698: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289698u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28969c:
    // 0x28969c: 0x0  nop
    ctx->pc = 0x28969cu;
    // NOP
label_2896a0:
    // 0x2896a0: 0x22e08  .word       0x00022E08                   # jr          $zero # 00022E00 <InstrIdType: CPU_SPECIAL>
label_2896a4:
    if (ctx->pc == 0x2896A4u) {
        ctx->pc = 0x2896A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2896A0u;
        // 0x2896a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2896A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2896A8u;
        goto label_2896a8;
    }
    ctx->pc = 0x2896A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2896A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2896A0u;
        // 0x2896a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2896A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2896A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2896A8u;
label_2896a8:
    // 0x2896a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2896a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2896ac:
    // 0x2896ac: 0x0  nop
    ctx->pc = 0x2896acu;
    // NOP
label_2896b0:
    // 0x2896b0: 0x22e09  .word       0x00022E09                   # jalr        $a1, $zero # 00020600 <InstrIdType: CPU_SPECIAL>
label_2896b4:
    if (ctx->pc == 0x2896B4u) {
        ctx->pc = 0x2896B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2896B0u;
        // 0x2896b4: 0x4  sllv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2896B8u;
        goto label_2896b8;
    }
    ctx->pc = 0x2896B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 5, 0x2896B8u);
        ctx->pc = 0x2896B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2896B0u;
        // 0x2896b4: 0x4  sllv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2896B0u, 0x2896B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2896B8u;
label_2896b8:
    // 0x2896b8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2896b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2896bc:
    // 0x2896bc: 0x0  nop
    ctx->pc = 0x2896bcu;
    // NOP
label_2896c0:
    // 0x2896c0: 0x22e0d  break       2, 184
    ctx->pc = 0x2896c0u;
    runtime->handleBreak(rdram, ctx);
label_2896c4:
    // 0x2896c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2896c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2896c8:
    // 0x2896c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2896c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2896cc:
    // 0x2896cc: 0x0  nop
    ctx->pc = 0x2896ccu;
    // NOP
label_2896d0:
    // 0x2896d0: 0x22e11  .word       0x00022E11                   # mthi        $zero # 00022E00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2896d0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2896d4:
    // 0x2896d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2896d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2896D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2896d8:
    // 0x2896d8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2896d8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2896dc:
    // 0x2896dc: 0x0  nop
    ctx->pc = 0x2896dcu;
    // NOP
label_2896e0:
    // 0x2896e0: 0x22e12  .word       0x00022E12                   # mflo        $a1 # 00020600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2896e0u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_2896e4:
    // 0x2896e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2896e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2896E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2896e8:
    // 0x2896e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2896e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2896ec:
    // 0x2896ec: 0x0  nop
    ctx->pc = 0x2896ecu;
    // NOP
label_2896f0:
    // 0x2896f0: 0x22e13  .word       0x00022E13                   # mtlo        $zero # 00022E00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2896f0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2896f4:
    // 0x2896f4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2896f4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2896f8:
    // 0x2896f8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2896f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2896fc:
    // 0x2896fc: 0x0  nop
    ctx->pc = 0x2896fcu;
    // NOP
label_289700:
    // 0x289700: 0x22e17  .word       0x00022E17                   # dsrav       $a1, $v0, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289700u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_289704:
    // 0x289704: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289704u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289708:
    // 0x289708: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289708u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28970c:
    // 0x28970c: 0x0  nop
    ctx->pc = 0x28970cu;
    // NOP
label_289710:
    // 0x289710: 0x22e1b  .word       0x00022E1B                   # divu        $a1, $zero, $v0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289710u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_289714:
    // 0x289714: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289714u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289714 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289718:
    // 0x289718: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289718u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28971c:
    // 0x28971c: 0x0  nop
    ctx->pc = 0x28971cu;
    // NOP
label_289720:
    // 0x289720: 0x22e1c  .word       0x00022E1C                   # dmult       $zero, $v0 # 00002E00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289720u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x289720 raw=0x00022E1C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289724:
    // 0x289724: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289724u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289724 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289728:
    // 0x289728: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289728u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28972c:
    // 0x28972c: 0x0  nop
    ctx->pc = 0x28972cu;
    // NOP
label_289730:
    // 0x289730: 0x22e1d  .word       0x00022E1D                   # dmultu      $zero, $v0 # 00002E00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289730u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x289730 raw=0x00022E1D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289734:
    // 0x289734: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289734u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289738:
    // 0x289738: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289738u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28973c:
    // 0x28973c: 0x0  nop
    ctx->pc = 0x28973cu;
    // NOP
label_289740:
    // 0x289740: 0x22e21  .word       0x00022E21                   # addu        $a1, $zero, $v0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_289744:
    // 0x289744: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289744u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289748:
    // 0x289748: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289748u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28974c:
    // 0x28974c: 0x0  nop
    ctx->pc = 0x28974cu;
    // NOP
label_289750:
    // 0x289750: 0x22e25  .word       0x00022E25                   # or          $a1, $zero, $v0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289750u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | GPR_U64(ctx, 2));
label_289754:
    // 0x289754: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289754u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289754 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289758:
    // 0x289758: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289758u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28975c:
    // 0x28975c: 0x0  nop
    ctx->pc = 0x28975cu;
    // NOP
label_289760:
    // 0x289760: 0x22e26  .word       0x00022E26                   # xor         $a1, $zero, $v0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289760u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 2));
label_289764:
    // 0x289764: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289764u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289764 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289768:
    // 0x289768: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289768u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28976c:
    // 0x28976c: 0x0  nop
    ctx->pc = 0x28976cu;
    // NOP
label_289770:
    // 0x289770: 0x22e27  .word       0x00022E27                   # nor         $a1, $zero, $v0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289770u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_289774:
    // 0x289774: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289774u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289778:
    // 0x289778: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289778u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28977c:
    // 0x28977c: 0x0  nop
    ctx->pc = 0x28977cu;
    // NOP
label_289780:
    // 0x289780: 0x22e2b  .word       0x00022E2B                   # sltu        $a1, $zero, $v0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289780u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_289784:
    // 0x289784: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289784u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289788:
    // 0x289788: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289788u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28978c:
    // 0x28978c: 0x0  nop
    ctx->pc = 0x28978cu;
    // NOP
label_289790:
    // 0x289790: 0x22e2f  .word       0x00022E2F                   # dsubu       $a1, $zero, $v0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289790u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
label_289794:
    // 0x289794: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289794u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289794 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289798:
    // 0x289798: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289798u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28979c:
    // 0x28979c: 0x0  nop
    ctx->pc = 0x28979cu;
    // NOP
label_2897a0:
    // 0x2897a0: 0x22e30  tge         $zero, $v0, 184
    ctx->pc = 0x2897a0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_2897a4:
    // 0x2897a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2897a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2897A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2897a8:
    // 0x2897a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2897a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2897ac:
    // 0x2897ac: 0x0  nop
    ctx->pc = 0x2897acu;
    // NOP
label_2897b0:
    // 0x2897b0: 0x22e31  tgeu        $zero, $v0, 184
    ctx->pc = 0x2897b0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_2897b4:
    // 0x2897b4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2897b4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2897b8:
    // 0x2897b8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2897b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2897bc:
    // 0x2897bc: 0x0  nop
    ctx->pc = 0x2897bcu;
    // NOP
label_2897c0:
    // 0x2897c0: 0x22e35  .word       0x00022E35                   # INVALID     $zero, $v0, 0x2E35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2897c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2897C0 raw=0x00022E35"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2897c4:
    // 0x2897c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2897c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2897c8:
    // 0x2897c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2897c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2897cc:
    // 0x2897cc: 0x0  nop
    ctx->pc = 0x2897ccu;
    // NOP
label_2897d0:
    // 0x2897d0: 0x22e39  .word       0x00022E39                   # INVALID     $zero, $v0, 0x2E39 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2897d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2897D0 raw=0x00022E39"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2897d4:
    // 0x2897d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2897d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2897D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2897d8:
    // 0x2897d8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2897d8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2897dc:
    // 0x2897dc: 0x0  nop
    ctx->pc = 0x2897dcu;
    // NOP
label_2897e0:
    // 0x2897e0: 0x22e3a  dsrl        $a1, $v0, 24
    ctx->pc = 0x2897e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 24);
label_2897e4:
    // 0x2897e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2897e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2897E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2897e8:
    // 0x2897e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2897e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2897ec:
    // 0x2897ec: 0x0  nop
    ctx->pc = 0x2897ecu;
    // NOP
label_2897f0:
    // 0x2897f0: 0x22e3b  dsra        $a1, $v0, 24
    ctx->pc = 0x2897f0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 2) >> 24);
label_2897f4:
    // 0x2897f4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2897f4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2897f8:
    // 0x2897f8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2897f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2897fc:
    // 0x2897fc: 0x0  nop
    ctx->pc = 0x2897fcu;
    // NOP
label_289800:
    // 0x289800: 0x22e3f  dsra32      $a1, $v0, 24
    ctx->pc = 0x289800u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 2) >> (32 + 24));
label_289804:
    // 0x289804: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289804u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289808:
    // 0x289808: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289808u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28980c:
    // 0x28980c: 0x0  nop
    ctx->pc = 0x28980cu;
    // NOP
label_289810:
    // 0x289810: 0x22e43  sra         $a1, $v0, 25
    ctx->pc = 0x289810u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 25));
label_289814:
    // 0x289814: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289814u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289814 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289818:
    // 0x289818: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289818u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28981c:
    // 0x28981c: 0x0  nop
    ctx->pc = 0x28981cu;
    // NOP
label_289820:
    // 0x289820: 0x22e44  .word       0x00022E44                   # sllv        $a1, $v0, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289820u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_289824:
    // 0x289824: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289824u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289824 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289828:
    // 0x289828: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289828u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28982c:
    // 0x28982c: 0x0  nop
    ctx->pc = 0x28982cu;
    // NOP
label_289830:
    // 0x289830: 0x22e45  .word       0x00022E45                   # INVALID     $zero, $v0, 0x2E45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289830u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x289830 raw=0x00022E45"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289834:
    // 0x289834: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289834u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289838:
    // 0x289838: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289838u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28983c:
    // 0x28983c: 0x0  nop
    ctx->pc = 0x28983cu;
    // NOP
label_289840:
    // 0x289840: 0x22e49  .word       0x00022E49                   # jalr        $a1, $zero # 00020640 <InstrIdType: CPU_SPECIAL>
label_289844:
    if (ctx->pc == 0x289844u) {
        ctx->pc = 0x289844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289840u;
        // 0x289844: 0x4  sllv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289848u;
        goto label_289848;
    }
    ctx->pc = 0x289840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 5, 0x289848u);
        ctx->pc = 0x289844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289840u;
        // 0x289844: 0x4  sllv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289840u, 0x289848u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x289848u;
label_289848:
    // 0x289848: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289848u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28984c:
    // 0x28984c: 0x0  nop
    ctx->pc = 0x28984cu;
    // NOP
label_289850:
    // 0x289850: 0x22e4d  break       2, 185
    ctx->pc = 0x289850u;
    runtime->handleBreak(rdram, ctx);
label_289854:
    // 0x289854: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289854u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289854 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289858:
    // 0x289858: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289858u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28985c:
    // 0x28985c: 0x0  nop
    ctx->pc = 0x28985cu;
    // NOP
label_289860:
    // 0x289860: 0x22e4e  .word       0x00022E4E                   # INVALID     $zero, $v0, 0x2E4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289860u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x289860 raw=0x00022E4E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289864:
    // 0x289864: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289864u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289864 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289868:
    // 0x289868: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289868u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28986c:
    // 0x28986c: 0x0  nop
    ctx->pc = 0x28986cu;
    // NOP
label_289870:
    // 0x289870: 0x22e4f  .word       0x00022E4F                   # sync.p # 00022800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289870u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_289874:
    // 0x289874: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289874u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289878:
    // 0x289878: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289878u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28987c:
    // 0x28987c: 0x0  nop
    ctx->pc = 0x28987cu;
    // NOP
label_289880:
    // 0x289880: 0x22e53  .word       0x00022E53                   # mtlo        $zero # 00022E40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289880u;
    ctx->lo = GPR_U64(ctx, 0);
label_289884:
    // 0x289884: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289884u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289888:
    // 0x289888: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289888u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28988c:
    // 0x28988c: 0x0  nop
    ctx->pc = 0x28988cu;
    // NOP
label_289890:
    // 0x289890: 0x22e57  .word       0x00022E57                   # dsrav       $a1, $v0, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289890u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_289894:
    // 0x289894: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289894u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289894 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289898:
    // 0x289898: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289898u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28989c:
    // 0x28989c: 0x0  nop
    ctx->pc = 0x28989cu;
    // NOP
label_2898a0:
    // 0x2898a0: 0x22e58  .word       0x00022E58                   # mult        $a1, $zero, $v0 # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2898a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2898a4:
    // 0x2898a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2898a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2898A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2898a8:
    // 0x2898a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2898a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2898ac:
    // 0x2898ac: 0x0  nop
    ctx->pc = 0x2898acu;
    // NOP
label_2898b0:
    // 0x2898b0: 0x22e59  .word       0x00022E59                   # multu       $zero, $v0 # 00002E40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2898b0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2898b4:
    // 0x2898b4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2898b4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2898b8:
    // 0x2898b8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2898b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2898bc:
    // 0x2898bc: 0x0  nop
    ctx->pc = 0x2898bcu;
    // NOP
label_2898c0:
    // 0x2898c0: 0x22e5d  .word       0x00022E5D                   # dmultu      $zero, $v0 # 00002E40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2898c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2898C0 raw=0x00022E5D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2898c4:
    // 0x2898c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2898c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2898c8:
    // 0x2898c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2898c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2898cc:
    // 0x2898cc: 0x0  nop
    ctx->pc = 0x2898ccu;
    // NOP
label_2898d0:
    // 0x2898d0: 0x22e61  .word       0x00022E61                   # addu        $a1, $zero, $v0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2898d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2898d4:
    // 0x2898d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2898d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2898D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2898d8:
    // 0x2898d8: 0x7f0  tge         $zero, $zero, 31
    ctx->pc = 0x2898d8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2898dc:
    // 0x2898dc: 0x0  nop
    ctx->pc = 0x2898dcu;
    // NOP
label_2898e0:
    // 0x2898e0: 0x22e62  .word       0x00022E62                   # neg         $a1, $v0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2898e0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 2), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2898e4:
    // 0x2898e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2898e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2898E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2898e8:
    // 0x2898e8: 0x7f0  tge         $zero, $zero, 31
    ctx->pc = 0x2898e8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2898ec:
    // 0x2898ec: 0x0  nop
    ctx->pc = 0x2898ecu;
    // NOP
label_2898f0:
    // 0x2898f0: 0x22e63  .word       0x00022E63                   # negu        $a1, $v0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2898f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2898f4:
    // 0x2898f4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2898f4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2898f8:
    // 0x2898f8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2898f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2898fc:
    // 0x2898fc: 0x0  nop
    ctx->pc = 0x2898fcu;
    // NOP
label_289900:
    // 0x289900: 0x22e67  .word       0x00022E67                   # nor         $a1, $zero, $v0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289900u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_289904:
    // 0x289904: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289904u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289908:
    // 0x289908: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289908u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28990c:
    // 0x28990c: 0x0  nop
    ctx->pc = 0x28990cu;
    // NOP
label_289910:
    // 0x289910: 0x22e6b  .word       0x00022E6B                   # sltu        $a1, $zero, $v0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289910u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_289914:
    // 0x289914: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289914u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289914 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289918:
    // 0x289918: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289918u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28991c:
    // 0x28991c: 0x0  nop
    ctx->pc = 0x28991cu;
    // NOP
label_289920:
    // 0x289920: 0x22e6c  .word       0x00022E6C                   # dadd        $a1, $zero, $v0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289920u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_289924:
    // 0x289924: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289924u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289924 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289928:
    // 0x289928: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289928u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28992c:
    // 0x28992c: 0x0  nop
    ctx->pc = 0x28992cu;
    // NOP
label_289930:
    // 0x289930: 0x22e6d  .word       0x00022E6D                   # daddu       $a1, $zero, $v0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 2));
label_289934:
    // 0x289934: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289934u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289938:
    // 0x289938: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289938u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28993c:
    // 0x28993c: 0x0  nop
    ctx->pc = 0x28993cu;
    // NOP
label_289940:
    // 0x289940: 0x22e71  tgeu        $zero, $v0, 185
    ctx->pc = 0x289940u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_289944:
    // 0x289944: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289944u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289948:
    // 0x289948: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289948u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28994c:
    // 0x28994c: 0x0  nop
    ctx->pc = 0x28994cu;
    // NOP
label_289950:
    // 0x289950: 0x22e75  .word       0x00022E75                   # INVALID     $zero, $v0, 0x2E75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289950u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x289950 raw=0x00022E75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289954:
    // 0x289954: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289954u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289954 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289958:
    // 0x289958: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289958u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28995c:
    // 0x28995c: 0x0  nop
    ctx->pc = 0x28995cu;
    // NOP
label_289960:
    // 0x289960: 0x22e76  tne         $zero, $v0, 185
    ctx->pc = 0x289960u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_289964:
    // 0x289964: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289964u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289964 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289968:
    // 0x289968: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289968u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28996c:
    // 0x28996c: 0x0  nop
    ctx->pc = 0x28996cu;
    // NOP
label_289970:
    // 0x289970: 0x22e77  .word       0x00022E77                   # INVALID     $zero, $v0, 0x2E77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289970u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x289970 raw=0x00022E77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289974:
    // 0x289974: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289974u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289978:
    // 0x289978: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289978u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28997c:
    // 0x28997c: 0x0  nop
    ctx->pc = 0x28997cu;
    // NOP
label_289980:
    // 0x289980: 0x22e7b  dsra        $a1, $v0, 25
    ctx->pc = 0x289980u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 2) >> 25);
label_289984:
    // 0x289984: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289984u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289988:
    // 0x289988: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289988u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_28998c:
    // 0x28998c: 0x0  nop
    ctx->pc = 0x28998cu;
    // NOP
label_289990:
    // 0x289990: 0x22e7f  dsra32      $a1, $v0, 25
    ctx->pc = 0x289990u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 2) >> (32 + 25));
label_289994:
    // 0x289994: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289994u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289994 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289998:
    // 0x289998: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289998u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28999c:
    // 0x28999c: 0x0  nop
    ctx->pc = 0x28999cu;
    // NOP
label_2899a0:
    // 0x2899a0: 0x22e80  sll         $a1, $v0, 26
    ctx->pc = 0x2899a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 26));
label_2899a4:
    // 0x2899a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2899a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2899A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2899a8:
    // 0x2899a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2899a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2899ac:
    // 0x2899ac: 0x0  nop
    ctx->pc = 0x2899acu;
    // NOP
label_2899b0:
    // 0x2899b0: 0x22e81  .word       0x00022E81                   # INVALID     $zero, $v0, 0x2E81 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2899b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2899B0 raw=0x00022E81"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2899b4:
    // 0x2899b4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2899b4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2899b8:
    // 0x2899b8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2899b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2899bc:
    // 0x2899bc: 0x0  nop
    ctx->pc = 0x2899bcu;
    // NOP
label_2899c0:
    // 0x2899c0: 0x22e85  .word       0x00022E85                   # INVALID     $zero, $v0, 0x2E85 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2899c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2899C0 raw=0x00022E85"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2899c4:
    // 0x2899c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2899c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2899c8:
    // 0x2899c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2899c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2899cc:
    // 0x2899cc: 0x0  nop
    ctx->pc = 0x2899ccu;
    // NOP
label_2899d0:
    // 0x2899d0: 0x22e89  .word       0x00022E89                   # jalr        $a1, $zero # 00020680 <InstrIdType: CPU_SPECIAL>
label_2899d4:
    if (ctx->pc == 0x2899D4u) {
        ctx->pc = 0x2899D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2899D0u;
        // 0x2899d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2899D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2899D8u;
        goto label_2899d8;
    }
    ctx->pc = 0x2899D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 5, 0x2899D8u);
        ctx->pc = 0x2899D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2899D0u;
        // 0x2899d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2899D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2899D0u, 0x2899D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2899D8u;
label_2899d8:
    // 0x2899d8: 0x7f0  tge         $zero, $zero, 31
    ctx->pc = 0x2899d8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2899dc:
    // 0x2899dc: 0x0  nop
    ctx->pc = 0x2899dcu;
    // NOP
label_2899e0:
    // 0x2899e0: 0x22e8a  .word       0x00022E8A                   # movz        $a1, $zero, $v0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2899e0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_2899e4:
    // 0x2899e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2899e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2899E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2899e8:
    // 0x2899e8: 0x7f0  tge         $zero, $zero, 31
    ctx->pc = 0x2899e8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2899ec:
    // 0x2899ec: 0x0  nop
    ctx->pc = 0x2899ecu;
    // NOP
label_2899f0:
    // 0x2899f0: 0x22e8b  .word       0x00022E8B                   # movn        $a1, $zero, $v0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2899f0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_2899f4:
    // 0x2899f4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2899f4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2899f8:
    // 0x2899f8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2899f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2899fc:
    // 0x2899fc: 0x0  nop
    ctx->pc = 0x2899fcu;
    // NOP
label_289a00:
    // 0x289a00: 0x22e8f  .word       0x00022E8F                   # sync.p # 00022800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289a00u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_289a04:
    // 0x289a04: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289a04u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289a08:
    // 0x289a08: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289a08u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289a0c:
    // 0x289a0c: 0x0  nop
    ctx->pc = 0x289a0cu;
    // NOP
label_289a10:
    // 0x289a10: 0x22e93  .word       0x00022E93                   # mtlo        $zero # 00022E80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289a10u;
    ctx->lo = GPR_U64(ctx, 0);
label_289a14:
    // 0x289a14: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289a14u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289A14 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289a18:
    // 0x289a18: 0x7f0  tge         $zero, $zero, 31
    ctx->pc = 0x289a18u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_289a1c:
    // 0x289a1c: 0x0  nop
    ctx->pc = 0x289a1cu;
    // NOP
label_289a20:
    // 0x289a20: 0x22e94  .word       0x00022E94                   # dsllv       $a1, $v0, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289a20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (GPR_U32(ctx, 0) & 0x3F));
label_289a24:
    // 0x289a24: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289a24u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289A24 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289a28:
    // 0x289a28: 0x7f0  tge         $zero, $zero, 31
    ctx->pc = 0x289a28u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_289a2c:
    // 0x289a2c: 0x0  nop
    ctx->pc = 0x289a2cu;
    // NOP
label_289a30:
    // 0x289a30: 0x22e95  .word       0x00022E95                   # INVALID     $zero, $v0, 0x2E95 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289a30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x289A30 raw=0x00022E95"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289a34:
    // 0x289a34: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289a34u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289a38:
    // 0x289a38: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289a38u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289a3c:
    // 0x289a3c: 0x0  nop
    ctx->pc = 0x289a3cu;
    // NOP
label_289a40:
    // 0x289a40: 0x22e99  .word       0x00022E99                   # multu       $zero, $v0 # 00002E80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289a40u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_289a44:
    // 0x289a44: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289a44u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289a48:
    // 0x289a48: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289a48u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289a4c:
    // 0x289a4c: 0x0  nop
    ctx->pc = 0x289a4cu;
    // NOP
label_289a50:
    // 0x289a50: 0x22e9d  .word       0x00022E9D                   # dmultu      $zero, $v0 # 00002E80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289a50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x289A50 raw=0x00022E9D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289a54:
    // 0x289a54: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289a54u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289A54 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289a58:
    // 0x289a58: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289a58u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_289a5c:
    // 0x289a5c: 0x0  nop
    ctx->pc = 0x289a5cu;
    // NOP
label_289a60:
    // 0x289a60: 0x22e9e  .word       0x00022E9E                   # ddiv        $a1, $zero, $v0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289a60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x289A60 raw=0x00022E9E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289a64:
    // 0x289a64: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289a64u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289A64 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289a68:
    // 0x289a68: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289a68u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_289a6c:
    // 0x289a6c: 0x0  nop
    ctx->pc = 0x289a6cu;
    // NOP
label_289a70:
    // 0x289a70: 0x22e9f  .word       0x00022E9F                   # ddivu       $a1, $zero, $v0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289a70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x289A70 raw=0x00022E9F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289a74:
    // 0x289a74: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289a74u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289a78:
    // 0x289a78: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289a78u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289a7c:
    // 0x289a7c: 0x0  nop
    ctx->pc = 0x289a7cu;
    // NOP
label_289a80:
    // 0x289a80: 0x22ea3  .word       0x00022EA3                   # negu        $a1, $v0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289a80u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_289a84:
    // 0x289a84: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289a84u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289a88:
    // 0x289a88: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289a88u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289a8c:
    // 0x289a8c: 0x0  nop
    ctx->pc = 0x289a8cu;
    // NOP
label_289a90:
    // 0x289a90: 0x22ea7  .word       0x00022EA7                   # nor         $a1, $zero, $v0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289a90u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_289a94:
    // 0x289a94: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289a94u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289A94 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289a98:
    // 0x289a98: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289a98u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_289a9c:
    // 0x289a9c: 0x0  nop
    ctx->pc = 0x289a9cu;
    // NOP
label_289aa0:
    // 0x289aa0: 0x22ea8  .word       0x00022EA8                   # mfsa        $a1 # 00020680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x289aa0u;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_289aa4:
    // 0x289aa4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289aa4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289AA4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289aa8:
    // 0x289aa8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_289aac:
    // 0x289aac: 0x0  nop
    ctx->pc = 0x289aacu;
    // NOP
label_289ab0:
    // 0x289ab0: 0x22ea9  .word       0x00022EA9                   # mtsa        $zero # 00022E80 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x289ab0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_289ab4:
    // 0x289ab4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289ab4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289ab8:
    // 0x289ab8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289ab8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289abc:
    // 0x289abc: 0x0  nop
    ctx->pc = 0x289abcu;
    // NOP
label_289ac0:
    // 0x289ac0: 0x22ead  .word       0x00022EAD                   # daddu       $a1, $zero, $v0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 2));
label_289ac4:
    // 0x289ac4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289ac4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289ac8:
    // 0x289ac8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289ac8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289acc:
    // 0x289acc: 0x0  nop
    ctx->pc = 0x289accu;
    // NOP
label_289ad0:
    // 0x289ad0: 0x22eb1  tgeu        $zero, $v0, 186
    ctx->pc = 0x289ad0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_289ad4:
    // 0x289ad4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289ad4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289AD4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289ad8:
    // 0x289ad8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_289adc:
    // 0x289adc: 0x0  nop
    ctx->pc = 0x289adcu;
    // NOP
label_289ae0:
    // 0x289ae0: 0x22eb2  tlt         $zero, $v0, 186
    ctx->pc = 0x289ae0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_289ae4:
    // 0x289ae4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289ae4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289AE4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289ae8:
    // 0x289ae8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_289aec:
    // 0x289aec: 0x0  nop
    ctx->pc = 0x289aecu;
    // NOP
label_289af0:
    // 0x289af0: 0x22eb3  tltu        $zero, $v0, 186
    ctx->pc = 0x289af0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_289af4:
    // 0x289af4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289af4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289af8:
    // 0x289af8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289af8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289afc:
    // 0x289afc: 0x0  nop
    ctx->pc = 0x289afcu;
    // NOP
label_289b00:
    // 0x289b00: 0x22eb7  .word       0x00022EB7                   # INVALID     $zero, $v0, 0x2EB7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289b00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x289B00 raw=0x00022EB7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289b04:
    // 0x289b04: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289b04u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289b08:
    // 0x289b08: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289b08u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289b0c:
    // 0x289b0c: 0x0  nop
    ctx->pc = 0x289b0cu;
    // NOP
label_289b10:
    // 0x289b10: 0x22ebb  dsra        $a1, $v0, 26
    ctx->pc = 0x289b10u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 2) >> 26);
label_289b14:
    // 0x289b14: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289b14u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289B14 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_289b18:
    // 0x289b18: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289b18u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_289b1c:
    // 0x289b1c: 0x0  nop
    ctx->pc = 0x289b1cu;
    // NOP
label_289b20:
    // 0x289b20: 0x22ebc  dsll32      $a1, $v0, 26
    ctx->pc = 0x289b20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 26));
label_289b24:
    // 0x289b24: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289b24u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289B24 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->pc = 0x289b28u;
    return;
}
