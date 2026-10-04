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

// Function: FUN_0019b850
// Address: 0x19b850 - 0x29b858
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b850_part385(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x257050u: goto label_257050;
        case 0x257054u: goto label_257054;
        case 0x257058u: goto label_257058;
        case 0x25705cu: goto label_25705c;
        case 0x257060u: goto label_257060;
        case 0x257064u: goto label_257064;
        case 0x257068u: goto label_257068;
        case 0x25706cu: goto label_25706c;
        case 0x257070u: goto label_257070;
        case 0x257074u: goto label_257074;
        case 0x257078u: goto label_257078;
        case 0x25707cu: goto label_25707c;
        case 0x257080u: goto label_257080;
        case 0x257084u: goto label_257084;
        case 0x257088u: goto label_257088;
        case 0x25708cu: goto label_25708c;
        case 0x257090u: goto label_257090;
        case 0x257094u: goto label_257094;
        case 0x257098u: goto label_257098;
        case 0x25709cu: goto label_25709c;
        case 0x2570a0u: goto label_2570a0;
        case 0x2570a4u: goto label_2570a4;
        case 0x2570a8u: goto label_2570a8;
        case 0x2570acu: goto label_2570ac;
        case 0x2570b0u: goto label_2570b0;
        case 0x2570b4u: goto label_2570b4;
        case 0x2570b8u: goto label_2570b8;
        case 0x2570bcu: goto label_2570bc;
        case 0x2570c0u: goto label_2570c0;
        case 0x2570c4u: goto label_2570c4;
        case 0x2570c8u: goto label_2570c8;
        case 0x2570ccu: goto label_2570cc;
        case 0x2570d0u: goto label_2570d0;
        case 0x2570d4u: goto label_2570d4;
        case 0x2570d8u: goto label_2570d8;
        case 0x2570dcu: goto label_2570dc;
        case 0x2570e0u: goto label_2570e0;
        case 0x2570e4u: goto label_2570e4;
        case 0x2570e8u: goto label_2570e8;
        case 0x2570ecu: goto label_2570ec;
        case 0x2570f0u: goto label_2570f0;
        case 0x2570f4u: goto label_2570f4;
        case 0x2570f8u: goto label_2570f8;
        case 0x2570fcu: goto label_2570fc;
        case 0x257100u: goto label_257100;
        case 0x257104u: goto label_257104;
        case 0x257108u: goto label_257108;
        case 0x25710cu: goto label_25710c;
        case 0x257110u: goto label_257110;
        case 0x257114u: goto label_257114;
        case 0x257118u: goto label_257118;
        case 0x25711cu: goto label_25711c;
        case 0x257120u: goto label_257120;
        case 0x257124u: goto label_257124;
        case 0x257128u: goto label_257128;
        case 0x25712cu: goto label_25712c;
        case 0x257130u: goto label_257130;
        case 0x257134u: goto label_257134;
        case 0x257138u: goto label_257138;
        case 0x25713cu: goto label_25713c;
        case 0x257140u: goto label_257140;
        case 0x257144u: goto label_257144;
        case 0x257148u: goto label_257148;
        case 0x25714cu: goto label_25714c;
        case 0x257150u: goto label_257150;
        case 0x257154u: goto label_257154;
        case 0x257158u: goto label_257158;
        case 0x25715cu: goto label_25715c;
        case 0x257160u: goto label_257160;
        case 0x257164u: goto label_257164;
        case 0x257168u: goto label_257168;
        case 0x25716cu: goto label_25716c;
        case 0x257170u: goto label_257170;
        case 0x257174u: goto label_257174;
        case 0x257178u: goto label_257178;
        case 0x25717cu: goto label_25717c;
        case 0x257180u: goto label_257180;
        case 0x257184u: goto label_257184;
        case 0x257188u: goto label_257188;
        case 0x25718cu: goto label_25718c;
        case 0x257190u: goto label_257190;
        case 0x257194u: goto label_257194;
        case 0x257198u: goto label_257198;
        case 0x25719cu: goto label_25719c;
        case 0x2571a0u: goto label_2571a0;
        case 0x2571a4u: goto label_2571a4;
        case 0x2571a8u: goto label_2571a8;
        case 0x2571acu: goto label_2571ac;
        case 0x2571b0u: goto label_2571b0;
        case 0x2571b4u: goto label_2571b4;
        case 0x2571b8u: goto label_2571b8;
        case 0x2571bcu: goto label_2571bc;
        case 0x2571c0u: goto label_2571c0;
        case 0x2571c4u: goto label_2571c4;
        case 0x2571c8u: goto label_2571c8;
        case 0x2571ccu: goto label_2571cc;
        case 0x2571d0u: goto label_2571d0;
        case 0x2571d4u: goto label_2571d4;
        case 0x2571d8u: goto label_2571d8;
        case 0x2571dcu: goto label_2571dc;
        case 0x2571e0u: goto label_2571e0;
        case 0x2571e4u: goto label_2571e4;
        case 0x2571e8u: goto label_2571e8;
        case 0x2571ecu: goto label_2571ec;
        case 0x2571f0u: goto label_2571f0;
        case 0x2571f4u: goto label_2571f4;
        case 0x2571f8u: goto label_2571f8;
        case 0x2571fcu: goto label_2571fc;
        case 0x257200u: goto label_257200;
        case 0x257204u: goto label_257204;
        case 0x257208u: goto label_257208;
        case 0x25720cu: goto label_25720c;
        case 0x257210u: goto label_257210;
        case 0x257214u: goto label_257214;
        case 0x257218u: goto label_257218;
        case 0x25721cu: goto label_25721c;
        case 0x257220u: goto label_257220;
        case 0x257224u: goto label_257224;
        case 0x257228u: goto label_257228;
        case 0x25722cu: goto label_25722c;
        case 0x257230u: goto label_257230;
        case 0x257234u: goto label_257234;
        case 0x257238u: goto label_257238;
        case 0x25723cu: goto label_25723c;
        case 0x257240u: goto label_257240;
        case 0x257244u: goto label_257244;
        case 0x257248u: goto label_257248;
        case 0x25724cu: goto label_25724c;
        case 0x257250u: goto label_257250;
        case 0x257254u: goto label_257254;
        case 0x257258u: goto label_257258;
        case 0x25725cu: goto label_25725c;
        case 0x257260u: goto label_257260;
        case 0x257264u: goto label_257264;
        case 0x257268u: goto label_257268;
        case 0x25726cu: goto label_25726c;
        case 0x257270u: goto label_257270;
        case 0x257274u: goto label_257274;
        case 0x257278u: goto label_257278;
        case 0x25727cu: goto label_25727c;
        case 0x257280u: goto label_257280;
        case 0x257284u: goto label_257284;
        case 0x257288u: goto label_257288;
        case 0x25728cu: goto label_25728c;
        case 0x257290u: goto label_257290;
        case 0x257294u: goto label_257294;
        case 0x257298u: goto label_257298;
        case 0x25729cu: goto label_25729c;
        case 0x2572a0u: goto label_2572a0;
        case 0x2572a4u: goto label_2572a4;
        case 0x2572a8u: goto label_2572a8;
        case 0x2572acu: goto label_2572ac;
        case 0x2572b0u: goto label_2572b0;
        case 0x2572b4u: goto label_2572b4;
        case 0x2572b8u: goto label_2572b8;
        case 0x2572bcu: goto label_2572bc;
        case 0x2572c0u: goto label_2572c0;
        case 0x2572c4u: goto label_2572c4;
        case 0x2572c8u: goto label_2572c8;
        case 0x2572ccu: goto label_2572cc;
        case 0x2572d0u: goto label_2572d0;
        case 0x2572d4u: goto label_2572d4;
        case 0x2572d8u: goto label_2572d8;
        case 0x2572dcu: goto label_2572dc;
        case 0x2572e0u: goto label_2572e0;
        case 0x2572e4u: goto label_2572e4;
        case 0x2572e8u: goto label_2572e8;
        case 0x2572ecu: goto label_2572ec;
        case 0x2572f0u: goto label_2572f0;
        case 0x2572f4u: goto label_2572f4;
        case 0x2572f8u: goto label_2572f8;
        case 0x2572fcu: goto label_2572fc;
        case 0x257300u: goto label_257300;
        case 0x257304u: goto label_257304;
        case 0x257308u: goto label_257308;
        case 0x25730cu: goto label_25730c;
        case 0x257310u: goto label_257310;
        case 0x257314u: goto label_257314;
        case 0x257318u: goto label_257318;
        case 0x25731cu: goto label_25731c;
        case 0x257320u: goto label_257320;
        case 0x257324u: goto label_257324;
        case 0x257328u: goto label_257328;
        case 0x25732cu: goto label_25732c;
        case 0x257330u: goto label_257330;
        case 0x257334u: goto label_257334;
        case 0x257338u: goto label_257338;
        case 0x25733cu: goto label_25733c;
        case 0x257340u: goto label_257340;
        case 0x257344u: goto label_257344;
        case 0x257348u: goto label_257348;
        case 0x25734cu: goto label_25734c;
        case 0x257350u: goto label_257350;
        case 0x257354u: goto label_257354;
        case 0x257358u: goto label_257358;
        case 0x25735cu: goto label_25735c;
        case 0x257360u: goto label_257360;
        case 0x257364u: goto label_257364;
        case 0x257368u: goto label_257368;
        case 0x25736cu: goto label_25736c;
        case 0x257370u: goto label_257370;
        case 0x257374u: goto label_257374;
        case 0x257378u: goto label_257378;
        case 0x25737cu: goto label_25737c;
        case 0x257380u: goto label_257380;
        case 0x257384u: goto label_257384;
        case 0x257388u: goto label_257388;
        case 0x25738cu: goto label_25738c;
        case 0x257390u: goto label_257390;
        case 0x257394u: goto label_257394;
        case 0x257398u: goto label_257398;
        case 0x25739cu: goto label_25739c;
        case 0x2573a0u: goto label_2573a0;
        case 0x2573a4u: goto label_2573a4;
        case 0x2573a8u: goto label_2573a8;
        case 0x2573acu: goto label_2573ac;
        case 0x2573b0u: goto label_2573b0;
        case 0x2573b4u: goto label_2573b4;
        case 0x2573b8u: goto label_2573b8;
        case 0x2573bcu: goto label_2573bc;
        case 0x2573c0u: goto label_2573c0;
        case 0x2573c4u: goto label_2573c4;
        case 0x2573c8u: goto label_2573c8;
        case 0x2573ccu: goto label_2573cc;
        case 0x2573d0u: goto label_2573d0;
        case 0x2573d4u: goto label_2573d4;
        case 0x2573d8u: goto label_2573d8;
        case 0x2573dcu: goto label_2573dc;
        case 0x2573e0u: goto label_2573e0;
        case 0x2573e4u: goto label_2573e4;
        case 0x2573e8u: goto label_2573e8;
        case 0x2573ecu: goto label_2573ec;
        case 0x2573f0u: goto label_2573f0;
        case 0x2573f4u: goto label_2573f4;
        case 0x2573f8u: goto label_2573f8;
        case 0x2573fcu: goto label_2573fc;
        case 0x257400u: goto label_257400;
        case 0x257404u: goto label_257404;
        case 0x257408u: goto label_257408;
        case 0x25740cu: goto label_25740c;
        case 0x257410u: goto label_257410;
        case 0x257414u: goto label_257414;
        case 0x257418u: goto label_257418;
        case 0x25741cu: goto label_25741c;
        case 0x257420u: goto label_257420;
        case 0x257424u: goto label_257424;
        case 0x257428u: goto label_257428;
        case 0x25742cu: goto label_25742c;
        case 0x257430u: goto label_257430;
        case 0x257434u: goto label_257434;
        case 0x257438u: goto label_257438;
        case 0x25743cu: goto label_25743c;
        case 0x257440u: goto label_257440;
        case 0x257444u: goto label_257444;
        case 0x257448u: goto label_257448;
        case 0x25744cu: goto label_25744c;
        case 0x257450u: goto label_257450;
        case 0x257454u: goto label_257454;
        case 0x257458u: goto label_257458;
        case 0x25745cu: goto label_25745c;
        case 0x257460u: goto label_257460;
        case 0x257464u: goto label_257464;
        case 0x257468u: goto label_257468;
        case 0x25746cu: goto label_25746c;
        case 0x257470u: goto label_257470;
        case 0x257474u: goto label_257474;
        case 0x257478u: goto label_257478;
        case 0x25747cu: goto label_25747c;
        case 0x257480u: goto label_257480;
        case 0x257484u: goto label_257484;
        case 0x257488u: goto label_257488;
        case 0x25748cu: goto label_25748c;
        case 0x257490u: goto label_257490;
        case 0x257494u: goto label_257494;
        case 0x257498u: goto label_257498;
        case 0x25749cu: goto label_25749c;
        case 0x2574a0u: goto label_2574a0;
        case 0x2574a4u: goto label_2574a4;
        case 0x2574a8u: goto label_2574a8;
        case 0x2574acu: goto label_2574ac;
        case 0x2574b0u: goto label_2574b0;
        case 0x2574b4u: goto label_2574b4;
        case 0x2574b8u: goto label_2574b8;
        case 0x2574bcu: goto label_2574bc;
        case 0x2574c0u: goto label_2574c0;
        case 0x2574c4u: goto label_2574c4;
        case 0x2574c8u: goto label_2574c8;
        case 0x2574ccu: goto label_2574cc;
        case 0x2574d0u: goto label_2574d0;
        case 0x2574d4u: goto label_2574d4;
        case 0x2574d8u: goto label_2574d8;
        case 0x2574dcu: goto label_2574dc;
        case 0x2574e0u: goto label_2574e0;
        case 0x2574e4u: goto label_2574e4;
        case 0x2574e8u: goto label_2574e8;
        case 0x2574ecu: goto label_2574ec;
        case 0x2574f0u: goto label_2574f0;
        case 0x2574f4u: goto label_2574f4;
        case 0x2574f8u: goto label_2574f8;
        case 0x2574fcu: goto label_2574fc;
        case 0x257500u: goto label_257500;
        case 0x257504u: goto label_257504;
        case 0x257508u: goto label_257508;
        case 0x25750cu: goto label_25750c;
        case 0x257510u: goto label_257510;
        case 0x257514u: goto label_257514;
        case 0x257518u: goto label_257518;
        case 0x25751cu: goto label_25751c;
        case 0x257520u: goto label_257520;
        case 0x257524u: goto label_257524;
        case 0x257528u: goto label_257528;
        case 0x25752cu: goto label_25752c;
        case 0x257530u: goto label_257530;
        case 0x257534u: goto label_257534;
        case 0x257538u: goto label_257538;
        case 0x25753cu: goto label_25753c;
        case 0x257540u: goto label_257540;
        case 0x257544u: goto label_257544;
        case 0x257548u: goto label_257548;
        case 0x25754cu: goto label_25754c;
        case 0x257550u: goto label_257550;
        case 0x257554u: goto label_257554;
        case 0x257558u: goto label_257558;
        case 0x25755cu: goto label_25755c;
        case 0x257560u: goto label_257560;
        case 0x257564u: goto label_257564;
        case 0x257568u: goto label_257568;
        case 0x25756cu: goto label_25756c;
        case 0x257570u: goto label_257570;
        case 0x257574u: goto label_257574;
        case 0x257578u: goto label_257578;
        case 0x25757cu: goto label_25757c;
        case 0x257580u: goto label_257580;
        case 0x257584u: goto label_257584;
        case 0x257588u: goto label_257588;
        case 0x25758cu: goto label_25758c;
        case 0x257590u: goto label_257590;
        case 0x257594u: goto label_257594;
        case 0x257598u: goto label_257598;
        case 0x25759cu: goto label_25759c;
        case 0x2575a0u: goto label_2575a0;
        case 0x2575a4u: goto label_2575a4;
        case 0x2575a8u: goto label_2575a8;
        case 0x2575acu: goto label_2575ac;
        case 0x2575b0u: goto label_2575b0;
        case 0x2575b4u: goto label_2575b4;
        case 0x2575b8u: goto label_2575b8;
        case 0x2575bcu: goto label_2575bc;
        case 0x2575c0u: goto label_2575c0;
        case 0x2575c4u: goto label_2575c4;
        case 0x2575c8u: goto label_2575c8;
        case 0x2575ccu: goto label_2575cc;
        case 0x2575d0u: goto label_2575d0;
        case 0x2575d4u: goto label_2575d4;
        case 0x2575d8u: goto label_2575d8;
        case 0x2575dcu: goto label_2575dc;
        case 0x2575e0u: goto label_2575e0;
        case 0x2575e4u: goto label_2575e4;
        case 0x2575e8u: goto label_2575e8;
        case 0x2575ecu: goto label_2575ec;
        case 0x2575f0u: goto label_2575f0;
        case 0x2575f4u: goto label_2575f4;
        case 0x2575f8u: goto label_2575f8;
        case 0x2575fcu: goto label_2575fc;
        case 0x257600u: goto label_257600;
        case 0x257604u: goto label_257604;
        case 0x257608u: goto label_257608;
        case 0x25760cu: goto label_25760c;
        case 0x257610u: goto label_257610;
        case 0x257614u: goto label_257614;
        case 0x257618u: goto label_257618;
        case 0x25761cu: goto label_25761c;
        case 0x257620u: goto label_257620;
        case 0x257624u: goto label_257624;
        case 0x257628u: goto label_257628;
        case 0x25762cu: goto label_25762c;
        case 0x257630u: goto label_257630;
        case 0x257634u: goto label_257634;
        case 0x257638u: goto label_257638;
        case 0x25763cu: goto label_25763c;
        case 0x257640u: goto label_257640;
        case 0x257644u: goto label_257644;
        case 0x257648u: goto label_257648;
        case 0x25764cu: goto label_25764c;
        case 0x257650u: goto label_257650;
        case 0x257654u: goto label_257654;
        case 0x257658u: goto label_257658;
        case 0x25765cu: goto label_25765c;
        case 0x257660u: goto label_257660;
        case 0x257664u: goto label_257664;
        case 0x257668u: goto label_257668;
        case 0x25766cu: goto label_25766c;
        case 0x257670u: goto label_257670;
        case 0x257674u: goto label_257674;
        case 0x257678u: goto label_257678;
        case 0x25767cu: goto label_25767c;
        case 0x257680u: goto label_257680;
        case 0x257684u: goto label_257684;
        case 0x257688u: goto label_257688;
        case 0x25768cu: goto label_25768c;
        case 0x257690u: goto label_257690;
        case 0x257694u: goto label_257694;
        case 0x257698u: goto label_257698;
        case 0x25769cu: goto label_25769c;
        case 0x2576a0u: goto label_2576a0;
        case 0x2576a4u: goto label_2576a4;
        case 0x2576a8u: goto label_2576a8;
        case 0x2576acu: goto label_2576ac;
        case 0x2576b0u: goto label_2576b0;
        case 0x2576b4u: goto label_2576b4;
        case 0x2576b8u: goto label_2576b8;
        case 0x2576bcu: goto label_2576bc;
        case 0x2576c0u: goto label_2576c0;
        case 0x2576c4u: goto label_2576c4;
        case 0x2576c8u: goto label_2576c8;
        case 0x2576ccu: goto label_2576cc;
        case 0x2576d0u: goto label_2576d0;
        case 0x2576d4u: goto label_2576d4;
        case 0x2576d8u: goto label_2576d8;
        case 0x2576dcu: goto label_2576dc;
        case 0x2576e0u: goto label_2576e0;
        case 0x2576e4u: goto label_2576e4;
        case 0x2576e8u: goto label_2576e8;
        case 0x2576ecu: goto label_2576ec;
        case 0x2576f0u: goto label_2576f0;
        case 0x2576f4u: goto label_2576f4;
        case 0x2576f8u: goto label_2576f8;
        case 0x2576fcu: goto label_2576fc;
        case 0x257700u: goto label_257700;
        case 0x257704u: goto label_257704;
        case 0x257708u: goto label_257708;
        case 0x25770cu: goto label_25770c;
        case 0x257710u: goto label_257710;
        case 0x257714u: goto label_257714;
        case 0x257718u: goto label_257718;
        case 0x25771cu: goto label_25771c;
        case 0x257720u: goto label_257720;
        case 0x257724u: goto label_257724;
        case 0x257728u: goto label_257728;
        case 0x25772cu: goto label_25772c;
        case 0x257730u: goto label_257730;
        case 0x257734u: goto label_257734;
        case 0x257738u: goto label_257738;
        case 0x25773cu: goto label_25773c;
        case 0x257740u: goto label_257740;
        case 0x257744u: goto label_257744;
        case 0x257748u: goto label_257748;
        case 0x25774cu: goto label_25774c;
        case 0x257750u: goto label_257750;
        case 0x257754u: goto label_257754;
        case 0x257758u: goto label_257758;
        case 0x25775cu: goto label_25775c;
        case 0x257760u: goto label_257760;
        case 0x257764u: goto label_257764;
        case 0x257768u: goto label_257768;
        case 0x25776cu: goto label_25776c;
        case 0x257770u: goto label_257770;
        case 0x257774u: goto label_257774;
        case 0x257778u: goto label_257778;
        case 0x25777cu: goto label_25777c;
        case 0x257780u: goto label_257780;
        case 0x257784u: goto label_257784;
        case 0x257788u: goto label_257788;
        case 0x25778cu: goto label_25778c;
        case 0x257790u: goto label_257790;
        case 0x257794u: goto label_257794;
        case 0x257798u: goto label_257798;
        case 0x25779cu: goto label_25779c;
        case 0x2577a0u: goto label_2577a0;
        case 0x2577a4u: goto label_2577a4;
        case 0x2577a8u: goto label_2577a8;
        case 0x2577acu: goto label_2577ac;
        case 0x2577b0u: goto label_2577b0;
        case 0x2577b4u: goto label_2577b4;
        case 0x2577b8u: goto label_2577b8;
        case 0x2577bcu: goto label_2577bc;
        case 0x2577c0u: goto label_2577c0;
        case 0x2577c4u: goto label_2577c4;
        case 0x2577c8u: goto label_2577c8;
        case 0x2577ccu: goto label_2577cc;
        case 0x2577d0u: goto label_2577d0;
        case 0x2577d4u: goto label_2577d4;
        case 0x2577d8u: goto label_2577d8;
        case 0x2577dcu: goto label_2577dc;
        case 0x2577e0u: goto label_2577e0;
        case 0x2577e4u: goto label_2577e4;
        case 0x2577e8u: goto label_2577e8;
        case 0x2577ecu: goto label_2577ec;
        case 0x2577f0u: goto label_2577f0;
        case 0x2577f4u: goto label_2577f4;
        case 0x2577f8u: goto label_2577f8;
        case 0x2577fcu: goto label_2577fc;
        case 0x257800u: goto label_257800;
        case 0x257804u: goto label_257804;
        case 0x257808u: goto label_257808;
        case 0x25780cu: goto label_25780c;
        case 0x257810u: goto label_257810;
        case 0x257814u: goto label_257814;
        case 0x257818u: goto label_257818;
        case 0x25781cu: goto label_25781c;
        default: return;
    }

