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


void FUN_0019b6a8_part408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x262258u: goto label_262258;
        case 0x26225cu: goto label_26225c;
        case 0x262260u: goto label_262260;
        case 0x262264u: goto label_262264;
        case 0x262268u: goto label_262268;
        case 0x26226cu: goto label_26226c;
        case 0x262270u: goto label_262270;
        case 0x262274u: goto label_262274;
        case 0x262278u: goto label_262278;
        case 0x26227cu: goto label_26227c;
        case 0x262280u: goto label_262280;
        case 0x262284u: goto label_262284;
        case 0x262288u: goto label_262288;
        case 0x26228cu: goto label_26228c;
        case 0x262290u: goto label_262290;
        case 0x262294u: goto label_262294;
        case 0x262298u: goto label_262298;
        case 0x26229cu: goto label_26229c;
        case 0x2622a0u: goto label_2622a0;
        case 0x2622a4u: goto label_2622a4;
        case 0x2622a8u: goto label_2622a8;
        case 0x2622acu: goto label_2622ac;
        case 0x2622b0u: goto label_2622b0;
        case 0x2622b4u: goto label_2622b4;
        case 0x2622b8u: goto label_2622b8;
        case 0x2622bcu: goto label_2622bc;
        case 0x2622c0u: goto label_2622c0;
        case 0x2622c4u: goto label_2622c4;
        case 0x2622c8u: goto label_2622c8;
        case 0x2622ccu: goto label_2622cc;
        case 0x2622d0u: goto label_2622d0;
        case 0x2622d4u: goto label_2622d4;
        case 0x2622d8u: goto label_2622d8;
        case 0x2622dcu: goto label_2622dc;
        case 0x2622e0u: goto label_2622e0;
        case 0x2622e4u: goto label_2622e4;
        case 0x2622e8u: goto label_2622e8;
        case 0x2622ecu: goto label_2622ec;
        case 0x2622f0u: goto label_2622f0;
        case 0x2622f4u: goto label_2622f4;
        case 0x2622f8u: goto label_2622f8;
        case 0x2622fcu: goto label_2622fc;
        case 0x262300u: goto label_262300;
        case 0x262304u: goto label_262304;
        case 0x262308u: goto label_262308;
        case 0x26230cu: goto label_26230c;
        case 0x262310u: goto label_262310;
        case 0x262314u: goto label_262314;
        case 0x262318u: goto label_262318;
        case 0x26231cu: goto label_26231c;
        case 0x262320u: goto label_262320;
        case 0x262324u: goto label_262324;
        case 0x262328u: goto label_262328;
        case 0x26232cu: goto label_26232c;
        case 0x262330u: goto label_262330;
        case 0x262334u: goto label_262334;
        case 0x262338u: goto label_262338;
        case 0x26233cu: goto label_26233c;
        case 0x262340u: goto label_262340;
        case 0x262344u: goto label_262344;
        case 0x262348u: goto label_262348;
        case 0x26234cu: goto label_26234c;
        case 0x262350u: goto label_262350;
        case 0x262354u: goto label_262354;
        case 0x262358u: goto label_262358;
        case 0x26235cu: goto label_26235c;
        case 0x262360u: goto label_262360;
        case 0x262364u: goto label_262364;
        case 0x262368u: goto label_262368;
        case 0x26236cu: goto label_26236c;
        case 0x262370u: goto label_262370;
        case 0x262374u: goto label_262374;
        case 0x262378u: goto label_262378;
        case 0x26237cu: goto label_26237c;
        case 0x262380u: goto label_262380;
        case 0x262384u: goto label_262384;
        case 0x262388u: goto label_262388;
        case 0x26238cu: goto label_26238c;
        case 0x262390u: goto label_262390;
        case 0x262394u: goto label_262394;
        case 0x262398u: goto label_262398;
        case 0x26239cu: goto label_26239c;
        case 0x2623a0u: goto label_2623a0;
        case 0x2623a4u: goto label_2623a4;
        case 0x2623a8u: goto label_2623a8;
        case 0x2623acu: goto label_2623ac;
        case 0x2623b0u: goto label_2623b0;
        case 0x2623b4u: goto label_2623b4;
        case 0x2623b8u: goto label_2623b8;
        case 0x2623bcu: goto label_2623bc;
        case 0x2623c0u: goto label_2623c0;
        case 0x2623c4u: goto label_2623c4;
        case 0x2623c8u: goto label_2623c8;
        case 0x2623ccu: goto label_2623cc;
        case 0x2623d0u: goto label_2623d0;
        case 0x2623d4u: goto label_2623d4;
        case 0x2623d8u: goto label_2623d8;
        case 0x2623dcu: goto label_2623dc;
        case 0x2623e0u: goto label_2623e0;
        case 0x2623e4u: goto label_2623e4;
        case 0x2623e8u: goto label_2623e8;
        case 0x2623ecu: goto label_2623ec;
        case 0x2623f0u: goto label_2623f0;
        case 0x2623f4u: goto label_2623f4;
        case 0x2623f8u: goto label_2623f8;
        case 0x2623fcu: goto label_2623fc;
        case 0x262400u: goto label_262400;
        case 0x262404u: goto label_262404;
        case 0x262408u: goto label_262408;
        case 0x26240cu: goto label_26240c;
        case 0x262410u: goto label_262410;
        case 0x262414u: goto label_262414;
        case 0x262418u: goto label_262418;
        case 0x26241cu: goto label_26241c;
        case 0x262420u: goto label_262420;
        case 0x262424u: goto label_262424;
        case 0x262428u: goto label_262428;
        case 0x26242cu: goto label_26242c;
        case 0x262430u: goto label_262430;
        case 0x262434u: goto label_262434;
        case 0x262438u: goto label_262438;
        case 0x26243cu: goto label_26243c;
        case 0x262440u: goto label_262440;
        case 0x262444u: goto label_262444;
        case 0x262448u: goto label_262448;
        case 0x26244cu: goto label_26244c;
        case 0x262450u: goto label_262450;
        case 0x262454u: goto label_262454;
        case 0x262458u: goto label_262458;
        case 0x26245cu: goto label_26245c;
        case 0x262460u: goto label_262460;
        case 0x262464u: goto label_262464;
        case 0x262468u: goto label_262468;
        case 0x26246cu: goto label_26246c;
        case 0x262470u: goto label_262470;
        case 0x262474u: goto label_262474;
        case 0x262478u: goto label_262478;
        case 0x26247cu: goto label_26247c;
        case 0x262480u: goto label_262480;
        case 0x262484u: goto label_262484;
        case 0x262488u: goto label_262488;
        case 0x26248cu: goto label_26248c;
        case 0x262490u: goto label_262490;
        case 0x262494u: goto label_262494;
        case 0x262498u: goto label_262498;
        case 0x26249cu: goto label_26249c;
        case 0x2624a0u: goto label_2624a0;
        case 0x2624a4u: goto label_2624a4;
        case 0x2624a8u: goto label_2624a8;
        case 0x2624acu: goto label_2624ac;
        case 0x2624b0u: goto label_2624b0;
        case 0x2624b4u: goto label_2624b4;
        case 0x2624b8u: goto label_2624b8;
        case 0x2624bcu: goto label_2624bc;
        case 0x2624c0u: goto label_2624c0;
        case 0x2624c4u: goto label_2624c4;
        case 0x2624c8u: goto label_2624c8;
        case 0x2624ccu: goto label_2624cc;
        case 0x2624d0u: goto label_2624d0;
        case 0x2624d4u: goto label_2624d4;
        case 0x2624d8u: goto label_2624d8;
        case 0x2624dcu: goto label_2624dc;
        case 0x2624e0u: goto label_2624e0;
        case 0x2624e4u: goto label_2624e4;
        case 0x2624e8u: goto label_2624e8;
        case 0x2624ecu: goto label_2624ec;
        case 0x2624f0u: goto label_2624f0;
        case 0x2624f4u: goto label_2624f4;
        case 0x2624f8u: goto label_2624f8;
        case 0x2624fcu: goto label_2624fc;
        case 0x262500u: goto label_262500;
        case 0x262504u: goto label_262504;
        case 0x262508u: goto label_262508;
        case 0x26250cu: goto label_26250c;
        case 0x262510u: goto label_262510;
        case 0x262514u: goto label_262514;
        case 0x262518u: goto label_262518;
        case 0x26251cu: goto label_26251c;
        case 0x262520u: goto label_262520;
        case 0x262524u: goto label_262524;
        case 0x262528u: goto label_262528;
        case 0x26252cu: goto label_26252c;
        case 0x262530u: goto label_262530;
        case 0x262534u: goto label_262534;
        case 0x262538u: goto label_262538;
        case 0x26253cu: goto label_26253c;
        case 0x262540u: goto label_262540;
        case 0x262544u: goto label_262544;
        case 0x262548u: goto label_262548;
        case 0x26254cu: goto label_26254c;
        case 0x262550u: goto label_262550;
        case 0x262554u: goto label_262554;
        case 0x262558u: goto label_262558;
        case 0x26255cu: goto label_26255c;
        case 0x262560u: goto label_262560;
        case 0x262564u: goto label_262564;
        case 0x262568u: goto label_262568;
        case 0x26256cu: goto label_26256c;
        case 0x262570u: goto label_262570;
        case 0x262574u: goto label_262574;
        case 0x262578u: goto label_262578;
        case 0x26257cu: goto label_26257c;
        case 0x262580u: goto label_262580;
        case 0x262584u: goto label_262584;
        case 0x262588u: goto label_262588;
        case 0x26258cu: goto label_26258c;
        case 0x262590u: goto label_262590;
        case 0x262594u: goto label_262594;
        case 0x262598u: goto label_262598;
        case 0x26259cu: goto label_26259c;
        case 0x2625a0u: goto label_2625a0;
        case 0x2625a4u: goto label_2625a4;
        case 0x2625a8u: goto label_2625a8;
        case 0x2625acu: goto label_2625ac;
        case 0x2625b0u: goto label_2625b0;
        case 0x2625b4u: goto label_2625b4;
        case 0x2625b8u: goto label_2625b8;
        case 0x2625bcu: goto label_2625bc;
        case 0x2625c0u: goto label_2625c0;
        case 0x2625c4u: goto label_2625c4;
        case 0x2625c8u: goto label_2625c8;
        case 0x2625ccu: goto label_2625cc;
        case 0x2625d0u: goto label_2625d0;
        case 0x2625d4u: goto label_2625d4;
        case 0x2625d8u: goto label_2625d8;
        case 0x2625dcu: goto label_2625dc;
        case 0x2625e0u: goto label_2625e0;
        case 0x2625e4u: goto label_2625e4;
        case 0x2625e8u: goto label_2625e8;
        case 0x2625ecu: goto label_2625ec;
        case 0x2625f0u: goto label_2625f0;
        case 0x2625f4u: goto label_2625f4;
        case 0x2625f8u: goto label_2625f8;
        case 0x2625fcu: goto label_2625fc;
        case 0x262600u: goto label_262600;
        case 0x262604u: goto label_262604;
        case 0x262608u: goto label_262608;
        case 0x26260cu: goto label_26260c;
        case 0x262610u: goto label_262610;
        case 0x262614u: goto label_262614;
        case 0x262618u: goto label_262618;
        case 0x26261cu: goto label_26261c;
        case 0x262620u: goto label_262620;
        case 0x262624u: goto label_262624;
        case 0x262628u: goto label_262628;
        case 0x26262cu: goto label_26262c;
        case 0x262630u: goto label_262630;
        case 0x262634u: goto label_262634;
        case 0x262638u: goto label_262638;
        case 0x26263cu: goto label_26263c;
        case 0x262640u: goto label_262640;
        case 0x262644u: goto label_262644;
        case 0x262648u: goto label_262648;
        case 0x26264cu: goto label_26264c;
        case 0x262650u: goto label_262650;
        case 0x262654u: goto label_262654;
        case 0x262658u: goto label_262658;
        case 0x26265cu: goto label_26265c;
        case 0x262660u: goto label_262660;
        case 0x262664u: goto label_262664;
        case 0x262668u: goto label_262668;
        case 0x26266cu: goto label_26266c;
        case 0x262670u: goto label_262670;
        case 0x262674u: goto label_262674;
        case 0x262678u: goto label_262678;
        case 0x26267cu: goto label_26267c;
        case 0x262680u: goto label_262680;
        case 0x262684u: goto label_262684;
        case 0x262688u: goto label_262688;
        case 0x26268cu: goto label_26268c;
        case 0x262690u: goto label_262690;
        case 0x262694u: goto label_262694;
        case 0x262698u: goto label_262698;
        case 0x26269cu: goto label_26269c;
        case 0x2626a0u: goto label_2626a0;
        case 0x2626a4u: goto label_2626a4;
        case 0x2626a8u: goto label_2626a8;
        case 0x2626acu: goto label_2626ac;
        case 0x2626b0u: goto label_2626b0;
        case 0x2626b4u: goto label_2626b4;
        case 0x2626b8u: goto label_2626b8;
        case 0x2626bcu: goto label_2626bc;
        case 0x2626c0u: goto label_2626c0;
        case 0x2626c4u: goto label_2626c4;
        case 0x2626c8u: goto label_2626c8;
        case 0x2626ccu: goto label_2626cc;
        case 0x2626d0u: goto label_2626d0;
        case 0x2626d4u: goto label_2626d4;
        case 0x2626d8u: goto label_2626d8;
        case 0x2626dcu: goto label_2626dc;
        case 0x2626e0u: goto label_2626e0;
        case 0x2626e4u: goto label_2626e4;
        case 0x2626e8u: goto label_2626e8;
        case 0x2626ecu: goto label_2626ec;
        case 0x2626f0u: goto label_2626f0;
        case 0x2626f4u: goto label_2626f4;
        case 0x2626f8u: goto label_2626f8;
        case 0x2626fcu: goto label_2626fc;
        case 0x262700u: goto label_262700;
        case 0x262704u: goto label_262704;
        case 0x262708u: goto label_262708;
        case 0x26270cu: goto label_26270c;
        case 0x262710u: goto label_262710;
        case 0x262714u: goto label_262714;
        case 0x262718u: goto label_262718;
        case 0x26271cu: goto label_26271c;
        case 0x262720u: goto label_262720;
        case 0x262724u: goto label_262724;
        case 0x262728u: goto label_262728;
        case 0x26272cu: goto label_26272c;
        case 0x262730u: goto label_262730;
        case 0x262734u: goto label_262734;
        case 0x262738u: goto label_262738;
        case 0x26273cu: goto label_26273c;
        case 0x262740u: goto label_262740;
        case 0x262744u: goto label_262744;
        case 0x262748u: goto label_262748;
        case 0x26274cu: goto label_26274c;
        case 0x262750u: goto label_262750;
        case 0x262754u: goto label_262754;
        case 0x262758u: goto label_262758;
        case 0x26275cu: goto label_26275c;
        case 0x262760u: goto label_262760;
        case 0x262764u: goto label_262764;
        case 0x262768u: goto label_262768;
        case 0x26276cu: goto label_26276c;
        case 0x262770u: goto label_262770;
        case 0x262774u: goto label_262774;
        case 0x262778u: goto label_262778;
        case 0x26277cu: goto label_26277c;
        case 0x262780u: goto label_262780;
        case 0x262784u: goto label_262784;
        case 0x262788u: goto label_262788;
        case 0x26278cu: goto label_26278c;
        case 0x262790u: goto label_262790;
        case 0x262794u: goto label_262794;
        case 0x262798u: goto label_262798;
        case 0x26279cu: goto label_26279c;
        case 0x2627a0u: goto label_2627a0;
        case 0x2627a4u: goto label_2627a4;
        case 0x2627a8u: goto label_2627a8;
        case 0x2627acu: goto label_2627ac;
        case 0x2627b0u: goto label_2627b0;
        case 0x2627b4u: goto label_2627b4;
        case 0x2627b8u: goto label_2627b8;
        case 0x2627bcu: goto label_2627bc;
        case 0x2627c0u: goto label_2627c0;
        case 0x2627c4u: goto label_2627c4;
        case 0x2627c8u: goto label_2627c8;
        case 0x2627ccu: goto label_2627cc;
        case 0x2627d0u: goto label_2627d0;
        case 0x2627d4u: goto label_2627d4;
        case 0x2627d8u: goto label_2627d8;
        case 0x2627dcu: goto label_2627dc;
        case 0x2627e0u: goto label_2627e0;
        case 0x2627e4u: goto label_2627e4;
        case 0x2627e8u: goto label_2627e8;
        case 0x2627ecu: goto label_2627ec;
        case 0x2627f0u: goto label_2627f0;
        case 0x2627f4u: goto label_2627f4;
        case 0x2627f8u: goto label_2627f8;
        case 0x2627fcu: goto label_2627fc;
        case 0x262800u: goto label_262800;
        case 0x262804u: goto label_262804;
        case 0x262808u: goto label_262808;
        case 0x26280cu: goto label_26280c;
        case 0x262810u: goto label_262810;
        case 0x262814u: goto label_262814;
        case 0x262818u: goto label_262818;
        case 0x26281cu: goto label_26281c;
        case 0x262820u: goto label_262820;
        case 0x262824u: goto label_262824;
        case 0x262828u: goto label_262828;
        case 0x26282cu: goto label_26282c;
        case 0x262830u: goto label_262830;
        case 0x262834u: goto label_262834;
        case 0x262838u: goto label_262838;
        case 0x26283cu: goto label_26283c;
        case 0x262840u: goto label_262840;
        case 0x262844u: goto label_262844;
        case 0x262848u: goto label_262848;
        case 0x26284cu: goto label_26284c;
        case 0x262850u: goto label_262850;
        case 0x262854u: goto label_262854;
        case 0x262858u: goto label_262858;
        case 0x26285cu: goto label_26285c;
        case 0x262860u: goto label_262860;
        case 0x262864u: goto label_262864;
        case 0x262868u: goto label_262868;
        case 0x26286cu: goto label_26286c;
        case 0x262870u: goto label_262870;
        case 0x262874u: goto label_262874;
        case 0x262878u: goto label_262878;
        case 0x26287cu: goto label_26287c;
        case 0x262880u: goto label_262880;
        case 0x262884u: goto label_262884;
        case 0x262888u: goto label_262888;
        case 0x26288cu: goto label_26288c;
        case 0x262890u: goto label_262890;
        case 0x262894u: goto label_262894;
        case 0x262898u: goto label_262898;
        case 0x26289cu: goto label_26289c;
        case 0x2628a0u: goto label_2628a0;
        case 0x2628a4u: goto label_2628a4;
        case 0x2628a8u: goto label_2628a8;
        case 0x2628acu: goto label_2628ac;
        case 0x2628b0u: goto label_2628b0;
        case 0x2628b4u: goto label_2628b4;
        case 0x2628b8u: goto label_2628b8;
        case 0x2628bcu: goto label_2628bc;
        case 0x2628c0u: goto label_2628c0;
        case 0x2628c4u: goto label_2628c4;
        case 0x2628c8u: goto label_2628c8;
        case 0x2628ccu: goto label_2628cc;
        case 0x2628d0u: goto label_2628d0;
        case 0x2628d4u: goto label_2628d4;
        case 0x2628d8u: goto label_2628d8;
        case 0x2628dcu: goto label_2628dc;
        case 0x2628e0u: goto label_2628e0;
        case 0x2628e4u: goto label_2628e4;
        case 0x2628e8u: goto label_2628e8;
        case 0x2628ecu: goto label_2628ec;
        case 0x2628f0u: goto label_2628f0;
        case 0x2628f4u: goto label_2628f4;
        case 0x2628f8u: goto label_2628f8;
        case 0x2628fcu: goto label_2628fc;
        case 0x262900u: goto label_262900;
        case 0x262904u: goto label_262904;
        case 0x262908u: goto label_262908;
        case 0x26290cu: goto label_26290c;
        case 0x262910u: goto label_262910;
        case 0x262914u: goto label_262914;
        case 0x262918u: goto label_262918;
        case 0x26291cu: goto label_26291c;
        case 0x262920u: goto label_262920;
        case 0x262924u: goto label_262924;
        case 0x262928u: goto label_262928;
        case 0x26292cu: goto label_26292c;
        case 0x262930u: goto label_262930;
        case 0x262934u: goto label_262934;
        case 0x262938u: goto label_262938;
        case 0x26293cu: goto label_26293c;
        case 0x262940u: goto label_262940;
        case 0x262944u: goto label_262944;
        case 0x262948u: goto label_262948;
        case 0x26294cu: goto label_26294c;
        case 0x262950u: goto label_262950;
        case 0x262954u: goto label_262954;
        case 0x262958u: goto label_262958;
        case 0x26295cu: goto label_26295c;
        case 0x262960u: goto label_262960;
        case 0x262964u: goto label_262964;
        case 0x262968u: goto label_262968;
        case 0x26296cu: goto label_26296c;
        case 0x262970u: goto label_262970;
        case 0x262974u: goto label_262974;
        case 0x262978u: goto label_262978;
        case 0x26297cu: goto label_26297c;
        case 0x262980u: goto label_262980;
        case 0x262984u: goto label_262984;
        case 0x262988u: goto label_262988;
        case 0x26298cu: goto label_26298c;
        case 0x262990u: goto label_262990;
        case 0x262994u: goto label_262994;
        case 0x262998u: goto label_262998;
        case 0x26299cu: goto label_26299c;
        case 0x2629a0u: goto label_2629a0;
        case 0x2629a4u: goto label_2629a4;
        case 0x2629a8u: goto label_2629a8;
        case 0x2629acu: goto label_2629ac;
        case 0x2629b0u: goto label_2629b0;
        case 0x2629b4u: goto label_2629b4;
        case 0x2629b8u: goto label_2629b8;
        case 0x2629bcu: goto label_2629bc;
        case 0x2629c0u: goto label_2629c0;
        case 0x2629c4u: goto label_2629c4;
        case 0x2629c8u: goto label_2629c8;
        case 0x2629ccu: goto label_2629cc;
        case 0x2629d0u: goto label_2629d0;
        case 0x2629d4u: goto label_2629d4;
        case 0x2629d8u: goto label_2629d8;
        case 0x2629dcu: goto label_2629dc;
        case 0x2629e0u: goto label_2629e0;
        case 0x2629e4u: goto label_2629e4;
        case 0x2629e8u: goto label_2629e8;
        case 0x2629ecu: goto label_2629ec;
        case 0x2629f0u: goto label_2629f0;
        case 0x2629f4u: goto label_2629f4;
        case 0x2629f8u: goto label_2629f8;
        case 0x2629fcu: goto label_2629fc;
        case 0x262a00u: goto label_262a00;
        case 0x262a04u: goto label_262a04;
        case 0x262a08u: goto label_262a08;
        case 0x262a0cu: goto label_262a0c;
        case 0x262a10u: goto label_262a10;
        case 0x262a14u: goto label_262a14;
        case 0x262a18u: goto label_262a18;
        case 0x262a1cu: goto label_262a1c;
        case 0x262a20u: goto label_262a20;
        case 0x262a24u: goto label_262a24;
        default: return;
    }

