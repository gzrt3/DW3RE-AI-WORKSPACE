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

// Function: FUN_0019b618
// Address: 0x19b618 - 0x29b620
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b618_part506(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x291f68u: goto label_291f68;
        case 0x291f6cu: goto label_291f6c;
        case 0x291f70u: goto label_291f70;
        case 0x291f74u: goto label_291f74;
        case 0x291f78u: goto label_291f78;
        case 0x291f7cu: goto label_291f7c;
        case 0x291f80u: goto label_291f80;
        case 0x291f84u: goto label_291f84;
        case 0x291f88u: goto label_291f88;
        case 0x291f8cu: goto label_291f8c;
        case 0x291f90u: goto label_291f90;
        case 0x291f94u: goto label_291f94;
        case 0x291f98u: goto label_291f98;
        case 0x291f9cu: goto label_291f9c;
        case 0x291fa0u: goto label_291fa0;
        case 0x291fa4u: goto label_291fa4;
        case 0x291fa8u: goto label_291fa8;
        case 0x291facu: goto label_291fac;
        case 0x291fb0u: goto label_291fb0;
        case 0x291fb4u: goto label_291fb4;
        case 0x291fb8u: goto label_291fb8;
        case 0x291fbcu: goto label_291fbc;
        case 0x291fc0u: goto label_291fc0;
        case 0x291fc4u: goto label_291fc4;
        case 0x291fc8u: goto label_291fc8;
        case 0x291fccu: goto label_291fcc;
        case 0x291fd0u: goto label_291fd0;
        case 0x291fd4u: goto label_291fd4;
        case 0x291fd8u: goto label_291fd8;
        case 0x291fdcu: goto label_291fdc;
        case 0x291fe0u: goto label_291fe0;
        case 0x291fe4u: goto label_291fe4;
        case 0x291fe8u: goto label_291fe8;
        case 0x291fecu: goto label_291fec;
        case 0x291ff0u: goto label_291ff0;
        case 0x291ff4u: goto label_291ff4;
        case 0x291ff8u: goto label_291ff8;
        case 0x291ffcu: goto label_291ffc;
        case 0x292000u: goto label_292000;
        case 0x292004u: goto label_292004;
        case 0x292008u: goto label_292008;
        case 0x29200cu: goto label_29200c;
        case 0x292010u: goto label_292010;
        case 0x292014u: goto label_292014;
        case 0x292018u: goto label_292018;
        case 0x29201cu: goto label_29201c;
        case 0x292020u: goto label_292020;
        case 0x292024u: goto label_292024;
        case 0x292028u: goto label_292028;
        case 0x29202cu: goto label_29202c;
        case 0x292030u: goto label_292030;
        case 0x292034u: goto label_292034;
        case 0x292038u: goto label_292038;
        case 0x29203cu: goto label_29203c;
        case 0x292040u: goto label_292040;
        case 0x292044u: goto label_292044;
        case 0x292048u: goto label_292048;
        case 0x29204cu: goto label_29204c;
        case 0x292050u: goto label_292050;
        case 0x292054u: goto label_292054;
        case 0x292058u: goto label_292058;
        case 0x29205cu: goto label_29205c;
        case 0x292060u: goto label_292060;
        case 0x292064u: goto label_292064;
        case 0x292068u: goto label_292068;
        case 0x29206cu: goto label_29206c;
        case 0x292070u: goto label_292070;
        case 0x292074u: goto label_292074;
        case 0x292078u: goto label_292078;
        case 0x29207cu: goto label_29207c;
        case 0x292080u: goto label_292080;
        case 0x292084u: goto label_292084;
        case 0x292088u: goto label_292088;
        case 0x29208cu: goto label_29208c;
        case 0x292090u: goto label_292090;
        case 0x292094u: goto label_292094;
        case 0x292098u: goto label_292098;
        case 0x29209cu: goto label_29209c;
        case 0x2920a0u: goto label_2920a0;
        case 0x2920a4u: goto label_2920a4;
        case 0x2920a8u: goto label_2920a8;
        case 0x2920acu: goto label_2920ac;
        case 0x2920b0u: goto label_2920b0;
        case 0x2920b4u: goto label_2920b4;
        case 0x2920b8u: goto label_2920b8;
        case 0x2920bcu: goto label_2920bc;
        case 0x2920c0u: goto label_2920c0;
        case 0x2920c4u: goto label_2920c4;
        case 0x2920c8u: goto label_2920c8;
        case 0x2920ccu: goto label_2920cc;
        case 0x2920d0u: goto label_2920d0;
        case 0x2920d4u: goto label_2920d4;
        case 0x2920d8u: goto label_2920d8;
        case 0x2920dcu: goto label_2920dc;
        case 0x2920e0u: goto label_2920e0;
        case 0x2920e4u: goto label_2920e4;
        case 0x2920e8u: goto label_2920e8;
        case 0x2920ecu: goto label_2920ec;
        case 0x2920f0u: goto label_2920f0;
        case 0x2920f4u: goto label_2920f4;
        case 0x2920f8u: goto label_2920f8;
        case 0x2920fcu: goto label_2920fc;
        case 0x292100u: goto label_292100;
        case 0x292104u: goto label_292104;
        case 0x292108u: goto label_292108;
        case 0x29210cu: goto label_29210c;
        case 0x292110u: goto label_292110;
        case 0x292114u: goto label_292114;
        case 0x292118u: goto label_292118;
        case 0x29211cu: goto label_29211c;
        case 0x292120u: goto label_292120;
        case 0x292124u: goto label_292124;
        case 0x292128u: goto label_292128;
        case 0x29212cu: goto label_29212c;
        case 0x292130u: goto label_292130;
        case 0x292134u: goto label_292134;
        case 0x292138u: goto label_292138;
        case 0x29213cu: goto label_29213c;
        case 0x292140u: goto label_292140;
        case 0x292144u: goto label_292144;
        case 0x292148u: goto label_292148;
        case 0x29214cu: goto label_29214c;
        case 0x292150u: goto label_292150;
        case 0x292154u: goto label_292154;
        case 0x292158u: goto label_292158;
        case 0x29215cu: goto label_29215c;
        case 0x292160u: goto label_292160;
        case 0x292164u: goto label_292164;
        case 0x292168u: goto label_292168;
        case 0x29216cu: goto label_29216c;
        case 0x292170u: goto label_292170;
        case 0x292174u: goto label_292174;
        case 0x292178u: goto label_292178;
        case 0x29217cu: goto label_29217c;
        case 0x292180u: goto label_292180;
        case 0x292184u: goto label_292184;
        case 0x292188u: goto label_292188;
        case 0x29218cu: goto label_29218c;
        case 0x292190u: goto label_292190;
        case 0x292194u: goto label_292194;
        case 0x292198u: goto label_292198;
        case 0x29219cu: goto label_29219c;
        case 0x2921a0u: goto label_2921a0;
        case 0x2921a4u: goto label_2921a4;
        case 0x2921a8u: goto label_2921a8;
        case 0x2921acu: goto label_2921ac;
        case 0x2921b0u: goto label_2921b0;
        case 0x2921b4u: goto label_2921b4;
        case 0x2921b8u: goto label_2921b8;
        case 0x2921bcu: goto label_2921bc;
        case 0x2921c0u: goto label_2921c0;
        case 0x2921c4u: goto label_2921c4;
        case 0x2921c8u: goto label_2921c8;
        case 0x2921ccu: goto label_2921cc;
        case 0x2921d0u: goto label_2921d0;
        case 0x2921d4u: goto label_2921d4;
        case 0x2921d8u: goto label_2921d8;
        case 0x2921dcu: goto label_2921dc;
        case 0x2921e0u: goto label_2921e0;
        case 0x2921e4u: goto label_2921e4;
        case 0x2921e8u: goto label_2921e8;
        case 0x2921ecu: goto label_2921ec;
        case 0x2921f0u: goto label_2921f0;
        case 0x2921f4u: goto label_2921f4;
        case 0x2921f8u: goto label_2921f8;
        case 0x2921fcu: goto label_2921fc;
        case 0x292200u: goto label_292200;
        case 0x292204u: goto label_292204;
        case 0x292208u: goto label_292208;
        case 0x29220cu: goto label_29220c;
        case 0x292210u: goto label_292210;
        case 0x292214u: goto label_292214;
        case 0x292218u: goto label_292218;
        case 0x29221cu: goto label_29221c;
        case 0x292220u: goto label_292220;
        case 0x292224u: goto label_292224;
        case 0x292228u: goto label_292228;
        case 0x29222cu: goto label_29222c;
        case 0x292230u: goto label_292230;
        case 0x292234u: goto label_292234;
        case 0x292238u: goto label_292238;
        case 0x29223cu: goto label_29223c;
        case 0x292240u: goto label_292240;
        case 0x292244u: goto label_292244;
        case 0x292248u: goto label_292248;
        case 0x29224cu: goto label_29224c;
        case 0x292250u: goto label_292250;
        case 0x292254u: goto label_292254;
        case 0x292258u: goto label_292258;
        case 0x29225cu: goto label_29225c;
        case 0x292260u: goto label_292260;
        case 0x292264u: goto label_292264;
        case 0x292268u: goto label_292268;
        case 0x29226cu: goto label_29226c;
        case 0x292270u: goto label_292270;
        case 0x292274u: goto label_292274;
        case 0x292278u: goto label_292278;
        case 0x29227cu: goto label_29227c;
        case 0x292280u: goto label_292280;
        case 0x292284u: goto label_292284;
        case 0x292288u: goto label_292288;
        case 0x29228cu: goto label_29228c;
        case 0x292290u: goto label_292290;
        case 0x292294u: goto label_292294;
        case 0x292298u: goto label_292298;
        case 0x29229cu: goto label_29229c;
        case 0x2922a0u: goto label_2922a0;
        case 0x2922a4u: goto label_2922a4;
        case 0x2922a8u: goto label_2922a8;
        case 0x2922acu: goto label_2922ac;
        case 0x2922b0u: goto label_2922b0;
        case 0x2922b4u: goto label_2922b4;
        case 0x2922b8u: goto label_2922b8;
        case 0x2922bcu: goto label_2922bc;
        case 0x2922c0u: goto label_2922c0;
        case 0x2922c4u: goto label_2922c4;
        case 0x2922c8u: goto label_2922c8;
        case 0x2922ccu: goto label_2922cc;
        case 0x2922d0u: goto label_2922d0;
        case 0x2922d4u: goto label_2922d4;
        case 0x2922d8u: goto label_2922d8;
        case 0x2922dcu: goto label_2922dc;
        case 0x2922e0u: goto label_2922e0;
        case 0x2922e4u: goto label_2922e4;
        case 0x2922e8u: goto label_2922e8;
        case 0x2922ecu: goto label_2922ec;
        case 0x2922f0u: goto label_2922f0;
        case 0x2922f4u: goto label_2922f4;
        case 0x2922f8u: goto label_2922f8;
        case 0x2922fcu: goto label_2922fc;
        case 0x292300u: goto label_292300;
        case 0x292304u: goto label_292304;
        case 0x292308u: goto label_292308;
        case 0x29230cu: goto label_29230c;
        case 0x292310u: goto label_292310;
        case 0x292314u: goto label_292314;
        case 0x292318u: goto label_292318;
        case 0x29231cu: goto label_29231c;
        case 0x292320u: goto label_292320;
        case 0x292324u: goto label_292324;
        case 0x292328u: goto label_292328;
        case 0x29232cu: goto label_29232c;
        case 0x292330u: goto label_292330;
        case 0x292334u: goto label_292334;
        case 0x292338u: goto label_292338;
        case 0x29233cu: goto label_29233c;
        case 0x292340u: goto label_292340;
        case 0x292344u: goto label_292344;
        case 0x292348u: goto label_292348;
        case 0x29234cu: goto label_29234c;
        case 0x292350u: goto label_292350;
        case 0x292354u: goto label_292354;
        case 0x292358u: goto label_292358;
        case 0x29235cu: goto label_29235c;
        case 0x292360u: goto label_292360;
        case 0x292364u: goto label_292364;
        case 0x292368u: goto label_292368;
        case 0x29236cu: goto label_29236c;
        case 0x292370u: goto label_292370;
        case 0x292374u: goto label_292374;
        case 0x292378u: goto label_292378;
        case 0x29237cu: goto label_29237c;
        case 0x292380u: goto label_292380;
        case 0x292384u: goto label_292384;
        case 0x292388u: goto label_292388;
        case 0x29238cu: goto label_29238c;
        case 0x292390u: goto label_292390;
        case 0x292394u: goto label_292394;
        case 0x292398u: goto label_292398;
        case 0x29239cu: goto label_29239c;
        case 0x2923a0u: goto label_2923a0;
        case 0x2923a4u: goto label_2923a4;
        case 0x2923a8u: goto label_2923a8;
        case 0x2923acu: goto label_2923ac;
        case 0x2923b0u: goto label_2923b0;
        case 0x2923b4u: goto label_2923b4;
        case 0x2923b8u: goto label_2923b8;
        case 0x2923bcu: goto label_2923bc;
        case 0x2923c0u: goto label_2923c0;
        case 0x2923c4u: goto label_2923c4;
        case 0x2923c8u: goto label_2923c8;
        case 0x2923ccu: goto label_2923cc;
        case 0x2923d0u: goto label_2923d0;
        case 0x2923d4u: goto label_2923d4;
        case 0x2923d8u: goto label_2923d8;
        case 0x2923dcu: goto label_2923dc;
        case 0x2923e0u: goto label_2923e0;
        case 0x2923e4u: goto label_2923e4;
        case 0x2923e8u: goto label_2923e8;
        case 0x2923ecu: goto label_2923ec;
        case 0x2923f0u: goto label_2923f0;
        case 0x2923f4u: goto label_2923f4;
        case 0x2923f8u: goto label_2923f8;
        case 0x2923fcu: goto label_2923fc;
        case 0x292400u: goto label_292400;
        case 0x292404u: goto label_292404;
        case 0x292408u: goto label_292408;
        case 0x29240cu: goto label_29240c;
        case 0x292410u: goto label_292410;
        case 0x292414u: goto label_292414;
        case 0x292418u: goto label_292418;
        case 0x29241cu: goto label_29241c;
        case 0x292420u: goto label_292420;
        case 0x292424u: goto label_292424;
        case 0x292428u: goto label_292428;
        case 0x29242cu: goto label_29242c;
        case 0x292430u: goto label_292430;
        case 0x292434u: goto label_292434;
        case 0x292438u: goto label_292438;
        case 0x29243cu: goto label_29243c;
        case 0x292440u: goto label_292440;
        case 0x292444u: goto label_292444;
        case 0x292448u: goto label_292448;
        case 0x29244cu: goto label_29244c;
        case 0x292450u: goto label_292450;
        case 0x292454u: goto label_292454;
        case 0x292458u: goto label_292458;
        case 0x29245cu: goto label_29245c;
        case 0x292460u: goto label_292460;
        case 0x292464u: goto label_292464;
        case 0x292468u: goto label_292468;
        case 0x29246cu: goto label_29246c;
        case 0x292470u: goto label_292470;
        case 0x292474u: goto label_292474;
        case 0x292478u: goto label_292478;
        case 0x29247cu: goto label_29247c;
        case 0x292480u: goto label_292480;
        case 0x292484u: goto label_292484;
        case 0x292488u: goto label_292488;
        case 0x29248cu: goto label_29248c;
        case 0x292490u: goto label_292490;
        case 0x292494u: goto label_292494;
        case 0x292498u: goto label_292498;
        case 0x29249cu: goto label_29249c;
        case 0x2924a0u: goto label_2924a0;
        case 0x2924a4u: goto label_2924a4;
        case 0x2924a8u: goto label_2924a8;
        case 0x2924acu: goto label_2924ac;
        case 0x2924b0u: goto label_2924b0;
        case 0x2924b4u: goto label_2924b4;
        case 0x2924b8u: goto label_2924b8;
        case 0x2924bcu: goto label_2924bc;
        case 0x2924c0u: goto label_2924c0;
        case 0x2924c4u: goto label_2924c4;
        case 0x2924c8u: goto label_2924c8;
        case 0x2924ccu: goto label_2924cc;
        case 0x2924d0u: goto label_2924d0;
        case 0x2924d4u: goto label_2924d4;
        case 0x2924d8u: goto label_2924d8;
        case 0x2924dcu: goto label_2924dc;
        case 0x2924e0u: goto label_2924e0;
        case 0x2924e4u: goto label_2924e4;
        case 0x2924e8u: goto label_2924e8;
        case 0x2924ecu: goto label_2924ec;
        case 0x2924f0u: goto label_2924f0;
        case 0x2924f4u: goto label_2924f4;
        case 0x2924f8u: goto label_2924f8;
        case 0x2924fcu: goto label_2924fc;
        case 0x292500u: goto label_292500;
        case 0x292504u: goto label_292504;
        case 0x292508u: goto label_292508;
        case 0x29250cu: goto label_29250c;
        case 0x292510u: goto label_292510;
        case 0x292514u: goto label_292514;
        case 0x292518u: goto label_292518;
        case 0x29251cu: goto label_29251c;
        case 0x292520u: goto label_292520;
        case 0x292524u: goto label_292524;
        case 0x292528u: goto label_292528;
        case 0x29252cu: goto label_29252c;
        case 0x292530u: goto label_292530;
        case 0x292534u: goto label_292534;
        case 0x292538u: goto label_292538;
        case 0x29253cu: goto label_29253c;
        case 0x292540u: goto label_292540;
        case 0x292544u: goto label_292544;
        case 0x292548u: goto label_292548;
        case 0x29254cu: goto label_29254c;
        case 0x292550u: goto label_292550;
        case 0x292554u: goto label_292554;
        case 0x292558u: goto label_292558;
        case 0x29255cu: goto label_29255c;
        case 0x292560u: goto label_292560;
        case 0x292564u: goto label_292564;
        case 0x292568u: goto label_292568;
        case 0x29256cu: goto label_29256c;
        case 0x292570u: goto label_292570;
        case 0x292574u: goto label_292574;
        case 0x292578u: goto label_292578;
        case 0x29257cu: goto label_29257c;
        case 0x292580u: goto label_292580;
        case 0x292584u: goto label_292584;
        case 0x292588u: goto label_292588;
        case 0x29258cu: goto label_29258c;
        case 0x292590u: goto label_292590;
        case 0x292594u: goto label_292594;
        case 0x292598u: goto label_292598;
        case 0x29259cu: goto label_29259c;
        case 0x2925a0u: goto label_2925a0;
        case 0x2925a4u: goto label_2925a4;
        case 0x2925a8u: goto label_2925a8;
        case 0x2925acu: goto label_2925ac;
        case 0x2925b0u: goto label_2925b0;
        case 0x2925b4u: goto label_2925b4;
        case 0x2925b8u: goto label_2925b8;
        case 0x2925bcu: goto label_2925bc;
        case 0x2925c0u: goto label_2925c0;
        case 0x2925c4u: goto label_2925c4;
        case 0x2925c8u: goto label_2925c8;
        case 0x2925ccu: goto label_2925cc;
        case 0x2925d0u: goto label_2925d0;
        case 0x2925d4u: goto label_2925d4;
        case 0x2925d8u: goto label_2925d8;
        case 0x2925dcu: goto label_2925dc;
        case 0x2925e0u: goto label_2925e0;
        case 0x2925e4u: goto label_2925e4;
        case 0x2925e8u: goto label_2925e8;
        case 0x2925ecu: goto label_2925ec;
        case 0x2925f0u: goto label_2925f0;
        case 0x2925f4u: goto label_2925f4;
        case 0x2925f8u: goto label_2925f8;
        case 0x2925fcu: goto label_2925fc;
        case 0x292600u: goto label_292600;
        case 0x292604u: goto label_292604;
        case 0x292608u: goto label_292608;
        case 0x29260cu: goto label_29260c;
        case 0x292610u: goto label_292610;
        case 0x292614u: goto label_292614;
        case 0x292618u: goto label_292618;
        case 0x29261cu: goto label_29261c;
        case 0x292620u: goto label_292620;
        case 0x292624u: goto label_292624;
        case 0x292628u: goto label_292628;
        case 0x29262cu: goto label_29262c;
        case 0x292630u: goto label_292630;
        case 0x292634u: goto label_292634;
        case 0x292638u: goto label_292638;
        case 0x29263cu: goto label_29263c;
        case 0x292640u: goto label_292640;
        case 0x292644u: goto label_292644;
        case 0x292648u: goto label_292648;
        case 0x29264cu: goto label_29264c;
        case 0x292650u: goto label_292650;
        case 0x292654u: goto label_292654;
        case 0x292658u: goto label_292658;
        case 0x29265cu: goto label_29265c;
        case 0x292660u: goto label_292660;
        case 0x292664u: goto label_292664;
        case 0x292668u: goto label_292668;
        case 0x29266cu: goto label_29266c;
        case 0x292670u: goto label_292670;
        case 0x292674u: goto label_292674;
        case 0x292678u: goto label_292678;
        case 0x29267cu: goto label_29267c;
        case 0x292680u: goto label_292680;
        case 0x292684u: goto label_292684;
        case 0x292688u: goto label_292688;
        case 0x29268cu: goto label_29268c;
        case 0x292690u: goto label_292690;
        case 0x292694u: goto label_292694;
        case 0x292698u: goto label_292698;
        case 0x29269cu: goto label_29269c;
        case 0x2926a0u: goto label_2926a0;
        case 0x2926a4u: goto label_2926a4;
        case 0x2926a8u: goto label_2926a8;
        case 0x2926acu: goto label_2926ac;
        case 0x2926b0u: goto label_2926b0;
        case 0x2926b4u: goto label_2926b4;
        case 0x2926b8u: goto label_2926b8;
        case 0x2926bcu: goto label_2926bc;
        case 0x2926c0u: goto label_2926c0;
        case 0x2926c4u: goto label_2926c4;
        case 0x2926c8u: goto label_2926c8;
        case 0x2926ccu: goto label_2926cc;
        case 0x2926d0u: goto label_2926d0;
        case 0x2926d4u: goto label_2926d4;
        case 0x2926d8u: goto label_2926d8;
        case 0x2926dcu: goto label_2926dc;
        case 0x2926e0u: goto label_2926e0;
        case 0x2926e4u: goto label_2926e4;
        case 0x2926e8u: goto label_2926e8;
        case 0x2926ecu: goto label_2926ec;
        case 0x2926f0u: goto label_2926f0;
        case 0x2926f4u: goto label_2926f4;
        case 0x2926f8u: goto label_2926f8;
        case 0x2926fcu: goto label_2926fc;
        case 0x292700u: goto label_292700;
        case 0x292704u: goto label_292704;
        case 0x292708u: goto label_292708;
        case 0x29270cu: goto label_29270c;
        case 0x292710u: goto label_292710;
        case 0x292714u: goto label_292714;
        case 0x292718u: goto label_292718;
        case 0x29271cu: goto label_29271c;
        case 0x292720u: goto label_292720;
        case 0x292724u: goto label_292724;
        case 0x292728u: goto label_292728;
        case 0x29272cu: goto label_29272c;
        case 0x292730u: goto label_292730;
        case 0x292734u: goto label_292734;
        default: return;
    }

