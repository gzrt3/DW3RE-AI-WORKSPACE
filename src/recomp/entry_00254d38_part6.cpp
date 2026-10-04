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

// Function: entry_00254d38
// Address: 0x254d38 - 0x27d478
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_00254d38_part6(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x257820u: goto label_257820;
        case 0x257824u: goto label_257824;
        case 0x257828u: goto label_257828;
        case 0x25782cu: goto label_25782c;
        case 0x257830u: goto label_257830;
        case 0x257834u: goto label_257834;
        case 0x257838u: goto label_257838;
        case 0x25783cu: goto label_25783c;
        case 0x257840u: goto label_257840;
        case 0x257844u: goto label_257844;
        case 0x257848u: goto label_257848;
        case 0x25784cu: goto label_25784c;
        case 0x257850u: goto label_257850;
        case 0x257854u: goto label_257854;
        case 0x257858u: goto label_257858;
        case 0x25785cu: goto label_25785c;
        case 0x257860u: goto label_257860;
        case 0x257864u: goto label_257864;
        case 0x257868u: goto label_257868;
        case 0x25786cu: goto label_25786c;
        case 0x257870u: goto label_257870;
        case 0x257874u: goto label_257874;
        case 0x257878u: goto label_257878;
        case 0x25787cu: goto label_25787c;
        case 0x257880u: goto label_257880;
        case 0x257884u: goto label_257884;
        case 0x257888u: goto label_257888;
        case 0x25788cu: goto label_25788c;
        case 0x257890u: goto label_257890;
        case 0x257894u: goto label_257894;
        case 0x257898u: goto label_257898;
        case 0x25789cu: goto label_25789c;
        case 0x2578a0u: goto label_2578a0;
        case 0x2578a4u: goto label_2578a4;
        case 0x2578a8u: goto label_2578a8;
        case 0x2578acu: goto label_2578ac;
        case 0x2578b0u: goto label_2578b0;
        case 0x2578b4u: goto label_2578b4;
        case 0x2578b8u: goto label_2578b8;
        case 0x2578bcu: goto label_2578bc;
        case 0x2578c0u: goto label_2578c0;
        case 0x2578c4u: goto label_2578c4;
        case 0x2578c8u: goto label_2578c8;
        case 0x2578ccu: goto label_2578cc;
        case 0x2578d0u: goto label_2578d0;
        case 0x2578d4u: goto label_2578d4;
        case 0x2578d8u: goto label_2578d8;
        case 0x2578dcu: goto label_2578dc;
        case 0x2578e0u: goto label_2578e0;
        case 0x2578e4u: goto label_2578e4;
        case 0x2578e8u: goto label_2578e8;
        case 0x2578ecu: goto label_2578ec;
        case 0x2578f0u: goto label_2578f0;
        case 0x2578f4u: goto label_2578f4;
        case 0x2578f8u: goto label_2578f8;
        case 0x2578fcu: goto label_2578fc;
        case 0x257900u: goto label_257900;
        case 0x257904u: goto label_257904;
        case 0x257908u: goto label_257908;
        case 0x25790cu: goto label_25790c;
        case 0x257910u: goto label_257910;
        case 0x257914u: goto label_257914;
        case 0x257918u: goto label_257918;
        case 0x25791cu: goto label_25791c;
        case 0x257920u: goto label_257920;
        case 0x257924u: goto label_257924;
        case 0x257928u: goto label_257928;
        case 0x25792cu: goto label_25792c;
        case 0x257930u: goto label_257930;
        case 0x257934u: goto label_257934;
        case 0x257938u: goto label_257938;
        case 0x25793cu: goto label_25793c;
        case 0x257940u: goto label_257940;
        case 0x257944u: goto label_257944;
        case 0x257948u: goto label_257948;
        case 0x25794cu: goto label_25794c;
        case 0x257950u: goto label_257950;
        case 0x257954u: goto label_257954;
        case 0x257958u: goto label_257958;
        case 0x25795cu: goto label_25795c;
        case 0x257960u: goto label_257960;
        case 0x257964u: goto label_257964;
        case 0x257968u: goto label_257968;
        case 0x25796cu: goto label_25796c;
        case 0x257970u: goto label_257970;
        case 0x257974u: goto label_257974;
        case 0x257978u: goto label_257978;
        case 0x25797cu: goto label_25797c;
        case 0x257980u: goto label_257980;
        case 0x257984u: goto label_257984;
        case 0x257988u: goto label_257988;
        case 0x25798cu: goto label_25798c;
        case 0x257990u: goto label_257990;
        case 0x257994u: goto label_257994;
        case 0x257998u: goto label_257998;
        case 0x25799cu: goto label_25799c;
        case 0x2579a0u: goto label_2579a0;
        case 0x2579a4u: goto label_2579a4;
        case 0x2579a8u: goto label_2579a8;
        case 0x2579acu: goto label_2579ac;
        case 0x2579b0u: goto label_2579b0;
        case 0x2579b4u: goto label_2579b4;
        case 0x2579b8u: goto label_2579b8;
        case 0x2579bcu: goto label_2579bc;
        case 0x2579c0u: goto label_2579c0;
        case 0x2579c4u: goto label_2579c4;
        case 0x2579c8u: goto label_2579c8;
        case 0x2579ccu: goto label_2579cc;
        case 0x2579d0u: goto label_2579d0;
        case 0x2579d4u: goto label_2579d4;
        case 0x2579d8u: goto label_2579d8;
        case 0x2579dcu: goto label_2579dc;
        case 0x2579e0u: goto label_2579e0;
        case 0x2579e4u: goto label_2579e4;
        case 0x2579e8u: goto label_2579e8;
        case 0x2579ecu: goto label_2579ec;
        case 0x2579f0u: goto label_2579f0;
        case 0x2579f4u: goto label_2579f4;
        case 0x2579f8u: goto label_2579f8;
        case 0x2579fcu: goto label_2579fc;
        case 0x257a00u: goto label_257a00;
        case 0x257a04u: goto label_257a04;
        case 0x257a08u: goto label_257a08;
        case 0x257a0cu: goto label_257a0c;
        case 0x257a10u: goto label_257a10;
        case 0x257a14u: goto label_257a14;
        case 0x257a18u: goto label_257a18;
        case 0x257a1cu: goto label_257a1c;
        case 0x257a20u: goto label_257a20;
        case 0x257a24u: goto label_257a24;
        case 0x257a28u: goto label_257a28;
        case 0x257a2cu: goto label_257a2c;
        case 0x257a30u: goto label_257a30;
        case 0x257a34u: goto label_257a34;
        case 0x257a38u: goto label_257a38;
        case 0x257a3cu: goto label_257a3c;
        case 0x257a40u: goto label_257a40;
        case 0x257a44u: goto label_257a44;
        case 0x257a48u: goto label_257a48;
        case 0x257a4cu: goto label_257a4c;
        case 0x257a50u: goto label_257a50;
        case 0x257a54u: goto label_257a54;
        case 0x257a58u: goto label_257a58;
        case 0x257a5cu: goto label_257a5c;
        case 0x257a60u: goto label_257a60;
        case 0x257a64u: goto label_257a64;
        case 0x257a68u: goto label_257a68;
        case 0x257a6cu: goto label_257a6c;
        case 0x257a70u: goto label_257a70;
        case 0x257a74u: goto label_257a74;
        case 0x257a78u: goto label_257a78;
        case 0x257a7cu: goto label_257a7c;
        case 0x257a80u: goto label_257a80;
        case 0x257a84u: goto label_257a84;
        case 0x257a88u: goto label_257a88;
        case 0x257a8cu: goto label_257a8c;
        case 0x257a90u: goto label_257a90;
        case 0x257a94u: goto label_257a94;
        case 0x257a98u: goto label_257a98;
        case 0x257a9cu: goto label_257a9c;
        case 0x257aa0u: goto label_257aa0;
        case 0x257aa4u: goto label_257aa4;
        case 0x257aa8u: goto label_257aa8;
        case 0x257aacu: goto label_257aac;
        case 0x257ab0u: goto label_257ab0;
        case 0x257ab4u: goto label_257ab4;
        case 0x257ab8u: goto label_257ab8;
        case 0x257abcu: goto label_257abc;
        case 0x257ac0u: goto label_257ac0;
        case 0x257ac4u: goto label_257ac4;
        case 0x257ac8u: goto label_257ac8;
        case 0x257accu: goto label_257acc;
        case 0x257ad0u: goto label_257ad0;
        case 0x257ad4u: goto label_257ad4;
        case 0x257ad8u: goto label_257ad8;
        case 0x257adcu: goto label_257adc;
        case 0x257ae0u: goto label_257ae0;
        case 0x257ae4u: goto label_257ae4;
        case 0x257ae8u: goto label_257ae8;
        case 0x257aecu: goto label_257aec;
        case 0x257af0u: goto label_257af0;
        case 0x257af4u: goto label_257af4;
        case 0x257af8u: goto label_257af8;
        case 0x257afcu: goto label_257afc;
        case 0x257b00u: goto label_257b00;
        case 0x257b04u: goto label_257b04;
        case 0x257b08u: goto label_257b08;
        case 0x257b0cu: goto label_257b0c;
        case 0x257b10u: goto label_257b10;
        case 0x257b14u: goto label_257b14;
        case 0x257b18u: goto label_257b18;
        case 0x257b1cu: goto label_257b1c;
        case 0x257b20u: goto label_257b20;
        case 0x257b24u: goto label_257b24;
        case 0x257b28u: goto label_257b28;
        case 0x257b2cu: goto label_257b2c;
        case 0x257b30u: goto label_257b30;
        case 0x257b34u: goto label_257b34;
        case 0x257b38u: goto label_257b38;
        case 0x257b3cu: goto label_257b3c;
        case 0x257b40u: goto label_257b40;
        case 0x257b44u: goto label_257b44;
        case 0x257b48u: goto label_257b48;
        case 0x257b4cu: goto label_257b4c;
        case 0x257b50u: goto label_257b50;
        case 0x257b54u: goto label_257b54;
        case 0x257b58u: goto label_257b58;
        case 0x257b5cu: goto label_257b5c;
        case 0x257b60u: goto label_257b60;
        case 0x257b64u: goto label_257b64;
        case 0x257b68u: goto label_257b68;
        case 0x257b6cu: goto label_257b6c;
        case 0x257b70u: goto label_257b70;
        case 0x257b74u: goto label_257b74;
        case 0x257b78u: goto label_257b78;
        case 0x257b7cu: goto label_257b7c;
        case 0x257b80u: goto label_257b80;
        case 0x257b84u: goto label_257b84;
        case 0x257b88u: goto label_257b88;
        case 0x257b8cu: goto label_257b8c;
        case 0x257b90u: goto label_257b90;
        case 0x257b94u: goto label_257b94;
        case 0x257b98u: goto label_257b98;
        case 0x257b9cu: goto label_257b9c;
        case 0x257ba0u: goto label_257ba0;
        case 0x257ba4u: goto label_257ba4;
        case 0x257ba8u: goto label_257ba8;
        case 0x257bacu: goto label_257bac;
        case 0x257bb0u: goto label_257bb0;
        case 0x257bb4u: goto label_257bb4;
        case 0x257bb8u: goto label_257bb8;
        case 0x257bbcu: goto label_257bbc;
        case 0x257bc0u: goto label_257bc0;
        case 0x257bc4u: goto label_257bc4;
        case 0x257bc8u: goto label_257bc8;
        case 0x257bccu: goto label_257bcc;
        case 0x257bd0u: goto label_257bd0;
        case 0x257bd4u: goto label_257bd4;
        case 0x257bd8u: goto label_257bd8;
        case 0x257bdcu: goto label_257bdc;
        case 0x257be0u: goto label_257be0;
        case 0x257be4u: goto label_257be4;
        case 0x257be8u: goto label_257be8;
        case 0x257becu: goto label_257bec;
        case 0x257bf0u: goto label_257bf0;
        case 0x257bf4u: goto label_257bf4;
        case 0x257bf8u: goto label_257bf8;
        case 0x257bfcu: goto label_257bfc;
        case 0x257c00u: goto label_257c00;
        case 0x257c04u: goto label_257c04;
        case 0x257c08u: goto label_257c08;
        case 0x257c0cu: goto label_257c0c;
        case 0x257c10u: goto label_257c10;
        case 0x257c14u: goto label_257c14;
        default: return;
    }

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
label_257820:
    // 0x257820: 0x13b6  tne         $zero, $zero, 78
    ctx->pc = 0x257820u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257824:
    // 0x257824: 0x5890  .word       0x00005890                   # mfhi        $t3 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257824u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_257828:
    // 0x257828: 0x0  nop
    ctx->pc = 0x257828u;
    // NOP