label_257050:
    // 0x257050: 0xaa7  .word       0x00000AA7                   # not         $at, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257050u;
    SET_GPR_U64(ctx, 1, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_257054:
    // 0x257054: 0x4960  .word       0x00004960                   # add         $t1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257054u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_257058:
    // 0x257058: 0x0  nop
    ctx->pc = 0x257058u;
    // NOP
label_25705c:
    // 0x25705c: 0x0  nop
    ctx->pc = 0x25705cu;
    // NOP
label_257060:
    // 0x257060: 0xab1  tgeu        $zero, $zero, 42
    ctx->pc = 0x257060u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257064:
    // 0x257064: 0xeae0  .word       0x0000EAE0                   # add         $sp, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257064u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_257068:
    // 0x257068: 0x0  nop
    ctx->pc = 0x257068u;
    // NOP
label_25706c:
    // 0x25706c: 0x0  nop
    ctx->pc = 0x25706cu;
    // NOP
label_257070:
    // 0x257070: 0xacf  .word       0x00000ACF                   # sync # 00000800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257070u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_257074:
    // 0x257074: 0x6e00  sll         $t5, $zero, 24
    ctx->pc = 0x257074u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_257078:
    // 0x257078: 0x0  nop
    ctx->pc = 0x257078u;
    // NOP
label_25707c:
    // 0x25707c: 0x0  nop
    ctx->pc = 0x25707cu;
    // NOP
label_257080:
    // 0x257080: 0xadd  .word       0x00000ADD                   # dmultu      $zero, $zero # 00000AC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257080u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x257080 raw=0x00000ADD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_257084:
    // 0x257084: 0x6ad0  .word       0x00006AD0                   # mfhi        $t5 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257084u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_257088:
    // 0x257088: 0x0  nop
    ctx->pc = 0x257088u;
    // NOP
label_25708c:
    // 0x25708c: 0x0  nop
    ctx->pc = 0x25708cu;
    // NOP
label_257090:
    // 0x257090: 0xaeb  .word       0x00000AEB                   # sltu        $at, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257090u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_257094:
    // 0x257094: 0x68d0  .word       0x000068D0                   # mfhi        $t5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257094u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_257098:
    // 0x257098: 0x0  nop
    ctx->pc = 0x257098u;
    // NOP
label_25709c:
    // 0x25709c: 0x0  nop
    ctx->pc = 0x25709cu;
    // NOP
label_2570a0:
    // 0x2570a0: 0xaf9  .word       0x00000AF9                   # INVALID     $zero, $zero, 0xAF9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2570a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2570A0 raw=0x00000AF9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2570a4:
    // 0x2570a4: 0x5ad0  .word       0x00005AD0                   # mfhi        $t3 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2570a4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2570a8:
    // 0x2570a8: 0x0  nop
    ctx->pc = 0x2570a8u;
    // NOP
label_2570ac:
    // 0x2570ac: 0x0  nop
    ctx->pc = 0x2570acu;
    // NOP
label_2570b0:
    // 0x2570b0: 0xb05  .word       0x00000B05                   # INVALID     $zero, $zero, 0xB05 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2570b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2570B0 raw=0x00000B05"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2570b4:
    // 0x2570b4: 0xa360  .word       0x0000A360                   # add         $s4, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2570b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_2570b8:
    // 0x2570b8: 0x0  nop
    ctx->pc = 0x2570b8u;
    // NOP
label_2570bc:
    // 0x2570bc: 0x0  nop
    ctx->pc = 0x2570bcu;
    // NOP
label_2570c0:
    // 0x2570c0: 0xb1a  .word       0x00000B1A                   # div         $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2570c0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2570c4:
    // 0x2570c4: 0x5910  .word       0x00005910                   # mfhi        $t3 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2570c4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2570c8:
    // 0x2570c8: 0x0  nop
    ctx->pc = 0x2570c8u;
    // NOP
label_2570cc:
    // 0x2570cc: 0x0  nop
    ctx->pc = 0x2570ccu;
    // NOP
label_2570d0:
    // 0x2570d0: 0xb26  .word       0x00000B26                   # xor         $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2570d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2570d4:
    // 0x2570d4: 0x16490  .word       0x00016490                   # mfhi        $t4 # 00010480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2570d4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_2570d8:
    // 0x2570d8: 0x0  nop
    ctx->pc = 0x2570d8u;
    // NOP
label_2570dc:
    // 0x2570dc: 0x0  nop
    ctx->pc = 0x2570dcu;
    // NOP
label_2570e0:
    // 0x2570e0: 0xb53  .word       0x00000B53                   # mtlo        $zero # 00000B40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2570e0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2570e4:
    // 0x2570e4: 0x8440  sll         $s0, $zero, 17
    ctx->pc = 0x2570e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2570e8:
    // 0x2570e8: 0x0  nop
    ctx->pc = 0x2570e8u;
    // NOP
label_2570ec:
    // 0x2570ec: 0x0  nop
    ctx->pc = 0x2570ecu;
    // NOP
label_2570f0:
    // 0x2570f0: 0xb64  .word       0x00000B64                   # and         $at, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2570f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2570f4:
    // 0x2570f4: 0x8560  .word       0x00008560                   # add         $s0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2570f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2570f8:
    // 0x2570f8: 0x0  nop
    ctx->pc = 0x2570f8u;
    // NOP
label_2570fc:
    // 0x2570fc: 0x0  nop
    ctx->pc = 0x2570fcu;
    // NOP
label_257100:
    // 0x257100: 0xb75  .word       0x00000B75                   # INVALID     $zero, $zero, 0xB75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257100u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x257100 raw=0x00000B75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_257104:
    // 0x257104: 0x92d0  .word       0x000092D0                   # mfhi        $s2 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257104u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_257108:
    // 0x257108: 0x0  nop
    ctx->pc = 0x257108u;
    // NOP
label_25710c:
    // 0x25710c: 0x0  nop
    ctx->pc = 0x25710cu;
    // NOP
label_257110:
    // 0x257110: 0xb88  .word       0x00000B88                   # jr          $zero # 00000B80 <InstrIdType: CPU_SPECIAL>
label_257114:
    if (ctx->pc == 0x257114u) {
        ctx->pc = 0x257114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257110u;
        // 0x257114: 0x6c80  sll         $t5, $zero, 18 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257118u;
        goto label_257118;
    }
    ctx->pc = 0x257110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x257114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257110u;
        // 0x257114: 0x6c80  sll         $t5, $zero, 18 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257110u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x257118u;
label_257118:
    // 0x257118: 0x0  nop
    ctx->pc = 0x257118u;
    // NOP
label_25711c:
    // 0x25711c: 0x0  nop
    ctx->pc = 0x25711cu;
    // NOP
label_257120:
    // 0x257120: 0xb96  .word       0x00000B96                   # dsrlv       $at, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257120u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_257124:
    // 0x257124: 0xe310  .word       0x0000E310                   # mfhi        $gp # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257124u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_257128:
    // 0x257128: 0x0  nop
    ctx->pc = 0x257128u;
    // NOP
label_25712c:
    // 0x25712c: 0x0  nop
    ctx->pc = 0x25712cu;
    // NOP
label_257130:
    // 0x257130: 0xbb3  tltu        $zero, $zero, 46
    ctx->pc = 0x257130u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257134:
    // 0x257134: 0x90d0  .word       0x000090D0                   # mfhi        $s2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257134u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_257138:
    // 0x257138: 0x0  nop
    ctx->pc = 0x257138u;
    // NOP
label_25713c:
    // 0x25713c: 0x0  nop
    ctx->pc = 0x25713cu;
    // NOP
label_257140:
    // 0x257140: 0xbc6  .word       0x00000BC6                   # srlv        $at, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257140u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_257144:
    // 0x257144: 0xce00  sll         $t9, $zero, 24
    ctx->pc = 0x257144u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_257148:
    // 0x257148: 0x0  nop
    ctx->pc = 0x257148u;
    // NOP
label_25714c:
    // 0x25714c: 0x0  nop
    ctx->pc = 0x25714cu;
    // NOP
label_257150:
    // 0x257150: 0xbe0  .word       0x00000BE0                   # add         $at, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257150u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_257154:
    // 0x257154: 0x9460  .word       0x00009460                   # add         $s2, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257154u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_257158:
    // 0x257158: 0x0  nop
    ctx->pc = 0x257158u;
    // NOP
label_25715c:
    // 0x25715c: 0x0  nop
    ctx->pc = 0x25715cu;
    // NOP
label_257160:
    // 0x257160: 0xbf3  tltu        $zero, $zero, 47
    ctx->pc = 0x257160u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257164:
    // 0x257164: 0x82b0  tge         $zero, $zero, 522
    ctx->pc = 0x257164u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257168:
    // 0x257168: 0x0  nop
    ctx->pc = 0x257168u;
    // NOP
label_25716c:
    // 0x25716c: 0x0  nop
    ctx->pc = 0x25716cu;
    // NOP
label_257170:
    // 0x257170: 0xc04  .word       0x00000C04                   # sllv        $at, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257170u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_257174:
    // 0x257174: 0x95c0  sll         $s2, $zero, 23
    ctx->pc = 0x257174u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_257178:
    // 0x257178: 0x0  nop
    ctx->pc = 0x257178u;
    // NOP
label_25717c:
    // 0x25717c: 0x0  nop
    ctx->pc = 0x25717cu;
    // NOP
label_257180:
    // 0x257180: 0xc17  .word       0x00000C17                   # dsrav       $at, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257180u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_257184:
    // 0x257184: 0x6b80  sll         $t5, $zero, 14
    ctx->pc = 0x257184u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_257188:
    // 0x257188: 0x0  nop
    ctx->pc = 0x257188u;
    // NOP
label_25718c:
    // 0x25718c: 0x0  nop
    ctx->pc = 0x25718cu;
    // NOP
label_257190:
    // 0x257190: 0xc25  .word       0x00000C25                   # move        $at, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257190u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_257194:
    // 0x257194: 0x4ee0  .word       0x00004EE0                   # add         $t1, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257194u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_257198:
    // 0x257198: 0x0  nop
    ctx->pc = 0x257198u;
    // NOP
label_25719c:
    // 0x25719c: 0x0  nop
    ctx->pc = 0x25719cu;
    // NOP
label_2571a0:
    // 0x2571a0: 0xc2f  .word       0x00000C2F                   # dsubu       $at, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2571a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2571a4:
    // 0x2571a4: 0x9b10  .word       0x00009B10                   # mfhi        $s3 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2571a4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_2571a8:
    // 0x2571a8: 0x0  nop
    ctx->pc = 0x2571a8u;
    // NOP
label_2571ac:
    // 0x2571ac: 0x0  nop
    ctx->pc = 0x2571acu;
    // NOP
label_2571b0:
    // 0x2571b0: 0xc43  sra         $at, $zero, 17
    ctx->pc = 0x2571b0u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), 17));