label_291f68:
    // 0x291f68: 0x12500  sll         $a0, $at, 20
    ctx->pc = 0x291f68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 20));
label_291f6c:
    // 0x291f6c: 0x0  nop
    ctx->pc = 0x291f6cu;
    // NOP
label_291f70:
    // 0x291f70: 0x717b  dsra        $t6, $zero, 5
    ctx->pc = 0x291f70u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 0) >> 5);
label_291f74:
    // 0x291f74: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291f74u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291f78:
    // 0x291f78: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291f78u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291f7c:
    // 0x291f7c: 0x0  nop
    ctx->pc = 0x291f7cu;
    // NOP
label_291f80:
    // 0x291f80: 0x7196  .word       0x00007196                   # dsrlv       $t6, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291f80u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_291f84:
    // 0x291f84: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291f84u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291f88:
    // 0x291f88: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291f88u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291f8c:
    // 0x291f8c: 0x0  nop
    ctx->pc = 0x291f8cu;
    // NOP
label_291f90:
    // 0x291f90: 0x71b1  tgeu        $zero, $zero, 454
    ctx->pc = 0x291f90u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291f94:
    // 0x291f94: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291f94u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291f98:
    // 0x291f98: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291f98u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291f9c:
    // 0x291f9c: 0x0  nop
    ctx->pc = 0x291f9cu;
    // NOP
