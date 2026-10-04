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


void FUN_0019b8d0_part420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x268240u: goto label_268240;
        case 0x268244u: goto label_268244;
        case 0x268248u: goto label_268248;
        case 0x26824cu: goto label_26824c;
        case 0x268250u: goto label_268250;
        case 0x268254u: goto label_268254;
        case 0x268258u: goto label_268258;
        case 0x26825cu: goto label_26825c;
        case 0x268260u: goto label_268260;
        case 0x268264u: goto label_268264;
        case 0x268268u: goto label_268268;
        case 0x26826cu: goto label_26826c;
        case 0x268270u: goto label_268270;
        case 0x268274u: goto label_268274;
        case 0x268278u: goto label_268278;
        case 0x26827cu: goto label_26827c;
        case 0x268280u: goto label_268280;
        case 0x268284u: goto label_268284;
        case 0x268288u: goto label_268288;
        case 0x26828cu: goto label_26828c;
        case 0x268290u: goto label_268290;
        case 0x268294u: goto label_268294;
        case 0x268298u: goto label_268298;
        case 0x26829cu: goto label_26829c;
        case 0x2682a0u: goto label_2682a0;
        case 0x2682a4u: goto label_2682a4;
        case 0x2682a8u: goto label_2682a8;
        case 0x2682acu: goto label_2682ac;
        case 0x2682b0u: goto label_2682b0;
        case 0x2682b4u: goto label_2682b4;
        case 0x2682b8u: goto label_2682b8;
        case 0x2682bcu: goto label_2682bc;
        case 0x2682c0u: goto label_2682c0;
        case 0x2682c4u: goto label_2682c4;
        case 0x2682c8u: goto label_2682c8;
        case 0x2682ccu: goto label_2682cc;
        case 0x2682d0u: goto label_2682d0;
        case 0x2682d4u: goto label_2682d4;
        case 0x2682d8u: goto label_2682d8;
        case 0x2682dcu: goto label_2682dc;
        case 0x2682e0u: goto label_2682e0;
        case 0x2682e4u: goto label_2682e4;
        case 0x2682e8u: goto label_2682e8;
        case 0x2682ecu: goto label_2682ec;
        case 0x2682f0u: goto label_2682f0;
        case 0x2682f4u: goto label_2682f4;
        case 0x2682f8u: goto label_2682f8;
        case 0x2682fcu: goto label_2682fc;
        case 0x268300u: goto label_268300;
        case 0x268304u: goto label_268304;
        case 0x268308u: goto label_268308;
        case 0x26830cu: goto label_26830c;
        case 0x268310u: goto label_268310;
        case 0x268314u: goto label_268314;
        case 0x268318u: goto label_268318;
        case 0x26831cu: goto label_26831c;
        case 0x268320u: goto label_268320;
        case 0x268324u: goto label_268324;
        case 0x268328u: goto label_268328;
        case 0x26832cu: goto label_26832c;
        case 0x268330u: goto label_268330;
        case 0x268334u: goto label_268334;
        case 0x268338u: goto label_268338;
        case 0x26833cu: goto label_26833c;
        case 0x268340u: goto label_268340;
        case 0x268344u: goto label_268344;
        case 0x268348u: goto label_268348;
        case 0x26834cu: goto label_26834c;
        case 0x268350u: goto label_268350;
        case 0x268354u: goto label_268354;
        case 0x268358u: goto label_268358;
        case 0x26835cu: goto label_26835c;
        case 0x268360u: goto label_268360;
        case 0x268364u: goto label_268364;
        case 0x268368u: goto label_268368;
        case 0x26836cu: goto label_26836c;
        case 0x268370u: goto label_268370;
        case 0x268374u: goto label_268374;
        case 0x268378u: goto label_268378;
        case 0x26837cu: goto label_26837c;
        case 0x268380u: goto label_268380;
        case 0x268384u: goto label_268384;
        case 0x268388u: goto label_268388;
        case 0x26838cu: goto label_26838c;
        case 0x268390u: goto label_268390;
        case 0x268394u: goto label_268394;
        case 0x268398u: goto label_268398;
        case 0x26839cu: goto label_26839c;
        case 0x2683a0u: goto label_2683a0;
        case 0x2683a4u: goto label_2683a4;
        case 0x2683a8u: goto label_2683a8;
        case 0x2683acu: goto label_2683ac;
        case 0x2683b0u: goto label_2683b0;
        case 0x2683b4u: goto label_2683b4;
        case 0x2683b8u: goto label_2683b8;
        case 0x2683bcu: goto label_2683bc;
        case 0x2683c0u: goto label_2683c0;
        case 0x2683c4u: goto label_2683c4;
        case 0x2683c8u: goto label_2683c8;
        case 0x2683ccu: goto label_2683cc;
        case 0x2683d0u: goto label_2683d0;
        case 0x2683d4u: goto label_2683d4;
        case 0x2683d8u: goto label_2683d8;
        case 0x2683dcu: goto label_2683dc;
        case 0x2683e0u: goto label_2683e0;
        case 0x2683e4u: goto label_2683e4;
        case 0x2683e8u: goto label_2683e8;
        case 0x2683ecu: goto label_2683ec;
        case 0x2683f0u: goto label_2683f0;
        case 0x2683f4u: goto label_2683f4;
        case 0x2683f8u: goto label_2683f8;
        case 0x2683fcu: goto label_2683fc;
        case 0x268400u: goto label_268400;
        case 0x268404u: goto label_268404;
        case 0x268408u: goto label_268408;
        case 0x26840cu: goto label_26840c;
        case 0x268410u: goto label_268410;
        case 0x268414u: goto label_268414;
        case 0x268418u: goto label_268418;
        case 0x26841cu: goto label_26841c;
        case 0x268420u: goto label_268420;
        case 0x268424u: goto label_268424;
        case 0x268428u: goto label_268428;
        case 0x26842cu: goto label_26842c;
        case 0x268430u: goto label_268430;
        case 0x268434u: goto label_268434;
        case 0x268438u: goto label_268438;
        case 0x26843cu: goto label_26843c;
        case 0x268440u: goto label_268440;
        case 0x268444u: goto label_268444;
        case 0x268448u: goto label_268448;
        case 0x26844cu: goto label_26844c;
        case 0x268450u: goto label_268450;
        case 0x268454u: goto label_268454;
        case 0x268458u: goto label_268458;
        case 0x26845cu: goto label_26845c;
        case 0x268460u: goto label_268460;
        case 0x268464u: goto label_268464;
        case 0x268468u: goto label_268468;
        case 0x26846cu: goto label_26846c;
        case 0x268470u: goto label_268470;
        case 0x268474u: goto label_268474;
        case 0x268478u: goto label_268478;
        case 0x26847cu: goto label_26847c;
        case 0x268480u: goto label_268480;
        case 0x268484u: goto label_268484;
        case 0x268488u: goto label_268488;
        case 0x26848cu: goto label_26848c;
        case 0x268490u: goto label_268490;
        case 0x268494u: goto label_268494;
        case 0x268498u: goto label_268498;
        case 0x26849cu: goto label_26849c;
        case 0x2684a0u: goto label_2684a0;
        case 0x2684a4u: goto label_2684a4;
        case 0x2684a8u: goto label_2684a8;
        case 0x2684acu: goto label_2684ac;
        case 0x2684b0u: goto label_2684b0;
        case 0x2684b4u: goto label_2684b4;
        case 0x2684b8u: goto label_2684b8;
        case 0x2684bcu: goto label_2684bc;
        case 0x2684c0u: goto label_2684c0;
        case 0x2684c4u: goto label_2684c4;
        case 0x2684c8u: goto label_2684c8;
        case 0x2684ccu: goto label_2684cc;
        case 0x2684d0u: goto label_2684d0;
        case 0x2684d4u: goto label_2684d4;
        case 0x2684d8u: goto label_2684d8;
        case 0x2684dcu: goto label_2684dc;
        case 0x2684e0u: goto label_2684e0;
        case 0x2684e4u: goto label_2684e4;
        case 0x2684e8u: goto label_2684e8;
        case 0x2684ecu: goto label_2684ec;
        case 0x2684f0u: goto label_2684f0;
        case 0x2684f4u: goto label_2684f4;
        case 0x2684f8u: goto label_2684f8;
        case 0x2684fcu: goto label_2684fc;
        case 0x268500u: goto label_268500;
        case 0x268504u: goto label_268504;
        case 0x268508u: goto label_268508;
        case 0x26850cu: goto label_26850c;
        case 0x268510u: goto label_268510;
        case 0x268514u: goto label_268514;
        case 0x268518u: goto label_268518;
        case 0x26851cu: goto label_26851c;
        case 0x268520u: goto label_268520;
        case 0x268524u: goto label_268524;
        case 0x268528u: goto label_268528;
        case 0x26852cu: goto label_26852c;
        case 0x268530u: goto label_268530;
        case 0x268534u: goto label_268534;
        case 0x268538u: goto label_268538;
        case 0x26853cu: goto label_26853c;
        case 0x268540u: goto label_268540;
        case 0x268544u: goto label_268544;
        case 0x268548u: goto label_268548;
        case 0x26854cu: goto label_26854c;
        case 0x268550u: goto label_268550;
        case 0x268554u: goto label_268554;
        case 0x268558u: goto label_268558;
        case 0x26855cu: goto label_26855c;
        case 0x268560u: goto label_268560;
        case 0x268564u: goto label_268564;
        case 0x268568u: goto label_268568;
        case 0x26856cu: goto label_26856c;
        case 0x268570u: goto label_268570;
        case 0x268574u: goto label_268574;
        case 0x268578u: goto label_268578;
        case 0x26857cu: goto label_26857c;
        case 0x268580u: goto label_268580;
        case 0x268584u: goto label_268584;
        case 0x268588u: goto label_268588;
        case 0x26858cu: goto label_26858c;
        case 0x268590u: goto label_268590;
        case 0x268594u: goto label_268594;
        case 0x268598u: goto label_268598;
        case 0x26859cu: goto label_26859c;
        case 0x2685a0u: goto label_2685a0;
        case 0x2685a4u: goto label_2685a4;
        case 0x2685a8u: goto label_2685a8;
        case 0x2685acu: goto label_2685ac;
        case 0x2685b0u: goto label_2685b0;
        case 0x2685b4u: goto label_2685b4;
        case 0x2685b8u: goto label_2685b8;
        case 0x2685bcu: goto label_2685bc;
        case 0x2685c0u: goto label_2685c0;
        case 0x2685c4u: goto label_2685c4;
        case 0x2685c8u: goto label_2685c8;
        case 0x2685ccu: goto label_2685cc;
        case 0x2685d0u: goto label_2685d0;
        case 0x2685d4u: goto label_2685d4;
        case 0x2685d8u: goto label_2685d8;
        case 0x2685dcu: goto label_2685dc;
        case 0x2685e0u: goto label_2685e0;
        case 0x2685e4u: goto label_2685e4;
        case 0x2685e8u: goto label_2685e8;
        case 0x2685ecu: goto label_2685ec;
        case 0x2685f0u: goto label_2685f0;
        case 0x2685f4u: goto label_2685f4;
        case 0x2685f8u: goto label_2685f8;
        case 0x2685fcu: goto label_2685fc;
        case 0x268600u: goto label_268600;
        case 0x268604u: goto label_268604;
        case 0x268608u: goto label_268608;
        case 0x26860cu: goto label_26860c;
        case 0x268610u: goto label_268610;
        case 0x268614u: goto label_268614;
        case 0x268618u: goto label_268618;
        case 0x26861cu: goto label_26861c;
        case 0x268620u: goto label_268620;
        case 0x268624u: goto label_268624;
        case 0x268628u: goto label_268628;
        case 0x26862cu: goto label_26862c;
        case 0x268630u: goto label_268630;
        case 0x268634u: goto label_268634;
        case 0x268638u: goto label_268638;
        case 0x26863cu: goto label_26863c;
        case 0x268640u: goto label_268640;
        case 0x268644u: goto label_268644;
        case 0x268648u: goto label_268648;
        case 0x26864cu: goto label_26864c;
        case 0x268650u: goto label_268650;
        case 0x268654u: goto label_268654;
        case 0x268658u: goto label_268658;
        case 0x26865cu: goto label_26865c;
        case 0x268660u: goto label_268660;
        case 0x268664u: goto label_268664;
        case 0x268668u: goto label_268668;
        case 0x26866cu: goto label_26866c;
        case 0x268670u: goto label_268670;
        case 0x268674u: goto label_268674;
        case 0x268678u: goto label_268678;
        case 0x26867cu: goto label_26867c;
        case 0x268680u: goto label_268680;
        case 0x268684u: goto label_268684;
        case 0x268688u: goto label_268688;
        case 0x26868cu: goto label_26868c;
        case 0x268690u: goto label_268690;
        case 0x268694u: goto label_268694;
        case 0x268698u: goto label_268698;
        case 0x26869cu: goto label_26869c;
        case 0x2686a0u: goto label_2686a0;
        case 0x2686a4u: goto label_2686a4;
        case 0x2686a8u: goto label_2686a8;
        case 0x2686acu: goto label_2686ac;
        case 0x2686b0u: goto label_2686b0;
        case 0x2686b4u: goto label_2686b4;
        case 0x2686b8u: goto label_2686b8;
        case 0x2686bcu: goto label_2686bc;
        case 0x2686c0u: goto label_2686c0;
        case 0x2686c4u: goto label_2686c4;
        case 0x2686c8u: goto label_2686c8;
        case 0x2686ccu: goto label_2686cc;
        case 0x2686d0u: goto label_2686d0;
        case 0x2686d4u: goto label_2686d4;
        case 0x2686d8u: goto label_2686d8;
        case 0x2686dcu: goto label_2686dc;
        case 0x2686e0u: goto label_2686e0;
        case 0x2686e4u: goto label_2686e4;
        case 0x2686e8u: goto label_2686e8;
        case 0x2686ecu: goto label_2686ec;
        case 0x2686f0u: goto label_2686f0;
        case 0x2686f4u: goto label_2686f4;
        case 0x2686f8u: goto label_2686f8;
        case 0x2686fcu: goto label_2686fc;
        case 0x268700u: goto label_268700;
        case 0x268704u: goto label_268704;
        case 0x268708u: goto label_268708;
        case 0x26870cu: goto label_26870c;
        case 0x268710u: goto label_268710;
        case 0x268714u: goto label_268714;
        case 0x268718u: goto label_268718;
        case 0x26871cu: goto label_26871c;
        case 0x268720u: goto label_268720;
        case 0x268724u: goto label_268724;
        case 0x268728u: goto label_268728;
        case 0x26872cu: goto label_26872c;
        case 0x268730u: goto label_268730;
        case 0x268734u: goto label_268734;
        case 0x268738u: goto label_268738;
        case 0x26873cu: goto label_26873c;
        case 0x268740u: goto label_268740;
        case 0x268744u: goto label_268744;
        case 0x268748u: goto label_268748;
        case 0x26874cu: goto label_26874c;
        case 0x268750u: goto label_268750;
        case 0x268754u: goto label_268754;
        case 0x268758u: goto label_268758;
        case 0x26875cu: goto label_26875c;
        case 0x268760u: goto label_268760;
        case 0x268764u: goto label_268764;
        case 0x268768u: goto label_268768;
        case 0x26876cu: goto label_26876c;
        case 0x268770u: goto label_268770;
        case 0x268774u: goto label_268774;
        case 0x268778u: goto label_268778;
        case 0x26877cu: goto label_26877c;
        case 0x268780u: goto label_268780;
        case 0x268784u: goto label_268784;
        case 0x268788u: goto label_268788;
        case 0x26878cu: goto label_26878c;
        case 0x268790u: goto label_268790;
        case 0x268794u: goto label_268794;
        case 0x268798u: goto label_268798;
        case 0x26879cu: goto label_26879c;
        case 0x2687a0u: goto label_2687a0;
        case 0x2687a4u: goto label_2687a4;
        case 0x2687a8u: goto label_2687a8;
        case 0x2687acu: goto label_2687ac;
        case 0x2687b0u: goto label_2687b0;
        case 0x2687b4u: goto label_2687b4;
        case 0x2687b8u: goto label_2687b8;
        case 0x2687bcu: goto label_2687bc;
        case 0x2687c0u: goto label_2687c0;
        case 0x2687c4u: goto label_2687c4;
        case 0x2687c8u: goto label_2687c8;
        case 0x2687ccu: goto label_2687cc;
        case 0x2687d0u: goto label_2687d0;
        case 0x2687d4u: goto label_2687d4;
        case 0x2687d8u: goto label_2687d8;
        case 0x2687dcu: goto label_2687dc;
        case 0x2687e0u: goto label_2687e0;
        case 0x2687e4u: goto label_2687e4;
        case 0x2687e8u: goto label_2687e8;
        case 0x2687ecu: goto label_2687ec;
        case 0x2687f0u: goto label_2687f0;
        case 0x2687f4u: goto label_2687f4;
        case 0x2687f8u: goto label_2687f8;
        case 0x2687fcu: goto label_2687fc;
        case 0x268800u: goto label_268800;
        case 0x268804u: goto label_268804;
        case 0x268808u: goto label_268808;
        case 0x26880cu: goto label_26880c;
        case 0x268810u: goto label_268810;
        case 0x268814u: goto label_268814;
        case 0x268818u: goto label_268818;
        case 0x26881cu: goto label_26881c;
        case 0x268820u: goto label_268820;
        case 0x268824u: goto label_268824;
        case 0x268828u: goto label_268828;
        case 0x26882cu: goto label_26882c;
        case 0x268830u: goto label_268830;
        case 0x268834u: goto label_268834;
        case 0x268838u: goto label_268838;
        case 0x26883cu: goto label_26883c;
        case 0x268840u: goto label_268840;
        case 0x268844u: goto label_268844;
        case 0x268848u: goto label_268848;
        case 0x26884cu: goto label_26884c;
        case 0x268850u: goto label_268850;
        case 0x268854u: goto label_268854;
        case 0x268858u: goto label_268858;
        case 0x26885cu: goto label_26885c;
        case 0x268860u: goto label_268860;
        case 0x268864u: goto label_268864;
        case 0x268868u: goto label_268868;
        case 0x26886cu: goto label_26886c;
        case 0x268870u: goto label_268870;
        case 0x268874u: goto label_268874;
        case 0x268878u: goto label_268878;
        case 0x26887cu: goto label_26887c;
        case 0x268880u: goto label_268880;
        case 0x268884u: goto label_268884;
        case 0x268888u: goto label_268888;
        case 0x26888cu: goto label_26888c;
        case 0x268890u: goto label_268890;
        case 0x268894u: goto label_268894;
        case 0x268898u: goto label_268898;
        case 0x26889cu: goto label_26889c;
        case 0x2688a0u: goto label_2688a0;
        case 0x2688a4u: goto label_2688a4;
        case 0x2688a8u: goto label_2688a8;
        case 0x2688acu: goto label_2688ac;
        case 0x2688b0u: goto label_2688b0;
        case 0x2688b4u: goto label_2688b4;
        case 0x2688b8u: goto label_2688b8;
        case 0x2688bcu: goto label_2688bc;
        case 0x2688c0u: goto label_2688c0;
        case 0x2688c4u: goto label_2688c4;
        case 0x2688c8u: goto label_2688c8;
        case 0x2688ccu: goto label_2688cc;
        case 0x2688d0u: goto label_2688d0;
        case 0x2688d4u: goto label_2688d4;
        case 0x2688d8u: goto label_2688d8;
        case 0x2688dcu: goto label_2688dc;
        case 0x2688e0u: goto label_2688e0;
        case 0x2688e4u: goto label_2688e4;
        case 0x2688e8u: goto label_2688e8;
        case 0x2688ecu: goto label_2688ec;
        case 0x2688f0u: goto label_2688f0;
        case 0x2688f4u: goto label_2688f4;
        case 0x2688f8u: goto label_2688f8;
        case 0x2688fcu: goto label_2688fc;
        case 0x268900u: goto label_268900;
        case 0x268904u: goto label_268904;
        case 0x268908u: goto label_268908;
        case 0x26890cu: goto label_26890c;
        case 0x268910u: goto label_268910;
        case 0x268914u: goto label_268914;
        case 0x268918u: goto label_268918;
        case 0x26891cu: goto label_26891c;
        case 0x268920u: goto label_268920;
        case 0x268924u: goto label_268924;
        case 0x268928u: goto label_268928;
        case 0x26892cu: goto label_26892c;
        case 0x268930u: goto label_268930;
        case 0x268934u: goto label_268934;
        case 0x268938u: goto label_268938;
        case 0x26893cu: goto label_26893c;
        case 0x268940u: goto label_268940;
        case 0x268944u: goto label_268944;
        case 0x268948u: goto label_268948;
        case 0x26894cu: goto label_26894c;
        case 0x268950u: goto label_268950;
        case 0x268954u: goto label_268954;
        case 0x268958u: goto label_268958;
        case 0x26895cu: goto label_26895c;
        case 0x268960u: goto label_268960;
        case 0x268964u: goto label_268964;
        case 0x268968u: goto label_268968;
        case 0x26896cu: goto label_26896c;
        case 0x268970u: goto label_268970;
        case 0x268974u: goto label_268974;
        case 0x268978u: goto label_268978;
        case 0x26897cu: goto label_26897c;
        case 0x268980u: goto label_268980;
        case 0x268984u: goto label_268984;
        case 0x268988u: goto label_268988;
        case 0x26898cu: goto label_26898c;
        case 0x268990u: goto label_268990;
        case 0x268994u: goto label_268994;
        case 0x268998u: goto label_268998;
        case 0x26899cu: goto label_26899c;
        case 0x2689a0u: goto label_2689a0;
        case 0x2689a4u: goto label_2689a4;
        case 0x2689a8u: goto label_2689a8;
        case 0x2689acu: goto label_2689ac;
        case 0x2689b0u: goto label_2689b0;
        case 0x2689b4u: goto label_2689b4;
        case 0x2689b8u: goto label_2689b8;
        case 0x2689bcu: goto label_2689bc;
        case 0x2689c0u: goto label_2689c0;
        case 0x2689c4u: goto label_2689c4;
        case 0x2689c8u: goto label_2689c8;
        case 0x2689ccu: goto label_2689cc;
        case 0x2689d0u: goto label_2689d0;
        case 0x2689d4u: goto label_2689d4;
        case 0x2689d8u: goto label_2689d8;
        case 0x2689dcu: goto label_2689dc;
        case 0x2689e0u: goto label_2689e0;
        case 0x2689e4u: goto label_2689e4;
        case 0x2689e8u: goto label_2689e8;
        case 0x2689ecu: goto label_2689ec;
        case 0x2689f0u: goto label_2689f0;
        case 0x2689f4u: goto label_2689f4;
        case 0x2689f8u: goto label_2689f8;
        case 0x2689fcu: goto label_2689fc;
        case 0x268a00u: goto label_268a00;
        case 0x268a04u: goto label_268a04;
        case 0x268a08u: goto label_268a08;
        case 0x268a0cu: goto label_268a0c;
        default: return;
    }