label_2571b4:
    // 0x2571b4: 0x16f70  tge         $zero, $at, 445
    ctx->pc = 0x2571b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2571b8:
    // 0x2571b8: 0x0  nop
    ctx->pc = 0x2571b8u;
    // NOP
label_2571bc:
    // 0x2571bc: 0x0  nop
    ctx->pc = 0x2571bcu;
    // NOP
label_2571c0:
    // 0x2571c0: 0xc71  tgeu        $zero, $zero, 49
    ctx->pc = 0x2571c0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2571c4:
    // 0x2571c4: 0x92e0  .word       0x000092E0                   # add         $s2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2571c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2571c8:
    // 0x2571c8: 0x0  nop
    ctx->pc = 0x2571c8u;
    // NOP
label_2571cc:
    // 0x2571cc: 0x0  nop
    ctx->pc = 0x2571ccu;
    // NOP
label_2571d0:
    // 0x2571d0: 0xc84  .word       0x00000C84                   # sllv        $at, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2571d0u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2571d4:
    // 0x2571d4: 0x8d00  sll         $s1, $zero, 20
    ctx->pc = 0x2571d4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_2571d8:
    // 0x2571d8: 0x0  nop
    ctx->pc = 0x2571d8u;
    // NOP
label_2571dc:
    // 0x2571dc: 0x0  nop
    ctx->pc = 0x2571dcu;
    // NOP