label_25782c:
    // 0x25782c: 0x0  nop
    ctx->pc = 0x25782cu;
    // NOP
label_257830:
    // 0x257830: 0x13c2  srl         $v0, $zero, 15
    ctx->pc = 0x257830u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 0), 15));
label_257834:
    // 0x257834: 0x2f70  tge         $zero, $zero, 189
    ctx->pc = 0x257834u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257838:
    // 0x257838: 0x0  nop
    ctx->pc = 0x257838u;
    // NOP
label_25783c:
    // 0x25783c: 0x0  nop
    ctx->pc = 0x25783cu;
    // NOP
label_257840:
    // 0x257840: 0x13c8  .word       0x000013C8                   # jr          $zero # 000013C0 <InstrIdType: CPU_SPECIAL>
label_257844:
    if (ctx->pc == 0x257844u) {
        ctx->pc = 0x257844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257840u;
        // 0x257844: 0xdff0  tge         $zero, $zero, 895 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x257848u;
        goto label_257848;
    }
    ctx->pc = 0x257840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x257844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257840u;
        // 0x257844: 0xdff0  tge         $zero, $zero, 895 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257840u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x257848u;
label_257848:
    // 0x257848: 0x0  nop
    ctx->pc = 0x257848u;
    // NOP
label_25784c:
    // 0x25784c: 0x0  nop
    ctx->pc = 0x25784cu;
    // NOP
