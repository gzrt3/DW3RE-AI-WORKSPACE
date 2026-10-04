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

// Function: FUN_0019b910
// Address: 0x19b910 - 0x29b9f0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b910_part516(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x297080u: goto label_297080;
        case 0x297084u: goto label_297084;
        case 0x297088u: goto label_297088;
        case 0x29708cu: goto label_29708c;
        case 0x297090u: goto label_297090;
        case 0x297094u: goto label_297094;
        case 0x297098u: goto label_297098;
        case 0x29709cu: goto label_29709c;
        case 0x2970a0u: goto label_2970a0;
        case 0x2970a4u: goto label_2970a4;
        case 0x2970a8u: goto label_2970a8;
        case 0x2970acu: goto label_2970ac;
        case 0x2970b0u: goto label_2970b0;
        case 0x2970b4u: goto label_2970b4;
        case 0x2970b8u: goto label_2970b8;
        case 0x2970bcu: goto label_2970bc;
        case 0x2970c0u: goto label_2970c0;
        case 0x2970c4u: goto label_2970c4;
        case 0x2970c8u: goto label_2970c8;
        case 0x2970ccu: goto label_2970cc;
        case 0x2970d0u: goto label_2970d0;
        case 0x2970d4u: goto label_2970d4;
        case 0x2970d8u: goto label_2970d8;
        case 0x2970dcu: goto label_2970dc;
        case 0x2970e0u: goto label_2970e0;
        case 0x2970e4u: goto label_2970e4;
        case 0x2970e8u: goto label_2970e8;
        case 0x2970ecu: goto label_2970ec;
        case 0x2970f0u: goto label_2970f0;
        case 0x2970f4u: goto label_2970f4;
        case 0x2970f8u: goto label_2970f8;
        case 0x2970fcu: goto label_2970fc;
        case 0x297100u: goto label_297100;
        case 0x297104u: goto label_297104;
        case 0x297108u: goto label_297108;
        case 0x29710cu: goto label_29710c;
        case 0x297110u: goto label_297110;
        case 0x297114u: goto label_297114;
        case 0x297118u: goto label_297118;
        case 0x29711cu: goto label_29711c;
        case 0x297120u: goto label_297120;
        case 0x297124u: goto label_297124;
        case 0x297128u: goto label_297128;
        case 0x29712cu: goto label_29712c;
        case 0x297130u: goto label_297130;
        case 0x297134u: goto label_297134;
        case 0x297138u: goto label_297138;
        case 0x29713cu: goto label_29713c;
        case 0x297140u: goto label_297140;
        case 0x297144u: goto label_297144;
        case 0x297148u: goto label_297148;
        case 0x29714cu: goto label_29714c;
        case 0x297150u: goto label_297150;
        case 0x297154u: goto label_297154;
        case 0x297158u: goto label_297158;
        case 0x29715cu: goto label_29715c;
        case 0x297160u: goto label_297160;
        case 0x297164u: goto label_297164;
        case 0x297168u: goto label_297168;
        case 0x29716cu: goto label_29716c;
        case 0x297170u: goto label_297170;
        case 0x297174u: goto label_297174;
        case 0x297178u: goto label_297178;
        case 0x29717cu: goto label_29717c;
        case 0x297180u: goto label_297180;
        case 0x297184u: goto label_297184;
        case 0x297188u: goto label_297188;
        case 0x29718cu: goto label_29718c;
        case 0x297190u: goto label_297190;
        case 0x297194u: goto label_297194;
        case 0x297198u: goto label_297198;
        case 0x29719cu: goto label_29719c;
        case 0x2971a0u: goto label_2971a0;
        case 0x2971a4u: goto label_2971a4;
        case 0x2971a8u: goto label_2971a8;
        case 0x2971acu: goto label_2971ac;
        case 0x2971b0u: goto label_2971b0;
        case 0x2971b4u: goto label_2971b4;
        case 0x2971b8u: goto label_2971b8;
        case 0x2971bcu: goto label_2971bc;
        case 0x2971c0u: goto label_2971c0;
        case 0x2971c4u: goto label_2971c4;
        case 0x2971c8u: goto label_2971c8;
        case 0x2971ccu: goto label_2971cc;
        case 0x2971d0u: goto label_2971d0;
        case 0x2971d4u: goto label_2971d4;
        case 0x2971d8u: goto label_2971d8;
        case 0x2971dcu: goto label_2971dc;
        case 0x2971e0u: goto label_2971e0;
        case 0x2971e4u: goto label_2971e4;
        case 0x2971e8u: goto label_2971e8;
        case 0x2971ecu: goto label_2971ec;
        case 0x2971f0u: goto label_2971f0;
        case 0x2971f4u: goto label_2971f4;
        case 0x2971f8u: goto label_2971f8;
        case 0x2971fcu: goto label_2971fc;
        case 0x297200u: goto label_297200;
        case 0x297204u: goto label_297204;
        case 0x297208u: goto label_297208;
        case 0x29720cu: goto label_29720c;
        case 0x297210u: goto label_297210;
        case 0x297214u: goto label_297214;
        case 0x297218u: goto label_297218;
        case 0x29721cu: goto label_29721c;
        case 0x297220u: goto label_297220;
        case 0x297224u: goto label_297224;
        case 0x297228u: goto label_297228;
        case 0x29722cu: goto label_29722c;
        case 0x297230u: goto label_297230;
        case 0x297234u: goto label_297234;
        case 0x297238u: goto label_297238;
        case 0x29723cu: goto label_29723c;
        case 0x297240u: goto label_297240;
        case 0x297244u: goto label_297244;
        case 0x297248u: goto label_297248;
        case 0x29724cu: goto label_29724c;
        case 0x297250u: goto label_297250;
        case 0x297254u: goto label_297254;
        case 0x297258u: goto label_297258;
        case 0x29725cu: goto label_29725c;
        case 0x297260u: goto label_297260;
        case 0x297264u: goto label_297264;
        case 0x297268u: goto label_297268;
        case 0x29726cu: goto label_29726c;
        case 0x297270u: goto label_297270;
        case 0x297274u: goto label_297274;
        case 0x297278u: goto label_297278;
        case 0x29727cu: goto label_29727c;
        case 0x297280u: goto label_297280;
        case 0x297284u: goto label_297284;
        case 0x297288u: goto label_297288;
        case 0x29728cu: goto label_29728c;
        case 0x297290u: goto label_297290;
        case 0x297294u: goto label_297294;
        case 0x297298u: goto label_297298;
        case 0x29729cu: goto label_29729c;
        case 0x2972a0u: goto label_2972a0;
        case 0x2972a4u: goto label_2972a4;
        case 0x2972a8u: goto label_2972a8;
        case 0x2972acu: goto label_2972ac;
        case 0x2972b0u: goto label_2972b0;
        case 0x2972b4u: goto label_2972b4;
        case 0x2972b8u: goto label_2972b8;
        case 0x2972bcu: goto label_2972bc;
        case 0x2972c0u: goto label_2972c0;
        case 0x2972c4u: goto label_2972c4;
        case 0x2972c8u: goto label_2972c8;
        case 0x2972ccu: goto label_2972cc;
        case 0x2972d0u: goto label_2972d0;
        case 0x2972d4u: goto label_2972d4;
        case 0x2972d8u: goto label_2972d8;
        case 0x2972dcu: goto label_2972dc;
        case 0x2972e0u: goto label_2972e0;
        case 0x2972e4u: goto label_2972e4;
        case 0x2972e8u: goto label_2972e8;
        case 0x2972ecu: goto label_2972ec;
        case 0x2972f0u: goto label_2972f0;
        case 0x2972f4u: goto label_2972f4;
        case 0x2972f8u: goto label_2972f8;
        case 0x2972fcu: goto label_2972fc;
        case 0x297300u: goto label_297300;
        case 0x297304u: goto label_297304;
        case 0x297308u: goto label_297308;
        case 0x29730cu: goto label_29730c;
        case 0x297310u: goto label_297310;
        case 0x297314u: goto label_297314;
        case 0x297318u: goto label_297318;
        case 0x29731cu: goto label_29731c;
        case 0x297320u: goto label_297320;
        case 0x297324u: goto label_297324;
        case 0x297328u: goto label_297328;
        case 0x29732cu: goto label_29732c;
        case 0x297330u: goto label_297330;
        case 0x297334u: goto label_297334;
        case 0x297338u: goto label_297338;
        case 0x29733cu: goto label_29733c;
        case 0x297340u: goto label_297340;
        case 0x297344u: goto label_297344;
        case 0x297348u: goto label_297348;
        case 0x29734cu: goto label_29734c;
        case 0x297350u: goto label_297350;
        case 0x297354u: goto label_297354;
        case 0x297358u: goto label_297358;
        case 0x29735cu: goto label_29735c;
        case 0x297360u: goto label_297360;
        case 0x297364u: goto label_297364;
        case 0x297368u: goto label_297368;
        case 0x29736cu: goto label_29736c;
        case 0x297370u: goto label_297370;
        case 0x297374u: goto label_297374;
        case 0x297378u: goto label_297378;
        case 0x29737cu: goto label_29737c;
        case 0x297380u: goto label_297380;
        case 0x297384u: goto label_297384;
        case 0x297388u: goto label_297388;
        case 0x29738cu: goto label_29738c;
        case 0x297390u: goto label_297390;
        case 0x297394u: goto label_297394;
        case 0x297398u: goto label_297398;
        case 0x29739cu: goto label_29739c;
        case 0x2973a0u: goto label_2973a0;
        case 0x2973a4u: goto label_2973a4;
        case 0x2973a8u: goto label_2973a8;
        case 0x2973acu: goto label_2973ac;
        case 0x2973b0u: goto label_2973b0;
        case 0x2973b4u: goto label_2973b4;
        case 0x2973b8u: goto label_2973b8;
        case 0x2973bcu: goto label_2973bc;
        case 0x2973c0u: goto label_2973c0;
        case 0x2973c4u: goto label_2973c4;
        case 0x2973c8u: goto label_2973c8;
        case 0x2973ccu: goto label_2973cc;
        case 0x2973d0u: goto label_2973d0;
        case 0x2973d4u: goto label_2973d4;
        case 0x2973d8u: goto label_2973d8;
        case 0x2973dcu: goto label_2973dc;
        case 0x2973e0u: goto label_2973e0;
        case 0x2973e4u: goto label_2973e4;
        case 0x2973e8u: goto label_2973e8;
        case 0x2973ecu: goto label_2973ec;
        case 0x2973f0u: goto label_2973f0;
        case 0x2973f4u: goto label_2973f4;
        case 0x2973f8u: goto label_2973f8;
        case 0x2973fcu: goto label_2973fc;
        case 0x297400u: goto label_297400;
        case 0x297404u: goto label_297404;
        case 0x297408u: goto label_297408;
        case 0x29740cu: goto label_29740c;
        case 0x297410u: goto label_297410;
        case 0x297414u: goto label_297414;
        case 0x297418u: goto label_297418;
        case 0x29741cu: goto label_29741c;
        case 0x297420u: goto label_297420;
        case 0x297424u: goto label_297424;
        case 0x297428u: goto label_297428;
        case 0x29742cu: goto label_29742c;
        case 0x297430u: goto label_297430;
        case 0x297434u: goto label_297434;
        case 0x297438u: goto label_297438;
        case 0x29743cu: goto label_29743c;
        case 0x297440u: goto label_297440;
        case 0x297444u: goto label_297444;
        case 0x297448u: goto label_297448;
        case 0x29744cu: goto label_29744c;
        case 0x297450u: goto label_297450;
        case 0x297454u: goto label_297454;
        case 0x297458u: goto label_297458;
        case 0x29745cu: goto label_29745c;
        case 0x297460u: goto label_297460;
        case 0x297464u: goto label_297464;
        case 0x297468u: goto label_297468;
        case 0x29746cu: goto label_29746c;
        case 0x297470u: goto label_297470;
        case 0x297474u: goto label_297474;
        case 0x297478u: goto label_297478;
        case 0x29747cu: goto label_29747c;
        case 0x297480u: goto label_297480;
        case 0x297484u: goto label_297484;
        case 0x297488u: goto label_297488;
        case 0x29748cu: goto label_29748c;
        case 0x297490u: goto label_297490;
        case 0x297494u: goto label_297494;
        case 0x297498u: goto label_297498;
        case 0x29749cu: goto label_29749c;
        case 0x2974a0u: goto label_2974a0;
        case 0x2974a4u: goto label_2974a4;
        case 0x2974a8u: goto label_2974a8;
        case 0x2974acu: goto label_2974ac;
        case 0x2974b0u: goto label_2974b0;
        case 0x2974b4u: goto label_2974b4;
        case 0x2974b8u: goto label_2974b8;
        case 0x2974bcu: goto label_2974bc;
        case 0x2974c0u: goto label_2974c0;
        case 0x2974c4u: goto label_2974c4;
        case 0x2974c8u: goto label_2974c8;
        case 0x2974ccu: goto label_2974cc;
        case 0x2974d0u: goto label_2974d0;
        case 0x2974d4u: goto label_2974d4;
        case 0x2974d8u: goto label_2974d8;
        case 0x2974dcu: goto label_2974dc;
        case 0x2974e0u: goto label_2974e0;
        case 0x2974e4u: goto label_2974e4;
        case 0x2974e8u: goto label_2974e8;
        case 0x2974ecu: goto label_2974ec;
        case 0x2974f0u: goto label_2974f0;
        case 0x2974f4u: goto label_2974f4;
        case 0x2974f8u: goto label_2974f8;
        case 0x2974fcu: goto label_2974fc;
        case 0x297500u: goto label_297500;
        case 0x297504u: goto label_297504;
        case 0x297508u: goto label_297508;
        case 0x29750cu: goto label_29750c;
        case 0x297510u: goto label_297510;
        case 0x297514u: goto label_297514;
        case 0x297518u: goto label_297518;
        case 0x29751cu: goto label_29751c;
        case 0x297520u: goto label_297520;
        case 0x297524u: goto label_297524;
        case 0x297528u: goto label_297528;
        case 0x29752cu: goto label_29752c;
        case 0x297530u: goto label_297530;
        case 0x297534u: goto label_297534;
        case 0x297538u: goto label_297538;
        case 0x29753cu: goto label_29753c;
        case 0x297540u: goto label_297540;
        case 0x297544u: goto label_297544;
        case 0x297548u: goto label_297548;
        case 0x29754cu: goto label_29754c;
        case 0x297550u: goto label_297550;
        case 0x297554u: goto label_297554;
        case 0x297558u: goto label_297558;
        case 0x29755cu: goto label_29755c;
        case 0x297560u: goto label_297560;
        case 0x297564u: goto label_297564;
        case 0x297568u: goto label_297568;
        case 0x29756cu: goto label_29756c;
        case 0x297570u: goto label_297570;
        case 0x297574u: goto label_297574;
        case 0x297578u: goto label_297578;
        case 0x29757cu: goto label_29757c;
        case 0x297580u: goto label_297580;
        case 0x297584u: goto label_297584;
        case 0x297588u: goto label_297588;
        case 0x29758cu: goto label_29758c;
        case 0x297590u: goto label_297590;
        case 0x297594u: goto label_297594;
        case 0x297598u: goto label_297598;
        case 0x29759cu: goto label_29759c;
        case 0x2975a0u: goto label_2975a0;
        case 0x2975a4u: goto label_2975a4;
        case 0x2975a8u: goto label_2975a8;
        case 0x2975acu: goto label_2975ac;
        case 0x2975b0u: goto label_2975b0;
        case 0x2975b4u: goto label_2975b4;
        case 0x2975b8u: goto label_2975b8;
        case 0x2975bcu: goto label_2975bc;
        case 0x2975c0u: goto label_2975c0;
        case 0x2975c4u: goto label_2975c4;
        case 0x2975c8u: goto label_2975c8;
        case 0x2975ccu: goto label_2975cc;
        case 0x2975d0u: goto label_2975d0;
        case 0x2975d4u: goto label_2975d4;
        case 0x2975d8u: goto label_2975d8;
        case 0x2975dcu: goto label_2975dc;
        case 0x2975e0u: goto label_2975e0;
        case 0x2975e4u: goto label_2975e4;
        case 0x2975e8u: goto label_2975e8;
        case 0x2975ecu: goto label_2975ec;
        case 0x2975f0u: goto label_2975f0;
        case 0x2975f4u: goto label_2975f4;
        case 0x2975f8u: goto label_2975f8;
        case 0x2975fcu: goto label_2975fc;
        case 0x297600u: goto label_297600;
        case 0x297604u: goto label_297604;
        case 0x297608u: goto label_297608;
        case 0x29760cu: goto label_29760c;
        case 0x297610u: goto label_297610;
        case 0x297614u: goto label_297614;
        case 0x297618u: goto label_297618;
        case 0x29761cu: goto label_29761c;
        case 0x297620u: goto label_297620;
        case 0x297624u: goto label_297624;
        case 0x297628u: goto label_297628;
        case 0x29762cu: goto label_29762c;
        case 0x297630u: goto label_297630;
        case 0x297634u: goto label_297634;
        case 0x297638u: goto label_297638;
        case 0x29763cu: goto label_29763c;
        case 0x297640u: goto label_297640;
        case 0x297644u: goto label_297644;
        case 0x297648u: goto label_297648;
        case 0x29764cu: goto label_29764c;
        case 0x297650u: goto label_297650;
        case 0x297654u: goto label_297654;
        case 0x297658u: goto label_297658;
        case 0x29765cu: goto label_29765c;
        case 0x297660u: goto label_297660;
        case 0x297664u: goto label_297664;
        case 0x297668u: goto label_297668;
        case 0x29766cu: goto label_29766c;
        case 0x297670u: goto label_297670;
        case 0x297674u: goto label_297674;
        case 0x297678u: goto label_297678;
        case 0x29767cu: goto label_29767c;
        case 0x297680u: goto label_297680;
        case 0x297684u: goto label_297684;
        case 0x297688u: goto label_297688;
        case 0x29768cu: goto label_29768c;
        case 0x297690u: goto label_297690;
        case 0x297694u: goto label_297694;
        case 0x297698u: goto label_297698;
        case 0x29769cu: goto label_29769c;
        case 0x2976a0u: goto label_2976a0;
        case 0x2976a4u: goto label_2976a4;
        case 0x2976a8u: goto label_2976a8;
        case 0x2976acu: goto label_2976ac;
        case 0x2976b0u: goto label_2976b0;
        case 0x2976b4u: goto label_2976b4;
        case 0x2976b8u: goto label_2976b8;
        case 0x2976bcu: goto label_2976bc;
        case 0x2976c0u: goto label_2976c0;
        case 0x2976c4u: goto label_2976c4;
        case 0x2976c8u: goto label_2976c8;
        case 0x2976ccu: goto label_2976cc;
        case 0x2976d0u: goto label_2976d0;
        case 0x2976d4u: goto label_2976d4;
        case 0x2976d8u: goto label_2976d8;
        case 0x2976dcu: goto label_2976dc;
        case 0x2976e0u: goto label_2976e0;
        case 0x2976e4u: goto label_2976e4;
        case 0x2976e8u: goto label_2976e8;
        case 0x2976ecu: goto label_2976ec;
        case 0x2976f0u: goto label_2976f0;
        case 0x2976f4u: goto label_2976f4;
        case 0x2976f8u: goto label_2976f8;
        case 0x2976fcu: goto label_2976fc;
        case 0x297700u: goto label_297700;
        case 0x297704u: goto label_297704;
        case 0x297708u: goto label_297708;
        case 0x29770cu: goto label_29770c;
        case 0x297710u: goto label_297710;
        case 0x297714u: goto label_297714;
        case 0x297718u: goto label_297718;
        case 0x29771cu: goto label_29771c;
        case 0x297720u: goto label_297720;
        case 0x297724u: goto label_297724;
        case 0x297728u: goto label_297728;
        case 0x29772cu: goto label_29772c;
        case 0x297730u: goto label_297730;
        case 0x297734u: goto label_297734;
        case 0x297738u: goto label_297738;
        case 0x29773cu: goto label_29773c;
        case 0x297740u: goto label_297740;
        case 0x297744u: goto label_297744;
        case 0x297748u: goto label_297748;
        case 0x29774cu: goto label_29774c;
        case 0x297750u: goto label_297750;
        case 0x297754u: goto label_297754;
        case 0x297758u: goto label_297758;
        case 0x29775cu: goto label_29775c;
        case 0x297760u: goto label_297760;
        case 0x297764u: goto label_297764;
        case 0x297768u: goto label_297768;
        case 0x29776cu: goto label_29776c;
        case 0x297770u: goto label_297770;
        case 0x297774u: goto label_297774;
        case 0x297778u: goto label_297778;
        case 0x29777cu: goto label_29777c;
        case 0x297780u: goto label_297780;
        case 0x297784u: goto label_297784;
        case 0x297788u: goto label_297788;
        case 0x29778cu: goto label_29778c;
        case 0x297790u: goto label_297790;
        case 0x297794u: goto label_297794;
        case 0x297798u: goto label_297798;
        case 0x29779cu: goto label_29779c;
        case 0x2977a0u: goto label_2977a0;
        case 0x2977a4u: goto label_2977a4;
        case 0x2977a8u: goto label_2977a8;
        case 0x2977acu: goto label_2977ac;
        case 0x2977b0u: goto label_2977b0;
        case 0x2977b4u: goto label_2977b4;
        case 0x2977b8u: goto label_2977b8;
        case 0x2977bcu: goto label_2977bc;
        case 0x2977c0u: goto label_2977c0;
        case 0x2977c4u: goto label_2977c4;
        case 0x2977c8u: goto label_2977c8;
        case 0x2977ccu: goto label_2977cc;
        case 0x2977d0u: goto label_2977d0;
        case 0x2977d4u: goto label_2977d4;
        case 0x2977d8u: goto label_2977d8;
        case 0x2977dcu: goto label_2977dc;
        case 0x2977e0u: goto label_2977e0;
        case 0x2977e4u: goto label_2977e4;
        case 0x2977e8u: goto label_2977e8;
        case 0x2977ecu: goto label_2977ec;
        case 0x2977f0u: goto label_2977f0;
        case 0x2977f4u: goto label_2977f4;
        case 0x2977f8u: goto label_2977f8;
        case 0x2977fcu: goto label_2977fc;
        case 0x297800u: goto label_297800;
        case 0x297804u: goto label_297804;
        case 0x297808u: goto label_297808;
        case 0x29780cu: goto label_29780c;
        case 0x297810u: goto label_297810;
        case 0x297814u: goto label_297814;
        case 0x297818u: goto label_297818;
        case 0x29781cu: goto label_29781c;
        case 0x297820u: goto label_297820;
        case 0x297824u: goto label_297824;
        case 0x297828u: goto label_297828;
        case 0x29782cu: goto label_29782c;
        case 0x297830u: goto label_297830;
        case 0x297834u: goto label_297834;
        case 0x297838u: goto label_297838;
        case 0x29783cu: goto label_29783c;
        case 0x297840u: goto label_297840;
        case 0x297844u: goto label_297844;
        case 0x297848u: goto label_297848;
        case 0x29784cu: goto label_29784c;
        default: return;
    }