label_2571e0:
    // 0x2571e0: 0xc96  .word       0x00000C96                   # dsrlv       $at, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2571e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2571e4:
    // 0x2571e4: 0x86e0  .word       0x000086E0                   # add         $s0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2571e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2571e8:
    // 0x2571e8: 0x0  nop
    ctx->pc = 0x2571e8u;
    // NOP
label_2571ec:
    // 0x2571ec: 0x0  nop
    ctx->pc = 0x2571ecu;
    // NOP
label_2571f0:
    // 0x2571f0: 0xca7  .word       0x00000CA7                   # not         $at, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2571f0u;
    SET_GPR_U64(ctx, 1, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2571f4:
    // 0x2571f4: 0x26e0  .word       0x000026E0                   # add         $a0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2571f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_2571f8:
    // 0x2571f8: 0x0  nop
    ctx->pc = 0x2571f8u;
    // NOP
label_2571fc:
    // 0x2571fc: 0x0  nop
    ctx->pc = 0x2571fcu;
    // NOP
label_257200:
    // 0x257200: 0xcac  .word       0x00000CAC                   # dadd        $at, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257200u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_257204:
    // 0x257204: 0x40d0  .word       0x000040D0                   # mfhi        $t0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257204u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_257208:
    // 0x257208: 0x0  nop
    ctx->pc = 0x257208u;
    // NOP
label_25720c:
    // 0x25720c: 0x0  nop
    ctx->pc = 0x25720cu;
    // NOP
label_257210:
    // 0x257210: 0xcb5  .word       0x00000CB5                   # INVALID     $zero, $zero, 0xCB5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257210u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x257210 raw=0x00000CB5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_257214:
    // 0x257214: 0x52b0  tge         $zero, $zero, 330
    ctx->pc = 0x257214u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257218:
    // 0x257218: 0x0  nop
    ctx->pc = 0x257218u;
    // NOP
label_25721c:
    // 0x25721c: 0x0  nop
    ctx->pc = 0x25721cu;
    // NOP
label_257220:
    // 0x257220: 0xcc0  sll         $at, $zero, 19
    ctx->pc = 0x257220u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_257224:
    // 0x257224: 0xffd0  .word       0x0000FFD0                   # mfhi        $ra # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257224u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_257228:
    // 0x257228: 0x0  nop
    ctx->pc = 0x257228u;
    // NOP
label_25722c:
    // 0x25722c: 0x0  nop
    ctx->pc = 0x25722cu;
    // NOP
label_257230:
    // 0x257230: 0xce0  .word       0x00000CE0                   # add         $at, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257230u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_257234:
    // 0x257234: 0x6e40  sll         $t5, $zero, 25
    ctx->pc = 0x257234u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_257238:
    // 0x257238: 0x0  nop
    ctx->pc = 0x257238u;
    // NOP
label_25723c:
    // 0x25723c: 0x0  nop
    ctx->pc = 0x25723cu;
    // NOP
label_257240:
    // 0x257240: 0xcee  .word       0x00000CEE                   # dsub        $at, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257240u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_257244:
    // 0x257244: 0x63b0  tge         $zero, $zero, 398
    ctx->pc = 0x257244u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257248:
    // 0x257248: 0x0  nop
    ctx->pc = 0x257248u;
    // NOP
label_25724c:
    // 0x25724c: 0x0  nop
    ctx->pc = 0x25724cu;
    // NOP
label_257250:
    // 0x257250: 0xcfb  dsra        $at, $zero, 19
    ctx->pc = 0x257250u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> 19);
label_257254:
    // 0x257254: 0xb3e0  .word       0x0000B3E0                   # add         $s6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257254u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_257258:
    // 0x257258: 0x0  nop
    ctx->pc = 0x257258u;
    // NOP
label_25725c:
    // 0x25725c: 0x0  nop
    ctx->pc = 0x25725cu;
    // NOP
label_257260:
    // 0x257260: 0xd12  .word       0x00000D12                   # mflo        $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257260u;
    SET_GPR_U64(ctx, 1, ctx->lo);
label_257264:
    // 0x257264: 0xa990  .word       0x0000A990                   # mfhi        $s5 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257264u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_257268:
    // 0x257268: 0x0  nop
    ctx->pc = 0x257268u;
    // NOP
label_25726c:
    // 0x25726c: 0x0  nop
    ctx->pc = 0x25726cu;
    // NOP
label_257270:
    // 0x257270: 0xd28  .word       0x00000D28                   # mfsa        $at # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x257270u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_257274:
    // 0x257274: 0xc590  .word       0x0000C590                   # mfhi        $t8 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257274u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_257278:
    // 0x257278: 0x0  nop
    ctx->pc = 0x257278u;
    // NOP
label_25727c:
    // 0x25727c: 0x0  nop
    ctx->pc = 0x25727cu;
    // NOP
label_257280:
    // 0x257280: 0xd41  .word       0x00000D41                   # INVALID     $zero, $zero, 0xD41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257280u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x257280 raw=0x00000D41"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_257284:
    // 0x257284: 0xbf10  .word       0x0000BF10                   # mfhi        $s7 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257284u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_257288:
    // 0x257288: 0x0  nop
    ctx->pc = 0x257288u;
    // NOP
label_25728c:
    // 0x25728c: 0x0  nop
    ctx->pc = 0x25728cu;
    // NOP
label_257290:
    // 0x257290: 0xd59  .word       0x00000D59                   # multu       $zero, $zero # 00000D40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257290u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_257294:
    // 0x257294: 0x10a40  sll         $at, $at, 9
    ctx->pc = 0x257294u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 9));
label_257298:
    // 0x257298: 0x0  nop
    ctx->pc = 0x257298u;
    // NOP
label_25729c:
    // 0x25729c: 0x0  nop
    ctx->pc = 0x25729cu;
    // NOP
label_2572a0:
    // 0x2572a0: 0xd7b  dsra        $at, $zero, 21
    ctx->pc = 0x2572a0u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> 21);
label_2572a4:
    // 0x2572a4: 0xba70  tge         $zero, $zero, 745
    ctx->pc = 0x2572a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2572a8:
    // 0x2572a8: 0x0  nop
    ctx->pc = 0x2572a8u;
    // NOP
label_2572ac:
    // 0x2572ac: 0x0  nop
    ctx->pc = 0x2572acu;
    // NOP
label_2572b0:
    // 0x2572b0: 0xd93  .word       0x00000D93                   # mtlo        $zero # 00000D80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2572b0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2572b4:
    // 0x2572b4: 0x9b10  .word       0x00009B10                   # mfhi        $s3 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2572b4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_2572b8:
    // 0x2572b8: 0x0  nop
    ctx->pc = 0x2572b8u;
    // NOP
label_2572bc:
    // 0x2572bc: 0x0  nop
    ctx->pc = 0x2572bcu;
    // NOP
