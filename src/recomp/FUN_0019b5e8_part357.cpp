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

// Function: FUN_0019b5e8
// Address: 0x19b5e8 - 0x29b5f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b5e8_part357(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x249328u: goto label_249328;
        case 0x24932cu: goto label_24932c;
        case 0x249330u: goto label_249330;
        case 0x249334u: goto label_249334;
        case 0x249338u: goto label_249338;
        case 0x24933cu: goto label_24933c;
        case 0x249340u: goto label_249340;
        case 0x249344u: goto label_249344;
        case 0x249348u: goto label_249348;
        case 0x24934cu: goto label_24934c;
        case 0x249350u: goto label_249350;
        case 0x249354u: goto label_249354;
        case 0x249358u: goto label_249358;
        case 0x24935cu: goto label_24935c;
        case 0x249360u: goto label_249360;
        case 0x249364u: goto label_249364;
        case 0x249368u: goto label_249368;
        case 0x24936cu: goto label_24936c;
        case 0x249370u: goto label_249370;
        case 0x249374u: goto label_249374;
        case 0x249378u: goto label_249378;
        case 0x24937cu: goto label_24937c;
        case 0x249380u: goto label_249380;
        case 0x249384u: goto label_249384;
        case 0x249388u: goto label_249388;
        case 0x24938cu: goto label_24938c;
        case 0x249390u: goto label_249390;
        case 0x249394u: goto label_249394;
        case 0x249398u: goto label_249398;
        case 0x24939cu: goto label_24939c;
        case 0x2493a0u: goto label_2493a0;
        case 0x2493a4u: goto label_2493a4;
        case 0x2493a8u: goto label_2493a8;
        case 0x2493acu: goto label_2493ac;
        case 0x2493b0u: goto label_2493b0;
        case 0x2493b4u: goto label_2493b4;
        case 0x2493b8u: goto label_2493b8;
        case 0x2493bcu: goto label_2493bc;
        case 0x2493c0u: goto label_2493c0;
        case 0x2493c4u: goto label_2493c4;
        case 0x2493c8u: goto label_2493c8;
        case 0x2493ccu: goto label_2493cc;
        case 0x2493d0u: goto label_2493d0;
        case 0x2493d4u: goto label_2493d4;
        case 0x2493d8u: goto label_2493d8;
        case 0x2493dcu: goto label_2493dc;
        case 0x2493e0u: goto label_2493e0;
        case 0x2493e4u: goto label_2493e4;
        case 0x2493e8u: goto label_2493e8;
        case 0x2493ecu: goto label_2493ec;
        case 0x2493f0u: goto label_2493f0;
        case 0x2493f4u: goto label_2493f4;
        case 0x2493f8u: goto label_2493f8;
        case 0x2493fcu: goto label_2493fc;
        case 0x249400u: goto label_249400;
        case 0x249404u: goto label_249404;
        case 0x249408u: goto label_249408;
        case 0x24940cu: goto label_24940c;
        case 0x249410u: goto label_249410;
        case 0x249414u: goto label_249414;
        case 0x249418u: goto label_249418;
        case 0x24941cu: goto label_24941c;
        case 0x249420u: goto label_249420;
        case 0x249424u: goto label_249424;
        case 0x249428u: goto label_249428;
        case 0x24942cu: goto label_24942c;
        case 0x249430u: goto label_249430;
        case 0x249434u: goto label_249434;
        case 0x249438u: goto label_249438;
        case 0x24943cu: goto label_24943c;
        case 0x249440u: goto label_249440;
        case 0x249444u: goto label_249444;
        case 0x249448u: goto label_249448;
        case 0x24944cu: goto label_24944c;
        case 0x249450u: goto label_249450;
        case 0x249454u: goto label_249454;
        case 0x249458u: goto label_249458;
        case 0x24945cu: goto label_24945c;
        case 0x249460u: goto label_249460;
        case 0x249464u: goto label_249464;
        case 0x249468u: goto label_249468;
        case 0x24946cu: goto label_24946c;
        case 0x249470u: goto label_249470;
        case 0x249474u: goto label_249474;
        case 0x249478u: goto label_249478;
        case 0x24947cu: goto label_24947c;
        case 0x249480u: goto label_249480;
        case 0x249484u: goto label_249484;
        case 0x249488u: goto label_249488;
        case 0x24948cu: goto label_24948c;
        case 0x249490u: goto label_249490;
        case 0x249494u: goto label_249494;
        case 0x249498u: goto label_249498;
        case 0x24949cu: goto label_24949c;
        case 0x2494a0u: goto label_2494a0;
        case 0x2494a4u: goto label_2494a4;
        case 0x2494a8u: goto label_2494a8;
        case 0x2494acu: goto label_2494ac;
        case 0x2494b0u: goto label_2494b0;
        case 0x2494b4u: goto label_2494b4;
        case 0x2494b8u: goto label_2494b8;
        case 0x2494bcu: goto label_2494bc;
        case 0x2494c0u: goto label_2494c0;
        case 0x2494c4u: goto label_2494c4;
        case 0x2494c8u: goto label_2494c8;
        case 0x2494ccu: goto label_2494cc;
        case 0x2494d0u: goto label_2494d0;
        case 0x2494d4u: goto label_2494d4;
        case 0x2494d8u: goto label_2494d8;
        case 0x2494dcu: goto label_2494dc;
        case 0x2494e0u: goto label_2494e0;
        case 0x2494e4u: goto label_2494e4;
        case 0x2494e8u: goto label_2494e8;
        case 0x2494ecu: goto label_2494ec;
        case 0x2494f0u: goto label_2494f0;
        case 0x2494f4u: goto label_2494f4;
        case 0x2494f8u: goto label_2494f8;
        case 0x2494fcu: goto label_2494fc;
        case 0x249500u: goto label_249500;
        case 0x249504u: goto label_249504;
        case 0x249508u: goto label_249508;
        case 0x24950cu: goto label_24950c;
        case 0x249510u: goto label_249510;
        case 0x249514u: goto label_249514;
        case 0x249518u: goto label_249518;
        case 0x24951cu: goto label_24951c;
        case 0x249520u: goto label_249520;
        case 0x249524u: goto label_249524;
        case 0x249528u: goto label_249528;
        case 0x24952cu: goto label_24952c;
        case 0x249530u: goto label_249530;
        case 0x249534u: goto label_249534;
        case 0x249538u: goto label_249538;
        case 0x24953cu: goto label_24953c;
        case 0x249540u: goto label_249540;
        case 0x249544u: goto label_249544;
        case 0x249548u: goto label_249548;
        case 0x24954cu: goto label_24954c;
        case 0x249550u: goto label_249550;
        case 0x249554u: goto label_249554;
        case 0x249558u: goto label_249558;
        case 0x24955cu: goto label_24955c;
        case 0x249560u: goto label_249560;
        case 0x249564u: goto label_249564;
        case 0x249568u: goto label_249568;
        case 0x24956cu: goto label_24956c;
        case 0x249570u: goto label_249570;
        case 0x249574u: goto label_249574;
        case 0x249578u: goto label_249578;
        case 0x24957cu: goto label_24957c;
        case 0x249580u: goto label_249580;
        case 0x249584u: goto label_249584;
        case 0x249588u: goto label_249588;
        case 0x24958cu: goto label_24958c;
        case 0x249590u: goto label_249590;
        case 0x249594u: goto label_249594;
        case 0x249598u: goto label_249598;
        case 0x24959cu: goto label_24959c;
        case 0x2495a0u: goto label_2495a0;
        case 0x2495a4u: goto label_2495a4;
        case 0x2495a8u: goto label_2495a8;
        case 0x2495acu: goto label_2495ac;
        case 0x2495b0u: goto label_2495b0;
        case 0x2495b4u: goto label_2495b4;
        case 0x2495b8u: goto label_2495b8;
        case 0x2495bcu: goto label_2495bc;
        case 0x2495c0u: goto label_2495c0;
        case 0x2495c4u: goto label_2495c4;
        case 0x2495c8u: goto label_2495c8;
        case 0x2495ccu: goto label_2495cc;
        case 0x2495d0u: goto label_2495d0;
        case 0x2495d4u: goto label_2495d4;
        case 0x2495d8u: goto label_2495d8;
        case 0x2495dcu: goto label_2495dc;
        case 0x2495e0u: goto label_2495e0;
        case 0x2495e4u: goto label_2495e4;
        case 0x2495e8u: goto label_2495e8;
        case 0x2495ecu: goto label_2495ec;
        case 0x2495f0u: goto label_2495f0;
        case 0x2495f4u: goto label_2495f4;
        case 0x2495f8u: goto label_2495f8;
        case 0x2495fcu: goto label_2495fc;
        case 0x249600u: goto label_249600;
        case 0x249604u: goto label_249604;
        case 0x249608u: goto label_249608;
        case 0x24960cu: goto label_24960c;
        case 0x249610u: goto label_249610;
        case 0x249614u: goto label_249614;
        case 0x249618u: goto label_249618;
        case 0x24961cu: goto label_24961c;
        case 0x249620u: goto label_249620;
        case 0x249624u: goto label_249624;
        case 0x249628u: goto label_249628;
        case 0x24962cu: goto label_24962c;
        case 0x249630u: goto label_249630;
        case 0x249634u: goto label_249634;
        case 0x249638u: goto label_249638;
        case 0x24963cu: goto label_24963c;
        case 0x249640u: goto label_249640;
        case 0x249644u: goto label_249644;
        case 0x249648u: goto label_249648;
        case 0x24964cu: goto label_24964c;
        case 0x249650u: goto label_249650;
        case 0x249654u: goto label_249654;
        case 0x249658u: goto label_249658;
        case 0x24965cu: goto label_24965c;
        case 0x249660u: goto label_249660;
        case 0x249664u: goto label_249664;
        case 0x249668u: goto label_249668;
        case 0x24966cu: goto label_24966c;
        case 0x249670u: goto label_249670;
        case 0x249674u: goto label_249674;
        case 0x249678u: goto label_249678;
        case 0x24967cu: goto label_24967c;
        case 0x249680u: goto label_249680;
        case 0x249684u: goto label_249684;
        case 0x249688u: goto label_249688;
        case 0x24968cu: goto label_24968c;
        case 0x249690u: goto label_249690;
        case 0x249694u: goto label_249694;
        case 0x249698u: goto label_249698;
        case 0x24969cu: goto label_24969c;
        case 0x2496a0u: goto label_2496a0;
        case 0x2496a4u: goto label_2496a4;
        case 0x2496a8u: goto label_2496a8;
        case 0x2496acu: goto label_2496ac;
        case 0x2496b0u: goto label_2496b0;
        case 0x2496b4u: goto label_2496b4;
        case 0x2496b8u: goto label_2496b8;
        case 0x2496bcu: goto label_2496bc;
        case 0x2496c0u: goto label_2496c0;
        case 0x2496c4u: goto label_2496c4;
        case 0x2496c8u: goto label_2496c8;
        case 0x2496ccu: goto label_2496cc;
        case 0x2496d0u: goto label_2496d0;
        case 0x2496d4u: goto label_2496d4;
        case 0x2496d8u: goto label_2496d8;
        case 0x2496dcu: goto label_2496dc;
        case 0x2496e0u: goto label_2496e0;
        case 0x2496e4u: goto label_2496e4;
        case 0x2496e8u: goto label_2496e8;
        case 0x2496ecu: goto label_2496ec;
        case 0x2496f0u: goto label_2496f0;
        case 0x2496f4u: goto label_2496f4;
        case 0x2496f8u: goto label_2496f8;
        case 0x2496fcu: goto label_2496fc;
        case 0x249700u: goto label_249700;
        case 0x249704u: goto label_249704;
        case 0x249708u: goto label_249708;
        case 0x24970cu: goto label_24970c;
        case 0x249710u: goto label_249710;
        case 0x249714u: goto label_249714;
        case 0x249718u: goto label_249718;
        case 0x24971cu: goto label_24971c;
        case 0x249720u: goto label_249720;
        case 0x249724u: goto label_249724;
        case 0x249728u: goto label_249728;
        case 0x24972cu: goto label_24972c;
        case 0x249730u: goto label_249730;
        case 0x249734u: goto label_249734;
        case 0x249738u: goto label_249738;
        case 0x24973cu: goto label_24973c;
        case 0x249740u: goto label_249740;
        case 0x249744u: goto label_249744;
        case 0x249748u: goto label_249748;
        case 0x24974cu: goto label_24974c;
        case 0x249750u: goto label_249750;
        case 0x249754u: goto label_249754;
        case 0x249758u: goto label_249758;
        case 0x24975cu: goto label_24975c;
        case 0x249760u: goto label_249760;
        case 0x249764u: goto label_249764;
        case 0x249768u: goto label_249768;
        case 0x24976cu: goto label_24976c;
        case 0x249770u: goto label_249770;
        case 0x249774u: goto label_249774;
        case 0x249778u: goto label_249778;
        case 0x24977cu: goto label_24977c;
        case 0x249780u: goto label_249780;
        case 0x249784u: goto label_249784;
        case 0x249788u: goto label_249788;
        case 0x24978cu: goto label_24978c;
        case 0x249790u: goto label_249790;
        case 0x249794u: goto label_249794;
        case 0x249798u: goto label_249798;
        case 0x24979cu: goto label_24979c;
        case 0x2497a0u: goto label_2497a0;
        case 0x2497a4u: goto label_2497a4;
        case 0x2497a8u: goto label_2497a8;
        case 0x2497acu: goto label_2497ac;
        case 0x2497b0u: goto label_2497b0;
        case 0x2497b4u: goto label_2497b4;
        case 0x2497b8u: goto label_2497b8;
        case 0x2497bcu: goto label_2497bc;
        case 0x2497c0u: goto label_2497c0;
        case 0x2497c4u: goto label_2497c4;
        case 0x2497c8u: goto label_2497c8;
        case 0x2497ccu: goto label_2497cc;
        case 0x2497d0u: goto label_2497d0;
        case 0x2497d4u: goto label_2497d4;
        case 0x2497d8u: goto label_2497d8;
        case 0x2497dcu: goto label_2497dc;
        case 0x2497e0u: goto label_2497e0;
        case 0x2497e4u: goto label_2497e4;
        case 0x2497e8u: goto label_2497e8;
        case 0x2497ecu: goto label_2497ec;
        case 0x2497f0u: goto label_2497f0;
        case 0x2497f4u: goto label_2497f4;
        case 0x2497f8u: goto label_2497f8;
        case 0x2497fcu: goto label_2497fc;
        case 0x249800u: goto label_249800;
        case 0x249804u: goto label_249804;
        case 0x249808u: goto label_249808;
        case 0x24980cu: goto label_24980c;
        case 0x249810u: goto label_249810;
        case 0x249814u: goto label_249814;
        case 0x249818u: goto label_249818;
        case 0x24981cu: goto label_24981c;
        case 0x249820u: goto label_249820;
        case 0x249824u: goto label_249824;
        case 0x249828u: goto label_249828;
        case 0x24982cu: goto label_24982c;
        case 0x249830u: goto label_249830;
        case 0x249834u: goto label_249834;
        case 0x249838u: goto label_249838;
        case 0x24983cu: goto label_24983c;
        case 0x249840u: goto label_249840;
        case 0x249844u: goto label_249844;
        case 0x249848u: goto label_249848;
        case 0x24984cu: goto label_24984c;
        case 0x249850u: goto label_249850;
        case 0x249854u: goto label_249854;
        case 0x249858u: goto label_249858;
        case 0x24985cu: goto label_24985c;
        case 0x249860u: goto label_249860;
        case 0x249864u: goto label_249864;
        case 0x249868u: goto label_249868;
        case 0x24986cu: goto label_24986c;
        case 0x249870u: goto label_249870;
        case 0x249874u: goto label_249874;
        case 0x249878u: goto label_249878;
        case 0x24987cu: goto label_24987c;
        case 0x249880u: goto label_249880;
        case 0x249884u: goto label_249884;
        case 0x249888u: goto label_249888;
        case 0x24988cu: goto label_24988c;
        case 0x249890u: goto label_249890;
        case 0x249894u: goto label_249894;
        case 0x249898u: goto label_249898;
        case 0x24989cu: goto label_24989c;
        case 0x2498a0u: goto label_2498a0;
        case 0x2498a4u: goto label_2498a4;
        case 0x2498a8u: goto label_2498a8;
        case 0x2498acu: goto label_2498ac;
        case 0x2498b0u: goto label_2498b0;
        case 0x2498b4u: goto label_2498b4;
        case 0x2498b8u: goto label_2498b8;
        case 0x2498bcu: goto label_2498bc;
        case 0x2498c0u: goto label_2498c0;
        case 0x2498c4u: goto label_2498c4;
        case 0x2498c8u: goto label_2498c8;
        case 0x2498ccu: goto label_2498cc;
        case 0x2498d0u: goto label_2498d0;
        case 0x2498d4u: goto label_2498d4;
        case 0x2498d8u: goto label_2498d8;
        case 0x2498dcu: goto label_2498dc;
        case 0x2498e0u: goto label_2498e0;
        case 0x2498e4u: goto label_2498e4;
        case 0x2498e8u: goto label_2498e8;
        case 0x2498ecu: goto label_2498ec;
        case 0x2498f0u: goto label_2498f0;
        case 0x2498f4u: goto label_2498f4;
        case 0x2498f8u: goto label_2498f8;
        case 0x2498fcu: goto label_2498fc;
        case 0x249900u: goto label_249900;
        case 0x249904u: goto label_249904;
        case 0x249908u: goto label_249908;
        case 0x24990cu: goto label_24990c;
        case 0x249910u: goto label_249910;
        case 0x249914u: goto label_249914;
        case 0x249918u: goto label_249918;
        case 0x24991cu: goto label_24991c;
        case 0x249920u: goto label_249920;
        case 0x249924u: goto label_249924;
        case 0x249928u: goto label_249928;
        case 0x24992cu: goto label_24992c;
        case 0x249930u: goto label_249930;
        case 0x249934u: goto label_249934;
        case 0x249938u: goto label_249938;
        case 0x24993cu: goto label_24993c;
        case 0x249940u: goto label_249940;
        case 0x249944u: goto label_249944;
        case 0x249948u: goto label_249948;
        case 0x24994cu: goto label_24994c;
        case 0x249950u: goto label_249950;
        case 0x249954u: goto label_249954;
        case 0x249958u: goto label_249958;
        case 0x24995cu: goto label_24995c;
        case 0x249960u: goto label_249960;
        case 0x249964u: goto label_249964;
        case 0x249968u: goto label_249968;
        case 0x24996cu: goto label_24996c;
        case 0x249970u: goto label_249970;
        case 0x249974u: goto label_249974;
        case 0x249978u: goto label_249978;
        case 0x24997cu: goto label_24997c;
        case 0x249980u: goto label_249980;
        case 0x249984u: goto label_249984;
        case 0x249988u: goto label_249988;
        case 0x24998cu: goto label_24998c;
        case 0x249990u: goto label_249990;
        case 0x249994u: goto label_249994;
        case 0x249998u: goto label_249998;
        case 0x24999cu: goto label_24999c;
        case 0x2499a0u: goto label_2499a0;
        case 0x2499a4u: goto label_2499a4;
        case 0x2499a8u: goto label_2499a8;
        case 0x2499acu: goto label_2499ac;
        case 0x2499b0u: goto label_2499b0;
        case 0x2499b4u: goto label_2499b4;
        case 0x2499b8u: goto label_2499b8;
        case 0x2499bcu: goto label_2499bc;
        case 0x2499c0u: goto label_2499c0;
        case 0x2499c4u: goto label_2499c4;
        case 0x2499c8u: goto label_2499c8;
        case 0x2499ccu: goto label_2499cc;
        case 0x2499d0u: goto label_2499d0;
        case 0x2499d4u: goto label_2499d4;
        case 0x2499d8u: goto label_2499d8;
        case 0x2499dcu: goto label_2499dc;
        case 0x2499e0u: goto label_2499e0;
        case 0x2499e4u: goto label_2499e4;
        case 0x2499e8u: goto label_2499e8;
        case 0x2499ecu: goto label_2499ec;
        case 0x2499f0u: goto label_2499f0;
        case 0x2499f4u: goto label_2499f4;
        case 0x2499f8u: goto label_2499f8;
        case 0x2499fcu: goto label_2499fc;
        case 0x249a00u: goto label_249a00;
        case 0x249a04u: goto label_249a04;
        case 0x249a08u: goto label_249a08;
        case 0x249a0cu: goto label_249a0c;
        case 0x249a10u: goto label_249a10;
        case 0x249a14u: goto label_249a14;
        case 0x249a18u: goto label_249a18;
        case 0x249a1cu: goto label_249a1c;
        case 0x249a20u: goto label_249a20;
        case 0x249a24u: goto label_249a24;
        case 0x249a28u: goto label_249a28;
        case 0x249a2cu: goto label_249a2c;
        case 0x249a30u: goto label_249a30;
        case 0x249a34u: goto label_249a34;
        case 0x249a38u: goto label_249a38;
        case 0x249a3cu: goto label_249a3c;
        case 0x249a40u: goto label_249a40;
        case 0x249a44u: goto label_249a44;
        case 0x249a48u: goto label_249a48;
        case 0x249a4cu: goto label_249a4c;
        case 0x249a50u: goto label_249a50;
        case 0x249a54u: goto label_249a54;
        case 0x249a58u: goto label_249a58;
        case 0x249a5cu: goto label_249a5c;
        case 0x249a60u: goto label_249a60;
        case 0x249a64u: goto label_249a64;
        case 0x249a68u: goto label_249a68;
        case 0x249a6cu: goto label_249a6c;
        case 0x249a70u: goto label_249a70;
        case 0x249a74u: goto label_249a74;
        case 0x249a78u: goto label_249a78;
        case 0x249a7cu: goto label_249a7c;
        case 0x249a80u: goto label_249a80;
        case 0x249a84u: goto label_249a84;
        case 0x249a88u: goto label_249a88;
        case 0x249a8cu: goto label_249a8c;
        case 0x249a90u: goto label_249a90;
        case 0x249a94u: goto label_249a94;
        case 0x249a98u: goto label_249a98;
        case 0x249a9cu: goto label_249a9c;
        case 0x249aa0u: goto label_249aa0;
        case 0x249aa4u: goto label_249aa4;
        case 0x249aa8u: goto label_249aa8;
        case 0x249aacu: goto label_249aac;
        case 0x249ab0u: goto label_249ab0;
        case 0x249ab4u: goto label_249ab4;
        case 0x249ab8u: goto label_249ab8;
        case 0x249abcu: goto label_249abc;
        case 0x249ac0u: goto label_249ac0;
        case 0x249ac4u: goto label_249ac4;
        case 0x249ac8u: goto label_249ac8;
        case 0x249accu: goto label_249acc;
        case 0x249ad0u: goto label_249ad0;
        case 0x249ad4u: goto label_249ad4;
        case 0x249ad8u: goto label_249ad8;
        case 0x249adcu: goto label_249adc;
        case 0x249ae0u: goto label_249ae0;
        case 0x249ae4u: goto label_249ae4;
        case 0x249ae8u: goto label_249ae8;
        case 0x249aecu: goto label_249aec;
        case 0x249af0u: goto label_249af0;
        case 0x249af4u: goto label_249af4;
        default: return;
    }