label_297080:
    // 0x297080: 0x1e47f  dsra32      $gp, $at, 17
    ctx->pc = 0x297080u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 1) >> (32 + 17));
label_297084:
    // 0x297084: 0xd  break       0
    ctx->pc = 0x297084u;
    runtime->handleBreak(rdram, ctx);
label_297088:
    // 0x297088: 0x67e8  .word       0x000067E8                   # mfsa        $t4 # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x297088u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_29708c:
    // 0x29708c: 0x0  nop
    ctx->pc = 0x29708cu;
    // NOP
label_297090:
    // 0x297090: 0x1e48c  .word       0x0001E48C                   # syscall     914 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297090u;
    ctx->pc = 0x297094u;
runtime->handleSyscall(rdram, ctx, 0x792u);
label_297094:
    // 0x297094: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x297094u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_297098:
    // 0x297098: 0x17fa8  .word       0x00017FA8                   # mfsa        $t7 # 00010780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x297098u;
    SET_GPR_U32(ctx, 15, ctx->sa);
label_29709c:
    // 0x29709c: 0x0  nop
    ctx->pc = 0x29709cu;
    // NOP
label_2970a0:
    // 0x2970a0: 0x1e4bc  dsll32      $gp, $at, 18
    ctx->pc = 0x2970a0u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 1) << (32 + 18));
