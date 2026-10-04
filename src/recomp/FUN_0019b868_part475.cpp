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


void FUN_0019b868_part475(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x282f88u: goto label_282f88;
        case 0x282f8cu: goto label_282f8c;
        case 0x282f90u: goto label_282f90;
        case 0x282f94u: goto label_282f94;
        case 0x282f98u: goto label_282f98;
        case 0x282f9cu: goto label_282f9c;
        case 0x282fa0u: goto label_282fa0;
        case 0x282fa4u: goto label_282fa4;
        case 0x282fa8u: goto label_282fa8;
        case 0x282facu: goto label_282fac;
        case 0x282fb0u: goto label_282fb0;
        case 0x282fb4u: goto label_282fb4;
        case 0x282fb8u: goto label_282fb8;
        case 0x282fbcu: goto label_282fbc;
        case 0x282fc0u: goto label_282fc0;
        case 0x282fc4u: goto label_282fc4;
        case 0x282fc8u: goto label_282fc8;
        case 0x282fccu: goto label_282fcc;
        case 0x282fd0u: goto label_282fd0;
        case 0x282fd4u: goto label_282fd4;
        case 0x282fd8u: goto label_282fd8;
        case 0x282fdcu: goto label_282fdc;
        case 0x282fe0u: goto label_282fe0;
        case 0x282fe4u: goto label_282fe4;
        case 0x282fe8u: goto label_282fe8;
        case 0x282fecu: goto label_282fec;
        case 0x282ff0u: goto label_282ff0;
        case 0x282ff4u: goto label_282ff4;
        case 0x282ff8u: goto label_282ff8;
        case 0x282ffcu: goto label_282ffc;
        case 0x283000u: goto label_283000;
        case 0x283004u: goto label_283004;
        case 0x283008u: goto label_283008;
        case 0x28300cu: goto label_28300c;
        case 0x283010u: goto label_283010;
        case 0x283014u: goto label_283014;
        case 0x283018u: goto label_283018;
        case 0x28301cu: goto label_28301c;
        case 0x283020u: goto label_283020;
        case 0x283024u: goto label_283024;
        case 0x283028u: goto label_283028;
        case 0x28302cu: goto label_28302c;
        case 0x283030u: goto label_283030;
        case 0x283034u: goto label_283034;
        case 0x283038u: goto label_283038;
        case 0x28303cu: goto label_28303c;
        case 0x283040u: goto label_283040;
        case 0x283044u: goto label_283044;
        case 0x283048u: goto label_283048;
        case 0x28304cu: goto label_28304c;
        case 0x283050u: goto label_283050;
        case 0x283054u: goto label_283054;
        case 0x283058u: goto label_283058;
        case 0x28305cu: goto label_28305c;
        case 0x283060u: goto label_283060;
        case 0x283064u: goto label_283064;
        case 0x283068u: goto label_283068;
        case 0x28306cu: goto label_28306c;
        case 0x283070u: goto label_283070;
        case 0x283074u: goto label_283074;
        case 0x283078u: goto label_283078;
        case 0x28307cu: goto label_28307c;
        case 0x283080u: goto label_283080;
        case 0x283084u: goto label_283084;
        case 0x283088u: goto label_283088;
        case 0x28308cu: goto label_28308c;
        case 0x283090u: goto label_283090;
        case 0x283094u: goto label_283094;
        case 0x283098u: goto label_283098;
        case 0x28309cu: goto label_28309c;
        case 0x2830a0u: goto label_2830a0;
        case 0x2830a4u: goto label_2830a4;
        case 0x2830a8u: goto label_2830a8;
        case 0x2830acu: goto label_2830ac;
        case 0x2830b0u: goto label_2830b0;
        case 0x2830b4u: goto label_2830b4;
        case 0x2830b8u: goto label_2830b8;
        case 0x2830bcu: goto label_2830bc;
        case 0x2830c0u: goto label_2830c0;
        case 0x2830c4u: goto label_2830c4;
        case 0x2830c8u: goto label_2830c8;
        case 0x2830ccu: goto label_2830cc;
        case 0x2830d0u: goto label_2830d0;
        case 0x2830d4u: goto label_2830d4;
        case 0x2830d8u: goto label_2830d8;
        case 0x2830dcu: goto label_2830dc;
        case 0x2830e0u: goto label_2830e0;
        case 0x2830e4u: goto label_2830e4;
        case 0x2830e8u: goto label_2830e8;
        case 0x2830ecu: goto label_2830ec;
        case 0x2830f0u: goto label_2830f0;
        case 0x2830f4u: goto label_2830f4;
        case 0x2830f8u: goto label_2830f8;
        case 0x2830fcu: goto label_2830fc;
        case 0x283100u: goto label_283100;
        case 0x283104u: goto label_283104;
        case 0x283108u: goto label_283108;
        case 0x28310cu: goto label_28310c;
        case 0x283110u: goto label_283110;
        case 0x283114u: goto label_283114;
        case 0x283118u: goto label_283118;
        case 0x28311cu: goto label_28311c;
        case 0x283120u: goto label_283120;
        case 0x283124u: goto label_283124;
        case 0x283128u: goto label_283128;
        case 0x28312cu: goto label_28312c;
        case 0x283130u: goto label_283130;
        case 0x283134u: goto label_283134;
        case 0x283138u: goto label_283138;
        case 0x28313cu: goto label_28313c;
        case 0x283140u: goto label_283140;
        case 0x283144u: goto label_283144;
        case 0x283148u: goto label_283148;
        case 0x28314cu: goto label_28314c;
        case 0x283150u: goto label_283150;
        case 0x283154u: goto label_283154;
        case 0x283158u: goto label_283158;
        case 0x28315cu: goto label_28315c;
        case 0x283160u: goto label_283160;
        case 0x283164u: goto label_283164;
        case 0x283168u: goto label_283168;
        case 0x28316cu: goto label_28316c;
        case 0x283170u: goto label_283170;
        case 0x283174u: goto label_283174;
        case 0x283178u: goto label_283178;
        case 0x28317cu: goto label_28317c;
        case 0x283180u: goto label_283180;
        case 0x283184u: goto label_283184;
        case 0x283188u: goto label_283188;
        case 0x28318cu: goto label_28318c;
        case 0x283190u: goto label_283190;
        case 0x283194u: goto label_283194;
        case 0x283198u: goto label_283198;
        case 0x28319cu: goto label_28319c;
        case 0x2831a0u: goto label_2831a0;
        case 0x2831a4u: goto label_2831a4;
        case 0x2831a8u: goto label_2831a8;
        case 0x2831acu: goto label_2831ac;
        case 0x2831b0u: goto label_2831b0;
        case 0x2831b4u: goto label_2831b4;
        case 0x2831b8u: goto label_2831b8;
        case 0x2831bcu: goto label_2831bc;
        case 0x2831c0u: goto label_2831c0;
        case 0x2831c4u: goto label_2831c4;
        case 0x2831c8u: goto label_2831c8;
        case 0x2831ccu: goto label_2831cc;
        case 0x2831d0u: goto label_2831d0;
        case 0x2831d4u: goto label_2831d4;
        case 0x2831d8u: goto label_2831d8;
        case 0x2831dcu: goto label_2831dc;
        case 0x2831e0u: goto label_2831e0;
        case 0x2831e4u: goto label_2831e4;
        case 0x2831e8u: goto label_2831e8;
        case 0x2831ecu: goto label_2831ec;
        case 0x2831f0u: goto label_2831f0;
        case 0x2831f4u: goto label_2831f4;
        case 0x2831f8u: goto label_2831f8;
        case 0x2831fcu: goto label_2831fc;
        case 0x283200u: goto label_283200;
        case 0x283204u: goto label_283204;
        case 0x283208u: goto label_283208;
        case 0x28320cu: goto label_28320c;
        case 0x283210u: goto label_283210;
        case 0x283214u: goto label_283214;
        case 0x283218u: goto label_283218;
        case 0x28321cu: goto label_28321c;
        case 0x283220u: goto label_283220;
        case 0x283224u: goto label_283224;
        case 0x283228u: goto label_283228;
        case 0x28322cu: goto label_28322c;
        case 0x283230u: goto label_283230;
        case 0x283234u: goto label_283234;
        case 0x283238u: goto label_283238;
        case 0x28323cu: goto label_28323c;
        case 0x283240u: goto label_283240;
        case 0x283244u: goto label_283244;
        case 0x283248u: goto label_283248;
        case 0x28324cu: goto label_28324c;
        case 0x283250u: goto label_283250;
        case 0x283254u: goto label_283254;
        case 0x283258u: goto label_283258;
        case 0x28325cu: goto label_28325c;
        case 0x283260u: goto label_283260;
        case 0x283264u: goto label_283264;
        case 0x283268u: goto label_283268;
        case 0x28326cu: goto label_28326c;
        case 0x283270u: goto label_283270;
        case 0x283274u: goto label_283274;
        case 0x283278u: goto label_283278;
        case 0x28327cu: goto label_28327c;
        case 0x283280u: goto label_283280;
        case 0x283284u: goto label_283284;
        case 0x283288u: goto label_283288;
        case 0x28328cu: goto label_28328c;
        case 0x283290u: goto label_283290;
        case 0x283294u: goto label_283294;
        case 0x283298u: goto label_283298;
        case 0x28329cu: goto label_28329c;
        case 0x2832a0u: goto label_2832a0;
        case 0x2832a4u: goto label_2832a4;
        case 0x2832a8u: goto label_2832a8;
        case 0x2832acu: goto label_2832ac;
        case 0x2832b0u: goto label_2832b0;
        case 0x2832b4u: goto label_2832b4;
        case 0x2832b8u: goto label_2832b8;
        case 0x2832bcu: goto label_2832bc;
        case 0x2832c0u: goto label_2832c0;
        case 0x2832c4u: goto label_2832c4;
        case 0x2832c8u: goto label_2832c8;
        case 0x2832ccu: goto label_2832cc;
        case 0x2832d0u: goto label_2832d0;
        case 0x2832d4u: goto label_2832d4;
        case 0x2832d8u: goto label_2832d8;
        case 0x2832dcu: goto label_2832dc;
        case 0x2832e0u: goto label_2832e0;
        case 0x2832e4u: goto label_2832e4;
        case 0x2832e8u: goto label_2832e8;
        case 0x2832ecu: goto label_2832ec;
        case 0x2832f0u: goto label_2832f0;
        case 0x2832f4u: goto label_2832f4;
        case 0x2832f8u: goto label_2832f8;
        case 0x2832fcu: goto label_2832fc;
        case 0x283300u: goto label_283300;
        case 0x283304u: goto label_283304;
        case 0x283308u: goto label_283308;
        case 0x28330cu: goto label_28330c;
        case 0x283310u: goto label_283310;
        case 0x283314u: goto label_283314;
        case 0x283318u: goto label_283318;
        case 0x28331cu: goto label_28331c;
        case 0x283320u: goto label_283320;
        case 0x283324u: goto label_283324;
        case 0x283328u: goto label_283328;
        case 0x28332cu: goto label_28332c;
        case 0x283330u: goto label_283330;
        case 0x283334u: goto label_283334;
        case 0x283338u: goto label_283338;
        case 0x28333cu: goto label_28333c;
        case 0x283340u: goto label_283340;
        case 0x283344u: goto label_283344;
        case 0x283348u: goto label_283348;
        case 0x28334cu: goto label_28334c;
        case 0x283350u: goto label_283350;
        case 0x283354u: goto label_283354;
        case 0x283358u: goto label_283358;
        case 0x28335cu: goto label_28335c;
        case 0x283360u: goto label_283360;
        case 0x283364u: goto label_283364;
        case 0x283368u: goto label_283368;
        case 0x28336cu: goto label_28336c;
        case 0x283370u: goto label_283370;
        case 0x283374u: goto label_283374;
        case 0x283378u: goto label_283378;
        case 0x28337cu: goto label_28337c;
        case 0x283380u: goto label_283380;
        case 0x283384u: goto label_283384;
        case 0x283388u: goto label_283388;
        case 0x28338cu: goto label_28338c;
        case 0x283390u: goto label_283390;
        case 0x283394u: goto label_283394;
        case 0x283398u: goto label_283398;
        case 0x28339cu: goto label_28339c;
        case 0x2833a0u: goto label_2833a0;
        case 0x2833a4u: goto label_2833a4;
        case 0x2833a8u: goto label_2833a8;
        case 0x2833acu: goto label_2833ac;
        case 0x2833b0u: goto label_2833b0;
        case 0x2833b4u: goto label_2833b4;
        case 0x2833b8u: goto label_2833b8;
        case 0x2833bcu: goto label_2833bc;
        case 0x2833c0u: goto label_2833c0;
        case 0x2833c4u: goto label_2833c4;
        case 0x2833c8u: goto label_2833c8;
        case 0x2833ccu: goto label_2833cc;
        case 0x2833d0u: goto label_2833d0;
        case 0x2833d4u: goto label_2833d4;
        case 0x2833d8u: goto label_2833d8;
        case 0x2833dcu: goto label_2833dc;
        case 0x2833e0u: goto label_2833e0;
        case 0x2833e4u: goto label_2833e4;
        case 0x2833e8u: goto label_2833e8;
        case 0x2833ecu: goto label_2833ec;
        case 0x2833f0u: goto label_2833f0;
        case 0x2833f4u: goto label_2833f4;
        case 0x2833f8u: goto label_2833f8;
        case 0x2833fcu: goto label_2833fc;
        case 0x283400u: goto label_283400;
        case 0x283404u: goto label_283404;
        case 0x283408u: goto label_283408;
        case 0x28340cu: goto label_28340c;
        case 0x283410u: goto label_283410;
        case 0x283414u: goto label_283414;
        case 0x283418u: goto label_283418;
        case 0x28341cu: goto label_28341c;
        case 0x283420u: goto label_283420;
        case 0x283424u: goto label_283424;
        case 0x283428u: goto label_283428;
        case 0x28342cu: goto label_28342c;
        case 0x283430u: goto label_283430;
        case 0x283434u: goto label_283434;
        case 0x283438u: goto label_283438;
        case 0x28343cu: goto label_28343c;
        case 0x283440u: goto label_283440;
        case 0x283444u: goto label_283444;
        case 0x283448u: goto label_283448;
        case 0x28344cu: goto label_28344c;
        case 0x283450u: goto label_283450;
        case 0x283454u: goto label_283454;
        case 0x283458u: goto label_283458;
        case 0x28345cu: goto label_28345c;
        case 0x283460u: goto label_283460;
        case 0x283464u: goto label_283464;
        case 0x283468u: goto label_283468;
        case 0x28346cu: goto label_28346c;
        case 0x283470u: goto label_283470;
        case 0x283474u: goto label_283474;
        case 0x283478u: goto label_283478;
        case 0x28347cu: goto label_28347c;
        case 0x283480u: goto label_283480;
        case 0x283484u: goto label_283484;
        case 0x283488u: goto label_283488;
        case 0x28348cu: goto label_28348c;
        case 0x283490u: goto label_283490;
        case 0x283494u: goto label_283494;
        case 0x283498u: goto label_283498;
        case 0x28349cu: goto label_28349c;
        case 0x2834a0u: goto label_2834a0;
        case 0x2834a4u: goto label_2834a4;
        case 0x2834a8u: goto label_2834a8;
        case 0x2834acu: goto label_2834ac;
        case 0x2834b0u: goto label_2834b0;
        case 0x2834b4u: goto label_2834b4;
        case 0x2834b8u: goto label_2834b8;
        case 0x2834bcu: goto label_2834bc;
        case 0x2834c0u: goto label_2834c0;
        case 0x2834c4u: goto label_2834c4;
        case 0x2834c8u: goto label_2834c8;
        case 0x2834ccu: goto label_2834cc;
        case 0x2834d0u: goto label_2834d0;
        case 0x2834d4u: goto label_2834d4;
        case 0x2834d8u: goto label_2834d8;
        case 0x2834dcu: goto label_2834dc;
        case 0x2834e0u: goto label_2834e0;
        case 0x2834e4u: goto label_2834e4;
        case 0x2834e8u: goto label_2834e8;
        case 0x2834ecu: goto label_2834ec;
        case 0x2834f0u: goto label_2834f0;
        case 0x2834f4u: goto label_2834f4;
        case 0x2834f8u: goto label_2834f8;
        case 0x2834fcu: goto label_2834fc;
        case 0x283500u: goto label_283500;
        case 0x283504u: goto label_283504;
        case 0x283508u: goto label_283508;
        case 0x28350cu: goto label_28350c;
        case 0x283510u: goto label_283510;
        case 0x283514u: goto label_283514;
        case 0x283518u: goto label_283518;
        case 0x28351cu: goto label_28351c;
        case 0x283520u: goto label_283520;
        case 0x283524u: goto label_283524;
        case 0x283528u: goto label_283528;
        case 0x28352cu: goto label_28352c;
        case 0x283530u: goto label_283530;
        case 0x283534u: goto label_283534;
        case 0x283538u: goto label_283538;
        case 0x28353cu: goto label_28353c;
        case 0x283540u: goto label_283540;
        case 0x283544u: goto label_283544;
        case 0x283548u: goto label_283548;
        case 0x28354cu: goto label_28354c;
        case 0x283550u: goto label_283550;
        case 0x283554u: goto label_283554;
        case 0x283558u: goto label_283558;
        case 0x28355cu: goto label_28355c;
        case 0x283560u: goto label_283560;
        case 0x283564u: goto label_283564;
        case 0x283568u: goto label_283568;
        case 0x28356cu: goto label_28356c;
        case 0x283570u: goto label_283570;
        case 0x283574u: goto label_283574;
        case 0x283578u: goto label_283578;
        case 0x28357cu: goto label_28357c;
        case 0x283580u: goto label_283580;
        case 0x283584u: goto label_283584;
        case 0x283588u: goto label_283588;
        case 0x28358cu: goto label_28358c;
        case 0x283590u: goto label_283590;
        case 0x283594u: goto label_283594;
        case 0x283598u: goto label_283598;
        case 0x28359cu: goto label_28359c;
        case 0x2835a0u: goto label_2835a0;
        case 0x2835a4u: goto label_2835a4;
        case 0x2835a8u: goto label_2835a8;
        case 0x2835acu: goto label_2835ac;
        case 0x2835b0u: goto label_2835b0;
        case 0x2835b4u: goto label_2835b4;
        case 0x2835b8u: goto label_2835b8;
        case 0x2835bcu: goto label_2835bc;
        case 0x2835c0u: goto label_2835c0;
        case 0x2835c4u: goto label_2835c4;
        case 0x2835c8u: goto label_2835c8;
        case 0x2835ccu: goto label_2835cc;
        case 0x2835d0u: goto label_2835d0;
        case 0x2835d4u: goto label_2835d4;
        case 0x2835d8u: goto label_2835d8;
        case 0x2835dcu: goto label_2835dc;
        case 0x2835e0u: goto label_2835e0;
        case 0x2835e4u: goto label_2835e4;
        case 0x2835e8u: goto label_2835e8;
        case 0x2835ecu: goto label_2835ec;
        case 0x2835f0u: goto label_2835f0;
        case 0x2835f4u: goto label_2835f4;
        case 0x2835f8u: goto label_2835f8;
        case 0x2835fcu: goto label_2835fc;
        case 0x283600u: goto label_283600;
        case 0x283604u: goto label_283604;
        case 0x283608u: goto label_283608;
        case 0x28360cu: goto label_28360c;
        case 0x283610u: goto label_283610;
        case 0x283614u: goto label_283614;
        case 0x283618u: goto label_283618;
        case 0x28361cu: goto label_28361c;
        case 0x283620u: goto label_283620;
        case 0x283624u: goto label_283624;
        case 0x283628u: goto label_283628;
        case 0x28362cu: goto label_28362c;
        case 0x283630u: goto label_283630;
        case 0x283634u: goto label_283634;
        case 0x283638u: goto label_283638;
        case 0x28363cu: goto label_28363c;
        case 0x283640u: goto label_283640;
        case 0x283644u: goto label_283644;
        case 0x283648u: goto label_283648;
        case 0x28364cu: goto label_28364c;
        case 0x283650u: goto label_283650;
        case 0x283654u: goto label_283654;
        case 0x283658u: goto label_283658;
        case 0x28365cu: goto label_28365c;
        case 0x283660u: goto label_283660;
        case 0x283664u: goto label_283664;
        case 0x283668u: goto label_283668;
        case 0x28366cu: goto label_28366c;
        case 0x283670u: goto label_283670;
        case 0x283674u: goto label_283674;
        case 0x283678u: goto label_283678;
        case 0x28367cu: goto label_28367c;
        case 0x283680u: goto label_283680;
        case 0x283684u: goto label_283684;
        case 0x283688u: goto label_283688;
        case 0x28368cu: goto label_28368c;
        case 0x283690u: goto label_283690;
        case 0x283694u: goto label_283694;
        case 0x283698u: goto label_283698;
        case 0x28369cu: goto label_28369c;
        case 0x2836a0u: goto label_2836a0;
        case 0x2836a4u: goto label_2836a4;
        case 0x2836a8u: goto label_2836a8;
        case 0x2836acu: goto label_2836ac;
        case 0x2836b0u: goto label_2836b0;
        case 0x2836b4u: goto label_2836b4;
        case 0x2836b8u: goto label_2836b8;
        case 0x2836bcu: goto label_2836bc;
        case 0x2836c0u: goto label_2836c0;
        case 0x2836c4u: goto label_2836c4;
        case 0x2836c8u: goto label_2836c8;
        case 0x2836ccu: goto label_2836cc;
        case 0x2836d0u: goto label_2836d0;
        case 0x2836d4u: goto label_2836d4;
        case 0x2836d8u: goto label_2836d8;
        case 0x2836dcu: goto label_2836dc;
        case 0x2836e0u: goto label_2836e0;
        case 0x2836e4u: goto label_2836e4;
        case 0x2836e8u: goto label_2836e8;
        case 0x2836ecu: goto label_2836ec;
        case 0x2836f0u: goto label_2836f0;
        case 0x2836f4u: goto label_2836f4;
        case 0x2836f8u: goto label_2836f8;
        case 0x2836fcu: goto label_2836fc;
        case 0x283700u: goto label_283700;
        case 0x283704u: goto label_283704;
        case 0x283708u: goto label_283708;
        case 0x28370cu: goto label_28370c;
        case 0x283710u: goto label_283710;
        case 0x283714u: goto label_283714;
        case 0x283718u: goto label_283718;
        case 0x28371cu: goto label_28371c;
        case 0x283720u: goto label_283720;
        case 0x283724u: goto label_283724;
        case 0x283728u: goto label_283728;
        case 0x28372cu: goto label_28372c;
        case 0x283730u: goto label_283730;
        case 0x283734u: goto label_283734;
        case 0x283738u: goto label_283738;
        case 0x28373cu: goto label_28373c;
        case 0x283740u: goto label_283740;
        case 0x283744u: goto label_283744;
        case 0x283748u: goto label_283748;
        case 0x28374cu: goto label_28374c;
        case 0x283750u: goto label_283750;
        case 0x283754u: goto label_283754;
        default: return;
    }