label_257850:
    // 0x257850: 0x13e4  .word       0x000013E4                   # and         $v0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_257854:
    // 0x257854: 0x46e0  .word       0x000046E0                   # add         $t0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257854u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_257858:
    // 0x257858: 0x0  nop
    ctx->pc = 0x257858u;
    // NOP
label_25785c:
    // 0x25785c: 0x0  nop
    ctx->pc = 0x25785cu;
    // NOP
label_257860:
    // 0x257860: 0x13ed  .word       0x000013ED                   # daddu       $v0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257860u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_257864:
    // 0x257864: 0x5190  .word       0x00005190                   # mfhi        $t2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257864u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_257868:
    // 0x257868: 0x0  nop
    ctx->pc = 0x257868u;
    // NOP
label_25786c:
    // 0x25786c: 0x0  nop
    ctx->pc = 0x25786cu;
    // NOP
label_257870:
    // 0x257870: 0x13f8  dsll        $v0, $zero, 15
    ctx->pc = 0x257870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << 15);
label_257874:
    // 0x257874: 0x6460  .word       0x00006460                   # add         $t4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257874u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_257878:
    // 0x257878: 0x0  nop
    ctx->pc = 0x257878u;
    // NOP
label_25787c:
    // 0x25787c: 0x0  nop
    ctx->pc = 0x25787cu;
    // NOP