label_262258:
    // 0x262258: 0x0  nop
    ctx->pc = 0x262258u;
    // NOP
label_26225c:
    // 0x26225c: 0x0  nop
    ctx->pc = 0x26225cu;
    // NOP
label_262260:
    // 0x262260: 0xcdd0  .word       0x0000CDD0                   # mfhi        $t9 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262260u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_262264:
    // 0x262264: 0xd440  sll         $k0, $zero, 17
    ctx->pc = 0x262264u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_262268:
    // 0x262268: 0x0  nop
    ctx->pc = 0x262268u;
    // NOP
label_26226c:
    // 0x26226c: 0x0  nop
    ctx->pc = 0x26226cu;
    // NOP
label_262270:
    // 0x262270: 0xcdeb  .word       0x0000CDEB                   # sltu        $t9, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262270u;
    SET_GPR_U64(ctx, 25, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_262274:
    // 0x262274: 0x8900  sll         $s1, $zero, 4
    ctx->pc = 0x262274u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_262278:
    // 0x262278: 0x0  nop
    ctx->pc = 0x262278u;
    // NOP
label_26227c:
    // 0x26227c: 0x0  nop
    ctx->pc = 0x26227cu;
    // NOP
label_262280:
    // 0x262280: 0xcdfd  .word       0x0000CDFD                   # INVALID     $zero, $zero, -0x3203 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262280u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x262280 raw=0x0000CDFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262284:
    // 0x262284: 0xb3c0  sll         $s6, $zero, 15
    ctx->pc = 0x262284u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_262288:
    // 0x262288: 0x0  nop
    ctx->pc = 0x262288u;
    // NOP
label_26228c:
    // 0x26228c: 0x0  nop
    ctx->pc = 0x26228cu;
    // NOP
label_262290:
    // 0x262290: 0xce14  .word       0x0000CE14                   # dsllv       $t9, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262290u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_262294:
    // 0x262294: 0x107b0  tge         $zero, $at, 30
    ctx->pc = 0x262294u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_262298:
    // 0x262298: 0x0  nop
    ctx->pc = 0x262298u;
    // NOP
label_26229c:
    // 0x26229c: 0x0  nop
    ctx->pc = 0x26229cu;
    // NOP
label_2622a0:
    // 0x2622a0: 0xce35  .word       0x0000CE35                   # INVALID     $zero, $zero, -0x31CB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2622a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2622A0 raw=0x0000CE35"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2622a4:
    // 0x2622a4: 0x100c0  sll         $zero, $at, 3
    ctx->pc = 0x2622a4u;
    
label_2622a8:
    // 0x2622a8: 0x0  nop
    ctx->pc = 0x2622a8u;
    // NOP
label_2622ac:
    // 0x2622ac: 0x0  nop
    ctx->pc = 0x2622acu;
    // NOP
label_2622b0:
    // 0x2622b0: 0xce56  .word       0x0000CE56                   # dsrlv       $t9, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2622b0u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2622b4:
    // 0x2622b4: 0x8d50  .word       0x00008D50                   # mfhi        $s1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2622b4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2622b8:
    // 0x2622b8: 0x0  nop
    ctx->pc = 0x2622b8u;
    // NOP
label_2622bc:
    // 0x2622bc: 0x0  nop
    ctx->pc = 0x2622bcu;
    // NOP
label_2622c0:
    // 0x2622c0: 0xce68  .word       0x0000CE68                   # mfsa        $t9 # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2622c0u;
    SET_GPR_U32(ctx, 25, ctx->sa);
label_2622c4:
    // 0x2622c4: 0x8840  sll         $s1, $zero, 1
    ctx->pc = 0x2622c4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_2622c8:
    // 0x2622c8: 0x0  nop
    ctx->pc = 0x2622c8u;
    // NOP
label_2622cc:
    // 0x2622cc: 0x0  nop
    ctx->pc = 0x2622ccu;
    // NOP
label_2622d0:
    // 0x2622d0: 0xce7a  dsrl        $t9, $zero, 25
    ctx->pc = 0x2622d0u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) >> 25);