label_291fa0:
    // 0x291fa0: 0x71cc  syscall     455
    ctx->pc = 0x291fa0u;
    ctx->pc = 0x291FA4u;
runtime->handleSyscall(rdram, ctx, 0x1C7u);
label_291fa4:
    // 0x291fa4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291fa4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291fa8:
    // 0x291fa8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291fa8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291fac:
    // 0x291fac: 0x0  nop
    ctx->pc = 0x291facu;
    // NOP
label_291fb0:
    // 0x291fb0: 0x71e7  .word       0x000071E7                   # not         $t6, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291fb0u;
    SET_GPR_U64(ctx, 14, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_291fb4:
    // 0x291fb4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291fb4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291fb8:
    // 0x291fb8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291fb8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291fbc:
    // 0x291fbc: 0x0  nop
    ctx->pc = 0x291fbcu;
    // NOP
label_291fc0:
    // 0x291fc0: 0x7202  srl         $t6, $zero, 8
    ctx->pc = 0x291fc0u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_291fc4:
    // 0x291fc4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291fc4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291fc8:
    // 0x291fc8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291fc8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291fcc:
    // 0x291fcc: 0x0  nop
    ctx->pc = 0x291fccu;
    // NOP
label_291fd0:
    // 0x291fd0: 0x721d  .word       0x0000721D                   # dmultu      $zero, $zero # 00007200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291fd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x291FD0 raw=0x0000721D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291fd4:
    // 0x291fd4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291fd4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291fd8:
    // 0x291fd8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291fd8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291fdc:
    // 0x291fdc: 0x0  nop
    ctx->pc = 0x291fdcu;
    // NOP
label_291fe0:
    // 0x291fe0: 0x7238  dsll        $t6, $zero, 8
    ctx->pc = 0x291fe0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) << 8);
label_291fe4:
    // 0x291fe4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291fe4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291fe8:
    // 0x291fe8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291fe8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291fec:
    // 0x291fec: 0x0  nop
    ctx->pc = 0x291fecu;
    // NOP
label_291ff0:
    // 0x291ff0: 0x7253  .word       0x00007253                   # mtlo        $zero # 00007240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291ff0u;
    ctx->lo = GPR_U64(ctx, 0);
label_291ff4:
    // 0x291ff4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291ff4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291ff8:
    // 0x291ff8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291ff8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291ffc:
    // 0x291ffc: 0x0  nop
    ctx->pc = 0x291ffcu;
    // NOP
label_292000:
    // 0x292000: 0x726e  .word       0x0000726E                   # dsub        $t6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292000u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_292004:
    // 0x292004: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x292004u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_292008:
    // 0x292008: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292008u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29200c:
    // 0x29200c: 0x0  nop
    ctx->pc = 0x29200cu;
    // NOP
label_292010:
    // 0x292010: 0x7289  .word       0x00007289                   # jalr        $t6, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
label_292014:
    if (ctx->pc == 0x292014u) {
        ctx->pc = 0x292014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292010u;
        // 0x292014: 0x1b  divu        $zero, $zero, $zero (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x292018u;
        goto label_292018;
    }
    ctx->pc = 0x292010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 14, 0x292018u);
        ctx->pc = 0x292014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292010u;
        // 0x292014: 0x1b  divu        $zero, $zero, $zero (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292010u, 0x292018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x292018u;
label_292018:
    // 0x292018: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292018u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29201c:
    // 0x29201c: 0x0  nop
    ctx->pc = 0x29201cu;
    // NOP
label_292020:
    // 0x292020: 0x72a4  .word       0x000072A4                   # and         $t6, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292020u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_292024:
    // 0x292024: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x292024u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_292028:
    // 0x292028: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292028u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29202c:
    // 0x29202c: 0x0  nop
    ctx->pc = 0x29202cu;
    // NOP
label_292030:
    // 0x292030: 0x72bf  dsra32      $t6, $zero, 10
    ctx->pc = 0x292030u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 0) >> (32 + 10));
label_292034:
    // 0x292034: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x292034u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_292038:
    // 0x292038: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292038u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29203c:
    // 0x29203c: 0x0  nop
    ctx->pc = 0x29203cu;
    // NOP
label_292040:
    // 0x292040: 0x72da  .word       0x000072DA                   # div         $t6, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292040u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_292044:
    // 0x292044: 0x36  tne         $zero, $zero, 0
    ctx->pc = 0x292044u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292048:
    // 0x292048: 0x1a880  sll         $s5, $at, 2
    ctx->pc = 0x292048u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 1), 2));
label_29204c:
    // 0x29204c: 0x0  nop
    ctx->pc = 0x29204cu;
    // NOP
label_292050:
    // 0x292050: 0x7310  .word       0x00007310                   # mfhi        $t6 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292050u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_292054:
    // 0x292054: 0x36  tne         $zero, $zero, 0
    ctx->pc = 0x292054u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292058:
    // 0x292058: 0x1a880  sll         $s5, $at, 2
    ctx->pc = 0x292058u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 1), 2));
label_29205c:
    // 0x29205c: 0x0  nop
    ctx->pc = 0x29205cu;
    // NOP
label_292060:
    // 0x292060: 0x7346  .word       0x00007346                   # srlv        $t6, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292060u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_292064:
    // 0x292064: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x292064u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292068:
    // 0x292068: 0x187a0  .word       0x000187A0                   # add         $s0, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292068u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_29206c:
    // 0x29206c: 0x0  nop
    ctx->pc = 0x29206cu;
    // NOP
label_292070:
    // 0x292070: 0x7377  .word       0x00007377                   # INVALID     $zero, $zero, 0x7377 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292070u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x292070 raw=0x00007377"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292074:
    // 0x292074: 0x36  tne         $zero, $zero, 0
    ctx->pc = 0x292074u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292078:
    // 0x292078: 0x1a880  sll         $s5, $at, 2
    ctx->pc = 0x292078u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 1), 2));