label_249328:
    // 0x249328: 0xa025a0ca  sb          $a1, -0x5F36($at)
    ctx->pc = 0x249328u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942922), (uint8_t)GPR_U32(ctx, 5));
label_24932c:
    // 0x24932c: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x24932cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249330:
    // 0x249330: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_249334:
    // 0x249334: 0x1010821  addu        $at, $t0, $at
    ctx->pc = 0x249334u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 1)));
label_249338:
    // 0x249338: 0x9063001c  lbu         $v1, 0x1C($v1)
    ctx->pc = 0x249338u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_24933c:
    // 0x24933c: 0xa023a0cb  sb          $v1, -0x5F35($at)
    ctx->pc = 0x24933cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942923), (uint8_t)GPR_U32(ctx, 3));
label_249340:
    // 0x249340: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_249344:
    // 0x249344: 0x1010821  addu        $at, $t0, $at
    ctx->pc = 0x249344u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 1)));
label_249348:
    // 0x249348: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
label_24934c:
    if (ctx->pc == 0x24934Cu) {
        ctx->pc = 0x24934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249348u;
        // 0x24934c: 0xac24a0cc  sw          $a0, -0x5F34($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294942924), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249350u;
        goto label_249350;
    }
    ctx->pc = 0x249348u;
    {
        const bool branch_taken_0x249348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249348u;
        // 0x24934c: 0xac24a0cc  sw          $a0, -0x5F34($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294942924), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249348) {
            ctx->pc = 0x24922Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x24922c; return; }
        }
    }
    ctx->pc = 0x249350u;