label_2970a4:
    // 0x2970a4: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x2970a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2970a8:
    // 0x2970a8: 0x17f3c  dsll32      $t7, $at, 28
    ctx->pc = 0x2970a8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 1) << (32 + 28));
label_2970ac:
    // 0x2970ac: 0x0  nop
    ctx->pc = 0x2970acu;
    // NOP
label_2970b0:
    // 0x2970b0: 0x1e4ec  .word       0x0001E4EC                   # dadd        $gp, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2970b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, r); }
label_2970b4:
    // 0x2970b4: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2970b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2970B4 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2970b8:
    // 0x2970b8: 0x2114  .word       0x00002114                   # dsllv       $a0, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2970b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2970bc:
    // 0x2970bc: 0x0  nop
    ctx->pc = 0x2970bcu;
    // NOP
label_2970c0:
    // 0x2970c0: 0x1e4f1  tgeu        $zero, $at, 915
    ctx->pc = 0x2970c0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2970c4:
    // 0x2970c4: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2970c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2970C4 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2970c8:
    // 0x2970c8: 0x209c  .word       0x0000209C                   # dmult       $zero, $zero # 00002080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2970c8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2970C8 raw=0x0000209C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2970cc:
    // 0x2970cc: 0x0  nop
    ctx->pc = 0x2970ccu;
    // NOP
label_2970d0:
    // 0x2970d0: 0x1e4f6  tne         $zero, $at, 915
    ctx->pc = 0x2970d0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2970d4:
    // 0x2970d4: 0x29  mtsa        $zero
    ctx->pc = 0x2970d4u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2970d8:
    // 0x2970d8: 0x144ac  .word       0x000144AC                   # dadd        $t0, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2970d8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_2970dc:
    // 0x2970dc: 0x0  nop
    ctx->pc = 0x2970dcu;
    // NOP
label_2970e0:
    // 0x2970e0: 0x1e51f  .word       0x0001E51F                   # ddivu       $gp, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2970e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2970E0 raw=0x0001E51F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2970e4:
    // 0x2970e4: 0x27  not         $zero, $zero
    ctx->pc = 0x2970e4u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2970e8:
    // 0x2970e8: 0x13420  .word       0x00013420                   # add         $a2, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2970e8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_2970ec:
    // 0x2970ec: 0x0  nop
    ctx->pc = 0x2970ecu;
    // NOP
label_2970f0:
    // 0x2970f0: 0x1e546  .word       0x0001E546                   # srlv        $gp, $at, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2970f0u;
    SET_GPR_S32(ctx, 28, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2970f4:
    // 0x2970f4: 0xf  sync
    ctx->pc = 0x2970f4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2970f8:
    // 0x2970f8: 0x7448  .word       0x00007448                   # jr          $zero # 00007440 <InstrIdType: CPU_SPECIAL>
label_2970fc:
    if (ctx->pc == 0x2970FCu) {
        ctx->pc = 0x297100u;
        goto label_297100;
    }
    ctx->pc = 0x2970F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2970F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x297100u;
label_297100:
    // 0x297100: 0x1e555  .word       0x0001E555                   # INVALID     $zero, $at, -0x1AAB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297100u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x297100 raw=0x0001E555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297104:
    // 0x297104: 0xf  sync
    ctx->pc = 0x297104u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_297108:
    // 0x297108: 0x7448  .word       0x00007448                   # jr          $zero # 00007440 <InstrIdType: CPU_SPECIAL>
label_29710c:
    if (ctx->pc == 0x29710Cu) {
        ctx->pc = 0x297110u;
        goto label_297110;
    }
    ctx->pc = 0x297108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297108u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x297110u;
label_297110:
    // 0x297110: 0x1e564  .word       0x0001E564                   # and         $gp, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297110u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_297114:
    // 0x297114: 0x9  jalr        $zero, $zero
label_297118:
    if (ctx->pc == 0x297118u) {
        ctx->pc = 0x297118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297114u;
        // 0x297118: 0x4058  .word       0x00004058                   # mult        $t0, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29711Cu;
        goto label_29711c;
    }
    ctx->pc = 0x297114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x297118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297114u;
        // 0x297118: 0x4058  .word       0x00004058                   # mult        $t0, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297114u, 0x29711Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29711Cu;
label_29711c:
    // 0x29711c: 0x0  nop
    ctx->pc = 0x29711cu;
    // NOP
label_297120:
    // 0x297120: 0x1e56d  .word       0x0001E56D                   # daddu       $gp, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297120u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_297124:
    // 0x297124: 0x9  jalr        $zero, $zero
label_297128:
    if (ctx->pc == 0x297128u) {
        ctx->pc = 0x297128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297124u;
        // 0x297128: 0x4044  .word       0x00004044                   # sllv        $t0, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29712Cu;
        goto label_29712c;
    }
    ctx->pc = 0x297124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x297128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297124u;
        // 0x297128: 0x4044  .word       0x00004044                   # sllv        $t0, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297124u, 0x29712Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29712Cu;
label_29712c:
    // 0x29712c: 0x0  nop
    ctx->pc = 0x29712cu;
    // NOP
label_297130:
    // 0x297130: 0x1e576  tne         $zero, $at, 917
    ctx->pc = 0x297130u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_297134:
    // 0x297134: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x297134u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_297138:
    // 0x297138: 0x4b20  .word       0x00004B20                   # add         $t1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297138u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_29713c:
    // 0x29713c: 0x0  nop
    ctx->pc = 0x29713cu;
    // NOP
label_297140:
    // 0x297140: 0x1e580  sll         $gp, $at, 22
    ctx->pc = 0x297140u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 22));
label_297144:
    // 0x297144: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x297144u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_297148:
    // 0x297148: 0x4b20  .word       0x00004B20                   # add         $t1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297148u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_29714c:
    // 0x29714c: 0x0  nop
    ctx->pc = 0x29714cu;
    // NOP
label_297150:
    // 0x297150: 0x1e58a  .word       0x0001E58A                   # movz        $gp, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297150u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 0));
label_297154:
    // 0x297154: 0x10  mfhi        $zero
    ctx->pc = 0x297154u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_297158:
    // 0x297158: 0x78c0  sll         $t7, $zero, 3
    ctx->pc = 0x297158u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_29715c:
    // 0x29715c: 0x0  nop
    ctx->pc = 0x29715cu;
    // NOP
label_297160:
    // 0x297160: 0x1e59a  .word       0x0001E59A                   # div         $gp, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297160u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_297164:
    // 0x297164: 0x10  mfhi        $zero
    ctx->pc = 0x297164u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_297168:
    // 0x297168: 0x78b0  tge         $zero, $zero, 482
    ctx->pc = 0x297168u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29716c:
    // 0x29716c: 0x0  nop
    ctx->pc = 0x29716cu;
    // NOP