label_2622d4:
    // 0x2622d4: 0x8430  tge         $zero, $zero, 528
    ctx->pc = 0x2622d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2622d8:
    // 0x2622d8: 0x0  nop
    ctx->pc = 0x2622d8u;
    // NOP
label_2622dc:
    // 0x2622dc: 0x0  nop
    ctx->pc = 0x2622dcu;
    // NOP
label_2622e0:
    // 0x2622e0: 0xce8b  .word       0x0000CE8B                   # movn        $t9, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2622e0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 0));
label_2622e4:
    // 0x2622e4: 0x9bf0  tge         $zero, $zero, 623
    ctx->pc = 0x2622e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2622e8:
    // 0x2622e8: 0x0  nop
    ctx->pc = 0x2622e8u;
    // NOP
label_2622ec:
    // 0x2622ec: 0x0  nop
    ctx->pc = 0x2622ecu;
    // NOP
label_2622f0:
    // 0x2622f0: 0xce9f  .word       0x0000CE9F                   # ddivu       $t9, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2622f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2622F0 raw=0x0000CE9F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2622f4:
    // 0x2622f4: 0xd690  .word       0x0000D690                   # mfhi        $k0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2622f4u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2622f8:
    // 0x2622f8: 0x0  nop
    ctx->pc = 0x2622f8u;
    // NOP
label_2622fc:
    // 0x2622fc: 0x0  nop
    ctx->pc = 0x2622fcu;
    // NOP
label_262300:
    // 0x262300: 0xceba  dsrl        $t9, $zero, 26
    ctx->pc = 0x262300u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) >> 26);
label_262304:
    // 0x262304: 0x4e90  .word       0x00004E90                   # mfhi        $t1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262304u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_262308:
    // 0x262308: 0x0  nop
    ctx->pc = 0x262308u;
    // NOP
label_26230c:
    // 0x26230c: 0x0  nop
    ctx->pc = 0x26230cu;
    // NOP
label_262310:
    // 0x262310: 0xcec4  .word       0x0000CEC4                   # sllv        $t9, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262310u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_262314:
    // 0x262314: 0x47b0  tge         $zero, $zero, 286
    ctx->pc = 0x262314u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262318:
    // 0x262318: 0x0  nop
    ctx->pc = 0x262318u;
    // NOP
label_26231c:
    // 0x26231c: 0x0  nop
    ctx->pc = 0x26231cu;
    // NOP
label_262320:
    // 0x262320: 0xcecd  break       0, 827
    ctx->pc = 0x262320u;
    runtime->handleBreak(rdram, ctx);
label_262324:
    // 0x262324: 0x5980  sll         $t3, $zero, 6
    ctx->pc = 0x262324u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_262328:
    // 0x262328: 0x0  nop
    ctx->pc = 0x262328u;
    // NOP
label_26232c:
    // 0x26232c: 0x0  nop
    ctx->pc = 0x26232cu;
    // NOP
label_262330:
    // 0x262330: 0xced9  .word       0x0000CED9                   # multu       $zero, $zero # 0000CEC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262330u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_262334:
    // 0x262334: 0x5020  add         $t2, $zero, $zero
    ctx->pc = 0x262334u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_262338:
    // 0x262338: 0x0  nop
    ctx->pc = 0x262338u;
    // NOP
label_26233c:
    // 0x26233c: 0x0  nop
    ctx->pc = 0x26233cu;
    // NOP
label_262340:
    // 0x262340: 0xcee4  .word       0x0000CEE4                   # and         $t9, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262340u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_262344:
    // 0x262344: 0xe100  sll         $gp, $zero, 4
    ctx->pc = 0x262344u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_262348:
    // 0x262348: 0x0  nop
    ctx->pc = 0x262348u;
    // NOP
label_26234c:
    // 0x26234c: 0x0  nop
    ctx->pc = 0x26234cu;
    // NOP
label_262350:
    // 0x262350: 0xcf01  .word       0x0000CF01                   # INVALID     $zero, $zero, -0x30FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262350u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x262350 raw=0x0000CF01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262354:
    // 0x262354: 0x101b0  tge         $zero, $at, 6
    ctx->pc = 0x262354u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_262358:
    // 0x262358: 0x0  nop
    ctx->pc = 0x262358u;
    // NOP
label_26235c:
    // 0x26235c: 0x0  nop
    ctx->pc = 0x26235cu;
    // NOP
label_262360:
    // 0x262360: 0xcf22  .word       0x0000CF22                   # neg         $t9, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262360u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
label_262364:
    // 0x262364: 0xbf80  sll         $s7, $zero, 30
    ctx->pc = 0x262364u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_262368:
    // 0x262368: 0x0  nop
    ctx->pc = 0x262368u;
    // NOP
label_26236c:
    // 0x26236c: 0x0  nop
    ctx->pc = 0x26236cu;
    // NOP
label_262370:
    // 0x262370: 0xcf3a  dsrl        $t9, $zero, 28
    ctx->pc = 0x262370u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) >> 28);
label_262374:
    // 0x262374: 0x102d0  .word       0x000102D0                   # mfhi        $zero # 000102C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262374u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_262378:
    // 0x262378: 0x0  nop
    ctx->pc = 0x262378u;
    // NOP
label_26237c:
    // 0x26237c: 0x0  nop
    ctx->pc = 0x26237cu;
    // NOP