label_249350:
    // 0x249350: 0x26480002  addiu       $t0, $s2, 0x2
    ctx->pc = 0x249350u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_249354:
    // 0x249354: 0x26690002  addiu       $t1, $s3, 0x2
    ctx->pc = 0x249354u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_249358:
    // 0x249358: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x249358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_24935c:
    // 0x24935c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x24935cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_249360:
    // 0x249360: 0x24060260  addiu       $a2, $zero, 0x260
    ctx->pc = 0x249360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
label_249364:
    // 0x249364: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x249364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_249368:
    // 0x249368: 0xc054e5c  jal         func_153970
label_24936c:
    if (ctx->pc == 0x24936Cu) {
        ctx->pc = 0x24936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249368u;
        // 0x24936c: 0x240a0064  addiu       $t2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249370u;
        goto label_249370;
    }
    ctx->pc = 0x249368u;
    SET_GPR_U32(ctx, 31, 0x249370u);
    ctx->pc = 0x24936Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249368u;
    // 0x24936c: 0x240a0064  addiu       $t2, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x249368u, 0x249370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249370u;
label_249370:
    // 0x249370: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x249370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249374:
    // 0x249374: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x249374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_249378:
    // 0x249378: 0x26046810  addiu       $a0, $s0, 0x6810
    ctx->pc = 0x249378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 26640));
label_24937c:
    // 0x24937c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x24937cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_249380:
    // 0x249380: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x249380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_249384:
    // 0x249384: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x249384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_249388:
    // 0x249388: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x249388u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24938c:
    // 0x24938c: 0xc054e74  jal         func_1539D0
label_249390:
    if (ctx->pc == 0x249390u) {
        ctx->pc = 0x249390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24938Cu;
        // 0x249390: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249394u;
        goto label_249394;
    }
    ctx->pc = 0x24938Cu;
    SET_GPR_U32(ctx, 31, 0x249394u);
    ctx->pc = 0x249390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24938Cu;
    // 0x249390: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x24938Cu, 0x249394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249394u;
label_249394:
    // 0x249394: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x249394u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249398:
    // 0x249398: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x249398u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24939c:
    // 0x24939c: 0x26026810  addiu       $v0, $s0, 0x6810
    ctx->pc = 0x24939cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 26640));
label_2493a0:
    // 0x2493a0: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x2493a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_2493a4:
    // 0x2493a4: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x2493a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2493a8:
    // 0x2493a8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x2493a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_2493ac:
    // 0x2493ac: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x2493acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_2493b0:
    // 0x2493b0: 0xc05e210  jal         func_178840
label_2493b4:
    if (ctx->pc == 0x2493B4u) {
        ctx->pc = 0x2493B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2493B0u;
        // 0x2493b4: 0x3446000d  ori         $a2, $v0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2493B8u;
        goto label_2493b8;
    }
    ctx->pc = 0x2493B0u;
    SET_GPR_U32(ctx, 31, 0x2493B8u);
    ctx->pc = 0x2493B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2493B0u;
    // 0x2493b4: 0x3446000d  ori         $a2, $v0, 0xD (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    ctx->in_delay_slot = false;
    ctx->pc = 0x178840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178840u, 0x2493B0u, 0x2493B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2493B8u;
label_2493b8:
    // 0x2493b8: 0x2151021  addu        $v0, $s0, $s5
    ctx->pc = 0x2493b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_2493bc:
    // 0x2493bc: 0x94436892  lhu         $v1, 0x6892($v0)
    ctx->pc = 0x2493bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 26770)));
label_2493c0:
    // 0x2493c0: 0x24456892  addiu       $a1, $v0, 0x6892
    ctx->pc = 0x2493c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 26770));
label_2493c4:
    // 0x2493c4: 0x24648700  addiu       $a0, $v1, -0x7900
    ctx->pc = 0x2493c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936320));
label_2493c8:
    // 0x2493c8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_2493cc:
    if (ctx->pc == 0x2493CCu) {
        ctx->pc = 0x2493CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2493C8u;
        // 0x2493cc: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2493D0u;
        goto label_2493d0;
    }
    ctx->pc = 0x2493C8u;
    {
        const bool branch_taken_0x2493c8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2493CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2493C8u;
        // 0x2493cc: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2493c8) {
            ctx->pc = 0x2493D8u;
            goto label_2493d8;
        }
    }
    ctx->pc = 0x2493D0u;
label_2493d0:
    // 0x2493d0: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x2493d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
label_2493d4:
    // 0x2493d4: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x2493d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_2493d8:
    // 0x2493d8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2493d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2493dc:
    // 0x2493dc: 0x244668aa  addiu       $a2, $v0, 0x68AA
    ctx->pc = 0x2493dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 26794));
label_2493e0:
    // 0x2493e0: 0x24637200  addiu       $v1, $v1, 0x7200
    ctx->pc = 0x2493e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29184));
label_2493e4:
    // 0x2493e4: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x2493e4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_2493e8:
    // 0x2493e8: 0x944368aa  lhu         $v1, 0x68AA($v0)
    ctx->pc = 0x2493e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 26794)));
label_2493ec:
    // 0x2493ec: 0x24648700  addiu       $a0, $v1, -0x7900
    ctx->pc = 0x2493ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936320));
label_2493f0:
    // 0x2493f0: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_2493f4:
    if (ctx->pc == 0x2493F4u) {
        ctx->pc = 0x2493F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2493F0u;
        // 0x2493f4: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2493F8u;
        goto label_2493f8;
    }
    ctx->pc = 0x2493F0u;
    {
        const bool branch_taken_0x2493f0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2493F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2493F0u;
        // 0x2493f4: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2493f0) {
            ctx->pc = 0x249400u;
            goto label_249400;
        }
    }
    ctx->pc = 0x2493F8u;
label_2493f8:
    // 0x2493f8: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x2493f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
label_2493fc:
    // 0x2493fc: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x2493fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_249400:
    // 0x249400: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x249400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_249404:
    // 0x249404: 0x244568c2  addiu       $a1, $v0, 0x68C2
    ctx->pc = 0x249404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 26818));
label_249408:
    // 0x249408: 0x24637200  addiu       $v1, $v1, 0x7200
    ctx->pc = 0x249408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29184));
label_24940c:
    // 0x24940c: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x24940cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_249410:
    // 0x249410: 0x944368c2  lhu         $v1, 0x68C2($v0)
    ctx->pc = 0x249410u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 26818)));
label_249414:
    // 0x249414: 0x24648700  addiu       $a0, $v1, -0x7900
    ctx->pc = 0x249414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936320));
label_249418:
    // 0x249418: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_24941c:
    if (ctx->pc == 0x24941Cu) {
        ctx->pc = 0x24941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249418u;
        // 0x24941c: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249420u;
        goto label_249420;
    }
    ctx->pc = 0x249418u;
    {
        const bool branch_taken_0x249418 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x24941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249418u;
        // 0x24941c: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249418) {
            ctx->pc = 0x249428u;
            goto label_249428;
        }
    }
    ctx->pc = 0x249420u;
label_249420:
    // 0x249420: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x249420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
label_249424:
    // 0x249424: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x249424u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_249428:
    // 0x249428: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x249428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_24942c:
    // 0x24942c: 0x244468da  addiu       $a0, $v0, 0x68DA
    ctx->pc = 0x24942cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26842));
label_249430:
    // 0x249430: 0x24637200  addiu       $v1, $v1, 0x7200
    ctx->pc = 0x249430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29184));
label_249434:
    // 0x249434: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x249434u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_249438:
    // 0x249438: 0x944268da  lhu         $v0, 0x68DA($v0)
    ctx->pc = 0x249438u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 26842)));
label_24943c:
    // 0x24943c: 0x24438700  addiu       $v1, $v0, -0x7900
    ctx->pc = 0x24943cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936320));