label_297170:
    // 0x297170: 0x1e5aa  .word       0x0001E5AA                   # slt         $gp, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297170u;
    SET_GPR_U64(ctx, 28, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_297174:
    // 0x297174: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x297174u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297178:
    // 0x297178: 0x375c  .word       0x0000375C                   # dmult       $zero, $zero # 00003740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297178u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x297178 raw=0x0000375C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29717c:
    // 0x29717c: 0x0  nop
    ctx->pc = 0x29717cu;
    // NOP
label_297180:
    // 0x297180: 0x1e5b1  tgeu        $zero, $at, 918
    ctx->pc = 0x297180u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_297184:
    // 0x297184: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x297184u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297188:
    // 0x297188: 0x375c  .word       0x0000375C                   # dmult       $zero, $zero # 00003740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297188u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x297188 raw=0x0000375C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29718c:
    // 0x29718c: 0x0  nop
    ctx->pc = 0x29718cu;
    // NOP
label_297190:
    // 0x297190: 0x1e5b8  dsll        $gp, $at, 22
    ctx->pc = 0x297190u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 1) << 22);
label_297194:
    // 0x297194: 0xc  syscall     0
    ctx->pc = 0x297194u;
    ctx->pc = 0x297198u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_297198:
    // 0x297198: 0x5f44  .word       0x00005F44                   # sllv        $t3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297198u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29719c:
    // 0x29719c: 0x0  nop
    ctx->pc = 0x29719cu;
    // NOP
label_2971a0:
    // 0x2971a0: 0x1e5c4  .word       0x0001E5C4                   # sllv        $gp, $at, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2971a0u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2971a4:
    // 0x2971a4: 0xc  syscall     0
    ctx->pc = 0x2971a4u;
    ctx->pc = 0x2971A8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2971a8:
    // 0x2971a8: 0x5c34  teq         $zero, $zero, 368
    ctx->pc = 0x2971a8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2971ac:
    // 0x2971ac: 0x0  nop
    ctx->pc = 0x2971acu;
    // NOP
label_2971b0:
    // 0x2971b0: 0x1e5d0  .word       0x0001E5D0                   # mfhi        $gp # 000105C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2971b0u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_2971b4:
    // 0x2971b4: 0x9  jalr        $zero, $zero
label_2971b8:
    if (ctx->pc == 0x2971B8u) {
        ctx->pc = 0x2971B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2971B4u;
        // 0x2971b8: 0x40bc  dsll32      $t0, $zero, 2 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << (32 + 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2971BCu;
        goto label_2971bc;
    }
    ctx->pc = 0x2971B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2971B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2971B4u;
        // 0x2971b8: 0x40bc  dsll32      $t0, $zero, 2 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << (32 + 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2971B4u, 0x2971BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2971BCu;
label_2971bc:
    // 0x2971bc: 0x0  nop
    ctx->pc = 0x2971bcu;
    // NOP
label_2971c0:
    // 0x2971c0: 0x1e5d9  .word       0x0001E5D9                   # multu       $zero, $at # 0000E5C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2971c0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 28, (int32_t)result); }
label_2971c4:
    // 0x2971c4: 0x9  jalr        $zero, $zero
label_2971c8:
    if (ctx->pc == 0x2971C8u) {
        ctx->pc = 0x2971C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2971C4u;
        // 0x2971c8: 0x40bc  dsll32      $t0, $zero, 2 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << (32 + 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2971CCu;
        goto label_2971cc;
    }
    ctx->pc = 0x2971C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2971C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2971C4u;
        // 0x2971c8: 0x40bc  dsll32      $t0, $zero, 2 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << (32 + 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2971C4u, 0x2971CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2971CCu;
label_2971cc:
    // 0x2971cc: 0x0  nop
    ctx->pc = 0x2971ccu;
    // NOP
label_2971d0:
    // 0x2971d0: 0x1e5e2  .word       0x0001E5E2                   # neg         $gp, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2971d0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 28, (int32_t)tmp); }
label_2971d4:
    // 0x2971d4: 0xa4  .word       0x000000A4                   # and         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2971d4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2971d8:
    // 0x2971d8: 0x51a00  sll         $v1, $a1, 8
    ctx->pc = 0x2971d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_2971dc:
    // 0x2971dc: 0x0  nop
    ctx->pc = 0x2971dcu;
    // NOP
label_2971e0:
    // 0x2971e0: 0x1e686  .word       0x0001E686                   # srlv        $gp, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2971e0u;
    SET_GPR_S32(ctx, 28, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2971e4:
    // 0x2971e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2971e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2971E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2971e8:
    // 0x2971e8: 0x6b0  tge         $zero, $zero, 26
    ctx->pc = 0x2971e8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2971ec:
    // 0x2971ec: 0x0  nop
    ctx->pc = 0x2971ecu;
    // NOP
label_2971f0:
    // 0x2971f0: 0x1e687  .word       0x0001E687                   # srav        $gp, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2971f0u;
    SET_GPR_S32(ctx, 28, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2971f4:
    // 0x2971f4: 0xd9  .word       0x000000D9                   # multu       $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2971f4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2971f8:
    // 0x2971f8: 0x6c4c0  sll         $t8, $a2, 19
    ctx->pc = 0x2971f8u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 6), 19));
label_2971fc:
    // 0x2971fc: 0x0  nop
    ctx->pc = 0x2971fcu;
    // NOP
label_297200:
    // 0x297200: 0x1e760  .word       0x0001E760                   # add         $gp, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297200u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_297204:
    // 0x297204: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297204u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297204 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297208:
    // 0x297208: 0x650  .word       0x00000650                   # mfhi        $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297208u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29720c:
    // 0x29720c: 0x0  nop
    ctx->pc = 0x29720cu;
    // NOP
label_297210:
    // 0x297210: 0x1e761  .word       0x0001E761                   # addu        $gp, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297210u;
    SET_GPR_S32(ctx, 28, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_297214:
    // 0x297214: 0x162  .word       0x00000162                   # neg         $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297214u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_297218:
    // 0x297218: 0xb0d70  tge         $zero, $t3, 53
    ctx->pc = 0x297218u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_29721c:
    // 0x29721c: 0x0  nop
    ctx->pc = 0x29721cu;
    // NOP
label_297220:
    // 0x297220: 0x1e8c3  sra         $sp, $at, 3
    ctx->pc = 0x297220u;
    SET_GPR_S32(ctx, 29, SRA32(GPR_S32(ctx, 1), 3));
label_297224:
    // 0x297224: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297224u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297224 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297228:
    // 0x297228: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297228u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29722c:
    // 0x29722c: 0x0  nop
    ctx->pc = 0x29722cu;
    // NOP
label_297230:
    // 0x297230: 0x1e8c4  .word       0x0001E8C4                   # sllv        $sp, $at, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297230u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_297234:
    // 0x297234: 0x169  .word       0x00000169                   # mtsa        $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x297234u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_297238:
    // 0x297238: 0xb4560  .word       0x000B4560                   # add         $t0, $zero, $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297238u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_29723c:
    // 0x29723c: 0x0  nop
    ctx->pc = 0x29723cu;
    // NOP
label_297240:
    // 0x297240: 0x1ea2d  .word       0x0001EA2D                   # daddu       $sp, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297240u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_297244:
    // 0x297244: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297244u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297244 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297248:
    // 0x297248: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297248u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29724c:
    // 0x29724c: 0x0  nop
    ctx->pc = 0x29724cu;
    // NOP
label_297250:
    // 0x297250: 0x1ea2e  .word       0x0001EA2E                   # dsub        $sp, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297250u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 29, r); }
label_297254:
    // 0x297254: 0x52  .word       0x00000052                   # mflo        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297254u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_297258:
    // 0x297258: 0x28e40  sll         $s1, $v0, 25
    ctx->pc = 0x297258u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 25));
label_29725c:
    // 0x29725c: 0x0  nop
    ctx->pc = 0x29725cu;
    // NOP
label_297260:
    // 0x297260: 0x1ea80  sll         $sp, $at, 10
    ctx->pc = 0x297260u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 1), 10));
label_297264:
    // 0x297264: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297264u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297264 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297268:
    // 0x297268: 0x650  .word       0x00000650                   # mfhi        $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297268u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29726c:
    // 0x29726c: 0x0  nop
    ctx->pc = 0x29726cu;
    // NOP
label_297270:
    // 0x297270: 0x1ea81  .word       0x0001EA81                   # INVALID     $zero, $at, -0x157F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297270u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297270 raw=0x0001EA81"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297274:
    // 0x297274: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297274u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_297278:
    // 0x297278: 0x36850  .word       0x00036850                   # mfhi        $t5 # 00030040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297278u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_29727c:
    // 0x29727c: 0x0  nop
    ctx->pc = 0x29727cu;
    // NOP
label_297280:
    // 0x297280: 0x1eaef  .word       0x0001EAEF                   # dsubu       $sp, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297280u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_297284:
    // 0x297284: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297284u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297284 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297288:
    // 0x297288: 0x6f0  tge         $zero, $zero, 27
    ctx->pc = 0x297288u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29728c:
    // 0x29728c: 0x0  nop
    ctx->pc = 0x29728cu;
    // NOP
label_297290:
    // 0x297290: 0x1eaf0  tge         $zero, $at, 939
    ctx->pc = 0x297290u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_297294:
    // 0x297294: 0x97  .word       0x00000097                   # dsrav       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297294u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_297298:
    // 0x297298: 0x4b7d0  .word       0x0004B7D0                   # mfhi        $s6 # 000407C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297298u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_29729c:
    // 0x29729c: 0x0  nop
    ctx->pc = 0x29729cu;
    // NOP