label_282f88:
    // 0x282f88: 0x0  nop
    ctx->pc = 0x282f88u;
    // NOP
label_282f8c:
    // 0x282f8c: 0x0  nop
    ctx->pc = 0x282f8cu;
    // NOP
label_282f90:
    // 0x282f90: 0x0  nop
    ctx->pc = 0x282f90u;
    // NOP
label_282f94:
    // 0x282f94: 0x0  nop
    ctx->pc = 0x282f94u;
    // NOP
label_282f98:
    // 0x282f98: 0x43960000  .word       0x43960000                   # INVALID     $gp, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x282f98u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x282F98 raw=0x43960000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_282f9c:
    // 0x282f9c: 0x0  nop
    ctx->pc = 0x282f9cu;
    // NOP
label_282fa0:
    // 0x282fa0: 0x0  nop
    ctx->pc = 0x282fa0u;
    // NOP
label_282fa4:
    // 0x282fa4: 0x0  nop
    ctx->pc = 0x282fa4u;
    // NOP
label_282fa8:
    // 0x282fa8: 0x0  nop
    ctx->pc = 0x282fa8u;
    // NOP
label_282fac:
    // 0x282fac: 0x0  nop
    ctx->pc = 0x282facu;
    // NOP
label_282fb0:
    // 0x282fb0: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282fb0u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282fb4:
    // 0x282fb4: 0xbe2aaaab  cache       0x0A, -0x5555($s1)
    ctx->pc = 0x282fb4u;
    // CACHE instruction (ignored)