label_268240:
    // 0x268240: 0x12349  .word       0x00012349                   # jalr        $a0, $zero # 00010340 <InstrIdType: CPU_SPECIAL>
label_268244:
    if (ctx->pc == 0x268244u) {
        ctx->pc = 0x268244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268240u;
        // 0x268244: 0x9aa0  .word       0x00009AA0                   # add         $s3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x268248u;
        goto label_268248;
    }
    ctx->pc = 0x268240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 4, 0x268248u);
        ctx->pc = 0x268244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268240u;
        // 0x268244: 0x9aa0  .word       0x00009AA0                   # add         $s3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268240u, 0x268248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x268248u;
label_268248:
    // 0x268248: 0x0  nop
    ctx->pc = 0x268248u;
    // NOP
label_26824c:
    // 0x26824c: 0x0  nop
    ctx->pc = 0x26824cu;
    // NOP
label_268250:
    // 0x268250: 0x1235d  .word       0x0001235D                   # dmultu      $zero, $at # 00002340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268250u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x268250 raw=0x0001235D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268254:
    // 0x268254: 0x7c60  .word       0x00007C60                   # add         $t7, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268254u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_268258:
    // 0x268258: 0x0  nop
    ctx->pc = 0x268258u;
    // NOP
label_26825c:
    // 0x26825c: 0x0  nop
    ctx->pc = 0x26825cu;
    // NOP