label_29207c:
    // 0x29207c: 0x0  nop
    ctx->pc = 0x29207cu;
    // NOP
label_292080:
    // 0x292080: 0x73ad  .word       0x000073AD                   # daddu       $t6, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292080u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_292084:
    // 0x292084: 0x25  move        $zero, $zero
    ctx->pc = 0x292084u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_292088:
    // 0x292088: 0x12500  sll         $a0, $at, 20
    ctx->pc = 0x292088u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 20));
label_29208c:
    // 0x29208c: 0x0  nop
    ctx->pc = 0x29208cu;
    // NOP
label_292090:
    // 0x292090: 0x73d2  .word       0x000073D2                   # mflo        $t6 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292090u;
    SET_GPR_U64(ctx, 14, ctx->lo);
label_292094:
    // 0x292094: 0x25  move        $zero, $zero
    ctx->pc = 0x292094u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_292098:
    // 0x292098: 0x12500  sll         $a0, $at, 20
    ctx->pc = 0x292098u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 20));
label_29209c:
    // 0x29209c: 0x0  nop
    ctx->pc = 0x29209cu;
    // NOP
label_2920a0:
    // 0x2920a0: 0x73f7  .word       0x000073F7                   # INVALID     $zero, $zero, 0x73F7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2920a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2920A0 raw=0x000073F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2920a4:
    // 0x2920a4: 0x36  tne         $zero, $zero, 0
    ctx->pc = 0x2920a4u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2920a8:
    // 0x2920a8: 0x1a880  sll         $s5, $at, 2
    ctx->pc = 0x2920a8u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 1), 2));
label_2920ac:
    // 0x2920ac: 0x0  nop
    ctx->pc = 0x2920acu;
    // NOP
label_2920b0:
    // 0x2920b0: 0x742d  .word       0x0000742D                   # daddu       $t6, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2920b0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2920b4:
    // 0x2920b4: 0x25  move        $zero, $zero
    ctx->pc = 0x2920b4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2920b8:
    // 0x2920b8: 0x12500  sll         $a0, $at, 20
    ctx->pc = 0x2920b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 20));
label_2920bc:
    // 0x2920bc: 0x0  nop
    ctx->pc = 0x2920bcu;
    // NOP
label_2920c0:
    // 0x2920c0: 0x7452  .word       0x00007452                   # mflo        $t6 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2920c0u;
    SET_GPR_U64(ctx, 14, ctx->lo);
label_2920c4:
    // 0x2920c4: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2920c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2920C4 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2920c8:
    // 0x2920c8: 0xa180  sll         $s4, $zero, 6
    ctx->pc = 0x2920c8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_2920cc:
    // 0x2920cc: 0x0  nop
    ctx->pc = 0x2920ccu;
    // NOP
label_2920d0:
    // 0x2920d0: 0x7467  .word       0x00007467                   # not         $t6, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2920d0u;
    SET_GPR_U64(ctx, 14, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2920d4:
    // 0x2920d4: 0x23  negu        $zero, $zero
    ctx->pc = 0x2920d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2920d8:
    // 0x2920d8: 0x111d0  .word       0x000111D0                   # mfhi        $v0 # 000101C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2920d8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2920dc:
    // 0x2920dc: 0x0  nop
    ctx->pc = 0x2920dcu;
    // NOP
label_2920e0:
    // 0x2920e0: 0x748a  .word       0x0000748A                   # movz        $t6, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2920e0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 0));
label_2920e4:
    // 0x2920e4: 0x19  multu       $zero, $zero
    ctx->pc = 0x2920e4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2920e8:
    // 0x2920e8: 0xc770  tge         $zero, $zero, 797
    ctx->pc = 0x2920e8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2920ec:
    // 0x2920ec: 0x0  nop
    ctx->pc = 0x2920ecu;
    // NOP
label_2920f0:
    // 0x2920f0: 0x74a3  .word       0x000074A3                   # negu        $t6, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2920f0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2920f4:
    // 0x2920f4: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x2920f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2920F4 raw=0x0000001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2920f8:
    // 0x2920f8: 0xdb30  tge         $zero, $zero, 876
    ctx->pc = 0x2920f8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2920fc:
    // 0x2920fc: 0x0  nop
    ctx->pc = 0x2920fcu;
    // NOP
label_292100:
    // 0x292100: 0x74bf  dsra32      $t6, $zero, 18
    ctx->pc = 0x292100u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 0) >> (32 + 18));
label_292104:
    // 0x292104: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x292104u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_292108:
    // 0x292108: 0xd0c0  sll         $k0, $zero, 3
    ctx->pc = 0x292108u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_29210c:
    // 0x29210c: 0x0  nop
    ctx->pc = 0x29210cu;
    // NOP
label_292110:
    // 0x292110: 0x74da  .word       0x000074DA                   # div         $t6, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292110u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_292114:
    // 0x292114: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x292114u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_292118:
    // 0x292118: 0xbdd0  .word       0x0000BDD0                   # mfhi        $s7 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292118u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_29211c:
    // 0x29211c: 0x0  nop
    ctx->pc = 0x29211cu;
    // NOP
label_292120:
    // 0x292120: 0x74f2  tlt         $zero, $zero, 467
    ctx->pc = 0x292120u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292124:
    // 0x292124: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x292124u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x292124 raw=0x0000001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292128:
    // 0x292128: 0xdb60  .word       0x0000DB60                   # add         $k1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292128u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_29212c:
    // 0x29212c: 0x0  nop
    ctx->pc = 0x29212cu;
    // NOP
label_292130:
    // 0x292130: 0x750e  .word       0x0000750E                   # INVALID     $zero, $zero, 0x750E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292130u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x292130 raw=0x0000750E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292134:
    // 0x292134: 0x19  multu       $zero, $zero
    ctx->pc = 0x292134u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_292138:
    // 0x292138: 0xc340  sll         $t8, $zero, 13
    ctx->pc = 0x292138u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_29213c:
    // 0x29213c: 0x0  nop
    ctx->pc = 0x29213cu;
    // NOP
label_292140:
    // 0x292140: 0x7527  .word       0x00007527                   # not         $t6, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292140u;
    SET_GPR_U64(ctx, 14, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_292144:
    // 0x292144: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x292144u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_292148:
    // 0x292148: 0xaf10  .word       0x0000AF10                   # mfhi        $s5 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292148u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_29214c:
    // 0x29214c: 0x0  nop
    ctx->pc = 0x29214cu;
    // NOP
label_292150:
    // 0x292150: 0x753d  .word       0x0000753D                   # INVALID     $zero, $zero, 0x753D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292150u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x292150 raw=0x0000753D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292154:
    // 0x292154: 0x19  multu       $zero, $zero
    ctx->pc = 0x292154u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_292158:
    // 0x292158: 0xc250  .word       0x0000C250                   # mfhi        $t8 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292158u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_29215c:
    // 0x29215c: 0x0  nop
    ctx->pc = 0x29215cu;
    // NOP
label_292160:
    // 0x292160: 0x7556  .word       0x00007556                   # dsrlv       $t6, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292160u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_292164:
    // 0x292164: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x292164u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_292168:
    // 0x292168: 0xa840  sll         $s5, $zero, 1
    ctx->pc = 0x292168u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_29216c:
    // 0x29216c: 0x0  nop
    ctx->pc = 0x29216cu;
    // NOP
label_292170:
    // 0x292170: 0x756c  .word       0x0000756C                   # dadd        $t6, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292170u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_292174:
    // 0x292174: 0x3e  dsrl32      $zero, $zero, 0
    ctx->pc = 0x292174u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 0));
label_292178:
    // 0x292178: 0x1e940  sll         $sp, $at, 5
    ctx->pc = 0x292178u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
label_29217c:
    // 0x29217c: 0x0  nop
    ctx->pc = 0x29217cu;
    // NOP
label_292180:
    // 0x292180: 0x75aa  .word       0x000075AA                   # slt         $t6, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292180u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_292184:
    // 0x292184: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x292184u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_292188:
    // 0x292188: 0x118a0  .word       0x000118A0                   # add         $v1, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292188u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29218c:
    // 0x29218c: 0x0  nop
    ctx->pc = 0x29218cu;
    // NOP
label_292190:
    // 0x292190: 0x75ce  .word       0x000075CE                   # INVALID     $zero, $zero, 0x75CE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292190u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x292190 raw=0x000075CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292194:
    // 0x292194: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x292194u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x292194 raw=0x0000001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292198:
    // 0x292198: 0xe8b0  tge         $zero, $zero, 930
    ctx->pc = 0x292198u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29219c:
    // 0x29219c: 0x0  nop
    ctx->pc = 0x29219cu;
    // NOP
label_2921a0:
    // 0x2921a0: 0x75ec  .word       0x000075EC                   # dadd        $t6, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2921a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_2921a4:
    // 0x2921a4: 0x19  multu       $zero, $zero
    ctx->pc = 0x2921a4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2921a8:
    // 0x2921a8: 0xc060  .word       0x0000C060                   # add         $t8, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2921a8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_2921ac:
    // 0x2921ac: 0x0  nop
    ctx->pc = 0x2921acu;
    // NOP
label_2921b0:
    // 0x2921b0: 0x7605  .word       0x00007605                   # INVALID     $zero, $zero, 0x7605 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2921b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2921B0 raw=0x00007605"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2921b4:
    // 0x2921b4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x2921b4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2921b8:
    // 0x2921b8: 0xd0e0  .word       0x0000D0E0                   # add         $k0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2921b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_2921bc:
    // 0x2921bc: 0x0  nop
    ctx->pc = 0x2921bcu;
    // NOP
label_2921c0:
    // 0x2921c0: 0x7620  .word       0x00007620                   # add         $t6, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2921c0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2921c4:
    // 0x2921c4: 0x1a  div         $zero, $zero, $zero
    ctx->pc = 0x2921c4u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2921c8:
    // 0x2921c8: 0xc8f0  tge         $zero, $zero, 803
    ctx->pc = 0x2921c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2921cc:
    // 0x2921cc: 0x0  nop
    ctx->pc = 0x2921ccu;
    // NOP
label_2921d0:
    // 0x2921d0: 0x763a  dsrl        $t6, $zero, 24
    ctx->pc = 0x2921d0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) >> 24);