label_262380:
    // 0x262380: 0xcf5b  .word       0x0000CF5B                   # divu        $t9, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262380u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_262384:
    // 0x262384: 0x9680  sll         $s2, $zero, 26
    ctx->pc = 0x262384u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_262388:
    // 0x262388: 0x0  nop
    ctx->pc = 0x262388u;
    // NOP
label_26238c:
    // 0x26238c: 0x0  nop
    ctx->pc = 0x26238cu;
    // NOP
label_262390:
    // 0x262390: 0xcf6e  .word       0x0000CF6E                   # dsub        $t9, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262390u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 25, r); }
label_262394:
    // 0x262394: 0x2170  tge         $zero, $zero, 133
    ctx->pc = 0x262394u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262398:
    // 0x262398: 0x0  nop
    ctx->pc = 0x262398u;
    // NOP
label_26239c:
    // 0x26239c: 0x0  nop
    ctx->pc = 0x26239cu;
    // NOP
label_2623a0:
    // 0x2623a0: 0xcf73  tltu        $zero, $zero, 829
    ctx->pc = 0x2623a0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2623a4:
    // 0x2623a4: 0x6ac0  sll         $t5, $zero, 11
    ctx->pc = 0x2623a4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_2623a8:
    // 0x2623a8: 0x0  nop
    ctx->pc = 0x2623a8u;
    // NOP
label_2623ac:
    // 0x2623ac: 0x0  nop
    ctx->pc = 0x2623acu;
    // NOP
label_2623b0:
    // 0x2623b0: 0xcf81  .word       0x0000CF81                   # INVALID     $zero, $zero, -0x307F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2623b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2623B0 raw=0x0000CF81"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2623b4:
    // 0x2623b4: 0xc990  .word       0x0000C990                   # mfhi        $t9 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2623b4u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_2623b8:
    // 0x2623b8: 0x0  nop
    ctx->pc = 0x2623b8u;
    // NOP
label_2623bc:
    // 0x2623bc: 0x0  nop
    ctx->pc = 0x2623bcu;
    // NOP
label_2623c0:
    // 0x2623c0: 0xcf9b  .word       0x0000CF9B                   # divu        $t9, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2623c0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2623c4:
    // 0x2623c4: 0x83b0  tge         $zero, $zero, 526
    ctx->pc = 0x2623c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2623c8:
    // 0x2623c8: 0x0  nop
    ctx->pc = 0x2623c8u;
    // NOP
label_2623cc:
    // 0x2623cc: 0x0  nop
    ctx->pc = 0x2623ccu;
    // NOP
label_2623d0:
    // 0x2623d0: 0xcfac  .word       0x0000CFAC                   # dadd        $t9, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2623d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 25, r); }
label_2623d4:
    // 0x2623d4: 0x6c60  .word       0x00006C60                   # add         $t5, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2623d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2623d8:
    // 0x2623d8: 0x0  nop
    ctx->pc = 0x2623d8u;
    // NOP
label_2623dc:
    // 0x2623dc: 0x0  nop
    ctx->pc = 0x2623dcu;
    // NOP
label_2623e0:
    // 0x2623e0: 0xcfba  dsrl        $t9, $zero, 30
    ctx->pc = 0x2623e0u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) >> 30);
label_2623e4:
    // 0x2623e4: 0x14350  .word       0x00014350                   # mfhi        $t0 # 00010340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2623e4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2623e8:
    // 0x2623e8: 0x0  nop
    ctx->pc = 0x2623e8u;
    // NOP
label_2623ec:
    // 0x2623ec: 0x0  nop
    ctx->pc = 0x2623ecu;
    // NOP
label_2623f0:
    // 0x2623f0: 0xcfe3  .word       0x0000CFE3                   # negu        $t9, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2623f0u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2623f4:
    // 0x2623f4: 0xd6f0  tge         $zero, $zero, 859
    ctx->pc = 0x2623f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2623f8:
    // 0x2623f8: 0x0  nop
    ctx->pc = 0x2623f8u;
    // NOP
label_2623fc:
    // 0x2623fc: 0x0  nop
    ctx->pc = 0x2623fcu;
    // NOP
label_262400:
    // 0x262400: 0xcffe  dsrl32      $t9, $zero, 31
    ctx->pc = 0x262400u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) >> (32 + 31));
label_262404:
    // 0x262404: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x262404u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_262408:
    // 0x262408: 0x0  nop
    ctx->pc = 0x262408u;
    // NOP
label_26240c:
    // 0x26240c: 0x0  nop
    ctx->pc = 0x26240cu;
    // NOP
label_262410:
    // 0x262410: 0xd00b  movn        $k0, $zero, $zero
    ctx->pc = 0x262410u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 26, GPR_VEC(ctx, 0));
label_262414:
    // 0x262414: 0x2a30  tge         $zero, $zero, 168
    ctx->pc = 0x262414u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262418:
    // 0x262418: 0x0  nop
    ctx->pc = 0x262418u;
    // NOP
label_26241c:
    // 0x26241c: 0x0  nop
    ctx->pc = 0x26241cu;
    // NOP
label_262420:
    // 0x262420: 0xd011  .word       0x0000D011                   # mthi        $zero # 0000D000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262420u;
    ctx->hi = GPR_U64(ctx, 0);
label_262424:
    // 0x262424: 0x9b80  sll         $s3, $zero, 14
    ctx->pc = 0x262424u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_262428:
    // 0x262428: 0x0  nop
    ctx->pc = 0x262428u;
    // NOP
label_26242c:
    // 0x26242c: 0x0  nop
    ctx->pc = 0x26242cu;
    // NOP
label_262430:
    // 0x262430: 0xd025  move        $k0, $zero
    ctx->pc = 0x262430u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_262434:
    // 0x262434: 0x8f40  sll         $s1, $zero, 29
    ctx->pc = 0x262434u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_262438:
    // 0x262438: 0x0  nop
    ctx->pc = 0x262438u;
    // NOP
label_26243c:
    // 0x26243c: 0x0  nop
    ctx->pc = 0x26243cu;
    // NOP
label_262440:
    // 0x262440: 0xd037  .word       0x0000D037                   # INVALID     $zero, $zero, -0x2FC9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262440u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x262440 raw=0x0000D037"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262444:
    // 0x262444: 0xe740  sll         $gp, $zero, 29
    ctx->pc = 0x262444u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_262448:
    // 0x262448: 0x0  nop
    ctx->pc = 0x262448u;
    // NOP
label_26244c:
    // 0x26244c: 0x0  nop
    ctx->pc = 0x26244cu;
    // NOP
label_262450:
    // 0x262450: 0xd054  .word       0x0000D054                   # dsllv       $k0, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262450u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_262454:
    // 0x262454: 0xd3b0  tge         $zero, $zero, 846
    ctx->pc = 0x262454u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262458:
    // 0x262458: 0x0  nop
    ctx->pc = 0x262458u;
    // NOP
label_26245c:
    // 0x26245c: 0x0  nop
    ctx->pc = 0x26245cu;
    // NOP
label_262460:
    // 0x262460: 0xd06f  .word       0x0000D06F                   # dsubu       $k0, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262460u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_262464:
    // 0x262464: 0x12400  sll         $a0, $at, 16
    ctx->pc = 0x262464u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 16));
label_262468:
    // 0x262468: 0x0  nop
    ctx->pc = 0x262468u;
    // NOP
label_26246c:
    // 0x26246c: 0x0  nop
    ctx->pc = 0x26246cu;
    // NOP
label_262470:
    // 0x262470: 0xd094  .word       0x0000D094                   # dsllv       $k0, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262470u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_262474:
    // 0x262474: 0x11970  tge         $zero, $at, 101
    ctx->pc = 0x262474u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_262478:
    // 0x262478: 0x0  nop
    ctx->pc = 0x262478u;
    // NOP
label_26247c:
    // 0x26247c: 0x0  nop
    ctx->pc = 0x26247cu;
    // NOP
label_262480:
    // 0x262480: 0xd0b8  dsll        $k0, $zero, 2
    ctx->pc = 0x262480u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) << 2);
label_262484:
    // 0x262484: 0x64a0  .word       0x000064A0                   # add         $t4, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262484u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_262488:
    // 0x262488: 0x0  nop
    ctx->pc = 0x262488u;
    // NOP
label_26248c:
    // 0x26248c: 0x0  nop
    ctx->pc = 0x26248cu;
    // NOP
label_262490:
    // 0x262490: 0xd0c5  .word       0x0000D0C5                   # INVALID     $zero, $zero, -0x2F3B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262490u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x262490 raw=0x0000D0C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262494:
    // 0x262494: 0xdb70  tge         $zero, $zero, 877
    ctx->pc = 0x262494u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262498:
    // 0x262498: 0x0  nop
    ctx->pc = 0x262498u;
    // NOP
label_26249c:
    // 0x26249c: 0x0  nop
    ctx->pc = 0x26249cu;
    // NOP
label_2624a0:
    // 0x2624a0: 0xd0e1  .word       0x0000D0E1                   # addu        $k0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2624a0u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2624a4:
    // 0x2624a4: 0x2950  .word       0x00002950                   # mfhi        $a1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2624a4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_2624a8:
    // 0x2624a8: 0x0  nop
    ctx->pc = 0x2624a8u;
    // NOP
label_2624ac:
    // 0x2624ac: 0x0  nop
    ctx->pc = 0x2624acu;
    // NOP
label_2624b0:
    // 0x2624b0: 0xd0e7  .word       0x0000D0E7                   # not         $k0, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2624b0u;
    SET_GPR_U64(ctx, 26, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2624b4:
    // 0x2624b4: 0x10e0  .word       0x000010E0                   # add         $v0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2624b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_2624b8:
    // 0x2624b8: 0x0  nop
    ctx->pc = 0x2624b8u;
    // NOP
label_2624bc:
    // 0x2624bc: 0x0  nop
    ctx->pc = 0x2624bcu;
    // NOP
label_2624c0:
    // 0x2624c0: 0xd0ea  .word       0x0000D0EA                   # slt         $k0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2624c0u;
    SET_GPR_U64(ctx, 26, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2624c4:
    // 0x2624c4: 0x5ea0  .word       0x00005EA0                   # add         $t3, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2624c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2624c8:
    // 0x2624c8: 0x0  nop
    ctx->pc = 0x2624c8u;
    // NOP
label_2624cc:
    // 0x2624cc: 0x0  nop
    ctx->pc = 0x2624ccu;
    // NOP
label_2624d0:
    // 0x2624d0: 0xd0f6  tne         $zero, $zero, 835
    ctx->pc = 0x2624d0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2624d4:
    // 0x2624d4: 0xe250  .word       0x0000E250                   # mfhi        $gp # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2624d4u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_2624d8:
    // 0x2624d8: 0x0  nop
    ctx->pc = 0x2624d8u;
    // NOP
label_2624dc:
    // 0x2624dc: 0x0  nop
    ctx->pc = 0x2624dcu;
    // NOP
label_2624e0:
    // 0x2624e0: 0xd113  .word       0x0000D113                   # mtlo        $zero # 0000D100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2624e0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2624e4:
    // 0x2624e4: 0x14610  .word       0x00014610                   # mfhi        $t0 # 00010600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2624e4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2624e8:
    // 0x2624e8: 0x0  nop
    ctx->pc = 0x2624e8u;
    // NOP
label_2624ec:
    // 0x2624ec: 0x0  nop
    ctx->pc = 0x2624ecu;
    // NOP
label_2624f0:
    // 0x2624f0: 0xd13c  dsll32      $k0, $zero, 4
    ctx->pc = 0x2624f0u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) << (32 + 4));