label_2972a0:
    // 0x2972a0: 0x1eb87  .word       0x0001EB87                   # srav        $sp, $at, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2972a0u;
    SET_GPR_S32(ctx, 29, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2972a4:
    // 0x2972a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2972a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2972A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2972a8:
    // 0x2972a8: 0x5d0  .word       0x000005D0                   # mfhi        $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2972a8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2972ac:
    // 0x2972ac: 0x0  nop
    ctx->pc = 0x2972acu;
    // NOP
label_2972b0:
    // 0x2972b0: 0x1eb88  .word       0x0001EB88                   # jr          $zero # 0001EB80 <InstrIdType: CPU_SPECIAL>
label_2972b4:
    if (ctx->pc == 0x2972B4u) {
        ctx->pc = 0x2972B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2972B0u;
        // 0x2972b4: 0xd4  .word       0x000000D4                   # dsllv       $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2972B8u;
        goto label_2972b8;
    }
    ctx->pc = 0x2972B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2972B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2972B0u;
        // 0x2972b4: 0xd4  .word       0x000000D4                   # dsllv       $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2972B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2972B8u;
label_2972b8:
    // 0x2972b8: 0x69e00  sll         $s3, $a2, 24
    ctx->pc = 0x2972b8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
label_2972bc:
    // 0x2972bc: 0x0  nop
    ctx->pc = 0x2972bcu;
    // NOP
label_2972c0:
    // 0x2972c0: 0x1ec5c  .word       0x0001EC5C                   # dmult       $zero, $at # 0000EC40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2972c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2972C0 raw=0x0001EC5C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2972c4:
    // 0x2972c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2972c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2972C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2972c8:
    // 0x2972c8: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2972c8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2972cc:
    // 0x2972cc: 0x0  nop
    ctx->pc = 0x2972ccu;
    // NOP
label_2972d0:
    // 0x2972d0: 0x1ec5d  .word       0x0001EC5D                   # dmultu      $zero, $at # 0000EC40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2972d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2972D0 raw=0x0001EC5D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2972d4:
    // 0x2972d4: 0xd2  .word       0x000000D2                   # mflo        $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2972d4u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2972d8:
    // 0x2972d8: 0x68ae0  .word       0x00068AE0                   # add         $s1, $zero, $a2 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2972d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2972dc:
    // 0x2972dc: 0x0  nop
    ctx->pc = 0x2972dcu;
    // NOP
label_2972e0:
    // 0x2972e0: 0x1ed2f  .word       0x0001ED2F                   # dsubu       $sp, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2972e0u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_2972e4:
    // 0x2972e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2972e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2972E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2972e8:
    // 0x2972e8: 0x670  tge         $zero, $zero, 25
    ctx->pc = 0x2972e8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2972ec:
    // 0x2972ec: 0x0  nop
    ctx->pc = 0x2972ecu;
    // NOP
label_2972f0:
    // 0x2972f0: 0x1ed30  tge         $zero, $at, 948
    ctx->pc = 0x2972f0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2972f4:
    // 0x2972f4: 0xcf  sync
    ctx->pc = 0x2972f4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2972f8:
    // 0x2972f8: 0x677f0  tge         $zero, $a2, 479
    ctx->pc = 0x2972f8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_2972fc:
    // 0x2972fc: 0x0  nop
    ctx->pc = 0x2972fcu;
    // NOP
label_297300:
    // 0x297300: 0x1edff  dsra32      $sp, $at, 23
    ctx->pc = 0x297300u;
    SET_GPR_S64(ctx, 29, GPR_S64(ctx, 1) >> (32 + 23));
label_297304:
    // 0x297304: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297304u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297304 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297308:
    // 0x297308: 0x6f0  tge         $zero, $zero, 27
    ctx->pc = 0x297308u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29730c:
    // 0x29730c: 0x0  nop
    ctx->pc = 0x29730cu;
    // NOP
label_297310:
    // 0x297310: 0x1ee00  sll         $sp, $at, 24
    ctx->pc = 0x297310u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 1), 24));
label_297314:
    // 0x297314: 0x11b  .word       0x0000011B                   # divu        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297314u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_297318:
    // 0x297318: 0x8d650  .word       0x0008D650                   # mfhi        $k0 # 00080640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297318u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29731c:
    // 0x29731c: 0x0  nop
    ctx->pc = 0x29731cu;
    // NOP
label_297320:
    // 0x297320: 0x1ef1b  .word       0x0001EF1B                   # divu        $sp, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297320u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_297324:
    // 0x297324: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297324u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297324 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297328:
    // 0x297328: 0x6d0  .word       0x000006D0                   # mfhi        $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297328u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29732c:
    // 0x29732c: 0x0  nop
    ctx->pc = 0x29732cu;
    // NOP
label_297330:
    // 0x297330: 0x1ef1c  .word       0x0001EF1C                   # dmult       $zero, $at # 0000EF00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297330u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x297330 raw=0x0001EF1C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297334:
    // 0x297334: 0x114  .word       0x00000114                   # dsllv       $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297334u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_297338:
    // 0x297338: 0x89ef0  tge         $zero, $t0, 635
    ctx->pc = 0x297338u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_29733c:
    // 0x29733c: 0x0  nop
    ctx->pc = 0x29733cu;
    // NOP
label_297340:
    // 0x297340: 0x1f030  tge         $zero, $at, 960
    ctx->pc = 0x297340u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_297344:
    // 0x297344: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297344u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297344 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297348:
    // 0x297348: 0x650  .word       0x00000650                   # mfhi        $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297348u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29734c:
    // 0x29734c: 0x0  nop
    ctx->pc = 0x29734cu;
    // NOP
label_297350:
    // 0x297350: 0x1f031  tgeu        $zero, $at, 960
    ctx->pc = 0x297350u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_297354:
    // 0x297354: 0x151  .word       0x00000151                   # mthi        $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297354u;
    ctx->hi = GPR_U64(ctx, 0);
label_297358:
    // 0x297358: 0xa8140  sll         $s0, $t2, 5
    ctx->pc = 0x297358u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_29735c:
    // 0x29735c: 0x0  nop
    ctx->pc = 0x29735cu;
    // NOP
label_297360:
    // 0x297360: 0x1f182  srl         $fp, $at, 6
    ctx->pc = 0x297360u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 1), 6));
label_297364:
    // 0x297364: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297364u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297364 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297368:
    // 0x297368: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297368u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29736c:
    // 0x29736c: 0x0  nop
    ctx->pc = 0x29736cu;
    // NOP
label_297370:
    // 0x297370: 0x1f183  sra         $fp, $at, 6
    ctx->pc = 0x297370u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 1), 6));
label_297374:
    // 0x297374: 0x107  .word       0x00000107                   # srav        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297374u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297378:
    // 0x297378: 0x830b0  tge         $zero, $t0, 194
    ctx->pc = 0x297378u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_29737c:
    // 0x29737c: 0x0  nop
    ctx->pc = 0x29737cu;
    // NOP
label_297380:
    // 0x297380: 0x1f28a  .word       0x0001F28A                   # movz        $fp, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297380u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 0));
label_297384:
    // 0x297384: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297384u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297384 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297388:
    // 0x297388: 0x5d0  .word       0x000005D0                   # mfhi        $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297388u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29738c:
    // 0x29738c: 0x0  nop
    ctx->pc = 0x29738cu;
    // NOP
label_297390:
    // 0x297390: 0x1f28b  .word       0x0001F28B                   # movn        $fp, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297390u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 0));
label_297394:
    // 0x297394: 0x155  .word       0x00000155                   # INVALID     $zero, $zero, 0x155 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297394u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x297394 raw=0x00000155"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297398:
    // 0x297398: 0xaa320  .word       0x000AA320                   # add         $s4, $zero, $t2 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297398u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 10);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_29739c:
    // 0x29739c: 0x0  nop
    ctx->pc = 0x29739cu;
    // NOP
label_2973a0:
    // 0x2973a0: 0x1f3e0  .word       0x0001F3E0                   # add         $fp, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2973a0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_2973a4:
    // 0x2973a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2973a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2973A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2973a8:
    // 0x2973a8: 0x6d0  .word       0x000006D0                   # mfhi        $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2973a8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2973ac:
    // 0x2973ac: 0x0  nop
    ctx->pc = 0x2973acu;
    // NOP
label_2973b0:
    // 0x2973b0: 0x1f3e1  .word       0x0001F3E1                   # addu        $fp, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2973b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2973b4:
    // 0x2973b4: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x2973b4u;
    
label_2973b8:
    // 0x2973b8: 0x9fd30  tge         $zero, $t1, 1012
    ctx->pc = 0x2973b8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_2973bc:
    // 0x2973bc: 0x0  nop
    ctx->pc = 0x2973bcu;
    // NOP
label_2973c0:
    // 0x2973c0: 0x1f521  .word       0x0001F521                   # addu        $fp, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2973c0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2973c4:
    // 0x2973c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2973c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2973C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2973c8:
    // 0x2973c8: 0x6b0  tge         $zero, $zero, 26
    ctx->pc = 0x2973c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2973cc:
    // 0x2973cc: 0x0  nop
    ctx->pc = 0x2973ccu;
    // NOP
label_2973d0:
    // 0x2973d0: 0x1f522  .word       0x0001F522                   # neg         $fp, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2973d0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
label_2973d4:
    // 0x2973d4: 0xbf  dsra32      $zero, $zero, 2
    ctx->pc = 0x2973d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 2));
label_2973d8:
    // 0x2973d8: 0x5f070  tge         $zero, $a1, 961
    ctx->pc = 0x2973d8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
label_2973dc:
    // 0x2973dc: 0x0  nop
    ctx->pc = 0x2973dcu;
    // NOP
label_2973e0:
    // 0x2973e0: 0x1f5e1  .word       0x0001F5E1                   # addu        $fp, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2973e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2973e4:
    // 0x2973e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2973e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2973E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2973e8:
    // 0x2973e8: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2973e8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2973ec:
    // 0x2973ec: 0x0  nop
    ctx->pc = 0x2973ecu;
    // NOP
label_2973f0:
    // 0x2973f0: 0x1f5e2  .word       0x0001F5E2                   # neg         $fp, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2973f0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
label_2973f4:
    // 0x2973f4: 0xb4  teq         $zero, $zero, 2
    ctx->pc = 0x2973f4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2973f8:
    // 0x2973f8: 0x59cf0  tge         $zero, $a1, 627
    ctx->pc = 0x2973f8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
label_2973fc:
    // 0x2973fc: 0x0  nop
    ctx->pc = 0x2973fcu;
    // NOP
label_297400:
    // 0x297400: 0x1f696  .word       0x0001F696                   # dsrlv       $fp, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297400u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_297404:
    // 0x297404: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297404u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297404 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297408:
    // 0x297408: 0x6f0  tge         $zero, $zero, 27
    ctx->pc = 0x297408u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29740c:
    // 0x29740c: 0x0  nop
    ctx->pc = 0x29740cu;
    // NOP
label_297410:
    // 0x297410: 0x1f697  .word       0x0001F697                   # dsrav       $fp, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297410u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_297414:
    // 0x297414: 0xca  .word       0x000000CA                   # movz        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297414u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_297418:
    // 0x297418: 0x64990  .word       0x00064990                   # mfhi        $t1 # 00060180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297418u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_29741c:
    // 0x29741c: 0x0  nop
    ctx->pc = 0x29741cu;
    // NOP
label_297420:
    // 0x297420: 0x1f761  .word       0x0001F761                   # addu        $fp, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297420u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_297424:
    // 0x297424: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297424u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297424 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297428:
    // 0x297428: 0x6d0  .word       0x000006D0                   # mfhi        $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297428u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29742c:
    // 0x29742c: 0x0  nop
    ctx->pc = 0x29742cu;
    // NOP
label_297430:
    // 0x297430: 0x1f762  .word       0x0001F762                   # neg         $fp, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297430u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