label_282fb8:
    // 0x282fb8: 0x3c088889  lui         $t0, 0x8889
    ctx->pc = 0x282fb8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)34953 << 16));
label_282fbc:
    // 0x282fbc: 0xb9500d01  swr         $s0, 0xD01($t2)
    ctx->pc = 0x282fbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 3329); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_282fc0:
    // 0x282fc0: 0xbf000000  cache       0x00, 0x0($t8)
    ctx->pc = 0x282fc0u;
    // CACHE instruction (ignored)
label_282fc4:
    // 0x282fc4: 0x3d2aaaab  .word       0x3D2AAAAB                   # lui         $t2, 0xAAAB # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282fc4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43691 << 16));
label_282fc8:
    // 0x282fc8: 0xbab60b61  swr         $s6, 0xB61($s5)
    ctx->pc = 0x282fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 2913); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 22); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_282fcc:
    // 0x282fcc: 0x37d00d01  ori         $s0, $fp, 0xD01
    ctx->pc = 0x282fccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)3329);
label_282fd0:
    // 0x282fd0: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x282fd0u;
    // CACHE instruction (ignored)
label_282fd4:
    // 0x282fd4: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x282fd4u;
    // CACHE instruction (ignored)
label_282fd8:
    // 0x282fd8: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x282fd8u;
    // CACHE instruction (ignored)
label_282fdc:
    // 0x282fdc: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x282fdcu;
    // CACHE instruction (ignored)
label_282fe0:
    // 0x282fe0: 0x3f7ffff5  .word       0x3F7FFFF5                   # lui         $ra, 0xFFF5 # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282fe0u;
    SET_GPR_S32(ctx, 31, (int32_t)((uint32_t)65525 << 16));
label_282fe4:
    // 0x282fe4: 0xbeaaa61c  cache       0x0A, -0x59E4($s5)
    ctx->pc = 0x282fe4u;
    // CACHE instruction (ignored)
label_282fe8:
    // 0x282fe8: 0x3e4c40a6  .word       0x3E4C40A6                   # lui         $t4, 0x40A6 # 02400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282fe8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16550 << 16));
label_282fec:
    // 0x282fec: 0xbe0e6c63  cache       0x0E, 0x6C63($s0)
    ctx->pc = 0x282fecu;
    // CACHE instruction (ignored)
label_282ff0:
    // 0x282ff0: 0x3dc577df  .word       0x3DC577DF                   # lui         $a1, 0x77DF # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30687 << 16));
label_282ff4:
    // 0x282ff4: 0xbd6501c4  cache       0x05, 0x1C4($t3)
    ctx->pc = 0x282ff4u;
    // CACHE instruction (ignored)
label_282ff8:
    // 0x282ff8: 0x3cb31652  .word       0x3CB31652                   # lui         $s3, 0x1652 # 00A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282ff8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)5714 << 16));
label_282ffc:
    // 0x282ffc: 0xbb84d7e7  swr         $a0, -0x2819($gp)
    ctx->pc = 0x282ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 4294957031); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_283000:
    // 0x283000: 0x3f490fdb  .word       0x3F490FDB                   # lui         $t1, 0xFDB # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x283000u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4059 << 16));
label_283004:
    // 0x283004: 0x0  nop
    ctx->pc = 0x283004u;
    // NOP
label_283008:
    // 0x283008: 0x0  nop
    ctx->pc = 0x283008u;
    // NOP
label_28300c:
    // 0x28300c: 0x0  nop
    ctx->pc = 0x28300cu;
    // NOP
label_283010:
    // 0x283010: 0x40c90fdb  .word       0x40C90FDB                   # ctc0        $t1, Random # 000007DB <InstrIdType: R5900_COP0>
    ctx->pc = 0x283010u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x283010 raw=0x40C90FDB"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283014:
    // 0x283014: 0x40c90fdb  .word       0x40C90FDB                   # ctc0        $t1, Random # 000007DB <InstrIdType: R5900_COP0>
    ctx->pc = 0x283014u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x283014 raw=0x40C90FDB"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283018:
    // 0x283018: 0x40c90fdb  .word       0x40C90FDB                   # ctc0        $t1, Random # 000007DB <InstrIdType: R5900_COP0>
    ctx->pc = 0x283018u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x283018 raw=0x40C90FDB"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28301c:
    // 0x28301c: 0x40c90fdb  .word       0x40C90FDB                   # ctc0        $t1, Random # 000007DB <InstrIdType: R5900_COP0>
    ctx->pc = 0x28301cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x28301C raw=0x40C90FDB"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283020:
    // 0x283020: 0x40490fdb  .word       0x40490FDB                   # cfc0        $t1, Random # 000007DB <InstrIdType: R5900_COP0>
    ctx->pc = 0x283020u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x283020 raw=0x40490FDB"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283024:
    // 0x283024: 0x40490fdb  .word       0x40490FDB                   # cfc0        $t1, Random # 000007DB <InstrIdType: R5900_COP0>
    ctx->pc = 0x283024u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x283024 raw=0x40490FDB"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283028:
    // 0x283028: 0x40490fdb  .word       0x40490FDB                   # cfc0        $t1, Random # 000007DB <InstrIdType: R5900_COP0>
    ctx->pc = 0x283028u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x283028 raw=0x40490FDB"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28302c:
    // 0x28302c: 0x40490fdb  .word       0x40490FDB                   # cfc0        $t1, Random # 000007DB <InstrIdType: R5900_COP0>
    ctx->pc = 0x28302cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x28302C raw=0x40490FDB"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283030:
    // 0x283030: 0xc0490fdb  ll          $t1, 0xFDB($v0)
    ctx->pc = 0x283030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4059); SET_GPR_S32(ctx, 9, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283034:
    // 0x283034: 0xc0490fdb  ll          $t1, 0xFDB($v0)
    ctx->pc = 0x283034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4059); SET_GPR_S32(ctx, 9, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283038:
    // 0x283038: 0xc0490fdb  ll          $t1, 0xFDB($v0)
    ctx->pc = 0x283038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4059); SET_GPR_S32(ctx, 9, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28303c:
    // 0x28303c: 0xc0490fdb  ll          $t1, 0xFDB($v0)
    ctx->pc = 0x28303cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4059); SET_GPR_S32(ctx, 9, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283040:
    // 0x283040: 0x3fc90fdb  .word       0x3FC90FDB                   # lui         $t1, 0xFDB # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x283040u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4059 << 16));
label_283044:
    // 0x283044: 0x3fc90fdb  .word       0x3FC90FDB                   # lui         $t1, 0xFDB # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x283044u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4059 << 16));
label_283048:
    // 0x283048: 0x3fc90fdb  .word       0x3FC90FDB                   # lui         $t1, 0xFDB # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x283048u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4059 << 16));
label_28304c:
    // 0x28304c: 0x3fc90fdb  .word       0x3FC90FDB                   # lui         $t1, 0xFDB # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28304cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4059 << 16));
label_283050:
    // 0x283050: 0xffc0c0  .word       0x00FFC0C0                   # sll         $t8, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283050u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 31), 3));
label_283054:
    // 0x283054: 0xc0c0ff  .word       0x00C0C0FF                   # dsra32      $t8, $zero, 3 # 00C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283054u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 0) >> (32 + 3));
label_283058:
    // 0x283058: 0xc0ffc0  .word       0x00C0FFC0                   # sll         $ra, $zero, 31 # 00C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283058u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_28305c:
    // 0x28305c: 0xffc0ff  .word       0x00FFC0FF                   # dsra32      $t8, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28305cu;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 31) >> (32 + 3));
label_283060:
    // 0x283060: 0xffffc0  .word       0x00FFFFC0                   # sll         $ra, $ra, 31 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283060u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 31), 31));
label_283064:
    // 0x283064: 0xffffc0  .word       0x00FFFFC0                   # sll         $ra, $ra, 31 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283064u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 31), 31));
label_283068:
    // 0x283068: 0x245fee  .word       0x00245FEE                   # dsub        $t3, $at, $a0 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283068u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 4); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 11, r); }
label_28306c:
    // 0x28306c: 0x808080  .word       0x00808080                   # sll         $s0, $zero, 2 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28306cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_283070:
    // 0x283070: 0x21f  .word       0x0000021F                   # ddivu       $zero, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283070u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x283070 raw=0x0000021F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283074:
    // 0x283074: 0x220  .word       0x00000220                   # add         $zero, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283074u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_283078:
    // 0x283078: 0x221  .word       0x00000221                   # addu        $zero, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283078u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28307c:
    // 0x28307c: 0x222  .word       0x00000222                   # neg         $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28307cu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_283080:
    // 0x283080: 0x223  .word       0x00000223                   # negu        $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283080u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_283084:
    // 0x283084: 0x224  .word       0x00000224                   # and         $zero, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283084u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_283088:
    // 0x283088: 0x225  .word       0x00000225                   # move        $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283088u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_28308c:
    // 0x28308c: 0x226  .word       0x00000226                   # xor         $zero, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28308cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_283090:
    // 0x283090: 0x227  .word       0x00000227                   # not         $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283090u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_283094:
    // 0x283094: 0x228  .word       0x00000228                   # mfsa        $zero # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x283094u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_283098:
    // 0x283098: 0x229  .word       0x00000229                   # mtsa        $zero # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x283098u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_28309c:
    // 0x28309c: 0x22a  .word       0x0000022A                   # slt         $zero, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28309cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2830a0:
    // 0x2830a0: 0x22b  .word       0x0000022B                   # sltu        $zero, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2830a0u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2830a4:
    // 0x2830a4: 0x22c  .word       0x0000022C                   # dadd        $zero, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2830a4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2830a8:
    // 0x2830a8: 0x22d  .word       0x0000022D                   # daddu       $zero, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2830a8u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2830ac:
    // 0x2830ac: 0x22e  .word       0x0000022E                   # dsub        $zero, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2830acu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2830b0:
    // 0x2830b0: 0x22f  .word       0x0000022F                   # dsubu       $zero, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2830b0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2830b4:
    // 0x2830b4: 0x230  tge         $zero, $zero, 8
    ctx->pc = 0x2830b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2830b8:
    // 0x2830b8: 0x231  tgeu        $zero, $zero, 8
    ctx->pc = 0x2830b8u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2830bc:
    // 0x2830bc: 0x232  tlt         $zero, $zero, 8
    ctx->pc = 0x2830bcu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2830c0:
    // 0x2830c0: 0x233  tltu        $zero, $zero, 8
    ctx->pc = 0x2830c0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2830c4:
    // 0x2830c4: 0x234  teq         $zero, $zero, 8
    ctx->pc = 0x2830c4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2830c8:
    // 0x2830c8: 0x235  .word       0x00000235                   # INVALID     $zero, $zero, 0x235 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2830c8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2830C8 raw=0x00000235"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2830cc:
    // 0x2830cc: 0x236  tne         $zero, $zero, 8
    ctx->pc = 0x2830ccu;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2830d0:
    // 0x2830d0: 0x237  .word       0x00000237                   # INVALID     $zero, $zero, 0x237 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2830d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2830D0 raw=0x00000237"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2830d4:
    // 0x2830d4: 0x238  dsll        $zero, $zero, 8
    ctx->pc = 0x2830d4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 8);