label_257880:
    // 0x257880: 0x1405  .word       0x00001405                   # INVALID     $zero, $zero, 0x1405 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257880u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x257880 raw=0x00001405"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_257884:
    // 0x257884: 0x5960  .word       0x00005960                   # add         $t3, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257884u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_257888:
    // 0x257888: 0x0  nop
    ctx->pc = 0x257888u;
    // NOP
label_25788c:
    // 0x25788c: 0x0  nop
    ctx->pc = 0x25788cu;
    // NOP
label_257890:
    // 0x257890: 0x1411  .word       0x00001411                   # mthi        $zero # 00001400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257890u;
    ctx->hi = GPR_U64(ctx, 0);
label_257894:
    // 0x257894: 0x7840  sll         $t7, $zero, 1
    ctx->pc = 0x257894u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_257898:
    // 0x257898: 0x0  nop
    ctx->pc = 0x257898u;
    // NOP
label_25789c:
    // 0x25789c: 0x0  nop
    ctx->pc = 0x25789cu;
    // NOP
label_2578a0:
    // 0x2578a0: 0x1421  .word       0x00001421                   # addu        $v0, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2578a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2578a4:
    // 0x2578a4: 0x7770  tge         $zero, $zero, 477
    ctx->pc = 0x2578a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2578a8:
    // 0x2578a8: 0x0  nop
    ctx->pc = 0x2578a8u;
    // NOP
label_2578ac:
    // 0x2578ac: 0x0  nop
    ctx->pc = 0x2578acu;
    // NOP
label_2578b0:
    // 0x2578b0: 0x1430  tge         $zero, $zero, 80
    ctx->pc = 0x2578b0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2578b4:
    // 0x2578b4: 0x10fc0  sll         $at, $at, 31
    ctx->pc = 0x2578b4u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 31));
label_2578b8:
    // 0x2578b8: 0x0  nop
    ctx->pc = 0x2578b8u;
    // NOP
label_2578bc:
    // 0x2578bc: 0x0  nop
    ctx->pc = 0x2578bcu;
    // NOP
label_2578c0:
    // 0x2578c0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2578c0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2578c4:
    // 0x2578c4: 0x0  nop
    ctx->pc = 0x2578c4u;
    // NOP
label_2578c8:
    // 0x2578c8: 0x0  nop
    ctx->pc = 0x2578c8u;
    // NOP
label_2578cc:
    // 0x2578cc: 0x0  nop
    ctx->pc = 0x2578ccu;
    // NOP
label_2578d0:
    // 0x2578d0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2578d0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2578d4:
    // 0x2578d4: 0x0  nop
    ctx->pc = 0x2578d4u;
    // NOP
label_2578d8:
    // 0x2578d8: 0x0  nop
    ctx->pc = 0x2578d8u;
    // NOP
label_2578dc:
    // 0x2578dc: 0x0  nop
    ctx->pc = 0x2578dcu;
    // NOP
label_2578e0:
    // 0x2578e0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2578e0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2578e4:
    // 0x2578e4: 0x0  nop
    ctx->pc = 0x2578e4u;
    // NOP
label_2578e8:
    // 0x2578e8: 0x0  nop
    ctx->pc = 0x2578e8u;
    // NOP
label_2578ec:
    // 0x2578ec: 0x0  nop
    ctx->pc = 0x2578ecu;
    // NOP
label_2578f0:
    // 0x2578f0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2578f0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2578f4:
    // 0x2578f4: 0x0  nop
    ctx->pc = 0x2578f4u;
    // NOP
label_2578f8:
    // 0x2578f8: 0x0  nop
    ctx->pc = 0x2578f8u;
    // NOP
label_2578fc:
    // 0x2578fc: 0x0  nop
    ctx->pc = 0x2578fcu;
    // NOP
label_257900:
    // 0x257900: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257900u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257904:
    // 0x257904: 0x0  nop
    ctx->pc = 0x257904u;
    // NOP
label_257908:
    // 0x257908: 0x0  nop
    ctx->pc = 0x257908u;
    // NOP
label_25790c:
    // 0x25790c: 0x0  nop
    ctx->pc = 0x25790cu;
    // NOP