label_2624f4:
    // 0x2624f4: 0xc4d0  .word       0x0000C4D0                   # mfhi        $t8 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2624f4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_2624f8:
    // 0x2624f8: 0x0  nop
    ctx->pc = 0x2624f8u;
    // NOP
label_2624fc:
    // 0x2624fc: 0x0  nop
    ctx->pc = 0x2624fcu;
    // NOP
label_262500:
    // 0x262500: 0xd155  .word       0x0000D155                   # INVALID     $zero, $zero, -0x2EAB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262500u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x262500 raw=0x0000D155"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262504:
    // 0x262504: 0xe120  .word       0x0000E120                   # add         $gp, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262504u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_262508:
    // 0x262508: 0x0  nop
    ctx->pc = 0x262508u;
    // NOP
label_26250c:
    // 0x26250c: 0x0  nop
    ctx->pc = 0x26250cu;
    // NOP
label_262510:
    // 0x262510: 0xd172  tlt         $zero, $zero, 837
    ctx->pc = 0x262510u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262514:
    // 0x262514: 0x14130  tge         $zero, $at, 260
    ctx->pc = 0x262514u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_262518:
    // 0x262518: 0x0  nop
    ctx->pc = 0x262518u;
    // NOP
label_26251c:
    // 0x26251c: 0x0  nop
    ctx->pc = 0x26251cu;
    // NOP
label_262520:
    // 0x262520: 0xd19b  .word       0x0000D19B                   # divu        $k0, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262520u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_262524:
    // 0x262524: 0xcdb0  tge         $zero, $zero, 822
    ctx->pc = 0x262524u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262528:
    // 0x262528: 0x0  nop
    ctx->pc = 0x262528u;
    // NOP
label_26252c:
    // 0x26252c: 0x0  nop
    ctx->pc = 0x26252cu;
    // NOP
label_262530:
    // 0x262530: 0xd1b5  .word       0x0000D1B5                   # INVALID     $zero, $zero, -0x2E4B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262530u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x262530 raw=0x0000D1B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262534:
    // 0x262534: 0x10f70  tge         $zero, $at, 61
    ctx->pc = 0x262534u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_262538:
    // 0x262538: 0x0  nop
    ctx->pc = 0x262538u;
    // NOP
label_26253c:
    // 0x26253c: 0x0  nop
    ctx->pc = 0x26253cu;
    // NOP
label_262540:
    // 0x262540: 0xd1d7  .word       0x0000D1D7                   # dsrav       $k0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262540u;
    SET_GPR_S64(ctx, 26, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_262544:
    // 0x262544: 0x32e0  .word       0x000032E0                   # add         $a2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262544u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_262548:
    // 0x262548: 0x0  nop
    ctx->pc = 0x262548u;
    // NOP
label_26254c:
    // 0x26254c: 0x0  nop
    ctx->pc = 0x26254cu;
    // NOP
label_262550:
    // 0x262550: 0xd1de  .word       0x0000D1DE                   # ddiv        $k0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262550u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x262550 raw=0x0000D1DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262554:
    // 0x262554: 0x7770  tge         $zero, $zero, 477
    ctx->pc = 0x262554u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262558:
    // 0x262558: 0x0  nop
    ctx->pc = 0x262558u;
    // NOP
label_26255c:
    // 0x26255c: 0x0  nop
    ctx->pc = 0x26255cu;
    // NOP
label_262560:
    // 0x262560: 0xd1ed  .word       0x0000D1ED                   # daddu       $k0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262560u;
    SET_GPR_U64(ctx, 26, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_262564:
    // 0x262564: 0x2890  .word       0x00002890                   # mfhi        $a1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262564u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_262568:
    // 0x262568: 0x0  nop
    ctx->pc = 0x262568u;
    // NOP
label_26256c:
    // 0x26256c: 0x0  nop
    ctx->pc = 0x26256cu;
    // NOP
label_262570:
    // 0x262570: 0xd1f3  tltu        $zero, $zero, 839
    ctx->pc = 0x262570u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262574:
    // 0x262574: 0x30a0  .word       0x000030A0                   # add         $a2, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262574u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_262578:
    // 0x262578: 0x0  nop
    ctx->pc = 0x262578u;
    // NOP
label_26257c:
    // 0x26257c: 0x0  nop
    ctx->pc = 0x26257cu;
    // NOP
label_262580:
    // 0x262580: 0xd1fa  dsrl        $k0, $zero, 7
    ctx->pc = 0x262580u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) >> 7);
label_262584:
    // 0x262584: 0x45d0  .word       0x000045D0                   # mfhi        $t0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262584u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_262588:
    // 0x262588: 0x0  nop
    ctx->pc = 0x262588u;
    // NOP
label_26258c:
    // 0x26258c: 0x0  nop
    ctx->pc = 0x26258cu;
    // NOP
label_262590:
    // 0x262590: 0xd203  sra         $k0, $zero, 8
    ctx->pc = 0x262590u;
    SET_GPR_S32(ctx, 26, SRA32(GPR_S32(ctx, 0), 8));
label_262594:
    // 0x262594: 0x58c0  sll         $t3, $zero, 3
    ctx->pc = 0x262594u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_262598:
    // 0x262598: 0x0  nop
    ctx->pc = 0x262598u;
    // NOP
label_26259c:
    // 0x26259c: 0x0  nop
    ctx->pc = 0x26259cu;
    // NOP
label_2625a0:
    // 0x2625a0: 0xd20f  .word       0x0000D20F                   # sync # 0000D000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2625a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2625a4:
    // 0x2625a4: 0xbf00  sll         $s7, $zero, 28
    ctx->pc = 0x2625a4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_2625a8:
    // 0x2625a8: 0x0  nop
    ctx->pc = 0x2625a8u;
    // NOP
label_2625ac:
    // 0x2625ac: 0x0  nop
    ctx->pc = 0x2625acu;
    // NOP
label_2625b0:
    // 0x2625b0: 0xd227  .word       0x0000D227                   # not         $k0, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2625b0u;
    SET_GPR_U64(ctx, 26, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2625b4:
    // 0x2625b4: 0x7eb0  tge         $zero, $zero, 506
    ctx->pc = 0x2625b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2625b8:
    // 0x2625b8: 0x0  nop
    ctx->pc = 0x2625b8u;
    // NOP
label_2625bc:
    // 0x2625bc: 0x0  nop
    ctx->pc = 0x2625bcu;
    // NOP
label_2625c0:
    // 0x2625c0: 0xd237  .word       0x0000D237                   # INVALID     $zero, $zero, -0x2DC9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2625c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2625C0 raw=0x0000D237"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2625c4:
    // 0x2625c4: 0x4fe0  .word       0x00004FE0                   # add         $t1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2625c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2625c8:
    // 0x2625c8: 0x0  nop
    ctx->pc = 0x2625c8u;
    // NOP
label_2625cc:
    // 0x2625cc: 0x0  nop
    ctx->pc = 0x2625ccu;
    // NOP
label_2625d0:
    // 0x2625d0: 0xd241  .word       0x0000D241                   # INVALID     $zero, $zero, -0x2DBF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2625d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2625D0 raw=0x0000D241"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2625d4:
    // 0x2625d4: 0xfd50  .word       0x0000FD50                   # mfhi        $ra # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2625d4u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_2625d8:
    // 0x2625d8: 0x0  nop
    ctx->pc = 0x2625d8u;
    // NOP
label_2625dc:
    // 0x2625dc: 0x0  nop
    ctx->pc = 0x2625dcu;
    // NOP
label_2625e0:
    // 0x2625e0: 0xd261  .word       0x0000D261                   # addu        $k0, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2625e0u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2625e4:
    // 0x2625e4: 0x1460  .word       0x00001460                   # add         $v0, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2625e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_2625e8:
    // 0x2625e8: 0x0  nop
    ctx->pc = 0x2625e8u;
    // NOP
label_2625ec:
    // 0x2625ec: 0x0  nop
    ctx->pc = 0x2625ecu;
    // NOP
label_2625f0:
    // 0x2625f0: 0xd264  .word       0x0000D264                   # and         $k0, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2625f0u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2625f4:
    // 0x2625f4: 0xd1f0  tge         $zero, $zero, 839
    ctx->pc = 0x2625f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2625f8:
    // 0x2625f8: 0x0  nop
    ctx->pc = 0x2625f8u;
    // NOP
label_2625fc:
    // 0x2625fc: 0x0  nop
    ctx->pc = 0x2625fcu;
    // NOP
label_262600:
    // 0x262600: 0xd27f  dsra32      $k0, $zero, 9
    ctx->pc = 0x262600u;
    SET_GPR_S64(ctx, 26, GPR_S64(ctx, 0) >> (32 + 9));
label_262604:
    // 0x262604: 0x7cd0  .word       0x00007CD0                   # mfhi        $t7 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262604u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_262608:
    // 0x262608: 0x0  nop
    ctx->pc = 0x262608u;
    // NOP
label_26260c:
    // 0x26260c: 0x0  nop
    ctx->pc = 0x26260cu;
    // NOP
label_262610:
    // 0x262610: 0xd28f  .word       0x0000D28F                   # sync # 0000D000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262610u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_262614:
    // 0x262614: 0x11410  .word       0x00011410                   # mfhi        $v0 # 00010400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262614u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_262618:
    // 0x262618: 0x0  nop
    ctx->pc = 0x262618u;
    // NOP
label_26261c:
    // 0x26261c: 0x0  nop
    ctx->pc = 0x26261cu;
    // NOP
label_262620:
    // 0x262620: 0xd2b2  tlt         $zero, $zero, 842
    ctx->pc = 0x262620u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262624:
    // 0x262624: 0xe8d0  .word       0x0000E8D0                   # mfhi        $sp # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262624u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_262628:
    // 0x262628: 0x0  nop
    ctx->pc = 0x262628u;
    // NOP
label_26262c:
    // 0x26262c: 0x0  nop
    ctx->pc = 0x26262cu;
    // NOP
label_262630:
    // 0x262630: 0xd2d0  .word       0x0000D2D0                   # mfhi        $k0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262630u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_262634:
    // 0x262634: 0x5d90  .word       0x00005D90                   # mfhi        $t3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262634u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_262638:
    // 0x262638: 0x0  nop
    ctx->pc = 0x262638u;
    // NOP
label_26263c:
    // 0x26263c: 0x0  nop
    ctx->pc = 0x26263cu;
    // NOP
label_262640:
    // 0x262640: 0xd2dc  .word       0x0000D2DC                   # dmult       $zero, $zero # 0000D2C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262640u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x262640 raw=0x0000D2DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262644:
    // 0x262644: 0x4e70  tge         $zero, $zero, 313
    ctx->pc = 0x262644u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262648:
    // 0x262648: 0x0  nop
    ctx->pc = 0x262648u;
    // NOP
label_26264c:
    // 0x26264c: 0x0  nop
    ctx->pc = 0x26264cu;
    // NOP
label_262650:
    // 0x262650: 0xd2e6  .word       0x0000D2E6                   # xor         $k0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262650u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_262654:
    // 0x262654: 0x13100  sll         $a2, $at, 4
    ctx->pc = 0x262654u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 4));