label_2830d8:
    // 0x2830d8: 0x239  .word       0x00000239                   # INVALID     $zero, $zero, 0x239 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2830d8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2830D8 raw=0x00000239"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2830dc:
    // 0x2830dc: 0x23a  dsrl        $zero, $zero, 8
    ctx->pc = 0x2830dcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 8);
label_2830e0:
    // 0x2830e0: 0x23b  dsra        $zero, $zero, 8
    ctx->pc = 0x2830e0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 8);
label_2830e4:
    // 0x2830e4: 0x23c  dsll32      $zero, $zero, 8
    ctx->pc = 0x2830e4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 8));
label_2830e8:
    // 0x2830e8: 0x23d  .word       0x0000023D                   # INVALID     $zero, $zero, 0x23D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2830e8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2830E8 raw=0x0000023D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2830ec:
    // 0x2830ec: 0x23e  dsrl32      $zero, $zero, 8
    ctx->pc = 0x2830ecu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 8));
label_2830f0:
    // 0x2830f0: 0x23f  dsra32      $zero, $zero, 8
    ctx->pc = 0x2830f0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 8));
label_2830f4:
    // 0x2830f4: 0x240  sll         $zero, $zero, 9
    ctx->pc = 0x2830f4u;
    
label_2830f8:
    // 0x2830f8: 0x241  .word       0x00000241                   # INVALID     $zero, $zero, 0x241 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2830f8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2830F8 raw=0x00000241"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2830fc:
    // 0x2830fc: 0x242  srl         $zero, $zero, 9
    ctx->pc = 0x2830fcu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 9));
label_283100:
    // 0x283100: 0x243  sra         $zero, $zero, 9
    ctx->pc = 0x283100u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 9));
label_283104:
    // 0x283104: 0x244  .word       0x00000244                   # sllv        $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283104u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_283108:
    // 0x283108: 0x245  .word       0x00000245                   # INVALID     $zero, $zero, 0x245 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283108u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x283108 raw=0x00000245"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28310c:
    // 0x28310c: 0x246  .word       0x00000246                   # srlv        $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28310cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_283110:
    // 0x283110: 0x247  .word       0x00000247                   # srav        $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283110u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_283114:
    // 0x283114: 0x248  .word       0x00000248                   # jr          $zero # 00000240 <InstrIdType: CPU_SPECIAL>
label_283118:
    if (ctx->pc == 0x283118u) {
        ctx->pc = 0x283118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283114u;
        // 0x283118: 0x249  .word       0x00000249                   # jalr        $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $0, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28311Cu;
        goto label_28311c;
    }
    ctx->pc = 0x283114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x283118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283114u;
        // 0x283118: 0x249  .word       0x00000249                   # jalr        $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $0, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283114u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28311Cu;
label_28311c:
    // 0x28311c: 0x24a  .word       0x0000024A                   # movz        $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28311cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_283120:
    // 0x283120: 0x24b  .word       0x0000024B                   # movn        $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283120u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_283124:
    // 0x283124: 0x24c  syscall     9
    ctx->pc = 0x283124u;
    ctx->pc = 0x283128u;
runtime->handleSyscall(rdram, ctx, 0x9u);
label_283128:
    // 0x283128: 0x24d  break       0, 9
    ctx->pc = 0x283128u;
    runtime->handleBreak(rdram, ctx);
label_28312c:
    // 0x28312c: 0x24e  .word       0x0000024E                   # INVALID     $zero, $zero, 0x24E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28312cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28312C raw=0x0000024E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283130:
    // 0x283130: 0x26f  .word       0x0000026F                   # dsubu       $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283130u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_283134:
    // 0x283134: 0x270  tge         $zero, $zero, 9
    ctx->pc = 0x283134u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_283138:
    // 0x283138: 0x24f  sync
    ctx->pc = 0x283138u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_28313c:
    // 0x28313c: 0x250  .word       0x00000250                   # mfhi        $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28313cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_283140:
    // 0x283140: 0x251  .word       0x00000251                   # mthi        $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283140u;
    ctx->hi = GPR_U64(ctx, 0);
label_283144:
    // 0x283144: 0x252  .word       0x00000252                   # mflo        $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283144u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_283148:
    // 0x283148: 0x253  .word       0x00000253                   # mtlo        $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283148u;
    ctx->lo = GPR_U64(ctx, 0);
label_28314c:
    // 0x28314c: 0x254  .word       0x00000254                   # dsllv       $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28314cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_283150:
    // 0x283150: 0x255  .word       0x00000255                   # INVALID     $zero, $zero, 0x255 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283150u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x283150 raw=0x00000255"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283154:
    // 0x283154: 0x256  .word       0x00000256                   # dsrlv       $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283154u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_283158:
    // 0x283158: 0x257  .word       0x00000257                   # dsrav       $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283158u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28315c:
    // 0x28315c: 0x258  .word       0x00000258                   # mult        $zero, $zero, $zero # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28315cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_283160:
    // 0x283160: 0x259  .word       0x00000259                   # multu       $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283160u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_283164:
    // 0x283164: 0x25a  .word       0x0000025A                   # div         $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283164u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_283168:
    // 0x283168: 0x25b  .word       0x0000025B                   # divu        $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283168u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_28316c:
    // 0x28316c: 0x25c  .word       0x0000025C                   # dmult       $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28316cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x28316C raw=0x0000025C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283170:
    // 0x283170: 0x25d  .word       0x0000025D                   # dmultu      $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283170u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x283170 raw=0x0000025D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283174:
    // 0x283174: 0x25e  .word       0x0000025E                   # ddiv        $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283174u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x283174 raw=0x0000025E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283178:
    // 0x283178: 0x25f  .word       0x0000025F                   # ddivu       $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283178u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x283178 raw=0x0000025F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28317c:
    // 0x28317c: 0x260  .word       0x00000260                   # add         $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28317cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_283180:
    // 0x283180: 0x261  .word       0x00000261                   # addu        $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283180u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_283184:
    // 0x283184: 0x262  .word       0x00000262                   # neg         $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283184u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_283188:
    // 0x283188: 0x263  .word       0x00000263                   # negu        $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283188u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28318c:
    // 0x28318c: 0x264  .word       0x00000264                   # and         $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28318cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_283190:
    // 0x283190: 0x265  .word       0x00000265                   # move        $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283190u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_283194:
    // 0x283194: 0x266  .word       0x00000266                   # xor         $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283194u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_283198:
    // 0x283198: 0x267  .word       0x00000267                   # not         $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283198u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_28319c:
    // 0x28319c: 0x268  .word       0x00000268                   # mfsa        $zero # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28319cu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2831a0:
    // 0x2831a0: 0x269  .word       0x00000269                   # mtsa        $zero # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2831a0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2831a4:
    // 0x2831a4: 0x26a  .word       0x0000026A                   # slt         $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2831a4u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2831a8:
    // 0x2831a8: 0x271  tgeu        $zero, $zero, 9
    ctx->pc = 0x2831a8u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2831ac:
    // 0x2831ac: 0x26b  .word       0x0000026B                   # sltu        $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2831acu;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2831b0:
    // 0x2831b0: 0x26c  .word       0x0000026C                   # dadd        $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2831b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2831b4:
    // 0x2831b4: 0x26d  .word       0x0000026D                   # daddu       $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2831b4u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2831b8:
    // 0x2831b8: 0x26e  .word       0x0000026E                   # dsub        $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2831b8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2831bc:
    // 0x2831bc: 0x272  tlt         $zero, $zero, 9
    ctx->pc = 0x2831bcu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2831c0:
    // 0x2831c0: 0x273  tltu        $zero, $zero, 9
    ctx->pc = 0x2831c0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2831c4:
    // 0x2831c4: 0x275  .word       0x00000275                   # INVALID     $zero, $zero, 0x275 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2831c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2831C4 raw=0x00000275"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2831c8:
    // 0x2831c8: 0x274  teq         $zero, $zero, 9
    ctx->pc = 0x2831c8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2831cc:
    // 0x2831cc: 0x7fd  .word       0x000007FD                   # INVALID     $zero, $zero, 0x7FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2831ccu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2831CC raw=0x000007FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2831d0:
    // 0x2831d0: 0x7fe  dsrl32      $zero, $zero, 31
    ctx->pc = 0x2831d0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 31));