label_257910:
    // 0x257910: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257910u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257914:
    // 0x257914: 0x0  nop
    ctx->pc = 0x257914u;
    // NOP
label_257918:
    // 0x257918: 0x0  nop
    ctx->pc = 0x257918u;
    // NOP
label_25791c:
    // 0x25791c: 0x0  nop
    ctx->pc = 0x25791cu;
    // NOP
label_257920:
    // 0x257920: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257920u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257924:
    // 0x257924: 0x0  nop
    ctx->pc = 0x257924u;
    // NOP
label_257928:
    // 0x257928: 0x0  nop
    ctx->pc = 0x257928u;
    // NOP
label_25792c:
    // 0x25792c: 0x0  nop
    ctx->pc = 0x25792cu;
    // NOP
label_257930:
    // 0x257930: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257930u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257934:
    // 0x257934: 0x0  nop
    ctx->pc = 0x257934u;
    // NOP
label_257938:
    // 0x257938: 0x0  nop
    ctx->pc = 0x257938u;
    // NOP
label_25793c:
    // 0x25793c: 0x0  nop
    ctx->pc = 0x25793cu;
    // NOP
label_257940:
    // 0x257940: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257940u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257944:
    // 0x257944: 0x0  nop
    ctx->pc = 0x257944u;
    // NOP
label_257948:
    // 0x257948: 0x0  nop
    ctx->pc = 0x257948u;
    // NOP
label_25794c:
    // 0x25794c: 0x0  nop
    ctx->pc = 0x25794cu;
    // NOP
label_257950:
    // 0x257950: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257950u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257954:
    // 0x257954: 0x0  nop
    ctx->pc = 0x257954u;
    // NOP
label_257958:
    // 0x257958: 0x0  nop
    ctx->pc = 0x257958u;
    // NOP
label_25795c:
    // 0x25795c: 0x0  nop
    ctx->pc = 0x25795cu;
    // NOP
label_257960:
    // 0x257960: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257960u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257964:
    // 0x257964: 0x0  nop
    ctx->pc = 0x257964u;
    // NOP
label_257968:
    // 0x257968: 0x0  nop
    ctx->pc = 0x257968u;
    // NOP
label_25796c:
    // 0x25796c: 0x0  nop
    ctx->pc = 0x25796cu;
    // NOP
label_257970:
    // 0x257970: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257970u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257974:
    // 0x257974: 0x0  nop
    ctx->pc = 0x257974u;
    // NOP
label_257978:
    // 0x257978: 0x0  nop
    ctx->pc = 0x257978u;
    // NOP
label_25797c:
    // 0x25797c: 0x0  nop
    ctx->pc = 0x25797cu;
    // NOP
label_257980:
    // 0x257980: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257980u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257984:
    // 0x257984: 0x0  nop
    ctx->pc = 0x257984u;
    // NOP
label_257988:
    // 0x257988: 0x0  nop
    ctx->pc = 0x257988u;
    // NOP
label_25798c:
    // 0x25798c: 0x0  nop
    ctx->pc = 0x25798cu;
    // NOP
label_257990:
    // 0x257990: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257990u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257994:
    // 0x257994: 0x0  nop
    ctx->pc = 0x257994u;
    // NOP
label_257998:
    // 0x257998: 0x0  nop
    ctx->pc = 0x257998u;
    // NOP
label_25799c:
    // 0x25799c: 0x0  nop
    ctx->pc = 0x25799cu;
    // NOP
label_2579a0:
    // 0x2579a0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2579a0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2579a4:
    // 0x2579a4: 0x0  nop
    ctx->pc = 0x2579a4u;
    // NOP
label_2579a8:
    // 0x2579a8: 0x0  nop
    ctx->pc = 0x2579a8u;
    // NOP
label_2579ac:
    // 0x2579ac: 0x0  nop
    ctx->pc = 0x2579acu;
    // NOP
label_2579b0:
    // 0x2579b0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2579b0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2579b4:
    // 0x2579b4: 0x0  nop
    ctx->pc = 0x2579b4u;
    // NOP
label_2579b8:
    // 0x2579b8: 0x0  nop
    ctx->pc = 0x2579b8u;
    // NOP
label_2579bc:
    // 0x2579bc: 0x0  nop
    ctx->pc = 0x2579bcu;
    // NOP
label_2579c0:
    // 0x2579c0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2579c0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2579c4:
    // 0x2579c4: 0x0  nop
    ctx->pc = 0x2579c4u;
    // NOP
label_2579c8:
    // 0x2579c8: 0x0  nop
    ctx->pc = 0x2579c8u;
    // NOP
label_2579cc:
    // 0x2579cc: 0x0  nop
    ctx->pc = 0x2579ccu;
    // NOP
label_2579d0:
    // 0x2579d0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2579d0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2579d4:
    // 0x2579d4: 0x0  nop
    ctx->pc = 0x2579d4u;
    // NOP
label_2579d8:
    // 0x2579d8: 0x0  nop
    ctx->pc = 0x2579d8u;
    // NOP