label_2921d4:
    // 0x2921d4: 0x19  multu       $zero, $zero
    ctx->pc = 0x2921d4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2921d8:
    // 0x2921d8: 0xc5c0  sll         $t8, $zero, 23
    ctx->pc = 0x2921d8u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_2921dc:
    // 0x2921dc: 0x0  nop
    ctx->pc = 0x2921dcu;
    // NOP
label_2921e0:
    // 0x2921e0: 0x7653  .word       0x00007653                   # mtlo        $zero # 00007640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2921e0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2921e4:
    // 0x2921e4: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2921e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2921E4 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2921e8:
    // 0x2921e8: 0x6e20  .word       0x00006E20                   # add         $t5, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2921e8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2921ec:
    // 0x2921ec: 0x0  nop
    ctx->pc = 0x2921ecu;
    // NOP
label_2921f0:
    // 0x2921f0: 0x7661  .word       0x00007661                   # addu        $t6, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2921f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2921f4:
    // 0x2921f4: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x2921f4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2921f8:
    // 0x2921f8: 0x5410  .word       0x00005410                   # mfhi        $t2 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2921f8u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_2921fc:
    // 0x2921fc: 0x0  nop
    ctx->pc = 0x2921fcu;
    // NOP
label_292200:
    // 0x292200: 0x766c  .word       0x0000766C                   # dadd        $t6, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292200u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_292204:
    // 0x292204: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x292204u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_292208:
    // 0x292208: 0xd510  .word       0x0000D510                   # mfhi        $k0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292208u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29220c:
    // 0x29220c: 0x0  nop
    ctx->pc = 0x29220cu;
    // NOP
label_292210:
    // 0x292210: 0x7687  .word       0x00007687                   # srav        $t6, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292210u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_292214:
    // 0x292214: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292214u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x292214 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292218:
    // 0x292218: 0x6d50  .word       0x00006D50                   # mfhi        $t5 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292218u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_29221c:
    // 0x29221c: 0x0  nop
    ctx->pc = 0x29221cu;
    // NOP
label_292220:
    // 0x292220: 0x7695  .word       0x00007695                   # INVALID     $zero, $zero, 0x7695 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292220u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x292220 raw=0x00007695"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292224:
    // 0x292224: 0x19  multu       $zero, $zero
    ctx->pc = 0x292224u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_292228:
    // 0x292228: 0xc470  tge         $zero, $zero, 785
    ctx->pc = 0x292228u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29222c:
    // 0x29222c: 0x0  nop
    ctx->pc = 0x29222cu;
    // NOP
label_292230:
    // 0x292230: 0x76ae  .word       0x000076AE                   # dsub        $t6, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292230u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_292234:
    // 0x292234: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x292234u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_292238:
    // 0x292238: 0x9b30  tge         $zero, $zero, 620
    ctx->pc = 0x292238u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29223c:
    // 0x29223c: 0x0  nop
    ctx->pc = 0x29223cu;
    // NOP
label_292240:
    // 0x292240: 0x76c2  srl         $t6, $zero, 27
    ctx->pc = 0x292240u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 0), 27));
label_292244:
    // 0x292244: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x292244u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_292248:
    // 0x292248: 0x1db00  sll         $k1, $at, 12
    ctx->pc = 0x292248u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 1), 12));
label_29224c:
    // 0x29224c: 0x0  nop
    ctx->pc = 0x29224cu;
    // NOP
label_292250:
    // 0x292250: 0x76fe  dsrl32      $t6, $zero, 27
    ctx->pc = 0x292250u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) >> (32 + 27));
label_292254:
    // 0x292254: 0xc  syscall     0
    ctx->pc = 0x292254u;
    ctx->pc = 0x292258u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_292258:
    // 0x292258: 0x5f10  .word       0x00005F10                   # mfhi        $t3 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292258u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_29225c:
    // 0x29225c: 0x0  nop
    ctx->pc = 0x29225cu;
    // NOP
label_292260:
    // 0x292260: 0x770a  .word       0x0000770A                   # movz        $t6, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292260u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 0));
label_292264:
    // 0x292264: 0xd  break       0
    ctx->pc = 0x292264u;
    runtime->handleBreak(rdram, ctx);
label_292268:
    // 0x292268: 0x6300  sll         $t4, $zero, 12
    ctx->pc = 0x292268u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_29226c:
    // 0x29226c: 0x0  nop
    ctx->pc = 0x29226cu;
    // NOP
label_292270:
    // 0x292270: 0x7717  .word       0x00007717                   # dsrav       $t6, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292270u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_292274:
    // 0x292274: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x292274u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_292278:
    // 0x292278: 0x5530  tge         $zero, $zero, 340
    ctx->pc = 0x292278u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29227c:
    // 0x29227c: 0x0  nop
    ctx->pc = 0x29227cu;
    // NOP
label_292280:
    // 0x292280: 0x7722  .word       0x00007722                   # neg         $t6, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292280u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_292284:
    // 0x292284: 0x39  .word       0x00000039                   # INVALID     $zero, $zero, 0x39 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292284u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x292284 raw=0x00000039"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292288:
    // 0x292288: 0x1c780  sll         $t8, $at, 30
    ctx->pc = 0x292288u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 1), 30));
label_29228c:
    // 0x29228c: 0x0  nop
    ctx->pc = 0x29228cu;
    // NOP
label_292290:
    // 0x292290: 0x775b  .word       0x0000775B                   # divu        $t6, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292290u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_292294:
    // 0x292294: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x292294u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x292294 raw=0x0000001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292298:
    // 0x292298: 0xf6e0  .word       0x0000F6E0                   # add         $fp, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292298u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_29229c:
    // 0x29229c: 0x0  nop
    ctx->pc = 0x29229cu;
    // NOP
label_2922a0:
    // 0x2922a0: 0x777a  dsrl        $t6, $zero, 29
    ctx->pc = 0x2922a0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) >> 29);
label_2922a4:
    // 0x2922a4: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x2922a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2922A4 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2922a8:
    // 0x2922a8: 0xe480  sll         $gp, $zero, 18
    ctx->pc = 0x2922a8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_2922ac:
    // 0x2922ac: 0x0  nop
    ctx->pc = 0x2922acu;
    // NOP
label_2922b0:
    // 0x2922b0: 0x7797  .word       0x00007797                   # dsrav       $t6, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2922b0u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2922b4:
    // 0x2922b4: 0x1a  div         $zero, $zero, $zero
    ctx->pc = 0x2922b4u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2922b8:
    // 0x2922b8: 0xcf20  .word       0x0000CF20                   # add         $t9, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2922b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_2922bc:
    // 0x2922bc: 0x0  nop
    ctx->pc = 0x2922bcu;
    // NOP
label_2922c0:
    // 0x2922c0: 0x77b1  tgeu        $zero, $zero, 478
    ctx->pc = 0x2922c0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2922c4:
    // 0x2922c4: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2922c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2922C4 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2922c8:
    // 0x2922c8: 0xa420  .word       0x0000A420                   # add         $s4, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2922c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_2922cc:
    // 0x2922cc: 0x0  nop
    ctx->pc = 0x2922ccu;
    // NOP
label_2922d0:
    // 0x2922d0: 0x77c6  .word       0x000077C6                   # srlv        $t6, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2922d0u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2922d4:
    // 0x2922d4: 0x1a  div         $zero, $zero, $zero
    ctx->pc = 0x2922d4u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2922d8:
    // 0x2922d8: 0xcad0  .word       0x0000CAD0                   # mfhi        $t9 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2922d8u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_2922dc:
    // 0x2922dc: 0x0  nop
    ctx->pc = 0x2922dcu;
    // NOP
label_2922e0:
    // 0x2922e0: 0x77e0  .word       0x000077E0                   # add         $t6, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2922e0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2922e4:
    // 0x2922e4: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x2922e4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2922e8:
    // 0x2922e8: 0x12a20  .word       0x00012A20                   # add         $a1, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2922e8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_2922ec:
    // 0x2922ec: 0x0  nop
    ctx->pc = 0x2922ecu;
    // NOP
label_2922f0:
    // 0x2922f0: 0x7806  srlv        $t7, $zero, $zero
    ctx->pc = 0x2922f0u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2922f4:
    // 0x2922f4: 0x41  .word       0x00000041                   # INVALID     $zero, $zero, 0x41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2922f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2922F4 raw=0x00000041"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2922f8:
    // 0x2922f8: 0x20430  tge         $zero, $v0, 16
    ctx->pc = 0x2922f8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_2922fc:
    // 0x2922fc: 0x0  nop
    ctx->pc = 0x2922fcu;
    // NOP
label_292300:
    // 0x292300: 0x7847  .word       0x00007847                   # srav        $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292300u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_292304:
    // 0x292304: 0x1a  div         $zero, $zero, $zero
    ctx->pc = 0x292304u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_292308:
    // 0x292308: 0xcc90  .word       0x0000CC90                   # mfhi        $t9 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292308u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_29230c:
    // 0x29230c: 0x0  nop
    ctx->pc = 0x29230cu;
    // NOP
label_292310:
    // 0x292310: 0x7861  .word       0x00007861                   # addu        $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292310u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_292314:
    // 0x292314: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x292314u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_292318:
    // 0x292318: 0xd500  sll         $k0, $zero, 20
    ctx->pc = 0x292318u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_29231c:
    // 0x29231c: 0x0  nop
    ctx->pc = 0x29231cu;
    // NOP
label_292320:
    // 0x292320: 0x787c  dsll32      $t7, $zero, 1
    ctx->pc = 0x292320u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) << (32 + 1));
label_292324:
    // 0x292324: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x292324u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_292328:
    // 0x292328: 0x215d0  .word       0x000215D0                   # mfhi        $v0 # 000205C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292328u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_29232c:
    // 0x29232c: 0x0  nop
    ctx->pc = 0x29232cu;
    // NOP
label_292330:
    // 0x292330: 0x78bf  dsra32      $t7, $zero, 2
    ctx->pc = 0x292330u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 0) >> (32 + 2));
label_292334:
    // 0x292334: 0x3e  dsrl32      $zero, $zero, 0
    ctx->pc = 0x292334u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 0));