label_2831d4:
    // 0x2831d4: 0x7ff  dsra32      $zero, $zero, 31
    ctx->pc = 0x2831d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 31));
label_2831d8:
    // 0x2831d8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2831d8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2831dc:
    // 0x2831dc: 0x801  .word       0x00000801                   # INVALID     $zero, $zero, 0x801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2831dcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2831DC raw=0x00000801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2831e0:
    // 0x2831e0: 0x802  srl         $at, $zero, 0
    ctx->pc = 0x2831e0u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2831e4:
    // 0x2831e4: 0x803  sra         $at, $zero, 0
    ctx->pc = 0x2831e4u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), 0));
label_2831e8:
    // 0x2831e8: 0x804  sllv        $at, $zero, $zero
    ctx->pc = 0x2831e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2831ec:
    // 0x2831ec: 0x805  .word       0x00000805                   # INVALID     $zero, $zero, 0x805 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2831ecu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2831EC raw=0x00000805"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2831f0:
    // 0x2831f0: 0x806  srlv        $at, $zero, $zero
    ctx->pc = 0x2831f0u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2831f4:
    // 0x2831f4: 0x807  srav        $at, $zero, $zero
    ctx->pc = 0x2831f4u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2831f8:
    // 0x2831f8: 0x808  .word       0x00000808                   # jr          $zero # 00000800 <InstrIdType: CPU_SPECIAL>
label_2831fc:
    if (ctx->pc == 0x2831FCu) {
        ctx->pc = 0x2831FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2831F8u;
        // 0x2831fc: 0x809  jalr        $at, $zero (Delay Slot)
        // JALR $1, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x283200u;
        goto label_283200;
    }
    ctx->pc = 0x2831F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2831FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2831F8u;
        // 0x2831fc: 0x809  jalr        $at, $zero (Delay Slot)
        // JALR $1, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2831F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x283200u;
label_283200:
    // 0x283200: 0x80a  movz        $at, $zero, $zero
    ctx->pc = 0x283200u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_283204:
    // 0x283204: 0x80b  movn        $at, $zero, $zero
    ctx->pc = 0x283204u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_283208:
    // 0x283208: 0x80c  syscall     32
    ctx->pc = 0x283208u;
    ctx->pc = 0x28320Cu;
runtime->handleSyscall(rdram, ctx, 0x20u);
label_28320c:
    // 0x28320c: 0x80d  break       0, 32
    ctx->pc = 0x28320cu;
    runtime->handleBreak(rdram, ctx);
label_283210:
    // 0x283210: 0x80e  .word       0x0000080E                   # INVALID     $zero, $zero, 0x80E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283210u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x283210 raw=0x0000080E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283214:
    // 0x283214: 0x80f  .word       0x0000080F                   # sync # 00000800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283214u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_283218:
    // 0x283218: 0x810  mfhi        $at
    ctx->pc = 0x283218u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_28321c:
    // 0x28321c: 0x811  .word       0x00000811                   # mthi        $zero # 00000800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28321cu;
    ctx->hi = GPR_U64(ctx, 0);
label_283220:
    // 0x283220: 0x812  mflo        $at
    ctx->pc = 0x283220u;
    SET_GPR_U64(ctx, 1, ctx->lo);
label_283224:
    // 0x283224: 0x813  .word       0x00000813                   # mtlo        $zero # 00000800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283224u;
    ctx->lo = GPR_U64(ctx, 0);
label_283228:
    // 0x283228: 0x814  dsllv       $at, $zero, $zero
    ctx->pc = 0x283228u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28322c:
    // 0x28322c: 0x815  .word       0x00000815                   # INVALID     $zero, $zero, 0x815 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28322cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28322C raw=0x00000815"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283230:
    // 0x283230: 0x816  dsrlv       $at, $zero, $zero
    ctx->pc = 0x283230u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_283234:
    // 0x283234: 0x817  dsrav       $at, $zero, $zero
    ctx->pc = 0x283234u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_283238:
    // 0x283238: 0x818  mult        $at, $zero, $zero
    ctx->pc = 0x283238u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_28323c:
    // 0x28323c: 0x819  .word       0x00000819                   # multu       $zero, $zero # 00000800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28323cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_283240:
    // 0x283240: 0x81a  div         $at, $zero, $zero
    ctx->pc = 0x283240u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_283244:
    // 0x283244: 0x81b  divu        $at, $zero, $zero
    ctx->pc = 0x283244u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_283248:
    // 0x283248: 0x81c  .word       0x0000081C                   # dmult       $zero, $zero # 00000800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x283248u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x283248 raw=0x0000081C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28324c:
    // 0x28324c: 0x81d  .word       0x0000081D                   # dmultu      $zero, $zero # 00000800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28324cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28324C raw=0x0000081D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283250:
    // 0x283250: 0x81e  ddiv        $at, $zero, $zero
    ctx->pc = 0x283250u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x283250 raw=0x0000081E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283254:
    // 0x283254: 0x81f  ddivu       $at, $zero, $zero
    ctx->pc = 0x283254u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x283254 raw=0x0000081F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283258:
    // 0x283258: 0x820  add         $at, $zero, $zero
    ctx->pc = 0x283258u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_28325c:
    // 0x28325c: 0x821  addu        $at, $zero, $zero
    ctx->pc = 0x28325cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_283260:
    // 0x283260: 0x822  neg         $at, $zero
    ctx->pc = 0x283260u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_283264:
    // 0x283264: 0x823  negu        $at, $zero
    ctx->pc = 0x283264u;
    SET_GPR_S32(ctx, 1, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_283268:
    // 0x283268: 0x824  and         $at, $zero, $zero
    ctx->pc = 0x283268u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_28326c:
    // 0x28326c: 0x825  move        $at, $zero
    ctx->pc = 0x28326cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_283270:
    // 0x283270: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x283270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283274:
    // 0x283274: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x283274u;
    // CACHE instruction (ignored)
label_283278:
    // 0x283278: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x283278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28327c:
    // 0x28327c: 0x42de0000  .word       0x42DE0000                   # INVALID     $s6, $fp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28327cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x28327C raw=0x42DE0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283280:
    // 0x283280: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x283280u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_283284:
    // 0x283284: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x283284u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x283284 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283288:
    // 0x283288: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x283288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28328c:
    // 0x28328c: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x28328cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283290:
    // 0x283290: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x283290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283294:
    // 0x283294: 0x42de0000  .word       0x42DE0000                   # INVALID     $s6, $fp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283294u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x283294 raw=0x42DE0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283298:
    // 0x283298: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x283298u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_28329c:
    // 0x28329c: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x28329cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x28329C raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2832a0:
    // 0x2832a0: 0x0  nop
    ctx->pc = 0x2832a0u;
    // NOP
label_2832a4:
    // 0x2832a4: 0x0  nop
    ctx->pc = 0x2832a4u;
    // NOP
label_2832a8:
    // 0x2832a8: 0x10000000  b           . + 4 + (0x0 << 2)
label_2832ac:
    if (ctx->pc == 0x2832ACu) {
        ctx->pc = 0x2832B0u;
        goto label_2832b0;
    }
    ctx->pc = 0x2832A8u;
    {
        const bool branch_taken_0x2832a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2832a8) {
            ctx->pc = 0x2832ACu;
            goto label_2832ac;
        }
    }
    ctx->pc = 0x2832B0u;
label_2832b0:
    // 0x2832b0: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x2832b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2832b4:
    // 0x2832b4: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x2832b4u;
    // CACHE instruction (ignored)
label_2832b8:
    // 0x2832b8: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x2832b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2832bc:
    // 0x2832bc: 0x43100000  .word       0x43100000                   # INVALID     $t8, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2832bcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x2832BC raw=0x43100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2832c0:
    // 0x2832c0: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x2832c0u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2832c4:
    // 0x2832c4: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_2832c8:
    if (ctx->pc == 0x2832C8u) {
        ctx->pc = 0x2832C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2832C4u;
        // 0x2832c8: 0xc1700000  ll          $s0, 0x0($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2832CCu;
        goto label_2832cc;
    }
    ctx->pc = 0x2832C4u;
    {
        const bool branch_taken_0x2832c4 = (false);
        ctx->pc = 0x2832C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2832C4u;
        // 0x2832c8: 0xc1700000  ll          $s0, 0x0($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2832c4) {
            ctx->pc = 0x2832C8u;
            goto label_2832c8;
        }
    }
    ctx->pc = 0x2832CCu;
label_2832cc:
    // 0x2832cc: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x2832ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2832d0:
    // 0x2832d0: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x2832d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2832d4:
    // 0x2832d4: 0x42fc0000  .word       0x42FC0000                   # INVALID     $s7, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2832d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x2832D4 raw=0x42FC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2832d8:
    // 0x2832d8: 0x40400000  cfc0        $zero, Index
    ctx->pc = 0x2832d8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x2832D8 raw=0x40400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2832dc:
    // 0x2832dc: 0x40e00000  .word       0x40E00000                   # INVALID     $a3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2832dcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x7 at 0x2832DC raw=0x40E00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2832e0:
    // 0x2832e0: 0x0  nop
    ctx->pc = 0x2832e0u;
    // NOP
label_2832e4:
    // 0x2832e4: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x2832e4u;
    
label_2832e8:
    // 0x2832e8: 0x1f000001  bgtz        $t8, . + 4 + (0x1 << 2)
label_2832ec:
    if (ctx->pc == 0x2832ECu) {
        ctx->pc = 0x2832F0u;
        goto label_2832f0;
    }
    ctx->pc = 0x2832E8u;
    {
        const bool branch_taken_0x2832e8 = (GPR_S32(ctx, 24) > 0);
        if (branch_taken_0x2832e8) {
            ctx->pc = 0x2832F0u;
            goto label_2832f0;
        }
    }
    ctx->pc = 0x2832F0u;
label_2832f0:
    // 0x2832f0: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x2832f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2832f4:
    // 0x2832f4: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x2832f4u;
    // CACHE instruction (ignored)
label_2832f8:
    // 0x2832f8: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x2832f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2832fc:
    // 0x2832fc: 0x42f00000  .word       0x42F00000                   # INVALID     $s7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2832fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x2832FC raw=0x42F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283300:
    // 0x283300: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x283300u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_283304:
    // 0x283304: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_283308:
    if (ctx->pc == 0x283308u) {
        ctx->pc = 0x283308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283304u;
        // 0x283308: 0xc1200000  ll          $zero, 0x0($t1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28330Cu;
        goto label_28330c;
    }
    ctx->pc = 0x283304u;
    {
        const bool branch_taken_0x283304 = (false);
        ctx->pc = 0x283308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283304u;
        // 0x283308: 0xc1200000  ll          $zero, 0x0($t1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x283304) {
            ctx->pc = 0x283308u;
            goto label_283308;
        }
    }
    ctx->pc = 0x28330Cu;
label_28330c:
    // 0x28330c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x28330cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283310:
    // 0x283310: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x283310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283314:
    // 0x283314: 0x43010000  .word       0x43010000                   # INVALID     $t8, $at, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283314u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x283314 raw=0x43010000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283318:
    // 0x283318: 0x40400000  cfc0        $zero, Index
    ctx->pc = 0x283318u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x283318 raw=0x40400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28331c:
    // 0x28331c: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x28331cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x28331C raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283320:
    // 0x283320: 0x0  nop
    ctx->pc = 0x283320u;
    // NOP