label_2579dc:
    // 0x2579dc: 0x0  nop
    ctx->pc = 0x2579dcu;
    // NOP
label_2579e0:
    // 0x2579e0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2579e0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2579e4:
    // 0x2579e4: 0x0  nop
    ctx->pc = 0x2579e4u;
    // NOP
label_2579e8:
    // 0x2579e8: 0x0  nop
    ctx->pc = 0x2579e8u;
    // NOP
label_2579ec:
    // 0x2579ec: 0x0  nop
    ctx->pc = 0x2579ecu;
    // NOP
label_2579f0:
    // 0x2579f0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2579f0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2579f4:
    // 0x2579f4: 0x0  nop
    ctx->pc = 0x2579f4u;
    // NOP
label_2579f8:
    // 0x2579f8: 0x0  nop
    ctx->pc = 0x2579f8u;
    // NOP
label_2579fc:
    // 0x2579fc: 0x0  nop
    ctx->pc = 0x2579fcu;
    // NOP
label_257a00:
    // 0x257a00: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257a00u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257a04:
    // 0x257a04: 0x0  nop
    ctx->pc = 0x257a04u;
    // NOP
label_257a08:
    // 0x257a08: 0x0  nop
    ctx->pc = 0x257a08u;
    // NOP
label_257a0c:
    // 0x257a0c: 0x0  nop
    ctx->pc = 0x257a0cu;
    // NOP
label_257a10:
    // 0x257a10: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257a10u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257a14:
    // 0x257a14: 0x0  nop
    ctx->pc = 0x257a14u;
    // NOP
label_257a18:
    // 0x257a18: 0x0  nop
    ctx->pc = 0x257a18u;
    // NOP
label_257a1c:
    // 0x257a1c: 0x0  nop
    ctx->pc = 0x257a1cu;
    // NOP
label_257a20:
    // 0x257a20: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257a20u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257a24:
    // 0x257a24: 0x0  nop
    ctx->pc = 0x257a24u;
    // NOP
label_257a28:
    // 0x257a28: 0x0  nop
    ctx->pc = 0x257a28u;
    // NOP
label_257a2c:
    // 0x257a2c: 0x0  nop
    ctx->pc = 0x257a2cu;
    // NOP
label_257a30:
    // 0x257a30: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257a30u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257a34:
    // 0x257a34: 0x0  nop
    ctx->pc = 0x257a34u;
    // NOP
label_257a38:
    // 0x257a38: 0x0  nop
    ctx->pc = 0x257a38u;
    // NOP
label_257a3c:
    // 0x257a3c: 0x0  nop
    ctx->pc = 0x257a3cu;
    // NOP
label_257a40:
    // 0x257a40: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257a40u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257a44:
    // 0x257a44: 0x0  nop
    ctx->pc = 0x257a44u;
    // NOP
label_257a48:
    // 0x257a48: 0x0  nop
    ctx->pc = 0x257a48u;
    // NOP
label_257a4c:
    // 0x257a4c: 0x0  nop
    ctx->pc = 0x257a4cu;
    // NOP
label_257a50:
    // 0x257a50: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257a50u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257a54:
    // 0x257a54: 0x0  nop
    ctx->pc = 0x257a54u;
    // NOP
label_257a58:
    // 0x257a58: 0x0  nop
    ctx->pc = 0x257a58u;
    // NOP
label_257a5c:
    // 0x257a5c: 0x0  nop
    ctx->pc = 0x257a5cu;
    // NOP
label_257a60:
    // 0x257a60: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257a60u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257a64:
    // 0x257a64: 0x0  nop
    ctx->pc = 0x257a64u;
    // NOP
label_257a68:
    // 0x257a68: 0x0  nop
    ctx->pc = 0x257a68u;
    // NOP
label_257a6c:
    // 0x257a6c: 0x0  nop
    ctx->pc = 0x257a6cu;
    // NOP
label_257a70:
    // 0x257a70: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257a70u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257a74:
    // 0x257a74: 0x0  nop
    ctx->pc = 0x257a74u;
    // NOP
label_257a78:
    // 0x257a78: 0x0  nop
    ctx->pc = 0x257a78u;
    // NOP
label_257a7c:
    // 0x257a7c: 0x0  nop
    ctx->pc = 0x257a7cu;
    // NOP
label_257a80:
    // 0x257a80: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257a80u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257a84:
    // 0x257a84: 0x0  nop
    ctx->pc = 0x257a84u;
    // NOP
label_257a88:
    // 0x257a88: 0x0  nop
    ctx->pc = 0x257a88u;
    // NOP
label_257a8c:
    // 0x257a8c: 0x0  nop
    ctx->pc = 0x257a8cu;
    // NOP
label_257a90:
    // 0x257a90: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257a90u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257a94:
    // 0x257a94: 0x0  nop
    ctx->pc = 0x257a94u;
    // NOP
label_257a98:
    // 0x257a98: 0x0  nop
    ctx->pc = 0x257a98u;
    // NOP