label_249440:
    // 0x249440: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_249444:
    if (ctx->pc == 0x249444u) {
        ctx->pc = 0x249444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249440u;
        // 0x249444: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249448u;
        goto label_249448;
    }
    ctx->pc = 0x249440u;
    {
        const bool branch_taken_0x249440 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x249444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249440u;
        // 0x249444: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249440) {
            ctx->pc = 0x249450u;
            goto label_249450;
        }
    }
    ctx->pc = 0x249448u;
label_249448:
    // 0x249448: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x249448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_24944c:
    // 0x24944c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x24944cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_249450:
    // 0x249450: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x249450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_249454:
    // 0x249454: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x249454u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_249458:
    // 0x249458: 0x24427200  addiu       $v0, $v0, 0x7200
    ctx->pc = 0x249458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29184));
label_24945c:
    // 0x24945c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x24945cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_249460:
    // 0x249460: 0x2e820080  sltiu       $v0, $s4, 0x80
    ctx->pc = 0x249460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_249464:
    // 0x249464: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
label_249468:
    if (ctx->pc == 0x249468u) {
        ctx->pc = 0x249468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249464u;
        // 0x249468: 0x26b500d0  addiu       $s5, $s5, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24946Cu;
        goto label_24946c;
    }
    ctx->pc = 0x249464u;
    {
        const bool branch_taken_0x249464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249464u;
        // 0x249468: 0x26b500d0  addiu       $s5, $s5, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249464) {
            ctx->pc = 0x24939Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24939c;
        }
    }
    ctx->pc = 0x24946Cu;
label_24946c:
    // 0x24946c: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x24946cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_249470:
    // 0x249470: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
label_249474:
    if (ctx->pc == 0x249474u) {
        ctx->pc = 0x249474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249470u;
        // 0x249474: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249478u;
        goto label_249478;
    }
    ctx->pc = 0x249470u;
    {
        const bool branch_taken_0x249470 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x249474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249470u;
        // 0x249474: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249470) {
            ctx->pc = 0x249504u;
            goto label_249504;
        }
    }
    ctx->pc = 0x249478u;
label_249478:
    // 0x249478: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x249478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24947c:
    // 0x24947c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x24947cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_249480:
    // 0x249480: 0x2053021  addu        $a2, $s0, $a1
    ctx->pc = 0x249480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_249484:
    // 0x249484: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x249484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_249488:
    // 0x249488: 0xa0c06880  sb          $zero, 0x6880($a2)
    ctx->pc = 0x249488u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26752), (uint8_t)GPR_U32(ctx, 0));
label_24948c:
    // 0x24948c: 0xf1102a  slt         $v0, $a3, $s1
    ctx->pc = 0x24948cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_249490:
    // 0x249490: 0xa0c06881  sb          $zero, 0x6881($a2)
    ctx->pc = 0x249490u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26753), (uint8_t)GPR_U32(ctx, 0));
label_249494:
    // 0x249494: 0x24a500d0  addiu       $a1, $a1, 0xD0
    ctx->pc = 0x249494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
label_249498:
    // 0x249498: 0xa0c06882  sb          $zero, 0x6882($a2)
    ctx->pc = 0x249498u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26754), (uint8_t)GPR_U32(ctx, 0));
label_24949c:
    // 0x24949c: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x24949cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_2494a0:
    // 0x2494a0: 0x9063001c  lbu         $v1, 0x1C($v1)
    ctx->pc = 0x2494a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_2494a4:
    // 0x2494a4: 0xa0c36883  sb          $v1, 0x6883($a2)
    ctx->pc = 0x2494a4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26755), (uint8_t)GPR_U32(ctx, 3));
label_2494a8:
    // 0x2494a8: 0xacc46884  sw          $a0, 0x6884($a2)
    ctx->pc = 0x2494a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 26756), GPR_U32(ctx, 4));
label_2494ac:
    // 0x2494ac: 0xa0c06898  sb          $zero, 0x6898($a2)
    ctx->pc = 0x2494acu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26776), (uint8_t)GPR_U32(ctx, 0));
label_2494b0:
    // 0x2494b0: 0xa0c06899  sb          $zero, 0x6899($a2)
    ctx->pc = 0x2494b0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26777), (uint8_t)GPR_U32(ctx, 0));
label_2494b4:
    // 0x2494b4: 0xa0c0689a  sb          $zero, 0x689A($a2)
    ctx->pc = 0x2494b4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26778), (uint8_t)GPR_U32(ctx, 0));
label_2494b8:
    // 0x2494b8: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x2494b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_2494bc:
    // 0x2494bc: 0x9063001c  lbu         $v1, 0x1C($v1)
    ctx->pc = 0x2494bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_2494c0:
    // 0x2494c0: 0xa0c3689b  sb          $v1, 0x689B($a2)
    ctx->pc = 0x2494c0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26779), (uint8_t)GPR_U32(ctx, 3));
label_2494c4:
    // 0x2494c4: 0xacc4689c  sw          $a0, 0x689C($a2)
    ctx->pc = 0x2494c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 26780), GPR_U32(ctx, 4));
label_2494c8:
    // 0x2494c8: 0xa0c068b0  sb          $zero, 0x68B0($a2)
    ctx->pc = 0x2494c8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26800), (uint8_t)GPR_U32(ctx, 0));
label_2494cc:
    // 0x2494cc: 0xa0c068b1  sb          $zero, 0x68B1($a2)
    ctx->pc = 0x2494ccu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26801), (uint8_t)GPR_U32(ctx, 0));
label_2494d0:
    // 0x2494d0: 0xa0c068b2  sb          $zero, 0x68B2($a2)
    ctx->pc = 0x2494d0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26802), (uint8_t)GPR_U32(ctx, 0));
label_2494d4:
    // 0x2494d4: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x2494d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_2494d8:
    // 0x2494d8: 0x9063001c  lbu         $v1, 0x1C($v1)
    ctx->pc = 0x2494d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_2494dc:
    // 0x2494dc: 0xa0c368b3  sb          $v1, 0x68B3($a2)
    ctx->pc = 0x2494dcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26803), (uint8_t)GPR_U32(ctx, 3));
label_2494e0:
    // 0x2494e0: 0xacc468b4  sw          $a0, 0x68B4($a2)
    ctx->pc = 0x2494e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 26804), GPR_U32(ctx, 4));
label_2494e4:
    // 0x2494e4: 0xa0c068c8  sb          $zero, 0x68C8($a2)
    ctx->pc = 0x2494e4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26824), (uint8_t)GPR_U32(ctx, 0));
label_2494e8:
    // 0x2494e8: 0xa0c068c9  sb          $zero, 0x68C9($a2)
    ctx->pc = 0x2494e8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26825), (uint8_t)GPR_U32(ctx, 0));
label_2494ec:
    // 0x2494ec: 0xa0c068ca  sb          $zero, 0x68CA($a2)
    ctx->pc = 0x2494ecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26826), (uint8_t)GPR_U32(ctx, 0));
label_2494f0:
    // 0x2494f0: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x2494f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_2494f4:
    // 0x2494f4: 0x9063001c  lbu         $v1, 0x1C($v1)
    ctx->pc = 0x2494f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_2494f8:
    // 0x2494f8: 0xa0c368cb  sb          $v1, 0x68CB($a2)
    ctx->pc = 0x2494f8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26827), (uint8_t)GPR_U32(ctx, 3));
label_2494fc:
    // 0x2494fc: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_249500:
    if (ctx->pc == 0x249500u) {
        ctx->pc = 0x249500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2494FCu;
        // 0x249500: 0xacc468cc  sw          $a0, 0x68CC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 26828), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249504u;
        goto label_249504;
    }
    ctx->pc = 0x2494FCu;
    {
        const bool branch_taken_0x2494fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2494FCu;
        // 0x249500: 0xacc468cc  sw          $a0, 0x68CC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 26828), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2494fc) {
            ctx->pc = 0x249480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249480;
        }
    }
    ctx->pc = 0x249504u;
label_249504:
    // 0x249504: 0x0  nop
    ctx->pc = 0x249504u;
    // NOP
label_249508:
    // 0x249508: 0x2648fffe  addiu       $t0, $s2, -0x2
    ctx->pc = 0x249508u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
label_24950c:
    // 0x24950c: 0x2669fffe  addiu       $t1, $s3, -0x2
    ctx->pc = 0x24950cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
label_249510:
    // 0x249510: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x249510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_249514:
    // 0x249514: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x249514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_249518:
    // 0x249518: 0x24060260  addiu       $a2, $zero, 0x260
    ctx->pc = 0x249518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
label_24951c:
    // 0x24951c: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x24951cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_249520:
    // 0x249520: 0xc054e5c  jal         func_153970
label_249524:
    if (ctx->pc == 0x249524u) {
        ctx->pc = 0x249524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249520u;
        // 0x249524: 0x240a0064  addiu       $t2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249528u;
        goto label_249528;
    }
    ctx->pc = 0x249520u;
    SET_GPR_U32(ctx, 31, 0x249528u);
    ctx->pc = 0x249524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249520u;
    // 0x249524: 0x240a0064  addiu       $t2, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x249520u, 0x249528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249528u;
label_249528:
    // 0x249528: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x249528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24952c:
    // 0x24952c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24952cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_249530:
    // 0x249530: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x249530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_249534:
    // 0x249534: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x249534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_249538:
    // 0x249538: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x249538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_24953c:
    // 0x24953c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x24953cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_249540:
    // 0x249540: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x249540u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_249544:
    // 0x249544: 0xc054e74  jal         func_1539D0
label_249548:
    if (ctx->pc == 0x249548u) {
        ctx->pc = 0x249548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249544u;
        // 0x249548: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24954Cu;
        goto label_24954c;
    }
    ctx->pc = 0x249544u;
    SET_GPR_U32(ctx, 31, 0x24954Cu);
    ctx->pc = 0x249548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249544u;
    // 0x249548: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x249544u, 0x24954Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24954Cu;
label_24954c:
    // 0x24954c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x24954cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249550:
    // 0x249550: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x249550u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249554:
    // 0x249554: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x249554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_249558:
    // 0x249558: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x249558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_24955c:
    // 0x24955c: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x24955cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_249560:
    // 0x249560: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x249560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_249564:
    // 0x249564: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x249564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_249568:
    // 0x249568: 0xc05e210  jal         func_178840
label_24956c:
    if (ctx->pc == 0x24956Cu) {
        ctx->pc = 0x24956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249568u;
        // 0x24956c: 0x3446000d  ori         $a2, $v0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        ctx->pc = 0x249570u;
        goto label_249570;
    }
    ctx->pc = 0x249568u;
    SET_GPR_U32(ctx, 31, 0x249570u);
    ctx->pc = 0x24956Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249568u;
    // 0x24956c: 0x3446000d  ori         $a2, $v0, 0xD (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    ctx->in_delay_slot = false;
    ctx->pc = 0x178840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178840u, 0x249568u, 0x249570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249570u;
label_249570:
    // 0x249570: 0x2151021  addu        $v0, $s0, $s5
    ctx->pc = 0x249570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_249574:
    // 0x249574: 0x94430092  lhu         $v1, 0x92($v0)
    ctx->pc = 0x249574u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_249578:
    // 0x249578: 0x24450092  addiu       $a1, $v0, 0x92
    ctx->pc = 0x249578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 146));