label_283324:
    // 0x283324: 0x0  nop
    ctx->pc = 0x283324u;
    // NOP
label_283328:
    // 0x283328: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
label_28332c:
    if (ctx->pc == 0x28332Cu) {
        ctx->pc = 0x283330u;
        goto label_283330;
    }
    ctx->pc = 0x283328u;
    {
        const bool branch_taken_0x283328 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x283328) {
            ctx->pc = 0x283334u;
            goto label_283334;
        }
    }
    ctx->pc = 0x283330u;
label_283330:
    // 0x283330: 0xc1700000  ll          $s0, 0x0($t3)
    ctx->pc = 0x283330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283334:
    // 0x283334: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x283334u;
    // CACHE instruction (ignored)
label_283338:
    // 0x283338: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x283338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28333c:
    // 0x28333c: 0x43130000  .word       0x43130000                   # INVALID     $t8, $s3, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28333cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x28333C raw=0x43130000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283340:
    // 0x283340: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x283340u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_283344:
    // 0x283344: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283344u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x283344 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283348:
    // 0x283348: 0xc1880000  ll          $t0, 0x0($t4)
    ctx->pc = 0x283348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28334c:
    // 0x28334c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x28334cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283350:
    // 0x283350: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x283350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283354:
    // 0x283354: 0x43150000  .word       0x43150000                   # INVALID     $t8, $s5, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283354u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x283354 raw=0x43150000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283358:
    // 0x283358: 0x40400000  cfc0        $zero, Index
    ctx->pc = 0x283358u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x283358 raw=0x40400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28335c:
    // 0x28335c: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x28335cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x28335C raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283360:
    // 0x283360: 0x0  nop
    ctx->pc = 0x283360u;
    // NOP
label_283364:
    // 0x283364: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x283364u;
    
label_283368:
    // 0x283368: 0x20000003  addi        $zero, $zero, 0x3
    ctx->pc = 0x283368u;
    // NOP (addi to $zero)
label_28336c:
    // 0x28336c: 0x0  nop
    ctx->pc = 0x28336cu;
    // NOP
label_283370:
    // 0x283370: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x283370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283374:
    // 0x283374: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x283374u;
    // CACHE instruction (ignored)
label_283378:
    // 0x283378: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x283378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28337c:
    // 0x28337c: 0x43180000  .word       0x43180000                   # INVALID     $t8, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28337cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x28337C raw=0x43180000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283380:
    // 0x283380: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x283380u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_283384:
    // 0x283384: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283384u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x283384 raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283388:
    // 0x283388: 0xc0c00000  ll          $zero, 0x0($a2)
    ctx->pc = 0x283388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28338c:
    // 0x28338c: 0xc0c00000  ll          $zero, 0x0($a2)
    ctx->pc = 0x28338cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283390:
    // 0x283390: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x283390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283394:
    // 0x283394: 0x430f0000  .word       0x430F0000                   # INVALID     $t8, $t7, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283394u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x283394 raw=0x430F0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283398:
    // 0x283398: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283398u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x283398 raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28339c:
    // 0x28339c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28339cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x28339C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2833a0:
    // 0x2833a0: 0x0  nop
    ctx->pc = 0x2833a0u;
    // NOP
label_2833a4:
    // 0x2833a4: 0x0  nop
    ctx->pc = 0x2833a4u;
    // NOP
label_2833a8:
    // 0x2833a8: 0x12010004  beq         $s0, $at, . + 4 + (0x4 << 2)
label_2833ac:
    if (ctx->pc == 0x2833ACu) {
        ctx->pc = 0x2833B0u;
        goto label_2833b0;
    }
    ctx->pc = 0x2833A8u;
    {
        const bool branch_taken_0x2833a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2833a8) {
            ctx->pc = 0x2833BCu;
            goto label_2833bc;
        }
    }
    ctx->pc = 0x2833B0u;
label_2833b0:
    // 0x2833b0: 0xc1c00000  ll          $zero, 0x0($t6)
    ctx->pc = 0x2833b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2833b4:
    // 0x2833b4: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x2833b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2833b8:
    // 0x2833b8: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x2833b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2833bc:
    // 0x2833bc: 0x43300000  .word       0x43300000                   # INVALID     $t9, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2833bcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2833BC raw=0x43300000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2833c0:
    // 0x2833c0: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x2833c0u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_2833c4:
    // 0x2833c4: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2833c4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x2833C4 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2833c8:
    // 0x2833c8: 0xc1e00000  ll          $zero, 0x0($t7)
    ctx->pc = 0x2833c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2833cc:
    // 0x2833cc: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x2833ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2833d0:
    // 0x2833d0: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x2833d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2833d4:
    // 0x2833d4: 0x42f60000  .word       0x42F60000                   # INVALID     $s7, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2833d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x2833D4 raw=0x42F60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2833d8:
    // 0x2833d8: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x2833d8u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_2833dc:
    // 0x2833dc: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x2833dcu;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_2833e0:
    // 0x2833e0: 0x0  nop
    ctx->pc = 0x2833e0u;
    // NOP
label_2833e4:
    // 0x2833e4: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x2833e4u;
    
label_2833e8:
    // 0x2833e8: 0x21010005  addi        $at, $t0, 0x5
    ctx->pc = 0x2833e8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 8), (int32_t)5, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_2833ec:
    // 0x2833ec: 0x0  nop
    ctx->pc = 0x2833ecu;
    // NOP
label_2833f0:
    // 0x2833f0: 0x42ae0000  .word       0x42AE0000                   # INVALID     $s5, $t6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2833f0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x2833F0 raw=0x42AE0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2833f4:
    // 0x2833f4: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x2833f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2833f8:
    // 0x2833f8: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x2833f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2833fc:
    // 0x2833fc: 0x43040000  .word       0x43040000                   # INVALID     $t8, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2833fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x2833FC raw=0x43040000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283400:
    // 0x283400: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x283400u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x283400 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283404:
    // 0x283404: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x283404u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_283408:
    // 0x283408: 0xc1f80000  ll          $t8, 0x0($t7)
    ctx->pc = 0x283408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28340c:
    // 0x28340c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x28340cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283410:
    // 0x283410: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x283410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283414:
    // 0x283414: 0x42ec0000  .word       0x42EC0000                   # INVALID     $s7, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283414u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x283414 raw=0x42EC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283418:
    // 0x283418: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x283418u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_28341c:
    // 0x28341c: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x28341cu;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_283420:
    // 0x283420: 0x0  nop
    ctx->pc = 0x283420u;
    // NOP
label_283424:
    // 0x283424: 0x0  nop
    ctx->pc = 0x283424u;
    // NOP
label_283428:
    // 0x283428: 0xe020006  jal         func_8080018
label_28342c:
    if (ctx->pc == 0x28342Cu) {
        ctx->pc = 0x283430u;
        goto label_283430;
    }
    ctx->pc = 0x283428u;
    SET_GPR_U32(ctx, 31, 0x283430u);
    ctx->pc = 0x8080018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8080018u, 0x283428u, 0x283430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283430u;
label_283430:
    // 0x283430: 0x42be0000  .word       0x42BE0000                   # INVALID     $s5, $fp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283430u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x283430 raw=0x42BE0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283434:
    // 0x283434: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x283434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283438:
    // 0x283438: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x283438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28343c:
    // 0x28343c: 0x43160000  .word       0x43160000                   # INVALID     $t8, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28343cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x28343C raw=0x43160000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283440:
    // 0x283440: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_283444:
    if (ctx->pc == 0x283444u) {
        ctx->pc = 0x283444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283440u;
        // 0x283444: 0x40800000  mtc0        $zero, Index (Delay Slot)
        ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
        ctx->in_delay_slot = false;
        ctx->pc = 0x283448u;
        goto label_283448;
    }
    ctx->pc = 0x283440u;
    {
        const bool branch_taken_0x283440 = (false);
        ctx->pc = 0x283444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283440u;
        // 0x283444: 0x40800000  mtc0        $zero, Index (Delay Slot)
        ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
        ctx->in_delay_slot = false;
        if (branch_taken_0x283440) {
            ctx->pc = 0x283444u;
            goto label_283444;
        }
    }
    ctx->pc = 0x283448u;
label_283448:
    // 0x283448: 0xc1c00000  ll          $zero, 0x0($t6)
    ctx->pc = 0x283448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28344c:
    // 0x28344c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x28344cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283450:
    // 0x283450: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x283450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283454:
    // 0x283454: 0x42ee0000  .word       0x42EE0000                   # INVALID     $s7, $t6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283454u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x283454 raw=0x42EE0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283458:
    // 0x283458: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x283458u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_28345c:
    // 0x28345c: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x28345cu;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_283460:
    // 0x283460: 0x0  nop
    ctx->pc = 0x283460u;
    // NOP
label_283464:
    // 0x283464: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x283464u;
    
label_283468:
    // 0x283468: 0x1d020007  .word       0x1D020007                   # bgtz        $t0, . + 4 + (0x7 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
label_28346c:
    if (ctx->pc == 0x28346Cu) {
        ctx->pc = 0x283470u;
        goto label_283470;
    }
    ctx->pc = 0x283468u;
    {
        const bool branch_taken_0x283468 = (GPR_S32(ctx, 8) > 0);
        if (branch_taken_0x283468) {
            ctx->pc = 0x283488u;
            goto label_283488;
        }
    }
    ctx->pc = 0x283470u;
label_283470:
    // 0x283470: 0x42a40000  .word       0x42A40000                   # INVALID     $s5, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283470u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x283470 raw=0x42A40000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283474:
    // 0x283474: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x283474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283478:
    // 0x283478: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x283478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28347c:
    // 0x28347c: 0x43070000  .word       0x43070000                   # INVALID     $t8, $a3, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28347cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x28347C raw=0x43070000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283480:
    // 0x283480: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x283480u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_283484:
    // 0x283484: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_283488:
    if (ctx->pc == 0x283488u) {
        ctx->pc = 0x283488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283484u;
        // 0x283488: 0xc1a80000  ll          $t0, 0x0($t5) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28348Cu;
        goto label_28348c;
    }
    ctx->pc = 0x283484u;
    {
        const bool branch_taken_0x283484 = (false);
        ctx->pc = 0x283488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283484u;
        // 0x283488: 0xc1a80000  ll          $t0, 0x0($t5) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x283484) {
            ctx->pc = 0x283488u;
            goto label_283488;
        }
    }
    ctx->pc = 0x28348Cu;
label_28348c:
    // 0x28348c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x28348cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283490:
    // 0x283490: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x283490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283494:
    // 0x283494: 0x42ce0000  .word       0x42CE0000                   # INVALID     $s6, $t6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283494u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x283494 raw=0x42CE0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283498:
    // 0x283498: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x283498u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_28349c:
    // 0x28349c: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x28349cu;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_2834a0:
    // 0x2834a0: 0x0  nop
    ctx->pc = 0x2834a0u;
    // NOP