label_268260:
    // 0x268260: 0x1236d  .word       0x0001236D                   # daddu       $a0, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_268264:
    // 0x268264: 0xf310  .word       0x0000F310                   # mfhi        $fp # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268264u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_268268:
    // 0x268268: 0x0  nop
    ctx->pc = 0x268268u;
    // NOP
label_26826c:
    // 0x26826c: 0x0  nop
    ctx->pc = 0x26826cu;
    // NOP
label_268270:
    // 0x268270: 0x1238c  .word       0x0001238C                   # syscall     142 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268270u;
    ctx->pc = 0x268274u;
runtime->handleSyscall(rdram, ctx, 0x48Eu);
label_268274:
    // 0x268274: 0xcd40  sll         $t9, $zero, 21
    ctx->pc = 0x268274u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_268278:
    // 0x268278: 0x0  nop
    ctx->pc = 0x268278u;
    // NOP
label_26827c:
    // 0x26827c: 0x0  nop
    ctx->pc = 0x26827cu;
    // NOP
label_268280:
    // 0x268280: 0x123a6  .word       0x000123A6                   # xor         $a0, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268280u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_268284:
    // 0x268284: 0xc0f0  tge         $zero, $zero, 771
    ctx->pc = 0x268284u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268288:
    // 0x268288: 0x0  nop
    ctx->pc = 0x268288u;
    // NOP
label_26828c:
    // 0x26828c: 0x0  nop
    ctx->pc = 0x26828cu;
    // NOP
label_268290:
    // 0x268290: 0x123bf  dsra32      $a0, $at, 14
    ctx->pc = 0x268290u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 1) >> (32 + 14));
label_268294:
    // 0x268294: 0x9bb0  tge         $zero, $zero, 622
    ctx->pc = 0x268294u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268298:
    // 0x268298: 0x0  nop
    ctx->pc = 0x268298u;
    // NOP
label_26829c:
    // 0x26829c: 0x0  nop
    ctx->pc = 0x26829cu;
    // NOP
label_2682a0:
    // 0x2682a0: 0x123d3  .word       0x000123D3                   # mtlo        $zero # 000123C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2682a0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2682a4:
    // 0x2682a4: 0xb580  sll         $s6, $zero, 22
    ctx->pc = 0x2682a4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_2682a8:
    // 0x2682a8: 0x0  nop
    ctx->pc = 0x2682a8u;
    // NOP
label_2682ac:
    // 0x2682ac: 0x0  nop
    ctx->pc = 0x2682acu;
    // NOP
label_2682b0:
    // 0x2682b0: 0x123ea  .word       0x000123EA                   # slt         $a0, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2682b0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_2682b4:
    // 0x2682b4: 0x7c40  sll         $t7, $zero, 17
    ctx->pc = 0x2682b4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2682b8:
    // 0x2682b8: 0x0  nop
    ctx->pc = 0x2682b8u;
    // NOP
label_2682bc:
    // 0x2682bc: 0x0  nop
    ctx->pc = 0x2682bcu;
    // NOP
label_2682c0:
    // 0x2682c0: 0x123fa  dsrl        $a0, $at, 15
    ctx->pc = 0x2682c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) >> 15);
label_2682c4:
    // 0x2682c4: 0x8a90  .word       0x00008A90                   # mfhi        $s1 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2682c4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2682c8:
    // 0x2682c8: 0x0  nop
    ctx->pc = 0x2682c8u;
    // NOP
label_2682cc:
    // 0x2682cc: 0x0  nop
    ctx->pc = 0x2682ccu;
    // NOP
label_2682d0:
    // 0x2682d0: 0x1240c  .word       0x0001240C                   # syscall     144 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2682d0u;
    ctx->pc = 0x2682D4u;
runtime->handleSyscall(rdram, ctx, 0x490u);
label_2682d4:
    // 0x2682d4: 0x88f0  tge         $zero, $zero, 547
    ctx->pc = 0x2682d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2682d8:
    // 0x2682d8: 0x0  nop
    ctx->pc = 0x2682d8u;
    // NOP
label_2682dc:
    // 0x2682dc: 0x0  nop
    ctx->pc = 0x2682dcu;
    // NOP
label_2682e0:
    // 0x2682e0: 0x1241e  .word       0x0001241E                   # ddiv        $a0, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2682e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2682E0 raw=0x0001241E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2682e4:
    // 0x2682e4: 0x57a0  .word       0x000057A0                   # add         $t2, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2682e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_2682e8:
    // 0x2682e8: 0x0  nop
    ctx->pc = 0x2682e8u;
    // NOP
label_2682ec:
    // 0x2682ec: 0x0  nop
    ctx->pc = 0x2682ecu;
    // NOP
label_2682f0:
    // 0x2682f0: 0x12429  .word       0x00012429                   # mtsa        $zero # 00012400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2682f0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2682f4:
    // 0x2682f4: 0xe470  tge         $zero, $zero, 913
    ctx->pc = 0x2682f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2682f8:
    // 0x2682f8: 0x0  nop
    ctx->pc = 0x2682f8u;
    // NOP
label_2682fc:
    // 0x2682fc: 0x0  nop
    ctx->pc = 0x2682fcu;
    // NOP
label_268300:
    // 0x268300: 0x12446  .word       0x00012446                   # srlv        $a0, $at, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268300u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_268304:
    // 0x268304: 0x7f50  .word       0x00007F50                   # mfhi        $t7 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268304u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_268308:
    // 0x268308: 0x0  nop
    ctx->pc = 0x268308u;
    // NOP
label_26830c:
    // 0x26830c: 0x0  nop
    ctx->pc = 0x26830cu;
    // NOP
label_268310:
    // 0x268310: 0x12456  .word       0x00012456                   # dsrlv       $a0, $at, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268310u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_268314:
    // 0x268314: 0xca20  .word       0x0000CA20                   # add         $t9, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268314u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_268318:
    // 0x268318: 0x0  nop
    ctx->pc = 0x268318u;
    // NOP
label_26831c:
    // 0x26831c: 0x0  nop
    ctx->pc = 0x26831cu;
    // NOP
label_268320:
    // 0x268320: 0x12470  tge         $zero, $at, 145
    ctx->pc = 0x268320u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_268324:
    // 0x268324: 0x9590  .word       0x00009590                   # mfhi        $s2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268324u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_268328:
    // 0x268328: 0x0  nop
    ctx->pc = 0x268328u;
    // NOP
label_26832c:
    // 0x26832c: 0x0  nop
    ctx->pc = 0x26832cu;
    // NOP
label_268330:
    // 0x268330: 0x12483  sra         $a0, $at, 18
    ctx->pc = 0x268330u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 1), 18));
label_268334:
    // 0x268334: 0x7f50  .word       0x00007F50                   # mfhi        $t7 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268334u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_268338:
    // 0x268338: 0x0  nop
    ctx->pc = 0x268338u;
    // NOP
label_26833c:
    // 0x26833c: 0x0  nop
    ctx->pc = 0x26833cu;
    // NOP
label_268340:
    // 0x268340: 0x12493  .word       0x00012493                   # mtlo        $zero # 00012480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268340u;
    ctx->lo = GPR_U64(ctx, 0);
label_268344:
    // 0x268344: 0x8e70  tge         $zero, $zero, 569
    ctx->pc = 0x268344u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268348:
    // 0x268348: 0x0  nop
    ctx->pc = 0x268348u;
    // NOP
label_26834c:
    // 0x26834c: 0x0  nop
    ctx->pc = 0x26834cu;
    // NOP
label_268350:
    // 0x268350: 0x124a5  .word       0x000124A5                   # or          $a0, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_268354:
    // 0x268354: 0x98c0  sll         $s3, $zero, 3
    ctx->pc = 0x268354u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_268358:
    // 0x268358: 0x0  nop
    ctx->pc = 0x268358u;
    // NOP