label_24957c:
    // 0x24957c: 0x24648700  addiu       $a0, $v1, -0x7900
    ctx->pc = 0x24957cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936320));
label_249580:
    // 0x249580: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_249584:
    if (ctx->pc == 0x249584u) {
        ctx->pc = 0x249584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249580u;
        // 0x249584: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249588u;
        goto label_249588;
    }
    ctx->pc = 0x249580u;
    {
        const bool branch_taken_0x249580 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x249584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249580u;
        // 0x249584: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249580) {
            ctx->pc = 0x249590u;
            goto label_249590;
        }
    }
    ctx->pc = 0x249588u;
label_249588:
    // 0x249588: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x249588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
label_24958c:
    // 0x24958c: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x24958cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_249590:
    // 0x249590: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x249590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_249594:
    // 0x249594: 0x244600aa  addiu       $a2, $v0, 0xAA
    ctx->pc = 0x249594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 170));
label_249598:
    // 0x249598: 0x24637200  addiu       $v1, $v1, 0x7200
    ctx->pc = 0x249598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29184));
label_24959c:
    // 0x24959c: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x24959cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_2495a0:
    // 0x2495a0: 0x944300aa  lhu         $v1, 0xAA($v0)
    ctx->pc = 0x2495a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 170)));
label_2495a4:
    // 0x2495a4: 0x24648700  addiu       $a0, $v1, -0x7900
    ctx->pc = 0x2495a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936320));
label_2495a8:
    // 0x2495a8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_2495ac:
    if (ctx->pc == 0x2495ACu) {
        ctx->pc = 0x2495ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2495A8u;
        // 0x2495ac: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2495B0u;
        goto label_2495b0;
    }
    ctx->pc = 0x2495A8u;
    {
        const bool branch_taken_0x2495a8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2495ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2495A8u;
        // 0x2495ac: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2495a8) {
            ctx->pc = 0x2495B8u;
            goto label_2495b8;
        }
    }
    ctx->pc = 0x2495B0u;
label_2495b0:
    // 0x2495b0: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x2495b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
label_2495b4:
    // 0x2495b4: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x2495b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_2495b8:
    // 0x2495b8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2495b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2495bc:
    // 0x2495bc: 0x244500c2  addiu       $a1, $v0, 0xC2
    ctx->pc = 0x2495bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 194));
label_2495c0:
    // 0x2495c0: 0x24637200  addiu       $v1, $v1, 0x7200
    ctx->pc = 0x2495c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29184));
label_2495c4:
    // 0x2495c4: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x2495c4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_2495c8:
    // 0x2495c8: 0x944300c2  lhu         $v1, 0xC2($v0)
    ctx->pc = 0x2495c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 194)));
label_2495cc:
    // 0x2495cc: 0x24648700  addiu       $a0, $v1, -0x7900
    ctx->pc = 0x2495ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936320));
label_2495d0:
    // 0x2495d0: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_2495d4:
    if (ctx->pc == 0x2495D4u) {
        ctx->pc = 0x2495D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2495D0u;
        // 0x2495d4: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2495D8u;
        goto label_2495d8;
    }
    ctx->pc = 0x2495D0u;
    {
        const bool branch_taken_0x2495d0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2495D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2495D0u;
        // 0x2495d4: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2495d0) {
            ctx->pc = 0x2495E0u;
            goto label_2495e0;
        }
    }
    ctx->pc = 0x2495D8u;
label_2495d8:
    // 0x2495d8: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x2495d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
label_2495dc:
    // 0x2495dc: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x2495dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_2495e0:
    // 0x2495e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2495e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2495e4:
    // 0x2495e4: 0x244400da  addiu       $a0, $v0, 0xDA
    ctx->pc = 0x2495e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 218));
label_2495e8:
    // 0x2495e8: 0x24637200  addiu       $v1, $v1, 0x7200
    ctx->pc = 0x2495e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29184));
label_2495ec:
    // 0x2495ec: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x2495ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_2495f0:
    // 0x2495f0: 0x944200da  lhu         $v0, 0xDA($v0)
    ctx->pc = 0x2495f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 218)));
label_2495f4:
    // 0x2495f4: 0x24438700  addiu       $v1, $v0, -0x7900
    ctx->pc = 0x2495f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936320));
label_2495f8:
    // 0x2495f8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_2495fc:
    if (ctx->pc == 0x2495FCu) {
        ctx->pc = 0x2495FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2495F8u;
        // 0x2495fc: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249600u;
        goto label_249600;
    }
    ctx->pc = 0x2495F8u;
    {
        const bool branch_taken_0x2495f8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2495FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2495F8u;
        // 0x2495fc: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2495f8) {
            ctx->pc = 0x249608u;
            goto label_249608;
        }
    }
    ctx->pc = 0x249600u;
label_249600:
    // 0x249600: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x249600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_249604:
    // 0x249604: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x249604u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_249608:
    // 0x249608: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x249608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_24960c:
    // 0x24960c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x24960cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_249610:
    // 0x249610: 0x24427200  addiu       $v0, $v0, 0x7200
    ctx->pc = 0x249610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29184));
label_249614:
    // 0x249614: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x249614u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_249618:
    // 0x249618: 0x2e820080  sltiu       $v0, $s4, 0x80
    ctx->pc = 0x249618u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_24961c:
    // 0x24961c: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
label_249620:
    if (ctx->pc == 0x249620u) {
        ctx->pc = 0x249620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24961Cu;
        // 0x249620: 0x26b500d0  addiu       $s5, $s5, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249624u;
        goto label_249624;
    }
    ctx->pc = 0x24961Cu;
    {
        const bool branch_taken_0x24961c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24961Cu;
        // 0x249620: 0x26b500d0  addiu       $s5, $s5, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24961c) {
            ctx->pc = 0x249554u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249554;
        }
    }
    ctx->pc = 0x249624u;
label_249624:
    // 0x249624: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x249624u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_249628:
    // 0x249628: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
label_24962c:
    if (ctx->pc == 0x24962Cu) {
        ctx->pc = 0x24962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249628u;
        // 0x24962c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249630u;
        goto label_249630;
    }
    ctx->pc = 0x249628u;
    {
        const bool branch_taken_0x249628 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249628u;
        // 0x24962c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249628) {
            ctx->pc = 0x2496BCu;
            goto label_2496bc;
        }
    }
    ctx->pc = 0x249630u;
label_249630:
    // 0x249630: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x249630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249634:
    // 0x249634: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x249634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_249638:
    // 0x249638: 0x2053021  addu        $a2, $s0, $a1
    ctx->pc = 0x249638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_24963c:
    // 0x24963c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x24963cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_249640:
    // 0x249640: 0xa0c00080  sb          $zero, 0x80($a2)
    ctx->pc = 0x249640u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 128), (uint8_t)GPR_U32(ctx, 0));
label_249644:
    // 0x249644: 0xf1102a  slt         $v0, $a3, $s1
    ctx->pc = 0x249644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_249648:
    // 0x249648: 0xa0c00081  sb          $zero, 0x81($a2)
    ctx->pc = 0x249648u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 129), (uint8_t)GPR_U32(ctx, 0));
label_24964c:
    // 0x24964c: 0x24a500d0  addiu       $a1, $a1, 0xD0
    ctx->pc = 0x24964cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
label_249650:
    // 0x249650: 0xa0c00082  sb          $zero, 0x82($a2)
    ctx->pc = 0x249650u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 130), (uint8_t)GPR_U32(ctx, 0));
label_249654:
    // 0x249654: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x249654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249658:
    // 0x249658: 0x9063001c  lbu         $v1, 0x1C($v1)
    ctx->pc = 0x249658u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_24965c:
    // 0x24965c: 0xa0c30083  sb          $v1, 0x83($a2)
    ctx->pc = 0x24965cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 131), (uint8_t)GPR_U32(ctx, 3));
label_249660:
    // 0x249660: 0xacc40084  sw          $a0, 0x84($a2)
    ctx->pc = 0x249660u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 4));
label_249664:
    // 0x249664: 0xa0c00098  sb          $zero, 0x98($a2)
    ctx->pc = 0x249664u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 152), (uint8_t)GPR_U32(ctx, 0));
label_249668:
    // 0x249668: 0xa0c00099  sb          $zero, 0x99($a2)
    ctx->pc = 0x249668u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 153), (uint8_t)GPR_U32(ctx, 0));
label_24966c:
    // 0x24966c: 0xa0c0009a  sb          $zero, 0x9A($a2)
    ctx->pc = 0x24966cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 154), (uint8_t)GPR_U32(ctx, 0));
label_249670:
    // 0x249670: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x249670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249674:
    // 0x249674: 0x9063001c  lbu         $v1, 0x1C($v1)
    ctx->pc = 0x249674u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_249678:
    // 0x249678: 0xa0c3009b  sb          $v1, 0x9B($a2)
    ctx->pc = 0x249678u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 155), (uint8_t)GPR_U32(ctx, 3));
label_24967c:
    // 0x24967c: 0xacc4009c  sw          $a0, 0x9C($a2)
    ctx->pc = 0x24967cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 156), GPR_U32(ctx, 4));
label_249680:
    // 0x249680: 0xa0c000b0  sb          $zero, 0xB0($a2)
    ctx->pc = 0x249680u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 176), (uint8_t)GPR_U32(ctx, 0));
label_249684:
    // 0x249684: 0xa0c000b1  sb          $zero, 0xB1($a2)
    ctx->pc = 0x249684u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 177), (uint8_t)GPR_U32(ctx, 0));
label_249688:
    // 0x249688: 0xa0c000b2  sb          $zero, 0xB2($a2)
    ctx->pc = 0x249688u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 178), (uint8_t)GPR_U32(ctx, 0));
label_24968c:
    // 0x24968c: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x24968cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249690:
    // 0x249690: 0x9063001c  lbu         $v1, 0x1C($v1)
    ctx->pc = 0x249690u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_249694:
    // 0x249694: 0xa0c300b3  sb          $v1, 0xB3($a2)
    ctx->pc = 0x249694u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 179), (uint8_t)GPR_U32(ctx, 3));
label_249698:
    // 0x249698: 0xacc400b4  sw          $a0, 0xB4($a2)
    ctx->pc = 0x249698u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 180), GPR_U32(ctx, 4));
label_24969c:
    // 0x24969c: 0xa0c000c8  sb          $zero, 0xC8($a2)
    ctx->pc = 0x24969cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 200), (uint8_t)GPR_U32(ctx, 0));
label_2496a0:
    // 0x2496a0: 0xa0c000c9  sb          $zero, 0xC9($a2)
    ctx->pc = 0x2496a0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 201), (uint8_t)GPR_U32(ctx, 0));
label_2496a4:
    // 0x2496a4: 0xa0c000ca  sb          $zero, 0xCA($a2)
    ctx->pc = 0x2496a4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 202), (uint8_t)GPR_U32(ctx, 0));