label_2834a4:
    // 0x2834a4: 0x0  nop
    ctx->pc = 0x2834a4u;
    // NOP
label_2834a8:
    // 0x2834a8: 0xf020008  jal         func_C080020
label_2834ac:
    if (ctx->pc == 0x2834ACu) {
        ctx->pc = 0x2834B0u;
        goto label_2834b0;
    }
    ctx->pc = 0x2834A8u;
    SET_GPR_U32(ctx, 31, 0x2834B0u);
    ctx->pc = 0xC080020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC080020u, 0x2834A8u, 0x2834B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2834B0u;
label_2834b0:
    // 0x2834b0: 0x42980000  .word       0x42980000                   # INVALID     $s4, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2834b0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x2834B0 raw=0x42980000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2834b4:
    // 0x2834b4: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x2834b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2834b8:
    // 0x2834b8: 0xc1700000  ll          $s0, 0x0($t3)
    ctx->pc = 0x2834b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2834bc:
    // 0x2834bc: 0x43270000  .word       0x43270000                   # INVALID     $t9, $a3, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2834bcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2834BC raw=0x43270000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2834c0:
    // 0x2834c0: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_2834c4:
    if (ctx->pc == 0x2834C4u) {
        ctx->pc = 0x2834C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2834C0u;
        // 0x2834c4: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x2834C4 raw=0x41F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2834C8u;
        goto label_2834c8;
    }
    ctx->pc = 0x2834C0u;
    {
        const bool branch_taken_0x2834c0 = (false);
        ctx->pc = 0x2834C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2834C0u;
        // 0x2834c4: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x2834C4 raw=0x41F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2834c0) {
            ctx->pc = 0x2834C4u;
            goto label_2834c4;
        }
    }
    ctx->pc = 0x2834C8u;
label_2834c8:
    // 0x2834c8: 0xc1f00000  ll          $s0, 0x0($t7)
    ctx->pc = 0x2834c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2834cc:
    // 0x2834cc: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x2834ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2834d0:
    // 0x2834d0: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x2834d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2834d4:
    // 0x2834d4: 0x42d40000  .word       0x42D40000                   # INVALID     $s6, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2834d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x2834D4 raw=0x42D40000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2834d8:
    // 0x2834d8: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x2834d8u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_2834dc:
    // 0x2834dc: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x2834dcu;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_2834e0:
    // 0x2834e0: 0x0  nop
    ctx->pc = 0x2834e0u;
    // NOP
label_2834e4:
    // 0x2834e4: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x2834e4u;
    
label_2834e8:
    // 0x2834e8: 0x1e020009  .word       0x1E020009                   # bgtz        $s0, . + 4 + (0x9 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
label_2834ec:
    if (ctx->pc == 0x2834ECu) {
        ctx->pc = 0x2834F0u;
        goto label_2834f0;
    }
    ctx->pc = 0x2834E8u;
    {
        const bool branch_taken_0x2834e8 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x2834e8) {
            ctx->pc = 0x283510u;
            goto label_283510;
        }
    }
    ctx->pc = 0x2834F0u;
label_2834f0:
    // 0x2834f0: 0xc1980000  ll          $t8, 0x0($t4)
    ctx->pc = 0x2834f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2834f4:
    // 0x2834f4: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x2834f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2834f8:
    // 0x2834f8: 0xc0c00000  ll          $zero, 0x0($a2)
    ctx->pc = 0x2834f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2834fc:
    // 0x2834fc: 0x42f00000  .word       0x42F00000                   # INVALID     $s7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2834fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x2834FC raw=0x42F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283500:
    // 0x283500: 0x40e00000  .word       0x40E00000                   # INVALID     $a3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283500u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x7 at 0x283500 raw=0x40E00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283504:
    // 0x283504: 0x42240000  .word       0x42240000                   # INVALID     $s1, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283504u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x283504 raw=0x42240000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283508:
    // 0x283508: 0xc1980000  ll          $t8, 0x0($t4)
    ctx->pc = 0x283508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28350c:
    // 0x28350c: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x28350cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283510:
    // 0x283510: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x283510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283514:
    // 0x283514: 0x42f20000  .word       0x42F20000                   # INVALID     $s7, $s2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283514u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x283514 raw=0x42F20000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283518:
    // 0x283518: 0x40e00000  .word       0x40E00000                   # INVALID     $a3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283518u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x7 at 0x283518 raw=0x40E00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28351c:
    // 0x28351c: 0x42440000  .word       0x42440000                   # INVALID     $s2, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28351cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x28351C raw=0x42440000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283520:
    // 0x283520: 0x0  nop
    ctx->pc = 0x283520u;
    // NOP
label_283524:
    // 0x283524: 0x0  nop
    ctx->pc = 0x283524u;
    // NOP
label_283528:
    // 0x283528: 0x1300000a  beqz        $t8, . + 4 + (0xA << 2)
label_28352c:
    if (ctx->pc == 0x28352Cu) {
        ctx->pc = 0x283530u;
        goto label_283530;
    }
    ctx->pc = 0x283528u;
    {
        const bool branch_taken_0x283528 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        if (branch_taken_0x283528) {
            ctx->pc = 0x283554u;
            goto label_283554;
        }
    }
    ctx->pc = 0x283530u;
label_283530:
    // 0x283530: 0xc1a00000  ll          $zero, 0x0($t5)
    ctx->pc = 0x283530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283534:
    // 0x283534: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x283534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283538:
    // 0x283538: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x283538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28353c:
    // 0x28353c: 0x43100000  .word       0x43100000                   # INVALID     $t8, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28353cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x28353C raw=0x43100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283540:
    // 0x283540: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x283540u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_283544:
    // 0x283544: 0x421c0000  .word       0x421C0000                   # INVALID     $s0, $gp, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x283544u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x283544 raw=0x421C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283548:
    // 0x283548: 0xc1d00000  ll          $s0, 0x0($t6)
    ctx->pc = 0x283548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28354c:
    // 0x28354c: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x28354cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283550:
    // 0x283550: 0xc1e00000  ll          $zero, 0x0($t7)
    ctx->pc = 0x283550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283554:
    // 0x283554: 0x43090000  .word       0x43090000                   # INVALID     $t8, $t1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283554u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x283554 raw=0x43090000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283558:
    // 0x283558: 0x41900000  .word       0x41900000                   # INVALID     $t4, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283558u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x283558 raw=0x41900000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28355c:
    // 0x28355c: 0x42820000  .word       0x42820000                   # INVALID     $s4, $v0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28355cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x28355C raw=0x42820000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283560:
    // 0x283560: 0x0  nop
    ctx->pc = 0x283560u;
    // NOP
label_283564:
    // 0x283564: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x283564u;
    
label_283568:
    // 0x283568: 0x2200000b  addi        $zero, $s0, 0xB
    ctx->pc = 0x283568u;
    // NOP (addi to $zero)
label_28356c:
    // 0x28356c: 0x0  nop
    ctx->pc = 0x28356cu;
    // NOP
label_283570:
    // 0x283570: 0xc1a00000  ll          $zero, 0x0($t5)
    ctx->pc = 0x283570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283574:
    // 0x283574: 0xc1b00000  ll          $s0, 0x0($t5)
    ctx->pc = 0x283574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283578:
    // 0x283578: 0xc1c80000  ll          $t0, 0x0($t6)
    ctx->pc = 0x283578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28357c:
    // 0x28357c: 0x43260000  .word       0x43260000                   # INVALID     $t9, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28357cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x28357C raw=0x43260000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283580:
    // 0x283580: 0x42300000  .word       0x42300000                   # INVALID     $s1, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283580u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x283580 raw=0x42300000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283584:
    // 0x283584: 0x424c0000  .word       0x424C0000                   # INVALID     $s2, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283584u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x283584 raw=0x424C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283588:
    // 0x283588: 0xc1a00000  ll          $zero, 0x0($t5)
    ctx->pc = 0x283588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28358c:
    // 0x28358c: 0xc1b00000  ll          $s0, 0x0($t5)
    ctx->pc = 0x28358cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283590:
    // 0x283590: 0xc1c80000  ll          $t0, 0x0($t6)
    ctx->pc = 0x283590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283594:
    // 0x283594: 0x43260000  .word       0x43260000                   # INVALID     $t9, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283594u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x283594 raw=0x43260000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283598:
    // 0x283598: 0x42300000  .word       0x42300000                   # INVALID     $s1, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283598u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x283598 raw=0x42300000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28359c:
    // 0x28359c: 0x424c0000  .word       0x424C0000                   # INVALID     $s2, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28359cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x28359C raw=0x424C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2835a0:
    // 0x2835a0: 0x0  nop
    ctx->pc = 0x2835a0u;
    // NOP
label_2835a4:
    // 0x2835a4: 0x0  nop
    ctx->pc = 0x2835a4u;
    // NOP
label_2835a8:
    // 0x2835a8: 0x1301000c  beq         $t8, $at, . + 4 + (0xC << 2)
label_2835ac:
    if (ctx->pc == 0x2835ACu) {
        ctx->pc = 0x2835B0u;
        goto label_2835b0;
    }
    ctx->pc = 0x2835A8u;
    {
        const bool branch_taken_0x2835a8 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 1));
        if (branch_taken_0x2835a8) {
            ctx->pc = 0x2835DCu;
            goto label_2835dc;
        }
    }
    ctx->pc = 0x2835B0u;
label_2835b0:
    // 0x2835b0: 0xc1c80000  ll          $t0, 0x0($t6)
    ctx->pc = 0x2835b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2835b4:
    // 0x2835b4: 0xc2000000  ll          $zero, 0x0($s0)
    ctx->pc = 0x2835b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2835b8:
    // 0x2835b8: 0xc1f80000  ll          $t8, 0x0($t7)
    ctx->pc = 0x2835b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2835bc:
    // 0x2835bc: 0x43460000  .word       0x43460000                   # INVALID     $k0, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2835bcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x2835BC raw=0x43460000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2835c0:
    // 0x2835c0: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2835c0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x2835C0 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2835c4:
    // 0x2835c4: 0x42780000  .word       0x42780000                   # INVALID     $s3, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2835c4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x2835C4 raw=0x42780000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2835c8:
    // 0x2835c8: 0xc1c80000  ll          $t0, 0x0($t6)
    ctx->pc = 0x2835c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2835cc:
    // 0x2835cc: 0xc2000000  ll          $zero, 0x0($s0)
    ctx->pc = 0x2835ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2835d0:
    // 0x2835d0: 0xc1f80000  ll          $t8, 0x0($t7)
    ctx->pc = 0x2835d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2835d4:
    // 0x2835d4: 0x43460000  .word       0x43460000                   # INVALID     $k0, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2835d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x2835D4 raw=0x43460000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2835d8:
    // 0x2835d8: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2835d8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x2835D8 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2835dc:
    // 0x2835dc: 0x42780000  .word       0x42780000                   # INVALID     $s3, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2835dcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x2835DC raw=0x42780000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2835e0:
    // 0x2835e0: 0x0  nop
    ctx->pc = 0x2835e0u;
    // NOP