label_257a9c:
    // 0x257a9c: 0x0  nop
    ctx->pc = 0x257a9cu;
    // NOP
label_257aa0:
    // 0x257aa0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257aa0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257aa4:
    // 0x257aa4: 0x0  nop
    ctx->pc = 0x257aa4u;
    // NOP
label_257aa8:
    // 0x257aa8: 0x0  nop
    ctx->pc = 0x257aa8u;
    // NOP
label_257aac:
    // 0x257aac: 0x0  nop
    ctx->pc = 0x257aacu;
    // NOP
label_257ab0:
    // 0x257ab0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257ab0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257ab4:
    // 0x257ab4: 0x0  nop
    ctx->pc = 0x257ab4u;
    // NOP
label_257ab8:
    // 0x257ab8: 0x0  nop
    ctx->pc = 0x257ab8u;
    // NOP
label_257abc:
    // 0x257abc: 0x0  nop
    ctx->pc = 0x257abcu;
    // NOP
label_257ac0:
    // 0x257ac0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257ac0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257ac4:
    // 0x257ac4: 0x0  nop
    ctx->pc = 0x257ac4u;
    // NOP
label_257ac8:
    // 0x257ac8: 0x0  nop
    ctx->pc = 0x257ac8u;
    // NOP
label_257acc:
    // 0x257acc: 0x0  nop
    ctx->pc = 0x257accu;
    // NOP
label_257ad0:
    // 0x257ad0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257ad0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257ad4:
    // 0x257ad4: 0x0  nop
    ctx->pc = 0x257ad4u;
    // NOP
label_257ad8:
    // 0x257ad8: 0x0  nop
    ctx->pc = 0x257ad8u;
    // NOP
label_257adc:
    // 0x257adc: 0x0  nop
    ctx->pc = 0x257adcu;
    // NOP
label_257ae0:
    // 0x257ae0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257ae0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257ae4:
    // 0x257ae4: 0x0  nop
    ctx->pc = 0x257ae4u;
    // NOP
label_257ae8:
    // 0x257ae8: 0x0  nop
    ctx->pc = 0x257ae8u;
    // NOP
label_257aec:
    // 0x257aec: 0x0  nop
    ctx->pc = 0x257aecu;
    // NOP
label_257af0:
    // 0x257af0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257af0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257af4:
    // 0x257af4: 0x0  nop
    ctx->pc = 0x257af4u;
    // NOP
label_257af8:
    // 0x257af8: 0x0  nop
    ctx->pc = 0x257af8u;
    // NOP
label_257afc:
    // 0x257afc: 0x0  nop
    ctx->pc = 0x257afcu;
    // NOP
label_257b00:
    // 0x257b00: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257b00u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257b04:
    // 0x257b04: 0x0  nop
    ctx->pc = 0x257b04u;
    // NOP
label_257b08:
    // 0x257b08: 0x0  nop
    ctx->pc = 0x257b08u;
    // NOP
label_257b0c:
    // 0x257b0c: 0x0  nop
    ctx->pc = 0x257b0cu;
    // NOP
label_257b10:
    // 0x257b10: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257b10u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257b14:
    // 0x257b14: 0x0  nop
    ctx->pc = 0x257b14u;
    // NOP
label_257b18:
    // 0x257b18: 0x0  nop
    ctx->pc = 0x257b18u;
    // NOP
label_257b1c:
    // 0x257b1c: 0x0  nop
    ctx->pc = 0x257b1cu;
    // NOP
label_257b20:
    // 0x257b20: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257b20u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257b24:
    // 0x257b24: 0x0  nop
    ctx->pc = 0x257b24u;
    // NOP
label_257b28:
    // 0x257b28: 0x0  nop
    ctx->pc = 0x257b28u;
    // NOP
label_257b2c:
    // 0x257b2c: 0x0  nop
    ctx->pc = 0x257b2cu;
    // NOP
label_257b30:
    // 0x257b30: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257b30u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257b34:
    // 0x257b34: 0x0  nop
    ctx->pc = 0x257b34u;
    // NOP
label_257b38:
    // 0x257b38: 0x0  nop
    ctx->pc = 0x257b38u;
    // NOP
label_257b3c:
    // 0x257b3c: 0x0  nop
    ctx->pc = 0x257b3cu;
    // NOP
label_257b40:
    // 0x257b40: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257b40u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257b44:
    // 0x257b44: 0x0  nop
    ctx->pc = 0x257b44u;
    // NOP
label_257b48:
    // 0x257b48: 0x0  nop
    ctx->pc = 0x257b48u;
    // NOP
label_257b4c:
    // 0x257b4c: 0x0  nop
    ctx->pc = 0x257b4cu;
    // NOP
label_257b50:
    // 0x257b50: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257b50u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257b54:
    // 0x257b54: 0x0  nop
    ctx->pc = 0x257b54u;
    // NOP
label_257b58:
    // 0x257b58: 0x0  nop
    ctx->pc = 0x257b58u;
    // NOP