label_292338:
    // 0x292338: 0x1ef90  .word       0x0001EF90                   # mfhi        $sp # 00010780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292338u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_29233c:
    // 0x29233c: 0x0  nop
    ctx->pc = 0x29233cu;
    // NOP
label_292340:
    // 0x292340: 0x78fd  .word       0x000078FD                   # INVALID     $zero, $zero, 0x78FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292340u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x292340 raw=0x000078FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292344:
    // 0x292344: 0x1a  div         $zero, $zero, $zero
    ctx->pc = 0x292344u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_292348:
    // 0x292348: 0xcdf0  tge         $zero, $zero, 823
    ctx->pc = 0x292348u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29234c:
    // 0x29234c: 0x0  nop
    ctx->pc = 0x29234cu;
    // NOP
label_292350:
    // 0x292350: 0x7917  .word       0x00007917                   # dsrav       $t7, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292350u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_292354:
    // 0x292354: 0x19  multu       $zero, $zero
    ctx->pc = 0x292354u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_292358:
    // 0x292358: 0xc2e0  .word       0x0000C2E0                   # add         $t8, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292358u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_29235c:
    // 0x29235c: 0x0  nop
    ctx->pc = 0x29235cu;
    // NOP
label_292360:
    // 0x292360: 0x7930  tge         $zero, $zero, 484
    ctx->pc = 0x292360u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292364:
    // 0x292364: 0x2f  dsubu       $zero, $zero, $zero
    ctx->pc = 0x292364u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_292368:
    // 0x292368: 0x170f0  tge         $zero, $at, 451
    ctx->pc = 0x292368u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29236c:
    // 0x29236c: 0x0  nop
    ctx->pc = 0x29236cu;
    // NOP
label_292370:
    // 0x292370: 0x795f  .word       0x0000795F                   # ddivu       $t7, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292370u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x292370 raw=0x0000795F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292374:
    // 0x292374: 0x2c  dadd        $zero, $zero, $zero
    ctx->pc = 0x292374u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_292378:
    // 0x292378: 0x15830  tge         $zero, $at, 352
    ctx->pc = 0x292378u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29237c:
    // 0x29237c: 0x0  nop
    ctx->pc = 0x29237cu;
    // NOP
label_292380:
    // 0x292380: 0x798b  .word       0x0000798B                   # movn        $t7, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292380u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 0));
label_292384:
    // 0x292384: 0x2c  dadd        $zero, $zero, $zero
    ctx->pc = 0x292384u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_292388:
    // 0x292388: 0x15c40  sll         $t3, $at, 17
    ctx->pc = 0x292388u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29238c:
    // 0x29238c: 0x0  nop
    ctx->pc = 0x29238cu;
    // NOP
label_292390:
    // 0x292390: 0x79b7  .word       0x000079B7                   # INVALID     $zero, $zero, 0x79B7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292390u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x292390 raw=0x000079B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292394:
    // 0x292394: 0x2a  slt         $zero, $zero, $zero
    ctx->pc = 0x292394u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_292398:
    // 0x292398: 0x14e60  .word       0x00014E60                   # add         $t1, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292398u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_29239c:
    // 0x29239c: 0x0  nop
    ctx->pc = 0x29239cu;
    // NOP
label_2923a0:
    // 0x2923a0: 0x79e1  .word       0x000079E1                   # addu        $t7, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2923a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2923a4:
    // 0x2923a4: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x2923a4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2923a8:
    // 0x2923a8: 0x12f40  sll         $a1, $at, 29
    ctx->pc = 0x2923a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 1), 29));
label_2923ac:
    // 0x2923ac: 0x0  nop
    ctx->pc = 0x2923acu;
    // NOP
label_2923b0:
    // 0x2923b0: 0x7a07  .word       0x00007A07                   # srav        $t7, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2923b0u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2923b4:
    // 0x2923b4: 0x34  teq         $zero, $zero, 0
    ctx->pc = 0x2923b4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2923b8:
    // 0x2923b8: 0x19d50  .word       0x00019D50                   # mfhi        $s3 # 00010540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2923b8u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_2923bc:
    // 0x2923bc: 0x0  nop
    ctx->pc = 0x2923bcu;
    // NOP
label_2923c0:
    // 0x2923c0: 0x7a3b  dsra        $t7, $zero, 8
    ctx->pc = 0x2923c0u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 0) >> 8);
label_2923c4:
    // 0x2923c4: 0x28  mfsa        $zero
    ctx->pc = 0x2923c4u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2923c8:
    // 0x2923c8: 0x13d90  .word       0x00013D90                   # mfhi        $a3 # 00010580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2923c8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_2923cc:
    // 0x2923cc: 0x0  nop
    ctx->pc = 0x2923ccu;
    // NOP
label_2923d0:
    // 0x2923d0: 0x7a63  .word       0x00007A63                   # negu        $t7, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2923d0u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2923d4:
    // 0x2923d4: 0x2a  slt         $zero, $zero, $zero
    ctx->pc = 0x2923d4u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2923d8:
    // 0x2923d8: 0x14820  add         $t1, $zero, $at
    ctx->pc = 0x2923d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2923dc:
    // 0x2923dc: 0x0  nop
    ctx->pc = 0x2923dcu;
    // NOP
label_2923e0:
    // 0x2923e0: 0x7a8d  break       0, 490
    ctx->pc = 0x2923e0u;
    runtime->handleBreak(rdram, ctx);
label_2923e4:
    // 0x2923e4: 0x29  mtsa        $zero
    ctx->pc = 0x2923e4u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2923e8:
    // 0x2923e8: 0x14010  .word       0x00014010                   # mfhi        $t0 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2923e8u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2923ec:
    // 0x2923ec: 0x0  nop
    ctx->pc = 0x2923ecu;
    // NOP
label_2923f0:
    // 0x2923f0: 0x7ab6  tne         $zero, $zero, 490
    ctx->pc = 0x2923f0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2923f4:
    // 0x2923f4: 0x28  mfsa        $zero
    ctx->pc = 0x2923f4u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2923f8:
    // 0x2923f8: 0x13bf0  tge         $zero, $at, 239
    ctx->pc = 0x2923f8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2923fc:
    // 0x2923fc: 0x0  nop
    ctx->pc = 0x2923fcu;
    // NOP
label_292400:
    // 0x292400: 0x7ade  .word       0x00007ADE                   # ddiv        $t7, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292400u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x292400 raw=0x00007ADE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292404:
    // 0x292404: 0x27  not         $zero, $zero
    ctx->pc = 0x292404u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_292408:
    // 0x292408: 0x13430  tge         $zero, $at, 208
    ctx->pc = 0x292408u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29240c:
    // 0x29240c: 0x0  nop
    ctx->pc = 0x29240cu;
    // NOP
label_292410:
    // 0x292410: 0x7b05  .word       0x00007B05                   # INVALID     $zero, $zero, 0x7B05 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292410u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x292410 raw=0x00007B05"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292414:
    // 0x292414: 0x27  not         $zero, $zero
    ctx->pc = 0x292414u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_292418:
    // 0x292418: 0x13260  .word       0x00013260                   # add         $a2, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292418u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_29241c:
    // 0x29241c: 0x0  nop
    ctx->pc = 0x29241cu;
    // NOP
label_292420:
    // 0x292420: 0x7b2c  .word       0x00007B2C                   # dadd        $t7, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292420u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, r); }
label_292424:
    // 0x292424: 0x2b  sltu        $zero, $zero, $zero
    ctx->pc = 0x292424u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_292428:
    // 0x292428: 0x15450  .word       0x00015450                   # mfhi        $t2 # 00010440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292428u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_29242c:
    // 0x29242c: 0x0  nop
    ctx->pc = 0x29242cu;
    // NOP
label_292430:
    // 0x292430: 0x7b57  .word       0x00007B57                   # dsrav       $t7, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292430u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_292434:
    // 0x292434: 0x29  mtsa        $zero
    ctx->pc = 0x292434u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_292438:
    // 0x292438: 0x145e0  .word       0x000145E0                   # add         $t0, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292438u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_29243c:
    // 0x29243c: 0x0  nop
    ctx->pc = 0x29243cu;
    // NOP
label_292440:
    // 0x292440: 0x7b80  sll         $t7, $zero, 14
    ctx->pc = 0x292440u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_292444:
    // 0x292444: 0x27  not         $zero, $zero
    ctx->pc = 0x292444u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_292448:
    // 0x292448: 0x130b0  tge         $zero, $at, 194
    ctx->pc = 0x292448u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29244c:
    // 0x29244c: 0x0  nop
    ctx->pc = 0x29244cu;
    // NOP
label_292450:
    // 0x292450: 0x7ba7  .word       0x00007BA7                   # not         $t7, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292450u;
    SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_292454:
    // 0x292454: 0x28  mfsa        $zero
    ctx->pc = 0x292454u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_292458:
    // 0x292458: 0x13d90  .word       0x00013D90                   # mfhi        $a3 # 00010580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292458u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_29245c:
    // 0x29245c: 0x0  nop
    ctx->pc = 0x29245cu;
    // NOP
label_292460:
    // 0x292460: 0x7bcf  .word       0x00007BCF                   # sync # 00007800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292460u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_292464:
    // 0x292464: 0x28  mfsa        $zero
    ctx->pc = 0x292464u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_292468:
    // 0x292468: 0x13d10  .word       0x00013D10                   # mfhi        $a3 # 00010500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292468u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_29246c:
    // 0x29246c: 0x0  nop
    ctx->pc = 0x29246cu;
    // NOP
label_292470:
    // 0x292470: 0x7bf7  .word       0x00007BF7                   # INVALID     $zero, $zero, 0x7BF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292470u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x292470 raw=0x00007BF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292474:
    // 0x292474: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x292474u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_292478:
    // 0x292478: 0x12ed0  .word       0x00012ED0                   # mfhi        $a1 # 000106C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292478u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_29247c:
    // 0x29247c: 0x0  nop
    ctx->pc = 0x29247cu;
    // NOP
label_292480:
    // 0x292480: 0x7c1d  .word       0x00007C1D                   # dmultu      $zero, $zero # 00007C00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292480u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x292480 raw=0x00007C1D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292484:
    // 0x292484: 0x28  mfsa        $zero
    ctx->pc = 0x292484u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_292488:
    // 0x292488: 0x13980  sll         $a3, $at, 6
    ctx->pc = 0x292488u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 6));