label_26835c:
    // 0x26835c: 0x0  nop
    ctx->pc = 0x26835cu;
    // NOP
label_268360:
    // 0x268360: 0x124b9  .word       0x000124B9                   # INVALID     $zero, $at, 0x24B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268360u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x268360 raw=0x000124B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268364:
    // 0x268364: 0x62f0  tge         $zero, $zero, 395
    ctx->pc = 0x268364u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268368:
    // 0x268368: 0x0  nop
    ctx->pc = 0x268368u;
    // NOP
label_26836c:
    // 0x26836c: 0x0  nop
    ctx->pc = 0x26836cu;
    // NOP
label_268370:
    // 0x268370: 0x124c6  .word       0x000124C6                   # srlv        $a0, $at, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268370u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_268374:
    // 0x268374: 0x9620  .word       0x00009620                   # add         $s2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268374u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_268378:
    // 0x268378: 0x0  nop
    ctx->pc = 0x268378u;
    // NOP
label_26837c:
    // 0x26837c: 0x0  nop
    ctx->pc = 0x26837cu;
    // NOP
label_268380:
    // 0x268380: 0x124d9  .word       0x000124D9                   # multu       $zero, $at # 000024C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268380u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_268384:
    // 0x268384: 0x50e0  .word       0x000050E0                   # add         $t2, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268384u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_268388:
    // 0x268388: 0x0  nop
    ctx->pc = 0x268388u;
    // NOP
label_26838c:
    // 0x26838c: 0x0  nop
    ctx->pc = 0x26838cu;
    // NOP
label_268390:
    // 0x268390: 0x124e4  .word       0x000124E4                   # and         $a0, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_268394:
    // 0x268394: 0x5340  sll         $t2, $zero, 13
    ctx->pc = 0x268394u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_268398:
    // 0x268398: 0x0  nop
    ctx->pc = 0x268398u;
    // NOP
label_26839c:
    // 0x26839c: 0x0  nop
    ctx->pc = 0x26839cu;
    // NOP
label_2683a0:
    // 0x2683a0: 0x124ef  .word       0x000124EF                   # dsubu       $a0, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2683a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_2683a4:
    // 0x2683a4: 0x9820  add         $s3, $zero, $zero
    ctx->pc = 0x2683a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_2683a8:
    // 0x2683a8: 0x0  nop
    ctx->pc = 0x2683a8u;
    // NOP
label_2683ac:
    // 0x2683ac: 0x0  nop
    ctx->pc = 0x2683acu;
    // NOP
label_2683b0:
    // 0x2683b0: 0x12503  sra         $a0, $at, 20
    ctx->pc = 0x2683b0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 1), 20));
label_2683b4:
    // 0x2683b4: 0x9dd0  .word       0x00009DD0                   # mfhi        $s3 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2683b4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_2683b8:
    // 0x2683b8: 0x0  nop
    ctx->pc = 0x2683b8u;
    // NOP
label_2683bc:
    // 0x2683bc: 0x0  nop
    ctx->pc = 0x2683bcu;
    // NOP
label_2683c0:
    // 0x2683c0: 0x12517  .word       0x00012517                   # dsrav       $a0, $at, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2683c0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_2683c4:
    // 0x2683c4: 0xa700  sll         $s4, $zero, 28
    ctx->pc = 0x2683c4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_2683c8:
    // 0x2683c8: 0x0  nop
    ctx->pc = 0x2683c8u;
    // NOP
label_2683cc:
    // 0x2683cc: 0x0  nop
    ctx->pc = 0x2683ccu;
    // NOP
label_2683d0:
    // 0x2683d0: 0x1252c  .word       0x0001252C                   # dadd        $a0, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2683d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_2683d4:
    // 0x2683d4: 0xa0c0  sll         $s4, $zero, 3
    ctx->pc = 0x2683d4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_2683d8:
    // 0x2683d8: 0x0  nop
    ctx->pc = 0x2683d8u;
    // NOP
label_2683dc:
    // 0x2683dc: 0x0  nop
    ctx->pc = 0x2683dcu;
    // NOP
label_2683e0:
    // 0x2683e0: 0x12541  .word       0x00012541                   # INVALID     $zero, $at, 0x2541 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2683e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2683E0 raw=0x00012541"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2683e4:
    // 0x2683e4: 0xbee0  .word       0x0000BEE0                   # add         $s7, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2683e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_2683e8:
    // 0x2683e8: 0x0  nop
    ctx->pc = 0x2683e8u;
    // NOP
label_2683ec:
    // 0x2683ec: 0x0  nop
    ctx->pc = 0x2683ecu;
    // NOP
label_2683f0:
    // 0x2683f0: 0x12559  .word       0x00012559                   # multu       $zero, $at # 00002540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2683f0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2683f4:
    // 0x2683f4: 0x6b50  .word       0x00006B50                   # mfhi        $t5 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2683f4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2683f8:
    // 0x2683f8: 0x0  nop
    ctx->pc = 0x2683f8u;
    // NOP
label_2683fc:
    // 0x2683fc: 0x0  nop
    ctx->pc = 0x2683fcu;
    // NOP
label_268400:
    // 0x268400: 0x12567  .word       0x00012567                   # nor         $a0, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268400u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_268404:
    // 0x268404: 0x7070  tge         $zero, $zero, 449
    ctx->pc = 0x268404u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268408:
    // 0x268408: 0x0  nop
    ctx->pc = 0x268408u;
    // NOP
label_26840c:
    // 0x26840c: 0x0  nop
    ctx->pc = 0x26840cu;
    // NOP
label_268410:
    // 0x268410: 0x12576  tne         $zero, $at, 149
    ctx->pc = 0x268410u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_268414:
    // 0x268414: 0x7f10  .word       0x00007F10                   # mfhi        $t7 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268414u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_268418:
    // 0x268418: 0x0  nop
    ctx->pc = 0x268418u;
    // NOP
label_26841c:
    // 0x26841c: 0x0  nop
    ctx->pc = 0x26841cu;
    // NOP
label_268420:
    // 0x268420: 0x12586  .word       0x00012586                   # srlv        $a0, $at, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268420u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_268424:
    // 0x268424: 0xa870  tge         $zero, $zero, 673
    ctx->pc = 0x268424u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268428:
    // 0x268428: 0x0  nop
    ctx->pc = 0x268428u;
    // NOP
label_26842c:
    // 0x26842c: 0x0  nop
    ctx->pc = 0x26842cu;
    // NOP
label_268430:
    // 0x268430: 0x1259c  .word       0x0001259C                   # dmult       $zero, $at # 00002580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268430u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x268430 raw=0x0001259C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268434:
    // 0x268434: 0x58e0  .word       0x000058E0                   # add         $t3, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268434u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_268438:
    // 0x268438: 0x0  nop
    ctx->pc = 0x268438u;
    // NOP
label_26843c:
    // 0x26843c: 0x0  nop
    ctx->pc = 0x26843cu;
    // NOP
label_268440:
    // 0x268440: 0x125a8  .word       0x000125A8                   # mfsa        $a0 # 00010580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x268440u;
    SET_GPR_U32(ctx, 4, ctx->sa);
label_268444:
    // 0x268444: 0x6ef0  tge         $zero, $zero, 443
    ctx->pc = 0x268444u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268448:
    // 0x268448: 0x0  nop
    ctx->pc = 0x268448u;
    // NOP
label_26844c:
    // 0x26844c: 0x0  nop
    ctx->pc = 0x26844cu;
    // NOP
label_268450:
    // 0x268450: 0x125b6  tne         $zero, $at, 150
    ctx->pc = 0x268450u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_268454:
    // 0x268454: 0x9270  tge         $zero, $zero, 585
    ctx->pc = 0x268454u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268458:
    // 0x268458: 0x0  nop
    ctx->pc = 0x268458u;
    // NOP
label_26845c:
    // 0x26845c: 0x0  nop
    ctx->pc = 0x26845cu;
    // NOP
label_268460:
    // 0x268460: 0x125c9  .word       0x000125C9                   # jalr        $a0, $zero # 000105C0 <InstrIdType: CPU_SPECIAL>
label_268464:
    if (ctx->pc == 0x268464u) {
        ctx->pc = 0x268464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268460u;
        // 0x268464: 0x9aa0  .word       0x00009AA0                   # add         $s3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x268468u;
        goto label_268468;
    }
    ctx->pc = 0x268460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 4, 0x268468u);
        ctx->pc = 0x268464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268460u;
        // 0x268464: 0x9aa0  .word       0x00009AA0                   # add         $s3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268460u, 0x268468u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x268468u;
label_268468:
    // 0x268468: 0x0  nop
    ctx->pc = 0x268468u;
    // NOP
label_26846c:
    // 0x26846c: 0x0  nop
    ctx->pc = 0x26846cu;
    // NOP
label_268470:
    // 0x268470: 0x125dd  .word       0x000125DD                   # dmultu      $zero, $at # 000025C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268470u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x268470 raw=0x000125DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268474:
    // 0x268474: 0xbff0  tge         $zero, $zero, 767
    ctx->pc = 0x268474u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268478:
    // 0x268478: 0x0  nop
    ctx->pc = 0x268478u;
    // NOP
label_26847c:
    // 0x26847c: 0x0  nop
    ctx->pc = 0x26847cu;
    // NOP
label_268480:
    // 0x268480: 0x125f5  .word       0x000125F5                   # INVALID     $zero, $at, 0x25F5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268480u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x268480 raw=0x000125F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268484:
    // 0x268484: 0x5060  .word       0x00005060                   # add         $t2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268484u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_268488:
    // 0x268488: 0x0  nop
    ctx->pc = 0x268488u;
    // NOP
label_26848c:
    // 0x26848c: 0x0  nop
    ctx->pc = 0x26848cu;
    // NOP
label_268490:
    // 0x268490: 0x12600  sll         $a0, $at, 24
    ctx->pc = 0x268490u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 24));
label_268494:
    // 0x268494: 0x5fb0  tge         $zero, $zero, 382
    ctx->pc = 0x268494u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268498:
    // 0x268498: 0x0  nop
    ctx->pc = 0x268498u;
    // NOP
label_26849c:
    // 0x26849c: 0x0  nop
    ctx->pc = 0x26849cu;
    // NOP
label_2684a0:
    // 0x2684a0: 0x1260c  .word       0x0001260C                   # syscall     152 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2684a0u;
    ctx->pc = 0x2684A4u;
runtime->handleSyscall(rdram, ctx, 0x498u);
label_2684a4:
    // 0x2684a4: 0xa5d0  .word       0x0000A5D0                   # mfhi        $s4 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2684a4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_2684a8:
    // 0x2684a8: 0x0  nop
    ctx->pc = 0x2684a8u;
    // NOP