label_2572c0:
    // 0x2572c0: 0xda7  .word       0x00000DA7                   # not         $at, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2572c0u;
    SET_GPR_U64(ctx, 1, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2572c4:
    // 0x2572c4: 0xa4a0  .word       0x0000A4A0                   # add         $s4, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2572c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_2572c8:
    // 0x2572c8: 0x0  nop
    ctx->pc = 0x2572c8u;
    // NOP
label_2572cc:
    // 0x2572cc: 0x0  nop
    ctx->pc = 0x2572ccu;
    // NOP
label_2572d0:
    // 0x2572d0: 0xdbc  dsll32      $at, $zero, 22
    ctx->pc = 0x2572d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (32 + 22));
label_2572d4:
    // 0x2572d4: 0xa1f0  tge         $zero, $zero, 647
    ctx->pc = 0x2572d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2572d8:
    // 0x2572d8: 0x0  nop
    ctx->pc = 0x2572d8u;
    // NOP
label_2572dc:
    // 0x2572dc: 0x0  nop
    ctx->pc = 0x2572dcu;
    // NOP
label_2572e0:
    // 0x2572e0: 0xdd1  .word       0x00000DD1                   # mthi        $zero # 00000DC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2572e0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2572e4:
    // 0x2572e4: 0x6ca0  .word       0x00006CA0                   # add         $t5, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2572e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2572e8:
    // 0x2572e8: 0x0  nop
    ctx->pc = 0x2572e8u;
    // NOP
label_2572ec:
    // 0x2572ec: 0x0  nop
    ctx->pc = 0x2572ecu;
    // NOP
label_2572f0:
    // 0x2572f0: 0xddf  .word       0x00000DDF                   # ddivu       $at, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2572f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2572F0 raw=0x00000DDF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2572f4:
    // 0x2572f4: 0xb310  .word       0x0000B310                   # mfhi        $s6 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2572f4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_2572f8:
    // 0x2572f8: 0x0  nop
    ctx->pc = 0x2572f8u;
    // NOP
label_2572fc:
    // 0x2572fc: 0x0  nop
    ctx->pc = 0x2572fcu;
    // NOP
label_257300:
    // 0x257300: 0xdf6  tne         $zero, $zero, 55
    ctx->pc = 0x257300u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257304:
    // 0x257304: 0x1de40  sll         $k1, $at, 25
    ctx->pc = 0x257304u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 1), 25));
label_257308:
    // 0x257308: 0x0  nop
    ctx->pc = 0x257308u;
    // NOP
label_25730c:
    // 0x25730c: 0x0  nop
    ctx->pc = 0x25730cu;
    // NOP
label_257310:
    // 0x257310: 0xe32  tlt         $zero, $zero, 56
    ctx->pc = 0x257310u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257314:
    // 0x257314: 0x2db0  tge         $zero, $zero, 182
    ctx->pc = 0x257314u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257318:
    // 0x257318: 0x0  nop
    ctx->pc = 0x257318u;
    // NOP
label_25731c:
    // 0x25731c: 0x0  nop
    ctx->pc = 0x25731cu;
    // NOP
label_257320:
    // 0x257320: 0xe38  dsll        $at, $zero, 24
    ctx->pc = 0x257320u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 24);
label_257324:
    // 0x257324: 0x8dc0  sll         $s1, $zero, 23
    ctx->pc = 0x257324u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_257328:
    // 0x257328: 0x0  nop
    ctx->pc = 0x257328u;
    // NOP
label_25732c:
    // 0x25732c: 0x0  nop
    ctx->pc = 0x25732cu;
    // NOP
label_257330:
    // 0x257330: 0xe4a  .word       0x00000E4A                   # movz        $at, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257330u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_257334:
    // 0x257334: 0x4930  tge         $zero, $zero, 292
    ctx->pc = 0x257334u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257338:
    // 0x257338: 0x0  nop
    ctx->pc = 0x257338u;
    // NOP
label_25733c:
    // 0x25733c: 0x0  nop
    ctx->pc = 0x25733cu;
    // NOP
label_257340:
    // 0x257340: 0xe54  .word       0x00000E54                   # dsllv       $at, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257340u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_257344:
    // 0x257344: 0x73e0  .word       0x000073E0                   # add         $t6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257344u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_257348:
    // 0x257348: 0x0  nop
    ctx->pc = 0x257348u;
    // NOP
label_25734c:
    // 0x25734c: 0x0  nop
    ctx->pc = 0x25734cu;
    // NOP
label_257350:
    // 0x257350: 0xe63  .word       0x00000E63                   # negu        $at, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257350u;
    SET_GPR_S32(ctx, 1, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_257354:
    // 0x257354: 0xcd30  tge         $zero, $zero, 820
    ctx->pc = 0x257354u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257358:
    // 0x257358: 0x0  nop
    ctx->pc = 0x257358u;
    // NOP
label_25735c:
    // 0x25735c: 0x0  nop
    ctx->pc = 0x25735cu;
    // NOP
label_257360:
    // 0x257360: 0xe7d  .word       0x00000E7D                   # INVALID     $zero, $zero, 0xE7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257360u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x257360 raw=0x00000E7D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_257364:
    // 0x257364: 0x5410  .word       0x00005410                   # mfhi        $t2 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257364u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_257368:
    // 0x257368: 0x0  nop
    ctx->pc = 0x257368u;
    // NOP
label_25736c:
    // 0x25736c: 0x0  nop
    ctx->pc = 0x25736cu;
    // NOP
label_257370:
    // 0x257370: 0xe88  .word       0x00000E88                   # jr          $zero # 00000E80 <InstrIdType: CPU_SPECIAL>
label_257374:
    if (ctx->pc == 0x257374u) {
        ctx->pc = 0x257374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257370u;
        // 0x257374: 0x10430  tge         $zero, $at, 16 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x257378u;
        goto label_257378;
    }
    ctx->pc = 0x257370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x257374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257370u;
        // 0x257374: 0x10430  tge         $zero, $at, 16 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257370u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x257378u;
label_257378:
    // 0x257378: 0x0  nop
    ctx->pc = 0x257378u;
    // NOP
label_25737c:
    // 0x25737c: 0x0  nop
    ctx->pc = 0x25737cu;
    // NOP
label_257380:
    // 0x257380: 0xea9  .word       0x00000EA9                   # mtsa        $zero # 00000E80 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x257380u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_257384:
    // 0x257384: 0xabe0  .word       0x0000ABE0                   # add         $s5, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257384u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_257388:
    // 0x257388: 0x0  nop
    ctx->pc = 0x257388u;
    // NOP
label_25738c:
    // 0x25738c: 0x0  nop
    ctx->pc = 0x25738cu;
    // NOP
label_257390:
    // 0x257390: 0xebf  dsra32      $at, $zero, 26
    ctx->pc = 0x257390u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> (32 + 26));
label_257394:
    // 0x257394: 0xc850  .word       0x0000C850                   # mfhi        $t9 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257394u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_257398:
    // 0x257398: 0x0  nop
    ctx->pc = 0x257398u;
    // NOP
label_25739c:
    // 0x25739c: 0x0  nop
    ctx->pc = 0x25739cu;
    // NOP
label_2573a0:
    // 0x2573a0: 0xed9  .word       0x00000ED9                   # multu       $zero, $zero # 00000EC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2573a0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_2573a4:
    // 0x2573a4: 0xbff0  tge         $zero, $zero, 767
    ctx->pc = 0x2573a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2573a8:
    // 0x2573a8: 0x0  nop
    ctx->pc = 0x2573a8u;
    // NOP
label_2573ac:
    // 0x2573ac: 0x0  nop
    ctx->pc = 0x2573acu;
    // NOP
label_2573b0:
    // 0x2573b0: 0xef1  tgeu        $zero, $zero, 59
    ctx->pc = 0x2573b0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2573b4:
    // 0x2573b4: 0xe730  tge         $zero, $zero, 924
    ctx->pc = 0x2573b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2573b8:
    // 0x2573b8: 0x0  nop
    ctx->pc = 0x2573b8u;
    // NOP
label_2573bc:
    // 0x2573bc: 0x0  nop
    ctx->pc = 0x2573bcu;
    // NOP
label_2573c0:
    // 0x2573c0: 0xf0e  .word       0x00000F0E                   # INVALID     $zero, $zero, 0xF0E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2573c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2573C0 raw=0x00000F0E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2573c4:
    // 0x2573c4: 0xc080  sll         $t8, $zero, 2
    ctx->pc = 0x2573c4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_2573c8:
    // 0x2573c8: 0x0  nop
    ctx->pc = 0x2573c8u;
    // NOP
label_2573cc:
    // 0x2573cc: 0x0  nop
    ctx->pc = 0x2573ccu;
    // NOP
label_2573d0:
    // 0x2573d0: 0xf27  .word       0x00000F27                   # not         $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2573d0u;
    SET_GPR_U64(ctx, 1, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2573d4:
    // 0x2573d4: 0xb940  sll         $s7, $zero, 5
    ctx->pc = 0x2573d4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_2573d8:
    // 0x2573d8: 0x0  nop
    ctx->pc = 0x2573d8u;
    // NOP
label_2573dc:
    // 0x2573dc: 0x0  nop
    ctx->pc = 0x2573dcu;
    // NOP
label_2573e0:
    // 0x2573e0: 0xf3f  dsra32      $at, $zero, 28
    ctx->pc = 0x2573e0u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> (32 + 28));
label_2573e4:
    // 0x2573e4: 0x14820  add         $t1, $zero, $at
    ctx->pc = 0x2573e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2573e8:
    // 0x2573e8: 0x0  nop
    ctx->pc = 0x2573e8u;
    // NOP
label_2573ec:
    // 0x2573ec: 0x0  nop
    ctx->pc = 0x2573ecu;
    // NOP
label_2573f0:
    // 0x2573f0: 0xf69  .word       0x00000F69                   # mtsa        $zero # 00000F40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2573f0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2573f4:
    // 0x2573f4: 0x81b0  tge         $zero, $zero, 518
    ctx->pc = 0x2573f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2573f8:
    // 0x2573f8: 0x0  nop
    ctx->pc = 0x2573f8u;
    // NOP
label_2573fc:
    // 0x2573fc: 0x0  nop
    ctx->pc = 0x2573fcu;
    // NOP
label_257400:
    // 0x257400: 0xf7a  dsrl        $at, $zero, 29
    ctx->pc = 0x257400u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) >> 29);
label_257404:
    // 0x257404: 0x7620  .word       0x00007620                   # add         $t6, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257404u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_257408:
    // 0x257408: 0x0  nop
    ctx->pc = 0x257408u;
    // NOP