label_262658:
    // 0x262658: 0x0  nop
    ctx->pc = 0x262658u;
    // NOP
label_26265c:
    // 0x26265c: 0x0  nop
    ctx->pc = 0x26265cu;
    // NOP
label_262660:
    // 0x262660: 0xd30d  break       0, 844
    ctx->pc = 0x262660u;
    runtime->handleBreak(rdram, ctx);
label_262664:
    // 0x262664: 0x11280  sll         $v0, $at, 10
    ctx->pc = 0x262664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), 10));
label_262668:
    // 0x262668: 0x0  nop
    ctx->pc = 0x262668u;
    // NOP
label_26266c:
    // 0x26266c: 0x0  nop
    ctx->pc = 0x26266cu;
    // NOP
label_262670:
    // 0x262670: 0xd330  tge         $zero, $zero, 844
    ctx->pc = 0x262670u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262674:
    // 0x262674: 0x2720  .word       0x00002720                   # add         $a0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262674u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_262678:
    // 0x262678: 0x0  nop
    ctx->pc = 0x262678u;
    // NOP
label_26267c:
    // 0x26267c: 0x0  nop
    ctx->pc = 0x26267cu;
    // NOP
label_262680:
    // 0x262680: 0xd335  .word       0x0000D335                   # INVALID     $zero, $zero, -0x2CCB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262680u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x262680 raw=0x0000D335"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262684:
    // 0x262684: 0x2c80  sll         $a1, $zero, 18
    ctx->pc = 0x262684u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_262688:
    // 0x262688: 0x0  nop
    ctx->pc = 0x262688u;
    // NOP
label_26268c:
    // 0x26268c: 0x0  nop
    ctx->pc = 0x26268cu;
    // NOP
label_262690:
    // 0x262690: 0xd33b  dsra        $k0, $zero, 12
    ctx->pc = 0x262690u;
    SET_GPR_S64(ctx, 26, GPR_S64(ctx, 0) >> 12);
label_262694:
    // 0x262694: 0x10b30  tge         $zero, $at, 44
    ctx->pc = 0x262694u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_262698:
    // 0x262698: 0x0  nop
    ctx->pc = 0x262698u;
    // NOP
label_26269c:
    // 0x26269c: 0x0  nop
    ctx->pc = 0x26269cu;
    // NOP
label_2626a0:
    // 0x2626a0: 0xd35d  .word       0x0000D35D                   # dmultu      $zero, $zero # 0000D340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2626a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2626A0 raw=0x0000D35D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2626a4:
    // 0x2626a4: 0xaa30  tge         $zero, $zero, 680
    ctx->pc = 0x2626a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2626a8:
    // 0x2626a8: 0x0  nop
    ctx->pc = 0x2626a8u;
    // NOP
label_2626ac:
    // 0x2626ac: 0x0  nop
    ctx->pc = 0x2626acu;
    // NOP
label_2626b0:
    // 0x2626b0: 0xd373  tltu        $zero, $zero, 845
    ctx->pc = 0x2626b0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2626b4:
    // 0x2626b4: 0xcc60  .word       0x0000CC60                   # add         $t9, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2626b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_2626b8:
    // 0x2626b8: 0x0  nop
    ctx->pc = 0x2626b8u;
    // NOP
label_2626bc:
    // 0x2626bc: 0x0  nop
    ctx->pc = 0x2626bcu;
    // NOP
label_2626c0:
    // 0x2626c0: 0xd38d  break       0, 846
    ctx->pc = 0x2626c0u;
    runtime->handleBreak(rdram, ctx);
label_2626c4:
    // 0x2626c4: 0x8c90  .word       0x00008C90                   # mfhi        $s1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2626c4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2626c8:
    // 0x2626c8: 0x0  nop
    ctx->pc = 0x2626c8u;
    // NOP
label_2626cc:
    // 0x2626cc: 0x0  nop
    ctx->pc = 0x2626ccu;
    // NOP
label_2626d0:
    // 0x2626d0: 0xd39f  .word       0x0000D39F                   # ddivu       $k0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2626d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2626D0 raw=0x0000D39F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2626d4:
    // 0x2626d4: 0x1a10  .word       0x00001A10                   # mfhi        $v1 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2626d4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2626d8:
    // 0x2626d8: 0x0  nop
    ctx->pc = 0x2626d8u;
    // NOP
label_2626dc:
    // 0x2626dc: 0x0  nop
    ctx->pc = 0x2626dcu;
    // NOP
label_2626e0:
    // 0x2626e0: 0xd3a3  .word       0x0000D3A3                   # negu        $k0, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2626e0u;
    SET_GPR_S32(ctx, 26, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2626e4:
    // 0x2626e4: 0x4b80  sll         $t1, $zero, 14
    ctx->pc = 0x2626e4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_2626e8:
    // 0x2626e8: 0x0  nop
    ctx->pc = 0x2626e8u;
    // NOP
label_2626ec:
    // 0x2626ec: 0x0  nop
    ctx->pc = 0x2626ecu;
    // NOP
label_2626f0:
    // 0x2626f0: 0xd3ad  .word       0x0000D3AD                   # daddu       $k0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2626f0u;
    SET_GPR_U64(ctx, 26, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2626f4:
    // 0x2626f4: 0x8390  .word       0x00008390                   # mfhi        $s0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2626f4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_2626f8:
    // 0x2626f8: 0x0  nop
    ctx->pc = 0x2626f8u;
    // NOP
label_2626fc:
    // 0x2626fc: 0x0  nop
    ctx->pc = 0x2626fcu;
    // NOP
label_262700:
    // 0x262700: 0xd3be  dsrl32      $k0, $zero, 14
    ctx->pc = 0x262700u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) >> (32 + 14));
label_262704:
    // 0x262704: 0x8570  tge         $zero, $zero, 533
    ctx->pc = 0x262704u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262708:
    // 0x262708: 0x0  nop
    ctx->pc = 0x262708u;
    // NOP
label_26270c:
    // 0x26270c: 0x0  nop
    ctx->pc = 0x26270cu;
    // NOP
label_262710:
    // 0x262710: 0xd3cf  .word       0x0000D3CF                   # sync # 0000D000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262710u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_262714:
    // 0x262714: 0x85b0  tge         $zero, $zero, 534
    ctx->pc = 0x262714u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262718:
    // 0x262718: 0x0  nop
    ctx->pc = 0x262718u;
    // NOP
label_26271c:
    // 0x26271c: 0x0  nop
    ctx->pc = 0x26271cu;
    // NOP
label_262720:
    // 0x262720: 0xd3e0  .word       0x0000D3E0                   # add         $k0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262720u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_262724:
    // 0x262724: 0x38f0  tge         $zero, $zero, 227
    ctx->pc = 0x262724u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262728:
    // 0x262728: 0x0  nop
    ctx->pc = 0x262728u;
    // NOP
label_26272c:
    // 0x26272c: 0x0  nop
    ctx->pc = 0x26272cu;
    // NOP
label_262730:
    // 0x262730: 0xd3e8  .word       0x0000D3E8                   # mfsa        $k0 # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x262730u;
    SET_GPR_U32(ctx, 26, ctx->sa);
label_262734:
    // 0x262734: 0x7020  add         $t6, $zero, $zero
    ctx->pc = 0x262734u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_262738:
    // 0x262738: 0x0  nop
    ctx->pc = 0x262738u;
    // NOP
label_26273c:
    // 0x26273c: 0x0  nop
    ctx->pc = 0x26273cu;
    // NOP
label_262740:
    // 0x262740: 0xd3f7  .word       0x0000D3F7                   # INVALID     $zero, $zero, -0x2C09 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262740u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x262740 raw=0x0000D3F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262744:
    // 0x262744: 0xd0a0  .word       0x0000D0A0                   # add         $k0, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262744u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_262748:
    // 0x262748: 0x0  nop
    ctx->pc = 0x262748u;
    // NOP
label_26274c:
    // 0x26274c: 0x0  nop
    ctx->pc = 0x26274cu;
    // NOP
label_262750:
    // 0x262750: 0xd412  .word       0x0000D412                   # mflo        $k0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262750u;
    SET_GPR_U64(ctx, 26, ctx->lo);
label_262754:
    // 0x262754: 0x3be0  .word       0x00003BE0                   # add         $a3, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262754u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_262758:
    // 0x262758: 0x0  nop
    ctx->pc = 0x262758u;
    // NOP
label_26275c:
    // 0x26275c: 0x0  nop
    ctx->pc = 0x26275cu;
    // NOP
label_262760:
    // 0x262760: 0xd41a  .word       0x0000D41A                   # div         $k0, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262760u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_262764:
    // 0x262764: 0x16c0  sll         $v0, $zero, 27
    ctx->pc = 0x262764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_262768:
    // 0x262768: 0x0  nop
    ctx->pc = 0x262768u;
    // NOP
label_26276c:
    // 0x26276c: 0x0  nop
    ctx->pc = 0x26276cu;
    // NOP
label_262770:
    // 0x262770: 0xd41d  .word       0x0000D41D                   # dmultu      $zero, $zero # 0000D400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262770u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x262770 raw=0x0000D41D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262774:
    // 0x262774: 0x7640  sll         $t6, $zero, 25
    ctx->pc = 0x262774u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_262778:
    // 0x262778: 0x0  nop
    ctx->pc = 0x262778u;
    // NOP
label_26277c:
    // 0x26277c: 0x0  nop
    ctx->pc = 0x26277cu;
    // NOP
label_262780:
    // 0x262780: 0xd42c  .word       0x0000D42C                   # dadd        $k0, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262780u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 26, r); }
label_262784:
    // 0x262784: 0x15e50  .word       0x00015E50                   # mfhi        $t3 # 00010640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262784u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_262788:
    // 0x262788: 0x0  nop
    ctx->pc = 0x262788u;
    // NOP