label_2684ac:
    // 0x2684ac: 0x0  nop
    ctx->pc = 0x2684acu;
    // NOP
label_2684b0:
    // 0x2684b0: 0x12621  .word       0x00012621                   # addu        $a0, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2684b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2684b4:
    // 0x2684b4: 0xc800  sll         $t9, $zero, 0
    ctx->pc = 0x2684b4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2684b8:
    // 0x2684b8: 0x0  nop
    ctx->pc = 0x2684b8u;
    // NOP
label_2684bc:
    // 0x2684bc: 0x0  nop
    ctx->pc = 0x2684bcu;
    // NOP
label_2684c0:
    // 0x2684c0: 0x1263a  dsrl        $a0, $at, 24
    ctx->pc = 0x2684c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) >> 24);
label_2684c4:
    // 0x2684c4: 0xac40  sll         $s5, $zero, 17
    ctx->pc = 0x2684c4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2684c8:
    // 0x2684c8: 0x0  nop
    ctx->pc = 0x2684c8u;
    // NOP
label_2684cc:
    // 0x2684cc: 0x0  nop
    ctx->pc = 0x2684ccu;
    // NOP
label_2684d0:
    // 0x2684d0: 0x12650  .word       0x00012650                   # mfhi        $a0 # 00010640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2684d0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2684d4:
    // 0x2684d4: 0xaaa0  .word       0x0000AAA0                   # add         $s5, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2684d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_2684d8:
    // 0x2684d8: 0x0  nop
    ctx->pc = 0x2684d8u;
    // NOP
label_2684dc:
    // 0x2684dc: 0x0  nop
    ctx->pc = 0x2684dcu;
    // NOP
label_2684e0:
    // 0x2684e0: 0x12666  .word       0x00012666                   # xor         $a0, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2684e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_2684e4:
    // 0x2684e4: 0x7d30  tge         $zero, $zero, 500
    ctx->pc = 0x2684e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2684e8:
    // 0x2684e8: 0x0  nop
    ctx->pc = 0x2684e8u;
    // NOP
label_2684ec:
    // 0x2684ec: 0x0  nop
    ctx->pc = 0x2684ecu;
    // NOP
label_2684f0:
    // 0x2684f0: 0x12676  tne         $zero, $at, 153
    ctx->pc = 0x2684f0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2684f4:
    // 0x2684f4: 0xbb80  sll         $s7, $zero, 14
    ctx->pc = 0x2684f4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_2684f8:
    // 0x2684f8: 0x0  nop
    ctx->pc = 0x2684f8u;
    // NOP
label_2684fc:
    // 0x2684fc: 0x0  nop
    ctx->pc = 0x2684fcu;
    // NOP
label_268500:
    // 0x268500: 0x1268e  .word       0x0001268E                   # INVALID     $zero, $at, 0x268E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268500u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x268500 raw=0x0001268E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268504:
    // 0x268504: 0x8ab0  tge         $zero, $zero, 554
    ctx->pc = 0x268504u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268508:
    // 0x268508: 0x0  nop
    ctx->pc = 0x268508u;
    // NOP
label_26850c:
    // 0x26850c: 0x0  nop
    ctx->pc = 0x26850cu;
    // NOP
label_268510:
    // 0x268510: 0x126a0  .word       0x000126A0                   # add         $a0, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268510u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_268514:
    // 0x268514: 0xb1a0  .word       0x0000B1A0                   # add         $s6, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268514u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_268518:
    // 0x268518: 0x0  nop
    ctx->pc = 0x268518u;
    // NOP
label_26851c:
    // 0x26851c: 0x0  nop
    ctx->pc = 0x26851cu;
    // NOP
label_268520:
    // 0x268520: 0x126b7  .word       0x000126B7                   # INVALID     $zero, $at, 0x26B7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268520u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x268520 raw=0x000126B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268524:
    // 0x268524: 0xb100  sll         $s6, $zero, 4
    ctx->pc = 0x268524u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_268528:
    // 0x268528: 0x0  nop
    ctx->pc = 0x268528u;
    // NOP
label_26852c:
    // 0x26852c: 0x0  nop
    ctx->pc = 0x26852cu;
    // NOP
label_268530:
    // 0x268530: 0x126ce  .word       0x000126CE                   # INVALID     $zero, $at, 0x26CE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268530u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x268530 raw=0x000126CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268534:
    // 0x268534: 0xcfe0  .word       0x0000CFE0                   # add         $t9, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268534u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_268538:
    // 0x268538: 0x0  nop
    ctx->pc = 0x268538u;
    // NOP
label_26853c:
    // 0x26853c: 0x0  nop
    ctx->pc = 0x26853cu;
    // NOP
label_268540:
    // 0x268540: 0x126e8  .word       0x000126E8                   # mfsa        $a0 # 000106C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x268540u;
    SET_GPR_U32(ctx, 4, ctx->sa);
label_268544:
    // 0x268544: 0x9f50  .word       0x00009F50                   # mfhi        $s3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268544u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_268548:
    // 0x268548: 0x0  nop
    ctx->pc = 0x268548u;
    // NOP
label_26854c:
    // 0x26854c: 0x0  nop
    ctx->pc = 0x26854cu;
    // NOP
label_268550:
    // 0x268550: 0x126fc  dsll32      $a0, $at, 27
    ctx->pc = 0x268550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) << (32 + 27));
label_268554:
    // 0x268554: 0xcb70  tge         $zero, $zero, 813
    ctx->pc = 0x268554u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268558:
    // 0x268558: 0x0  nop
    ctx->pc = 0x268558u;
    // NOP
label_26855c:
    // 0x26855c: 0x0  nop
    ctx->pc = 0x26855cu;
    // NOP
label_268560:
    // 0x268560: 0x12716  .word       0x00012716                   # dsrlv       $a0, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_268564:
    // 0x268564: 0x7da0  .word       0x00007DA0                   # add         $t7, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268564u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_268568:
    // 0x268568: 0x0  nop
    ctx->pc = 0x268568u;
    // NOP
label_26856c:
    // 0x26856c: 0x0  nop
    ctx->pc = 0x26856cu;
    // NOP
label_268570:
    // 0x268570: 0x12726  .word       0x00012726                   # xor         $a0, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_268574:
    // 0x268574: 0x81c0  sll         $s0, $zero, 7
    ctx->pc = 0x268574u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_268578:
    // 0x268578: 0x0  nop
    ctx->pc = 0x268578u;
    // NOP
label_26857c:
    // 0x26857c: 0x0  nop
    ctx->pc = 0x26857cu;
    // NOP
label_268580:
    // 0x268580: 0x12737  .word       0x00012737                   # INVALID     $zero, $at, 0x2737 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268580u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x268580 raw=0x00012737"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268584:
    // 0x268584: 0x50c0  sll         $t2, $zero, 3
    ctx->pc = 0x268584u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_268588:
    // 0x268588: 0x0  nop
    ctx->pc = 0x268588u;
    // NOP
label_26858c:
    // 0x26858c: 0x0  nop
    ctx->pc = 0x26858cu;
    // NOP
label_268590:
    // 0x268590: 0x12742  srl         $a0, $at, 29
    ctx->pc = 0x268590u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 1), 29));
label_268594:
    // 0x268594: 0x7cf0  tge         $zero, $zero, 499
    ctx->pc = 0x268594u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268598:
    // 0x268598: 0x0  nop
    ctx->pc = 0x268598u;
    // NOP
label_26859c:
    // 0x26859c: 0x0  nop
    ctx->pc = 0x26859cu;
    // NOP
label_2685a0:
    // 0x2685a0: 0x12752  .word       0x00012752                   # mflo        $a0 # 00010740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2685a0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_2685a4:
    // 0x2685a4: 0x7860  .word       0x00007860                   # add         $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2685a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2685a8:
    // 0x2685a8: 0x0  nop
    ctx->pc = 0x2685a8u;
    // NOP
label_2685ac:
    // 0x2685ac: 0x0  nop
    ctx->pc = 0x2685acu;
    // NOP
label_2685b0:
    // 0x2685b0: 0x12762  .word       0x00012762                   # neg         $a0, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2685b0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2685b4:
    // 0x2685b4: 0x7a00  sll         $t7, $zero, 8
    ctx->pc = 0x2685b4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_2685b8:
    // 0x2685b8: 0x0  nop
    ctx->pc = 0x2685b8u;
    // NOP
label_2685bc:
    // 0x2685bc: 0x0  nop
    ctx->pc = 0x2685bcu;
    // NOP
label_2685c0:
    // 0x2685c0: 0x12772  tlt         $zero, $at, 157
    ctx->pc = 0x2685c0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2685c4:
    // 0x2685c4: 0x9640  sll         $s2, $zero, 25
    ctx->pc = 0x2685c4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_2685c8:
    // 0x2685c8: 0x0  nop
    ctx->pc = 0x2685c8u;
    // NOP
label_2685cc:
    // 0x2685cc: 0x0  nop
    ctx->pc = 0x2685ccu;
    // NOP
label_2685d0:
    // 0x2685d0: 0x12785  .word       0x00012785                   # INVALID     $zero, $at, 0x2785 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2685d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2685D0 raw=0x00012785"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2685d4:
    // 0x2685d4: 0xe040  sll         $gp, $zero, 1
    ctx->pc = 0x2685d4u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_2685d8:
    // 0x2685d8: 0x0  nop
    ctx->pc = 0x2685d8u;
    // NOP
label_2685dc:
    // 0x2685dc: 0x0  nop
    ctx->pc = 0x2685dcu;
    // NOP
label_2685e0:
    // 0x2685e0: 0x127a2  .word       0x000127A2                   # neg         $a0, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2685e0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2685e4:
    // 0x2685e4: 0x76c0  sll         $t6, $zero, 27
    ctx->pc = 0x2685e4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_2685e8:
    // 0x2685e8: 0x0  nop
    ctx->pc = 0x2685e8u;
    // NOP
label_2685ec:
    // 0x2685ec: 0x0  nop
    ctx->pc = 0x2685ecu;
    // NOP
label_2685f0:
    // 0x2685f0: 0x127b1  tgeu        $zero, $at, 158
    ctx->pc = 0x2685f0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2685f4:
    // 0x2685f4: 0x6c20  .word       0x00006C20                   # add         $t5, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2685f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2685f8:
    // 0x2685f8: 0x0  nop
    ctx->pc = 0x2685f8u;
    // NOP
label_2685fc:
    // 0x2685fc: 0x0  nop
    ctx->pc = 0x2685fcu;
    // NOP
label_268600:
    // 0x268600: 0x127bf  dsra32      $a0, $at, 30
    ctx->pc = 0x268600u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 1) >> (32 + 30));
label_268604:
    // 0x268604: 0x9480  sll         $s2, $zero, 18
    ctx->pc = 0x268604u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_268608:
    // 0x268608: 0x0  nop
    ctx->pc = 0x268608u;
    // NOP