label_25740c:
    // 0x25740c: 0x0  nop
    ctx->pc = 0x25740cu;
    // NOP
label_257410:
    // 0x257410: 0xf89  .word       0x00000F89                   # jalr        $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
label_257414:
    if (ctx->pc == 0x257414u) {
        ctx->pc = 0x257414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257410u;
        // 0x257414: 0x7140  sll         $t6, $zero, 5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257418u;
        goto label_257418;
    }
    ctx->pc = 0x257410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 1, 0x257418u);
        ctx->pc = 0x257414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257410u;
        // 0x257414: 0x7140  sll         $t6, $zero, 5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257410u, 0x257418u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x257418u;
label_257418:
    // 0x257418: 0x0  nop
    ctx->pc = 0x257418u;
    // NOP
label_25741c:
    // 0x25741c: 0x0  nop
    ctx->pc = 0x25741cu;
    // NOP
label_257420:
    // 0x257420: 0xf98  .word       0x00000F98                   # mult        $at, $zero, $zero # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x257420u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_257424:
    // 0x257424: 0x5d60  .word       0x00005D60                   # add         $t3, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257424u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_257428:
    // 0x257428: 0x0  nop
    ctx->pc = 0x257428u;
    // NOP
label_25742c:
    // 0x25742c: 0x0  nop
    ctx->pc = 0x25742cu;
    // NOP
label_257430:
    // 0x257430: 0xfa4  .word       0x00000FA4                   # and         $at, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257430u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_257434:
    // 0x257434: 0x5550  .word       0x00005550                   # mfhi        $t2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257434u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_257438:
    // 0x257438: 0x0  nop
    ctx->pc = 0x257438u;
    // NOP
label_25743c:
    // 0x25743c: 0x0  nop
    ctx->pc = 0x25743cu;
    // NOP
label_257440:
    // 0x257440: 0xfaf  .word       0x00000FAF                   # dsubu       $at, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257440u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_257444:
    // 0x257444: 0x4690  .word       0x00004690                   # mfhi        $t0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257444u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_257448:
    // 0x257448: 0x0  nop
    ctx->pc = 0x257448u;
    // NOP
label_25744c:
    // 0x25744c: 0x0  nop
    ctx->pc = 0x25744cu;
    // NOP
label_257450:
    // 0x257450: 0xfb8  dsll        $at, $zero, 30
    ctx->pc = 0x257450u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 30);
label_257454:
    // 0x257454: 0x15b40  sll         $t3, $at, 13
    ctx->pc = 0x257454u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 1), 13));
label_257458:
    // 0x257458: 0x0  nop
    ctx->pc = 0x257458u;
    // NOP
label_25745c:
    // 0x25745c: 0x0  nop
    ctx->pc = 0x25745cu;
    // NOP
label_257460:
    // 0x257460: 0xfe4  .word       0x00000FE4                   # and         $at, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257460u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_257464:
    // 0x257464: 0x7da0  .word       0x00007DA0                   # add         $t7, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257464u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_257468:
    // 0x257468: 0x0  nop
    ctx->pc = 0x257468u;
    // NOP
label_25746c:
    // 0x25746c: 0x0  nop
    ctx->pc = 0x25746cu;
    // NOP
label_257470:
    // 0x257470: 0xff4  teq         $zero, $zero, 63
    ctx->pc = 0x257470u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257474:
    // 0x257474: 0x9aa0  .word       0x00009AA0                   # add         $s3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257474u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_257478:
    // 0x257478: 0x0  nop
    ctx->pc = 0x257478u;
    // NOP
label_25747c:
    // 0x25747c: 0x0  nop
    ctx->pc = 0x25747cu;
    // NOP
label_257480:
    // 0x257480: 0x1008  .word       0x00001008                   # jr          $zero # 00001000 <InstrIdType: CPU_SPECIAL>
label_257484:
    if (ctx->pc == 0x257484u) {
        ctx->pc = 0x257484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257480u;
        // 0x257484: 0x68b0  tge         $zero, $zero, 418 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x257488u;
        goto label_257488;
    }
    ctx->pc = 0x257480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x257484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257480u;
        // 0x257484: 0x68b0  tge         $zero, $zero, 418 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257480u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x257488u;
label_257488:
    // 0x257488: 0x0  nop
    ctx->pc = 0x257488u;
    // NOP
label_25748c:
    // 0x25748c: 0x0  nop
    ctx->pc = 0x25748cu;
    // NOP
label_257490:
    // 0x257490: 0x1016  dsrlv       $v0, $zero, $zero
    ctx->pc = 0x257490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_257494:
    // 0x257494: 0x7550  .word       0x00007550                   # mfhi        $t6 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257494u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_257498:
    // 0x257498: 0x0  nop
    ctx->pc = 0x257498u;
    // NOP
label_25749c:
    // 0x25749c: 0x0  nop
    ctx->pc = 0x25749cu;
    // NOP
label_2574a0:
    // 0x2574a0: 0x1025  move        $v0, $zero
    ctx->pc = 0x2574a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2574a4:
    // 0x2574a4: 0x7590  .word       0x00007590                   # mfhi        $t6 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2574a4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2574a8:
    // 0x2574a8: 0x0  nop
    ctx->pc = 0x2574a8u;
    // NOP
label_2574ac:
    // 0x2574ac: 0x0  nop
    ctx->pc = 0x2574acu;
    // NOP
label_2574b0:
    // 0x2574b0: 0x1034  teq         $zero, $zero, 64
    ctx->pc = 0x2574b0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2574b4:
    // 0x2574b4: 0x8300  sll         $s0, $zero, 12
    ctx->pc = 0x2574b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_2574b8:
    // 0x2574b8: 0x0  nop
    ctx->pc = 0x2574b8u;
    // NOP
label_2574bc:
    // 0x2574bc: 0x0  nop
    ctx->pc = 0x2574bcu;
    // NOP
label_2574c0:
    // 0x2574c0: 0x1045  .word       0x00001045                   # INVALID     $zero, $zero, 0x1045 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2574c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2574C0 raw=0x00001045"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2574c4:
    // 0x2574c4: 0x106e0  .word       0x000106E0                   # add         $zero, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2574c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2574c8:
    // 0x2574c8: 0x0  nop
    ctx->pc = 0x2574c8u;
    // NOP
label_2574cc:
    // 0x2574cc: 0x0  nop
    ctx->pc = 0x2574ccu;
    // NOP
label_2574d0:
    // 0x2574d0: 0x1066  .word       0x00001066                   # xor         $v0, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2574d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2574d4:
    // 0x2574d4: 0x8b60  .word       0x00008B60                   # add         $s1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2574d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2574d8:
    // 0x2574d8: 0x0  nop
    ctx->pc = 0x2574d8u;
    // NOP
label_2574dc:
    // 0x2574dc: 0x0  nop
    ctx->pc = 0x2574dcu;
    // NOP
label_2574e0:
    // 0x2574e0: 0x1078  dsll        $v0, $zero, 1
    ctx->pc = 0x2574e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << 1);
label_2574e4:
    // 0x2574e4: 0x93a0  .word       0x000093A0                   # add         $s2, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2574e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2574e8:
    // 0x2574e8: 0x0  nop
    ctx->pc = 0x2574e8u;
    // NOP
label_2574ec:
    // 0x2574ec: 0x0  nop
    ctx->pc = 0x2574ecu;
    // NOP
label_2574f0:
    // 0x2574f0: 0x108b  .word       0x0000108B                   # movn        $v0, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2574f0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_2574f4:
    // 0x2574f4: 0xcd60  .word       0x0000CD60                   # add         $t9, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2574f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_2574f8:
    // 0x2574f8: 0x0  nop
    ctx->pc = 0x2574f8u;
    // NOP
label_2574fc:
    // 0x2574fc: 0x0  nop
    ctx->pc = 0x2574fcu;
    // NOP
label_257500:
    // 0x257500: 0x10a5  .word       0x000010A5                   # move        $v0, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_257504:
    // 0x257504: 0x6130  tge         $zero, $zero, 388
    ctx->pc = 0x257504u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257508:
    // 0x257508: 0x0  nop
    ctx->pc = 0x257508u;
    // NOP
label_25750c:
    // 0x25750c: 0x0  nop
    ctx->pc = 0x25750cu;
    // NOP
label_257510:
    // 0x257510: 0x10b2  tlt         $zero, $zero, 66
    ctx->pc = 0x257510u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257514:
    // 0x257514: 0x3d30  tge         $zero, $zero, 244
    ctx->pc = 0x257514u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257518:
    // 0x257518: 0x0  nop
    ctx->pc = 0x257518u;
    // NOP
label_25751c:
    // 0x25751c: 0x0  nop
    ctx->pc = 0x25751cu;
    // NOP
label_257520:
    // 0x257520: 0x10ba  dsrl        $v0, $zero, 2
    ctx->pc = 0x257520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) >> 2);
label_257524:
    // 0x257524: 0x9030  tge         $zero, $zero, 576
    ctx->pc = 0x257524u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257528:
    // 0x257528: 0x0  nop
    ctx->pc = 0x257528u;
    // NOP
label_25752c:
    // 0x25752c: 0x0  nop
    ctx->pc = 0x25752cu;
    // NOP
label_257530:
    // 0x257530: 0x10cd  break       0, 67
    ctx->pc = 0x257530u;
    runtime->handleBreak(rdram, ctx);
label_257534:
    // 0x257534: 0x12180  sll         $a0, $at, 6
    ctx->pc = 0x257534u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 6));
label_257538:
    // 0x257538: 0x0  nop
    ctx->pc = 0x257538u;
    // NOP
label_25753c:
    // 0x25753c: 0x0  nop
    ctx->pc = 0x25753cu;
    // NOP
label_257540:
    // 0x257540: 0x10f2  tlt         $zero, $zero, 67
    ctx->pc = 0x257540u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257544:
    // 0x257544: 0xbb20  .word       0x0000BB20                   # add         $s7, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257544u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_257548:
    // 0x257548: 0x0  nop
    ctx->pc = 0x257548u;
    // NOP
label_25754c:
    // 0x25754c: 0x0  nop
    ctx->pc = 0x25754cu;
    // NOP
label_257550:
    // 0x257550: 0x110a  .word       0x0000110A                   # movz        $v0, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257550u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_257554:
    // 0x257554: 0xd010  mfhi        $k0
    ctx->pc = 0x257554u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_257558:
    // 0x257558: 0x0  nop
    ctx->pc = 0x257558u;
    // NOP
label_25755c:
    // 0x25755c: 0x0  nop
    ctx->pc = 0x25755cu;
    // NOP