label_26278c:
    // 0x26278c: 0x0  nop
    ctx->pc = 0x26278cu;
    // NOP
label_262790:
    // 0x262790: 0xd458  .word       0x0000D458                   # mult        $k0, $zero, $zero # 00000440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x262790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_262794:
    // 0x262794: 0xe350  .word       0x0000E350                   # mfhi        $gp # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262794u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_262798:
    // 0x262798: 0x0  nop
    ctx->pc = 0x262798u;
    // NOP
label_26279c:
    // 0x26279c: 0x0  nop
    ctx->pc = 0x26279cu;
    // NOP
label_2627a0:
    // 0x2627a0: 0xd475  .word       0x0000D475                   # INVALID     $zero, $zero, -0x2B8B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2627a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2627A0 raw=0x0000D475"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2627a4:
    // 0x2627a4: 0x13520  .word       0x00013520                   # add         $a2, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2627a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_2627a8:
    // 0x2627a8: 0x0  nop
    ctx->pc = 0x2627a8u;
    // NOP
label_2627ac:
    // 0x2627ac: 0x0  nop
    ctx->pc = 0x2627acu;
    // NOP
label_2627b0:
    // 0x2627b0: 0xd49c  .word       0x0000D49C                   # dmult       $zero, $zero # 0000D480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2627b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2627B0 raw=0x0000D49C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2627b4:
    // 0x2627b4: 0xa640  sll         $s4, $zero, 25
    ctx->pc = 0x2627b4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_2627b8:
    // 0x2627b8: 0x0  nop
    ctx->pc = 0x2627b8u;
    // NOP
label_2627bc:
    // 0x2627bc: 0x0  nop
    ctx->pc = 0x2627bcu;
    // NOP
label_2627c0:
    // 0x2627c0: 0xd4b1  tgeu        $zero, $zero, 850
    ctx->pc = 0x2627c0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2627c4:
    // 0x2627c4: 0x1a2b0  tge         $zero, $at, 650
    ctx->pc = 0x2627c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2627c8:
    // 0x2627c8: 0x0  nop
    ctx->pc = 0x2627c8u;
    // NOP
label_2627cc:
    // 0x2627cc: 0x0  nop
    ctx->pc = 0x2627ccu;
    // NOP
label_2627d0:
    // 0x2627d0: 0xd4e6  .word       0x0000D4E6                   # xor         $k0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2627d0u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2627d4:
    // 0x2627d4: 0xb610  .word       0x0000B610                   # mfhi        $s6 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2627d4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_2627d8:
    // 0x2627d8: 0x0  nop
    ctx->pc = 0x2627d8u;
    // NOP
label_2627dc:
    // 0x2627dc: 0x0  nop
    ctx->pc = 0x2627dcu;
    // NOP
label_2627e0:
    // 0x2627e0: 0xd4fd  .word       0x0000D4FD                   # INVALID     $zero, $zero, -0x2B03 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2627e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2627E0 raw=0x0000D4FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2627e4:
    // 0x2627e4: 0xbbf0  tge         $zero, $zero, 751
    ctx->pc = 0x2627e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2627e8:
    // 0x2627e8: 0x0  nop
    ctx->pc = 0x2627e8u;
    // NOP
label_2627ec:
    // 0x2627ec: 0x0  nop
    ctx->pc = 0x2627ecu;
    // NOP
label_2627f0:
    // 0x2627f0: 0xd515  .word       0x0000D515                   # INVALID     $zero, $zero, -0x2AEB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2627f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2627F0 raw=0x0000D515"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2627f4:
    // 0x2627f4: 0x10a00  sll         $at, $at, 8
    ctx->pc = 0x2627f4u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 8));
label_2627f8:
    // 0x2627f8: 0x0  nop
    ctx->pc = 0x2627f8u;
    // NOP
label_2627fc:
    // 0x2627fc: 0x0  nop
    ctx->pc = 0x2627fcu;
    // NOP
label_262800:
    // 0x262800: 0xd537  .word       0x0000D537                   # INVALID     $zero, $zero, -0x2AC9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262800u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x262800 raw=0x0000D537"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262804:
    // 0x262804: 0xa1d0  .word       0x0000A1D0                   # mfhi        $s4 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262804u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_262808:
    // 0x262808: 0x0  nop
    ctx->pc = 0x262808u;
    // NOP
label_26280c:
    // 0x26280c: 0x0  nop
    ctx->pc = 0x26280cu;
    // NOP
label_262810:
    // 0x262810: 0xd54c  syscall     853
    ctx->pc = 0x262810u;
    ctx->pc = 0x262814u;
runtime->handleSyscall(rdram, ctx, 0x355u);
label_262814:
    // 0x262814: 0x5c30  tge         $zero, $zero, 368
    ctx->pc = 0x262814u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262818:
    // 0x262818: 0x0  nop
    ctx->pc = 0x262818u;
    // NOP
label_26281c:
    // 0x26281c: 0x0  nop
    ctx->pc = 0x26281cu;
    // NOP
label_262820:
    // 0x262820: 0xd558  .word       0x0000D558                   # mult        $k0, $zero, $zero # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x262820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_262824:
    // 0x262824: 0xfc20  .word       0x0000FC20                   # add         $ra, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262824u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_262828:
    // 0x262828: 0x0  nop
    ctx->pc = 0x262828u;
    // NOP
label_26282c:
    // 0x26282c: 0x0  nop
    ctx->pc = 0x26282cu;
    // NOP
label_262830:
    // 0x262830: 0xd578  dsll        $k0, $zero, 21
    ctx->pc = 0x262830u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) << 21);
label_262834:
    // 0x262834: 0x36c0  sll         $a2, $zero, 27
    ctx->pc = 0x262834u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_262838:
    // 0x262838: 0x0  nop
    ctx->pc = 0x262838u;
    // NOP
label_26283c:
    // 0x26283c: 0x0  nop
    ctx->pc = 0x26283cu;
    // NOP
label_262840:
    // 0x262840: 0xd57f  dsra32      $k0, $zero, 21
    ctx->pc = 0x262840u;
    SET_GPR_S64(ctx, 26, GPR_S64(ctx, 0) >> (32 + 21));
label_262844:
    // 0x262844: 0x5610  .word       0x00005610                   # mfhi        $t2 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262844u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_262848:
    // 0x262848: 0x0  nop
    ctx->pc = 0x262848u;
    // NOP
label_26284c:
    // 0x26284c: 0x0  nop
    ctx->pc = 0x26284cu;
    // NOP
label_262850:
    // 0x262850: 0xd58a  .word       0x0000D58A                   # movz        $k0, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262850u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 26, GPR_VEC(ctx, 0));
label_262854:
    // 0x262854: 0xbce0  .word       0x0000BCE0                   # add         $s7, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262854u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_262858:
    // 0x262858: 0x0  nop
    ctx->pc = 0x262858u;
    // NOP
label_26285c:
    // 0x26285c: 0x0  nop
    ctx->pc = 0x26285cu;
    // NOP
label_262860:
    // 0x262860: 0xd5a2  .word       0x0000D5A2                   # neg         $k0, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262860u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_262864:
    // 0x262864: 0xa230  tge         $zero, $zero, 648
    ctx->pc = 0x262864u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262868:
    // 0x262868: 0x0  nop
    ctx->pc = 0x262868u;
    // NOP
label_26286c:
    // 0x26286c: 0x0  nop
    ctx->pc = 0x26286cu;
    // NOP
label_262870:
    // 0x262870: 0xd5b7  .word       0x0000D5B7                   # INVALID     $zero, $zero, -0x2A49 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262870u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x262870 raw=0x0000D5B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262874:
    // 0x262874: 0xd780  sll         $k0, $zero, 30
    ctx->pc = 0x262874u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_262878:
    // 0x262878: 0x0  nop
    ctx->pc = 0x262878u;
    // NOP
label_26287c:
    // 0x26287c: 0x0  nop
    ctx->pc = 0x26287cu;
    // NOP
label_262880:
    // 0x262880: 0xd5d2  .word       0x0000D5D2                   # mflo        $k0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262880u;
    SET_GPR_U64(ctx, 26, ctx->lo);
label_262884:
    // 0x262884: 0x11c00  sll         $v1, $at, 16
    ctx->pc = 0x262884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 16));
label_262888:
    // 0x262888: 0x0  nop
    ctx->pc = 0x262888u;
    // NOP
label_26288c:
    // 0x26288c: 0x0  nop
    ctx->pc = 0x26288cu;
    // NOP
label_262890:
    // 0x262890: 0xd5f6  tne         $zero, $zero, 855
    ctx->pc = 0x262890u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262894:
    // 0x262894: 0x52c0  sll         $t2, $zero, 11
    ctx->pc = 0x262894u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_262898:
    // 0x262898: 0x0  nop
    ctx->pc = 0x262898u;
    // NOP
label_26289c:
    // 0x26289c: 0x0  nop
    ctx->pc = 0x26289cu;
    // NOP
label_2628a0:
    // 0x2628a0: 0xd601  .word       0x0000D601                   # INVALID     $zero, $zero, -0x29FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2628a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2628A0 raw=0x0000D601"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2628a4:
    // 0x2628a4: 0x4470  tge         $zero, $zero, 273
    ctx->pc = 0x2628a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2628a8:
    // 0x2628a8: 0x0  nop
    ctx->pc = 0x2628a8u;
    // NOP
label_2628ac:
    // 0x2628ac: 0x0  nop
    ctx->pc = 0x2628acu;
    // NOP
label_2628b0:
    // 0x2628b0: 0xd60a  .word       0x0000D60A                   # movz        $k0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2628b0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 26, GPR_VEC(ctx, 0));
label_2628b4:
    // 0x2628b4: 0x4920  .word       0x00004920                   # add         $t1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2628b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2628b8:
    // 0x2628b8: 0x0  nop
    ctx->pc = 0x2628b8u;
    // NOP
label_2628bc:
    // 0x2628bc: 0x0  nop
    ctx->pc = 0x2628bcu;
    // NOP
label_2628c0:
    // 0x2628c0: 0xd614  .word       0x0000D614                   # dsllv       $k0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2628c0u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2628c4:
    // 0x2628c4: 0x2340  sll         $a0, $zero, 13
    ctx->pc = 0x2628c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_2628c8:
    // 0x2628c8: 0x0  nop
    ctx->pc = 0x2628c8u;
    // NOP
label_2628cc:
    // 0x2628cc: 0x0  nop
    ctx->pc = 0x2628ccu;
    // NOP
label_2628d0:
    // 0x2628d0: 0xd619  .word       0x0000D619                   # multu       $zero, $zero # 0000D600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2628d0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_2628d4:
    // 0x2628d4: 0x3590  .word       0x00003590                   # mfhi        $a2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2628d4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_2628d8:
    // 0x2628d8: 0x0  nop
    ctx->pc = 0x2628d8u;
    // NOP