label_26860c:
    // 0x26860c: 0x0  nop
    ctx->pc = 0x26860cu;
    // NOP
label_268610:
    // 0x268610: 0x127d2  .word       0x000127D2                   # mflo        $a0 # 000107C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268610u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_268614:
    // 0x268614: 0x7a30  tge         $zero, $zero, 488
    ctx->pc = 0x268614u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268618:
    // 0x268618: 0x0  nop
    ctx->pc = 0x268618u;
    // NOP
label_26861c:
    // 0x26861c: 0x0  nop
    ctx->pc = 0x26861cu;
    // NOP
label_268620:
    // 0x268620: 0x127e2  .word       0x000127E2                   # neg         $a0, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268620u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_268624:
    // 0x268624: 0x8dc0  sll         $s1, $zero, 23
    ctx->pc = 0x268624u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_268628:
    // 0x268628: 0x0  nop
    ctx->pc = 0x268628u;
    // NOP
label_26862c:
    // 0x26862c: 0x0  nop
    ctx->pc = 0x26862cu;
    // NOP
label_268630:
    // 0x268630: 0x127f4  teq         $zero, $at, 159
    ctx->pc = 0x268630u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_268634:
    // 0x268634: 0x7020  add         $t6, $zero, $zero
    ctx->pc = 0x268634u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_268638:
    // 0x268638: 0x0  nop
    ctx->pc = 0x268638u;
    // NOP
label_26863c:
    // 0x26863c: 0x0  nop
    ctx->pc = 0x26863cu;
    // NOP
label_268640:
    // 0x268640: 0x12803  sra         $a1, $at, 0
    ctx->pc = 0x268640u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 1), 0));
label_268644:
    // 0x268644: 0x5f70  tge         $zero, $zero, 381
    ctx->pc = 0x268644u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268648:
    // 0x268648: 0x0  nop
    ctx->pc = 0x268648u;
    // NOP
label_26864c:
    // 0x26864c: 0x0  nop
    ctx->pc = 0x26864cu;
    // NOP
label_268650:
    // 0x268650: 0x1280f  .word       0x0001280F                   # sync # 00012800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268650u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_268654:
    // 0x268654: 0x8850  .word       0x00008850                   # mfhi        $s1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268654u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_268658:
    // 0x268658: 0x0  nop
    ctx->pc = 0x268658u;
    // NOP
label_26865c:
    // 0x26865c: 0x0  nop
    ctx->pc = 0x26865cu;
    // NOP
label_268660:
    // 0x268660: 0x12821  addu        $a1, $zero, $at
    ctx->pc = 0x268660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_268664:
    // 0x268664: 0x54e0  .word       0x000054E0                   # add         $t2, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268664u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_268668:
    // 0x268668: 0x0  nop
    ctx->pc = 0x268668u;
    // NOP
label_26866c:
    // 0x26866c: 0x0  nop
    ctx->pc = 0x26866cu;
    // NOP
label_268670:
    // 0x268670: 0x1282c  dadd        $a1, $zero, $at
    ctx->pc = 0x268670u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_268674:
    // 0x268674: 0x7680  sll         $t6, $zero, 26
    ctx->pc = 0x268674u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_268678:
    // 0x268678: 0x0  nop
    ctx->pc = 0x268678u;
    // NOP
label_26867c:
    // 0x26867c: 0x0  nop
    ctx->pc = 0x26867cu;
    // NOP
label_268680:
    // 0x268680: 0x1283b  dsra        $a1, $at, 0
    ctx->pc = 0x268680u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 1) >> 0);
label_268684:
    // 0x268684: 0x7cd0  .word       0x00007CD0                   # mfhi        $t7 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268684u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_268688:
    // 0x268688: 0x0  nop
    ctx->pc = 0x268688u;
    // NOP
label_26868c:
    // 0x26868c: 0x0  nop
    ctx->pc = 0x26868cu;
    // NOP
label_268690:
    // 0x268690: 0x1284b  .word       0x0001284B                   # movn        $a1, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268690u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_268694:
    // 0x268694: 0x98c0  sll         $s3, $zero, 3
    ctx->pc = 0x268694u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_268698:
    // 0x268698: 0x0  nop
    ctx->pc = 0x268698u;
    // NOP
label_26869c:
    // 0x26869c: 0x0  nop
    ctx->pc = 0x26869cu;
    // NOP
label_2686a0:
    // 0x2686a0: 0x1285f  .word       0x0001285F                   # ddivu       $a1, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2686a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2686A0 raw=0x0001285F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2686a4:
    // 0x2686a4: 0x7c50  .word       0x00007C50                   # mfhi        $t7 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2686a4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_2686a8:
    // 0x2686a8: 0x0  nop
    ctx->pc = 0x2686a8u;
    // NOP
label_2686ac:
    // 0x2686ac: 0x0  nop
    ctx->pc = 0x2686acu;
    // NOP
label_2686b0:
    // 0x2686b0: 0x1286f  .word       0x0001286F                   # dsubu       $a1, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2686b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_2686b4:
    // 0x2686b4: 0x9c80  sll         $s3, $zero, 18
    ctx->pc = 0x2686b4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_2686b8:
    // 0x2686b8: 0x0  nop
    ctx->pc = 0x2686b8u;
    // NOP
label_2686bc:
    // 0x2686bc: 0x0  nop
    ctx->pc = 0x2686bcu;
    // NOP
label_2686c0:
    // 0x2686c0: 0x12883  sra         $a1, $at, 2
    ctx->pc = 0x2686c0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 1), 2));
label_2686c4:
    // 0x2686c4: 0xbde0  .word       0x0000BDE0                   # add         $s7, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2686c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_2686c8:
    // 0x2686c8: 0x0  nop
    ctx->pc = 0x2686c8u;
    // NOP
label_2686cc:
    // 0x2686cc: 0x0  nop
    ctx->pc = 0x2686ccu;
    // NOP
label_2686d0:
    // 0x2686d0: 0x1289b  .word       0x0001289B                   # divu        $a1, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2686d0u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2686d4:
    // 0x2686d4: 0xc5c0  sll         $t8, $zero, 23
    ctx->pc = 0x2686d4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_2686d8:
    // 0x2686d8: 0x0  nop
    ctx->pc = 0x2686d8u;
    // NOP
label_2686dc:
    // 0x2686dc: 0x0  nop
    ctx->pc = 0x2686dcu;
    // NOP
label_2686e0:
    // 0x2686e0: 0x128b4  teq         $zero, $at, 162
    ctx->pc = 0x2686e0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2686e4:
    // 0x2686e4: 0x7330  tge         $zero, $zero, 460
    ctx->pc = 0x2686e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2686e8:
    // 0x2686e8: 0x0  nop
    ctx->pc = 0x2686e8u;
    // NOP
label_2686ec:
    // 0x2686ec: 0x0  nop
    ctx->pc = 0x2686ecu;
    // NOP
label_2686f0:
    // 0x2686f0: 0x128c3  sra         $a1, $at, 3
    ctx->pc = 0x2686f0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 1), 3));
label_2686f4:
    // 0x2686f4: 0xc900  sll         $t9, $zero, 4
    ctx->pc = 0x2686f4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_2686f8:
    // 0x2686f8: 0x0  nop
    ctx->pc = 0x2686f8u;
    // NOP
label_2686fc:
    // 0x2686fc: 0x0  nop
    ctx->pc = 0x2686fcu;
    // NOP
label_268700:
    // 0x268700: 0x128dd  .word       0x000128DD                   # dmultu      $zero, $at # 000028C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268700u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x268700 raw=0x000128DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268704:
    // 0x268704: 0x8e30  tge         $zero, $zero, 568
    ctx->pc = 0x268704u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268708:
    // 0x268708: 0x0  nop
    ctx->pc = 0x268708u;
    // NOP
label_26870c:
    // 0x26870c: 0x0  nop
    ctx->pc = 0x26870cu;
    // NOP
label_268710:
    // 0x268710: 0x128ef  .word       0x000128EF                   # dsubu       $a1, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268710u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_268714:
    // 0x268714: 0x82b0  tge         $zero, $zero, 522
    ctx->pc = 0x268714u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268718:
    // 0x268718: 0x0  nop
    ctx->pc = 0x268718u;
    // NOP
label_26871c:
    // 0x26871c: 0x0  nop
    ctx->pc = 0x26871cu;
    // NOP
label_268720:
    // 0x268720: 0x12900  sll         $a1, $at, 4
    ctx->pc = 0x268720u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 1), 4));
label_268724:
    // 0x268724: 0x9b20  .word       0x00009B20                   # add         $s3, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268724u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_268728:
    // 0x268728: 0x0  nop
    ctx->pc = 0x268728u;
    // NOP
label_26872c:
    // 0x26872c: 0x0  nop
    ctx->pc = 0x26872cu;
    // NOP
label_268730:
    // 0x268730: 0x12914  .word       0x00012914                   # dsllv       $a1, $at, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268730u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_268734:
    // 0x268734: 0xdff0  tge         $zero, $zero, 895
    ctx->pc = 0x268734u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268738:
    // 0x268738: 0x0  nop
    ctx->pc = 0x268738u;
    // NOP
label_26873c:
    // 0x26873c: 0x0  nop
    ctx->pc = 0x26873cu;
    // NOP
label_268740:
    // 0x268740: 0x12930  tge         $zero, $at, 164
    ctx->pc = 0x268740u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_268744:
    // 0x268744: 0xc470  tge         $zero, $zero, 785
    ctx->pc = 0x268744u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268748:
    // 0x268748: 0x0  nop
    ctx->pc = 0x268748u;
    // NOP
label_26874c:
    // 0x26874c: 0x0  nop
    ctx->pc = 0x26874cu;
    // NOP
label_268750:
    // 0x268750: 0x12949  .word       0x00012949                   # jalr        $a1, $zero # 00010140 <InstrIdType: CPU_SPECIAL>
label_268754:
    if (ctx->pc == 0x268754u) {
        ctx->pc = 0x268754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268750u;
        // 0x268754: 0x6110  .word       0x00006110                   # mfhi        $t4 # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x268758u;
        goto label_268758;
    }
    ctx->pc = 0x268750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 5, 0x268758u);
        ctx->pc = 0x268754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268750u;
        // 0x268754: 0x6110  .word       0x00006110                   # mfhi        $t4 # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268750u, 0x268758u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x268758u;
label_268758:
    // 0x268758: 0x0  nop
    ctx->pc = 0x268758u;
    // NOP
label_26875c:
    // 0x26875c: 0x0  nop
    ctx->pc = 0x26875cu;
    // NOP
label_268760:
    // 0x268760: 0x12956  .word       0x00012956                   # dsrlv       $a1, $at, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268760u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_268764:
    // 0x268764: 0x6390  .word       0x00006390                   # mfhi        $t4 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268764u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_268768:
    // 0x268768: 0x0  nop
    ctx->pc = 0x268768u;
    // NOP