label_257560:
    // 0x257560: 0x1125  .word       0x00001125                   # move        $v0, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_257564:
    // 0x257564: 0x75d0  .word       0x000075D0                   # mfhi        $t6 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257564u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_257568:
    // 0x257568: 0x0  nop
    ctx->pc = 0x257568u;
    // NOP
label_25756c:
    // 0x25756c: 0x0  nop
    ctx->pc = 0x25756cu;
    // NOP
label_257570:
    // 0x257570: 0x1134  teq         $zero, $zero, 68
    ctx->pc = 0x257570u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257574:
    // 0x257574: 0x6b60  .word       0x00006B60                   # add         $t5, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257574u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_257578:
    // 0x257578: 0x0  nop
    ctx->pc = 0x257578u;
    // NOP
label_25757c:
    // 0x25757c: 0x0  nop
    ctx->pc = 0x25757cu;
    // NOP
label_257580:
    // 0x257580: 0x1142  srl         $v0, $zero, 5
    ctx->pc = 0x257580u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 0), 5));
label_257584:
    // 0x257584: 0x7f40  sll         $t7, $zero, 29
    ctx->pc = 0x257584u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_257588:
    // 0x257588: 0x0  nop
    ctx->pc = 0x257588u;
    // NOP
label_25758c:
    // 0x25758c: 0x0  nop
    ctx->pc = 0x25758cu;
    // NOP
label_257590:
    // 0x257590: 0x1152  .word       0x00001152                   # mflo        $v0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257590u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257594:
    // 0x257594: 0xb690  .word       0x0000B690                   # mfhi        $s6 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257594u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_257598:
    // 0x257598: 0x0  nop
    ctx->pc = 0x257598u;
    // NOP
label_25759c:
    // 0x25759c: 0x0  nop
    ctx->pc = 0x25759cu;
    // NOP
label_2575a0:
    // 0x2575a0: 0x1169  .word       0x00001169                   # mtsa        $zero # 00001140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2575a0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2575a4:
    // 0x2575a4: 0xe2e0  .word       0x0000E2E0                   # add         $gp, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2575a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_2575a8:
    // 0x2575a8: 0x0  nop
    ctx->pc = 0x2575a8u;
    // NOP
label_2575ac:
    // 0x2575ac: 0x0  nop
    ctx->pc = 0x2575acu;
    // NOP
label_2575b0:
    // 0x2575b0: 0x1186  .word       0x00001186                   # srlv        $v0, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2575b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2575b4:
    // 0x2575b4: 0x3450  .word       0x00003450                   # mfhi        $a2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2575b4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_2575b8:
    // 0x2575b8: 0x0  nop
    ctx->pc = 0x2575b8u;
    // NOP
label_2575bc:
    // 0x2575bc: 0x0  nop
    ctx->pc = 0x2575bcu;
    // NOP
label_2575c0:
    // 0x2575c0: 0x118d  break       0, 70
    ctx->pc = 0x2575c0u;
    runtime->handleBreak(rdram, ctx);
label_2575c4:
    // 0x2575c4: 0x7260  .word       0x00007260                   # add         $t6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2575c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2575c8:
    // 0x2575c8: 0x0  nop
    ctx->pc = 0x2575c8u;
    // NOP
label_2575cc:
    // 0x2575cc: 0x0  nop
    ctx->pc = 0x2575ccu;
    // NOP
label_2575d0:
    // 0x2575d0: 0x119c  .word       0x0000119C                   # dmult       $zero, $zero # 00001180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2575d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2575D0 raw=0x0000119C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2575d4:
    // 0x2575d4: 0x7320  .word       0x00007320                   # add         $t6, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2575d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2575d8:
    // 0x2575d8: 0x0  nop
    ctx->pc = 0x2575d8u;
    // NOP
label_2575dc:
    // 0x2575dc: 0x0  nop
    ctx->pc = 0x2575dcu;
    // NOP
label_2575e0:
    // 0x2575e0: 0x11ab  .word       0x000011AB                   # sltu        $v0, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2575e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2575e4:
    // 0x2575e4: 0x9070  tge         $zero, $zero, 577
    ctx->pc = 0x2575e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2575e8:
    // 0x2575e8: 0x0  nop
    ctx->pc = 0x2575e8u;
    // NOP
label_2575ec:
    // 0x2575ec: 0x0  nop
    ctx->pc = 0x2575ecu;
    // NOP
label_2575f0:
    // 0x2575f0: 0x11be  dsrl32      $v0, $zero, 6
    ctx->pc = 0x2575f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) >> (32 + 6));
label_2575f4:
    // 0x2575f4: 0x5b80  sll         $t3, $zero, 14
    ctx->pc = 0x2575f4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_2575f8:
    // 0x2575f8: 0x0  nop
    ctx->pc = 0x2575f8u;
    // NOP
label_2575fc:
    // 0x2575fc: 0x0  nop
    ctx->pc = 0x2575fcu;
    // NOP
label_257600:
    // 0x257600: 0x11ca  .word       0x000011CA                   # movz        $v0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257600u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_257604:
    // 0x257604: 0x5fd0  .word       0x00005FD0                   # mfhi        $t3 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257604u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_257608:
    // 0x257608: 0x0  nop
    ctx->pc = 0x257608u;
    // NOP
label_25760c:
    // 0x25760c: 0x0  nop
    ctx->pc = 0x25760cu;
    // NOP
label_257610:
    // 0x257610: 0x11d6  .word       0x000011D6                   # dsrlv       $v0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_257614:
    // 0x257614: 0xa2b0  tge         $zero, $zero, 650
    ctx->pc = 0x257614u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257618:
    // 0x257618: 0x0  nop
    ctx->pc = 0x257618u;
    // NOP
label_25761c:
    // 0x25761c: 0x0  nop
    ctx->pc = 0x25761cu;
    // NOP
label_257620:
    // 0x257620: 0x11eb  .word       0x000011EB                   # sltu        $v0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257620u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_257624:
    // 0x257624: 0x5d90  .word       0x00005D90                   # mfhi        $t3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257624u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_257628:
    // 0x257628: 0x0  nop
    ctx->pc = 0x257628u;
    // NOP
label_25762c:
    // 0x25762c: 0x0  nop
    ctx->pc = 0x25762cu;
    // NOP
label_257630:
    // 0x257630: 0x11f7  .word       0x000011F7                   # INVALID     $zero, $zero, 0x11F7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257630u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x257630 raw=0x000011F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_257634:
    // 0x257634: 0x7320  .word       0x00007320                   # add         $t6, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257634u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_257638:
    // 0x257638: 0x0  nop
    ctx->pc = 0x257638u;
    // NOP
label_25763c:
    // 0x25763c: 0x0  nop
    ctx->pc = 0x25763cu;
    // NOP
label_257640:
    // 0x257640: 0x1206  .word       0x00001206                   # srlv        $v0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257640u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_257644:
    // 0x257644: 0x5200  sll         $t2, $zero, 8
    ctx->pc = 0x257644u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_257648:
    // 0x257648: 0x0  nop
    ctx->pc = 0x257648u;
    // NOP
label_25764c:
    // 0x25764c: 0x0  nop
    ctx->pc = 0x25764cu;
    // NOP
label_257650:
    // 0x257650: 0x1211  .word       0x00001211                   # mthi        $zero # 00001200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257650u;
    ctx->hi = GPR_U64(ctx, 0);
label_257654:
    // 0x257654: 0x4890  .word       0x00004890                   # mfhi        $t1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257654u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_257658:
    // 0x257658: 0x0  nop
    ctx->pc = 0x257658u;
    // NOP
label_25765c:
    // 0x25765c: 0x0  nop
    ctx->pc = 0x25765cu;
    // NOP
label_257660:
    // 0x257660: 0x121b  .word       0x0000121B                   # divu        $v0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257660u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_257664:
    // 0x257664: 0x5870  tge         $zero, $zero, 353
    ctx->pc = 0x257664u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257668:
    // 0x257668: 0x0  nop
    ctx->pc = 0x257668u;
    // NOP
label_25766c:
    // 0x25766c: 0x0  nop
    ctx->pc = 0x25766cu;
    // NOP
label_257670:
    // 0x257670: 0x1227  .word       0x00001227                   # not         $v0, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257670u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_257674:
    // 0x257674: 0x60c0  sll         $t4, $zero, 3
    ctx->pc = 0x257674u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_257678:
    // 0x257678: 0x0  nop
    ctx->pc = 0x257678u;
    // NOP
label_25767c:
    // 0x25767c: 0x0  nop
    ctx->pc = 0x25767cu;
    // NOP
label_257680:
    // 0x257680: 0x1234  teq         $zero, $zero, 72
    ctx->pc = 0x257680u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257684:
    // 0x257684: 0x12ea0  .word       0x00012EA0                   # add         $a1, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257684u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_257688:
    // 0x257688: 0x0  nop
    ctx->pc = 0x257688u;
    // NOP
label_25768c:
    // 0x25768c: 0x0  nop
    ctx->pc = 0x25768cu;
    // NOP
label_257690:
    // 0x257690: 0x125a  .word       0x0000125A                   # div         $v0, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257690u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_257694:
    // 0x257694: 0x7800  sll         $t7, $zero, 0
    ctx->pc = 0x257694u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_257698:
    // 0x257698: 0x0  nop
    ctx->pc = 0x257698u;
    // NOP
label_25769c:
    // 0x25769c: 0x0  nop
    ctx->pc = 0x25769cu;
    // NOP
label_2576a0:
    // 0x2576a0: 0x1269  .word       0x00001269                   # mtsa        $zero # 00001240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2576a0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2576a4:
    // 0x2576a4: 0x2c40  sll         $a1, $zero, 17
    ctx->pc = 0x2576a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2576a8:
    // 0x2576a8: 0x0  nop
    ctx->pc = 0x2576a8u;
    // NOP
label_2576ac:
    // 0x2576ac: 0x0  nop
    ctx->pc = 0x2576acu;
    // NOP
label_2576b0:
    // 0x2576b0: 0x126f  .word       0x0000126F                   # dsubu       $v0, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2576b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2576b4:
    // 0x2576b4: 0x4600  sll         $t0, $zero, 24
    ctx->pc = 0x2576b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_2576b8:
    // 0x2576b8: 0x0  nop
    ctx->pc = 0x2576b8u;
    // NOP
label_2576bc:
    // 0x2576bc: 0x0  nop
    ctx->pc = 0x2576bcu;
    // NOP
label_2576c0:
    // 0x2576c0: 0x1278  dsll        $v0, $zero, 9
    ctx->pc = 0x2576c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << 9);