label_257b5c:
    // 0x257b5c: 0x0  nop
    ctx->pc = 0x257b5cu;
    // NOP
label_257b60:
    // 0x257b60: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257b60u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257b64:
    // 0x257b64: 0x0  nop
    ctx->pc = 0x257b64u;
    // NOP
label_257b68:
    // 0x257b68: 0x0  nop
    ctx->pc = 0x257b68u;
    // NOP
label_257b6c:
    // 0x257b6c: 0x0  nop
    ctx->pc = 0x257b6cu;
    // NOP
label_257b70:
    // 0x257b70: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257b70u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257b74:
    // 0x257b74: 0x0  nop
    ctx->pc = 0x257b74u;
    // NOP
label_257b78:
    // 0x257b78: 0x0  nop
    ctx->pc = 0x257b78u;
    // NOP
label_257b7c:
    // 0x257b7c: 0x0  nop
    ctx->pc = 0x257b7cu;
    // NOP
label_257b80:
    // 0x257b80: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257b80u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257b84:
    // 0x257b84: 0x0  nop
    ctx->pc = 0x257b84u;
    // NOP
label_257b88:
    // 0x257b88: 0x0  nop
    ctx->pc = 0x257b88u;
    // NOP
label_257b8c:
    // 0x257b8c: 0x0  nop
    ctx->pc = 0x257b8cu;
    // NOP
label_257b90:
    // 0x257b90: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257b90u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257b94:
    // 0x257b94: 0x0  nop
    ctx->pc = 0x257b94u;
    // NOP
label_257b98:
    // 0x257b98: 0x0  nop
    ctx->pc = 0x257b98u;
    // NOP
label_257b9c:
    // 0x257b9c: 0x0  nop
    ctx->pc = 0x257b9cu;
    // NOP
label_257ba0:
    // 0x257ba0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257ba0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257ba4:
    // 0x257ba4: 0x0  nop
    ctx->pc = 0x257ba4u;
    // NOP
label_257ba8:
    // 0x257ba8: 0x0  nop
    ctx->pc = 0x257ba8u;
    // NOP
label_257bac:
    // 0x257bac: 0x0  nop
    ctx->pc = 0x257bacu;
    // NOP
label_257bb0:
    // 0x257bb0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257bb0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257bb4:
    // 0x257bb4: 0x0  nop
    ctx->pc = 0x257bb4u;
    // NOP
label_257bb8:
    // 0x257bb8: 0x0  nop
    ctx->pc = 0x257bb8u;
    // NOP
label_257bbc:
    // 0x257bbc: 0x0  nop
    ctx->pc = 0x257bbcu;
    // NOP
label_257bc0:
    // 0x257bc0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257bc0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257bc4:
    // 0x257bc4: 0x0  nop
    ctx->pc = 0x257bc4u;
    // NOP
label_257bc8:
    // 0x257bc8: 0x0  nop
    ctx->pc = 0x257bc8u;
    // NOP
label_257bcc:
    // 0x257bcc: 0x0  nop
    ctx->pc = 0x257bccu;
    // NOP
label_257bd0:
    // 0x257bd0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257bd0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257bd4:
    // 0x257bd4: 0x0  nop
    ctx->pc = 0x257bd4u;
    // NOP
label_257bd8:
    // 0x257bd8: 0x0  nop
    ctx->pc = 0x257bd8u;
    // NOP
label_257bdc:
    // 0x257bdc: 0x0  nop
    ctx->pc = 0x257bdcu;
    // NOP
label_257be0:
    // 0x257be0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257be0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257be4:
    // 0x257be4: 0x0  nop
    ctx->pc = 0x257be4u;
    // NOP
label_257be8:
    // 0x257be8: 0x0  nop
    ctx->pc = 0x257be8u;
    // NOP
label_257bec:
    // 0x257bec: 0x0  nop
    ctx->pc = 0x257becu;
    // NOP
label_257bf0:
    // 0x257bf0: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257bf0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257bf4:
    // 0x257bf4: 0x0  nop
    ctx->pc = 0x257bf4u;
    // NOP
label_257bf8:
    // 0x257bf8: 0x0  nop
    ctx->pc = 0x257bf8u;
    // NOP
label_257bfc:
    // 0x257bfc: 0x0  nop
    ctx->pc = 0x257bfcu;
    // NOP
label_257c00:
    // 0x257c00: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257c00u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257c04:
    // 0x257c04: 0x0  nop
    ctx->pc = 0x257c04u;
    // NOP
label_257c08:
    // 0x257c08: 0x0  nop
    ctx->pc = 0x257c08u;
    // NOP
label_257c0c:
    // 0x257c0c: 0x0  nop
    ctx->pc = 0x257c0cu;
    // NOP
label_257c10:
    // 0x257c10: 0x1452  .word       0x00001452                   # mflo        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257c10u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_257c14:
    // 0x257c14: 0x0  nop
    ctx->pc = 0x257c14u;
    // NOP
    ctx->pc = 0x257c18u;
    return;
}