label_2628dc:
    // 0x2628dc: 0x0  nop
    ctx->pc = 0x2628dcu;
    // NOP
label_2628e0:
    // 0x2628e0: 0xd620  .word       0x0000D620                   # add         $k0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2628e0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_2628e4:
    // 0x2628e4: 0x8e10  .word       0x00008E10                   # mfhi        $s1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2628e4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2628e8:
    // 0x2628e8: 0x0  nop
    ctx->pc = 0x2628e8u;
    // NOP
label_2628ec:
    // 0x2628ec: 0x0  nop
    ctx->pc = 0x2628ecu;
    // NOP
label_2628f0:
    // 0x2628f0: 0xd632  tlt         $zero, $zero, 856
    ctx->pc = 0x2628f0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2628f4:
    // 0x2628f4: 0x6fc0  sll         $t5, $zero, 31
    ctx->pc = 0x2628f4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_2628f8:
    // 0x2628f8: 0x0  nop
    ctx->pc = 0x2628f8u;
    // NOP
label_2628fc:
    // 0x2628fc: 0x0  nop
    ctx->pc = 0x2628fcu;
    // NOP
label_262900:
    // 0x262900: 0xd640  sll         $k0, $zero, 25
    ctx->pc = 0x262900u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_262904:
    // 0x262904: 0x25e0  .word       0x000025E0                   # add         $a0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262904u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_262908:
    // 0x262908: 0x0  nop
    ctx->pc = 0x262908u;
    // NOP
label_26290c:
    // 0x26290c: 0x0  nop
    ctx->pc = 0x26290cu;
    // NOP
label_262910:
    // 0x262910: 0xd645  .word       0x0000D645                   # INVALID     $zero, $zero, -0x29BB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262910u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x262910 raw=0x0000D645"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262914:
    // 0x262914: 0x2eb0  tge         $zero, $zero, 186
    ctx->pc = 0x262914u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262918:
    // 0x262918: 0x0  nop
    ctx->pc = 0x262918u;
    // NOP
label_26291c:
    // 0x26291c: 0x0  nop
    ctx->pc = 0x26291cu;
    // NOP
label_262920:
    // 0x262920: 0xd64b  .word       0x0000D64B                   # movn        $k0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262920u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 26, GPR_VEC(ctx, 0));
label_262924:
    // 0x262924: 0x8b60  .word       0x00008B60                   # add         $s1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262924u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_262928:
    // 0x262928: 0x0  nop
    ctx->pc = 0x262928u;
    // NOP
label_26292c:
    // 0x26292c: 0x0  nop
    ctx->pc = 0x26292cu;
    // NOP
label_262930:
    // 0x262930: 0xd65d  .word       0x0000D65D                   # dmultu      $zero, $zero # 0000D640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262930u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x262930 raw=0x0000D65D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262934:
    // 0x262934: 0x7420  .word       0x00007420                   # add         $t6, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262934u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_262938:
    // 0x262938: 0x0  nop
    ctx->pc = 0x262938u;
    // NOP
label_26293c:
    // 0x26293c: 0x0  nop
    ctx->pc = 0x26293cu;
    // NOP
label_262940:
    // 0x262940: 0xd66c  .word       0x0000D66C                   # dadd        $k0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262940u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 26, r); }
label_262944:
    // 0x262944: 0x4f50  .word       0x00004F50                   # mfhi        $t1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262944u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_262948:
    // 0x262948: 0x0  nop
    ctx->pc = 0x262948u;
    // NOP
label_26294c:
    // 0x26294c: 0x0  nop
    ctx->pc = 0x26294cu;
    // NOP
label_262950:
    // 0x262950: 0xd676  tne         $zero, $zero, 857
    ctx->pc = 0x262950u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262954:
    // 0x262954: 0x8320  .word       0x00008320                   # add         $s0, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262954u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_262958:
    // 0x262958: 0x0  nop
    ctx->pc = 0x262958u;
    // NOP
label_26295c:
    // 0x26295c: 0x0  nop
    ctx->pc = 0x26295cu;
    // NOP
label_262960:
    // 0x262960: 0xd687  .word       0x0000D687                   # srav        $k0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262960u;
    SET_GPR_S32(ctx, 26, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_262964:
    // 0x262964: 0x18b80  sll         $s1, $at, 14
    ctx->pc = 0x262964u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 1), 14));
label_262968:
    // 0x262968: 0x0  nop
    ctx->pc = 0x262968u;
    // NOP
label_26296c:
    // 0x26296c: 0x0  nop
    ctx->pc = 0x26296cu;
    // NOP
label_262970:
    // 0x262970: 0xd6b9  .word       0x0000D6B9                   # INVALID     $zero, $zero, -0x2947 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262970u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x262970 raw=0x0000D6B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262974:
    // 0x262974: 0x92d0  .word       0x000092D0                   # mfhi        $s2 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262974u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_262978:
    // 0x262978: 0x0  nop
    ctx->pc = 0x262978u;
    // NOP
label_26297c:
    // 0x26297c: 0x0  nop
    ctx->pc = 0x26297cu;
    // NOP
label_262980:
    // 0x262980: 0xd6cc  syscall     859
    ctx->pc = 0x262980u;
    ctx->pc = 0x262984u;
runtime->handleSyscall(rdram, ctx, 0x35Bu);
label_262984:
    // 0x262984: 0x2c90  .word       0x00002C90                   # mfhi        $a1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262984u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_262988:
    // 0x262988: 0x0  nop
    ctx->pc = 0x262988u;
    // NOP
label_26298c:
    // 0x26298c: 0x0  nop
    ctx->pc = 0x26298cu;
    // NOP
label_262990:
    // 0x262990: 0xd6d2  .word       0x0000D6D2                   # mflo        $k0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262990u;
    SET_GPR_U64(ctx, 26, ctx->lo);
label_262994:
    // 0x262994: 0xd230  tge         $zero, $zero, 840
    ctx->pc = 0x262994u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262998:
    // 0x262998: 0x0  nop
    ctx->pc = 0x262998u;
    // NOP
label_26299c:
    // 0x26299c: 0x0  nop
    ctx->pc = 0x26299cu;
    // NOP
label_2629a0:
    // 0x2629a0: 0xd6ed  .word       0x0000D6ED                   # daddu       $k0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2629a0u;
    SET_GPR_U64(ctx, 26, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2629a4:
    // 0x2629a4: 0xe250  .word       0x0000E250                   # mfhi        $gp # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2629a4u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_2629a8:
    // 0x2629a8: 0x0  nop
    ctx->pc = 0x2629a8u;
    // NOP
label_2629ac:
    // 0x2629ac: 0x0  nop
    ctx->pc = 0x2629acu;
    // NOP
label_2629b0:
    // 0x2629b0: 0xd70a  .word       0x0000D70A                   # movz        $k0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2629b0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 26, GPR_VEC(ctx, 0));
label_2629b4:
    // 0x2629b4: 0x10180  sll         $zero, $at, 6
    ctx->pc = 0x2629b4u;
    
label_2629b8:
    // 0x2629b8: 0x0  nop
    ctx->pc = 0x2629b8u;
    // NOP
label_2629bc:
    // 0x2629bc: 0x0  nop
    ctx->pc = 0x2629bcu;
    // NOP
label_2629c0:
    // 0x2629c0: 0xd72b  .word       0x0000D72B                   # sltu        $k0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2629c0u;
    SET_GPR_U64(ctx, 26, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2629c4:
    // 0x2629c4: 0xc7d0  .word       0x0000C7D0                   # mfhi        $t8 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2629c4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_2629c8:
    // 0x2629c8: 0x0  nop
    ctx->pc = 0x2629c8u;
    // NOP
label_2629cc:
    // 0x2629cc: 0x0  nop
    ctx->pc = 0x2629ccu;
    // NOP
label_2629d0:
    // 0x2629d0: 0xd744  .word       0x0000D744                   # sllv        $k0, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2629d0u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2629d4:
    // 0x2629d4: 0x7480  sll         $t6, $zero, 18
    ctx->pc = 0x2629d4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_2629d8:
    // 0x2629d8: 0x0  nop
    ctx->pc = 0x2629d8u;
    // NOP
label_2629dc:
    // 0x2629dc: 0x0  nop
    ctx->pc = 0x2629dcu;
    // NOP
label_2629e0:
    // 0x2629e0: 0xd753  .word       0x0000D753                   # mtlo        $zero # 0000D740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2629e0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2629e4:
    // 0x2629e4: 0x10e60  .word       0x00010E60                   # add         $at, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2629e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_2629e8:
    // 0x2629e8: 0x0  nop
    ctx->pc = 0x2629e8u;
    // NOP
label_2629ec:
    // 0x2629ec: 0x0  nop
    ctx->pc = 0x2629ecu;
    // NOP
label_2629f0:
    // 0x2629f0: 0xd775  .word       0x0000D775                   # INVALID     $zero, $zero, -0x288B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2629f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2629F0 raw=0x0000D775"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2629f4:
    // 0x2629f4: 0x189a0  .word       0x000189A0                   # add         $s1, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2629f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2629f8:
    // 0x2629f8: 0x0  nop
    ctx->pc = 0x2629f8u;
    // NOP
label_2629fc:
    // 0x2629fc: 0x0  nop
    ctx->pc = 0x2629fcu;
    // NOP
label_262a00:
    // 0x262a00: 0xd7a7  .word       0x0000D7A7                   # not         $k0, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262a00u;
    SET_GPR_U64(ctx, 26, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_262a04:
    // 0x262a04: 0x15410  .word       0x00015410                   # mfhi        $t2 # 00010400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262a04u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_262a08:
    // 0x262a08: 0x0  nop
    ctx->pc = 0x262a08u;
    // NOP
label_262a0c:
    // 0x262a0c: 0x0  nop
    ctx->pc = 0x262a0cu;
    // NOP
label_262a10:
    // 0x262a10: 0xd7d2  .word       0x0000D7D2                   # mflo        $k0 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262a10u;
    SET_GPR_U64(ctx, 26, ctx->lo);
label_262a14:
    // 0x262a14: 0x17370  tge         $zero, $at, 461
    ctx->pc = 0x262a14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_262a18:
    // 0x262a18: 0x0  nop
    ctx->pc = 0x262a18u;
    // NOP
label_262a1c:
    // 0x262a1c: 0x0  nop
    ctx->pc = 0x262a1cu;
    // NOP
label_262a20:
    // 0x262a20: 0xd801  .word       0x0000D801                   # INVALID     $zero, $zero, -0x27FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262a20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x262A20 raw=0x0000D801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262a24:
    // 0x262a24: 0x61d0  .word       0x000061D0                   # mfhi        $t4 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262a24u;
    SET_GPR_U64(ctx, 12, ctx->hi);
    ctx->pc = 0x262a28u;
    return;
}