label_2576c4:
    // 0x2576c4: 0x2fc0  sll         $a1, $zero, 31
    ctx->pc = 0x2576c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_2576c8:
    // 0x2576c8: 0x0  nop
    ctx->pc = 0x2576c8u;
    // NOP
label_2576cc:
    // 0x2576cc: 0x0  nop
    ctx->pc = 0x2576ccu;
    // NOP
label_2576d0:
    // 0x2576d0: 0x127e  dsrl32      $v0, $zero, 9
    ctx->pc = 0x2576d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) >> (32 + 9));
label_2576d4:
    // 0x2576d4: 0x88a0  .word       0x000088A0                   # add         $s1, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2576d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2576d8:
    // 0x2576d8: 0x0  nop
    ctx->pc = 0x2576d8u;
    // NOP
label_2576dc:
    // 0x2576dc: 0x0  nop
    ctx->pc = 0x2576dcu;
    // NOP
label_2576e0:
    // 0x2576e0: 0x1290  .word       0x00001290                   # mfhi        $v0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2576e0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2576e4:
    // 0x2576e4: 0x41c0  sll         $t0, $zero, 7
    ctx->pc = 0x2576e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_2576e8:
    // 0x2576e8: 0x0  nop
    ctx->pc = 0x2576e8u;
    // NOP
label_2576ec:
    // 0x2576ec: 0x0  nop
    ctx->pc = 0x2576ecu;
    // NOP
label_2576f0:
    // 0x2576f0: 0x1299  .word       0x00001299                   # multu       $zero, $zero # 00001280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2576f0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2576f4:
    // 0x2576f4: 0xf970  tge         $zero, $zero, 997
    ctx->pc = 0x2576f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2576f8:
    // 0x2576f8: 0x0  nop
    ctx->pc = 0x2576f8u;
    // NOP
label_2576fc:
    // 0x2576fc: 0x0  nop
    ctx->pc = 0x2576fcu;
    // NOP
label_257700:
    // 0x257700: 0x12b9  .word       0x000012B9                   # INVALID     $zero, $zero, 0x12B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257700u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x257700 raw=0x000012B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_257704:
    // 0x257704: 0x2b10  .word       0x00002B10                   # mfhi        $a1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257704u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_257708:
    // 0x257708: 0x0  nop
    ctx->pc = 0x257708u;
    // NOP
label_25770c:
    // 0x25770c: 0x0  nop
    ctx->pc = 0x25770cu;
    // NOP
label_257710:
    // 0x257710: 0x12bf  dsra32      $v0, $zero, 10
    ctx->pc = 0x257710u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 0) >> (32 + 10));
label_257714:
    // 0x257714: 0x6100  sll         $t4, $zero, 4
    ctx->pc = 0x257714u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_257718:
    // 0x257718: 0x0  nop
    ctx->pc = 0x257718u;
    // NOP
label_25771c:
    // 0x25771c: 0x0  nop
    ctx->pc = 0x25771cu;
    // NOP
label_257720:
    // 0x257720: 0x12cc  syscall     75
    ctx->pc = 0x257720u;
    ctx->pc = 0x257724u;
runtime->handleSyscall(rdram, ctx, 0x4Bu);
label_257724:
    // 0x257724: 0x4c80  sll         $t1, $zero, 18
    ctx->pc = 0x257724u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_257728:
    // 0x257728: 0x0  nop
    ctx->pc = 0x257728u;
    // NOP
label_25772c:
    // 0x25772c: 0x0  nop
    ctx->pc = 0x25772cu;
    // NOP
label_257730:
    // 0x257730: 0x12d6  .word       0x000012D6                   # dsrlv       $v0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_257734:
    // 0x257734: 0x4580  sll         $t0, $zero, 22
    ctx->pc = 0x257734u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_257738:
    // 0x257738: 0x0  nop
    ctx->pc = 0x257738u;
    // NOP
label_25773c:
    // 0x25773c: 0x0  nop
    ctx->pc = 0x25773cu;
    // NOP
label_257740:
    // 0x257740: 0x12df  .word       0x000012DF                   # ddivu       $v0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257740u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x257740 raw=0x000012DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_257744:
    // 0x257744: 0x4aa0  .word       0x00004AA0                   # add         $t1, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257744u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_257748:
    // 0x257748: 0x0  nop
    ctx->pc = 0x257748u;
    // NOP
label_25774c:
    // 0x25774c: 0x0  nop
    ctx->pc = 0x25774cu;
    // NOP
label_257750:
    // 0x257750: 0x12e9  .word       0x000012E9                   # mtsa        $zero # 000012C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x257750u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_257754:
    // 0x257754: 0x41c0  sll         $t0, $zero, 7
    ctx->pc = 0x257754u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_257758:
    // 0x257758: 0x0  nop
    ctx->pc = 0x257758u;
    // NOP
label_25775c:
    // 0x25775c: 0x0  nop
    ctx->pc = 0x25775cu;
    // NOP
label_257760:
    // 0x257760: 0x12f2  tlt         $zero, $zero, 75
    ctx->pc = 0x257760u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257764:
    // 0x257764: 0x17320  .word       0x00017320                   # add         $t6, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257764u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_257768:
    // 0x257768: 0x0  nop
    ctx->pc = 0x257768u;
    // NOP
label_25776c:
    // 0x25776c: 0x0  nop
    ctx->pc = 0x25776cu;
    // NOP
label_257770:
    // 0x257770: 0x1321  .word       0x00001321                   # addu        $v0, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_257774:
    // 0x257774: 0x5560  .word       0x00005560                   # add         $t2, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257774u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_257778:
    // 0x257778: 0x0  nop
    ctx->pc = 0x257778u;
    // NOP
label_25777c:
    // 0x25777c: 0x0  nop
    ctx->pc = 0x25777cu;
    // NOP
label_257780:
    // 0x257780: 0x132c  .word       0x0000132C                   # dadd        $v0, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257780u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_257784:
    // 0x257784: 0x4940  sll         $t1, $zero, 5
    ctx->pc = 0x257784u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_257788:
    // 0x257788: 0x0  nop
    ctx->pc = 0x257788u;
    // NOP
label_25778c:
    // 0x25778c: 0x0  nop
    ctx->pc = 0x25778cu;
    // NOP
label_257790:
    // 0x257790: 0x1336  tne         $zero, $zero, 76
    ctx->pc = 0x257790u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257794:
    // 0x257794: 0x80e0  .word       0x000080E0                   # add         $s0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257794u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_257798:
    // 0x257798: 0x0  nop
    ctx->pc = 0x257798u;
    // NOP
label_25779c:
    // 0x25779c: 0x0  nop
    ctx->pc = 0x25779cu;
    // NOP
label_2577a0:
    // 0x2577a0: 0x1347  .word       0x00001347                   # srav        $v0, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2577a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2577a4:
    // 0x2577a4: 0x6120  .word       0x00006120                   # add         $t4, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2577a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2577a8:
    // 0x2577a8: 0x0  nop
    ctx->pc = 0x2577a8u;
    // NOP
label_2577ac:
    // 0x2577ac: 0x0  nop
    ctx->pc = 0x2577acu;
    // NOP
label_2577b0:
    // 0x2577b0: 0x1354  .word       0x00001354                   # dsllv       $v0, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2577b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2577b4:
    // 0x2577b4: 0x60a0  .word       0x000060A0                   # add         $t4, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2577b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2577b8:
    // 0x2577b8: 0x0  nop
    ctx->pc = 0x2577b8u;
    // NOP
label_2577bc:
    // 0x2577bc: 0x0  nop
    ctx->pc = 0x2577bcu;
    // NOP
label_2577c0:
    // 0x2577c0: 0x1361  .word       0x00001361                   # addu        $v0, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2577c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2577c4:
    // 0x2577c4: 0x8340  sll         $s0, $zero, 13
    ctx->pc = 0x2577c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_2577c8:
    // 0x2577c8: 0x0  nop
    ctx->pc = 0x2577c8u;
    // NOP
label_2577cc:
    // 0x2577cc: 0x0  nop
    ctx->pc = 0x2577ccu;
    // NOP
label_2577d0:
    // 0x2577d0: 0x1372  tlt         $zero, $zero, 77
    ctx->pc = 0x2577d0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2577d4:
    // 0x2577d4: 0xa740  sll         $s4, $zero, 29
    ctx->pc = 0x2577d4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_2577d8:
    // 0x2577d8: 0x0  nop
    ctx->pc = 0x2577d8u;
    // NOP
label_2577dc:
    // 0x2577dc: 0x0  nop
    ctx->pc = 0x2577dcu;
    // NOP
label_2577e0:
    // 0x2577e0: 0x1387  .word       0x00001387                   # srav        $v0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2577e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2577e4:
    // 0x2577e4: 0x3340  sll         $a2, $zero, 13
    ctx->pc = 0x2577e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_2577e8:
    // 0x2577e8: 0x0  nop
    ctx->pc = 0x2577e8u;
    // NOP
label_2577ec:
    // 0x2577ec: 0x0  nop
    ctx->pc = 0x2577ecu;
    // NOP
label_2577f0:
    // 0x2577f0: 0x138e  .word       0x0000138E                   # INVALID     $zero, $zero, 0x138E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2577f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2577F0 raw=0x0000138E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2577f4:
    // 0x2577f4: 0x62c0  sll         $t4, $zero, 11
    ctx->pc = 0x2577f4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_2577f8:
    // 0x2577f8: 0x0  nop
    ctx->pc = 0x2577f8u;
    // NOP
label_2577fc:
    // 0x2577fc: 0x0  nop
    ctx->pc = 0x2577fcu;
    // NOP
label_257800:
    // 0x257800: 0x139b  .word       0x0000139B                   # divu        $v0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257800u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_257804:
    // 0x257804: 0x69c0  sll         $t5, $zero, 7
    ctx->pc = 0x257804u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_257808:
    // 0x257808: 0x0  nop
    ctx->pc = 0x257808u;
    // NOP
label_25780c:
    // 0x25780c: 0x0  nop
    ctx->pc = 0x25780cu;
    // NOP
label_257810:
    // 0x257810: 0x13a9  .word       0x000013A9                   # mtsa        $zero # 00001380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x257810u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_257814:
    // 0x257814: 0x66d0  .word       0x000066D0                   # mfhi        $t4 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257814u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_257818:
    // 0x257818: 0x0  nop
    ctx->pc = 0x257818u;
    // NOP
label_25781c:
    // 0x25781c: 0x0  nop
    ctx->pc = 0x25781cu;
    // NOP
    ctx->pc = 0x257820u;
    return;
}