label_29248c:
    // 0x29248c: 0x0  nop
    ctx->pc = 0x29248cu;
    // NOP
label_292490:
    // 0x292490: 0x7c45  .word       0x00007C45                   # INVALID     $zero, $zero, 0x7C45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292490u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x292490 raw=0x00007C45"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292494:
    // 0x292494: 0x2a  slt         $zero, $zero, $zero
    ctx->pc = 0x292494u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_292498:
    // 0x292498: 0x148d0  .word       0x000148D0                   # mfhi        $t1 # 000100C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292498u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_29249c:
    // 0x29249c: 0x0  nop
    ctx->pc = 0x29249cu;
    // NOP
label_2924a0:
    // 0x2924a0: 0x7c6f  .word       0x00007C6F                   # dsubu       $t7, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2924a0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2924a4:
    // 0x2924a4: 0x27  not         $zero, $zero
    ctx->pc = 0x2924a4u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2924a8:
    // 0x2924a8: 0x13290  .word       0x00013290                   # mfhi        $a2 # 00010280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2924a8u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_2924ac:
    // 0x2924ac: 0x0  nop
    ctx->pc = 0x2924acu;
    // NOP
label_2924b0:
    // 0x2924b0: 0x7c96  .word       0x00007C96                   # dsrlv       $t7, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2924b0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2924b4:
    // 0x2924b4: 0x25  move        $zero, $zero
    ctx->pc = 0x2924b4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2924b8:
    // 0x2924b8: 0x125b0  tge         $zero, $at, 150
    ctx->pc = 0x2924b8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2924bc:
    // 0x2924bc: 0x0  nop
    ctx->pc = 0x2924bcu;
    // NOP
label_2924c0:
    // 0x2924c0: 0x7cbb  dsra        $t7, $zero, 18
    ctx->pc = 0x2924c0u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 0) >> 18);
label_2924c4:
    // 0x2924c4: 0x2a  slt         $zero, $zero, $zero
    ctx->pc = 0x2924c4u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2924c8:
    // 0x2924c8: 0x14cb0  tge         $zero, $at, 306
    ctx->pc = 0x2924c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2924cc:
    // 0x2924cc: 0x0  nop
    ctx->pc = 0x2924ccu;
    // NOP
label_2924d0:
    // 0x2924d0: 0x7ce5  .word       0x00007CE5                   # move        $t7, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2924d0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2924d4:
    // 0x2924d4: 0x27  not         $zero, $zero
    ctx->pc = 0x2924d4u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2924d8:
    // 0x2924d8: 0x131d0  .word       0x000131D0                   # mfhi        $a2 # 000101C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2924d8u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_2924dc:
    // 0x2924dc: 0x0  nop
    ctx->pc = 0x2924dcu;
    // NOP
label_2924e0:
    // 0x2924e0: 0x7d0c  syscall     500
    ctx->pc = 0x2924e0u;
    ctx->pc = 0x2924E4u;
runtime->handleSyscall(rdram, ctx, 0x1F4u);
label_2924e4:
    // 0x2924e4: 0x29  mtsa        $zero
    ctx->pc = 0x2924e4u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2924e8:
    // 0x2924e8: 0x143f0  tge         $zero, $at, 271
    ctx->pc = 0x2924e8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2924ec:
    // 0x2924ec: 0x0  nop
    ctx->pc = 0x2924ecu;
    // NOP
label_2924f0:
    // 0x2924f0: 0x7d35  .word       0x00007D35                   # INVALID     $zero, $zero, 0x7D35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2924f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2924F0 raw=0x00007D35"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2924f4:
    // 0x2924f4: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x2924f4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2924f8:
    // 0x2924f8: 0x12b00  sll         $a1, $at, 12
    ctx->pc = 0x2924f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 1), 12));
label_2924fc:
    // 0x2924fc: 0x0  nop
    ctx->pc = 0x2924fcu;
    // NOP
label_292500:
    // 0x292500: 0x7d5b  .word       0x00007D5B                   # divu        $t7, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292500u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_292504:
    // 0x292504: 0x2b  sltu        $zero, $zero, $zero
    ctx->pc = 0x292504u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_292508:
    // 0x292508: 0x15240  sll         $t2, $at, 9
    ctx->pc = 0x292508u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 1), 9));
label_29250c:
    // 0x29250c: 0x0  nop
    ctx->pc = 0x29250cu;
    // NOP
label_292510:
    // 0x292510: 0x7d86  .word       0x00007D86                   # srlv        $t7, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292510u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_292514:
    // 0x292514: 0x28  mfsa        $zero
    ctx->pc = 0x292514u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_292518:
    // 0x292518: 0x139f0  tge         $zero, $at, 231
    ctx->pc = 0x292518u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29251c:
    // 0x29251c: 0x0  nop
    ctx->pc = 0x29251cu;
    // NOP
label_292520:
    // 0x292520: 0x7dae  .word       0x00007DAE                   # dsub        $t7, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292520u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, r); }
label_292524:
    // 0x292524: 0x34  teq         $zero, $zero, 0
    ctx->pc = 0x292524u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292528:
    // 0x292528: 0x19b50  .word       0x00019B50                   # mfhi        $s3 # 00010340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292528u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_29252c:
    // 0x29252c: 0x0  nop
    ctx->pc = 0x29252cu;
    // NOP
label_292530:
    // 0x292530: 0x7de2  .word       0x00007DE2                   # neg         $t7, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292530u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_292534:
    // 0x292534: 0x2f  dsubu       $zero, $zero, $zero
    ctx->pc = 0x292534u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_292538:
    // 0x292538: 0x17370  tge         $zero, $at, 461
    ctx->pc = 0x292538u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29253c:
    // 0x29253c: 0x0  nop
    ctx->pc = 0x29253cu;
    // NOP
label_292540:
    // 0x292540: 0x7e11  .word       0x00007E11                   # mthi        $zero # 00007E00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292540u;
    ctx->hi = GPR_U64(ctx, 0);
label_292544:
    // 0x292544: 0x2f  dsubu       $zero, $zero, $zero
    ctx->pc = 0x292544u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_292548:
    // 0x292548: 0x177a0  .word       0x000177A0                   # add         $t6, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292548u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_29254c:
    // 0x29254c: 0x0  nop
    ctx->pc = 0x29254cu;
    // NOP
label_292550:
    // 0x292550: 0x7e40  sll         $t7, $zero, 25
    ctx->pc = 0x292550u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_292554:
    // 0x292554: 0x29  mtsa        $zero
    ctx->pc = 0x292554u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_292558:
    // 0x292558: 0x142d0  .word       0x000142D0                   # mfhi        $t0 # 000102C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292558u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_29255c:
    // 0x29255c: 0x0  nop
    ctx->pc = 0x29255cu;
    // NOP
label_292560:
    // 0x292560: 0x7e69  .word       0x00007E69                   # mtsa        $zero # 00007E40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x292560u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_292564:
    // 0x292564: 0x2b  sltu        $zero, $zero, $zero
    ctx->pc = 0x292564u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_292568:
    // 0x292568: 0x157a0  .word       0x000157A0                   # add         $t2, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292568u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_29256c:
    // 0x29256c: 0x0  nop
    ctx->pc = 0x29256cu;
    // NOP
label_292570:
    // 0x292570: 0x7e94  .word       0x00007E94                   # dsllv       $t7, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292570u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_292574:
    // 0x292574: 0x2d  daddu       $zero, $zero, $zero
    ctx->pc = 0x292574u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_292578:
    // 0x292578: 0x162a0  .word       0x000162A0                   # add         $t4, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292578u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_29257c:
    // 0x29257c: 0x0  nop
    ctx->pc = 0x29257cu;
    // NOP
label_292580:
    // 0x292580: 0x7ec1  .word       0x00007EC1                   # INVALID     $zero, $zero, 0x7EC1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292580u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x292580 raw=0x00007EC1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292584:
    // 0x292584: 0x2a  slt         $zero, $zero, $zero
    ctx->pc = 0x292584u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_292588:
    // 0x292588: 0x14d20  .word       0x00014D20                   # add         $t1, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292588u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_29258c:
    // 0x29258c: 0x0  nop
    ctx->pc = 0x29258cu;
    // NOP
label_292590:
    // 0x292590: 0x7eeb  .word       0x00007EEB                   # sltu        $t7, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292590u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_292594:
    // 0x292594: 0x27  not         $zero, $zero
    ctx->pc = 0x292594u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_292598:
    // 0x292598: 0x13430  tge         $zero, $at, 208
    ctx->pc = 0x292598u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29259c:
    // 0x29259c: 0x0  nop
    ctx->pc = 0x29259cu;
    // NOP
label_2925a0:
    // 0x2925a0: 0x7f12  .word       0x00007F12                   # mflo        $t7 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2925a0u;
    SET_GPR_U64(ctx, 15, ctx->lo);
label_2925a4:
    // 0x2925a4: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2925a4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2925a8:
    // 0x2925a8: 0x16f60  .word       0x00016F60                   # add         $t5, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2925a8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2925ac:
    // 0x2925ac: 0x0  nop
    ctx->pc = 0x2925acu;
    // NOP
label_2925b0:
    // 0x2925b0: 0x7f40  sll         $t7, $zero, 29
    ctx->pc = 0x2925b0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_2925b4:
    // 0x2925b4: 0x29  mtsa        $zero
    ctx->pc = 0x2925b4u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2925b8:
    // 0x2925b8: 0x14680  sll         $t0, $at, 26
    ctx->pc = 0x2925b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 1), 26));
label_2925bc:
    // 0x2925bc: 0x0  nop
    ctx->pc = 0x2925bcu;
    // NOP
label_2925c0:
    // 0x2925c0: 0x7f69  .word       0x00007F69                   # mtsa        $zero # 00007F40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2925c0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2925c4:
    // 0x2925c4: 0x2f  dsubu       $zero, $zero, $zero
    ctx->pc = 0x2925c4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2925c8:
    // 0x2925c8: 0x174b0  tge         $zero, $at, 466
    ctx->pc = 0x2925c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2925cc:
    // 0x2925cc: 0x0  nop
    ctx->pc = 0x2925ccu;
    // NOP