label_297434:
    // 0x297434: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297434u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_297438:
    // 0x297438: 0x31970  tge         $zero, $v1, 101
    ctx->pc = 0x297438u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29743c:
    // 0x29743c: 0x0  nop
    ctx->pc = 0x29743cu;
    // NOP
label_297440:
    // 0x297440: 0x1f7c6  .word       0x0001F7C6                   # srlv        $fp, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297440u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_297444:
    // 0x297444: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297444u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297444 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297448:
    // 0x297448: 0x650  .word       0x00000650                   # mfhi        $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297448u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29744c:
    // 0x29744c: 0x0  nop
    ctx->pc = 0x29744cu;
    // NOP
label_297450:
    // 0x297450: 0x1f7c7  .word       0x0001F7C7                   # srav        $fp, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297450u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_297454:
    // 0x297454: 0x7b  dsra        $zero, $zero, 1
    ctx->pc = 0x297454u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 1);
label_297458:
    // 0x297458: 0x3d5e0  .word       0x0003D5E0                   # add         $k0, $zero, $v1 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297458u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_29745c:
    // 0x29745c: 0x0  nop
    ctx->pc = 0x29745cu;
    // NOP
label_297460:
    // 0x297460: 0x1f842  srl         $ra, $at, 1
    ctx->pc = 0x297460u;
    SET_GPR_S32(ctx, 31, (int32_t)SRL32(GPR_U32(ctx, 1), 1));
label_297464:
    // 0x297464: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297464u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297464 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297468:
    // 0x297468: 0x6b0  tge         $zero, $zero, 26
    ctx->pc = 0x297468u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29746c:
    // 0x29746c: 0x0  nop
    ctx->pc = 0x29746cu;
    // NOP
label_297470:
    // 0x297470: 0x1f843  sra         $ra, $at, 1
    ctx->pc = 0x297470u;
    SET_GPR_S32(ctx, 31, SRA32(GPR_S32(ctx, 1), 1));
label_297474:
    // 0x297474: 0x128  .word       0x00000128                   # mfsa        $zero # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x297474u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_297478:
    // 0x297478: 0x93ab0  tge         $zero, $t1, 234
    ctx->pc = 0x297478u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_29747c:
    // 0x29747c: 0x0  nop
    ctx->pc = 0x29747cu;
    // NOP
label_297480:
    // 0x297480: 0x1f96b  .word       0x0001F96B                   # sltu        $ra, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297480u;
    SET_GPR_U64(ctx, 31, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_297484:
    // 0x297484: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297484u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297484 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297488:
    // 0x297488: 0x650  .word       0x00000650                   # mfhi        $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297488u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29748c:
    // 0x29748c: 0x0  nop
    ctx->pc = 0x29748cu;
    // NOP
label_297490:
    // 0x297490: 0x1f96c  .word       0x0001F96C                   # dadd        $ra, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297490u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_297494:
    // 0x297494: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x297494u;
    
label_297498:
    // 0x297498: 0x7f940  sll         $ra, $a3, 5
    ctx->pc = 0x297498u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_29749c:
    // 0x29749c: 0x0  nop
    ctx->pc = 0x29749cu;
    // NOP
label_2974a0:
    // 0x2974a0: 0x1fa6c  .word       0x0001FA6C                   # dadd        $ra, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2974a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_2974a4:
    // 0x2974a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2974a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2974A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2974a8:
    // 0x2974a8: 0x5b0  tge         $zero, $zero, 22
    ctx->pc = 0x2974a8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2974ac:
    // 0x2974ac: 0x0  nop
    ctx->pc = 0x2974acu;
    // NOP
label_2974b0:
    // 0x2974b0: 0x1fa6d  .word       0x0001FA6D                   # daddu       $ra, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2974b0u;
    SET_GPR_U64(ctx, 31, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_2974b4:
    // 0x2974b4: 0x126  .word       0x00000126                   # xor         $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2974b4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2974b8:
    // 0x2974b8: 0x92f40  sll         $a1, $t1, 29
    ctx->pc = 0x2974b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 29));
label_2974bc:
    // 0x2974bc: 0x0  nop
    ctx->pc = 0x2974bcu;
    // NOP
label_2974c0:
    // 0x2974c0: 0x1fb93  .word       0x0001FB93                   # mtlo        $zero # 0001FB80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2974c0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2974c4:
    // 0x2974c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2974c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2974C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2974c8:
    // 0x2974c8: 0x6f0  tge         $zero, $zero, 27
    ctx->pc = 0x2974c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2974cc:
    // 0x2974cc: 0x0  nop
    ctx->pc = 0x2974ccu;
    // NOP
label_2974d0:
    // 0x2974d0: 0x1fb94  .word       0x0001FB94                   # dsllv       $ra, $at, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2974d0u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_2974d4:
    // 0x2974d4: 0x130  tge         $zero, $zero, 4
    ctx->pc = 0x2974d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2974d8:
    // 0x2974d8: 0x97a00  sll         $t7, $t1, 8
    ctx->pc = 0x2974d8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_2974dc:
    // 0x2974dc: 0x0  nop
    ctx->pc = 0x2974dcu;
    // NOP
label_2974e0:
    // 0x2974e0: 0x1fcc4  .word       0x0001FCC4                   # sllv        $ra, $at, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2974e0u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2974e4:
    // 0x2974e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2974e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2974E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2974e8:
    // 0x2974e8: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2974e8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2974ec:
    // 0x2974ec: 0x0  nop
    ctx->pc = 0x2974ecu;
    // NOP
label_2974f0:
    // 0x2974f0: 0x1fcc5  .word       0x0001FCC5                   # INVALID     $zero, $at, -0x33B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2974f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2974F0 raw=0x0001FCC5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2974f4:
    // 0x2974f4: 0x137  .word       0x00000137                   # INVALID     $zero, $zero, 0x137 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2974f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2974F4 raw=0x00000137"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2974f8:
    // 0x2974f8: 0x9b250  .word       0x0009B250                   # mfhi        $s6 # 00090240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2974f8u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_2974fc:
    // 0x2974fc: 0x0  nop
    ctx->pc = 0x2974fcu;
    // NOP
label_297500:
    // 0x297500: 0x1fdfc  dsll32      $ra, $at, 23
    ctx->pc = 0x297500u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 1) << (32 + 23));
label_297504:
    // 0x297504: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297504u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297504 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297508:
    // 0x297508: 0x6f0  tge         $zero, $zero, 27
    ctx->pc = 0x297508u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29750c:
    // 0x29750c: 0x0  nop
    ctx->pc = 0x29750cu;
    // NOP
label_297510:
    // 0x297510: 0x1fdfd  .word       0x0001FDFD                   # INVALID     $zero, $at, -0x203 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297510u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x297510 raw=0x0001FDFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297514:
    // 0x297514: 0x10c  syscall     4
    ctx->pc = 0x297514u;
    ctx->pc = 0x297518u;
runtime->handleSyscall(rdram, ctx, 0x4u);
label_297518:
    // 0x297518: 0x85db0  tge         $zero, $t0, 374
    ctx->pc = 0x297518u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_29751c:
    // 0x29751c: 0x0  nop
    ctx->pc = 0x29751cu;
    // NOP
label_297520:
    // 0x297520: 0x1ff09  .word       0x0001FF09                   # jalr        $zero # 00010700 <InstrIdType: CPU_SPECIAL>
label_297524:
    if (ctx->pc == 0x297524u) {
        ctx->pc = 0x297524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297520u;
        // 0x297524: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297524 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x297528u;
        goto label_297528;
    }
    ctx->pc = 0x297520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 31, 0x297528u);
        ctx->pc = 0x297524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297520u;
        // 0x297524: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297524 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297520u, 0x297528u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x297528u;
label_297528:
    // 0x297528: 0x5d0  .word       0x000005D0                   # mfhi        $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297528u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29752c:
    // 0x29752c: 0x0  nop
    ctx->pc = 0x29752cu;
    // NOP
label_297530:
    // 0x297530: 0x1ff0a  .word       0x0001FF0A                   # movz        $ra, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297530u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 0));
label_297534:
    // 0x297534: 0x10c  syscall     4
    ctx->pc = 0x297534u;
    ctx->pc = 0x297538u;
runtime->handleSyscall(rdram, ctx, 0x4u);
label_297538:
    // 0x297538: 0x85db0  tge         $zero, $t0, 374
    ctx->pc = 0x297538u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_29753c:
    // 0x29753c: 0x0  nop
    ctx->pc = 0x29753cu;
    // NOP
label_297540:
    // 0x297540: 0x20016  dsrlv       $zero, $v0, $zero
    ctx->pc = 0x297540u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_297544:
    // 0x297544: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297544u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297544 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297548:
    // 0x297548: 0x5d0  .word       0x000005D0                   # mfhi        $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297548u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29754c:
    // 0x29754c: 0x0  nop
    ctx->pc = 0x29754cu;
    // NOP
label_297550:
    // 0x297550: 0x20017  dsrav       $zero, $v0, $zero
    ctx->pc = 0x297550u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_297554:
    // 0x297554: 0xb2  tlt         $zero, $zero, 2
    ctx->pc = 0x297554u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_297558:
    // 0x297558: 0x58e50  .word       0x00058E50                   # mfhi        $s1 # 00050640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297558u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_29755c:
    // 0x29755c: 0x0  nop
    ctx->pc = 0x29755cu;
    // NOP
label_297560:
    // 0x297560: 0x200c9  .word       0x000200C9                   # jalr        $zero, $zero # 000200C0 <InstrIdType: CPU_SPECIAL>
label_297564:
    if (ctx->pc == 0x297564u) {
        ctx->pc = 0x297564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297560u;
        // 0x297564: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297564 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x297568u;
        goto label_297568;
    }
    ctx->pc = 0x297560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x297564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297560u;
        // 0x297564: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297564 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297560u, 0x297568u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x297568u;
label_297568:
    // 0x297568: 0x6d0  .word       0x000006D0                   # mfhi        $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297568u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29756c:
    // 0x29756c: 0x0  nop
    ctx->pc = 0x29756cu;
    // NOP
label_297570:
    // 0x297570: 0x200ca  .word       0x000200CA                   # movz        $zero, $zero, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297570u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_297574:
    // 0x297574: 0xd1  .word       0x000000D1                   # mthi        $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297574u;
    ctx->hi = GPR_U64(ctx, 0);
label_297578:
    // 0x297578: 0x687d0  .word       0x000687D0                   # mfhi        $s0 # 000607C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297578u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_29757c:
    // 0x29757c: 0x0  nop
    ctx->pc = 0x29757cu;
    // NOP