label_2496a8:
    // 0x2496a8: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x2496a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_2496ac:
    // 0x2496ac: 0x9063001c  lbu         $v1, 0x1C($v1)
    ctx->pc = 0x2496acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_2496b0:
    // 0x2496b0: 0xa0c300cb  sb          $v1, 0xCB($a2)
    ctx->pc = 0x2496b0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 203), (uint8_t)GPR_U32(ctx, 3));
label_2496b4:
    // 0x2496b4: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_2496b8:
    if (ctx->pc == 0x2496B8u) {
        ctx->pc = 0x2496B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2496B4u;
        // 0x2496b8: 0xacc400cc  sw          $a0, 0xCC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 204), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2496BCu;
        goto label_2496bc;
    }
    ctx->pc = 0x2496B4u;
    {
        const bool branch_taken_0x2496b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2496B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2496B4u;
        // 0x2496b8: 0xacc400cc  sw          $a0, 0xCC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 204), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2496b4) {
            ctx->pc = 0x249638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249638;
        }
    }
    ctx->pc = 0x2496BCu;
label_2496bc:
    // 0x2496bc: 0x0  nop
    ctx->pc = 0x2496bcu;
    // NOP
label_2496c0:
    // 0x2496c0: 0x2648fffe  addiu       $t0, $s2, -0x2
    ctx->pc = 0x2496c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
label_2496c4:
    // 0x2496c4: 0x26690002  addiu       $t1, $s3, 0x2
    ctx->pc = 0x2496c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_2496c8:
    // 0x2496c8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2496c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2496cc:
    // 0x2496cc: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2496ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2496d0:
    // 0x2496d0: 0x24060260  addiu       $a2, $zero, 0x260
    ctx->pc = 0x2496d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
label_2496d4:
    // 0x2496d4: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x2496d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2496d8:
    // 0x2496d8: 0xc054e5c  jal         func_153970
label_2496dc:
    if (ctx->pc == 0x2496DCu) {
        ctx->pc = 0x2496DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2496D8u;
        // 0x2496dc: 0x240a0064  addiu       $t2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2496E0u;
        goto label_2496e0;
    }
    ctx->pc = 0x2496D8u;
    SET_GPR_U32(ctx, 31, 0x2496E0u);
    ctx->pc = 0x2496DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2496D8u;
    // 0x2496dc: 0x240a0064  addiu       $t2, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x2496D8u, 0x2496E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2496E0u;
label_2496e0:
    // 0x2496e0: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x2496e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_2496e4:
    // 0x2496e4: 0x3403d010  ori         $v1, $zero, 0xD010
    ctx->pc = 0x2496e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53264);
label_2496e8:
    // 0x2496e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2496e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2496ec:
    // 0x2496ec: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x2496ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2496f0:
    // 0x2496f0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2496f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2496f4:
    // 0x2496f4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2496f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2496f8:
    // 0x2496f8: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x2496f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_2496fc:
    // 0x2496fc: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x2496fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_249700:
    // 0x249700: 0xc054e74  jal         func_1539D0
label_249704:
    if (ctx->pc == 0x249704u) {
        ctx->pc = 0x249704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249700u;
        // 0x249704: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249708u;
        goto label_249708;
    }
    ctx->pc = 0x249700u;
    SET_GPR_U32(ctx, 31, 0x249708u);
    ctx->pc = 0x249704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249700u;
    // 0x249704: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x249700u, 0x249708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249708u;
label_249708:
    // 0x249708: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x249708u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24970c:
    // 0x24970c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x24970cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249710:
    // 0x249710: 0x3401d010  ori         $at, $zero, 0xD010
    ctx->pc = 0x249710u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53264);
label_249714:
    // 0x249714: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x249714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_249718:
    // 0x249718: 0x2011021  addu        $v0, $s0, $at
    ctx->pc = 0x249718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_24971c:
    // 0x24971c: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x24971cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_249720:
    // 0x249720: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x249720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_249724:
    // 0x249724: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x249724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_249728:
    // 0x249728: 0xc05e210  jal         func_178840
label_24972c:
    if (ctx->pc == 0x24972Cu) {
        ctx->pc = 0x24972Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249728u;
        // 0x24972c: 0x3446000d  ori         $a2, $v0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        ctx->pc = 0x249730u;
        goto label_249730;
    }
    ctx->pc = 0x249728u;
    SET_GPR_U32(ctx, 31, 0x249730u);
    ctx->pc = 0x24972Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249728u;
    // 0x24972c: 0x3446000d  ori         $a2, $v0, 0xD (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    ctx->in_delay_slot = false;
    ctx->pc = 0x178840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178840u, 0x249728u, 0x249730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249730u;
label_249730:
    // 0x249730: 0x2151021  addu        $v0, $s0, $s5
    ctx->pc = 0x249730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_249734:
    // 0x249734: 0x3401d092  ori         $at, $zero, 0xD092
    ctx->pc = 0x249734u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53394);
label_249738:
    // 0x249738: 0x412821  addu        $a1, $v0, $at
    ctx->pc = 0x249738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_24973c:
    // 0x24973c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x24973cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_249740:
    // 0x249740: 0x24648700  addiu       $a0, $v1, -0x7900
    ctx->pc = 0x249740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936320));
label_249744:
    // 0x249744: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_249748:
    if (ctx->pc == 0x249748u) {
        ctx->pc = 0x249748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249744u;
        // 0x249748: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24974Cu;
        goto label_24974c;
    }
    ctx->pc = 0x249744u;
    {
        const bool branch_taken_0x249744 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x249748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249744u;
        // 0x249748: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249744) {
            ctx->pc = 0x249754u;
            goto label_249754;
        }
    }
    ctx->pc = 0x24974Cu;
label_24974c:
    // 0x24974c: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x24974cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
label_249750:
    // 0x249750: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x249750u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_249754:
    // 0x249754: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x249754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_249758:
    // 0x249758: 0x3401d0aa  ori         $at, $zero, 0xD0AA
    ctx->pc = 0x249758u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53418);
label_24975c:
    // 0x24975c: 0x24637200  addiu       $v1, $v1, 0x7200
    ctx->pc = 0x24975cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29184));
label_249760:
    // 0x249760: 0x413021  addu        $a2, $v0, $at
    ctx->pc = 0x249760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_249764:
    // 0x249764: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x249764u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_249768:
    // 0x249768: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x249768u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_24976c:
    // 0x24976c: 0x24648700  addiu       $a0, $v1, -0x7900
    ctx->pc = 0x24976cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936320));
label_249770:
    // 0x249770: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_249774:
    if (ctx->pc == 0x249774u) {
        ctx->pc = 0x249774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249770u;
        // 0x249774: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249778u;
        goto label_249778;
    }
    ctx->pc = 0x249770u;
    {
        const bool branch_taken_0x249770 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x249774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249770u;
        // 0x249774: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249770) {
            ctx->pc = 0x249780u;
            goto label_249780;
        }
    }
    ctx->pc = 0x249778u;
label_249778:
    // 0x249778: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x249778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
label_24977c:
    // 0x24977c: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x24977cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_249780:
    // 0x249780: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x249780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_249784:
    // 0x249784: 0x3401d0c2  ori         $at, $zero, 0xD0C2
    ctx->pc = 0x249784u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53442);
label_249788:
    // 0x249788: 0x24637200  addiu       $v1, $v1, 0x7200
    ctx->pc = 0x249788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29184));
label_24978c:
    // 0x24978c: 0x412821  addu        $a1, $v0, $at
    ctx->pc = 0x24978cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_249790:
    // 0x249790: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x249790u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_249794:
    // 0x249794: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x249794u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_249798:
    // 0x249798: 0x24648700  addiu       $a0, $v1, -0x7900
    ctx->pc = 0x249798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936320));
label_24979c:
    // 0x24979c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_2497a0:
    if (ctx->pc == 0x2497A0u) {
        ctx->pc = 0x2497A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24979Cu;
        // 0x2497a0: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2497A4u;
        goto label_2497a4;
    }
    ctx->pc = 0x24979Cu;
    {
        const bool branch_taken_0x24979c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2497A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24979Cu;
        // 0x2497a0: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24979c) {
            ctx->pc = 0x2497ACu;
            goto label_2497ac;
        }
    }
    ctx->pc = 0x2497A4u;
label_2497a4:
    // 0x2497a4: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x2497a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
label_2497a8:
    // 0x2497a8: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x2497a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_2497ac:
    // 0x2497ac: 0x3401d0da  ori         $at, $zero, 0xD0DA
    ctx->pc = 0x2497acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53466);
label_2497b0:
    // 0x2497b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2497b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2497b4:
    // 0x2497b4: 0x412021  addu        $a0, $v0, $at
    ctx->pc = 0x2497b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2497b8:
    // 0x2497b8: 0x24627200  addiu       $v0, $v1, 0x7200
    ctx->pc = 0x2497b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 29184));
label_2497bc:
    // 0x2497bc: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x2497bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_2497c0:
    // 0x2497c0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2497c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_2497c4:
    // 0x2497c4: 0x24438700  addiu       $v1, $v0, -0x7900
    ctx->pc = 0x2497c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936320));
label_2497c8:
    // 0x2497c8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_2497cc:
    if (ctx->pc == 0x2497CCu) {
        ctx->pc = 0x2497CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497C8u;
        // 0x2497cc: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2497D0u;
        goto label_2497d0;
    }
    ctx->pc = 0x2497C8u;
    {
        const bool branch_taken_0x2497c8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2497CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497C8u;
        // 0x2497cc: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2497c8) {
            ctx->pc = 0x2497D8u;
            goto label_2497d8;
        }
    }
    ctx->pc = 0x2497D0u;
label_2497d0:
    // 0x2497d0: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x2497d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_2497d4:
    // 0x2497d4: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x2497d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_2497d8:
    // 0x2497d8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2497d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2497dc:
    // 0x2497dc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2497dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2497e0:
    // 0x2497e0: 0x24427200  addiu       $v0, $v0, 0x7200
    ctx->pc = 0x2497e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29184));
label_2497e4:
    // 0x2497e4: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x2497e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_2497e8:
    // 0x2497e8: 0x2e820080  sltiu       $v0, $s4, 0x80
    ctx->pc = 0x2497e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_2497ec:
    // 0x2497ec: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
label_2497f0:
    if (ctx->pc == 0x2497F0u) {
        ctx->pc = 0x2497F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497ECu;
        // 0x2497f0: 0x26b500d0  addiu       $s5, $s5, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2497F4u;
        goto label_2497f4;
    }
    ctx->pc = 0x2497ECu;
    {
        const bool branch_taken_0x2497ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2497F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497ECu;
        // 0x2497f0: 0x26b500d0  addiu       $s5, $s5, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2497ec) {
            ctx->pc = 0x249710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249710;
        }
    }
    ctx->pc = 0x2497F4u;
label_2497f4:
    // 0x2497f4: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x2497f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2497f8:
    // 0x2497f8: 0x1020004c  beqz        $at, . + 4 + (0x4C << 2)