label_2925d0:
    // 0x2925d0: 0x7f98  .word       0x00007F98                   # mult        $t7, $zero, $zero # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2925d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_2925d4:
    // 0x2925d4: 0x29  mtsa        $zero
    ctx->pc = 0x2925d4u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2925d8:
    // 0x2925d8: 0x14320  .word       0x00014320                   # add         $t0, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2925d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2925dc:
    // 0x2925dc: 0x0  nop
    ctx->pc = 0x2925dcu;
    // NOP
label_2925e0:
    // 0x2925e0: 0x7fc1  .word       0x00007FC1                   # INVALID     $zero, $zero, 0x7FC1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2925e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2925E0 raw=0x00007FC1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2925e4:
    // 0x2925e4: 0x28  mfsa        $zero
    ctx->pc = 0x2925e4u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2925e8:
    // 0x2925e8: 0x13cf0  tge         $zero, $at, 243
    ctx->pc = 0x2925e8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2925ec:
    // 0x2925ec: 0x0  nop
    ctx->pc = 0x2925ecu;
    // NOP
label_2925f0:
    // 0x2925f0: 0x7fe9  .word       0x00007FE9                   # mtsa        $zero # 00007FC0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2925f0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2925f4:
    // 0x2925f4: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2925f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2925F4 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2925f8:
    // 0x2925f8: 0x6810  mfhi        $t5
    ctx->pc = 0x2925f8u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2925fc:
    // 0x2925fc: 0x0  nop
    ctx->pc = 0x2925fcu;
    // NOP
label_292600:
    // 0x292600: 0x7ff7  .word       0x00007FF7                   # INVALID     $zero, $zero, 0x7FF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292600u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x292600 raw=0x00007FF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292604:
    // 0x292604: 0xd  break       0
    ctx->pc = 0x292604u;
    runtime->handleBreak(rdram, ctx);
label_292608:
    // 0x292608: 0x6150  .word       0x00006150                   # mfhi        $t4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292608u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_29260c:
    // 0x29260c: 0x0  nop
    ctx->pc = 0x29260cu;
    // NOP
label_292610:
    // 0x292610: 0x8004  sllv        $s0, $zero, $zero
    ctx->pc = 0x292610u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_292614:
    // 0x292614: 0x77  .word       0x00000077                   # INVALID     $zero, $zero, 0x77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292614u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x292614 raw=0x00000077"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292618:
    // 0x292618: 0x3b500  sll         $s6, $v1, 20
    ctx->pc = 0x292618u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
label_29261c:
    // 0x29261c: 0x0  nop
    ctx->pc = 0x29261cu;
    // NOP
label_292620:
    // 0x292620: 0x807b  dsra        $s0, $zero, 1
    ctx->pc = 0x292620u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> 1);
label_292624:
    // 0x292624: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292624u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292628:
    // 0x292628: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29262c:
    // 0x29262c: 0x0  nop
    ctx->pc = 0x29262cu;
    // NOP
label_292630:
    // 0x292630: 0x807d  .word       0x0000807D                   # INVALID     $zero, $zero, -0x7F83 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292630u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x292630 raw=0x0000807D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292634:
    // 0x292634: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292634u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292638:
    // 0x292638: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292638u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_29263c:
    // 0x29263c: 0x0  nop
    ctx->pc = 0x29263cu;
    // NOP
label_292640:
    // 0x292640: 0x807f  dsra32      $s0, $zero, 1
    ctx->pc = 0x292640u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (32 + 1));
label_292644:
    // 0x292644: 0x7b  dsra        $zero, $zero, 1
    ctx->pc = 0x292644u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 1);
label_292648:
    // 0x292648: 0x3d5d0  .word       0x0003D5D0                   # mfhi        $k0 # 000305C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292648u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29264c:
    // 0x29264c: 0x0  nop
    ctx->pc = 0x29264cu;
    // NOP
label_292650:
    // 0x292650: 0x80fa  dsrl        $s0, $zero, 3
    ctx->pc = 0x292650u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) >> 3);
label_292654:
    // 0x292654: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292654u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292658:
    // 0x292658: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29265c:
    // 0x29265c: 0x0  nop
    ctx->pc = 0x29265cu;
    // NOP
label_292660:
    // 0x292660: 0x80fc  dsll32      $s0, $zero, 3
    ctx->pc = 0x292660u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) << (32 + 3));
label_292664:
    // 0x292664: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292664u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292668:
    // 0x292668: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292668u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_29266c:
    // 0x29266c: 0x0  nop
    ctx->pc = 0x29266cu;
    // NOP
label_292670:
    // 0x292670: 0x80fe  dsrl32      $s0, $zero, 3
    ctx->pc = 0x292670u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) >> (32 + 3));
label_292674:
    // 0x292674: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x292674u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292678:
    // 0x292678: 0x39be0  .word       0x00039BE0                   # add         $s3, $zero, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292678u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_29267c:
    // 0x29267c: 0x0  nop
    ctx->pc = 0x29267cu;
    // NOP
label_292680:
    // 0x292680: 0x8172  tlt         $zero, $zero, 517
    ctx->pc = 0x292680u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292684:
    // 0x292684: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292684u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292688:
    // 0x292688: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29268c:
    // 0x29268c: 0x0  nop
    ctx->pc = 0x29268cu;
    // NOP
label_292690:
    // 0x292690: 0x8174  teq         $zero, $zero, 517
    ctx->pc = 0x292690u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292694:
    // 0x292694: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292694u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292698:
    // 0x292698: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292698u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_29269c:
    // 0x29269c: 0x0  nop
    ctx->pc = 0x29269cu;
    // NOP
label_2926a0:
    // 0x2926a0: 0x8176  tne         $zero, $zero, 517
    ctx->pc = 0x2926a0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2926a4:
    // 0x2926a4: 0x89  .word       0x00000089                   # jalr        $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
label_2926a8:
    if (ctx->pc == 0x2926A8u) {
        ctx->pc = 0x2926A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2926A4u;
        // 0x2926a8: 0x44170  tge         $zero, $a0, 261 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2926ACu;
        goto label_2926ac;
    }
    ctx->pc = 0x2926A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2926A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2926A4u;
        // 0x2926a8: 0x44170  tge         $zero, $a0, 261 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2926A4u, 0x2926ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2926ACu;
label_2926ac:
    // 0x2926ac: 0x0  nop
    ctx->pc = 0x2926acu;
    // NOP
label_2926b0:
    // 0x2926b0: 0x81ff  dsra32      $s0, $zero, 7
    ctx->pc = 0x2926b0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (32 + 7));
label_2926b4:
    // 0x2926b4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2926b4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2926b8:
    // 0x2926b8: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x2926b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2926bc:
    // 0x2926bc: 0x0  nop
    ctx->pc = 0x2926bcu;
    // NOP
label_2926c0:
    // 0x2926c0: 0x8201  .word       0x00008201                   # INVALID     $zero, $zero, -0x7DFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2926c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2926C0 raw=0x00008201"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2926c4:
    // 0x2926c4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2926c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2926c8:
    // 0x2926c8: 0xd80  sll         $at, $zero, 22
    ctx->pc = 0x2926c8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_2926cc:
    // 0x2926cc: 0x0  nop
    ctx->pc = 0x2926ccu;
    // NOP
label_2926d0:
    // 0x2926d0: 0x8203  sra         $s0, $zero, 8
    ctx->pc = 0x2926d0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 0), 8));
label_2926d4:
    // 0x2926d4: 0x71  tgeu        $zero, $zero, 1
    ctx->pc = 0x2926d4u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2926d8:
    // 0x2926d8: 0x38480  sll         $s0, $v1, 18
    ctx->pc = 0x2926d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 18));
label_2926dc:
    // 0x2926dc: 0x0  nop
    ctx->pc = 0x2926dcu;
    // NOP
label_2926e0:
    // 0x2926e0: 0x8274  teq         $zero, $zero, 521
    ctx->pc = 0x2926e0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2926e4:
    // 0x2926e4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2926e4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2926e8:
    // 0x2926e8: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x2926e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2926ec:
    // 0x2926ec: 0x0  nop
    ctx->pc = 0x2926ecu;
    // NOP
label_2926f0:
    // 0x2926f0: 0x8276  tne         $zero, $zero, 521
    ctx->pc = 0x2926f0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2926f4:
    // 0x2926f4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2926f4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2926f8:
    // 0x2926f8: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x2926f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_2926fc:
    // 0x2926fc: 0x0  nop
    ctx->pc = 0x2926fcu;
    // NOP
label_292700:
    // 0x292700: 0x8278  dsll        $s0, $zero, 9
    ctx->pc = 0x292700u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) << 9);
label_292704:
    // 0x292704: 0x85  .word       0x00000085                   # INVALID     $zero, $zero, 0x85 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292704u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x292704 raw=0x00000085"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292708:
    // 0x292708: 0x425c0  sll         $a0, $a0, 23
    ctx->pc = 0x292708u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
label_29270c:
    // 0x29270c: 0x0  nop
    ctx->pc = 0x29270cu;
    // NOP
label_292710:
    // 0x292710: 0x82fd  .word       0x000082FD                   # INVALID     $zero, $zero, -0x7D03 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292710u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x292710 raw=0x000082FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292714:
    // 0x292714: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292714u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292718:
    // 0x292718: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29271c:
    // 0x29271c: 0x0  nop
    ctx->pc = 0x29271cu;
    // NOP
label_292720:
    // 0x292720: 0x82ff  dsra32      $s0, $zero, 11
    ctx->pc = 0x292720u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (32 + 11));
label_292724:
    // 0x292724: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292724u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292728:
    // 0x292728: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292728u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_29272c:
    // 0x29272c: 0x0  nop
    ctx->pc = 0x29272cu;
    // NOP
label_292730:
    // 0x292730: 0x8301  .word       0x00008301                   # INVALID     $zero, $zero, -0x7CFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292730u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x292730 raw=0x00008301"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292734:
    // 0x292734: 0x81  .word       0x00000081                   # INVALID     $zero, $zero, 0x81 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292734u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x292734 raw=0x00000081"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->pc = 0x292738u;
    return;
}