label_26876c:
    // 0x26876c: 0x0  nop
    ctx->pc = 0x26876cu;
    // NOP
label_268770:
    // 0x268770: 0x12963  .word       0x00012963                   # negu        $a1, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268770u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_268774:
    // 0x268774: 0x6350  .word       0x00006350                   # mfhi        $t4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268774u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_268778:
    // 0x268778: 0x0  nop
    ctx->pc = 0x268778u;
    // NOP
label_26877c:
    // 0x26877c: 0x0  nop
    ctx->pc = 0x26877cu;
    // NOP
label_268780:
    // 0x268780: 0x12970  tge         $zero, $at, 165
    ctx->pc = 0x268780u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_268784:
    // 0x268784: 0x45e0  .word       0x000045E0                   # add         $t0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268784u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_268788:
    // 0x268788: 0x0  nop
    ctx->pc = 0x268788u;
    // NOP
label_26878c:
    // 0x26878c: 0x0  nop
    ctx->pc = 0x26878cu;
    // NOP
label_268790:
    // 0x268790: 0x12979  .word       0x00012979                   # INVALID     $zero, $at, 0x2979 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268790u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x268790 raw=0x00012979"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268794:
    // 0x268794: 0x7950  .word       0x00007950                   # mfhi        $t7 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268794u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_268798:
    // 0x268798: 0x0  nop
    ctx->pc = 0x268798u;
    // NOP
label_26879c:
    // 0x26879c: 0x0  nop
    ctx->pc = 0x26879cu;
    // NOP
label_2687a0:
    // 0x2687a0: 0x12989  .word       0x00012989                   # jalr        $a1, $zero # 00010180 <InstrIdType: CPU_SPECIAL>
label_2687a4:
    if (ctx->pc == 0x2687A4u) {
        ctx->pc = 0x2687A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2687A0u;
        // 0x2687a4: 0x7500  sll         $t6, $zero, 20 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2687A8u;
        goto label_2687a8;
    }
    ctx->pc = 0x2687A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 5, 0x2687A8u);
        ctx->pc = 0x2687A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2687A0u;
        // 0x2687a4: 0x7500  sll         $t6, $zero, 20 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2687A0u, 0x2687A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2687A8u;
label_2687a8:
    // 0x2687a8: 0x0  nop
    ctx->pc = 0x2687a8u;
    // NOP
label_2687ac:
    // 0x2687ac: 0x0  nop
    ctx->pc = 0x2687acu;
    // NOP
label_2687b0:
    // 0x2687b0: 0x12998  .word       0x00012998                   # mult        $a1, $zero, $at # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2687b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2687b4:
    // 0x2687b4: 0x5c70  tge         $zero, $zero, 369
    ctx->pc = 0x2687b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2687b8:
    // 0x2687b8: 0x0  nop
    ctx->pc = 0x2687b8u;
    // NOP
label_2687bc:
    // 0x2687bc: 0x0  nop
    ctx->pc = 0x2687bcu;
    // NOP
label_2687c0:
    // 0x2687c0: 0x129a4  .word       0x000129A4                   # and         $a1, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2687c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_2687c4:
    // 0x2687c4: 0x8790  .word       0x00008790                   # mfhi        $s0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2687c4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_2687c8:
    // 0x2687c8: 0x0  nop
    ctx->pc = 0x2687c8u;
    // NOP
label_2687cc:
    // 0x2687cc: 0x0  nop
    ctx->pc = 0x2687ccu;
    // NOP
label_2687d0:
    // 0x2687d0: 0x129b5  .word       0x000129B5                   # INVALID     $zero, $at, 0x29B5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2687d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2687D0 raw=0x000129B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2687d4:
    // 0x2687d4: 0xa950  .word       0x0000A950                   # mfhi        $s5 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2687d4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_2687d8:
    // 0x2687d8: 0x0  nop
    ctx->pc = 0x2687d8u;
    // NOP
label_2687dc:
    // 0x2687dc: 0x0  nop
    ctx->pc = 0x2687dcu;
    // NOP
label_2687e0:
    // 0x2687e0: 0x129cb  .word       0x000129CB                   # movn        $a1, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2687e0u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_2687e4:
    // 0x2687e4: 0x8100  sll         $s0, $zero, 4
    ctx->pc = 0x2687e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_2687e8:
    // 0x2687e8: 0x0  nop
    ctx->pc = 0x2687e8u;
    // NOP
label_2687ec:
    // 0x2687ec: 0x0  nop
    ctx->pc = 0x2687ecu;
    // NOP
label_2687f0:
    // 0x2687f0: 0x129dc  .word       0x000129DC                   # dmult       $zero, $at # 000029C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2687f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2687F0 raw=0x000129DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2687f4:
    // 0x2687f4: 0xa500  sll         $s4, $zero, 20
    ctx->pc = 0x2687f4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_2687f8:
    // 0x2687f8: 0x0  nop
    ctx->pc = 0x2687f8u;
    // NOP
label_2687fc:
    // 0x2687fc: 0x0  nop
    ctx->pc = 0x2687fcu;
    // NOP
label_268800:
    // 0x268800: 0x129f1  tgeu        $zero, $at, 167
    ctx->pc = 0x268800u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_268804:
    // 0x268804: 0xa550  .word       0x0000A550                   # mfhi        $s4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268804u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_268808:
    // 0x268808: 0x0  nop
    ctx->pc = 0x268808u;
    // NOP
label_26880c:
    // 0x26880c: 0x0  nop
    ctx->pc = 0x26880cu;
    // NOP
label_268810:
    // 0x268810: 0x12a06  .word       0x00012A06                   # srlv        $a1, $at, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268810u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_268814:
    // 0x268814: 0x8950  .word       0x00008950                   # mfhi        $s1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268814u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_268818:
    // 0x268818: 0x0  nop
    ctx->pc = 0x268818u;
    // NOP
label_26881c:
    // 0x26881c: 0x0  nop
    ctx->pc = 0x26881cu;
    // NOP
label_268820:
    // 0x268820: 0x12a18  .word       0x00012A18                   # mult        $a1, $zero, $at # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x268820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_268824:
    // 0x268824: 0x6fe0  .word       0x00006FE0                   # add         $t5, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268824u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_268828:
    // 0x268828: 0x0  nop
    ctx->pc = 0x268828u;
    // NOP
label_26882c:
    // 0x26882c: 0x0  nop
    ctx->pc = 0x26882cu;
    // NOP
label_268830:
    // 0x268830: 0x12a26  .word       0x00012A26                   # xor         $a1, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268830u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_268834:
    // 0x268834: 0x6cc0  sll         $t5, $zero, 19
    ctx->pc = 0x268834u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_268838:
    // 0x268838: 0x0  nop
    ctx->pc = 0x268838u;
    // NOP
label_26883c:
    // 0x26883c: 0x0  nop
    ctx->pc = 0x26883cu;
    // NOP
label_268840:
    // 0x268840: 0x12a34  teq         $zero, $at, 168
    ctx->pc = 0x268840u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_268844:
    // 0x268844: 0x8f00  sll         $s1, $zero, 28
    ctx->pc = 0x268844u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_268848:
    // 0x268848: 0x0  nop
    ctx->pc = 0x268848u;
    // NOP
label_26884c:
    // 0x26884c: 0x0  nop
    ctx->pc = 0x26884cu;
    // NOP
label_268850:
    // 0x268850: 0x12a46  .word       0x00012A46                   # srlv        $a1, $at, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268850u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_268854:
    // 0x268854: 0x9fd0  .word       0x00009FD0                   # mfhi        $s3 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268854u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_268858:
    // 0x268858: 0x0  nop
    ctx->pc = 0x268858u;
    // NOP
label_26885c:
    // 0x26885c: 0x0  nop
    ctx->pc = 0x26885cu;
    // NOP
label_268860:
    // 0x268860: 0x12a5a  .word       0x00012A5A                   # div         $a1, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268860u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_268864:
    // 0x268864: 0xc870  tge         $zero, $zero, 801
    ctx->pc = 0x268864u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268868:
    // 0x268868: 0x0  nop
    ctx->pc = 0x268868u;
    // NOP
label_26886c:
    // 0x26886c: 0x0  nop
    ctx->pc = 0x26886cu;
    // NOP
label_268870:
    // 0x268870: 0x12a74  teq         $zero, $at, 169
    ctx->pc = 0x268870u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_268874:
    // 0x268874: 0xf580  sll         $fp, $zero, 22
    ctx->pc = 0x268874u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_268878:
    // 0x268878: 0x0  nop
    ctx->pc = 0x268878u;
    // NOP
label_26887c:
    // 0x26887c: 0x0  nop
    ctx->pc = 0x26887cu;
    // NOP
label_268880:
    // 0x268880: 0x12a93  .word       0x00012A93                   # mtlo        $zero # 00012A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268880u;
    ctx->lo = GPR_U64(ctx, 0);
label_268884:
    // 0x268884: 0x5850  .word       0x00005850                   # mfhi        $t3 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268884u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_268888:
    // 0x268888: 0x0  nop
    ctx->pc = 0x268888u;
    // NOP
label_26888c:
    // 0x26888c: 0x0  nop
    ctx->pc = 0x26888cu;
    // NOP
label_268890:
    // 0x268890: 0x12a9f  .word       0x00012A9F                   # ddivu       $a1, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268890u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x268890 raw=0x00012A9F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268894:
    // 0x268894: 0x7680  sll         $t6, $zero, 26
    ctx->pc = 0x268894u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_268898:
    // 0x268898: 0x0  nop
    ctx->pc = 0x268898u;
    // NOP
label_26889c:
    // 0x26889c: 0x0  nop
    ctx->pc = 0x26889cu;
    // NOP
label_2688a0:
    // 0x2688a0: 0x12aae  .word       0x00012AAE                   # dsub        $a1, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2688a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_2688a4:
    // 0x2688a4: 0x79c0  sll         $t7, $zero, 7
    ctx->pc = 0x2688a4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_2688a8:
    // 0x2688a8: 0x0  nop
    ctx->pc = 0x2688a8u;
    // NOP
label_2688ac:
    // 0x2688ac: 0x0  nop
    ctx->pc = 0x2688acu;
    // NOP
label_2688b0:
    // 0x2688b0: 0x12abe  dsrl32      $a1, $at, 10
    ctx->pc = 0x2688b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) >> (32 + 10));
label_2688b4:
    // 0x2688b4: 0x6c70  tge         $zero, $zero, 433
    ctx->pc = 0x2688b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2688b8:
    // 0x2688b8: 0x0  nop
    ctx->pc = 0x2688b8u;
    // NOP