label_297580:
    // 0x297580: 0x2019b  .word       0x0002019B                   # divu        $zero, $zero, $v0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297580u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_297584:
    // 0x297584: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297584u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297584 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297588:
    // 0x297588: 0x650  .word       0x00000650                   # mfhi        $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297588u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29758c:
    // 0x29758c: 0x0  nop
    ctx->pc = 0x29758cu;
    // NOP
label_297590:
    // 0x297590: 0x2019c  .word       0x0002019C                   # dmult       $zero, $v0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297590u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x297590 raw=0x0002019C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297594:
    // 0x297594: 0x98  .word       0x00000098                   # mult        $zero, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x297594u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_297598:
    // 0x297598: 0x4ba00  sll         $s7, $a0, 8
    ctx->pc = 0x297598u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_29759c:
    // 0x29759c: 0x0  nop
    ctx->pc = 0x29759cu;
    // NOP
label_2975a0:
    // 0x2975a0: 0x20234  teq         $zero, $v0, 8
    ctx->pc = 0x2975a0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_2975a4:
    // 0x2975a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2975a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2975A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2975a8:
    // 0x2975a8: 0x6f0  tge         $zero, $zero, 27
    ctx->pc = 0x2975a8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2975ac:
    // 0x2975ac: 0x0  nop
    ctx->pc = 0x2975acu;
    // NOP
label_2975b0:
    // 0x2975b0: 0x20235  .word       0x00020235                   # INVALID     $zero, $v0, 0x235 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2975b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2975B0 raw=0x00020235"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2975b4:
    // 0x2975b4: 0x7b  dsra        $zero, $zero, 1
    ctx->pc = 0x2975b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 1);
label_2975b8:
    // 0x2975b8: 0x3d680  sll         $k0, $v1, 26
    ctx->pc = 0x2975b8u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 3), 26));
label_2975bc:
    // 0x2975bc: 0x0  nop
    ctx->pc = 0x2975bcu;
    // NOP
label_2975c0:
    // 0x2975c0: 0x202b0  tge         $zero, $v0, 10
    ctx->pc = 0x2975c0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_2975c4:
    // 0x2975c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2975c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2975C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2975c8:
    // 0x2975c8: 0x6b0  tge         $zero, $zero, 26
    ctx->pc = 0x2975c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2975cc:
    // 0x2975cc: 0x0  nop
    ctx->pc = 0x2975ccu;
    // NOP
label_2975d0:
    // 0x2975d0: 0x202b1  tgeu        $zero, $v0, 10
    ctx->pc = 0x2975d0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_2975d4:
    // 0x2975d4: 0x20d  break       0, 8
    ctx->pc = 0x2975d4u;
    runtime->handleBreak(rdram, ctx);
label_2975d8:
    // 0x2975d8: 0x106260  .word       0x00106260                   # add         $t4, $zero, $s0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2975d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2975dc:
    // 0x2975dc: 0x0  nop
    ctx->pc = 0x2975dcu;
    // NOP
label_2975e0:
    // 0x2975e0: 0x204be  dsrl32      $zero, $v0, 18
    ctx->pc = 0x2975e0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 2) >> (32 + 18));
label_2975e4:
    // 0x2975e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2975e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2975E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2975e8:
    // 0x2975e8: 0x730  tge         $zero, $zero, 28
    ctx->pc = 0x2975e8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2975ec:
    // 0x2975ec: 0x0  nop
    ctx->pc = 0x2975ecu;
    // NOP
label_2975f0:
    // 0x2975f0: 0x204bf  dsra32      $zero, $v0, 18
    ctx->pc = 0x2975f0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 2) >> (32 + 18));
label_2975f4:
    // 0x2975f4: 0x20d  break       0, 8
    ctx->pc = 0x2975f4u;
    runtime->handleBreak(rdram, ctx);
label_2975f8:
    // 0x2975f8: 0x106260  .word       0x00106260                   # add         $t4, $zero, $s0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2975f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2975fc:
    // 0x2975fc: 0x0  nop
    ctx->pc = 0x2975fcu;
    // NOP
label_297600:
    // 0x297600: 0x206cc  .word       0x000206CC                   # syscall     27 # 00020000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297600u;
    ctx->pc = 0x297604u;
runtime->handleSyscall(rdram, ctx, 0x81Bu);
label_297604:
    // 0x297604: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297604u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297604 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297608:
    // 0x297608: 0x730  tge         $zero, $zero, 28
    ctx->pc = 0x297608u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29760c:
    // 0x29760c: 0x0  nop
    ctx->pc = 0x29760cu;
    // NOP
label_297610:
    // 0x297610: 0x206cd  break       2, 27
    ctx->pc = 0x297610u;
    runtime->handleBreak(rdram, ctx);
label_297614:
    // 0x297614: 0x218  .word       0x00000218                   # mult        $zero, $zero, $zero # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x297614u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_297618:
    // 0x297618: 0x10bad0  .word       0x0010BAD0                   # mfhi        $s7 # 001002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297618u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_29761c:
    // 0x29761c: 0x0  nop
    ctx->pc = 0x29761cu;
    // NOP
label_297620:
    // 0x297620: 0x208e5  .word       0x000208E5                   # or          $at, $zero, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297620u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | GPR_U64(ctx, 2));
label_297624:
    // 0x297624: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297624u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297624 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297628:
    // 0x297628: 0x6b0  tge         $zero, $zero, 26
    ctx->pc = 0x297628u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29762c:
    // 0x29762c: 0x0  nop
    ctx->pc = 0x29762cu;
    // NOP
label_297630:
    // 0x297630: 0x208e6  .word       0x000208E6                   # xor         $at, $zero, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297630u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 2));
label_297634:
    // 0x297634: 0xdd  .word       0x000000DD                   # dmultu      $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297634u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x297634 raw=0x000000DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297638:
    // 0x297638: 0x6e240  sll         $gp, $a2, 9
    ctx->pc = 0x297638u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 6), 9));
label_29763c:
    // 0x29763c: 0x0  nop
    ctx->pc = 0x29763cu;
    // NOP
label_297640:
    // 0x297640: 0x209c3  sra         $at, $v0, 7
    ctx->pc = 0x297640u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 2), 7));
label_297644:
    // 0x297644: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297644u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297644 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297648:
    // 0x297648: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297648u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29764c:
    // 0x29764c: 0x0  nop
    ctx->pc = 0x29764cu;
    // NOP
label_297650:
    // 0x297650: 0x209c4  .word       0x000209C4                   # sllv        $at, $v0, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297650u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_297654:
    // 0x297654: 0xc6  .word       0x000000C6                   # srlv        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297654u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_297658:
    // 0x297658: 0x62fe0  .word       0x00062FE0                   # add         $a1, $zero, $a2 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297658u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_29765c:
    // 0x29765c: 0x0  nop
    ctx->pc = 0x29765cu;
    // NOP
label_297660:
    // 0x297660: 0x20a8a  .word       0x00020A8A                   # movz        $at, $zero, $v0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297660u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_297664:
    // 0x297664: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297664u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297664 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297668:
    // 0x297668: 0x6b0  tge         $zero, $zero, 26
    ctx->pc = 0x297668u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29766c:
    // 0x29766c: 0x0  nop
    ctx->pc = 0x29766cu;
    // NOP
label_297670:
    // 0x297670: 0x20a8b  .word       0x00020A8B                   # movn        $at, $zero, $v0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297670u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_297674:
    // 0x297674: 0x182  srl         $zero, $zero, 6
    ctx->pc = 0x297674u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 6));
label_297678:
    // 0x297678: 0xc0a80  sll         $at, $t4, 10
    ctx->pc = 0x297678u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 12), 10));
label_29767c:
    // 0x29767c: 0x0  nop
    ctx->pc = 0x29767cu;
    // NOP
label_297680:
    // 0x297680: 0x20c0d  break       2, 48
    ctx->pc = 0x297680u;
    runtime->handleBreak(rdram, ctx);
label_297684:
    // 0x297684: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297684u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297684 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297688:
    // 0x297688: 0x6f0  tge         $zero, $zero, 27
    ctx->pc = 0x297688u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29768c:
    // 0x29768c: 0x0  nop
    ctx->pc = 0x29768cu;
    // NOP
label_297690:
    // 0x297690: 0x20c0e  .word       0x00020C0E                   # INVALID     $zero, $v0, 0xC0E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297690u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x297690 raw=0x00020C0E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297694:
    // 0x297694: 0x1aa  .word       0x000001AA                   # slt         $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297694u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_297698:
    // 0x297698: 0xd49b0  tge         $zero, $t5, 294
    ctx->pc = 0x297698u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_29769c:
    // 0x29769c: 0x0  nop
    ctx->pc = 0x29769cu;
    // NOP
label_2976a0:
    // 0x2976a0: 0x20db8  dsll        $at, $v0, 22
    ctx->pc = 0x2976a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 2) << 22);
label_2976a4:
    // 0x2976a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2976a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2976A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2976a8:
    // 0x2976a8: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2976a8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2976ac:
    // 0x2976ac: 0x0  nop
    ctx->pc = 0x2976acu;
    // NOP
label_2976b0:
    // 0x2976b0: 0x20db9  .word       0x00020DB9                   # INVALID     $zero, $v0, 0xDB9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2976b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2976B0 raw=0x00020DB9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2976b4:
    // 0x2976b4: 0xb0  tge         $zero, $zero, 2
    ctx->pc = 0x2976b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2976b8:
    // 0x2976b8: 0x57d90  .word       0x00057D90                   # mfhi        $t7 # 00050580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2976b8u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_2976bc:
    // 0x2976bc: 0x0  nop
    ctx->pc = 0x2976bcu;
    // NOP
label_2976c0:
    // 0x2976c0: 0x20e69  .word       0x00020E69                   # mtsa        $zero # 00020E40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2976c0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2976c4:
    // 0x2976c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2976c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2976C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2976c8:
    // 0x2976c8: 0x6f0  tge         $zero, $zero, 27
    ctx->pc = 0x2976c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2976cc:
    // 0x2976cc: 0x0  nop
    ctx->pc = 0x2976ccu;
    // NOP
label_2976d0:
    // 0x2976d0: 0x20e6a  .word       0x00020E6A                   # slt         $at, $zero, $v0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2976d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2976d4:
    // 0x2976d4: 0x9c  .word       0x0000009C                   # dmult       $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2976d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2976D4 raw=0x0000009C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2976d8:
    // 0x2976d8: 0x4dab0  tge         $zero, $a0, 874
    ctx->pc = 0x2976d8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_2976dc:
    // 0x2976dc: 0x0  nop
    ctx->pc = 0x2976dcu;
    // NOP