label_2497fc:
    if (ctx->pc == 0x2497FCu) {
        ctx->pc = 0x2497FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497F8u;
        // 0x2497fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249800u;
        goto label_249800;
    }
    ctx->pc = 0x2497F8u;
    {
        const bool branch_taken_0x2497f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2497FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497F8u;
        // 0x2497fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2497f8) {
            ctx->pc = 0x24992Cu;
            goto label_24992c;
        }
    }
    ctx->pc = 0x249800u;
label_249800:
    // 0x249800: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x249800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249804:
    // 0x249804: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x249804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_249808:
    // 0x249808: 0x2053021  addu        $a2, $s0, $a1
    ctx->pc = 0x249808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_24980c:
    // 0x24980c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24980cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249810:
    // 0x249810: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249810u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249814:
    // 0x249814: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x249814u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_249818:
    // 0x249818: 0xa020d080  sb          $zero, -0x2F80($at)
    ctx->pc = 0x249818u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955136), (uint8_t)GPR_U32(ctx, 0));
label_24981c:
    // 0x24981c: 0xf1102a  slt         $v0, $a3, $s1
    ctx->pc = 0x24981cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_249820:
    // 0x249820: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249824:
    // 0x249824: 0x24a500d0  addiu       $a1, $a1, 0xD0
    ctx->pc = 0x249824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
label_249828:
    // 0x249828: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249828u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24982c:
    // 0x24982c: 0xa020d081  sb          $zero, -0x2F7F($at)
    ctx->pc = 0x24982cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955137), (uint8_t)GPR_U32(ctx, 0));
label_249830:
    // 0x249830: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249834:
    // 0x249834: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249834u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249838:
    // 0x249838: 0xa020d082  sb          $zero, -0x2F7E($at)
    ctx->pc = 0x249838u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955138), (uint8_t)GPR_U32(ctx, 0));
label_24983c:
    // 0x24983c: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x24983cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249840:
    // 0x249840: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249844:
    // 0x249844: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249844u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249848:
    // 0x249848: 0x9063001c  lbu         $v1, 0x1C($v1)
    ctx->pc = 0x249848u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_24984c:
    // 0x24984c: 0xa023d083  sb          $v1, -0x2F7D($at)
    ctx->pc = 0x24984cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955139), (uint8_t)GPR_U32(ctx, 3));
label_249850:
    // 0x249850: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249854:
    // 0x249854: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249854u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249858:
    // 0x249858: 0xac24d084  sw          $a0, -0x2F7C($at)
    ctx->pc = 0x249858u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955140), GPR_U32(ctx, 4));
label_24985c:
    // 0x24985c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24985cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249860:
    // 0x249860: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249860u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249864:
    // 0x249864: 0xa020d098  sb          $zero, -0x2F68($at)
    ctx->pc = 0x249864u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955160), (uint8_t)GPR_U32(ctx, 0));
label_249868:
    // 0x249868: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24986c:
    // 0x24986c: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24986cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249870:
    // 0x249870: 0xa020d099  sb          $zero, -0x2F67($at)
    ctx->pc = 0x249870u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955161), (uint8_t)GPR_U32(ctx, 0));
label_249874:
    // 0x249874: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249878:
    // 0x249878: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249878u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24987c:
    // 0x24987c: 0xa020d09a  sb          $zero, -0x2F66($at)
    ctx->pc = 0x24987cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955162), (uint8_t)GPR_U32(ctx, 0));
label_249880:
    // 0x249880: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x249880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249884:
    // 0x249884: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249888:
    // 0x249888: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249888u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24988c:
    // 0x24988c: 0x9063001c  lbu         $v1, 0x1C($v1)
    ctx->pc = 0x24988cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_249890:
    // 0x249890: 0xa023d09b  sb          $v1, -0x2F65($at)
    ctx->pc = 0x249890u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955163), (uint8_t)GPR_U32(ctx, 3));
label_249894:
    // 0x249894: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249898:
    // 0x249898: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249898u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24989c:
    // 0x24989c: 0xac24d09c  sw          $a0, -0x2F64($at)
    ctx->pc = 0x24989cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955164), GPR_U32(ctx, 4));
label_2498a0:
    // 0x2498a0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2498a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2498a4:
    // 0x2498a4: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x2498a4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_2498a8:
    // 0x2498a8: 0xa020d0b0  sb          $zero, -0x2F50($at)
    ctx->pc = 0x2498a8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955184), (uint8_t)GPR_U32(ctx, 0));
label_2498ac:
    // 0x2498ac: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2498acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2498b0:
    // 0x2498b0: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x2498b0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_2498b4:
    // 0x2498b4: 0xa020d0b1  sb          $zero, -0x2F4F($at)
    ctx->pc = 0x2498b4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955185), (uint8_t)GPR_U32(ctx, 0));
label_2498b8:
    // 0x2498b8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2498b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2498bc:
    // 0x2498bc: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x2498bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_2498c0:
    // 0x2498c0: 0xa020d0b2  sb          $zero, -0x2F4E($at)
    ctx->pc = 0x2498c0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955186), (uint8_t)GPR_U32(ctx, 0));
label_2498c4:
    // 0x2498c4: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x2498c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_2498c8:
    // 0x2498c8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2498c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2498cc:
    // 0x2498cc: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x2498ccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_2498d0:
    // 0x2498d0: 0x9063001c  lbu         $v1, 0x1C($v1)
    ctx->pc = 0x2498d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_2498d4:
    // 0x2498d4: 0xa023d0b3  sb          $v1, -0x2F4D($at)
    ctx->pc = 0x2498d4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955187), (uint8_t)GPR_U32(ctx, 3));
label_2498d8:
    // 0x2498d8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2498d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2498dc:
    // 0x2498dc: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x2498dcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_2498e0:
    // 0x2498e0: 0xac24d0b4  sw          $a0, -0x2F4C($at)
    ctx->pc = 0x2498e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955188), GPR_U32(ctx, 4));
label_2498e4:
    // 0x2498e4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2498e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2498e8:
    // 0x2498e8: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x2498e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_2498ec:
    // 0x2498ec: 0xa020d0c8  sb          $zero, -0x2F38($at)
    ctx->pc = 0x2498ecu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955208), (uint8_t)GPR_U32(ctx, 0));
label_2498f0:
    // 0x2498f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2498f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2498f4:
    // 0x2498f4: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x2498f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_2498f8:
    // 0x2498f8: 0xa020d0c9  sb          $zero, -0x2F37($at)
    ctx->pc = 0x2498f8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955209), (uint8_t)GPR_U32(ctx, 0));
label_2498fc:
    // 0x2498fc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2498fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249900:
    // 0x249900: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249900u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249904:
    // 0x249904: 0xa020d0ca  sb          $zero, -0x2F36($at)
    ctx->pc = 0x249904u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955210), (uint8_t)GPR_U32(ctx, 0));
label_249908:
    // 0x249908: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x249908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24990c:
    // 0x24990c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24990cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249910:
    // 0x249910: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249910u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249914:
    // 0x249914: 0x9063001c  lbu         $v1, 0x1C($v1)
    ctx->pc = 0x249914u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_249918:
    // 0x249918: 0xa023d0cb  sb          $v1, -0x2F35($at)
    ctx->pc = 0x249918u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955211), (uint8_t)GPR_U32(ctx, 3));
label_24991c:
    // 0x24991c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24991cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249920:
    // 0x249920: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249920u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249924:
    // 0x249924: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
label_249928:
    if (ctx->pc == 0x249928u) {
        ctx->pc = 0x249928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249924u;
        // 0x249928: 0xac24d0cc  sw          $a0, -0x2F34($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294955212), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24992Cu;
        goto label_24992c;
    }
    ctx->pc = 0x249924u;
    {
        const bool branch_taken_0x249924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249924u;
        // 0x249928: 0xac24d0cc  sw          $a0, -0x2F34($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294955212), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249924) {
            ctx->pc = 0x249808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249808;
        }
    }
    ctx->pc = 0x24992Cu;
label_24992c:
    // 0x24992c: 0x0  nop
    ctx->pc = 0x24992cu;
    // NOP
label_249930:
    // 0x249930: 0x26480002  addiu       $t0, $s2, 0x2
    ctx->pc = 0x249930u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_249934:
    // 0x249934: 0x2669fffe  addiu       $t1, $s3, -0x2
    ctx->pc = 0x249934u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
label_249938:
    // 0x249938: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x249938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_24993c:
    // 0x24993c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x24993cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_249940:
    // 0x249940: 0x24060260  addiu       $a2, $zero, 0x260
    ctx->pc = 0x249940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
label_249944:
    // 0x249944: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x249944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_249948:
    // 0x249948: 0xc054e5c  jal         func_153970
label_24994c:
    if (ctx->pc == 0x24994Cu) {
        ctx->pc = 0x24994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249948u;
        // 0x24994c: 0x240a0064  addiu       $t2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249950u;
        goto label_249950;
    }
    ctx->pc = 0x249948u;
    SET_GPR_U32(ctx, 31, 0x249950u);
    ctx->pc = 0x24994Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249948u;
    // 0x24994c: 0x240a0064  addiu       $t2, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x249948u, 0x249950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249950u;
label_249950:
    // 0x249950: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x249950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249954:
    // 0x249954: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x249954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_249958:
    // 0x249958: 0x34633810  ori         $v1, $v1, 0x3810
    ctx->pc = 0x249958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14352);
label_24995c:
    // 0x24995c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24995cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_249960:
    // 0x249960: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x249960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_249964:
    // 0x249964: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x249964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_249968:
    // 0x249968: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x249968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_24996c:
    // 0x24996c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x24996cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_249970:
    // 0x249970: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x249970u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_249974:
    // 0x249974: 0xc054e74  jal         func_1539D0
label_249978:
    if (ctx->pc == 0x249978u) {
        ctx->pc = 0x249978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249974u;
        // 0x249978: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24997Cu;
        goto label_24997c;
    }
    ctx->pc = 0x249974u;
    SET_GPR_U32(ctx, 31, 0x24997Cu);
    ctx->pc = 0x249978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249974u;
    // 0x249978: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x249974u, 0x24997Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24997Cu;
label_24997c:
    // 0x24997c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24997cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249980:
    // 0x249980: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x249980u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249984:
    // 0x249984: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249988:
    // 0x249988: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x249988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_24998c:
    // 0x24998c: 0x34213810  ori         $at, $at, 0x3810
    ctx->pc = 0x24998cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14352);
label_249990:
    // 0x249990: 0x2011021  addu        $v0, $s0, $at
    ctx->pc = 0x249990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_249994:
    // 0x249994: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x249994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_249998:
    // 0x249998: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x249998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_24999c:
    // 0x24999c: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x24999cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_2499a0:
    // 0x2499a0: 0xc05e210  jal         func_178840