label_2688bc:
    // 0x2688bc: 0x0  nop
    ctx->pc = 0x2688bcu;
    // NOP
label_2688c0:
    // 0x2688c0: 0x12acc  .word       0x00012ACC                   # syscall     171 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2688c0u;
    ctx->pc = 0x2688C4u;
runtime->handleSyscall(rdram, ctx, 0x4ABu);
label_2688c4:
    // 0x2688c4: 0xa220  .word       0x0000A220                   # add         $s4, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2688c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_2688c8:
    // 0x2688c8: 0x0  nop
    ctx->pc = 0x2688c8u;
    // NOP
label_2688cc:
    // 0x2688cc: 0x0  nop
    ctx->pc = 0x2688ccu;
    // NOP
label_2688d0:
    // 0x2688d0: 0x12ae1  .word       0x00012AE1                   # addu        $a1, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2688d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2688d4:
    // 0x2688d4: 0x9790  .word       0x00009790                   # mfhi        $s2 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2688d4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2688d8:
    // 0x2688d8: 0x0  nop
    ctx->pc = 0x2688d8u;
    // NOP
label_2688dc:
    // 0x2688dc: 0x0  nop
    ctx->pc = 0x2688dcu;
    // NOP
label_2688e0:
    // 0x2688e0: 0x12af4  teq         $zero, $at, 171
    ctx->pc = 0x2688e0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2688e4:
    // 0x2688e4: 0xf490  .word       0x0000F490                   # mfhi        $fp # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2688e4u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_2688e8:
    // 0x2688e8: 0x0  nop
    ctx->pc = 0x2688e8u;
    // NOP
label_2688ec:
    // 0x2688ec: 0x0  nop
    ctx->pc = 0x2688ecu;
    // NOP
label_2688f0:
    // 0x2688f0: 0x12b13  .word       0x00012B13                   # mtlo        $zero # 00012B00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2688f0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2688f4:
    // 0x2688f4: 0xb7c0  sll         $s6, $zero, 31
    ctx->pc = 0x2688f4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_2688f8:
    // 0x2688f8: 0x0  nop
    ctx->pc = 0x2688f8u;
    // NOP
label_2688fc:
    // 0x2688fc: 0x0  nop
    ctx->pc = 0x2688fcu;
    // NOP
label_268900:
    // 0x268900: 0x12b2a  .word       0x00012B2A                   # slt         $a1, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268900u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_268904:
    // 0x268904: 0x9570  tge         $zero, $zero, 597
    ctx->pc = 0x268904u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268908:
    // 0x268908: 0x0  nop
    ctx->pc = 0x268908u;
    // NOP
label_26890c:
    // 0x26890c: 0x0  nop
    ctx->pc = 0x26890cu;
    // NOP
label_268910:
    // 0x268910: 0x12b3d  .word       0x00012B3D                   # INVALID     $zero, $at, 0x2B3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268910u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x268910 raw=0x00012B3D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268914:
    // 0x268914: 0xb600  sll         $s6, $zero, 24
    ctx->pc = 0x268914u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_268918:
    // 0x268918: 0x0  nop
    ctx->pc = 0x268918u;
    // NOP
label_26891c:
    // 0x26891c: 0x0  nop
    ctx->pc = 0x26891cu;
    // NOP
label_268920:
    // 0x268920: 0x12b54  .word       0x00012B54                   # dsllv       $a1, $at, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268920u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_268924:
    // 0x268924: 0x88d0  .word       0x000088D0                   # mfhi        $s1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268924u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_268928:
    // 0x268928: 0x0  nop
    ctx->pc = 0x268928u;
    // NOP
label_26892c:
    // 0x26892c: 0x0  nop
    ctx->pc = 0x26892cu;
    // NOP
label_268930:
    // 0x268930: 0x12b66  .word       0x00012B66                   # xor         $a1, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268930u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_268934:
    // 0x268934: 0xb470  tge         $zero, $zero, 721
    ctx->pc = 0x268934u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268938:
    // 0x268938: 0x0  nop
    ctx->pc = 0x268938u;
    // NOP
label_26893c:
    // 0x26893c: 0x0  nop
    ctx->pc = 0x26893cu;
    // NOP
label_268940:
    // 0x268940: 0x12b7d  .word       0x00012B7D                   # INVALID     $zero, $at, 0x2B7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268940u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x268940 raw=0x00012B7D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268944:
    // 0x268944: 0x5500  sll         $t2, $zero, 20
    ctx->pc = 0x268944u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_268948:
    // 0x268948: 0x0  nop
    ctx->pc = 0x268948u;
    // NOP
label_26894c:
    // 0x26894c: 0x0  nop
    ctx->pc = 0x26894cu;
    // NOP
label_268950:
    // 0x268950: 0x12b88  .word       0x00012B88                   # jr          $zero # 00012B80 <InstrIdType: CPU_SPECIAL>
label_268954:
    if (ctx->pc == 0x268954u) {
        ctx->pc = 0x268954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268950u;
        // 0x268954: 0x78c0  sll         $t7, $zero, 3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268958u;
        goto label_268958;
    }
    ctx->pc = 0x268950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x268954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268950u;
        // 0x268954: 0x78c0  sll         $t7, $zero, 3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268950u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x268958u;
label_268958:
    // 0x268958: 0x0  nop
    ctx->pc = 0x268958u;
    // NOP
label_26895c:
    // 0x26895c: 0x0  nop
    ctx->pc = 0x26895cu;
    // NOP
label_268960:
    // 0x268960: 0x12b98  .word       0x00012B98                   # mult        $a1, $zero, $at # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x268960u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_268964:
    // 0x268964: 0x5390  .word       0x00005390                   # mfhi        $t2 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268964u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_268968:
    // 0x268968: 0x0  nop
    ctx->pc = 0x268968u;
    // NOP
label_26896c:
    // 0x26896c: 0x0  nop
    ctx->pc = 0x26896cu;
    // NOP
label_268970:
    // 0x268970: 0x12ba3  .word       0x00012BA3                   # negu        $a1, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268970u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_268974:
    // 0x268974: 0x7420  .word       0x00007420                   # add         $t6, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268974u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_268978:
    // 0x268978: 0x0  nop
    ctx->pc = 0x268978u;
    // NOP
label_26897c:
    // 0x26897c: 0x0  nop
    ctx->pc = 0x26897cu;
    // NOP
label_268980:
    // 0x268980: 0x12bb2  tlt         $zero, $at, 174
    ctx->pc = 0x268980u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_268984:
    // 0x268984: 0x9c80  sll         $s3, $zero, 18
    ctx->pc = 0x268984u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_268988:
    // 0x268988: 0x0  nop
    ctx->pc = 0x268988u;
    // NOP
label_26898c:
    // 0x26898c: 0x0  nop
    ctx->pc = 0x26898cu;
    // NOP
label_268990:
    // 0x268990: 0x12bc6  .word       0x00012BC6                   # srlv        $a1, $at, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268990u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_268994:
    // 0x268994: 0x94c0  sll         $s2, $zero, 19
    ctx->pc = 0x268994u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_268998:
    // 0x268998: 0x0  nop
    ctx->pc = 0x268998u;
    // NOP
label_26899c:
    // 0x26899c: 0x0  nop
    ctx->pc = 0x26899cu;
    // NOP
label_2689a0:
    // 0x2689a0: 0x12bd9  .word       0x00012BD9                   # multu       $zero, $at # 00002BC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2689a0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2689a4:
    // 0x2689a4: 0x73a0  .word       0x000073A0                   # add         $t6, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2689a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2689a8:
    // 0x2689a8: 0x0  nop
    ctx->pc = 0x2689a8u;
    // NOP
label_2689ac:
    // 0x2689ac: 0x0  nop
    ctx->pc = 0x2689acu;
    // NOP
label_2689b0:
    // 0x2689b0: 0x12be8  .word       0x00012BE8                   # mfsa        $a1 # 000103C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2689b0u;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_2689b4:
    // 0x2689b4: 0x9140  sll         $s2, $zero, 5
    ctx->pc = 0x2689b4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_2689b8:
    // 0x2689b8: 0x0  nop
    ctx->pc = 0x2689b8u;
    // NOP
label_2689bc:
    // 0x2689bc: 0x0  nop
    ctx->pc = 0x2689bcu;
    // NOP
label_2689c0:
    // 0x2689c0: 0x12bfb  dsra        $a1, $at, 15
    ctx->pc = 0x2689c0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 1) >> 15);
label_2689c4:
    // 0x2689c4: 0x5dc0  sll         $t3, $zero, 23
    ctx->pc = 0x2689c4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_2689c8:
    // 0x2689c8: 0x0  nop
    ctx->pc = 0x2689c8u;
    // NOP
label_2689cc:
    // 0x2689cc: 0x0  nop
    ctx->pc = 0x2689ccu;
    // NOP
label_2689d0:
    // 0x2689d0: 0x12c07  .word       0x00012C07                   # srav        $a1, $at, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2689d0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2689d4:
    // 0x2689d4: 0x8100  sll         $s0, $zero, 4
    ctx->pc = 0x2689d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_2689d8:
    // 0x2689d8: 0x0  nop
    ctx->pc = 0x2689d8u;
    // NOP
label_2689dc:
    // 0x2689dc: 0x0  nop
    ctx->pc = 0x2689dcu;
    // NOP
label_2689e0:
    // 0x2689e0: 0x12c18  .word       0x00012C18                   # mult        $a1, $zero, $at # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2689e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2689e4:
    // 0x2689e4: 0x5b50  .word       0x00005B50                   # mfhi        $t3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2689e4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2689e8:
    // 0x2689e8: 0x0  nop
    ctx->pc = 0x2689e8u;
    // NOP
label_2689ec:
    // 0x2689ec: 0x0  nop
    ctx->pc = 0x2689ecu;
    // NOP
label_2689f0:
    // 0x2689f0: 0x12c24  .word       0x00012C24                   # and         $a1, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2689f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_2689f4:
    // 0x2689f4: 0xb4c0  sll         $s6, $zero, 19
    ctx->pc = 0x2689f4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_2689f8:
    // 0x2689f8: 0x0  nop
    ctx->pc = 0x2689f8u;
    // NOP
label_2689fc:
    // 0x2689fc: 0x0  nop
    ctx->pc = 0x2689fcu;
    // NOP
label_268a00:
    // 0x268a00: 0x12c3b  dsra        $a1, $at, 16
    ctx->pc = 0x268a00u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 1) >> 16);
label_268a04:
    // 0x268a04: 0x5be0  .word       0x00005BE0                   # add         $t3, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268a04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_268a08:
    // 0x268a08: 0x0  nop
    ctx->pc = 0x268a08u;
    // NOP
label_268a0c:
    // 0x268a0c: 0x0  nop
    ctx->pc = 0x268a0cu;
    // NOP
    ctx->pc = 0x268a10u;
    return;
}