label_2976e0:
    // 0x2976e0: 0x20f06  .word       0x00020F06                   # srlv        $at, $v0, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2976e0u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_2976e4:
    // 0x2976e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2976e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2976E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2976e8:
    // 0x2976e8: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2976e8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2976ec:
    // 0x2976ec: 0x0  nop
    ctx->pc = 0x2976ecu;
    // NOP
label_2976f0:
    // 0x2976f0: 0x20f07  .word       0x00020F07                   # srav        $at, $v0, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2976f0u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_2976f4:
    // 0x2976f4: 0xe7  .word       0x000000E7                   # not         $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2976f4u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2976f8:
    // 0x2976f8: 0x732c0  sll         $a2, $a3, 11
    ctx->pc = 0x2976f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
label_2976fc:
    // 0x2976fc: 0x0  nop
    ctx->pc = 0x2976fcu;
    // NOP
label_297700:
    // 0x297700: 0x20fee  .word       0x00020FEE                   # dsub        $at, $zero, $v0 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297700u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_297704:
    // 0x297704: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297704u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297704 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297708:
    // 0x297708: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297708u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29770c:
    // 0x29770c: 0x0  nop
    ctx->pc = 0x29770cu;
    // NOP
label_297710:
    // 0x297710: 0x20fef  .word       0x00020FEF                   # dsubu       $at, $zero, $v0 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297710u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
label_297714:
    // 0x297714: 0xd8  .word       0x000000D8                   # mult        $zero, $zero, $zero # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x297714u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_297718:
    // 0x297718: 0x6bc60  .word       0x0006BC60                   # add         $s7, $zero, $a2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297718u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_29771c:
    // 0x29771c: 0x0  nop
    ctx->pc = 0x29771cu;
    // NOP
label_297720:
    // 0x297720: 0x210c7  .word       0x000210C7                   # srav        $v0, $v0, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297720u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_297724:
    // 0x297724: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297724u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297724 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297728:
    // 0x297728: 0x6b0  tge         $zero, $zero, 26
    ctx->pc = 0x297728u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29772c:
    // 0x29772c: 0x0  nop
    ctx->pc = 0x29772cu;
    // NOP
label_297730:
    // 0x297730: 0x210c8  .word       0x000210C8                   # jr          $zero # 000210C0 <InstrIdType: CPU_SPECIAL>
label_297734:
    if (ctx->pc == 0x297734u) {
        ctx->pc = 0x297734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297730u;
        // 0x297734: 0xbc  dsll32      $zero, $zero, 2 (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297738u;
        goto label_297738;
    }
    ctx->pc = 0x297730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x297734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297730u;
        // 0x297734: 0xbc  dsll32      $zero, $zero, 2 (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297730u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x297738u;
label_297738:
    // 0x297738: 0x5da60  .word       0x0005DA60                   # add         $k1, $zero, $a1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297738u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_29773c:
    // 0x29773c: 0x0  nop
    ctx->pc = 0x29773cu;
    // NOP
label_297740:
    // 0x297740: 0x21184  .word       0x00021184                   # sllv        $v0, $v0, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_297744:
    // 0x297744: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297744u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297744 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297748:
    // 0x297748: 0x5d0  .word       0x000005D0                   # mfhi        $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297748u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29774c:
    // 0x29774c: 0x0  nop
    ctx->pc = 0x29774cu;
    // NOP
label_297750:
    // 0x297750: 0x21185  .word       0x00021185                   # INVALID     $zero, $v0, 0x1185 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297750u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x297750 raw=0x00021185"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297754:
    // 0x297754: 0xa0  .word       0x000000A0                   # add         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297754u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_297758:
    // 0x297758: 0x4fe50  .word       0x0004FE50                   # mfhi        $ra # 00040640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297758u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_29775c:
    // 0x29775c: 0x0  nop
    ctx->pc = 0x29775cu;
    // NOP
label_297760:
    // 0x297760: 0x21225  .word       0x00021225                   # or          $v0, $zero, $v0 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | GPR_U64(ctx, 2));
label_297764:
    // 0x297764: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297764u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297764 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297768:
    // 0x297768: 0x630  tge         $zero, $zero, 24
    ctx->pc = 0x297768u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29776c:
    // 0x29776c: 0x0  nop
    ctx->pc = 0x29776cu;
    // NOP
label_297770:
    // 0x297770: 0x21226  .word       0x00021226                   # xor         $v0, $zero, $v0 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 2));
label_297774:
    // 0x297774: 0xbf  dsra32      $zero, $zero, 2
    ctx->pc = 0x297774u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 2));
label_297778:
    // 0x297778: 0x5f150  .word       0x0005F150                   # mfhi        $fp # 00050140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297778u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_29777c:
    // 0x29777c: 0x0  nop
    ctx->pc = 0x29777cu;
    // NOP
label_297780:
    // 0x297780: 0x212e5  .word       0x000212E5                   # or          $v0, $zero, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | GPR_U64(ctx, 2));
label_297784:
    // 0x297784: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297784u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297784 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297788:
    // 0x297788: 0x5b0  tge         $zero, $zero, 22
    ctx->pc = 0x297788u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29778c:
    // 0x29778c: 0x0  nop
    ctx->pc = 0x29778cu;
    // NOP
label_297790:
    // 0x297790: 0x212e6  .word       0x000212E6                   # xor         $v0, $zero, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 2));
label_297794:
    // 0x297794: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297794u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297794 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297798:
    // 0x297798: 0x2bb  dsra        $zero, $zero, 10
    ctx->pc = 0x297798u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 10);
label_29779c:
    // 0x29779c: 0x0  nop
    ctx->pc = 0x29779cu;
    // NOP
label_2977a0:
    // 0x2977a0: 0x212e7  .word       0x000212E7                   # nor         $v0, $zero, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2977a0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2977a4:
    // 0x2977a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2977a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2977A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2977a8:
    // 0x2977a8: 0x307  .word       0x00000307                   # srav        $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2977a8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2977ac:
    // 0x2977ac: 0x0  nop
    ctx->pc = 0x2977acu;
    // NOP
label_2977b0:
    // 0x2977b0: 0x212e8  .word       0x000212E8                   # mfsa        $v0 # 000202C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2977b0u;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_2977b4:
    // 0x2977b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2977b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2977B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2977b8:
    // 0x2977b8: 0x32b  .word       0x0000032B                   # sltu        $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2977b8u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2977bc:
    // 0x2977bc: 0x0  nop
    ctx->pc = 0x2977bcu;
    // NOP
label_2977c0:
    // 0x2977c0: 0x212e9  .word       0x000212E9                   # mtsa        $zero # 000212C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2977c0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2977c4:
    // 0x2977c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2977c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2977C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2977c8:
    // 0x2977c8: 0x339  .word       0x00000339                   # INVALID     $zero, $zero, 0x339 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2977c8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2977C8 raw=0x00000339"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2977cc:
    // 0x2977cc: 0x0  nop
    ctx->pc = 0x2977ccu;
    // NOP
label_2977d0:
    // 0x2977d0: 0x212ea  .word       0x000212EA                   # slt         $v0, $zero, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2977d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2977d4:
    // 0x2977d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2977d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2977D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2977d8:
    // 0x2977d8: 0x344  .word       0x00000344                   # sllv        $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2977d8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2977dc:
    // 0x2977dc: 0x0  nop
    ctx->pc = 0x2977dcu;
    // NOP
label_2977e0:
    // 0x2977e0: 0x212eb  .word       0x000212EB                   # sltu        $v0, $zero, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2977e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2977e4:
    // 0x2977e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2977e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2977E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2977e8:
    // 0x2977e8: 0x2f1  tgeu        $zero, $zero, 11
    ctx->pc = 0x2977e8u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2977ec:
    // 0x2977ec: 0x0  nop
    ctx->pc = 0x2977ecu;
    // NOP
label_2977f0:
    // 0x2977f0: 0x212ec  .word       0x000212EC                   # dadd        $v0, $zero, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2977f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_2977f4:
    // 0x2977f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2977f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2977F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2977f8:
    // 0x2977f8: 0x2d9  .word       0x000002D9                   # multu       $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2977f8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2977fc:
    // 0x2977fc: 0x0  nop
    ctx->pc = 0x2977fcu;
    // NOP
label_297800:
    // 0x297800: 0x212ed  .word       0x000212ED                   # daddu       $v0, $zero, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297800u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 2));
label_297804:
    // 0x297804: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297804u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297804 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297808:
    // 0x297808: 0x2cc  syscall     11
    ctx->pc = 0x297808u;
    ctx->pc = 0x29780Cu;
runtime->handleSyscall(rdram, ctx, 0xBu);
label_29780c:
    // 0x29780c: 0x0  nop
    ctx->pc = 0x29780cu;
    // NOP
label_297810:
    // 0x297810: 0x212ee  .word       0x000212EE                   # dsub        $v0, $zero, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297810u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_297814:
    // 0x297814: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297814u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297814 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297818:
    // 0x297818: 0x2b4  teq         $zero, $zero, 10
    ctx->pc = 0x297818u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29781c:
    // 0x29781c: 0x0  nop
    ctx->pc = 0x29781cu;
    // NOP
label_297820:
    // 0x297820: 0x212ef  .word       0x000212EF                   # dsubu       $v0, $zero, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
label_297824:
    // 0x297824: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297824u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297824 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297828:
    // 0x297828: 0x385  .word       0x00000385                   # INVALID     $zero, $zero, 0x385 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297828u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x297828 raw=0x00000385"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29782c:
    // 0x29782c: 0x0  nop
    ctx->pc = 0x29782cu;
    // NOP
label_297830:
    // 0x297830: 0x212f0  tge         $zero, $v0, 75
    ctx->pc = 0x297830u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_297834:
    // 0x297834: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297834u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297834 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297838:
    // 0x297838: 0x345  .word       0x00000345                   # INVALID     $zero, $zero, 0x345 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297838u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x297838 raw=0x00000345"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29783c:
    // 0x29783c: 0x0  nop
    ctx->pc = 0x29783cu;
    // NOP
label_297840:
    // 0x297840: 0x212f1  tgeu        $zero, $v0, 75
    ctx->pc = 0x297840u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_297844:
    // 0x297844: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x297844u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x297844 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_297848:
    // 0x297848: 0x338  dsll        $zero, $zero, 12
    ctx->pc = 0x297848u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 12);
label_29784c:
    // 0x29784c: 0x0  nop
    ctx->pc = 0x29784cu;
    // NOP
    ctx->pc = 0x297850u;
    return;
}