label_2835e4:
    // 0x2835e4: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x2835e4u;
    
label_2835e8:
    // 0x2835e8: 0x2201000d  addi        $at, $s0, 0xD
    ctx->pc = 0x2835e8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 16), (int32_t)13, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_2835ec:
    // 0x2835ec: 0x0  nop
    ctx->pc = 0x2835ecu;
    // NOP
label_2835f0:
    // 0x2835f0: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x2835f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2835f4:
    // 0x2835f4: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x2835f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2835f8:
    // 0x2835f8: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x2835f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2835fc:
    // 0x2835fc: 0x42c40000  .word       0x42C40000                   # INVALID     $s6, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2835fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x2835FC raw=0x42C40000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283600:
    // 0x283600: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_283604:
    if (ctx->pc == 0x283604u) {
        ctx->pc = 0x283604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283600u;
        // 0x283604: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x283604 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x283608u;
        goto label_283608;
    }
    ctx->pc = 0x283600u;
    {
        const bool branch_taken_0x283600 = (false);
        ctx->pc = 0x283604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283600u;
        // 0x283604: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x283604 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x283600) {
            ctx->pc = 0x283604u;
            goto label_283604;
        }
    }
    ctx->pc = 0x283608u;
label_283608:
    // 0x283608: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x283608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28360c:
    // 0x28360c: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x28360cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283610:
    // 0x283610: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x283610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283614:
    // 0x283614: 0x42c40000  .word       0x42C40000                   # INVALID     $s6, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283614u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x283614 raw=0x42C40000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283618:
    // 0x283618: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_28361c:
    if (ctx->pc == 0x28361Cu) {
        ctx->pc = 0x28361Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283618u;
        // 0x28361c: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x28361C raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x283620u;
        goto label_283620;
    }
    ctx->pc = 0x283618u;
    {
        const bool branch_taken_0x283618 = (false);
        ctx->pc = 0x28361Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283618u;
        // 0x28361c: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x28361C raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x283618) {
            ctx->pc = 0x28361Cu;
            goto label_28361c;
        }
    }
    ctx->pc = 0x283620u;
label_283620:
    // 0x283620: 0x0  nop
    ctx->pc = 0x283620u;
    // NOP
label_283624:
    // 0x283624: 0x0  nop
    ctx->pc = 0x283624u;
    // NOP
label_283628:
    // 0x283628: 0x1103000e  beq         $t0, $v1, . + 4 + (0xE << 2)
label_28362c:
    if (ctx->pc == 0x28362Cu) {
        ctx->pc = 0x283630u;
        goto label_283630;
    }
    ctx->pc = 0x283628u;
    {
        const bool branch_taken_0x283628 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x283628) {
            ctx->pc = 0x283664u;
            goto label_283664;
        }
    }
    ctx->pc = 0x283630u;
label_283630:
    // 0x283630: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x283630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283634:
    // 0x283634: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x283634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283638:
    // 0x283638: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x283638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28363c:
    // 0x28363c: 0x42d00000  .word       0x42D00000                   # INVALID     $s6, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28363cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x28363C raw=0x42D00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283640:
    // 0x283640: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x283640u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x283640 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283644:
    // 0x283644: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283644u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x283644 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283648:
    // 0x283648: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x283648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28364c:
    // 0x28364c: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x28364cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283650:
    // 0x283650: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x283650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283654:
    // 0x283654: 0x42d00000  .word       0x42D00000                   # INVALID     $s6, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283654u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x283654 raw=0x42D00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283658:
    // 0x283658: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x283658u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x283658 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28365c:
    // 0x28365c: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28365cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x28365C raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283660:
    // 0x283660: 0x0  nop
    ctx->pc = 0x283660u;
    // NOP
label_283664:
    // 0x283664: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x283664u;
    
label_283668:
    // 0x283668: 0x2003000f  addi        $v1, $zero, 0xF
    ctx->pc = 0x283668u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)15, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_28366c:
    // 0x28366c: 0x0  nop
    ctx->pc = 0x28366cu;
    // NOP
label_283670:
    // 0x283670: 0xc1700000  ll          $s0, 0x0($t3)
    ctx->pc = 0x283670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283674:
    // 0x283674: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x283674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283678:
    // 0x283678: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x283678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28367c:
    // 0x28367c: 0x42d80000  .word       0x42D80000                   # INVALID     $s6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28367cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x28367C raw=0x42D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283680:
    // 0x283680: 0x41100000  .word       0x41100000                   # INVALID     $t0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_BC0>
    ctx->pc = 0x283680u;
    // BC0 (Condition: 0x10) - Handled by branch logic
label_283684:
    // 0x283684: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x283684u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x283684 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283688:
    // 0x283688: 0xc1700000  ll          $s0, 0x0($t3)
    ctx->pc = 0x283688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28368c:
    // 0x28368c: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x28368cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283690:
    // 0x283690: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x283690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283694:
    // 0x283694: 0x42d80000  .word       0x42D80000                   # INVALID     $s6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283694u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x283694 raw=0x42D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283698:
    // 0x283698: 0x41100000  .word       0x41100000                   # INVALID     $t0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_BC0>
    ctx->pc = 0x283698u;
    // BC0 (Condition: 0x10) - Handled by branch logic
label_28369c:
    // 0x28369c: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x28369cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x28369C raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2836a0:
    // 0x2836a0: 0x0  nop
    ctx->pc = 0x2836a0u;
    // NOP
label_2836a4:
    // 0x2836a4: 0x0  nop
    ctx->pc = 0x2836a4u;
    // NOP
label_2836a8:
    // 0x2836a8: 0x10030010  beq         $zero, $v1, . + 4 + (0x10 << 2)
label_2836ac:
    if (ctx->pc == 0x2836ACu) {
        ctx->pc = 0x2836B0u;
        goto label_2836b0;
    }
    ctx->pc = 0x2836A8u;
    {
        const bool branch_taken_0x2836a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x2836a8) {
            ctx->pc = 0x2836ECu;
            goto label_2836ec;
        }
    }
    ctx->pc = 0x2836B0u;
label_2836b0:
    // 0x2836b0: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x2836b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2836b4:
    // 0x2836b4: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x2836b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2836b8:
    // 0x2836b8: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x2836b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2836bc:
    // 0x2836bc: 0x43030000  .word       0x43030000                   # INVALID     $t8, $v1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2836bcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x2836BC raw=0x43030000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2836c0:
    // 0x2836c0: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_2836c4:
    if (ctx->pc == 0x2836C4u) {
        ctx->pc = 0x2836C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2836C0u;
        // 0x2836c4: 0x41000000  bc0f        . + 4 + (0x0 << 2) (Delay Slot)
        // BC0 (Condition: 0x0) - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2836C8u;
        goto label_2836c8;
    }
    ctx->pc = 0x2836C0u;
    {
        const bool branch_taken_0x2836c0 = (false);
        ctx->pc = 0x2836C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2836C0u;
        // 0x2836c4: 0x41000000  bc0f        . + 4 + (0x0 << 2) (Delay Slot)
        // BC0 (Condition: 0x0) - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2836c0) {
            ctx->pc = 0x2836C4u;
            goto label_2836c4;
        }
    }
    ctx->pc = 0x2836C8u;
label_2836c8:
    // 0x2836c8: 0xc1a00000  ll          $zero, 0x0($t5)
    ctx->pc = 0x2836c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2836cc:
    // 0x2836cc: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x2836ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2836d0:
    // 0x2836d0: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x2836d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2836d4:
    // 0x2836d4: 0x42f80000  .word       0x42F80000                   # INVALID     $s7, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2836d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x2836D4 raw=0x42F80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2836d8:
    // 0x2836d8: 0x41880000  .word       0x41880000                   # INVALID     $t4, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2836d8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x2836D8 raw=0x41880000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2836dc:
    // 0x2836dc: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2836dcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x2836DC raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2836e0:
    // 0x2836e0: 0x0  nop
    ctx->pc = 0x2836e0u;
    // NOP
label_2836e4:
    // 0x2836e4: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x2836e4u;
    
label_2836e8:
    // 0x2836e8: 0x1f030011  .word       0x1F030011                   # bgtz        $t8, . + 4 + (0x11 << 2) # 00030000 <InstrIdType: CPU_NORMAL>
label_2836ec:
    if (ctx->pc == 0x2836ECu) {
        ctx->pc = 0x2836F0u;
        goto label_2836f0;
    }
    ctx->pc = 0x2836E8u;
    {
        const bool branch_taken_0x2836e8 = (GPR_S32(ctx, 24) > 0);
        if (branch_taken_0x2836e8) {
            ctx->pc = 0x283730u;
            goto label_283730;
        }
    }
    ctx->pc = 0x2836F0u;
label_2836f0:
    // 0x2836f0: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x2836f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2836f4:
    // 0x2836f4: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x2836f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2836f8:
    // 0x2836f8: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x2836f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2836fc:
    // 0x2836fc: 0x429e0000  .word       0x429E0000                   # INVALID     $s4, $fp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2836fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x2836FC raw=0x429E0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283700:
    // 0x283700: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283700u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x283700 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283704:
    // 0x283704: 0x41900000  .word       0x41900000                   # INVALID     $t4, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283704u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x283704 raw=0x41900000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283708:
    // 0x283708: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x283708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28370c:
    // 0x28370c: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x28370cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283710:
    // 0x283710: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x283710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283714:
    // 0x283714: 0x429e0000  .word       0x429E0000                   # INVALID     $s4, $fp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283714u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x283714 raw=0x429E0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283718:
    // 0x283718: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283718u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x283718 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28371c:
    // 0x28371c: 0x41900000  .word       0x41900000                   # INVALID     $t4, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28371cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x28371C raw=0x41900000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283720:
    // 0x283720: 0x0  nop
    ctx->pc = 0x283720u;
    // NOP
label_283724:
    // 0x283724: 0x0  nop
    ctx->pc = 0x283724u;
    // NOP
label_283728:
    // 0x283728: 0xd030012  jal         func_40C0048
label_28372c:
    if (ctx->pc == 0x28372Cu) {
        ctx->pc = 0x283730u;
        goto label_283730;
    }
    ctx->pc = 0x283728u;
    SET_GPR_U32(ctx, 31, 0x283730u);
    ctx->pc = 0x40C0048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C0048u, 0x283728u, 0x283730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283730u;
label_283730:
    // 0x283730: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x283730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283734:
    // 0x283734: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x283734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283738:
    // 0x283738: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x283738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28373c:
    // 0x28373c: 0x42b00000  .word       0x42B00000                   # INVALID     $s5, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28373cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x28373C raw=0x42B00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283740:
    // 0x283740: 0x41900000  .word       0x41900000                   # INVALID     $t4, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283740u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x283740 raw=0x41900000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283744:
    // 0x283744: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283744u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x283744 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283748:
    // 0x283748: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x283748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28374c:
    // 0x28374c: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x28374cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283750:
    // 0x283750: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x283750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283754:
    // 0x283754: 0x42b00000  .word       0x42B00000                   # INVALID     $s5, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283754u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x283754 raw=0x42B00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->pc = 0x283758u;
    return;
}