label_2499a4:
    if (ctx->pc == 0x2499A4u) {
        ctx->pc = 0x2499A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2499A0u;
        // 0x2499a4: 0x3446000d  ori         $a2, $v0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2499A8u;
        goto label_2499a8;
    }
    ctx->pc = 0x2499A0u;
    SET_GPR_U32(ctx, 31, 0x2499A8u);
    ctx->pc = 0x2499A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2499A0u;
    // 0x2499a4: 0x3446000d  ori         $a2, $v0, 0xD (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    ctx->in_delay_slot = false;
    ctx->pc = 0x178840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178840u, 0x2499A0u, 0x2499A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2499A8u;
label_2499a8:
    // 0x2499a8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2499a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2499ac:
    // 0x2499ac: 0x2131821  addu        $v1, $s0, $s3
    ctx->pc = 0x2499acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_2499b0:
    // 0x2499b0: 0x34213892  ori         $at, $at, 0x3892
    ctx->pc = 0x2499b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14482);
label_2499b4:
    // 0x2499b4: 0x613021  addu        $a2, $v1, $at
    ctx->pc = 0x2499b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_2499b8:
    // 0x2499b8: 0x94c40000  lhu         $a0, 0x0($a2)
    ctx->pc = 0x2499b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_2499bc:
    // 0x2499bc: 0x24858700  addiu       $a1, $a0, -0x7900
    ctx->pc = 0x2499bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936320));
label_2499c0:
    // 0x2499c0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
label_2499c4:
    if (ctx->pc == 0x2499C4u) {
        ctx->pc = 0x2499C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2499C0u;
        // 0x2499c4: 0x520c3  sra         $a0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2499C8u;
        goto label_2499c8;
    }
    ctx->pc = 0x2499C0u;
    {
        const bool branch_taken_0x2499c0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2499C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2499C0u;
        // 0x2499c4: 0x520c3  sra         $a0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2499c0) {
            ctx->pc = 0x2499D0u;
            goto label_2499d0;
        }
    }
    ctx->pc = 0x2499C8u;
label_2499c8:
    // 0x2499c8: 0x24a40007  addiu       $a0, $a1, 0x7
    ctx->pc = 0x2499c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
label_2499cc:
    // 0x2499cc: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x2499ccu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_2499d0:
    // 0x2499d0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2499d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2499d4:
    // 0x2499d4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2499d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2499d8:
    // 0x2499d8: 0x342138aa  ori         $at, $at, 0x38AA
    ctx->pc = 0x2499d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14506);
label_2499dc:
    // 0x2499dc: 0x24847200  addiu       $a0, $a0, 0x7200
    ctx->pc = 0x2499dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29184));
label_2499e0:
    // 0x2499e0: 0x613821  addu        $a3, $v1, $at
    ctx->pc = 0x2499e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_2499e4:
    // 0x2499e4: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x2499e4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
label_2499e8:
    // 0x2499e8: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x2499e8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_2499ec:
    // 0x2499ec: 0x24858700  addiu       $a1, $a0, -0x7900
    ctx->pc = 0x2499ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936320));
label_2499f0:
    // 0x2499f0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
label_2499f4:
    if (ctx->pc == 0x2499F4u) {
        ctx->pc = 0x2499F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2499F0u;
        // 0x2499f4: 0x520c3  sra         $a0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2499F8u;
        goto label_2499f8;
    }
    ctx->pc = 0x2499F0u;
    {
        const bool branch_taken_0x2499f0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2499F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2499F0u;
        // 0x2499f4: 0x520c3  sra         $a0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2499f0) {
            ctx->pc = 0x249A00u;
            goto label_249a00;
        }
    }
    ctx->pc = 0x2499F8u;
label_2499f8:
    // 0x2499f8: 0x24a40007  addiu       $a0, $a1, 0x7
    ctx->pc = 0x2499f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
label_2499fc:
    // 0x2499fc: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x2499fcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_249a00:
    // 0x249a00: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x249a00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_249a04:
    // 0x249a04: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249a08:
    // 0x249a08: 0x342138c2  ori         $at, $at, 0x38C2
    ctx->pc = 0x249a08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14530);
label_249a0c:
    // 0x249a0c: 0x24847200  addiu       $a0, $a0, 0x7200
    ctx->pc = 0x249a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29184));
label_249a10:
    // 0x249a10: 0x613021  addu        $a2, $v1, $at
    ctx->pc = 0x249a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_249a14:
    // 0x249a14: 0xa4e40000  sh          $a0, 0x0($a3)
    ctx->pc = 0x249a14u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
label_249a18:
    // 0x249a18: 0x94c40000  lhu         $a0, 0x0($a2)
    ctx->pc = 0x249a18u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_249a1c:
    // 0x249a1c: 0x24858700  addiu       $a1, $a0, -0x7900
    ctx->pc = 0x249a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936320));
label_249a20:
    // 0x249a20: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
label_249a24:
    if (ctx->pc == 0x249A24u) {
        ctx->pc = 0x249A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A20u;
        // 0x249a24: 0x520c3  sra         $a0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249A28u;
        goto label_249a28;
    }
    ctx->pc = 0x249A20u;
    {
        const bool branch_taken_0x249a20 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x249A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A20u;
        // 0x249a24: 0x520c3  sra         $a0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249a20) {
            ctx->pc = 0x249A30u;
            goto label_249a30;
        }
    }
    ctx->pc = 0x249A28u;
label_249a28:
    // 0x249a28: 0x24a40007  addiu       $a0, $a1, 0x7
    ctx->pc = 0x249a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
label_249a2c:
    // 0x249a2c: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x249a2cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_249a30:
    // 0x249a30: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249a34:
    // 0x249a34: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x249a34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_249a38:
    // 0x249a38: 0x342138da  ori         $at, $at, 0x38DA
    ctx->pc = 0x249a38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14554);
label_249a3c:
    // 0x249a3c: 0x612821  addu        $a1, $v1, $at
    ctx->pc = 0x249a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_249a40:
    // 0x249a40: 0x24837200  addiu       $v1, $a0, 0x7200
    ctx->pc = 0x249a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 29184));
label_249a44:
    // 0x249a44: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x249a44u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_249a48:
    // 0x249a48: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x249a48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_249a4c:
    // 0x249a4c: 0x24648700  addiu       $a0, $v1, -0x7900
    ctx->pc = 0x249a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936320));
label_249a50:
    // 0x249a50: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_249a54:
    if (ctx->pc == 0x249A54u) {
        ctx->pc = 0x249A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A50u;
        // 0x249a54: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249A58u;
        goto label_249a58;
    }
    ctx->pc = 0x249A50u;
    {
        const bool branch_taken_0x249a50 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x249A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A50u;
        // 0x249a54: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249a50) {
            ctx->pc = 0x249A60u;
            goto label_249a60;
        }
    }
    ctx->pc = 0x249A58u;
label_249a58:
    // 0x249a58: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x249a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
label_249a5c:
    // 0x249a5c: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x249a5cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_249a60:
    // 0x249a60: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x249a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_249a64:
    // 0x249a64: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x249a64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_249a68:
    // 0x249a68: 0x24637200  addiu       $v1, $v1, 0x7200
    ctx->pc = 0x249a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29184));
label_249a6c:
    // 0x249a6c: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x249a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_249a70:
    // 0x249a70: 0x2e430080  sltiu       $v1, $s2, 0x80
    ctx->pc = 0x249a70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_249a74:
    // 0x249a74: 0x1460ffc3  bnez        $v1, . + 4 + (-0x3D << 2)
label_249a78:
    if (ctx->pc == 0x249A78u) {
        ctx->pc = 0x249A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A74u;
        // 0x249a78: 0x267300d0  addiu       $s3, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249A7Cu;
        goto label_249a7c;
    }
    ctx->pc = 0x249A74u;
    {
        const bool branch_taken_0x249a74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x249A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A74u;
        // 0x249a78: 0x267300d0  addiu       $s3, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249a74) {
            ctx->pc = 0x249984u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249984;
        }
    }
    ctx->pc = 0x249A7Cu;
label_249a7c:
    // 0x249a7c: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x249a7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_249a80:
    // 0x249a80: 0x1020004c  beqz        $at, . + 4 + (0x4C << 2)
label_249a84:
    if (ctx->pc == 0x249A84u) {
        ctx->pc = 0x249A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A80u;
        // 0x249a84: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249A88u;
        goto label_249a88;
    }
    ctx->pc = 0x249A80u;
    {
        const bool branch_taken_0x249a80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x249A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A80u;
        // 0x249a84: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249a80) {
            ctx->pc = 0x249BB4u;
            { ctx->pc = 0x249bb4; return; }
        }
    }
    ctx->pc = 0x249A88u;
label_249a88:
    // 0x249a88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x249a88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249a8c:
    // 0x249a8c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x249a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_249a90:
    // 0x249a90: 0x2063821  addu        $a3, $s0, $a2
    ctx->pc = 0x249a90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_249a94:
    // 0x249a94: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249a98:
    // 0x249a98: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249a98u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_249a9c:
    // 0x249a9c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x249a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_249aa0:
    // 0x249aa0: 0xa0203880  sb          $zero, 0x3880($at)
    ctx->pc = 0x249aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14464), (uint8_t)GPR_U32(ctx, 0));
label_249aa4:
    // 0x249aa4: 0x111182a  slt         $v1, $t0, $s1
    ctx->pc = 0x249aa4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_249aa8:
    // 0x249aa8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249aac:
    // 0x249aac: 0x24c600d0  addiu       $a2, $a2, 0xD0
    ctx->pc = 0x249aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 208));
label_249ab0:
    // 0x249ab0: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_249ab4:
    // 0x249ab4: 0xa0203881  sb          $zero, 0x3881($at)
    ctx->pc = 0x249ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14465), (uint8_t)GPR_U32(ctx, 0));
label_249ab8:
    // 0x249ab8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249abc:
    // 0x249abc: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249abcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_249ac0:
    // 0x249ac0: 0xa0203882  sb          $zero, 0x3882($at)
    ctx->pc = 0x249ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14466), (uint8_t)GPR_U32(ctx, 0));
label_249ac4:
    // 0x249ac4: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249ac8:
    // 0x249ac8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249acc:
    // 0x249acc: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249accu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_249ad0:
    // 0x249ad0: 0x9084001c  lbu         $a0, 0x1C($a0)
    ctx->pc = 0x249ad0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
label_249ad4:
    // 0x249ad4: 0xa0243883  sb          $a0, 0x3883($at)
    ctx->pc = 0x249ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14467), (uint8_t)GPR_U32(ctx, 4));
label_249ad8:
    // 0x249ad8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249adc:
    // 0x249adc: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249adcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_249ae0:
    // 0x249ae0: 0xac253884  sw          $a1, 0x3884($at)
    ctx->pc = 0x249ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14468), GPR_U32(ctx, 5));
label_249ae4:
    // 0x249ae4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249ae8:
    // 0x249ae8: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_249aec:
    // 0x249aec: 0xa0203898  sb          $zero, 0x3898($at)
    ctx->pc = 0x249aecu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14488), (uint8_t)GPR_U32(ctx, 0));
label_249af0:
    // 0x249af0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249af4:
    // 0x249af4: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249af4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
    ctx->pc = 0x249af8u;
    return;
}
